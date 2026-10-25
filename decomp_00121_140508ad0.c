// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140508ad0 FUN_140508ad0 body=209 status=ok
// SIG undefined FUN_140508ad0(void)

void FUN_140508ad0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                     (*(longlong **)(param_1 + 0x10),local_18);
  plVar3 = (longlong *)plVar6[1];
  lVar4 = *plVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
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
  if (lVar4 != 0) {
    FUN_140518550(lVar4,param_1 + 0x18);
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
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140508bb0 FUN_140508bb0 body=199 status=ok
// SIG undefined FUN_140508bb0(void)

void FUN_140508bb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))
                     (*(longlong **)(param_1 + 0x10),local_18);
  plVar4 = (longlong *)plVar6[1];
  plVar6 = (longlong *)*plVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x110))(plVar6);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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



// FUNCTION 140508c80 FUN_140508c80 body=308 status=ok
// SIG undefined FUN_140508c80(void)

void FUN_140508c80(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined **local_28;
  undefined8 local_20;
  longlong *plStack_18;
  undefined8 local_10;
  
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                     (*(longlong **)(param_1 + 0x10),local_38);
  plVar3 = (longlong *)plVar5[1];
  lVar6 = *plVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (lVar6 != 0) {
    local_28 = &PTR_FUN_143f9a6c8;
    local_10 = *(undefined8 *)(param_1 + 0x18);
    local_20 = 0;
    plStack_18 = (longlong *)0x0;
    lVar6 = FUN_140511240(lVar6,&local_28);
    if (lVar6 != 0) {
      FUN_140506fd0(&local_28,lVar6);
    }
    local_28 = &PTR_FUN_143f73cd8;
    if (plStack_18 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (plStack_18 != (longlong *)0x0)) {
        (**(code **)(*plStack_18 + 8))(plStack_18,1);
      }
    }
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
  return;
}



// FUNCTION 140508dc0 FUN_140508dc0 body=290 status=ok
// SIG undefined FUN_140508dc0(void)

void FUN_140508dc0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined **local_28;
  undefined8 local_20;
  longlong *plStack_18;
  undefined8 local_10;
  
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                     (*(longlong **)(param_1 + 0x10),local_38);
  plVar3 = (longlong *)plVar6[1];
  lVar4 = *plVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (lVar4 != 0) {
    local_28 = &PTR_FUN_143f9a6c8;
    local_10 = *(undefined8 *)(param_1 + 0x18);
    local_20 = 0;
    plStack_18 = (longlong *)0x0;
    FUN_140511240(lVar4,&local_28);
    local_28 = &PTR_FUN_143f73cd8;
    if (plStack_18 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (plStack_18 != (longlong *)0x0)) {
        (**(code **)(*plStack_18 + 8))(plStack_18,1);
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
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140508ef0 FUN_140508ef0 body=263 status=ok
// SIG undefined FUN_140508ef0(void)

void FUN_140508ef0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                     (*(longlong **)(param_1 + 0x10),local_18);
  plVar3 = (longlong *)plVar6[1];
  lVar7 = *plVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (((lVar7 == 0) || (*(longlong *)(lVar7 + 0x2c8) == 0)) ||
     (*(int *)(*(longlong *)(lVar7 + 0x2c8) + 0x18) != 1)) {
    lVar7 = FUN_140511240(lVar7,param_1 + 0x18);
    if (lVar7 != 0) {
      cVar5 = FUN_1405070e0(param_1 + 0x18,lVar7);
      if (cVar5 != '\0') {
        FUN_140506fd0(param_1 + 0x18,lVar7);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  return;
}



// FUNCTION 140509000 FUN_140509000 body=220 status=ok
// SIG undefined FUN_140509000(void)

void FUN_140509000(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*plVar4 + 0xb8))(plVar4,local_18);
    plVar4 = (longlong *)plVar6[1];
    plVar6 = (longlong *)*plVar6;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
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
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6,*(undefined4 *)(param_1 + 0x18));
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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



// FUNCTION 140509110 FUN_140509110 body=2369 status=ok
// SIG undefined FUN_140509110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140509110(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  uint uVar18;
  uint *puVar19;
  longlong lVar20;
  longlong **pplVar21;
  undefined1 auStack_3c8 [32];
  undefined8 *local_3a8;
  undefined4 local_398;
  int local_394;
  int local_390 [2];
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  uint local_350;
  uint uStack_34c;
  uint *puStack_348;
  undefined4 local_340;
  undefined8 uStack_33c;
  undefined4 uStack_334;
  longlong local_330;
  longlong *local_328;
  longlong *local_320;
  longlong local_318;
  longlong *plStack_310;
  longlong *local_308;
  undefined8 uStack_300;
  uint *local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  int local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  undefined2 *local_2c8;
  int local_2c0;
  undefined1 local_2b8 [8];
  longlong local_2b0;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  longlong *local_298;
  undefined8 uStack_290;
  uint *puStack_288;
  undefined4 uStack_280;
  int iStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  longlong local_268 [2];
  uint local_258 [4];
  uint *local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 local_234;
  longlong local_228;
  undefined4 local_220;
  longlong local_218 [16];
  longlong *local_198;
  longlong *local_190;
  int local_188;
  longlong local_178 [16];
  longlong *local_f8;
  longlong *local_f0;
  int local_e8;
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  local_330 = param_1;
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                     (*(longlong **)(param_1 + 0x10),local_2a8);
  plVar12 = (longlong *)plVar6[1];
  local_380 = *plVar6;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_328 = plVar12;
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2a0 + 1;
    lVar13 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_2a0)(local_2a0);
      LOCK();
      piVar1 = (int *)((longlong)local_2a0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_2a0 + 8))(local_2a0,1);
      }
    }
  }
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_14051ff60(local_380,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    local_388 = FUN_140511190();
    if (local_388 != 0) {
      puVar7 = (undefined8 *)
               SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760);
      lVar13 = *(longlong *)(param_1 + 0x28);
      local_320 = (longlong *)*puVar7;
      local_378 = lVar13;
      plVar8 = (longlong *)operator_new(0x48);
      plVar17 = (longlong *)0x0;
      plVar6 = plVar17;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_143f9a7a8;
        plVar8[1] = 0;
        plVar8[2] = 0;
        plVar8[3] = 0;
        plVar8[4] = 0;
        plVar8[6] = 0;
        plVar8[7] = 0;
        plVar8[5] = (longlong)&PTR_FUN_143f9a6c8;
        plVar8[8] = lVar13;
        plVar6 = plVar8;
      }
      local_318 = 0;
      plStack_310 = (longlong *)0x0;
      if (plVar6 + 1 != &local_318) {
        plVar6[1] = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(plVar6 + 2,&plStack_310);
        plVar8 = plStack_310;
        if (plStack_310 != (longlong *)0x0) {
          LOCK();
          plVar10 = plStack_310 + 1;
          lVar13 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_310)(plStack_310);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_310 + 8))(plStack_310,1);
            }
          }
        }
      }
      local_398 = 0;
      uVar9 = FCommandLine::Get();
      cVar4 = FParse::Value(uVar9,L"Port=",&local_398);
      if (cVar4 == '\0') {
        local_3a8 = &DAT_1468e2360;
        FConfigCacheIni::GetInt(DAT_1468b6148,&DAT_143f8b400,L"Port",&local_398);
      }
      plVar10 = (longlong *)operator_new(0x30);
      plVar8 = plVar17;
      if (plVar10 != (longlong *)0x0) {
        puVar7 = (undefined8 *)
                 SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
        plVar8 = (longlong *)
                 (**(code **)(*(longlong *)*puVar7 + 0x10))((longlong *)*puVar7,local_2b8);
        local_2b0 = *plVar8;
        *plVar10 = (longlong)&PTR_FUN_143f9a840;
        plVar10[2] = 0;
        plVar10[3] = 0;
        plVar10[1] = (longlong)&PTR_FUN_143f9a6c8;
        plVar10[4] = local_2b0;
        *(undefined2 *)(plVar10 + 5) = 0;
        plVar8 = plVar10;
      }
      (**(code **)(*plVar8 + 0x30))(plVar8,local_398);
      plVar11 = (longlong *)operator_new(0x18);
      plVar10 = plVar17;
      if (plVar11 != (longlong *)0x0) {
        *(undefined4 *)(plVar11 + 1) = 1;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_143f3f2e0;
        plVar11[2] = (longlong)plVar8;
        plVar10 = plVar11;
      }
      local_370 = plVar8;
      local_368 = plVar10;
      SharedPointerInternals::EnableSharedFromThis(&local_370,plVar8,plVar8);
      if ((longlong **)(plVar6 + 3) != &local_370) {
        plVar6[3] = (longlong)plVar8;
        local_370 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(plVar6 + 4,&local_368);
        plVar10 = local_368;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar10 + 1;
        lVar13 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      plVar10 = (longlong *)operator_new(0x18);
      lVar13 = local_388;
      plVar8 = plVar17;
      if (plVar10 != (longlong *)0x0) {
        *(undefined4 *)(plVar10 + 1) = 1;
        *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
        *plVar10 = (longlong)&PTR_FUN_143f3f2d0;
        plVar10[2] = (longlong)plVar6;
        plVar8 = plVar10;
      }
      pplVar21 = (longlong **)(local_388 + 0xa0);
      local_360 = plVar6;
      local_358 = plVar8;
      SharedPointerInternals::EnableSharedFromThis(&local_360,plVar6,plVar6);
      if (pplVar21 != &local_360) {
        *pplVar21 = plVar6;
        local_360 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar13 + 0xa8,&local_358);
        plVar8 = local_358;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        lVar13 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
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
      lVar13 = local_388;
      local_268[0] = 0;
      local_268[1] = 0;
      local_248 = (uint *)0x0;
      *(undefined4 *)(local_388 + 0x110) = 2;
      local_240 = 0;
      local_238 = 0xffffffff;
      local_234 = 0;
      local_228 = 0;
      local_220 = 0;
      FUN_140510340(local_388,local_268);
      puStack_348 = local_258;
      local_350 = 0;
      uVar18 = 0;
      uStack_34c = 1;
      uStack_33c = 0;
      if ((int)local_240 != 0) {
        puVar19 = local_258;
        if (local_248 != (uint *)0x0) {
          puVar19 = local_248;
        }
        uVar2 = *puVar19;
        plVar6 = plVar17;
        plVar8 = plVar17;
        while (uVar2 == 0) {
          iVar5 = (int)plVar6;
          uVar18 = (int)plVar8 + 0x20;
          plVar8 = (longlong *)(ulonglong)uVar18;
          local_350 = iVar5 + 1;
          plVar6 = (longlong *)(ulonglong)local_350;
          uStack_33c = (ulonglong)uVar18 << 0x20;
          if ((int)((int)local_240 + -1 + ((int)local_240 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) {
            uStack_33c = CONCAT44(uVar18,(int)local_240);
            goto LAB_1405095ec;
          }
          uVar2 = puVar19[(longlong)iVar5 + 1];
        }
        uStack_34c = -uVar2 & uVar2;
        local_2e0 = 0x1f;
        if (uStack_34c != 0) {
          for (; uStack_34c >> local_2e0 == 0; local_2e0 = local_2e0 + -1) {
          }
        }
        if (uStack_34c == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - local_2e0;
        }
        iVar5 = (uVar18 - iVar5) + 0x1f;
        if ((int)local_240 < iVar5) {
          iVar5 = (int)local_240;
        }
        uStack_33c._4_4_ = (undefined4)((ulonglong)uStack_33c >> 0x20);
        uStack_33c = CONCAT44(uStack_33c._4_4_,iVar5);
      }
LAB_1405095ec:
      local_340 = 0xffffffff;
      local_308 = local_268;
      uStack_300 = CONCAT44(uStack_34c,local_350);
      uStack_280 = 0xffffffff;
      iStack_27c = (int)uStack_33c;
      uStack_278 = uStack_33c._4_4_;
      uStack_274 = uStack_334;
      uStack_2f0 = CONCAT44((int)uStack_33c,0xffffffff);
      local_2e8 = uStack_33c._4_4_;
      uStack_2e4 = uStack_334;
      lVar20 = param_1;
      plVar6 = local_320;
      iVar5 = (int)uStack_33c;
      local_2f8 = puStack_348;
      local_298 = local_308;
      uStack_290 = uStack_300;
      puStack_288 = puStack_348;
      if ((int)uStack_33c < (int)local_240) {
        do {
          lVar13 = (longlong)iVar5 * 0x28;
          if (*(int *)(*local_308 + 0x18 + lVar13) == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = *(undefined2 **)(*local_308 + 0x10 + lVar13);
          }
          local_f8 = (longlong *)0x0;
          if (puVar16 == (undefined2 *)0x0) {
            local_f0 = (longlong *)0x0;
            local_e8 = 0;
          }
          else {
            uVar14 = 0xffffffffffffffff;
            do {
              uVar15 = uVar14;
              uVar14 = uVar15 + 1;
            } while (puVar16[uVar14] != 0);
            local_394 = 0;
            FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                      (&local_394,(int)uVar14 * 4,puVar16,uVar14 & 0xffffffff);
            local_e8 = local_394;
            uVar18 = local_394 + 1;
            plVar12 = plVar17;
            if ((0x80 < uVar18) && (uVar18 != 0)) {
              plVar12 = (longlong *)FMemory::Realloc(0,(longlong)(int)uVar18,0);
              local_f8 = plVar12;
            }
            local_2d8 = local_178;
            if (plVar12 != (longlong *)0x0) {
              local_2d8 = plVar12;
            }
            local_f0 = local_2d8;
            FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_2d8,uVar18,puVar16,(int)uVar15 + 2);
          }
          plVar12 = local_f0;
          if (*(int *)(*local_308 + 8 + lVar13) == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = *(undefined2 **)(*local_308 + lVar13);
          }
          local_198 = (longlong *)0x0;
          if (puVar16 == (undefined2 *)0x0) {
            local_190 = (longlong *)0x0;
            local_188 = 0;
          }
          else {
            uVar14 = 0xffffffffffffffff;
            do {
              uVar15 = uVar14;
              uVar14 = uVar15 + 1;
            } while (puVar16[uVar14] != 0);
            local_390[0] = 0;
            FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                      (local_390,(int)uVar14 * 4,puVar16,uVar14 & 0xffffffff);
            local_188 = local_390[0];
            uVar18 = local_390[0] + 1;
            plVar6 = plVar17;
            if ((0x80 < uVar18) && (uVar18 != 0)) {
              plVar6 = (longlong *)FMemory::Realloc(0,(longlong)(int)uVar18,0);
              local_198 = plVar6;
            }
            local_2d0 = local_218;
            if (plVar6 != (longlong *)0x0) {
              local_2d0 = plVar6;
            }
            local_190 = local_2d0;
            FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_2d0,uVar18,puVar16,(int)uVar15 + 2);
          }
          plVar6 = local_320;
          cVar4 = (**(code **)(*local_320 + 0xa0))(local_320,local_378,local_190,plVar12);
          if (local_198 != (longlong *)0x0) {
            FMemory::Free();
          }
          if (local_f8 != (longlong *)0x0) {
            FMemory::Free();
          }
          if (cVar4 == '\0') {
            *(undefined1 *)(local_330 + 0x19) = 0;
            lVar13 = local_388;
            plVar12 = local_328;
            lVar20 = local_330;
            break;
          }
          uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(uint)uStack_2f0 & ~uStack_300._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_300);
          lVar13 = local_388;
          plVar12 = local_328;
          lVar20 = local_330;
          iVar5 = uStack_2f0._4_4_;
        } while (uStack_2f0._4_4_ < (int)local_2f8[6]);
      }
      lVar3 = local_380;
      if (*(char *)(lVar20 + 0x19) == '\0') {
        *(undefined1 *)(lVar20 + 0x19) = 0;
        (**(code **)(*plVar6 + 0x78))(plVar6,local_378);
        FUN_14051ff60(local_380,*(undefined8 *)(lVar20 + 0x30));
      }
      else {
        FUN_14051ed00(local_380,lVar13);
        FUN_1404af0e0(lVar13);
        if ((DAT_146853160 != '\0') && (*(char *)(lVar3 + 0x2fc) != '\x01')) {
          *(undefined1 *)(lVar3 + 0x2fc) = 1;
          FUN_140515430();
        }
        if (*(char *)(lVar13 + 0x3e) != '\0') {
          FString::PrintfImpl(&local_2c8,L"%llu",local_378);
          if (*(longlong *)(lVar3 + 0x370) != 0) {
            puVar16 = &DAT_143f3eda8;
            if (local_2c0 != 0) {
              puVar16 = local_2c8;
            }
            lVar13 = TStringConversion<FTCHARToUTF8_Convert,128>::
                     TStringConversion<FTCHARToUTF8_Convert,128>(local_d8,puVar16);
            (**(code **)(**(longlong **)(lVar3 + 0x370) + 0x158))
                      (*(longlong **)(lVar3 + 0x370),"steam_player_group",
                       *(undefined8 *)(lVar13 + 0x88));
            if (local_58 != 0) {
              FMemory::Free();
            }
          }
          if (local_2c8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
      }
      local_220 = 0;
      if (local_228 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(local_268,0);
      if (local_248 != (uint *)0x0) {
        FMemory::Free();
      }
      if (local_268[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar12 + 1;
    lVar13 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 140509a60 FUN_140509a60 body=597 status=ok
// SIG undefined FUN_140509a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140509a60(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  longlong *plStack_58;
  ulonglong local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  puVar10 = (undefined8 *)0x0;
  if ((*(char *)(param_1 + 0x19) != '\0') && (puVar9 = puVar10, 0 < *(int *)(param_1 + 0x40))) {
    do {
      puVar5 = (ulonglong *)
               (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))
                         (*(longlong **)(param_1 + 0x38),local_48,puVar9);
      local_68 = &PTR_FUN_143f9a6c8;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      uVar2 = *puVar5;
      local_50 = uVar2;
      local_40 = uVar2;
      if (uVar2 != 0) {
        uVar12 = (uint)(uVar2 >> 0x20);
        if (((((uVar2 & 0xf0000000000000) != 0) && ((uVar12 & 0xf00000) < 0xb00000)) &&
            (((int)uVar12 >> 0x18) - 1U < 4)) &&
           ((iVar11 = (int)uVar2, (uVar12 & 0xf00000) != 0x100000 ||
            ((iVar11 != 0 && ((uVar12 & 0xfffff) == 1)))))) {
          uVar4 = uVar12 >> 0x14 & 0xf;
          if (((uVar4 != 7) || ((iVar11 != 0 && ((uVar2 >> 0x20 & 0xfffff) == 0)))) &&
             (((uVar4 != 3 || (iVar11 != 0)) &&
              (((uVar12 & 0xf00000) == 0x800000 && ((uVar12 >> 0x12 & 1) != 0)))))) {
            puVar6 = (undefined8 *)
                     SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
            plVar7 = (longlong *)
                     (**(code **)(*(longlong *)*puVar6 + 0x10))((longlong *)*puVar6,local_38);
            plVar8 = (longlong *)
                     (**(code **)(**(longlong **)(param_1 + 0x38) + 0x118))
                               (*(longlong **)(param_1 + 0x38),local_30,uVar2);
            if ((*plVar8 != *plVar7) &&
               (FUN_14051aaf0(param_1,&local_68), plStack_58 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)plStack_58 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plStack_58 + 8))(plStack_58,1);
              }
            }
          }
        }
      }
      uVar12 = (int)puVar9 + 1;
      puVar9 = (undefined8 *)(ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(param_1 + 0x40));
  }
  puVar9 = (undefined8 *)operator_new(0x60);
  if (puVar9 != (undefined8 *)0x0) {
    FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar9,*(undefined8 *)(param_1 + 0x10),0);
    *puVar9 = &PTR_FUN_143f9b678;
    puVar9[5] = *(undefined8 *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x30);
    puVar9[6] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    puVar10 = (undefined8 *)
              SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760);
    puVar9[7] = *puVar10;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    *(undefined1 *)(puVar9 + 0xb) = 0;
    puVar10 = puVar9;
  }
  FOnlineAsyncTaskManager::AddToInQueue
            (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x148),puVar10);
  return;
}



// FUNCTION 140509cc0 FUN_140509cc0 body=91 status=ok
// SIG undefined FUN_140509cc0(void)

void FUN_140509cc0(longlong param_1)

{
  char cVar1;
  undefined **local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x19) == '\0') {
    *(undefined4 *)(param_1 + 0x50) = 8;
  }
  else {
    local_10 = *(undefined8 *)(param_1 + 0x28);
    local_28 = &PTR_FUN_143f9a6c8;
    local_20 = 0;
    uStack_18 = 0;
    cVar1 = FUN_1405070e0(&local_28,param_1 + 0x58);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x50) = 1;
      return;
    }
  }
  return;
}



// FUNCTION 140509d20 FUN_140509d20 body=314 status=ok
// SIG undefined FUN_140509d20(void)

void FUN_140509d20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  longlong local_18 [2];
  
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                     (*(longlong **)(param_1 + 0x10),local_28);
  plVar3 = (longlong *)plVar5[1];
  lVar4 = *plVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if ((lVar4 != 0) && (*(char *)(param_1 + 0x19) != '\0')) {
    lVar6 = FUN_140511190(lVar4,*(undefined8 *)(param_1 + 0x28));
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x110) = 2;
      FUN_14051ed00(lVar4,lVar6);
      if (*(char *)(lVar6 + 0x3e) != '\0') {
        uVar7 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30,local_18);
        FUN_140521ed0(lVar4,uVar7);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_14051ff60(lVar4,*(undefined8 *)(param_1 + 0x28));
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 140509e60 FUN_140509e60 body=385 status=ok
// SIG undefined FUN_140509e60(void)

void FUN_140509e60(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar7 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                     (*(longlong **)(param_1 + 0x10),local_18);
  plVar4 = (longlong *)plVar7[1];
  lVar5 = *plVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  (**(code **)(*(longlong *)(lVar5 + 0x2d8) + 0x10))((longlong *)(lVar5 + 0x2d8),param_1 + 0x40);
  plVar7 = *(longlong **)(param_1 + 0x28);
  if (0 < (int)plVar7[2]) {
    (**(code **)(*plVar7 + 8))();
    plVar7 = *(longlong **)(param_1 + 0x28);
  }
  if ((int)plVar7[3] == 1) {
    *(uint *)(plVar7 + 3) = 3 - (uint)(*(char *)(param_1 + 0x19) != '\0');
    plVar7 = (longlong *)(lVar5 + 0x2c8);
    if (((*plVar7 != 0) && (*(longlong *)(param_1 + 0x28) == *plVar7)) &&
       (local_20 = (longlong *)0x0, plVar7 != &local_28)) {
      *plVar7 = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar5 + 0x2d0,&local_20);
      plVar7 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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



// FUNCTION 140509ff0 FUN_140509ff0 body=220 status=ok
// SIG undefined FUN_140509ff0(void)

ulonglong FUN_140509ff0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar7 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                     (*(longlong **)(param_1 + 0x10),local_28);
  plVar4 = (longlong *)plVar7[1];
  lVar5 = *plVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)();
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
  puVar9 = (uint *)(plVar4 + 1);
  uVar8 = (ulonglong)(byte)-*(char *)(param_1 + 0x19);
  *(uint *)(lVar5 + 0x20) = 3 - (uint)(*(char *)(param_1 + 0x19) != '\0');
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    uVar3 = *puVar9;
    uVar8 = (ulonglong)uVar3;
    *puVar9 = *puVar9 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      uVar8 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        uVar8 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 14050a0d0 FUN_14050a0d0 body=282 status=ok
// SIG undefined FUN_14050a0d0(void)

void FUN_14050a0d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
              (*(longlong *)(param_1 + 0x28) + 0x108,0);
    lVar4 = *(longlong *)(param_1 + 0x28);
    plVar11 = (longlong *)(lVar4 + 0x108);
    if (plVar11 != (longlong *)(param_1 + 0x40)) {
      iVar9 = *(int *)(lVar4 + 0x110);
      if (iVar9 != 0) {
        plVar10 = (longlong *)(*plVar11 + 8);
        do {
          plVar5 = (longlong *)*plVar10;
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
          plVar10 = plVar10 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar9 = *(int *)(param_1 + 0x48);
      puVar8 = *(undefined8 **)(param_1 + 0x40);
      *(int *)(lVar4 + 0x110) = iVar9;
      if ((iVar9 == 0) && (*(int *)(lVar4 + 0x114) == 0)) {
        *(undefined4 *)(lVar4 + 0x114) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar11,iVar9);
        puVar7 = (undefined8 *)*plVar11;
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar7 = *puVar8;
          lVar4 = puVar8[1];
          puVar7[1] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          puVar7 = puVar7 + 2;
          puVar8 = puVar8 + 2;
        }
      }
    }
  }
  return;
}



// FUNCTION 14050a1f0 FUN_14050a1f0 body=1058 status=ok
// SIG undefined FUN_14050a1f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014050a2c5) */
/* WARNING: Removing unreachable block (ram,0x00014050a2d4) */
/* WARNING: Removing unreachable block (ram,0x00014050a2ef) */
/* WARNING: Removing unreachable block (ram,0x00014050a2fe) */

void FUN_14050a1f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  short *psVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *_Str1;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  char local_1e8 [8];
  longlong local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8 [2];
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 local_158 [256];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  puVar11 = *(undefined8 **)(param_1 + 0x40);
  local_178 = puVar11 + (longlong)*(int *)(param_1 + 0x48) * 3;
  local_1e0 = param_1;
  if (puVar11 != local_178) {
    do {
      local_1c8 = *puVar11;
      plStack_1c0 = (longlong *)puVar11[1];
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
        UNLOCK();
      }
      local_198._0_4_ = (undefined4)local_1c8;
      local_198._4_4_ = (undefined4)((ulonglong)local_1c8 >> 0x20);
      uStack_190._0_4_ = SUB84(plStack_1c0,0);
      uStack_190._4_4_ = (undefined4)((ulonglong)plStack_1c0 >> 0x20);
      uStack_164 = uStack_190._4_4_;
      uStack_168 = (undefined4)uStack_190;
      uStack_16c = local_198._4_4_;
      local_170 = (undefined4)local_198;
      uStack_190 = 0;
      local_198 = 0;
      local_1a8[1] = 0;
      local_1a8[0] = 0;
      local_1b0 = 0;
      local_1b8 = 0;
      plVar2 = (longlong *)puVar11[1];
      plVar3 = (longlong *)*puVar11;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      lVar9 = *(longlong *)(param_1 + 0x28);
      lVar12 = 0;
      iVar10 = 0;
      local_188 = 0;
      uVar13 = 0;
      local_180 = 0;
      if (*(longlong *)(lVar9 + 0x110) != 0) {
        if (*(char *)(*(longlong *)(lVar9 + 0x110) + 0x70) == '\0') {
          local_1f8 = &DAT_1468e2360;
          local_1e8[0] = '\x01';
          FConfigCacheIni::GetBool(DAT_1468b6148,L"OnlineSubsystemSteam",L"bEnabled",local_1e8);
          if (local_1e8[0] != '\0') {
            uVar7 = FCommandLine::Get();
            cVar5 = FParse::Param(uVar7,L"MultiprocessOSS");
            local_1e8[0] = cVar5 == '\0';
            if (cVar5 == '\0') goto LAB_14050a39d;
          }
        }
        else {
LAB_14050a39d:
          if (*(longlong *)(lVar9 + 0x140) != 0) {
            puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
            _Str1 = (char *)(**(code **)(**(longlong **)(lVar9 + 0x140) + 0x38))
                                      (*(longlong **)(lVar9 + 0x140),*puVar8);
            if ((_Str1 != (char *)0x0) &&
               (iVar6 = _guard_xfg_dispatch_icall_nop(_Str1,"[unknown]"), iVar6 != 0)) {
              lVar9 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                      TStringConversion<FUTF8ToTCHAR_Convert,128>(local_158,_Str1);
              local_1d8 = 0;
              psVar4 = *(short **)(lVar9 + 0x108);
              iVar10 = 0;
              if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
                lVar9 = -1;
                do {
                  lVar12 = lVar9 + 1;
                  lVar9 = lVar9 + 1;
                } while (psVar4[lVar12] != 0);
                local_1d0._0_4_ = (int)lVar9 + 1;
                lVar9 = (longlong)(int)local_1d0;
                local_1d0._4_4_ = 0;
                if (0 < (int)local_1d0) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
                }
                uVar13 = local_1d0._4_4_;
                iVar10 = (int)local_1d0;
                lVar12 = local_1d8;
                FGenericPlatformString::Memcpy(local_1d8,psVar4,lVar9 * 2);
              }
              local_1d8 = 0;
              local_180 = CONCAT44(uVar13,iVar10);
              local_1d0 = 0;
              local_188 = lVar12;
              if (local_58 != 0) {
                FMemory::Free();
              }
            }
          }
        }
      }
      if (local_1b8 != 0) {
        FMemory::Free();
      }
      local_1b0 = CONCAT44(uVar13,iVar10);
      local_1b8 = lVar12;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar2 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      param_1 = local_1e0;
      iVar10 = *(int *)(local_1e0 + 0x58);
      *(int *)(local_1e0 + 0x58) = iVar10 + 1;
      if (*(int *)(local_1e0 + 0x5c) < iVar10 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(local_1e0 + 0x50,iVar10);
      }
      puVar8 = (undefined8 *)((longlong)iVar10 * 0x30 + *(longlong *)(param_1 + 0x50));
      *puVar8 = local_1c8;
      puVar8[1] = plStack_1c0;
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
        UNLOCK();
      }
      FString::FString(puVar8 + 2,&local_1b8);
      FString::FString(puVar8 + 4,local_1a8);
      if (local_1a8[0] != 0) {
        FMemory::Free();
      }
      if (local_1b8 != 0) {
        FMemory::Free();
      }
      plVar2 = plStack_1c0;
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_1c0 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_1c0)(plStack_1c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plStack_1c0 + 8))(plStack_1c0,1);
          }
        }
      }
      puVar11 = puVar11 + 3;
    } while (puVar11 != local_178);
  }
  return;
}



// FUNCTION 14050a620 FUN_14050a620 body=494 status=ok
// SIG undefined FUN_14050a620(void)

void FUN_14050a620(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,1);
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar4 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(*plVar4 + 0xa8))(plVar4,local_38);
    plVar4 = (longlong *)plVar8[1];
    lVar5 = *plVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_30 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (lVar5 != 0) {
      if (*(char *)(param_1 + 0x19) == '\0') {
        *(undefined4 *)(lVar5 + 0x140) = 3;
      }
      else {
        plVar8 = (longlong *)(lVar5 + 0x148);
        if (plVar8 != (longlong *)(param_1 + 0x30)) {
          iVar12 = *(int *)(lVar5 + 0x150);
          if (iVar12 != 0) {
            plVar11 = (longlong *)(*plVar8 + 8);
            do {
              plVar6 = (longlong *)*plVar11;
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar6 + 1;
                lVar7 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
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
              plVar11 = plVar11 + 2;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          iVar12 = *(int *)(param_1 + 0x38);
          puVar10 = *(undefined8 **)(param_1 + 0x30);
          *(int *)(lVar5 + 0x150) = iVar12;
          if ((iVar12 == 0) && (*(int *)(lVar5 + 0x154) == 0)) {
            *(undefined4 *)(lVar5 + 0x154) = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar8,iVar12);
            puVar9 = (undefined8 *)*plVar8;
            for (; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar9 = *puVar10;
              lVar7 = puVar10[1];
              puVar9[1] = lVar7;
              if (lVar7 != 0) {
                LOCK();
                *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
                UNLOCK();
              }
              puVar9 = puVar9 + 2;
              puVar10 = puVar10 + 2;
            }
          }
        }
        *(undefined4 *)(lVar5 + 0x140) = 2;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar4 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14050a810 FUN_14050a810 body=63 status=ok
// SIG undefined FUN_14050a810(void)

void FUN_14050a810(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
              (*(longlong *)(param_1 + 0x28) + 0xf0,0);
    TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
              (*(longlong *)(param_1 + 0x28) + 0xf0,param_1 + 0x40);
    return;
  }
  return;
}



// FUNCTION 14050a870 FUN_14050a870 body=1045 status=ok
// SIG undefined FUN_14050a870(void)

void FUN_14050a870(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  short *psVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  uint uVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar8 = *(longlong *)(param_1 + 0x48);
  plVar11 = (longlong *)(lVar8 + 0x120);
  if (plVar11 != (longlong *)(param_1 + 0x38)) {
    iVar17 = *(int *)(lVar8 + 0x128);
    if (iVar17 != 0) {
      plVar15 = (longlong *)(*plVar11 + 8);
      do {
        plVar4 = (longlong *)*plVar15;
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
        plVar15 = plVar15 + 2;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    iVar17 = *(int *)(param_1 + 0x40);
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    *(int *)(lVar8 + 0x128) = iVar17;
    if ((iVar17 == 0) && (*(int *)(lVar8 + 300) == 0)) {
      *(undefined4 *)(lVar8 + 300) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar11,iVar17);
      puVar10 = (undefined8 *)*plVar11;
      for (; iVar17 != 0; iVar17 = iVar17 + -1) {
        *puVar10 = *puVar7;
        lVar8 = puVar7[1];
        puVar10[1] = lVar8;
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
        }
        puVar10 = puVar10 + 2;
        puVar7 = puVar7 + 2;
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x48);
  uVar12 = 0;
  uVar18 = uVar12;
  if (0 < *(int *)(lVar8 + 0x128)) {
    do {
      puVar13 = (undefined2 *)0x0;
      local_68 = (undefined2 *)0x0;
      puVar7 = *(undefined8 **)(uVar18 + *(longlong *)(lVar8 + 0x120));
      local_60 = *(int *)(puVar7 + 1);
      lVar8 = (longlong)local_60;
      pvVar5 = (void *)*puVar7;
      if (local_60 == 0) {
        local_5c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
        puVar13 = local_68;
        _guard_xfg_dispatch_icall_nop(local_68,pvVar5,lVar8 * 2);
      }
      local_58 = 0;
      local_50 = 0;
      puVar16 = &DAT_143f3eda8;
      if (local_60 != 0) {
        puVar16 = puVar13;
      }
      FConfigCacheIni::GetString
                (DAT_1468b6148,L"SteamMarketplaceOffers",puVar16,&local_58,&DAT_1468e2360);
      if (1 < (int)local_50) {
        local_98 = (longlong *)0x0;
        local_90 = 0;
        FUN_141594550(&local_58,&local_98,&DAT_143f7eeac,1);
        if ((int)local_90 == 2) {
          FText::FText(local_48);
          if ((int)local_98[3] == 0) {
            psVar9 = &DAT_143f3eda8;
          }
          else {
            psVar9 = (short *)local_98[2];
          }
          local_70 = 0;
          local_78 = 0;
          if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
            lVar8 = -1;
            do {
              lVar6 = lVar8 + 1;
              lVar8 = lVar8 + 1;
            } while (psVar9[lVar6] != 0);
            uVar14 = (int)lVar8 + 1;
            local_70 = (ulonglong)uVar14;
            if (0 < (int)uVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
            }
            FGenericPlatformString::Memcpy(local_78,psVar9,(longlong)(int)uVar14 * 2);
          }
          if ((int)local_98[1] == 0) {
            psVar9 = &DAT_143f3eda8;
          }
          else {
            psVar9 = (short *)*local_98;
          }
          local_80 = 0;
          local_88 = 0;
          if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
            lVar8 = -1;
            do {
              lVar6 = lVar8 + 1;
              lVar8 = lVar8 + 1;
            } while (psVar9[lVar6] != 0);
            uVar14 = (int)lVar8 + 1;
            local_80 = (ulonglong)uVar14;
            if (0 < (int)uVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
            }
            FGenericPlatformString::Memcpy(local_88,psVar9,(longlong)(int)uVar14 * 2);
          }
          FUN_141606040(&local_88,&local_78,local_48,0);
          if (local_88 != 0) {
            FMemory::Free();
          }
          if (local_78 != 0) {
            FMemory::Free();
          }
          lVar8 = *(longlong *)(uVar18 + *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x120));
          puVar7 = (undefined8 *)FText::ToString(local_48);
          puVar10 = (undefined8 *)(lVar8 + 0x20);
          if (puVar10 != puVar7) {
            iVar17 = *(int *)(puVar7 + 1);
            pvVar5 = (void *)*puVar7;
            *(int *)(lVar8 + 0x28) = iVar17;
            if ((iVar17 == 0) && (*(int *)(lVar8 + 0x2c) == 0)) {
              *(undefined4 *)(lVar8 + 0x2c) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar10,iVar17);
              _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar5,(longlong)iVar17 * 2);
            }
          }
          plVar11 = local_40;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_40 + 1;
            lVar8 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            puVar13 = local_68;
            if ((int)lVar8 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              iVar17 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              puVar13 = local_68;
              if (iVar17 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
                puVar13 = local_68;
              }
            }
          }
        }
        plVar11 = local_98;
        for (iVar17 = (int)local_90; iVar17 != 0; iVar17 = iVar17 + -1) {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free(local_98);
        }
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (puVar13 != (undefined2 *)0x0) {
        FMemory::Free(puVar13);
      }
      lVar8 = *(longlong *)(param_1 + 0x48);
      uVar14 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar14;
      uVar18 = uVar18 + 0x10;
    } while ((int)uVar14 < *(int *)(lVar8 + 0x128));
  }
  *(undefined4 *)(lVar8 + 0x118) = 2;
  return;
}



// FUNCTION 14050ac90 FUN_14050ac90 body=442 status=ok
// SIG undefined FUN_14050ac90(void)

void FUN_14050ac90(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  longlong lVar3;
  BOOL BVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar7 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))
                     (*(longlong **)(param_1 + 0x10),local_38);
  plVar2 = (longlong *)plVar7[1];
  lVar8 = *plVar7;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar8 + 0x40);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar8 = FUN_140510190(lVar8,param_1 + 0x30);
  if (*(char *)(param_1 + 0x19) == '\0') {
    *(undefined8 *)(lVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined4 *)(lVar8 + 0x10) = 0;
    uVar5 = 3;
  }
  else {
    puVar9 = (undefined8 *)
             SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8);
    plVar7 = (longlong *)*puVar9;
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(param_1 + 0x40);
    uVar5 = (**(code **)(*plVar7 + 200))(plVar7,*(undefined8 *)(param_1 + 0x40));
    *(undefined4 *)(lVar8 + 0x10) = uVar5;
    iVar6 = (**(code **)(*plVar7 + 0xd8))(plVar7,*(undefined8 *)(param_1 + 0x40));
    uVar10 = 0;
    uVar5 = 2;
    uVar11 = 2;
    if (iVar6 == 2) {
      uVar11 = 1;
    }
    else if (iVar6 != 3) {
      uVar11 = 0;
    }
    *(undefined4 *)(lVar8 + 0xc) = uVar11;
    iVar6 = (**(code **)(*plVar7 + 0xd0))(plVar7,*(undefined8 *)(param_1 + 0x40));
    if (iVar6 == 1) {
      uVar10 = 1;
    }
    else if (iVar6 == 2) {
      *(undefined4 *)(lVar8 + 8) = 2;
      goto LAB_14050adef;
    }
    *(undefined4 *)(lVar8 + 8) = uVar10;
  }
LAB_14050adef:
  *(undefined4 *)(lVar8 + 0x20) = uVar5;
  LeaveCriticalSection(lpCriticalSection);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
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
  return;
}



// FUNCTION 14050ae50 FUN_14050ae50 body=1840 status=ok
// SIG undefined FUN_14050ae50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14050ae50(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  void *_Src;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar19;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined4 local_280;
  int local_278;
  int local_274;
  longlong local_270;
  undefined8 local_268;
  undefined4 local_260 [2];
  longlong local_258;
  void *local_250;
  ulonglong local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined1 local_220 [8];
  short *local_218;
  longlong *local_210;
  undefined **local_208;
  undefined8 local_200;
  longlong *plStack_1f8;
  undefined8 local_1f0;
  undefined ***local_1e8;
  undefined4 *local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  longlong local_1a8 [4];
  longlong local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  void *pvVar15;
  ulonglong uVar18;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_270 = 0;
  local_268 = 0;
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0xffffffff;
  local_174 = 0;
  local_168 = 0;
  local_160 = 0;
  local_258 = param_1;
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8)
  ;
  local_274 = 0;
  local_210 = (longlong *)*puVar7;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      plVar13 = (longlong *)0x0;
      uStack_23c = 0;
      local_280 = 0;
      local_240 = 0;
      local_288 = 0;
      cVar4 = (**(code **)(*local_210 + 0xf0))
                        (local_210,*(undefined8 *)(param_1 + 0x48),local_274,&local_240);
      if (cVar4 != '\0') {
        local_1f0 = CONCAT44(uStack_23c,local_240);
        local_200 = 0;
        plStack_1f8 = (longlong *)0x0;
        local_208 = &PTR_FUN_143f9a6c8;
        plVar8 = (longlong *)operator_new(0x20);
        plVar19 = plVar13;
        if (plVar8 != (longlong *)0x0) {
          local_1d8 = CONCAT44(uStack_23c,local_240);
          plVar8[1] = 0;
          plVar8[2] = 0;
          *plVar8 = (longlong)&PTR_FUN_143f9a6c8;
          plVar8[3] = local_1d8;
          plVar19 = plVar8;
        }
        plVar9 = (longlong *)operator_new(0x18);
        plVar8 = plVar13;
        if (plVar9 != (longlong *)0x0) {
          *(undefined4 *)(plVar9 + 1) = 1;
          *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
          *plVar9 = (longlong)&PTR_FUN_143f7de48;
          plVar9[2] = (longlong)plVar19;
          plVar8 = plVar9;
        }
        plVar9 = plVar19 + 1;
        if (plVar19 == (longlong *)0x0) {
          plVar9 = plVar13;
        }
        if (plVar9 != (longlong *)0x0) {
          if ((*plVar9 != 0) && (plVar9[1] != 0)) {
            piVar1 = (int *)(plVar9[1] + 8);
            LOCK();
            iVar6 = *piVar1;
            if (iVar6 == 0) {
              *piVar1 = 0;
              iVar6 = 0;
            }
            UNLOCK();
            if (0 < iVar6) goto LAB_14050b068;
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          *plVar9 = (longlong)plVar19;
          plVar11 = (longlong *)plVar9[1];
          if (plVar8 != plVar11) {
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
              UNLOCK();
              plVar11 = (longlong *)plVar9[1];
            }
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
            plVar9[1] = (longlong)plVar8;
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar8 + 1;
            lVar10 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
        }
LAB_14050b068:
        lVar10 = *(longlong *)(param_1 + 0x30);
        plVar9 = plVar13;
        if (0 < *(int *)(lVar10 + 0x28)) {
          do {
            cVar4 = (*(code *)*local_208)
                              (&local_208,
                               *(undefined8 *)
                                ((longlong)plVar13 + *(longlong *)(lVar10 + 0x20) + 0x10));
            if (cVar4 != '\0') {
              puVar7 = (undefined8 *)((longlong)(int)plVar9 * 0x78 + *(longlong *)(lVar10 + 0x20));
              goto LAB_14050b0ac;
            }
            uVar16 = (int)plVar9 + 1;
            plVar13 = plVar13 + 0xf;
            plVar9 = (longlong *)(ulonglong)uVar16;
          } while ((int)uVar16 < *(int *)(lVar10 + 0x28));
        }
        puVar7 = (undefined8 *)0x0;
LAB_14050b0ac:
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)
                   SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
          lVar10 = (**(code **)(*(longlong *)*puVar7 + 0x38))();
          local_58 = (short *)0x0;
          if (lVar10 == 0) {
            local_50 = (short *)0x0;
            local_48 = 0;
          }
          else {
            uVar17 = 0xffffffffffffffff;
            do {
              uVar18 = uVar17;
              uVar17 = uVar18 + 1;
            } while (*(char *)(lVar10 + uVar17) != '\0');
            local_278 = 0;
            FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                      (&local_278,0x7fffffff,lVar10,uVar17 & 0xffffffff);
            local_48 = local_278;
            uVar16 = local_278 + 1;
            if (uVar16 < 0x81) {
              if (local_58 != (short *)0x0) {
                lVar12 = 0;
LAB_14050b158:
                local_58 = (short *)FMemory::Realloc(local_58,lVar12,0);
              }
            }
            else if ((local_58 != (short *)0x0) || (uVar16 != 0)) {
              lVar12 = (longlong)(int)uVar16 * 2;
              goto LAB_14050b158;
            }
            local_218 = local_158;
            if (local_58 != (short *)0x0) {
              local_218 = local_58;
            }
            local_50 = local_218;
            FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_218,uVar16,lVar10,(int)uVar18 + 2);
          }
          psVar3 = local_50;
          _Src = (void *)0x0;
          local_250 = (void *)0x0;
          local_248 = 0;
          pvVar15 = _Src;
          if ((local_50 != (short *)0x0) && (pvVar15 = (void *)0x0, *local_50 != 0)) {
            lVar10 = -1;
            do {
              lVar12 = lVar10 + 1;
              lVar10 = lVar10 + 1;
            } while (local_50[lVar12] != 0);
            uVar14 = (int)lVar10 + 1;
            local_248 = (ulonglong)uVar14;
            uVar16 = uVar14;
            if (0 < (int)uVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
              uVar16 = (uint)local_248;
            }
            _Src = local_250;
            pvVar15 = (void *)(ulonglong)uVar16;
            FGenericPlatformString::Memcpy(local_250,psVar3,(longlong)(int)uVar14 * 2);
          }
          if (local_58 != (short *)0x0) {
            FMemory::Free();
          }
          lVar10 = *(longlong *)(local_258 + 0x30);
          iVar6 = *(int *)(lVar10 + 0x28);
          iVar5 = iVar6 + 1;
          *(int *)(lVar10 + 0x28) = iVar5;
          if (*(int *)(lVar10 + 0x2c) < iVar5) {
            TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                      (lVar10 + 0x20);
          }
          puVar7 = (undefined8 *)((longlong)iVar6 * 0x78 + *(longlong *)(lVar10 + 0x20));
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            *puVar7 = 0;
            iVar6 = (int)pvVar15;
            *(int *)(puVar7 + 1) = iVar6;
            if (iVar6 == 0) {
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,pvVar15,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar7,_Src,(longlong)iVar6 * 2);
            }
            puVar7[2] = plVar19;
            puVar7[3] = plVar8;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
              _Src = local_250;
            }
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[9] = 0;
            puVar7[10] = 0;
            *(undefined4 *)(puVar7 + 0xb) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 0x5c) = 0;
            puVar7[0xd] = 0;
            *(undefined4 *)(puVar7 + 0xe) = 0;
          }
          param_1 = local_258;
          if (_Src != (void *)0x0) {
            FMemory::Free(_Src);
            param_1 = local_258;
          }
        }
        *(undefined4 *)(puVar7 + 4) = local_238;
        local_1e8 = &local_208;
        local_260[0] = 1;
        local_1e0 = local_260;
        FUN_1404f5f10(local_1a8,local_220,&local_1e8,0);
        uVar17 = local_268;
        lVar10 = (longlong)(int)local_268;
        iVar6 = (int)local_268 + 1;
        local_268 = CONCAT44(local_268._4_4_,iVar6);
        if (local_268._4_4_ < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_270,uVar17 & 0xffffffff);
        }
        puVar7 = (undefined8 *)(lVar10 * 0x10 + local_270);
        *puVar7 = plVar19;
        puVar7[1] = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar13 = plVar8 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        local_208 = &PTR_FUN_143f73cd8;
        if (plStack_1f8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plStack_1f8 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar6 == 1) && (plStack_1f8 != (longlong *)0x0)) {
            (**(code **)(*plStack_1f8 + 8))(plStack_1f8,1);
          }
        }
      }
      local_274 = local_274 + 1;
    } while (local_274 < *(int *)(param_1 + 0x50));
  }
  plVar13 = *(longlong **)(param_1 + 0x10);
  if ((int)local_268 == 0) {
    puVar7 = (undefined8 *)(**(code **)(*plVar13 + 0x38))(plVar13,local_1c0);
    plVar13 = (longlong *)puVar7[1];
    plVar19 = (longlong *)*puVar7;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1b8 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x30) = 3;
    (**(code **)(*plVar19 + 0x48))(plVar19);
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*plVar13 + 0x38))(plVar13,local_1d0);
    plVar13 = (longlong *)puVar7[1];
    uVar2 = *puVar7;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_1c8 + 1;
      lVar10 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    FUN_140520570(uVar2,&local_270,param_1 + 0x30);
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar13 + 1;
    lVar10 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
  }
  local_160 = 0;
  if (local_168 != 0) {
    FMemory::Free();
  }
  FUN_140506730(local_1a8,0);
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (local_1a8[0] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_270);
  return;
}



// FUNCTION 14050b580 FUN_14050b580 body=2781 status=ok
// SIG undefined FUN_14050b580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14050b580(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  undefined4 local_3b0;
  int local_3a8;
  int local_3a4;
  longlong local_3a0;
  void *local_398;
  ulonglong local_390;
  void *local_388;
  ulonglong local_380;
  undefined4 local_378 [2];
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined **local_350;
  undefined8 local_348;
  longlong *plStack_340;
  longlong local_338;
  undefined1 local_330 [8];
  short *local_328;
  short *local_320;
  undefined **local_318;
  undefined8 local_310;
  longlong *plStack_308;
  undefined8 local_300;
  undefined ***local_2f8;
  undefined4 *local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  int local_294;
  undefined1 local_290 [8];
  undefined1 *local_288;
  int local_280;
  short local_278 [128];
  short *local_178;
  short *local_170;
  int local_168;
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  iVar23 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0xffffffff;
  local_294 = 0;
  local_288 = (undefined1 *)0x0;
  local_280 = 0;
  local_3a0 = param_1;
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8)
  ;
  plVar10 = (longlong *)*puVar7;
  if (0 < *(int *)(param_1 + 0x60)) {
    do {
      puVar7 = (undefined8 *)0x0;
      uStack_36c = 0;
      local_3b0 = 0;
      local_370 = 0;
      local_3b8 = 0;
      cVar4 = (**(code **)(*plVar10 + 0xf0))
                        (plVar10,*(undefined8 *)(param_1 + 0x58),iVar23,&local_370);
      if (cVar4 != '\0') {
        lVar8 = *(longlong *)(param_1 + 0x40);
        local_300 = CONCAT44(uStack_36c,local_370);
        local_318 = &PTR_FUN_143f9a6c8;
        local_310 = 0;
        plStack_308 = (longlong *)0x0;
        puVar20 = puVar7;
        if (0 < *(int *)(lVar8 + 0x28)) {
          do {
            cVar4 = (*(code *)*local_318)
                              (&local_318,
                               *(undefined8 *)
                                (*(longlong *)(lVar8 + 0x20) + 0x10 + (longlong)puVar20));
            if (cVar4 != '\0') {
              puVar7 = (undefined8 *)((longlong)(int)puVar7 * 0x78 + *(longlong *)(lVar8 + 0x20));
              goto LAB_14050b6b4;
            }
            uVar16 = (int)puVar7 + 1;
            puVar7 = (undefined8 *)(ulonglong)uVar16;
            puVar20 = puVar20 + 0xf;
          } while ((int)uVar16 < *(int *)(lVar8 + 0x28));
          puVar7 = (undefined8 *)0x0;
        }
LAB_14050b6b4:
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)
                   SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
          lVar8 = (**(code **)(*(longlong *)*puVar7 + 0x38))
                            ((longlong *)*puVar7,CONCAT44(uStack_36c,local_370));
          local_178 = (short *)0x0;
          if (lVar8 == 0) {
            local_168 = 0;
            local_170 = (short *)0x0;
          }
          else {
            uVar17 = 0xffffffffffffffff;
            do {
              uVar21 = uVar17;
              uVar17 = uVar21 + 1;
            } while (*(char *)(lVar8 + uVar17) != '\0');
            local_3a8 = 0;
            FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                      (&local_3a8,0x7fffffff,lVar8,uVar17 & 0xffffffff);
            local_168 = local_3a8;
            uVar16 = local_3a8 + 1;
            if (uVar16 < 0x81) {
              if (local_178 != (short *)0x0) {
                lVar11 = 0;
LAB_14050b747:
                local_178 = (short *)FMemory::Realloc(local_178,lVar11,0);
              }
            }
            else if ((local_178 != (short *)0x0) || (uVar16 != 0)) {
              lVar11 = (longlong)(int)uVar16 * 2;
              goto LAB_14050b747;
            }
            local_328 = local_278;
            if (local_178 != (short *)0x0) {
              local_328 = local_178;
            }
            local_170 = local_328;
            FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_328,uVar16,lVar8,(int)uVar21 + 2);
          }
          psVar3 = local_170;
          local_398 = (void *)0x0;
          local_390 = 0;
          if ((local_170 != (short *)0x0) && (*local_170 != 0)) {
            lVar8 = -1;
            do {
              lVar11 = lVar8 + 1;
              lVar8 = lVar8 + 1;
            } while (local_170[lVar11] != 0);
            uVar16 = (int)lVar8 + 1;
            local_390 = (ulonglong)uVar16;
            if (0 < (int)uVar16) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_398,0);
            }
            FGenericPlatformString::Memcpy(local_398,psVar3,(longlong)(int)uVar16 * 2);
          }
          plVar18 = (longlong *)0x0;
          if (local_178 != (short *)0x0) {
            FMemory::Free();
          }
          plVar9 = (longlong *)operator_new(0x20);
          plVar12 = plVar18;
          if (plVar9 != (longlong *)0x0) {
            local_2e8 = CONCAT44(uStack_36c,local_370);
            plVar9[1] = 0;
            plVar9[2] = 0;
            *plVar9 = (longlong)&PTR_FUN_143f9a6c8;
            plVar9[3] = local_2e8;
            plVar12 = plVar9;
          }
          plVar9 = (longlong *)operator_new(0x18);
          if (plVar9 != (longlong *)0x0) {
            *(undefined4 *)(plVar9 + 1) = 1;
            *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
            *plVar9 = (longlong)&PTR_FUN_143f7de48;
            plVar9[2] = (longlong)plVar12;
            plVar18 = plVar9;
          }
          plVar9 = plVar12 + 1;
          if (plVar12 == (longlong *)0x0) {
            plVar9 = (longlong *)0x0;
          }
          if (plVar9 != (longlong *)0x0) {
            if ((*plVar9 != 0) && (plVar9[1] != 0)) {
              piVar1 = (int *)(plVar9[1] + 8);
              LOCK();
              iVar5 = *piVar1;
              if (iVar5 == 0) {
                *piVar1 = 0;
                iVar5 = 0;
              }
              UNLOCK();
              if (0 < iVar5) goto LAB_14050b92c;
            }
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
              UNLOCK();
            }
            *plVar9 = (longlong)plVar12;
            plVar13 = (longlong *)plVar9[1];
            if (plVar18 != plVar13) {
              if (plVar18 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
                UNLOCK();
                plVar13 = (longlong *)plVar9[1];
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
              plVar9[1] = (longlong)plVar18;
            }
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar18 + 1;
              lVar8 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar18 + 8))(plVar18);
                }
              }
            }
          }
LAB_14050b92c:
          lVar8 = *(longlong *)(param_1 + 0x40);
          iVar5 = *(int *)(lVar8 + 0x28);
          iVar6 = iVar5 + 1;
          *(int *)(lVar8 + 0x28) = iVar6;
          if (*(int *)(lVar8 + 0x2c) < iVar6) {
            TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                      (lVar8 + 0x20);
          }
          puVar7 = (undefined8 *)((longlong)iVar5 * 0x78 + *(longlong *)(lVar8 + 0x20));
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            *puVar7 = 0;
            *(int *)(puVar7 + 1) = (int)local_390;
            if ((int)local_390 == 0) {
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            }
            else {
              lVar8 = (longlong)(int)local_390;
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,local_390 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar7,local_398,lVar8 * 2);
            }
            puVar7[2] = plVar12;
            puVar7[3] = plVar18;
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
              UNLOCK();
            }
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[9] = 0;
            puVar7[10] = 0;
            *(undefined4 *)(puVar7 + 0xb) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 0x5c) = 0;
            puVar7[0xd] = 0;
            *(undefined4 *)(puVar7 + 0xe) = 0;
          }
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar18 + 1;
            lVar8 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18,1);
              }
            }
          }
          param_1 = local_3a0;
          if (local_398 != (void *)0x0) {
            FMemory::Free();
            param_1 = local_3a0;
          }
        }
        *(undefined4 *)(puVar7 + 4) = local_368;
        local_2f8 = &local_318;
        local_378[0] = 1;
        local_2f0 = local_378;
        FUN_1404f5f10(&local_2c8,local_330,&local_2f8,0);
        local_318 = &PTR_FUN_143f73cd8;
        if (plStack_308 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plStack_308 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar5 == 1) && (plStack_308 != (longlong *)0x0)) {
            (**(code **)(*plStack_308 + 8))(plStack_308,1);
          }
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(param_1 + 0x60));
  }
  uVar21 = 0;
  uVar17 = uVar21;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      plVar10 = (longlong *)
                (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + uVar17) + 0x10))();
      local_338 = *plVar10;
      local_348 = 0;
      plStack_340 = (longlong *)0x0;
      local_350 = &PTR_FUN_143f9a6c8;
      if ((int)local_2c0 != local_294) {
        puVar14 = local_290;
        if (local_288 != (undefined1 *)0x0) {
          puVar14 = local_288;
        }
        iVar23 = *(int *)(puVar14 +
                         (longlong)
                         (int)((int)((ulonglong)local_338 >> 0x20) * 0x17 + (int)local_338 &
                              local_280 - 1U) * 4);
        while (iVar23 != -1) {
          lVar8 = (longlong)iVar23 * 0x30;
          cVar4 = (*(code *)*local_350)(&local_350,lVar8 + local_2c8);
          if (cVar4 != '\0') {
            if (iVar23 != -1) {
              lVar8 = local_2c8 + lVar8;
              goto LAB_14050bb40;
            }
            break;
          }
          iVar23 = *(int *)(lVar8 + 0x28 + local_2c8);
        }
      }
      lVar8 = 0;
LAB_14050bb40:
      uVar19 = 0;
      uVar22 = lVar8 + 0x20;
      if (lVar8 == 0) {
        uVar22 = uVar19;
      }
      if (uVar22 == 0) {
        lVar8 = *(longlong *)(param_1 + 0x40);
        uVar22 = uVar19;
        if (0 < *(int *)(lVar8 + 0x28)) {
          do {
            cVar4 = (*(code *)*local_350)
                              (&local_350,
                               *(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0x10 + uVar22));
            if (cVar4 != '\0') {
              puVar7 = (undefined8 *)((longlong)(int)uVar19 * 0x78 + *(longlong *)(lVar8 + 0x20));
              if (puVar7 != (undefined8 *)0x0) goto LAB_14050bf0b;
              break;
            }
            uVar16 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar16;
            uVar22 = uVar22 + 0x78;
          } while ((int)uVar16 < *(int *)(lVar8 + 0x28));
        }
        lVar8 = local_338;
        local_2e0 = local_338;
        puVar7 = (undefined8 *)
                 SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
        lVar11 = (**(code **)(*(longlong *)*puVar7 + 0x38))((longlong *)*puVar7,lVar8);
        local_58 = (short *)0x0;
        if (lVar11 == 0) {
          local_50 = (short *)0x0;
          local_48 = 0;
        }
        else {
          uVar22 = 0xffffffffffffffff;
          do {
            uVar19 = uVar22;
            uVar22 = uVar19 + 1;
          } while (*(char *)(lVar11 + uVar22) != '\0');
          local_3a4 = 0;
          FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                    (&local_3a4,0x7fffffff,lVar11,uVar22 & 0xffffffff);
          local_48 = local_3a4;
          uVar16 = local_3a4 + 1;
          if (uVar16 < 0x81) {
            if (local_58 != (short *)0x0) {
              lVar15 = 0;
LAB_14050bc3c:
              local_58 = (short *)FMemory::Realloc(local_58,lVar15,0);
            }
          }
          else if ((local_58 != (short *)0x0) || (uVar16 != 0)) {
            lVar15 = (longlong)(int)uVar16 * 2;
            goto LAB_14050bc3c;
          }
          local_320 = local_158;
          if (local_58 != (short *)0x0) {
            local_320 = local_58;
          }
          local_50 = local_320;
          FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_320,uVar16,lVar11,(int)uVar19 + 2);
          param_1 = local_3a0;
        }
        psVar3 = local_50;
        local_388 = (void *)0x0;
        local_380 = 0;
        if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
          lVar11 = -1;
          do {
            lVar15 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (local_50[lVar15] != 0);
          uVar16 = (int)lVar11 + 1;
          local_380 = (ulonglong)uVar16;
          if (0 < (int)uVar16) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
          }
          FGenericPlatformString::Memcpy(local_388,psVar3,(longlong)(int)uVar16 * 2);
        }
        if (local_58 != (short *)0x0) {
          FMemory::Free();
        }
        plVar12 = (longlong *)operator_new(0x20);
        plVar10 = (longlong *)0x0;
        plVar18 = plVar10;
        if (plVar12 != (longlong *)0x0) {
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = (longlong)&PTR_FUN_143f9a6c8;
          plVar12[3] = lVar8;
          plVar18 = plVar12;
        }
        plVar12 = (longlong *)operator_new(0x18);
        if (plVar12 != (longlong *)0x0) {
          *(undefined4 *)(plVar12 + 1) = 1;
          *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
          *plVar12 = (longlong)&PTR_FUN_143f7de48;
          plVar12[2] = (longlong)plVar18;
          plVar10 = plVar12;
        }
        plVar12 = plVar18 + 1;
        if (plVar18 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
        }
        if (plVar12 != (longlong *)0x0) {
          if ((*plVar12 != 0) && (plVar12[1] != 0)) {
            piVar1 = (int *)(plVar12[1] + 8);
            LOCK();
            iVar23 = *piVar1;
            if (iVar23 == 0) {
              *piVar1 = 0;
              iVar23 = 0;
            }
            UNLOCK();
            if (0 < iVar23) goto LAB_14050be17;
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          *plVar12 = (longlong)plVar18;
          plVar9 = (longlong *)plVar12[1];
          if (plVar10 != plVar9) {
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
              UNLOCK();
              plVar9 = (longlong *)plVar12[1];
            }
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar23 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar23 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
            plVar12[1] = (longlong)plVar10;
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar10 + 1;
            lVar8 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar23 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar23 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
        }
LAB_14050be17:
        lVar8 = *(longlong *)(param_1 + 0x40);
        iVar23 = *(int *)(lVar8 + 0x28);
        *(int *)(lVar8 + 0x28) = iVar23 + 1;
        if (*(int *)(lVar8 + 0x2c) < iVar23 + 1) {
          TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                    (lVar8 + 0x20,iVar23);
        }
        puVar7 = (undefined8 *)((longlong)iVar23 * 0x78 + *(longlong *)(lVar8 + 0x20));
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
        }
        else {
          *puVar7 = 0;
          *(int *)(puVar7 + 1) = (int)local_380;
          if ((int)local_380 == 0) {
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          }
          else {
            lVar8 = (longlong)(int)local_380;
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,local_380 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar7,local_388,lVar8 * 2);
          }
          puVar7[2] = plVar18;
          puVar7[3] = plVar10;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          *(undefined4 *)(puVar7 + 0xb) = 0xffffffff;
          *(undefined4 *)((longlong)puVar7 + 0x5c) = 0;
          puVar7[0xd] = 0;
          *(undefined4 *)(puVar7 + 0xe) = 0;
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar18 = plVar10 + 1;
          lVar8 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar23 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar23 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        param_1 = local_3a0;
        if (local_388 != (void *)0x0) {
          FMemory::Free();
          param_1 = local_3a0;
        }
LAB_14050bf0b:
        *(undefined4 *)(puVar7 + 4) = 0xffffffff;
      }
      local_350 = &PTR_FUN_143f73cd8;
      if (plStack_340 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_340 + 0xc);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar23 == 1) && (plStack_340 != (longlong *)0x0)) {
          (**(code **)(*plStack_340 + 8))(plStack_340,1);
        }
      }
      uVar16 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar16;
      uVar17 = uVar17 + 0x10;
    } while ((int)uVar16 < *(int *)(param_1 + 0x38));
  }
  puVar7 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))
                     (*(longlong **)(param_1 + 0x10),local_2d8);
  plVar10 = (longlong *)puVar7[1];
  uVar2 = *puVar7;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_2d0 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar1 = (int *)((longlong)local_2d0 + 0xc);
      iVar23 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar23 == 1) {
        (**(code **)(*local_2d0 + 8))(local_2d0,1);
      }
    }
  }
  FUN_140520570(uVar2,param_1 + 0x30,param_1 + 0x40);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar10 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar23 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar23 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  local_280 = 0;
  if (local_288 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  FUN_140506730(&local_2c8,0);
  if (local_2a8 != 0) {
    FMemory::Free();
  }
  if (local_2c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14050c060 FUN_14050c060 body=1964 status=ok
// SIG undefined FUN_14050c060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14050c060(longlong param_1)

{
  int *piVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined2 *puVar16;
  longlong lVar17;
  undefined2 *puVar18;
  undefined1 auStack_498 [32];
  int local_478;
  int local_474;
  void *local_470;
  ulonglong local_468;
  int local_460;
  undefined4 local_45c;
  int local_458;
  undefined4 local_454;
  longlong local_450;
  longlong *local_448;
  longlong *local_440;
  longlong *local_438;
  undefined2 *local_430;
  int local_428;
  undefined1 local_420 [8];
  undefined2 *local_418;
  int local_410;
  undefined4 local_408 [2];
  undefined8 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0 [2];
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8 [2];
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0 [2];
  undefined8 local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined4 *local_3a0;
  longlong local_398;
  undefined4 *local_390;
  longlong local_388;
  undefined4 *local_380;
  longlong local_378;
  undefined4 *local_370;
  longlong local_368 [2];
  longlong local_358 [2];
  undefined1 local_348 [8];
  longlong *local_340;
  undefined1 local_338 [128];
  longlong local_2b8;
  undefined8 local_2b0;
  undefined1 local_298 [128];
  longlong local_218;
  undefined1 local_1f8 [128];
  longlong local_178;
  undefined1 local_158 [256];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  plVar11 = (longlong *)0x0;
  local_474 = 0;
  puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8)
  ;
  plVar6 = *(longlong **)(param_1 + 0x38);
  lVar17 = *(longlong *)(param_1 + 0x30);
  local_440 = (longlong *)*puVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_450 = *(longlong *)(lVar17 + 0x18);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    lVar17 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  }
  lVar17 = local_450;
  plVar6 = (longlong *)
           FOnlineLeaderboardRead::FindPlayerRecord
                     (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
  if (plVar6 != (longlong *)0x0) goto LAB_14050c3bc;
  puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
  uVar7 = (**(code **)(*(longlong *)*puVar5 + 0x38))((longlong *)*puVar5,lVar17);
  lVar8 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_158,uVar7);
  local_470 = (void *)0x0;
  local_468 = 0;
  psVar2 = *(short **)(lVar8 + 0x108);
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar2[lVar8] != 0);
    uVar13 = (int)lVar8 + 1;
    local_468 = (ulonglong)uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_470,0);
    }
    FGenericPlatformString::Memcpy(local_470,psVar2,(longlong)(int)uVar13 * 2);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  lVar8 = *(longlong *)(param_1 + 0x40);
  iVar4 = *(int *)(lVar8 + 0x28);
  *(int *)(lVar8 + 0x28) = iVar4 + 1;
  if (*(int *)(lVar8 + 0x2c) < iVar4 + 1) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
              (lVar8 + 0x20,iVar4);
  }
  plVar14 = (longlong *)((longlong)iVar4 * 0x78 + *(longlong *)(lVar8 + 0x20));
  plVar9 = local_438;
  plVar6 = plVar11;
  plVar10 = plVar11;
  if (plVar14 != (longlong *)0x0) {
    plVar9 = (longlong *)operator_new(0x20);
    if (plVar9 != (longlong *)0x0) {
      plVar9[1] = 0;
      plVar9[2] = 0;
      *plVar9 = (longlong)&PTR_FUN_143f9a6c8;
      plVar9[3] = lVar17;
      plVar6 = plVar9;
    }
    plVar10 = (longlong *)operator_new(0x18);
    plVar9 = plVar11;
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_143f7de48;
      plVar10[2] = (longlong)plVar6;
      plVar9 = plVar10;
    }
    plVar10 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar10 = plVar11;
    }
    if (plVar10 != (longlong *)0x0) {
      if ((*plVar10 != 0) && (plVar10[1] != 0)) {
        piVar1 = (int *)(plVar10[1] + 8);
        LOCK();
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *piVar1 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (0 < iVar4) goto LAB_14050c2f7;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      *plVar10 = (longlong)plVar6;
      plVar12 = (longlong *)plVar10[1];
      if (plVar9 != plVar12) {
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          plVar12 = (longlong *)plVar10[1];
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
        plVar10[1] = (longlong)plVar9;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar9 + 1;
        lVar17 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
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
    }
LAB_14050c2f7:
    *plVar14 = 0;
    *(int *)(plVar14 + 1) = (int)local_468;
    if ((int)local_468 == 0) {
      *(undefined4 *)((longlong)plVar14 + 0xc) = 0;
    }
    else {
      lVar17 = (longlong)(int)local_468;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar14,local_468 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*plVar14,local_470,lVar17 * 2);
    }
    plVar14[2] = (longlong)plVar6;
    plVar14[3] = (longlong)plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    plVar14[5] = 0;
    plVar14[6] = 0;
    plVar14[9] = 0;
    plVar14[10] = 0;
    *(undefined4 *)(plVar14 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)plVar14 + 0x5c) = 0;
    plVar14[0xd] = 0;
    *(undefined4 *)(plVar14 + 0xe) = 0;
    plVar6 = plVar14;
    plVar10 = (longlong *)0x1;
  }
  if ((plVar10 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar17 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  if (local_470 != (void *)0x0) {
    FMemory::Free();
  }
LAB_14050c3bc:
  lVar17 = local_450;
  if (*(char *)(param_1 + 0x19) != '\0') {
    lVar8 = *(longlong *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x58) == 1) {
      local_478 = 0;
      if (0 < *(int *)(lVar8 + 0x18)) {
        local_448 = plVar6 + 5;
        do {
          lVar15 = *(longlong *)(lVar8 + 0x10) + (longlong)plVar11;
          puVar5 = (undefined8 *)FName::ToString(lVar15,local_358);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)*puVar5;
          }
          puVar5 = (undefined8 *)FName::ToString(lVar8,local_368);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = (undefined2 *)*puVar5;
          }
          FString::PrintfImpl(&local_418,L"%s_%s",puVar16,puVar18);
          puVar18 = &DAT_143f3eda8;
          if (local_410 != 0) {
            puVar18 = local_418;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_338,puVar18);
          FName::FName(&local_438,local_2b0,1);
          if (local_2b8 != 0) {
            FMemory::Free();
          }
          if (local_418 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_368[0] != 0) {
            FMemory::Free();
          }
          if (local_358[0] != 0) {
            FMemory::Free();
          }
          FName::ToString(&local_438,&local_430);
          plVar6 = local_448;
          if (*(int *)(lVar15 + 8) == 1) {
            puVar18 = &DAT_143f3eda8;
            if (local_428 != 0) {
              puVar18 = local_430;
            }
            lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::
                    TStringConversion<FTCHARToUTF8_Convert,128>(local_1f8,puVar18);
            cVar3 = (**(code **)(*local_440 + 0x90))
                              (local_440,lVar17,*(undefined8 *)(lVar8 + 0x88),&local_454);
            if (local_178 != 0) {
              FMemory::Free();
            }
            local_3f0[0] = 0;
            local_3e8 = 0;
            local_3e0 = 0;
            FVariantData::SetValue(local_3f0,local_454);
            plVar6 = local_448;
            local_370 = local_3f0;
            local_378 = lVar15;
            TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FVariantData_&&>_>
                      (local_448,&local_474,&local_378,0);
            lVar8 = *plVar6;
            FVariantData::Empty(local_3f0);
            iVar4 = local_474;
LAB_14050c6c9:
            lVar8 = lVar8 + (longlong)iVar4 * 0x28;
            if (cVar3 == '\0') goto LAB_14050c6d6;
          }
          else {
            if (*(int *)(lVar15 + 8) == 7) {
              puVar18 = &DAT_143f3eda8;
              if (local_428 != 0) {
                puVar18 = local_430;
              }
              lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::
                      TStringConversion<FTCHARToUTF8_Convert,128>(local_298,puVar18);
              cVar3 = (**(code **)(*local_440 + 0x88))
                                (local_440,lVar17,*(undefined8 *)(lVar8 + 0x88),&local_45c);
              if (local_218 != 0) {
                FMemory::Free();
              }
              local_408[0] = 0;
              local_400 = 0;
              local_3f8 = 0;
              FVariantData::SetValue(local_408,local_45c);
              plVar6 = local_448;
              local_380 = local_408;
              local_388 = lVar15;
              TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,FVariantData_&&>_>
                        (local_448,&local_458,&local_388,0);
              lVar8 = *plVar6;
              FVariantData::Empty(local_408);
              iVar4 = local_458;
              goto LAB_14050c6c9;
            }
            local_3c0[0] = 0;
            local_3b8 = 0;
            local_3b0 = 0;
            local_390 = local_3c0;
            local_398 = lVar15;
            TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FVariantData_&&>_>
                      (local_448,&local_460,&local_398,0);
            lVar8 = *plVar6;
            FVariantData::Empty(local_3c0);
            lVar8 = lVar8 + (longlong)local_460 * 0x28;
LAB_14050c6d6:
            FVariantData::Empty(lVar8 + 8);
            *(undefined1 *)(param_1 + 0x19) = 0;
          }
          if (local_430 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
          lVar8 = *(longlong *)(param_1 + 0x40);
          local_478 = local_478 + 1;
        } while (local_478 < *(int *)(lVar8 + 0x18));
      }
    }
    else {
      local_3d8[0] = 0;
      local_3d0 = 0;
      local_3c8 = 0;
      if (0 < *(int *)(lVar8 + 0x18)) {
        local_3a0 = local_3d8;
        do {
          local_3a8 = (longlong)(int)plVar11 * 0x10 +
                      *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
          FUN_1404a8f80(plVar6 + 5,local_420,&local_3a8,0);
          uVar13 = (int)plVar11 + 1;
          plVar11 = (longlong *)(ulonglong)uVar13;
        } while ((int)uVar13 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x18));
      }
      FVariantData::Empty(local_3d8);
    }
  }
  plVar11 = (longlong *)
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))
                      (*(longlong **)(param_1 + 0x10),local_348);
  plVar6 = (longlong *)plVar11[1];
  lVar17 = *plVar11;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (local_340 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_340 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_340)(local_340);
      LOCK();
      piVar1 = (int *)((longlong)local_340 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_340 + 8))(local_340,1);
      }
    }
  }
  iVar4 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
          IndexOfByPredicate<FUniqueNetIdMatcher>(lVar17 + 0x68,*(undefined8 *)(param_1 + 0x30));
  if (iVar4 != -1) {
    TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
              (lVar17 + 0x68,iVar4,1,1);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar6 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  }
  return;
}



// FUNCTION 14050c810 FUN_14050c810 body=208 status=ok
// SIG undefined FUN_14050c810(void)

void FUN_14050c810(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8)
  ;
  plVar4 = (longlong *)*puVar7;
  if (((*(char *)(param_1 + 0x18) != '\0') && (*(char *)(param_1 + 0x19) != '\0')) &&
     (*(char *)(param_1 + 0x68) != '\0')) {
    puVar7 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))
                       (*(longlong **)(param_1 + 0x10),local_18);
    iVar6 = (**(code **)(*(longlong *)*puVar7 + 0x118))((longlong *)*puVar7,local_res8);
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
    if ((local_res8[0] == 2) && (iVar6 == 2)) {
      (**(code **)(*plVar4 + 0x50))(plVar4);
    }
  }
  return;
}



// FUNCTION 14050c8e0 FUN_14050c8e0 body=753 status=ok
// SIG undefined FUN_14050c8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14050c8e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 *local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  longlong local_138 [2];
  undefined2 *local_128;
  int local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108 [2];
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  FString::PrintfImpl(local_138 + 2,L"%I64u",param_4);
  local_168 = CONCAT44(local_168._4_4_,1);
  puVar11 = &DAT_143f3eda8;
  if (local_120 != 0) {
    puVar11 = local_128;
  }
  FString::Replace(param_3,local_108,L"%ORDERID%",puVar11);
  if (local_128 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar7 = FUN_142b45e90();
  local_140 = (longlong *)0x0;
  local_148 = 0;
  uVar5 = *(undefined8 *)(lVar7 + 0x18);
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 1;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_e8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e0,&local_140);
  plVar10 = local_140;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  local_b0 = 2;
  local_d8 = 0x200000002;
  local_138[0] = 0;
  local_138[1] = 0;
  local_118 = 0;
  local_110 = 0;
  puVar8 = (undefined8 *)operator_new(0x28,&local_118);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &DAT_143f3ed00;
    puVar8[2] = FUN_14050cbe0;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[4] = uVar9;
    *puVar8 = &PTR_GetPoolName_143f3ed48;
  }
  local_168 = FUN_14050e7e0(param_1,local_f8,param_2);
  local_160 = &local_118;
  uVar6 = FUN_142b558f0(uVar5,&local_e8,local_108,local_138);
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  plVar10 = (longlong *)(param_1 + 0x80);
  iVar4 = *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x88) = iVar4 + 1;
  if (*(int *)(param_1 + 0x8c) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar10,iVar4);
  }
  lVar7 = *plVar10;
  lVar12 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar12 + lVar7) = 0;
  *(undefined8 *)(lVar12 + 8 + lVar7) = 0;
  *(undefined8 *)(lVar12 + 0x10 + lVar7) = 0;
  *(undefined8 *)(lVar12 + 0x18 + lVar7) = 0;
  local_150 = (longlong *)param_2[1];
  local_158 = *param_2;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_150 + 1) = (int)local_150[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)(*plVar10 + lVar12);
  if (puVar8 != &local_158) {
    *puVar8 = local_158;
    local_158 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(puVar8 + 1,&local_150);
  }
  plVar1 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_150 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  *(undefined8 *)(*plVar10 + 0x18 + lVar12) = param_4;
  *(undefined4 *)(*plVar10 + 0x10 + lVar12) = uVar6;
  FUN_1404f9010(&local_e8);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14050cbe0 FUN_14050cbe0 body=1072 status=ok
// SIG undefined FUN_14050cbe0(void)

void FUN_14050cbe0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined2 **ppuVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  bool bVar13;
  undefined4 local_res20 [2];
  undefined2 *local_108;
  int local_100;
  longlong local_f8 [8];
  undefined2 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_90;
  undefined4 *local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_50 [8];
  longlong *local_48;
  
  puVar11 = (undefined2 *)0x0;
  puVar12 = puVar11;
  while ((iVar3 = (int)puVar12, -1 < iVar3 && (iVar3 < (int)param_1[0x11]))) {
    lVar9 = param_1[0x10];
    if (*(int *)((longlong)iVar3 * 0x20 + 0x10 + lVar9) == *(int *)(*param_2 + 8)) {
      lVar7 = (longlong)iVar3 * 0x20;
      local_a8 = *(longlong *)(lVar7 + lVar9);
      plStack_a0 = *(longlong **)(lVar7 + 8 + lVar9);
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
        UNLOCK();
      }
      local_90 = *(undefined8 *)(lVar7 + 0x18 + lVar9);
      goto LAB_14050cc79;
    }
    puVar12 = (undefined2 *)(ulonglong)(iVar3 + 1);
  }
  local_90 = 0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
LAB_14050cc79:
  local_108 = (undefined2 *)0x0;
  bVar13 = false;
  iVar3 = 0;
  local_100 = 0;
  if (*param_4 != 0) {
    local_f8[0] = 0;
    local_f8[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
    FGenericPlatformString::Memcpy(local_f8[0],L"message",0x10);
    ppuVar4 = (undefined2 **)FJsonObject::GetStringField(*param_4,local_80,local_f8);
    if (&local_108 != ppuVar4) {
      puVar11 = *ppuVar4;
      *ppuVar4 = (undefined2 *)0x0;
      iVar3 = *(int *)(ppuVar4 + 1);
      ppuVar4[1] = (undefined2 *)0x0;
      local_108 = puVar11;
      local_100 = iVar3;
    }
    if (local_80[0] != 0) {
      FMemory::Free();
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
    local_b8 = (undefined2 *)0x0;
    local_b0 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 8,0);
    puVar12 = local_b8;
    FGenericPlatformString::Memcpy(local_b8,L"TRANSACTION_FINALIZED",0x2c);
    puVar10 = &DAT_143f3eda8;
    if ((int)local_b0 != 0) {
      puVar10 = puVar12;
    }
    puVar8 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar8 = puVar11;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
    bVar13 = iVar3 == 0;
    if (puVar12 != (undefined2 *)0x0) {
      FMemory::Free(puVar12);
    }
    if (!bVar13) {
      local_f8[3] = 6;
      local_f8[2] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 2,0);
      FGenericPlatformString::Memcpy(local_f8[2],L"error",0xc);
      plVar5 = (longlong *)FUN_1416b2cb0(*param_4,local_f8 + 2);
      plVar2 = (longlong *)plVar5[1];
      lVar9 = *plVar5;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        puVar11 = local_108;
      }
      if (local_f8[2] != 0) {
        FMemory::Free();
      }
      if (lVar9 == 0) {
        local_f8[7] = 6;
        local_f8[6] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 6,0);
        FGenericPlatformString::Memcpy(local_f8[6],L"error",0xc);
        ppuVar4 = (undefined2 **)FJsonObject::GetStringField(*param_4,local_60,local_f8 + 6);
        if (&local_108 != ppuVar4) {
          if (puVar11 != (undefined2 *)0x0) {
            FMemory::Free(puVar11);
          }
          puVar11 = *ppuVar4;
          *ppuVar4 = (undefined2 *)0x0;
          ppuVar4[1] = (undefined2 *)0x0;
          local_108 = puVar11;
        }
        lVar9 = local_f8[6];
        if (local_60[0] != 0) {
          FMemory::Free();
          lVar9 = local_f8[6];
        }
      }
      else {
        local_f8[5] = 5;
        local_f8[4] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 4,0);
        FGenericPlatformString::Memcpy(local_f8[4],L"code",10);
        ppuVar4 = (undefined2 **)FJsonObject::GetStringField(lVar9,local_70,local_f8 + 4);
        if (&local_108 != ppuVar4) {
          if (puVar11 != (undefined2 *)0x0) {
            FMemory::Free(puVar11);
          }
          puVar11 = *ppuVar4;
          *ppuVar4 = (undefined2 *)0x0;
          ppuVar4[1] = (undefined2 *)0x0;
          local_108 = puVar11;
        }
        lVar9 = local_f8[4];
        if (local_70[0] != 0) {
          FMemory::Free();
          lVar9 = local_f8[4];
        }
      }
      if (lVar9 != 0) {
        FMemory::Free();
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar2 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        puVar11 = local_108;
        if ((int)lVar9 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          puVar11 = local_108;
          if (iVar3 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
            puVar11 = local_108;
          }
        }
      }
    }
  }
  lVar9 = *param_1;
  uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_a8 + 8,local_50);
  (**(code **)(lVar9 + 0x80))(param_1,uVar6,local_90,bVar13);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    puVar11 = local_108;
    if ((int)lVar9 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      puVar11 = local_108;
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
        puVar11 = local_108;
      }
    }
  }
  local_res20[0] = *(undefined4 *)(*param_2 + 8);
  local_88 = local_res20;
  FUN_1404f6f00(param_1 + 0x10,&local_88);
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  plVar2 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_a0 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  return;
}



// FUNCTION 14050d010 Find body=109 status=ok
// SIG undefined Find(void)

ulonglong TArray<FUniqueNetIdSteam,TSizedDefaultAllocator<32>_>::Find
                    (longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar4 = lVar1;
  while( true ) {
    if (lVar4 == (longlong)(int)lVar2 * 0x20 + lVar1) {
      return 0xffffffff;
    }
    cVar3 = (**(code **)*param_2)(param_2,lVar4);
    if (cVar3 != '\0') break;
    lVar4 = lVar4 + 0x20;
  }
  return lVar4 - lVar1 >> 5 & 0xffffffff;
}



// FUNCTION 14050d080 FUN_14050d080 body=192 status=ok
// SIG undefined FUN_14050d080(void)

int * FUN_14050d080(longlong *param_1,int *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_3[3] >> 0x20) * 0x17 + (int)param_3[3]) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = (**(code **)*param_3)(param_3,lVar3 + (longlong)iVar4 * 0x30);
        if (cVar1 != '\0') {
          *param_2 = iVar4;
          return param_2;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x28 + (longlong)iVar4 * 0x30);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14050d140 FUN_14050d140 body=1013 status=ok
// SIG undefined FUN_14050d140(void)

/* WARNING: Removing unreachable block (ram,0x00014050d2ff) */
/* WARNING: Removing unreachable block (ram,0x00014050d1da) */
/* WARNING: Removing unreachable block (ram,0x00014050d1df) */
/* WARNING: Removing unreachable block (ram,0x00014050d1f1) */
/* WARNING: Removing unreachable block (ram,0x00014050d304) */
/* WARNING: Removing unreachable block (ram,0x00014050d316) */

undefined8 FUN_14050d140(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *local_98;
  int local_90;
  longlong *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  int local_40;
  undefined8 local_3c;
  undefined1 local_34;
  
  uVar8 = 0x3e5;
  FUN_1404b6bd0(param_1 + 0x388);
  puVar6 = (undefined1 *)(param_1 + 0x3c0);
  lVar7 = 8;
  do {
    iVar4 = rand();
    *puVar6 = (char)iVar4;
    puVar6 = puVar6 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uStack_70 = 0;
  local_78 = FUN_14051a610;
  plVar5 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x278,local_68);
  local_80 = 0;
  plVar2 = (longlong *)plVar5[1];
  lVar7 = *plVar5;
  local_88 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x40);
  local_80 = 4;
  local_88 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_GetPoolName_143f4d3e0;
    plVar5[1] = lVar7;
    plVar5[2] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar5 + 3) = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = local_78._4_4_;
    *(undefined4 *)(plVar5 + 4) = uStack_70;
    *(undefined4 *)((longlong)plVar5 + 0x24) = uStack_6c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar5[6] = lVar7;
    *plVar5 = (longlong)&PTR_GetPoolName_143f4d428;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  local_78 = FUN_1405196a0;
  uStack_70 = 0;
  plVar5 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x278,local_58);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  plVar2 = (longlong *)plVar5[1];
  lVar7 = *plVar5;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x40);
  local_90 = 4;
  local_98 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_GetPoolName_143f4d350;
    plVar5[1] = lVar7;
    plVar5[2] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar5 + 3) = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = local_78._4_4_;
    *(undefined4 *)(plVar5 + 4) = uStack_70;
    *(undefined4 *)((longlong)plVar5 + 0x24) = uStack_6c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar5[6] = lVar7;
    *plVar5 = (longlong)&PTR_GetPoolName_143f4d398;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  local_48 = 0;
  local_3c = 0;
  local_34 = 0;
  local_40 = 0;
  TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_48);
  lVar7 = (longlong)local_40;
  local_40 = local_40 + 0x400;
  if ((int)local_3c < local_40) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_48);
  }
  _guard_xfg_dispatch_icall_nop((void *)(lVar7 + local_48),0,0x400);
  FUN_1404ae8d0(param_1 + 0x388,&local_48,*(undefined8 *)(param_1 + 0x3c0));
  cVar3 = FUN_1404b5f10(param_1 + 0x388,&local_48,&local_88,&local_98);
  if (cVar3 == '\0') {
    uVar8 = 0x80004005;
    FUN_14052ac70(param_1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x18) = 3;
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    if (local_98 == (longlong *)0x0) goto LAB_14050d4cb;
    (**(code **)(*local_98 + 0x28))(local_98,0);
    if (local_98 != (longlong *)0x0) {
      local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
    }
    local_90 = 0;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
LAB_14050d4cb:
  if (local_80 != 0) {
    if (local_88 == (longlong *)0x0) {
      return uVar8;
    }
    (**(code **)(*local_88 + 0x28))(local_88,0);
    if (local_88 != (longlong *)0x0) {
      local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
    }
    local_80 = 0;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  return uVar8;
}



// FUNCTION 14050d540 FUN_14050d540 body=314 status=ok
// SIG undefined FUN_14050d540(void)

void FUN_14050d540(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  }
  lVar4 = FUN_140510190(param_1,param_2);
  if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x18) != -1)) || (1 < *(int *)(lVar4 + 0x20) - 2U)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((lVar4 == 0) || (bVar2)) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar1);
    }
    puVar7 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x28);
    puVar6 = puVar7;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *param_2;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      puVar5[3] = 0xffffffffffffffff;
      puVar6 = puVar5;
    }
    *(undefined4 *)(puVar6 + 4) = 1;
    puVar5 = (undefined8 *)operator_new(0x58);
    if (puVar5 != (undefined8 *)0x0) {
      FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar5,*(undefined8 *)(param_1 + 0x20),0);
      *(undefined1 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_143f9af18;
      puVar5[6] = *param_2;
      puVar5[7] = 1;
      *(undefined1 *)(puVar5 + 10) = 1;
      puVar7 = puVar5;
    }
    FOnlineAsyncTaskManager::AddToInQueue
              (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x148),puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00014050d673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 14050d680 FindPlayerRecord body=118 status=ok
// SIG undefined FindPlayerRecord(void)

longlong FOnlineLeaderboardRead::FindPlayerRecord(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar3 = 0;
    do {
      cVar1 = (**(code **)*param_2)
                        (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar3));
      if (cVar1 != '\0') {
        return (longlong)iVar2 * 0x78 + *(longlong *)(param_1 + 0x20);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x78;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  return 0;
}



// FUNCTION 14050d700 FUN_14050d700 body=563 status=ok
// SIG undefined FUN_14050d700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14050d700(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_148 [32];
  undefined ***local_128;
  undefined1 local_120;
  undefined4 local_118;
  undefined4 local_114;
  int local_108;
  uint uStack_104;
  undefined8 local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar4 = (longlong *)param_3[1];
  lVar6 = *param_3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_100 = *(undefined8 *)(lVar6 + 0x18);
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
  uVar7 = 0;
  local_118 = 0;
  uStack_104 = 0;
  local_114 = 0;
  local_108 = 0;
  (**(code **)(*(longlong *)param_1[0x6e] + 0x40))((longlong *)param_1[0x6e],local_100,&local_118);
  uVar5 = CONCAT44(uStack_104,local_108);
  uVar8 = uStack_104 >> 0x14 & 0xf;
  if (((((uVar8 - 1 < 10) && (((int)uStack_104 >> 0x18) - 1U < 4)) &&
       ((uVar8 != 1 || ((local_108 != 0 && ((uStack_104 & 0xfffff) == 1)))))) &&
      ((uVar8 != 7 || ((local_108 != 0 && ((uStack_104 & 0xfffff) == 0)))))) &&
     ((uVar8 != 3 || (local_108 != 0)))) {
    lVar6 = operator_new(0x88);
    if (lVar6 != 0) {
      local_120 = 1;
      local_128 = (undefined ***)uVar5;
      uVar7 = FUN_1404f7e10(lVar6,param_1[0x51],param_2,param_3);
    }
    FOnlineAsyncTaskManager::AddToInQueue(*(undefined8 *)(param_1[0x51] + 0x148),uVar7);
    return;
  }
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = &PTR_FUN_143f769a8;
  local_128 = &local_f8;
  local_d0 = &PTR_FUN_143f769a0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 9999;
  (**(code **)(*param_1 + 0x1a0))(param_1,2,param_2,param_3);
  FUN_1404bf650(&local_f8);
  return;
}



// FUNCTION 14050d940 FUN_14050d940 body=117 status=ok
// SIG undefined FUN_14050d940(void)

longlong FUN_14050d940(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar3 = 0;
    do {
      cVar1 = (*(code *)**(undefined8 **)*param_2)
                        ((undefined8 *)*param_2,
                         *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x70)));
      if (cVar1 != '\0') {
        return (longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 0x70);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x38;
    } while (iVar2 < *(int *)(param_1 + 0x78));
  }
  return 0;
}



// FUNCTION 14050d9c0 FUN_14050d9c0 body=421 status=ok
// SIG undefined FUN_14050d9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14050d9c0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  wchar_t *_Str;
  int iVar6;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined1 local_110;
  ulonglong local_108;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(param_3 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_3;
  }
  uVar1 = _wtoi64(_Str);
  uVar4 = (uint)(uVar1 >> 0x20);
  local_108 = uVar1;
  if (((uVar4 & 0xf00000) - 1 < 0xafffff) && (((int)uVar4 >> 0x18) - 1U < 4)) {
    uVar5 = uVar4 >> 0x14 & 0xf;
    iVar6 = (int)uVar1;
    if ((((uVar5 != 1) || ((iVar6 != 0 && ((uVar4 & 0xfffff) == 1)))) &&
        ((uVar5 != 7 || ((iVar6 != 0 && ((uVar1 & 0xfffff00000000) == 0)))))) &&
       ((uVar5 != 3 || (iVar6 != 0)))) {
      lVar2 = operator_new(0x88);
      uVar3 = 0;
      if (lVar2 != 0) {
        local_110 = 0;
        local_118 = uVar1;
        uVar3 = FUN_1404f7e10(lVar2,param_1[0x51],param_2,param_2);
      }
      FOnlineAsyncTaskManager::AddToInQueue(*(undefined8 *)(param_1[0x51] + 0x148),uVar3);
      return;
    }
  }
  local_78 = 0xffffffff;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = &PTR_FUN_143f769a8;
  local_d0 = &PTR_FUN_143f769a0;
  local_f0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = 9999;
  (**(code **)(*param_1 + 0x1c8))(param_1,2,param_3,&local_f8);
  FUN_1404bf650(&local_f8);
  return;
}



// FUNCTION 14050db70 FUN_14050db70 body=676 status=ok
// SIG undefined FUN_14050db70(void)

void FUN_14050db70(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  LARGE_INTEGER local_res8;
  longlong local_38;
  longlong *local_30;
  
  puVar6 = (undefined8 *)0x0;
  plVar8 = param_1 + 0x59;
  local_res8.s.LowPart = 0;
  if ((*plVar8 == 0) && (lVar3 = *param_3, *(int *)(lVar3 + 0x18) != 1)) {
    lVar7 = *(longlong *)(lVar3 + 8);
    for (iVar9 = *(int *)(lVar3 + 0x10); iVar9 != 0; iVar9 = iVar9 + -1) {
      FUN_1404bf650(lVar7);
      lVar7 = lVar7 + 0xc0;
    }
    *(undefined4 *)(lVar3 + 0x10) = 0;
    if (*(int *)(lVar3 + 0x14) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::ResizeTo
                (lVar3 + 8,0);
    }
    local_30 = (longlong *)param_3[1];
    local_38 = *param_3;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    if (plVar8 != &local_38) {
      *plVar8 = local_38;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5a,&local_30);
    }
    plVar8 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    QueryPerformanceCounter(&local_res8);
    param_1[0x84] =
         (longlong)
         ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) * DAT_1468b02f8 + 16777216.0)
    ;
    if (((param_1[0x51] == 0) || (cVar4 = FUN_140516dc0(), cVar4 == '\0')) ||
       (*(char *)(*param_3 + 0x78) != '\0')) {
      iVar9 = FUN_14050d140(param_1,param_3);
      if (iVar9 != 0x3e5) {
        (**(code **)(*param_1 + 0x120))(param_1,(iVar9 != 0) + '\x01');
      }
    }
    else {
      puVar5 = (undefined8 *)operator_new(0x68);
      if (puVar5 == (undefined8 *)0x0) {
        plVar8 = (longlong *)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
        puVar5 = puVar6;
      }
      else {
        plVar8 = (longlong *)param_3[1];
        lVar3 = *param_3;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar5,param_1[0x51],0);
        *puVar5 = &PTR_FUN_143f9b630;
        puVar5[5] = lVar3;
        puVar5[6] = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        puVar6 = (undefined8 *)
                 SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760);
        puVar5[7] = *puVar6;
        *(undefined4 *)(puVar5 + 8) = 0;
        puVar5[9] = &PTR_FUN_143f9b610;
        puVar5[0xc] = &LAB_140519d60;
        *(undefined1 *)(puVar5 + 10) = 0;
        *(undefined4 *)((longlong)puVar5 + 0x54) = 0;
        puVar5[0xb] = puVar5;
        SteamAPI_RegisterCallback(puVar5 + 9,0x1fe);
        puVar6 = (undefined8 *)0x1;
      }
      if ((puVar6 != (undefined8 *)0x0) && (plVar8 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      FOnlineAsyncTaskManager::AddToInQueue(*(undefined8 *)(param_1[0x51] + 0x148),puVar5);
      *(undefined4 *)(*param_3 + 0x18) = 1;
    }
  }
  return;
}



// FUNCTION 14050de20 FUN_14050de20 body=554 status=ok
// SIG undefined FUN_14050de20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14050de20(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  int local_180;
  undefined4 local_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [128];
  longlong local_e8;
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_188 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_180 = 3;
  local_188 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = (longlong)param_1;
    *plVar2 = (longlong)&DAT_143f3ed00;
    plVar2[2] = (longlong)FUN_140518c80;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  (**(code **)(*param_1 + 0x220))(param_1,local_178,&local_188);
  if (local_180 != 0) {
    if (local_188 == (longlong *)0x0) goto LAB_14050df04;
    (**(code **)(*local_188 + 0x28))(local_188,0);
    if (local_188 != (longlong *)0x0) {
      local_188 = (longlong *)FMemory::Realloc(local_188,0,0);
    }
    local_180 = 0;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
LAB_14050df04:
  puVar8 = &DAT_143f3eda8;
  local_188 = (longlong *)0x0;
  local_17c = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  lVar3 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_c8,puVar5);
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(*(longlong *)(lVar3 + 0x88) + lVar7) != '\0');
  if (*(int *)(param_2 + 1) != 0) {
    puVar8 = (undefined2 *)*param_2;
  }
  lVar3 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_168,puVar8);
  iVar6 = (int)lVar7;
  _Src = *(void **)(lVar3 + 0x88);
  plVar2 = (longlong *)0x0;
  local_180 = iVar6;
  if (0 < iVar6) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_188,0);
    plVar2 = local_188;
  }
  iVar1 = local_180;
  _guard_xfg_dispatch_icall_nop(plVar2,_Src,(longlong)iVar6);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  lVar3 = (**(code **)(*(longlong *)*puVar4 + 0xa0))((longlong *)*puVar4,plVar2,iVar1);
  if (param_1[0x2b] != 0) {
    SteamAPI_UnregisterCallResult(param_1 + 0x29);
  }
  param_1[0x2b] = lVar3;
  param_1[0x2d] = (longlong)FUN_140518890;
  param_1[0x2c] = (longlong)param_1;
  if (lVar3 != 0) {
    SteamAPI_RegisterCallResult(param_1 + 0x29,lVar3);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 14050e050 GetUserAttribute body=112 status=ok
// SIG undefined GetUserAttribute(void)

undefined8
TOnlineUserEOS<FOnlineFriend,IAttributeAccessInterface>::GetUserAttribute
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x20),local_res8);
  lVar1 = 0;
  if (local_res8[0] != -1) {
    lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)local_res8[0] * 0x28;
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    return 0;
  }
  FString::operator=(param_3);
  return 1;
}



// FUNCTION 14050e0c0 FUN_14050e0c0 body=1590 status=ok
// SIG undefined FUN_14050e0c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14050e0c0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  short *psVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_768 [32];
  undefined4 local_748;
  undefined4 local_740;
  undefined4 local_738;
  undefined4 local_730;
  undefined1 local_728 [8];
  undefined2 *local_720;
  int local_718;
  int local_710;
  uint local_70c;
  longlong local_708;
  ulonglong local_700;
  longlong local_6f8;
  ulonglong local_6f0;
  int local_6e8;
  undefined1 local_6e0 [8];
  longlong *local_6d8;
  undefined1 local_6c8 [8];
  longlong *local_6c0;
  undefined1 local_6b0 [8];
  longlong *local_6a8;
  undefined1 local_698;
  undefined1 local_697;
  longlong local_690;
  undefined1 local_688;
  undefined1 local_678 [8];
  undefined1 local_670 [8];
  longlong *local_668;
  undefined1 local_660 [8];
  longlong *local_658;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_628 [128];
  longlong local_5a8;
  undefined1 local_588 [128];
  longlong local_508;
  undefined1 local_4e8 [128];
  longlong local_468;
  undefined1 local_448 [128];
  longlong local_3c8;
  undefined1 local_3a8 [256];
  longlong local_2a8;
  undefined1 local_288 [256];
  longlong local_188;
  undefined1 local_168 [256];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_768;
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x28) + 0xa8))
                     (*(longlong **)(param_1 + 0x28),local_670);
  iVar5 = (**(code **)(*(longlong *)*puVar8 + 0x118))((longlong *)*puVar8,&local_710);
  if (local_668 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_668 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_668)(local_668);
      LOCK();
      piVar14 = (int *)((longlong)local_668 + 0xc);
      iVar6 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_668 + 8))(local_668,1);
      }
    }
  }
  if (((local_710 == 2) && (iVar5 == 2)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))
                        (*(longlong **)(param_1 + 0x28),param_2), cVar4 != '\0')) {
    iVar5 = *(int *)(param_1 + 0x20);
    if (iVar5 == 2) {
      iVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x70))();
      iVar15 = 1;
      if (0 < iVar6) {
        do {
          FString::PrintfImpl(&local_720,L"Achievement_%d",iVar15);
          puVar13 = &DAT_143f3eda8;
          if (local_718 != 0) {
            puVar13 = local_720;
          }
          lVar9 = TStringConversion<FTCHARToUTF8_Convert,128>::
                  TStringConversion<FTCHARToUTF8_Convert,128>(local_628,puVar13);
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))
                            (*(longlong **)(param_1 + 0x30),*(undefined8 *)(lVar9 + 0x88),local_728,
                             &local_70c);
          bVar17 = cVar4 == '\0';
          if (local_5a8 != 0) {
            FMemory::Free();
          }
          if (!bVar17) {
            local_6e8 = 0;
            FText::FText(local_6e0);
            FText::FText(local_6c8);
            FText::FText(local_6b0);
            local_730 = 0;
            local_698 = local_728[0];
            uVar10 = (ulonglong)local_70c;
            local_738 = 0;
            local_740 = 0;
            local_748 = 0;
            local_6e8 = iVar15;
            local_697 = bVar17;
            local_688 = bVar17;
            plVar11 = (longlong *)FDateTime::FDateTime(local_678,0x7b2,1);
            local_690 = *plVar11 + uVar10 * 10000000;
            puVar13 = &DAT_143f3eda8;
            if (local_718 != 0) {
              puVar13 = local_720;
            }
            lVar9 = TStringConversion<FTCHARToUTF8_Convert,128>::
                    TStringConversion<FTCHARToUTF8_Convert,128>(local_588,puVar13);
            uVar12 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x60))
                               (*(longlong **)(param_1 + 0x30),*(undefined8 *)(lVar9 + 0x88),
                                &DAT_143f7ef34);
            lVar9 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                    TStringConversion<FUTF8ToTCHAR_Convert,128>(local_3a8,uVar12);
            psVar2 = *(short **)(lVar9 + 0x108);
            local_708 = 0;
            local_700 = 0;
            if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
              lVar9 = -1;
              do {
                lVar3 = lVar9 + 1;
                lVar9 = lVar9 + 1;
              } while (psVar2[lVar3] != 0);
              uVar16 = (int)lVar9 + 1;
              local_700 = (ulonglong)uVar16;
              if (0 < (int)uVar16) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_708,0);
              }
              FGenericPlatformString::Memcpy(local_708,psVar2,(longlong)(int)uVar16 * 2);
            }
            uVar12 = FText::FromString(local_660,&local_708);
            FText::operator=(local_6e0,uVar12);
            plVar11 = local_658;
            if (local_658 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_658 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_658)(local_658);
                LOCK();
                piVar14 = (int *)((longlong)plVar11 + 0xc);
                iVar7 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
            if (local_708 != 0) {
              FMemory::Free();
            }
            if (local_2a8 != 0) {
              FMemory::Free();
            }
            if (local_508 != 0) {
              FMemory::Free();
            }
            puVar13 = &DAT_143f3eda8;
            if (local_718 != 0) {
              puVar13 = local_720;
            }
            lVar9 = TStringConversion<FTCHARToUTF8_Convert,128>::
                    TStringConversion<FTCHARToUTF8_Convert,128>(local_4e8,puVar13);
            uVar12 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x60))
                               (*(longlong **)(param_1 + 0x30),*(undefined8 *)(lVar9 + 0x88),
                                &DAT_143f7f054);
            lVar9 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                    TStringConversion<FUTF8ToTCHAR_Convert,128>(local_288,uVar12);
            psVar2 = *(short **)(lVar9 + 0x108);
            local_6f8 = 0;
            local_6f0 = 0;
            if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
              lVar9 = -1;
              do {
                lVar3 = lVar9 + 1;
                lVar9 = lVar9 + 1;
              } while (psVar2[lVar3] != 0);
              uVar16 = (int)lVar9 + 1;
              local_6f0 = (ulonglong)uVar16;
              if (0 < (int)uVar16) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6f8,0);
              }
              FGenericPlatformString::Memcpy(local_6f8,psVar2,(longlong)(int)uVar16 * 2);
            }
            uVar12 = FText::FromString(local_648,&local_6f8);
            FText::operator=(local_6c8,uVar12);
            plVar11 = local_640;
            if (local_640 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_640 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_640)(local_640);
                LOCK();
                piVar14 = (int *)((longlong)plVar11 + 0xc);
                iVar7 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
            if (local_6f8 != 0) {
              FMemory::Free();
            }
            if (local_188 != 0) {
              FMemory::Free();
            }
            if (local_468 != 0) {
              FMemory::Free();
            }
            FText::operator=(local_6b0,local_6c8);
            puVar13 = &DAT_143f3eda8;
            if (local_718 != 0) {
              puVar13 = local_720;
            }
            lVar9 = TStringConversion<FTCHARToUTF8_Convert,128>::
                    TStringConversion<FTCHARToUTF8_Convert,128>(local_448,puVar13);
            uVar12 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x60))
                               (*(longlong **)(param_1 + 0x30),*(undefined8 *)(lVar9 + 0x88),
                                &DAT_143f7f0e4);
            lVar9 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                    TStringConversion<FUTF8ToTCHAR_Convert,128>(local_168,uVar12);
            iVar7 = _wtoi(*(wchar_t **)(lVar9 + 0x108));
            local_697 = iVar7 != 0;
            if (local_68 != 0) {
              FMemory::Free();
            }
            if (local_3c8 != 0) {
              FMemory::Free();
            }
            iVar7 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar7 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar7 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
              ResizeGrow(param_3,iVar7);
            }
            piVar14 = (int *)((longlong)iVar7 * 0x68 + *param_3);
            *piVar14 = local_6e8;
            FText::FText(piVar14 + 2,local_6e0);
            FText::FText(piVar14 + 8,local_6c8);
            FText::FText(piVar14 + 0xe,local_6b0);
            plVar11 = local_6a8;
            *(undefined1 *)(piVar14 + 0x14) = local_698;
            *(undefined1 *)((longlong)piVar14 + 0x51) = local_697;
            *(longlong *)(piVar14 + 0x16) = local_690;
            *(undefined1 *)(piVar14 + 0x18) = local_688;
            if (local_6a8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_6a8 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_6a8)(local_6a8);
                LOCK();
                piVar14 = (int *)((longlong)plVar11 + 0xc);
                iVar7 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
            plVar11 = local_6c0;
            if (local_6c0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_6c0 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_6c0)(local_6c0);
                LOCK();
                piVar14 = (int *)((longlong)plVar11 + 0xc);
                iVar7 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
            plVar11 = local_6d8;
            if (local_6d8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_6d8 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_6d8)(local_6d8);
                LOCK();
                piVar14 = (int *)((longlong)plVar11 + 0xc);
                iVar7 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
          }
          if (local_720 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 <= iVar6);
      }
    }
  }
  else {
    iVar5 = 3;
  }
  return iVar5;
}



// FUNCTION 14050e730 FUN_14050e730 body=128 status=ok
// SIG undefined FUN_14050e730(void)

void FUN_14050e730(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 local_res8 [8];
  longlong local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x28);
  local_res8[0] = 0;
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x68))(plVar1,local_18,1);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar4;
  }
  (**(code **)(*param_2 + 8))(param_2,puVar5,local_res8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  lVar2 = *param_2;
  uVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
  (**(code **)(lVar2 + 0x30))(param_2,uVar3);
  return;
}



// FUNCTION 14050e7b0 GetDesiredValueString body=37 status=ok
// SIG undefined GetDesiredValueString(void)

undefined8 FScheduledInt::GetDesiredValueString(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,&DAT_143f7f9f4,*(undefined4 *)(param_1 + 0x74));
  return param_2;
}



// FUNCTION 14050e7e0 FUN_14050e7e0 body=208 status=ok
// SIG undefined FUN_14050e7e0(void)

longlong * FUN_14050e7e0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  lVar3 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar3 + 0x18),&local_28,param_3);
  *param_2 = 0;
  param_2[1] = 0;
  if (local_28 != 0) {
    plVar4 = (longlong *)FUN_142b46360(local_28,local_18);
    if (param_2 != plVar4) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar4;
      *plVar4 = 0;
      *(int *)(param_2 + 1) = (int)plVar4[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
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
  return param_2;
}



// FUNCTION 14050e8c0 GetOnMessageTokenActivated body=5 status=ok
// SIG undefined GetOnMessageTokenActivated(void)

longlong IMessageToken::GetOnMessageTokenActivated(longlong param_1)

{
  return param_1 + 0x18;
}



// FUNCTION 14050e8d0 PostCode body=6 status=ok
// SIG AKRESULT PostCode(ErrorCode param_1, ErrorLevel param_2, ulong param_3, __uint64 param_4, ulong param_5, bool param_6)

/* enum AKRESULT __cdecl AK::Monitor::PostCode(enum AK::Monitor::ErrorCode,enum
   AK::Monitor::ErrorLevel,unsigned long,unsigned __int64,unsigned long,bool) */

AKRESULT __cdecl
AK::Monitor::PostCode
          (ErrorCode param_1,ErrorLevel param_2,ulong param_3,__uint64 param_4,ulong param_5,
          bool param_6)

{
                    /* 0x50e8d0  302
                       ?PostCode@Monitor@AK@@YA?AW4AKRESULT@@W4ErrorCode@12@W4ErrorLevel@12@K_KK_N@Z
                       0x50e8d0  307
                       ?PostString@Monitor@AK@@YA?AW4AKRESULT@@PEBDW4ErrorLevel@12@K_KK_N@Z
                       0x50e8d0  308
                       ?PostString@Monitor@AK@@YA?AW4AKRESULT@@PEB_WW4ErrorLevel@12@K_KK_N@Z
                       0x50e8d0  421
                       ?SetLocalOutput@Monitor@AK@@YA?AW4AKRESULT@@KP6AXW4ErrorCode@12@PEB_WW4ErrorLevel@12@K_K@Z@Z
                       0x50e8d0  466  ?StartProfilerCapture@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W@Z
                       0x50e8d0  473  ?StopProfilerCapture@SoundEngine@AK@@YA?AW4AKRESULT@@XZ */
  return 4;
}



// FUNCTION 14050e8e0 FUN_14050e8e0 body=6 status=ok
// SIG undefined FUN_14050e8e0(void)

undefined8 FUN_14050e8e0(void)

{
  return 9;
}



// FUNCTION 14050e8f0 GetCallbackSizeBytes body=6 status=ok
// SIG undefined GetCallbackSizeBytes(void)

undefined8 CCallbackImpl<16>::GetCallbackSizeBytes(void)

{
  return 0x10;
}



// FUNCTION 14050e900 GetCallbackSizeBytes body=6 status=ok
// SIG undefined GetCallbackSizeBytes(void)

undefined8 CCallbackImpl<20>::GetCallbackSizeBytes(void)

{
  return 0x14;
}



// FUNCTION 14050e910 GetCallbackSizeBytes body=6 status=ok
// SIG undefined GetCallbackSizeBytes(void)

undefined8 CCallbackImpl<32>::GetCallbackSizeBytes(void)

{
  return 0x20;
}



// FUNCTION 14050e920 GetCallbackSizeBytes body=6 status=ok
// SIG undefined GetCallbackSizeBytes(void)

undefined8 CCallbackImpl<12>::GetCallbackSizeBytes(void)

{
  return 0xc;
}



// FUNCTION 14050e930 FUN_14050e930 body=130 status=ok
// SIG undefined FUN_14050e930(void)

undefined8 FUN_14050e930(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146853320) {
    _Init_thread_header(&DAT_146853320);
    if (DAT_146853320 == -1) {
      FName::FName(&DAT_146853318,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_146853320);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_146853318);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x10);
  }
  return 0;
}



// FUNCTION 14050e9c0 FUN_14050e9c0 body=605 status=ok
// SIG undefined FUN_14050e9c0(void)

undefined8 FUN_14050e9c0(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  plVar3 = *(longlong **)(param_1 + 0xa8);
  uVar9 = 0;
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (lVar4 != 0) {
    if (*(char *)(param_1 + 0x3a) == '\0') {
      if ((*(longlong **)(lVar4 + 0x18) == (longlong *)0x0) ||
         (cVar6 = (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x78))(), cVar6 == '\0'))
      goto LAB_14050ebcd;
      iVar7 = (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x38))();
      if (0 < param_3) {
        iVar7 = param_3;
      }
      puVar11 = &DAT_143f3eda8;
      if (DAT_146b18950 != 0) {
        puVar11 = DAT_146b18948;
      }
      puVar8 = (undefined8 *)
               (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x68))
                         (*(longlong **)(lVar4 + 0x18),local_38,0);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*puVar8;
      }
      puVar10 = &DAT_143f3eda8;
      if (DAT_146b18940 != 0) {
        puVar10 = DAT_146b18938;
      }
      FString::PrintfImpl(&local_58,L"%s://%s:%d?%s",puVar10,puVar12,iVar7,puVar11);
      if (param_2 == &local_58) {
        if (local_58 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*param_2 != 0) {
          FMemory::Free();
        }
        *param_2 = local_58;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_50;
        uVar5 = local_50._4_4_;
        local_50 = 0;
        local_58 = 0;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
      }
    }
    else {
      if ((*(longlong **)(lVar4 + 8) == (longlong *)0x0) ||
         (cVar6 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x78))(), cVar6 == '\0'))
      goto LAB_14050ebcd;
      iVar7 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x38))();
      if (0 < param_3) {
        iVar7 = param_3;
      }
      puVar8 = (undefined8 *)
               (**(code **)(**(longlong **)(lVar4 + 8) + 0x68))
                         (*(longlong **)(lVar4 + 8),local_28,0);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(&local_48,L"%s:%d",puVar11,iVar7);
      if (param_2 == &local_48) {
        local_38[0] = local_28[0];
        if (local_48 != 0) {
          FMemory::Free();
          local_38[0] = local_28[0];
        }
      }
      else {
        if (*param_2 != 0) {
          FMemory::Free();
        }
        *param_2 = local_48;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_40;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
        local_40 = 0;
        local_48 = 0;
        local_38[0] = local_28[0];
      }
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    uVar9 = 1;
  }
LAB_14050ebcd:
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
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 14050ec50 FUN_14050ec50 body=1852 status=ok
// SIG undefined FUN_14050ec50(void)

/* WARNING: Removing unreachable block (ram,0x00014050f23d) */
/* WARNING: Removing unreachable block (ram,0x00014050f022) */
/* WARNING: Removing unreachable block (ram,0x00014050ef44) */
/* WARNING: Removing unreachable block (ram,0x00014050eed5) */
/* WARNING: Removing unreachable block (ram,0x00014050efb3) */
/* WARNING: Removing unreachable block (ram,0x00014050f15c) */
/* WARNING: Removing unreachable block (ram,0x00014050f1d7) */
/* WARNING: Removing unreachable block (ram,0x00014050f2d6) */

void FUN_14050ec50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined **local_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  ulonglong uVar13;
  
  local_c0 = 0xc;
  uVar13 = 0;
  local_c8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  uVar4 = local_c8;
  FGenericPlatformString::Memcpy(local_c8,L"Voice state",0x18);
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
  }
  puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
  *puVar8 = uVar4;
  *(undefined4 *)(puVar8 + 1) = (undefined4)local_c0;
  *(undefined4 *)((longlong)puVar8 + 0xc) = local_c0._4_4_;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    local_b8 = 0;
    local_b0 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    uVar4 = local_b8;
    FGenericPlatformString::Memcpy(local_b8,L"No Voice Engine!",0x22);
    iVar7 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
    }
    puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
    *puVar8 = uVar4;
    *(undefined4 *)(puVar8 + 1) = (undefined4)local_b0;
    *(undefined4 *)((longlong)puVar8 + 0xc) = local_b0._4_4_;
  }
  else {
    FUN_14050f390(*(longlong *)(param_1 + 0x48),param_2);
  }
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
  }
  local_a8 = 0;
  puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
  local_a0 = 0xe;
  *puVar8 = 0;
  puVar8[1] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  uVar4 = local_a8;
  FGenericPlatformString::Memcpy(local_a8,L"Local Talker:",0x1c);
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
  }
  puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
  *puVar8 = uVar4;
  *(undefined4 *)(puVar8 + 1) = (undefined4)local_a0;
  *(undefined4 *)((longlong)puVar8 + 0xc) = local_a0._4_4_;
  puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  puVar8 = (undefined8 *)(**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,local_res8);
  local_78 = &PTR_FUN_143f9a6c8;
  local_res10 = *puVar8;
  local_70 = 0;
  plStack_68 = (longlong *)0x0;
  local_60 = local_res10;
  puVar8 = (undefined8 *)FUN_140527a10(&local_78,local_58);
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
  }
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
  *puVar9 = 0;
  *puVar9 = *puVar8;
  *puVar8 = 0;
  *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar8 + 1);
  *(undefined4 *)((longlong)puVar9 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
  puVar8[1] = 0;
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_148,L"Registered: %d",
                      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x10));
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
  }
  puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
  *puVar8 = 0;
  *puVar8 = local_148;
  *(undefined4 *)(puVar8 + 1) = (undefined4)local_140;
  *(undefined4 *)((longlong)puVar8 + 0xc) = local_140._4_4_;
  local_140 = 0;
  local_148 = 0;
  FString::PrintfImpl(&local_138,L"Networked: %d",
                      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x11));
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
  }
  puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
  *puVar8 = 0;
  *puVar8 = local_138;
  *(undefined4 *)(puVar8 + 1) = (undefined4)local_130;
  *(undefined4 *)((longlong)puVar8 + 0xc) = local_130._4_4_;
  local_130 = 0;
  local_138 = 0;
  FString::PrintfImpl(&local_128,L"Talking: %d",
                      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x39));
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
  }
  puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
  *puVar8 = 0;
  *puVar8 = local_128;
  *(undefined4 *)(puVar8 + 1) = (undefined4)local_120;
  *(undefined4 *)((longlong)puVar8 + 0xc) = local_120._4_4_;
  local_120 = 0;
  local_128 = 0;
  FString::PrintfImpl(&local_118,L"WasTalking: %d",
                      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x38));
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
  }
  puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
  *puVar8 = 0;
  *puVar8 = local_118;
  *(undefined4 *)(puVar8 + 1) = (undefined4)local_110;
  *(undefined4 *)((longlong)puVar8 + 0xc) = local_110._4_4_;
  local_110 = 0;
  local_118 = 0;
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
  }
  local_98 = 0;
  puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
  local_90 = 0x10;
  *puVar8 = 0;
  puVar8[1] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  uVar4 = local_98;
  FGenericPlatformString::Memcpy(local_98,L"Remote Talkers:",0x20);
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
  }
  puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
  *puVar8 = uVar4;
  *(undefined4 *)(puVar8 + 1) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar8 + 0xc) = local_90._4_4_;
  uVar14 = uVar13;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar14);
      puVar8 = (undefined8 *)
               (**(code **)(*(longlong *)*puVar9 + 0x30))((longlong *)*puVar9,local_48);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(&local_108,L"[%d]: %s",uVar13,puVar11);
      lVar3 = param_2[1];
      iVar7 = (int)lVar3 + 1;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
      }
      puVar8 = (undefined8 *)((longlong)(int)lVar3 * 0x10 + *param_2);
      *puVar8 = 0;
      *puVar8 = local_108;
      *(undefined4 *)(puVar8 + 1) = (undefined4)local_100;
      *(undefined4 *)((longlong)puVar8 + 0xc) = local_100._4_4_;
      local_100 = 0;
      local_108 = 0;
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      FString::PrintfImpl(&local_f8,L"Talking: %d",*(undefined1 *)((longlong)puVar9 + 0x31));
      lVar3 = param_2[1];
      iVar7 = (int)lVar3 + 1;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
      }
      puVar8 = (undefined8 *)((longlong)(int)lVar3 * 0x10 + *param_2);
      *puVar8 = 0;
      *puVar8 = local_f8;
      *(undefined4 *)(puVar8 + 1) = (undefined4)local_f0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = local_f0._4_4_;
      local_f0 = 0;
      local_f8 = 0;
      FString::PrintfImpl(&local_e8,L"WasTalking: %d",*(undefined1 *)(puVar9 + 6));
      lVar3 = param_2[1];
      iVar7 = (int)lVar3 + 1;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
      }
      puVar8 = (undefined8 *)((longlong)(int)lVar3 * 0x10 + *param_2);
      *puVar8 = 0;
      *puVar8 = local_e8;
      *(undefined4 *)(puVar8 + 1) = (undefined4)local_e0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = local_e0._4_4_;
      local_e0 = 0;
      local_e8 = 0;
      local_88 = *puVar9;
      local_80 = (longlong *)puVar9[1];
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      cVar6 = FUN_140517210(param_1,&local_88);
      puVar10 = &DAT_143f7ee44;
      if (cVar6 != '\0') {
        puVar10 = &DAT_143f7ee24;
      }
      FString::PrintfImpl(&local_d8,L"Muted: %s",puVar10);
      iVar7 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
      }
      plVar5 = local_80;
      puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
      *puVar8 = 0;
      *puVar8 = local_d8;
      *(undefined4 *)(puVar8 + 1) = (undefined4)local_d0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = local_d0._4_4_;
      local_d0 = 0;
      local_d8 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      iVar7 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      puVar8 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
      *puVar8 = 0;
      puVar8[1] = 0;
      uVar14 = uVar14 + 0x38;
    } while ((int)uVar12 < *(int *)(param_1 + 0x78));
  }
  if (plStack_68 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_68 + 0xc);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)(*plStack_68 + 8))(plStack_68,1);
    }
  }
  return;
}



// FUNCTION 14050f390 FUN_14050f390 body=501 status=ok
// SIG undefined FUN_14050f390(void)

/* WARNING: Removing unreachable block (ram,0x00014050f4c1) */
/* WARNING: Removing unreachable block (ram,0x00014050f42c) */
/* WARNING: Removing unreachable block (ram,0x00014050f566) */

void FUN_14050f390(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  longlong local_28;
  longlong *local_20;
  
  lVar7 = 0;
  if ((*(char *)((longlong)param_1 + 0x31) != '\0') || (lVar8 = lVar7, (char)param_1[6] != '\0')) {
    lVar8 = 1;
  }
  FString::PrintfImpl(&local_58,L"IsRecording: %d",lVar8);
  iVar3 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
  }
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
  *puVar6 = 0;
  *puVar6 = local_58;
  *(undefined4 *)(puVar6 + 1) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar6 + 0xc) = local_50._4_4_;
  local_50 = 0;
  local_58 = 0;
  lVar8 = param_1[4];
  uVar5 = 0;
  if (lVar8 != 0) {
    local_20 = (longlong *)param_1[5];
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    local_28 = lVar8;
    uVar5 = (**(code **)(*param_1 + 0x68))(param_1,&local_28);
    lVar7 = 1;
  }
  FString::PrintfImpl(&local_48,L"DataReady: 0x%08x",uVar5);
  iVar3 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
  }
  plVar4 = local_20;
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
  *puVar6 = 0;
  *puVar6 = local_48;
  *(undefined4 *)(puVar6 + 1) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar6 + 0xc) = local_40._4_4_;
  local_40 = 0;
  local_48 = 0;
  if ((lVar7 != 0) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
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
  FString::PrintfImpl(&local_38,L"BufferRemaining: %d",(int)param_1[8]);
  iVar3 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
  }
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
  *puVar6 = 0;
  *puVar6 = local_38;
  *(undefined4 *)(puVar6 + 1) = local_30;
  *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_2c;
  return;
}



// FUNCTION 14050f590 FUN_14050f590 body=183 status=ok
// SIG undefined FUN_14050f590(void)

undefined8 * FUN_14050f590(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  longlong local_18 [2];
  
  local_18[1] = 9;
  *param_2 = 0;
  param_2[1] = 0;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"nickname",0x12);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x20,local_res8,local_18);
  lVar1 = 0;
  if (local_res8[0] != -1) {
    lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)local_res8[0] * 0x28;
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    FString::operator=(param_2);
  }
  if (local_18[0] != 0) {
    FMemory::Free(local_18[0]);
  }
  return param_2;
}



// FUNCTION 14050f650 FUN_14050f650 body=391 status=ok
// SIG undefined FUN_14050f650(void)

int FUN_14050f650(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  
  if (*(int *)(param_1 + 0x140) == 2) {
    iVar5 = *(int *)((longlong)param_2 + 0xc);
    iVar8 = (int)param_2[1];
    if (iVar5 < 0) {
      if (iVar8 != 0) {
        plVar7 = (longlong *)(*param_2 + 8);
        do {
          plVar3 = (longlong *)*plVar7;
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
          plVar7 = plVar7 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar5 = *(int *)((longlong)param_2 + 0xc);
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (iVar5 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
      }
    }
    else {
      if (iVar8 != 0) {
        plVar7 = (longlong *)(*param_2 + 8);
        do {
          plVar3 = (longlong *)*plVar7;
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
          plVar7 = plVar7 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      *(undefined4 *)(param_2 + 1) = 0;
    }
    iVar5 = *(int *)(param_1 + 0x150);
    if (iVar5 != 0) {
      iVar8 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar8 + iVar5) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2);
        iVar8 = (int)param_2[1];
      }
      puVar9 = *(undefined8 **)(param_1 + 0x148);
      puVar6 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_2);
      iVar8 = iVar5;
      do {
        *puVar6 = *puVar9;
        lVar4 = puVar9[1];
        puVar6[1] = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        puVar6 = puVar6 + 2;
        puVar9 = puVar9 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar5;
    }
    return 2;
  }
  return *(int *)(param_1 + 0x140);
}



// FUNCTION 14050f810 FUN_14050f810 body=788 status=ok
// SIG undefined FUN_14050f810(void)

undefined8 *
FUN_14050f810(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             int param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_78 = 0;
  uStack_70 = 0;
  if ((((*(longlong *)(param_1 + 0xe0) != 0) && (cVar7 = FUN_140516dc0(), cVar7 != '\0')) &&
      (cVar7 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xf8))
                         (*(longlong **)(param_1 + 0xe0),param_3), cVar7 != '\0')) &&
     ((*(longlong *)(param_1 + 0x120) != 0 &&
      (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x118) + 8))(), cVar7 != '\0')))) {
    if (param_5 - 4U < 2) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    if (param_5 == 3) {
      puVar10 = *(undefined8 **)(param_1 + 0x108);
      puVar9 = puVar10 + (longlong)*(int *)(param_1 + 0x110) * 2;
      for (; puVar10 != puVar9; puVar10 = puVar10 + 2) {
        puVar4 = (undefined8 *)*param_4;
        puVar8 = (undefined8 *)
                 (**(code **)(*(longlong *)*puVar10 + 8))((longlong *)*puVar10,local_48);
        cVar7 = (**(code **)*puVar4)(puVar4,*puVar8);
        plVar5 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if (cVar7 != '\0') {
          local_60 = (longlong *)puVar10[1];
          local_78 = *puVar10;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          local_68 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_70,&local_60);
          plVar5 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            lVar12 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = local_60;
joined_r0x00014050faf5:
              if (iVar11 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          break;
        }
      }
    }
    else {
      iVar11 = 0;
      if (0 < *(int *)(param_1 + 0xf8)) {
        lVar12 = 0;
        do {
          puVar10 = (undefined8 *)*param_4;
          plVar5 = *(longlong **)(lVar12 + *(longlong *)(param_1 + 0xf0));
          puVar9 = (undefined8 *)(**(code **)(*plVar5 + 8))(plVar5,local_38);
          cVar7 = (**(code **)*puVar10)(puVar10,*puVar9);
          plVar5 = local_30;
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_30 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_30)(local_30);
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
          if (cVar7 != '\0') {
            puVar10 = (undefined8 *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0xf0));
            local_50 = (longlong *)puVar10[1];
            local_78 = *puVar10;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_50 + 1) = (int)local_50[1] + 1;
              UNLOCK();
            }
            local_58 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_70,&local_50);
            plVar5 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_50 + 1;
              lVar12 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar5 = local_50;
                goto joined_r0x00014050faf5;
              }
            }
            break;
          }
          iVar11 = iVar11 + 1;
          lVar12 = lVar12 + 0x10;
        } while (iVar11 < *(int *)(param_1 + 0xf8));
      }
    }
  }
  *param_2 = local_78;
  param_2[1] = uStack_70;
  return param_2;
}



// FUNCTION 14050fb60 FUN_14050fb60 body=953 status=ok
// SIG undefined FUN_14050fb60(void)

int FUN_14050fb60(longlong param_1,undefined8 param_2,int param_3,longlong *param_4,int *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  if ((((*(longlong *)(param_1 + 0xe0) == 0) || (cVar7 = FUN_140516dc0(), cVar7 == '\0')) ||
      (cVar7 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xf8))
                         (*(longlong **)(param_1 + 0xe0),param_2), cVar7 == '\0')) ||
     ((*(longlong *)(param_1 + 0x120) == 0 ||
      (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x118) + 8))(), cVar7 == '\0')))) {
    iVar16 = 3;
  }
  else if (param_3 - 4U < 2) {
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_4,0);
    iVar16 = 2;
  }
  else if (param_3 == 3) {
    iVar16 = *(int *)(param_1 + 0x100);
    if (iVar16 == 2) {
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_4,0);
      iVar15 = param_5[1];
      if (iVar15 < 1) {
        iVar15 = *(int *)(param_1 + 0x110);
      }
      iVar14 = 0;
      if (0 < iVar15) {
        do {
          iVar10 = *param_5 + iVar14;
          if (iVar10 < 0) {
            return 2;
          }
          if (*(int *)(param_1 + 0x110) <= iVar10) {
            return 2;
          }
          puVar8 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x108));
          plVar4 = (longlong *)puVar8[1];
          uVar5 = *puVar8;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          iVar10 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar10 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar10 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar10);
          }
          puVar8 = (undefined8 *)((longlong)iVar10 * 0x10 + *param_4);
          *puVar8 = uVar5;
          puVar8[1] = plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar4 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar10 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((iVar10 == 1) && (plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar15);
      }
    }
  }
  else {
    iVar16 = *(int *)(param_1 + 0xe8);
    if (iVar16 == 2) {
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_4,0);
      iVar15 = 0;
      local_38 = 0;
      local_30 = 0;
      if (param_3 == 2) {
        puVar8 = *(undefined8 **)(param_1 + 0xf0);
        puVar13 = puVar8 + (longlong)*(int *)(param_1 + 0xf8) * 2;
        local_58 = 0;
        local_50 = 0;
        for (; puVar8 != puVar13; puVar8 = puVar8 + 2) {
          lVar9 = (**(code **)(*(longlong *)*puVar8 + 0x38))();
          uVar6 = local_50;
          if ((*(byte *)(lVar9 + 0x10) & 4) != 0) {
            lVar9 = (longlong)(int)local_50;
            iVar14 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar14);
            if (local_50._4_4_ < iVar14) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar6 & 0xffffffff);
            }
            puVar12 = (undefined8 *)(lVar9 * 0x10 + local_58);
            *puVar12 = *puVar8;
            lVar9 = puVar8[1];
            puVar12[1] = lVar9;
            if (lVar9 != 0) {
              LOCK();
              *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
              UNLOCK();
            }
          }
        }
        TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>::
        operator=(&local_38,&local_58);
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
      }
      else if (param_3 == 1) {
        puVar8 = *(undefined8 **)(param_1 + 0xf0);
        puVar13 = puVar8 + (longlong)*(int *)(param_1 + 0xf8) * 2;
        local_48 = 0;
        local_40 = 0;
        for (; puVar8 != puVar13; puVar8 = puVar8 + 2) {
          lVar9 = (**(code **)(*(longlong *)*puVar8 + 0x38))();
          uVar6 = local_40;
          if ((*(byte *)(lVar9 + 0x10) & 1) != 0) {
            lVar9 = (longlong)(int)local_40;
            iVar14 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar14);
            if (local_40._4_4_ < iVar14) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48,uVar6 & 0xffffffff);
            }
            puVar12 = (undefined8 *)(lVar9 * 0x10 + local_48);
            *puVar12 = *puVar8;
            lVar9 = puVar8[1];
            puVar12[1] = lVar9;
            if (lVar9 != 0) {
              LOCK();
              *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
              UNLOCK();
            }
          }
        }
        TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>::
        operator=(&local_38,&local_48);
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_48);
      }
      else {
        TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_38);
      }
      iVar14 = (int)local_30;
      if (0 < param_5[1]) {
        iVar14 = param_5[1];
      }
      iVar10 = (int)local_30;
      if (0 < iVar14) {
        do {
          iVar11 = *param_5 + iVar15;
          if ((-1 < iVar11) && (iVar11 < iVar10)) {
            iVar3 = (int)param_4[1];
            puVar8 = (undefined8 *)((longlong)iVar11 * 0x10 + local_38);
            *(int *)(param_4 + 1) = iVar3 + 1;
            if (*(int *)((longlong)param_4 + 0xc) < iVar3 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar3);
            }
            puVar13 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_4);
            *puVar13 = *puVar8;
            lVar9 = puVar8[1];
            puVar13[1] = lVar9;
            if (lVar9 != 0) {
              LOCK();
              *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
              UNLOCK();
              iVar10 = (int)local_30;
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar14);
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_38);
    }
  }
  return iVar16;
}



// FUNCTION 14050ff60 FUN_14050ff60 body=442 status=ok
// SIG undefined FUN_14050ff60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14050ff60(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  undefined2 *local_148;
  int local_140;
  undefined2 *local_138;
  int local_130;
  longlong local_120;
  longlong local_110;
  longlong *local_100;
  int local_f8;
  longlong local_f0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar2 = 0x32;
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  FUN_14289aca0(&local_148,0,puVar6,0);
  puVar6 = &DAT_143f3eda8;
  if (DAT_146b18940 != 0) {
    puVar6 = DAT_146b18938;
  }
  puVar5 = &DAT_143f3eda8;
  if (local_140 != 0) {
    puVar5 = local_148;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
  if (iVar1 == 0) {
    puVar6 = &DAT_143f3eda8;
    if (local_130 != 0) {
      puVar6 = local_138;
    }
    (**(code **)(*param_3 + 8))(param_3,puVar6,local_158);
  }
  else {
    uVar3 = FName::FName(local_d8,L"WINDOWS",1);
    plVar4 = (longlong *)FUN_1419c6b80(uVar3);
    if (plVar4 == (longlong *)0x0) {
      uVar2 = 0x15;
    }
    else {
      puVar6 = &DAT_143f3eda8;
      if (local_130 != 0) {
        puVar6 = local_138;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar6);
      uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4,local_40,param_3);
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
  plVar4 = local_100;
  if (local_f0 != 0) {
    FMemory::Free();
    plVar4 = local_100;
  }
  for (; local_f8 != 0; local_f8 = local_f8 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_100 != (longlong *)0x0) {
    FMemory::Free(local_100);
  }
  if (local_110 != 0) {
    FMemory::Free();
  }
  if (local_120 != 0) {
    FMemory::Free();
  }
  if (local_138 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 140510190 FUN_140510190 body=147 status=ok
// SIG undefined FUN_140510190(void)

longlong * FUN_140510190(longlong param_1,longlong *param_2)

{
  BOOL BVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  }
  plVar5 = (longlong *)0x0;
  if (0 < *(int *)(param_1 + 0x38)) {
    plVar2 = *(longlong **)(param_1 + 0x30);
    plVar3 = plVar5;
    plVar4 = plVar5;
    do {
      if (*plVar2 == *param_2) {
        plVar5 = *(longlong **)(param_1 + 0x30) + (longlong)(int)plVar4 * 5;
        break;
      }
      plVar4 = (longlong *)(ulonglong)((int)plVar4 + 1);
      plVar3 = (longlong *)((longlong)plVar3 + 1);
      plVar2 = plVar2 + 5;
    } while ((longlong)plVar3 < (longlong)*(int *)(param_1 + 0x38));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return plVar5;
}



// FUNCTION 140510230 GetLeaderboardStatName body=267 status=ok
// SIG undefined GetLeaderboardStatName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 GetLeaderboardStatName(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  int local_f0;
  longlong local_e8 [2];
  longlong local_d8 [2];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  puVar1 = (undefined8 *)FName::ToString(param_3,local_d8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)FName::ToString(param_2,local_e8);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(&local_f8,L"%s_%s",puVar3,puVar2);
  puVar2 = &DAT_143f3eda8;
  if (local_f0 != 0) {
    puVar2 = local_f8;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar2);
  FName::FName(param_1,local_40,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_f8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140510340 FUN_140510340 body=612 status=ok
// SIG undefined FUN_140510340(void)

void FUN_140510340(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  longlong local_48 [2];
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  undefined8 **local_20;
  
  plVar1 = *(longlong **)(param_1 + 8);
  local_48[1] = 9;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_48[0],9,"OWNINGID",9,0x3f);
  local_38 = local_48;
  local_30 = (**(code **)(*plVar1 + 0x28))(plVar1,&local_28);
  FUN_140497620(param_2,local_res8,&local_38,0);
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_48[0],0xb,"OWNINGNAME",0xb,0x3f);
  local_38 = local_48;
  local_30 = param_1 + 0x18;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>(param_2,local_res8,&local_38,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_48[0],0x10,"NUMOPENPRIVCONN",0x10,0x3f);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FString::AppendInt(&local_38,*(undefined4 *)(param_1 + 0xb0));
  local_28 = local_48;
  local_20 = &local_38;
  FUN_140497620(param_2,local_res8,&local_28,0);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_48[0],0xf,"NUMOPENPUBCONN",0xf,0x3f);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FString::AppendInt(&local_38,*(undefined4 *)(param_1 + 0xb4));
  local_28 = local_48;
  local_20 = &local_38;
  FUN_140497620(param_2,local_res8,&local_28,0);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1405105b0(*(longlong *)(param_1 + 0xa0),param_2);
  }
  FUN_140510890(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 1405105b0 FUN_1405105b0 body=729 status=ok
// SIG undefined FUN_1405105b0(void)

void FUN_1405105b0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 local_res8 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_f8 [14];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40 [3];
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,local_res8);
    local_f8[0] = 0;
    local_f8[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_f8[0],7,"HOSTIP",7,0x3f);
    local_f8[8] = 0;
    local_f8[9] = 0;
    FString::AppendInt(local_f8 + 8,local_res8[0]);
    local_80 = local_f8;
    local_78 = local_f8 + 8;
    FUN_140497620(param_2,local_res18,&local_80,0);
    if (local_f8[8] != 0) {
      FMemory::Free();
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
    local_f8[2] = 0;
    local_f8[3] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 2,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_f8[2],9,"HOSTPORT",9,0x3f);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
    local_f8[10] = 0;
    local_f8[0xb] = 0;
    FString::AppendInt(local_f8 + 10,uVar6);
    local_70 = local_f8 + 2;
    local_68 = local_f8 + 10;
    FUN_140497620(param_2,local_res20,&local_70,0);
    if (local_f8[10] != 0) {
      FMemory::Free();
    }
    if (local_f8[2] != 0) {
      FMemory::Free();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_f8[4] = 0;
    local_f8[5] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 4,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_f8[4],8,"P2PADDR",8,0x3f);
    local_60 = local_f8 + 4;
    local_58 = (**(code **)(*plVar3 + 0x68))(plVar3,local_40,0);
    FUN_140497620(param_2,local_88,&local_60,0);
    if (local_40[0] != 0) {
      FMemory::Free();
    }
    if (local_f8[4] != 0) {
      FMemory::Free();
    }
    local_f8[6] = 0;
    local_f8[7] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 6,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_f8[6],8,"P2PPORT",8,0x3f);
    uVar6 = (**(code **)(*plVar3 + 0x38))(plVar3);
    local_f8[0xc] = 0;
    local_f8[0xd] = 0;
    FString::AppendInt(local_f8 + 0xc,uVar6);
    local_50 = local_f8 + 6;
    local_48 = local_f8 + 0xc;
    FUN_140497620(param_2,local_84,&local_50,0);
    if (local_f8[0xc] != 0) {
      FMemory::Free();
    }
    if (local_f8[6] != 0) {
      FMemory::Free();
    }
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
    }
  }
  return;
}



// FUNCTION 140510890 FUN_140510890 body=1169 status=ok
// SIG undefined FUN_140510890(void)

void FUN_140510890(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  longlong local_c8 [2];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint *puStack_a0;
  undefined4 local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong local_88 [2];
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  longlong *local_50;
  longlong *plStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  cVar11 = *(char *)(param_1 + 0x18);
  local_c8[1] = 0xb;
  cVar1 = *(char *)(param_1 + 0x17);
  cVar2 = *(char *)(param_1 + 0x16);
  cVar3 = *(char *)(param_1 + 0x15);
  cVar4 = *(char *)(param_1 + 0x14);
  cVar5 = *(char *)(param_1 + 0x13);
  cVar6 = *(char *)(param_1 + 0x12);
  cVar7 = *(char *)(param_1 + 0x11);
  local_c8[0] = 0;
  cVar8 = *(char *)(param_1 + 0x10);
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_c8[0],0xb,"NUMPUBCONN",0xb,0x3f);
  local_b8 = 0;
  local_b0 = 0;
  FString::AppendInt(&local_b8,*(undefined4 *)(param_1 + 8));
  local_a8 = local_c8;
  puStack_a0 = (uint *)&local_b8;
  FUN_140497620(param_2,local_res8,&local_a8,0);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  local_c8[0] = 0;
  local_c8[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_c8[0],0xc,"NUMPRIVCONN",0xc,0x3f);
  local_b8 = 0;
  local_b0 = 0;
  FString::AppendInt(&local_b8,*(undefined4 *)(param_1 + 0xc));
  local_a8 = local_c8;
  puStack_a0 = (uint *)&local_b8;
  FUN_140497620(param_2,local_res8,&local_a8,0);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  local_c8[0] = 0;
  local_c8[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_c8[0],0xd,"SESSIONFLAGS",0xd,0x3f);
  local_b8 = 0;
  local_b0 = 0;
  FString::AppendInt(&local_b8,
                     -(uint)(cVar11 != '\0') & 0x100 | -(uint)(cVar1 != '\0') & 0x80 |
                     -(uint)(cVar2 != '\0') & 0x40 | -(uint)(cVar3 != '\0') & 0x20 |
                     -(uint)(cVar4 != '\0') & 0x10 | -(uint)(cVar5 != '\0') & 8 |
                     -(uint)(cVar6 != '\0') & 4 | -(uint)(cVar7 != '\0') & 2 | (uint)(cVar8 != '\0')
                    );
  local_a8 = local_c8;
  puStack_a0 = (uint *)&local_b8;
  FUN_140497620(param_2,local_res8,&local_a8,0);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  local_c8[0] = 0;
  local_c8[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_c8[0],0x10,"SHOULDADVERTISE",0x10,0x3f);
  local_b8 = 0;
  local_b0 = 0;
  FString::AppendInt(&local_b8,*(char *)(param_1 + 0x10) != '\0');
  local_a8 = local_c8;
  puStack_a0 = (uint *)&local_b8;
  FUN_140497620(param_2,local_res8,&local_a8,0);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  local_78 = (longlong *)(param_1 + 0x28);
  local_88[0] = 0;
  puStack_a0 = (uint *)(param_1 + 0x38);
  local_88[1] = 0;
  iVar9 = *(int *)(param_1 + 0x50);
  local_a8 = (longlong *)0x100000000;
  iStack_94 = 0;
  iStack_90 = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar15 = puStack_a0;
    }
    uVar12 = *puVar15;
    iStack_90 = 0;
    iVar13 = 0;
    while (uVar12 == 0) {
      iStack_90 = iStack_90 + 0x20;
      uVar10 = (ulonglong)local_a8 >> 0x20;
      local_a8 = (longlong *)CONCAT44((int)uVar10,iVar13 + 1);
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar13) goto LAB_140510c0b;
      uVar12 = puVar15[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar13 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    local_a8 = (longlong *)CONCAT44(uVar12,SUB84(local_a8,0));
    if (uVar12 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    iStack_94 = (iStack_90 - iVar13) + 0x1f;
    if (iVar9 < iStack_94) {
LAB_140510c0b:
      iStack_94 = iVar9;
    }
  }
  local_98 = 0xffffffff;
  uStack_38 = 0xffffffff;
  iStack_34 = iStack_94;
  iStack_30 = iStack_90;
  uStack_2c = uStack_8c;
  plStack_48 = local_a8;
  uStack_60 = 0xffffffff;
  iStack_5c = iStack_94;
  uStack_70 = local_a8;
  local_58 = iStack_90;
  uStack_54 = uStack_8c;
  local_68 = puStack_a0;
  local_50 = local_78;
  puStack_40 = puStack_a0;
  if (iStack_94 < iVar9) {
    do {
      local_res10 = *(undefined8 *)((longlong)iStack_5c * 0x30 + *local_78);
      lVar14 = *local_78 + (longlong)iStack_5c * 0x30;
      if ((1 < *(int *)(lVar14 + 0x20)) &&
         (cVar11 = FUN_140520f80(local_res10,lVar14 + 8,local_88), cVar11 != '\0')) {
        FUN_1404b73f0(lVar14 + 8,&local_b8);
        if (1 < (int)local_b0) {
          local_a8 = local_88;
          puStack_a0 = (uint *)&local_b8;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                    (param_2,local_res8,&local_a8,0);
        }
        if (local_b8 != 0) {
          FMemory::Free();
        }
      }
      uStack_60 = uStack_60 & ~uStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140510d30 FUN_140510d30 body=193 status=ok
// SIG undefined FUN_140510d30(void)

undefined8 FUN_140510d30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = *param_1;
  uVar5 = FUN_141672640();
  puVar6 = (undefined8 *)(**(code **)(lVar4 + 0xb8))(param_1,local_18,uVar5,local_res8);
  lVar4 = puVar6[1];
  uVar5 = *puVar6;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  iVar3 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
  }
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
  *puVar6 = uVar5;
  puVar6[1] = lVar4;
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
  return 1;
}



// FUNCTION 140510e00 FUN_140510e00 body=288 status=ok
// SIG undefined FUN_140510e00(void)

undefined8 * FUN_140510e00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar2 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  if (*plVar2 == 0) {
    puVar3 = (undefined8 *)operator_new(0x30);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f9a840;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[1] = &PTR_FUN_143f9a6c8;
      puVar3[4] = 0;
      *(undefined2 *)(puVar3 + 5) = 0;
      goto LAB_140510ec2;
    }
  }
  else {
    puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    puVar3 = (undefined8 *)
             (**(code **)(*(longlong *)*puVar3 + 0x10))((longlong *)*puVar3,local_res10);
    uVar1 = *puVar3;
    puVar3 = (undefined8 *)operator_new(0x30);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f9a840;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[1] = &PTR_FUN_143f9a6c8;
      puVar3[4] = uVar1;
      *(undefined2 *)(puVar3 + 5) = 0;
      goto LAB_140510ec2;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_140510ec2:
  puVar5 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    puVar4[2] = puVar3;
    puVar5 = puVar4;
  }
  *param_2 = puVar3;
  param_2[1] = puVar5;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  return param_2;
}



// FUNCTION 140510f20 FUN_140510f20 body=112 status=ok
// SIG undefined FUN_140510f20(void)

char FUN_140510f20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    cVar1 = FUN_140516dc0();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0xf8))
                        (*(longlong **)(param_1 + 0x110),param_2);
      if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x138) != (longlong *)0x0)) {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x138) + 8))();
        return (cVar1 != '\0') + '\x01';
      }
    }
  }
  return '\0';
}



// FUNCTION 140510f90 FUN_140510f90 body=444 status=ok
// SIG undefined FUN_140510f90(void)

int FUN_140510f90(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0xf8))();
  if (cVar5 == '\0') {
    return 3;
  }
  if (*(int *)(param_1 + 0x118) == 2) {
    iVar6 = *(int *)((longlong)param_3 + 0xc);
    iVar9 = (int)param_3[1];
    if (iVar6 < 0) {
      if (iVar9 != 0) {
        plVar8 = (longlong *)(*param_3 + 8);
        do {
          plVar3 = (longlong *)*plVar8;
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
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar8 = plVar8 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        iVar6 = *(int *)((longlong)param_3 + 0xc);
      }
      *(undefined4 *)(param_3 + 1) = 0;
      if (iVar6 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
      }
    }
    else {
      if (iVar9 != 0) {
        plVar8 = (longlong *)(*param_3 + 8);
        do {
          plVar3 = (longlong *)*plVar8;
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
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar8 = plVar8 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *(undefined4 *)(param_3 + 1) = 0;
    }
    iVar6 = *(int *)(param_1 + 0x128);
    if (iVar6 != 0) {
      iVar9 = (int)param_3[1];
      if (*(int *)((longlong)param_3 + 0xc) < iVar9 + iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3);
        iVar9 = (int)param_3[1];
      }
      puVar10 = *(undefined8 **)(param_1 + 0x120);
      puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_3);
      iVar9 = iVar6;
      do {
        *puVar7 = *puVar10;
        lVar4 = puVar10[1];
        puVar7[1] = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        puVar7 = puVar7 + 2;
        puVar10 = puVar10 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      *(int *)(param_3 + 1) = (int)param_3[1] + iVar6;
    }
    return 2;
  }
  return *(int *)(param_1 + 0x118);
}



// FUNCTION 140511150 FUN_140511150 body=56 status=ok
// SIG undefined FUN_140511150(void)

char FUN_140511150(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  if ((longlong *)*plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x90))();
    return (cVar1 != '\0') + '\x01';
  }
  return '\0';
}



// FUNCTION 140511190 FUN_140511190 body=169 status=ok
// SIG undefined FUN_140511190(void)

ulonglong FUN_140511190(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  }
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x2b8) + 0xb8);
    uVar3 = uVar5;
    uVar4 = uVar5;
    do {
      if (*plVar2 == param_2) {
        uVar5 = (longlong)(int)uVar4 * 0x118 + *(longlong *)(param_1 + 0x2b8);
        break;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 0x23;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x2c0));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return uVar5;
}



// FUNCTION 140511240 FUN_140511240 body=200 status=ok
// SIG undefined FUN_140511240(void)

ulonglong FUN_140511240(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  }
  uVar7 = 0;
  uVar4 = uVar7;
  uVar6 = uVar7;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    do {
      lVar1 = *(longlong *)(uVar4 + 0xa0 + *(longlong *)(param_1 + 0x2b8));
      if (((lVar1 != 0) && (*(char *)(uVar4 + 0x3a + *(longlong *)(param_1 + 0x2b8)) == '\0')) &&
         (cVar2 = (**(code **)*param_2)(param_2,lVar1 + 0x28), cVar2 != '\0')) {
        uVar7 = (longlong)(int)uVar6 * 0x118 + *(longlong *)(param_1 + 0x2b8);
        break;
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x118;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x2c0));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return uVar7;
}



// FUNCTION 140511310 FUN_140511310 body=7 status=ok
// SIG undefined FUN_140511310(void)

undefined4 FUN_140511310(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1e8);
}



// FUNCTION 140511320 FUN_140511320 body=484 status=ok
// SIG undefined FUN_140511320(void)

void FUN_140511320(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  void *_Dst;
  longlong *plVar8;
  void *_Src;
  int local_res8 [2];
  int local_res18 [2];
  void *local_38;
  int local_30;
  int local_2c;
  longlong *plVar9;
  
  plVar9 = (longlong *)0x0;
  plVar8 = (longlong *)0x0;
  if ((param_1[0x22] != 0) && (cVar4 = FUN_140516dc0(), cVar4 != '\0')) {
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
    iVar5 = (**(code **)(*(longlong *)param_1[0x28] + 0x120))((longlong *)param_1[0x28],*puVar6);
    if (-1 < iVar5) {
      puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
      cVar4 = (**(code **)(*(longlong *)*puVar6 + 0x28))
                        ((longlong *)*puVar6,iVar5,local_res18,local_res8);
      if (cVar4 != '\0') {
        local_38 = (void *)0x0;
        local_2c = 0;
        local_30 = local_res18[0] * local_res8[0] * 4;
        if (0 < local_res18[0] * local_res8[0] * 4) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        iVar3 = local_2c;
        iVar2 = local_30;
        _Src = local_38;
        puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
        cVar4 = (**(code **)(*(longlong *)*puVar6 + 0x30))((longlong *)*puVar6,iVar5,_Src,iVar2);
        if (cVar4 == '\0') {
          local_30 = 0;
          plVar9 = plVar8;
          if (iVar3 != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_38,0);
            _Src = local_38;
          }
        }
        else {
          plVar7 = (longlong *)FUN_142851030(local_res18[0],local_res8[0],0x25);
          if (((plVar7 != (longlong *)0x0) && (lVar1 = plVar7[0x1b], lVar1 != 0)) &&
             (0 < *(int *)(lVar1 + 0x18))) {
            *(byte *)((longlong)plVar7 + 0x4b) = *(byte *)((longlong)plVar7 + 0x4b) & 0xfe | 4;
            _Dst = (void *)FUN_14171efb0(**(longlong **)(lVar1 + 0x10) + 8,2);
            plVar9 = plVar8;
            if (_Dst != (void *)0x0) {
              _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2);
              FUntypedBulkData::Unlock(**(longlong **)(plVar7[0x1b] + 0x10) + 8);
              (**(code **)(*plVar7 + 0x278))(plVar7);
              plVar9 = plVar7;
            }
          }
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x110))(param_1,param_2,plVar9 != (longlong *)0x0,plVar9);
  return;
}



// FUNCTION 140511510 FUN_140511510 body=7 status=ok
// SIG undefined FUN_140511510(void)

void FUN_140511510(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140511513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



// FUNCTION 140511520 FUN_140511520 body=517 status=ok
// SIG undefined FUN_140511520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140511520(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_888 [32];
  uint local_868 [2];
  undefined8 local_860;
  longlong *local_858;
  longlong local_850 [3];
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_888;
  plVar2 = param_1 + 0x25;
  plVar9 = (longlong *)*plVar2;
  plVar4 = plVar9 + (longlong)(int)param_1[0x26] * 5;
  for (; plVar9 != plVar4; plVar9 = plVar9 + 5) {
    if ((*plVar9 != 0) && (cVar6 = (*(code *)**(undefined8 **)*param_2)(), cVar6 != '\0'))
    goto LAB_1405116c9;
  }
  plVar4 = (longlong *)param_1[0x27];
  local_868[0] = 0;
  if ((plVar4 == (longlong *)0x0) ||
     (iVar7 = (**(code **)(*plVar4 + 0x68))(plVar4,local_838,0x800,local_868), iVar7 == 0)) {
LAB_1405116c9:
    local_850[0] = 0;
    local_850[1] = 0;
    (**(code **)(*param_1 + 0xe8))(param_1,param_2,0,local_850);
    if (local_850[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    iVar3 = (int)param_1[0x26];
    *(int *)(param_1 + 0x26) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x134) < iVar3 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar2,iVar3);
    }
    lVar5 = *plVar2;
    lVar10 = (longlong)iVar3 * 0x28;
    *(undefined8 *)(lVar10 + lVar5) = 0;
    *(undefined8 *)(lVar10 + 8 + lVar5) = 0;
    *(undefined8 *)(lVar10 + 0x10 + lVar5) = 0;
    *(undefined8 *)(lVar10 + 0x18 + lVar5) = 0;
    *(undefined8 *)(lVar10 + 0x20 + lVar5) = 0;
    local_858 = (longlong *)param_2[1];
    local_860 = *param_2;
    if (local_858 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_858 + 1) = (int)local_858[1] + 1;
      UNLOCK();
    }
    puVar8 = (undefined8 *)(*plVar2 + lVar10);
    if (puVar8 != &local_860) {
      *puVar8 = local_860;
      local_860 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar8 + 1,&local_858);
    }
    plVar4 = local_858;
    if (local_858 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_858 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_858)(local_858);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_858 + 8))(local_858,1);
        }
      }
    }
    *(int *)(lVar10 + 0x10 + *plVar2) = iVar7;
    lVar10 = *plVar2 + lVar10;
    iVar7 = local_868[0] + *(int *)(lVar10 + 0x20);
    *(int *)(lVar10 + 0x20) = iVar7;
    if (*(int *)(lVar10 + 0x24) < iVar7) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(lVar10 + 0x18);
    }
    _guard_xfg_dispatch_icall_nop(*(void **)(lVar10 + 0x18),local_838,(ulonglong)local_868[0]);
  }
  return;
}



// FUNCTION 140511730 FUN_140511730 body=354 status=ok
// SIG undefined FUN_140511730(void)

void FUN_140511730(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 local_28;
  longlong *local_20;
  
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_2,0);
  }
  else {
    iVar7 = (int)param_2[1];
    if (iVar7 != 0) {
      plVar8 = (longlong *)(*param_2 + 8);
      do {
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
        plVar8 = plVar8 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  (**(code **)(*param_1 + 0x58))(param_1,&local_28,0);
  plVar8 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
  }
  puVar6 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_2);
  *puVar6 = local_28;
  puVar6[1] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 1405118a0 FUN_1405118a0 body=264 status=ok
// SIG undefined FUN_1405118a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1405118a0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  short *psVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((((*(longlong *)(param_1 + 0x110) == 0) || (cVar2 = FUN_140516dc0(), cVar2 == '\0')) ||
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0xf8))
                         (*(longlong **)(param_1 + 0x110),param_3), cVar2 == '\0')) ||
     (*(undefined8 **)(param_1 + 0x140) == (undefined8 *)0x0)) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x140))();
  lVar4 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_148,uVar3);
  psVar1 = *(short **)(lVar4 + 0x108);
  *param_2 = 0;
  param_2[1] = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar1[lVar4] != 0);
    iVar5 = (int)lVar4 + 1;
    *(int *)(param_2 + 1) = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,psVar1,(longlong)iVar5 * 2);
  }
  if (local_48 == 0) {
    return param_2;
  }
  FMemory::Free();
  return param_2;
}



// FUNCTION 1405119b0 FUN_1405119b0 body=198 status=ok
// SIG undefined FUN_1405119b0(void)

void FUN_1405119b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar3 = &DAT_143f3eda8;
  if (DAT_146b18950 != 0) {
    puVar3 = DAT_146b18948;
  }
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  puVar2 = &DAT_143f3eda8;
  if (DAT_146b18940 != 0) {
    puVar2 = DAT_146b18938;
  }
  FString::PrintfImpl(local_28,L"%s://%s?%s",puVar2,puVar4,puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,param_2,1,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140511a80 FUN_140511a80 body=22 status=ok
// SIG undefined FUN_140511a80(void)

undefined2 FUN_140511a80(longlong param_1)

{
  undefined2 uVar1;
  
  uVar1 = Ordinal_15(*(undefined2 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 140511aa0 FUN_140511aa0 body=30 status=ok
// SIG undefined FUN_140511aa0(void)

void FUN_140511aa0(longlong param_1,uint *param_2)

{
  ushort uVar1;
  
  uVar1 = Ordinal_15(*(undefined2 *)(param_1 + 0x28));
  *param_2 = (uint)uVar1;
  return;
}



// FUNCTION 140511ad0 FUN_140511ad0 body=123 status=ok
// SIG undefined FUN_140511ad0(void)

undefined * FUN_140511ad0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146853310) {
    _Init_thread_header(&DAT_146853310);
    if (DAT_146853310 == -1) {
      FUN_1404f8570(&DAT_146853290);
      atexit(`dynamic_atexit_destructor_for_'FOnlineFriendSteam::EmptyPresence__);
      _Init_thread_footer(&DAT_146853310);
      return &DAT_146853290;
    }
  }
  return &DAT_146853290;
}



// FUNCTION 140511b50 FUN_140511b50 body=5 status=ok
// SIG undefined FUN_140511b50(void)

longlong FUN_140511b50(longlong param_1)

{
  return param_1 + 0x70;
}



// FUNCTION 140511b90 FUN_140511b90 body=451 status=ok
// SIG undefined FUN_140511b90(void)

void FUN_140511b90(longlong param_1,short param_2,void *param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  short *psVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong local_28 [2];
  
  FUN_14052a1d0();
  psVar1 = (short *)(param_1 + 0x198);
  psVar7 = *(short **)(param_1 + 0x4618);
  if (*(short **)(param_1 + 0x4618) == (short *)0x0) {
    psVar7 = psVar1;
  }
  psVar9 = psVar7;
  do {
    if (psVar9 == psVar7 + (longlong)*(int *)(param_1 + 0x4620) * 0x224) {
      iVar11 = -1;
LAB_140511c0a:
      *(int *)CONCAT71(param_5._1_7_,(undefined1)param_5) = 0;
      if ((-1 < iVar11) && (iVar11 < *(int *)(param_1 + 0x4620))) {
        lVar6 = (longlong)iVar11;
        psVar7 = *(short **)(param_1 + 0x4618);
        if (*(short **)(param_1 + 0x4618) == (short *)0x0) {
          psVar7 = psVar1;
        }
        iVar2 = *(int *)(psVar7 + lVar6 * 0x224 + 0x21c);
        *(int *)CONCAT71(param_5._1_7_,(undefined1)param_5) = iVar2;
        psVar7 = *(short **)(param_1 + 0x4618);
        if (*(short **)(param_1 + 0x4618) == (short *)0x0) {
          psVar7 = psVar1;
        }
        _guard_xfg_dispatch_icall_nop(param_3,psVar7 + lVar6 * 0x224 + 0x1c,(longlong)iVar2);
        param_5._0_1_ = 0;
        psVar7 = *(short **)(param_1 + 0x4618);
        if (*(short **)(param_1 + 0x4618) == (short *)0x0) {
          psVar7 = psVar1;
        }
        puVar8 = (undefined8 *)
                 (**(code **)(*(longlong *)(psVar7 + lVar6 * 0x224 + 4) + 0x68))
                           (psVar7 + lVar6 * 0x224 + 4,local_28,0);
        plVar4 = param_6;
        if (*(int *)(puVar8 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar8;
        }
        (**(code **)(*param_6 + 8))(param_6,puVar10,&param_5);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        psVar7 = *(short **)(param_1 + 0x4618);
        if (*(short **)(param_1 + 0x4618) == (short *)0x0) {
          psVar7 = psVar1;
        }
        lVar3 = *plVar4;
        uVar5 = (**(code **)(*(longlong *)(psVar7 + lVar6 * 0x224 + 4) + 0x38))();
        (**(code **)(lVar3 + 0x30))(plVar4,uVar5);
        FUN_14051fd20(psVar1,iVar11,1,1);
      }
      return;
    }
    if (*psVar9 == param_2) {
      lVar6 = ((longlong)psVar9 - (longlong)psVar7) +
              SUB168(SEXT816(-0x10d148e03bcbadc7) * SEXT816((longlong)psVar9 - (longlong)psVar7),8);
      iVar11 = (int)(lVar6 >> 10) - (int)(lVar6 >> 0x3f);
      goto LAB_140511c0a;
    }
    psVar9 = psVar9 + 0x224;
  } while( true );
}



// FUNCTION 140511d60 FUN_140511d60 body=183 status=ok
// SIG undefined FUN_140511d60(void)

undefined8 * FUN_140511d60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  longlong local_18 [2];
  
  local_18[1] = 9;
  *param_2 = 0;
  param_2[1] = 0;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"nickname",0x12);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x20,local_res8,local_18);
  lVar1 = 0;
  if (local_res8[0] != -1) {
    lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)local_res8[0] * 0x28;
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    FString::operator=(param_2);
  }
  if (local_18[0] != 0) {
    FMemory::Free(local_18[0]);
  }
  return param_2;
}



// FUNCTION 140511e40 FUN_140511e40 body=46 status=ok
// SIG undefined FUN_140511e40(void)

void FUN_140511e40(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0) {
    FUN_14050e9c0(lVar1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 140511ea0 FUN_140511ea0 body=218 status=ok
// SIG undefined FUN_140511ea0(void)

undefined8
FUN_140511ea0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (*(int *)(param_4 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_4;
  }
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x28))((longlong *)*param_3,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)FUN_14167d0d0(local_28);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(&local_38,L"%s/SaveGames/%s",puVar4,puVar3);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar3 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar3 = local_38;
  }
  FString::PrintfImpl(param_2,L"%s/%s.sav",puVar3,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140511fd0 ToString body=29 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineSessionInfoEOS::ToString(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x28))(param_1 + 0x28);
  return param_2;
}



// FUNCTION 140512020 FindBuilder body=28 status=ok
// SIG undefined FindBuilder(void)

longlong Metasound::Engine::FDocumentBuilderRegistry::FindBuilder(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140511190();
  if (lVar1 != 0) {
    return lVar1 + 0x28;
  }
  return 0;
}



// FUNCTION 140512040 FUN_140512040 body=173 status=ok
// SIG undefined FUN_140512040(void)

ulonglong FUN_140512040(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  }
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x2b8) + 0xb8);
    uVar3 = uVar5;
    uVar4 = uVar5;
    do {
      if (*plVar2 == param_2) {
        uVar5 = (ulonglong)
                *(uint *)((longlong)(int)uVar4 * 0x118 + 0x110 + *(longlong *)(param_1 + 0x2b8));
        break;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 0x23;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x2c0));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return uVar5;
}



// FUNCTION 1405120f0 FUN_1405120f0 body=6 status=ok
// SIG undefined FUN_1405120f0(void)

undefined8 FUN_1405120f0(void)

{
  return 0x48;
}



// FUNCTION 140512120 GetSteamModulePath body=315 status=ok
// SIG undefined GetSteamModulePath(void)

longlong * GetSteamModulePath(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FPaths::EngineDir(local_18);
  local_38 = *plVar2;
  lVar1 = plVar2[1];
  *plVar2 = 0;
  local_30._0_4_ = (int)plVar2[1];
  local_30._4_4_ = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  iVar3 = (0x20 - (uint)((int)lVar1 != 0)) + (int)local_30;
  if (local_30._4_4_ < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,iVar3,-(int)lVar1);
  }
  FString::PathAppend(&local_38,L"Binaries/ThirdParty/Steamworks",0x1e);
  iVar3 = local_30._4_4_;
  local_20._0_4_ = (int)local_30;
  local_28 = local_38;
  iVar4 = (int)local_30 + (0xb - (uint)((int)local_30 != 0));
  local_38 = 0;
  local_20._4_4_ = local_30._4_4_;
  local_30 = 0;
  if (iVar3 < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
  }
  FString::PathAppend(&local_28,L"Steamv154",9);
  iVar3 = local_20._4_4_;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = (int)local_20;
  iVar4 = (int)local_20 + (8 - (uint)((int)local_20 != 0));
  local_28 = 0;
  *(int *)((longlong)param_1 + 0xc) = local_20._4_4_;
  local_20 = 0;
  if (iVar3 < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1);
  }
  FString::PathAppend(param_1,L"Win64/",6);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140512290 FUN_140512290 body=218 status=ok
// SIG undefined FUN_140512290(void)

undefined8
FUN_140512290(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (*(int *)(param_4 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_4;
  }
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x28))((longlong *)*param_3,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)FUN_14167d0d0(local_28);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(&local_38,L"%s/SaveGames/%s",puVar4,puVar3);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar3 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar3 = local_38;
  }
  FString::PrintfImpl(param_2,L"%s/%s.tmp",puVar3,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1405123b0 FUN_1405123b0 body=36 status=ok
// SIG undefined FUN_1405123b0(void)

short FUN_1405123b0(longlong param_1)

{
  short sVar1;
  
  sVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  return sVar1 + *(short *)(param_1 + 0x30) + 4;
}



// FUNCTION 140512410 GetType body=39 status=ok
// SIG undefined GetType(void)

undefined8 FUniqueNetIdSteam::GetType(undefined8 param_1,undefined8 param_2)

{
  FName::FName(param_2,L"STEAM",1);
  return param_2;
}



// FUNCTION 140512440 FUN_140512440 body=381 status=ok
// SIG undefined FUN_140512440(void)

undefined8 * FUN_140512440(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x138) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  puVar5 = (undefined8 *)operator_new(0x20);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))
                       (*(longlong **)(param_1 + 0x138),local_res8);
    uVar2 = *puVar6;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_143f9a6c8;
    puVar5[3] = uVar2;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar9 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f7de48;
    plVar7[2] = (longlong)puVar5;
    plVar9 = plVar7;
  }
  *param_2 = puVar5;
  param_2[1] = plVar9;
  plVar7 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 != (longlong *)0x0) {
    if (*plVar7 != 0) {
      if (plVar7[1] != 0) {
        piVar1 = (int *)(plVar7[1] + 8);
        LOCK();
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *piVar1 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (0 < iVar4) {
          return param_2;
        }
      }
      plVar9 = (longlong *)param_2[1];
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)puVar5;
    plVar8 = (longlong *)plVar7[1];
    if (plVar9 != plVar8) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar7[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar7[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar9 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
  return param_2;
}



// FUNCTION 1405125d0 FUN_1405125d0 body=285 status=ok
// SIG undefined FUN_1405125d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1405125d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  short *local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar1 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
  if (*plVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
    (**(code **)(*(longlong *)*puVar2 + 0x20))();
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_138);
    if ((short *)*param_3 != local_30) {
      iVar4 = 0;
      iVar5 = iVar4;
      if ((local_30 != (short *)0x0) && (*local_30 != 0)) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (local_30[lVar6] != 0);
        iVar5 = (int)lVar6 + 1;
      }
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,iVar5);
        iVar4 = *(int *)(param_3 + 1);
      }
      *(int *)(param_3 + 1) = iVar4 + iVar5;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4 + iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
      }
      if (iVar5 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)*param_3,local_30,(longlong)iVar5 * 2);
      }
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140512710 FUN_140512710 body=89 status=ok
// SIG undefined FUN_140512710(void)

undefined8 FUN_140512710(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    cVar1 = FUN_140516dc0();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0xf8))
                        (*(longlong **)(param_1 + 0x110),param_2);
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 140512770 FUN_140512770 body=213 status=ok
// SIG undefined FUN_140512770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140512770(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  WCHAR local_c8 [88];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  GetUserDefaultLocaleName(local_c8,0x55);
  if ((WCHAR *)*param_3 != local_c8) {
    iVar1 = 0;
    iVar2 = iVar1;
    if (local_c8[0] != L'\0') {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (local_c8[lVar3] != L'\0');
      iVar2 = (int)lVar3 + 1;
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,iVar2);
      iVar1 = (int)param_3[1];
    }
    *(int *)(param_3 + 1) = iVar1 + iVar2;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
    }
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*param_3,local_c8,(longlong)iVar2 * 2);
    }
  }
  return 1;
}



// FUNCTION 140512850 FUN_140512850 body=477 status=ok
// SIG undefined FUN_140512850(void)

longlong * FUN_140512850(undefined8 param_1,longlong *param_2)

{
  undefined2 *puVar1;
  size_t _Size;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  void *_Src;
  longlong *plVar13;
  void *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_14050ec50(param_1,&local_38);
  uVar10 = (uint)local_30;
  uVar11 = (ulonglong)(int)(uint)local_30;
  *param_2 = 0;
  plVar12 = local_38 + uVar11 * 2;
  param_2[1] = 0;
  uVar5 = local_40;
  plVar6 = local_38;
  for (plVar13 = local_38; local_40 = uVar5, plVar4 = plVar6, local_38 = plVar6, plVar13 != plVar12;
      plVar13 = plVar13 + 2) {
    local_40._0_4_ = (int)plVar13[1];
    lVar9 = (longlong)(int)local_40;
    pvVar3 = (void *)*plVar13;
    local_48 = (void *)0x0;
    local_40._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_48,(2 - (uint)((int)local_40 != 0)) + (int)local_40,0);
    _Src = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,pvVar3,lVar9 * 2);
    iVar2 = (int)local_40;
    lVar9 = (longlong)(int)local_40;
    iVar8 = (2 - (uint)((int)local_40 != 0)) + (int)local_40;
    local_40 = CONCAT44(local_40._4_4_,iVar8);
    if (local_40._4_4_ < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
      _Src = local_48;
      iVar8 = (int)local_40;
    }
    local_48 = (void *)0x0;
    local_40 = 0;
    puVar1 = (undefined2 *)((longlong)_Src + (lVar9 - (ulonglong)(iVar2 != 0)) * 2);
    *puVar1 = 10;
    puVar1[1] = 0;
    if ((iVar8 != 0) && (iVar8 + -1 != 0)) {
      iVar2 = (int)param_2[1];
      iVar7 = (uint)(iVar2 == 0) + iVar2 + iVar8 + -1;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      pvVar3 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      _Size = (longlong)iVar8 * 2 - 2;
      _guard_xfg_dispatch_icall_nop(pvVar3,_Src,_Size);
      *(undefined2 *)(_Size + (longlong)pvVar3) = 0;
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
    uVar5 = local_40;
    plVar6 = local_38;
  }
  while (uVar10 != 0) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    uVar10 = (int)uVar11 - 1;
    uVar11 = (ulonglong)uVar10;
    plVar4 = plVar4 + 2;
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  return param_2;
}



// FUNCTION 140512a30 FUN_140512a30 body=477 status=ok
// SIG undefined FUN_140512a30(void)

longlong * FUN_140512a30(undefined8 param_1,longlong *param_2)

{
  undefined2 *puVar1;
  size_t _Size;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  void *_Src;
  longlong *plVar13;
  void *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_14050f390(param_1,&local_38);
  uVar10 = (uint)local_30;
  uVar11 = (ulonglong)(int)(uint)local_30;
  *param_2 = 0;
  plVar12 = local_38 + uVar11 * 2;
  param_2[1] = 0;
  uVar5 = local_40;
  plVar6 = local_38;
  for (plVar13 = local_38; local_40 = uVar5, plVar4 = plVar6, local_38 = plVar6, plVar13 != plVar12;
      plVar13 = plVar13 + 2) {
    local_40._0_4_ = (int)plVar13[1];
    lVar9 = (longlong)(int)local_40;
    pvVar3 = (void *)*plVar13;
    local_48 = (void *)0x0;
    local_40._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_48,(2 - (uint)((int)local_40 != 0)) + (int)local_40,0);
    _Src = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,pvVar3,lVar9 * 2);
    iVar2 = (int)local_40;
    lVar9 = (longlong)(int)local_40;
    iVar8 = (2 - (uint)((int)local_40 != 0)) + (int)local_40;
    local_40 = CONCAT44(local_40._4_4_,iVar8);
    if (local_40._4_4_ < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
      _Src = local_48;
      iVar8 = (int)local_40;
    }
    local_48 = (void *)0x0;
    local_40 = 0;
    puVar1 = (undefined2 *)((longlong)_Src + (lVar9 - (ulonglong)(iVar2 != 0)) * 2);
    *puVar1 = 10;
    puVar1[1] = 0;
    if ((iVar8 != 0) && (iVar8 + -1 != 0)) {
      iVar2 = (int)param_2[1];
      iVar7 = (uint)(iVar2 == 0) + iVar2 + iVar8 + -1;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      pvVar3 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      _Size = (longlong)iVar8 * 2 - 2;
      _guard_xfg_dispatch_icall_nop(pvVar3,_Src,_Size);
      *(undefined2 *)(_Size + (longlong)pvVar3) = 0;
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
    uVar5 = local_40;
    plVar6 = local_38;
  }
  while (uVar10 != 0) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    uVar10 = (int)uVar11 - 1;
    uVar11 = (ulonglong)uVar10;
    plVar4 = plVar4 + 2;
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  return param_2;
}



// FUNCTION 140512c30 FUN_140512c30 body=783 status=ok
// SIG undefined FUN_140512c30(void)

void FUN_140512c30(longlong param_1,undefined8 *param_2,char *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_70 [2];
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong *local_48;
  longlong local_40 [3];
  
  if (param_4 == 0) {
    return;
  }
  cVar4 = *param_3;
  puVar13 = *(undefined8 **)(param_1 + 0x48);
  puVar11 = puVar13 + (longlong)*(int *)(param_1 + 0x50) * 4;
  for (; puVar13 != puVar11; puVar13 = puVar13 + 4) {
    cVar7 = (**(code **)(*(longlong *)*puVar13 + 0x70))((longlong *)*puVar13,*param_2);
    if (cVar7 != '\0') goto LAB_140512c9c;
  }
  puVar13 = (undefined8 *)0x0;
LAB_140512c9c:
  if (cVar4 == '\0') {
    if (puVar13 == (undefined8 *)0x0) {
      if (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 0x50)) {
        return;
      }
      uVar9 = FName::FName(local_58,L"STEAM",1);
      plVar10 = (longlong *)FUN_1419c6b80(uVar9);
      (**(code **)(*plVar10 + 0x70))(plVar10,&local_50,0,0);
      plVar10 = local_50;
      local_res20[0] = 0;
      puVar11 = (undefined8 *)
                (**(code **)(*(longlong *)*param_2 + 0x68))((longlong *)*param_2,local_40,0);
      if (*(int *)(puVar11 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*puVar11;
      }
      (**(code **)(*plVar10 + 8))(plVar10,puVar12,local_res20);
      if (local_40[0] != 0) {
        FMemory::Free();
      }
      plVar10 = local_50;
      lVar6 = *local_50;
      uVar8 = (**(code **)(*(longlong *)*param_2 + 0x38))();
      (**(code **)(lVar6 + 0x30))(plVar10,uVar8);
      plVar10 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      iVar5 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar5 + 1;
      if (*(int *)(param_1 + 0x54) < iVar5 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1 + 0x48,iVar5);
      }
      lVar6 = *(longlong *)(param_1 + 0x48);
      lVar14 = (longlong)iVar5 * 0x20;
      *(longlong **)(lVar14 + lVar6) = local_50;
      *(longlong **)(lVar14 + 8 + lVar6) = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      *(undefined4 *)(lVar14 + 0x10 + lVar6) = 0;
      *(undefined8 *)(lVar14 + 0x18 + lVar6) = 0;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x50))) {
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar14);
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_48 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      if (puVar13 == (undefined8 *)0x0) {
        return;
      }
    }
    if (*(int *)(puVar13 + 2) != 0) goto LAB_140512f09;
    plVar10 = *(longlong **)(param_1 + 0x28);
    local_78[0] = 1;
    local_70[0] = 0;
    *(undefined4 *)(plVar10 + 0xb) = 2;
    (**(code **)(*plVar10 + 0x48))(plVar10,local_78,1,local_70,*param_2);
    *(undefined4 *)(plVar10 + 0xb) = 1;
    *(undefined4 *)(puVar13 + 2) = 2;
    QueryPerformanceCounter(&local_60);
    local_68 = local_60;
  }
  else {
    if (puVar13 == (undefined8 *)0x0) {
      return;
    }
    if ((cVar4 != '\x02') || (*(int *)(puVar13 + 2) != 2)) {
LAB_140512f09:
      *(undefined4 *)(puVar13 + 2) = 5;
      return;
    }
    *param_3 = '\x03';
    local_74 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))
              (*(longlong **)(param_1 + 0x28),param_3,param_4,&local_74,*param_2);
    QueryPerformanceCounter(&local_68);
  }
  puVar13[3] = (double)local_68.QuadPart * DAT_1468b02f8 + 16777216.0;
  return;
}



// FUNCTION 140512f40 FUN_140512f40 body=56 status=ok
// SIG undefined FUN_140512f40(void)

bool FUN_140512f40(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  short local_res8 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    local_res8[0] = 0;
    iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,local_res8);
    if (-1 < iVar2) {
      return local_res8[0] == -1;
    }
  }
  return true;
}



// FUNCTION 140512f80 FUN_140512f80 body=108 status=ok
// SIG undefined FUN_140512f80(void)

bool FUN_140512f80(longlong param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  cVar1 = FUN_140513070(*(undefined8 *)(param_1 + 0x20),uVar2,param_2);
  if (cVar1 != '\0') {
    return true;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 8))
                    (*(longlong **)(param_1 + 0x60),param_2,0);
  if (cVar1 != '\0') {
    return *param_2 != 0;
  }
  return false;
}



// FUNCTION 140512ff0 FUN_140512ff0 body=120 status=ok
// SIG undefined FUN_140512ff0(void)

undefined8 FUN_140512ff0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x290);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (0 < *(int *)(param_1 + 0x2c0)) {
    lVar3 = 0;
    pcVar2 = (char *)(*(longlong *)(param_1 + 0x2b8) + 0x3e);
    do {
      if (*pcVar2 != '\0') {
        uVar4 = 1;
        goto LAB_14051304b;
      }
      lVar3 = lVar3 + 1;
      pcVar2 = pcVar2 + 0x118;
    } while (lVar3 < *(int *)(param_1 + 0x2c0));
  }
  uVar4 = 0;
LAB_14051304b:
  LeaveCriticalSection(lpCriticalSection);
  return uVar4;
}



// FUNCTION 140513070 FUN_140513070 body=146 status=ok
// SIG undefined FUN_140513070(void)

ulonglong FUN_140513070(longlong param_1,short param_2,undefined4 *param_3)

{
  short *psVar1;
  short *psVar2;
  
  FUN_14052a1d0();
  psVar1 = *(short **)(param_1 + 0x4618);
  if (*(short **)(param_1 + 0x4618) == (short *)0x0) {
    psVar1 = (short *)(param_1 + 0x198);
  }
  psVar2 = psVar1 + (longlong)*(int *)(param_1 + 0x4620) * 0x224;
  while( true ) {
    if (psVar1 == psVar2) {
      *param_3 = 0;
      return (ulonglong)psVar1 & 0xffffffffffffff00;
    }
    if (*psVar1 == param_2) break;
    psVar1 = psVar1 + 0x224;
  }
  *param_3 = *(undefined4 *)(psVar1 + 0x21c);
  return CONCAT71((int7)((ulonglong)psVar1 >> 8),1);
}



// FUNCTION 140513110 FUN_140513110 body=6165 status=ok
// SIG undefined FUN_140513110(void)

char FUN_140513110(longlong *param_1)

{
  LPVOID *ppv;
  int *piVar1;
  wchar_t wVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  wint_t wVar6;
  wint_t wVar7;
  HRESULT HVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  char *pcVar17;
  undefined1 *pvReserved;
  longlong *plVar18;
  wchar_t *pwVar19;
  wint_t *pwVar20;
  longlong *plVar21;
  int iVar22;
  undefined2 *puVar23;
  wchar_t *pwVar24;
  wchar_t *pwVar25;
  longlong **pplVar26;
  bool bVar27;
  short local_res18 [4];
  undefined8 local_res20;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  int local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  longlong local_48 [2];
  
  cVar4 = FUN_1405156b0(param_1,1,0x610e4);
  if (cVar4 == '\0') {
    (**(code **)(*param_1 + 0x110))(param_1);
    return '\0';
  }
  plVar10 = (longlong *)FUN_140501690();
  plVar21 = (longlong *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  cVar5 = (**(code **)(*plVar10 + 8))(plVar10,local_98);
  if (cVar5 == '\0') {
    if (DAT_146853150 != (longlong *)0x0) {
      (**(code **)(*DAT_146853150 + 0x10))();
      if (DAT_146853150 != (longlong *)0x0) {
        (**(code **)*DAT_146853150)(DAT_146853150,1);
      }
      DAT_146853150 = (longlong *)0x0;
    }
    local_res20 = 0;
  }
  else {
    puVar11 = (undefined8 *)FName::FName(local_58,"Sockets",1);
    uVar3 = *puVar11;
    uVar12 = FUN_14168dc80();
    plVar13 = (longlong *)FUN_141690010(uVar12,uVar3);
    lVar14 = *plVar13;
    puVar11 = (undefined8 *)FName::FName(local_50,L"STEAM",1);
    (**(code **)(lVar14 + 0x50))(plVar13,*puVar11,plVar10,0);
    FName::FName(&local_res20,L"STEAM",1);
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  lVar14 = operator_new(0x428);
  plVar10 = plVar21;
  if (lVar14 != 0) {
    plVar10 = (longlong *)FUN_1404f7860(lVar14,param_1);
  }
  param_1[0x29] = (longlong)plVar10;
  puVar11 = (undefined8 *)FName::ToString(param_1 + 5,local_48);
  if (*(int *)(puVar11 + 1) == 0) {
    puVar23 = &DAT_143f3eda8;
  }
  else {
    puVar23 = (undefined2 *)*puVar11;
  }
  FString::PrintfImpl(&local_68,L"OnlineAsyncTaskThreadSteam %s",puVar23);
  lVar14 = -1;
  puVar23 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar23 = local_68;
  }
  lVar15 = FUN_1415d42a0(param_1[0x29],puVar23,0x20000,0,0xffffffffffffffff);
  param_1[0x2a] = lVar15;
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  pvReserved = &DAT_00000038;
  plVar13 = (longlong *)operator_new();
  plVar10 = plVar21;
  if (plVar13 != (longlong *)0x0) {
    plVar13[1] = 0;
    ppv = (LPVOID *)(plVar13 + 5);
    plVar13[2] = 0;
    plVar13[3] = 2;
    *plVar13 = (longlong)&PTR_FUN_143f9d430;
    plVar13[4] = (longlong)param_1;
    *ppv = (LPVOID)0x0;
    *(undefined4 *)(plVar13 + 6) = 0;
    *(undefined1 *)((longlong)plVar13 + 0x34) = 0;
    HVar8 = FWindowsPlatformMisc::CoInitialize(pvReserved);
    if (((char)HVar8 != '\0') &&
       (HVar8 = CoCreateInstance((IID *)&DAT_145ac6150,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_145ac6140,ppv
                                ), HVar8 < 0)) {
      *ppv = (LPVOID)0x0;
      FWindowsPlatformMisc::CoUninitialize();
    }
    plVar10 = *ppv;
    bVar27 = true;
    if (plVar10 != (longlong *)0x0) {
      local_res18[0] = 0;
      iVar9 = (**(code **)(*plVar10 + 0x60))(plVar10,local_res18);
      if (-1 < iVar9) {
        bVar27 = local_res18[0] == -1;
      }
    }
    *(bool *)((longlong)plVar13 + 0x34) = bVar27;
    plVar10 = plVar13;
  }
  plVar16 = (longlong *)operator_new(0x18);
  plVar13 = plVar21;
  if (plVar16 != (longlong *)0x0) {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_143f3f2e0;
    plVar16[2] = (longlong)plVar10;
    plVar13 = plVar16;
  }
  local_148 = plVar10;
  local_140 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_148,plVar10,plVar10);
  if ((longlong **)(param_1 + 0x11) != &local_148) {
    param_1[0x11] = (longlong)plVar10;
    local_148 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x12,&local_140);
    plVar13 = local_140;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  plVar13 = (longlong *)operator_new(0x160);
  plVar10 = plVar21;
  if (plVar13 != (longlong *)0x0) {
    plVar13[1] = 0;
    plVar13[2] = 0;
    plVar13[3] = 2;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[6] = 2;
    plVar13[7] = 0;
    plVar13[8] = 0;
    plVar13[9] = 2;
    plVar13[10] = 0;
    plVar13[0xb] = 0;
    plVar13[0xc] = 2;
    plVar13[0xd] = 0;
    plVar13[0xe] = 0;
    plVar13[0xf] = 2;
    plVar13[0x10] = 0;
    plVar13[0x11] = 0;
    plVar13[0x12] = 2;
    plVar13[0x13] = 0;
    plVar13[0x14] = 0;
    plVar13[0x15] = 2;
    plVar13[0x16] = 0;
    plVar13[0x17] = 0;
    plVar13[0x18] = 2;
    plVar13[0x19] = 0;
    plVar13[0x1a] = 0;
    plVar13[0x1b] = 2;
    plVar13[0x1c] = 0;
    plVar13[0x1d] = 0;
    plVar13[0x1e] = 2;
    plVar13[0x1f] = 0;
    plVar13[0x20] = 0;
    plVar13[0x21] = 2;
    *plVar13 = (longlong)&PTR_FUN_143f9c350;
    plVar13[0x22] = (longlong)param_1;
    *(undefined4 *)(plVar13 + 0x23) = 0;
    plVar13[0x24] = 0;
    plVar13[0x25] = 0;
    plVar13[0x27] = 0;
    *(undefined4 *)(plVar13 + 0x28) = 0;
    plVar13[0x29] = 0;
    plVar13[0x2a] = 0;
    plVar10 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    plVar13[0x26] = *plVar10;
    plVar10 = plVar13;
  }
  plVar16 = (longlong *)operator_new(0x18);
  plVar13 = plVar21;
  if (plVar16 != (longlong *)0x0) {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_143f3f2e0;
    plVar16[2] = (longlong)plVar10;
    plVar13 = plVar16;
  }
  local_138 = plVar10;
  local_130 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_138,plVar10,plVar10);
  if ((longlong **)(param_1 + 0x17) != &local_138) {
    param_1[0x17] = (longlong)plVar10;
    local_138 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x18,&local_130);
    plVar13 = local_130;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  plVar13 = (longlong *)operator_new(0xa0);
  plVar10 = plVar21;
  if (plVar13 != (longlong *)0x0) {
    plVar13[1] = 0;
    plVar13[2] = 0;
    plVar13[3] = 2;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[6] = 2;
    plVar13[7] = 0;
    plVar13[8] = 0;
    plVar13[9] = 2;
    plVar13[10] = 0;
    plVar13[0xb] = 0;
    plVar13[0xc] = 2;
    plVar13[0xd] = 0;
    plVar13[0xe] = 0;
    plVar13[0xf] = 2;
    plVar13[0x10] = 0;
    plVar13[0x11] = 0;
    plVar13[0x12] = 2;
    *plVar13 = (longlong)&PTR_FUN_143f9d020;
    plVar13[0x13] = (longlong)param_1;
    plVar10 = plVar13;
  }
  plVar16 = (longlong *)operator_new(0x18);
  plVar13 = plVar21;
  if (plVar16 != (longlong *)0x0) {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_143f3f2e0;
    plVar16[2] = (longlong)plVar10;
    plVar13 = plVar16;
  }
  local_128 = plVar10;
  local_120 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_128,plVar10,plVar10);
  if ((longlong **)(param_1 + 0x19) != &local_128) {
    param_1[0x19] = (longlong)plVar10;
    local_128 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1a,&local_120);
    plVar13 = local_120;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  plVar13 = (longlong *)operator_new(0x128);
  plVar10 = plVar21;
  if (plVar13 != (longlong *)0x0) {
    plVar13[1] = 0;
    plVar13[2] = 0;
    plVar13[3] = 2;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[6] = 2;
    plVar13[7] = 0;
    plVar13[8] = 0;
    plVar13[9] = 2;
    plVar13[10] = 0;
    plVar13[0xb] = 0;
    plVar13[0xc] = 2;
    plVar13[0xd] = 0;
    plVar13[0xe] = 0;
    plVar13[0xf] = 2;
    plVar13[0x10] = 0;
    plVar13[0x11] = 0;
    plVar13[0x12] = 2;
    plVar13[0x13] = 0;
    plVar13[0x14] = 0;
    plVar13[0x15] = 2;
    plVar13[0x16] = 0;
    plVar13[0x17] = 0;
    plVar13[0x18] = 2;
    plVar13[0x19] = 0;
    plVar13[0x1a] = 0;
    plVar13[0x1b] = 2;
    *plVar13 = (longlong)&PTR_FUN_143f9cd00;
    plVar13[0x1c] = (longlong)param_1;
    *(undefined4 *)(plVar13 + 0x1d) = 0;
    plVar13[0x1e] = 0;
    plVar13[0x1f] = 0;
    *(undefined4 *)(plVar13 + 0x20) = 0;
    plVar13[0x21] = 0;
    plVar13[0x22] = 0;
    plVar10 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    plVar13[0x23] = *plVar10;
    plVar10 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
    plVar13[0x24] = *plVar10;
    plVar10 = plVar13;
  }
  plVar16 = (longlong *)operator_new(0x18);
  plVar13 = plVar21;
  if (plVar16 != (longlong *)0x0) {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_143f3f2e0;
    plVar16[2] = (longlong)plVar10;
    plVar13 = plVar16;
  }
  local_118 = plVar10;
  local_110 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_118,plVar10,plVar10);
  if ((longlong **)(param_1 + 0x15) != &local_118) {
    param_1[0x15] = (longlong)plVar10;
    local_118 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x16,&local_110);
    plVar13 = local_110;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  lVar15 = operator_new(0x428);
  plVar10 = plVar21;
  if (lVar15 != 0) {
    plVar10 = (longlong *)FUN_1404f8080(lVar15,param_1);
  }
  plVar16 = (longlong *)operator_new(0x18);
  plVar13 = plVar21;
  if (plVar16 != (longlong *)0x0) {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_143f3f2e0;
    plVar16[2] = (longlong)plVar10;
    plVar13 = plVar16;
  }
  plVar16 = plVar10 + 0x4f;
  if (plVar10 == (longlong *)0x0) {
    plVar16 = plVar21;
  }
  local_168 = plVar10;
  local_160 = plVar13;
  if (plVar16 != (longlong *)0x0) {
    if ((*plVar16 != 0) && (plVar16[1] != 0)) {
      piVar1 = (int *)(plVar16[1] + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (0 < iVar9) goto LAB_140513a70;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    *plVar16 = (longlong)plVar10;
    plVar18 = (longlong *)plVar16[1];
    if (plVar13 != plVar18) {
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        plVar18 = (longlong *)plVar16[1];
      }
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
      plVar16[1] = (longlong)plVar13;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar13 + 1;
      lVar15 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
LAB_140513a70:
  if ((longlong **)(param_1 + 0x13) != &local_168) {
    param_1[0x13] = (longlong)plVar10;
    local_168 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x14,&local_160);
  }
  plVar10 = local_160;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_160 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  plVar13 = (longlong *)operator_new(0x70);
  plVar10 = plVar21;
  if (plVar13 != (longlong *)0x0) {
    plVar13[1] = 0;
    plVar13[2] = 0;
    plVar13[3] = 2;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[6] = 2;
    plVar13[7] = 0;
    plVar13[8] = 0;
    *plVar13 = (longlong)&PTR_FUN_143f9cfc0;
    plVar13[9] = (longlong)param_1;
    plVar13[10] = 0;
    plVar13[0xb] = 0;
    plVar13[0xc] = 0;
    plVar13[0xd] = 0;
    FConfigCacheIni::GetArray
              (DAT_1468b6148,L"OnlinePresenceSteam",L"PresenceKeys",plVar13 + 10,&DAT_1468e2360);
    plVar10 = plVar13;
  }
  plVar16 = (longlong *)operator_new(0x18);
  plVar13 = plVar21;
  if (plVar16 != (longlong *)0x0) {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_143f3f2e0;
    plVar16[2] = (longlong)plVar10;
    plVar13 = plVar16;
  }
  plVar16 = plVar10 + 7;
  if (plVar10 == (longlong *)0x0) {
    plVar16 = plVar21;
  }
  local_158 = plVar10;
  local_150 = plVar13;
  if (plVar16 != (longlong *)0x0) {
    if ((*plVar16 != 0) && (plVar16[1] != 0)) {
      piVar1 = (int *)(plVar16[1] + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (0 < iVar9) goto LAB_140513c43;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    *plVar16 = (longlong)plVar10;
    plVar18 = (longlong *)plVar16[1];
    if (plVar13 != plVar18) {
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        plVar18 = (longlong *)plVar16[1];
      }
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
      plVar16[1] = (longlong)plVar13;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar13 + 1;
      lVar15 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
LAB_140513c43:
  if ((longlong **)(param_1 + 0x1b) != &local_158) {
    param_1[0x1b] = (longlong)plVar10;
    local_158 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1c,&local_150);
  }
  plVar10 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_150 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  lVar15 = operator_new(0x188);
  plVar10 = plVar21;
  if (lVar15 != 0) {
    plVar10 = (longlong *)FUN_1404f7ed0(lVar15,param_1);
  }
  plVar16 = (longlong *)operator_new(0x18);
  plVar13 = plVar21;
  if (plVar16 != (longlong *)0x0) {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_143f3f2e0;
    plVar16[2] = (longlong)plVar10;
    plVar13 = plVar16;
  }
  local_108 = plVar10;
  local_100 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_108,plVar10,plVar10);
  if ((longlong **)(param_1 + 0x1d) != &local_108) {
    param_1[0x1d] = (longlong)plVar10;
    local_108 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1e,&local_100);
    plVar13 = local_100;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  plVar13 = (longlong *)operator_new(0x1f0);
  plVar10 = plVar21;
  if (plVar13 != (longlong *)0x0) {
    FUN_1404f87d0(plVar13);
    plVar13[0x3a] = (longlong)param_1;
    *plVar13 = (longlong)&PTR_FUN_143f9bff8;
    plVar10 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
    plVar13[0x3b] = *plVar10;
    plVar10 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
    plVar13[0x3c] = *plVar10;
    plVar10 = plVar13;
  }
  plVar13 = (longlong *)FUN_1404f6ae0(plVar10);
  local_f8 = plVar10;
  local_f0 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_f8,plVar10,plVar10);
  if ((longlong **)(param_1 + 0x1f) != &local_f8) {
    param_1[0x1f] = (longlong)plVar10;
    local_f8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_f0);
    plVar13 = local_f0;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  plVar13 = (longlong *)operator_new(0x78);
  plVar10 = plVar21;
  if (plVar13 != (longlong *)0x0) {
    plVar13[1] = 0;
    plVar13[2] = 0;
    plVar13[3] = 2;
    *plVar13 = (longlong)&PTR_FUN_143f9ae40;
    plVar13[4] = (longlong)param_1;
    plVar13[6] = 0;
    plVar13[7] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(plVar13 + 8));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar13 + 8),4000);
    plVar13[0xd] = 0;
    plVar13[0xe] = 0;
    plVar10 = (longlong *)
              SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8);
    puVar11 = (undefined8 *)*plVar10;
    plVar13[5] = (longlong)puVar11;
    (**(code **)*puVar11)();
    plVar10 = plVar13;
  }
  plVar13 = (longlong *)FUN_1404f6ae0(plVar10);
  local_e8 = plVar10;
  local_e0 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_e8,plVar10,plVar10);
  if ((longlong **)(param_1 + 0x23) != &local_e8) {
    param_1[0x23] = (longlong)plVar10;
    local_e8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x24,&local_e0);
    plVar13 = local_e0;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  plVar13 = (longlong *)operator_new(0xc0);
  plVar10 = plVar21;
  if (plVar13 != (longlong *)0x0) {
    plVar13[1] = 0;
    plVar13[2] = 0;
    plVar13[3] = 2;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[6] = 2;
    plVar13[7] = 0;
    plVar13[8] = 0;
    plVar13[9] = 2;
    plVar13[10] = 0;
    plVar13[0xb] = 0;
    plVar13[0xc] = 2;
    *plVar13 = (longlong)&PTR_FUN_143f9d478;
    plVar13[0xd] = (longlong)param_1;
    plVar13[0xe] = 0;
    plVar13[0xf] = 0;
    plVar13[0x10] = 0;
    plVar13[0x11] = 0;
    plVar13[0x12] = 0;
    plVar13[0x13] = 0;
    plVar13[0x14] = (longlong)&PTR_FUN_143f9ad78;
    plVar13[0x17] = (longlong)&LAB_140519d70;
    *(undefined1 *)(plVar13 + 0x15) = 0;
    *(undefined4 *)((longlong)plVar13 + 0xac) = 0;
    plVar13[0x16] = (longlong)plVar13;
    SteamAPI_RegisterCallback(plVar13 + 0x14,0x98);
    plVar10 = plVar13;
  }
  plVar13 = (longlong *)FUN_1404f6ae0(plVar10);
  local_d8 = plVar10;
  local_d0 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_d8,plVar10,plVar10);
  if ((longlong **)(param_1 + 0x21) != &local_d8) {
    param_1[0x21] = (longlong)plVar10;
    local_d8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x22,&local_d0);
    plVar13 = local_d0;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  plVar13 = (longlong *)operator_new(0x38);
  plVar10 = plVar21;
  if (plVar13 != (longlong *)0x0) {
    plVar13[1] = 0;
    plVar13[2] = 0;
    plVar13[3] = 2;
    *plVar13 = (longlong)&PTR__scalar_deleting_destructor__143f9ad30;
    *(undefined4 *)(plVar13 + 4) = 0;
    plVar13[5] = (longlong)param_1;
    plVar10 = (longlong *)
              SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8);
    puVar11 = (undefined8 *)*plVar10;
    plVar13[6] = (longlong)puVar11;
    (**(code **)*puVar11)();
    plVar10 = plVar13;
  }
  plVar13 = (longlong *)FUN_1404f6ae0(plVar10);
  local_c8 = plVar10;
  local_c0 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_c8,plVar10,plVar10);
  if ((longlong **)(param_1 + 0x25) != &local_c8) {
    param_1[0x25] = (longlong)plVar10;
    local_c8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x26,&local_c0);
    plVar13 = local_c0;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  puVar11 = (undefined8 *)operator_new(0x30);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 2;
    *puVar11 = &PTR__scalar_deleting_destructor__143f9c778;
    puVar11[4] = param_1;
    plVar10 = (longlong *)
              SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamScreenshots_1461fc7f0);
    plVar10 = (longlong *)*plVar10;
    puVar11[5] = plVar10;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10,0);
    }
  }
  plVar10 = (longlong *)FUN_1404f6ae0(puVar11);
  local_b8 = puVar11;
  local_b0 = plVar10;
  SharedPointerInternals::EnableSharedFromThis(&local_b8,puVar11,puVar11);
  if ((undefined8 **)(param_1 + 0x27) != &local_b8) {
    param_1[0x27] = (longlong)puVar11;
    local_b8 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_b0);
    plVar10 = local_b0;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar10 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar13 = (longlong *)operator_new(0x80);
  plVar10 = plVar21;
  if (plVar13 != (longlong *)0x0) {
    plVar13[1] = 0;
    plVar13[2] = 0;
    plVar13[3] = 2;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[6] = 2;
    *plVar13 = (longlong)&PTR_FUN_143f9d340;
    plVar13[7] = (longlong)param_1;
    plVar13[9] = 0;
    plVar13[10] = 0;
    plVar13[0xc] = 0;
    plVar13[0xd] = 0;
    plVar13[0xe] = 0;
    plVar13[0xf] = 0;
    plVar10 = plVar13;
  }
  plVar13 = (longlong *)FUN_1404f6ae0(plVar10);
  pplVar26 = (longlong **)(param_1 + 0xf);
  local_a8 = plVar10;
  local_a0 = plVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar10,plVar10);
  if (pplVar26 != &local_a8) {
    *pplVar26 = plVar10;
    local_a8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_a0);
    plVar13 = local_a0;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar13 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  cVar5 = (**(code **)(**pplVar26 + 0x10))();
  if (cVar5 == '\0') {
    local_88 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
    if (pplVar26 != (longlong **)(local_98 + 2)) {
      *pplVar26 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&plStack_80);
      plVar10 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar13 = plStack_80 + 1;
        lVar15 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
    }
  }
  puVar11 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamApps_1461fc7c0);
  pcVar17 = (char *)(**(code **)(*(longlong *)*puVar11 + 0x20))();
  local_78 = (longlong *)0x0;
  local_6c = 0;
  iVar9 = 0;
  if ((pcVar17 != (char *)0x0) && (iVar9 = 0, *pcVar17 != '\0')) {
    do {
      lVar14 = lVar14 + 1;
    } while (pcVar17[lVar14] != '\0');
    iVar22 = (int)lVar14 + 1;
    local_70 = iVar22;
    if (0 < iVar22) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    }
    iVar9 = local_70;
    plVar21 = local_78;
    FGenericPlatformString::Convert<char,wchar_t>(local_78,iVar22,pcVar17,iVar22,0x3f);
    plVar10 = plVar21;
    if (iVar9 != 0) goto LAB_1405143fd;
  }
  plVar10 = (longlong *)&DAT_143f3eda8;
LAB_1405143fd:
  pwVar19 = L"german";
  do {
    wVar2 = *(wchar_t *)((longlong)(plVar10 + -0x287efd42) + (longlong)pwVar19);
    if ((wVar2 == L'\0') && (*pwVar19 == L'\0')) goto LAB_140514444;
    if (wVar2 != *pwVar19) {
      wVar6 = towlower(wVar2);
      wVar7 = towlower(*pwVar19);
      if (wVar6 != wVar7) break;
    }
    pwVar19 = pwVar19 + 1;
  } while( true );
  if (wVar6 != wVar7) {
    pwVar19 = L"french";
    plVar10 = (longlong *)&DAT_143f3eda8;
    if (iVar9 != 0) {
      plVar10 = plVar21;
    }
    do {
      wVar2 = *(wchar_t *)((longlong)(plVar10 + -0x287efd4d) + (longlong)pwVar19);
      if ((wVar2 == L'\0') && (*pwVar19 == L'\0')) goto LAB_1405144af;
      if (wVar2 != *pwVar19) {
        wVar6 = towlower(wVar2);
        wVar7 = towlower(*pwVar19);
        if (wVar6 != wVar7) goto LAB_1405144a4;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
LAB_140514444:
  pwVar25 = L"de";
  pwVar24 = L"Culture";
  pwVar19 = L"Internationalization";
  goto LAB_1405148b2;
LAB_1405144a4:
  if (wVar6 != wVar7) {
    pwVar19 = L"italian";
    plVar10 = (longlong *)&DAT_143f3eda8;
    if (iVar9 != 0) {
      plVar10 = plVar21;
    }
    do {
      wVar2 = *(wchar_t *)((longlong)(plVar10 + -0x287efd58) + (longlong)pwVar19);
      if ((wVar2 == L'\0') && (*pwVar19 == L'\0')) goto LAB_14051451d;
      if (wVar2 != *pwVar19) {
        wVar6 = towlower(wVar2);
        wVar7 = towlower(*pwVar19);
        if (wVar6 != wVar7) goto LAB_140514512;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
LAB_1405144af:
  pwVar25 = L"fr";
  pwVar24 = L"Culture";
  pwVar19 = L"Internationalization";
  goto LAB_1405148b2;
LAB_140514512:
  if (wVar6 != wVar7) {
    pwVar19 = L"koreana";
    plVar10 = (longlong *)&DAT_143f3eda8;
    if (iVar9 != 0) {
      plVar10 = plVar21;
    }
    do {
      wVar2 = *(wchar_t *)((longlong)(plVar10 + -0x287efd63) + (longlong)pwVar19);
      if ((wVar2 == L'\0') && (*pwVar19 == L'\0')) goto LAB_14051458d;
      if (wVar2 != *pwVar19) {
        wVar6 = towlower(wVar2);
        wVar7 = towlower(*pwVar19);
        if (wVar6 != wVar7) goto LAB_140514582;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
LAB_14051451d:
  pwVar25 = L"it";
  pwVar24 = L"Culture";
  pwVar19 = L"Internationalization";
  goto LAB_1405148b2;
LAB_140514582:
  if (wVar6 != wVar7) {
    pwVar19 = L"spanish";
    plVar10 = (longlong *)&DAT_143f3eda8;
    if (iVar9 != 0) {
      plVar10 = plVar21;
    }
    do {
      wVar2 = *(wchar_t *)((longlong)(plVar10 + -0x287efd6e) + (longlong)pwVar19);
      if ((wVar2 == L'\0') && (*pwVar19 == L'\0')) goto LAB_1405145fd;
      if (wVar2 != *pwVar19) {
        wVar6 = towlower(wVar2);
        wVar7 = towlower(*pwVar19);
        if (wVar6 != wVar7) goto LAB_1405145f2;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
LAB_14051458d:
  pwVar25 = L"ko";
  pwVar24 = L"Culture";
  pwVar19 = L"Internationalization";
  goto LAB_1405148b2;
LAB_1405145f2:
  if (wVar6 != wVar7) {
    pwVar19 = L"schinese";
    plVar10 = (longlong *)&DAT_143f3eda8;
    if (iVar9 != 0) {
      plVar10 = plVar21;
    }
    do {
      wVar2 = *(wchar_t *)((longlong)(plVar10 + -0x287efd79) + (longlong)pwVar19);
      if ((wVar2 == L'\0') && (*pwVar19 == L'\0')) goto LAB_14051466d;
      if (wVar2 != *pwVar19) {
        wVar6 = towlower(wVar2);
        wVar7 = towlower(*pwVar19);
        if (wVar6 != wVar7) goto LAB_140514662;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
LAB_1405145fd:
  pwVar25 = L"es";
  pwVar24 = L"Culture";
  pwVar19 = L"Internationalization";
  goto LAB_1405148b2;
LAB_140514662:
  if (wVar6 != wVar7) {
    pwVar19 = L"tchinese";
    plVar10 = (longlong *)&DAT_143f3eda8;
    if (iVar9 != 0) {
      plVar10 = plVar21;
    }
    do {
      wVar2 = *(wchar_t *)((longlong)(plVar10 + -0x287efd91) + (longlong)pwVar19);
      if ((wVar2 == L'\0') && (*pwVar19 == L'\0')) goto LAB_1405146dd;
      if (wVar2 != *pwVar19) {
        wVar6 = towlower(wVar2);
        wVar7 = towlower(*pwVar19);
        if (wVar6 != wVar7) goto LAB_1405146d2;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
LAB_14051466d:
  pwVar25 = L"zh-Hans-CN";
  pwVar24 = L"Culture";
  pwVar19 = L"Internationalization";
  goto LAB_1405148b2;
LAB_1405146d2:
  if (wVar6 != wVar7) {
    pwVar20 = &DAT_143f7ed78;
    plVar10 = (longlong *)&DAT_143f3eda8;
    if (iVar9 != 0) {
      plVar10 = plVar21;
    }
    do {
      wVar6 = *(wint_t *)((longlong)(plVar10 + -0x287efdaf) + (longlong)pwVar20);
      if ((wVar6 == 0) && (*pwVar20 == 0)) goto LAB_14051474d;
      if (wVar6 != *pwVar20) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar20);
        if (wVar6 != wVar7) goto LAB_140514742;
      }
      pwVar20 = pwVar20 + 1;
    } while( true );
  }
LAB_1405146dd:
  pwVar25 = L"zh-Hant-TW";
  pwVar24 = L"Culture";
  pwVar19 = L"Internationalization";
  goto LAB_1405148b2;
LAB_140514742:
  if (wVar6 != wVar7) {
    pwVar20 = &DAT_143f7edd0;
    plVar10 = (longlong *)&DAT_143f3eda8;
    if (iVar9 != 0) {
      plVar10 = plVar21;
    }
    do {
      wVar6 = *(wint_t *)((longlong)(plVar10 + -0x287efdba) + (longlong)pwVar20);
      if ((wVar6 == 0) && (*pwVar20 == 0)) goto LAB_1405147bd;
      if (wVar6 != *pwVar20) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar20);
        if (wVar6 != wVar7) goto LAB_1405147b2;
      }
      pwVar20 = pwVar20 + 1;
    } while( true );
  }
LAB_14051474d:
  pwVar25 = L"ru";
  pwVar24 = L"Culture";
  pwVar19 = L"Internationalization";
  goto LAB_1405148b2;
LAB_1405147b2:
  if (wVar6 != wVar7) {
    pwVar19 = L"japanese";
    plVar10 = (longlong *)&DAT_143f3eda8;
    if (iVar9 != 0) {
      plVar10 = plVar21;
    }
    do {
      wVar2 = *(wchar_t *)((longlong)(plVar10 + -0x287efdc5) + (longlong)pwVar19);
      if ((wVar2 == L'\0') && (*pwVar19 == L'\0')) goto LAB_14051482d;
      if (wVar2 != *pwVar19) {
        wVar6 = towlower(wVar2);
        wVar7 = towlower(*pwVar19);
        if (wVar6 != wVar7) goto LAB_140514822;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
LAB_1405147bd:
  pwVar25 = L"th";
  pwVar24 = L"Culture";
  pwVar19 = L"Internationalization";
  goto LAB_1405148b2;
LAB_14051489d:
  pwVar25 = L"en";
  pwVar24 = L"Culture";
  pwVar19 = L"Internationalization";
  goto LAB_1405148b2;
LAB_140514822:
  if (wVar6 != wVar7) {
    pwVar19 = L"brazilian";
    plVar10 = (longlong *)&DAT_143f3eda8;
    if (iVar9 != 0) {
      plVar10 = plVar21;
    }
    do {
      wVar2 = *(wchar_t *)((longlong)(plVar10 + -0x287efdd1) + (longlong)pwVar19);
      if ((wVar2 == L'\0') && (*pwVar19 == L'\0')) {
        pwVar25 = L"pt-BR";
        pwVar24 = L"Culture";
        pwVar19 = L"Internationalization";
        goto LAB_1405148b2;
      }
      if (wVar2 != *pwVar19) {
        wVar6 = towlower(wVar2);
        wVar7 = towlower(*pwVar19);
        if (wVar6 != wVar7) goto LAB_14051489d;
      }
      pwVar19 = pwVar19 + 1;
    } while( true );
  }
LAB_14051482d:
  pwVar25 = L"ja";
  pwVar24 = L"Culture";
  pwVar19 = L"Internationalization";
LAB_1405148b2:
  FConfigCacheIni::SetString(DAT_1468b6148,pwVar19,pwVar24,pwVar25,&DAT_1468e2410);
  if (plVar21 != (longlong *)0x0) {
    FMemory::Free(plVar21);
  }
  return cVar4;
}



// FUNCTION 140514930 FUN_140514930 body=1582 status=ok
// SIG undefined FUN_140514930(void)

ulonglong FUN_140514930(longlong param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  char local_res10 [8];
  longlong **local_res18;
  undefined1 local_res20 [8];
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  puVar1 = (undefined4 *)(param_1 + 0x58);
  cVar4 = FConfigCacheIni::GetInt
                    (DAT_1468b6148,L"OnlineSubsystem",L"MaxRemoteTalkers",puVar1,&DAT_1468e2360);
  if (cVar4 == '\0') {
    *puVar1 = 0x10;
  }
  local_res10[0] = '\0';
  uVar7 = FConfigCacheIni::GetBool
                    (DAT_1468b6148,L"OnlineSubsystem",L"bHasVoiceEnabled",local_res10,&DAT_1468e2360
                    );
  if (((char)uVar7 == '\0') || (local_res10[0] == '\0')) {
    return uVar7 & 0xffffffffffffff00;
  }
  bVar5 = 1;
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                     (*(longlong **)(param_1 + 0x38),local_60);
  *(undefined8 *)(param_1 + 0x40) = *puVar8;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_58 + 1;
    lVar3 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe0))();
  if ((cVar4 == '\0') && (DAT_1468c2178 == '\0')) {
    plVar9 = (longlong *)operator_new(0xb8);
    plVar12 = (longlong *)0x0;
    plVar10 = plVar12;
    if (plVar9 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0x38);
      *plVar9 = (longlong)&PTR_FUN_143f9d298;
      plVar9[1] = lVar3;
      plVar9[4] = 0;
      plVar9[5] = 0;
      *(undefined2 *)(plVar9 + 6) = 0;
      plVar9[7] = 0;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar9[10] = 0;
      plVar9[0xd] = 0;
      plVar9[0xe] = 0;
      *(undefined4 *)(plVar9 + 0xf) = 0xffffffff;
      *(undefined4 *)((longlong)plVar9 + 0x7c) = 0;
      plVar9[0x11] = 0;
      *(undefined4 *)(plVar9 + 0x12) = 0;
      plVar9[0x13] = 0;
      plVar9[0x14] = 0;
      plVar9[0x15] = 0;
      plVar10 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
      plVar9[2] = *plVar10;
      plVar10 = (longlong *)
                SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
      plVar9[3] = *plVar10;
      plVar10 = plVar9;
    }
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_143f3f2d0;
      plVar9[2] = (longlong)plVar10;
      plVar12 = plVar9;
    }
    pplVar13 = (longlong **)(param_1 + 0x48);
    local_a0 = plVar10;
    local_98 = plVar12;
    SharedPointerInternals::EnableSharedFromThis(&local_a0,plVar10,plVar10);
    if (pplVar13 != &local_a0) {
      *pplVar13 = plVar10;
      local_a0 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_98);
      plVar12 = local_98;
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      lVar3 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    bVar5 = (**(code **)**pplVar13)(*pplVar13,1,*puVar1);
  }
  else {
    *puVar1 = 0;
  }
  plVar9 = (longlong *)0x0;
  plVar10 = (longlong *)operator_new(0x40);
  plVar12 = plVar9;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = 0;
    plVar10[1] = 0;
    *(undefined2 *)(plVar10 + 2) = 0;
    *(undefined2 *)(plVar10 + 3) = 0;
    *(undefined1 *)((longlong)plVar10 + 0x1a) = 0;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[6] = 0;
    *(undefined2 *)(plVar10 + 7) = 0;
    plVar12 = plVar10;
  }
  plVar11 = (longlong *)operator_new(0x18);
  plVar10 = plVar9;
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_DestroyObject_143f9ea10;
    plVar11[2] = (longlong)plVar12;
    plVar10 = plVar11;
  }
  pplVar13 = (longlong **)(param_1 + 0x60);
  local_90 = plVar12;
  local_88 = plVar10;
  SharedPointerInternals::EnableSharedFromThis(&local_90,plVar12,plVar12);
  if (pplVar13 != &local_90) {
    *pplVar13 = plVar12;
    local_90 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_88);
    plVar10 = local_88;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    lVar3 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)operator_new(0x20);
  plVar12 = plVar9;
  if (plVar10 != (longlong *)0x0) {
    puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    plVar12 = (longlong *)
              (**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,local_res20);
    lVar3 = *plVar12;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (longlong)&PTR_FUN_143f9a6c8;
    plVar10[3] = lVar3;
    plVar12 = plVar10;
  }
  plVar11 = (longlong *)operator_new(0x18);
  plVar10 = plVar9;
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_143f7de48;
    plVar11[2] = (longlong)plVar12;
    plVar10 = plVar11;
  }
  local_res18 = (longlong **)*pplVar13;
  plVar11 = plVar12 + 1;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar9;
  }
  local_b0 = plVar12;
  local_a8 = plVar10;
  if (plVar11 != (longlong *)0x0) {
    if ((*plVar11 != 0) && (plVar11[1] != 0)) {
      piVar2 = (int *)(plVar11[1] + 8);
      LOCK();
      iVar6 = *piVar2;
      if (iVar6 == 0) {
        *piVar2 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) goto LAB_140514dd9;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar11 = (longlong)plVar12;
    plVar9 = (longlong *)plVar11[1];
    if (plVar10 != plVar9) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)plVar11[1];
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      plVar11[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      lVar3 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_140514dd9:
  if (local_res18 != &local_b0) {
    *local_res18 = plVar12;
    local_b0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_res18 + 1,&local_a8);
  }
  plVar12 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_a8 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  FUN_1404ca600(param_1 + 0x70,*(undefined4 *)(param_1 + 0x58));
  if (bVar5 == 0) {
    local_78 = (longlong *)0x0;
    if (pplVar13 != &local_80) {
      *pplVar13 = (longlong *)0x0;
      local_80 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_78);
      plVar12 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_78 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
    }
    FUN_1404ca600(param_1 + 0x70,0);
    local_68 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x48) != &local_70) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      local_70 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_68);
      plVar12 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_68 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
    }
  }
  return (ulonglong)bVar5;
}



// FUNCTION 140514f60 FUN_140514f60 body=115 status=ok
// SIG undefined FUN_140514f60(void)

undefined8 FUN_140514f60(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (DAT_1468b6148 != 0) {
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"OnlineSubsystemSteam",L"bAllowP2PPacketRelay",param_1 + 0x168,
               &DAT_1468e2360);
  }
  plVar1 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_1461fc7d8);
  if (*plVar1 != 0) {
    puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc7d8);
    (**(code **)(*(longlong *)*puVar2 + 0x38))((longlong *)*puVar2,*(undefined1 *)(param_1 + 0x168))
    ;
  }
  return 1;
}



// FUNCTION 140514fe0 FUN_140514fe0 body=257 status=ok
// SIG undefined FUN_140514fe0(void)

ulonglong FUN_140514fe0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  char local_res8 [8];
  undefined1 local_res20 [8];
  
  uVar2 = *(ulonglong *)(param_1 + 8);
  if (*(char *)(uVar2 + 0x70) != '\0') {
    local_res8[0] = '\0';
    uVar2 = FConfigCacheIni::GetBool
                      (DAT_1468b6148,L"OnlineSubsystem",L"bHasVoiceEnabled",local_res8,
                       &DAT_1468e2360);
    if (((((char)uVar2 != '\0') && (local_res8[0] != '\0')) &&
        (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) && (*(longlong *)(param_1 + 0x18) != 0)
       ) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                        (*(longlong **)(param_1 + 0x10),local_res20,0,0);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))();
      if (iVar1 != 1) {
        *(undefined4 *)(param_1 + 0x40) = 0;
        if (*(int *)(param_1 + 0x44) != 0x2000) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0x2000);
        }
        *(undefined4 *)(param_1 + 0xa0) = 0;
        if (*(int *)(param_1 + 0xa4) != 0x5800) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x98,0x5800);
        }
      }
      return (ulonglong)(iVar1 != 1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1405150f0 FUN_1405150f0 body=160 status=ok
// SIG undefined FUN_1405150f0(void)

void FUN_1405150f0(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  puVar4 = &DAT_143f3eda8;
  if (DAT_146b18950 != 0) {
    puVar4 = DAT_146b18948;
  }
  cVar1 = FURL::HasOption(param_4,puVar4);
  if (cVar1 == '\0') {
    puVar3 = local_18;
    pwVar5 = L"WINDOWS";
  }
  else {
    puVar3 = local_res8;
    pwVar5 = L"STEAM";
  }
  puVar2 = (undefined8 *)FName::FName(puVar3,pwVar5,1);
  *(undefined8 *)(param_1 + 0x588) = *puVar2;
  FUN_1404d3420(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140515190 FUN_140515190 body=323 status=ok
// SIG undefined FUN_140515190(void)

void FUN_140515190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *local_18;
  
  FUN_1404d4110();
  lVar8 = *(longlong *)(param_1 + 0x58);
  if (lVar8 != 0) {
    lVar5 = FUN_14052c190();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plVar6 = (longlong *)FName::FName(local_res8,L"STEAM",1,param_4,param_5,param_6,param_7);
      if ((*(longlong *)(lVar8 + 0x588) == *plVar6) && (*(longlong *)(param_1 + 0x1978) != 0)) {
        uVar7 = FName::FName(local_28,L"STEAM",1,param_4,param_5,param_6,param_7);
        lVar8 = FUN_1419c6b80(uVar7);
        if (lVar8 != 0) {
          local_20 = *(undefined8 *)(param_1 + 0x1978);
          plVar6 = *(longlong **)(param_1 + 0x1980);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          local_18 = plVar6;
          FUN_14051eba0(lVar8,&local_20);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_18)();
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_18 + 8))(local_18,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1405152e0 FUN_1405152e0 body=336 status=ok
// SIG undefined FUN_1405152e0(void)

void FUN_1405152e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *local_18;
  
  FUN_1404d44d0();
  lVar8 = *(longlong *)(param_1 + 0x58);
  if (lVar8 != 0) {
    lVar5 = FUN_14052c190();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plVar6 = (longlong *)
               FName::FName(local_res8,L"STEAM",1,param_4,param_5,param_6,param_7,param_8);
      if ((*(longlong *)(lVar8 + 0x588) == *plVar6) && (*(longlong *)(param_1 + 0x1978) != 0)) {
        uVar7 = FName::FName(local_28,L"STEAM",1,param_4,param_5,param_6,param_7,param_8);
        lVar8 = FUN_1419c6b80(uVar7);
        if (lVar8 != 0) {
          local_20 = *(undefined8 *)(param_1 + 0x1978);
          plVar6 = *(longlong **)(param_1 + 0x1980);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          local_18 = plVar6;
          FUN_14051eba0(lVar8,&local_20);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_18)();
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_18 + 8))(local_18,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140515430 FUN_140515430 body=637 status=ok
// SIG undefined FUN_140515430(void)

void FUN_140515430(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_68 [4];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  uVar6 = FName::FName(local_res8,L"STEAM",1);
  plVar7 = (longlong *)FUN_1419c6b80(uVar6);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_68[0] = 0;
    local_68[1] = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"QoSHandlerSteamworksHost",0x32);
    lVar3 = *plVar7;
    uVar6 = FName::FName(local_res10,L"SteamClientSocket",1);
    uVar6 = (**(code **)(lVar3 + 0x18))(plVar7,uVar6,local_68,0);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    plVar4 = *(longlong **)(param_1 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4,1);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))(*(longlong **)(param_1 + 0x28),1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x58) = 1;
      (**(code **)(*plVar7 + 0xb0))(plVar7,&local_48,DAT_1468b6160);
      (**(code **)(*local_48 + 0x30))(local_48,0x1ed0);
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
                        (*(longlong **)(param_1 + 0x28),local_48);
      if (cVar5 == '\0') {
        FUN_1405233b0(param_1);
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_68[2] = 0;
    local_68[3] = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
    FGenericPlatformString::Memcpy(local_68[2],L"QoSHandlerSteamworksClient",0x36);
    lVar3 = *plVar7;
    uVar6 = FName::FName(local_res18,L"SteamClientSocket",1);
    uVar6 = (**(code **)(lVar3 + 0x18))(plVar7,uVar6,local_68 + 2,0);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    if (local_68[2] != 0) {
      FMemory::Free();
    }
    plVar4 = *(longlong **)(param_1 + 0x30);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4,1);
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x88))(*(longlong **)(param_1 + 0x30),1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x58) = 1;
      (**(code **)(*plVar7 + 0xb0))(plVar7,&local_38,DAT_1468b6160);
      (**(code **)(*local_38 + 0x30))(local_38,0);
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                        (*(longlong **)(param_1 + 0x30),local_38);
      if (cVar5 == '\0') {
        FUN_1405233b0(param_1);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_30 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
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
    }
  }
  return;
}



// FUNCTION 1405156b0 FUN_1405156b0 body=543 status=ok
// SIG undefined FUN_1405156b0(void)

undefined1 FUN_1405156b0(longlong param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (((param_2 != '\0') && (param_3 != 0)) &&
     (cVar4 = SteamAPI_RestartAppIfNecessary(param_3), cVar4 != '\0')) {
LAB_140515835:
    FUN_1416a8180(0);
    return *(undefined1 *)(param_1 + 0x70);
  }
  cVar4 = SteamAPI_Init();
  *(bool *)(param_1 + 0x70) = cVar4 != '\0';
  plVar6 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamApps_1461fc7c0);
  if (*plVar6 == 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  plVar6 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  if (*plVar6 == 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  plVar6 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
  if (*plVar6 == 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  plVar6 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
  if (*plVar6 == 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  plVar6 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8);
  if (*plVar6 == 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  plVar6 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_1461fc7d8);
  if (*plVar6 == 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  plVar6 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760)
  ;
  if (*plVar6 == 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  plVar6 = (longlong *)
           SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamRemoteStorage_1461fc790);
  if (*plVar6 == 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  plVar6 = (longlong *)
           SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmakingServers_1461fc778);
  if (*plVar6 == 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,
                       L"Steam must be running in order to launch this game. Please restart the game after starting the Steam client."
                       ,L"OnlineSubsystemSteam",L"SteamRequired");
    FUN_1416786b0(0,uVar8,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    FUN_1416a8180(0);
  }
  else {
    puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamApps_1461fc7c0);
    cVar4 = (*(code *)**(undefined8 **)*puVar7)();
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x70) = 0;
      goto LAB_140515835;
    }
    plVar6 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
    if (*plVar6 != 0) {
      puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
      uVar5 = (**(code **)(*(longlong *)*puVar7 + 0x48))();
      *(undefined4 *)(param_1 + 0x74) = uVar5;
      puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
      (**(code **)(*(longlong *)*puVar7 + 0x80))
                ((longlong *)*puVar7,AK::MemoryMgr::StartProfileThreadUsage);
      return *(undefined1 *)(param_1 + 0x70);
    }
  }
  return *(undefined1 *)(param_1 + 0x70);
}



// FUNCTION 1405158d0 FUN_1405158d0 body=565 status=ok
// SIG undefined FUN_1405158d0(void)

void FUN_1405158d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  wchar_t *_Str;
  wchar_t *_Src_00;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 local_58;
  longlong *local_50;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamApps_1461fc7c0);
  puVar7 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))
                     (*(longlong **)(param_1 + 0x10),local_38);
  local_50 = (longlong *)puVar7[1];
  local_58 = *puVar7;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x28) != &local_58) {
    *(undefined8 *)(param_1 + 0x28) = local_58;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_50);
  }
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  puVar10 = puVar7 + (longlong)*(int *)(param_1 + 0x40) * 2;
  for (; puVar7 != puVar10; puVar7 = puVar7 + 2) {
    local_40 = *(int *)(puVar7 + 1);
    lVar9 = (longlong)local_40;
    _Src = (void *)*puVar7;
    local_48 = (wchar_t *)0x0;
    if (local_40 == 0) {
      local_3c = 0;
      _Src_00 = (wchar_t *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
      _Src_00 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar9 * 2);
    }
    iVar4 = local_40;
    _Str = L"";
    if (local_40 != 0) {
      _Str = _Src_00;
    }
    iVar6 = _wtoi(_Str);
    puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamApps_1461fc7c0);
    cVar5 = (**(code **)(*(longlong *)*puVar8 + 0x30))((longlong *)*puVar8,iVar6);
    if (cVar5 != '\0') {
      iVar6 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar6 + 1;
      if (*(int *)(param_1 + 0x54) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x48,iVar6);
      }
      puVar8 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x48));
      *puVar8 = 0;
      *(int *)(puVar8 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar4,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src_00,(longlong)iVar4 * 2);
      }
    }
    if (_Src_00 != (wchar_t *)0x0) {
      FMemory::Free(_Src_00);
    }
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 140515b10 FUN_140515b10 body=73 status=ok
// SIG undefined FUN_140515b10(void)

void FUN_140515b10(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  SteamInternal_ContextInit(&PTR_FUN_1461fc748);
  puVar1 = (undefined8 *)
           SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760);
  lVar2 = (**(code **)(*(longlong *)*puVar1 + 0x68))
                    ((longlong *)*puVar1,*(undefined4 *)(param_1 + 0x38),
                     *(undefined4 *)(param_1 + 0x3c));
  *(longlong *)(param_1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}



// FUNCTION 140515b60 FUN_140515b60 body=107 status=ok
// SIG undefined FUN_140515b60(void)

void FUN_140515b60(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  SteamInternal_ContextInit(&PTR_FUN_1461fc748);
  local_res10[0] = 0;
  plVar2 = (longlong *)FUN_1419c6b80(local_res10);
  cVar1 = (**(code **)(*plVar2 + 0x78))(plVar2);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    cVar1 = (**(code **)(*(longlong *)*puVar3 + 8))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x40))(param_1);
      lVar4 = (**(code **)(*(longlong *)param_1[7] + 0x20))();
      param_1[4] = lVar4;
    }
  }
  return;
}



// FUNCTION 140515bd0 FUN_140515bd0 body=230 status=ok
// SIG undefined FUN_140515bd0(void)

void FUN_140515bd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760)
  ;
  plVar5 = (longlong *)*plVar5;
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                     (*(longlong **)(param_1 + 0x10),local_18);
  plVar1 = (longlong *)(param_1 + 0x50);
  if (plVar1 != plVar6) {
    *plVar1 = *plVar6;
    *plVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x58,plVar6 + 1);
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
  if ((plVar5 != (longlong *)0x0) && (*plVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140515c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0xe0))(plVar5,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}



// FUNCTION 140515cc0 FUN_140515cc0 body=230 status=ok
// SIG undefined FUN_140515cc0(void)

void FUN_140515cc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760)
  ;
  plVar5 = (longlong *)*plVar5;
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                     (*(longlong **)(param_1 + 0x10),local_18);
  plVar1 = (longlong *)(param_1 + 0x40);
  if (plVar1 != plVar6) {
    *plVar1 = *plVar6;
    *plVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x48,plVar6 + 1);
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
  if ((plVar5 != (longlong *)0x0) && (*plVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140515d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0xe0))(plVar5,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}



// FUNCTION 140515db0 FUN_140515db0 body=75 status=ok
// SIG undefined FUN_140515db0(void)

void FUN_140515db0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  SteamInternal_ContextInit(&PTR_FUN_1461fc748);
  puVar1 = (undefined8 *)
           SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760);
  lVar2 = (**(code **)(*(longlong *)*puVar1 + 0x70))();
  *(longlong *)(param_1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}



// FUNCTION 140515e00 FUN_140515e00 body=1178 status=ok
// SIG undefined FUN_140515e00(void)

void FUN_140515e00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int local_res10;
  longlong local_res20;
  undefined1 local_80 [8];
  longlong *local_78;
  int local_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  if (DAT_146853160 == '\0') goto LAB_140516283;
  plVar7 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                     (*(longlong **)(param_1 + 0x10),local_58);
  plVar3 = (longlong *)plVar7[1];
  lVar4 = *plVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  local_78 = (longlong *)0x0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_70 = 3;
  local_78 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = param_1;
    *plVar7 = (longlong)&DAT_143f3ed00;
    plVar7[2] = (longlong)FUN_14051b970;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar9 = (undefined8 *)
           (**(code **)(*(longlong *)(lVar4 + 0x2d8) + 8))(lVar4 + 0x2d8,local_80,&local_78);
  *(undefined8 *)(param_1 + 0x40) = *puVar9;
  if (local_70 == 0) {
LAB_140515f59:
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
  }
  else if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x28))(local_78,0);
    if (local_78 != (longlong *)0x0) {
      local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
    }
    local_70 = 0;
    goto LAB_140515f59;
  }
  if (((lVar4 != 0) && (lVar8 = *(longlong *)(lVar4 + 0x2c8), lVar8 != 0)) &&
     (local_res10 = 0, 0 < *(int *)(lVar8 + 0x10))) {
    local_res20 = 0;
    do {
      plVar7 = *(longlong **)(*(longlong *)(lVar8 + 8) + 0xa8 + local_res20);
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 8) + 0xa0 + local_res20);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if ((lVar8 != 0) && (lVar5 = *(longlong *)(lVar8 + 0x18), lVar5 != 0)) {
        plVar6 = *(longlong **)(lVar8 + 0x20);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (lVar5 != 0) {
          iVar2 = *(int *)(param_1 + 0x50);
          *(int *)(param_1 + 0x50) = iVar2 + 1;
          if (*(int *)(param_1 + 0x54) < iVar2 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(param_1 + 0x48,iVar2);
          }
          plVar11 = (longlong *)0x0;
          puVar9 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x48));
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = &PTR_FUN_143f9a6c8;
          puVar9[3] = *(undefined8 *)(lVar8 + 0x40);
          plVar10 = (longlong *)operator_new(0x30);
          plVar12 = plVar11;
          if (plVar10 != (longlong *)0x0) {
            *plVar10 = (longlong)&PTR_FUN_143f9a840;
            plVar10[2] = 0;
            plVar10[3] = 0;
            plVar10[1] = (longlong)&PTR_FUN_143f9a6c8;
            plVar10[4] = *(longlong *)(lVar5 + 0x20);
            *(undefined2 *)(plVar10 + 5) = 0;
            plVar12 = plVar10;
          }
          (**(code **)(*plVar12 + 0x30))(plVar12,0x1ed0);
          plVar10 = (longlong *)operator_new(0x18);
          if (plVar10 != (longlong *)0x0) {
            *(undefined4 *)(plVar10 + 1) = 1;
            *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
            *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
            plVar10[2] = (longlong)plVar12;
            plVar11 = plVar10;
          }
          local_68 = plVar12;
          local_60 = plVar11;
          SharedPointerInternals::EnableSharedFromThis(&local_68,plVar12,plVar12);
          iVar2 = *(int *)(lVar4 + 0x348);
          *(int *)(lVar4 + 0x348) = iVar2 + 1;
          if (*(int *)(lVar4 + 0x34c) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x340,iVar2);
            plVar12 = local_68;
          }
          plVar11 = local_60;
          puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar4 + 0x340));
          *puVar9 = plVar12;
          puVar9[1] = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_60 + 1;
              lVar8 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_60)(local_60);
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
          }
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar6 + 1;
          lVar8 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      lVar8 = *(longlong *)(lVar4 + 0x2c8);
      local_res10 = local_res10 + 1;
      local_res20 = local_res20 + 0xc0;
    } while (local_res10 < *(int *)(lVar8 + 0x10));
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
LAB_140516283:
  if (*(int *)(param_1 + 0x50) == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  return;
}



// FUNCTION 1405162a0 FUN_1405162a0 body=30 status=ok
// SIG undefined FUN_1405162a0(void)

void FUN_1405162a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8)
  ;
                    /* WARNING: Could not recover jumptable at 0x0001405162bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)*puVar1)();
  return;
}



// FUNCTION 1405162d0 FUN_1405162d0 body=230 status=ok
// SIG undefined FUN_1405162d0(void)

void FUN_1405162d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))
                     (*(longlong **)(param_1 + 0x10),local_18);
  local_20 = (longlong *)puVar6[1];
  local_28 = *puVar6;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x28) != &local_28) {
    *(undefined8 *)(param_1 + 0x28) = local_28;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_20);
  }
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
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
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
  return;
}



// FUNCTION 1405163c0 FUN_1405163c0 body=57 status=ok
// SIG undefined FUN_1405163c0(void)

undefined8 * FUN_1405163c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f9a2f8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140516400 FUN_140516400 body=1008 status=ok
// SIG undefined FUN_140516400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140516400(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined8 *local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  longlong *local_290;
  undefined8 local_288;
  longlong *local_280;
  undefined2 *local_278;
  int local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 *local_258;
  undefined8 local_250;
  undefined4 local_248;
  longlong local_240 [3];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  local_268 = param_3;
  local_258 = param_2;
  lVar7 = FUN_142b45e90();
  local_280 = (longlong *)0x0;
  local_288 = 0;
  local_260 = *(undefined8 *)(lVar7 + 0x18);
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 1;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_228 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_220,&local_280);
  plVar3 = local_280;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_280 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_280)(local_280);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_280 + 8))(local_280,1);
      }
    }
  }
  local_1f0 = 0;
  local_218 = 0x200000002;
  if (*(int *)(param_4 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*param_4;
  }
  lVar7 = FInternationalization::Get();
  plVar3 = *(longlong **)(lVar7 + 0x30);
  uVar9 = *(undefined8 *)(lVar7 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)FUN_140511b50(uVar9);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(&local_278,L"{\"language\":\"%s\",\"item_id\":\"%s\"}",puVar12,puVar13);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  local_2a8 = 0;
  puVar13 = &DAT_143f3eda8;
  if (local_270 != 0) {
    puVar13 = local_278;
  }
  local_2a0 = 0;
  lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar13);
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (*(char *)(*(longlong *)(lVar7 + 0x88) + lVar10) != '\0');
  puVar13 = &DAT_143f3eda8;
  if (local_270 != 0) {
    puVar13 = local_278;
  }
  lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar13);
  uVar4 = local_2a0;
  lVar11 = (longlong)(int)local_2a0;
  _Src = *(void **)(lVar7 + 0x88);
  iVar5 = (int)lVar10 + (int)local_2a0;
  local_2a0 = CONCAT44(local_2a0._4_4_,iVar5);
  if (local_2a0._4_4_ < iVar5) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_2a8,uVar4 & 0xffffffff);
  }
  _guard_xfg_dispatch_icall_nop((void *)(lVar11 + local_2a8),_Src,(longlong)(int)lVar10);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_250 = 0;
  local_248 = 0;
  puVar8 = (undefined8 *)operator_new(0x28,&local_250);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &DAT_143f3ed00;
    puVar8[2] = FUN_1405167f0;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[4] = uVar9;
    *puVar8 = &PTR_GetPoolName_143f3ed48;
  }
  local_2b8 = FUN_14050e7e0(param_1,local_240,param_2);
  local_2b0 = &local_250;
  uVar6 = FUN_142b57200(local_260,&local_228,local_268,&local_2a8);
  if (local_240[0] != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar5 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar5 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar5);
  }
  lVar10 = *(longlong *)(param_1 + 0x70);
  lVar7 = (longlong)iVar5 * 0x28;
  *(undefined8 *)(lVar7 + lVar10) = 0;
  *(undefined8 *)(lVar7 + 8 + lVar10) = 0;
  *(undefined8 *)(lVar7 + 0x10 + lVar10) = 0;
  *(undefined8 *)(lVar7 + 0x18 + lVar10) = 0;
  *(undefined8 *)(lVar7 + 0x20 + lVar10) = 0;
  local_298 = *local_258;
  local_290 = (longlong *)local_258[1];
  if (local_290 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_290 + 1) = (int)local_290[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar7);
  if (puVar8 != &local_298) {
    *puVar8 = local_298;
    local_298 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(puVar8 + 1,&local_290);
  }
  plVar3 = local_290;
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_290 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_290 + 8))(local_290,1);
      }
    }
  }
  FString::operator=(*(longlong *)(param_1 + 0x70) + 0x18 + lVar7,param_4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x10 + lVar7) = uVar6;
  if (local_2a8 != 0) {
    FMemory::Free();
  }
  if (local_278 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_228);
  return;
}



// FUNCTION 1405167f0 FUN_1405167f0 body=1240 status=ok
// SIG undefined FUN_1405167f0(void)

void FUN_1405167f0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined2 **ppuVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *_Src;
  undefined2 *puVar11;
  bool bVar12;
  undefined2 *local_128;
  int local_120;
  void *local_118;
  undefined8 local_110;
  undefined4 local_108 [2];
  longlong local_100 [8];
  undefined2 *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong *plStack_a8;
  undefined8 local_a0;
  longlong local_98 [2];
  undefined4 *local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_50 [8];
  longlong *local_48;
  
  iVar10 = 0;
  _Src = (undefined2 *)0x0;
  puVar11 = _Src;
  while ((iVar3 = (int)puVar11, -1 < iVar3 && (iVar3 < (int)param_1[0xf]))) {
    lVar8 = param_1[0xe];
    if (*(int *)(lVar8 + 0x10 + (longlong)iVar3 * 0x28) == *(int *)(*param_2 + 8)) {
      plVar2 = (longlong *)(lVar8 + (longlong)iVar3 * 0x28);
      local_b0 = *plVar2;
      plStack_a8 = (longlong *)plVar2[1];
      if (plStack_a8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_a8 + 1) = (int)plStack_a8[1] + 1;
        UNLOCK();
      }
      local_a0 = CONCAT44(local_a0._4_4_,(int)plVar2[2]);
      FString::FString(local_98,plVar2 + 3);
      goto LAB_14051689a;
    }
    puVar11 = (undefined2 *)(ulonglong)(iVar3 + 1);
  }
  local_a0 = 0;
  local_b0 = 0;
  plStack_a8 = (longlong *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
LAB_14051689a:
  local_128 = (undefined2 *)0x0;
  bVar12 = false;
  local_120 = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  if (*param_4 != 0) {
    local_100[0] = 0;
    local_100[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_100,0);
    FGenericPlatformString::Memcpy(local_100[0],L"message",0x10);
    ppuVar4 = (undefined2 **)FJsonObject::GetStringField(*param_4,local_80,local_100);
    if (&local_128 != ppuVar4) {
      _Src = *ppuVar4;
      *ppuVar4 = (undefined2 *)0x0;
      iVar10 = *(int *)(ppuVar4 + 1);
      ppuVar4[1] = (undefined2 *)0x0;
      local_128 = _Src;
      local_120 = iVar10;
    }
    if (local_80[0] != 0) {
      FMemory::Free();
    }
    if (local_100[0] != 0) {
      FMemory::Free();
    }
    local_c0 = (undefined2 *)0x0;
    local_b8 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_100 + 8,0);
    puVar11 = local_c0;
    FGenericPlatformString::Memcpy(local_c0,L"TRANSACTION_CREATED",0x28);
    puVar9 = &DAT_143f3eda8;
    if ((int)local_b8 != 0) {
      puVar9 = puVar11;
    }
    puVar7 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar7 = _Src;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
    bVar12 = iVar3 == 0;
    if (puVar11 != (undefined2 *)0x0) {
      FMemory::Free(puVar11);
    }
    if (!bVar12) {
      local_100[3] = 6;
      local_100[2] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_100 + 2,0);
      FGenericPlatformString::Memcpy(local_100[2],L"error",0xc);
      plVar5 = (longlong *)FUN_1416b2cb0(*param_4,local_100 + 2);
      plVar2 = (longlong *)plVar5[1];
      lVar8 = *plVar5;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        _Src = local_128;
        iVar10 = local_120;
      }
      if (local_100[2] != 0) {
        FMemory::Free();
      }
      if (lVar8 == 0) {
        local_100[7] = 6;
        local_100[6] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_100 + 6,0);
        FGenericPlatformString::Memcpy(local_100[6],L"error",0xc);
        ppuVar4 = (undefined2 **)FJsonObject::GetStringField(*param_4,local_60,local_100 + 6);
        if (&local_128 != ppuVar4) {
          if (_Src != (undefined2 *)0x0) {
            FMemory::Free(_Src);
          }
          _Src = *ppuVar4;
          *ppuVar4 = (undefined2 *)0x0;
          iVar10 = *(int *)(ppuVar4 + 1);
          ppuVar4[1] = (undefined2 *)0x0;
          local_128 = _Src;
          local_120 = iVar10;
        }
        lVar8 = local_100[6];
        if (local_60[0] != 0) {
          FMemory::Free();
          lVar8 = local_100[6];
        }
      }
      else {
        local_100[5] = 5;
        local_100[4] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_100 + 4,0);
        FGenericPlatformString::Memcpy(local_100[4],L"code",10);
        ppuVar4 = (undefined2 **)FJsonObject::GetStringField(lVar8,local_70,local_100 + 4);
        if (&local_128 != ppuVar4) {
          if (_Src != (undefined2 *)0x0) {
            FMemory::Free(_Src);
          }
          _Src = *ppuVar4;
          *ppuVar4 = (undefined2 *)0x0;
          iVar10 = *(int *)(ppuVar4 + 1);
          ppuVar4[1] = (undefined2 *)0x0;
          local_128 = _Src;
          local_120 = iVar10;
        }
        lVar8 = local_100[4];
        if (local_70[0] != 0) {
          FMemory::Free();
          lVar8 = local_100[4];
        }
      }
      if (lVar8 != 0) {
        FMemory::Free();
      }
      local_110 = CONCAT44(local_110._4_4_,iVar10);
      if ((iVar10 != 0) || (local_110._4_4_ != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,iVar10);
        _guard_xfg_dispatch_icall_nop(local_118,_Src,(longlong)iVar10 * 2);
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar2 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        _Src = local_128;
        if ((int)lVar8 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          _Src = local_128;
          if (iVar10 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
            _Src = local_128;
          }
        }
      }
    }
  }
  lVar8 = *param_1;
  uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_b0 + 8,local_50);
  (**(code **)(lVar8 + 0x40))(param_1,uVar6,local_98,bVar12,&local_118);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    _Src = local_128;
    if ((int)lVar8 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      _Src = local_128;
      if (iVar10 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
        _Src = local_128;
      }
    }
  }
  local_108[0] = *(undefined4 *)(*param_2 + 8);
  local_88 = local_108;
  FUN_1404f7460(param_1 + 0xe,&local_88);
  if (local_118 != (void *)0x0) {
    FMemory::Free();
  }
  if (_Src != (undefined2 *)0x0) {
    FMemory::Free(_Src);
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  plVar2 = plStack_a8;
  if (plStack_a8 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_a8 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_a8)(plStack_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 140516cd0 FUN_140516cd0 body=237 status=ok
// SIG undefined FUN_140516cd0(void)

undefined8 FUN_140516cd0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,L"STEAM",1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c60) {
    _Init_thread_header(&DAT_146852c60);
    if (DAT_146852c60 == -1) {
      FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_146852c60);
    }
  }
  uVar5 = DAT_146852c58;
  uVar2 = FUN_14168dc80();
  plVar3 = (longlong *)FModuleManager::GetModule(uVar2,uVar5);
  lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,*puVar1);
  if (lVar4 != 0) {
    uVar5 = FName::FName(local_res10,L"STEAM",1);
    lVar4 = FUN_1419c6b80(uVar5);
    if (lVar4 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140516dc0 FUN_140516dc0 body=104 status=ok
// SIG undefined FUN_140516dc0(void)

bool FUN_140516dc0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  char local_res8 [32];
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    return true;
  }
  local_res8[0] = '\x01';
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"OnlineSubsystemSteam",L"bEnabled",local_res8,&DAT_1468e2360);
  bVar3 = false;
  if (local_res8[0] != '\0') {
    uVar2 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar2,L"MultiprocessOSS");
    bVar3 = cVar1 == '\0';
  }
  return bVar3;
}



// FUNCTION 140516e30 FUN_140516e30 body=65 status=ok
// SIG undefined FUN_140516e30(void)

ulonglong FUN_140516e30(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    in_RAX = FUN_140516dc0();
    if (((char)in_RAX != '\0') && (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140516e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x88))();
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140516e80 FUN_140516e80 body=186 status=ok
// SIG undefined FUN_140516e80(void)

bool FUN_140516e80(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((((*(longlong *)(param_1 + 0xe0) != 0) && (cVar1 = FUN_140516dc0(), cVar1 != '\0')) &&
      (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xf8))
                         (*(longlong **)(param_1 + 0xe0),param_2), cVar1 != '\0')) &&
     (((*(longlong *)(param_1 + 0x120) != 0 && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0))
      && ((cVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 8))(), cVar1 != '\0' &&
          (1 < param_4 - 4U)))))) {
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x10))();
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x28))
                      (*(longlong **)(param_1 + 0x120),*puVar3);
    if (param_4 == 3) {
      return iVar2 == 5;
    }
    return iVar2 == 3;
  }
  return false;
}



// FUNCTION 140516f40 FUN_140516f40 body=37 status=ok
// SIG undefined FUN_140516f40(void)

undefined8 FUN_140516f40(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x50))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140516f70 FUN_140516f70 body=384 status=ok
// SIG undefined FUN_140516f70(void)

undefined8 FUN_140516f70(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    lVar8 = 0;
    do {
      plVar3 = *(longlong **)(lVar8 + 0xa8 + *(longlong *)(param_1 + 0x2b8));
      plVar4 = *(longlong **)(lVar8 + 0xa0 + *(longlong *)(param_1 + 0x2b8));
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      cVar6 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if (cVar6 != '\0') {
        cVar6 = (**(code **)(plVar4[5] + 0x20))(plVar4 + 5);
        if (cVar6 != '\0') {
          local_30 = *param_2;
          local_48 = &PTR_FUN_143f9a6c8;
          local_40 = 0;
          plStack_38 = (longlong *)0x0;
          cVar6 = FUN_1404c7fe0(&local_48,plVar4 + 5);
          local_48 = &PTR_FUN_143f73cd8;
          if (plStack_38 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plStack_38 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar2 == 1) && (plStack_38 != (longlong *)0x0)) {
              (**(code **)(*plStack_38 + 8))();
            }
          }
          if (cVar6 != '\0') {
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar3 + 1;
              lVar8 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            return 1;
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
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
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 0x118;
    } while (iVar7 < *(int *)(param_1 + 0x2c0));
  }
  return 0;
}



// FUNCTION 1405170f0 FUN_1405170f0 body=167 status=ok
// SIG undefined FUN_1405170f0(void)

undefined8 FUN_1405170f0(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong *plVar8;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  
  bVar7 = false;
  local_res18 = 0;
  plVar4 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  plVar4 = (longlong *)*plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar8 = (longlong *)CONCAT44(uStackX_1c,local_res18);
  }
  else {
    plVar8 = (longlong *)0x0;
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))();
    lVar3 = *plVar5;
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_res18);
    bVar7 = true;
    if (*plVar4 == lVar3) {
      uVar6 = 1;
      goto LAB_140517153;
    }
  }
  uVar6 = 0;
LAB_140517153:
  if ((bVar7) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return uVar6;
}



// FUNCTION 1405171a0 FUN_1405171a0 body=93 status=ok
// SIG undefined FUN_1405171a0(void)

undefined8 FUN_1405171a0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_res18 [16];
  
  lVar2 = FUN_14050e930();
  if ((lVar2 != 0) && (cVar1 = CLogicalCitizen::GetGender(lVar2), cVar1 == '\0')) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (((lVar2 != 0) &&
      (plVar3 = (longlong *)FDateTime::Now(local_res18), *(char *)(lVar2 + 0x18) != '\0')) &&
     ((*(longlong *)(lVar2 + 0x30) == 0 ||
      (*plVar3 - *(longlong *)(lVar2 + 0x20) <= *(longlong *)(lVar2 + 0x30))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140517210 FUN_140517210 body=319 status=ok
// SIG undefined FUN_140517210(void)

undefined1 FUN_140517210(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 local_18;
  longlong *local_10;
  
  bVar10 = false;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return 0;
  }
  lVar7 = FUN_14050e930();
  if (lVar7 != 0) {
    local_18 = **(undefined8 **)(param_1 + 0x60);
    local_10 = (longlong *)(*(undefined8 **)(param_1 + 0x60))[1];
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    bVar10 = true;
    cVar5 = FUN_1404d5ac0(lVar7,&local_18,param_2);
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_140517287;
    }
  }
  bVar4 = false;
LAB_140517287:
  plVar8 = local_10;
  if ((bVar10) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (bVar4) {
    return 1;
  }
  uVar6 = 0;
  plVar8 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
  if (*plVar8 != 0) {
    puVar9 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730)
    ;
    plVar8 = (longlong *)*puVar9;
    puVar9 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
    uVar6 = (**(code **)(*plVar8 + 0x88))(plVar8,*puVar9,0x601);
  }
  return uVar6;
}



// FUNCTION 140517350 FUN_140517350 body=61 status=ok
// SIG undefined FUN_140517350(void)

void FUN_140517350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14050e930();
  if (lVar1 != 0) {
    FUN_1404d5ac0(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 140517390 FUN_140517390 body=63 status=ok
// SIG undefined FUN_140517390(void)

undefined1 FUN_140517390(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x110))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0xd0))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1405173d0 FUN_1405173d0 body=37 status=ok
// SIG undefined FUN_1405173d0(void)

undefined8 FUN_1405173d0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140517400 FUN_140517400 body=291 status=ok
// SIG undefined FUN_140517400(void)

bool FUN_140517400(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined **local_28;
  undefined8 local_20;
  longlong *plStack_18;
  undefined8 local_10;
  
  local_28 = &PTR_FUN_143f9a6c8;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
  lVar7 = 0;
  local_10 = *puVar3;
  lVar5 = lVar7;
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar4 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar4 = param_1 + 0x80;
    }
    iVar6 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)local_10 >> 0x20) * 0x17 + (int)local_10)
                             & (longlong)*(int *)(param_1 + 0x90) - 1U) * 4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x48);
      do {
        lVar8 = (longlong)iVar6 * 0x38;
        cVar2 = (*(code *)*local_28)(&local_28,lVar8 + lVar4);
        if (cVar2 != '\0') {
          if (iVar6 != -1) {
            lVar5 = *(longlong *)(param_1 + 0x48) + lVar8;
          }
          break;
        }
        lVar4 = *(longlong *)(param_1 + 0x48);
        iVar6 = *(int *)(lVar8 + 0x30 + lVar4);
      } while (iVar6 != -1);
    }
  }
  lVar4 = lVar5 + 0x20;
  if (lVar5 == 0) {
    lVar4 = lVar7;
  }
  local_28 = &PTR_FUN_143f73cd8;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_18 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (plStack_18 != (longlong *)0x0)) {
      (**(code **)(*plStack_18 + 8))();
    }
  }
  return lVar4 != 0;
}



// FUNCTION 140517550 FUN_140517550 body=103 status=ok
// SIG undefined FUN_140517550(void)

ulonglong FUN_140517550(int *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = param_1[1];
  uVar4 = uVar1 & 0xf00000;
  uVar3 = (ulonglong)(uVar4 - 1);
  if (((((uVar4 - 1 < 0xafffff) &&
        (uVar2 = ((int)uVar1 >> 0x18) - 1, uVar3 = (ulonglong)uVar2, uVar2 < 4)) &&
       ((uVar4 != 0x100000 ||
        ((*param_1 != 0 && (uVar3 = (ulonglong)(uVar1 & 0xfffff), (uVar1 & 0xfffff) == 1)))))) &&
      ((uVar4 != 0x700000 || ((*param_1 != 0 && ((uVar1 & 0xfffff) == 0)))))) &&
     ((uVar4 != 0x300000 || (*param_1 != 0)))) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1405175d0 FUN_1405175d0 body=78 status=ok
// SIG undefined FUN_1405175d0(void)

undefined8 FUN_1405175d0(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(), cVar1 != '\0')) {
    return 1;
  }
  if (((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
      (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))(), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(param_1 + 0x28), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140517620 FUN_140517620 body=127 status=ok
// SIG undefined FUN_140517620(void)

longlong FUN_140517620(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint7 uVar3;
  uint uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  uVar3 = (uint7)(uVar1 >> 8);
  if (((((uVar1 != 0) && (uVar4 = (uint)(uVar1 >> 0x20), (uVar1 >> 0x20 & 0xf00000) != 0)) &&
       ((uVar4 & 0xf00000) < 0xb00000)) && (((int)uVar4 >> 0x18) - 1U < 4)) &&
     ((iVar2 = (int)uVar1, (uVar4 & 0xf00000) != 0x100000 ||
      ((iVar2 != 0 && ((uVar4 & 0xfffff) == 1)))))) {
    uVar4 = uVar4 >> 0x14 & 0xf;
    if (((uVar4 != 7) || ((iVar2 != 0 && ((uVar1 >> 0x20 & 0xfffff) == 0)))) &&
       ((uVar4 != 3 || (iVar2 != 0)))) {
      return CONCAT71(uVar3,1);
    }
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 1405176a0 FUN_1405176a0 body=119 status=ok
// SIG undefined FUN_1405176a0(void)

undefined8 FUN_1405176a0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int local_res8 [2];
  
  FUN_14052b640();
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    cVar2 = (**(code **)*puVar1)(puVar1,*param_2);
    if ((cVar2 != '\0') &&
       ((*(char *)(param_1 + 0x31) != '\0' || (*(char *)(param_1 + 0x30) != '\0')))) {
      local_res8[0] = 0;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                        (*(longlong **)(param_1 + 0x10),local_res8,0,0);
      if ((iVar3 == 0) && (local_res8[0] != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140517720 FUN_140517720 body=574 status=ok
// SIG undefined FUN_140517720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140517720(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_2 + 0xa0);
  if (((lVar4 != 0) && (*(char *)(param_2 + 0x3a) == '\0')) &&
     (cVar9 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(lVar4 + 0x28), cVar9 != '\0')) {
    lVar5 = *(longlong *)(param_3 + 0xa0);
    puVar10 = (undefined8 *)(lVar4 + 8);
    plVar6 = *(longlong **)(lVar5 + 0x10);
    uVar7 = *(undefined8 *)(lVar5 + 8);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_78 = uVar7;
    plStack_70 = plVar6;
    if (&local_78 != puVar10) {
      local_78 = *puVar10;
      plStack_70 = *(longlong **)(lVar4 + 0x10);
      *puVar10 = uVar7;
      *(longlong **)(lVar4 + 0x10) = plVar6;
      local_58 = uVar7;
      plStack_50 = plVar6;
    }
    plVar6 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    plVar6 = *(longlong **)(lVar5 + 0x20);
    puVar10 = (undefined8 *)(lVar4 + 0x18);
    uVar7 = *(undefined8 *)(lVar5 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_68 = uVar7;
    plStack_60 = plVar6;
    if (&local_68 != puVar10) {
      local_68 = *puVar10;
      plStack_60 = *(longlong **)(lVar4 + 0x20);
      *puVar10 = uVar7;
      *(longlong **)(lVar4 + 0x20) = plVar6;
      local_48 = uVar7;
      plStack_40 = plVar6;
    }
    plVar6 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    puVar10 = (undefined8 *)operator_new(0x78);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0xb8);
      FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar10,*(undefined8 *)(param_1 + 0x288),0);
      puVar10[5] = uVar7;
      *puVar10 = &PTR_FUN_143f9b5d0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[6] = &PTR_FUN_143f9a6c8;
      puVar10[9] = *(undefined8 *)(lVar4 + 0x40);
      *(undefined4 *)(puVar10 + 10) = 2;
      puVar10[0xb] = &PTR_FUN_143f9ad78;
      *(undefined1 *)(puVar10 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar10 + 100) = 0;
      puVar10[0xe] = &LAB_140519660;
      puVar10[0xd] = puVar10;
      SteamAPI_RegisterCallback(puVar10 + 0xb,0x1f8);
    }
    FOnlineAsyncTaskManager::AddToInQueue
              (*(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x148),puVar10);
    return 0x3e5;
  }
  return 0x80004005;
}



// FUNCTION 140517960 FUN_140517960 body=1550 status=ok
// SIG undefined FUN_140517960(void)

void FUN_140517960(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined4 local_88 [2];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  
  iVar11 = -0x7fffbffb;
  iVar4 = -0x7fffbffb;
  lVar6 = FUN_140511190(param_1,param_3);
  plVar10 = (longlong *)0x0;
  iVar12 = 0;
  if (lVar6 != 0) goto LAB_140517f38;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x52));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x52));
  }
  iVar4 = (int)param_1[0x58];
  *(int *)(param_1 + 0x58) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x2c4) < iVar4 + 1) {
    FUN_1404f33d0(param_1 + 0x57,iVar4);
  }
  plVar13 = (longlong *)((longlong)iVar4 * 0x118 + param_1[0x57]);
  plVar14 = plVar10;
  if (plVar13 != (longlong *)0x0) {
    *plVar13 = (longlong)&PTR_FUN_143f769a8;
    plVar13[1] = *(longlong *)(param_4 + 8);
    lVar6 = *(longlong *)(param_4 + 0x10);
    plVar13[2] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    FString::FString(plVar13 + 3,param_4 + 0x18);
    FUN_1404e8890(plVar13 + 5,param_4 + 0x28);
    plVar13[0x14] = *(longlong *)(param_4 + 0xa0);
    lVar6 = *(longlong *)(param_4 + 0xa8);
    plVar13[0x15] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar13 + 0x16) = *(undefined4 *)(param_4 + 0xb0);
    *(undefined4 *)((longlong)plVar13 + 0xb4) = *(undefined4 *)(param_4 + 0xb4);
    *plVar13 = (longlong)&PTR__scalar_deleting_destructor__143f7d2c8;
    plVar13[0x17] = param_3;
    *(undefined4 *)(plVar13 + 0x18) = 0xffffffff;
    plVar13[0x19] = 0;
    plVar13[0x1a] = 0;
    *(undefined1 *)(plVar13 + 0x1b) = 0;
    plVar13[0x1c] = 0;
    plVar13[0x1d] = 0;
    plVar13[0x1e] = 0;
    plVar13[0x1f] = 0;
    plVar13[0x20] = 0;
    plVar13[0x21] = 0;
    *(undefined4 *)(plVar13 + 0x22) = 0;
    plVar14 = plVar13;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x52));
  local_a0 = (longlong *)((longlong *)*param_2)[1];
  local_a8 = *(longlong *)*param_2;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  if (plVar14 + 0x19 != &local_a8) {
    plVar14[0x19] = local_a8;
    local_a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar14 + 0x1a,&local_a0);
  }
  plVar13 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a0 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (((param_1[0x51] == 0) || (cVar2 = FUN_140516dc0(), cVar2 == '\0')) ||
     (*(char *)((longlong)plVar14 + 0x3a) != '\0')) {
    plVar7 = (longlong *)operator_new(0x48);
    plVar13 = plVar10;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f9a7a8;
      plVar7[1] = 0;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      plVar7[5] = (longlong)&PTR_FUN_143f9a6c8;
      plVar7[8] = 0;
      plVar13 = plVar7;
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_143f3f2d0;
      plVar7[2] = (longlong)plVar13;
      plVar10 = plVar7;
    }
    local_70 = plVar13;
    local_68 = plVar10;
    SharedPointerInternals::EnableSharedFromThis(&local_70,plVar13,plVar13);
    if ((longlong **)(plVar14 + 0x14) != &local_70) {
      plVar14[0x14] = (longlong)plVar13;
      local_70 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar14 + 0x15,&local_68);
      plVar10 = local_68;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar10 + 1;
      lVar6 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    local_58 = plVar14[0x14];
    *(undefined4 *)(plVar14 + 0x22) = 2;
    iVar4 = -0x7fffbffb;
    if (local_58 != 0) {
      lVar6 = *(longlong *)(param_4 + 0xa0);
      plVar10 = *(longlong **)(lVar6 + 8);
      (**(code **)(*plVar10 + 0x28))(plVar10,local_88);
      plVar10 = *(longlong **)(lVar6 + 8);
      uVar8 = FName::FName(local_50,L"WINDOWS",1);
      plVar13 = (longlong *)FUN_1419c6b80(uVar8);
      lVar6 = *plVar13;
      uVar5 = (**(code **)(*plVar10 + 0x38))(plVar10);
      puVar9 = (undefined8 *)(**(code **)(lVar6 + 0x70))(plVar13,local_48,local_88[0],uVar5);
      local_90 = (longlong *)puVar9[1];
      local_98 = *puVar9;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      if ((undefined8 *)(local_58 + 8) != &local_98) {
        *(undefined8 *)(local_58 + 8) = local_98;
        local_98 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(local_58 + 0x10,&local_90);
      }
      plVar10 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_90 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      iVar4 = iVar12;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_40 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
LAB_140517f0b:
    if (iVar4 == 0x3e5) {
      return;
    }
    if (iVar4 == 0) {
      FUN_14051ed00(param_1,plVar14);
      goto LAB_140517f38;
    }
  }
  else {
    local_60 = 0;
    plVar13 = (longlong *)FUN_1419c6b80(&local_60);
    iVar4 = iVar11;
    if (((plVar13 != (longlong *)0x0) &&
        (cVar2 = (**(code **)(*plVar13 + 0x78))(plVar13), cVar2 != '\0')) &&
       (lVar6 = *(longlong *)(param_4 + 0xa0), lVar6 != 0)) {
      plVar7 = (longlong *)operator_new(0x48);
      plVar13 = plVar10;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f9a7a8;
        plVar7[1] = 0;
        plVar7[2] = 0;
        plVar7[3] = 0;
        plVar7[4] = 0;
        plVar7[6] = 0;
        plVar7[7] = 0;
        plVar7[5] = (longlong)&PTR_FUN_143f9a6c8;
        plVar7[8] = *(longlong *)(lVar6 + 0x40);
        plVar13 = plVar7;
      }
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 != (longlong *)0x0) {
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)&PTR_FUN_143f3f2d0;
        plVar7[2] = (longlong)plVar13;
        plVar10 = plVar7;
      }
      local_80 = plVar13;
      local_78 = plVar10;
      SharedPointerInternals::EnableSharedFromThis(&local_80,plVar13,plVar13);
      if ((longlong **)(plVar14 + 0x14) != &local_80) {
        plVar14[0x14] = (longlong)plVar13;
        local_80 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(plVar14 + 0x15,&local_78);
        plVar10 = local_78;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar10 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      iVar4 = FUN_140517720(param_1,plVar14,param_4);
      goto LAB_140517f0b;
    }
  }
  FUN_14051ff60(param_1,param_3);
  if (iVar4 == 0x3e5) {
    return;
  }
LAB_140517f38:
  (**(code **)(*param_1 + 0x178))(param_1,param_3,(iVar4 != 0) + '\x01');
  return;
}



// FUNCTION 140517f70 FUN_140517f70 body=417 status=ok
// SIG undefined FUN_140517f70(void)

void FUN_140517f70(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  longlong *local_28;
  undefined8 local_20;
  
  if (((param_1[0x13] == 0) || (cVar6 = FUN_140516dc0(), cVar6 == '\0')) ||
     (cVar6 = (**(code **)(*(longlong *)param_1[0x13] + 0xf8))((longlong *)param_1[0x13],param_2),
     cVar6 == '\0')) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    (**(code **)(*param_1 + 0xa8))(param_1,param_2,6,&local_28);
    plVar8 = local_28;
    for (iVar9 = (int)local_20; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
      return;
    }
  }
  else {
    uVar3 = *param_2;
    plVar8 = (longlong *)param_2[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    uVar4 = *(undefined8 *)(param_1[0x13] + 0x148);
    puVar7 = (undefined8 *)operator_new(0x30);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_143f76b48;
      QueryPerformanceCounter(&local_res8);
      dVar10 = (double)local_res8.QuadPart * DAT_1468b02f8;
      *puVar7 = &PTR__scalar_deleting_destructor__143f9e880;
      *(undefined1 *)(puVar7 + 2) = 0;
      puVar7[1] = dVar10 + 16777216.0;
      puVar7[3] = param_1;
      puVar7[4] = uVar3;
      puVar7[5] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
    }
    FOnlineAsyncTaskManager::AddToInQueue(uVar4,puVar7);
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
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140518120 FUN_140518120 body=481 status=ok
// SIG undefined FUN_140518120(void)

void FUN_140518120(longlong param_1)

{
  int iVar1;
  undefined2 *_Src;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *local_48;
  int local_40;
  int iStack_3c;
  undefined2 *local_38;
  int local_30;
  
  GetSteamModulePath(&local_38);
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  FWindowsPlatformProcess::PushDllDirectory(puVar4);
  puVar6 = (undefined2 *)0x0;
  local_40 = 0x10;
  iStack_3c = 0;
  local_48 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar4 = local_48;
  FGenericPlatformString::Convert<char,wchar_t>(local_48,0x10,"steam_api64.dll",0x10,0x3f);
  iVar1 = local_30;
  _Src = local_38;
  puVar8 = puVar4;
  puVar9 = puVar6;
  iVar2 = local_40;
  if (1 < local_30) {
    iVar5 = 0;
    if (local_40 != 0) {
      iVar5 = local_40 + -1;
    }
    if ((local_30 != 0) || (iVar2 = 1, iVar5 == 0)) {
      iVar2 = 0;
    }
    local_48 = (undefined2 *)0x0;
    local_40 = local_30;
    if ((local_30 == 0) && (iVar2 + iVar5 == 0)) {
      iStack_3c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_30 + iVar2 + iVar5,0);
      puVar6 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar1 * 2);
    }
    iVar1 = local_40;
    puVar8 = puVar6;
    puVar9 = puVar4;
    iVar2 = local_40;
    if (iVar5 != 0) {
      lVar7 = (longlong)local_40;
      local_40 = (uint)(local_40 == 0) + local_40 + iVar5;
      if (iStack_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
        puVar6 = local_48;
      }
      iVar2 = local_40;
      _guard_xfg_dispatch_icall_nop
                (puVar6 + (lVar7 - (ulonglong)(iVar1 != 0)),puVar4,(longlong)iVar5 * 2);
      (puVar6 + (lVar7 - (ulonglong)(iVar1 != 0)))[iVar5] = 0;
      puVar8 = puVar6;
    }
  }
  puVar4 = &DAT_143f3eda8;
  if (iVar2 != 0) {
    puVar4 = puVar8;
  }
  uVar3 = FWindowsPlatformProcess::GetDllHandle(puVar4);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  FWindowsPlatformProcess::PopDllDirectory(puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140518310 FUN_140518310 body=90 status=ok
// SIG undefined FUN_140518310(void)

bool FUN_140518310(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = -0x7fffbffb;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xf8))();
  if (cVar1 != '\0') {
    lVar2 = FUN_14050e930();
    if (lVar2 != 0) {
      FUN_1404c44a0(lVar2,param_2,param_3);
      iVar3 = 0;
    }
  }
  return iVar3 == 0;
}



// FUNCTION 140518370 FUN_140518370 body=475 status=ok
// SIG undefined FUN_140518370(void)

void FUN_140518370(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x70);
  puStack_28 = (uint *)(param_1 + 0x58);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar9 = puStack_28;
    }
    uVar4 = *puVar9;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar3) goto LAB_14051842f;
      uVar4 = puVar9[lVar8 + 1];
    }
    uStack_74 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_14051842f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x70);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      lVar10 = (longlong)iStack_5c * 0x38 + *plVar1;
      lVar8 = *(longlong *)(lVar10 + 0x28);
      uVar4 = *(uint *)(lVar8 + 0xc);
      if ((int)uVar4 < (int)DAT_1469e91c4) {
        uVar7 = uVar4 & 0xffff;
        if ((int)uVar4 < 0) {
          uVar4 = uVar4 + 0xffff;
          uVar7 = uVar7 - 0x10000;
        }
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)uVar7 * 0x18;
      }
      else {
        lVar5 = 0;
      }
      if (((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) || (param_2 == lVar8)) {
        *(undefined8 *)(lVar10 + 0x28) = 0;
        break;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140518550 FUN_140518550 body=489 status=ok
// SIG undefined FUN_140518550(void)

void FUN_140518550(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28 [2];
  
  uVar7 = 0;
  uVar10 = 0;
  if (0 < (int)param_1[0x26]) {
    lVar3 = param_1[0x25];
    piVar5 = (int *)(lVar3 + 0x10);
    uVar9 = uVar7;
    do {
      iVar8 = (int)uVar7;
      if (*piVar5 == *param_2) {
        if (iVar8 == -1) {
          return;
        }
        local_48 = 0;
        local_40 = 0;
        if ((param_2[1] == 1) && (0 < *(int *)(lVar3 + 0x20 + (longlong)iVar8 * 0x28))) {
          plVar6 = (longlong *)
                   FString::FromHexBlob
                             (local_28,*(undefined8 *)(lVar3 + 0x18 + (longlong)iVar8 * 0x28));
          if (&local_48 != plVar6) {
            if (local_48 != 0) {
              FMemory::Free();
            }
            local_48 = *plVar6;
            *plVar6 = 0;
            local_40 = plVar6[1];
            plVar6[1] = 0;
          }
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          uVar10 = 1;
        }
        plVar6 = *(longlong **)(param_1[0x25] + 8 + (longlong)iVar8 * 0x28);
        uVar4 = *(undefined8 *)(param_1[0x25] + (longlong)iVar8 * 0x28);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        FUN_14051fc10(param_1 + 0x25,uVar7,1,1);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_38 = uVar4;
        local_30 = plVar6;
        (**(code **)(*param_1 + 0xe8))(param_1,&local_38,uVar10,&local_48);
        plVar2 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar5 = (int *)((longlong)plVar2 + 0xc);
            iVar8 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar5 = (int *)((longlong)plVar6 + 0xc);
            iVar8 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        if (local_48 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      uVar7 = (ulonglong)(iVar8 + 1);
      uVar9 = uVar9 + 1;
      piVar5 = piVar5 + 10;
    } while ((longlong)uVar9 < (longlong)(int)param_1[0x26]);
  }
  return;
}



// FUNCTION 140518740 FUN_140518740 body=140 status=ok
// SIG undefined FUN_140518740(void)

void FUN_140518740(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 *puVar3;
  LARGE_INTEGER local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = *param_2;
  puVar3 = (undefined8 *)operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar3 = &PTR_FUN_143f9e6f0;
    puVar3[1] = dVar2 + 16777216.0;
    local_18 = (undefined4)param_1;
    uStack_14 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_10 = (undefined4)uVar1;
    uStack_c = (undefined4)((ulonglong)uVar1 >> 0x20);
    *(undefined4 *)(puVar3 + 2) = local_18;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_14;
    *(undefined4 *)(puVar3 + 3) = uStack_10;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_c;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar3);
  return;
}



// FUNCTION 140518800 OnSteamShutdown body=139 status=ok
// SIG undefined OnSteamShutdown(void)

void FOnlineAsyncTaskManagerSteam::OnSteamShutdown(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double dVar3;
  LARGE_INTEGER local_res18 [2];
  
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x420);
    *puVar2 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(local_res18);
    dVar3 = (double)local_res18[0].QuadPart * DAT_1468b02f8;
    puVar2[2] = uVar1;
    *puVar2 = &PTR_FUN_143f9c630;
    puVar2[1] = dVar3 + 16777216.0;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar2);
  return;
}



// FUNCTION 140518890 FUN_140518890 body=494 status=ok
// SIG undefined FUN_140518890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140518890(longlong *param_1,int *param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  size_t _Size;
  void *_Dst;
  int iVar7;
  undefined1 auStack_478 [32];
  uint local_458 [2];
  void *local_450;
  uint local_448;
  int local_444;
  void *local_440;
  undefined8 local_438;
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  pvVar5 = (void *)0x0;
  uVar6 = 0;
  local_440 = (void *)0x0;
  local_438 = 0;
  if (param_3 == '\0') {
    if (*param_2 == 1) {
      iVar4 = 0;
      local_458[0] = 0;
      local_450 = (void *)0x0;
      local_444 = 0;
      puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
      cVar2 = (**(code **)(*(longlong *)*puVar3 + 0xa8))
                        ((longlong *)*puVar3,local_428,0x400,local_458);
      if (cVar2 != '\0') {
        local_448 = local_458[0];
        _Dst = pvVar5;
        iVar7 = iVar4;
        if (0 < (int)local_458[0]) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_450,0);
          _Dst = local_450;
          iVar7 = local_444;
        }
        uVar1 = local_448;
        _guard_xfg_dispatch_icall_nop(_Dst,local_428,(ulonglong)local_458[0]);
        local_448 = uVar1 + 1;
        if (iVar7 < (int)local_448) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_450,uVar1);
          _Dst = local_450;
        }
        local_450 = (void *)0x0;
        *(undefined1 *)((longlong)(int)uVar1 + (longlong)_Dst) = 0;
        _Size = (size_t)(int)local_458[0];
        local_448 = local_458[0];
        if (local_458[0] != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_450,local_458[0],0);
          pvVar5 = local_450;
          _guard_xfg_dispatch_icall_nop(local_450,local_428,_Size);
          iVar4 = local_444;
        }
        uVar1 = local_448;
        if (local_440 != (void *)0x0) {
          FMemory::Free();
        }
        uVar6 = 1;
        local_438 = CONCAT44(iVar4,uVar1);
        local_440 = pvVar5;
        if (_Dst != (void *)0x0) {
          FMemory::Free(_Dst);
        }
      }
    }
    (**(code **)(*param_1 + 0x238))(param_1,uVar6,&local_440);
  }
  else {
    printf("There has been an IO Failure when requesting the Encrypted App Ticket.\n");
  }
  if (local_440 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140518a80 FUN_140518a80 body=163 status=ok
// SIG undefined FUN_140518a80(void)

void FUN_140518a80(longlong param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  double dVar4;
  LARGE_INTEGER local_res18;
  
  puVar3 = (undefined8 *)operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    cVar1 = *param_2;
    uVar2 = *(undefined8 *)(param_1 + 0x420);
    *puVar3 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res18);
    dVar4 = (double)local_res18.QuadPart * DAT_1468b02f8;
    *(bool *)(puVar3 + 3) = cVar1 != '\0';
    puVar3[2] = uVar2;
    *puVar3 = &PTR_FUN_143f9c330;
    puVar3[1] = dVar4 + 16777216.0;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar3);
  return;
}



// FUNCTION 140518b30 FUN_140518b30 body=146 status=ok
// SIG undefined FUN_140518b30(void)

void FUN_140518b30(undefined8 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  double dVar2;
  undefined8 *puVar3;
  LARGE_INTEGER local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = CONCAT31(uStack_10._1_3_,*param_2);
  uVar1 = *(undefined4 *)(param_2 + 4);
  puVar3 = (undefined8 *)operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar3 = &PTR_FUN_143f9e770;
    puVar3[1] = dVar2 + 16777216.0;
    local_18 = (undefined4)param_1;
    uStack_14 = (undefined4)((ulonglong)param_1 >> 0x20);
    *(undefined4 *)(puVar3 + 2) = local_18;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_14;
    *(undefined4 *)(puVar3 + 3) = uStack_10;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar1;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar3);
  return;
}



// FUNCTION 140518bd0 FUN_140518bd0 body=161 status=ok
// SIG undefined FUN_140518bd0(void)

void FUN_140518bd0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double dVar3;
  LARGE_INTEGER local_res18;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x420);
    *puVar2 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res18);
    dVar3 = (double)local_res18.QuadPart * DAT_1468b02f8;
    puVar2[2] = uVar1;
    *puVar2 = &PTR_FUN_143f9bc10;
    puVar2[1] = dVar3 + 16777216.0;
    puVar2[3] = *param_2;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar2);
  return;
}



// FUNCTION 140518c80 FUN_140518c80 body=2518 status=ok
// SIG undefined FUN_140518c80(void)

void FUN_140518c80(longlong *param_1,char param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  void *_Src;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  byte bVar9;
  longlong *plVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  undefined2 local_res20 [4];
  longlong local_1c8;
  int local_1c0;
  int local_1bc;
  undefined2 local_1b8 [4];
  undefined2 local_1b0 [4];
  undefined2 local_1a8 [4];
  undefined2 local_1a0 [4];
  undefined2 local_198 [4];
  undefined2 local_190 [4];
  undefined2 local_188 [4];
  undefined2 local_180 [4];
  undefined2 local_178 [4];
  undefined2 local_170 [4];
  undefined2 local_168 [4];
  undefined2 local_160 [4];
  longlong local_158 [21];
  longlong *local_b0;
  longlong *local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90 [2];
  void *local_80;
  ulonglong local_78;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined1 local_48 [16];
  
  plVar6 = (longlong *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x58))(param_1,&local_68,0);
    local_58 = local_68;
    plStack_50 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0xa0))(param_1,&local_80,&local_58);
    plVar10 = plStack_50;
    iVar13 = -1;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar2 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plVar4 = (longlong *)operator_new(0x40);
    plVar10 = plVar6;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0xa8);
      if (plVar5 != (longlong *)0x0) {
        local_158[0x14] = 0;
        FArchive::FArchive(plVar5);
        plVar5[0x12] = 0;
        plVar5[0x14] = 0;
        *plVar5 = (longlong)&PTR_FUN_143f4a100;
        plVar5[0x13] = (longlong)(plVar4 + 5);
        FArchive::SetIsSaving(plVar5,1);
        FArchive::SetIsPersistent(plVar5,0);
        plVar10 = plVar5;
      }
      plVar4[1] = (longlong)plVar10;
      plVar4[2] = 0;
      plVar4[3] = 0;
      *plVar4 = (longlong)&PTR__scalar_deleting_destructor__143f607b8;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[6] = 0;
      plVar4[7] = (longlong)local_90;
      plVar10 = plVar4;
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = (longlong)plVar10;
      plVar6 = plVar4;
    }
    local_b0 = plVar10;
    local_a8 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_b0,plVar10,plVar10);
    plVar10 = local_a8;
    plVar6 = local_b0;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a8 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    if ((0xc < *(uint *)(plVar6 + 4)) || ((0x1015U >> (*(uint *)(plVar6 + 4) & 0x1f) & 1) == 0)) {
      local_res20[0] = 0x2c;
      (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_res20,2);
    }
    local_1b8[0] = 0x7b;
    (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_1b8,2);
    *(int *)((longlong)plVar6 + 0x24) = *(int *)((longlong)plVar6 + 0x24) + 1;
    iVar12 = (int)plVar6[3];
    *(int *)(plVar6 + 3) = iVar12 + 1;
    if (*(int *)((longlong)plVar6 + 0x1c) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6 + 2,iVar12);
    }
    local_158[2] = 0;
    local_158[3] = 7;
    *(undefined4 *)(plVar6[2] + (longlong)iVar12 * 4) = 6;
    *(undefined4 *)(plVar6 + 4) = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 2,0);
    FGenericPlatformString::Memcpy(local_158[2],L"locale",0xe);
    local_158[0] = 0;
    local_158[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
    FGenericPlatformString::Memcpy(local_158[0],L"en-US",0xc);
    if ((((int)plVar6[4] - 2U & 0xfffffff5) != 0) || ((int)plVar6[4] == 10)) {
      local_1b0[0] = 0x2c;
      (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_1b0,2);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,local_158 + 2);
    local_1a8[0] = 0x3a;
    (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_1a8,2);
    (**(code **)(*plVar6 + 0x18))(plVar6,local_158);
    *(undefined4 *)(plVar6 + 4) = 7;
    if (local_158[0] != 0) {
      FMemory::Free();
    }
    if (local_158[2] != 0) {
      FMemory::Free();
    }
    local_158[6] = 0;
    local_158[7] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 6,0);
    FGenericPlatformString::Memcpy(local_158[6],L"accountType",0x18);
    local_158[4] = 0;
    local_158[5] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 4,0);
    FGenericPlatformString::Memcpy(local_158[4],L"platform",0x12);
    if ((((int)plVar6[4] - 2U & 0xfffffff5) != 0) || ((int)plVar6[4] == 10)) {
      local_1a0[0] = 0x2c;
      (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_1a0,2);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,local_158 + 6);
    local_198[0] = 0x3a;
    (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_198,2);
    (**(code **)(*plVar6 + 0x18))(plVar6,local_158 + 4);
    *(undefined4 *)(plVar6 + 4) = 7;
    if (local_158[4] != 0) {
      FMemory::Free();
    }
    if (local_158[6] != 0) {
      FMemory::Free();
    }
    local_158[8] = 0;
    local_158[9] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 8,0);
    FGenericPlatformString::Memcpy(local_158[8],L"credentials",0x18);
    if ((((int)plVar6[4] - 2U & 0xfffffff5) != 0) || ((int)plVar6[4] == 10)) {
      local_190[0] = 0x2c;
      (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_190,2);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,local_158 + 8);
    local_188[0] = 0x3a;
    (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_188,2);
    local_180[0] = 0x7b;
    (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_180,2);
    *(int *)((longlong)plVar6 + 0x24) = *(int *)((longlong)plVar6 + 0x24) + 1;
    iVar12 = (int)plVar6[3];
    *(int *)(plVar6 + 3) = iVar12 + 1;
    if (*(int *)((longlong)plVar6 + 0x1c) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6 + 2,iVar12);
    }
    *(undefined4 *)(plVar6[2] + (longlong)iVar12 * 4) = 6;
    *(undefined4 *)(plVar6 + 4) = 2;
    if (local_158[8] != 0) {
      FMemory::Free();
    }
    local_158[0xc] = 0;
    local_158[0xd] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 0xc,0);
    FGenericPlatformString::Memcpy(local_158[0xc],L"type",10);
    local_158[10] = 0;
    local_158[0xb] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 10,0);
    FGenericPlatformString::Memcpy(local_158[10],L"steam",0xc);
    if ((((int)plVar6[4] - 2U & 0xfffffff5) != 0) || ((int)plVar6[4] == 10)) {
      local_178[0] = 0x2c;
      (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_178,2);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,local_158 + 0xc);
    local_170[0] = 0x3a;
    (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_170,2);
    (**(code **)(*plVar6 + 0x18))(plVar6,local_158 + 10);
    *(undefined4 *)(plVar6 + 4) = 7;
    if (local_158[10] != 0) {
      FMemory::Free();
    }
    if (local_158[0xc] != 0) {
      FMemory::Free();
    }
    local_158[0xe] = 0;
    local_158[0xf] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 0xe,0);
    FGenericPlatformString::Memcpy(local_158[0xe],L"steamUserId",0x18);
    uVar7 = (**(code **)(*local_68 + 0x28))(local_68,local_48);
    FUN_1404f77b0(plVar6,local_158 + 0xe,uVar7);
    if (local_158[0xe] != 0) {
      FMemory::Free();
    }
    local_158[0x10] = 0;
    local_158[0x11] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 0x10,0);
    FGenericPlatformString::Memcpy(local_158[0x10],L"steamProfileName",0x22);
    _Src = local_80;
    local_a0 = (void *)0x0;
    iVar12 = (int)local_78;
    local_98 = iVar12;
    if (iVar12 == 0) {
      local_94 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,local_78 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_a0,_Src,(longlong)iVar12 * 2);
    }
    FUN_1404f77b0(plVar6,local_158 + 0x10,&local_a0);
    if (local_158[0x10] != 0) {
      FMemory::Free();
    }
    local_158[0x12] = 0;
    local_158[0x13] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 0x12,0);
    FGenericPlatformString::Memcpy(local_158[0x12],L"encryptedAppTicket");
    iVar12 = *(int *)(param_3 + 1);
    pbVar14 = (byte *)*param_3;
    local_1c8 = 0;
    local_1bc = 0;
    local_1c0 = 0;
    if (iVar12 * 2 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1c8,iVar12 * 2);
    }
    iVar8 = local_1c0;
    if (iVar12 != 0) {
      do {
        iVar13 = iVar12;
        bVar9 = *pbVar14;
        sVar11 = 0x37;
        bVar3 = bVar9 >> 4;
        if (bVar3 < 10) {
          sVar11 = 0x30;
        }
        sVar11 = sVar11 + (ushort)bVar3;
        if (sVar11 != 0) {
          iVar12 = iVar8 + -1;
          if (iVar8 < 1) {
            iVar12 = 0;
          }
          local_1c0 = (iVar8 < 1) + 1 + iVar8;
          if (local_1bc < local_1c0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8);
          }
          *(short *)(local_1c8 + (longlong)iVar12 * 2) = sVar11;
          *(undefined2 *)(local_1c8 + 2 + (longlong)iVar12 * 2) = 0;
          iVar8 = local_1c0;
        }
        bVar9 = bVar9 & 0xf;
        sVar11 = 0x37;
        if (bVar9 < 10) {
          sVar11 = 0x30;
        }
        sVar11 = sVar11 + (ushort)bVar9;
        if (sVar11 != 0) {
          iVar12 = iVar8 + -1;
          if (iVar8 < 1) {
            iVar12 = 0;
          }
          local_1c0 = (iVar8 < 1) + 1 + iVar8;
          if (local_1bc < local_1c0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8);
          }
          *(short *)(local_1c8 + (longlong)iVar12 * 2) = sVar11;
          *(undefined2 *)(local_1c8 + 2 + (longlong)iVar12 * 2) = 0;
          iVar8 = local_1c0;
        }
        pbVar14 = pbVar14 + 1;
        iVar12 = iVar13 + -1;
      } while (iVar12 != 0);
      iVar13 = iVar13 + -2;
    }
    FUN_1404f77b0(plVar6,local_158 + 0x12,&local_1c8);
    if (local_158[0x12] != 0) {
      FMemory::Free();
    }
    *(int *)((longlong)plVar6 + 0x24) = *(int *)((longlong)plVar6 + 0x24) + -1;
    local_168[0] = 0x7d;
    (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_168,2);
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar6 + 2);
    *(undefined4 *)(plVar6 + 4) = 3;
    *(int *)((longlong)plVar6 + 0x24) = *(int *)((longlong)plVar6 + 0x24) + -1;
    local_160[0] = 0x7d;
    (**(code **)(*(longlong *)plVar6[1] + 0x50))((longlong *)plVar6[1],local_160,2);
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar6 + 2);
    *(undefined4 *)(plVar6 + 4) = 3;
    (**(code **)(*plVar6 + 8))(plVar6);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar10 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + iVar13;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + iVar13;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if (local_80 != (void *)0x0) {
      FMemory::Free();
    }
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_60 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + iVar13;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plStack_60 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + iVar13;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x208))(param_1,param_2,local_90);
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405196a0 FUN_1405196a0 body=199 status=ok
// SIG undefined FUN_1405196a0(void)

void FUN_1405196a0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_14052ac70();
  plVar2 = param_1 + 0x59;
  plVar5 = (longlong *)*plVar2;
  if (plVar5 != (longlong *)0x0) {
    if (0 < (int)plVar5[2]) {
      (**(code **)(*plVar5 + 8))();
      plVar5 = (longlong *)*plVar2;
    }
    *(undefined4 *)(plVar5 + 3) = 2;
    local_10 = (longlong *)0x0;
    if (plVar2 != &local_18) {
      *plVar2 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5a,&local_10);
      plVar2 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_10 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140519760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,1);
  return;
}



// FUNCTION 140519770 OnSteamShutdown body=139 status=ok
// SIG undefined OnSteamShutdown(void)

void FOnlineAsyncTaskManagerSteam::OnSteamShutdown(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double dVar3;
  LARGE_INTEGER local_res18 [2];
  
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x420);
    *puVar2 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(local_res18);
    dVar3 = (double)local_res18[0].QuadPart * DAT_1468b02f8;
    puVar2[2] = uVar1;
    *puVar2 = &PTR_FUN_143f9c598;
    puVar2[1] = dVar3 + 16777216.0;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar2);
  return;
}



// FUNCTION 140519800 FUN_140519800 body=168 status=ok
// SIG undefined FUN_140519800(void)

void FUN_140519800(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  LARGE_INTEGER local_res18;
  
  puVar6 = (undefined8 *)operator_new(0x38);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x420);
    *puVar6 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res18);
    dVar2 = (double)local_res18.QuadPart * DAT_1468b02f8;
    puVar6[2] = uVar1;
    *puVar6 = &PTR_FUN_143f9ac50;
    puVar6[1] = dVar2 + 16777216.0;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)(puVar6 + 3) = *param_2;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
    *(undefined4 *)(puVar6 + 4) = uVar4;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar5;
    uVar1 = *(undefined8 *)(param_2 + 6);
    puVar6[5] = *(undefined8 *)(param_2 + 4);
    puVar6[6] = uVar1;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar6);
  return;
}



// FUNCTION 1405198b0 FUN_1405198b0 body=276 status=ok
// SIG undefined FUN_1405198b0(void)

void FUN_1405198b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  double dVar7;
  LARGE_INTEGER local_res10;
  undefined1 local_res18 [8];
  
  lVar1 = *param_2;
  if (lVar1 == param_2[1]) {
    puVar4 = (undefined8 *)
             SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760);
    plVar6 = (longlong *)*puVar4;
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    lVar2 = *param_2;
    plVar5 = (longlong *)
             (**(code **)(*(longlong *)*puVar4 + 0x10))((longlong *)*puVar4,&local_res10);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x118))(plVar6,local_res18,lVar2);
    if (*plVar6 != *plVar5) {
      puVar4 = (undefined8 *)operator_new(0x38);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x420);
        *puVar4 = &PTR_FUN_143f76b48;
        QueryPerformanceCounter(&local_res10);
        dVar7 = (double)local_res10.QuadPart * DAT_1468b02f8;
        *puVar4 = &PTR_FUN_143f9ac70;
        puVar4[2] = uVar3;
        puVar4[1] = dVar7 + 16777216.0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[3] = &PTR_FUN_143f9a6c8;
        puVar4[6] = lVar1;
      }
      FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar4);
    }
  }
  return;
}



// FUNCTION 140519a10 FUN_140519a10 body=249 status=ok
// SIG undefined FUN_140519a10(void)

void FUN_140519a10(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  LARGE_INTEGER local_res10;
  undefined1 local_res18 [8];
  
  puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  plVar7 = (longlong *)*puVar6;
  puVar6 = (undefined8 *)
           SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760);
  uVar1 = *param_2;
  plVar8 = (longlong *)*puVar6;
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,&local_res10);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x118))(plVar8,local_res18,uVar1);
  if (*plVar8 != *plVar7) {
    puVar6 = (undefined8 *)operator_new(0x30);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x420);
      *puVar6 = &PTR_FUN_143f76b48;
      QueryPerformanceCounter(&local_res10);
      dVar2 = (double)local_res10.QuadPart * DAT_1468b02f8;
      puVar6[2] = uVar1;
      *puVar6 = &PTR_FUN_143f9ac30;
      puVar6[1] = dVar2 + 16777216.0;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)param_2;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
      *(undefined4 *)(puVar6 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar6 + 0x24) = uVar5;
      puVar6[5] = param_2[2];
    }
    FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar6);
  }
  return;
}



// FUNCTION 140519b10 FUN_140519b10 body=586 status=ok
// SIG undefined FUN_140519b10(void)

void FUN_140519b10(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  BOOL BVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar12 = 0;
  if (((*(uint *)((longlong)param_2 + 4) & 0xf00000) == 0x800000) &&
     ((*(uint *)((longlong)param_2 + 4) >> 0x12 & 1) != 0)) {
    uVar3 = *param_2;
    plVar10 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x420) + 0x18))
                        (*(longlong **)(param_1 + 0x420),local_68);
    plVar4 = (longlong *)plVar10[1];
    lVar5 = *plVar10;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_60 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (lVar5 != 0) {
      BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x290));
      if (BVar9 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x290));
      }
      uVar13 = uVar12;
      uVar15 = uVar12;
      if (0 < *(int *)(lVar5 + 0x2c0)) {
        do {
          lVar7 = *(longlong *)(uVar13 + 0xa0 + *(longlong *)(lVar5 + 0x2b8));
          lVar11 = lVar7 + 0x28;
          cVar8 = (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))(lVar11);
          if (cVar8 == '\0') {
LAB_140519c6c:
            bVar6 = false;
          }
          else {
            local_58 = &PTR_FUN_143f9a6c8;
            uVar12 = 1;
            local_50 = 0;
            plStack_48 = (longlong *)0x0;
            local_40 = uVar3;
            cVar8 = FUN_1404c7fe0(&local_58,lVar11);
            if (cVar8 == '\0') goto LAB_140519c6c;
            bVar6 = true;
          }
          if (uVar12 != 0) {
            uVar12 = 0;
            local_58 = &PTR_FUN_143f73cd8;
            if (plStack_48 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plStack_48 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar2 == 1) && (plStack_48 != (longlong *)0x0)) {
                (**(code **)(*plStack_48 + 8))(plStack_48,1);
              }
            }
          }
          if (bVar6) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x290));
            goto LAB_140519cf9;
          }
          uVar14 = (int)uVar15 + 1;
          uVar13 = uVar13 + 0x118;
          uVar15 = (ulonglong)uVar14;
        } while ((int)uVar14 < *(int *)(lVar5 + 0x2c0));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x290));
      *(undefined8 *)(lVar5 + 0x368) = *param_2;
    }
LAB_140519cf9:
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar4 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
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
    }
  }
  return;
}



// FUNCTION 140519da0 FUN_140519da0 body=189 status=ok
// SIG undefined FUN_140519da0(void)

void FUN_140519da0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  double dVar5;
  LARGE_INTEGER local_res10;
  
  uVar2 = *param_2;
  puVar4 = (undefined8 *)operator_new(0x40);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    bVar1 = *(byte *)(param_2 + 1);
    uVar3 = *(undefined8 *)(param_1 + 0x420);
    *puVar4 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res10);
    dVar5 = (double)local_res10.QuadPart * DAT_1468b02f8;
    *puVar4 = &PTR_FUN_143f9acd0;
    puVar4[2] = uVar3;
    puVar4[1] = dVar5 + 16777216.0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[3] = &PTR_FUN_143f9a6c8;
    puVar4[6] = uVar2;
    *(uint *)(puVar4 + 7) = (uint)bVar1;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar4);
  return;
}



// FUNCTION 140519e60 FUN_140519e60 body=204 status=ok
// SIG undefined FUN_140519e60(void)

void FUN_140519e60(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  LARGE_INTEGER local_res10;
  
  uVar1 = *param_2;
  puVar4 = (undefined8 *)operator_new(0x40);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc7d8);
    uVar2 = *(undefined8 *)(param_1 + 0x420);
    uVar3 = *puVar5;
    *puVar4 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res10);
    dVar6 = (double)local_res10.QuadPart * DAT_1468b02f8;
    puVar4[2] = uVar2;
    *puVar4 = &PTR_FUN_143f9acb0;
    puVar4[3] = uVar3;
    puVar4[1] = dVar6 + 16777216.0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[4] = &PTR_FUN_143f9a6c8;
    puVar4[7] = uVar1;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar4);
  return;
}



// FUNCTION 140519f30 FUN_140519f30 body=233 status=ok
// SIG undefined FUN_140519f30(void)

void FUN_140519f30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_18;
  longlong *local_10;
  
  lVar6 = *(longlong *)(param_1 + 0x58);
  if (((lVar6 != 0) &&
      (plVar4 = (longlong *)FName::FName(local_res8,L"STEAM",1),
      *(longlong *)(lVar6 + 0x588) == *plVar4)) && (*(longlong *)(param_1 + 0x1978) != 0)) {
    uVar5 = FName::FName(local_res10,L"STEAM",1);
    lVar6 = FUN_1419c6b80(uVar5);
    if (lVar6 != 0) {
      local_18 = *(undefined8 *)(param_1 + 0x1978);
      plVar4 = *(longlong **)(param_1 + 0x1980);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_10 = plVar4;
      FUN_14051eba0(lVar6,&local_18);
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
    }
  }
  return;
}



// FUNCTION 14051a020 FUN_14051a020 body=170 status=ok
// SIG undefined FUN_14051a020(void)

void FUN_14051a020(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double dVar3;
  LARGE_INTEGER local_res10;
  
  if (*(int *)((longlong)param_2 + 4) == 1) {
    puVar2 = (undefined8 *)operator_new(0x20);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x420);
      *puVar2 = &PTR_FUN_143f76b48;
      QueryPerformanceCounter(&local_res10);
      dVar3 = (double)local_res10.QuadPart * DAT_1468b02f8;
      puVar2[2] = uVar1;
      *puVar2 = &PTR_FUN_143f9ad10;
      puVar2[1] = dVar3 + 16777216.0;
      puVar2[3] = *param_2;
    }
    FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar2);
  }
  return;
}



// FUNCTION 14051a0d0 FUN_14051a0d0 body=158 status=ok
// SIG undefined FUN_14051a0d0(void)

void FUN_14051a0d0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 *puVar4;
  LARGE_INTEGER local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  puVar4 = (undefined8 *)operator_new(0x28);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar3 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar4 = &PTR_FUN_143f9e730;
    puVar4[1] = dVar3 + 16777216.0;
    local_28 = (undefined4)param_1;
    uStack_24 = (undefined4)((ulonglong)param_1 >> 0x20);
    *(undefined4 *)(puVar4 + 2) = local_28;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_24;
    *(undefined4 *)(puVar4 + 3) = uVar1;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_1c;
    puVar4[4] = uVar2;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar4);
  return;
}



// FUNCTION 14051a170 OnSteamShutdown body=139 status=ok
// SIG undefined OnSteamShutdown(void)

void FOnlineAsyncTaskManagerSteam::OnSteamShutdown(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double dVar3;
  LARGE_INTEGER local_res18 [2];
  
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x420);
    *puVar2 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(local_res18);
    dVar3 = (double)local_res18[0].QuadPart * DAT_1468b02f8;
    puVar2[2] = uVar1;
    *puVar2 = &PTR_FUN_143f9bac0;
    puVar2[1] = dVar3 + 16777216.0;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar2);
  return;
}



// FUNCTION 14051a200 OnSteamShutdown body=139 status=ok
// SIG undefined OnSteamShutdown(void)

void FOnlineAsyncTaskManagerSteam::OnSteamShutdown(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double dVar3;
  LARGE_INTEGER local_res18 [2];
  
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x420);
    *puVar2 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(local_res18);
    dVar3 = (double)local_res18[0].QuadPart * DAT_1468b02f8;
    puVar2[2] = uVar1;
    *puVar2 = &PTR_FUN_143f9bb60;
    puVar2[1] = dVar3 + 16777216.0;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar2);
  return;
}



// FUNCTION 14051a290 OnSteamShutdown body=139 status=ok
// SIG undefined OnSteamShutdown(void)

void FOnlineAsyncTaskManagerSteam::OnSteamShutdown(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double dVar3;
  LARGE_INTEGER local_res18 [2];
  
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x420);
    *puVar2 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(local_res18);
    dVar3 = (double)local_res18[0].QuadPart * DAT_1468b02f8;
    puVar2[2] = uVar1;
    *puVar2 = &PTR_FUN_143f9acf0;
    puVar2[1] = dVar3 + 16777216.0;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar2);
  return;
}



// FUNCTION 14051a320 FUN_14051a320 body=108 status=ok
// SIG undefined FUN_14051a320(void)

void FUN_14051a320(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong local_res8;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x19) = 0;
  if (param_2 != (ulonglong *)0x0) {
    local_res8 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x74) & 0xffffffff00ffffff;
    if (local_res8 == *param_2) {
      plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
      if ((*plVar1 == *(longlong *)((longlong)param_2 + 0xc)) && ((int)param_2[1] == 1)) {
        *(undefined1 *)(param_1 + 0x19) = 1;
      }
    }
  }
  return;
}



// FUNCTION 14051a390 FUN_14051a390 body=75 status=ok
// SIG undefined FUN_14051a390(void)

void FUN_14051a390(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  local_res8[0] = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x420) + 0x74) & 0xffffffff00ffffff;
  if (local_res8[0] == *param_2) {
    puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,local_res8);
  }
  return;
}



// FUNCTION 14051a3e0 FUN_14051a3e0 body=186 status=ok
// SIG undefined FUN_14051a3e0(void)

void FUN_14051a3e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  double dVar4;
  LARGE_INTEGER local_res18;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *param_2;
    uVar2 = *(undefined8 *)(param_1 + 0x420);
    *puVar3 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res18);
    dVar4 = (double)local_res18.QuadPart * DAT_1468b02f8;
    puVar3[2] = uVar2;
    *puVar3 = &PTR_FUN_143f9ac90;
    puVar3[1] = dVar4 + 16777216.0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[3] = &PTR_FUN_143f9a6c8;
    puVar3[6] = uVar1;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(param_1,puVar3);
  return;
}



// FUNCTION 14051a4a0 FUN_14051a4a0 body=364 status=ok
// SIG undefined FUN_14051a4a0(void)

void FUN_14051a4a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong local_48;
  int local_40;
  undefined8 local_3c;
  undefined1 local_34;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  }
  uVar4 = 0;
  uVar6 = uVar4;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x2b8) + uVar6;
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x3a) != '\0')) && (0 < *(int *)(lVar3 + 0xb4))) {
        local_48 = 0;
        local_3c = 0;
        local_34 = 0;
        local_40 = 0;
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_48);
        lVar2 = (longlong)local_40;
        local_40 = local_40 + 0x400;
        if ((int)local_3c < local_40) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_48);
        }
        _guard_xfg_dispatch_icall_nop((void *)(lVar2 + local_48),0,0x400);
        FUN_1404aeb10(param_1 + 0x388,&local_48,param_4);
        FUN_1404ff390(param_1,&local_48,lVar3);
        FUN_1404add60(param_1 + 0x388,local_48,local_3c._4_4_);
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar6 = uVar6 + 0x118;
    } while ((int)uVar5 < *(int *)(param_1 + 0x2c0));
  }
                    /* WARNING: Could not recover jumptable at 0x00014051a605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return;
}



// FUNCTION 14051a610 FUN_14051a610 body=555 status=ok
// SIG undefined FUN_14051a610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14051a610(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  LARGE_INTEGER local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_90 [4];
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  puVar4 = (undefined8 *)0x0;
  lVar2 = *(longlong *)(param_1 + 0x2c8);
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_94 = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0xffffffff;
  local_5c = 0;
  local_50 = 0;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x10) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x14) < iVar1 + 1) {
      FUN_1404852a0(lVar2 + 8,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0xc0 + *(longlong *)(lVar2 + 8));
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f769a8;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = &PTR_FUN_143f769a0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined2 *)(puVar3 + 8) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x44) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 0x84) = 0;
      puVar3[0x12] = 0;
      *(undefined4 *)(puVar3 + 0x13) = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      *(undefined4 *)(puVar3 + 0x17) = 9999;
      puVar4 = puVar3;
    }
    QueryPerformanceCounter(&local_d8);
    *(int *)(puVar4 + 0x17) =
         (int)((((double)local_d8.QuadPart * DAT_1468b02f8 + 16777216.0) -
               *(double *)(param_1 + 0x420)) * 1000.0);
    local_c4 = 0;
    local_c0 = 0;
    local_d0 = param_2;
    local_c8 = param_3;
    FUN_14051e4d0(param_1,&local_d0,puVar4);
  }
  local_b8 = &PTR_FUN_143f769a0;
  local_48 = 0;
  if (local_50 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_90,0);
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14051a840 FUN_14051a840 body=656 status=ok
// SIG undefined FUN_14051a840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14051a840(longlong param_1,char param_2,uint param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  short *_Src;
  longlong *plVar4;
  void *pvVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 uVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_168 [256];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar11 = *(int *)(param_1 + 0x28) + 1;
    if (param_3 <= uVar11) {
      uVar11 = param_3;
    }
    iVar12 = 0;
    local_1a8 = (void *)0x0;
    local_1a0 = 0;
    if ((int)uVar11 < 1) {
      if (((int)uVar11 < 0) && (uVar11 != 0)) {
        local_1a0 = (ulonglong)uVar11;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_1a8);
      }
    }
    else {
      local_1a0 = (ulonglong)uVar11;
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_1a8);
      _guard_xfg_dispatch_icall_nop(local_1a8,0,(longlong)(int)uVar11);
    }
    pvVar5 = local_1a8;
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),local_1a8,uVar11);
    local_1b8 = (short *)0x0;
    local_1b0 = 0;
    if (cVar6 != '\0') {
      lVar8 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
              TStringConversion<FUTF8ToTCHAR_Convert,128>(local_168,pvVar5);
      _Src = *(short **)(lVar8 + 0x108);
      if (local_1b8 != _Src) {
        if ((_Src != (short *)0x0) && (*_Src != 0)) {
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (_Src[lVar8] != 0);
          iVar12 = (int)lVar8 + 1;
        }
        iVar10 = local_1b0._4_4_;
        if (local_1b0._4_4_ != iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b8,iVar12);
          iVar10 = local_1b0._4_4_;
        }
        iVar7 = iVar12 + (int)local_1b0;
        local_1b0 = CONCAT44(local_1b0._4_4_,iVar7);
        if (iVar10 < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8);
        }
        if (iVar12 != 0) {
          _guard_xfg_dispatch_icall_nop(local_1b8,_Src,(longlong)iVar12 * 2);
        }
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
    if ((param_2 == '\0') || (cVar6 == '\0')) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    plVar4 = (longlong *)*puVar1;
    lVar8 = *plVar4;
    uVar9 = FText::FromString(local_188,&local_1b8);
    (**(code **)(lVar8 + 8))(plVar4,uVar9,uVar13);
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_180 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    local_190 = (longlong *)0x0;
    if (puVar1 != &local_198) {
      *puVar1 = 0;
      local_198 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_190);
      plVar4 = local_190;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_190 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
    }
    if (local_1b8 != (short *)0x0) {
      FMemory::Free();
    }
    if (local_1a8 != (void *)0x0) {
      FMemory::Free(local_1a8);
    }
  }
  return;
}



// FUNCTION 14051aaf0 FUN_14051aaf0 body=362 status=ok
// SIG undefined FUN_14051aaf0(void)

void FUN_14051aaf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar4 = *(int *)(lVar1 + 0x10);
  *(int *)(lVar1 + 0x10) = iVar4 + 1;
  if (*(int *)(lVar1 + 0x14) < iVar4 + 1) {
    FUN_1404852a0(lVar1 + 8,iVar4);
  }
  puVar5 = (undefined8 *)((longlong)iVar4 * 0xc0 + *(longlong *)(lVar1 + 8));
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = &PTR_FUN_143f769a8;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = &PTR_FUN_143f769a0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined2 *)(puVar5 + 8) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x84) = 0;
    puVar5[0x12] = 0;
    *(undefined4 *)(puVar5 + 0x13) = 0;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    *(undefined4 *)(puVar5 + 0x17) = 9999;
  }
  cVar3 = FUN_1405070e0(param_2,puVar5);
  if (cVar3 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x28);
    iVar6 = *(int *)(lVar1 + 0x10) + -1;
    lVar7 = (longlong)iVar6 * 0xc0;
    FUN_1404bf650(*(longlong *)(lVar1 + 8) + lVar7);
    iVar4 = *(int *)(lVar1 + 0x10);
    iVar6 = (iVar4 - iVar6) + -1;
    if (0 < iVar6) {
      iVar6 = 1;
    }
    if (iVar6 != 0) {
      lVar2 = *(longlong *)(lVar1 + 8);
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar2 + lVar7),(void *)((longlong)(iVar4 - iVar6) * 0xc0 + lVar2),
                 (longlong)iVar6 * 0xc0);
      iVar4 = *(int *)(lVar1 + 0x10);
    }
    *(int *)(lVar1 + 0x10) = iVar4 + -1;
    TArray<FPakPrecacher::FPakData,FDefaultAllocator>::ResizeShrink((longlong *)(lVar1 + 8));
  }
  return;
}



// FUNCTION 14051ac60 FUN_14051ac60 body=48 status=ok
// SIG undefined FUN_14051ac60(void)

void FUN_14051ac60(longlong param_1)

{
  FUN_1425c6d60();
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0x4024000000000000;
  return;
}



// FUNCTION 14051ac90 FUN_14051ac90 body=1190 status=ok
// SIG undefined FUN_14051ac90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14051ac90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined2 local_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar8 = FUN_14050e930();
  if (((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) && (lVar8 != 0)
     ) {
    uVar5 = CONCAT22(uStack_a6,local_a8);
    while( true ) {
      plVar12 = *(longlong **)(param_1 + 0x48);
      local_a0 = **(undefined8 **)(param_1 + 0x60);
      local_98 = (longlong *)(*(undefined8 **)(param_1 + 0x60))[1];
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      cVar6 = (**(code **)(*plVar12 + 0x68))(plVar12,&local_a0);
      plVar12 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (cVar6 == '\0') break;
      lVar11 = *(longlong *)(param_1 + 0x60);
      puVar9 = (undefined8 *)FDateTime::Now(local_60);
      cVar6 = *(char *)(lVar11 + 0x18);
      *(undefined1 *)(lVar11 + 0x18) = 1;
      if (cVar6 == '\0') {
        *(undefined2 *)(lVar11 + 0x19) = 1;
        uVar10 = *puVar9;
        *(ulonglong *)(lVar11 + 0x28) = CONCAT44(uStack_a4,uVar5);
      }
      else {
        uVar10 = *puVar9;
      }
      *(undefined8 *)(lVar11 + 0x20) = uVar10;
      *(undefined8 *)(lVar11 + 0x30) = 2500000;
      lVar11 = operator_new(0x38);
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = FUN_1404f8750(lVar11);
      }
      local_c0 = (longlong *)operator_new(0x18);
      if (local_c0 != (longlong *)0x0) {
        *(undefined4 *)(local_c0 + 1) = 1;
        *(undefined4 *)((longlong)local_c0 + 0xc) = 1;
        *local_c0 = (longlong)&PTR_FUN_143f3f2e0;
        local_c0[2] = lVar11;
      }
      local_c8 = lVar11;
      SharedPointerInternals::EnableSharedFromThis(&local_c8,lVar11,lVar11);
      if (local_c8 != 0) {
        puVar9 = (undefined8 *)(local_c8 + 8);
        plVar12 = (longlong *)(*(undefined8 **)(param_1 + 0x60))[1];
        uVar10 = **(undefined8 **)(param_1 + 0x60);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_b8 = uVar10;
        plStack_b0 = plVar12;
        if (&local_b8 != puVar9) {
          local_b8 = *puVar9;
          plStack_b0 = *(longlong **)(local_c8 + 0x10);
          *puVar9 = uVar10;
          *(longlong **)(local_c8 + 0x10) = plVar12;
          local_50 = uVar10;
          plStack_48 = plVar12;
        }
        plVar12 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_b0 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
            }
          }
        }
        plVar12 = *(longlong **)(param_1 + 0x48);
        local_a8 = (undefined2)*(undefined4 *)(local_c8 + 0x28);
        uStack_a6 = (undefined2)((uint)*(undefined4 *)(local_c8 + 0x28) >> 0x10);
        uVar10 = *(undefined8 *)(local_c8 + 0x20);
        local_90 = **(undefined8 **)(param_1 + 0x60);
        local_88 = (longlong *)(*(undefined8 **)(param_1 + 0x60))[1];
        if (local_88 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_88 + 1) = (int)local_88[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar12 + 0x78))(plVar12,&local_90,uVar10,&local_a8);
        plVar12 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_88 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        if ((iVar7 == 0) && (*(char *)(*(longlong *)(param_1 + 0x60) + 0x11) != '\0')) {
          *(undefined2 *)(local_c8 + 0x30) = local_a8;
          local_80 = **(undefined8 **)(param_1 + 0x60);
          local_78 = (longlong *)(*(undefined8 **)(param_1 + 0x60))[1];
          if (local_78 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_78 + 1) = (int)local_78[1] + 1;
            UNLOCK();
          }
          cVar6 = FUN_1404cfd20(lVar8,&local_80,local_c8 + 0x18);
          plVar12 = local_78;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_78 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_78)(local_78);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          plVar12 = local_c0;
          if (cVar6 != '\0') {
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
              UNLOCK();
            }
            local_70 = local_c8;
            local_68 = local_c0;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
              UNLOCK();
            }
            FUN_1404e05b0(lVar8,&local_70);
            plVar1 = local_68;
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_68 + 1;
              lVar11 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_68)(local_68);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar1 + 8))(plVar1,1);
                }
              }
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar12 + 1;
              lVar11 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar2 = (int *)((longlong)plVar12 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
          }
        }
      }
      plVar12 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c0 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x60);
  plVar12 = (longlong *)FDateTime::Now(local_58);
  if ((*(char *)(lVar8 + 0x18) == '\0') ||
     ((*(longlong *)(lVar8 + 0x30) != 0 &&
      (*(longlong *)(lVar8 + 0x30) < *plVar12 - *(longlong *)(lVar8 + 0x20))))) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x39) = 0;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x39) = 1;
  }
  return;
}



// FUNCTION 14051b140 FUN_14051b140 body=1306 status=ok
// SIG undefined FUN_14051b140(void)

void FUN_14051b140(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  short *_Src;
  longlong *plVar6;
  char cVar7;
  undefined1 uVar8;
  short sVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  short *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar11 = FUN_14050e930();
  if (lVar11 != 0) {
    plVar12 = (longlong *)FName::FName(local_res18,L"STEAM",1);
    plVar19 = (longlong *)0x0;
    lVar3 = *plVar12;
    if (*(int *)(lVar11 + 0x90) != *(int *)(lVar11 + 0xbc)) {
      lVar13 = *(longlong *)(lVar11 + 200);
      if (*(longlong *)(lVar11 + 200) == 0) {
        lVar13 = lVar11 + 0xc0;
      }
      iVar18 = *(int *)(lVar13 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                 (longlong)*(int *)(lVar11 + 0xd0) - 1U) * 4);
      if (iVar18 != -1) {
        do {
          plVar12 = (longlong *)((longlong)iVar18 * 0x20 + *(longlong *)(lVar11 + 0x88));
          if (*plVar12 == lVar3) {
            if (iVar18 != -1) goto LAB_14051b202;
            break;
          }
          iVar18 = (int)plVar12[3];
        } while (iVar18 != -1);
      }
    }
    plVar12 = plVar19;
LAB_14051b202:
    plVar20 = plVar12 + 1;
    if (plVar12 == (longlong *)0x0) {
      plVar20 = plVar19;
    }
    if (plVar20 != (longlong *)0x0) {
      iVar18 = (int)plVar20[1];
      plVar12 = plVar19;
      if (0 < iVar18) {
        do {
          plVar4 = *(longlong **)(*plVar20 + 8 + (longlong)plVar12);
          plVar5 = *(longlong **)(*plVar20 + (longlong)plVar12);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          puVar14 = (undefined8 *)(**(code **)(*plVar5 + 0x28))(plVar5,local_68);
          local_88 = *puVar14;
          local_80 = (longlong *)puVar14[1];
          if (local_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_80 + 1) = (int)local_80[1] + 1;
            UNLOCK();
          }
          cVar7 = FUN_140517210(param_1);
          plVar6 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar18 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6);
              }
            }
          }
          plVar6 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar18 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6);
              }
            }
          }
          if (cVar7 == '\0') {
            if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
              plVar6 = (longlong *)param_1[9];
              if (plVar6 != (longlong *)0x0) {
                local_res10[0] = (uint)*(ushort *)(plVar5 + 6);
                lVar11 = plVar5[4];
                puVar14 = (undefined8 *)(**(code **)(*plVar5 + 0x28))(plVar5,local_48);
                local_78 = *puVar14;
                local_70 = (longlong *)puVar14[1];
                if (local_70 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_70 + 1) = (int)local_70[1] + 1;
                  UNLOCK();
                }
                (**(code **)(*plVar6 + 0x88))(plVar6,&local_78,lVar11,local_res10);
                plVar5 = local_70;
                if (local_70 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = local_70 + 1;
                  lVar11 = *plVar6;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_70)(local_70);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    iVar18 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar18 == 1) {
                      (**(code **)(*plVar5 + 8))(plVar5,1);
                    }
                  }
                }
                plVar5 = local_40;
                if (local_40 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = local_40 + 1;
                  lVar11 = *plVar6;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_40)(local_40);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    iVar18 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar18 == 1) {
                      (**(code **)(*plVar5 + 8))(plVar5,1);
                    }
                  }
                }
              }
            }
            else {
              uVar17 = 0;
              local_98 = (short *)0x0;
              local_90 = 0;
              sVar9 = (**(code **)(*plVar5 + 0x10))(plVar5);
              if ((sVar9 != 0) && (_Src = (short *)plVar5[4], local_98 != _Src)) {
                if ((_Src != (short *)0x0) && (*_Src != 0)) {
                  lVar11 = -1;
                  do {
                    lVar11 = lVar11 + 1;
                  } while (_Src[lVar11] != 0);
                  uVar17 = (int)lVar11 + 1;
                }
                uVar16 = local_90._4_4_;
                iVar18 = 0;
                local_90 = (ulonglong)local_90._4_4_ << 0x20;
                if (uVar16 != uVar17) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,uVar17);
                  iVar18 = (int)local_90;
                  uVar16 = local_90._4_4_;
                }
                local_90 = CONCAT44(local_90._4_4_,uVar17 + iVar18);
                if ((int)uVar16 < (int)(uVar17 + iVar18)) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
                }
                if (uVar17 != 0) {
                  _guard_xfg_dispatch_icall_nop(local_98,_Src,(longlong)(int)uVar17 * 2);
                }
              }
              lVar11 = *param_1;
              uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
              uVar15 = (**(code **)(*plVar5 + 0x28))(plVar5,local_58);
              (**(code **)(lVar11 + 0xe0))(param_1,uVar15,&local_98,uVar8);
              plVar5 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar6 = local_50 + 1;
                lVar11 = *plVar6;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  iVar18 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar18 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
              }
              if (local_98 != (short *)0x0) {
                FMemory::Free();
              }
            }
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar4 + 1;
            lVar11 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar18 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          iVar18 = (int)plVar20[1];
          uVar17 = (int)plVar19 + 1;
          plVar19 = (longlong *)(ulonglong)uVar17;
          plVar12 = plVar12 + 2;
        } while ((int)uVar17 < iVar18);
      }
      iVar10 = *(int *)((longlong)plVar20 + 0xc);
      if (iVar10 < 0) {
        if (iVar18 != 0) {
          plVar12 = (longlong *)(*plVar20 + 8);
          do {
            plVar19 = (longlong *)*plVar12;
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar19 + 1;
              lVar11 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar2 = (int *)((longlong)plVar19 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar19 + 8))(plVar19,1);
                }
              }
            }
            plVar12 = plVar12 + 2;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
          iVar10 = *(int *)((longlong)plVar20 + 0xc);
        }
        *(undefined4 *)(plVar20 + 1) = 0;
        if (iVar10 != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar20,0);
        }
      }
      else {
        if (iVar18 != 0) {
          plVar12 = (longlong *)(*plVar20 + 8);
          do {
            plVar19 = (longlong *)*plVar12;
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar19 + 1;
              lVar11 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar2 = (int *)((longlong)plVar19 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar19 + 8))(plVar19,1);
                }
              }
            }
            plVar12 = plVar12 + 2;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        *(undefined4 *)(plVar20 + 1) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14051b660 FUN_14051b660 body=777 status=ok
// SIG undefined FUN_14051b660(void)

void FUN_14051b660(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  lVar4 = param_1[0xc];
  plVar11 = (longlong *)0x0;
  if (((lVar4 == 0) || (*(char *)(lVar4 + 0x10) == '\0')) ||
     (*(char *)(lVar4 + 0x38) == *(char *)(lVar4 + 0x39))) goto LAB_14051b8a3;
  if (*(char *)(lVar4 + 0x39) == '\0') {
LAB_14051b6ba:
    plVar6 = (longlong *)operator_new(0x20);
    plVar8 = plVar11;
    if (plVar6 != (longlong *)0x0) {
      puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)*puVar7 + 0x10))((longlong *)*puVar7,local_res8);
      local_res10 = *plVar8;
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (longlong)&PTR_FUN_143f9a6c8;
      plVar6[3] = local_res10;
      plVar8 = plVar6;
    }
    plVar9 = (longlong *)operator_new(0x18);
    plVar6 = plVar11;
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_143f7de48;
      plVar9[2] = (longlong)plVar8;
      plVar6 = plVar9;
    }
    plVar9 = plVar8 + 1;
    if (plVar8 == (longlong *)0x0) {
      plVar9 = plVar11;
    }
    if (plVar9 != (longlong *)0x0) {
      if ((*plVar9 != 0) && (plVar9[1] != 0)) {
        piVar1 = (int *)(plVar9[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) goto LAB_14051b7ee;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      *plVar9 = (longlong)plVar8;
      plVar10 = (longlong *)plVar9[1];
      if (plVar6 != plVar10) {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
          plVar10 = (longlong *)plVar9[1];
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
        plVar9[1] = (longlong)plVar6;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar6 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
LAB_14051b7ee:
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_48 = plVar8;
    local_40 = plVar6;
    (**(code **)(*param_1 + 0x80))(param_1,&local_48,*(undefined1 *)(param_1[0xc] + 0x39));
    plVar8 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_40 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
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
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  else {
    lVar4 = FUN_14050e930();
    if (lVar4 != 0) {
      uVar5 = FUN_14050e930();
      cVar2 = CLogicalCitizen::GetGender(uVar5);
      if (cVar2 != '\0') goto LAB_14051b6ba;
    }
  }
  *(undefined1 *)(param_1[0xc] + 0x38) = *(undefined1 *)(param_1[0xc] + 0x39);
LAB_14051b8a3:
  plVar8 = plVar11;
  if (0 < (int)param_1[0xf]) {
    do {
      puVar7 = (undefined8 *)(param_1[0xe] + (longlong)plVar11);
      cVar2 = *(char *)((longlong)puVar7 + 0x31);
      if (*(char *)(puVar7 + 6) != cVar2) {
        local_38 = *puVar7;
        local_30 = (longlong *)puVar7[1];
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
          cVar2 = *(char *)((longlong)puVar7 + 0x31);
        }
        (**(code **)(*param_1 + 0x80))(param_1,&local_38,cVar2);
        plVar6 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_30 + 1;
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_30)(local_30);
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
        *(undefined1 *)(puVar7 + 6) = *(undefined1 *)((longlong)puVar7 + 0x31);
      }
      uVar12 = (int)plVar8 + 1;
      plVar11 = plVar11 + 7;
      plVar8 = (longlong *)(ulonglong)uVar12;
    } while ((int)uVar12 < (int)param_1[0xf]);
  }
  return;
}



// FUNCTION 14051b970 FUN_14051b970 body=695 status=ok
// SIG undefined FUN_14051b970(void)

void FUN_14051b970(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_68 [2];
  longlong local_58 [3];
  
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                     (*(longlong **)(param_1 + 0x10),local_78);
  plVar2 = (longlong *)plVar6[1];
  lVar3 = *plVar6;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_70 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (((lVar3 != 0) && (lVar7 = *(longlong *)(lVar3 + 0x2c8), lVar7 != 0)) &&
     (iVar12 = 0, 0 < *(int *)(lVar7 + 0x10))) {
    lVar13 = 0;
    do {
      plVar6 = *(longlong **)(*(longlong *)(lVar7 + 8) + 0xa8 + lVar13);
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0xa0 + lVar13);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if ((lVar7 != 0) && (plVar4 = *(longlong **)(lVar7 + 0x18), plVar4 != (longlong *)0x0)) {
        puVar8 = (undefined8 *)
                 (**(code **)(*(longlong *)*param_2 + 0x68))((longlong *)*param_2,local_58,0);
        puVar9 = (undefined8 *)(**(code **)(*plVar4 + 0x68))(plVar4,local_68);
        if (*(int *)(puVar8 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar8;
        }
        if (*(int *)(puVar9 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar9;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (iVar5 == 0) {
          *(undefined4 *)
           ((longlong)iVar12 * 0xc0 + 0xb8 + *(longlong *)(*(longlong *)(lVar3 + 0x2c8) + 8)) =
               *(undefined4 *)(param_3 + 0x10);
          FUN_14051f780(param_1 + 0x48,lVar7 + 0x28);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar6 + 1;
            lVar3 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          break;
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      lVar7 = *(longlong *)(lVar3 + 0x2c8);
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + 0xc0;
    } while (iVar12 < *(int *)(lVar7 + 0x10));
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 14051bc30 FUN_14051bc30 body=352 status=ok
// SIG undefined FUN_14051bc30(void)

void FUN_14051bc30(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar7 = (undefined8 *)
           (**(code **)(*(longlong *)param_1[5] + 0xa8))((longlong *)param_1[5],local_28);
  iVar6 = (**(code **)(*(longlong *)*puVar7 + 0x118))((longlong *)*puVar7,local_res8);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (((local_res8[0] == 2) && (iVar6 == 2)) &&
     (cVar5 = (**(code **)(*(longlong *)param_1[5] + 0xf8))((longlong *)param_1[5],param_2),
     cVar5 != '\0')) {
    *(undefined4 *)(param_1 + 4) = 1;
    puVar7 = (undefined8 *)operator_new(0x58);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar7,param_1[5],0);
      *puVar7 = &PTR_FUN_143f9ad98;
      puVar7[5] = *param_2;
      lVar4 = param_2[1];
      puVar7[6] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      *(undefined1 *)(puVar7 + 8) = 0;
      puVar7[7] = &PTR_FUN_143f9ad78;
      puVar7[10] = FUN_14051a320;
      *(undefined4 *)((longlong)puVar7 + 0x44) = 0;
      puVar7[9] = puVar7;
      SteamAPI_RegisterCallback(puVar7 + 7,0x44d);
    }
    FUN_1404adba0(*(undefined8 *)(param_1[5] + 0x148),puVar7);
    return;
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2);
  return;
}



// FUNCTION 14051bd90 FUN_14051bd90 body=799 status=ok
// SIG undefined FUN_14051bd90(void)

void FUN_14051bd90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  int local_res10;
  uint uStackX_14;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
  plVar4 = (longlong *)*puVar7;
  iVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,0x200);
  if (iVar6 < 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x19) = 0;
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(plVar1,iVar6);
  iVar12 = 0;
  if (0 < iVar6) {
    do {
      plVar10 = (longlong *)0x0;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_res10,iVar12,0x200);
      uVar11 = uStackX_14 >> 0x14 & 0xf;
      if (((((uVar11 - 1 < 10) && (((int)uStackX_14 >> 0x18) - 1U < 4)) &&
           ((uVar11 != 1 || ((local_res10 != 0 && ((uStackX_14 & 0xfffff) == 1)))))) &&
          ((uVar11 != 7 || ((local_res10 != 0 && ((uStackX_14 & 0xfffff) == 0)))))) &&
         ((uVar11 != 3 || (local_res10 != 0)))) {
        plVar8 = (longlong *)operator_new(0x20);
        plVar9 = plVar10;
        if (plVar8 != (longlong *)0x0) {
          *(undefined2 *)(plVar8 + 1) = 0x100;
          *plVar8 = (longlong)&PTR_FUN_143f9ccc0;
          plVar9 = (longlong *)operator_new(0x30);
          if (plVar9 != (longlong *)0x0) {
            *(undefined4 *)(plVar9 + 1) = 1;
            *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
            *plVar9 = (longlong)&PTR_FUN_143f9e7b0;
            plVar9[3] = 0;
            plVar9[4] = 0;
            plVar9[2] = (longlong)&PTR_FUN_143f9a6c8;
            plVar9[5] = CONCAT44(uStackX_14,local_res10);
            plVar10 = plVar9;
          }
          plVar9 = plVar10 + 2;
          local_48 = plVar9;
          local_40 = plVar10;
          FUN_14044f790(&local_48,plVar9);
          plVar8[2] = (longlong)plVar9;
          plVar8[3] = (longlong)plVar10;
          plVar9 = plVar8;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            plVar8 = plVar10 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
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
        plVar10 = (longlong *)0x0;
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *(undefined4 *)(plVar8 + 1) = 1;
          *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
          *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
          plVar8[2] = (longlong)plVar9;
          plVar10 = plVar8;
        }
        local_58 = plVar9;
        local_50 = plVar10;
        SharedPointerInternals::EnableSharedFromThis(&local_58,plVar9,plVar9);
        iVar3 = *(int *)(param_1 + 0x48);
        *(int *)(param_1 + 0x48) = iVar3 + 1;
        if (*(int *)(param_1 + 0x4c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
        }
        plVar10 = local_50;
        puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar1);
        *puVar7 = local_58;
        puVar7[1] = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_50 + 1;
            lVar5 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_50)(local_50);
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
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar6);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}



// FUNCTION 14051c0b0 FUN_14051c0b0 body=502 status=ok
// SIG undefined FUN_14051c0b0(void)

void FUN_14051c0b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38;
  
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
  plVar9 = *(longlong **)(param_1 + 0x30);
  plVar4 = (longlong *)*puVar7;
  plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x38) * 2;
  for (; plVar9 != plVar8; plVar9 = plVar9 + 2) {
    local_50 = (longlong *)plVar9[1];
    local_48 = *plVar9;
    local_40 = (longlong *)0x0;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    uVar10 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,&local_50);
    plVar5 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar5 = (longlong *)plVar9[1];
    lVar6 = *plVar9;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_38 = (**(code **)(*plVar4 + 0x128))(plVar4,*(undefined8 *)(lVar6 + 0x18),0,param_4,uVar10)
    ;
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
    iVar3 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar3 + 1;
    if (*(int *)(param_1 + 0x4c) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x40,iVar3);
    }
    plVar1 = local_40;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x18);
    *plVar5 = local_48;
    plVar5[1] = (longlong)local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    *(undefined1 *)(plVar5 + 2) = local_38;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14051c2b0 FUN_14051c2b0 body=439 status=ok
// SIG undefined FUN_14051c2b0(void)

void FUN_14051c2b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  
  if (*(int *)(param_1 + 0x140) != 1) {
    iVar9 = *(int *)(param_1 + 0x150);
    if (iVar9 != 0) {
      plVar10 = (longlong *)(*(longlong *)(param_1 + 0x148) + 8);
      do {
        plVar4 = (longlong *)*plVar10;
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
        plVar10 = plVar10 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    puVar8 = (undefined8 *)0x0;
    *(undefined4 *)(param_1 + 0x150) = 0;
    if (*(int *)(param_1 + 0x154) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x148,0);
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
    puVar6 = (undefined8 *)operator_new(0x40);
    if (puVar6 != (undefined8 *)0x0) {
      FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar6,*(undefined8 *)(param_1 + 0x110),0);
      puVar6[5] = 0;
      *puVar6 = &PTR__scalar_deleting_destructor__143f9c6b8;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar7 = (undefined8 *)operator_new(0x30);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_143f9c980;
        puVar7[1] = puVar6;
        *(undefined1 *)(puVar7 + 2) = 0;
        *(undefined4 *)(puVar7 + 3) = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar8 = puVar7;
      }
      puVar6[5] = puVar8;
      lVar5 = DAT_1468b5010;
      LOCK();
      *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
      UNLOCK();
      plVar10 = (longlong *)puVar8[4];
      puVar8[5] = lVar5;
      if (lVar5 == 0) {
        FUN_1415b5910();
        puVar8[4] = 0;
        FUN_1405037a0(puVar8 + 1);
        LOCK();
        *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + -1;
        UNLOCK();
        puVar8 = puVar6;
      }
      else {
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)FUN_1415ab270(1);
          puVar8[4] = plVar10;
        }
        (**(code **)(*plVar10 + 0x18))();
        (**(code **)(*(longlong *)puVar8[5] + 0x10))((longlong *)puVar8[5],puVar8);
        puVar8 = puVar6;
      }
    }
    FUN_1404adba0(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x148),puVar8);
    *(undefined4 *)(param_1 + 0x140) = 1;
  }
  return;
}



// FUNCTION 14051c480 FUN_14051c480 body=3510 status=ok
// SIG undefined FUN_14051c480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14051c480(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  short *psVar4;
  byte bVar5;
  char cVar6;
  wint_t wVar7;
  wint_t wVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  wint_t *pwVar21;
  ulonglong uVar22;
  undefined2 *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  longlong **pplVar27;
  undefined1 auStack_5d8 [32];
  undefined8 *local_5b8;
  longlong *local_5b0;
  int local_5a8;
  undefined8 local_5a0;
  int local_598;
  int local_594;
  int local_590;
  int local_58c;
  uint local_588 [4];
  int local_578;
  uint uStack_574;
  longlong local_570;
  uint local_568;
  undefined4 local_564;
  undefined2 *local_560;
  ulonglong local_558;
  undefined2 *local_550;
  ulonglong local_548;
  longlong *local_540;
  longlong *local_538;
  longlong local_530 [2];
  undefined1 local_520 [8];
  short *local_518;
  short *local_510;
  short *local_508;
  longlong local_500;
  short *local_4f8;
  longlong *local_4f0;
  longlong local_4e8;
  longlong *local_4e0;
  longlong *local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  undefined1 local_4c0 [8];
  short local_4b8 [128];
  short *local_3b8;
  short *local_3b0;
  int local_3a8;
  short local_398 [128];
  short *local_298;
  short *local_290;
  int local_288;
  short local_278 [128];
  short *local_178;
  short *local_170;
  int local_168;
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_5d8;
  local_500 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xe0);
  local_4e8 = param_1;
  puVar11 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
  plVar3 = (longlong *)*puVar11;
  puVar11 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  local_4f0 = (longlong *)*puVar11;
  iVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,4);
  if (iVar9 < 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_5a8 = iVar9;
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(plVar1,iVar9);
    iVar26 = 0;
    lVar12 = param_1;
    if (0 < iVar9) {
LAB_14051c540:
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_5a0,iVar26,4);
      lVar12 = (**(code **)(*plVar3 + 0x38))(plVar3);
      local_3b8 = (short *)0x0;
      if (lVar12 == 0) {
        local_3a8 = 0;
        local_3b0 = (short *)0x0;
      }
      else {
        uVar19 = 0xffffffffffffffff;
        do {
          uVar22 = uVar19;
          uVar19 = uVar22 + 1;
        } while (*(char *)(lVar12 + uVar19) != '\0');
        local_598 = 0;
        FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                  (&local_598,0x7fffffff,lVar12,uVar19 & 0xffffffff);
        local_3a8 = local_598;
        uVar24 = local_598 + 1;
        if (uVar24 < 0x81) {
          if (local_3b8 != (short *)0x0) {
            lVar18 = 0;
LAB_14051c5d6:
            local_3b8 = (short *)FMemory::Realloc(local_3b8,lVar18,0);
          }
        }
        else if ((local_3b8 != (short *)0x0) || (uVar24 != 0)) {
          lVar18 = (longlong)(int)uVar24 * 2;
          goto LAB_14051c5d6;
        }
        local_518 = local_4b8;
        if (local_3b8 != (short *)0x0) {
          local_518 = local_3b8;
        }
        local_3b0 = local_518;
        FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_518,uVar24,lVar12,(int)uVar22 + 2);
      }
      psVar4 = local_3b0;
      puVar20 = (undefined8 *)0x0;
      local_570 = 0;
      iVar10 = 0;
      local_568 = 0;
      local_564 = 0;
      puVar11 = puVar20;
      if ((local_3b0 != (short *)0x0) && (puVar11 = (undefined8 *)0x0, *local_3b0 != 0)) {
        lVar12 = -1;
        do {
          lVar18 = lVar12 + 1;
          lVar12 = lVar12 + 1;
        } while (local_3b0[lVar18] != 0);
        uVar24 = (int)lVar12 + 1;
        local_568 = uVar24;
        if (0 < (int)uVar24) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_570,0);
        }
        FGenericPlatformString::Memcpy(local_570,psVar4,(longlong)(int)uVar24 * 2);
        puVar11 = (undefined8 *)(ulonglong)local_568;
      }
      uVar24 = (uint)puVar11;
      if (local_3b8 != (short *)0x0) {
        FMemory::Free();
        uVar24 = local_568;
      }
      if (uVar24 != 0) {
        iVar10 = uVar24 - 1;
      }
      if (0 < iVar10) {
        puVar11 = (undefined8 *)operator_new(0xf0);
        if (puVar11 != (undefined8 *)0x0) {
          *(undefined2 *)(puVar11 + 1) = 0x100;
          *puVar11 = &PTR_FUN_143f9cc80;
          puVar13 = (undefined8 *)operator_new(0x20);
          if (puVar13 != (undefined8 *)0x0) {
            puVar13[1] = 0;
            puVar13[2] = 0;
            *puVar13 = &PTR_FUN_143f9a6c8;
            puVar13[3] = local_5a0;
            local_4d0 = local_5a0;
            puVar20 = puVar13;
          }
          puVar11[2] = puVar20;
          puVar13 = (undefined8 *)operator_new(0x18);
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)0x0;
          }
          else {
            *(undefined4 *)(puVar13 + 1) = 1;
            *puVar13 = &PTR_FUN_143f7de48;
            *(undefined4 *)((longlong)puVar13 + 0xc) = 1;
            puVar13[2] = puVar20;
          }
          puVar11[3] = puVar13;
          FUN_14044f790(puVar11 + 2,puVar20);
          puVar11[4] = 0;
          puVar11[5] = 0;
          puVar11[8] = 0;
          puVar11[9] = 0;
          *(undefined4 *)(puVar11 + 10) = 0xffffffff;
          *(undefined4 *)((longlong)puVar11 + 0x54) = 0;
          puVar11[0xc] = 0;
          *(undefined4 *)(puVar11 + 0xd) = 0;
          FUN_1404f8570(puVar11 + 0xe);
          puVar20 = puVar11;
        }
        plVar15 = (longlong *)0x0;
        plVar14 = (longlong *)operator_new(0x18);
        if (plVar14 != (longlong *)0x0) {
          *(undefined4 *)(plVar14 + 1) = 1;
          *plVar14 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
          plVar14[2] = (longlong)puVar20;
          plVar15 = plVar14;
        }
        local_5b8 = puVar20;
        local_5b0 = plVar15;
        SharedPointerInternals::EnableSharedFromThis(&local_5b8,puVar20,puVar20);
        plVar15 = local_5b0;
        puVar11 = local_5b8;
        if (local_5b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_5b0 + 1) = (int)local_5b0[1] + 1;
          UNLOCK();
        }
        iVar9 = *(int *)(param_1 + 0x48);
        *(int *)(param_1 + 0x48) = iVar9 + 1;
        if (*(int *)(param_1 + 0x4c) < iVar9 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar9);
        }
        plVar14 = (longlong *)((longlong)iVar9 * 0x10 + *plVar1);
        *plVar14 = (longlong)puVar11;
        plVar14[1] = (longlong)plVar15;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
          LOCK();
          plVar14 = plVar15 + 1;
          lVar12 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        local_588[0] = 0;
        uStack_574 = 0;
        local_588[1] = 0;
        local_578 = 0;
        bVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,local_5a0,local_588);
        local_530[0] = 0;
        local_530[1] = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_530,0);
        FGenericPlatformString::Memcpy(local_530[0],L"nickname",0x12);
        local_4e0 = local_530;
        local_4d8 = &local_570;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
                  (local_5b8 + 4,local_520,&local_4e0,0);
        if (local_530[0] != 0) {
          FMemory::Free();
        }
        lVar12 = (**(code **)(*plVar3 + 0x168))(plVar3,local_5a0,"status");
        local_58 = (short *)0x0;
        if (lVar12 == 0) {
          local_50 = (short *)0x0;
          local_48 = 0;
        }
        else {
          uVar19 = 0xffffffffffffffff;
          do {
            uVar22 = uVar19;
            uVar19 = uVar22 + 1;
          } while (*(char *)(lVar12 + uVar19) != '\0');
          local_594 = 0;
          FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                    (&local_594,0x7fffffff,lVar12,uVar19 & 0xffffffff);
          local_48 = local_594;
          uVar24 = local_594 + 1;
          if (uVar24 < 0x81) {
            if (local_58 != (short *)0x0) {
              lVar18 = 0;
LAB_14051c989:
              local_58 = (short *)FMemory::Realloc(local_58,lVar18,0);
            }
          }
          else if ((local_58 != (short *)0x0) || (uVar24 != 0)) {
            lVar18 = (longlong)(int)uVar24 * 2;
            goto LAB_14051c989;
          }
          local_510 = local_158;
          if (local_58 != (short *)0x0) {
            local_510 = local_58;
          }
          local_50 = local_510;
          FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_510,uVar24,lVar12,(int)uVar22 + 2);
        }
        psVar4 = local_50;
        puVar11 = local_5b8;
        iVar9 = 0;
        puVar20 = local_5b8 + 0x11;
        if ((short *)*puVar20 != local_50) {
          if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
            lVar12 = -1;
            do {
              lVar12 = lVar12 + 1;
            } while (local_50[lVar12] != 0);
            iVar9 = (int)lVar12 + 1;
          }
          iVar10 = 0;
          *(undefined4 *)(local_5b8 + 0x12) = 0;
          if (*(int *)((longlong)local_5b8 + 0x94) != iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar20,iVar9);
            iVar10 = *(int *)(puVar11 + 0x12);
          }
          *(int *)(puVar11 + 0x12) = iVar9 + iVar10;
          if (*(int *)((longlong)puVar11 + 0x94) < iVar9 + iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar20);
          }
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop((void *)*puVar20,psVar4,(longlong)iVar9 * 2);
          }
        }
        if (local_58 != (short *)0x0) {
          FMemory::Free();
        }
        lVar12 = (**(code **)(*plVar3 + 0x168))(plVar3,local_5a0,"Joinable");
        local_298 = (short *)0x0;
        if (lVar12 == 0) {
          local_290 = (short *)0x0;
          local_288 = 0;
          goto LAB_14051cb60;
        }
        uVar19 = 0xffffffffffffffff;
        do {
          uVar22 = uVar19;
          uVar19 = uVar22 + 1;
        } while (*(char *)(lVar12 + uVar19) != '\0');
        local_590 = 0;
        FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                  (&local_590,0x7fffffff,lVar12,uVar19 & 0xffffffff);
        local_288 = local_590;
        uVar24 = local_590 + 1;
        if (uVar24 < 0x81) {
          if (local_298 != (short *)0x0) {
            lVar18 = 0;
LAB_14051caf9:
            local_298 = (short *)FMemory::Realloc(local_298,lVar18,0);
          }
        }
        else if ((local_298 != (short *)0x0) || (uVar24 != 0)) {
          lVar18 = (longlong)(int)uVar24 * 2;
          goto LAB_14051caf9;
        }
        local_508 = local_398;
        if (local_298 != (short *)0x0) {
          local_508 = local_298;
        }
        local_290 = local_508;
        FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_508,uVar24,lVar12,(int)uVar22 + 2);
LAB_14051cb60:
        psVar4 = local_290;
        local_550 = (undefined2 *)0x0;
        uVar24 = 0;
        local_548 = 0;
        if ((local_290 != (short *)0x0) && (*local_290 != 0)) {
          lVar12 = -1;
          do {
            lVar18 = lVar12 + 1;
            lVar12 = lVar12 + 1;
          } while (local_290[lVar18] != 0);
          uVar25 = (int)lVar12 + 1;
          local_548 = (ulonglong)uVar25;
          uVar24 = uVar25;
          if (0 < (int)uVar25) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_550,0);
            uVar24 = (uint)local_548;
          }
          FGenericPlatformString::Memcpy(local_550,psVar4,(longlong)(int)uVar25 * 2);
        }
        if (local_298 != (short *)0x0) {
          FMemory::Free();
        }
        pwVar21 = &DAT_143f8ddb0;
        puVar23 = &DAT_143f3eda8;
        if (uVar24 != 0) {
          puVar23 = local_550;
        }
        do {
          wVar7 = *(wint_t *)((longlong)pwVar21 + (longlong)(puVar23 + -0xa1fc6ed8));
          if ((wVar7 == 0) && (*pwVar21 == 0)) {
            iVar9 = 0;
            goto LAB_14051cc28;
          }
          if (wVar7 != *pwVar21) {
            wVar7 = towlower(wVar7);
            wVar8 = towlower(*pwVar21);
            if (wVar7 != wVar8) goto LAB_14051cc1c;
          }
          pwVar21 = pwVar21 + 1;
        } while( true );
      }
      goto LAB_14051d1ca;
    }
LAB_14051d1ee:
    *(undefined1 *)(lVar12 + 0x18) = 1;
    *(undefined1 *)(lVar12 + 0x19) = 1;
  }
  return;
LAB_14051cc1c:
  iVar9 = (uint)wVar7 - (uint)wVar8;
LAB_14051cc28:
  uVar24 = 0;
  if (iVar9 == 0) {
    uVar24 = 8;
  }
  *(uint *)(local_5b8 + 0x10) = uVar24 | *(uint *)(local_5b8 + 0x10) & 0xfffffff7;
  iVar9 = (**(code **)(*plVar3 + 0x30))(plVar3,local_5a0);
  *(uint *)(local_5b8 + 0x10) = (uint)(0 < iVar9) | *(uint *)(local_5b8 + 0x10) & 0xfffffffe;
  iVar9 = (**(code **)(*plVar3 + 0x30))(plVar3,local_5a0);
  if (iVar9 == 0) {
    *(undefined1 *)(local_5b8 + 0x13) = 1;
  }
  else if (iVar9 == 2) {
    *(undefined1 *)(local_5b8 + 0x13) = 4;
  }
  else if (iVar9 == 3) {
    *(undefined1 *)(local_5b8 + 0x13) = 2;
  }
  else if (iVar9 == 4) {
    *(undefined1 *)(local_5b8 + 0x13) = 3;
  }
  else {
    *(undefined1 *)(local_5b8 + 0x13) = 0;
  }
  *(uint *)(local_5b8 + 0x10) =
       *(uint *)(local_5b8 + 0x10) ^ ((uint)bVar5 * 2 ^ *(uint *)(local_5b8 + 0x10)) & 2;
  uVar25 = 0;
  uVar24 = uVar25;
  if ((local_588[0] & 0xffffff) == *(uint *)(local_500 + 0x74)) {
    uVar24 = 4;
  }
  *(uint *)(local_5b8 + 0x10) = uVar24 | *(uint *)(local_5b8 + 0x10) & 0xfffffffb;
  lVar12 = (**(code **)(*plVar3 + 0x168))(plVar3,local_5a0,"HasVoice");
  local_178 = (short *)0x0;
  if (lVar12 == 0) {
    local_168 = 0;
    local_170 = (short *)0x0;
    goto LAB_14051ce17;
  }
  uVar19 = 0xffffffffffffffff;
  do {
    uVar22 = uVar19;
    uVar19 = uVar22 + 1;
  } while (*(char *)(lVar12 + uVar19) != '\0');
  local_58c = 0;
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (&local_58c,0x7fffffff,lVar12,uVar19 & 0xffffffff);
  local_168 = local_58c;
  uVar24 = local_58c + 1;
  if (uVar24 < 0x81) {
    if (local_178 != (short *)0x0) {
      lVar18 = 0;
LAB_14051cdb6:
      local_178 = (short *)FMemory::Realloc(local_178,lVar18,0);
    }
  }
  else if ((local_178 != (short *)0x0) || (uVar24 != 0)) {
    lVar18 = (longlong)(int)uVar24 * 2;
    goto LAB_14051cdb6;
  }
  local_4f8 = local_278;
  if (local_178 != (short *)0x0) {
    local_4f8 = local_178;
  }
  local_170 = local_4f8;
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_4f8,uVar24,lVar12,(int)uVar22 + 2);
LAB_14051ce17:
  psVar4 = local_170;
  local_560 = (undefined2 *)0x0;
  local_558 = 0;
  if ((local_170 != (short *)0x0) && (*local_170 != 0)) {
    lVar12 = -1;
    do {
      lVar18 = lVar12 + 1;
      lVar12 = lVar12 + 1;
    } while (local_170[lVar18] != 0);
    uVar24 = (int)lVar12 + 1;
    local_558 = (ulonglong)uVar24;
    uVar25 = uVar24;
    if (0 < (int)uVar24) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_560,0);
      uVar25 = (uint)local_558;
    }
    FGenericPlatformString::Memcpy(local_560,psVar4,(longlong)(int)uVar24 * 2);
  }
  if (local_178 != (short *)0x0) {
    FMemory::Free();
  }
  pwVar21 = &DAT_143f8de48;
  puVar23 = &DAT_143f3eda8;
  if (uVar25 != 0) {
    puVar23 = local_560;
  }
  do {
    wVar7 = *(wint_t *)((longlong)pwVar21 + (longlong)(puVar23 + -0xa1fc6f24));
    if ((wVar7 == 0) && (*pwVar21 == 0)) {
      iVar9 = 0;
      goto LAB_14051cef4;
    }
    if (wVar7 != *pwVar21) {
      wVar7 = towlower(wVar7);
      wVar8 = towlower(*pwVar21);
      if (wVar7 != wVar8) break;
    }
    pwVar21 = pwVar21 + 1;
  } while( true );
  iVar9 = (uint)wVar7 - (uint)wVar8;
LAB_14051cef4:
  plVar15 = (longlong *)0x0;
  uVar24 = 0;
  if (iVar9 == 0) {
    uVar24 = 0x10;
  }
  *(uint *)(local_5b8 + 0x10) = uVar24 | *(uint *)(local_5b8 + 0x10) & 0xffffffef;
  if (((((((*(byte *)(local_5b8 + 0x10) & 4) == 0) ||
         (uVar24 = uStack_574 >> 0x14 & 0xf, 9 < uVar24 - 1)) ||
        (3 < ((int)uStack_574 >> 0x18) - 1U)) ||
       ((uVar24 == 1 && ((local_578 == 0 || ((uStack_574 & 0xfffff) != 1)))))) ||
      ((uVar24 == 7 && ((local_578 == 0 || ((uStack_574 & 0xfffff) != 0)))))) ||
     ((uVar24 == 3 && (local_578 == 0)))) goto LAB_14051d16a;
  plVar16 = (longlong *)operator_new(0x20);
  plVar14 = plVar15;
  if (plVar16 != (longlong *)0x0) {
    local_4c8 = CONCAT44(uStack_574,local_578);
    plVar16[1] = 0;
    plVar16[2] = 0;
    *plVar16 = (longlong)&PTR_FUN_143f9a6c8;
    plVar16[3] = local_4c8;
    plVar14 = plVar16;
  }
  plVar16 = (longlong *)operator_new(0x18);
  puVar11 = local_5b8;
  if (plVar16 != (longlong *)0x0) {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_143f7de48;
    plVar16[2] = (longlong)plVar14;
    plVar15 = plVar16;
  }
  plVar16 = plVar14 + 1;
  pplVar27 = (longlong **)(local_5b8 + 0xe);
  if (plVar14 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  local_540 = plVar14;
  local_538 = plVar15;
  if (plVar16 != (longlong *)0x0) {
    if ((*plVar16 != 0) && (plVar16[1] != 0)) {
      piVar2 = (int *)(plVar16[1] + 8);
      LOCK();
      iVar9 = *piVar2;
      if (iVar9 == 0) {
        *piVar2 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (0 < iVar9) goto LAB_14051d0c5;
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    *plVar16 = (longlong)plVar14;
    plVar17 = (longlong *)plVar16[1];
    if (plVar15 != plVar17) {
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
        UNLOCK();
        plVar17 = (longlong *)plVar16[1];
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
      plVar16[1] = (longlong)plVar15;
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar12 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
  }
LAB_14051d0c5:
  if (pplVar27 != &local_540) {
    *pplVar27 = plVar14;
    local_540 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(puVar11 + 0xf,&local_538);
  }
  plVar15 = local_538;
  if (local_538 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_538 + 1;
    lVar12 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_538)(local_538);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_538 + 8))(local_538,1);
      }
    }
  }
  lVar12 = *plVar3;
  puVar11 = (undefined8 *)(**(code **)(*local_4f0 + 0x10))(local_4f0,local_4c0);
  cVar6 = (**(code **)(lVar12 + 0xd0))(plVar3,*puVar11,CONCAT44(uStack_574,local_578));
  uVar24 = 0;
  if (cVar6 == '\0') {
    uVar24 = 8;
  }
  *(uint *)(local_5b8 + 0x10) = uVar24 | *(uint *)(local_5b8 + 0x10) & 0xfffffff7;
LAB_14051d16a:
  if (local_560 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_550 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar15 = local_5b0;
  iVar9 = local_5a8;
  if (local_5b0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_5b0 + 1;
    lVar12 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_5b0)(local_5b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      iVar9 = local_5a8;
      if (iVar10 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
        iVar9 = local_5a8;
      }
    }
  }
LAB_14051d1ca:
  if (local_570 != 0) {
    FMemory::Free();
  }
  iVar26 = iVar26 + 1;
  lVar12 = local_4e8;
  if (iVar9 <= iVar26) goto LAB_14051d1ee;
  goto LAB_14051c540;
}



// FUNCTION 14051d240 FUN_14051d240 body=521 status=ok
// SIG undefined FUN_14051d240(void)

void FUN_14051d240(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)0x0;
  iVar4 = 3;
  if ((((param_1[0x1c] != 0) && (cVar2 = FUN_140516dc0(), cVar2 != '\0')) &&
      (cVar2 = (**(code **)(*(longlong *)param_1[0x1c] + 0xf8))((longlong *)param_1[0x1c],param_2),
      cVar2 != '\0')) &&
     ((param_1[0x24] != 0 &&
      (cVar2 = (**(code **)(*(longlong *)param_1[0x23] + 8))(), cVar2 != '\0')))) {
    if (param_3 - 4U < 2) {
      iVar4 = 2;
    }
    else if (param_3 == 3) {
      if ((int)param_1[0x20] != 1) {
        *(undefined4 *)(param_1 + 0x20) = 1;
        puVar3 = (undefined8 *)operator_new(0x50);
        if (puVar3 != (undefined8 *)0x0) {
          FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar3,param_1[0x1c],0);
          puVar3[5] = param_1;
          *puVar3 = &PTR_FUN_143f9cf20;
          puVar3[6] = *param_2;
          lVar1 = param_2[1];
          puVar3[7] = lVar1;
          if (lVar1 != 0) {
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
          }
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar5 = puVar3;
        }
        FUN_1404adba0(*(undefined8 *)(param_1[0x1c] + 0x148),puVar5);
        iVar4 = (int)param_1[0x20];
        if (iVar4 == 1) {
          return;
        }
      }
    }
    else if ((int)param_1[0x1d] != 1) {
      *(undefined4 *)(param_1 + 0x1d) = 0;
      puVar3 = (undefined8 *)operator_new(0x58);
      if (puVar3 != (undefined8 *)0x0) {
        FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar3,param_1[0x1c],0);
        puVar3[5] = param_1;
        *puVar3 = &PTR_FUN_143f9ce88;
        puVar3[6] = *param_2;
        lVar1 = param_2[1];
        puVar3[7] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        puVar3[8] = 0;
        puVar3[9] = 0;
        *(int *)(puVar3 + 10) = param_3;
        puVar5 = puVar3;
      }
      FUN_1404adba0(*(undefined8 *)(param_1[0x1c] + 0x148),puVar5);
      *(undefined4 *)(param_1 + 0x1d) = 1;
      return;
    }
  }
  (**(code **)(*param_1 + 0x130))(param_1,param_2,(iVar4 == 3) + '\x01',param_3,0,0);
  return;
}



// FUNCTION 14051d450 FUN_14051d450 body=251 status=ok
// SIG undefined FUN_14051d450(void)

void FUN_14051d450(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x27) = 0;
  iVar5 = -0x7fffbffb;
  if ((param_1[0x22] != 0) && (cVar2 = FUN_140516dc0(), cVar2 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x13c) == 1) {
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
    puVar4 = (undefined8 *)operator_new(0x48);
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x27) = 0;
      uVar3 = 3;
    }
    else {
      lVar1 = param_1[0x27];
      FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar4,param_1[0x22],0);
      *puVar4 = &PTR__scalar_deleting_destructor__143f9c558;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *(int *)((longlong)puVar4 + 0x3c) = (int)lVar1;
      *(undefined1 *)(puVar4 + 8) = 0;
      FUN_1404adba0(*(undefined8 *)(param_1[0x22] + 0x148),puVar4);
      uVar3 = 1;
      iVar5 = 0x3e5;
    }
    *(undefined4 *)((longlong)param_1 + 0x13c) = uVar3;
    if (iVar5 == 0x3e5) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x108))(param_1,2,(int)param_1[0x27]);
  return;
}



// FUNCTION 14051d550 FUN_14051d550 body=268 status=ok
// SIG undefined FUN_14051d550(void)

void FUN_14051d550(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *(undefined4 *)(*param_4 + 0x30) = 1;
  FUN_140506340(*param_4 + 0x20,0);
  FUN_14050d540(param_1,*param_4);
  puVar2 = (undefined8 *)operator_new(0x68);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar2,*(undefined8 *)(param_1 + 0x20),0);
    *(undefined1 *)(puVar2 + 5) = 0;
    *puVar2 = &PTR__scalar_deleting_destructor__143f9af58;
    puVar2[6] = 0;
    iVar4 = *(int *)(param_3 + 1);
    param_3 = (undefined8 *)*param_3;
    *(int *)(puVar2 + 7) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 6,iVar4,0);
      puVar3 = (undefined8 *)puVar2[6];
      do {
        *puVar3 = *param_3;
        lVar1 = param_3[1];
        puVar3[1] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        puVar3 = puVar3 + 2;
        param_3 = param_3 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puVar2[8] = *param_4;
    lVar1 = param_4[1];
    puVar2[9] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_1404adba0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x148),puVar2);
  return;
}



// FUNCTION 14051d660 FUN_14051d660 body=1003 status=ok
// SIG undefined FUN_14051d660(void)

void FUN_14051d660(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong local_res20;
  undefined1 local_78 [8];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  
  puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
  plVar13 = (longlong *)0x0;
  plVar2 = (longlong *)*puVar6;
  local_60 = 0;
  local_58 = 0;
  plVar7 = (longlong *)operator_new(0x20);
  plVar8 = plVar13;
  if (plVar7 != (longlong *)0x0) {
    puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    plVar8 = (longlong *)(**(code **)(*(longlong *)*puVar6 + 0x10))((longlong *)*puVar6,local_78);
    local_70 = *plVar8;
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (longlong)&PTR_FUN_143f9a6c8;
    plVar7[3] = local_70;
    plVar8 = plVar7;
  }
  plVar9 = (longlong *)operator_new(0x18);
  plVar7 = plVar13;
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_143f7de48;
    plVar9[2] = (longlong)plVar8;
    plVar7 = plVar9;
  }
  plVar9 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar9 = plVar13;
  }
  if (plVar9 != (longlong *)0x0) {
    if ((*plVar9 != 0) && (plVar9[1] != 0)) {
      piVar1 = (int *)(plVar9[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_14051d7ce;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar9 = (longlong)plVar8;
    plVar10 = (longlong *)plVar9[1];
    if (plVar7 != plVar10) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar10 = (longlong *)plVar9[1];
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      plVar9[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar7 + 1;
      lVar14 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
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
LAB_14051d7ce:
  uVar3 = local_58;
  lVar14 = (longlong)(int)local_58;
  iVar4 = (int)local_58 + 1;
  local_58 = CONCAT44(local_58._4_4_,iVar4);
  if (local_58._4_4_ < iVar4) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_60,uVar3 & 0xffffffff);
  }
  puVar6 = (undefined8 *)(lVar14 * 0x10 + local_60);
  *puVar6 = plVar8;
  puVar6[1] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar7 + 1;
    lVar14 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
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
  iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,4);
  if (0 < iVar4) {
    plVar8 = (longlong *)0x0;
    do {
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_res20,plVar13,4);
      plVar9 = (longlong *)operator_new(0x20);
      plVar7 = plVar8;
      if (plVar9 != (longlong *)0x0) {
        plVar9[1] = 0;
        plVar9[2] = 0;
        *plVar9 = (longlong)&PTR_FUN_143f9a6c8;
        local_68 = local_res20;
        plVar9[3] = local_res20;
        plVar7 = plVar9;
      }
      plVar10 = (longlong *)operator_new(0x18);
      plVar9 = plVar8;
      if (plVar10 != (longlong *)0x0) {
        *(undefined4 *)(plVar10 + 1) = 1;
        *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
        *plVar10 = (longlong)&PTR_FUN_143f7de48;
        plVar10[2] = (longlong)plVar7;
        plVar9 = plVar10;
      }
      plVar10 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar10 = plVar8;
      }
      if (plVar10 != (longlong *)0x0) {
        if ((*plVar10 != 0) && (plVar10[1] != 0)) {
          piVar1 = (int *)(plVar10[1] + 8);
          LOCK();
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            *piVar1 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) goto LAB_14051d98d;
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        *plVar10 = (longlong)plVar7;
        plVar11 = (longlong *)plVar10[1];
        if (plVar9 != plVar11) {
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
            UNLOCK();
            plVar11 = (longlong *)plVar10[1];
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
          plVar10[1] = (longlong)plVar9;
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar9 + 1;
          lVar14 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
LAB_14051d98d:
      uVar3 = local_58;
      lVar14 = (longlong)(int)local_58;
      iVar5 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar5);
      if (local_58._4_4_ < iVar5) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_60,uVar3 & 0xffffffff);
      }
      puVar6 = (undefined8 *)(lVar14 * 0x10 + local_60);
      *puVar6 = plVar7;
      puVar6[1] = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar9 + 1;
        lVar14 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      uVar12 = (int)plVar13 + 1;
      plVar13 = (longlong *)(ulonglong)uVar12;
    } while ((int)uVar12 < iVar4);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_60,param_3);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_60);
  return;
}



// FUNCTION 14051da50 FUN_14051da50 body=209 status=ok
// SIG undefined FUN_14051da50(void)

void FUN_14051da50(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(*param_5 + 0x30) = 1;
  FUN_140506340(*param_5 + 0x20,0);
  FUN_14050d540(param_1,*param_5);
  puVar2 = (undefined8 *)operator_new(0x68);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar2,*(undefined8 *)(param_1 + 0x20),0);
    *(undefined1 *)(puVar2 + 5) = 0;
    *puVar2 = &PTR_FUN_143f9af98;
    puVar2[6] = *param_5;
    lVar1 = param_5[1];
    puVar2[7] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = param_3;
    *(undefined4 *)(puVar2 + 0xc) = param_4;
  }
  FUN_1404adba0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x148),puVar2);
  return;
}



// FUNCTION 14051db30 FUN_14051db30 body=220 status=ok
// SIG undefined FUN_14051db30(void)

void FUN_14051db30(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  longlong *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(*param_5 + 0x30) = 1;
  FUN_140506340(*param_5 + 0x20,0);
  FUN_14050d540(param_1,*param_5);
  puVar2 = (undefined8 *)operator_new(0x68);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar2,*(undefined8 *)(param_1 + 0x20),0);
    *(undefined1 *)(puVar2 + 5) = 0;
    *puVar2 = &PTR_FUN_143f9af98;
    puVar2[6] = *param_5;
    lVar1 = param_5[1];
    puVar2[7] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 0xb) = 1;
    *(int *)((longlong)puVar2 + 0x5c) = -(param_4 / 2);
    *(int *)(puVar2 + 0xc) = param_4 / 2;
  }
  FUN_1404adba0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x148),puVar2);
  return;
}



// FUNCTION 14051dc10 FUN_14051dc10 body=402 status=ok
// SIG undefined FUN_14051dc10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14051dc10(longlong param_1,undefined8 *param_2,void *param_3,uint *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int local_res8 [2];
  uint local_28 [2];
  LARGE_INTEGER local_20;
  
  FUN_14052b640();
  if (((*(longlong *)(param_1 + 0x20) != 0) &&
      (cVar2 = (*(code *)**(undefined8 **)*param_2)(), cVar2 != '\0')) &&
     ((*(char *)(param_1 + 0x31) != '\0' || (*(char *)(param_1 + 0x30) != '\0')))) {
    puVar1 = (undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x44) != 0x2000) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1,0x2000);
    }
    local_res8[0] = 0;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                      (*(longlong **)(param_1 + 0x10),local_res8,0,0);
    if ((iVar3 == 0) || (iVar3 == 3)) {
      if (local_res8[0] == 0) {
        *param_4 = 0;
        return 0;
      }
      iVar3 = local_res8[0] + *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x40) = iVar3;
      if (*(int *)(param_1 + 0x44) < iVar3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar1);
      }
      local_28[0] = 0;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                        (*(longlong **)(param_1 + 0x10),CONCAT71((int7)((ulonglong)local_28 >> 8),1)
                         ,*puVar1,*(undefined4 *)(param_1 + 0x40),local_28,0,0,0,0,0);
      QueryPerformanceCounter(&local_20);
      _DAT_146853328 = (double)local_20.QuadPart * DAT_1468b02f8 + 16777216.0;
      if (iVar3 == 0) {
        if (local_28[0] != 0) {
          uVar4 = local_28[0];
          if ((int)*param_4 <= (int)local_28[0]) {
            uVar4 = *param_4;
          }
          *param_4 = uVar4;
          _guard_xfg_dispatch_icall_nop(param_3,(void *)*puVar1,(ulonglong)uVar4);
          return 0;
        }
        *param_4 = 0;
      }
      else {
        *param_4 = 0;
        *(undefined4 *)(param_1 + 0x40) = 0;
        if (*(int *)(param_1 + 0x44) != 0x2000) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar1,0x2000);
        }
      }
    }
  }
  return 0x80004005;
}



// FUNCTION 14051ddb0 FUN_14051ddb0 body=245 status=ok
// SIG undefined FUN_14051ddb0(void)

void FUN_14051ddb0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0xf8))();
  if ((cVar2 != '\0') && ((int)param_1[0x23] != 1)) {
    puVar4 = (undefined8 *)0x0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    puVar3 = (undefined8 *)operator_new(0x58);
    if (puVar3 != (undefined8 *)0x0) {
      FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar3,param_1[0x22],0);
      *puVar3 = &PTR_FUN_143f9c518;
      puVar3[5] = *param_2;
      lVar1 = param_2[1];
      puVar3[6] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar4 = puVar3;
    }
    FUN_1404adba0(*(undefined8 *)(param_1[0x22] + 0x148),puVar4);
    *(undefined4 *)(param_1 + 0x23) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014051de9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1,param_2,2);
  return;
}



// FUNCTION 14051deb0 FUN_14051deb0 body=768 status=ok
// SIG undefined FUN_14051deb0(void)

void FUN_14051deb0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong lStack_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  if ((((param_1[0x22] == 0) || (cVar5 = FUN_140516dc0(), cVar5 == '\0')) ||
      (cVar5 = (**(code **)(*(longlong *)param_1[0x22] + 0xf8))((longlong *)param_1[0x22],param_2),
      cVar5 == '\0')) ||
     (((param_1[0x28] == 0 ||
       (cVar5 = (**(code **)(*(longlong *)param_1[0x27] + 8))(), cVar5 == '\0')) ||
      ((int)param_3[1] < 1)))) {
    puVar6 = (undefined8 *)*param_3;
    puVar7 = puVar6 + (longlong)(int)param_3[1] * 2;
    local_68 = 0;
    local_60 = 0;
    for (; puVar6 != puVar7; puVar6 = puVar6 + 2) {
      local_50 = (longlong *)puVar6[1];
      local_48 = *puVar6;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_40 = (longlong *)0x0;
      lStack_38 = 0;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,&local_50);
      plVar4 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      uVar3 = local_60;
      lVar8 = (longlong)(int)local_60;
      iVar10 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar10);
      if (local_60._4_4_ < iVar10) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_68,uVar3 & 0xffffffff);
      }
      puVar9 = (undefined8 *)(lVar8 * 0x30 + local_68);
      *puVar9 = local_48;
      puVar9[1] = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FString::FString(puVar9 + 2,&lStack_38);
      FString::FString(puVar9 + 4,&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (lStack_38 != 0) {
        FMemory::Free();
      }
      plVar4 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x1c0))(param_1,0,&local_68);
    TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
    ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(&local_68);
  }
  else {
    puVar6 = (undefined8 *)operator_new(0x60);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar6,param_1[0x22],0);
      puVar6[5] = param_1;
      *puVar6 = &PTR_FUN_143f9ba28;
      puVar6[6] = 0;
      iVar10 = (int)param_3[1];
      puVar7 = (undefined8 *)*param_3;
      *(int *)(puVar6 + 7) = iVar10;
      if (iVar10 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar6 + 6,iVar10,0);
        puVar9 = (undefined8 *)puVar6[6];
        do {
          *puVar9 = *puVar7;
          lVar8 = puVar7[1];
          puVar9[1] = lVar8;
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
          }
          puVar9 = puVar9 + 2;
          puVar7 = puVar7 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
    }
    FUN_1404adba0(*(undefined8 *)(param_1[0x22] + 0x148),puVar6);
  }
  return;
}



// FUNCTION 14051e1b0 FUN_14051e1b0 body=314 status=ok
// SIG undefined FUN_14051e1b0(void)

void FUN_14051e1b0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if (((param_1[0x22] != 0) && (cVar2 = FUN_140516dc0(), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0xf8))((longlong *)param_1[0x22],param_2),
     cVar2 == '\0')) {
    if (param_1[0x28] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014051e2ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x110))(param_1,param_2,0,0);
      return;
    }
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
    cVar2 = (**(code **)(*(longlong *)param_1[0x28] + 0x128))((longlong *)param_1[0x28],*puVar3,0);
    if (cVar2 != '\0') {
      TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
      ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
                (param_1 + 0x23);
      puVar3 = (undefined8 *)operator_new(0x40);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar3,param_1[0x22],0);
        puVar3[5] = param_1;
        *puVar3 = &PTR__scalar_deleting_destructor__143f9b990;
        puVar3[6] = *param_2;
        lVar1 = param_2[1];
        puVar3[7] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
      }
      FUN_1404adba0(*(undefined8 *)(param_1[0x22] + 0x148),puVar3);
      return;
    }
  }
  FUN_140511320(param_1,param_2);
  return;
}



// FUNCTION 14051e2f0 FUN_14051e2f0 body=470 status=ok
// SIG undefined FUN_14051e2f0(void)

void FUN_14051e2f0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  longlong local_48 [2];
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20 [3];
  
  if (((param_1[0x13] == 0) || (cVar7 = FUN_140516dc0(), cVar7 == '\0')) ||
     (cVar7 = (**(code **)(*(longlong *)param_1[0x13] + 0xf8))((longlong *)param_1[0x13],param_2),
     cVar7 == '\0')) {
    local_48[0] = 0;
    local_48[1] = 0;
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,6,local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    local_30 = *param_2;
    local_28 = (longlong *)param_2[1];
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    local_38 = param_1;
    FString::FString(local_20,param_3);
    uVar4 = *(undefined8 *)(param_1[0x13] + 0x148);
    puVar8 = (undefined8 *)operator_new(0x40);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_143f76b48;
      QueryPerformanceCounter(&local_res8);
      dVar9 = (double)local_res8.QuadPart * DAT_1468b02f8;
      *puVar8 = &PTR_FUN_143f9e7c0;
      *(undefined1 *)(puVar8 + 2) = 0;
      puVar8[1] = dVar9 + 16777216.0;
      puVar8[3] = local_38;
      puVar8[4] = local_30;
      puVar8[5] = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      FString::FString(puVar8 + 6,local_20);
    }
    FOnlineAsyncTaskManager::AddToInQueue(uVar4,puVar8);
    if (local_20[0] != 0) {
      FMemory::Free();
    }
    plVar6 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014051e476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*local_28 + 8))(local_28,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14051e4d0 FUN_14051e4d0 body=1300 status=ok
// SIG undefined FUN_14051e4d0(void)

void FUN_14051e4d0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong **pplVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_res18 = param_3;
  plVar4 = (longlong *)operator_new(0x20);
  plVar11 = (longlong *)0x0;
  plVar12 = plVar11;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (longlong)&PTR_FUN_143f9a6c8;
    plVar4[3] = 0;
    plVar12 = plVar4;
  }
  operator>>(param_2,plVar12 + 3);
  plVar4 = (longlong *)FUN_1404acbf0(param_2,param_3 + 0x18);
  if (((char)plVar4[2] == '\0') &&
     (lVar5 = (longlong)*(int *)((longlong)plVar4 + 0xc),
     *(int *)((longlong)plVar4 + 0xc) + 4 <= (int)plVar4[1])) {
    lVar3 = *plVar4;
    *(uint *)(param_3 + 0xb0) =
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + lVar3),
                                    *(undefined1 *)(lVar5 + 1 + lVar3)),
                           *(undefined1 *)(lVar5 + 2 + lVar3)),*(undefined1 *)(lVar5 + 3 + lVar3));
    iVar13 = *(int *)((longlong)plVar4 + 0xc);
    *(int *)((longlong)plVar4 + 0xc) = iVar13 + 4;
    if (((char)plVar4[2] != '\0') || ((int)plVar4[1] < iVar13 + 8)) goto LAB_14051e5df;
    lVar5 = (longlong)iVar13 + *plVar4;
    *(uint *)(param_3 + 0xb4) =
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + 4),*(undefined1 *)(lVar5 + 5)),
                           *(undefined1 *)(lVar5 + 6)),*(undefined1 *)(lVar5 + 7));
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 4;
  }
  else {
LAB_14051e5df:
    *(undefined1 *)(plVar4 + 2) = 1;
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar4 = plVar11;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f7de48;
    plVar6[2] = (longlong)plVar12;
    plVar4 = plVar6;
  }
  plVar6 = plVar12 + 1;
  if (plVar12 == (longlong *)0x0) {
    plVar6 = plVar11;
  }
  uVar8 = 0;
  local_68 = plVar12;
  local_60 = plVar4;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar13 = *piVar1;
      if (iVar13 == 0) {
        *piVar1 = 0;
        iVar13 = 0;
      }
      UNLOCK();
      if (0 < iVar13) goto LAB_14051e6d5;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar12;
    plVar9 = (longlong *)plVar6[1];
    if (plVar4 != plVar9) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)plVar6[1];
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      plVar6[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
LAB_14051e6d5:
  if ((longlong **)(param_3 + 8) != &local_68) {
    *(longlong **)(param_3 + 8) = plVar12;
    local_68 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 0x10,&local_60);
  }
  plVar12 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar4 = (longlong *)operator_new(0x48);
  plVar12 = plVar11;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f9a7a8;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[5] = (longlong)&PTR_FUN_143f9a6c8;
    plVar4[8] = 0;
    plVar12 = plVar4;
  }
  uVar7 = FName::FName(local_res10,L"WINDOWS",1);
  plVar4 = (longlong *)FUN_1419c6b80(uVar7);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x70))(plVar4,local_48,0,0);
  local_70 = (longlong *)plVar4[1];
  local_78 = *plVar4;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  plVar4 = plVar12 + 1;
  if (plVar4 != &local_78) {
    *plVar4 = local_78;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar12 + 2,&local_70);
  }
  plVar6 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_70 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
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
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar4 = (longlong *)*plVar4;
  if ((char)param_2[2] == '\0') {
    iVar13 = *(int *)((longlong)param_2 + 0xc) + 4;
    if ((int)param_2[1] < iVar13) goto LAB_14051e8a6;
    puVar10 = (undefined1 *)((longlong)*(int *)((longlong)param_2 + 0xc) + *param_2);
    uVar8 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
    *(int *)((longlong)param_2 + 0xc) = iVar13;
  }
  else {
LAB_14051e8a6:
    *(undefined1 *)(param_2 + 2) = 1;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,uVar8);
  uVar8 = 0;
  if ((char)param_2[2] == '\0') {
    iVar13 = *(int *)((longlong)param_2 + 0xc) + 4;
    if (iVar13 <= (int)param_2[1]) {
      puVar10 = (undefined1 *)((longlong)*(int *)((longlong)param_2 + 0xc) + *param_2);
      uVar8 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
      *(int *)((longlong)param_2 + 0xc) = iVar13;
      goto LAB_14051e8fc;
    }
  }
  *(undefined1 *)(param_2 + 2) = 1;
LAB_14051e8fc:
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar8);
  operator>>(param_2,plVar12 + 8);
  plVar4 = (longlong *)operator_new(0x18);
  lVar5 = local_res18;
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f3f2d0;
    plVar4[2] = (longlong)plVar12;
    plVar11 = plVar4;
  }
  pplVar2 = (longlong **)(local_res18 + 0xa0);
  local_58 = plVar12;
  local_50 = plVar11;
  SharedPointerInternals::EnableSharedFromThis(&local_58,plVar12,plVar12);
  if (pplVar2 != &local_58) {
    *pplVar2 = plVar12;
    local_58 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar5 + 0xa8,&local_50);
    plVar11 = local_50;
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar3 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  FUN_1404f28c0(param_1,param_2,lVar5 + 0x28);
  return;
}



// FUNCTION 14051ea00 FUN_14051ea00 body=413 status=ok
// SIG undefined FUN_14051ea00(void)

ulonglong FUN_14051ea00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                       longlong param_5,int param_6)

{
  undefined8 *puVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  ulonglong in_RAX;
  short *psVar5;
  short *psVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *local_38 [2];
  
  if (param_6 != 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  sVar3 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  lVar9 = *(longlong *)(param_1 + 0x20);
  FUN_14052a1d0(lVar9);
  psVar6 = *(short **)(lVar9 + 0x4618);
  if (*(short **)(lVar9 + 0x4618) == (short *)0x0) {
    psVar6 = (short *)(lVar9 + 0x198);
  }
  psVar5 = psVar6 + (longlong)*(int *)(lVar9 + 0x4620) * 0x224;
  while( true ) {
    if (psVar6 == psVar5) {
      *param_4 = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x4630) = 7;
      return 0;
    }
    if (*psVar6 == sVar3) break;
    psVar6 = psVar6 + 0x224;
  }
  uVar4 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  FUN_140511b90(*(undefined8 *)(param_1 + 0x20),uVar4,param_2,param_3,param_4,param_5);
  lVar9 = *(longlong *)(param_1 + 0x20);
  puVar1 = (undefined8 *)(param_5 + 8);
  lVar7 = *(longlong *)(lVar9 + 0x108);
  lVar8 = (longlong)*(int *)(lVar9 + 0x110) * 0x20 + lVar7;
  if (lVar7 != lVar8) {
    do {
      cVar2 = (**(code **)*puVar1)(puVar1,lVar7);
      if (cVar2 != '\0') {
        FUN_14051f780(lVar9 + 0x108,puVar1);
        local_38[0] = puVar1;
        FUN_1404f6cc0(lVar9 + 0x198,local_38);
        *param_4 = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x4630) = 0x34;
        return 0;
      }
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar8);
    lVar9 = *(longlong *)(param_1 + 0x20);
  }
  *(undefined4 *)(lVar9 + 0x4630) = 0;
  return 1;
}



// FUNCTION 14051eba0 FUN_14051eba0 body=350 status=ok
// SIG undefined FUN_14051eba0(void)

void FUN_14051eba0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  char local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_68;
  undefined1 local_64 [4];
  undefined ***local_60;
  undefined ***local_58;
  int *local_50;
  longlong local_48 [2];
  undefined **local_38;
  undefined **local_30;
  undefined8 local_28;
  longlong *plStack_20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_38 = &PTR_FUN_143f9a840;
  local_30 = &PTR_FUN_143f9a6c8;
  local_18 = 0;
  local_10 = 0;
  local_res10[0] = '\0';
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)*param_2 + 0x68))((longlong *)*param_2,local_48,0);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar4;
  }
  FUN_1405213f0(&local_38,puVar6,local_res10);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_res10[0] != '\0') {
    cVar3 = (*(code *)local_30[4])(&local_30);
    if (cVar3 != '\0') {
      plVar7 = (longlong *)(param_1 + 0xb8);
      FUN_14050d080(plVar7,local_res18,&local_30);
      if ((local_res18[0] == -1) || (lVar5 = (longlong)local_res18[0] * 0x30 + *plVar7, lVar5 == 0))
      {
        local_60 = &local_30;
        FUN_1404f5990(plVar7,local_res20,&local_60,0);
        lVar5 = (longlong)local_res20[0] * 0x30 + *plVar7;
      }
      local_68 = *(int *)(lVar5 + 0x20) + 1;
      local_58 = &local_30;
      local_50 = &local_68;
      FUN_1404f5f10(plVar7,local_64,&local_58,0);
    }
  }
  local_30 = &PTR_FUN_143f73cd8;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_20 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plStack_20 != (longlong *)0x0)) {
      (**(code **)(*plStack_20 + 8))(plStack_20,1);
    }
  }
  return;
}



// FUNCTION 14051ed00 FUN_14051ed00 body=550 status=ok
// SIG undefined FUN_14051ed00(void)

void FUN_14051ed00(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 *local_38;
  longlong *local_30;
  
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0xa0) == 0) {
    return;
  }
  if (param_1[0x70] == 0) {
    return;
  }
  puVar4 = (undefined8 *)operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)
             (**(code **)(*(longlong *)param_1[0x70] + 0x10))((longlong *)param_1[0x70],local_res10)
    ;
    local_res18 = *puVar5;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_143f9a6c8;
    puVar4[3] = local_res18;
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar8 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f7de48;
    plVar6[2] = (longlong)puVar4;
    plVar8 = plVar6;
  }
  plVar6 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    plVar6 = (longlong *)0x0;
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
      if (0 < iVar3) goto LAB_14051ee72;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)puVar4;
    plVar7 = (longlong *)plVar6[1];
    if (plVar8 != plVar7) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar6[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
LAB_14051ee72:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_38 = puVar4;
  local_30 = plVar8;
  (**(code **)(*param_1 + 0x2d0))(param_1,*(undefined8 *)(param_2 + 0xb8),&local_38);
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_30)(local_30);
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
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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



// FUNCTION 14051ef30 FUN_14051ef30 body=150 status=ok
// SIG undefined FUN_14051ef30(void)

bool FUN_14051ef30(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = -0x7fffbffb;
  if (param_1[0xc] != 0) {
    cVar2 = (**(code **)(*(longlong *)param_1[7] + 0xf8))();
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1,param_2);
      plVar1 = (longlong *)param_1[9];
      if (plVar1 == (longlong *)0x0) {
        *(undefined1 *)(param_1[0xc] + 0x10) = 0;
      }
      else if (*(char *)(param_1[0xc] + 0x10) == '\0') {
        iVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
        if (iVar3 == 0) {
          *(undefined1 *)(param_1[0xc] + 0x10) = 1;
          iVar3 = (**(code **)(*(longlong *)param_1[9] + 0x10))((longlong *)param_1[9],param_2);
        }
      }
      else {
        iVar3 = 0;
      }
    }
  }
  return iVar3 == 0;
}



// FUNCTION 14051efd0 FUN_14051efd0 body=186 status=ok
// SIG undefined FUN_14051efd0(void)

undefined8 FUN_14051efd0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return 0x80004005;
  }
  local_10 = (longlong *)param_2[1];
  local_18 = *param_2;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x20) != &local_18) {
    *(undefined8 *)(param_1 + 0x20) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_10);
  }
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
  return 0;
}



// FUNCTION 14051f090 FUN_14051f090 body=361 status=ok
// SIG undefined FUN_14051f090(void)

void FUN_14051f090(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong *plVar8;
  
  uVar7 = 2;
  if (((param_1[0x51] != 0) && (lVar5 = FUN_140511190(), uVar7 = 2, lVar5 != 0)) &&
     (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0xa0) + 0x20))(), cVar3 != '\0')) {
    uVar1 = *param_3;
    plVar8 = (longlong *)(lVar5 + 0xf0);
    iVar4 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
            IndexOfByPredicate<FUniqueNetIdMatcher>(plVar8,uVar1);
    if (iVar4 == -1) {
      iVar4 = *(int *)(lVar5 + 0xf8);
      *(int *)(lVar5 + 0xf8) = iVar4 + 1;
      if (*(int *)(lVar5 + 0xfc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar4);
      }
      puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar8);
      *puVar6 = *param_3;
      lVar2 = param_3[1];
      puVar6[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      *(int *)(lVar5 + 0xb4) = *(int *)(lVar5 + 0x30) - *(int *)(lVar5 + 0xf8);
      cVar3 = (**(code **)(*(longlong *)param_1[0x51] + 0xf8))((longlong *)param_1[0x51],param_3);
      if ((cVar3 == '\0') && (*(int *)(lVar5 + 0x110) == 4)) {
        plVar8 = (longlong *)(lVar5 + 0x100);
        iVar4 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
                IndexOfByPredicate<FUniqueNetIdMatcher>(plVar8,uVar1);
        if (iVar4 == -1) {
          iVar4 = *(int *)(lVar5 + 0x108);
          *(int *)(lVar5 + 0x108) = iVar4 + 1;
          if (*(int *)(lVar5 + 0x10c) < iVar4 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar4);
          }
          puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar8);
          *puVar6 = *param_3;
          lVar5 = param_3[1];
          puVar6[1] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
        }
      }
    }
    uVar7 = 1;
  }
  (**(code **)(*param_1 + 0x2f0))(param_1,param_2,param_3,uVar7);
  return;
}



// FUNCTION 14051f200 FUN_14051f200 body=317 status=ok
// SIG undefined FUN_14051f200(void)

bool FUN_14051f200(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_18;
  longlong *local_10;
  
  iVar5 = -0x7fffbffb;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar6 = FUN_14050d940();
    if (lVar6 == 0) {
      iVar5 = *(int *)(param_1 + 0x78);
      iVar4 = iVar5 + 1;
      *(int *)(param_1 + 0x78) = iVar4;
      if (*(int *)(param_1 + 0x7c) < iVar4) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x70);
      }
      lVar6 = *(longlong *)(param_1 + 0x70);
      lVar7 = (longlong)iVar5 * 0x38;
      *(undefined8 *)(lVar7 + lVar6) = 0;
      *(undefined8 *)(lVar7 + 8 + lVar6) = 0;
      *(undefined8 *)(lVar7 + 0x10 + lVar6) = 0;
      *(undefined8 *)(lVar7 + 0x18 + lVar6) = 0;
      *(undefined8 *)(lVar7 + 0x20 + lVar6) = 0;
      *(undefined8 *)(lVar7 + 0x28 + lVar6) = 0;
      *(undefined8 *)(lVar7 + 0x30 + lVar6) = 0;
      local_18 = *param_2;
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar7);
      local_10 = (longlong *)param_2[1];
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      if (puVar8 != &local_18) {
        *puVar8 = local_18;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(puVar8 + 1,&local_10);
      }
      plVar3 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x40))(*(longlong **)(param_1 + 0x48),param_2);
    }
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
                      (*(longlong **)(param_1 + 0x48),param_2);
  }
  return iVar5 == 0;
}



// FUNCTION 14051f340 Rehash body=538 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FUniqueNetIdSteam,int>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,int,0>,FDefaultSetAllocator>
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
  ulonglong uVar11;
  uint *puVar12;
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
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14051f47f;
        uVar8 = puVar12[lVar5 + 1];
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
LAB_14051f47f:
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
        lVar5 = (longlong)iStack_1c * 0x30 + *param_1;
        uVar8 = (int)((ulonglong)*(undefined8 *)(lVar5 + 0x18) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(lVar5 + 0x18) & (int)*plVar2 - 1U;
        *(uint *)(lVar5 + 0x2c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar5 + 0x28) =
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



// FUNCTION 14051f560 Rehash body=534 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FUniqueNetIdSteam,TArray<FOnlineAchievement,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,TArray<FOnlineAchievement,FDefaultAllocator>,0>,FDefaultSetAllocator>
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
  ulonglong uVar11;
  uint *puVar12;
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
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14051f69f;
        uVar8 = puVar12[lVar5 + 1];
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
LAB_14051f69f:
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
        lVar5 = (longlong)iStack_1c * 0x38 + *param_1;
        uVar8 = (int)((ulonglong)*(undefined8 *)(lVar5 + 0x18) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(lVar5 + 0x18) & (int)*plVar2 - 1U;
        *(uint *)(lVar5 + 0x34) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar5 + 0x30) =
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



// FUNCTION 14051f780 FUN_14051f780 body=346 status=ok
// SIG undefined FUN_14051f780(void)

int FUN_14051f780(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar2 = (int)param_1[1];
  if (iVar2 == 0) {
    return 0;
  }
  iVar9 = 0;
  cVar5 = (**(code **)*param_2)(param_2,*param_1);
  bVar10 = cVar5 == '\0';
  iVar8 = 0;
  do {
    iVar4 = iVar8;
    do {
      iVar4 = iVar4 + 1;
      if (iVar2 <= iVar4) break;
      cVar5 = (**(code **)*param_2)(param_2,(longlong)iVar4 * 0x20 + *param_1);
    } while (bVar10 == (cVar5 == '\0'));
    iVar7 = iVar4 - iVar8;
    if (bVar10 == false) {
      puVar6 = (undefined8 *)((longlong)iVar8 * 0x20 + *param_1);
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar6 = &PTR_FUN_143f73cd8;
        plVar3 = (longlong *)puVar6[2];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar8 == 1) && (plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        puVar6 = puVar6 + 4;
      }
    }
    else {
      if (iVar9 != iVar8) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar9 * 0x20 + *param_1),
                   (void *)((longlong)iVar8 * 0x20 + *param_1),(longlong)iVar7 << 5);
      }
      iVar9 = iVar9 + iVar7;
    }
    bVar10 = (bool)(bVar10 ^ 1);
    iVar8 = iVar4;
    if (iVar2 <= iVar4) {
      *(int *)(param_1 + 1) = iVar9;
      return iVar2 - iVar9;
    }
  } while( true );
}



// FUNCTION 14051f8e0 FUN_14051f8e0 body=387 status=ok
// SIG undefined FUN_14051f8e0(void)

undefined8 FUN_14051f8e0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int *piVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar8 = (longlong)
          (int)((int)((ulonglong)param_2[3] >> 0x20) * 0x17 + (int)param_2[3] & (int)param_1[9] - 1U
               );
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar9 = (int *)((longlong)plVar5 + lVar8 * 4);
  iVar1 = *(int *)((longlong)plVar5 + lVar8 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar8 = (longlong)iVar1 * 0x30 + *param_1;
    cVar4 = (**(code **)*param_2)(param_2,lVar8);
    if (cVar4 != '\0') break;
    iVar1 = *(int *)(lVar8 + 0x28);
    piVar9 = (int *)(lVar8 + 0x28);
  }
  iVar1 = *piVar9;
  lVar8 = (longlong)iVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar3 + 0x2c + lVar8 * 0x30));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar9 = (int *)((longlong)plVar5 + lVar6 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar9 = *(int *)(lVar3 + 0x28 + lVar8 * 0x30);
        break;
      }
      piVar9 = (int *)(lVar3 + 0x28 + (longlong)iVar2 * 0x30);
      iVar2 = *piVar9;
    }
  }
  puVar7 = (undefined8 *)(lVar8 * 0x30 + *param_1);
  *puVar7 = &PTR_FUN_143f73cd8;
  plVar5 = (longlong *)puVar7[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar9 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 14051fa70 FUN_14051fa70 body=207 status=ok
// SIG undefined FUN_14051fa70(void)

void FUN_14051fa70(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar2 + 0x2c + lVar7 * 0x30));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar6 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar6 = *(int *)(lVar2 + 0x28 + lVar7 * 0x30);
        break;
      }
      piVar6 = (int *)(lVar2 + 0x28 + (longlong)iVar1 * 0x30);
      iVar1 = *piVar6;
    }
  }
  puVar5 = (undefined8 *)(lVar7 * 0x30 + *param_1);
  *puVar5 = &PTR_FUN_143f73cd8;
  plVar3 = (longlong *)puVar5[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar6 = (int *)((longlong)plVar3 + 0xc);
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 14051fb40 FUN_14051fb40 body=196 status=ok
// SIG undefined FUN_14051fb40(void)

void FUN_14051fb40(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar7 = (longlong)param_2 * 0x38;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar7 + 0x34 + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar6 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar6 = *(int *)(lVar7 + 0x30 + lVar2);
        break;
      }
      piVar6 = (int *)(lVar2 + 0x30 + (longlong)iVar1 * 0x38);
      iVar1 = *piVar6;
    }
  }
  puVar5 = (undefined8 *)((longlong)param_2 * 0x38 + *param_1);
  *puVar5 = &PTR_FUN_143f73cd8;
  plVar3 = (longlong *)puVar5[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar6 = (int *)((longlong)plVar3 + 0xc);
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 14051fc10 FUN_14051fc10 body=269 status=ok
// SIG undefined FUN_14051fc10(void)

void FUN_14051fc10(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x28);
    iVar6 = param_3;
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      plVar3 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x28),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x28),(longlong)iVar5 * 0x28);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14051fd20 FUN_14051fd20 body=311 status=ok
// SIG undefined FUN_14051fd20(void)

void FUN_14051fd20(longlong param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (param_3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x4480);
    if (*(longlong *)(param_1 + 0x4480) == 0) {
      lVar4 = param_1;
    }
    puVar5 = (undefined8 *)(lVar4 + 0x10 + (longlong)param_2 * 0x448);
    iVar6 = param_3;
    do {
      *puVar5 = &PTR_FUN_143f73cd8;
      plVar2 = (longlong *)puVar5[2];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      puVar5[-1] = &PTR_FUN_143f9a360;
      puVar5 = puVar5 + 0x89;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = *(int *)(param_1 + 0x4488);
    iVar3 = (iVar6 - param_2) - param_3;
    if (iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x4480);
      if (*(longlong *)(param_1 + 0x4480) == 0) {
        lVar4 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar4 + (longlong)param_2 * 0x448),
                 (void *)((longlong)(param_2 + param_3) * 0x448 + lVar4),(longlong)iVar3 * 0x448);
      iVar6 = *(int *)(param_1 + 0x4488);
    }
    *(int *)(param_1 + 0x4488) = iVar6 - param_3;
    if (param_4 != '\0') {
      FUN_140520280(param_1);
    }
  }
  return;
}



// FUNCTION 14051fe60 RemoveAtImpl body=249 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x10);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(param_2 + param_3) * 0x10 + *param_1),(longlong)iVar5 << 4);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14051ff60 FUN_14051ff60 body=155 status=ok
// SIG undefined FUN_14051ff60(void)

void FUN_14051ff60(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  }
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x2b8) + 0xb8);
    uVar4 = uVar3;
    do {
      if (*plVar2 == param_2) {
        FUN_1404f31b0(param_1 + 0x2b8,uVar4,1,1);
        break;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 0x23;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x2c0));
  }
                    /* WARNING: Could not recover jumptable at 0x00014051fff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return;
}



// FUNCTION 140520000 FUN_140520000 body=161 status=ok
// SIG undefined FUN_140520000(void)

void FUN_140520000(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x4480);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x448);
    pvVar1 = *(void **)((longlong)param_1 + 0x4480);
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
        *(void **)((longlong)param_1 + 0x4480) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x448);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x4480) = uVar2;
  return;
}



// FUNCTION 1405200b0 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<`anonymous_namespace'::FLogCategoryPtrs,FDefaultAllocator>::ResizeGrow
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



// FUNCTION 140520140 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x78,0);
  iVar4 = (int)(uVar3 / 0x78);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x78,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1405201d0 FUN_1405201d0 body=166 status=ok
// SIG undefined FUN_1405201d0(void)

void FUN_1405201d0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x4488);
  if (uVar1 < 0x11) {
    uVar5 = 0x10;
  }
  else {
    lVar3 = 4;
    if ((*(int *)(param_1 + 0x448c) != 0) || (4 < uVar1)) {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar4 = FMemory::QuantizeSize(lVar3 * 0x448,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    lVar3 = SUB168(ZEXT816(0xde5d6e3f8868a471) * auVar2,8);
    uVar4 = (uVar4 - lVar3 >> 1) + lVar3 >> 10;
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x448c) = (int)uVar5;
  FUN_140520000(param_1,param_2,uVar5,0x448);
  return;
}



// FUNCTION 140520280 FUN_140520280 body=185 status=ok
// SIG undefined FUN_140520280(void)

void FUN_140520280(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x4488);
  uVar5 = (ulonglong)(int)uVar1;
  uVar3 = *(uint *)(param_1 + 0x448c);
  if (uVar1 < 0x11) {
    uVar5 = 0x10;
    goto LAB_14052030e;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar1) * 0x448)) ||
     ((int)(uVar1 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar1) {
      if (0 < (int)uVar1) {
        uVar5 = FMemory::QuantizeSize(uVar5 * 0x448,0);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar5;
        lVar4 = SUB168(ZEXT816(0xde5d6e3f8868a471) * auVar2,8);
        uVar3 = *(uint *)(param_1 + 0x448c);
        uVar5 = (uVar5 - lVar4 >> 1) + lVar4 >> 10;
      }
      goto LAB_14052030e;
    }
    if (uVar1 == 0) goto LAB_14052030e;
  }
  uVar5 = (ulonglong)uVar3;
LAB_14052030e:
  if ((uint)uVar5 != uVar3) {
    *(uint *)(param_1 + 0x448c) = (uint)uVar5;
    FUN_140520000(param_1,*(undefined4 *)(param_1 + 0x4488),uVar5,0x448);
    return;
  }
  return;
}



// FUNCTION 140520340 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FPakPrecacher::FPakData,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0xc0) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0xc0,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
        iVar4 = (int)(uVar3 / 0xc0);
      }
      goto LAB_1405203b6;
    }
    if (iVar4 == 0) goto LAB_1405203b6;
  }
  iVar4 = iVar5;
LAB_1405203b6:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xc0,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1405203f0 ResizeTo body=120 status=ok
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



// FUNCTION 140520470 ResizeTo body=112 status=ok
// SIG undefined ResizeTo(void)

void TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x78,0);
    iVar3 = (int)(uVar1 / 0x78);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x78,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1405204e0 FUN_1405204e0 body=135 status=ok
// SIG undefined FUN_1405204e0(void)

void FUN_1405204e0(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar3 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x448,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      lVar4 = SUB168(ZEXT816(0xde5d6e3f8868a471) * auVar1,8);
      iVar3 = (int)((uVar2 - lVar4 >> 1) + lVar4 >> 10);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x448c)) {
    *(int *)(param_1 + 0x448c) = iVar3;
    FUN_140520000(param_1,*(undefined4 *)(param_1 + 0x4488),iVar3,0x448);
  }
  return;
}



// FUNCTION 140520570 FUN_140520570 body=370 status=ok
// SIG undefined FUN_140520570(void)

void FUN_140520570(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[0xe] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001405206de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,2);
    return;
  }
  lVar4 = (longlong)(int)param_2[1];
  if (0 < lVar4) {
    lVar5 = 0;
    do {
      iVar1 = (int)param_1[0xe];
      lVar2 = *param_2;
      *(int *)(param_1 + 0xe) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x74) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xd,iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[0xd]);
      *puVar3 = *(undefined8 *)(lVar2 + lVar5);
      lVar2 = *(longlong *)(lVar2 + 8 + lVar5);
      puVar3[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar3 = (undefined8 *)operator_new(0x68);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        lVar2 = *param_2;
        FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar3,param_1[4],0);
        *(undefined1 *)(puVar3 + 5) = 0;
        *puVar3 = &PTR_FUN_143f9aed8;
        puVar3[6] = *(undefined8 *)(lVar2 + lVar5);
        lVar2 = *(longlong *)(lVar2 + 8 + lVar5);
        puVar3[7] = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        puVar3[8] = *param_3;
        lVar2 = param_3[1];
        puVar3[9] = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        *(uint *)(puVar3 + 0xc) = *(uint *)(puVar3 + 0xc) & 0xff0fffff;
        *(undefined1 *)((longlong)puVar3 + 99) = 0;
        *(uint *)(puVar3 + 0xc) = *(uint *)(puVar3 + 0xc) & 0xfff00000;
        *(undefined4 *)((longlong)puVar3 + 0x5c) = 0;
      }
      FUN_1404adba0(*(undefined8 *)(param_1[4] + 0x148),puVar3);
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 140520730 FUN_140520730 body=15 status=ok
// SIG undefined FUN_140520730(void)

void FUN_140520730(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014052073b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))((longlong)*(int *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x10));
  return;
}



// FUNCTION 140520740 FUN_140520740 body=11 status=ok
// SIG undefined FUN_140520740(void)

void FUN_140520740(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140520747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 140520750 FUN_140520750 body=7 status=ok
// SIG undefined FUN_140520750(void)

void FUN_140520750(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140520753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



// FUNCTION 140520760 FUN_140520760 body=142 status=ok
// SIG undefined FUN_140520760(void)

void FUN_140520760(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (undefined8 *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  *local_18 = *param_4;
  lVar1 = param_4[1];
  local_18[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x1e0))(param_1,param_2,param_3,&local_18);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 1405207f0 FUN_1405207f0 body=254 status=ok
// SIG undefined FUN_1405207f0(void)

void FUN_1405207f0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = 2;
  lVar4 = FUN_140511190(param_1,param_3);
  if ((((lVar4 != 0) && (lVar1 = *(longlong *)(lVar4 + 0xa0), lVar1 != 0)) &&
      (*(char *)(lVar4 + 0x3a) == '\0')) &&
     (((cVar3 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))(lVar1 + 0x28), cVar3 != '\0' &&
       (*(char *)(lVar4 + 0x3d) != '\0')) &&
      ((*(int *)(lVar4 + 0xf8) < *(int *)(lVar4 + 0x30) && (iVar6 = 0, 0 < (int)param_4[1])))))) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + *param_4);
      puVar5 = (undefined8 *)
               SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760);
      cVar3 = (**(code **)(*(longlong *)*puVar5 + 0x80))
                        ((longlong *)*puVar5,*(undefined8 *)(lVar1 + 0x40),
                         *(undefined8 *)(lVar2 + 0x18));
      lVar4 = lVar4 + 0x10;
      if (cVar3 != '\0') {
        uVar7 = 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_4[1]);
  }
  (**(code **)(*param_1 + 0x200))(param_1,param_3,uVar7);
  return;
}



// FUNCTION 1405208f0 FUN_1405208f0 body=275 status=ok
// SIG undefined FUN_1405208f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1405208f0(longlong param_1,void *param_2,int param_3,int *param_4,longlong param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_68 [48];
  ulonglong local_38;
  undefined2 auStack_30 [4];
  
  puVar10 = auStack_68;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_38;
  puVar11 = auStack_68;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar6 = (*(code *)**(undefined8 **)(param_1 + 0x30))((undefined8 *)(param_1 + 0x30),param_5 + 8)
    ;
    puVar11 = auStack_68;
    if (cVar6 == '\0') {
      uVar1 = *(undefined2 *)(param_5 + 0x28);
      if (param_3 + 4 == 0) {
        puVar9 = (undefined2 *)0x0;
      }
      else {
        uVar7 = (ulonglong)(param_3 + 0x13U) + 0xf;
        if (uVar7 <= param_3 + 0x13U) {
          uVar7 = 0xffffffffffffff0;
        }
        puVar10 = auStack_68 + -(uVar7 & 0xfffffffffffffff0);
        puVar9 = (undefined2 *)((longlong)auStack_30 + -(uVar7 & 0xfffffffffffffff0));
      }
      *puVar9 = *(undefined2 *)(param_1 + 0x50);
      puVar9[1] = uVar1;
      *(undefined8 *)(puVar10 + -8) = 0x1405209ac;
      _guard_xfg_dispatch_icall_nop(puVar9 + 2,param_2,(longlong)param_3);
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      uVar2 = *(undefined4 *)(param_1 + 0x58);
      uVar8 = *(undefined8 *)(param_5 + 0x20);
      *(undefined4 *)(puVar10 + 0x28) = 0;
      puVar4 = (undefined8 *)*puVar3;
      *(undefined4 *)(puVar10 + 0x20) = uVar2;
      pcVar5 = (code *)*puVar4;
      *(undefined8 *)(puVar10 + -8) = 0x1405209cf;
      cVar6 = (*pcVar5)(puVar3,uVar8,puVar9,param_3 + 4);
      puVar11 = puVar10;
      if (cVar6 != '\0') {
        *param_4 = param_3;
        uVar8 = 1;
        goto LAB_1405209dd;
      }
    }
  }
  uVar8 = 0;
LAB_1405209dd:
  *(undefined8 *)(puVar11 + -8) = 0x1405209e9;
  return uVar8;
}



// FUNCTION 140520a10 FUN_140520a10 body=1099 status=ok
// SIG undefined FUN_140520a10(void)

void FUN_140520a10(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong local_res10;
  longlong *local_38;
  longlong *local_30;
  
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    puVar8 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar4 = *(undefined8 **)param_2[1];
    if ((undefined8 *)((longlong *)param_2[1])[1] < puVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,puVar8,8);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,puVar8,8);
      }
    }
    else {
      *puVar8 = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
    puVar2 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x18,1);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar2 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x19,1);
    }
    else {
      *(undefined1 *)(param_1 + 0x19) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar3 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x30,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x30,2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x30) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
                    /* WARNING: Could not recover jumptable at 0x000140520e57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x50))
              (param_2,*(undefined8 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x30));
    return;
  }
  plVar12 = (longlong *)param_2[1];
  if ((longlong *)plVar12[1] < (longlong *)*plVar12 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_res10,8);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&local_res10,8);
    }
  }
  else {
    local_res10 = *(longlong *)*plVar12;
    *plVar12 = *plVar12 + 8;
  }
  plVar6 = (longlong *)operator_new(0x20);
  plVar10 = (longlong *)0x0;
  iVar11 = 0;
  plVar12 = plVar10;
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (longlong)&PTR_FUN_143f9a6c8;
    plVar6[3] = local_res10;
    plVar12 = plVar6;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar6 = plVar10;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f7de48;
    plVar7[2] = (longlong)plVar12;
    plVar6 = plVar7;
  }
  plVar7 = plVar12 + 1;
  if (plVar12 == (longlong *)0x0) {
    plVar7 = plVar10;
  }
  local_38 = plVar12;
  local_30 = plVar6;
  if (plVar7 != (longlong *)0x0) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar1 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (0 < iVar9) goto LAB_140520bae;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar12;
    plVar10 = (longlong *)plVar7[1];
    if (plVar6 != plVar10) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar10 = (longlong *)plVar7[1];
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      plVar7[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar6 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
LAB_140520bae:
  if ((longlong **)(param_1 + 8) != &local_38) {
    *(longlong **)(param_1 + 8) = plVar12;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_30);
  }
  plVar12 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x18,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x19,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x19) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x30,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x30,2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x30) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  if (*(ushort *)(param_1 + 0x30) < 0x2001) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(uint *)(param_1 + 0x2c) != (uint)*(ushort *)(param_1 + 0x30)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x20);
      iVar11 = *(int *)(param_1 + 0x28);
    }
    iVar9 = (uint)*(ushort *)(param_1 + 0x30) + iVar11;
    *(int *)(param_1 + 0x28) = iVar9;
    if (*(int *)(param_1 + 0x2c) < iVar9) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar11);
    }
    (**(code **)(*param_2 + 0x50))
              (param_2,*(undefined8 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x30));
  }
  else {
    *(undefined2 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 140520e60 FUN_140520e60 body=274 status=ok
// SIG undefined FUN_140520e60(void)

undefined8 * FUN_140520e60(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  short sVar5;
  longlong lVar6;
  longlong *local_18;
  longlong *local_10;
  
  lVar6 = operator_new(0x38);
  if (lVar6 == 0) {
    local_18 = (longlong *)0x0;
  }
  else {
    local_18 = (longlong *)FUN_1404f8750(lVar6);
  }
  local_10 = (longlong *)operator_new(0x18);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = (longlong)local_18;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  (**(code **)(*local_18 + 0x38))(local_18,param_3);
  if ((*(char *)(param_3 + 0x28) < '\0') || (sVar5 = (**(code **)(*local_18 + 0x10))(), sVar5 == 0))
  {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = local_18;
    param_2[1] = local_10;
    if (local_10 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return param_2;
}



// FUNCTION 140520f80 FUN_140520f80 body=568 status=ok
// SIG undefined FUN_140520f80(void)

undefined8 FUN_140520f80(undefined8 param_1,int *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  undefined8 local_res8;
  longlong local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  local_res8 = param_1;
  switch(*param_2 + -1) {
  case 0:
    puVar2 = (undefined8 *)FName::ToString(&local_res8,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
      pwVar3 = L"%s_i";
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
      pwVar3 = L"%s_i";
    }
    break;
  case 1:
    puVar2 = (undefined8 *)FName::ToString(&local_res8,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
      pwVar3 = L"%s_u";
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
      pwVar3 = L"%s_u";
    }
    break;
  case 2:
    puVar2 = (undefined8 *)FName::ToString(&local_res8,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
      pwVar3 = L"%s_l";
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
      pwVar3 = L"%s_l";
    }
    break;
  case 3:
    puVar2 = (undefined8 *)FName::ToString(&local_res8,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
      pwVar3 = L"%s_q";
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
      pwVar3 = L"%s_q";
    }
    break;
  case 4:
    puVar2 = (undefined8 *)FName::ToString(&local_res8,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
      pwVar3 = L"%s_d";
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
      pwVar3 = L"%s_d";
    }
    break;
  case 5:
    puVar2 = (undefined8 *)FName::ToString(&local_res8,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
      pwVar3 = L"%s_s";
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
      pwVar3 = L"%s_s";
    }
    break;
  case 6:
    puVar2 = (undefined8 *)FName::ToString(&local_res8,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
      pwVar3 = L"%s_f";
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
      pwVar3 = L"%s_f";
    }
    break;
  default:
    return 0;
  case 8:
    puVar2 = (undefined8 *)FName::ToString(&local_res8,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
    }
    pwVar3 = L"%s_b";
  }
  FString::PrintfImpl(&local_28,pwVar3,puVar4);
  if (param_3 == &local_28) {
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_20;
    uVar1 = local_20._4_4_;
    local_20 = 0;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar1;
    local_28 = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1405211e0 FUN_1405211e0 body=40 status=ok
// SIG undefined FUN_1405211e0(void)

undefined8 FUN_1405211e0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xa0))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140521210 FUN_140521210 body=467 status=ok
// SIG undefined FUN_140521210(void)

undefined8 FUN_140521210(longlong param_1,int param_2,float param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  if (1 < param_2 - 1U) {
    return 0;
  }
  plVar1 = (longlong *)(param_1 + 0x48);
  puStack_28 = (uint *)(param_1 + 0x58);
  *(float *)(param_1 + 0xb0) = param_3 * 1.5;
  iVar2 = *(int *)(param_1 + 0x70);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar5 = *puVar7;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar5 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar5;
      if (bVar3) goto LAB_1405212ff;
      uVar5 = puVar7[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1405212ff:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x70);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      lVar6 = *(longlong *)((longlong)iStack_5c * 0x38 + 0x28 + *plVar1);
      if (lVar6 != 0) {
        FUN_142351eb0(lVar6,*(undefined4 *)(param_1 + 0xb0));
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return 1;
}



// FUNCTION 1405213f0 FUN_1405213f0 body=557 status=ok
// SIG undefined FUN_1405213f0(void)

void FUN_1405213f0(longlong *param_1,short *param_2,char *param_3)

{
  void *pvVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  wchar_t *pwVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  void *_Src;
  undefined4 in_stack_ffffffffffffff88;
  undefined2 uVar10;
  wchar_t *local_68;
  uint local_60;
  undefined4 local_5c;
  void *local_58;
  ulonglong local_50;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  
  uVar10 = (undefined2)((uint)in_stack_ffffffffffffff88 >> 0x10);
  *param_3 = '\0';
  local_58 = (void *)0x0;
  uVar9 = 0;
  local_50 = (ulonglong)(uint)local_50;
  _Src = (void *)0x0;
  if ((param_2 != (short *)0x0) && (_Src = (void *)0x0, *param_2 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_50 = (ulonglong)uVar7;
    uVar9 = uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      uVar9 = (uint)local_50;
    }
    _Src = local_58;
    FGenericPlatformString::Memcpy(local_58,param_2,(longlong)(int)uVar7 * 2);
  }
  local_68 = (wchar_t *)0x0;
  local_60 = uVar9;
  if (uVar9 == 0) {
    local_5c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,uVar9,0);
    _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)(int)uVar9 * 2);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  local_58 = (void *)0x0;
  local_50 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  pvVar1 = local_58;
  FGenericPlatformString::Convert<char,wchar_t>(local_58,2,&DAT_143f7df04,2,CONCAT22(uVar10,0x3f));
  cVar4 = FUN_1404e14f0(&local_68,&local_58,&local_48,&local_38,0,1);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pwVar3 = local_38;
  pwVar2 = local_48;
  if (cVar4 == '\0') {
    pwVar6 = L"";
    if (local_60 != 0) {
      pwVar6 = local_68;
    }
    lVar8 = _wtoi64(pwVar6);
    if (lVar8 != 0) {
      param_1[4] = lVar8;
      *param_3 = '\x01';
    }
    (**(code **)(*param_1 + 0x30))(param_1,0);
LAB_1405215aa:
    if (*param_3 != '\0') goto LAB_1405215b1;
  }
  else {
    pwVar6 = L"";
    if ((int)local_40 != 0) {
      pwVar6 = local_48;
    }
    lVar8 = _wtoi64(pwVar6);
    if (lVar8 == 0) goto LAB_1405215aa;
    param_1[4] = lVar8;
    pwVar6 = L"";
    if ((int)local_30 != 0) {
      pwVar6 = pwVar3;
    }
    iVar5 = _wtoi(pwVar6);
    (**(code **)(*param_1 + 0x30))(param_1,iVar5);
    *param_3 = '\x01';
LAB_1405215b1:
    cVar4 = (**(code **)(param_1[1] + 0x20))(param_1 + 1);
    if (cVar4 != '\0') {
      cVar4 = '\x01';
      goto LAB_1405215c6;
    }
  }
  cVar4 = '\0';
LAB_1405215c6:
  *param_3 = cVar4;
  if (pwVar3 != (wchar_t *)0x0) {
    FMemory::Free(pwVar3);
  }
  if (pwVar2 != (wchar_t *)0x0) {
    FMemory::Free(pwVar2);
  }
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 140521620 FUN_140521620 body=151 status=ok
// SIG undefined FUN_140521620(void)

void FUN_140521620(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  *(undefined4 *)(param_1 + 0x1e8) = param_2;
  if (((*(longlong *)(param_1 + 0x1d0) != 0) && (cVar2 = FUN_140516dc0(), cVar2 != '\0')) &&
     (plVar1 = *(longlong **)(param_1 + 0x1d8), plVar1 != (longlong *)0x0)) {
    switch(*(undefined4 *)(param_1 + 0x1e8)) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00014052167a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x50))(plVar1,0);
      return;
    case 1:
    case 2:
                    /* WARNING: Could not recover jumptable at 0x00014052168b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x50))(plVar1,1);
      return;
    case 3:
    case 6:
                    /* WARNING: Could not recover jumptable at 0x00014052169c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x50))(plVar1,2);
      return;
    case 4:
    case 5:
    case 7:
    case 8:
                    /* WARNING: Could not recover jumptable at 0x0001405216ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x50))(plVar1,3);
      return;
    }
  }
  return;
}



// FUNCTION 1405216e0 FUN_1405216e0 body=7 status=ok
// SIG undefined FUN_1405216e0(void)

void FUN_1405216e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001405216e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



// FUNCTION 1405216f0 FUN_1405216f0 body=28 status=ok
// SIG undefined FUN_1405216f0(void)

void FUN_1405216f0(longlong param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = Ordinal_9(param_2);
  *(undefined2 *)(param_1 + 0x28) = uVar1;
  return;
}



// FUNCTION 140521710 FUN_140521710 body=1982 status=ok
// SIG undefined FUN_140521710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140521710(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined2 **ppuVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  void *pvVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  undefined2 *puVar18;
  undefined4 uVar19;
  int *piVar20;
  undefined8 *puVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  uint uVar24;
  uint *puVar25;
  wchar_t *pwVar26;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined2 *local_248;
  undefined8 local_240;
  undefined4 local_238 [2];
  longlong *local_230;
  undefined8 local_228;
  wchar_t *local_220;
  int local_218;
  undefined4 local_214;
  int local_210 [2];
  longlong local_208;
  undefined8 local_200;
  wchar_t *local_1f8;
  int local_1f0;
  wchar_t *local_1e8;
  ulonglong local_1e0;
  int local_1d8;
  uint uStack_1d4;
  uint *puStack_1d0;
  undefined4 local_1c8;
  undefined8 uStack_1c4;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  uint *local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  int local_190;
  void *local_188;
  int local_180;
  void *local_178;
  int local_170;
  undefined2 *local_168;
  int local_160;
  longlong *local_158;
  longlong *local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  longlong local_130 [2];
  longlong local_120 [2];
  longlong *local_110;
  undefined8 uStack_108;
  uint *puStack_100;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  uVar19 = 2;
  local_230 = param_1;
  local_228 = param_2;
  if (((param_1[9] != 0) && (cVar7 = FUN_140516dc0(), cVar7 != '\0')) &&
     (cVar7 = (**(code **)(*(longlong *)param_1[9] + 0xf8))((longlong *)param_1[9],param_2),
     cVar7 != '\0')) {
    (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],&local_158);
    uVar19 = 2;
    if ((local_158 != (longlong *)0x0) &&
       (iVar8 = (**(code **)(*local_158 + 0x78))(local_158,param_2), iVar8 == 2)) {
      FText::FText(local_148,&DAT_146853200);
      iVar8 = 0;
      plVar1 = (longlong *)(param_3 + 0x18);
      local_248 = (undefined2 *)0x0;
      local_240 = 0;
      puVar18 = (undefined2 *)0x0;
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_210,&DAT_1461fc658);
      piVar10 = (int *)0x0;
      if (local_210[0] != -1) {
        piVar10 = (int *)((longlong)local_210[0] * 0x30 + *plVar1);
      }
      piVar20 = piVar10 + 4;
      if (piVar10 == (int *)0x0) {
        piVar20 = (int *)0x0;
      }
      if ((piVar20 != (int *)0x0) && (*piVar20 == 6)) {
        local_208 = 0;
        local_200 = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
        FGenericPlatformString::Memcpy(local_208,L"Presence",0x12);
        uVar11 = FUN_1404b73f0(piVar20,local_130);
        FUN_141606040(&local_208,uVar11,local_148,0);
        if (local_130[0] != 0) {
          FMemory::Free();
        }
        if (local_208 != 0) {
          FMemory::Free();
        }
        puVar12 = (undefined8 *)FUN_1404b73f0(piVar20,local_120);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar12;
        }
        FString::PrintfImpl(&local_188,L"?s=%s",puVar14);
        pvVar6 = local_188;
        iVar9 = iVar8;
        if (local_180 != 0) {
          iVar9 = local_180 + -1;
        }
        if (iVar9 != 0) {
          iVar8 = iVar9 + 1;
          local_240 = CONCAT44(local_240._4_4_,iVar8);
          if (0 < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
            puVar18 = local_248;
            iVar8 = (int)local_240;
          }
          _guard_xfg_dispatch_icall_nop(puVar18,pvVar6,(longlong)iVar9 * 2);
          puVar18[iVar9] = 0;
        }
        if (local_188 != (void *)0x0) {
          FMemory::Free(local_188);
        }
        if (local_120[0] != 0) {
          FMemory::Free();
        }
      }
      iVar9 = *(int *)(param_3 + 0x40);
      puStack_1d0 = (uint *)(param_3 + 0x28);
      uStack_1d4 = 1;
      uVar24 = 0;
      local_1d8 = 0;
      uStack_1c4 = 0;
      if (iVar9 != 0) {
        puVar25 = *(uint **)(param_3 + 0x38);
        if (*(uint **)(param_3 + 0x38) == (uint *)0x0) {
          puVar25 = puStack_1d0;
        }
        uVar3 = *puVar25;
        while (uVar3 == 0) {
          lVar17 = (longlong)local_1d8;
          uVar24 = uVar24 + 0x20;
          iVar13 = local_1d8 + 1;
          uStack_1c4 = (ulonglong)uVar24 << 0x20;
          bVar5 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_1d8;
          local_1d8 = iVar13;
          if (bVar5) goto LAB_140521a02;
          uVar3 = puVar25[lVar17 + 1];
        }
        uStack_1d4 = -uVar3 & uVar3;
        local_190 = 0x1f;
        if (uStack_1d4 != 0) {
          for (; uStack_1d4 >> local_190 == 0; local_190 = local_190 + -1) {
          }
        }
        if (uStack_1d4 == 0) {
          iVar13 = 0x20;
        }
        else {
          iVar13 = 0x1f - local_190;
        }
        iVar13 = (uVar24 - iVar13) + 0x1f;
        uStack_1c4._4_4_ = (undefined4)((ulonglong)uStack_1c4 >> 0x20);
        uStack_1c4 = CONCAT44(uStack_1c4._4_4_,iVar13);
        if (iVar9 < iVar13) {
LAB_140521a02:
          uStack_1c4 = CONCAT44(uStack_1c4._4_4_,iVar9);
        }
      }
      local_1c8 = 0xffffffff;
      uStack_1b0 = CONCAT44(uStack_1d4,local_1d8);
      uStack_f8 = 0xffffffff;
      iStack_f4 = (int)uStack_1c4;
      uStack_f0 = uStack_1c4._4_4_;
      uStack_ec = uStack_1bc;
      uStack_1a0 = CONCAT44((int)uStack_1c4,0xffffffff);
      local_198 = uStack_1c4._4_4_;
      uStack_194 = uStack_1bc;
      local_1b8 = plVar1;
      local_1a8 = puStack_1d0;
      local_110 = plVar1;
      uStack_108 = uStack_1b0;
      puStack_100 = puStack_1d0;
      if ((int)uStack_1c4 < iVar9) {
        pwVar22 = (wchar_t *)(local_230 + 10);
        iVar9 = (int)uStack_1c4;
        local_220 = pwVar22;
        do {
          plVar1 = local_1b8;
          lVar17 = (longlong)iVar9 * 0x30;
          cVar7 = TArray<FString,FDefaultAllocator>::Contains<FString>(pwVar22,lVar17 + *local_1b8);
          if (cVar7 != '\0') {
            if (*(int *)(lVar17 + 8 + *plVar1) == 0) {
              puVar14 = &DAT_143f3eda8;
            }
            else {
              puVar14 = *(undefined2 **)(lVar17 + *plVar1);
            }
            FString::PrintfImpl(&local_168,L"%%%s%%",puVar14);
            uVar11 = FText::ToString(local_148);
            local_258 = 0xffffffff;
            puVar14 = &DAT_143f3eda8;
            if (local_160 != 0) {
              puVar14 = local_168;
            }
            iVar9 = FUN_141592950(uVar11,puVar14,1);
            if (iVar9 != -1) {
              local_238[0] = 0xffffffff;
              FVariantData::GetValue(*plVar1 + 0x10 + lVar17,local_238);
              puVar12 = *(undefined8 **)pwVar22;
              iVar9 = *(int *)(pwVar22 + 4);
              lVar4 = *plVar1;
              for (puVar21 = puVar12; uVar19 = 0xffffffff, puVar21 != puVar12 + (longlong)iVar9 * 2;
                  puVar21 = puVar21 + 2) {
                if (*(int *)((undefined8 *)(lVar4 + lVar17) + 1) == 0) {
                  puVar18 = &DAT_143f3eda8;
                }
                else {
                  puVar18 = *(undefined2 **)(lVar4 + lVar17);
                }
                if (*(int *)(puVar21 + 1) == 0) {
                  puVar14 = &DAT_143f3eda8;
                }
                else {
                  puVar14 = (undefined2 *)*puVar21;
                }
                iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar18);
                if (iVar13 == 0) {
                  uVar19 = (int)((longlong)puVar21 - (longlong)puVar12 >> 4);
                  break;
                }
              }
              FString::PrintfImpl(&local_178,L"?p%d=%d",uVar19);
              pvVar6 = local_178;
              if (local_170 == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = local_170 + -1;
              }
              puVar18 = local_248;
              if (iVar9 != 0) {
                iVar13 = (uint)(iVar8 == 0) + iVar9 + iVar8;
                local_240 = CONCAT44(local_240._4_4_,iVar13);
                if (local_240._4_4_ < iVar13) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,iVar8);
                  iVar13 = (int)local_240;
                }
                puVar18 = local_248;
                puVar14 = local_248 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0));
                _guard_xfg_dispatch_icall_nop(puVar14,pvVar6,(longlong)iVar9 * 2);
                puVar14[iVar9] = 0;
                iVar8 = iVar13;
              }
              pwVar22 = local_220;
              if (local_178 != (void *)0x0) {
                FMemory::Free(local_178);
                pwVar22 = local_220;
              }
            }
            if (local_168 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(uint)uStack_1a0 & ~uStack_1b0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b0);
          iVar9 = uStack_1a0._4_4_;
        } while (uStack_1a0._4_4_ < (int)local_1a8[6]);
      }
      param_1 = local_230;
      pwVar22 = (wchar_t *)0x0;
      ppuVar2 = (undefined2 **)(local_230 + 0xc);
      puVar14 = &DAT_143f3eda8;
      if (iVar8 != 0) {
        puVar14 = puVar18;
      }
      if ((int)local_230[0xd] == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = *ppuVar2;
      }
      iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar14);
      if (iVar9 != 0) {
        if (ppuVar2 != &local_248) {
          *(int *)(param_1 + 0xd) = iVar8;
          if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0x6c) == 0)) {
            *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar2,iVar8);
            _guard_xfg_dispatch_icall_nop(*ppuVar2,puVar18,(longlong)iVar8 * 2);
          }
        }
        FUN_1404ffc60(param_1,&local_1e8,&local_248);
        pwVar16 = local_1e8;
        local_1f8 = (wchar_t *)0x0;
        iVar8 = (int)local_1e0;
        local_1f0 = iVar8;
        local_1e0._0_4_ = iVar8;
        if (iVar8 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,local_1e0 & 0xffffffff,0);
          pwVar22 = local_1f8;
          _guard_xfg_dispatch_icall_nop(local_1f8,pwVar16,(longlong)iVar8 * 2);
        }
        iVar8 = local_1f0;
        local_258 = 0xffffffff;
        iVar13 = FUN_141592950(&local_1e8,&DAT_143f7e2bc,1);
        pwVar16 = pwVar22;
        pwVar26 = local_1f8;
        iVar9 = local_1f0;
        if (iVar13 != -1) {
          if ((int)local_1e0 == 0) {
            pwVar26 = L"";
            local_1e0._0_4_ = 0;
          }
          else {
            local_1e0._0_4_ = (int)local_1e0 + -1;
            pwVar26 = local_1e8;
          }
          pwVar16 = (wchar_t *)0x0;
          iVar9 = 0;
          if ((-1 < iVar13) && (iVar9 = (int)local_1e0, iVar13 < (int)local_1e0)) {
            iVar9 = iVar13;
          }
          local_220 = (wchar_t *)0x0;
          local_214 = 0;
          pwVar23 = (wchar_t *)(ulonglong)(iVar9 + 1);
          if (iVar9 == 0) {
            pwVar23 = pwVar16;
          }
          iVar8 = (int)pwVar23;
          local_218 = iVar8;
          if ((0 < iVar8) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,0), iVar8 = local_218,
             pwVar16 = local_220, 0 < local_218)) {
            wcsncpy(local_220,pwVar26,(longlong)iVar9);
            pwVar16[iVar9] = L'\0';
          }
          puVar18 = local_248;
          pwVar26 = pwVar16;
          iVar9 = iVar8;
          if (pwVar22 != (wchar_t *)0x0) {
            FMemory::Free(pwVar22);
            puVar18 = local_248;
          }
        }
        local_1f0 = iVar9;
        local_1f8 = pwVar26;
        puVar12 = (undefined8 *)
                  SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
        pwVar22 = L"";
        if (iVar8 != 0) {
          pwVar22 = pwVar16;
        }
        plVar1 = (longlong *)*puVar12;
        lVar17 = TStringConversion<FTCHARToUTF8_Convert,128>::
                 TStringConversion<FTCHARToUTF8_Convert,128>(local_e8,pwVar22);
        (**(code **)(*plVar1 + 0x158))(plVar1,"status",*(undefined8 *)(lVar17 + 0x88));
        if (local_68 != 0) {
          FMemory::Free();
        }
        if (pwVar16 != (wchar_t *)0x0) {
          FMemory::Free(pwVar16);
        }
        param_1 = local_230;
        if (local_1e8 != (wchar_t *)0x0) {
          FMemory::Free();
          param_1 = local_230;
        }
      }
      if (puVar18 != (undefined2 *)0x0) {
        FMemory::Free(puVar18);
      }
      uVar19 = 1;
      param_2 = local_228;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_140 + 1;
        lVar17 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar10 = (int *)((longlong)local_140 + 0xc);
          iVar8 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          param_2 = local_228;
          if (iVar8 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
            param_2 = local_228;
          }
        }
      }
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar17 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar10 = (int *)((longlong)local_150 + 0xc);
        iVar8 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2,uVar19);
  return;
}



// FUNCTION 140521ed0 FUN_140521ed0 body=142 status=ok
// SIG undefined FUN_140521ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140521ed0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    lVar1 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_b8,puVar2);
    (**(code **)(**(longlong **)(param_1 + 0x370) + 0x158))
              (*(longlong **)(param_1 + 0x370),"steam_player_group",*(undefined8 *)(lVar1 + 0x88));
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140521f60 FUN_140521f60 body=154 status=ok
// SIG undefined FUN_140521f60(void)

void FUN_140521f60(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_1[0x3a] != 0) {
    cVar1 = FUN_140516dc0();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(longlong *)param_1[0x3a] + 0xf8))((longlong *)param_1[0x3a],param_2);
      if ((cVar1 != '\0') && (param_1[0x3c] != 0)) {
        cVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
        if (cVar1 != '\0') {
          (**(code **)(*(longlong *)param_1[0x3c] + 0xe0))((longlong *)param_1[0x3c],"Achievements")
          ;
          uVar2 = 1;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140521ff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f0))(param_1,uVar2);
  return;
}



// FUNCTION 140522000 FUN_140522000 body=133 status=ok
// SIG undefined FUN_140522000(void)

void FUN_140522000(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if (param_1[0x3c] != 0) {
    cVar1 = (**(code **)(*param_1 + 0xb8))();
    if (cVar1 != '\0') {
      if (*(int *)(param_4 + 1) < 2) {
        iVar2 = *(int *)(param_1[0x3a] + 0x74);
      }
      else {
        iVar2 = _wtoi((wchar_t *)*param_4);
      }
      (**(code **)(*(longlong *)param_1[0x3c] + 0xf8))((longlong *)param_1[0x3c],iVar2,0);
      uVar3 = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014052207e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))(param_1,uVar3);
  return;
}



// FUNCTION 1405220a0 FUN_1405220a0 body=182 status=ok
// SIG undefined FUN_1405220a0(void)

void FUN_1405220a0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if (param_1[0x3a] != 0) {
    cVar1 = FUN_140516dc0();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(longlong *)param_1[0x3a] + 0xf8))((longlong *)param_1[0x3a],param_2);
      if ((cVar1 != '\0') && (param_1[0x3c] != 0)) {
        cVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
        if (cVar1 != '\0') {
          puVar2 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x10))();
          (**(code **)(*(longlong *)param_1[0x3c] + 0xe8))
                    ((longlong *)param_1[0x3c],"steamid",*puVar2);
          uVar3 = 1;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014052214f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x170))(param_1,uVar3);
  return;
}



// FUNCTION 140522160 FUN_140522160 body=154 status=ok
// SIG undefined FUN_140522160(void)

void FUN_140522160(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_1[0x3a] != 0) {
    cVar1 = FUN_140516dc0();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(longlong *)param_1[0x3a] + 0xf8))((longlong *)param_1[0x3a],param_2);
      if ((cVar1 != '\0') && (param_1[0x3c] != 0)) {
        cVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
        if (cVar1 != '\0') {
          (**(code **)(*(longlong *)param_1[0x3c] + 0xe0))((longlong *)param_1[0x3c],"Friends");
          uVar2 = 1;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001405221f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x210))(param_1,uVar2);
  return;
}



// FUNCTION 140522200 FUN_140522200 body=182 status=ok
// SIG undefined FUN_140522200(void)

void FUN_140522200(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if (param_1[0x3a] != 0) {
    cVar1 = FUN_140516dc0();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(longlong *)param_1[0x3a] + 0xf8))((longlong *)param_1[0x3a],param_2);
      if ((cVar1 != '\0') && (param_1[0x3c] != 0)) {
        cVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
        if (cVar1 != '\0') {
          puVar2 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x10))();
          (**(code **)(*(longlong *)param_1[0x3c] + 0xe8))
                    ((longlong *)param_1[0x3c],"steamid",*puVar2);
          uVar3 = 1;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001405222af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 400))(param_1,uVar3);
  return;
}



// FUNCTION 1405222c0 FUN_1405222c0 body=477 status=ok
// SIG undefined FUN_1405222c0(void)

void FUN_1405222c0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  BOOL BVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar10 = 2;
  if ((((param_1[0x3a] != 0) && (cVar5 = FUN_140516dc0(), cVar5 != '\0')) &&
      (cVar5 = (**(code **)(*(longlong *)param_1[0x3a] + 0xf8))((longlong *)param_1[0x3a],param_2),
      cVar5 != '\0')) &&
     ((param_1[0x3c] != 0 && (cVar5 = (**(code **)(*param_1 + 0xb8))(param_1), cVar5 != '\0')))) {
    plVar7 = (longlong *)
             (**(code **)(*(longlong *)param_1[0x3a] + 0x18))((longlong *)param_1[0x3a],local_28);
    plVar3 = (longlong *)plVar7[1];
    lVar4 = *plVar7;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_20 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (lVar4 != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x290);
      BVar6 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar6 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      if (0 < *(int *)(lVar4 + 0x2c0)) {
        lVar9 = *(longlong *)(lVar4 + 0x2b8);
        lVar8 = 0;
        do {
          if (((lVar9 != 0) && (*(char *)(lVar9 + 0x3a) == '\0')) &&
             ((*(char *)(lVar9 + 0x3d) == '\x01' &&
              (*(int *)(lVar9 + 0xf8) < *(int *)(lVar9 + 0x30))))) {
            LeaveCriticalSection(lpCriticalSection);
            if ((*(longlong *)(lVar9 + 0xa0) != 0) && ((longlong *)param_1[0x3c] != (longlong *)0x0)
               ) {
              (**(code **)(*(longlong *)param_1[0x3c] + 0x108))();
              uVar10 = 1;
            }
            goto LAB_140522409;
          }
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 0x118;
        } while (lVar8 < *(int *)(lVar4 + 0x2c0));
      }
      LeaveCriticalSection(lpCriticalSection);
    }
LAB_140522409:
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
                    /* WARNING: Could not recover jumptable at 0x000140522458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b0))(param_1,uVar10);
  return;
}



// FUNCTION 1405224a0 FUN_1405224a0 body=39 status=ok
// SIG undefined FUN_1405224a0(void)

void FUN_1405224a0(longlong *param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(*param_1 + 0x230))(0,2,&local_18);
  return;
}



// FUNCTION 1405224d0 FUN_1405224d0 body=39 status=ok
// SIG undefined FUN_1405224d0(void)

void FUN_1405224d0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x150))(param_1,2,param_2,6,0);
  return;
}



// FUNCTION 140522500 FUN_140522500 body=167 status=ok
// SIG undefined FUN_140522500(void)

void FUN_140522500(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if (param_1[0x3a] != 0) {
    cVar1 = FUN_140516dc0();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(longlong *)param_1[0x3a] + 0xf8))((longlong *)param_1[0x3a],param_2);
      if ((cVar1 != '\0') && (param_1[0x3c] != 0)) {
        cVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
        if (cVar1 != '\0') {
          puVar2 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
          (**(code **)(*(longlong *)param_1[0x3c] + 0xe8))
                    ((longlong *)param_1[0x3c],"steamid",*puVar2);
          uVar3 = 1;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001405225a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x270))(param_1,uVar3);
  return;
}



// FUNCTION 1405225e0 FUN_1405225e0 body=154 status=ok
// SIG undefined FUN_1405225e0(void)

void FUN_1405225e0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_1[0x3a] != 0) {
    cVar1 = FUN_140516dc0();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(longlong *)param_1[0x3a] + 0xf8))((longlong *)param_1[0x3a],param_2);
      if ((cVar1 != '\0') && (param_1[0x3c] != 0)) {
        cVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
        if (cVar1 != '\0') {
          (**(code **)(*(longlong *)param_1[0x3c] + 0xe0))((longlong *)param_1[0x3c],"Players");
          uVar2 = 1;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140522673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f0))(param_1,uVar2);
  return;
}


