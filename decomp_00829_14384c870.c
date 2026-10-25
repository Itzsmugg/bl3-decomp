// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14384c870 FUN_14384c870 body=42 status=ok
// SIG undefined FUN_14384c870(void)

undefined4 FUN_14384c870(longlong param_1)

{
  char cVar1;
  
  cVar1 = UPrimitiveComponent::IsWelded();
  if (cVar1 != '\0') {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x4e8) + 0x30);
  }
  return 0;
}



// FUNCTION 14384c8a0 IsWelded body=12 status=ok
// SIG undefined IsWelded(void)

bool UPrimitiveComponent::IsWelded(longlong param_1)

{
  return *(longlong *)(param_1 + 0x4e8) != 0;
}



// FUNCTION 14384c8b0 FUN_14384c8b0 body=43 status=ok
// SIG undefined FUN_14384c8b0(void)

void FUN_14384c8b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_143719630(*(undefined8 *)(param_1 + 0x4e8));
                    /* WARNING: Could not recover jumptable at 0x00014384c8d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(param_1 + 0x4f8));
  return;
}



// FUNCTION 14384c8e0 IsValidForStatusUpdate body=12 status=ok
// SIG undefined IsValidForStatusUpdate(void)

bool APrimalCharacter::IsValidForStatusUpdate(longlong param_1)

{
  return *(longlong *)(param_1 + 0x4f0) != 0;
}



// FUNCTION 14384c8f0 FUN_14384c8f0 body=334 status=ok
// SIG undefined FUN_14384c8f0(void)

undefined8 FUN_14384c8f0(longlong param_1,char *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtisProcessingNeeded");
  }
  if (*param_2 == '\0') {
LAB_14384c967:
    if ((param_2[0x24] != '\0') && (*param_2 == '\0')) {
      cVar3 = FUN_143755360(0x214fc6d7,"World\\hkaiWorld_async.cpp",0x7b,
                            "hkaiWorld::isProcessingNeeded",&DAT_145af3922,"Not implemented",
                            &DAT_145b909f0,0);
      if (cVar3 != '\0') {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
    }
    if (param_2[0x2c] != '\0') {
      cVar3 = hkaiPathRequestManager::hasPathRequests
                        (*(undefined8 *)(param_1 + 0x270),*(undefined4 *)(param_2 + 0x38));
      if (cVar3 != '\0') goto LAB_14384ca11;
    }
    if ((param_2[0x3c] == '\0') ||
       ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x438) + 0x20),
        lVar1 == lVar1 + (longlong)*(int *)(*(longlong *)(param_1 + 0x438) + 0x28) * 8 &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x478) + 0x20),
        lVar1 == lVar1 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0x28) * 8)))) {
      uVar6 = 0;
      goto LAB_14384ca17;
    }
  }
  else {
    iVar4 = FUN_143dfc770(*(undefined8 *)(param_1 + 0x4e0));
    if (iVar4 < 1) {
      if (*(longlong *)(param_1 + 0x150) != 0) {
        cVar3 = FUN_143872780();
        if (cVar3 != '\0') goto LAB_14384ca11;
      }
      if (*(char *)(param_1 + 0x511) == '\0') goto LAB_14384c967;
    }
  }
LAB_14384ca11:
  uVar6 = 1;
LAB_14384ca17:
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return uVar6;
}



// FUNCTION 14384ca40 FUN_14384ca40 body=272 status=ok
// SIG undefined FUN_14384ca40(void)

void FUN_14384ca40(longlong param_1,undefined8 *param_2)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  longlong local_res8;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d300(pvVar1,"Pd/Async");
  }
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtDoProcessingPhases");
  }
  FUN_143847780(*(undefined8 *)(param_1 + 0x10),&local_res8,*(undefined8 *)(param_1 + 0x18));
  while (local_res8 != 0) {
    thunk_FUN_143719c70(0xc3675b52);
    (**(code **)(*(longlong *)*param_2 + 0x70))((longlong *)*param_2,local_res8,0);
    thunk_FUN_143719c70(0x6eda0fdf);
    if (local_res8 != 0) {
      FUN_14370c150();
    }
    FUN_143847780(*(undefined8 *)(param_1 + 0x10),&local_res8);
  }
  LOCK();
  UNLOCK();
  *(undefined1 *)(param_1 + 0x20) = 1;
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d2d0(pvVar2);
  }
  thunk_FUN_143719c70(0x7c12ccac);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 14384cb50 SetLingerTime body=9 status=ok
// SIG undefined SetLingerTime(void)

void AXProjectile::SetLingerTime(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4bc) = param_2;
  return;
}



// FUNCTION 14384cb60 FUN_14384cb60 body=903 status=ok
// SIG undefined FUN_14384cb60(void)

void FUN_14384cb60(longlong param_1,undefined1 *param_2,undefined ***param_3)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  longlong local_res8;
  longlong local_res10;
  undefined **local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined2 local_d8;
  undefined4 local_d6;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtstartAsyncProcessingRun");
  }
  local_d6 = 0x1c0800;
  local_d8 = 0x50;
  FUN_14382bbe0(local_d0);
  local_d0[0] = *param_2;
  FUN_143802ce0(&local_c8,param_2 + 8);
  local_b0 = *(undefined4 *)(param_2 + 0x20);
  puVar4 = *(undefined8 **)(param_1 + 0x238);
  local_ac = param_2[0x24];
  local_a8 = *(undefined4 *)(param_2 + 0x28);
  local_a4 = param_2[0x2c];
  local_a0 = *(undefined4 *)(param_2 + 0x30);
  local_9c = *(undefined4 *)(param_2 + 0x34);
  local_98 = *(undefined4 *)(param_2 + 0x38);
  local_94 = param_2[0x3c];
  local_90 = *(undefined4 *)(param_2 + 0x40);
  puVar7 = puVar4 + *(int *)(param_1 + 0x240);
  for (; puVar4 != puVar7; puVar4 = puVar4 + 1) {
    (**(code **)(*(longlong *)*puVar4 + 0x18))((longlong *)*puVar4,&local_d8);
  }
  hkaiWorld::makeProcessingContext
            (param_1,&local_res8,param_2,1,*(undefined4 *)(*(longlong *)(param_1 + 0x4e8) + 0x30));
  FUN_143847760(param_1,&local_res10,local_res8);
  if (local_res10 != 0) {
    local_f0 = 0;
    local_f8 = hkTrivialTaskQueue::vftable;
    local_e8 = 0;
    local_e4 = 0x80000000;
    pppuVar6 = &local_f8;
    if (param_3 != (undefined ***)0x0) {
      pppuVar6 = param_3;
    }
    (*(code *)(*pppuVar6)[0xe])(pppuVar6,local_res10,0);
    uVar2 = FUN_143703a50();
    local_e8 = 0;
    if (-1 < (int)local_e4) {
      FUN_143702e10(uVar2,local_f0,8,local_e4 & 0x3fffffff);
    }
    if (local_res10 != 0) {
      FUN_14370c150();
    }
  }
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x50);
  puVar7 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0x1ffff;
    *puVar4 = hkaiWorld::DoProcessingPhasesTask::vftable;
    puVar4[4] = hkaiWorld::DoProcessingPhasesTask::vftable;
    puVar4[6] = param_1;
    puVar4[7] = local_res8;
    if (local_res8 != 0) {
      FUN_14370c030();
    }
    *(undefined1 *)(puVar4 + 8) = 0;
    puVar7 = puVar4;
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FUN_14370c150();
  }
  *(undefined8 **)(param_1 + 0x4f0) = puVar7;
  plVar5 = (longlong *)FUN_143719630(*(undefined8 *)(param_1 + 0x4e8));
  puVar4 = puVar7 + 4;
  if (puVar7 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  uVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,puVar4,1,1,0x40);
  *(undefined8 *)(param_1 + 0x4f8) = uVar2;
  if (local_res8 != 0) {
    FUN_14370c030(local_res8);
  }
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x500) = local_res8;
  FUN_14382bbe0(local_88);
  local_88[0] = *param_2;
  FUN_143802ce0(&local_80,param_2 + 8);
  local_68 = *(undefined4 *)(param_2 + 0x20);
  local_64 = param_2[0x24];
  local_60 = *(undefined4 *)(param_2 + 0x28);
  local_5c = param_2[0x2c];
  local_58 = *(undefined4 *)(param_2 + 0x30);
  local_54 = *(undefined4 *)(param_2 + 0x34);
  local_50 = *(undefined4 *)(param_2 + 0x38);
  local_4c = param_2[0x3c];
  local_48 = *(undefined4 *)(param_2 + 0x40);
  FUN_1438484d0(param_1 + 0xd8,param_1,local_88);
  uVar2 = FUN_143703a50();
  local_78 = 0;
  if (-1 < (int)local_74) {
    FUN_143702e10(uVar2,local_80,4,local_74 & 0x3fffffff);
  }
  if (local_res8 != 0) {
    FUN_14370c150();
  }
  uVar2 = FUN_143703a50();
  local_c0 = 0;
  if (-1 < (int)local_bc) {
    FUN_143702e10(uVar2,local_c8,4,local_bc & 0x3fffffff);
  }
  local_c8 = 0;
  local_bc = 0x80000000;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 14384cef0 FUN_14384cef0 body=38 status=ok
// SIG undefined FUN_14384cef0(void)

undefined8 FUN_14384cef0(longlong param_1,undefined8 param_2)

{
  FUN_14387ba00(*(undefined8 *)(param_1 + 0x140));
  return param_2;
}



// FUNCTION 14384cf20 FUN_14384cf20 body=70 status=ok
// SIG undefined FUN_14384cf20(void)

bool FUN_14384cf20(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_143dfc770(*(undefined8 *)(param_1 + 0x4e0));
  if (0 < iVar2) {
    return true;
  }
  if ((*(longlong *)(param_1 + 0x150) != 0) && (cVar1 = FUN_143872780(), cVar1 != '\0')) {
    return true;
  }
  return *(char *)(param_1 + 0x511) != '\0';
}



// FUNCTION 14384cf70 FUN_14384cf70 body=335 status=ok
// SIG undefined FUN_14384cf70(void)

void FUN_14384cf70(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,float param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined4 local_56;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  
  puVar2 = *(undefined8 **)(param_1 + 0x238);
  local_58 = 0x30;
  local_56 = 0x240800;
  puVar1 = puVar2 + *(int *)(param_1 + 0x240);
  local_34 = 0;
  local_48 = param_3;
  local_40 = param_4;
  local_50 = param_2;
  local_38 = param_6;
  local_3c = param_5;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_58);
  }
  if (param_6 < 0.0) {
    param_6 = (float)FUN_14387bbf0(*(undefined8 *)(param_1 + 0x140),param_2);
  }
  FUN_14387bfb0(*(undefined8 *)(param_1 + 0x140),param_2,param_3,param_4,param_5,param_6,0);
  FUN_1438402d0(*(undefined8 *)(param_1 + 0x130));
  local_64 = param_5;
  local_5c = 0;
  local_78[0] = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_6;
  FUN_1438484d0(param_1 + 0xa0,param_1,local_78);
  return;
}



// FUNCTION 14384d0c0 set_TimeSurvivedMinXP body=7 status=ok
// SIG undefined set_TimeSurvivedMinXP(void)

void uhx::glues::AGPlayerState_Glue_obj::set_TimeSurvivedMinXP(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x514) = param_2;
  return;
}



// FUNCTION 14384d0d0 FUN_14384d0d0 body=138 status=ok
// SIG undefined FUN_14384d0d0(void)

void FUN_14384d0d0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_10;
  
  puVar2 = *(undefined8 **)(param_1 + 0x238);
  local_18 = 0x10;
  local_16 = 0x280800;
  puVar1 = puVar2 + *(int *)(param_1 + 0x240);
  local_10 = param_2;
  if (puVar2 == puVar1) {
    *(undefined4 *)(param_1 + 0x148) = param_2;
  }
  else {
    do {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_18);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    *(undefined4 *)(param_1 + 0x148) = param_2;
  }
  return;
}



// FUNCTION 14384d160 FUN_14384d160 body=193 status=ok
// SIG undefined FUN_14384d160(void)

void FUN_14384d160(longlong param_1,ulonglong param_2,int param_3,ulonglong param_4)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  float local_res8;
  
  lVar4 = (longlong)(int)param_2;
  uVar8 = param_4;
  do {
    uVar6 = param_2 & 0xffffffff;
    local_res8 = (float)*(undefined8 *)(param_1 + ((longlong)((int)param_2 + param_3) >> 1) * 8);
    lVar9 = (longlong)param_3;
    iVar7 = param_3;
    do {
      uVar5 = (uint)uVar6;
      fVar2 = *(float *)(param_1 + lVar4 * 8);
      while (local_res8 < fVar2) {
        lVar4 = lVar4 + 1;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        fVar2 = *(float *)(param_1 + lVar4 * 8);
      }
      pfVar1 = (float *)(param_1 + lVar9 * 8);
      if (*pfVar1 <= local_res8 && local_res8 != *pfVar1) {
        do {
          lVar9 = lVar9 + -1;
          iVar7 = iVar7 + -1;
          pfVar1 = (float *)(param_1 + lVar9 * 8);
        } while (*pfVar1 <= local_res8 && local_res8 != *pfVar1);
      }
      if (lVar9 < lVar4) break;
      if (lVar9 != lVar4) {
        uVar3 = *(undefined8 *)(param_1 + lVar9 * 8);
        *(undefined8 *)(param_1 + lVar9 * 8) = *(undefined8 *)(param_1 + lVar4 * 8);
        *(undefined8 *)(param_1 + lVar4 * 8) = uVar3;
      }
      iVar7 = iVar7 + -1;
      lVar9 = lVar9 + -1;
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      lVar4 = lVar4 + 1;
    } while (lVar4 <= lVar9);
    if ((int)param_2 < iVar7) {
      FUN_14384d160(param_1,param_2,iVar7,uVar8);
      uVar8 = param_4 & 0xff;
    }
    if (param_3 <= (int)uVar5) {
      return;
    }
    param_2 = (ulonglong)uVar5;
  } while( true );
}



// FUNCTION 14384d230 Settings body=21 status=ok
// SIG undefined Settings(void)

undefined4 * hkaiOverlappingTriangles::Settings::Settings(undefined4 *param_1)

{
  *param_1 = 0x3a83126f;
  param_1[1] = 0x40a00000;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 14384d250 FUN_14384d250 body=159 status=ok
// SIG undefined FUN_14384d250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14384d250(longlong param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  piVar6 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                                param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,*param_2);
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *piVar6;
  if (iVar2 < iVar1) {
    pfVar8 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar8 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  iVar2 = piVar6[1];
  fVar3 = pfVar8[1];
  fVar4 = pfVar8[2];
  fVar5 = pfVar8[3];
  if (iVar2 < iVar1) {
    pfVar7 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar7 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  fVar9 = (pfVar7[1] - fVar3) * fRam00000001467f07e4;
  fVar10 = (pfVar7[2] - fVar4) * fRam00000001467f07e8;
  fVar11 = (pfVar7[3] - fVar5) * fRam00000001467f07ec;
  *param_3 = (*pfVar7 - *pfVar8) * _DAT_1467f07e0 + *pfVar8;
  param_3[1] = fVar9 + fVar3;
  param_3[2] = fVar10 + fVar4;
  param_3[3] = fVar11 + fVar5;
  return;
}



// FUNCTION 14384d2f0 FUN_14384d2f0 body=310 status=ok
// SIG undefined FUN_14384d2f0(void)

void FUN_14384d2f0(longlong param_1,undefined8 param_2,undefined4 *param_3,float *param_4,
                  float *param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  float fVar8;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  piVar6 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                                param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,*param_3);
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *piVar6;
  if (iVar2 < iVar1) {
    pfVar7 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar7 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  iVar2 = piVar6[1];
  fVar3 = *pfVar7;
  fVar4 = pfVar7[1];
  fVar5 = pfVar7[2];
  if (iVar2 < iVar1) {
    pfVar7 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar7 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  fVar8 = *pfVar7 - fVar3;
  fVar11 = pfVar7[1] - fVar4;
  fVar12 = pfVar7[2] - fVar5;
  fVar16 = param_4[1] * fVar8 - fVar11 * *param_4;
  fVar17 = param_4[2] * fVar11 - fVar12 * param_4[1];
  fVar18 = *param_4 * fVar12 - fVar8 * param_4[2];
  fVar8 = fVar17 * fVar17;
  fVar11 = fVar18 * fVar18;
  auVar9._8_4_ = fVar16 * fVar16;
  auVar9._4_4_ = auVar9._8_4_;
  auVar9._0_4_ = auVar9._8_4_;
  auVar9._12_4_ = auVar9._8_4_;
  fVar13 = fVar11 + fVar8 + auVar9._8_4_;
  fVar14 = fVar11 + fVar8 + auVar9._8_4_;
  fVar15 = fVar11 + fVar8 + auVar9._8_4_;
  auVar10._4_4_ = fVar14;
  auVar10._0_4_ = fVar13;
  auVar10._8_4_ = fVar15;
  auVar10._12_4_ = fVar11 + fVar8 + auVar9._8_4_;
  auVar10 = rsqrtps(auVar9,auVar10);
  fVar8 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar17 = fVar17 * (float)(~-(uint)(fVar13 <= 0.0) &
                           (uint)((3.0 - fVar13 * fVar8 * fVar8) * fVar8 * 0.5));
  fVar18 = fVar18 * (float)(~-(uint)(fVar14 <= 0.0) &
                           (uint)((3.0 - fVar14 * fVar11 * fVar11) * fVar11 * 0.5));
  fVar16 = fVar16 * (float)(~-(uint)(fVar15 <= 0.0) &
                           (uint)((3.0 - fVar15 * fVar12 * fVar12) * fVar12 * 0.5));
  *param_5 = fVar17;
  param_5[1] = fVar18;
  param_5[2] = fVar16;
  param_5[3] = 0.0 - (fVar18 * fVar4 + fVar17 * fVar3 + fVar16 * fVar5);
  return;
}



// FUNCTION 14384d430 FUN_14384d430 body=143 status=ok
// SIG undefined FUN_14384d430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14384d430(longlong param_1,int *param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  piVar9 = (int *)((longlong)*param_2 * 0x10 + *(longlong *)(param_1 + 0x18));
  auVar12._0_8_ = (ulonglong)DAT_1467f08d0 ^ 0x8000000080000000;
  auVar12._8_4_ = DAT_1467f08d0._8_4_ ^ 0x80000000;
  auVar12._12_4_ = DAT_1467f08d0._12_4_ ^ 0x80000000;
  iVar1 = *piVar9;
  iVar11 = (short)piVar9[2] + iVar1;
  auVar13 = _DAT_1467f08d0;
  if (iVar1 < iVar11) {
    piVar9 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x14);
    uVar10 = (ulonglong)(uint)(iVar11 - iVar1);
    do {
      iVar1 = *piVar9;
      piVar9 = piVar9 + 5;
      auVar13 = minps(auVar13,*(undefined1 (*) [16])
                               (*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x10));
      auVar12 = maxps(auVar12,*(undefined1 (*) [16])
                               (*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x10));
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  param_4[4] = auVar12._0_4_ + *param_3;
  param_4[5] = auVar12._4_4_ + fVar2;
  param_4[6] = auVar12._8_4_ + fVar3;
  param_4[7] = auVar12._12_4_ + fVar4;
  *param_4 = auVar13._0_4_ - fVar5;
  param_4[1] = auVar13._4_4_ - fVar6;
  param_4[2] = auVar13._8_4_ - fVar7;
  param_4[3] = auVar13._12_4_ - fVar8;
  return;
}



// FUNCTION 14384d4c0 FUN_14384d4c0 body=458 status=ok
// SIG undefined FUN_14384d4c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14384d4c0(longlong param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  float fVar24;
  float fVar25;
  int *piVar26;
  float *pfVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  auVar35 = _DAT_1467f08d0;
  lVar4 = *(longlong *)(param_1 + 0x18);
  auVar34._0_8_ = (ulonglong)DAT_1467f08d0 ^ 0x8000000080000000;
  auVar34._8_4_ = DAT_1467f08d0._8_4_ ^ 0x80000000;
  auVar34._12_4_ = DAT_1467f08d0._12_4_ ^ 0x80000000;
  piVar26 = (int *)FUN_1437fb610(*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x20),
                                 lVar4 + 0xb0,lVar4 + 0xd0,lVar4 + 0x90,*param_2);
  iVar28 = *piVar26;
  iVar29 = (short)piVar26[2] + iVar28;
  if (iVar28 < iVar29) {
    uVar1 = *(undefined4 *)(lVar4 + 0x30);
    iVar2 = *(int *)(lVar4 + 0x40);
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    fVar8 = *(float *)(param_1 + 0x50);
    fVar9 = *(float *)(param_1 + 0x54);
    fVar10 = *(float *)(param_1 + 0x58);
    fVar11 = *(float *)(param_1 + 0x5c);
    fVar12 = *(float *)(param_1 + 0x40);
    fVar13 = *(float *)(param_1 + 0x44);
    fVar14 = *(float *)(param_1 + 0x48);
    fVar15 = *(float *)(param_1 + 0x4c);
    fVar16 = *(float *)(param_1 + 0x60);
    fVar17 = *(float *)(param_1 + 100);
    fVar18 = *(float *)(param_1 + 0x68);
    fVar19 = *(float *)(param_1 + 0x6c);
    fVar20 = *(float *)(param_1 + 0x70);
    fVar21 = *(float *)(param_1 + 0x74);
    fVar22 = *(float *)(param_1 + 0x78);
    fVar23 = *(float *)(param_1 + 0x7c);
    do {
      piVar26 = (int *)FUN_1437fb5b0(uVar5,uVar1);
      iVar3 = *piVar26;
      if (iVar3 < iVar2) {
        pfVar27 = (float *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x38));
      }
      else {
        pfVar27 = (float *)((longlong)(iVar3 - iVar2) * 0x10 + *(longlong *)(lVar4 + 0xf0));
      }
      fVar33 = *pfVar27;
      fVar24 = pfVar27[1];
      fVar25 = pfVar27[2];
      iVar28 = iVar28 + 1;
      fVar30 = fVar33 * fVar12 + fVar24 * fVar8 + fVar25 * fVar16 + fVar20;
      fVar31 = fVar33 * fVar13 + fVar24 * fVar9 + fVar25 * fVar17 + fVar21;
      fVar32 = fVar33 * fVar14 + fVar24 * fVar10 + fVar25 * fVar18 + fVar22;
      fVar33 = fVar33 * fVar15 + fVar24 * fVar11 + fVar25 * fVar19 + fVar23;
      auVar6._4_4_ = fVar31;
      auVar6._0_4_ = fVar30;
      auVar6._8_4_ = fVar32;
      auVar6._12_4_ = fVar33;
      auVar35 = minps(auVar35,auVar6);
      auVar7._4_4_ = fVar31;
      auVar7._0_4_ = fVar30;
      auVar7._8_4_ = fVar32;
      auVar7._12_4_ = fVar33;
      auVar34 = maxps(auVar34,auVar7);
    } while (iVar28 < iVar29);
  }
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar10 = param_3[3];
  fVar11 = *param_3;
  fVar12 = param_3[1];
  fVar13 = param_3[2];
  fVar14 = param_3[3];
  param_4[4] = auVar34._0_4_ + *param_3;
  param_4[5] = auVar34._4_4_ + fVar8;
  param_4[6] = auVar34._8_4_ + fVar9;
  param_4[7] = auVar34._12_4_ + fVar10;
  *param_4 = auVar35._0_4_ - fVar11;
  param_4[1] = auVar35._4_4_ - fVar12;
  param_4[2] = auVar35._8_4_ - fVar13;
  param_4[3] = auVar35._12_4_ - fVar14;
  return;
}



// FUNCTION 14384d690 FUN_14384d690 body=334 status=ok
// SIG undefined FUN_14384d690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14384d690(longlong param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int *piVar12;
  undefined1 (*pauVar13) [16];
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar17 = _DAT_1467f08d0;
  auVar16._0_8_ = (ulonglong)DAT_1467f08d0 ^ 0x8000000080000000;
  auVar16._8_4_ = DAT_1467f08d0._8_4_ ^ 0x80000000;
  auVar16._12_4_ = DAT_1467f08d0._12_4_ ^ 0x80000000;
  piVar12 = (int *)FUN_1437fb610(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                                 param_1 + 0xb0,param_1 + 0xd0,param_1 + 0x90,*param_2);
  iVar14 = *piVar12;
  iVar15 = (short)piVar12[2] + iVar14;
  if (iVar14 < iVar15) {
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    do {
      piVar12 = (int *)FUN_1437fb5b0(uVar4,uVar1);
      iVar3 = *piVar12;
      if (iVar3 < iVar2) {
        pauVar13 = (undefined1 (*) [16])((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        pauVar13 = (undefined1 (*) [16])
                   ((longlong)(iVar3 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      auVar17 = minps(auVar17,*pauVar13);
      iVar14 = iVar14 + 1;
      auVar16 = maxps(auVar16,*pauVar13);
    } while (iVar14 < iVar15);
  }
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar8 = *param_3;
  fVar9 = param_3[1];
  fVar10 = param_3[2];
  fVar11 = param_3[3];
  param_4[4] = auVar16._0_4_ + *param_3;
  param_4[5] = auVar16._4_4_ + fVar5;
  param_4[6] = auVar16._8_4_ + fVar6;
  param_4[7] = auVar16._12_4_ + fVar7;
  *param_4 = auVar17._0_4_ - fVar8;
  param_4[1] = auVar17._4_4_ - fVar9;
  param_4[2] = auVar17._8_4_ - fVar10;
  param_4[3] = auVar17._12_4_ - fVar11;
  return;
}



// FUNCTION 14384d7e0 FUN_14384d7e0 body=322 status=ok
// SIG undefined FUN_14384d7e0(void)

void FUN_14384d7e0(longlong param_1,undefined4 *param_2,float *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  lVar7 = FUN_1437fb610(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                        param_1 + 0xb0,param_1 + 0xd0,param_1 + 0x90,*param_2);
  auVar11._8_8_ = extraout_XMM0_Qb;
  auVar11._0_8_ = extraout_XMM0_Qa;
  iVar10 = 0;
  sVar1 = *(short *)(lVar7 + 8);
  if (0 < sVar1) {
    iVar2 = *(int *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    do {
      piVar8 = (int *)FUN_1437fb5b0(uVar5,uVar3);
      auVar11._8_8_ = extraout_XMM0_Qb_00;
      auVar11._0_8_ = extraout_XMM0_Qa_00;
      iVar4 = *piVar8;
      if (iVar4 < iVar2) {
        pfVar9 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        pfVar9 = (float *)((longlong)(iVar4 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      fVar12 = fVar12 + *pfVar9;
      fVar13 = fVar13 + pfVar9[1];
      fVar14 = fVar14 + pfVar9[2];
      fVar15 = fVar15 + pfVar9[3];
      iVar10 = iVar10 + 1;
    } while (iVar10 < sVar1);
  }
  fVar16 = (float)(int)sVar1;
  auVar6._4_4_ = fVar16;
  auVar6._0_4_ = fVar16;
  auVar6._8_4_ = fVar16;
  auVar6._12_4_ = fVar16;
  auVar11 = rcpps(auVar11,auVar6);
  *param_3 = (2.0 - fVar16 * auVar11._0_4_) * auVar11._0_4_ * fVar12;
  param_3[1] = (2.0 - fVar16 * auVar11._4_4_) * auVar11._4_4_ * fVar13;
  param_3[2] = (2.0 - fVar16 * auVar11._8_4_) * auVar11._8_4_ * fVar14;
  param_3[3] = (2.0 - fVar16 * auVar11._12_4_) * auVar11._12_4_ * fVar15;
  return;
}



// FUNCTION 14384d930 FUN_14384d930 body=392 status=ok
// SIG undefined FUN_14384d930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14384d930(float *param_1,longlong param_2,int *param_3,uint *param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  
  uVar5 = uRam00000001467f08b8;
  piVar7 = (int *)((longlong)*param_3 * 0x10 + *(longlong *)(param_2 + 0x18));
  fVar28 = 0.0;
  fVar29 = 0.0;
  fVar30 = 0.0;
  fVar31 = 0.0;
  uVar8 = (uint)(short)piVar7[2];
  uVar9 = (ulonglong)uVar8;
  piVar7 = (int *)(*(longlong *)(param_2 + 0x28) + (longlong)*piVar7 * 0x14);
  lVar3 = *(longlong *)(param_2 + 0x38);
  iVar6 = *piVar7;
  pfVar1 = (float *)(lVar3 + (longlong)iVar6 * 0x10);
  if (0 < (int)uVar8) {
    do {
      pfVar2 = (float *)(lVar3 + (longlong)*piVar7 * 0x10);
      iVar6 = piVar7[1];
      fVar13 = *pfVar2 - *pfVar1;
      fVar18 = pfVar2[1] - pfVar1[1];
      fVar20 = pfVar2[2] - pfVar1[2];
      fVar22 = pfVar2[3] - pfVar1[3];
      piVar7 = piVar7 + 5;
      pfVar2 = (float *)(lVar3 + (longlong)iVar6 * 0x10);
      fVar24 = *pfVar2 - *pfVar1;
      fVar25 = pfVar2[1] - pfVar1[1];
      fVar26 = pfVar2[2] - pfVar1[2];
      fVar27 = pfVar2[3] - pfVar1[3];
      fVar28 = fVar28 + (fVar26 * fVar18 - fVar20 * fVar25);
      fVar29 = fVar29 + (fVar24 * fVar20 - fVar13 * fVar26);
      fVar30 = fVar30 + (fVar25 * fVar13 - fVar18 * fVar24);
      fVar31 = fVar31 + (fVar27 * fVar22 - fVar22 * fVar27);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  fVar13 = fVar28 * fVar28;
  fVar18 = fVar29 * fVar29;
  fVar20 = fVar30 * fVar30;
  auVar15._4_4_ = fVar20;
  auVar15._0_4_ = fVar20;
  auVar15._8_4_ = fVar20;
  auVar15._12_4_ = fVar20;
  fVar24 = fVar18 + fVar13 + fVar20;
  fVar25 = fVar18 + fVar13 + fVar20;
  fVar26 = fVar18 + fVar13 + fVar20;
  fVar27 = fVar18 + fVar13 + fVar20;
  auVar32._0_4_ = fVar18 + fVar13 + fVar20;
  auVar32._4_4_ = fVar18 + fVar13 + fVar20;
  auVar32._8_4_ = fVar18 + fVar13 + fVar20;
  auVar32._12_4_ = fVar18 + fVar13 + fVar20;
  auVar16 = rsqrtps(auVar15,auVar32);
  fVar13 = auVar16._0_4_;
  fVar18 = auVar16._4_4_;
  fVar20 = auVar16._8_4_;
  fVar22 = auVar16._12_4_;
  uVar8 = -(uint)(0.0 - auVar32._0_4_ < 0.0);
  uVar10 = -(uint)(0.0 - auVar32._4_4_ < 0.0);
  uVar11 = -(uint)(0.0 - auVar32._8_4_ < 0.0);
  uVar12 = -(uint)(0.0 - auVar32._12_4_ < 0.0);
  auVar16._4_4_ = uVar10;
  auVar16._0_4_ = uVar8;
  auVar16._8_4_ = uVar11;
  auVar16._12_4_ = uVar12;
  iVar6 = movmskps(iVar6 * 2,auVar16);
  auVar17._0_4_ = fVar13 * 0.5;
  auVar17._4_4_ = fVar18 * 0.5;
  auVar17._8_4_ = fVar20 * 0.5;
  auVar17._12_4_ = fVar22 * 0.5;
  if (iVar6 == 0) {
    *(undefined8 *)param_4 = _DAT_1467f08b0;
    *(undefined8 *)(param_4 + 2) = uVar5;
    uVar5 = uRam00000001467f06e8;
    *(undefined8 *)param_1 = _DAT_1467f06e0;
    *(undefined8 *)(param_1 + 2) = uVar5;
    return param_1;
  }
  auVar4._4_4_ = fVar25;
  auVar4._0_4_ = fVar24;
  auVar4._8_4_ = fVar26;
  auVar4._12_4_ = fVar27;
  auVar16 = rsqrtps(auVar17,auVar4);
  fVar14 = auVar16._0_4_;
  fVar19 = auVar16._4_4_;
  fVar21 = auVar16._8_4_;
  fVar23 = auVar16._12_4_;
  *param_4 = (uint)((float)(~-(uint)(auVar32._0_4_ <= 0.0) &
                           (uint)((3.0 - auVar32._0_4_ * fVar13 * fVar13) * auVar17._0_4_)) * fVar28
                   ) & uVar8 | ~uVar8 & (uint)fVar28;
  param_4[1] = (uint)((float)(~-(uint)(auVar32._4_4_ <= 0.0) &
                             (uint)((3.0 - auVar32._4_4_ * fVar18 * fVar18) * auVar17._4_4_)) *
                     fVar29) & uVar10 | ~uVar10 & (uint)fVar29;
  param_4[2] = (uint)((float)(~-(uint)(auVar32._8_4_ <= 0.0) &
                             (uint)((3.0 - auVar32._8_4_ * fVar20 * fVar20) * auVar17._8_4_)) *
                     fVar30) & uVar11 | ~uVar11 & (uint)fVar30;
  param_4[3] = (uint)((float)(~-(uint)(auVar32._12_4_ <= 0.0) &
                             (uint)((3.0 - auVar32._12_4_ * fVar22 * fVar22) * auVar17._12_4_)) *
                     fVar31) & uVar12 | ~uVar12 & (uint)fVar31;
  fVar28 = (float)(~-(uint)(fVar25 <= 0.0) &
                  (uint)((3.0 - fVar25 * fVar19 * fVar19) * fVar19 * 0.5 * fVar25)) *
           fRam00000001467f07e4;
  fVar29 = (float)(~-(uint)(fVar26 <= 0.0) &
                  (uint)((3.0 - fVar26 * fVar21 * fVar21) * fVar21 * 0.5 * fVar26)) *
           fRam00000001467f07e8;
  fVar30 = (float)(~-(uint)(fVar27 <= 0.0) &
                  (uint)((3.0 - fVar27 * fVar23 * fVar23) * fVar23 * 0.5 * fVar27)) *
           fRam00000001467f07ec;
  *param_1 = (float)(~-(uint)(fVar24 <= 0.0) &
                    (uint)((3.0 - fVar24 * fVar14 * fVar14) * fVar14 * 0.5 * fVar24)) *
             _DAT_1467f07e0;
  param_1[1] = fVar28;
  param_1[2] = fVar29;
  param_1[3] = fVar30;
  return param_1;
}



// FUNCTION 14384dac0 FUN_14384dac0 body=651 status=ok
// SIG undefined FUN_14384dac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14384dac0(float *param_1,longlong param_2,undefined4 *param_3,uint *param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  puVar7 = (undefined4 *)
           FUN_1437fb610(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20),
                         param_2 + 0xb0,param_2 + 0xd0,param_2 + 0x90,*param_3);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  sVar1 = *(short *)(puVar7 + 2);
  fVar33 = 0.0;
  fVar34 = 0.0;
  fVar35 = 0.0;
  fVar36 = 0.0;
  piVar8 = (int *)FUN_1437fb5b0(uVar4,uVar2,param_2 + 0xc0,param_2 + 0xe0,param_2 + 0x70,*puVar7);
  iVar6 = *(int *)(param_2 + 0x40);
  iVar12 = *piVar8;
  if (iVar12 < iVar6) {
    pfVar9 = (float *)((longlong)iVar12 * 0x10 + *(longlong *)(param_2 + 0x38));
  }
  else {
    pfVar9 = (float *)((longlong)(iVar12 - iVar6) * 0x10 + *(longlong *)(param_2 + 0xf0));
  }
  fVar26 = *pfVar9;
  fVar28 = pfVar9[1];
  fVar30 = pfVar9[2];
  fVar24 = pfVar9[3];
  iVar12 = 0;
  if (0 < sVar1) {
    do {
      piVar8 = (int *)FUN_1437fb5b0(uVar4,uVar2);
      iVar3 = *piVar8;
      if (iVar3 < iVar6) {
        pfVar11 = (float *)((longlong)iVar3 * 0x10 + *(longlong *)(param_2 + 0x38));
      }
      else {
        pfVar11 = (float *)((longlong)(iVar3 - iVar6) * 0x10 + *(longlong *)(param_2 + 0xf0));
      }
      iVar3 = piVar8[1];
      pfVar9 = (float *)(longlong)iVar3;
      if (iVar3 < iVar6) {
        pfVar10 = (float *)((longlong)pfVar9 * 0x10 + *(longlong *)(param_2 + 0x38));
      }
      else {
        pfVar9 = (float *)(ulonglong)(uint)(iVar3 - iVar6);
        pfVar10 = (float *)((longlong)(iVar3 - iVar6) * 0x10 + *(longlong *)(param_2 + 0xf0));
      }
      fVar25 = *pfVar11 - fVar26;
      fVar27 = pfVar11[1] - fVar28;
      fVar29 = pfVar11[2] - fVar30;
      fVar31 = pfVar11[3] - fVar24;
      fVar17 = *pfVar10 - fVar26;
      fVar18 = pfVar10[1] - fVar28;
      fVar19 = pfVar10[2] - fVar30;
      fVar20 = pfVar10[3] - fVar24;
      iVar12 = iVar12 + 1;
      fVar33 = fVar33 + (fVar19 * fVar27 - fVar29 * fVar18);
      fVar34 = fVar34 + (fVar17 * fVar29 - fVar25 * fVar19);
      fVar35 = fVar35 + (fVar18 * fVar25 - fVar27 * fVar17);
      fVar36 = fVar36 + (fVar20 * fVar31 - fVar31 * fVar20);
    } while (iVar12 < sVar1);
  }
  uVar4 = uRam00000001467f08b8;
  fVar26 = fVar33 * fVar33;
  fVar28 = fVar34 * fVar34;
  fVar30 = fVar35 * fVar35;
  auVar21._4_4_ = fVar30;
  auVar21._0_4_ = fVar30;
  auVar21._8_4_ = fVar30;
  auVar21._12_4_ = fVar30;
  fVar17 = fVar28 + fVar26 + fVar30;
  fVar18 = fVar28 + fVar26 + fVar30;
  fVar19 = fVar28 + fVar26 + fVar30;
  fVar20 = fVar28 + fVar26 + fVar30;
  auVar32._0_4_ = fVar28 + fVar26 + fVar30;
  auVar32._4_4_ = fVar28 + fVar26 + fVar30;
  auVar32._8_4_ = fVar28 + fVar26 + fVar30;
  auVar32._12_4_ = fVar28 + fVar26 + fVar30;
  auVar22 = rsqrtps(auVar21,auVar32);
  fVar26 = auVar22._0_4_;
  fVar28 = auVar22._4_4_;
  fVar30 = auVar22._8_4_;
  fVar24 = auVar22._12_4_;
  uVar13 = -(uint)(0.0 - auVar32._0_4_ < 0.0);
  uVar14 = -(uint)(0.0 - auVar32._4_4_ < 0.0);
  uVar15 = -(uint)(0.0 - auVar32._8_4_ < 0.0);
  uVar16 = -(uint)(0.0 - auVar32._12_4_ < 0.0);
  auVar22._4_4_ = uVar14;
  auVar22._0_4_ = uVar13;
  auVar22._8_4_ = uVar15;
  auVar22._12_4_ = uVar16;
  iVar6 = movmskps((int)pfVar9,auVar22);
  auVar23._0_4_ = fVar26 * 0.5;
  auVar23._4_4_ = fVar28 * 0.5;
  auVar23._8_4_ = fVar30 * 0.5;
  auVar23._12_4_ = fVar24 * 0.5;
  if (iVar6 == 0) {
    *(undefined8 *)param_4 = _DAT_1467f08b0;
    *(undefined8 *)(param_4 + 2) = uVar4;
    uVar4 = uRam00000001467f06e8;
    *(undefined8 *)param_1 = _DAT_1467f06e0;
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  else {
    auVar5._4_4_ = fVar18;
    auVar5._0_4_ = fVar17;
    auVar5._8_4_ = fVar19;
    auVar5._12_4_ = fVar20;
    auVar22 = rsqrtps(auVar23,auVar5);
    fVar25 = auVar22._0_4_;
    fVar27 = auVar22._4_4_;
    fVar29 = auVar22._8_4_;
    fVar31 = auVar22._12_4_;
    *param_4 = (uint)((float)(~-(uint)(auVar32._0_4_ <= 0.0) &
                             (uint)((3.0 - auVar32._0_4_ * fVar26 * fVar26) * auVar23._0_4_)) *
                     fVar33) & uVar13 | ~uVar13 & (uint)fVar33;
    param_4[1] = (uint)((float)(~-(uint)(auVar32._4_4_ <= 0.0) &
                               (uint)((3.0 - auVar32._4_4_ * fVar28 * fVar28) * auVar23._4_4_)) *
                       fVar34) & uVar14 | ~uVar14 & (uint)fVar34;
    param_4[2] = (uint)((float)(~-(uint)(auVar32._8_4_ <= 0.0) &
                               (uint)((3.0 - auVar32._8_4_ * fVar30 * fVar30) * auVar23._8_4_)) *
                       fVar35) & uVar15 | ~uVar15 & (uint)fVar35;
    param_4[3] = (uint)((float)(~-(uint)(auVar32._12_4_ <= 0.0) &
                               (uint)((3.0 - auVar32._12_4_ * fVar24 * fVar24) * auVar23._12_4_)) *
                       fVar36) & uVar16 | ~uVar16 & (uint)fVar36;
    fVar33 = (float)(~-(uint)(fVar18 <= 0.0) &
                    (uint)((3.0 - fVar18 * fVar27 * fVar27) * fVar27 * 0.5 * fVar18)) *
             fRam00000001467f07e4;
    fVar34 = (float)(~-(uint)(fVar19 <= 0.0) &
                    (uint)((3.0 - fVar19 * fVar29 * fVar29) * fVar29 * 0.5 * fVar19)) *
             fRam00000001467f07e8;
    fVar35 = (float)(~-(uint)(fVar20 <= 0.0) &
                    (uint)((3.0 - fVar20 * fVar31 * fVar31) * fVar31 * 0.5 * fVar20)) *
             fRam00000001467f07ec;
    *param_1 = (float)(~-(uint)(fVar17 <= 0.0) &
                      (uint)((3.0 - fVar17 * fVar25 * fVar25) * fVar25 * 0.5 * fVar17)) *
               _DAT_1467f07e0;
    param_1[1] = fVar33;
    param_1[2] = fVar34;
    param_1[3] = fVar35;
  }
  return param_1;
}



// FUNCTION 14384dd50 FUN_14384dd50 body=586 status=ok
// SIG undefined FUN_14384dd50(void)

void FUN_14384dd50(longlong param_1,undefined4 *param_2,float *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar15 [16];
  float fVar14;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  
  puVar6 = (undefined4 *)
           FUN_1437fb610(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                         param_1 + 0xb0,param_1 + 0xd0,param_1 + 0x90,*param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  sVar1 = *(short *)(puVar6 + 2);
  fVar31 = 0.0;
  fVar32 = 0.0;
  fVar33 = 0.0;
  fVar28 = 0.0;
  fVar29 = 0.0;
  fVar30 = 0.0;
  piVar7 = (int *)FUN_1437fb5b0(uVar5,uVar2,param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,*puVar6);
  auVar12._8_8_ = extraout_XMM0_Qb;
  auVar12._0_8_ = extraout_XMM0_Qa;
  iVar3 = *(int *)(param_1 + 0x40);
  iVar10 = *piVar7;
  if (iVar10 < iVar3) {
    pfVar8 = (float *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar8 = (float *)((longlong)(iVar10 - iVar3) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  fVar14 = *pfVar8;
  fVar19 = pfVar8[1];
  fVar21 = pfVar8[2];
  fVar27 = pfVar8[3];
  iVar10 = 0;
  if (0 < sVar1) {
    do {
      piVar7 = (int *)FUN_1437fb5b0(uVar5,uVar2);
      iVar4 = *piVar7;
      if (iVar4 < iVar3) {
        pfVar8 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        pfVar8 = (float *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      iVar4 = piVar7[1];
      if (iVar4 < iVar3) {
        pfVar9 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        pfVar9 = (float *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      fVar31 = fVar31 + *pfVar8;
      fVar32 = fVar32 + pfVar8[1];
      fVar33 = fVar33 + pfVar8[2];
      fVar13 = *pfVar9 - fVar14;
      fVar18 = pfVar9[1] - fVar19;
      fVar20 = pfVar9[2] - fVar21;
      fVar22 = pfVar9[3] - fVar27;
      iVar10 = iVar10 + 1;
      fVar23 = *pfVar8 - fVar14;
      fVar24 = pfVar8[1] - fVar19;
      fVar25 = pfVar8[2] - fVar21;
      fVar26 = pfVar8[3] - fVar27;
      fVar11 = fVar18 * fVar23 - fVar24 * fVar13;
      fVar18 = fVar20 * fVar24 - fVar25 * fVar18;
      fVar13 = fVar13 * fVar25 - fVar23 * fVar20;
      auVar12._12_4_ = fVar22 * fVar26 - fVar26 * fVar22;
      auVar12._4_4_ = fVar13;
      auVar12._0_4_ = fVar18;
      auVar12._8_4_ = fVar11;
      fVar28 = fVar28 + fVar18;
      fVar29 = fVar29 + fVar13;
      fVar30 = fVar30 + fVar11;
    } while (iVar10 < sVar1);
  }
  auVar15._0_4_ = (float)(int)sVar1;
  auVar15._4_4_ = auVar15._0_4_;
  auVar15._8_4_ = auVar15._0_4_;
  auVar15._12_4_ = auVar15._0_4_;
  auVar12 = rcpps(auVar12,auVar15);
  fVar14 = fVar28 * fVar28;
  fVar19 = fVar29 * fVar29;
  auVar16._8_4_ = fVar30 * fVar30;
  auVar16._4_4_ = auVar16._8_4_;
  auVar16._0_4_ = auVar16._8_4_;
  auVar16._12_4_ = auVar16._8_4_;
  fVar27 = fVar19 + fVar14 + auVar16._8_4_;
  fVar11 = fVar19 + fVar14 + auVar16._8_4_;
  fVar18 = fVar19 + fVar14 + auVar16._8_4_;
  auVar17._4_4_ = fVar11;
  auVar17._0_4_ = fVar27;
  auVar17._8_4_ = fVar18;
  auVar17._12_4_ = fVar19 + fVar14 + auVar16._8_4_;
  auVar17 = rsqrtps(auVar16,auVar17);
  fVar14 = auVar17._0_4_;
  fVar19 = auVar17._4_4_;
  fVar21 = auVar17._8_4_;
  fVar28 = fVar28 * (float)(~-(uint)(fVar27 <= 0.0) &
                           (uint)((3.0 - fVar27 * fVar14 * fVar14) * fVar14 * 0.5));
  fVar29 = fVar29 * (float)(~-(uint)(fVar11 <= 0.0) &
                           (uint)((3.0 - fVar11 * fVar19 * fVar19) * fVar19 * 0.5));
  fVar30 = fVar30 * (float)(~-(uint)(fVar18 <= 0.0) &
                           (uint)((3.0 - fVar18 * fVar21 * fVar21) * fVar21 * 0.5));
  *param_3 = fVar28;
  param_3[1] = fVar29;
  param_3[2] = fVar30;
  param_3[3] = 0.0 - ((2.0 - auVar15._0_4_ * auVar12._4_4_) * auVar12._4_4_ * fVar32 * fVar29 +
                      (2.0 - auVar15._0_4_ * auVar12._0_4_) * auVar12._0_4_ * fVar31 * fVar28 +
                     (2.0 - auVar15._0_4_ * auVar12._8_4_) * auVar12._8_4_ * fVar33 * fVar30);
  return;
}



// FUNCTION 14384dfa0 FUN_14384dfa0 body=724 status=ok
// SIG undefined FUN_14384dfa0(void)

void FUN_14384dfa0(longlong param_1,undefined4 *param_2,int *param_3,float *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  
  piVar8 = (int *)FUN_1437fb610(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                                param_1 + 0xb0,param_1 + 0xd0,param_1 + 0x90,*param_2);
  piVar8 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                                param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,*piVar8 + *param_3);
  piVar9 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  iVar1 = *piVar8;
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar1 < iVar2) {
    pfVar10 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar10 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  iVar1 = piVar8[1];
  fVar5 = *pfVar10;
  fVar6 = pfVar10[1];
  fVar7 = pfVar10[2];
  if (iVar1 < iVar2) {
    pfVar10 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar10 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  fVar13 = *param_4;
  fVar17 = param_4[1];
  fVar18 = param_4[2];
  fVar28 = *pfVar10 - fVar5;
  fVar30 = pfVar10[1] - fVar6;
  fVar32 = pfVar10[2] - fVar7;
  iVar1 = *piVar9;
  fVar29 = fVar28 * fVar17 - fVar30 * fVar13;
  fVar31 = fVar30 * fVar18 - fVar32 * fVar17;
  fVar33 = fVar32 * fVar13 - fVar28 * fVar18;
  fVar28 = fVar31 * fVar31;
  fVar30 = fVar33 * fVar33;
  auVar14._8_4_ = fVar29 * fVar29;
  auVar14._4_4_ = auVar14._8_4_;
  auVar14._0_4_ = auVar14._8_4_;
  auVar14._12_4_ = auVar14._8_4_;
  fVar22 = fVar30 + fVar28 + auVar14._8_4_;
  fVar24 = fVar30 + fVar28 + auVar14._8_4_;
  fVar26 = fVar30 + fVar28 + auVar14._8_4_;
  auVar15._4_4_ = fVar24;
  auVar15._0_4_ = fVar22;
  auVar15._8_4_ = fVar26;
  auVar15._12_4_ = fVar30 + fVar28 + auVar14._8_4_;
  auVar15 = rsqrtps(auVar14,auVar15);
  fVar28 = auVar15._0_4_;
  fVar30 = auVar15._4_4_;
  fVar32 = auVar15._8_4_;
  if (iVar1 < iVar2) {
    pfVar10 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar10 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  iVar1 = piVar9[1];
  if (iVar1 < iVar2) {
    pfVar11 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar11 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  fVar23 = (*pfVar11 - *pfVar10) * fVar17 - (pfVar11[1] - pfVar10[1]) * fVar13;
  fVar25 = (pfVar11[1] - pfVar10[1]) * fVar18 - (pfVar11[2] - pfVar10[2]) * fVar17;
  fVar27 = (pfVar11[2] - pfVar10[2]) * fVar13 - (*pfVar11 - *pfVar10) * fVar18;
  fVar13 = fVar25 * fVar25;
  fVar17 = fVar27 * fVar27;
  auVar16._8_4_ = fVar23 * fVar23;
  auVar16._4_4_ = auVar16._8_4_;
  auVar16._0_4_ = auVar16._8_4_;
  auVar16._12_4_ = auVar16._8_4_;
  fVar19 = fVar17 + fVar13 + auVar16._8_4_;
  fVar20 = fVar17 + fVar13 + auVar16._8_4_;
  fVar21 = fVar17 + fVar13 + auVar16._8_4_;
  auVar3._4_4_ = fVar20;
  auVar3._0_4_ = fVar19;
  auVar3._8_4_ = fVar21;
  auVar3._12_4_ = fVar17 + fVar13 + auVar16._8_4_;
  auVar15 = rsqrtps(auVar16,auVar3);
  fVar13 = auVar15._0_4_;
  fVar17 = auVar15._4_4_;
  fVar18 = auVar15._8_4_;
  fVar22 = (float)(~-(uint)(fVar19 <= 0.0) & (uint)((3.0 - fVar19 * fVar13 * fVar13) * fVar13 * 0.5)
                  ) * fVar25 +
           fVar31 * (float)(~-(uint)(fVar22 <= 0.0) &
                           (uint)((3.0 - fVar22 * fVar28 * fVar28) * fVar28 * 0.5));
  fVar24 = (float)(~-(uint)(fVar20 <= 0.0) & (uint)((3.0 - fVar20 * fVar17 * fVar17) * fVar17 * 0.5)
                  ) * fVar27 +
           fVar33 * (float)(~-(uint)(fVar24 <= 0.0) &
                           (uint)((3.0 - fVar24 * fVar30 * fVar30) * fVar30 * 0.5));
  fVar26 = (float)(~-(uint)(fVar21 <= 0.0) & (uint)((3.0 - fVar21 * fVar18 * fVar18) * fVar18 * 0.5)
                  ) * fVar23 +
           fVar29 * (float)(~-(uint)(fVar26 <= 0.0) &
                           (uint)((3.0 - fVar26 * fVar32 * fVar32) * fVar32 * 0.5));
  fVar13 = fVar22 * fVar22;
  fVar17 = fVar24 * fVar24;
  fVar18 = fVar26 * fVar26;
  auVar12._4_4_ = fVar13;
  auVar12._0_4_ = fVar13;
  auVar12._8_4_ = fVar13;
  auVar12._12_4_ = fVar13;
  fVar28 = fVar17 + fVar13 + fVar18;
  fVar30 = fVar17 + fVar13 + fVar18;
  fVar32 = fVar17 + fVar13 + fVar18;
  auVar4._4_4_ = fVar30;
  auVar4._0_4_ = fVar28;
  auVar4._8_4_ = fVar32;
  auVar4._12_4_ = fVar17 + fVar13 + fVar18;
  auVar15 = rsqrtps(auVar12,auVar4);
  fVar13 = auVar15._0_4_;
  fVar17 = auVar15._4_4_;
  fVar18 = auVar15._8_4_;
  fVar22 = fVar22 * (float)(~-(uint)(fVar28 <= 0.0) &
                           (uint)((3.0 - fVar28 * fVar13 * fVar13) * fVar13 * 0.5));
  fVar24 = fVar24 * (float)(~-(uint)(fVar30 <= 0.0) &
                           (uint)((3.0 - fVar30 * fVar17 * fVar17) * fVar17 * 0.5));
  fVar26 = fVar26 * (float)(~-(uint)(fVar32 <= 0.0) &
                           (uint)((3.0 - fVar32 * fVar18 * fVar18) * fVar18 * 0.5));
  *param_5 = fVar22;
  param_5[1] = fVar24;
  param_5[2] = fVar26;
  param_5[3] = 0.0 - (fVar24 * fVar6 + fVar22 * fVar5 + fVar26 * fVar7);
  return;
}



// FUNCTION 14384e280 FUN_14384e280 body=423 status=ok
// SIG undefined FUN_14384e280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_14384e280(longlong param_1,int *param_2,longlong param_3,float *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res8 [8];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [48];
  
  fVar12 = *(float *)(param_3 + 0x1c);
  cVar6 = '\0';
  piVar8 = (int *)((longlong)*param_2 * 0x10 + *(longlong *)(param_1 + 0x18));
  fVar9 = ABS(fVar12 - _DAT_1467f07e0);
  fVar10 = ABS(fVar12 - fRam00000001467f07e4);
  fVar11 = ABS(fVar12 - fRam00000001467f07e8);
  fVar12 = ABS(fVar12 - fRam00000001467f07ec);
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x38) +
           (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*piVar8 * 0x14) * 0x10);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  iVar7 = *piVar8 + 1;
  if (iVar7 < *piVar8 + -1 + (int)(short)piVar8[2]) {
    local_68._0_4_ = (float)uVar3;
    local_68._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    uStack_60._0_4_ = (float)uVar4;
    uStack_60._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    fVar13 = (float)local_68;
    fVar14 = local_68._4_4_;
    fVar15 = (float)uStack_60;
    fVar16 = uStack_60._4_4_;
    local_68 = uVar3;
    uStack_60 = uVar4;
    do {
      local_98 = fVar9 + _DAT_1467f07e0;
      fStack_94 = fVar10 + fRam00000001467f07e4;
      fStack_90 = fVar11 + fRam00000001467f07e8;
      fStack_8c = fVar12 + fRam00000001467f07ec;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 0x14);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)*piVar5 * 0x10);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)piVar5[1] * 0x10);
      local_88 = *puVar2;
      uStack_84 = puVar2[1];
      uStack_80 = puVar2[2];
      uStack_7c = puVar2[3];
      piVar5 = (int *)FUN_143e0a1f0(local_res8,param_3,&local_68,&local_78,&local_88,0,&local_98,
                                    local_58);
      if (*piVar5 != 0) {
        if (ABS(local_98 - _DAT_1467f07e0) < fVar9) {
          cVar6 = '\x01';
          fVar9 = ABS(local_98 - _DAT_1467f07e0);
          fVar10 = ABS(fStack_94 - fRam00000001467f07e4);
          fVar11 = ABS(fStack_90 - fRam00000001467f07e8);
          fVar12 = ABS(fStack_8c - fRam00000001467f07ec);
          fVar13 = local_98;
          fVar14 = fStack_94;
          fVar15 = fStack_90;
          fVar16 = fStack_8c;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (short)piVar8[2] + -1 + *piVar8);
    if (cVar6 != '\0') {
      *param_4 = fVar13;
      param_4[1] = fVar14;
      param_4[2] = fVar15;
      param_4[3] = fVar16;
    }
  }
  return cVar6;
}



// FUNCTION 14384e430 FUN_14384e430 body=612 status=ok
// SIG undefined FUN_14384e430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_14384e430(longlong param_1,undefined4 *param_2,longlong param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int *piVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  char cVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_res8 [8];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [64];
  
  piVar7 = (int *)FUN_1437fb610(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                                param_1 + 0xb0,param_1 + 0xd0,param_1 + 0x90,*param_2);
  piVar8 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                                param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,*piVar7);
  iVar13 = *piVar8;
  if (iVar13 < *(int *)(param_1 + 0x40)) {
    pfVar9 = (float *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar9 = (float *)((longlong)(iVar13 - *(int *)(param_1 + 0x40)) * 0x10 +
                      *(longlong *)(param_1 + 0xf0));
  }
  fVar18 = *pfVar9;
  fVar19 = pfVar9[1];
  fVar20 = pfVar9[2];
  fVar21 = pfVar9[3];
  cVar12 = '\0';
  fVar17 = *(float *)(param_3 + 0x1c);
  iVar13 = *piVar7 + 1;
  fVar14 = ABS(fVar17 - _DAT_1467f07e0);
  fVar15 = ABS(fVar17 - fRam00000001467f07e4);
  fVar16 = ABS(fVar17 - fRam00000001467f07e8);
  fVar17 = ABS(fVar17 - fRam00000001467f07ec);
  local_88 = fVar18;
  fStack_84 = fVar19;
  fStack_80 = fVar20;
  fStack_7c = fVar21;
  if (iVar13 < *piVar7 + -1 + (int)(short)piVar7[2]) {
    do {
      fVar6 = fRam00000001467f07ec;
      fVar5 = fRam00000001467f07e8;
      fVar4 = fRam00000001467f07e4;
      fVar3 = _DAT_1467f07e0;
      piVar8 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                                    param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,iVar13);
      iVar1 = *(int *)(param_1 + 0x40);
      iVar2 = *piVar8;
      if (iVar2 < iVar1) {
        puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar11 = (undefined8 *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      iVar2 = piVar8[1];
      local_98 = *puVar11;
      uStack_90 = puVar11[1];
      if (iVar2 < iVar1) {
        puVar10 = (undefined4 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar10 = (undefined4 *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      local_a8 = *puVar10;
      uStack_a4 = puVar10[1];
      uStack_a0 = puVar10[2];
      uStack_9c = puVar10[3];
      local_b8 = fVar14 + fVar3;
      fStack_b4 = fVar15 + fVar4;
      fStack_b0 = fVar16 + fVar5;
      fStack_ac = fVar17 + fVar6;
      piVar8 = (int *)FUN_143e0a1f0(local_res8,param_3,&local_88,&local_98,&local_a8,0,&local_b8,
                                    local_78);
      if (*piVar8 != 0) {
        if (ABS(local_b8 - _DAT_1467f07e0) < fVar14) {
          cVar12 = '\x01';
          fVar14 = ABS(local_b8 - _DAT_1467f07e0);
          fVar15 = ABS(fStack_b4 - fRam00000001467f07e4);
          fVar16 = ABS(fStack_b0 - fRam00000001467f07e8);
          fVar17 = ABS(fStack_ac - fRam00000001467f07ec);
          fVar18 = local_b8;
          fVar19 = fStack_b4;
          fVar20 = fStack_b0;
          fVar21 = fStack_ac;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (short)piVar7[2] + -1 + *piVar7);
    if (cVar12 != '\0') {
      *param_4 = fVar18;
      param_4[1] = fVar19;
      param_4[2] = fVar20;
      param_4[3] = fVar21;
    }
  }
  else {
    cVar12 = '\0';
  }
  return cVar12;
}



// FUNCTION 14384e6a0 FUN_14384e6a0 body=351 status=ok
// SIG undefined FUN_14384e6a0(void)

char FUN_14384e6a0(longlong param_1,int *param_2,longlong param_3,float *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [8];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [32];
  
  piVar6 = (int *)((longlong)*param_2 * 0x10 + *(longlong *)(param_1 + 0x18));
  cVar4 = '\0';
  fVar7 = *(float *)(param_3 + 0x1c);
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x38) +
           (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*piVar6 * 0x14) * 0x10);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  iVar5 = *piVar6 + 1;
  fVar8 = fVar7;
  fVar9 = fVar7;
  fVar10 = fVar7;
  if (iVar5 < *piVar6 + -1 + (int)(short)piVar6[2]) {
    do {
      piVar3 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 0x14);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)*piVar3 * 0x10);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)piVar3[1] * 0x10);
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      local_88 = fVar7;
      fStack_84 = fVar8;
      fStack_80 = fVar9;
      fStack_7c = fVar10;
      piVar3 = (int *)FUN_143e0a1f0(local_res8,param_3,&local_58,&local_68,&local_78,0,&local_88,
                                    local_48);
      if ((*piVar3 != 0) && (local_88 < fVar7)) {
        cVar4 = '\x01';
        fVar7 = local_88;
        fVar8 = fStack_84;
        fVar9 = fStack_80;
        fVar10 = fStack_7c;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (short)piVar6[2] + -1 + *piVar6);
    if (cVar4 != '\0') {
      *param_4 = fVar7;
      param_4[1] = fVar8;
      param_4[2] = fVar9;
      param_4[3] = fVar10;
    }
  }
  else {
    cVar4 = '\0';
  }
  return cVar4;
}



// FUNCTION 14384e800 FUN_14384e800 body=325 status=ok
// SIG undefined FUN_14384e800(void)

char FUN_14384e800(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [32];
  
  cVar7 = '\0';
  piVar6 = (int *)((longlong)*param_2 * 0x10 + *(longlong *)(param_1 + 0x18));
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x38) +
           (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*piVar6 * 0x14) * 0x10);
  local_48 = *puVar1;
  uStack_40 = puVar1[1];
  iVar5 = *piVar6 + 1;
  fVar8 = DAT_1467f06f0;
  fVar9 = fRam00000001467f06f4;
  fVar10 = fRam00000001467f06f8;
  fVar11 = fRam00000001467f06fc;
  if (iVar5 < *piVar6 + -1 + (int)(short)piVar6[2]) {
    do {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 0x14);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)*piVar2 * 0x10);
      local_58 = *puVar1;
      uStack_50 = puVar1[1];
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)piVar2[1] * 0x10);
      local_68 = *puVar3;
      uStack_64 = puVar3[1];
      uStack_60 = puVar3[2];
      uStack_5c = puVar3[3];
      local_78 = fVar8;
      fStack_74 = fVar9;
      fStack_70 = fVar10;
      fStack_6c = fVar11;
      iVar4 = FUN_143e0a6b0(param_3,param_4,&local_48,&local_58,&local_68,&local_78,local_38);
      if (iVar4 != 0) {
        if (local_78 < fVar8) {
          cVar7 = '\x01';
          fVar8 = local_78;
          fVar9 = fStack_74;
          fVar10 = fStack_70;
          fVar11 = fStack_6c;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (short)piVar6[2] + -1 + *piVar6);
    if (cVar7 != '\0') {
      *param_5 = fVar8;
      param_5[1] = fVar9;
      param_5[2] = fVar10;
      param_5[3] = fVar11;
    }
  }
  else {
    cVar7 = '\0';
  }
  return cVar7;
}



// FUNCTION 14384e950 FUN_14384e950 body=529 status=ok
// SIG undefined FUN_14384e950(void)

char FUN_14384e950(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
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
  undefined1 local_48 [32];
  
  piVar3 = (int *)FUN_1437fb610(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                                param_1 + 0xb0,param_1 + 0xd0,param_1 + 0x90,*param_2);
  piVar4 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                                param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,*piVar3);
  iVar7 = *piVar4;
  if (iVar7 < *(int *)(param_1 + 0x40)) {
    puVar5 = (undefined4 *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    puVar5 = (undefined4 *)
             ((longlong)(iVar7 - *(int *)(param_1 + 0x40)) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  local_58 = *puVar5;
  uStack_54 = puVar5[1];
  uStack_50 = puVar5[2];
  uStack_4c = puVar5[3];
  cVar6 = '\0';
  iVar7 = *piVar3 + 1;
  fVar8 = DAT_1467f06f0;
  fVar9 = fRam00000001467f06f4;
  fVar10 = fRam00000001467f06f8;
  fVar11 = fRam00000001467f06fc;
  if (iVar7 < *piVar3 + -1 + (int)(short)piVar3[2]) {
    do {
      piVar4 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                                    param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,iVar7);
      iVar2 = *(int *)(param_1 + 0x40);
      iVar1 = *piVar4;
      if (iVar1 < iVar2) {
        puVar5 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar5 = (undefined4 *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      iVar1 = piVar4[1];
      local_68 = *puVar5;
      uStack_64 = puVar5[1];
      uStack_60 = puVar5[2];
      uStack_5c = puVar5[3];
      if (iVar1 < iVar2) {
        puVar5 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar5 = (undefined4 *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      local_78 = *puVar5;
      uStack_74 = puVar5[1];
      uStack_70 = puVar5[2];
      uStack_6c = puVar5[3];
      local_88 = fVar8;
      fStack_84 = fVar9;
      fStack_80 = fVar10;
      fStack_7c = fVar11;
      iVar2 = FUN_143e0a6b0(param_3,param_4,&local_58,&local_68,&local_78,&local_88,local_48);
      if ((iVar2 != 0) && (local_88 < fVar8)) {
        cVar6 = '\x01';
        fVar8 = local_88;
        fVar9 = fStack_84;
        fVar10 = fStack_80;
        fVar11 = fStack_7c;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (short)piVar3[2] + -1 + *piVar3);
    if (cVar6 != '\0') {
      *param_5 = fVar8;
      param_5[1] = fVar9;
      param_5[2] = fVar10;
      param_5[3] = fVar11;
    }
  }
  else {
    cVar6 = '\0';
  }
  return cVar6;
}



// FUNCTION 14384eb70 FUN_14384eb70 body=562 status=ok
// SIG undefined FUN_14384eb70(void)

void FUN_14384eb70(longlong param_1,int *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  float fVar24;
  undefined8 uVar25;
  int *piVar26;
  float *pfVar27;
  uint uVar28;
  float *pfVar29;
  int iVar30;
  
  pfVar5 = (float *)*param_3;
  uVar1 = *(ushort *)(param_2 + 2);
  iVar2 = *param_2;
  uVar28 = (int)(short)uVar1 & 0xfffffffe;
  iVar30 = 0;
  pfVar29 = pfVar5;
  if (0 < (int)uVar28) {
    lVar6 = *(longlong *)(param_1 + 0x18);
    iVar3 = *(int *)(lVar6 + 0x40);
    do {
      piVar26 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x30));
      iVar4 = *piVar26;
      if (iVar4 < iVar3) {
        pfVar27 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar6 + 0x38));
      }
      else {
        pfVar27 = (float *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(lVar6 + 0xf0));
      }
      fVar7 = *pfVar27;
      fVar8 = pfVar27[1];
      fVar9 = pfVar27[2];
      iVar4 = piVar26[1];
      fVar10 = *(float *)(param_1 + 0x54);
      fVar11 = *(float *)(param_1 + 0x58);
      fVar12 = *(float *)(param_1 + 0x5c);
      fVar13 = *(float *)(param_1 + 0x44);
      fVar14 = *(float *)(param_1 + 0x48);
      fVar15 = *(float *)(param_1 + 0x4c);
      fVar16 = *(float *)(param_1 + 100);
      fVar17 = *(float *)(param_1 + 0x68);
      fVar18 = *(float *)(param_1 + 0x6c);
      fVar19 = *(float *)(param_1 + 0x74);
      fVar20 = *(float *)(param_1 + 0x78);
      fVar21 = *(float *)(param_1 + 0x7c);
      if (iVar4 < iVar3) {
        pfVar27 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar6 + 0x38));
      }
      else {
        pfVar27 = (float *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(lVar6 + 0xf0));
      }
      fVar22 = *pfVar27;
      fVar23 = pfVar27[1];
      fVar24 = pfVar27[2];
      iVar30 = iVar30 + 2;
      *pfVar29 = fVar8 * *(float *)(param_1 + 0x50) + fVar7 * *(float *)(param_1 + 0x40) +
                 fVar9 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x70);
      pfVar29[1] = fVar8 * fVar10 + fVar7 * fVar13 + fVar9 * fVar16 + fVar19;
      pfVar29[2] = fVar8 * fVar11 + fVar7 * fVar14 + fVar9 * fVar17 + fVar20;
      pfVar29[3] = fVar8 * fVar12 + fVar7 * fVar15 + fVar9 * fVar18 + fVar21;
      fVar7 = *(float *)(param_1 + 0x54);
      fVar8 = *(float *)(param_1 + 0x58);
      fVar9 = *(float *)(param_1 + 0x5c);
      fVar10 = *(float *)(param_1 + 0x44);
      fVar11 = *(float *)(param_1 + 0x48);
      fVar12 = *(float *)(param_1 + 0x4c);
      fVar13 = *(float *)(param_1 + 100);
      fVar14 = *(float *)(param_1 + 0x68);
      fVar15 = *(float *)(param_1 + 0x6c);
      fVar16 = *(float *)(param_1 + 0x74);
      fVar17 = *(float *)(param_1 + 0x78);
      fVar18 = *(float *)(param_1 + 0x7c);
      pfVar29[4] = fVar23 * *(float *)(param_1 + 0x50) + fVar22 * *(float *)(param_1 + 0x40) +
                   fVar24 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x70);
      pfVar29[5] = fVar23 * fVar7 + fVar22 * fVar10 + fVar24 * fVar13 + fVar16;
      pfVar29[6] = fVar23 * fVar8 + fVar22 * fVar11 + fVar24 * fVar14 + fVar17;
      pfVar29[7] = fVar23 * fVar9 + fVar22 * fVar12 + fVar24 * fVar15 + fVar18;
      pfVar29 = pfVar29 + 8;
    } while (iVar30 < (int)uVar28);
  }
  if ((uVar1 & 1) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x18);
    piVar26 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x30),
                                   lVar6 + 0xc0,lVar6 + 0xe0,lVar6 + 0x70,
                                   iVar2 + -1 + (int)(short)uVar1);
    iVar2 = *piVar26;
    if (iVar2 < *(int *)(lVar6 + 0x40)) {
      pfVar27 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar6 + 0x38));
    }
    else {
      pfVar27 = (float *)((longlong)(iVar2 - *(int *)(lVar6 + 0x40)) * 0x10 +
                         *(longlong *)(lVar6 + 0xf0));
    }
    fVar7 = *pfVar27;
    fVar8 = pfVar27[1];
    fVar9 = pfVar27[2];
    fVar10 = *(float *)(param_1 + 0x54);
    fVar11 = *(float *)(param_1 + 0x58);
    fVar12 = *(float *)(param_1 + 0x5c);
    fVar13 = *(float *)(param_1 + 0x44);
    fVar14 = *(float *)(param_1 + 0x48);
    fVar15 = *(float *)(param_1 + 0x4c);
    fVar16 = *(float *)(param_1 + 100);
    fVar17 = *(float *)(param_1 + 0x68);
    fVar18 = *(float *)(param_1 + 0x6c);
    fVar19 = *(float *)(param_1 + 0x74);
    fVar20 = *(float *)(param_1 + 0x78);
    fVar21 = *(float *)(param_1 + 0x7c);
    *pfVar29 = fVar8 * *(float *)(param_1 + 0x50) + fVar7 * *(float *)(param_1 + 0x40) +
               fVar9 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x70);
    pfVar29[1] = fVar8 * fVar10 + fVar7 * fVar13 + fVar9 * fVar16 + fVar19;
    pfVar29[2] = fVar8 * fVar11 + fVar7 * fVar14 + fVar9 * fVar17 + fVar20;
    pfVar29[3] = fVar8 * fVar12 + fVar7 * fVar15 + fVar9 * fVar18 + fVar21;
  }
  lVar6 = param_3[1];
  uVar25 = *(undefined8 *)(pfVar5 + 2);
  *(undefined8 *)(pfVar5 + (longlong)((int)lVar6 + -1) * 4) = *(undefined8 *)pfVar5;
  *(undefined8 *)(pfVar5 + (longlong)((int)lVar6 + -1) * 4 + 2) = uVar25;
  return;
}



// FUNCTION 14384edb0 FUN_14384edb0 body=392 status=ok
// SIG undefined FUN_14384edb0(void)

void FUN_14384edb0(longlong param_1,int *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  int iVar20;
  
  uVar1 = *(ushort *)(param_2 + 2);
  iVar20 = 0;
  puVar5 = (undefined8 *)*param_3;
  iVar2 = *param_2;
  uVar18 = (int)(short)uVar1 & 0xfffffffe;
  puVar19 = puVar5;
  if (0 < (int)uVar18) {
    iVar3 = *(int *)(param_1 + 0x40);
    do {
      piVar15 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30)
                                    );
      iVar4 = *piVar15;
      if (iVar4 < iVar3) {
        puVar17 = (undefined4 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar17 = (undefined4 *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      iVar4 = piVar15[1];
      uVar6 = *puVar17;
      uVar7 = puVar17[1];
      uVar8 = puVar17[2];
      uVar9 = puVar17[3];
      if (iVar4 < iVar3) {
        puVar17 = (undefined4 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar17 = (undefined4 *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      uVar10 = puVar17[1];
      uVar11 = puVar17[2];
      uVar12 = puVar17[3];
      iVar20 = iVar20 + 2;
      *(undefined4 *)(puVar19 + 2) = *puVar17;
      *(undefined4 *)((longlong)puVar19 + 0x14) = uVar10;
      *(undefined4 *)(puVar19 + 3) = uVar11;
      *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar12;
      *(undefined4 *)puVar19 = uVar6;
      *(undefined4 *)((longlong)puVar19 + 4) = uVar7;
      *(undefined4 *)(puVar19 + 1) = uVar8;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uVar9;
      puVar19 = puVar19 + 4;
    } while (iVar20 < (int)uVar18);
  }
  if ((uVar1 & 1) != 0) {
    piVar15 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                                   param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,
                                   ((int)(short)uVar1 - 1U) + iVar2);
    iVar2 = *piVar15;
    if (iVar2 < *(int *)(param_1 + 0x40)) {
      puVar16 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
    }
    else {
      puVar16 = (undefined8 *)
                ((longlong)(iVar2 - *(int *)(param_1 + 0x40)) * 0x10 + *(longlong *)(param_1 + 0xf0)
                );
    }
    uVar13 = puVar16[1];
    *puVar19 = *puVar16;
    puVar19[1] = uVar13;
  }
  lVar14 = param_3[1];
  uVar13 = puVar5[1];
  puVar5[(longlong)((int)lVar14 + -1) * 2] = *puVar5;
  (puVar5 + (longlong)((int)lVar14 + -1) * 2)[1] = uVar13;
  return;
}



// FUNCTION 14384ef40 FUN_14384ef40 body=488 status=ok
// SIG undefined FUN_14384ef40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14384ef40(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar3 = (int *)FUN_1437fb610(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                                param_1 + 0xb0,param_1 + 0xd0,param_1 + 0x90,*param_2);
  iVar2 = *piVar3;
  piVar4 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                                param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,iVar2);
  iVar7 = *piVar4;
  if (iVar7 < *(int *)(param_1 + 0x40)) {
    puVar5 = (undefined4 *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    puVar5 = (undefined4 *)
             ((longlong)(iVar7 - *(int *)(param_1 + 0x40)) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  local_38 = *puVar5;
  uStack_34 = puVar5[1];
  uStack_30 = puVar5[2];
  uStack_2c = puVar5[3];
  iVar7 = iVar2 + 1;
  if (iVar7 < iVar2 + -1 + (int)(short)piVar3[2]) {
    do {
      piVar4 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                                    param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,iVar7);
      iVar2 = *(int *)(param_1 + 0x40);
      iVar1 = *piVar4;
      if (iVar1 < iVar2) {
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar6 = (undefined8 *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      iVar1 = piVar4[1];
      local_48 = *puVar6;
      uStack_40 = puVar6[1];
      if (iVar1 < iVar2) {
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar6 = (undefined8 *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      local_58 = *puVar6;
      uStack_50 = puVar6[1];
      local_78 = *(undefined4 *)(param_3 + 0x1c);
      local_68 = _DAT_1467f06e0;
      uStack_64 = uRam00000001467f06e4;
      uStack_60 = uRam00000001467f06e8;
      uStack_5c = DAT_1467f06ec;
      uStack_74 = local_78;
      uStack_70 = local_78;
      uStack_6c = local_78;
      iVar2 = FUN_1438541a0(param_3,&local_38,&local_48,&local_58,&local_68,&local_78);
      if (iVar2 != 0) {
        *param_4 = CONCAT44(uStack_74,local_78);
        param_4[1] = CONCAT44(uStack_6c,uStack_70);
        return 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (short)piVar3[2] + -1 + *piVar3);
  }
  return 0;
}



// FUNCTION 14384f130 FUN_14384f130 body=2220 status=ok
// SIG undefined FUN_14384f130(void)

undefined8
FUN_14384f130(longlong *param_1,longlong *param_2,char param_3,longlong *param_4,uint *param_5,
             longlong *param_6)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int local_res18 [2];
  longlong *local_res20;
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  uint local_a0;
  uint local_9c;
  longlong local_98;
  int local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  int local_80;
  uint local_7c;
  longlong local_78;
  longlong lStack_70;
  LPVOID local_68;
  longlong local_60;
  undefined1 local_58 [20];
  undefined4 local_44;
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  local_res20 = param_4;
  pvVar5 = TlsGetValue(DAT_146b8198c);
  local_68 = pvVar5;
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtcomputeRegions");
  }
  iVar23 = 0;
  local_8c = 0x80000000;
  local_98 = 0;
  local_90 = 0;
  iVar14 = local_90;
  if (param_3 != '\0') {
    iVar14 = *(int *)(*(longlong *)(*param_1 + 0x18) + 0xd8) +
             *(int *)(*(longlong *)(*param_1 + 0x18) + 0x20);
    if (0 < iVar14) {
      iVar4 = iVar14;
      if (iVar14 < 0) {
        iVar4 = iVar23;
      }
      iVar4 = FUN_14370c310(&PTR_vftable_1467f0638,&local_98,iVar4,4);
      if (iVar4 < 0) {
        uVar15 = 0x80040200;
        goto LAB_14384f96e;
      }
    }
  }
  local_90 = iVar14;
  iVar14 = *(int *)(*(longlong *)(*param_1 + 0x18) + 0xd8) +
           *(int *)(*(longlong *)(*param_1 + 0x18) + 0x20);
  pvVar5 = TlsGetValue(DAT_146b7bf70);
  if (pvVar5 == (LPVOID)0x0) {
    pvVar5 = DAT_146b7bf68;
  }
  uVar21 = iVar14 * 4 + 0x7fU & 0xffffff80;
  lVar6 = *(longlong *)((longlong)pvVar5 + 0x18);
  local_88 = uVar21;
  if ((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar21) ||
     (*(ulonglong *)((longlong)pvVar5 + 0x20) < (ulonglong)((int)uVar21 + lVar6))) {
    lVar6 = FUN_1437138c0(pvVar5,uVar21);
  }
  else {
    *(longlong *)((longlong)pvVar5 + 0x18) = (int)uVar21 + lVar6;
  }
  local_60 = (longlong)iVar14;
  lStack_70 = local_60 * 4 + lVar6;
  local_78 = lVar6;
  FUN_143dfb150(local_58,&local_78);
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0x80000000;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x80000000;
  local_44 = 0;
  lVar10 = *(longlong *)(*param_1 + 0x18);
  if (0 < *(int *)(lVar10 + 0xd8) + *(int *)(lVar10 + 0x20)) {
    do {
      piVar7 = (int *)FUN_1437fb610(*(undefined8 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0x20),
                                    lVar10 + 0xb0,lVar10 + 0xd0,lVar10 + 0x90,iVar23);
      piVar8 = piVar7;
      if (0 < *(short *)((longlong)piVar7 + 10)) {
        piVar8 = piVar7 + 1;
      }
      iVar14 = *piVar8;
      uVar21 = local_88;
      while (local_88 = uVar21, iVar14 != -1) {
        lVar10 = *(longlong *)(*param_1 + 0x18);
        lVar9 = FUN_1437fb5b0(*(undefined8 *)(lVar10 + 0x28),*(undefined4 *)(lVar10 + 0x30),
                              lVar10 + 0xc0,lVar10 + 0xe0,lVar10 + 0x70,iVar14);
        bVar1 = *(byte *)(lVar9 + 0x10);
        if ((bVar1 & 0x40) == 0) {
          if (((bVar1 & 0x10) == 0) || ((int)param_1[1] != 1)) {
            uVar21 = *(uint *)(lVar9 + 0xc);
            bVar11 = uVar21 != 0xffffffff;
          }
          else {
            if (((~(bVar1 >> 5) & 1) == 0) ||
               (uVar21 = *(uint *)(lVar9 + 0xc), uVar21 == 0xffffffff)) goto LAB_14384f3cf;
            lVar10 = FUN_1437fb5b0(*(undefined8 *)(lVar10 + 0x28),*(undefined4 *)(lVar10 + 0x30),
                                   lVar10 + 0xc0,lVar10 + 0xe0,lVar10 + 0x70,
                                   *(uint *)(lVar9 + 8) & 0x3fffff);
            bVar11 = (bool)(~(*(byte *)(lVar10 + 0x10) >> 5) & 1);
          }
          if (bVar11 != false) {
            FUN_143dfb190(local_58,iVar23,uVar21 & 0x3fffff);
          }
        }
LAB_14384f3cf:
        iVar4 = piVar7[1];
        uVar21 = local_88;
        if ((iVar14 < iVar4) || (*(short *)((longlong)piVar7 + 10) + -1 + iVar4 <= iVar14)) {
          if (iVar14 == *(short *)((longlong)piVar7 + 10) + -1 + iVar4) {
            iVar14 = *piVar7;
          }
          else if ((iVar14 < *piVar7) || (*piVar7 + -1 + (int)(short)piVar7[2] <= iVar14)) {
            iVar14 = -1;
          }
          else {
            iVar14 = iVar14 + 1;
          }
        }
        else {
          iVar14 = iVar14 + 1;
        }
      }
      iVar23 = iVar23 + 1;
      lVar10 = *(longlong *)(*param_1 + 0x18);
    } while (iVar23 < *(int *)(lVar10 + 0xd8) + *(int *)(lVar10 + 0x20));
  }
  lVar10 = param_2[1];
  uVar17 = 0;
  uVar16 = uVar17;
  if (0 < (longlong)(int)lVar10) {
    do {
      FUN_143dfb190(local_58,*(undefined4 *)(*param_2 + uVar16 * 8),
                    *(undefined4 *)(*param_2 + 4 + uVar16 * 8));
      uVar16 = uVar16 + 1;
    } while ((longlong)uVar16 < (longlong)(int)lVar10);
  }
  FUN_143dfb2a0(local_58,&local_84,&local_a8);
  if ((local_84 < 0) ||
     (FUN_143dfb460(local_58,&local_80,&local_a8,&local_c8), uVar22 = local_a0, local_80 < 0)) {
    uVar15 = FUN_143703a50();
    local_c0 = 0;
    if (-1 < (int)local_bc) {
      FUN_143702e10(uVar15,local_c8,4,local_bc & 0x3fffffff);
    }
    local_c8 = 0;
    local_bc = 0x80000000;
    uVar15 = FUN_143703a50();
    local_a0 = 0;
    if (-1 < (int)local_9c) {
      FUN_143702e10(uVar15,local_a8,4,local_9c & 0x3fffffff);
    }
    local_a8 = 0;
    local_9c = 0x80000000;
    pvVar5 = TlsGetValue(DAT_146b7bf70);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = DAT_146b7bf68;
    }
    if (((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar21) ||
        ((int)(uVar21 + 0xf & 0xfffffff0) + lVar6 != *(longlong *)((longlong)pvVar5 + 0x18))) ||
       (*(longlong *)((longlong)pvVar5 + 0x28) == lVar6)) {
      FUN_143713ff0(pvVar5,lVar6);
    }
    else {
      *(longlong *)((longlong)pvVar5 + 0x18) = lVar6;
    }
    uVar15 = 0x80040200;
    pvVar5 = local_68;
    goto LAB_14384f96e;
  }
  lVar10 = (longlong)(int)local_a0;
  cVar3 = (char)local_res18[0];
  local_7c = local_a0;
  plVar20 = &local_98;
  if ((char)local_res18[0] == '\0') {
    plVar20 = local_res20;
  }
  uVar16 = uVar17;
  uVar13 = uVar17;
  uVar19 = uVar17;
  if (0 < (int)local_a0) {
    do {
      uVar21 = *(uint *)(local_a8 + uVar19 * 4);
      if (0 < (int)uVar21) {
        uVar18 = (ulonglong)uVar21;
        uVar12 = uVar16;
        do {
          uVar16 = uVar12 + 1;
          *(int *)(*plVar20 + (longlong)*(int *)(local_c8 + uVar12 * 4) * 4) = (int)uVar13;
          uVar18 = uVar18 - 1;
          uVar12 = uVar16;
        } while (uVar18 != 0);
      }
      uVar19 = uVar19 + 1;
      uVar13 = (ulonglong)((int)uVar13 + 1);
    } while ((longlong)uVar19 < lVar10);
  }
  uVar15 = FUN_143703a50();
  local_c0 = 0;
  if (-1 < (int)local_bc) {
    FUN_143702e10(uVar15,local_c8,4,local_bc & 0x3fffffff);
  }
  local_c8 = 0;
  local_bc = 0x80000000;
  uVar15 = FUN_143703a50();
  local_a0 = 0;
  if (-1 < (int)local_9c) {
    FUN_143702e10(uVar15,local_a8,4,local_9c & 0x3fffffff);
  }
  local_a8 = 0;
  local_9c = 0x80000000;
  pvVar5 = TlsGetValue(DAT_146b7bf70);
  if (pvVar5 == (LPVOID)0x0) {
    pvVar5 = DAT_146b7bf68;
  }
  if (((*(int *)((longlong)pvVar5 + 0x10) < (int)local_88) ||
      ((int)(local_88 + 0xf & 0xfffffff0) + lVar6 != *(longlong *)((longlong)pvVar5 + 0x18))) ||
     (*(longlong *)((longlong)pvVar5 + 0x28) == lVar6)) {
    FUN_143713ff0(pvVar5,lVar6);
  }
  else {
    *(longlong *)((longlong)pvVar5 + 0x18) = lVar6;
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x80000000;
  if (cVar3 == '\0') {
LAB_14384f85d:
    uVar15 = 0;
    *param_5 = uVar22;
  }
  else {
    if ((int)uVar22 < 1) {
LAB_14384f5fd:
      lVar6 = local_60;
      local_b0 = uVar22;
      uVar16 = uVar17;
      uVar13 = uVar17;
      if (0 < (int)uVar22) {
        do {
          *(undefined4 *)(local_b8 + uVar16 * 8) = 0;
          *(int *)(local_b8 + 4 + uVar16 * 8) = (int)uVar13;
          uVar13 = (ulonglong)((int)uVar13 + 1);
          uVar16 = uVar16 + 1;
        } while ((longlong)uVar16 < lVar10);
      }
      uVar16 = uVar17;
      if (0 < local_60) {
        do {
          local_res18[0] = (int)uVar16;
          FUN_143852420(&local_78,*param_1,local_res18,&local_a8);
          uVar16 = (ulonglong)((int)uVar16 + 1);
          lVar9 = (longlong)*(int *)(local_98 + uVar17 * 4);
          uVar17 = uVar17 + 1;
          *(float *)(local_b8 + lVar9 * 8) = (float)local_78 + *(float *)(local_b8 + lVar9 * 8);
        } while ((longlong)uVar17 < lVar6);
      }
      if (1 < (int)local_b0) {
        FUN_14384d160(local_b8,0,local_b0 - 1,(char)local_res18[0]);
      }
      if (param_6 != (longlong *)0x0) {
        uVar15 = FUN_143703a50();
        uVar21 = *(uint *)((longlong)param_6 + 0xc) & 0x3fffffff;
        if ((int)uVar21 < (int)uVar22) {
          uVar21 = uVar21 * 2;
          uVar2 = uVar22;
          if ((int)uVar22 < (int)uVar21) {
            uVar2 = uVar21;
          }
          iVar14 = FUN_14370c310(uVar15,param_6,uVar2,4);
          if (iVar14 < 0) goto LAB_14384f6dd;
        }
        lVar9 = 0;
        *(uint *)(param_6 + 1) = uVar22;
        if (3 < lVar10) {
          do {
            *(undefined4 *)(*param_6 + lVar9 * 4) = *(undefined4 *)(local_b8 + lVar9 * 8);
            *(undefined4 *)(*param_6 + 4 + lVar9 * 4) = *(undefined4 *)(local_b8 + 8 + lVar9 * 8);
            *(undefined4 *)(*param_6 + 8 + lVar9 * 4) = *(undefined4 *)(local_b8 + 0x10 + lVar9 * 8)
            ;
            *(undefined4 *)(*param_6 + 0xc + lVar9 * 4) =
                 *(undefined4 *)(local_b8 + 0x18 + lVar9 * 8);
            lVar9 = lVar9 + 4;
          } while (lVar9 < lVar10 + -3);
        }
        for (; lVar9 < lVar10; lVar9 = lVar9 + 1) {
          *(undefined4 *)(*param_6 + lVar9 * 4) = *(undefined4 *)(local_b8 + lVar9 * 8);
        }
      }
      uVar16 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 0x80000000;
      if (0 < (int)uVar22) {
        uVar17 = (ulonglong)uVar22;
        if ((int)uVar22 < 0) {
          uVar17 = uVar16;
        }
        iVar14 = FUN_14370c310(&PTR_vftable_1467f0638,&local_c8,uVar17,4);
        if (iVar14 < 0) {
          local_c0 = 0;
          if (-1 < (int)local_bc) {
            FUN_143702e10(&PTR_vftable_1467f0638,local_c8,4,local_bc & 0x3fffffff);
          }
          uVar15 = 0x80040200;
          goto LAB_14384f867;
        }
      }
      uVar17 = uVar16;
      uVar13 = uVar16;
      if (0 < (int)uVar22) {
        do {
          *(int *)(local_c8 + (longlong)*(int *)(local_b8 + -4 + uVar13 + 8) * 4) = (int)uVar17;
          uVar21 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar21;
          uVar13 = uVar13 + 8;
        } while ((int)uVar21 < (int)uVar22);
      }
      if (0 < lVar6) {
        do {
          *(undefined4 *)(*local_res20 + uVar16 * 4) =
               *(undefined4 *)(local_c8 + (longlong)*(int *)(local_98 + uVar16 * 4) * 4);
          uVar16 = uVar16 + 1;
          uVar22 = local_7c;
        } while ((longlong)uVar16 < lVar6);
      }
      local_c0 = 0;
      if (-1 < (int)local_bc) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_c8,4,local_bc & 0x3fffffff);
      }
      goto LAB_14384f85d;
    }
    uVar16 = (ulonglong)uVar22;
    if ((int)uVar22 < 0) {
      uVar16 = uVar17;
    }
    iVar14 = FUN_14370c310(&PTR_vftable_1467f0638,&local_b8,uVar16,8);
    if (-1 < iVar14) goto LAB_14384f5fd;
LAB_14384f6dd:
    uVar15 = 0x80040200;
  }
LAB_14384f867:
  local_b0 = 0;
  if (-1 < (int)local_ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_b8,8,local_ac & 0x3fffffff);
  }
  local_b8 = 0;
  local_ac = 0x80000000;
  pvVar5 = local_68;
LAB_14384f96e:
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,4,local_8c & 0x3fffffff);
  }
  local_98 = 0;
  local_8c = 0x80000000;
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return uVar15;
}



// FUNCTION 14384f9e0 FUN_14384f9e0 body=72 status=ok
// SIG undefined FUN_14384f9e0(void)

undefined4
FUN_14384f9e0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0x80000000;
  local_18 = 0;
  local_10 = 0;
  uVar1 = FUN_14384f130(param_1,&local_18,param_2,param_3,param_4,param_5);
  FUN_143703a50();
  return uVar1;
}



// FUNCTION 14384fa30 FUN_14384fa30 body=197 status=ok
// SIG undefined FUN_14384fa30(void)

longlong FUN_14384fa30(longlong param_1,int param_2,longlong *param_3,longlong *param_4,
                      longlong param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                      int param_9,int param_10,longlong *param_11)

{
  int iVar1;
  
  if (param_2 <= param_9) {
    *param_11 = *param_7 + (longlong)((param_9 - param_2) * param_10) * 4;
    return *param_4 + (longlong)(param_9 - param_2) * 0x14;
  }
  iVar1 = param_9;
  if ((int)param_8[1] != 0) {
    iVar1 = *(int *)(*param_8 + (longlong)param_9 * 4);
  }
  if (iVar1 != -1) {
    *param_11 = *param_6 + (longlong)(iVar1 * param_10) * 4;
    return *param_3 + (longlong)iVar1 * 0x14;
  }
  *param_11 = param_5 + (longlong)(param_9 * param_10) * 4;
  return param_1 + (longlong)param_9 * 0x14;
}



// FUNCTION 14384fb00 FUN_14384fb00 body=191 status=ok
// SIG undefined FUN_14384fb00(void)

longlong FUN_14384fb00(longlong param_1,int param_2,longlong *param_3,longlong *param_4,
                      longlong param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                      int param_9,int param_10,longlong *param_11)

{
  int iVar1;
  
  if (param_2 <= param_9) {
    *param_11 = *param_7 + (longlong)((param_9 - param_2) * param_10) * 4;
    return (longlong)(param_9 - param_2) * 0x10 + *param_4;
  }
  iVar1 = param_9;
  if ((int)param_8[1] != 0) {
    iVar1 = *(int *)(*param_8 + (longlong)param_9 * 4);
  }
  if (iVar1 != -1) {
    *param_11 = *param_6 + (longlong)(iVar1 * param_10) * 4;
    return (longlong)iVar1 * 0x10 + *param_3;
  }
  *param_11 = param_5 + (longlong)(param_9 * param_10) * 4;
  return (longlong)param_9 * 0x10 + param_1;
}



// FUNCTION 14384fbc0 FUN_14384fbc0 body=576 status=ok
// SIG undefined FUN_14384fbc0(void)

int * FUN_14384fbc0(int *param_1,longlong param_2,int *param_3,float *param_4,float *param_5,
                   float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  int *piVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar23 [16];
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
  
  fVar41 = fRam00000001467f08dc;
  fVar40 = DAT_1467f08d0;
  fVar4 = *param_5;
  fVar5 = param_5[1];
  fVar6 = param_5[2];
  fVar42 = *param_4;
  fVar43 = param_4[1];
  fVar44 = param_4[2];
  fVar22 = fVar4 * fVar42;
  fVar24 = fVar5 * fVar43;
  fVar26 = fVar6 * fVar44;
  *param_1 = -1;
  fVar10 = fRam00000001467f06fc;
  fVar9 = fRam00000001467f06f8;
  fVar8 = fRam00000001467f06f4;
  fVar7 = DAT_1467f06f0;
  piVar12 = (int *)((longlong)*param_3 * 0x10 + *(longlong *)(param_2 + 0x18));
  iVar3 = *piVar12;
  uVar11 = (ulonglong)iVar3;
  fVar31 = 0.0;
  fVar32 = 0.0;
  fVar33 = 0.0;
  iVar14 = (short)piVar12[2] + iVar3;
  fVar42 = fVar42 - (fVar24 + fVar22 + fVar26) * fVar4;
  fVar43 = fVar43 - (fVar24 + fVar22 + fVar26) * fVar5;
  fVar44 = fVar44 - (fVar24 + fVar22 + fVar26) * fVar6;
  if (iVar3 < iVar14) {
    pbVar13 = (byte *)(*(longlong *)(param_2 + 0x28) + uVar11 * 0x14 + 0x10);
    do {
      if ((*(int *)(pbVar13 + -8) == -1) || ((*pbVar13 & 0x20) != 0)) {
        pfVar1 = (float *)(*(longlong *)(param_2 + 0x38) +
                          (longlong)*(int *)(pbVar13 + -0x10) * 0x10);
        fVar22 = fVar4 * *pfVar1;
        fVar26 = fVar5 * pfVar1[1];
        fVar27 = fVar6 * pfVar1[2];
        pfVar2 = (float *)(*(longlong *)(param_2 + 0x38) + (longlong)*(int *)(pbVar13 + -0xc) * 0x10
                          );
        fVar24 = fVar4 * *pfVar2;
        fVar25 = fVar5 * pfVar2[1];
        fVar28 = fVar6 * pfVar2[2];
        fVar34 = *pfVar1 - (fVar26 + fVar22 + fVar27) * fVar4;
        fVar36 = pfVar1[1] - (fVar26 + fVar22 + fVar27) * fVar5;
        fVar38 = pfVar1[2] - (fVar26 + fVar22 + fVar27) * fVar6;
        fVar35 = fVar34 - fVar42;
        fVar37 = fVar36 - fVar43;
        fVar39 = fVar38 - fVar44;
        fVar34 = fVar34 - (*pfVar2 - (fVar25 + fVar24 + fVar28) * fVar4);
        fVar36 = fVar36 - (pfVar2[1] - (fVar25 + fVar24 + fVar28) * fVar5);
        fVar38 = fVar38 - (pfVar2[2] - (fVar25 + fVar24 + fVar28) * fVar6);
        fVar22 = fVar34 * fVar34;
        fVar24 = fVar36 * fVar36;
        fVar27 = fVar38 * fVar38;
        fVar25 = fVar24 + fVar22 + fVar27;
        fVar29 = fVar24 + fVar22 + fVar27;
        fVar30 = fVar24 + fVar22 + fVar27;
        fVar27 = fVar24 + fVar22 + fVar27;
        fVar22 = fVar35 * fVar34;
        fVar26 = fVar37 * fVar36;
        fVar28 = fVar39 * fVar38;
        auVar19._4_4_ = fVar22;
        auVar19._0_4_ = fVar22;
        auVar19._8_4_ = fVar22;
        auVar19._12_4_ = fVar22;
        auVar20._4_4_ = fVar29;
        auVar20._0_4_ = fVar25;
        auVar20._8_4_ = fVar30;
        auVar20._12_4_ = fVar27;
        auVar20 = rcpps(auVar19,auVar20);
        fVar24 = (2.0 - fVar25 * auVar20._0_4_) * auVar20._0_4_ * (fVar26 + fVar22 + fVar28);
        fVar25 = (2.0 - fVar29 * auVar20._4_4_) * auVar20._4_4_ * (fVar26 + fVar22 + fVar28);
        fVar29 = (2.0 - fVar30 * auVar20._8_4_) * auVar20._8_4_ * (fVar26 + fVar22 + fVar28);
        fVar22 = (2.0 - fVar27 * auVar20._12_4_) * auVar20._12_4_ * (fVar26 + fVar22 + fVar28);
        uVar15 = -(uint)(fVar24 < fVar7);
        uVar16 = -(uint)(fVar25 < fVar8);
        uVar17 = -(uint)(fVar29 < fVar9);
        uVar18 = -(uint)(fVar22 < fVar10);
        auVar23._0_4_ = (uint)fVar24 & uVar15;
        auVar23._4_4_ = (uint)fVar25 & uVar16;
        auVar23._8_4_ = (uint)fVar29 & uVar17;
        auVar23._12_4_ = (uint)fVar22 & uVar18;
        auVar21._0_4_ = ~uVar15 & (uint)fVar7;
        auVar21._4_4_ = ~uVar16 & (uint)fVar8;
        auVar21._8_4_ = ~uVar17 & (uint)fVar9;
        auVar21._12_4_ = ~uVar18 & (uint)fVar10;
        auVar20 = maxps(ZEXT816(0),auVar23 | auVar21);
        fVar35 = fVar35 - auVar20._0_4_ * fVar34;
        fVar37 = fVar37 - auVar20._4_4_ * fVar36;
        fVar39 = fVar39 - auVar20._8_4_ * fVar38;
        fVar22 = fVar37 * fVar37 + fVar35 * fVar35 + fVar39 * fVar39;
        if (fVar22 < fVar40) {
          *param_1 = (int)uVar11;
          fVar31 = fVar35 + fVar42;
          fVar32 = fVar37 + fVar43;
          fVar33 = fVar39 + fVar44;
          fVar40 = fVar22;
          fVar41 = fVar37 * fVar37 + fVar35 * fVar35 + fVar39 * fVar39;
        }
      }
      uVar15 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar15;
      pbVar13 = pbVar13 + 0x14;
    } while ((int)uVar15 < iVar14);
  }
  *param_6 = fVar31;
  param_6[1] = fVar32;
  param_6[2] = fVar33;
  param_6[3] = fVar41;
  return param_1;
}



// FUNCTION 14384fe00 FUN_14384fe00 body=776 status=ok
// SIG undefined FUN_14384fe00(void)

int * FUN_14384fe00(int *param_1,longlong param_2,undefined4 *param_3,float *param_4,float *param_5,
                   float *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar24 [16];
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
  
  fVar43 = fRam00000001467f08dc;
  fVar42 = DAT_1467f08d0;
  fVar44 = *param_4;
  fVar45 = param_4[1];
  fVar46 = param_4[2];
  fVar39 = 0.0;
  fVar40 = 0.0;
  fVar41 = 0.0;
  *param_1 = -1;
  fVar5 = *param_5;
  fVar6 = param_5[1];
  fVar7 = param_5[2];
  fVar21 = fVar5 * fVar44;
  fVar25 = fVar6 * fVar45;
  fVar28 = fVar7 * fVar46;
  fVar44 = fVar44 - (fVar25 + fVar21 + fVar28) * fVar5;
  fVar45 = fVar45 - (fVar25 + fVar21 + fVar28) * fVar6;
  fVar46 = fVar46 - (fVar25 + fVar21 + fVar28) * fVar7;
  piVar9 = (int *)FUN_1437fb610(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20),
                                param_2 + 0xb0,param_2 + 0xd0,param_2 + 0x90,*param_3);
  fVar8 = fRam00000001467f06fc;
  fVar28 = fRam00000001467f06f8;
  fVar25 = fRam00000001467f06f4;
  fVar21 = DAT_1467f06f0;
  iVar13 = *piVar9;
  iVar12 = (short)piVar9[2] + iVar13;
  if (iVar13 < iVar12) {
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    do {
      piVar9 = (int *)FUN_1437fb5b0(uVar4,uVar1,param_2 + 0xc0);
      if ((piVar9[2] == -1) || ((*(byte *)(piVar9 + 4) & 0x20) != 0)) {
        iVar2 = *piVar9;
        iVar3 = *(int *)(param_2 + 0x40);
        if (iVar2 < iVar3) {
          pfVar10 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0x38));
        }
        else {
          pfVar10 = (float *)((longlong)(iVar2 - iVar3) * 0x10 + *(longlong *)(param_2 + 0xf0));
        }
        iVar2 = piVar9[1];
        if (iVar2 < iVar3) {
          pfVar11 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0x38));
        }
        else {
          pfVar11 = (float *)((longlong)(iVar2 - iVar3) * 0x10 + *(longlong *)(param_2 + 0xf0));
        }
        fVar22 = fVar5 * *pfVar10;
        fVar26 = fVar6 * pfVar10[1];
        fVar29 = fVar7 * pfVar10[2];
        fVar23 = fVar5 * *pfVar11;
        fVar27 = fVar6 * pfVar11[1];
        fVar30 = fVar7 * pfVar11[2];
        fVar33 = *pfVar10 - (fVar26 + fVar22 + fVar29) * fVar5;
        fVar35 = pfVar10[1] - (fVar26 + fVar22 + fVar29) * fVar6;
        fVar37 = pfVar10[2] - (fVar26 + fVar22 + fVar29) * fVar7;
        fVar34 = fVar33 - fVar44;
        fVar36 = fVar35 - fVar45;
        fVar38 = fVar37 - fVar46;
        fVar33 = fVar33 - (*pfVar11 - (fVar27 + fVar23 + fVar30) * fVar5);
        fVar35 = fVar35 - (pfVar11[1] - (fVar27 + fVar23 + fVar30) * fVar6);
        fVar37 = fVar37 - (pfVar11[2] - (fVar27 + fVar23 + fVar30) * fVar7);
        fVar22 = fVar33 * fVar33;
        fVar23 = fVar35 * fVar35;
        fVar29 = fVar37 * fVar37;
        fVar27 = fVar23 + fVar22 + fVar29;
        fVar31 = fVar23 + fVar22 + fVar29;
        fVar32 = fVar23 + fVar22 + fVar29;
        fVar29 = fVar23 + fVar22 + fVar29;
        fVar22 = fVar34 * fVar33;
        fVar26 = fVar36 * fVar35;
        fVar30 = fVar38 * fVar37;
        auVar18._4_4_ = fVar22;
        auVar18._0_4_ = fVar22;
        auVar18._8_4_ = fVar22;
        auVar18._12_4_ = fVar22;
        auVar19._4_4_ = fVar31;
        auVar19._0_4_ = fVar27;
        auVar19._8_4_ = fVar32;
        auVar19._12_4_ = fVar29;
        auVar19 = rcpps(auVar18,auVar19);
        fVar23 = (2.0 - fVar27 * auVar19._0_4_) * auVar19._0_4_ * (fVar26 + fVar22 + fVar30);
        fVar27 = (2.0 - fVar31 * auVar19._4_4_) * auVar19._4_4_ * (fVar26 + fVar22 + fVar30);
        fVar31 = (2.0 - fVar32 * auVar19._8_4_) * auVar19._8_4_ * (fVar26 + fVar22 + fVar30);
        fVar22 = (2.0 - fVar29 * auVar19._12_4_) * auVar19._12_4_ * (fVar26 + fVar22 + fVar30);
        uVar14 = -(uint)(fVar23 < fVar21);
        uVar15 = -(uint)(fVar27 < fVar25);
        uVar16 = -(uint)(fVar31 < fVar28);
        uVar17 = -(uint)(fVar22 < fVar8);
        auVar24._0_4_ = (uint)fVar23 & uVar14;
        auVar24._4_4_ = (uint)fVar27 & uVar15;
        auVar24._8_4_ = (uint)fVar31 & uVar16;
        auVar24._12_4_ = (uint)fVar22 & uVar17;
        auVar20._0_4_ = ~uVar14 & (uint)fVar21;
        auVar20._4_4_ = ~uVar15 & (uint)fVar25;
        auVar20._8_4_ = ~uVar16 & (uint)fVar28;
        auVar20._12_4_ = ~uVar17 & (uint)fVar8;
        auVar19 = maxps(ZEXT816(0),auVar24 | auVar20);
        fVar34 = fVar34 - auVar19._0_4_ * fVar33;
        fVar36 = fVar36 - auVar19._4_4_ * fVar35;
        fVar38 = fVar38 - auVar19._8_4_ * fVar37;
        fVar22 = fVar36 * fVar36 + fVar34 * fVar34 + fVar38 * fVar38;
        if (fVar22 < fVar42) {
          *param_1 = iVar13;
          fVar39 = fVar34 + fVar44;
          fVar40 = fVar36 + fVar45;
          fVar41 = fVar38 + fVar46;
          fVar42 = fVar22;
          fVar43 = fVar36 * fVar36 + fVar34 * fVar34 + fVar38 * fVar38;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar12);
  }
  *param_6 = fVar39;
  param_6[1] = fVar40;
  param_6[2] = fVar41;
  param_6[3] = fVar43;
  return param_1;
}



// FUNCTION 143850110 FUN_143850110 body=1083 status=ok
// SIG undefined FUN_143850110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143850110(longlong param_1,float *param_2,int *param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
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
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  piVar17 = (int *)((longlong)*param_3 * 0x10 + *(longlong *)(param_1 + 0x18));
  iVar15 = *piVar17;
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  pfVar1 = (float *)(lVar2 + (longlong)
                             *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar15 * 0x14) *
                             0x10);
  fVar9 = *pfVar1;
  fVar10 = pfVar1[1];
  fVar11 = pfVar1[2];
  fVar12 = pfVar1[3];
  iVar14 = iVar15 + -1 + (int)(short)piVar17[2];
  iVar15 = iVar15 + 1;
  fVar63 = fVar5;
  fVar64 = fVar6;
  fVar65 = fVar7;
  fVar66 = fVar8;
  if (iVar15 < iVar14) {
    fVar59 = fVar5 - fVar9;
    fVar60 = fVar6 - fVar10;
    fVar61 = fVar7 - fVar11;
    uVar16 = (ulonglong)(uint)(iVar14 - iVar15);
    piVar17 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar15 * 0x14);
    fVar62 = DAT_1467f08d0;
    do {
      pfVar1 = (float *)(lVar2 + (longlong)*piVar17 * 0x10);
      fVar54 = *pfVar1;
      fVar40 = pfVar1[1];
      fVar41 = pfVar1[2];
      fVar27 = pfVar1[3];
      fVar28 = fVar5 - fVar54;
      fVar29 = fVar6 - fVar40;
      fVar30 = fVar7 - fVar41;
      fVar42 = fVar54 - fVar9;
      fVar43 = fVar40 - fVar10;
      fVar44 = fVar41 - fVar11;
      fVar45 = fVar27 - fVar12;
      pfVar1 = (float *)(lVar2 + (longlong)piVar17[1] * 0x10);
      fVar36 = *pfVar1;
      fVar37 = pfVar1[1];
      fVar38 = pfVar1[2];
      fVar39 = pfVar1[3];
      fVar47 = fVar9 - fVar36;
      fVar49 = fVar10 - fVar37;
      fVar51 = fVar11 - fVar38;
      fVar53 = fVar12 - fVar39;
      fVar31 = fVar5 - fVar36;
      fVar32 = fVar6 - fVar37;
      fVar33 = fVar7 - fVar38;
      fVar34 = fVar8 - fVar39;
      fVar36 = fVar36 - fVar54;
      fVar37 = fVar37 - fVar40;
      fVar38 = fVar38 - fVar41;
      fVar39 = fVar39 - fVar27;
      fVar55 = fVar37 * fVar42 - fVar43 * fVar36;
      fVar56 = fVar38 * fVar43 - fVar44 * fVar37;
      fVar57 = fVar36 * fVar44 - fVar42 * fVar38;
      fVar58 = fVar39 * fVar45 - fVar45 * fVar39;
      auVar24._0_4_ = fVar36 * fVar36;
      auVar24._4_4_ = fVar37 * fVar37;
      auVar24._8_4_ = fVar38 * fVar38;
      auVar24._12_4_ = fVar39 * fVar39;
      fVar40 = (fVar31 * fVar51 - fVar47 * fVar33) * fVar57;
      fVar41 = (fVar34 * fVar53 - fVar53 * fVar34) * fVar58;
      fVar48 = fVar44 * fVar44 + fVar43 * fVar43 + fVar42 * fVar42;
      fVar50 = auVar24._8_4_ + auVar24._4_4_ + auVar24._0_4_;
      fVar52 = fVar51 * fVar51 + fVar49 * fVar49 + fVar47 * fVar47;
      fVar54 = fVar55 * fVar55 + fVar57 * fVar57 + fVar56 * fVar56;
      auVar25._4_4_ = fVar50;
      auVar25._0_4_ = fVar48;
      auVar25._8_4_ = fVar52;
      auVar25._12_4_ = fVar54;
      auVar25 = rcpps(auVar24,auVar25);
      fVar46 = (float)(~-(uint)(fVar54 == 0.0) &
                      (uint)((2.0 - fVar54 * auVar25._12_4_) * auVar25._12_4_));
      auVar22._4_4_ =
           -(uint)(0.0 < (fVar28 * fVar38 - fVar36 * fVar30) * fVar57 +
                         (fVar30 * fVar37 - fVar38 * fVar29) * fVar56 +
                         (fVar29 * fVar36 - fVar37 * fVar28) * fVar55);
      auVar22._0_4_ =
           -(uint)(0.0 < (fVar59 * fVar44 - fVar42 * fVar61) * fVar57 +
                         (fVar61 * fVar43 - fVar44 * fVar60) * fVar56 +
                         (fVar60 * fVar42 - fVar43 * fVar59) * fVar55);
      auVar22._8_4_ =
           -(uint)(0.0 < fVar40 + (fVar33 * fVar49 - fVar51 * fVar32) * fVar56 +
                         (fVar32 * fVar47 - fVar49 * fVar31) * fVar55);
      auVar22._12_4_ = -(uint)(0.0 < fVar41 + fVar40 + fVar41);
      uVar13 = movmskps(piVar17[1] * 2,auVar22);
      if (((byte)uVar13 & 7) == 7) {
        fVar36 = fVar56 * fVar59;
        fVar37 = fVar57 * fVar60;
        fVar38 = fVar55 * fVar61;
        fVar40 = (fVar37 + fVar36 + fVar38) * fVar46;
        fVar54 = fVar40 * fVar40 * fVar54;
        fVar41 = (fVar37 + fVar36 + fVar38) * fVar46;
        fVar27 = (fVar37 + fVar36 + fVar38) * fVar46;
        fVar36 = (fVar37 + fVar36 + fVar38) * fVar46;
      }
      else {
        fVar54 = (float)(~-(uint)(fVar48 == 0.0) &
                        (uint)((2.0 - fVar48 * auVar25._0_4_) * auVar25._0_4_)) *
                 (fVar60 * fVar43 + fVar59 * fVar42 + fVar61 * fVar44);
        fVar40 = (float)(~-(uint)(fVar50 == 0.0) &
                        (uint)((2.0 - fVar50 * auVar25._4_4_) * auVar25._4_4_)) *
                 (fVar37 * fVar29 + fVar36 * fVar28 + fVar38 * fVar30);
        fVar41 = (float)(~-(uint)(fVar52 == 0.0) &
                        (uint)((2.0 - fVar52 * auVar25._8_4_) * auVar25._8_4_)) *
                 (fVar32 * fVar49 + fVar31 * fVar47 + fVar33 * fVar51);
        fVar46 = fVar46 * (fVar34 * fVar53 + fVar32 * fVar49 + fVar34 * fVar53);
        uVar18 = -(uint)(fVar54 < DAT_1467f06f0);
        uVar19 = -(uint)(fVar40 < fRam00000001467f06f4);
        uVar20 = -(uint)(fVar41 < fRam00000001467f06f8);
        uVar21 = -(uint)(fVar46 < fRam00000001467f06fc);
        auVar23._0_4_ = ~uVar18 & (uint)DAT_1467f06f0;
        auVar23._4_4_ = ~uVar19 & (uint)fRam00000001467f06f4;
        auVar23._8_4_ = ~uVar20 & (uint)fRam00000001467f06f8;
        auVar23._12_4_ = ~uVar21 & (uint)fRam00000001467f06fc;
        auVar3._4_4_ = uVar19 & (uint)fVar40;
        auVar3._0_4_ = uVar18 & (uint)fVar54;
        auVar3._8_4_ = uVar20 & (uint)fVar41;
        auVar3._12_4_ = uVar21 & (uint)fVar46;
        auVar25 = maxps(_DAT_1467f06e0,auVar23 | auVar3);
        fVar46 = auVar25._0_4_;
        fVar48 = auVar25._4_4_;
        fVar50 = auVar25._8_4_;
        fVar42 = fVar59 - fVar46 * fVar42;
        fVar43 = fVar60 - fVar46 * fVar43;
        fVar44 = fVar61 - fVar46 * fVar44;
        fVar54 = fVar42 * fVar42;
        fVar40 = fVar43 * fVar43;
        fVar41 = fVar44 * fVar44;
        fVar28 = fVar28 - fVar48 * fVar36;
        fVar29 = fVar29 - fVar48 * fVar37;
        fVar30 = fVar30 - fVar48 * fVar38;
        fVar31 = fVar31 - fVar50 * fVar47;
        fVar32 = fVar32 - fVar50 * fVar49;
        fVar33 = fVar33 - fVar50 * fVar51;
        auVar35._0_4_ = fVar40 + fVar54 + fVar41;
        auVar35._4_4_ = fVar40 + fVar54 + fVar41;
        auVar35._8_4_ = fVar40 + fVar54 + fVar41;
        auVar35._12_4_ = fVar40 + fVar54 + fVar41;
        fVar54 = fVar28 * fVar28;
        fVar40 = fVar29 * fVar29;
        fVar41 = fVar30 * fVar30;
        auVar26._0_4_ = fVar40 + fVar54 + fVar41;
        auVar26._4_4_ = fVar40 + fVar54 + fVar41;
        auVar26._8_4_ = fVar40 + fVar54 + fVar41;
        auVar26._12_4_ = fVar40 + fVar54 + fVar41;
        fVar54 = fVar31 * fVar31;
        fVar40 = fVar32 * fVar32;
        fVar41 = fVar33 * fVar33;
        auVar25 = minps(auVar35,auVar26);
        fVar36 = fVar40 + fVar54 + fVar41;
        fVar37 = fVar40 + fVar54 + fVar41;
        fVar38 = fVar40 + fVar54 + fVar41;
        fVar41 = fVar40 + fVar54 + fVar41;
        uVar18 = -(uint)(auVar25._0_4_ < fVar36);
        uVar19 = -(uint)(auVar25._4_4_ < fVar37);
        uVar20 = -(uint)(auVar25._8_4_ < fVar38);
        uVar21 = -(uint)(auVar25._12_4_ < fVar41);
        fVar56 = (float)((~-(uint)(auVar35._0_4_ < auVar26._0_4_) & (uint)fVar28 |
                         -(uint)(auVar35._0_4_ < auVar26._0_4_) & (uint)fVar42) & uVar18 |
                        ~uVar18 & (uint)fVar31);
        fVar57 = (float)((~-(uint)(auVar35._4_4_ < auVar26._4_4_) & (uint)fVar29 |
                         -(uint)(auVar35._4_4_ < auVar26._4_4_) & (uint)fVar43) & uVar19 |
                        ~uVar19 & (uint)fVar32);
        fVar55 = (float)((~-(uint)(auVar35._8_4_ < auVar26._8_4_) & (uint)fVar30 |
                         -(uint)(auVar35._8_4_ < auVar26._8_4_) & (uint)fVar44) & uVar20 |
                        ~uVar20 & (uint)fVar33);
        fVar58 = (float)((~-(uint)(auVar35._12_4_ < auVar26._12_4_) &
                          (uint)((fVar8 - fVar27) - fVar48 * fVar39) |
                         -(uint)(auVar35._12_4_ < auVar26._12_4_) &
                         (uint)((fVar8 - fVar12) - fVar46 * fVar45)) & uVar21 |
                        ~uVar21 & (uint)(fVar34 - fVar50 * fVar53));
        auVar4._4_4_ = fVar37;
        auVar4._0_4_ = fVar36;
        auVar4._8_4_ = fVar38;
        auVar4._12_4_ = fVar41;
        auVar25 = minps(auVar25,auVar4);
        fVar54 = auVar25._0_4_;
        fVar40 = DAT_1467f06f0;
        fVar41 = fRam00000001467f06f4;
        fVar27 = fRam00000001467f06f8;
        fVar36 = fRam00000001467f06fc;
      }
      if (fVar54 < fVar62) {
        fVar62 = fVar54;
        fVar63 = fVar5 - fVar40 * fVar56;
        fVar64 = fVar6 - fVar41 * fVar57;
        fVar65 = fVar7 - fVar27 * fVar55;
        fVar66 = fVar8 - fVar36 * fVar58;
      }
      piVar17 = piVar17 + 5;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  *param_4 = fVar63;
  param_4[1] = fVar64;
  param_4[2] = fVar65;
  param_4[3] = fVar66;
  return;
}



// FUNCTION 143850550 FUN_143850550 body=1331 status=ok
// SIG undefined FUN_143850550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143850550(longlong param_1,float *param_2,undefined4 *param_3,float *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  int *piVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar39 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  
  piVar16 = (int *)FUN_1437fb610(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                                 param_1 + 0xb0,param_1 + 0xd0,param_1 + 0x90,*param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  iVar20 = *piVar16;
  piVar17 = (int *)FUN_1437fb5b0(uVar3,uVar1,param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,iVar20);
  iVar2 = *(int *)(param_1 + 0x40);
  iVar19 = *piVar17;
  if (iVar19 < iVar2) {
    pfVar18 = (float *)((longlong)iVar19 * 0x10 + *(longlong *)(param_1 + 0x38));
  }
  else {
    pfVar18 = (float *)((longlong)(iVar19 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
  }
  fVar6 = *pfVar18;
  fVar7 = pfVar18[1];
  fVar8 = pfVar18[2];
  fVar9 = pfVar18[3];
  iVar19 = iVar20 + -1 + (int)(short)piVar16[2];
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar13 = param_2[3];
  iVar20 = iVar20 + 1;
  fVar66 = fVar10;
  fVar67 = fVar11;
  fVar68 = fVar12;
  fVar69 = fVar13;
  if (iVar20 < iVar19) {
    fVar62 = fVar10 - fVar6;
    fVar63 = fVar11 - fVar7;
    fVar64 = fVar12 - fVar8;
    fVar65 = DAT_1467f08d0;
    do {
      piVar16 = (int *)FUN_1437fb5b0(uVar3,uVar1);
      iVar14 = *piVar16;
      if (iVar14 < iVar2) {
        pfVar18 = (float *)((longlong)iVar14 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        pfVar18 = (float *)((longlong)(iVar14 - iVar2) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      iVar14 = piVar16[1];
      fVar31 = *pfVar18;
      fVar32 = pfVar18[1];
      fVar33 = pfVar18[2];
      fVar27 = pfVar18[3];
      if (iVar14 < iVar2) {
        pfVar18 = (float *)((longlong)iVar14 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        iVar14 = iVar14 - iVar2;
        pfVar18 = (float *)((longlong)iVar14 * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      fVar34 = *pfVar18;
      fVar35 = pfVar18[1];
      fVar36 = pfVar18[2];
      fVar37 = pfVar18[3];
      fVar49 = fVar31 - fVar6;
      fVar50 = fVar32 - fVar7;
      fVar51 = fVar33 - fVar8;
      fVar52 = fVar27 - fVar9;
      fVar43 = fVar6 - fVar34;
      fVar44 = fVar7 - fVar35;
      fVar45 = fVar8 - fVar36;
      fVar46 = fVar9 - fVar37;
      fVar38 = fVar34 - fVar31;
      fVar40 = fVar35 - fVar32;
      fVar41 = fVar36 - fVar33;
      fVar42 = fVar37 - fVar27;
      fVar34 = fVar10 - fVar34;
      fVar35 = fVar11 - fVar35;
      fVar36 = fVar12 - fVar36;
      fVar37 = fVar13 - fVar37;
      fVar31 = fVar10 - fVar31;
      fVar32 = fVar11 - fVar32;
      fVar33 = fVar12 - fVar33;
      fVar58 = fVar49 * fVar40 - fVar50 * fVar38;
      fVar59 = fVar50 * fVar41 - fVar51 * fVar40;
      fVar60 = fVar51 * fVar38 - fVar49 * fVar41;
      fVar61 = fVar52 * fVar42 - fVar52 * fVar42;
      auVar28._0_4_ = fVar38 * fVar38;
      auVar28._4_4_ = fVar40 * fVar40;
      auVar28._8_4_ = fVar41 * fVar41;
      auVar28._12_4_ = fVar42 * fVar42;
      fVar47 = (fVar34 * fVar45 - fVar43 * fVar36) * fVar60;
      fVar48 = (fVar37 * fVar46 - fVar46 * fVar37) * fVar61;
      fVar54 = fVar51 * fVar51 + fVar50 * fVar50 + fVar49 * fVar49;
      fVar55 = auVar28._8_4_ + auVar28._4_4_ + auVar28._0_4_;
      fVar56 = fVar45 * fVar45 + fVar44 * fVar44 + fVar43 * fVar43;
      fVar57 = fVar58 * fVar58 + fVar60 * fVar60 + fVar59 * fVar59;
      auVar29._4_4_ = fVar55;
      auVar29._0_4_ = fVar54;
      auVar29._8_4_ = fVar56;
      auVar29._12_4_ = fVar57;
      auVar29 = rcpps(auVar28,auVar29);
      fVar53 = (float)(~-(uint)(fVar57 == 0.0) &
                      (uint)((2.0 - fVar57 * auVar29._12_4_) * auVar29._12_4_));
      auVar25._4_4_ =
           -(uint)(0.0 < (fVar31 * fVar41 - fVar33 * fVar38) * fVar60 +
                         (fVar33 * fVar40 - fVar32 * fVar41) * fVar59 +
                         (fVar32 * fVar38 - fVar31 * fVar40) * fVar58);
      auVar25._0_4_ =
           -(uint)(0.0 < (fVar51 * fVar62 - fVar64 * fVar49) * fVar60 +
                         (fVar50 * fVar64 - fVar63 * fVar51) * fVar59 +
                         (fVar49 * fVar63 - fVar62 * fVar50) * fVar58);
      auVar25._8_4_ =
           -(uint)(0.0 < fVar47 + (fVar36 * fVar44 - fVar45 * fVar35) * fVar59 +
                         (fVar35 * fVar43 - fVar44 * fVar34) * fVar58);
      auVar25._12_4_ = -(uint)(0.0 < fVar48 + fVar47 + fVar48);
      uVar15 = movmskps(iVar14,auVar25);
      if (((byte)uVar15 & 7) == 7) {
        fVar27 = fVar59 * fVar62;
        fVar34 = fVar60 * fVar63;
        fVar35 = fVar58 * fVar64;
        fVar31 = (fVar34 + fVar27 + fVar35) * fVar53;
        fVar57 = fVar31 * fVar31 * fVar57;
        fVar32 = (fVar34 + fVar27 + fVar35) * fVar53;
        fVar33 = (fVar34 + fVar27 + fVar35) * fVar53;
        fVar27 = (fVar34 + fVar27 + fVar35) * fVar53;
      }
      else {
        fVar57 = (float)(~-(uint)(fVar54 == 0.0) &
                        (uint)((2.0 - fVar54 * auVar29._0_4_) * auVar29._0_4_)) *
                 (fVar63 * fVar50 + fVar62 * fVar49 + fVar64 * fVar51);
        fVar47 = (float)(~-(uint)(fVar55 == 0.0) &
                        (uint)((2.0 - fVar55 * auVar29._4_4_) * auVar29._4_4_)) *
                 (fVar32 * fVar40 + fVar31 * fVar38 + fVar33 * fVar41);
        fVar48 = (float)(~-(uint)(fVar56 == 0.0) &
                        (uint)((2.0 - fVar56 * auVar29._8_4_) * auVar29._8_4_)) *
                 (fVar35 * fVar44 + fVar34 * fVar43 + fVar36 * fVar45);
        fVar53 = fVar53 * (fVar37 * fVar46 + fVar35 * fVar44 + fVar37 * fVar46);
        uVar21 = -(uint)(fVar57 < DAT_1467f06f0);
        uVar22 = -(uint)(fVar47 < fRam00000001467f06f4);
        uVar23 = -(uint)(fVar48 < fRam00000001467f06f8);
        uVar24 = -(uint)(fVar53 < fRam00000001467f06fc);
        auVar26._0_4_ = ~uVar21 & (uint)DAT_1467f06f0;
        auVar26._4_4_ = ~uVar22 & (uint)fRam00000001467f06f4;
        auVar26._8_4_ = ~uVar23 & (uint)fRam00000001467f06f8;
        auVar26._12_4_ = ~uVar24 & (uint)fRam00000001467f06fc;
        auVar4._4_4_ = uVar22 & (uint)fVar47;
        auVar4._0_4_ = uVar21 & (uint)fVar57;
        auVar4._8_4_ = uVar23 & (uint)fVar48;
        auVar4._12_4_ = uVar24 & (uint)fVar53;
        auVar29 = maxps(_DAT_1467f06e0,auVar26 | auVar4);
        fVar53 = auVar29._0_4_;
        fVar54 = auVar29._4_4_;
        fVar55 = auVar29._8_4_;
        fVar49 = fVar62 - fVar53 * fVar49;
        fVar50 = fVar63 - fVar53 * fVar50;
        fVar51 = fVar64 - fVar53 * fVar51;
        fVar57 = fVar49 * fVar49;
        fVar47 = fVar50 * fVar50;
        fVar48 = fVar51 * fVar51;
        fVar31 = fVar31 - fVar54 * fVar38;
        fVar32 = fVar32 - fVar54 * fVar40;
        fVar33 = fVar33 - fVar54 * fVar41;
        fVar34 = fVar34 - fVar55 * fVar43;
        fVar35 = fVar35 - fVar55 * fVar44;
        fVar36 = fVar36 - fVar55 * fVar45;
        auVar39._0_4_ = fVar47 + fVar57 + fVar48;
        auVar39._4_4_ = fVar47 + fVar57 + fVar48;
        auVar39._8_4_ = fVar47 + fVar57 + fVar48;
        auVar39._12_4_ = fVar47 + fVar57 + fVar48;
        fVar38 = fVar31 * fVar31;
        fVar57 = fVar32 * fVar32;
        fVar40 = fVar33 * fVar33;
        auVar30._0_4_ = fVar57 + fVar38 + fVar40;
        auVar30._4_4_ = fVar57 + fVar38 + fVar40;
        auVar30._8_4_ = fVar57 + fVar38 + fVar40;
        auVar30._12_4_ = fVar57 + fVar38 + fVar40;
        fVar38 = fVar34 * fVar34;
        fVar57 = fVar35 * fVar35;
        fVar40 = fVar36 * fVar36;
        auVar29 = minps(auVar39,auVar30);
        fVar41 = fVar57 + fVar38 + fVar40;
        fVar43 = fVar57 + fVar38 + fVar40;
        fVar44 = fVar57 + fVar38 + fVar40;
        fVar40 = fVar57 + fVar38 + fVar40;
        uVar21 = -(uint)(auVar29._0_4_ < fVar41);
        uVar22 = -(uint)(auVar29._4_4_ < fVar43);
        uVar23 = -(uint)(auVar29._8_4_ < fVar44);
        uVar24 = -(uint)(auVar29._12_4_ < fVar40);
        fVar59 = (float)((~-(uint)(auVar39._0_4_ < auVar30._0_4_) & (uint)fVar31 |
                         -(uint)(auVar39._0_4_ < auVar30._0_4_) & (uint)fVar49) & uVar21 |
                        ~uVar21 & (uint)fVar34);
        fVar60 = (float)((~-(uint)(auVar39._4_4_ < auVar30._4_4_) & (uint)fVar32 |
                         -(uint)(auVar39._4_4_ < auVar30._4_4_) & (uint)fVar50) & uVar22 |
                        ~uVar22 & (uint)fVar35);
        fVar58 = (float)((~-(uint)(auVar39._8_4_ < auVar30._8_4_) & (uint)fVar33 |
                         -(uint)(auVar39._8_4_ < auVar30._8_4_) & (uint)fVar51) & uVar23 |
                        ~uVar23 & (uint)fVar36);
        fVar61 = (float)((~-(uint)(auVar39._12_4_ < auVar30._12_4_) &
                          (uint)((fVar13 - fVar27) - fVar54 * fVar42) |
                         -(uint)(auVar39._12_4_ < auVar30._12_4_) &
                         (uint)((fVar13 - fVar9) - fVar53 * fVar52)) & uVar24 |
                        ~uVar24 & (uint)(fVar37 - fVar55 * fVar46));
        auVar5._4_4_ = fVar43;
        auVar5._0_4_ = fVar41;
        auVar5._8_4_ = fVar44;
        auVar5._12_4_ = fVar40;
        auVar29 = minps(auVar29,auVar5);
        fVar57 = auVar29._0_4_;
        fVar31 = DAT_1467f06f0;
        fVar32 = fRam00000001467f06f4;
        fVar33 = fRam00000001467f06f8;
        fVar27 = fRam00000001467f06fc;
      }
      if (fVar57 < fVar65) {
        fVar65 = fVar57;
        fVar66 = fVar10 - fVar31 * fVar59;
        fVar67 = fVar11 - fVar32 * fVar60;
        fVar68 = fVar12 - fVar33 * fVar58;
        fVar69 = fVar13 - fVar27 * fVar61;
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar19);
  }
  *param_4 = fVar66;
  param_4[1] = fVar67;
  param_4[2] = fVar68;
  param_4[3] = fVar69;
  return;
}



// FUNCTION 143850a90 FUN_143850a90 body=70 status=ok
// SIG undefined FUN_143850a90(void)

longlong * FUN_143850a90(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = param_3 >> 2;
  *param_1 = param_2;
  *(uint *)((longlong)param_1 + 0xc) = uVar2 | 0x80000000;
  lVar1 = 0;
  *(uint *)(param_1 + 1) = uVar2;
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_3 >> 2 != 0) {
    do {
      *(undefined4 *)(*param_1 + lVar1 * 4) = 0xffffffff;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (longlong)(ulonglong)uVar2);
  }
  return param_1;
}



// FUNCTION 143850ae0 FUN_143850ae0 body=41 status=ok
// SIG undefined FUN_143850ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_143850ae0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
  uVar2 = uRam00000001467f06e8;
  uVar1 = _DAT_1467f06e0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return param_1;
}



// FUNCTION 143850b10 FUN_143850b10 body=879 status=ok
// SIG undefined FUN_143850b10(void)

void FUN_143850b10(longlong param_1,longlong param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 local_48 [4];
  undefined1 local_44 [12];
  
  iVar8 = 0;
  if (0 < (short)param_3[2]) {
    do {
      lVar3 = FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                            param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,*param_3 + iVar8);
      if ((*(byte *)(lVar3 + 0x10) & 0x40) != 0) {
        lVar4 = *(longlong *)
                 ((ulonglong)(*(uint *)(lVar3 + 8) >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38))
        ;
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else if (*(char *)(lVar4 + 0x28) == '\x01') {
          lVar4 = *(longlong *)(lVar4 + 0x18);
        }
        else {
          lVar4 = FUN_142fbda20();
        }
        lVar5 = 0;
        uVar2 = *(uint *)(lVar3 + 8) & 0x3fffff;
        if ((int)uVar2 < *(int *)(lVar4 + 0x30)) {
          if (*(int *)(lVar4 + 0x78) != 0) {
            uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x70) + (longlong)(int)uVar2 * 4);
          }
          if (uVar2 != 0xffffffff) {
            lVar5 = *(longlong *)(lVar4 + 0xc0);
            goto LAB_143850c13;
          }
        }
        else {
          uVar2 = uVar2 - *(int *)(lVar4 + 0x30);
          lVar5 = *(longlong *)(lVar4 + 0xe0);
LAB_143850c13:
          lVar5 = lVar5 + (longlong)(int)uVar2 * 0x14;
        }
        *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
        *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) & 0xbf;
        if (param_4 != (longlong *)0x0) {
          uVar2 = *(uint *)(lVar3 + 8) >> 0x16;
          if ((int)param_4[1] + -1 < (int)param_4[2] * 2) {
            FUN_143854a20(param_4,local_48,(int)param_4[1] * 2);
          }
          iVar10 = 1;
          lVar3 = *param_4;
          uVar9 = (int)param_4[1] - 1;
          uVar7 = uVar2 * -0x61c8864f;
          uVar7 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                  uVar2 * -0x4f000000) & uVar9;
          lVar4 = (longlong)(int)uVar7;
          iVar1 = *(int *)(lVar3 + lVar4 * 4);
          while (iVar1 != -1) {
            if (*(uint *)(lVar3 + lVar4 * 4) == uVar2) {
              iVar10 = 0;
              break;
            }
            uVar7 = uVar7 + 1 & uVar9;
            lVar4 = (longlong)(int)uVar7;
            iVar1 = *(int *)(lVar3 + lVar4 * 4);
          }
          *(int *)(param_4 + 2) = (int)param_4[2] + iVar10;
          *(uint *)(lVar3 + (longlong)(int)uVar7 * 4) = uVar2;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (short)param_3[2]);
  }
  iVar8 = 0;
  if (0 < *(short *)((longlong)param_3 + 10)) {
    do {
      lVar3 = 0;
      lVar4 = FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                            param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,param_3[1] + iVar8);
      if ((*(byte *)(lVar4 + 0x10) & 0x40) != 0) {
        lVar5 = *(longlong *)
                 ((ulonglong)(*(uint *)(lVar4 + 8) >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38))
        ;
        if (lVar5 != 0) {
          if (*(char *)(lVar5 + 0x28) == '\x01') {
            lVar3 = *(longlong *)(lVar5 + 0x18);
          }
          else {
            lVar3 = FUN_142fbda20();
          }
        }
        uVar2 = *(uint *)(lVar4 + 8) & 0x3fffff;
        if ((int)uVar2 < *(int *)(lVar3 + 0x30)) {
          if (*(int *)(lVar3 + 0x78) != 0) {
            uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x70) + (longlong)(int)uVar2 * 4);
          }
          if (uVar2 != 0xffffffff) {
            lVar5 = *(longlong *)(lVar3 + 0xc0);
            goto LAB_143850d9e;
          }
          lVar5 = 0;
        }
        else {
          uVar2 = uVar2 - *(int *)(lVar3 + 0x30);
          lVar5 = *(longlong *)(lVar3 + 0xe0);
LAB_143850d9e:
          lVar5 = lVar5 + (longlong)(int)uVar2 * 0x14;
        }
        *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
        *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) & 0xbf;
        if (param_4 != (longlong *)0x0) {
          uVar2 = *(uint *)(lVar4 + 8) >> 0x16;
          if ((int)param_4[1] + -1 < (int)param_4[2] * 2) {
            FUN_143854a20(param_4,local_44,(int)param_4[1] * 2);
          }
          iVar10 = 1;
          lVar4 = *param_4;
          uVar9 = (int)param_4[1] - 1;
          uVar7 = uVar2 * -0x61c8864f;
          uVar7 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                  uVar2 * -0x4f000000) & uVar9;
          lVar6 = (longlong)(int)uVar7;
          iVar1 = *(int *)(lVar4 + lVar6 * 4);
          while (iVar1 != -1) {
            if (*(uint *)(lVar4 + lVar6 * 4) == uVar2) {
              iVar10 = 0;
              break;
            }
            uVar7 = uVar7 + 1 & uVar9;
            lVar6 = (longlong)(int)uVar7;
            iVar1 = *(int *)(lVar4 + lVar6 * 4);
          }
          *(int *)(param_4 + 2) = (int)param_4[2] + iVar10;
          *(uint *)(lVar4 + (longlong)(int)uVar7 * 4) = uVar2;
        }
        if ((*(byte *)(lVar5 + 0x10) & 4) == 0) {
          *(int *)(lVar3 + 0x164) = *(int *)(lVar3 + 0x164) + 1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(short *)((longlong)param_3 + 10));
  }
  return;
}



// FUNCTION 143850e80 FUN_143850e80 body=3170 status=ok
// SIG undefined FUN_143850e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143850e80(longlong param_1,int param_2,float *param_3,undefined8 param_4,longlong *param_5,
                  undefined8 param_6,float *param_7,longlong *param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  char cVar24;
  uint uVar25;
  LPVOID pvVar26;
  LPVOID pvVar27;
  undefined8 uVar28;
  int *piVar29;
  undefined8 *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float *pfVar34;
  ulonglong uVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  undefined1 auVar46 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  longlong lVar64;
  undefined4 uVar65;
  longlong local_208;
  uint local_200;
  uint local_1fc;
  longlong local_1f8;
  int local_1f0;
  longlong local_1e8;
  uint local_1e0;
  uint local_1dc;
  int local_1d8;
  longlong local_1d0;
  uint local_1c8;
  uint local_1c4;
  longlong local_1c0;
  uint local_1b8;
  int local_1b0;
  undefined4 uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  int *local_1a0;
  longlong local_198;
  undefined8 local_190;
  uint *local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  LPVOID local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint local_128 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f8;
  int *local_f0;
  undefined8 local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint local_c8;
  int *local_c0;
  undefined8 local_b8;
  
  pvVar26 = TlsGetValue(DAT_146b8198c);
  local_158 = pvVar26;
  if (pvVar26 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar26,"TtgetNearbyBoundariesFlood");
  }
  if (param_2 != -1) {
    local_208 = 0;
    local_200 = 0;
    local_1fc = 0x80000000;
    local_1f0 = 0x40;
    fVar45 = (param_3[4] - *param_3) * _DAT_1467f07e0;
    fVar47 = (param_3[5] - param_3[1]) * fRam00000001467f07e4;
    fVar48 = (param_3[6] - param_3[2]) * fRam00000001467f07e8;
    fVar61 = (*param_3 + param_3[4]) * _DAT_1467f07e0;
    fVar62 = (param_3[1] + param_3[5]) * fRam00000001467f07e4;
    fVar63 = (param_3[2] + param_3[6]) * fRam00000001467f07e8;
    pvVar27 = TlsGetValue(DAT_146b7bf70);
    if (pvVar27 == (LPVOID)0x0) {
      pvVar27 = DAT_146b7bf68;
    }
    local_1f8 = *(longlong *)((longlong)pvVar27 + 0x18);
    if ((*(int *)((longlong)pvVar27 + 0x10) < 0x200) ||
       (*(ulonglong *)((longlong)pvVar27 + 0x20) < local_1f8 + 0x200U)) {
      local_1f8 = FUN_1437138c0(pvVar27,0x200);
    }
    else {
      *(ulonglong *)((longlong)pvVar27 + 0x18) = local_1f8 + 0x200U;
    }
    local_1fc = 0x80000040;
    local_208 = local_1f8;
    uVar25 = UAncBlueprintFunctionLibrary::GetOverallExpThreshold(0x40);
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c4 = 0x80000000;
    local_1b8 = uVar25;
    if (uVar25 == 0) {
      local_1c0 = 0;
    }
    else {
      pvVar27 = TlsGetValue(DAT_146b7bf70);
      if (pvVar27 == (LPVOID)0x0) {
        pvVar27 = DAT_146b7bf68;
      }
      uVar32 = uVar25 + 0x7f & 0xffffff80;
      local_1c0 = *(longlong *)((longlong)pvVar27 + 0x18);
      uVar35 = (int)uVar32 + local_1c0;
      if ((*(int *)((longlong)pvVar27 + 0x10) < (int)uVar32) ||
         (*(ulonglong *)((longlong)pvVar27 + 0x20) < uVar35)) {
        local_1c0 = FUN_1437138c0(pvVar27);
      }
      else {
        *(ulonglong *)((longlong)pvVar27 + 0x18) = uVar35;
      }
    }
    local_1c4 = uVar25 | 0x80000000;
    local_1d0 = local_1c0;
    uVar28 = FUN_143703a50();
    if ((int)(local_1c4 & 0x3fffffff) < (int)uVar25) {
      uVar36 = (local_1c4 & 0x3fffffff) * 2;
      uVar32 = uVar25;
      if ((int)uVar25 < (int)uVar36) {
        uVar32 = uVar36;
      }
      FUN_14370c310(uVar28,&local_1d0,uVar32,1);
    }
    local_1c8 = uVar25;
    FUN_143850a90(&local_1e8,local_1d0,uVar25);
    uStack_1ac = 0xffffffff;
    local_1b0 = param_2;
    uVar28 = FUN_143703a50();
    if (local_200 == (local_1fc & 0x3fffffff)) {
      FUN_14370c460(uVar28,&local_208,8);
    }
    puVar30 = (undefined8 *)(local_208 + (longlong)(int)local_200 * 8);
    if (puVar30 != (undefined8 *)0x0) {
      *puVar30 = CONCAT44(uStack_1ac,local_1b0);
    }
    local_200 = local_200 + 1;
    if (local_200 != 0) {
LAB_143851110:
      local_200 = local_200 + -1;
      uVar36 = local_1e0 - 1;
      local_178 = *(ulonglong *)(local_208 + (longlong)(int)local_200 * 8);
      uVar32 = (uint)local_178;
      uVar25 = local_1e0;
      if (0 < (int)uVar36) {
        uVar25 = uVar32 * -0x61c8864f;
        uVar33 = (uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                 uVar32 * -0x4f000000) & uVar36;
        uVar31 = *(uint *)(local_1e8 + (longlong)(int)uVar33 * 4);
        while ((uVar25 = local_1e0, uVar31 != 0xffffffff && (uVar25 = uVar33, uVar31 != uVar32))) {
          uVar33 = uVar33 + 1 & uVar36;
          uVar31 = *(uint *)(local_1e8 + (longlong)(int)uVar33 * 4);
        }
      }
      if ((int)uVar36 < (int)uVar25) {
        pvVar26 = local_158;
        if ((int)uVar36 < local_1d8 * 2) goto LAB_143851926;
        uVar35 = local_178 >> 0x16 & 0x3ff;
        lVar3 = *(longlong *)(uVar35 * 0x100 + *(longlong *)(param_1 + 0x38));
        lVar4 = *(longlong *)(lVar3 + 0x18);
        lVar64 = lVar4 + 0x120;
        piVar29 = (int *)FUN_14384fb00(*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x20),
                                       lVar4 + 0xb0,lVar4 + 0xd0,*(undefined8 *)(lVar4 + 0x48),
                                       lVar64,lVar4 + 0x140,lVar4 + 0x90,uVar32 & 0x3fffff,
                                       *(undefined4 *)(lVar4 + 0x50),&local_170);
        uVar65 = (undefined4)((ulonglong)lVar64 >> 0x20);
        uVar25 = local_178._4_4_;
        local_120 = 0;
        local_118 = 0;
        local_f0 = (int *)0x0;
        local_e8 = 0;
        local_c0 = (int *)0x0;
        local_b8 = 0;
        local_128[0] = 0xffffffff;
        local_f8 = 0xffffffff;
        local_c8 = 0xffffffff;
        local_1a0 = piVar29;
        if (param_5 != (longlong *)0x0) {
          local_b8 = local_170;
          local_c8 = uVar32;
          local_c0 = piVar29;
          if (local_178._4_4_ != 0xffffffff) {
            lVar4 = *(longlong *)
                     (*(longlong *)
                       ((ulonglong)(local_178._4_4_ >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38)
                       ) + 0x18);
            lVar64 = lVar4 + 0x130;
            local_120 = FUN_14384fa30(*(undefined8 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x30),
                                      lVar4 + 0xc0,lVar4 + 0xe0,*(undefined8 *)(lVar4 + 0x58),lVar64
                                      ,lVar4 + 0x150,lVar4 + 0x70,local_178._4_4_ & 0x3fffff,
                                      *(undefined4 *)(lVar4 + 0x60),&local_168);
            uVar65 = (undefined4)((ulonglong)lVar64 >> 0x20);
            local_118 = local_168;
            local_128[0] = uVar25;
            local_108 = _DAT_1467f06e0;
            uStack_100 = uRam00000001467f06e8;
          }
          piVar29 = local_1a0;
          local_188 = local_128;
          local_180 = 4;
          local_198 = param_1;
          local_190 = param_4;
          cVar24 = (**(code **)(*param_5 + 0x30))(param_5,&local_198);
          if (cVar24 == '\0') {
            if (uVar25 == 0xffffffff) goto LAB_1438518da;
            lVar64 = *(longlong *)
                      ((ulonglong)(uVar25 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38));
            lVar3 = *(longlong *)(lVar64 + 0x18);
            piVar29 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),
                                           *(undefined4 *)(lVar3 + 0x30),lVar3 + 0xc0,lVar3 + 0xe0,
                                           lVar3 + 0x70,CONCAT44(uVar65,uVar25) & 0xffffffff003fffff
                                          );
            iVar37 = *(int *)(lVar3 + 0x40);
            iVar1 = *piVar29;
            if (iVar1 < iVar37) {
              pfVar34 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
            }
            else {
              pfVar34 = (float *)((longlong)(iVar1 - iVar37) * 0x10 + *(longlong *)(lVar3 + 0xf0));
            }
            iVar1 = piVar29[1];
            fVar55 = *pfVar34;
            fVar56 = pfVar34[1];
            fVar57 = pfVar34[2];
            if (iVar1 < iVar37) {
              pfVar34 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
            }
            else {
              pfVar34 = (float *)((longlong)(iVar1 - iVar37) * 0x10 + *(longlong *)(lVar3 + 0xf0));
            }
            fVar41 = *pfVar34;
            fVar42 = pfVar34[1];
            fVar43 = pfVar34[2];
            fVar58 = *(float *)(lVar64 + 0x54);
            fVar59 = *(float *)(lVar64 + 0x58);
            fVar60 = *(float *)(lVar64 + 0x5c);
            pfVar34 = (float *)((longlong)(int)param_8[1] * 0x10 + *param_8);
            fVar44 = *(float *)(lVar64 + 0x44);
            fVar49 = *(float *)(lVar64 + 0x48);
            fVar50 = *(float *)(lVar64 + 0x4c);
            fVar51 = *(float *)(lVar64 + 100);
            fVar52 = *(float *)(lVar64 + 0x68);
            fVar53 = *(float *)(lVar64 + 0x6c);
            fVar54 = *(float *)(lVar64 + 0x40);
            fVar6 = *(float *)(lVar64 + 0x44);
            fVar7 = *(float *)(lVar64 + 0x48);
            fVar8 = *(float *)(lVar64 + 0x4c);
            fVar9 = *(float *)(lVar64 + 0x50);
            fVar10 = *(float *)(lVar64 + 0x54);
            fVar11 = *(float *)(lVar64 + 0x58);
            fVar12 = *(float *)(lVar64 + 0x5c);
            fVar13 = *(float *)(lVar64 + 0x60);
            fVar14 = *(float *)(lVar64 + 100);
            fVar15 = *(float *)(lVar64 + 0x68);
            fVar16 = *(float *)(lVar64 + 0x6c);
            fVar17 = *(float *)(lVar64 + 0x74);
            fVar18 = *(float *)(lVar64 + 0x78);
            fVar19 = *(float *)(lVar64 + 0x7c);
            fVar20 = *(float *)(lVar64 + 0x70);
            fVar21 = *(float *)(lVar64 + 0x74);
            fVar22 = *(float *)(lVar64 + 0x78);
            fVar23 = *(float *)(lVar64 + 0x7c);
            *pfVar34 = fVar56 * *(float *)(lVar64 + 0x50) + fVar55 * *(float *)(lVar64 + 0x40) +
                       fVar57 * *(float *)(lVar64 + 0x60) + *(float *)(lVar64 + 0x70);
            pfVar34[1] = fVar56 * fVar58 + fVar55 * fVar44 + fVar57 * fVar51 + fVar17;
            pfVar34[2] = fVar56 * fVar59 + fVar55 * fVar49 + fVar57 * fVar52 + fVar18;
            pfVar34[3] = fVar56 * fVar60 + fVar55 * fVar50 + fVar57 * fVar53 + fVar19;
            *(int *)(param_8 + 1) = (int)param_8[1] + 1;
            pfVar34 = (float *)((longlong)(int)param_8[1] * 0x10 + *param_8);
            *pfVar34 = fVar42 * fVar9 + fVar41 * fVar54 + fVar43 * fVar13 + fVar20;
            pfVar34[1] = fVar42 * fVar10 + fVar41 * fVar6 + fVar43 * fVar14 + fVar21;
            pfVar34[2] = fVar42 * fVar11 + fVar41 * fVar7 + fVar43 * fVar15 + fVar22;
            pfVar34[3] = fVar42 * fVar12 + fVar41 * fVar8 + fVar43 * fVar16 + fVar23;
            *(int *)(param_8 + 1) = (int)param_8[1] + 1;
            pvVar26 = local_158;
            if (*(uint *)(param_8 + 1) == (*(uint *)((longlong)param_8 + 0xc) & 0x3fffffff))
            goto LAB_143851926;
            goto LAB_1438518da;
          }
        }
        if ((int)(local_1e0 - 1) < local_1d8 * 2) {
          FUN_143843fc0(&local_1e8,&local_1b0,local_1e0 * 2);
        }
        uVar36 = uVar32 * -0x61c8864f;
        iVar37 = 1;
        uVar31 = (uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                 uVar32 * -0x4f000000) & local_1e0 - 1;
        uVar36 = *(uint *)(local_1e8 + (longlong)(int)uVar31 * 4);
        while (uVar36 != 0xffffffff) {
          if (uVar36 == uVar32) {
            iVar37 = 0;
            break;
          }
          uVar31 = uVar31 + 1 & local_1e0 - 1;
          uVar36 = *(uint *)(local_1e8 + (longlong)(int)uVar31 * 4);
        }
        local_1d8 = local_1d8 + iVar37;
        iVar37 = 0;
        *(uint *)(local_1e8 + (longlong)(int)uVar31 * 4) = uVar32;
        if (0 < (short)piVar29[2]) {
          do {
            lVar64 = *(longlong *)(lVar3 + 0x18);
            uVar32 = (int)uVar35 << 0x16 | *piVar29 + iVar37;
            piVar29 = (int *)FUN_14384fa30(*(undefined8 *)(lVar64 + 0x28),
                                           *(undefined4 *)(lVar64 + 0x30),lVar64 + 0xc0,
                                           lVar64 + 0xe0,*(undefined8 *)(lVar64 + 0x58),
                                           lVar64 + 0x130,lVar64 + 0x150,lVar64 + 0x70,
                                           *piVar29 + iVar37,*(undefined4 *)(lVar64 + 0x60),
                                           &local_160);
            if (uVar25 == 0xffffffff) {
LAB_1438515bc:
              lVar64 = *(longlong *)(lVar3 + 0x18);
              iVar1 = *piVar29;
              iVar2 = *(int *)(lVar64 + 0x40);
              if (iVar1 < iVar2) {
                pfVar34 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar64 + 0x38));
              }
              else {
                pfVar34 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar64 + 0xf0))
                ;
              }
              iVar1 = piVar29[1];
              fVar55 = *pfVar34;
              fVar56 = pfVar34[1];
              fVar57 = pfVar34[2];
              if (iVar1 < iVar2) {
                pfVar34 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar64 + 0x38));
              }
              else {
                pfVar34 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar64 + 0xf0))
                ;
              }
              fVar41 = *pfVar34;
              fVar42 = pfVar34[1];
              fVar43 = pfVar34[2];
              local_148 = fVar56 * *(float *)(lVar3 + 0x50) + fVar55 * *(float *)(lVar3 + 0x40) +
                          fVar57 * *(float *)(lVar3 + 0x60) + *(float *)(lVar3 + 0x70);
              fStack_144 = fVar56 * *(float *)(lVar3 + 0x54) + fVar55 * *(float *)(lVar3 + 0x44) +
                           fVar57 * *(float *)(lVar3 + 100) + *(float *)(lVar3 + 0x74);
              fStack_140 = fVar56 * *(float *)(lVar3 + 0x58) + fVar55 * *(float *)(lVar3 + 0x48) +
                           fVar57 * *(float *)(lVar3 + 0x68) + *(float *)(lVar3 + 0x78);
              fStack_13c = fVar56 * *(float *)(lVar3 + 0x5c) + fVar55 * *(float *)(lVar3 + 0x4c) +
                           fVar57 * *(float *)(lVar3 + 0x6c) + *(float *)(lVar3 + 0x7c);
              fVar58 = local_148 - fVar61;
              fVar59 = fStack_144 - fVar62;
              fVar60 = fStack_140 - fVar63;
              local_138 = fVar42 * *(float *)(lVar3 + 0x50) + fVar41 * *(float *)(lVar3 + 0x40) +
                          fVar43 * *(float *)(lVar3 + 0x60) + *(float *)(lVar3 + 0x70);
              fStack_134 = fVar42 * *(float *)(lVar3 + 0x54) + fVar41 * *(float *)(lVar3 + 0x44) +
                           fVar43 * *(float *)(lVar3 + 100) + *(float *)(lVar3 + 0x74);
              fStack_130 = fVar42 * *(float *)(lVar3 + 0x58) + fVar41 * *(float *)(lVar3 + 0x48) +
                           fVar43 * *(float *)(lVar3 + 0x68) + *(float *)(lVar3 + 0x78);
              fStack_12c = fVar42 * *(float *)(lVar3 + 0x5c) + fVar41 * *(float *)(lVar3 + 0x4c) +
                           fVar43 * *(float *)(lVar3 + 0x6c) + *(float *)(lVar3 + 0x7c);
              fVar55 = local_138 - local_148;
              fVar56 = fStack_134 - fStack_144;
              fVar57 = fStack_130 - fStack_140;
              if (0.0 <= (fVar55 * fVar60 - fVar58 * fVar57) * param_7[1] +
                         (fVar57 * fVar59 - fVar60 * fVar56) * *param_7 +
                         (fVar56 * fVar58 - fVar59 * fVar55) * param_7[2]) {
                fVar52 = local_148 - local_138;
                fVar53 = fStack_144 - fStack_134;
                fVar54 = fStack_140 - fStack_130;
                fVar41 = fVar52 * fVar52;
                fVar42 = fVar53 * fVar53;
                fVar43 = fVar54 * fVar54;
                fVar49 = fVar42 + fVar41 + fVar43;
                fVar50 = fVar42 + fVar41 + fVar43;
                fVar51 = fVar42 + fVar41 + fVar43;
                fVar43 = fVar42 + fVar41 + fVar43;
                fVar41 = fVar58 * fVar52;
                fVar42 = fVar59 * fVar53;
                fVar44 = fVar60 * fVar54;
                auVar39._4_4_ = fVar41;
                auVar39._0_4_ = fVar41;
                auVar39._8_4_ = fVar41;
                auVar39._12_4_ = fVar41;
                auVar5._4_4_ = fVar50;
                auVar5._0_4_ = fVar49;
                auVar5._8_4_ = fVar51;
                auVar5._12_4_ = fVar43;
                auVar40 = rcpps(auVar39,auVar5);
                fVar49 = (2.0 - fVar49 * auVar40._0_4_) * auVar40._0_4_ * (fVar42 + fVar41 + fVar44)
                ;
                fVar50 = (2.0 - fVar50 * auVar40._4_4_) * auVar40._4_4_ * (fVar42 + fVar41 + fVar44)
                ;
                fVar51 = (2.0 - fVar51 * auVar40._8_4_) * auVar40._8_4_ * (fVar42 + fVar41 + fVar44)
                ;
                fVar41 = (2.0 - fVar43 * auVar40._12_4_) * auVar40._12_4_ *
                         (fVar42 + fVar41 + fVar44);
                uVar36 = -(uint)(fVar49 < DAT_1467f06f0);
                uVar31 = -(uint)(fVar50 < fRam00000001467f06f4);
                uVar33 = -(uint)(fVar51 < fRam00000001467f06f8);
                uVar38 = -(uint)(fVar41 < fRam00000001467f06fc);
                auVar46._0_4_ = ~uVar36 & (uint)DAT_1467f06f0;
                auVar46._4_4_ = ~uVar31 & (uint)fRam00000001467f06f4;
                auVar46._8_4_ = ~uVar33 & (uint)fRam00000001467f06f8;
                auVar46._12_4_ = ~uVar38 & (uint)fRam00000001467f06fc;
                auVar40._4_4_ = (uint)fVar50 & uVar31;
                auVar40._0_4_ = (uint)fVar49 & uVar36;
                auVar40._8_4_ = (uint)fVar51 & uVar33;
                auVar40._12_4_ = (uint)fVar41 & uVar38;
                auVar40 = maxps(ZEXT816(0),auVar46 | auVar40);
                fVar58 = fVar58 - auVar40._0_4_ * fVar52;
                fVar59 = fVar59 - auVar40._4_4_ * fVar53;
                fVar60 = fVar60 - auVar40._8_4_ * fVar54;
                if (fVar59 * fVar59 + fVar58 * fVar58 + fVar60 * fVar60 <
                    fVar47 * fVar47 + fVar45 * fVar45 + fVar48 * fVar48) {
                  if ((piVar29[2] == -1) || ((*(byte *)(piVar29 + 4) & 0x20) != 0)) {
                    cVar24 = '\0';
                  }
                  else {
                    cVar24 = '\x01';
                  }
                  if (cVar24 != '\0') {
                    if (param_5 != (longlong *)0x0) {
                      local_e8 = local_160;
                      local_d8 = fVar55 * _DAT_1467f07e0 + local_148;
                      fStack_d4 = fVar56 * fRam00000001467f07e4 + fStack_144;
                      fStack_d0 = fVar57 * fRam00000001467f07e8 + fStack_140;
                      fStack_cc = (fStack_12c - fStack_13c) * fRam00000001467f07ec + fStack_13c;
                      local_188 = local_128;
                      local_180 = 4;
                      local_198 = param_1;
                      local_190 = param_4;
                      local_f8 = uVar32;
                      local_f0 = piVar29;
                      cVar24 = (**(code **)(*param_5 + 0x30))(param_5,&local_198);
                    }
                    if (cVar24 != '\0') {
                      if ((int)local_200 < 0x40) {
                        local_1a8 = piVar29[3];
                        if (((*(byte *)(piVar29 + 4) & 0x40) == 0) && (local_1a8 != 0xffffffff)) {
                          local_1a8 = *(int *)(*(longlong *)(lVar3 + 0x18) + 0x17c) << 0x16 |
                                      local_1a8 & 0x3fffff;
                        }
                        puVar30 = (undefined8 *)(local_208 + (longlong)(int)local_200 * 8);
                        if (puVar30 != (undefined8 *)0x0) {
                          *puVar30 = CONCAT44(uVar32,local_1a8);
                        }
                        local_200 = local_200 + 1;
                        uStack_1a4 = uVar32;
                      }
                      goto LAB_1438518bb;
                    }
                  }
                  cVar24 = FUN_1438a1be0(param_3,&local_148,&local_138);
                  if (cVar24 != '\0') {
                    puVar30 = (undefined8 *)((longlong)(int)param_8[1] * 0x10 + *param_8);
                    *puVar30 = CONCAT44(fStack_144,local_148);
                    puVar30[1] = CONCAT44(fStack_13c,fStack_140);
                    *(int *)(param_8 + 1) = (int)param_8[1] + 1;
                    puVar30 = (undefined8 *)((longlong)(int)param_8[1] * 0x10 + *param_8);
                    *puVar30 = CONCAT44(fStack_134,local_138);
                    puVar30[1] = CONCAT44(fStack_12c,fStack_130);
                    *(int *)(param_8 + 1) = (int)param_8[1] + 1;
                    pvVar26 = local_158;
                    if (*(uint *)(param_8 + 1) == (*(uint *)((longlong)param_8 + 0xc) & 0x3fffffff))
                    goto LAB_143851926;
                  }
                }
              }
            }
            else {
              uVar36 = piVar29[2];
              if (((*(byte *)(piVar29 + 4) & 0x40) == 0) && (uVar36 != 0xffffffff)) {
                uVar36 = *(int *)(*(longlong *)(lVar3 + 0x18) + 0x17c) << 0x16 | uVar36 & 0x3fffff;
              }
              if (uVar36 != uVar25) goto LAB_1438515bc;
            }
LAB_1438518bb:
            iVar37 = iVar37 + 1;
            piVar29 = local_1a0;
          } while (iVar37 < (short)local_1a0[2]);
        }
      }
LAB_1438518da:
      pvVar26 = local_158;
      if (local_200 == 0) goto LAB_143851926;
      goto LAB_143851110;
    }
LAB_143851926:
    uVar28 = FUN_143703a50();
    local_1e0 = 0;
    if (-1 < (int)local_1dc) {
      FUN_143702e10(uVar28,local_1e8,4,local_1dc & 0x3fffffff);
    }
    uVar25 = local_1b8;
    lVar64 = local_1c0;
    if (local_1c0 == local_1d0) {
      local_1c8 = 0;
    }
    local_1e8 = 0;
    local_1dc = 0x80000000;
    pvVar27 = TlsGetValue(DAT_146b7bf70);
    if (pvVar27 == (LPVOID)0x0) {
      pvVar27 = DAT_146b7bf68;
    }
    uVar25 = uVar25 + 0x7f & 0xffffff80;
    if (((*(int *)((longlong)pvVar27 + 0x10) < (int)uVar25) ||
        ((int)uVar25 + lVar64 != *(longlong *)((longlong)pvVar27 + 0x18))) ||
       (*(longlong *)((longlong)pvVar27 + 0x28) == lVar64)) {
      FUN_143713ff0(pvVar27,lVar64);
    }
    else {
      *(longlong *)((longlong)pvVar27 + 0x18) = lVar64;
    }
    uVar28 = FUN_143703a50();
    local_1c8 = 0;
    if (-1 < (int)local_1c4) {
      FUN_143702e10(uVar28,local_1d0,1,local_1c4 & 0x3fffffff);
    }
    iVar37 = local_1f0;
    lVar64 = local_1f8;
    if (local_1f8 == local_208) {
      local_200 = 0;
    }
    local_1d0 = 0;
    local_1c4 = 0x80000000;
    pvVar27 = TlsGetValue(DAT_146b7bf70);
    if (pvVar27 == (LPVOID)0x0) {
      pvVar27 = DAT_146b7bf68;
    }
    uVar25 = iVar37 * 8 + 0x7fU & 0xffffff80;
    if (((*(int *)((longlong)pvVar27 + 0x10) < (int)uVar25) ||
        ((int)uVar25 + lVar64 != *(longlong *)((longlong)pvVar27 + 0x18))) ||
       (*(longlong *)((longlong)pvVar27 + 0x28) == lVar64)) {
      FUN_143713ff0(pvVar27,lVar64);
    }
    else {
      *(longlong *)((longlong)pvVar27 + 0x18) = lVar64;
    }
    uVar28 = FUN_143703a50();
    local_200 = 0;
    if (-1 < (int)local_1fc) {
      FUN_143702e10(uVar28,local_208,8,local_1fc & 0x3fffffff);
    }
    local_208 = 0;
    local_1fc = 0x80000000;
  }
  if (pvVar26 != (LPVOID)0x0) {
    FUN_14370d750(pvVar26,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 143851af0 FUN_143851af0 body=1852 status=ok
// SIG undefined FUN_143851af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143851af0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,undefined4 *param_6,longlong *param_7)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  LPVOID pvVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint *puVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined8 in_stack_fffffffffffffe80;
  undefined4 uVar24;
  uint *local_140;
  undefined8 local_130;
  undefined8 local_128;
  uint *local_120;
  LPVOID local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int *local_b0;
  undefined8 local_a8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint local_88;
  uint *local_80;
  undefined8 local_78;
  longlong local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined1 local_50;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffe80 >> 0x20);
  local_118 = TlsGetValue(DAT_146b8198c);
  if (local_118 != (LPVOID)0x0) {
    FUN_14370d620(local_118,"LtgetBoundariesNeighbors","Stinit");
  }
  if (param_2 != 0xffffffff) {
    pvVar9 = TlsGetValue(DAT_146b8198c);
    if (pvVar9 != (LPVOID)0x0) {
      FUN_14370d800(pvVar9,"Stneighbors");
    }
    lVar1 = *(longlong *)((ulonglong)(param_2 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38));
    lVar12 = *(longlong *)(lVar1 + 0x18);
    if ((int)(param_2 & 0x3fffff) < *(int *)(lVar12 + 0xd8) + *(int *)(lVar12 + 0x20)) {
      uVar19 = param_2;
      piVar10 = (int *)FUN_1437fb610(*(undefined8 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x20),
                                     lVar12 + 0xb0,lVar12 + 0xd0,lVar12 + 0x90,
                                     CONCAT44(uVar24,param_2) & 0xffffffff003fffff);
      iVar21 = 0;
      uVar20 = (int)(short)piVar10[2] + 1;
      if (uVar20 == 0) {
        local_140 = (uint *)0x0;
      }
      else {
        pvVar9 = TlsGetValue(DAT_146b7bf70);
        if (pvVar9 == (LPVOID)0x0) {
          pvVar9 = DAT_146b7bf68;
        }
        uVar19 = uVar20 * 4 + 0x7f & 0xffffff80;
        local_140 = *(uint **)((longlong)pvVar9 + 0x18);
        uVar16 = (longlong)(int)uVar19 + (longlong)local_140;
        if ((*(int *)((longlong)pvVar9 + 0x10) < (int)uVar19) ||
           (*(ulonglong *)((longlong)pvVar9 + 0x20) < uVar16)) {
          local_140 = (uint *)FUN_1437138c0();
          uVar19 = param_2;
        }
        else {
          *(ulonglong *)((longlong)pvVar9 + 0x18) = uVar16;
          uVar19 = param_2;
        }
      }
      iVar22 = 0;
      if (0 < (short)piVar10[2]) {
        do {
          lVar12 = *(longlong *)(lVar1 + 0x18);
          lVar11 = FUN_1437fb5b0(*(undefined8 *)(lVar12 + 0x28),*(undefined4 *)(lVar12 + 0x30),
                                 lVar12 + 0xc0,lVar12 + 0xe0,lVar12 + 0x70,*piVar10 + iVar22);
          if (*(int *)(lVar11 + 8) != -1) {
            uVar19 = *(uint *)(lVar11 + 0xc);
            if (((*(byte *)(lVar11 + 0x10) & 0x40) == 0) && (uVar19 != 0xffffffff)) {
              uVar19 = *(int *)(lVar12 + 0x17c) << 0x16 | uVar19 & 0x3fffff;
            }
            lVar12 = (longlong)iVar21;
            iVar21 = iVar21 + 1;
            local_140[lVar12] = uVar19;
          }
          iVar22 = iVar22 + 1;
          uVar19 = param_2;
        } while (iVar22 < (short)piVar10[2]);
      }
      local_140[iVar21] = uVar19;
      pvVar9 = TlsGetValue(DAT_146b8198c);
      if (pvVar9 != (LPVOID)0x0) {
        FUN_14370d800(pvVar9,"StnarrowPhase");
      }
      local_120 = local_140 + (iVar21 + 1);
      puVar17 = local_140;
      if (local_140 != local_120) {
        do {
          uVar19 = *puVar17;
          lVar1 = *(longlong *)((ulonglong)(uVar19 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38))
          ;
          lVar12 = *(longlong *)(lVar1 + 0x18);
          puVar13 = (uint *)FUN_14384fb00(*(undefined8 *)(lVar12 + 0x18),
                                          *(undefined4 *)(lVar12 + 0x20),lVar12 + 0xb0,lVar12 + 0xd0
                                          ,*(undefined8 *)(lVar12 + 0x48),lVar12 + 0x120,
                                          lVar12 + 0x140,lVar12 + 0x90,uVar19 & 0x3fffff,
                                          *(undefined4 *)(lVar12 + 0x50),&local_128);
          uVar23 = *puVar13;
          if ((int)uVar23 < (int)((int)(short)puVar13[2] + uVar23)) {
            do {
              lVar11 = *(longlong *)(lVar1 + 0x18);
              lVar12 = lVar11 + 0x130;
              piVar10 = (int *)FUN_14384fa30(*(undefined8 *)(lVar11 + 0x28),
                                             *(undefined4 *)(lVar11 + 0x30),lVar11 + 0xc0,
                                             lVar11 + 0xe0,*(undefined8 *)(lVar11 + 0x58),lVar12,
                                             lVar11 + 0x150,lVar11 + 0x70,uVar23,
                                             *(undefined4 *)(lVar11 + 0x60),&local_130);
              uVar24 = (undefined4)((ulonglong)lVar12 >> 0x20);
              if ((piVar10[2] == -1) || ((*(byte *)(piVar10 + 4) & 0x20) != 0)) {
                cVar8 = '\0';
              }
              else {
                cVar8 = '\x01';
              }
              if (cVar8 == '\0') {
LAB_143851feb:
                lVar12 = *(longlong *)(lVar1 + 0x18);
                piVar10 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar12 + 0x28),
                                               *(undefined4 *)(lVar12 + 0x30),lVar12 + 0xc0,
                                               lVar12 + 0xe0,lVar12 + 0x70,CONCAT44(uVar24,uVar23));
                iVar21 = *(int *)(lVar12 + 0x40);
                iVar22 = *piVar10;
                if (iVar22 < iVar21) {
                  pfVar18 = (float *)((longlong)iVar22 * 0x10 + *(longlong *)(lVar12 + 0x38));
                }
                else {
                  pfVar18 = (float *)((longlong)(iVar22 - iVar21) * 0x10 +
                                     *(longlong *)(lVar12 + 0xf0));
                }
                iVar22 = piVar10[1];
                fVar2 = *pfVar18;
                fVar3 = pfVar18[1];
                fVar4 = pfVar18[2];
                if (iVar22 < iVar21) {
                  pfVar18 = (float *)((longlong)iVar22 * 0x10 + *(longlong *)(lVar12 + 0x38));
                }
                else {
                  pfVar18 = (float *)((longlong)(iVar22 - iVar21) * 0x10 +
                                     *(longlong *)(lVar12 + 0xf0));
                }
                fVar5 = *pfVar18;
                fVar6 = pfVar18[1];
                fVar7 = pfVar18[2];
                local_108 = fVar3 * *(float *)(lVar1 + 0x50) + fVar2 * *(float *)(lVar1 + 0x40) +
                            fVar4 * *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x70);
                fStack_104 = fVar3 * *(float *)(lVar1 + 0x54) + fVar2 * *(float *)(lVar1 + 0x44) +
                             fVar4 * *(float *)(lVar1 + 100) + *(float *)(lVar1 + 0x74);
                fStack_100 = fVar3 * *(float *)(lVar1 + 0x58) + fVar2 * *(float *)(lVar1 + 0x48) +
                             fVar4 * *(float *)(lVar1 + 0x68) + *(float *)(lVar1 + 0x78);
                fStack_fc = fVar3 * *(float *)(lVar1 + 0x5c) + fVar2 * *(float *)(lVar1 + 0x4c) +
                            fVar4 * *(float *)(lVar1 + 0x6c) + *(float *)(lVar1 + 0x7c);
                local_f8 = fVar6 * *(float *)(lVar1 + 0x50) + fVar5 * *(float *)(lVar1 + 0x40) +
                           fVar7 * *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x70);
                fStack_f4 = fVar6 * *(float *)(lVar1 + 0x54) + fVar5 * *(float *)(lVar1 + 0x44) +
                            fVar7 * *(float *)(lVar1 + 100) + *(float *)(lVar1 + 0x74);
                fStack_f0 = fVar6 * *(float *)(lVar1 + 0x58) + fVar5 * *(float *)(lVar1 + 0x48) +
                            fVar7 * *(float *)(lVar1 + 0x68) + *(float *)(lVar1 + 0x78);
                fStack_ec = fVar6 * *(float *)(lVar1 + 0x5c) + fVar5 * *(float *)(lVar1 + 0x4c) +
                            fVar7 * *(float *)(lVar1 + 0x6c) + *(float *)(lVar1 + 0x7c);
                cVar8 = FUN_1438a1be0(param_3,&local_108,&local_f8);
                if (cVar8 != '\0') {
                  puVar14 = (undefined8 *)((longlong)(int)param_7[1] * 0x10 + *param_7);
                  *puVar14 = CONCAT44(fStack_104,local_108);
                  puVar14[1] = CONCAT44(fStack_fc,fStack_100);
                  *(int *)(param_7 + 1) = (int)param_7[1] + 1;
                  pfVar18 = (float *)((longlong)(int)param_7[1] * 0x10 + *param_7);
                  *pfVar18 = local_f8;
                  pfVar18[1] = fStack_f4;
                  pfVar18[2] = fStack_f0;
                  pfVar18[3] = fStack_ec;
                  *(int *)(param_7 + 1) = (int)param_7[1] + 1;
                  if (*(uint *)(param_7 + 1) == (*(uint *)((longlong)param_7 + 0xc) & 0x3fffffff))
                  goto LAB_14385215a;
                }
              }
              else {
                if (param_5 != (longlong *)0x0) {
                  lVar12 = *(longlong *)(lVar1 + 0x18);
                  iVar21 = *piVar10;
                  iVar22 = *(int *)(lVar12 + 0x40);
                  if (iVar21 < iVar22) {
                    pfVar18 = (float *)((longlong)iVar21 * 0x10 + *(longlong *)(lVar12 + 0x38));
                  }
                  else {
                    pfVar18 = (float *)((longlong)(iVar21 - iVar22) * 0x10 +
                                       *(longlong *)(lVar12 + 0xf0));
                  }
                  iVar21 = piVar10[1];
                  fVar2 = *pfVar18;
                  fVar3 = pfVar18[1];
                  fVar4 = pfVar18[2];
                  if (iVar21 < iVar22) {
                    pfVar18 = (float *)((longlong)iVar21 * 0x10 + *(longlong *)(lVar12 + 0x38));
                  }
                  else {
                    pfVar18 = (float *)((longlong)(iVar21 - iVar22) * 0x10 +
                                       *(longlong *)(lVar12 + 0xf0));
                  }
                  fVar5 = *pfVar18;
                  fVar6 = pfVar18[1];
                  fVar7 = pfVar18[2];
                  local_b8 = (uVar19 >> 0x16) << 0x16 | uVar23;
                  local_a8 = local_130;
                  local_e8[0] = 0xffffffff;
                  local_e0 = 0;
                  local_d8 = 0;
                  local_98 = fVar3 * *(float *)(lVar1 + 0x50) + fVar2 * *(float *)(lVar1 + 0x40) +
                             fVar4 * *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x70);
                  fStack_94 = fVar3 * *(float *)(lVar1 + 0x54) + fVar2 * *(float *)(lVar1 + 0x44) +
                              fVar4 * *(float *)(lVar1 + 100) + *(float *)(lVar1 + 0x74);
                  fStack_90 = fVar3 * *(float *)(lVar1 + 0x58) + fVar2 * *(float *)(lVar1 + 0x48) +
                              fVar4 * *(float *)(lVar1 + 0x68) + *(float *)(lVar1 + 0x78);
                  fStack_8c = fVar3 * *(float *)(lVar1 + 0x5c) + fVar2 * *(float *)(lVar1 + 0x4c) +
                              fVar4 * *(float *)(lVar1 + 0x6c) + *(float *)(lVar1 + 0x7c);
                  local_50 = 4;
                  local_c8 = *param_6;
                  uStack_c4 = param_6[1];
                  uStack_c0 = param_6[2];
                  uStack_bc = param_6[3];
                  local_78 = local_128;
                  local_58 = local_e8;
                  local_98 = ((fVar6 * *(float *)(lVar1 + 0x50) + fVar5 * *(float *)(lVar1 + 0x40) +
                               fVar7 * *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x70)) -
                             local_98) * _DAT_1467f07e0 + local_98;
                  fStack_94 = ((fVar6 * *(float *)(lVar1 + 0x54) + fVar5 * *(float *)(lVar1 + 0x44)
                                + fVar7 * *(float *)(lVar1 + 100) + *(float *)(lVar1 + 0x74)) -
                              fStack_94) * fRam00000001467f07e4 + fStack_94;
                  fStack_90 = ((fVar6 * *(float *)(lVar1 + 0x58) + fVar5 * *(float *)(lVar1 + 0x48)
                                + fVar7 * *(float *)(lVar1 + 0x68) + *(float *)(lVar1 + 0x78)) -
                              fStack_90) * fRam00000001467f07e8 + fStack_90;
                  fStack_8c = ((fVar6 * *(float *)(lVar1 + 0x5c) + fVar5 * *(float *)(lVar1 + 0x4c)
                                + fVar7 * *(float *)(lVar1 + 0x6c) + *(float *)(lVar1 + 0x7c)) -
                              fStack_8c) * fRam00000001467f07ec + fStack_8c;
                  local_b0 = piVar10;
                  local_88 = uVar19;
                  local_80 = puVar13;
                  local_68 = param_1;
                  local_60 = param_4;
                  cVar8 = (**(code **)(*param_5 + 0x30))(param_5,&local_68);
                }
                if (cVar8 == '\0') goto LAB_143851feb;
              }
              uVar23 = uVar23 + 1;
            } while ((int)uVar23 < (int)((int)(short)puVar13[2] + *puVar13));
          }
          puVar17 = puVar17 + 1;
        } while (puVar17 != local_120);
      }
LAB_14385215a:
      pvVar9 = TlsGetValue(DAT_146b7bf70);
      if (pvVar9 == (LPVOID)0x0) {
        pvVar9 = DAT_146b7bf68;
      }
      uVar19 = uVar20 * 4 + 0x7f & 0xffffff80;
      if (((*(int *)((longlong)pvVar9 + 0x10) < (int)uVar19) ||
          ((longlong)(int)uVar19 + (longlong)local_140 != *(longlong *)((longlong)pvVar9 + 0x18)))
         || (*(uint **)((longlong)pvVar9 + 0x28) == local_140)) {
        FUN_143713ff0(pvVar9,local_140);
      }
      else {
        *(uint **)((longlong)pvVar9 + 0x18) = local_140;
      }
      uVar15 = FUN_143703a50();
      if (-1 < (int)(uVar20 | 0x80000000)) {
        FUN_143702e10(uVar15,local_140,4,uVar20 & 0x3fffffff);
      }
    }
  }
  if (local_118 != (LPVOID)0x0) {
    FUN_14370d7a0(local_118,&DAT_145b8dd34);
  }
  return;
}



// FUNCTION 143852230 FUN_143852230 body=69 status=ok
// SIG undefined FUN_143852230(void)

void FUN_143852230(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_res8 [2];
  undefined1 local_18 [16];
  
  local_res8[0] = *param_2;
  FUN_14384d250(*(undefined8 *)(param_1 + 0x18),local_res8,local_18);
  FUN_143713830(param_3,param_1 + 0x40,local_18);
  return;
}



// FUNCTION 143852280 FUN_143852280 body=46 status=ok
// SIG undefined FUN_143852280(void)

void FUN_143852280(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined1 local_res18 [16];
  
  _local_res10 = CONCAT44((int)((ulonglong)param_2 >> 0x20),*param_3);
  FUN_14384d2f0(param_1,local_res18,&local_res10,param_4,param_5);
  return;
}



// FUNCTION 1438522b0 FUN_1438522b0 body=110 status=ok
// SIG undefined FUN_1438522b0(void)

void FUN_1438522b0(longlong *param_1,int param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar1 = (float *)(*param_1 + (longlong)param_2 * 0x10);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  pfVar1 = (float *)(*param_1 + (longlong)(param_2 + 1) * 0x10);
  fVar5 = *pfVar1 - fVar2;
  fVar6 = pfVar1[1] - fVar3;
  fVar7 = pfVar1[2] - fVar4;
  fVar8 = param_3[1] * fVar5 - fVar6 * *param_3;
  fVar6 = param_3[2] * fVar6 - fVar7 * param_3[1];
  fVar5 = *param_3 * fVar7 - fVar5 * param_3[2];
  *param_4 = fVar6;
  param_4[1] = fVar5;
  param_4[2] = fVar8;
  param_4[3] = 0.0 - (fVar5 * fVar3 + fVar6 * fVar2 + fVar8 * fVar4);
  return;
}



// FUNCTION 143852320 FUN_143852320 body=25 status=ok
// SIG undefined FUN_143852320(void)

void FUN_143852320(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *param_2;
  FUN_14384d430(param_1,local_res10);
  return;
}



// FUNCTION 143852340 FUN_143852340 body=25 status=ok
// SIG undefined FUN_143852340(void)

void FUN_143852340(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *param_2;
  FUN_14384d4c0(param_1,local_res10);
  return;
}



// FUNCTION 143852360 FUN_143852360 body=25 status=ok
// SIG undefined FUN_143852360(void)

void FUN_143852360(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *param_2;
  FUN_14384d690(param_1,local_res10);
  return;
}



// FUNCTION 143852380 FUN_143852380 body=69 status=ok
// SIG undefined FUN_143852380(void)

void FUN_143852380(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_res8 [2];
  undefined1 local_18 [16];
  
  local_res8[0] = *param_2;
  FUN_14384d7e0(*(undefined8 *)(param_1 + 0x18),local_res8,local_18);
  FUN_143713830(param_3,param_1 + 0x40,local_18);
  return;
}



// FUNCTION 1438523d0 FUN_1438523d0 body=25 status=ok
// SIG undefined FUN_1438523d0(void)

void FUN_1438523d0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *param_2;
  FUN_14384d7e0(param_1,local_res10);
  return;
}



// FUNCTION 1438523f0 calcFaceNormal body=35 status=ok
// SIG undefined calcFaceNormal(void)

undefined8
hkaiNavMeshUtils::calcFaceNormal(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *param_3;
  FUN_14384d930(param_1,param_2,local_res8);
  return param_1;
}



// FUNCTION 143852420 FUN_143852420 body=86 status=ok
// SIG undefined FUN_143852420(void)

undefined8 FUN_143852420(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 local_res8 [2];
  undefined1 local_18 [16];
  
  local_res8[0] = *param_3;
  FUN_14384dac0(param_1,*(undefined8 *)(param_2 + 0x18),local_res8,local_18);
  FUN_143713620(param_4,param_2 + 0x40,local_18);
  return param_1;
}



// FUNCTION 143852480 calcFaceNormal body=35 status=ok
// SIG undefined calcFaceNormal(void)

undefined8
hkaiNavMeshUtils::calcFaceNormal(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *param_3;
  FUN_14384dac0(param_1,param_2,local_res8);
  return param_1;
}



// FUNCTION 1438524b0 FUN_1438524b0 body=263 status=ok
// SIG undefined FUN_1438524b0(void)

void FUN_1438524b0(longlong *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar11 [16];
  float fVar10;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  
  pfVar4 = (float *)*param_1;
  iVar6 = (int)param_1[1] + -1;
  lVar5 = (longlong)iVar6;
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar10 = *pfVar4;
  pfVar1 = pfVar4 + 1;
  pfVar2 = pfVar4 + 2;
  pfVar3 = pfVar4 + 3;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  if (0 < iVar6) {
    do {
      fVar24 = fVar24 + *pfVar4;
      fVar25 = fVar25 + pfVar4[1];
      fVar26 = fVar26 + pfVar4[2];
      fVar17 = *pfVar4 - fVar10;
      fVar18 = pfVar4[1] - *pfVar1;
      fVar19 = pfVar4[2] - *pfVar2;
      fVar20 = pfVar4[3] - *pfVar3;
      fVar9 = pfVar4[4] - fVar10;
      fVar14 = pfVar4[5] - *pfVar1;
      fVar15 = pfVar4[6] - *pfVar2;
      fVar16 = pfVar4[7] - *pfVar3;
      fVar7 = fVar14 * fVar17 - fVar18 * fVar9;
      fVar14 = fVar15 * fVar18 - fVar19 * fVar14;
      fVar9 = fVar9 * fVar19 - fVar17 * fVar15;
      in_XMM0._12_4_ = fVar16 * fVar20 - fVar20 * fVar16;
      in_XMM0._4_4_ = fVar9;
      in_XMM0._0_4_ = fVar14;
      in_XMM0._8_4_ = fVar7;
      fVar21 = fVar21 + fVar14;
      fVar22 = fVar22 + fVar9;
      fVar23 = fVar23 + fVar7;
      lVar5 = lVar5 + -1;
      pfVar4 = pfVar4 + 4;
    } while (lVar5 != 0);
  }
  auVar11._0_4_ = (float)iVar6;
  auVar11._4_4_ = auVar11._0_4_;
  auVar11._8_4_ = auVar11._0_4_;
  auVar11._12_4_ = auVar11._0_4_;
  auVar8 = rcpps(in_XMM0,auVar11);
  fVar10 = fVar21 * fVar21;
  fVar7 = fVar22 * fVar22;
  auVar12._8_4_ = fVar23 * fVar23;
  auVar12._4_4_ = auVar12._8_4_;
  auVar12._0_4_ = auVar12._8_4_;
  auVar12._12_4_ = auVar12._8_4_;
  fVar9 = fVar7 + fVar10 + auVar12._8_4_;
  fVar15 = fVar7 + fVar10 + auVar12._8_4_;
  fVar16 = fVar7 + fVar10 + auVar12._8_4_;
  auVar13._4_4_ = fVar15;
  auVar13._0_4_ = fVar9;
  auVar13._8_4_ = fVar16;
  auVar13._12_4_ = fVar7 + fVar10 + auVar12._8_4_;
  auVar13 = rsqrtps(auVar12,auVar13);
  fVar10 = auVar13._0_4_;
  fVar7 = auVar13._4_4_;
  fVar14 = auVar13._8_4_;
  fVar21 = fVar21 * (float)(~-(uint)(fVar9 <= 0.0) &
                           (uint)((3.0 - fVar9 * fVar10 * fVar10) * fVar10 * 0.5));
  fVar22 = fVar22 * (float)(~-(uint)(fVar15 <= 0.0) &
                           (uint)((3.0 - fVar15 * fVar7 * fVar7) * fVar7 * 0.5));
  fVar23 = fVar23 * (float)(~-(uint)(fVar16 <= 0.0) &
                           (uint)((3.0 - fVar16 * fVar14 * fVar14) * fVar14 * 0.5));
  *param_2 = fVar21;
  param_2[1] = fVar22;
  param_2[2] = fVar23;
  param_2[3] = 0.0 - ((2.0 - auVar11._0_4_ * auVar8._4_4_) * auVar8._4_4_ * fVar25 * fVar22 +
                      (2.0 - auVar11._0_4_ * auVar8._0_4_) * auVar8._0_4_ * fVar24 * fVar21 +
                     (2.0 - auVar11._0_4_ * auVar8._8_4_) * auVar8._8_4_ * fVar26 * fVar23);
  return;
}



// FUNCTION 1438525c0 FUN_1438525c0 body=147 status=ok
// SIG undefined FUN_1438525c0(void)

void FUN_1438525c0(longlong param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_res8 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_res8[0] = *param_2;
  FUN_14384dd50(*(undefined8 *)(param_1 + 0x18),local_res8,&local_18);
  fVar4 = fStack_14 * *(float *)(param_1 + 0x50) + local_18 * *(float *)(param_1 + 0x40) +
          fStack_10 * *(float *)(param_1 + 0x60);
  fVar5 = fStack_14 * *(float *)(param_1 + 0x54) + local_18 * *(float *)(param_1 + 0x44) +
          fStack_10 * *(float *)(param_1 + 100);
  fVar6 = fStack_14 * *(float *)(param_1 + 0x58) + local_18 * *(float *)(param_1 + 0x48) +
          fStack_10 * *(float *)(param_1 + 0x68);
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x74);
  fVar3 = *(float *)(param_1 + 0x78);
  *param_3 = fVar4;
  param_3[1] = fVar5;
  param_3[2] = fVar6;
  param_3[3] = fStack_c - (fVar2 * fVar5 + fVar1 * fVar4 + fVar3 * fVar6);
  return;
}



// FUNCTION 143852660 FUN_143852660 body=47 status=ok
// SIG undefined FUN_143852660(void)

void FUN_143852660(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = *param_3;
  local_res18[0] = *param_2;
  FUN_14384dfa0(param_1,local_res18,local_res10,param_4,param_5);
  return;
}



// FUNCTION 143852690 FUN_143852690 body=25 status=ok
// SIG undefined FUN_143852690(void)

void FUN_143852690(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *param_2;
  FUN_14384e280(param_1,local_res10);
  return;
}



// FUNCTION 1438526b0 FUN_1438526b0 body=203 status=ok
// SIG undefined FUN_1438526b0(void)

void FUN_1438526b0(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 local_res8 [2];
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [16];
  
  FUN_143713730(local_48,param_1 + 0x40);
  FUN_1437136d0(&local_38,param_1 + 0x40,param_3 + 0x10);
  auVar2._4_4_ = fStack_34;
  auVar2._0_4_ = local_38;
  auVar2._8_4_ = fStack_30;
  fStack_2c = *(float *)(param_3 + 0x1c);
  local_res8[0] = *param_2;
  auVar2._12_4_ = fStack_2c;
  local_38 = (float)(~-(uint)(local_38 == 0.0) & (uint)local_38);
  fStack_34 = (float)(~-(uint)(fStack_34 == 0.0) & (uint)fStack_34);
  fStack_30 = (float)(~-(uint)(fStack_30 == 0.0) & (uint)fStack_30);
  fStack_2c = (float)(~-(uint)(fStack_2c == 0.0) & (uint)fStack_2c);
  auVar1._4_4_ = fStack_34;
  auVar1._0_4_ = local_38;
  auVar1._8_4_ = fStack_30;
  auVar1._12_4_ = fStack_2c;
  auVar3 = rcpps(auVar2,auVar1);
  local_28._0_4_ =
       ~-(uint)(local_38 == 0.0) & (uint)((2.0 - auVar3._0_4_ * local_38) * auVar3._0_4_);
  local_28._4_4_ =
       ~-(uint)(fStack_34 == 0.0) & (uint)((2.0 - auVar3._4_4_ * fStack_34) * auVar3._4_4_);
  local_28._8_4_ =
       ~-(uint)(fStack_30 == 0.0) & (uint)((2.0 - auVar3._8_4_ * fStack_30) * auVar3._8_4_);
  local_28._12_4_ =
       ~-(uint)(fStack_2c == 0.0) & (uint)((2.0 - auVar3._12_4_ * fStack_2c) * auVar3._12_4_);
  auVar3._8_4_ = -(uint)(fStack_30 == 0.0) & 0x7f7fffee;
  auVar3._0_8_ = CONCAT44(-(uint)(fStack_34 == 0.0),-(uint)(local_38 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar3._12_4_ = -(uint)(fStack_2c == 0.0) & 0x7f7fffee;
  local_28 = local_28 | auVar3;
  FUN_14384e430(*(undefined8 *)(param_1 + 0x18),local_res8,local_48,param_4);
  return;
}



// FUNCTION 143852780 FUN_143852780 body=25 status=ok
// SIG undefined FUN_143852780(void)

void FUN_143852780(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *param_2;
  FUN_14384e6a0(param_1,local_res10);
  return;
}



// FUNCTION 1438527a0 FUN_1438527a0 body=35 status=ok
// SIG undefined FUN_1438527a0(void)

void FUN_1438527a0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *param_2;
  FUN_14384e800(param_1,local_res10,param_3,param_4,param_5);
  return;
}



// FUNCTION 1438527d0 FUN_1438527d0 body=221 status=ok
// SIG undefined FUN_1438527d0(void)

void FUN_1438527d0(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 local_res8 [2];
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [16];
  
  FUN_143713730(local_48,param_1 + 0x40);
  FUN_1437136d0(&local_38,param_1 + 0x40,param_3 + 0x10);
  auVar2._4_4_ = fStack_34;
  auVar2._0_4_ = local_38;
  auVar2._8_4_ = fStack_30;
  fStack_2c = *(float *)(param_3 + 0x1c);
  local_res8[0] = *param_2;
  auVar2._12_4_ = fStack_2c;
  local_38 = (float)(~-(uint)(local_38 == 0.0) & (uint)local_38);
  fStack_34 = (float)(~-(uint)(fStack_34 == 0.0) & (uint)fStack_34);
  fStack_30 = (float)(~-(uint)(fStack_30 == 0.0) & (uint)fStack_30);
  fStack_2c = (float)(~-(uint)(fStack_2c == 0.0) & (uint)fStack_2c);
  auVar1._4_4_ = fStack_34;
  auVar1._0_4_ = local_38;
  auVar1._8_4_ = fStack_30;
  auVar1._12_4_ = fStack_2c;
  auVar3 = rcpps(auVar2,auVar1);
  local_28._0_4_ =
       ~-(uint)(local_38 == 0.0) & (uint)((2.0 - auVar3._0_4_ * local_38) * auVar3._0_4_);
  local_28._4_4_ =
       ~-(uint)(fStack_34 == 0.0) & (uint)((2.0 - auVar3._4_4_ * fStack_34) * auVar3._4_4_);
  local_28._8_4_ =
       ~-(uint)(fStack_30 == 0.0) & (uint)((2.0 - auVar3._8_4_ * fStack_30) * auVar3._8_4_);
  local_28._12_4_ =
       ~-(uint)(fStack_2c == 0.0) & (uint)((2.0 - auVar3._12_4_ * fStack_2c) * auVar3._12_4_);
  auVar3._8_4_ = -(uint)(fStack_30 == 0.0) & 0x7f7fffee;
  auVar3._0_8_ = CONCAT44(-(uint)(fStack_34 == 0.0),-(uint)(local_38 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar3._12_4_ = -(uint)(fStack_2c == 0.0) & 0x7f7fffee;
  local_28 = local_28 | auVar3;
  FUN_14384e950(*(undefined8 *)(param_1 + 0x18),local_res8,local_48,param_4,param_5);
  return;
}



// FUNCTION 1438528b0 FUN_1438528b0 body=1365 status=ok
// SIG undefined FUN_1438528b0(void)

void FUN_1438528b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  uVar5 = 0;
  uVar4 = uVar5;
  uVar7 = uVar5;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      if (*(int *)(uVar7 + *(longlong *)(param_1 + 0xa0)) != -1) {
        FUN_143850b10(param_1,param_2,(longlong)(int)uVar4 * 0x10 + *(longlong *)(param_1 + 0xb0),
                      param_3);
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x90) +
         (longlong)*(int *)(uVar7 + *(longlong *)(param_1 + 0xa0)) * 4) = 0xffffffff;
      }
      uVar8 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar8;
      uVar7 = uVar7 + 4;
    } while ((int)uVar8 < *(int *)(param_1 + 0xa8));
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  uVar4 = uVar5;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      iVar10 = (int)uVar4;
      if (*(int *)(param_1 + 0x108) == 0) {
        bVar6 = 0;
      }
      else {
        bVar6 = *(byte *)((longlong)(*(int *)(param_1 + 0x20) + iVar10) +
                         *(longlong *)(param_1 + 0x100));
      }
      if ((bVar6 & 1) == 0) {
        FUN_143850b10(param_1,param_2,(longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0xd0),
                      param_3);
      }
      uVar4 = (ulonglong)(iVar10 + 1U);
    } while ((int)(iVar10 + 1U) < *(int *)(param_1 + 0xd8));
  }
  uVar4 = uVar5;
  uVar7 = uVar5;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      uVar8 = (int)uVar4 + 1;
      *(undefined4 *)(uVar7 + *(longlong *)(param_1 + 0x70)) = 0xffffffff;
      uVar4 = (ulonglong)uVar8;
      uVar7 = uVar7 + 4;
    } while ((int)uVar8 < *(int *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xbc)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0xb0),0x10,*(uint *)(param_1 + 0xbc) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 200) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xcc)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0xc0),0x14,*(uint *)(param_1 + 0xcc) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xdc)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0xd0),0x10,*(uint *)(param_1 + 0xdc) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xec)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0xe0),0x14,*(uint *)(param_1 + 0xec) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xfc)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0xf0),0x10,*(uint *)(param_1 + 0xfc) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x11c)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0x110),2,*(uint *)(param_1 + 0x11c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (-1 < (int)*(uint *)(param_1 + 300)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0x120),4,*(uint *)(param_1 + 300) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 300) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x13c)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0x130),4,*(uint *)(param_1 + 0x13c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14c)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0x140),4,*(uint *)(param_1 + 0x14c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x15c)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0x150),4,*(uint *)(param_1 + 0x15c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0x80000000;
  iVar10 = *(int *)(param_1 + 0x20);
  uVar3 = FUN_143703a50();
  uVar8 = *(uint *)(param_1 + 0x10c) & 0x3fffffff;
  if ((int)uVar8 < iVar10) {
    iVar2 = uVar8 * 2;
    iVar1 = iVar10;
    if (iVar10 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar3,param_1 + 0x100,iVar1,1);
  }
  *(int *)(param_1 + 0x108) = iVar10;
  uVar4 = uVar5;
  uVar7 = uVar5;
  if (0 < iVar10) {
    do {
      uVar8 = (int)uVar7 + 1;
      *(undefined1 *)(uVar4 + *(longlong *)(param_1 + 0x100)) = 0;
      uVar4 = uVar4 + 1;
      uVar7 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x108));
  }
  iVar10 = *(int *)(param_1 + 0x20);
  uVar3 = FUN_143703a50();
  uVar8 = *(uint *)(param_1 + 0x174) & 0x3fffffff;
  if ((int)uVar8 < iVar10) {
    iVar2 = uVar8 * 2;
    iVar1 = iVar10;
    if (iVar10 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar3,param_1 + 0x168,iVar1,4);
  }
  *(int *)(param_1 + 0x170) = iVar10;
  uVar4 = uVar5;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      uVar8 = (int)uVar4 + 1;
      *(undefined4 *)(uVar5 + *(longlong *)(param_1 + 0x168)) = 0xffffffff;
      uVar5 = uVar5 + 4;
      uVar4 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  uVar3 = FUN_143703a50();
  iVar10 = *(int *)(param_1 + 400) + -1;
  if (-1 < iVar10) {
    lVar9 = *(longlong *)(param_1 + 0x188) + 8 + (longlong)iVar10 * 0x38;
    do {
      FUN_14382bf40(lVar9);
      lVar9 = lVar9 + -0x38;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  *(undefined4 *)(param_1 + 400) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x194)) {
    FUN_143702e10(uVar3,*(undefined8 *)(param_1 + 0x188),0x38,
                  *(uint *)(param_1 + 0x194) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0x80000000;
  FUN_143734820(param_1 + 0x198);
  return;
}



// FUNCTION 143852e10 FUN_143852e10 body=61 status=ok
// SIG undefined FUN_143852e10(void)

undefined4
FUN_143852e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  
  local_res8[0] = 0xffffffff;
  local_10 = 1;
  local_18 = param_1;
  iVar1 = FUN_14384f9e0(&local_18,param_2,param_3,local_res8,param_4);
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = local_res8[0];
  }
  return uVar2;
}



// FUNCTION 143852e50 FUN_143852e50 body=325 status=ok
// SIG undefined FUN_143852e50(void)

void FUN_143852e50(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  iVar8 = *(int *)(param_1 + 0xe8);
  if ((int)uVar2 < iVar8) {
    iVar1 = uVar2 * 2;
    iVar5 = iVar8;
    if (iVar8 < iVar1) {
      iVar5 = iVar1;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_2,iVar5,4);
  }
  iVar5 = iVar8 - (int)param_2[1];
  if (0 < iVar5) {
    puVar6 = (undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 4);
    for (lVar3 = (longlong)iVar5; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
  }
  *(int *)(param_2 + 1) = iVar8;
  uVar4 = uVar10;
  uVar9 = uVar10;
  if (0 < *(int *)(param_1 + 0xb8)) {
    do {
      piVar7 = (int *)(*(longlong *)(param_1 + 0xb0) + uVar9);
      iVar8 = (int)uVar4;
      if ((*(int *)(param_1 + 0x30) <= *piVar7) && (0 < (short)piVar7[2])) {
        uVar4 = uVar10;
        lVar3 = (longlong)(*piVar7 - *(int *)(param_1 + 0x30)) * 4;
        do {
          uVar2 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar2;
          *(int *)(lVar3 + *param_2) = iVar8;
          lVar3 = lVar3 + 4;
        } while ((int)uVar2 < (int)(short)piVar7[2]);
      }
      if ((*(int *)(param_1 + 0x30) <= piVar7[1]) && (0 < *(short *)((longlong)piVar7 + 10))) {
        lVar3 = (longlong)(piVar7[1] - *(int *)(param_1 + 0x30)) * 4;
        uVar4 = uVar10;
        do {
          uVar2 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar2;
          *(int *)(lVar3 + *param_2) = iVar8;
          lVar3 = lVar3 + 4;
        } while ((int)uVar2 < (int)*(short *)((longlong)piVar7 + 10));
      }
      uVar4 = (ulonglong)(iVar8 + 1U);
      uVar9 = uVar9 + 0x10;
    } while ((int)(iVar8 + 1U) < *(int *)(param_1 + 0xb8));
  }
  return;
}



// FUNCTION 143852fa0 FUN_143852fa0 body=379 status=ok
// SIG undefined FUN_143852fa0(void)

void FUN_143852fa0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  
  uVar12 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  iVar8 = *(int *)(param_1 + 0xe8);
  if ((int)uVar2 < iVar8) {
    iVar1 = uVar2 * 2;
    iVar5 = iVar8;
    if (iVar8 < iVar1) {
      iVar5 = iVar1;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_2,iVar5,4);
  }
  iVar5 = iVar8 - (int)param_2[1];
  if (0 < iVar5) {
    puVar9 = (undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 4);
    for (lVar4 = (longlong)iVar5; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
  }
  *(int *)(param_2 + 1) = iVar8;
  iVar8 = *(int *)(param_1 + 0xd8);
  lVar4 = (longlong)iVar8;
  iVar5 = *(int *)(param_1 + 0x30);
  thunk_FUN_143719c70(0x6deb4d92);
  uVar7 = uVar12;
  uVar6 = uVar12;
  uVar10 = uVar12;
  if (0 < iVar8) {
    do {
      piVar11 = (int *)(*(longlong *)(param_1 + 0xd0) + uVar7);
      iVar8 = (int)uVar6;
      if ((iVar5 <= *piVar11) && (0 < (short)piVar11[2])) {
        lVar3 = (longlong)(*piVar11 - iVar5) * 4;
        uVar6 = uVar12;
        do {
          uVar2 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar2;
          *(int *)(lVar3 + *param_2) = iVar8;
          lVar3 = lVar3 + 4;
        } while ((int)uVar2 < (int)(short)piVar11[2]);
      }
      if ((iVar5 <= piVar11[1]) && (0 < *(short *)((longlong)piVar11 + 10))) {
        lVar3 = (longlong)(piVar11[1] - iVar5) * 4;
        uVar6 = uVar12;
        do {
          uVar2 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar2;
          *(int *)(lVar3 + *param_2) = iVar8;
          lVar3 = lVar3 + 4;
        } while ((int)uVar2 < (int)*(short *)((longlong)piVar11 + 10));
      }
      uVar2 = (int)uVar10 + 0x1f7510;
      if (uVar2 < 0x1f7510) {
        thunk_FUN_143719c70(0xce2693db);
      }
      lVar4 = lVar4 + -1;
      uVar7 = uVar7 + 0x10;
      uVar6 = (ulonglong)(iVar8 + 1);
      uVar10 = (ulonglong)uVar2;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143853120 FUN_143853120 body=116 status=ok
// SIG undefined FUN_143853120(void)

undefined8 FUN_143853120(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 2;
  if (2 < (int)param_2[1]) {
    do {
      lVar1 = *param_2;
      iVar2 = FUN_143e0d9c0(param_1,lVar1,(longlong)(iVar3 + -1) * 0x10 + lVar1,
                            (longlong)iVar3 * 0x10 + lVar1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_2[1]);
  }
  return 0;
}



// FUNCTION 1438531a0 FUN_1438531a0 body=23 status=ok
// SIG undefined FUN_1438531a0(void)

void FUN_1438531a0(int param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return;
}



// FUNCTION 1438531c0 getClosestBoundaryOnFace body=58 status=ok
// SIG undefined getClosestBoundaryOnFace(void)

undefined8
hkaiNavMeshUtils::getClosestBoundaryOnFace
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *param_4;
  FUN_14384fbc0(param_1,param_2,local_res8,param_3,param_5,param_6);
  return param_1;
}



// FUNCTION 143853200 getClosestBoundaryOnFace body=58 status=ok
// SIG undefined getClosestBoundaryOnFace(void)

undefined8
hkaiNavMeshUtils::getClosestBoundaryOnFace
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *param_4;
  FUN_14384fe00(param_1,param_2,local_res8,param_3,param_5,param_6);
  return param_1;
}



// FUNCTION 143853240 FUN_143853240 body=425 status=ok
// SIG undefined FUN_143853240(void)

int * FUN_143853240(int *param_1,longlong param_2,undefined8 param_3,int *param_4,undefined8 param_5
                   ,undefined4 *param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  int local_res10 [2];
  int local_res20 [2];
  int local_68;
  int local_64 [3];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  
  fVar9 = fRam00000001467f08dc;
  fVar8 = DAT_1467f08d0;
  local_68 = *param_4;
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (*(int *)(lVar1 + 0x108) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)((longlong)local_68 + *(longlong *)(lVar1 + 0x100));
  }
  if ((bVar4 & 1) != 0) {
    iVar2 = -1;
    uVar5 = *param_6;
    uVar6 = param_6[1];
    uVar7 = param_6[2];
    FUN_143839060(lVar1,local_res10,&local_68,local_64,local_res20);
    if (((char)local_res10[0] != '\0') && (iVar3 = local_64[0], local_64[0] < local_res20[0])) {
      do {
        local_res10[0] = iVar3;
        hkaiNavMeshUtils::getClosestBoundaryOnFace
                  (&local_68,*(undefined8 *)(param_2 + 0x18),param_3,local_res10,param_5,&local_58);
        if (fStack_4c < fVar8) {
          uVar5 = local_58;
          uVar6 = uStack_54;
          uVar7 = uStack_50;
          fVar8 = fStack_4c;
          fVar9 = fStack_4c;
          iVar2 = local_68;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_res20[0]);
    }
    *param_6 = uVar5;
    param_6[1] = uVar6;
    param_6[2] = uVar7;
    param_6[3] = fVar9;
    *param_1 = iVar2;
    return param_1;
  }
  local_res10[0] = local_68;
  hkaiNavMeshUtils::getClosestBoundaryOnFace
            (param_1,*(undefined8 *)(lVar1 + 0x68),param_3,local_res10,param_5,param_6);
  return param_1;
}



// FUNCTION 1438533f0 FUN_1438533f0 body=26 status=ok
// SIG undefined FUN_1438533f0(void)

void FUN_1438533f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_3;
  FUN_143850110(param_1,param_2,local_res18);
  return;
}



// FUNCTION 143853410 FUN_143853410 body=114 status=ok
// SIG undefined FUN_143853410(void)

void FUN_143853410(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 local_res8 [2];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  FUN_143713730(local_28,param_1 + 0x40,param_2);
  local_res8[0] = *param_3;
  FUN_143853490(*(undefined8 *)(param_1 + 0x18),local_28,local_res8,local_18);
  FUN_143713830(param_4,param_1 + 0x40,local_18);
  return;
}



// FUNCTION 143853490 FUN_143853490 body=26 status=ok
// SIG undefined FUN_143853490(void)

void FUN_143853490(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_3;
  FUN_143850550(param_1,param_2,local_res18);
  return;
}



// FUNCTION 1438534b0 FUN_1438534b0 body=550 status=ok
// SIG undefined FUN_1438534b0(void)

int * FUN_1438534b0(int *param_1,longlong param_2,float *param_3,int *param_4,float *param_5,
                   longlong *param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_res10 [4];
  int local_res20 [2];
  int local_78;
  int local_74 [3];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  fVar11 = DAT_1467f08d0;
  local_78 = *param_4;
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (*(int *)(lVar1 + 0x108) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)((longlong)local_78 + *(longlong *)(lVar1 + 0x100));
  }
  if ((bVar5 & 1) == 0) {
    if ((param_6 == (longlong *)0x0) ||
       (local_res10[0] = local_78,
       iVar2 = (**(code **)(*param_6 + 0x20))(param_6,param_2,local_res10,param_7,param_8),
       iVar2 != 0)) {
      local_res10[0] = *param_4;
      FUN_1438533f0(*(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x68),param_3,local_res10,
                    param_5);
      *param_1 = *param_4;
      return param_1;
    }
    iVar2 = -1;
  }
  else {
    iVar3 = -1;
    fVar7 = *param_5;
    fVar8 = param_5[1];
    fVar9 = param_5[2];
    fVar10 = param_5[3];
    FUN_143839060(lVar1,local_res10,&local_78,local_74,local_res20);
    iVar2 = -1;
    if (((char)local_res10[0] != '\0') &&
       (iVar4 = local_74[0], iVar2 = -1, local_74[0] < local_res20[0])) {
      do {
        iVar2 = iVar3;
        if ((param_6 == (longlong *)0x0) ||
           (local_res10[0] = iVar4,
           iVar3 = (**(code **)(*param_6 + 0x20))(param_6,param_2,local_res10,param_7,param_8),
           iVar3 != 0)) {
          local_res10[0] = iVar4;
          FUN_143853490(*(undefined8 *)(param_2 + 0x18),param_3,local_res10,&local_68);
          fVar6 = (fStack_64 - param_3[1]) * (fStack_64 - param_3[1]) +
                  (local_68 - *param_3) * (local_68 - *param_3) +
                  (fStack_60 - param_3[2]) * (fStack_60 - param_3[2]);
          if (fVar6 < fVar11) {
            fVar7 = local_68;
            fVar8 = fStack_64;
            fVar9 = fStack_60;
            fVar10 = fStack_5c;
            fVar11 = fVar6;
            iVar2 = iVar4;
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar2;
      } while (iVar4 < local_res20[0]);
    }
    *param_5 = fVar7;
    param_5[1] = fVar8;
    param_5[2] = fVar9;
    param_5[3] = fVar10;
  }
  *param_1 = iVar2;
  return param_1;
}



// FUNCTION 1438536e0 thunk_FUN_14384eb70 body=5 status=ok
// SIG undefined thunk_FUN_14384eb70(void)

void thunk_FUN_14384eb70(longlong param_1,int *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  float fVar24;
  undefined8 uVar25;
  int *piVar26;
  float *pfVar27;
  uint uVar28;
  float *pfVar29;
  int iVar30;
  
  pfVar5 = (float *)*param_3;
  uVar1 = *(ushort *)(param_2 + 2);
  iVar2 = *param_2;
  uVar28 = (int)(short)uVar1 & 0xfffffffe;
  iVar30 = 0;
  pfVar29 = pfVar5;
  if (0 < (int)uVar28) {
    lVar6 = *(longlong *)(param_1 + 0x18);
    iVar3 = *(int *)(lVar6 + 0x40);
    do {
      piVar26 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x30));
      iVar4 = *piVar26;
      if (iVar4 < iVar3) {
        pfVar27 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar6 + 0x38));
      }
      else {
        pfVar27 = (float *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(lVar6 + 0xf0));
      }
      fVar7 = *pfVar27;
      fVar8 = pfVar27[1];
      fVar9 = pfVar27[2];
      iVar4 = piVar26[1];
      fVar10 = *(float *)(param_1 + 0x54);
      fVar11 = *(float *)(param_1 + 0x58);
      fVar12 = *(float *)(param_1 + 0x5c);
      fVar13 = *(float *)(param_1 + 0x44);
      fVar14 = *(float *)(param_1 + 0x48);
      fVar15 = *(float *)(param_1 + 0x4c);
      fVar16 = *(float *)(param_1 + 100);
      fVar17 = *(float *)(param_1 + 0x68);
      fVar18 = *(float *)(param_1 + 0x6c);
      fVar19 = *(float *)(param_1 + 0x74);
      fVar20 = *(float *)(param_1 + 0x78);
      fVar21 = *(float *)(param_1 + 0x7c);
      if (iVar4 < iVar3) {
        pfVar27 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar6 + 0x38));
      }
      else {
        pfVar27 = (float *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(lVar6 + 0xf0));
      }
      fVar22 = *pfVar27;
      fVar23 = pfVar27[1];
      fVar24 = pfVar27[2];
      iVar30 = iVar30 + 2;
      *pfVar29 = fVar8 * *(float *)(param_1 + 0x50) + fVar7 * *(float *)(param_1 + 0x40) +
                 fVar9 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x70);
      pfVar29[1] = fVar8 * fVar10 + fVar7 * fVar13 + fVar9 * fVar16 + fVar19;
      pfVar29[2] = fVar8 * fVar11 + fVar7 * fVar14 + fVar9 * fVar17 + fVar20;
      pfVar29[3] = fVar8 * fVar12 + fVar7 * fVar15 + fVar9 * fVar18 + fVar21;
      fVar7 = *(float *)(param_1 + 0x54);
      fVar8 = *(float *)(param_1 + 0x58);
      fVar9 = *(float *)(param_1 + 0x5c);
      fVar10 = *(float *)(param_1 + 0x44);
      fVar11 = *(float *)(param_1 + 0x48);
      fVar12 = *(float *)(param_1 + 0x4c);
      fVar13 = *(float *)(param_1 + 100);
      fVar14 = *(float *)(param_1 + 0x68);
      fVar15 = *(float *)(param_1 + 0x6c);
      fVar16 = *(float *)(param_1 + 0x74);
      fVar17 = *(float *)(param_1 + 0x78);
      fVar18 = *(float *)(param_1 + 0x7c);
      pfVar29[4] = fVar23 * *(float *)(param_1 + 0x50) + fVar22 * *(float *)(param_1 + 0x40) +
                   fVar24 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x70);
      pfVar29[5] = fVar23 * fVar7 + fVar22 * fVar10 + fVar24 * fVar13 + fVar16;
      pfVar29[6] = fVar23 * fVar8 + fVar22 * fVar11 + fVar24 * fVar14 + fVar17;
      pfVar29[7] = fVar23 * fVar9 + fVar22 * fVar12 + fVar24 * fVar15 + fVar18;
      pfVar29 = pfVar29 + 8;
    } while (iVar30 < (int)uVar28);
  }
  if ((uVar1 & 1) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x18);
    piVar26 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x30),
                                   lVar6 + 0xc0,lVar6 + 0xe0,lVar6 + 0x70,
                                   iVar2 + -1 + (int)(short)uVar1);
    iVar2 = *piVar26;
    if (iVar2 < *(int *)(lVar6 + 0x40)) {
      pfVar27 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar6 + 0x38));
    }
    else {
      pfVar27 = (float *)((longlong)(iVar2 - *(int *)(lVar6 + 0x40)) * 0x10 +
                         *(longlong *)(lVar6 + 0xf0));
    }
    fVar7 = *pfVar27;
    fVar8 = pfVar27[1];
    fVar9 = pfVar27[2];
    fVar10 = *(float *)(param_1 + 0x54);
    fVar11 = *(float *)(param_1 + 0x58);
    fVar12 = *(float *)(param_1 + 0x5c);
    fVar13 = *(float *)(param_1 + 0x44);
    fVar14 = *(float *)(param_1 + 0x48);
    fVar15 = *(float *)(param_1 + 0x4c);
    fVar16 = *(float *)(param_1 + 100);
    fVar17 = *(float *)(param_1 + 0x68);
    fVar18 = *(float *)(param_1 + 0x6c);
    fVar19 = *(float *)(param_1 + 0x74);
    fVar20 = *(float *)(param_1 + 0x78);
    fVar21 = *(float *)(param_1 + 0x7c);
    *pfVar29 = fVar8 * *(float *)(param_1 + 0x50) + fVar7 * *(float *)(param_1 + 0x40) +
               fVar9 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x70);
    pfVar29[1] = fVar8 * fVar10 + fVar7 * fVar13 + fVar9 * fVar16 + fVar19;
    pfVar29[2] = fVar8 * fVar11 + fVar7 * fVar14 + fVar9 * fVar17 + fVar20;
    pfVar29[3] = fVar8 * fVar12 + fVar7 * fVar15 + fVar9 * fVar18 + fVar21;
  }
  lVar6 = param_3[1];
  uVar25 = *(undefined8 *)(pfVar5 + 2);
  *(undefined8 *)(pfVar5 + (longlong)((int)lVar6 + -1) * 4) = *(undefined8 *)pfVar5;
  *(undefined8 *)(pfVar5 + (longlong)((int)lVar6 + -1) * 4 + 2) = uVar25;
  return;
}



// FUNCTION 1438536f0 thunk_FUN_14384edb0 body=5 status=ok
// SIG undefined thunk_FUN_14384edb0(void)

void thunk_FUN_14384edb0(longlong param_1,int *param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  int iVar20;
  
  uVar1 = *(ushort *)(param_2 + 2);
  iVar20 = 0;
  puVar5 = (undefined8 *)*param_3;
  iVar2 = *param_2;
  uVar18 = (int)(short)uVar1 & 0xfffffffe;
  puVar19 = puVar5;
  if (0 < (int)uVar18) {
    iVar3 = *(int *)(param_1 + 0x40);
    do {
      piVar15 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30)
                                    );
      iVar4 = *piVar15;
      if (iVar4 < iVar3) {
        puVar17 = (undefined4 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar17 = (undefined4 *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      iVar4 = piVar15[1];
      uVar6 = *puVar17;
      uVar7 = puVar17[1];
      uVar8 = puVar17[2];
      uVar9 = puVar17[3];
      if (iVar4 < iVar3) {
        puVar17 = (undefined4 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x38));
      }
      else {
        puVar17 = (undefined4 *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(param_1 + 0xf0));
      }
      uVar10 = puVar17[1];
      uVar11 = puVar17[2];
      uVar12 = puVar17[3];
      iVar20 = iVar20 + 2;
      *(undefined4 *)(puVar19 + 2) = *puVar17;
      *(undefined4 *)((longlong)puVar19 + 0x14) = uVar10;
      *(undefined4 *)(puVar19 + 3) = uVar11;
      *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar12;
      *(undefined4 *)puVar19 = uVar6;
      *(undefined4 *)((longlong)puVar19 + 4) = uVar7;
      *(undefined4 *)(puVar19 + 1) = uVar8;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uVar9;
      puVar19 = puVar19 + 4;
    } while (iVar20 < (int)uVar18);
  }
  if ((uVar1 & 1) != 0) {
    piVar15 = (int *)FUN_1437fb5b0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                                   param_1 + 0xc0,param_1 + 0xe0,param_1 + 0x70,
                                   ((int)(short)uVar1 - 1U) + iVar2);
    iVar2 = *piVar15;
    if (iVar2 < *(int *)(param_1 + 0x40)) {
      puVar16 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x38));
    }
    else {
      puVar16 = (undefined8 *)
                ((longlong)(iVar2 - *(int *)(param_1 + 0x40)) * 0x10 + *(longlong *)(param_1 + 0xf0)
                );
    }
    uVar13 = puVar16[1];
    *puVar19 = *puVar16;
    puVar19[1] = uVar13;
  }
  lVar14 = param_3[1];
  uVar13 = puVar5[1];
  puVar5[(longlong)((int)lVar14 + -1) * 2] = *puVar5;
  (puVar5 + (longlong)((int)lVar14 + -1) * 2)[1] = uVar13;
  return;
}



// FUNCTION 143853700 FUN_143853700 body=108 status=ok
// SIG undefined FUN_143853700(void)

void FUN_143853700(void)

{
  char in_stack_00000030;
  
  if (in_stack_00000030 != '\0') {
    FUN_143850e80();
    return;
  }
  FUN_143851af0();
  return;
}



// FUNCTION 143853770 FUN_143853770 body=1502 status=ok
// SIG undefined FUN_143853770(void)

/* WARNING: Removing unreachable block (ram,0x0001438537f4) */

void FUN_143853770(longlong param_1,undefined4 *param_2,undefined1 (*param_3) [16],float *param_4,
                  float *param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
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
  float local_118;
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
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  
  _local_e8 = *param_3;
  fVar28 = local_e8._0_4_;
  fVar29 = local_e8._4_4_;
  fVar30 = local_e8._8_4_;
  fVar31 = local_e8._12_4_;
  FUN_143713730(&local_f8,param_1 + 0x40,param_4);
  fVar14 = fVar28 * fVar28;
  fVar17 = fVar29 * fVar29;
  auVar24._4_4_ = fVar17 + fVar14;
  auVar24._0_4_ = fVar17 + fVar14;
  auVar24._8_4_ = fVar17 + fVar14;
  auVar24._12_4_ = fVar17 + fVar14;
  fVar18 = fVar28 * fVar28 + fVar30 * fVar30;
  fVar20 = fVar30 * fVar30 + fVar28 * fVar28;
  auVar16._0_4_ = fVar18 + 0.0;
  auVar16._4_4_ = fVar18 + 0.0;
  auVar16._8_4_ = fVar20 + 0.0;
  auVar16._12_4_ = fVar20 + 0.0;
  auVar24 = maxps(auVar24,auVar16);
  uVar13 = -(uint)(fVar17 + fVar14 < auVar16._0_4_);
  fVar22 = (float)(~-(uint)(fVar17 + fVar14 < auVar16._4_4_) & (uint)fVar28);
  fVar26 = (float)((uint)fVar28 & -(uint)(fVar17 + fVar14 < auVar16._8_4_));
  fVar20 = (float)(~uVar13 & (uint)-fVar29 | (uint)-fVar30 & uVar13);
  auVar15._0_4_ = fVar29 * fVar20;
  auVar15._4_4_ = fVar30 * fVar22;
  auVar15._8_4_ = fVar28 * fVar26;
  auVar15._12_4_ = fVar31 * 0.0;
  auVar16 = rsqrtps(auVar15,auVar24);
  fVar14 = auVar16._0_4_;
  fVar17 = auVar16._4_4_;
  fVar18 = auVar16._8_4_;
  fVar14 = (3.0 - auVar24._0_4_ * fVar14 * fVar14) * fVar14 * 0.5;
  fVar17 = (3.0 - auVar24._4_4_ * fVar17 * fVar17) * fVar17 * 0.5;
  fVar18 = (3.0 - auVar24._8_4_ * fVar18 * fVar18) * fVar18 * 0.5;
  fVar38 = (fVar26 * fVar29 - auVar15._4_4_) * fVar14;
  fVar39 = (fVar20 * fVar30 - auVar15._8_4_) * fVar17;
  fVar40 = (fVar22 * fVar28 - auVar15._0_4_) * fVar18;
  fVar14 = fVar14 * fVar20;
  fVar17 = fVar17 * fVar22;
  fVar18 = fVar18 * fVar26;
  lVar1 = *(longlong *)(param_1 + 0x18);
  fVar20 = 0.0 - (fStack_f4 * fVar17 + local_f8 * fVar14 + fStack_f0 * fVar18);
  fVar22 = 0.0 - (fStack_f4 * fVar39 + local_f8 * fVar38 + fStack_f0 * fVar40);
  local_108 = fVar14;
  fStack_104 = fVar17;
  fStack_100 = fVar18;
  fStack_fc = fVar20;
  piVar7 = (int *)FUN_1437fb610(*(undefined8 *)(lVar1 + 0x18),
                                fStack_f4 * fVar39 + local_f8 * fVar38 + fStack_f0 * fVar40,
                                lVar1 + 0xb0,lVar1 + 0xd0,lVar1 + 0x90,*param_2);
  iVar10 = *piVar7;
  iVar12 = (short)piVar7[2] + iVar10;
  lVar8 = FUN_1437fb5b0(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x30),lVar1 + 0xc0,
                        lVar1 + 0xe0,lVar1 + 0x70,iVar12 + -1);
  iVar11 = *(int *)(lVar8 + 4);
  if (iVar11 < *(int *)(lVar1 + 0x40)) {
    pfVar9 = (float *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar1 + 0x38));
  }
  else {
    pfVar9 = (float *)((longlong)(iVar11 - *(int *)(lVar1 + 0x40)) * 0x10 +
                      *(longlong *)(lVar1 + 0xf0));
  }
  fVar26 = *pfVar9;
  fVar35 = pfVar9[1];
  fVar36 = pfVar9[2];
  fVar37 = pfVar9[3];
  fVar34 = 1.8446726e+19;
  fVar32 = fVar20 + fVar35 * fVar17 + fVar36 * fVar18 + fVar26 * fVar14;
  fVar33 = fVar22 + fVar35 * fVar39 + fVar36 * fVar40 + fVar26 * fVar38;
  bVar2 = 0.0 < fVar33;
  bVar3 = 0.0 < fVar32;
  iVar11 = 0;
  if (iVar10 < iVar12) {
    do {
      lVar8 = FUN_1437fb5b0(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x30));
      iVar12 = *(int *)(lVar8 + 4);
      if (iVar12 < *(int *)(lVar1 + 0x40)) {
        pfVar9 = (float *)((longlong)iVar12 * 0x10 + *(longlong *)(lVar1 + 0x38));
      }
      else {
        pfVar9 = (float *)((longlong)(iVar12 - *(int *)(lVar1 + 0x40)) * 0x10 +
                          *(longlong *)(lVar1 + 0xf0));
      }
      fVar28 = *pfVar9;
      fVar29 = pfVar9[1];
      fVar30 = pfVar9[2];
      fVar31 = pfVar9[3];
      fVar21 = fVar20 + fVar29 * fVar17 + fVar30 * fVar18 + fVar28 * fVar14;
      fVar23 = fVar22 + fVar29 * fVar39 + fVar30 * fVar40 + fVar28 * fVar38;
      fVar19 = fVar23 * fVar23 + fVar21 * fVar21;
      if (fVar19 < fVar34) {
        fVar34 = fVar19;
        local_118 = fVar28;
        fStack_114 = fVar29;
        fStack_110 = fVar30;
        fStack_10c = fVar31;
      }
      fVar25 = fVar23 * fVar32 - fVar21 * fVar33;
      fVar19 = (fVar33 - fVar23) * (fVar33 - fVar23) + (fVar32 - fVar21) * (fVar32 - fVar21);
      if (fVar25 * fVar25 < fVar19 * fVar34) {
        fVar27 = (fVar23 - fVar33) * fVar33 + (fVar21 - fVar32) * fVar32;
        fVar14 = local_108;
        fVar17 = fStack_104;
        fVar18 = fStack_100;
        fVar20 = fStack_fc;
        if ((fVar27 < 0.0) && (0.0 < (fVar23 - fVar33) * fVar23 + (fVar21 - fVar32) * fVar21)) {
          fVar19 = 1.0 / fVar19;
          fVar34 = fVar19 * fVar25 * fVar25;
          fVar32 = -(fVar19 * fVar27);
          local_118 = fVar32 * (fVar28 - fVar26) + fVar26;
          fStack_114 = fVar32 * (fVar29 - fVar35) + fVar35;
          fStack_110 = fVar32 * (fVar30 - fVar36) + fVar36;
          fStack_10c = fVar32 * (fVar31 - fVar37) + fVar37;
        }
      }
      bVar4 = 0.0 < fVar23;
      bVar5 = 0.0 < fVar21;
      if (bVar2) {
        if (!bVar4) {
          if (bVar3) {
            if (!bVar5) {
LAB_143853c24:
              if (0.0 < fVar25) goto LAB_143853c2c;
            }
            iVar11 = iVar11 + -1;
          }
          else if (bVar5) goto LAB_143853c24;
        }
      }
      else if (bVar4) {
        if (bVar3) {
          if (bVar5) {
            iVar11 = iVar11 + 1;
          }
          else {
LAB_143853c07:
            if (0.0 < fVar25) {
              iVar11 = iVar11 + 1;
            }
          }
        }
        else if (bVar5) goto LAB_143853c07;
      }
LAB_143853c2c:
      iVar10 = iVar10 + 1;
      fVar32 = fVar21;
      fVar33 = fVar23;
      fVar26 = fVar28;
      fVar35 = fVar29;
      fVar36 = fVar30;
      fVar37 = fVar31;
      bVar2 = bVar4;
      bVar3 = bVar5;
    } while (iVar10 < (int)(short)piVar7[2] + *piVar7);
    if (iVar11 != 0) {
      uVar6 = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_5 = *(undefined8 *)param_4;
      *(undefined8 *)(param_5 + 2) = uVar6;
      return;
    }
    fVar28 = (float)local_e8._0_4_;
    fVar29 = (float)local_e8._4_4_;
    fVar30 = fStack_e0;
    fVar31 = fStack_dc;
  }
  FUN_143713830(&local_118,param_1 + 0x40,&local_118);
  fVar14 = local_118 * fVar28;
  fVar17 = fStack_114 * fVar29;
  fVar18 = fStack_110 * fVar30;
  fVar20 = fVar28 * *param_4;
  fVar22 = fVar29 * param_4[1];
  fVar26 = fVar30 * param_4[2];
  *param_5 = (local_118 - (fVar17 + fVar14 + fVar18) * fVar28) + (fVar22 + fVar20 + fVar26) * fVar28
  ;
  param_5[1] = (fStack_114 - (fVar17 + fVar14 + fVar18) * fVar29) +
               (fVar22 + fVar20 + fVar26) * fVar29;
  param_5[2] = (fStack_110 - (fVar17 + fVar14 + fVar18) * fVar30) +
               (fVar22 + fVar20 + fVar26) * fVar30;
  param_5[3] = (fStack_10c - (fVar17 + fVar14 + fVar18) * fVar31) +
               (fVar22 + fVar20 + fVar26) * fVar31;
  return;
}



// FUNCTION 143853d50 FUN_143853d50 body=798 status=ok
// SIG undefined FUN_143853d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_143853d50(longlong param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  local_b8 = *param_3;
  fStack_b4 = param_3[1];
  fStack_b0 = param_3[2];
  fStack_ac = param_3[3];
  lVar3 = *(longlong *)(param_1 + 0x18);
  piVar9 = (int *)FUN_1437fb610(*(undefined8 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x20),
                                lVar3 + 0xb0,lVar3 + 0xd0,lVar3 + 0x90,*param_2);
  iVar1 = *piVar9;
  iVar8 = piVar9[2];
  FUN_143713730(&local_c8,param_1 + 0x40,param_4);
  auVar40 = _DAT_1467f08e0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar38 = (undefined8)DAT_1467f08e0;
  piVar9 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                                lVar3 + 0xc0,lVar3 + 0xe0,lVar3 + 0x70,iVar1);
  iVar12 = *(int *)(lVar3 + 0x40);
  iVar2 = *piVar9;
  if (iVar2 < iVar12) {
    pfVar11 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar11 = (float *)((longlong)(iVar2 - iVar12) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  iVar2 = piVar9[1];
  fVar5 = *pfVar11;
  fVar6 = pfVar11[1];
  fVar7 = pfVar11[2];
  if (iVar2 < iVar12) {
    pfVar11 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar11 = (float *)((longlong)(iVar2 - iVar12) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  iVar12 = iVar1 + -1;
  fVar21 = *pfVar11 - fVar5;
  fVar24 = pfVar11[1] - fVar6;
  fVar25 = pfVar11[2] - fVar7;
  uVar41 = local_d8;
  uVar42 = uStack_d4;
  uVar43 = uStack_d0;
  uVar44 = uStack_cc;
  while (iVar1 = iVar1 + 1, local_d8 = uVar41, uStack_d4 = uVar42, uStack_d0 = uVar43,
        uStack_cc = uVar44, iVar1 != iVar12 + (short)iVar8) {
    lVar10 = FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30));
    iVar2 = *(int *)(lVar10 + 4);
    if (iVar2 < *(int *)(lVar3 + 0x40)) {
      pfVar11 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
    }
    else {
      pfVar11 = (float *)((longlong)(iVar2 - *(int *)(lVar3 + 0x40)) * 0x10 +
                         *(longlong *)(lVar3 + 0xf0));
    }
    fVar35 = *pfVar11 - fVar5;
    fVar36 = pfVar11[1] - fVar6;
    fVar37 = pfVar11[2] - fVar7;
    fVar28 = fVar36 * fVar21 - fVar24 * fVar35;
    fVar29 = fVar37 * fVar24 - fVar25 * fVar36;
    fVar30 = fVar35 * fVar25 - fVar21 * fVar37;
    fVar21 = local_b8 * fVar29;
    fVar24 = fStack_b4 * fVar30;
    auVar22._8_4_ = fStack_b0 * fVar28;
    fVar29 = fVar29 * (local_c8 - fVar5);
    fVar30 = fVar30 * (fStack_c4 - fVar6);
    fVar28 = fVar28 * (fStack_c0 - fVar7);
    auVar22._4_4_ = auVar22._8_4_;
    auVar22._0_4_ = auVar22._8_4_;
    auVar22._12_4_ = auVar22._8_4_;
    fVar25 = fVar24 + fVar21 + auVar22._8_4_;
    fVar26 = fVar24 + fVar21 + auVar22._8_4_;
    fVar27 = fVar24 + fVar21 + auVar22._8_4_;
    fVar21 = fVar24 + fVar21 + auVar22._8_4_;
    auVar4._4_4_ = fVar26;
    auVar4._0_4_ = fVar25;
    auVar4._8_4_ = fVar27;
    auVar4._12_4_ = fVar21;
    auVar23 = rcpps(auVar22,auVar4);
    uVar17 = -(uint)(fVar25 == 0.0) & 0x5f7ffff0;
    uVar18 = -(uint)(fVar26 == 0.0) & 0x5f7ffff0;
    uVar19 = -(uint)(fVar27 == 0.0) & 0x5f7ffff0;
    uVar20 = -(uint)(fVar21 == 0.0) & 0x5f7ffff0;
    uVar31 = ~-(uint)(fVar25 == 0.0) &
             (uint)((2.0 - auVar23._0_4_ * fVar25) * auVar23._0_4_ * (fVar30 + fVar29 + fVar28));
    uVar32 = ~-(uint)(fVar26 == 0.0) &
             (uint)((2.0 - auVar23._4_4_ * fVar26) * auVar23._4_4_ * (fVar30 + fVar29 + fVar28));
    uVar33 = ~-(uint)(fVar27 == 0.0) &
             (uint)((2.0 - auVar23._8_4_ * fVar27) * auVar23._8_4_ * (fVar30 + fVar29 + fVar28));
    uVar34 = ~-(uint)(fVar21 == 0.0) &
             (uint)((2.0 - auVar23._12_4_ * fVar21) * auVar23._12_4_ * (fVar30 + fVar29 + fVar28));
    fVar21 = (float)(uVar31 & 0x7fffffff | uVar17);
    fVar24 = (float)(uVar32 & 0x7fffffff | uVar18);
    fVar25 = (float)(uVar33 & 0x7fffffff | uVar19);
    fVar26 = (float)(uVar34 & 0x7fffffff | uVar20);
    uVar13 = -(uint)(fVar21 < auVar40._0_4_);
    uVar14 = -(uint)(fVar24 < auVar40._4_4_);
    uVar15 = -(uint)(fVar25 < auVar40._8_4_);
    uVar16 = -(uint)(fVar26 < auVar40._12_4_);
    auVar39._4_4_ = uVar14 & (uint)fVar24;
    auVar39._0_4_ = uVar13 & (uint)fVar21;
    auVar39._8_4_ = uVar15 & (uint)fVar25;
    auVar39._12_4_ = uVar16 & (uint)fVar26;
    auVar23._4_4_ = ~uVar14 & (uint)auVar40._4_4_;
    auVar23._0_4_ = ~uVar13 & (uint)auVar40._0_4_;
    auVar23._8_4_ = ~uVar15 & (uint)auVar40._8_4_;
    auVar23._12_4_ = ~uVar16 & (uint)auVar40._12_4_;
    auVar40 = auVar39 | auVar23;
    uVar38 = auVar40._0_8_;
    uVar41 = (uint)(local_c8 - (float)(uVar31 | uVar17) * local_b8) & uVar13 | ~uVar13 & uVar41;
    uVar42 = (uint)(fStack_c4 - (float)(uVar32 | uVar18) * fStack_b4) & uVar14 | ~uVar14 & uVar42;
    uVar43 = (uint)(fStack_c0 - (float)(uVar33 | uVar19) * fStack_b0) & uVar15 | ~uVar15 & uVar43;
    uVar44 = (uint)(fStack_bc - (float)(uVar34 | uVar20) * fStack_ac) & uVar16 | ~uVar16 & uVar44;
    fVar21 = fVar35;
    fVar24 = fVar36;
    fVar25 = fVar37;
  }
  FUN_143713830(param_5,param_1 + 0x40,&local_d8);
  return uVar38;
}



// FUNCTION 143854070 GetOverallExpThreshold body=17 status=ok
// SIG undefined GetOverallExpThreshold(void)

int UAncBlueprintFunctionLibrary::GetOverallExpThreshold(void)

{
  int iVar1;
  
  iVar1 = FUN_1438531a0();
  return iVar1 << 2;
}



// FUNCTION 143854090 FUN_143854090 body=203 status=ok
// SIG undefined FUN_143854090(void)

void FUN_143854090(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 local_res8 [2];
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [16];
  
  FUN_143713730(local_48,param_1 + 0x40);
  FUN_1437136d0(&local_38,param_1 + 0x40,param_3 + 0x10);
  auVar2._4_4_ = fStack_34;
  auVar2._0_4_ = local_38;
  auVar2._8_4_ = fStack_30;
  fStack_2c = *(float *)(param_3 + 0x1c);
  local_res8[0] = *param_2;
  auVar2._12_4_ = fStack_2c;
  local_38 = (float)(~-(uint)(local_38 == 0.0) & (uint)local_38);
  fStack_34 = (float)(~-(uint)(fStack_34 == 0.0) & (uint)fStack_34);
  fStack_30 = (float)(~-(uint)(fStack_30 == 0.0) & (uint)fStack_30);
  fStack_2c = (float)(~-(uint)(fStack_2c == 0.0) & (uint)fStack_2c);
  auVar1._4_4_ = fStack_34;
  auVar1._0_4_ = local_38;
  auVar1._8_4_ = fStack_30;
  auVar1._12_4_ = fStack_2c;
  auVar3 = rcpps(auVar2,auVar1);
  local_28._0_4_ =
       ~-(uint)(local_38 == 0.0) & (uint)((2.0 - auVar3._0_4_ * local_38) * auVar3._0_4_);
  local_28._4_4_ =
       ~-(uint)(fStack_34 == 0.0) & (uint)((2.0 - auVar3._4_4_ * fStack_34) * auVar3._4_4_);
  local_28._8_4_ =
       ~-(uint)(fStack_30 == 0.0) & (uint)((2.0 - auVar3._8_4_ * fStack_30) * auVar3._8_4_);
  local_28._12_4_ =
       ~-(uint)(fStack_2c == 0.0) & (uint)((2.0 - auVar3._12_4_ * fStack_2c) * auVar3._12_4_);
  auVar3._8_4_ = -(uint)(fStack_30 == 0.0) & 0x7f7fffee;
  auVar3._0_8_ = CONCAT44(-(uint)(fStack_34 == 0.0),-(uint)(local_38 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar3._12_4_ = -(uint)(fStack_2c == 0.0) & 0x7f7fffee;
  local_28 = local_28 | auVar3;
  FUN_14384ef40(*(undefined8 *)(param_1 + 0x18),local_res8,local_48,param_4);
  return;
}



// FUNCTION 143854160 FUN_143854160 body=53 status=ok
// SIG undefined FUN_143854160(void)

bool FUN_143854160(undefined4 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  float fVar1;
  undefined4 local_res10 [6];
  undefined1 local_18 [24];
  
  local_res10[0] = *param_2;
  fVar1 = (float)FUN_143853770(param_1,local_res10,param_3,param_4,local_18);
  return fVar1 < *param_5 * *param_5;
}



// FUNCTION 1438541a0 FUN_1438541a0 body=491 status=ok
// SIG undefined FUN_1438541a0(void)

undefined8
FUN_1438541a0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  fVar20 = *param_1;
  fVar21 = param_1[1];
  fVar28 = param_1[2];
  fVar30 = *param_2;
  fVar31 = param_2[1];
  fVar32 = param_2[2];
  fVar33 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar22 = *param_3 - fVar20;
  fVar23 = param_3[1] - fVar21;
  fVar24 = param_3[2] - fVar28;
  fVar17 = *param_3 - fVar30;
  fVar18 = param_3[1] - fVar31;
  fVar19 = param_3[2] - fVar32;
  fVar25 = *param_4 - fVar20;
  fVar26 = param_4[1] - fVar21;
  fVar27 = param_4[2] - fVar28;
  fVar14 = *param_4 - fVar30;
  fVar15 = param_4[1] - fVar31;
  fVar16 = param_4[2] - fVar32;
  fVar30 = fVar30 - fVar20;
  fVar31 = fVar31 - fVar21;
  fVar32 = fVar32 - fVar28;
  fVar29 = fVar15 * fVar17 - fVar18 * fVar14;
  fVar15 = fVar16 * fVar18 - fVar19 * fVar15;
  fVar16 = fVar14 * fVar19 - fVar17 * fVar16;
  fVar28 = (fVar32 * fVar26 - fVar27 * fVar31) * fVar33;
  fVar14 = (fVar30 * fVar27 - fVar25 * fVar32) * fVar3;
  fVar20 = fVar33 * fVar15;
  fVar21 = fVar3 * fVar16;
  fVar15 = fVar15 * fVar30;
  fVar16 = fVar16 * fVar31;
  fVar17 = fVar29 * fVar32;
  auVar12._4_4_ = fVar14;
  auVar12._0_4_ = fVar28;
  auVar12._8_4_ = fVar20;
  auVar12._12_4_ = fVar21;
  fVar32 = (fVar23 * fVar30 - fVar22 * fVar31) * fVar4 +
           (fVar22 * fVar32 - fVar24 * fVar30) * fVar3 +
           (fVar24 * fVar31 - fVar23 * fVar32) * fVar33;
  fVar33 = (fVar26 * fVar22 - fVar25 * fVar23) * fVar4 +
           (fVar25 * fVar24 - fVar27 * fVar22) * fVar3 +
           (fVar27 * fVar23 - fVar26 * fVar24) * fVar33;
  fVar28 = (fVar31 * fVar25 - fVar26 * fVar30) * fVar4 + fVar14 + fVar28;
  fVar20 = fVar4 * fVar29 + fVar21 + fVar20;
  auVar2._4_4_ = fVar20;
  auVar2._0_4_ = fVar20;
  auVar2._8_4_ = fVar20;
  auVar2._12_4_ = fVar20;
  auVar13 = rcpps(auVar12,auVar2);
  *param_6 = (2.0 - fVar20 * auVar13._0_4_) * auVar13._0_4_ * (fVar16 + fVar15 + fVar17);
  param_6[1] = (2.0 - fVar20 * auVar13._4_4_) * auVar13._4_4_ * (fVar16 + fVar15 + fVar17);
  param_6[2] = (2.0 - fVar20 * auVar13._8_4_) * auVar13._8_4_ * (fVar16 + fVar15 + fVar17);
  param_6[3] = (2.0 - fVar20 * auVar13._12_4_) * auVar13._12_4_ * (fVar16 + fVar15 + fVar17);
  bVar7 = fVar20 < 0.0 - *param_5 || *param_5 < fVar20;
  bVar8 = fVar20 < 0.0 - param_5[1] || param_5[1] < fVar20;
  bVar5 = fVar20 < 0.0 - param_5[2] || param_5[2] < fVar20;
  bVar6 = fVar20 < 0.0 - param_5[3] || param_5[3] < fVar20;
  auVar13._4_4_ = -(uint)(fVar33 <= 0.0 && bVar8);
  auVar13._0_4_ = -(uint)(fVar32 <= 0.0 && bVar7);
  auVar13._8_4_ = -(uint)(fVar28 <= 0.0 && bVar5);
  auVar13._12_4_ = -(uint)(fVar20 <= 0.0 && bVar6);
  uVar9 = movmskps((int)param_5,auVar13);
  if (((char)(uVar9 & 7) == '\a') ||
     (auVar1._4_4_ = -(uint)(0.0 <= fVar33 && bVar8), auVar1._0_4_ = -(uint)(0.0 <= fVar32 && bVar7)
     , auVar1._8_4_ = -(uint)(0.0 <= fVar28 && bVar5),
     auVar1._12_4_ = -(uint)(0.0 <= fVar20 && bVar6), uVar10 = movmskps(uVar9 & 7,auVar1),
     ((byte)uVar10 & 7) == 7)) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  return uVar11;
}



// FUNCTION 143854390 FUN_143854390 body=537 status=ok
// SIG undefined FUN_143854390(void)

void FUN_143854390(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar2 = *param_3;
  iVar3 = *param_4;
  if (iVar3 == iVar2) {
    return;
  }
  iVar4 = *(int *)(param_2 + 0x30);
  puVar7 = (undefined4 *)(*(longlong *)(param_2 + 0xe0) + (longlong)iVar3 * 0x14);
  puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0xe0) + (longlong)iVar2 * 0x14);
  *puVar1 = *puVar7;
  puVar1[1] = puVar7[1];
  puVar1[2] = puVar7[2];
  puVar1[3] = puVar7[3];
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar7 + 4);
  *(undefined1 *)((longlong)puVar1 + 0x11) = *(undefined1 *)((longlong)puVar7 + 0x11);
  *(undefined2 *)((longlong)puVar1 + 0x12) = *(undefined2 *)((longlong)puVar7 + 0x12);
  *(undefined2 *)(*(longlong *)(param_2 + 0x110) + (longlong)iVar2 * 2) =
       *(undefined2 *)(*(longlong *)(param_2 + 0x110) + (longlong)iVar3 * 2);
  iVar5 = *(int *)(param_2 + 0x60);
  lVar10 = (longlong)iVar5;
  puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0x150) + (longlong)(iVar5 * iVar3) * 4);
  puVar7 = (undefined4 *)(*(longlong *)(param_2 + 0x150) + (longlong)(iVar5 * iVar2) * 4);
  if (iVar5 == 1) {
    *puVar7 = *puVar1;
  }
  else if (0 < lVar10) {
    lVar11 = (longlong)puVar1 - (longlong)puVar7;
    do {
      *puVar7 = *(undefined4 *)(lVar11 + (longlong)puVar7);
      puVar7 = puVar7 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  lVar9 = *(longlong *)(param_2 + 0xe0);
  lVar10 = lVar9 + (longlong)*param_3 * 0x14;
  uVar6 = *(uint *)(lVar10 + 8);
  lVar11 = lVar9 + (longlong)*param_4 * 0x14;
  if (uVar6 == 0xffffffff) goto LAB_143854587;
  if ((*(byte *)(lVar10 + 0x10) & 0x40) == 0) {
    uVar6 = uVar6 & 0x3fffff;
    if ((int)uVar6 < *(int *)(param_2 + 0x30)) {
      if (*(int *)(param_2 + 0x78) != 0) {
        uVar6 = *(uint *)(*(longlong *)(param_2 + 0x70) + (longlong)(int)uVar6 * 4);
      }
      if (uVar6 == 0xffffffff) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(param_2 + 0xc0) + (longlong)(int)uVar6 * 0x14;
      }
    }
    else {
      lVar9 = lVar9 + (longlong)(int)(uVar6 - *(int *)(param_2 + 0x30)) * 0x14;
    }
    *(int *)(lVar9 + 8) = *param_3 + iVar4;
  }
  else {
    lVar9 = 0;
    lVar8 = *(longlong *)((ulonglong)(uVar6 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38));
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else if (*(char *)(lVar8 + 0x28) == '\x01') {
      lVar8 = *(longlong *)(lVar8 + 0x18);
    }
    else {
      lVar8 = FUN_142fbda20();
    }
    uVar6 = *(uint *)(lVar10 + 8) & 0x3fffff;
    if ((int)uVar6 < *(int *)(lVar8 + 0x30)) {
      if (*(int *)(lVar8 + 0x78) != 0) {
        uVar6 = *(uint *)(*(longlong *)(lVar8 + 0x70) + (longlong)(int)uVar6 * 4);
      }
      if (uVar6 != 0xffffffff) {
        lVar9 = *(longlong *)(lVar8 + 0xc0);
        goto LAB_143854518;
      }
    }
    else {
      uVar6 = uVar6 - *(int *)(lVar8 + 0x30);
      lVar9 = *(longlong *)(lVar8 + 0xe0);
LAB_143854518:
      lVar9 = lVar9 + (longlong)(int)uVar6 * 0x14;
    }
    iVar2 = *param_3;
    *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) & 0xffc00000;
    *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | iVar2 + iVar4;
  }
  *(undefined8 *)(lVar11 + 8) = 0xffffffffffffffff;
  *(byte *)(lVar11 + 0x10) = *(byte *)(lVar11 + 0x10) & 0xbf;
LAB_143854587:
  *(byte *)(lVar11 + 0x10) = *(byte *)(lVar11 + 0x10) | 0x80;
  return;
}



// FUNCTION 1438545b0 FUN_1438545b0 body=1127 status=ok
// SIG undefined FUN_1438545b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438545b0(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte bVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  int iVar14;
  
  if (*param_4 != *param_3) {
    puVar8 = (undefined4 *)((longlong)*param_3 * 0x10 + *(longlong *)(param_2 + 0xd0));
    iVar2 = *(int *)(param_2 + 0x20);
    puVar13 = (undefined4 *)((longlong)*param_4 * 0x10 + *(longlong *)(param_2 + 0xd0));
    *puVar8 = *puVar13;
    puVar8[1] = puVar13[1];
    *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar13 + 2);
    *(undefined2 *)((longlong)puVar8 + 10) = *(undefined2 *)((longlong)puVar13 + 10);
    *(undefined2 *)(puVar8 + 3) = *(undefined2 *)(puVar13 + 3);
    *(undefined2 *)((longlong)puVar8 + 0xe) = *(undefined2 *)((longlong)puVar13 + 0xe);
    *(undefined1 *)((longlong)(*param_3 + iVar2) + *(longlong *)(param_2 + 0x100)) =
         *(undefined1 *)((longlong)(*param_4 + iVar2) + *(longlong *)(param_2 + 0x100));
    iVar14 = *(int *)(param_2 + 0x50);
    lVar11 = (longlong)iVar14;
    puVar13 = (undefined4 *)(*(longlong *)(param_2 + 0x140) + (longlong)(iVar14 * *param_4) * 4);
    puVar8 = (undefined4 *)(*(longlong *)(param_2 + 0x140) + (longlong)(*param_3 * iVar14) * 4);
    if (iVar14 == 1) {
      *puVar8 = *puVar13;
    }
    else if (0 < lVar11) {
      lVar5 = (longlong)puVar13 - (longlong)puVar8;
      do {
        *puVar8 = *(undefined4 *)(lVar5 + (longlong)puVar8);
        puVar8 = puVar8 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    lVar11 = (longlong)*param_3 * 0x10 + *(longlong *)(param_2 + 0xd0);
    uVar9 = *param_3 + iVar2;
    iVar14 = 0;
    if (0 < *(short *)(lVar11 + 8)) {
      plVar12 = (longlong *)(param_2 + 0xe0);
      do {
        iVar3 = *(int *)(param_2 + 0x30);
        lVar5 = FUN_1437fb5b0(*(undefined8 *)(param_2 + 0x28));
        uVar4 = *(uint *)(lVar5 + 8);
        if (uVar4 != 0xffffffff) {
          if ((*(byte *)(lVar5 + 0x10) & 0x40) == 0) {
            uVar4 = uVar4 & 0x3fffff;
            if ((int)uVar4 < iVar3) {
              if (*(int *)(param_2 + 0x78) != 0) {
                uVar4 = *(uint *)(*(longlong *)(param_2 + 0x70) + (longlong)(int)uVar4 * 4);
              }
              if (uVar4 != 0xffffffff) {
                lVar5 = *(longlong *)(param_2 + 0xc0);
                goto LAB_14385482a;
              }
              lVar5 = 0;
            }
            else {
              uVar4 = uVar4 - iVar3;
              lVar5 = *plVar12;
LAB_14385482a:
              lVar5 = lVar5 + (longlong)(int)uVar4 * 0x14;
            }
            *(uint *)(lVar5 + 0xc) = uVar9;
          }
          else {
            lVar7 = *(longlong *)
                     ((ulonglong)(uVar4 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38));
            if (lVar7 == 0) {
              lVar7 = 0;
            }
            else if (*(char *)(lVar7 + 0x28) == '\x01') {
              lVar7 = *(longlong *)(lVar7 + 0x18);
            }
            else {
              lVar7 = FUN_142fbda20();
              plVar12 = (longlong *)(param_2 + 0xe0);
            }
            uVar4 = *(uint *)(lVar5 + 8) & 0x3fffff;
            if ((int)uVar4 < *(int *)(lVar7 + 0x30)) {
              if (*(int *)(lVar7 + 0x78) != 0) {
                uVar4 = *(uint *)(*(longlong *)(lVar7 + 0x70) + (longlong)(int)uVar4 * 4);
              }
              if (uVar4 == 0xffffffff) {
                _DAT_0000000c = _DAT_0000000c & 0xffc00000 | uVar9;
              }
              else {
                lVar5 = *(longlong *)(lVar7 + 0xc0);
                puVar1 = (uint *)(lVar5 + 0xc + (longlong)(int)uVar4 * 0x14);
                *puVar1 = *puVar1 & 0xffc00000;
                puVar1 = (uint *)(lVar5 + 0xc + (longlong)(int)uVar4 * 0x14);
                *puVar1 = *puVar1 | uVar9;
              }
            }
            else {
              lVar6 = (longlong)(int)(uVar4 - *(int *)(lVar7 + 0x30));
              lVar5 = *(longlong *)(lVar7 + 0xe0);
              puVar1 = (uint *)(lVar5 + 0xc + lVar6 * 0x14);
              *puVar1 = *puVar1 & 0xffc00000;
              puVar1 = (uint *)(lVar5 + 0xc + lVar6 * 0x14);
              *puVar1 = *puVar1 | uVar9;
            }
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(short *)(lVar11 + 8));
    }
    iVar14 = 0;
    if (0 < *(short *)(lVar11 + 10)) {
      plVar12 = (longlong *)(param_2 + 0xe0);
      do {
        iVar3 = *(int *)(param_2 + 0x30);
        lVar5 = FUN_1437fb5b0(*(undefined8 *)(param_2 + 0x28),iVar3);
        uVar4 = *(uint *)(lVar5 + 8);
        if (uVar4 != 0xffffffff) {
          if ((*(byte *)(lVar5 + 0x10) & 0x40) == 0) {
            uVar4 = uVar4 & 0x3fffff;
            if ((int)uVar4 < iVar3) {
              if (*(int *)(param_2 + 0x78) != 0) {
                uVar4 = *(uint *)(*(longlong *)(param_2 + 0x70) + (longlong)(int)uVar4 * 4);
              }
              if (uVar4 != 0xffffffff) {
                lVar5 = *(longlong *)(param_2 + 0xc0);
                goto LAB_14385499c;
              }
              lVar5 = 0;
            }
            else {
              uVar4 = uVar4 - iVar3;
              lVar5 = *plVar12;
LAB_14385499c:
              lVar5 = lVar5 + (longlong)(int)uVar4 * 0x14;
            }
            *(uint *)(lVar5 + 0xc) = uVar9;
          }
          else {
            lVar7 = *(longlong *)
                     ((ulonglong)(uVar4 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38));
            if (lVar7 == 0) {
              lVar7 = 0;
            }
            else if (*(char *)(lVar7 + 0x28) == '\x01') {
              lVar7 = *(longlong *)(lVar7 + 0x18);
            }
            else {
              lVar7 = FUN_142fbda20();
              plVar12 = (longlong *)(param_2 + 0xe0);
            }
            uVar4 = *(uint *)(lVar5 + 8) & 0x3fffff;
            if ((int)uVar4 < *(int *)(lVar7 + 0x30)) {
              if (*(int *)(lVar7 + 0x78) != 0) {
                uVar4 = *(uint *)(*(longlong *)(lVar7 + 0x70) + (longlong)(int)uVar4 * 4);
              }
              if (uVar4 == 0xffffffff) {
                _DAT_0000000c = _DAT_0000000c & 0xffc00000 | uVar9;
              }
              else {
                lVar5 = *(longlong *)(lVar7 + 0xc0);
                puVar1 = (uint *)(lVar5 + 0xc + (longlong)(int)uVar4 * 0x14);
                *puVar1 = *puVar1 & 0xffc00000;
                puVar1 = (uint *)(lVar5 + 0xc + (longlong)(int)uVar4 * 0x14);
                *puVar1 = *puVar1 | uVar9;
              }
            }
            else {
              lVar6 = (longlong)(int)(uVar4 - *(int *)(lVar7 + 0x30));
              lVar5 = *(longlong *)(lVar7 + 0xe0);
              puVar1 = (uint *)(lVar5 + 0xc + lVar6 * 0x14);
              *puVar1 = *puVar1 & 0xffc00000;
              puVar1 = (uint *)(lVar5 + 0xc + lVar6 * 0x14);
              *puVar1 = *puVar1 | uVar9;
            }
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(short *)(lVar11 + 10));
    }
    if (*(int *)(param_2 + 0x108) == 0) {
      bVar10 = 0;
    }
    else {
      bVar10 = *(byte *)((longlong)(iVar2 + *param_4) + *(longlong *)(param_2 + 0x100));
    }
    *(byte *)((longlong)(iVar2 + *param_4) + *(longlong *)(param_2 + 0x100)) = bVar10 | 1;
  }
  return;
}



// FUNCTION 143854a20 FUN_143854a20 body=401 status=ok
// SIG undefined FUN_143854a20(void)

undefined4 * FUN_143854a20(longlong *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  lVar9 = param_1[1];
  lVar8 = (longlong)(int)lVar9;
  lVar2 = *param_1;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  iVar7 = 8;
  if (8 < param_3) {
    iVar7 = param_3;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  if ((iVar7 < 1) || (iVar3 = FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar7,4), -1 < iVar3)) {
    lVar5 = 0;
    *(int *)(param_1 + 1) = iVar7;
    if (0 < iVar7) {
      do {
        *(undefined4 *)(*param_1 + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar7);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    local_res20 = lVar8;
    if (0 < (int)lVar9) {
      lVar9 = 0;
      do {
        iVar7 = *(int *)(lVar2 + lVar9 * 4);
        if (iVar7 != -1) {
          if ((int)param_1[1] + -1 < (int)param_1[2] * 2) {
            FUN_143854a20(param_1,local_res18,(int)param_1[1] * 2);
            lVar8 = local_res20;
          }
          iVar11 = 1;
          lVar5 = *param_1;
          uVar10 = (int)param_1[1] - 1;
          uVar4 = iVar7 * -0x61c8864f;
          uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                  iVar7 * -0x4f000000) & uVar10;
          lVar6 = (longlong)(int)uVar4;
          iVar3 = *(int *)(lVar5 + lVar6 * 4);
          while (iVar3 != -1) {
            if (*(int *)(lVar5 + lVar6 * 4) == iVar7) {
              iVar11 = 0;
              break;
            }
            uVar4 = uVar4 + 1 & uVar10;
            lVar6 = (longlong)(int)uVar4;
            iVar3 = *(int *)(lVar5 + lVar6 * 4);
          }
          *(int *)(param_1 + 2) = (int)param_1[2] + iVar11;
          *(int *)(lVar5 + (longlong)(int)uVar4 * 4) = iVar7;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar8);
    }
    *param_2 = 0;
  }
  else {
    *param_2 = 0x80040200;
  }
  if (-1 < (int)uVar1) {
    FUN_143702e10(&PTR_vftable_1467f0638,lVar2,4,uVar1 & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143854bc0 FUN_143854bc0 body=704 status=ok
// SIG undefined FUN_143854bc0(void)

/* WARNING: Removing unreachable block (ram,0x000143854c2a) */

int FUN_143854bc0(undefined8 param_1,undefined8 *param_2,float *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_e08;
  undefined8 uStack_e00;
  undefined8 local_df8;
  undefined4 local_df0;
  undefined4 local_dec;
  undefined1 local_de8 [16];
  undefined8 local_dd8;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined8 local_dc8;
  undefined4 local_dc0;
  undefined1 local_dbc;
  undefined4 local_db8;
  undefined4 uStack_db4;
  undefined4 uStack_db0;
  undefined4 uStack_dac;
  undefined1 local_da8 [16];
  float local_d98;
  float fStack_d94;
  float fStack_d90;
  float fStack_d8c;
  float local_d88;
  float fStack_d84;
  float fStack_d80;
  float fStack_d7c;
  float local_d78;
  float fStack_d74;
  float fStack_d70;
  float fStack_d6c;
  undefined1 local_d68 [3392];
  
  local_e08 = *param_2;
  uStack_e00 = param_2[1];
  iVar3 = 0;
  local_de8 = *(undefined1 (*) [16])(param_2 + 4);
  fVar20 = local_de8._0_4_;
  fVar21 = local_de8._4_4_;
  fVar22 = local_de8._8_4_;
  fVar5 = fVar20 * fVar20;
  fVar9 = fVar21 * fVar21;
  local_dcc = 0xff;
  local_dc8 = 0;
  local_dbc = 0;
  auVar16._4_4_ = fVar9 + fVar5;
  auVar16._0_4_ = fVar9 + fVar5;
  auVar16._8_4_ = fVar9 + fVar5;
  auVar16._12_4_ = fVar9 + fVar5;
  fVar10 = fVar20 * fVar20 + fVar22 * fVar22;
  fVar13 = fVar22 * fVar22 + fVar20 * fVar20;
  auVar6._0_4_ = fVar10 + 0.0;
  auVar6._4_4_ = fVar10 + 0.0;
  auVar6._8_4_ = fVar13 + 0.0;
  auVar6._12_4_ = fVar13 + 0.0;
  uVar4 = -(uint)(fVar9 + fVar5 < auVar6._0_4_);
  auVar17 = maxps(auVar16,auVar6);
  local_df0 = *(undefined4 *)(param_2 + 6);
  local_dd8 = param_2[7];
  auVar15._0_4_ = ~uVar4 & (uint)-fVar21;
  auVar15._4_4_ = ~-(uint)(fVar9 + fVar5 < auVar6._4_4_) & (uint)fVar20;
  auVar15._8_8_ = 0;
  local_dd0 = *(undefined4 *)(param_2 + 8);
  auVar8._4_4_ = 0;
  auVar8._0_4_ = (uint)-fVar22 & uVar4;
  auVar8._8_4_ = (uint)fVar20 & -(uint)(fVar9 + fVar5 < auVar6._8_4_);
  auVar8._12_4_ = 0;
  auVar15 = auVar15 | auVar8;
  fVar19 = auVar15._0_4_;
  fVar11 = auVar15._4_4_;
  fVar12 = auVar15._8_4_;
  fVar14 = auVar15._12_4_;
  auVar7._0_4_ = fVar21 * fVar19;
  auVar7._4_4_ = fVar22 * fVar11;
  auVar7._8_4_ = fVar20 * fVar12;
  auVar7._12_4_ = local_de8._12_4_ * fVar14;
  auVar8 = rsqrtps(auVar7,auVar17);
  fVar5 = auVar8._0_4_;
  fVar9 = auVar8._4_4_;
  fVar10 = auVar8._8_4_;
  fVar13 = auVar8._12_4_;
  local_d98 = (3.0 - auVar17._0_4_ * fVar5 * fVar5) * fVar5 * 0.5;
  fStack_d94 = (3.0 - auVar17._4_4_ * fVar9 * fVar9) * fVar9 * 0.5;
  fStack_d90 = (3.0 - auVar17._8_4_ * fVar10 * fVar10) * fVar10 * 0.5;
  fStack_d8c = (3.0 - auVar17._12_4_ * fVar13 * fVar13) * fVar13 * 0.5;
  auVar17._0_4_ = (fVar12 * fVar21 - auVar7._4_4_) * local_d98;
  auVar17._4_4_ = (fVar19 * fVar22 - auVar7._8_4_) * fStack_d94;
  auVar17._8_4_ = (fVar11 * fVar20 - auVar7._0_4_) * fStack_d90;
  auVar17._12_4_ = (fVar14 * local_de8._12_4_ - auVar7._12_4_) * fStack_d8c;
  local_d98 = local_d98 * fVar19;
  fStack_d94 = fStack_d94 * fVar11;
  fStack_d90 = fStack_d90 * fVar12;
  fStack_d8c = fStack_d8c * fVar14;
  local_dc0 = 0;
  local_dec = *(undefined4 *)(param_2 + 2);
  local_df8 = param_1;
  local_da8 = auVar17;
  FUN_143897b00(local_d68,&local_df8);
  fVar5 = *(float *)(param_2 + 3);
  iVar1 = *(int *)((longlong)param_2 + 0x1c);
  fVar9 = *(float *)((longlong)param_2 + 0x14);
  if (0 < iVar1) {
    fVar10 = fVar5;
    fVar13 = fVar5;
    fVar19 = fVar5;
    iVar2 = iVar3;
    do {
      if ((fVar9 < fVar5) ||
         (local_d78 = fVar5, fStack_d74 = fVar10, fStack_d70 = fVar13, fStack_d6c = fVar19,
         iVar2 == iVar1 + -1)) {
        local_d78 = (fVar9 - fVar5) * *(float *)(param_2 + 4) + fVar5;
        fStack_d74 = (fVar9 - fVar10) * *(float *)((longlong)param_2 + 0x24) + fVar10;
        fStack_d70 = (fVar9 - fVar13) * *(float *)(param_2 + 5) + fVar13;
        fStack_d6c = (fVar9 - fVar19) * *(float *)((longlong)param_2 + 0x2c) + fVar19;
      }
      local_d88 = (float)local_e08 - local_d78;
      fStack_d84 = local_e08._4_4_ - fStack_d74;
      fStack_d80 = (float)uStack_e00 - fStack_d70;
      fStack_d7c = uStack_e00._4_4_ - fStack_d6c;
      local_d78 = (float)local_e08 + local_d78;
      fStack_d74 = local_e08._4_4_ + fStack_d74;
      fStack_d70 = (float)uStack_e00 + fStack_d70;
      fStack_d6c = uStack_e00._4_4_ + fStack_d6c;
      local_db8 = *(undefined4 *)(param_2 + 2);
      uStack_db4 = local_db8;
      uStack_db0 = local_db8;
      uStack_dac = local_db8;
      iVar1 = FUN_1438a6200(param_1,*(undefined4 *)(param_2 + 6),local_d68,param_2 + 4,&local_d98,
                            local_da8,&local_e08,&local_db8,&local_d88,param_3,param_4);
      if (iVar1 != 0) {
        fVar11 = (*param_3 - (float)local_e08) * (*param_3 - (float)local_e08);
        fVar12 = (param_3[1] - local_e08._4_4_) * (param_3[1] - local_e08._4_4_);
        fVar14 = (param_3[2] - (float)uStack_e00) * (param_3[2] - (float)uStack_e00);
        auVar18._0_4_ = fVar12 + fVar11 + fVar14;
        auVar18._4_4_ = fVar12 + fVar11 + fVar14;
        auVar18._8_4_ = fVar12 + fVar11 + fVar14;
        auVar18._12_4_ = fVar12 + fVar11 + fVar14;
        auVar8 = rsqrtps(auVar17,auVar18);
        fVar11 = auVar8._0_4_;
        auVar17._0_4_ = fVar11 * 0.5;
        auVar17._4_4_ = auVar8._4_4_ * 0.5;
        auVar17._8_4_ = auVar8._8_4_ * 0.5;
        auVar17._12_4_ = auVar8._12_4_ * 0.5;
        if (((float)(~-(uint)(auVar18._0_4_ <= 0.0) &
                    (uint)((3.0 - auVar18._0_4_ * fVar11 * fVar11) * auVar17._0_4_ * auVar18._0_4_))
             < fVar5) || (iVar2 == *(int *)((longlong)param_2 + 0x1c) + -1)) {
          iVar3 = 1;
          break;
        }
      }
      iVar1 = *(int *)((longlong)param_2 + 0x1c);
      fVar5 = fVar5 + fVar5;
      fVar10 = fVar10 + fVar10;
      fVar13 = fVar13 + fVar13;
      fVar19 = fVar19 + fVar19;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  FUN_143897e50(local_d68);
  return iVar3;
}



// FUNCTION 143854e80 FUN_143854e80 body=33 status=ok
// SIG undefined FUN_143854e80(void)

void FUN_143854e80(undefined8 *param_1,undefined8 *param_2,float param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(float *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
  *(float *)(param_1 + 3) = param_3 + param_3;
  return;
}



// FUNCTION 143854eb0 FUN_143854eb0 body=234 status=ok
// SIG undefined FUN_143854eb0(void)

void FUN_143854eb0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x20) + param_2;
  uVar2 = FUN_143703a50();
  uVar3 = *(uint *)(param_1 + 0xdc) & 0x3fffffff;
  if ((int)uVar3 < param_2) {
    iVar1 = uVar3 * 2;
    iVar5 = param_2;
    if (param_2 < iVar1) {
      iVar5 = iVar1;
    }
    FUN_14370c310(uVar2,param_1 + 0xd0,iVar5,0x10);
  }
  *(int *)(param_1 + 0xd8) = param_2;
  uVar2 = FUN_143703a50();
  uVar3 = *(uint *)(param_1 + 0x10c) & 0x3fffffff;
  if ((int)uVar3 < iVar4) {
    iVar5 = uVar3 * 2;
    iVar1 = iVar4;
    if (iVar4 < iVar5) {
      iVar1 = iVar5;
    }
    FUN_14370c310(uVar2,param_1 + 0x100,iVar1,1);
  }
  *(int *)(param_1 + 0x108) = iVar4;
  param_2 = *(int *)(param_1 + 0x50) * param_2;
  uVar2 = FUN_143703a50();
  uVar3 = *(uint *)(param_1 + 0x14c) & 0x3fffffff;
  if ((int)uVar3 < param_2) {
    iVar1 = uVar3 * 2;
    iVar4 = param_2;
    if (param_2 < iVar1) {
      iVar4 = iVar1;
    }
    FUN_14370c310(uVar2,param_1 + 0x140,iVar4,4);
  }
  *(int *)(param_1 + 0x148) = param_2;
  return;
}



// FUNCTION 143854fa0 FUN_143854fa0 body=88 status=ok
// SIG undefined FUN_143854fa0(void)

undefined4 * FUN_143854fa0(undefined4 *param_1)

{
  *param_1 = 0x14;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0x10301;
  param_1[0xd] = 0x101;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0x3c23d70a;
  param_1[0x10] = 0x7f7fffee;
  param_1[0x11] = 0xbf800000;
  param_1[0x12] = 0xbf800000;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 143855000 FUN_143855000 body=29 status=ok
// SIG undefined FUN_143855000(void)

void FUN_143855000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1438554b0(param_1,param_2,&DAT_1467f1250,param_3,param_4);
  return;
}



// FUNCTION 143855020 FUN_143855020 body=1167 status=ok
// SIG undefined FUN_143855020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_143855020(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  LPVOID pvVar9;
  int *piVar10;
  LPVOID pvVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
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
  uint local_res8 [2];
  int *local_78;
  int local_70;
  uint local_6c;
  longlong local_68;
  int local_60;
  uint local_5c;
  
  pvVar9 = TlsGetValue(DAT_146b8198c);
  if (pvVar9 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar9,"TtConvex hull creation");
  }
  piVar13 = (int *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  local_res8[0] = (int)param_1[1] + 1;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_6c = 0x80000000;
  piVar10 = piVar13;
  if (local_res8[0] != 0) {
    piVar10 = (int *)FUN_143702d60(&PTR_vftable_1467f0638,4,local_res8);
  }
  fVar28 = *(float *)(param_1 + 4);
  fVar29 = *(float *)((longlong)param_1 + 0x24);
  fVar30 = *(float *)(param_1 + 5);
  iVar7 = (int)param_1[1];
  local_6c = 0x80000000;
  if (local_res8[0] != 0) {
    local_6c = local_res8[0];
  }
  pfVar1 = (float *)param_1[6];
  local_70 = 0;
  fVar23 = fVar29 * *(float *)(param_1 + 2) - *(float *)((longlong)param_1 + 0x14) * fVar28;
  fVar24 = fVar30 * *(float *)((longlong)param_1 + 0x14) - *(float *)(param_1 + 3) * fVar29;
  fVar25 = fVar28 * *(float *)(param_1 + 3) - *(float *)(param_1 + 2) * fVar30;
  fVar31 = *pfVar1;
  fVar22 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  fVar16 = fVar31 * fVar28;
  fVar18 = fVar22 * fVar29;
  fVar20 = fVar5 * fVar30;
  fVar17 = fVar31 * fVar24;
  fVar19 = fVar22 * fVar25;
  fVar21 = fVar5 * fVar23;
  fVar26 = (fVar18 + fVar16 + fVar20) * fVar31 + (fVar6 * fVar6 - _DAT_1467f07e0) * fVar28 +
           (fVar5 * fVar29 - fVar30 * fVar22) * fVar6;
  fVar27 = (fVar18 + fVar16 + fVar20) * fVar22 + (fVar6 * fVar6 - fRam00000001467f07e4) * fVar29 +
           (fVar31 * fVar30 - fVar28 * fVar5) * fVar6;
  fVar28 = (fVar18 + fVar16 + fVar20) * fVar5 + (fVar6 * fVar6 - fRam00000001467f07e8) * fVar30 +
           (fVar22 * fVar28 - fVar29 * fVar31) * fVar6;
  fVar29 = (fVar19 + fVar17 + fVar21) * fVar31 + (fVar6 * fVar6 - _DAT_1467f07e0) * fVar24 +
           (fVar5 * fVar25 - fVar23 * fVar22) * fVar6;
  fVar30 = (fVar19 + fVar17 + fVar21) * fVar22 + (fVar6 * fVar6 - fRam00000001467f07e4) * fVar25 +
           (fVar31 * fVar23 - fVar24 * fVar5) * fVar6;
  fVar31 = (fVar19 + fVar17 + fVar21) * fVar5 + (fVar6 * fVar6 - fRam00000001467f07e8) * fVar23 +
           (fVar22 * fVar24 - fVar25 * fVar31) * fVar6;
  local_78 = piVar10;
  if ((int)(local_5c & 0x3fffffff) < iVar7) {
    iVar4 = (local_5c & 0x3fffffff) * 2;
    iVar12 = iVar7;
    if (iVar7 < iVar4) {
      iVar12 = iVar4;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_68,iVar12,8);
  }
  piVar10 = piVar13;
  piVar14 = piVar13;
  if (0 < (int)param_1[1]) {
    do {
      iVar12 = (int)piVar10;
      pfVar1 = (float *)((longlong)piVar14 + *param_1);
      fVar22 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      *(float *)(local_68 + (longlong)iVar12 * 8) =
           fVar5 * (fVar27 + fVar27) + fVar22 * (fVar26 + fVar26) + fVar6 * (fVar28 + fVar28);
      *(float *)(local_68 + 4 + (longlong)iVar12 * 8) =
           fVar5 * (fVar30 + fVar30) + fVar22 * (fVar29 + fVar29) + fVar6 * (fVar31 + fVar31);
      piVar10 = (int *)(ulonglong)(iVar12 + 1U);
      piVar14 = piVar14 + 4;
    } while ((int)(iVar12 + 1U) < (int)param_1[1]);
  }
  local_60 = iVar7;
  pvVar11 = TlsGetValue(DAT_146b8198c);
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar11,"TthkMath2d::convexHullIndices");
  }
  FUN_143dfb6f0(&local_68,&local_78);
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d750(pvVar11,&DAT_145b8eda0);
  }
  if (local_70 + 1 <= (int)(*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
    *(int *)(param_2 + 1) = local_70;
    piVar10 = piVar13;
    piVar14 = piVar13;
    if (0 < local_70) {
      do {
        pfVar2 = (float *)param_1[6];
        uVar15 = (int)piVar14 + 1;
        fVar28 = *pfVar2;
        fVar29 = pfVar2[1];
        fVar30 = pfVar2[2];
        fVar31 = pfVar2[3];
        pfVar1 = (float *)(*param_1 +
                          (longlong)*(int *)((longlong)piVar10 + (longlong)local_78) * 0x10);
        fVar22 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar16 = pfVar1[3];
        fVar17 = fVar28 * fVar22;
        fVar18 = fVar29 * fVar5;
        fVar19 = fVar30 * fVar6;
        fVar20 = (fVar18 + fVar17 + fVar19) * fVar28 + (fVar31 * fVar31 - _DAT_1467f07e0) * fVar22 +
                 (fVar6 * fVar29 - fVar30 * fVar5) * fVar31;
        fVar21 = (fVar18 + fVar17 + fVar19) * fVar29 +
                 (fVar31 * fVar31 - fRam00000001467f07e4) * fVar5 +
                 (fVar22 * fVar30 - fVar28 * fVar6) * fVar31;
        fVar22 = (fVar18 + fVar17 + fVar19) * fVar30 +
                 (fVar31 * fVar31 - fRam00000001467f07e8) * fVar6 +
                 (fVar5 * fVar28 - fVar29 * fVar22) * fVar31;
        fVar31 = (fVar18 + fVar17 + fVar19) * fVar31 +
                 (fVar31 * fVar31 - fRam00000001467f07ec) * fVar16 +
                 (fVar16 * fVar31 - fVar31 * fVar16) * fVar31;
        fVar28 = pfVar2[5];
        fVar29 = pfVar2[6];
        fVar30 = pfVar2[7];
        pfVar1 = (float *)((longlong)piVar13 + *param_2);
        *pfVar1 = fVar20 + fVar20 + pfVar2[4];
        pfVar1[1] = fVar21 + fVar21 + fVar28;
        pfVar1[2] = fVar22 + fVar22 + fVar29;
        pfVar1[3] = fVar31 + fVar31 + fVar30;
        piVar13 = piVar13 + 4;
        piVar10 = piVar10 + 1;
        piVar14 = (int *)(ulonglong)uVar15;
      } while ((int)uVar15 < local_70);
    }
    local_res8[0] = 0x3a83126f;
    if (*local_78 != local_78[local_70 + -1]) {
      pfVar2 = (float *)*param_2;
      iVar7 = (int)param_2[1] + -1;
      pfVar1 = pfVar2 + (longlong)iVar7 * 4;
      auVar3._4_4_ = -(uint)(ABS(pfVar2[1] - pfVar1[1]) <= 0.001);
      auVar3._0_4_ = -(uint)(ABS(*pfVar2 - *pfVar1) <= 0.001);
      auVar3._8_4_ = -(uint)(ABS(pfVar2[2] - pfVar1[2]) <= 0.001);
      auVar3._12_4_ = -(uint)(ABS(pfVar2[3] - pfVar1[3]) <= 0.001);
      uVar8 = movmskps(iVar7,auVar3);
      if (((byte)uVar8 & 7) != 7) {
        fVar28 = pfVar2[1];
        fVar29 = pfVar2[2];
        fVar30 = pfVar2[3];
        pfVar1 = pfVar2 + (longlong)(int)param_2[1] * 4;
        *pfVar1 = *pfVar2;
        pfVar1[1] = fVar28;
        pfVar1[2] = fVar29;
        pfVar1[3] = fVar30;
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      }
    }
    piVar13 = (int *)0x1;
  }
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_78,4,local_6c & 0x3fffffff);
  }
  local_78 = (int *)0x0;
  local_6c = 0x80000000;
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_68,8,local_5c & 0x3fffffff);
  }
  local_68 = 0;
  local_5c = 0x80000000;
  if (pvVar9 != (LPVOID)0x0) {
    FUN_14370d750(pvVar9,&DAT_145b8eda0);
  }
  return piVar13;
}



// FUNCTION 1438554b0 FUN_1438554b0 body=533 status=ok
// SIG undefined FUN_1438554b0(void)

void FUN_1438554b0(float *param_1,float *param_2,undefined8 param_3,float *param_4,
                  undefined8 param_5)

{
  LPVOID pvVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *local_48;
  undefined4 local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  pfVar2 = *(float **)((longlong)pvVar1 + 0x18);
  if ((*(int *)((longlong)pvVar1 + 0x10) < 0x80) ||
     (*(float **)((longlong)pvVar1 + 0x20) < pfVar2 + 0x20)) {
    pfVar2 = (float *)FUN_1437138c0(pvVar1,0x80);
  }
  else {
    *(float **)((longlong)pvVar1 + 0x18) = pfVar2 + 0x20;
  }
  fVar9 = *param_1;
  local_40 = 8;
  fVar3 = param_2[4] + fVar9 + *param_4;
  fVar4 = param_2[5] + fVar9 + param_4[1];
  fVar5 = param_2[6] + fVar9 + param_4[2];
  fVar6 = param_2[7] + fVar9 + param_4[3];
  fVar7 = *param_2 - (fVar9 + *param_4);
  fVar8 = param_2[1] - (fVar9 + param_4[1]);
  fVar9 = param_2[2] - (fVar9 + param_4[2]);
  *pfVar2 = fVar3;
  pfVar2[1] = fVar4;
  pfVar2[2] = fVar5;
  pfVar2[3] = fVar6;
  *pfVar2 = fVar3;
  pfVar2[1] = fVar4;
  pfVar2[2] = fVar5;
  pfVar2[3] = 0.0;
  pfVar2[4] = fVar7;
  pfVar2[5] = fVar4;
  pfVar2[6] = fVar5;
  pfVar2[7] = fVar6;
  pfVar2[4] = fVar7;
  pfVar2[5] = fVar4;
  pfVar2[6] = fVar5;
  pfVar2[7] = 0.0;
  pfVar2[8] = fVar3;
  pfVar2[9] = fVar8;
  pfVar2[10] = fVar5;
  pfVar2[0xb] = fVar6;
  pfVar2[8] = fVar3;
  pfVar2[9] = fVar8;
  pfVar2[10] = fVar5;
  pfVar2[0xb] = 0.0;
  pfVar2[0xc] = fVar7;
  pfVar2[0xd] = fVar8;
  pfVar2[0xe] = fVar5;
  pfVar2[0xf] = fVar6;
  pfVar2[0xc] = fVar7;
  pfVar2[0xd] = fVar8;
  pfVar2[0xe] = fVar5;
  pfVar2[0xf] = 0.0;
  pfVar2[0x10] = fVar3;
  pfVar2[0x11] = fVar4;
  pfVar2[0x12] = fVar9;
  pfVar2[0x13] = fVar6;
  pfVar2[0x10] = fVar3;
  pfVar2[0x11] = fVar4;
  pfVar2[0x12] = fVar9;
  pfVar2[0x13] = 0.0;
  pfVar2[0x14] = fVar7;
  pfVar2[0x15] = fVar4;
  pfVar2[0x16] = fVar9;
  pfVar2[0x17] = fVar6;
  pfVar2[0x14] = fVar7;
  pfVar2[0x15] = fVar4;
  pfVar2[0x16] = fVar9;
  pfVar2[0x17] = 0.0;
  pfVar2[0x18] = fVar3;
  pfVar2[0x19] = fVar8;
  pfVar2[0x1a] = fVar9;
  pfVar2[0x1b] = fVar6;
  pfVar2[0x18] = fVar3;
  pfVar2[0x19] = fVar8;
  pfVar2[0x1a] = fVar9;
  pfVar2[0x1b] = 0.0;
  pfVar2[0x1c] = fVar7;
  pfVar2[0x1d] = fVar8;
  pfVar2[0x1e] = fVar9;
  pfVar2[0x1f] = fVar6;
  pfVar2[0x1c] = fVar7;
  pfVar2[0x1d] = fVar8;
  pfVar2[0x1e] = fVar9;
  pfVar2[0x1f] = 0.0;
  local_28 = param_1[8];
  fStack_24 = param_1[9];
  fStack_20 = param_1[10];
  fStack_1c = param_1[0xb];
  local_38 = param_1[4];
  fStack_34 = param_1[5];
  fStack_30 = param_1[6];
  fStack_2c = param_1[7];
  local_48 = pfVar2;
  local_18 = param_3;
  FUN_143855020(&local_48,param_5);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  if (((*(int *)((longlong)pvVar1 + 0x10) < 0x80) ||
      (pfVar2 + 0x20 != *(float **)((longlong)pvVar1 + 0x18))) ||
     (*(float **)((longlong)pvVar1 + 0x28) == pfVar2)) {
    FUN_143713ff0(pvVar1,pfVar2,0x80);
  }
  else {
    *(float **)((longlong)pvVar1 + 0x18) = pfVar2;
  }
  FUN_143703a50();
  return;
}



// FUNCTION 1438556d0 FUN_1438556d0 body=1269 status=ok
// SIG undefined FUN_1438556d0(void)

void FUN_1438556d0(longlong *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  LPVOID pvVar7;
  LPVOID pvVar8;
  float *pfVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar23;
  float fVar25;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  float fVar26;
  undefined1 auVar22 [16];
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
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  pvVar7 = TlsGetValue(DAT_146b8198c);
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar7,"TtexpandByRad2");
  }
  iVar1 = (int)param_1[1];
  iVar12 = (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) - iVar1;
  pvVar8 = TlsGetValue(DAT_146b7bf70);
  if (pvVar8 == (LPVOID)0x0) {
    pvVar8 = DAT_146b7bf68;
  }
  uVar11 = iVar1 * 0x10 + 0x7fU & 0xffffff80;
  pfVar9 = *(float **)((longlong)pvVar8 + 0x18);
  if ((*(int *)((longlong)pvVar8 + 0x10) < (int)uVar11) ||
     (*(ulonglong *)((longlong)pvVar8 + 0x20) <
      (ulonglong)((longlong)(int)uVar11 + (longlong)pfVar9))) {
    pfVar9 = (float *)FUN_1437138c0(pvVar8,uVar11);
  }
  else {
    *(longlong *)((longlong)pvVar8 + 0x18) = (longlong)(int)uVar11 + (longlong)pfVar9;
  }
  puVar10 = (undefined8 *)*param_1;
  pfVar14 = pfVar9;
  for (iVar13 = iVar1; iVar13 != 0; iVar13 = iVar13 + -1) {
    uVar4 = *puVar10;
    uVar5 = puVar10[1];
    puVar10 = puVar10 + 2;
    *(undefined8 *)pfVar14 = uVar4;
    *(undefined8 *)(pfVar14 + 2) = uVar5;
    pfVar14 = pfVar14 + 4;
  }
  iVar13 = iVar1 + -2;
  iVar15 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  fVar19 = *pfVar9;
  fVar24 = pfVar9[1];
  fVar25 = pfVar9[2];
  fVar32 = *param_2;
  fVar33 = param_2[1];
  fVar34 = param_2[2];
  pfVar14 = pfVar9 + (longlong)iVar13 * 4;
  fVar35 = (fVar19 - *pfVar14) * fVar33 - (fVar24 - pfVar14[1]) * fVar32;
  fVar36 = (fVar24 - pfVar14[1]) * fVar34 - (fVar25 - pfVar14[2]) * fVar33;
  fVar37 = (fVar25 - pfVar14[2]) * fVar32 - (fVar19 - *pfVar14) * fVar34;
  fVar18 = fVar36 * fVar36;
  fVar23 = fVar37 * fVar37;
  auVar20._8_4_ = fVar35 * fVar35;
  auVar20._4_4_ = auVar20._8_4_;
  auVar20._0_4_ = auVar20._8_4_;
  auVar20._12_4_ = auVar20._8_4_;
  fVar29 = fVar23 + fVar18 + auVar20._8_4_;
  fVar30 = fVar23 + fVar18 + auVar20._8_4_;
  fVar31 = fVar23 + fVar18 + auVar20._8_4_;
  auVar2._4_4_ = fVar30;
  auVar2._0_4_ = fVar29;
  auVar2._8_4_ = fVar31;
  auVar2._12_4_ = fVar23 + fVar18 + auVar20._8_4_;
  auVar21 = rsqrtps(auVar20,auVar2);
  fVar18 = auVar21._0_4_;
  fVar23 = auVar21._4_4_;
  fVar26 = auVar21._8_4_;
  fVar36 = fVar36 * (float)(~-(uint)(fVar29 <= 0.0) &
                           (uint)((3.0 - fVar29 * fVar18 * fVar18) * fVar18 * 0.5));
  fVar37 = fVar37 * (float)(~-(uint)(fVar30 <= 0.0) &
                           (uint)((3.0 - fVar30 * fVar23 * fVar23) * fVar23 * 0.5));
  fVar35 = fVar35 * (float)(~-(uint)(fVar31 <= 0.0) &
                           (uint)((3.0 - fVar31 * fVar26 * fVar26) * fVar26 * 0.5));
  fVar26 = (0.0 - (fVar37 * fVar24 + fVar36 * fVar19 + fVar35 * fVar25)) - param_3[3];
  fVar18 = (pfVar9[4] - fVar19) * fVar33 - (pfVar9[5] - fVar24) * fVar32;
  fVar33 = (pfVar9[5] - fVar24) * fVar34 - (pfVar9[6] - fVar25) * fVar33;
  fVar34 = (pfVar9[6] - fVar25) * fVar32 - (pfVar9[4] - fVar19) * fVar34;
  fVar19 = fVar33 * fVar33;
  fVar24 = fVar34 * fVar34;
  fVar25 = fVar18 * fVar18;
  auVar17._4_4_ = fVar19;
  auVar17._0_4_ = fVar19;
  auVar17._8_4_ = fVar19;
  auVar17._12_4_ = fVar19;
  fVar31 = fVar24 + fVar19 + fVar25;
  fVar27 = fVar24 + fVar19 + fVar25;
  fVar28 = fVar24 + fVar19 + fVar25;
  auVar21._4_4_ = fVar27;
  auVar21._0_4_ = fVar31;
  auVar21._8_4_ = fVar28;
  auVar21._12_4_ = fVar24 + fVar19 + fVar25;
  auVar21 = rsqrtps(auVar17,auVar21);
  fVar23 = auVar21._0_4_;
  fVar29 = auVar21._4_4_;
  fVar30 = auVar21._8_4_;
  pfVar14 = pfVar9 + (longlong)iVar13 * 4;
  fVar19 = *pfVar14;
  fVar24 = pfVar14[1];
  fVar25 = pfVar14[2];
  fVar32 = pfVar14[3];
  fVar33 = fVar33 * (float)(~-(uint)(fVar31 <= 0.0) &
                           (uint)((3.0 - fVar31 * fVar23 * fVar23) * fVar23 * 0.5));
  fVar34 = fVar34 * (float)(~-(uint)(fVar27 <= 0.0) &
                           (uint)((3.0 - fVar27 * fVar29 * fVar29) * fVar29 * 0.5));
  fVar18 = fVar18 * (float)(~-(uint)(fVar28 <= 0.0) &
                           (uint)((3.0 - fVar28 * fVar30 * fVar30) * fVar30 * 0.5));
  lVar16 = (longlong)(iVar1 + -1);
  fVar23 = (0.0 - (fVar34 * pfVar9[5] + fVar33 * pfVar9[4] + fVar18 * pfVar9[6])) - param_3[3];
  pfVar14 = pfVar9;
  local_d8 = fVar36;
  fStack_d4 = fVar37;
  fStack_d0 = fVar35;
  fStack_cc = fVar26;
  local_c8 = fVar33;
  fStack_c4 = fVar34;
  fStack_c0 = fVar18;
  fStack_bc = fVar23;
  if (0 < iVar1 + -1) {
    do {
      local_f8 = *pfVar14;
      fStack_f4 = pfVar14[1];
      fStack_f0 = pfVar14[2];
      fStack_ec = pfVar14[3];
      local_a8 = local_f8 - fVar19;
      fStack_a4 = fStack_f4 - fVar24;
      fStack_a0 = fStack_f0 - fVar25;
      fStack_9c = fStack_ec - fVar32;
      fVar19 = fVar19 + fVar36 * *param_3;
      fVar24 = fVar24 + fVar37 * param_3[1];
      fVar25 = fVar25 + fVar35 * param_3[2];
      fVar32 = fVar32 + fVar26 * param_3[3];
      local_e8 = local_f8;
      fStack_e4 = fStack_f4;
      fStack_e0 = fStack_f0;
      fStack_dc = fStack_ec;
      local_b8 = fVar19;
      fStack_b4 = fVar24;
      fStack_b0 = fVar25;
      fStack_ac = fVar32;
      cVar6 = FUN_143855bd0(param_3,param_4,&local_d8,&local_c8,&local_a8,&local_b8,&local_f8,
                            &local_e8,iVar12 < 1);
      if (cVar6 == '\0') {
        puVar10 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
        *puVar10 = CONCAT44(fStack_f4,local_f8);
        puVar10[1] = CONCAT44(fStack_ec,fStack_f0);
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      }
      else {
        puVar10 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
        *puVar10 = CONCAT44(fStack_f4,local_f8);
        puVar10[1] = CONCAT44(fStack_ec,fStack_f0);
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        puVar10 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
        *puVar10 = CONCAT44(fStack_e4,local_e8);
        puVar10[1] = CONCAT44(fStack_dc,fStack_e0);
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        iVar12 = iVar12 + -1;
      }
      fVar29 = fVar33;
      fVar30 = fVar34;
      fVar31 = fVar18;
      fVar27 = fVar23;
      if (iVar15 != iVar13) {
        fVar19 = *pfVar14;
        fVar24 = pfVar14[1];
        fVar25 = pfVar14[2];
        fVar32 = pfVar14[3];
        fVar36 = pfVar14[8] - pfVar14[4];
        fVar37 = pfVar14[9] - pfVar14[5];
        fVar35 = pfVar14[10] - pfVar14[6];
        fVar31 = param_2[1] * fVar36 - fVar37 * *param_2;
        fVar29 = param_2[2] * fVar37 - fVar35 * param_2[1];
        fVar30 = *param_2 * fVar35 - fVar36 * param_2[2];
        fVar36 = fVar29 * fVar29;
        fVar37 = fVar30 * fVar30;
        auVar22._8_4_ = fVar31 * fVar31;
        auVar22._4_4_ = auVar22._8_4_;
        auVar22._0_4_ = auVar22._8_4_;
        auVar22._12_4_ = auVar22._8_4_;
        fVar26 = fVar37 + fVar36 + auVar22._8_4_;
        fVar27 = fVar37 + fVar36 + auVar22._8_4_;
        fVar28 = fVar37 + fVar36 + auVar22._8_4_;
        auVar3._4_4_ = fVar27;
        auVar3._0_4_ = fVar26;
        auVar3._8_4_ = fVar28;
        auVar3._12_4_ = fVar37 + fVar36 + auVar22._8_4_;
        auVar21 = rsqrtps(auVar22,auVar3);
        fVar36 = auVar21._0_4_;
        fVar37 = auVar21._4_4_;
        fVar35 = auVar21._8_4_;
        fVar29 = fVar29 * (float)(~-(uint)(fVar26 <= 0.0) &
                                 (uint)((3.0 - fVar26 * fVar36 * fVar36) * fVar36 * 0.5));
        fVar30 = fVar30 * (float)(~-(uint)(fVar27 <= 0.0) &
                                 (uint)((3.0 - fVar27 * fVar37 * fVar37) * fVar37 * 0.5));
        fVar31 = fVar31 * (float)(~-(uint)(fVar28 <= 0.0) &
                                 (uint)((3.0 - fVar28 * fVar35 * fVar35) * fVar35 * 0.5));
        fVar27 = (0.0 - (pfVar14[9] * fVar30 + pfVar14[8] * fVar29 + pfVar14[10] * fVar31)) -
                 param_3[3];
        fVar36 = fVar33;
        fVar37 = fVar34;
        fVar35 = fVar18;
        fVar26 = fVar23;
        local_d8 = fVar33;
        fStack_d4 = fVar34;
        fStack_d0 = fVar18;
        fStack_cc = fVar23;
        local_c8 = fVar29;
        fStack_c4 = fVar30;
        fStack_c0 = fVar31;
        fStack_bc = fVar27;
      }
      iVar15 = iVar15 + 1;
      lVar16 = lVar16 + -1;
      pfVar14 = pfVar14 + 4;
      fVar33 = fVar29;
      fVar34 = fVar30;
      fVar18 = fVar31;
      fVar23 = fVar27;
    } while (lVar16 != 0);
  }
  puVar10 = (undefined8 *)*param_1;
  lVar16 = param_1[1];
  uVar4 = puVar10[1];
  puVar10[(longlong)(int)lVar16 * 2] = *puVar10;
  (puVar10 + (longlong)(int)lVar16 * 2)[1] = uVar4;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  pvVar8 = TlsGetValue(DAT_146b7bf70);
  if (pvVar8 == (LPVOID)0x0) {
    pvVar8 = DAT_146b7bf68;
  }
  if (((*(int *)((longlong)pvVar8 + 0x10) < (int)uVar11) ||
      ((longlong)(int)uVar11 + (longlong)pfVar9 != *(longlong *)((longlong)pvVar8 + 0x18))) ||
     (*(float **)((longlong)pvVar8 + 0x28) == pfVar9)) {
    FUN_143713ff0(pvVar8,pfVar9);
  }
  else {
    *(float **)((longlong)pvVar8 + 0x18) = pfVar9;
  }
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d750(pvVar7,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 143855bd0 FUN_143855bd0 body=595 status=ok
// SIG undefined FUN_143855bd0(void)

undefined8
FUN_143855bd0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float *param_6,float *param_7,float *param_8,char param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
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
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar22 = *param_3;
  fVar23 = param_3[1];
  fVar25 = param_3[2];
  fVar9 = param_3[3];
  fVar19 = fVar22 + *param_4;
  fVar20 = fVar23 + param_4[1];
  fVar21 = fVar25 + param_4[2];
  fVar14 = fVar19 * fVar19;
  fVar15 = fVar20 * fVar20;
  fVar16 = fVar21 * fVar21;
  auVar5._4_4_ = fVar16;
  auVar5._0_4_ = fVar16;
  auVar5._8_4_ = fVar16;
  auVar5._12_4_ = fVar16;
  if (fVar15 + fVar14 + fVar16 <= 2.842171e-14) {
    fVar19 = param_1[1];
    fVar20 = param_1[2];
    fVar21 = param_1[3];
    fVar16 = *param_5;
    fVar14 = param_5[1];
    fVar15 = param_5[2];
    fVar17 = fVar16 * fVar16;
    fVar18 = fVar14 * fVar14;
    auVar8._8_4_ = fVar15 * fVar15;
    auVar8._4_4_ = auVar8._8_4_;
    auVar8._0_4_ = auVar8._8_4_;
    auVar8._12_4_ = auVar8._8_4_;
    fVar13 = fVar18 + fVar17 + auVar8._8_4_;
    fVar24 = fVar18 + fVar17 + auVar8._8_4_;
    fVar26 = fVar18 + fVar17 + auVar8._8_4_;
    fVar10 = fVar18 + fVar17 + auVar8._8_4_;
    auVar2._4_4_ = fVar24;
    auVar2._0_4_ = fVar13;
    auVar2._8_4_ = fVar26;
    auVar2._12_4_ = fVar10;
    auVar5 = rsqrtps(auVar8,auVar2);
    fVar17 = auVar5._0_4_;
    fVar18 = auVar5._4_4_;
    fVar11 = auVar5._8_4_;
    fVar12 = auVar5._12_4_;
    fVar16 = (float)(~-(uint)(fVar13 <= 0.0) &
                    (uint)((3.0 - fVar13 * fVar17 * fVar17) * fVar17 * 0.5)) * fVar16 * *param_1 +
             *param_7;
    fVar14 = (float)(~-(uint)(fVar24 <= 0.0) &
                    (uint)((3.0 - fVar24 * fVar18 * fVar18) * fVar18 * 0.5)) * fVar14 * fVar19 +
             param_7[1];
    fVar15 = (float)(~-(uint)(fVar26 <= 0.0) &
                    (uint)((3.0 - fVar26 * fVar11 * fVar11) * fVar11 * 0.5)) * fVar15 * fVar20 +
             param_7[2];
    fVar17 = (float)(~-(uint)(fVar10 <= 0.0) &
                    (uint)((3.0 - fVar10 * fVar12 * fVar12) * fVar12 * 0.5)) * param_5[3] * fVar21 +
             param_7[3];
    *param_7 = *param_1 * fVar22 + fVar16;
    param_7[1] = fVar19 * fVar23 + fVar14;
    param_7[2] = fVar20 * fVar25 + fVar15;
    param_7[3] = fVar21 * fVar9 + fVar17;
    fVar22 = param_4[1];
    fVar23 = param_4[2];
    fVar25 = param_4[3];
    fVar9 = param_1[1];
    fVar19 = param_1[2];
    fVar20 = param_1[3];
    *param_8 = *param_4 * *param_1 + fVar16;
    param_8[1] = fVar22 * fVar9 + fVar14;
    param_8[2] = fVar23 * fVar19 + fVar15;
    param_8[3] = fVar25 * fVar20 + fVar17;
    return 1;
  }
  fVar11 = fVar15 + fVar14 + fVar16;
  fVar12 = fVar15 + fVar14 + fVar16;
  fVar13 = fVar15 + fVar14 + fVar16;
  fVar16 = fVar15 + fVar14 + fVar16;
  auVar3._4_4_ = fVar12;
  auVar3._0_4_ = fVar11;
  auVar3._8_4_ = fVar13;
  auVar3._12_4_ = fVar16;
  auVar5 = rsqrtps(auVar5,auVar3);
  fVar14 = auVar5._0_4_;
  fVar15 = auVar5._4_4_;
  fVar17 = auVar5._8_4_;
  fVar18 = auVar5._12_4_;
  auVar6._0_4_ = fVar14 * 0.5;
  auVar6._4_4_ = fVar15 * 0.5;
  auVar6._8_4_ = fVar17 * 0.5;
  auVar6._12_4_ = fVar18 * 0.5;
  fVar19 = fVar19 * (float)(~-(uint)(fVar11 <= 0.0) &
                           (uint)((3.0 - fVar11 * fVar14 * fVar14) * auVar6._0_4_));
  fVar20 = fVar20 * (float)(~-(uint)(fVar12 <= 0.0) &
                           (uint)((3.0 - fVar12 * fVar15 * fVar15) * auVar6._4_4_));
  fVar21 = fVar21 * (float)(~-(uint)(fVar13 <= 0.0) &
                           (uint)((3.0 - fVar13 * fVar17 * fVar17) * auVar6._8_4_));
  fVar15 = (fVar9 + param_4[3]) *
           (float)(~-(uint)(fVar16 <= 0.0) &
                  (uint)((3.0 - fVar16 * fVar18 * fVar18) * auVar6._12_4_));
  fVar22 = fVar22 * fVar19;
  fVar23 = fVar23 * fVar20;
  fVar25 = fVar25 * fVar21;
  fVar9 = fVar23 + fVar22 + fVar25;
  fVar16 = fVar23 + fVar22 + fVar25;
  fVar14 = fVar23 + fVar22 + fVar25;
  fVar25 = fVar23 + fVar22 + fVar25;
  auVar1._4_4_ = fVar16;
  auVar1._0_4_ = fVar9;
  auVar1._8_4_ = fVar14;
  auVar1._12_4_ = fVar25;
  auVar5 = rcpps(auVar6,auVar1);
  fVar22 = (2.0 - fVar9 * auVar5._0_4_) * auVar5._0_4_ * *param_1;
  fVar23 = (2.0 - fVar16 * auVar5._4_4_) * auVar5._4_4_ * param_1[1];
  fVar16 = (2.0 - fVar14 * auVar5._8_4_) * auVar5._8_4_ * param_1[2];
  fVar25 = (2.0 - fVar25 * auVar5._12_4_) * auVar5._12_4_ * param_1[3];
  if ((param_9 == '\0') && (fVar9 < *param_2)) {
    fVar17 = fVar22 * fVar19 + *param_7;
    fVar18 = fVar23 * fVar20 + param_7[1];
    fVar11 = fVar16 * fVar21 + param_7[2];
    fVar12 = fVar25 * fVar15 + param_7[3];
    fVar13 = *param_1 * fVar19 + *param_7;
    fVar24 = param_1[1] * fVar20 + param_7[1];
    fVar26 = param_1[2] * fVar21 + param_7[2];
    fVar15 = param_1[3] * fVar15 + param_7[3];
    fVar22 = (fVar17 - fVar13) * fVar19;
    fVar23 = (fVar18 - fVar24) * fVar20;
    fVar25 = (fVar11 - fVar26) * fVar21;
    fVar19 = (fVar13 - *param_6) * fVar19;
    fVar20 = (fVar24 - param_6[1]) * fVar20;
    fVar21 = (fVar26 - param_6[2]) * fVar21;
    auVar4._4_4_ = fVar19;
    auVar4._0_4_ = fVar19;
    auVar4._8_4_ = fVar19;
    auVar4._12_4_ = fVar19;
    fVar9 = fVar23 + fVar22 + fVar25;
    fVar16 = fVar23 + fVar22 + fVar25;
    fVar14 = fVar23 + fVar22 + fVar25;
    fVar25 = fVar23 + fVar22 + fVar25;
    auVar7._0_4_ = fVar20 + fVar19 + fVar21 + fVar9;
    auVar7._4_4_ = fVar20 + fVar19 + fVar21 + fVar16;
    auVar7._8_4_ = fVar20 + fVar19 + fVar21 + fVar14;
    auVar7._12_4_ = fVar20 + fVar19 + fVar21 + fVar25;
    auVar5 = rcpps(auVar4,auVar7);
    fVar17 = (*param_6 - fVar17) * (2.0 - auVar7._0_4_ * auVar5._0_4_) * auVar5._0_4_ * fVar9 +
             fVar17;
    fVar18 = (param_6[1] - fVar18) * (2.0 - auVar7._4_4_ * auVar5._4_4_) * auVar5._4_4_ * fVar16 +
             fVar18;
    fVar11 = (param_6[2] - fVar11) * (2.0 - auVar7._8_4_ * auVar5._8_4_) * auVar5._8_4_ * fVar14 +
             fVar11;
    fVar12 = (param_6[3] - fVar12) * (2.0 - auVar7._12_4_ * auVar5._12_4_) * auVar5._12_4_ * fVar25
             + fVar12;
    *param_7 = fVar17;
    param_7[1] = fVar18;
    param_7[2] = fVar11;
    param_7[3] = fVar12;
    *param_8 = (fVar13 - fVar17) + fVar13;
    param_8[1] = (fVar24 - fVar18) + fVar24;
    param_8[2] = (fVar26 - fVar11) + fVar26;
    param_8[3] = (fVar15 - fVar12) + fVar15;
    return 1;
  }
  *param_7 = fVar22 * fVar19 + *param_7;
  param_7[1] = fVar23 * fVar20 + param_7[1];
  param_7[2] = fVar16 * fVar21 + param_7[2];
  param_7[3] = fVar25 * fVar15 + param_7[3];
  return 0;
}



// FUNCTION 143855e30 FUN_143855e30 body=647 status=ok
// SIG undefined FUN_143855e30(void)

longlong FUN_143855e30(undefined8 param_1,undefined4 param_2,float *param_3,undefined8 param_4,
                      float *param_5,undefined8 param_6,longlong *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  LPVOID pvVar12;
  LPVOID pvVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  longlong local_78;
  uint local_70;
  uint local_6c;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined8 local_28;
  
  pvVar12 = TlsGetValue(DAT_146b8198c);
  if (pvVar12 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar12,"TtgetSilhouetteFromPointCloud");
  }
  lVar16 = 0;
  local_70 = 0;
  local_60 = 0x80;
  pvVar13 = TlsGetValue(DAT_146b7bf70);
  if (pvVar13 == (LPVOID)0x0) {
    pvVar13 = DAT_146b7bf68;
  }
  local_78 = *(longlong *)((longlong)pvVar13 + 0x18);
  if ((*(int *)((longlong)pvVar13 + 0x10) < 0x800) ||
     (*(ulonglong *)((longlong)pvVar13 + 0x20) < local_78 + 0x800U)) {
    local_78 = FUN_1437138c0(pvVar13,0x800);
  }
  else {
    *(ulonglong *)((longlong)pvVar13 + 0x18) = local_78 + 0x800U;
  }
  local_38 = param_3[8];
  fStack_34 = param_3[9];
  fStack_30 = param_3[10];
  fStack_2c = param_3[0xb];
  local_48 = param_3[4];
  fStack_44 = param_3[5];
  fStack_40 = param_3[6];
  fStack_3c = param_3[7];
  local_6c = 0x80000080;
  local_68 = local_78;
  local_58 = param_1;
  local_50 = param_2;
  local_28 = param_4;
  iVar10 = FUN_143855020(&local_58,&local_78);
  lVar9 = local_78;
  if ((iVar10 != 0) && (3 < (int)local_70)) {
    *(uint *)(param_7 + 1) = local_70;
    if (0 < (int)local_70) {
      uVar15 = (ulonglong)local_70;
      do {
        pfVar1 = (float *)(lVar16 + local_78);
        fVar17 = *pfVar1 * param_3[4];
        fVar18 = pfVar1[1] * param_3[5];
        fVar19 = pfVar1[2] * param_3[6];
        fVar3 = param_3[5];
        fVar4 = param_3[6];
        fVar5 = param_3[7];
        pfVar1 = (float *)(lVar16 + local_78);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)(lVar16 + *param_7);
        *pfVar2 = (0.0 - (fVar18 + fVar17 + fVar19)) * param_3[4] + *pfVar1;
        pfVar2[1] = (0.0 - (fVar18 + fVar17 + fVar19)) * fVar3 + fVar6;
        pfVar2[2] = (0.0 - (fVar18 + fVar17 + fVar19)) * fVar4 + fVar7;
        pfVar2[3] = (0.0 - (fVar18 + fVar17 + fVar19)) * fVar5 + fVar8;
        lVar16 = lVar16 + 0x10;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    FUN_143856340(param_7,param_6);
    FUN_1438560c0(param_3[3],param_3 + 8,param_7);
    fStack_7c = *param_3;
    local_88 = fStack_7c + *param_5;
    fStack_84 = fStack_7c + param_5[1];
    fStack_80 = fStack_7c + param_5[2];
    fStack_7c = fStack_7c + param_5[3];
    if (0.0 < local_88) {
      local_98 = param_3[1];
      fStack_94 = local_98;
      fStack_90 = local_98;
      fStack_8c = local_98;
      FUN_1438556d0(param_7,param_3 + 4,&local_88,&local_98);
    }
    lVar16 = 1;
  }
  pvVar13 = TlsGetValue(DAT_146b7bf70);
  if (pvVar13 == (LPVOID)0x0) {
    pvVar13 = DAT_146b7bf68;
  }
  uVar11 = local_60 * 0x10 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar13 + 0x10) < (int)uVar11) ||
      ((int)uVar11 + local_68 != *(longlong *)((longlong)pvVar13 + 0x18))) ||
     (*(longlong *)((longlong)pvVar13 + 0x28) == local_68)) {
    FUN_143713ff0();
  }
  else {
    *(longlong *)((longlong)pvVar13 + 0x18) = local_68;
  }
  uVar14 = FUN_143703a50();
  if (-1 < (int)local_6c) {
    FUN_143702e10(uVar14,lVar9,0x10,local_6c & 0x3fffffff);
  }
  if (pvVar12 != (LPVOID)0x0) {
    FUN_14370d750(pvVar12,&DAT_145b8eda0);
  }
  return lVar16;
}



// FUNCTION 1438560c0 FUN_1438560c0 body=630 status=ok
// SIG undefined FUN_1438560c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438560c0(float param_1,undefined8 param_2,longlong *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  LPVOID pvVar11;
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar35;
  undefined1 auVar32 [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar23 [12];
  
  pvVar11 = TlsGetValue(DAT_146b8198c);
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar11,"TtremoveColinear");
  }
  auVar23 = DAT_1467f08d0._0_12_;
  uVar15 = *(uint *)(param_3 + 1);
  auVar32._0_8_ = (ulonglong)DAT_1467f08d0 ^ 0x8000000080000000;
  auVar32._8_4_ = DAT_1467f08d0._8_4_ ^ 0x80000000;
  auVar33._12_4_ = DAT_1467f08d0._12_4_ ^ 0x80000000;
  auVar33._0_12_ = auVar32;
  if (0 < (int)uVar15) {
    pauVar12 = (undefined1 (*) [16])*param_3;
    uVar14 = (ulonglong)uVar15;
    auVar24 = _DAT_1467f08d0;
    do {
      auVar24 = minps(auVar24,*pauVar12);
      auVar23 = auVar24._0_12_;
      auVar33 = maxps(auVar33,*pauVar12);
      auVar32 = auVar33._0_12_;
      pauVar12 = pauVar12 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  fVar31 = auVar32._0_4_ - auVar23._0_4_;
  fVar35 = auVar32._4_4_ - auVar23._4_4_;
  auVar34._8_4_ = auVar32._8_4_ - auVar23._8_4_;
  uVar14 = 0;
  uVar21 = 0;
  auVar25._4_4_ = fVar35;
  auVar25._0_4_ = fVar35;
  auVar25._8_4_ = fVar35;
  auVar25._12_4_ = fVar35;
  auVar34._4_4_ = auVar34._8_4_;
  auVar34._0_4_ = auVar34._8_4_;
  auVar34._12_4_ = auVar34._8_4_;
  auVar24._4_4_ = fVar31;
  auVar24._0_4_ = fVar31;
  auVar24._8_4_ = fVar31;
  auVar24._12_4_ = fVar31;
  auVar33 = maxps(auVar25,auVar24);
  auVar33 = maxps(auVar34,auVar33);
  param_1 = auVar33._0_4_ * param_1;
  param_1 = param_1 * param_1;
  if (0 < (int)(uVar15 - 2)) {
    lVar17 = 0x20;
    uVar13 = uVar14;
    uVar22 = uVar14;
    do {
      iVar20 = (int)uVar13;
      lVar18 = *param_3;
      pfVar1 = (float *)(lVar18 + lVar17);
      pfVar2 = (float *)(lVar18 + uVar22);
      pfVar5 = (float *)(lVar18 + 0x10 + uVar22);
      pfVar3 = (float *)(lVar18 + uVar22);
      fVar31 = (pfVar5[1] - pfVar3[1]) * (*pfVar1 - *pfVar2) -
               (pfVar1[1] - pfVar2[1]) * (*pfVar5 - *pfVar3);
      fVar35 = (pfVar5[2] - pfVar3[2]) * (pfVar1[1] - pfVar2[1]) -
               (pfVar1[2] - pfVar2[2]) * (pfVar5[1] - pfVar3[1]);
      fVar29 = (*pfVar5 - *pfVar3) * (pfVar1[2] - pfVar2[2]) -
               (*pfVar1 - *pfVar2) * (pfVar5[2] - pfVar3[2]);
      if ((fVar29 * fVar29 + fVar35 * fVar35 + fVar31 * fVar31 < param_1) && (4 < (int)param_3[1]))
      {
        iVar10 = (int)param_3[1] + -1;
        *(int *)(param_3 + 1) = iVar10;
        lVar19 = (longlong)((iVar10 - iVar20) + -1) * 0x10;
        uVar13 = uVar14;
        uVar16 = uVar14;
        if (0 < lVar19) {
          do {
            uVar15 = (int)uVar16 + 8;
            *(undefined8 *)(uVar13 + 0x10 + lVar18 + uVar22) =
                 *(undefined8 *)(uVar13 + 0x20 + lVar18 + uVar22);
            uVar13 = uVar13 + 8;
            uVar16 = (ulonglong)uVar15;
          } while ((int)uVar15 < lVar19);
        }
        iVar20 = iVar20 + -1;
        uVar22 = uVar22 - 0x10;
        lVar17 = lVar17 + -0x10;
      }
      uVar21 = iVar20 + 1;
      uVar13 = (ulonglong)uVar21;
      uVar22 = uVar22 + 0x10;
      lVar17 = lVar17 + 0x10;
    } while ((int)uVar21 < (int)param_3[1] + -2);
  }
  if (4 < (int)param_3[1]) {
    lVar17 = *param_3;
    pfVar1 = (float *)(lVar17 + (longlong)(int)uVar21 * 0x10);
    fVar31 = *(float *)(lVar17 + 0x10) - *pfVar1;
    fVar35 = *(float *)(lVar17 + 0x14) - pfVar1[1];
    fVar29 = *(float *)(lVar17 + 0x18) - pfVar1[2];
    pfVar2 = (float *)(lVar17 + (longlong)(int)(uVar21 + 1) * 0x10);
    fVar26 = *pfVar1 - *pfVar2;
    fVar28 = pfVar1[1] - pfVar2[1];
    fVar30 = pfVar1[2] - pfVar2[2];
    fVar27 = fVar28 * fVar31 - fVar35 * fVar26;
    fVar35 = fVar30 * fVar35 - fVar29 * fVar28;
    fVar31 = fVar26 * fVar29 - fVar31 * fVar30;
    if (fVar31 * fVar31 + fVar35 * fVar35 + fVar27 * fVar27 < param_1) {
      iVar20 = (int)param_3[1] + -1;
      lVar18 = (longlong)iVar20 * 0x10;
      *(int *)(param_3 + 1) = iVar20;
      uVar13 = uVar14;
      if (0 < lVar18) {
        do {
          uVar15 = (int)uVar13 + 8;
          *(undefined8 *)(lVar17 + uVar14) = *(undefined8 *)(lVar17 + 0x10 + uVar14);
          uVar14 = uVar14 + 8;
          uVar13 = (ulonglong)uVar15;
        } while ((int)uVar15 < lVar18);
      }
    }
  }
  puVar6 = (undefined4 *)*param_3;
  uVar7 = puVar6[1];
  uVar8 = puVar6[2];
  uVar9 = puVar6[3];
  puVar4 = puVar6 + (longlong)((int)param_3[1] + -1) * 4;
  *puVar4 = *puVar6;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  if (pvVar11 == (LPVOID)0x0) {
    return;
  }
  FUN_14370d750(pvVar11,&DAT_145b8eda0);
  return;
}



// FUNCTION 143856340 FUN_143856340 body=423 status=ok
// SIG undefined FUN_143856340(void)

void FUN_143856340(longlong *param_1,float *param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  LPVOID pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  
  pvVar8 = TlsGetValue(DAT_146b8198c);
  if (pvVar8 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar8,"Ttweld");
  }
  uVar10 = 0;
  iVar17 = 0;
  uVar14 = uVar10;
  uVar18 = uVar10;
  if (0 < (int)param_1[1] + -2) {
    do {
      iVar17 = (int)uVar18;
      if ((int)param_1[1] < 5) break;
      lVar15 = *param_1;
      pfVar1 = (float *)(uVar14 + lVar15);
      pfVar13 = (float *)(uVar14 + 0x10 + lVar15);
      if (*param_2 <=
          (pfVar1[1] - pfVar13[1]) * (pfVar1[1] - pfVar13[1]) +
          (*pfVar1 - *pfVar13) * (*pfVar1 - *pfVar13) +
          (pfVar1[2] - pfVar13[2]) * (pfVar1[2] - pfVar13[2])) {
        uVar18 = (ulonglong)(iVar17 + 1);
        uVar14 = uVar14 + 0x10;
      }
      else {
        iVar7 = (int)param_1[1] + -1;
        *(int *)(param_1 + 1) = iVar7;
        lVar16 = (longlong)((iVar7 - iVar17) + -1) * 0x10;
        uVar9 = uVar10;
        uVar12 = uVar10;
        if (0 < lVar16) {
          do {
            uVar11 = (int)uVar12 + 8;
            *(undefined8 *)(uVar9 + 0x10 + lVar15 + uVar14) =
                 *(undefined8 *)(uVar9 + 0x20 + lVar15 + uVar14);
            uVar9 = uVar9 + 8;
            uVar12 = (ulonglong)uVar11;
          } while ((int)uVar11 < lVar16);
        }
      }
      iVar17 = (int)uVar18;
    } while (iVar17 < (int)param_1[1] + -2);
  }
  if (4 < (int)param_1[1]) {
    pfVar1 = (float *)*param_1;
    pfVar13 = pfVar1 + (longlong)iVar17 * 4;
    if ((pfVar13[1] - pfVar1[1]) * (pfVar13[1] - pfVar1[1]) +
        (*pfVar13 - *pfVar1) * (*pfVar13 - *pfVar1) +
        (pfVar13[2] - pfVar1[2]) * (pfVar13[2] - pfVar1[2]) < *param_2) {
      iVar7 = (int)param_1[1] + -1;
      *(int *)(param_1 + 1) = iVar7;
      lVar15 = (longlong)(iVar7 - iVar17) * 0x10;
      uVar14 = uVar10;
      if (0 < lVar15) {
        do {
          uVar11 = (int)uVar14 + 8;
          *(undefined8 *)(uVar10 + (longlong)pfVar13) =
               *(undefined8 *)(uVar10 + 0x10 + (longlong)pfVar13);
          uVar10 = uVar10 + 8;
          uVar14 = (ulonglong)uVar11;
        } while ((int)uVar11 < lVar15);
      }
    }
  }
  puVar3 = (undefined4 *)*param_1;
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  puVar2 = puVar3 + (longlong)((int)param_1[1] + -1) * 4;
  *puVar2 = *puVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  if (pvVar8 == (LPVOID)0x0) {
    return;
  }
  FUN_14370d750(pvVar8,&DAT_145b8eda0);
  return;
}



// FUNCTION 1438564f0 FUN_1438564f0 body=39 status=ok
// SIG undefined FUN_1438564f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1438564f0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143856520(param_1,1);
  uVar1 = uRam00000001467f08d8;
  *(undefined8 *)(param_1 + 0x50) = _DAT_1467f08d0;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return param_1;
}



// FUNCTION 143856520 FUN_143856520 body=83 status=ok
// SIG undefined FUN_143856520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143856520(undefined8 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001467f08d8;
  *param_1 = _DAT_1467f08d0;
  param_1[1] = uVar1;
  uVar1 = uRam00000001467f08d8;
  param_1[2] = _DAT_1467f08d0;
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x24) = 100000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 6) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 9) = 0x10100;
  *(undefined1 *)((longlong)param_1 + 0x4c) = param_2;
  *(undefined2 *)((longlong)param_1 + 0x4d) = 0x100;
  return param_1;
}



// FUNCTION 143856580 FUN_143856580 body=43 status=ok
// SIG undefined FUN_143856580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_143856580(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143856520(param_1,0);
  uVar1 = uRam00000001467f08d8;
  *(undefined8 *)(param_1 + 0x50) = _DAT_1467f08d0;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  return param_1;
}



// FUNCTION 1438565b0 FUN_1438565b0 body=67 status=ok
// SIG undefined FUN_1438565b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438565b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  uVar1 = uRam00000001467f08d8;
  param_1[8] = _DAT_1467f08d0;
  param_1[9] = uVar1;
  return param_1;
}



// FUNCTION 143856600 FUN_143856600 body=3629 status=ok
// SIG undefined FUN_143856600(void)

char FUN_143856600(float *param_1,float *param_2,float *param_3,float *param_4,longlong param_5,
                  longlong param_6,undefined4 param_7,float *param_8)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  LPVOID pvVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint *puVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  longlong lVar24;
  char cVar25;
  longlong lVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  longlong local_2a8;
  uint local_2a0;
  uint local_29c;
  longlong local_298;
  int local_290;
  int local_288;
  longlong local_280;
  uint local_278;
  uint local_274;
  int local_270;
  longlong local_268;
  longlong local_260;
  uint local_258;
  uint local_254;
  undefined1 local_248 [16];
  undefined4 *local_238;
  undefined1 local_230;
  undefined8 local_228;
  undefined8 local_220;
  LPVOID local_218;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 local_1c8 [16];
  undefined4 local_1b8 [2];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  uint local_188;
  int *local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  uint local_158;
  uint *local_150;
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
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  
  pvVar11 = TlsGetValue(DAT_146b8198c);
  local_218 = pvVar11;
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar11,"TtcheckAgainstNearbyBoundaries");
  }
  local_1e8 = *param_1;
  fStack_1e4 = param_1[1];
  fStack_1e0 = param_1[2];
  fStack_1dc = param_1[3];
  cVar25 = '\x03';
  local_288 = 0;
  bVar1 = *(byte *)(param_6 + 0x4d);
  local_1d8 = (float)(~-(uint)(*param_2 - local_1e8 == 0.0) & (uint)(*param_2 - local_1e8));
  fStack_1d4 = (float)(~-(uint)(param_2[1] - fStack_1e4 == 0.0) & (uint)(param_2[1] - fStack_1e4));
  fStack_1d0 = (float)(~-(uint)(param_2[2] - fStack_1e0 == 0.0) & (uint)(param_2[2] - fStack_1e0));
  fVar73 = (float)(~-(uint)(param_8[3] == 0.0) & (uint)param_8[3]);
  auVar43._4_4_ = fStack_1d4;
  auVar43._0_4_ = local_1d8;
  auVar43._8_4_ = fStack_1d0;
  auVar43._12_4_ = fVar73;
  auVar43 = rcpps(in_XMM2,auVar43);
  auVar34._0_8_ =
       CONCAT44(-(uint)(fStack_1d4 == 0.0),-(uint)(local_1d8 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar34._8_4_ = -(uint)(fStack_1d0 == 0.0) & 0x7f7fffee;
  auVar34._12_4_ = -(uint)(fVar73 == 0.0) & 0x7f7fffee;
  local_1c8._0_4_ =
       ~-(uint)(local_1d8 == 0.0) & (uint)((2.0 - local_1d8 * auVar43._0_4_) * auVar43._0_4_);
  local_1c8._4_4_ =
       ~-(uint)(fStack_1d4 == 0.0) & (uint)((2.0 - fStack_1d4 * auVar43._4_4_) * auVar43._4_4_);
  local_1c8._8_4_ =
       ~-(uint)(fStack_1d0 == 0.0) & (uint)((2.0 - fStack_1d0 * auVar43._8_4_) * auVar43._8_4_);
  local_1c8._12_4_ =
       ~-(uint)(fVar73 == 0.0) & (uint)((2.0 - fVar73 * auVar43._12_4_) * auVar43._12_4_);
  local_1c8 = local_1c8 | auVar34;
  fStack_1cc = fVar73;
  if (0.0 < fStack_1d4 * fStack_1d4 + local_1d8 * local_1d8 + fStack_1d0 * fStack_1d0) {
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 0x80000000;
    local_290 = 0x40;
    pvVar11 = TlsGetValue(DAT_146b7bf70);
    if (pvVar11 == (LPVOID)0x0) {
      pvVar11 = DAT_146b7bf68;
    }
    local_298 = *(longlong *)((longlong)pvVar11 + 0x18);
    if ((*(int *)((longlong)pvVar11 + 0x10) < 0x100) ||
       (*(ulonglong *)((longlong)pvVar11 + 0x20) < local_298 + 0x100U)) {
      local_298 = FUN_1437138c0(pvVar11,0x100);
    }
    else {
      *(ulonglong *)((longlong)pvVar11 + 0x18) = local_298 + 0x100U;
    }
    local_29c = 0x80000040;
    local_2a8 = local_298;
    uVar9 = UAncBlueprintFunctionLibrary::GetOverallExpThreshold(0x40);
    local_258 = uVar9;
    if (uVar9 == 0) {
      local_260 = 0;
    }
    else {
      pvVar11 = TlsGetValue(DAT_146b7bf70);
      if (pvVar11 == (LPVOID)0x0) {
        pvVar11 = DAT_146b7bf68;
      }
      uVar21 = uVar9 + 0x7f & 0xffffff80;
      local_260 = *(longlong *)((longlong)pvVar11 + 0x18);
      uVar19 = (int)uVar21 + local_260;
      if ((*(int *)((longlong)pvVar11 + 0x10) < (int)uVar21) ||
         (*(ulonglong *)((longlong)pvVar11 + 0x20) < uVar19)) {
        local_260 = FUN_1437138c0(pvVar11);
      }
      else {
        *(ulonglong *)((longlong)pvVar11 + 0x18) = uVar19;
      }
    }
    local_254 = uVar9 | 0x80000000;
    FUN_143850a90(&local_280,local_260,uVar9);
    uVar12 = FUN_143703a50();
    if (local_2a0 == (local_29c & 0x3fffffff)) {
      FUN_14370c460(uVar12,&local_2a8,4);
    }
    *(undefined4 *)(local_2a8 + (longlong)(int)local_2a0 * 4) = param_7;
    local_2a0 = local_2a0 + 1;
    lVar24 = local_280;
    do {
      iVar10 = 1;
      local_2a0 = local_2a0 - 1;
      uVar9 = *(uint *)(local_2a8 + (longlong)(int)local_2a0 * 4);
      uVar22 = local_278 - 1;
      uVar21 = local_278;
      if (0 < (int)uVar22) {
        uVar21 = uVar9 * -0x61c8864f;
        uVar16 = (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                 uVar9 * -0x4f000000) & uVar22;
        uVar17 = *(uint *)(lVar24 + (longlong)(int)uVar16 * 4);
        while ((uVar21 = local_278, uVar17 != 0xffffffff && (uVar21 = uVar16, uVar17 != uVar9))) {
          uVar16 = uVar16 + 1 & uVar22;
          uVar17 = *(uint *)(lVar24 + (longlong)(int)uVar16 * 4);
        }
      }
      if ((int)uVar22 < (int)uVar21) {
        if ((int)uVar22 < local_270 * 2) {
LAB_143857216:
          cVar25 = '\x02';
          break;
        }
        uVar21 = uVar9 * -0x61c8864f;
        uVar17 = (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                 uVar9 * -0x4f000000) & uVar22;
        uVar21 = *(uint *)(lVar24 + (longlong)(int)uVar17 * 4);
        while (uVar21 != 0xffffffff) {
          if (uVar21 == uVar9) {
            iVar10 = 0;
            break;
          }
          uVar17 = uVar17 + 1 & uVar22;
          uVar21 = *(uint *)(lVar24 + (longlong)(int)uVar17 * 4);
        }
        local_270 = local_270 + iVar10;
        *(uint *)(lVar24 + (longlong)(int)uVar17 * 4) = uVar9;
        lVar26 = *(longlong *)((ulonglong)(uVar9 >> 0x16) * 0x100 + *(longlong *)(param_5 + 0x38));
        lVar24 = *(longlong *)(lVar26 + 0x18);
        local_268 = lVar26;
        puVar13 = (uint *)FUN_14384fb00(*(undefined8 *)(lVar24 + 0x18),
                                        *(undefined4 *)(lVar24 + 0x20),lVar24 + 0xb0,lVar24 + 0xd0,
                                        *(undefined8 *)(lVar24 + 0x48),lVar24 + 0x120,lVar24 + 0x140
                                        ,lVar24 + 0x90,uVar9 & 0x3fffff,
                                        *(undefined4 *)(lVar24 + 0x50),&local_228);
        local_1b8[0] = 0xffffffff;
        local_1b0 = 0;
        local_1a8 = 0;
        local_188 = 0xffffffff;
        local_180 = (int *)0x0;
        local_178 = 0;
        uVar21 = (uint)*(ushort *)((longlong)puVar13 + 10);
        puVar14 = puVar13;
        if (0 < (short)*(ushort *)((longlong)puVar13 + 10)) {
          puVar14 = puVar13 + 1;
        }
        uVar22 = *puVar14;
        local_158 = uVar9;
        local_150 = puVar13;
        lVar24 = local_280;
        while (uVar22 != 0xffffffff) {
          if ((((bVar1 & 3) != 0) || ((int)uVar22 < (int)puVar13[1])) ||
             ((int)((int)(short)uVar21 + puVar13[1]) <= (int)uVar22)) {
            lVar24 = *(longlong *)(lVar26 + 0x18);
            piVar15 = (int *)FUN_14384fa30(*(undefined8 *)(lVar24 + 0x28),
                                           *(undefined4 *)(lVar24 + 0x30),lVar24 + 0xc0,
                                           lVar24 + 0xe0,*(undefined8 *)(lVar24 + 0x58),
                                           lVar24 + 0x130,lVar24 + 0x150,lVar24 + 0x70,uVar22,
                                           *(undefined4 *)(lVar24 + 0x60),&local_220);
            lVar24 = *(longlong *)(lVar26 + 0x18);
            iVar10 = *piVar15;
            iVar2 = *(int *)(lVar24 + 0x40);
            if (iVar10 < iVar2) {
              pfVar23 = (float *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar24 + 0x38));
            }
            else {
              pfVar23 = (float *)((longlong)(iVar10 - iVar2) * 0x10 + *(longlong *)(lVar24 + 0xf0));
            }
            iVar10 = piVar15[1];
            fVar32 = *pfVar23;
            fVar38 = pfVar23[1];
            fVar39 = pfVar23[2];
            if (iVar10 < iVar2) {
              pfVar23 = (float *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar24 + 0x38));
            }
            else {
              pfVar23 = (float *)((longlong)(iVar10 - iVar2) * 0x10 + *(longlong *)(lVar24 + 0xf0));
            }
            fVar40 = *pfVar23;
            fVar41 = pfVar23[1];
            fVar42 = pfVar23[2];
            fVar77 = fVar38 * *(float *)(lVar26 + 0x50) + fVar32 * *(float *)(lVar26 + 0x40) +
                     fVar39 * *(float *)(lVar26 + 0x60) + *(float *)(lVar26 + 0x70);
            fVar78 = fVar38 * *(float *)(lVar26 + 0x54) + fVar32 * *(float *)(lVar26 + 0x44) +
                     fVar39 * *(float *)(lVar26 + 100) + *(float *)(lVar26 + 0x74);
            fVar79 = fVar38 * *(float *)(lVar26 + 0x58) + fVar32 * *(float *)(lVar26 + 0x48) +
                     fVar39 * *(float *)(lVar26 + 0x68) + *(float *)(lVar26 + 0x78);
            fVar80 = fVar38 * *(float *)(lVar26 + 0x5c) + fVar32 * *(float *)(lVar26 + 0x4c) +
                     fVar39 * *(float *)(lVar26 + 0x6c) + *(float *)(lVar26 + 0x7c);
            local_248._0_4_ = (*param_2 - *param_1) * fVar73;
            local_248._4_4_ = (param_2[1] - param_1[1]) * fVar73;
            local_248._8_4_ = (param_2[2] - param_1[2]) * fVar73;
            local_248._12_4_ = (param_2[3] - param_1[3]) * fVar73;
            fVar70 = fVar77 - *param_1;
            fVar71 = fVar78 - param_1[1];
            fVar72 = fVar79 - param_1[2];
            local_208 = fVar41 * *(float *)(lVar26 + 0x50) + fVar40 * *(float *)(lVar26 + 0x40) +
                        fVar42 * *(float *)(lVar26 + 0x60) + *(float *)(lVar26 + 0x70);
            fStack_204 = fVar41 * *(float *)(lVar26 + 0x54) + fVar40 * *(float *)(lVar26 + 0x44) +
                         fVar42 * *(float *)(lVar26 + 100) + *(float *)(lVar26 + 0x74);
            fStack_200 = fVar41 * *(float *)(lVar26 + 0x58) + fVar40 * *(float *)(lVar26 + 0x48) +
                         fVar42 * *(float *)(lVar26 + 0x68) + *(float *)(lVar26 + 0x78);
            fStack_1fc = fVar41 * *(float *)(lVar26 + 0x5c) + fVar40 * *(float *)(lVar26 + 0x4c) +
                         fVar42 * *(float *)(lVar26 + 0x6c) + *(float *)(lVar26 + 0x7c);
            fVar74 = local_208 - fVar77;
            fVar75 = fStack_204 - fVar78;
            fVar76 = fStack_200 - fVar79;
            fVar32 = fVar74 * (float)local_248._0_4_;
            fVar38 = fVar75 * (float)local_248._4_4_;
            fVar39 = fVar76 * (float)local_248._8_4_;
            fVar67 = fVar38 + fVar32 + fVar39;
            fVar68 = fVar38 + fVar32 + fVar39;
            fVar69 = fVar38 + fVar32 + fVar39;
            fVar39 = fVar38 + fVar32 + fVar39;
            fVar32 = fVar70 * (float)local_248._0_4_;
            fVar38 = fVar71 * (float)local_248._4_4_;
            fVar40 = fVar72 * (float)local_248._8_4_;
            fVar64 = fVar38 + fVar32 + fVar40;
            fVar65 = fVar38 + fVar32 + fVar40;
            fVar66 = fVar38 + fVar32 + fVar40;
            fVar40 = fVar38 + fVar32 + fVar40;
            fVar32 = fVar70 * fVar74;
            fVar38 = fVar71 * fVar75;
            fVar41 = fVar72 * fVar76;
            fVar61 = fVar38 + fVar32 + fVar41;
            fVar62 = fVar38 + fVar32 + fVar41;
            fVar63 = fVar38 + fVar32 + fVar41;
            fVar41 = fVar38 + fVar32 + fVar41;
            fVar32 = (float)local_248._0_4_ * (float)local_248._0_4_;
            fVar38 = (float)local_248._4_4_ * (float)local_248._4_4_;
            fVar42 = (float)local_248._8_4_ * (float)local_248._8_4_;
            fVar49 = fVar38 + fVar32 + fVar42;
            fVar50 = fVar38 + fVar32 + fVar42;
            fVar51 = fVar38 + fVar32 + fVar42;
            fVar42 = fVar38 + fVar32 + fVar42;
            fVar32 = fVar74 * fVar74;
            fVar38 = fVar75 * fVar75;
            auVar33._8_4_ = fVar76 * fVar76;
            auVar33._4_4_ = auVar33._8_4_;
            auVar33._0_4_ = auVar33._8_4_;
            auVar33._12_4_ = auVar33._8_4_;
            fVar56 = fVar38 + fVar32 + auVar33._8_4_;
            fVar57 = fVar38 + fVar32 + auVar33._8_4_;
            fVar58 = fVar38 + fVar32 + auVar33._8_4_;
            fVar59 = fVar38 + fVar32 + auVar33._8_4_;
            auVar6._4_4_ = fVar57;
            auVar6._0_4_ = fVar56;
            auVar6._8_4_ = fVar58;
            auVar6._12_4_ = fVar59;
            auVar34 = rcpps(auVar33,auVar6);
            fVar32 = fVar56 * fVar49 - fVar67 * fVar67;
            fVar38 = fVar57 * fVar50 - fVar68 * fVar68;
            fVar47 = fVar58 * fVar51 - fVar69 * fVar69;
            fVar48 = fVar59 * fVar42 - fVar39 * fVar39;
            auVar28._0_4_ = auVar34._0_4_ * fVar56;
            auVar28._4_4_ = auVar34._4_4_ * fVar57;
            auVar28._8_4_ = auVar34._8_4_ * fVar58;
            auVar28._12_4_ = auVar34._12_4_ * fVar59;
            auVar46._4_4_ = fVar38;
            auVar46._0_4_ = fVar32;
            auVar46._8_4_ = fVar47;
            auVar46._12_4_ = fVar48;
            auVar46 = rcpps(local_248,auVar46);
            auVar5._4_4_ = fVar50;
            auVar5._0_4_ = fVar49;
            auVar5._8_4_ = fVar51;
            auVar5._12_4_ = fVar42;
            auVar43 = rcpps(auVar28,auVar5);
            fVar52 = (2.0 - auVar28._0_4_) * auVar34._0_4_;
            fVar53 = (2.0 - auVar28._4_4_) * auVar34._4_4_;
            fVar54 = (2.0 - auVar28._8_4_) * auVar34._8_4_;
            fVar55 = (2.0 - auVar28._12_4_) * auVar34._12_4_;
            fVar49 = (2.0 - fVar49 * auVar43._0_4_) * auVar43._0_4_;
            fVar50 = (2.0 - fVar50 * auVar43._4_4_) * auVar43._4_4_;
            fVar51 = (2.0 - fVar51 * auVar43._8_4_) * auVar43._8_4_;
            fVar60 = (2.0 - fVar42 * auVar43._12_4_) * auVar43._12_4_;
            fVar32 = (float)(~-(uint)(fVar32 == 0.0) &
                            (uint)((2.0 - auVar46._0_4_ * fVar32) * auVar46._0_4_)) *
                     (fVar56 * fVar64 - fVar61 * fVar67);
            fVar38 = (float)(~-(uint)(fVar38 == 0.0) &
                            (uint)((2.0 - auVar46._4_4_ * fVar38) * auVar46._4_4_)) *
                     (fVar57 * fVar65 - fVar62 * fVar68);
            fVar42 = (float)(~-(uint)(fVar47 == 0.0) &
                            (uint)((2.0 - auVar46._8_4_ * fVar47) * auVar46._8_4_)) *
                     (fVar58 * fVar66 - fVar63 * fVar69);
            fVar47 = (float)(~-(uint)(fVar48 == 0.0) &
                            (uint)((2.0 - auVar46._12_4_ * fVar48) * auVar46._12_4_)) *
                     (fVar59 * fVar40 - fVar41 * fVar39);
            uVar21 = -(uint)(fVar32 < DAT_1467f06f0);
            uVar17 = -(uint)(fVar38 < fRam00000001467f06f4);
            uVar16 = -(uint)(fVar42 < fRam00000001467f06f8);
            uVar27 = -(uint)(fVar47 < fRam00000001467f06fc);
            auVar35._0_4_ = (uint)fVar32 & uVar21;
            auVar35._4_4_ = (uint)fVar38 & uVar17;
            auVar35._8_4_ = (uint)fVar42 & uVar16;
            auVar35._12_4_ = (uint)fVar47 & uVar27;
            auVar29._0_4_ = ~uVar21 & (uint)DAT_1467f06f0;
            auVar29._4_4_ = ~uVar17 & (uint)fRam00000001467f06f4;
            auVar29._8_4_ = ~uVar16 & (uint)fRam00000001467f06f8;
            auVar29._12_4_ = ~uVar27 & (uint)fRam00000001467f06fc;
            auVar43 = maxps(ZEXT816(0),auVar35 | auVar29);
            fVar32 = auVar43._0_4_ * fVar52 * fVar67 - fVar52 * fVar61;
            fVar38 = auVar43._4_4_ * fVar53 * fVar68 - fVar53 * fVar62;
            fVar42 = auVar43._8_4_ * fVar54 * fVar69 - fVar54 * fVar63;
            fVar41 = auVar43._12_4_ * fVar55 * fVar39 - fVar55 * fVar41;
            uVar21 = -(uint)(fVar32 < DAT_1467f06f0);
            uVar17 = -(uint)(fVar38 < fRam00000001467f06f4);
            uVar16 = -(uint)(fVar42 < fRam00000001467f06f8);
            uVar27 = -(uint)(fVar41 < fRam00000001467f06fc);
            auVar44._0_4_ = (uint)fVar32 & uVar21;
            auVar44._4_4_ = (uint)fVar38 & uVar17;
            auVar44._8_4_ = (uint)fVar42 & uVar16;
            auVar44._12_4_ = (uint)fVar41 & uVar27;
            auVar36._0_4_ = ~uVar21 & (uint)DAT_1467f06f0;
            auVar36._4_4_ = ~uVar17 & (uint)fRam00000001467f06f4;
            auVar36._8_4_ = ~uVar16 & (uint)fRam00000001467f06f8;
            auVar36._12_4_ = ~uVar27 & (uint)fRam00000001467f06fc;
            auVar34 = maxps(ZEXT816(0),auVar36 | auVar44);
            fVar32 = fVar49 * fVar67 * auVar34._0_4_ + fVar49 * fVar64;
            fVar38 = fVar50 * fVar68 * auVar34._4_4_ + fVar50 * fVar65;
            fVar41 = fVar51 * fVar69 * auVar34._8_4_ + fVar51 * fVar66;
            fVar39 = fVar60 * fVar39 * auVar34._12_4_ + fVar60 * fVar40;
            uVar21 = -(uint)(fVar32 < DAT_1467f06f0);
            uVar17 = -(uint)(fVar38 < fRam00000001467f06f4);
            uVar16 = -(uint)(fVar41 < fRam00000001467f06f8);
            uVar27 = -(uint)(fVar39 < fRam00000001467f06fc);
            auVar37._0_4_ = (uint)fVar32 & uVar21;
            auVar37._4_4_ = (uint)fVar38 & uVar17;
            auVar37._8_4_ = (uint)fVar41 & uVar16;
            auVar37._12_4_ = (uint)fVar39 & uVar27;
            auVar30._0_4_ = ~uVar21 & (uint)DAT_1467f06f0;
            auVar30._4_4_ = ~uVar17 & (uint)fRam00000001467f06f4;
            auVar30._8_4_ = ~uVar16 & (uint)fRam00000001467f06f8;
            auVar30._12_4_ = ~uVar27 & (uint)fRam00000001467f06fc;
            auVar43 = maxps(ZEXT816(0),auVar37 | auVar30);
            fVar32 = (fVar70 - auVar43._0_4_ * (float)local_248._0_4_) + auVar34._0_4_ * fVar74;
            fVar38 = (fVar71 - auVar43._4_4_ * (float)local_248._4_4_) + auVar34._4_4_ * fVar75;
            fVar39 = (fVar72 - auVar43._8_4_ * (float)local_248._8_4_) + auVar34._8_4_ * fVar76;
            auVar45._0_4_ = *param_4 * *param_4;
            auVar45._4_4_ = param_4[1] * param_4[1];
            auVar45._8_4_ = param_4[2] * param_4[2];
            auVar45._12_4_ = param_4[3] * param_4[3];
            lVar24 = local_280;
            local_1f8 = fVar77;
            fStack_1f4 = fVar78;
            fStack_1f0 = fVar79;
            fStack_1ec = fVar80;
            local_138 = fVar73;
            fStack_134 = fVar73;
            fStack_130 = fVar73;
            fStack_12c = fVar73;
            local_128 = local_208;
            fStack_124 = fStack_204;
            fStack_120 = fStack_200;
            fStack_11c = fStack_1fc;
            if (fVar38 * fVar38 + fVar32 * fVar32 + fVar39 * fVar39 < auVar45._0_4_) {
              if ((piVar15[2] == -1) || ((*(byte *)(piVar15 + 4) & 0x20) != 0)) {
                bVar20 = false;
                bVar7 = false;
              }
              else {
                bVar20 = true;
                bVar7 = true;
              }
              if (((*(byte *)(piVar15 + 4) & 0x10) != 0) &&
                 (bVar7 = bVar20, (*(byte *)(param_6 + 0x4d) & 2) != 0)) {
                bVar7 = false;
              }
              bVar20 = false;
              if (*(char *)(param_6 + 0x4e) != '\0') {
                auVar45._8_4_ = (param_3[1] * fVar74 - fVar75 * *param_3) * (float)local_248._8_4_;
                auVar45._4_4_ = auVar45._8_4_;
                auVar45._0_4_ = auVar45._8_4_;
                auVar45._12_4_ = auVar45._8_4_;
                bVar20 = (*param_3 * fVar76 - fVar74 * param_3[2]) * (float)local_248._4_4_ +
                         (param_3[2] * fVar75 - fVar76 * param_3[1]) * (float)local_248._0_4_ +
                         auVar45._8_4_ <= 0.0;
                if ((*(byte *)(piVar15 + 4) & 0x10) != 0) {
                  bVar20 = (*(byte *)(param_6 + 0x4d) & 0x12) == 0 && bVar20;
                }
              }
              if (bVar7) {
                if ((!bVar20) &&
                   (plVar3 = *(longlong **)(param_6 + 0x40), plVar3 != (longlong *)0x0)) {
                  local_198 = *(undefined8 *)param_1;
                  uStack_190 = *(undefined8 *)(param_1 + 2);
                  local_168 = *(undefined8 *)param_2;
                  uStack_160 = *(undefined8 *)(param_2 + 2);
                  local_188 = (uVar9 >> 0x16) << 0x16 | uVar22;
                  local_1b8[0] = 0xffffffff;
                  local_178 = local_220;
                  local_248._8_8_ = param_6 + 0x28;
                  local_248._0_8_ = param_5;
                  local_238 = local_1b8;
                  local_1b0 = 0;
                  local_1a8 = 0;
                  local_230 = 0x22;
                  local_180 = piVar15;
                  cVar8 = (**(code **)(*plVar3 + 0x30))(plVar3,local_248);
                  if (cVar8 == '\0') goto LAB_143856fcf;
                }
                lVar26 = local_268;
                lVar24 = local_280;
                if ((*(byte *)(piVar15 + 4) & 0x10) == 0) {
                  uVar21 = piVar15[3];
                  if (((*(byte *)(piVar15 + 4) & 0x40) == 0) && (uVar21 != 0xffffffff)) {
                    uVar21 = *(int *)(*(longlong *)(local_268 + 0x18) + 0x17c) << 0x16 |
                             uVar21 & 0x3fffff;
                  }
                  uVar16 = local_278 - 1;
                  uVar17 = local_278;
                  if (0 < (int)uVar16) {
                    uVar17 = uVar21 * -0x61c8864f;
                    uVar18 = (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                             uVar21 * -0x4f000000) & uVar16;
                    uVar27 = *(uint *)(local_280 + (longlong)(int)uVar18 * 4);
                    while ((uVar17 = local_278, uVar27 != 0xffffffff &&
                           (uVar17 = uVar18, uVar27 != uVar21))) {
                      uVar18 = uVar18 + 1 & uVar16;
                      uVar27 = *(uint *)(local_280 + (longlong)(int)uVar18 * 4);
                    }
                  }
                  if ((int)uVar16 < (int)uVar17) {
                    if (local_2a0 == (local_29c & 0x3fffffff)) goto LAB_143857216;
                    uVar12 = FUN_143703a50();
                    if (local_2a0 == (local_29c & 0x3fffffff)) {
                      FUN_14370c460(uVar12,&local_2a8,4);
                    }
                    *(uint *)(local_2a8 + (longlong)(int)local_2a0 * 4) = uVar21;
                    local_2a0 = local_2a0 + 1;
                    lVar24 = local_280;
                  }
                }
              }
              else {
                lVar26 = local_268;
                if (!bVar20) {
LAB_143856fcf:
                  local_248._4_4_ = fStack_134;
                  local_248._0_4_ = local_138;
                  local_248._12_4_ = fStack_12c;
                  local_248._8_4_ = fStack_130;
                  iVar10 = FUN_143859720(&local_1e8,&local_1f8,&local_208,param_4,local_248);
                  fVar39 = fStack_1d0;
                  fVar38 = fStack_1d4;
                  fVar32 = local_1d8;
                  lVar24 = local_280;
                  lVar26 = local_268;
                  fVar73 = fStack_1cc;
                  local_1d8 = fVar32;
                  fStack_1d4 = fVar38;
                  fStack_1d0 = fVar39;
                  if (iVar10 != 0) {
                    local_118 = *param_1;
                    fStack_114 = param_1[1];
                    fStack_110 = param_1[2];
                    fStack_10c = param_1[3];
                    fVar73 = *param_2;
                    fVar40 = param_2[1];
                    fVar41 = param_2[2];
                    if (*(char *)(param_6 + 0x49) != '\0') {
                      fVar42 = *param_3;
                      fVar47 = param_3[1];
                      fVar48 = param_3[2];
                      fVar49 = param_3[3];
                      fVar50 = fVar42 * local_118;
                      fVar52 = fVar47 * fStack_114;
                      fVar54 = fVar48 * fStack_110;
                      fVar51 = fVar42 * fVar73;
                      fVar53 = fVar47 * fVar40;
                      fVar55 = fVar48 * fVar41;
                      local_118 = local_118 - (fVar52 + fVar50 + fVar54) * fVar42;
                      fStack_114 = fStack_114 - (fVar52 + fVar50 + fVar54) * fVar47;
                      fStack_110 = fStack_110 - (fVar52 + fVar50 + fVar54) * fVar48;
                      fStack_10c = fStack_10c - (fVar52 + fVar50 + fVar54) * fVar49;
                      fVar50 = fVar42 * fVar77;
                      fVar52 = fVar47 * fVar78;
                      fVar54 = fVar48 * fVar79;
                      fVar73 = fVar73 - (fVar53 + fVar51 + fVar55) * fVar42;
                      fVar40 = fVar40 - (fVar53 + fVar51 + fVar55) * fVar47;
                      fVar41 = fVar41 - (fVar53 + fVar51 + fVar55) * fVar48;
                      fVar51 = fVar42 * local_128;
                      fVar53 = fVar47 * fStack_124;
                      fVar55 = fVar48 * fStack_120;
                      local_1f8 = fVar77 - (fVar52 + fVar50 + fVar54) * fVar42;
                      fStack_1f4 = fVar78 - (fVar52 + fVar50 + fVar54) * fVar47;
                      fStack_1f0 = fVar79 - (fVar52 + fVar50 + fVar54) * fVar48;
                      fStack_1ec = fVar80 - (fVar52 + fVar50 + fVar54) * fVar49;
                      auVar45._0_4_ = (fVar53 + fVar51 + fVar55) * fVar42;
                      auVar45._4_4_ = (fVar53 + fVar51 + fVar55) * fVar47;
                      auVar45._8_4_ = (fVar53 + fVar51 + fVar55) * fVar48;
                      auVar45._12_4_ = (fVar53 + fVar51 + fVar55) * fVar49;
                      local_208 = local_128 - auVar45._0_4_;
                      fStack_204 = fStack_124 - auVar45._4_4_;
                      fStack_200 = fStack_120 - auVar45._8_4_;
                      fStack_1fc = fStack_11c - auVar45._12_4_;
                    }
                    local_108 = (float)(~-(uint)(fVar73 - local_118 == 0.0) &
                                       (uint)(fVar73 - local_118));
                    fStack_104 = (float)(~-(uint)(fVar40 - fStack_114 == 0.0) &
                                        (uint)(fVar40 - fStack_114));
                    fStack_100 = (float)(~-(uint)(fVar41 - fStack_110 == 0.0) &
                                        (uint)(fVar41 - fStack_110));
                    fStack_fc = (float)(~-(uint)(fStack_1cc == 0.0) & (uint)fStack_1cc);
                    auVar4._4_4_ = fStack_104;
                    auVar4._0_4_ = local_108;
                    auVar4._8_4_ = fStack_100;
                    auVar4._12_4_ = fStack_fc;
                    auVar43 = rcpps(auVar45,auVar4);
                    auVar31._0_8_ =
                         CONCAT44(-(uint)(fStack_104 == 0.0),-(uint)(local_108 == 0.0)) &
                         0x7f7fffee7f7fffee;
                    auVar31._8_4_ = -(uint)(fStack_100 == 0.0) & 0x7f7fffee;
                    auVar31._12_4_ = -(uint)(fStack_fc == 0.0) & 0x7f7fffee;
                    local_f8._0_4_ =
                         ~-(uint)(local_108 == 0.0) &
                         (uint)((2.0 - local_108 * auVar43._0_4_) * auVar43._0_4_);
                    local_f8._4_4_ =
                         ~-(uint)(fStack_104 == 0.0) &
                         (uint)((2.0 - fStack_104 * auVar43._4_4_) * auVar43._4_4_);
                    local_f8._8_4_ =
                         ~-(uint)(fStack_100 == 0.0) &
                         (uint)((2.0 - fStack_100 * auVar43._8_4_) * auVar43._8_4_);
                    local_f8._12_4_ =
                         ~-(uint)(fStack_fc == 0.0) &
                         (uint)((2.0 - fStack_fc * auVar43._12_4_) * auVar43._12_4_);
                    local_f8 = local_f8 | auVar31;
                    if (0.0 < fStack_104 * fStack_104 + local_108 * local_108 +
                              fStack_100 * fStack_100) {
                      FUN_143859720(&local_118,&local_1f8,&local_208);
                    }
                    local_288 = 1;
                    cVar25 = bVar7 + '\x04';
                    fStack_1cc = (float)local_248._12_4_;
                    lVar24 = local_280;
                    lVar26 = local_268;
                    fVar73 = (float)local_248._12_4_;
                    local_1d8 = fVar32;
                    fStack_1d4 = fVar38;
                    fStack_1d0 = fVar39;
                    if (*(char *)(param_6 + 0x4c) == '\0') goto LAB_143857223;
                  }
                }
              }
            }
          }
          uVar17 = puVar13[1];
          if (((int)uVar22 < (int)uVar17) ||
             (uVar21 = (uint)*(short *)((longlong)puVar13 + 10),
             (int)((uVar21 - 1) + uVar17) <= (int)uVar22)) {
            uVar21 = (uint)*(short *)((longlong)puVar13 + 10);
            if (uVar22 == (uVar21 - 1) + uVar17) {
              uVar22 = *puVar13;
            }
            else if (((int)uVar22 < (int)*puVar13) ||
                    ((int)((*puVar13 - 1) + (int)(short)puVar13[2]) <= (int)uVar22)) {
              uVar22 = 0xffffffff;
            }
            else {
              uVar22 = uVar22 + 1;
            }
          }
          else {
            uVar22 = uVar22 + 1;
          }
        }
      }
    } while (local_2a0 != 0);
    if (local_288 != 0) {
LAB_143857223:
      *param_8 = fVar73;
      param_8[1] = fVar73;
      param_8[2] = fVar73;
      param_8[3] = fVar73;
    }
    uVar12 = FUN_143703a50();
    local_278 = 0;
    if (-1 < (int)local_274) {
      FUN_143702e10(uVar12,local_280,4,local_274 & 0x3fffffff);
    }
    local_280 = 0;
    local_274 = 0x80000000;
    pvVar11 = TlsGetValue(DAT_146b7bf70);
    lVar24 = local_260;
    if (pvVar11 == (LPVOID)0x0) {
      pvVar11 = DAT_146b7bf68;
    }
    uVar9 = local_258 + 0x7f & 0xffffff80;
    if (((*(int *)((longlong)pvVar11 + 0x10) < (int)uVar9) ||
        ((int)uVar9 + local_260 != *(longlong *)((longlong)pvVar11 + 0x18))) ||
       (*(longlong *)((longlong)pvVar11 + 0x28) == local_260)) {
      FUN_143713ff0(pvVar11,local_260);
    }
    else {
      *(longlong *)((longlong)pvVar11 + 0x18) = local_260;
    }
    uVar12 = FUN_143703a50();
    if (-1 < (int)local_254) {
      FUN_143702e10(uVar12,lVar24,1,local_254 & 0x3fffffff);
    }
    iVar10 = local_290;
    lVar24 = local_298;
    if (local_298 == local_2a8) {
      local_2a0 = 0;
    }
    pvVar11 = TlsGetValue(DAT_146b7bf70);
    if (pvVar11 == (LPVOID)0x0) {
      pvVar11 = DAT_146b7bf68;
    }
    uVar9 = iVar10 * 4 + 0x7fU & 0xffffff80;
    if (((*(int *)((longlong)pvVar11 + 0x10) < (int)uVar9) ||
        ((int)uVar9 + lVar24 != *(longlong *)((longlong)pvVar11 + 0x18))) ||
       (*(longlong *)((longlong)pvVar11 + 0x28) == lVar24)) {
      FUN_143713ff0(pvVar11,lVar24);
    }
    else {
      *(longlong *)((longlong)pvVar11 + 0x18) = lVar24;
    }
    uVar12 = FUN_143703a50();
    local_2a0 = 0;
    if (-1 < (int)local_29c) {
      FUN_143702e10(uVar12,local_2a8,4,local_29c & 0x3fffffff);
    }
    local_2a8 = 0;
    local_29c = 0x80000000;
    pvVar11 = local_218;
  }
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d750(pvVar11,&DAT_145b8eda0);
  }
  return cVar25;
}



// FUNCTION 143857430 FUN_143857430 body=228 status=ok
// SIG undefined FUN_143857430(void)

bool FUN_143857430(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  
  fVar1 = *param_7;
  fVar2 = param_7[1];
  fVar3 = param_7[2];
  fVar4 = param_7[3];
  fVar5 = *param_9;
  fVar6 = param_9[1];
  fVar7 = param_9[2];
  fVar8 = param_9[3];
  auVar14._4_4_ = -(uint)(fVar6 <= fVar2);
  auVar14._0_4_ = -(uint)(fVar5 <= fVar1);
  auVar14._8_4_ = -(uint)(fVar7 <= fVar3);
  auVar14._12_4_ = -(uint)(fVar8 <= fVar4);
  fVar18 = *param_6;
  fVar20 = param_6[1];
  fVar21 = param_6[2];
  fVar22 = param_6[3];
  auVar15._0_4_ = -(uint)(fVar18 <= *param_8 && fVar5 <= fVar1);
  auVar15._4_4_ = -(uint)(fVar20 <= param_8[1] && fVar6 <= fVar2);
  auVar15._8_4_ = -(uint)(fVar21 <= param_8[2] && fVar7 <= fVar3);
  auVar15._12_4_ = -(uint)(fVar22 <= param_8[3] && fVar8 <= fVar4);
  if ((*(byte *)(param_1 + 0x4d) & 0x10) != 0) {
    auVar14._0_4_ = -(uint)(fVar5 <= fVar18 && fVar1 <= *param_8);
    auVar14._4_4_ = -(uint)(fVar6 <= fVar20 && fVar2 <= param_8[1]);
    auVar14._8_4_ = -(uint)(fVar3 <= param_8[2] && fVar7 <= fVar21);
    auVar14._12_4_ = -(uint)(fVar8 <= fVar22 && fVar4 <= param_8[3]);
    auVar15 = auVar15 | auVar14;
  }
  iVar9 = movmskps((int)param_8,auVar15);
  if (iVar9 != 0) {
    auVar16._0_4_ = fVar18 - fVar1;
    auVar16._4_4_ = fVar20 - fVar2;
    auVar16._8_4_ = fVar21 - fVar3;
    auVar16._12_4_ = fVar22 - fVar4;
    auVar14 = rcpps(auVar14,auVar16);
    fVar18 = (2.0 - auVar16._0_4_ * auVar14._0_4_) * auVar14._0_4_ * fVar18;
    fVar20 = (2.0 - auVar16._4_4_ * auVar14._4_4_) * auVar14._4_4_ * fVar20;
    fVar21 = (2.0 - auVar16._8_4_ * auVar14._8_4_) * auVar14._8_4_ * fVar21;
    fVar22 = (2.0 - auVar16._12_4_ * auVar14._12_4_) * auVar14._12_4_ * fVar22;
    uVar10 = -(uint)(fVar18 < DAT_1467f06f0);
    uVar11 = -(uint)(fVar20 < fRam00000001467f06f4);
    uVar12 = -(uint)(fVar21 < fRam00000001467f06f8);
    uVar13 = -(uint)(fVar22 < fRam00000001467f06fc);
    auVar19._0_4_ = (uint)fVar18 & uVar10;
    auVar19._4_4_ = (uint)fVar20 & uVar11;
    auVar19._8_4_ = (uint)fVar21 & uVar12;
    auVar19._12_4_ = (uint)fVar22 & uVar13;
    auVar17._0_4_ = ~uVar10 & (uint)DAT_1467f06f0;
    auVar17._4_4_ = ~uVar11 & (uint)fRam00000001467f06f4;
    auVar17._8_4_ = ~uVar12 & (uint)fRam00000001467f06f8;
    auVar17._12_4_ = ~uVar13 & (uint)fRam00000001467f06fc;
    auVar14 = maxps(ZEXT816(0),auVar19 | auVar17);
    return param_3[1] * param_2[1] + *param_3 * *param_2 + param_3[2] * param_2[2] <
           (auVar14._4_4_ * (param_5[1] - param_4[1]) + param_4[1]) * param_2[1] +
           (auVar14._0_4_ * (*param_5 - *param_4) + *param_4) * *param_2 +
           (auVar14._8_4_ * (param_5[2] - param_4[2]) + param_4[2]) * param_2[2];
  }
  return false;
}



// FUNCTION 143857520 FUN_143857520 body=7454 status=ok
// SIG undefined FUN_143857520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_143857520(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3,
                   longlong param_4,undefined1 (*param_5) [16],longlong *param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  byte bVar21;
  int iVar22;
  uint uVar23;
  LPVOID pvVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  int *piVar27;
  int *piVar28;
  float *pfVar29;
  byte bVar30;
  short sVar31;
  ulonglong uVar32;
  float *pfVar33;
  int iVar34;
  ulonglong uVar35;
  undefined1 (*pauVar36) [16];
  int iVar37;
  float *pfVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  float fVar52;
  float fVar53;
  undefined1 auVar55 [12];
  float fVar54;
  float fVar66;
  float fVar67;
  float fVar71;
  float fVar72;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar68;
  float fVar69;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar70;
  float fVar76;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar77;
  float fVar89;
  float fVar90;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar113 [16];
  undefined8 *puVar114;
  undefined4 uVar115;
  undefined4 uVar116;
  undefined8 *in_stack_fffffffffffffb88;
  float local_454;
  char local_450;
  float local_44c;
  int local_448;
  int local_444;
  undefined8 local_440;
  undefined4 local_438;
  int local_430;
  int local_42c;
  uint local_428;
  int local_424;
  int local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  longlong local_3f8;
  uint local_3f0;
  uint local_3ec;
  longlong local_3e8;
  int local_3e0;
  int local_3d8;
  int local_3d4;
  undefined8 local_3d0;
  uint local_3c8;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  int local_3a8;
  uint local_3a4;
  int *local_3a0;
  ulonglong local_398;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378 [8];
  float fStack_370;
  float fStack_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined1 local_348 [8];
  float fStack_340;
  float fStack_33c;
  undefined8 local_338;
  undefined8 uStack_330;
  uint *local_328;
  byte local_320;
  float local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  uint local_2f8 [2];
  int *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  uint local_2c8;
  int *local_2c0;
  undefined8 local_2b8;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  uint local_298;
  int *local_290;
  undefined8 local_288;
  undefined1 local_278 [8];
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  float *local_240;
  undefined8 local_238 [2];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
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
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [176];
  
  uVar23 = *(uint *)param_5[2];
  if (uVar23 == 0xffffffff) {
    return 0.0;
  }
  if ((*(float *)param_5[3] <= 0.0) || (*(float *)(param_5[2] + 8) * 0.5 <= *(float *)param_5[3])) {
    uVar39 = 0xffffffff;
    fVar106 = *(float *)param_5[1];
    fVar107 = *(float *)(param_5[1] + 4);
    fVar108 = *(float *)(param_5[1] + 8);
    fVar105 = *(float *)(param_5[1] + 0xc);
    auVar78 = *param_1;
    fVar112 = auVar78._0_4_;
    local_408 = fVar106;
    fStack_404 = fVar107;
    fStack_400 = fVar108;
    fStack_3fc = fVar105;
    _local_348 = auVar78;
    _local_278 = auVar78;
    if (param_5[4][0xb] != '\0') {
      local_44c = (float)(uVar23 & 0x3fffff);
      FUN_143852420(&local_1c8,
                    *(undefined8 *)
                     ((ulonglong)(uVar23 >> 0x16) * 0x100 + *(longlong *)(param_4 + 0x38)),
                    &local_44c,&local_408);
    }
    local_450 = 0.0 < *(float *)param_5[3];
    cVar1 = param_5[4][10];
    local_240 = (float *)(param_5[2] + 8);
    local_3c8 = 4;
    local_3d0 = 0xffffffffffffffff;
    fVar77 = *(float *)*param_5;
    fVar89 = *(float *)(*param_5 + 4);
    fVar90 = *(float *)(*param_5 + 8);
    fVar54 = *(float *)(*param_5 + 0xc);
    _local_378 = *param_5;
    local_1f8 = auVar78._4_8_;
    fStack_1f0 = fVar112;
    fStack_1ec = (float)auVar78._12_4_;
    fVar110 = auVar78._4_4_ * local_408 - fStack_404 * fVar112;
    fVar111 = auVar78._8_4_ * fStack_404 - fStack_400 * auVar78._4_4_;
    fVar112 = fVar112 * fStack_400 - local_408 * auVar78._8_4_;
    fVar52 = fVar111 * fVar111;
    fVar66 = fVar112 * fVar112;
    fVar71 = fVar110 * fVar110;
    fVar98 = fVar66 + fVar52 + fVar71;
    fVar99 = fVar66 + fVar52 + fVar71;
    fVar101 = fVar66 + fVar52 + fVar71;
    auVar78._4_4_ = fVar99;
    auVar78._0_4_ = fVar98;
    auVar78._8_4_ = fVar101;
    auVar78._12_4_ = fVar66 + fVar52 + fVar71;
    auVar78 = rsqrtps(_local_1f8,auVar78);
    fVar52 = auVar78._0_4_;
    fVar66 = auVar78._4_4_;
    fVar71 = auVar78._8_4_;
    fVar111 = fVar111 * (float)(~-(uint)(fVar98 <= 0.0) &
                               (uint)((3.0 - fVar52 * fVar98 * fVar52) * fVar52 * 0.5));
    fVar112 = fVar112 * (float)(~-(uint)(fVar99 <= 0.0) &
                               (uint)((3.0 - fVar66 * fVar99 * fVar66) * fVar66 * 0.5));
    fVar110 = fVar110 * (float)(~-(uint)(fVar101 <= 0.0) &
                               (uint)((3.0 - fVar71 * fVar101 * fVar71) * fVar71 * 0.5));
    fVar52 = 0.0 - (*(float *)(*param_5 + 4) * fVar112 + *(float *)*param_5 * fVar111 +
                   *(float *)(*param_5 + 8) * fVar110);
    local_44c = *local_240 * 0.5;
    local_128 = *(float *)(param_5[3] + 4);
    fStack_13c = *(float *)param_5[3];
    local_148 = fStack_13c - local_44c;
    fStack_144 = fStack_13c - local_44c;
    fStack_140 = fStack_13c - local_44c;
    fStack_13c = fStack_13c - local_44c;
    local_158 = local_148 * local_148;
    fStack_154 = fStack_144 * fStack_144;
    fStack_150 = fStack_140 * fStack_140;
    fStack_14c = fStack_13c * fStack_13c;
    local_368 = CONCAT44(fRam00000001467f06e4,_DAT_1467f06e0);
    uStack_360 = CONCAT44(DAT_1467f06ec,fRam00000001467f06e8);
    if (cVar1 == '\0') {
      local_368 = CONCAT44(0.0 - local_44c,0.0 - local_44c);
      uStack_360 = CONCAT44(0.0 - local_44c,0.0 - local_44c);
    }
    fVar66 = (float)local_368;
    fVar71 = local_368._4_4_;
    fVar98 = (float)uStack_360;
    fVar99 = uStack_360._4_4_;
    local_1c8 = (float)local_368;
    fStack_1c4 = local_368._4_4_;
    fStack_1c0 = (float)uStack_360;
    fStack_1bc = uStack_360._4_4_;
    local_188 = (float)local_368;
    fStack_184 = local_368._4_4_;
    fStack_180 = (float)uStack_360;
    fStack_17c = uStack_360._4_4_;
    if (cVar1 == '\0') {
      local_1b8 = local_44c;
      fStack_1b4 = local_44c;
      fStack_1b0 = local_44c;
      fStack_1ac = local_44c;
    }
    else {
      local_1a8 = CONCAT44(fRam00000001467f06e4,_DAT_1467f06e0);
      uStack_1a0 = CONCAT44(DAT_1467f06ec,fRam00000001467f06e8);
    }
    local_388 = 0;
    uStack_380 = 0;
    local_3f8 = 0;
    fVar101 = *(float *)*param_1 * fVar106;
    fVar67 = *(float *)(*param_1 + 4) * fVar107;
    fVar72 = *(float *)(*param_1 + 8) * fVar108;
    pfVar38 = &local_1b8;
    if (cVar1 != '\0') {
      pfVar38 = (float *)&local_1a8;
    }
    local_3f0 = 0;
    local_3ec = 0x80000000;
    local_3e0 = 8;
    local_198 = *(undefined8 *)pfVar38;
    uStack_190 = *(undefined8 *)(pfVar38 + 2);
    auVar79._0_4_ = (fVar67 + fVar101 + fVar72) * fVar106;
    auVar79._4_4_ = (fVar67 + fVar101 + fVar72) * fVar107;
    auVar79._8_4_ = (fVar67 + fVar101 + fVar72) * fVar108;
    auVar79._12_4_ = (fVar67 + fVar101 + fVar72) * fVar105;
    fVar106 = *(float *)*param_1 - auVar79._0_4_;
    fVar107 = *(float *)(*param_1 + 4) - auVar79._4_4_;
    fVar108 = *(float *)(*param_1 + 8) - auVar79._8_4_;
    fStack_fc = *(float *)(*param_1 + 0xc) - auVar79._12_4_;
    local_1e8 = local_44c;
    fStack_1e4 = local_44c;
    fStack_1e0 = local_44c;
    fStack_1dc = local_44c;
    fStack_124 = local_128;
    fStack_120 = local_128;
    fStack_11c = local_128;
    local_108 = fVar106;
    fStack_104 = fVar107;
    fStack_100 = fVar108;
    pvVar24 = TlsGetValue(DAT_146b7bf70);
    if (pvVar24 == (LPVOID)0x0) {
      pvVar24 = DAT_146b7bf68;
    }
    local_3e8 = *(longlong *)((longlong)pvVar24 + 0x18);
    if ((*(int *)((longlong)pvVar24 + 0x10) < 0x80) ||
       (*(ulonglong *)((longlong)pvVar24 + 0x20) < local_3e8 + 0x80U)) {
      local_3e8 = FUN_1437138c0(pvVar24);
    }
    else {
      *(ulonglong *)((longlong)pvVar24 + 0x18) = local_3e8 + 0x80U;
    }
    local_3ec = 0x80000008;
    local_3f8 = local_3e8;
    FUN_143703a50();
    cVar1 = param_5[4][0xc];
    fVar106 = *(float *)*param_5 * fVar106;
    fVar107 = *(float *)(*param_5 + 4) * fVar107;
    fVar108 = *(float *)(*param_5 + 8) * fVar108;
    local_3f0 = 0;
    auVar113._0_4_ = fVar107 + fVar106 + fVar108;
    auVar113._4_4_ = fVar107 + fVar106 + fVar108;
    auVar113._8_4_ = fVar107 + fVar106 + fVar108;
    auVar113._12_4_ = fVar107 + fVar106 + fVar108;
    if (((char)param_6[6] == '\0') ||
       ((int)param_6[5] < (int)(*(uint *)((longlong)param_6 + 0x2c) & 0x3fffffff))) {
      uVar25 = FUN_143703a50();
      if (*(uint *)(param_6 + 5) == (*(uint *)((longlong)param_6 + 0x2c) & 0x3fffffff)) {
        FUN_14370c460(uVar25,param_6 + 4,0x10);
      }
      uVar25 = *(undefined8 *)(*param_5 + 8);
      puVar26 = (undefined8 *)((longlong)(int)param_6[5] * 0x10 + param_6[4]);
      *puVar26 = *(undefined8 *)*param_5;
      puVar26[1] = uVar25;
      *(int *)(param_6 + 5) = (int)param_6[5] + 1;
    }
    local_42c = 0;
    thunk_FUN_143719c70(0x7fc8bdeb);
    local_2d8 = *(undefined8 *)*param_5;
    uStack_2d0 = *(undefined8 *)(*param_5 + 8);
    local_398 = (ulonglong)(uVar23 >> 0x16);
    lVar2 = *(longlong *)(local_398 * 0x100 + *(longlong *)(param_4 + 0x38));
    fVar106 = DAT_1467f06f0;
    fVar107 = fRam00000001467f06f4;
    fVar108 = fRam00000001467f06f8;
    fVar105 = fRam00000001467f06fc;
    while (DAT_1467f06f0 = fVar106, fRam00000001467f06f4 = fVar107, fRam00000001467f06f8 = fVar108,
          fRam00000001467f06fc = fVar105, lVar2 != 0) {
      local_288 = 0;
      local_290 = (int *)0x0;
      local_298 = 0xffffffff;
      local_2b8 = 0;
      local_2c0 = (int *)0x0;
      local_2c8 = 0xffffffff;
      local_2e8 = 0;
      local_2f0 = (int *)0x0;
      local_2f8[0] = 0xffffffff;
      fVar70 = 0.0;
      fVar72 = 0.0;
      fVar67 = 0.0;
      fVar101 = 0.0;
      local_268 = *(undefined8 *)*param_2;
      uStack_260 = *(undefined8 *)(*param_2 + 8);
      local_440 = 0xffffffffffffffff;
      local_438 = 4;
      lVar3 = *(longlong *)(lVar2 + 0x18);
      uVar41 = 0xffffffff;
      local_358 = 0;
      uVar40 = 0xffffffff;
      pfVar29 = (float *)(lVar3 + 0x140);
      puVar26 = (undefined8 *)(lVar3 + 0x120);
      in_stack_fffffffffffffb88 =
           (undefined8 *)
           (CONCAT44((int)((ulonglong)in_stack_fffffffffffffb88 >> 0x20),uVar23) &
           0xffffffff003fffff);
      local_454 = 4.2039e-45;
      local_3b8 = fVar77;
      fStack_3b4 = fVar89;
      fStack_3b0 = fVar90;
      fStack_3ac = fVar54;
      local_258 = local_268;
      uStack_250 = uStack_260;
      local_228 = local_268;
      uStack_220 = uStack_260;
      local_218 = local_268;
      uStack_210 = uStack_260;
      local_3a0 = (int *)FUN_14384fb00(*(undefined8 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x20),
                                       lVar3 + 0xb0,lVar3 + 0xd0,*(undefined8 *)(lVar3 + 0x48),
                                       puVar26,pfVar29,lVar3 + 0x90,in_stack_fffffffffffffb88,
                                       *(undefined4 *)(lVar3 + 0x50),&local_248);
      local_288 = local_248;
      local_298 = uVar23;
      local_290 = local_3a0;
      if (*(longlong **)param_5[4] == (longlong *)0x0) {
LAB_143857b14:
        uVar115 = (undefined4)((ulonglong)puVar26 >> 0x20);
        uVar116 = (undefined4)((ulonglong)pfVar29 >> 0x20);
        if (uVar23 == param_3) {
          local_258 = *(undefined8 *)*param_2;
          local_218 = *(undefined8 *)*param_2;
          local_268 = *(undefined8 *)*param_2;
          local_228 = *(undefined8 *)*param_2;
          pfVar29 = (float *)(*param_2 + 8);
          fVar54 = *(float *)(*param_2 + 0xc);
          uStack_250 = *(undefined8 *)pfVar29;
          uStack_210 = *(undefined8 *)pfVar29;
          uStack_260 = *(undefined8 *)pfVar29;
          uStack_220 = *(undefined8 *)pfVar29;
          _local_378 = *param_2;
          fVar71 = fVar77;
          fVar98 = fVar89;
          fVar99 = fVar90;
          fVar77 = *(float *)*param_2;
          fVar89 = *(float *)(*param_2 + 4);
          fVar90 = *pfVar29;
          fVar66 = 1.26117e-44;
        }
        else {
          uVar35 = 1;
          local_428 = 1;
          bVar18 = false;
          local_424 = 1;
          bVar19 = false;
          bVar30 = (byte)param_5[4][0xd] >> 2 & 1;
          local_420 = 0;
          iVar22 = 1;
          if (((param_5[4][0xd] & 8) == 0) && (bVar30 != 0)) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
          }
          iVar34 = 0;
          if (bVar30 != 0) {
            iVar22 = 2;
            local_424 = 2;
            iVar34 = 0;
            if (!bVar17) {
              uVar35 = 0xffffffff;
              iVar34 = 1;
              local_428 = 0xffffffff;
              local_420 = 1;
            }
          }
          local_44c = 0.0;
          piVar28 = local_3a0;
          pauVar36 = param_5;
          do {
            uVar115 = (undefined4)((ulonglong)puVar26 >> 0x20);
            uVar116 = (undefined4)((ulonglong)pfVar29 >> 0x20);
            iVar37 = 0;
            if ((uVar40 != 0xffffffff) && (bVar18)) break;
            if (iVar34 == 1) {
              sVar31 = *(short *)((longlong)piVar28 + 10);
              piVar27 = piVar28 + 1;
            }
            else {
              sVar31 = (short)piVar28[2];
              piVar27 = piVar28;
            }
            local_3a8 = (int)sVar31;
            iVar34 = *piVar27;
            local_430 = iVar34;
            if (0 < sVar31) {
              local_3a4 = (int)local_398 << 0x16;
              do {
                uVar41 = iVar37 + iVar34;
                if ((local_3a4 | uVar41) != uVar39) {
                  lVar3 = *(longlong *)(lVar2 + 0x18);
                  pfVar29 = (float *)(lVar3 + 0x150);
                  puVar26 = (undefined8 *)(lVar3 + 0x130);
                  in_stack_fffffffffffffb88 =
                       (undefined8 *)
                       CONCAT44((int)((ulonglong)in_stack_fffffffffffffb88 >> 0x20),uVar41);
                  piVar28 = (int *)FUN_14384fa30(*(undefined8 *)(lVar3 + 0x28),
                                                 *(undefined4 *)(lVar3 + 0x30),lVar3 + 0xc0,
                                                 lVar3 + 0xe0,*(undefined8 *)(lVar3 + 0x58),puVar26,
                                                 pfVar29,lVar3 + 0x70,in_stack_fffffffffffffb88,
                                                 *(undefined4 *)(lVar3 + 0x60),local_238);
                  lVar3 = *(longlong *)(lVar2 + 0x18);
                  iVar22 = *piVar28;
                  iVar34 = *(int *)(lVar3 + 0x40);
                  if (iVar22 < iVar34) {
                    pfVar33 = (float *)((longlong)iVar22 * 0x10 + *(longlong *)(lVar3 + 0x38));
                  }
                  else {
                    pfVar33 = (float *)((longlong)(iVar22 - iVar34) * 0x10 +
                                       *(longlong *)(lVar3 + 0xf0));
                  }
                  iVar22 = piVar28[1];
                  fVar100 = *pfVar33;
                  fVar76 = pfVar33[1];
                  fVar102 = pfVar33[2];
                  if (iVar22 < iVar34) {
                    pfVar33 = (float *)((longlong)iVar22 * 0x10 + *(longlong *)(lVar3 + 0x38));
                  }
                  else {
                    pfVar33 = (float *)((longlong)(iVar22 - iVar34) * 0x10 +
                                       *(longlong *)(lVar3 + 0xf0));
                  }
                  fVar103 = *pfVar33;
                  fVar104 = pfVar33[1];
                  fVar53 = pfVar33[2];
                  bVar30 = *(byte *)(piVar28 + 4);
                  auVar79._0_4_ = fVar102 * *(float *)(lVar2 + 0x60);
                  auVar79._4_4_ = fVar102 * *(float *)(lVar2 + 100);
                  auVar79._8_4_ = fVar102 * *(float *)(lVar2 + 0x68);
                  auVar79._12_4_ = fVar102 * *(float *)(lVar2 + 0x6c);
                  fVar102 = fVar76 * *(float *)(lVar2 + 0x50) + fVar100 * *(float *)(lVar2 + 0x40) +
                            auVar79._0_4_ + *(float *)(lVar2 + 0x70);
                  fVar73 = fVar76 * *(float *)(lVar2 + 0x54) + fVar100 * *(float *)(lVar2 + 0x44) +
                           auVar79._4_4_ + *(float *)(lVar2 + 0x74);
                  fVar68 = fVar76 * *(float *)(lVar2 + 0x58) + fVar100 * *(float *)(lVar2 + 0x48) +
                           auVar79._8_4_ + *(float *)(lVar2 + 0x78);
                  fVar100 = fVar76 * *(float *)(lVar2 + 0x5c) + fVar100 * *(float *)(lVar2 + 0x4c) +
                            auVar79._12_4_ + *(float *)(lVar2 + 0x7c);
                  local_338 = CONCAT44(fVar73,fVar102);
                  uStack_330 = (float *)CONCAT44(fVar100,fVar68);
                  fVar76 = fVar104 * *(float *)(lVar2 + 0x50) + fVar103 * *(float *)(lVar2 + 0x40) +
                           fVar53 * *(float *)(lVar2 + 0x60) + *(float *)(lVar2 + 0x70);
                  fVar69 = fVar104 * *(float *)(lVar2 + 0x54) + fVar103 * *(float *)(lVar2 + 0x44) +
                           fVar53 * *(float *)(lVar2 + 100) + *(float *)(lVar2 + 0x74);
                  fVar74 = fVar104 * *(float *)(lVar2 + 0x58) + fVar103 * *(float *)(lVar2 + 0x48) +
                           fVar53 * *(float *)(lVar2 + 0x68) + *(float *)(lVar2 + 0x78);
                  fVar103 = fVar104 * *(float *)(lVar2 + 0x5c) + fVar103 * *(float *)(lVar2 + 0x4c)
                            + fVar53 * *(float *)(lVar2 + 0x6c) + *(float *)(lVar2 + 0x7c);
                  local_168 = fVar76;
                  fStack_164 = fVar69;
                  fStack_160 = fVar74;
                  fStack_15c = fVar103;
                  if (((bVar30 & 0x10) == 0) ||
                     (((piVar28[2] != -1 && ((bVar30 & 0x20) == 0)) ||
                      (pauVar36 = param_5, iVar34 = local_430, (param_5[4][0xd] & 3) != 0)))) {
                    fVar53 = fVar68 * fVar110 + fVar102 * fVar111;
                    fVar75 = fVar52 + fVar73 * fVar112;
                    fVar48 = fVar102 * fVar111 + fVar68 * fVar110;
                    fVar50 = fVar73 * fVar112 + fVar52;
                    fVar104 = fVar75 + fVar53;
                    fVar53 = fVar53 + fVar75;
                    fVar75 = fVar50 + fVar48;
                    fVar48 = fVar48 + fVar50;
                    local_418 = CONCAT44(fVar53,fVar104);
                    uStack_410 = CONCAT44(fVar48,fVar75);
                    fVar50 = fVar74 * fVar110 + fVar76 * fVar111;
                    fVar47 = fVar52 + fVar69 * fVar112;
                    fVar49 = fVar76 * fVar111 + fVar74 * fVar110;
                    fVar51 = fVar69 * fVar112 + fVar52;
                    fVar109 = fVar47 + fVar50;
                    fVar50 = fVar50 + fVar47;
                    fVar47 = fVar51 + fVar49;
                    fVar49 = fVar49 + fVar51;
                    local_178 = fVar109;
                    fStack_174 = fVar50;
                    fStack_170 = fVar47;
                    fStack_16c = fVar49;
                    if ((bVar30 & 0x10) == 0) {
                      auVar56._0_4_ = -(uint)(fVar104 <= fVar66 && *pfVar38 <= fVar109);
                      auVar56._4_4_ = -(uint)(fVar53 <= fVar71 && pfVar38[1] <= fVar50);
                      auVar56._8_4_ = -(uint)(fVar75 <= fVar98 && pfVar38[2] <= fVar47);
                      auVar56._12_4_ = -(uint)(fVar48 <= fVar99 && pfVar38[3] <= fVar49);
                      iVar22 = movmskps((uint)bVar30,auVar56);
                      cVar20 = iVar22 != 0;
                      pauVar36 = param_5;
                    }
                    else {
                      in_stack_fffffffffffffb88 = &local_198;
                      pfVar29 = &local_178;
                      puVar26 = &local_418;
                      pauVar36 = param_5;
                      cVar20 = FUN_143857430(param_5,local_278,&local_3b8,&local_338,&local_168,
                                             puVar26,pfVar29,&local_188,in_stack_fffffffffffffb88);
                      fVar104 = (float)local_418;
                      fVar53 = local_418._4_4_;
                      fVar75 = (float)uStack_410;
                      fVar48 = uStack_410._4_4_;
                    }
                    iVar34 = local_430;
                    if (cVar20 != '\0') {
                      auVar57._0_4_ = fVar104 - fVar109;
                      auVar57._4_4_ = fVar53 - fVar50;
                      auVar57._8_4_ = fVar75 - fVar47;
                      auVar57._12_4_ = fVar48 - fVar49;
                      auVar78 = rcpps(auVar79,auVar57);
                      fVar104 = (2.0 - auVar78._0_4_ * auVar57._0_4_) * auVar78._0_4_ * fVar104;
                      fVar53 = (2.0 - auVar78._4_4_ * auVar57._4_4_) * auVar78._4_4_ * fVar53;
                      fVar75 = (2.0 - auVar78._8_4_ * auVar57._8_4_) * auVar78._8_4_ * fVar75;
                      fVar48 = (2.0 - auVar78._12_4_ * auVar57._12_4_) * auVar78._12_4_ * fVar48;
                      uVar43 = -(uint)(fVar104 < DAT_1467f06f0);
                      uVar45 = -(uint)(fVar53 < fRam00000001467f06f4);
                      uVar42 = -(uint)(fVar75 < fRam00000001467f06f8);
                      uVar44 = -(uint)(fVar48 < fRam00000001467f06fc);
                      auVar80._0_4_ = uVar43 & (uint)fVar104;
                      auVar80._4_4_ = uVar45 & (uint)fVar53;
                      auVar80._8_4_ = uVar42 & (uint)fVar75;
                      auVar80._12_4_ = uVar44 & (uint)fVar48;
                      auVar58._0_4_ = ~uVar43 & (uint)DAT_1467f06f0;
                      auVar58._4_4_ = ~uVar45 & (uint)fRam00000001467f06f4;
                      auVar58._8_4_ = ~uVar42 & (uint)fRam00000001467f06f8;
                      auVar58._12_4_ = ~uVar44 & (uint)fRam00000001467f06fc;
                      auVar91._0_12_ = ZEXT812(0);
                      auVar91._12_4_ = 0;
                      auVar78 = maxps(auVar91,auVar58 | auVar80);
                      auVar92._0_4_ = auVar78._0_4_ * (fVar76 - fVar102) + fVar102;
                      auVar92._4_4_ = auVar78._4_4_ * (fVar69 - fVar73) + fVar73;
                      auVar92._8_4_ = auVar78._8_4_ * (fVar74 - fVar68) + fVar68;
                      auVar92._12_4_ = auVar78._12_4_ * (fVar103 - fVar100) + fVar100;
                      fVar104 = auVar92._0_4_ * local_108;
                      fVar53 = auVar92._4_4_ * fStack_104;
                      fVar75 = auVar92._8_4_ * fStack_100;
                      auVar79._0_4_ = fVar53 + fVar104 + fVar75;
                      auVar79._4_4_ = fVar53 + fVar104 + fVar75;
                      auVar79._8_4_ = fVar53 + fVar104 + fVar75;
                      auVar79._12_4_ = fVar53 + fVar104 + fVar75;
                      if (pauVar36[4][0xb] == '\0') {
                        uVar35 = 0;
                        if (auVar113._0_4_ < auVar79._0_4_) {
                          local_3f0 = 0;
                        }
                        else {
                          uVar32 = uVar35;
                          if (0 < (int)local_3f0) {
                            do {
                              if (*(uint *)(local_3f8 + uVar35 * 4) == uVar23) {
                                if ((int)uVar32 != -1) goto LAB_143857f07;
                                break;
                              }
                              uVar32 = (ulonglong)((int)uVar32 + 1);
                              uVar35 = uVar35 + 1;
                            } while ((longlong)uVar35 < (longlong)(int)local_3f0);
                          }
                          if ((local_3ec & 0x3fffffff) == local_3f0) goto LAB_143857f07;
                          *(uint *)(local_3f8 + (longlong)(int)local_3f0 * 4) = uVar23;
                          local_3f0 = local_3f0 + 1;
                        }
                      }
                      auVar113 = maxps(auVar113,auVar79);
                      if ((piVar28[2] == -1) || ((*(byte *)(piVar28 + 4) & 0x20) != 0)) {
                        bVar18 = false;
                      }
                      else {
                        bVar18 = true;
                      }
                      local_448 = *piVar28;
                      local_444 = piVar28[1];
                      local_438 = piVar28[4];
                      local_358 = local_238[0];
                      local_228 = CONCAT44(fVar73,fVar102);
                      uStack_220 = CONCAT44(fVar100,fVar68);
                      local_268 = CONCAT44(fVar73,fVar102);
                      uStack_260 = CONCAT44(fVar100,fVar68);
                      uVar40 = piVar28[2];
                      local_218 = CONCAT44(fVar69,fVar76);
                      uStack_210 = CONCAT44(fVar103,fVar74);
                      local_258 = CONCAT44(fVar69,fVar76);
                      uStack_250 = CONCAT44(fVar103,fVar74);
                      if (((*(byte *)(piVar28 + 4) & 0x40) == 0) && (uVar40 != 0xffffffff)) {
                        uVar40 = uVar40 & 0x3fffff |
                                 *(int *)(*(longlong *)(lVar2 + 0x18) + 0x17c) << 0x16;
                      }
                      uVar43 = piVar28[3];
                      if (((*(byte *)(piVar28 + 4) & 0x40) == 0) && (uVar43 != 0xffffffff)) {
                        uVar43 = uVar43 & 0x3fffff |
                                 *(int *)(*(longlong *)(lVar2 + 0x18) + 0x17c) << 0x16;
                      }
                      local_440 = CONCAT44(uVar43,uVar40);
                      fVar77 = auVar92._0_4_;
                      fVar89 = auVar92._4_4_;
                      fVar90 = auVar92._8_4_;
                      fVar54 = auVar92._12_4_;
                      uVar40 = uVar41;
                      _local_378 = auVar92;
                      break;
                    }
                  }
                }
LAB_143857f07:
                iVar37 = iVar37 + 1;
                bVar18 = bVar19;
              } while (iVar37 < local_3a8);
              uVar35 = (ulonglong)local_428;
              piVar28 = local_3a0;
              iVar22 = local_424;
              bVar19 = bVar18;
            }
            uVar115 = (undefined4)((ulonglong)puVar26 >> 0x20);
            uVar116 = (undefined4)((ulonglong)pfVar29 >> 0x20);
            iVar34 = local_420 + (int)uVar35;
            local_44c = (float)((int)local_44c + 1);
            local_420 = iVar34;
          } while ((int)local_44c < iVar22);
          if (uVar40 == 0xffffffff) {
            fVar66 = 1.4013e-45;
            fVar106 = fVar101;
            fVar107 = fVar67;
            fVar108 = fVar72;
            fVar105 = fVar70;
            goto LAB_143858056;
          }
          uVar41 = (int)local_398 << 0x16 | uVar40;
          fVar71 = local_3b8;
          fVar98 = fStack_3b4;
          fVar99 = fStack_3b0;
          fVar66 = local_454;
          if (!bVar18) {
            fVar66 = 5.60519e-45;
            if (cVar1 == '\0') goto LAB_143858056;
            puVar26 = &local_258;
            local_418 = CONCAT44(fVar107,fVar106);
            uStack_410 = CONCAT44(fVar105,fVar108);
            puVar114 = &local_268;
            FUN_143859240(&local_3b8,local_378,&local_1e8,
                          CONCAT71((int7)(uVar35 >> 8),pauVar36[4][9] != '\0'),&local_408,puVar114,
                          puVar26,&local_418);
            uVar115 = (undefined4)((ulonglong)puVar114 >> 0x20);
            uVar116 = (undefined4)((ulonglong)puVar26 >> 0x20);
            fVar71 = local_3b8;
            fVar98 = fStack_3b4;
            fVar99 = fStack_3b0;
            if ((float)local_418 < fVar106) {
              fVar106 = (float)local_418;
              fVar107 = local_418._4_4_;
              fVar108 = (float)uStack_410;
              fVar105 = uStack_410._4_4_;
            }
          }
        }
        fVar101 = (fVar71 - fVar77) * (fVar71 - fVar77);
        fVar67 = (fVar98 - fVar89) * (fVar98 - fVar89);
        fVar72 = (fVar99 - fVar90) * (fVar99 - fVar90);
        auVar94._0_4_ = fVar67 + fVar101 + fVar72;
        auVar94._4_4_ = fVar67 + fVar101 + fVar72;
        auVar94._8_4_ = fVar67 + fVar101 + fVar72;
        auVar94._12_4_ = fVar67 + fVar101 + fVar72;
        auVar78 = rsqrtps(auVar79,auVar94);
        fVar101 = auVar78._0_4_;
        fVar67 = auVar78._4_4_;
        fVar72 = auVar78._8_4_;
        fVar70 = auVar78._12_4_;
        auVar79._0_4_ = fVar101 * 0.5;
        auVar79._4_4_ = fVar67 * 0.5;
        auVar79._8_4_ = fVar72 * 0.5;
        auVar79._12_4_ = fVar70 * 0.5;
        fVar101 = (float)(~-(uint)(auVar94._0_4_ <= 0.0) &
                         (uint)((3.0 - fVar101 * auVar94._0_4_ * fVar101) * auVar79._0_4_ *
                               auVar94._0_4_));
        fVar67 = (float)(~-(uint)(auVar94._4_4_ <= 0.0) &
                        (uint)((3.0 - fVar67 * auVar94._4_4_ * fVar67) * auVar79._4_4_ *
                              auVar94._4_4_));
        fVar72 = (float)(~-(uint)(auVar94._8_4_ <= 0.0) &
                        (uint)((3.0 - fVar72 * auVar94._8_4_ * fVar72) * auVar79._8_4_ *
                              auVar94._8_4_));
        fVar70 = (float)(~-(uint)(auVar94._12_4_ <= 0.0) &
                        (uint)((3.0 - fVar70 * auVar94._12_4_ * fVar70) * auVar79._12_4_ *
                              auVar94._12_4_));
        fVar100 = fVar66;
        if (local_450 != '\0') {
          fVar66 = *(float *)*param_5;
          fVar76 = *(float *)(*param_5 + 4);
          fVar102 = *(float *)(*param_5 + 8);
          auVar55._4_4_ = fVar98;
          auVar55._0_4_ = fVar71;
          auVar55._8_4_ = fVar99;
          fVar103 = fVar77;
          fVar104 = fVar89;
          fVar53 = fVar90;
          if (param_5[4][9] != '\0') {
            fVar103 = fVar66 * local_408;
            fVar104 = fVar76 * fStack_404;
            fVar73 = fVar102 * fStack_400;
            fVar53 = fVar77 * local_408;
            fVar68 = fVar89 * fStack_404;
            fVar74 = fVar90 * fStack_400;
            fVar66 = fVar66 - (fVar104 + fVar103 + fVar73) * local_408;
            fVar76 = fVar76 - (fVar104 + fVar103 + fVar73) * fStack_404;
            fVar102 = fVar102 - (fVar104 + fVar103 + fVar73) * fStack_400;
            fVar73 = fVar71 * local_408;
            fVar69 = fVar98 * fStack_404;
            fVar75 = fVar99 * fStack_400;
            fVar103 = fVar77 - (fVar68 + fVar53 + fVar74) * local_408;
            fVar104 = fVar89 - (fVar68 + fVar53 + fVar74) * fStack_404;
            fVar53 = fVar90 - (fVar68 + fVar53 + fVar74) * fStack_400;
            auVar79._0_4_ = (fVar69 + fVar73 + fVar75) * local_408;
            auVar79._4_4_ = (fVar69 + fVar73 + fVar75) * fStack_404;
            auVar79._8_4_ = (fVar69 + fVar73 + fVar75) * fStack_400;
            auVar79._12_4_ = (fVar69 + fVar73 + fVar75) * fStack_3fc;
            auVar55._0_4_ = fVar71 - auVar79._0_4_;
            auVar55._4_4_ = fVar98 - auVar79._4_4_;
            auVar55._8_4_ = fVar99 - auVar79._8_4_;
          }
          fVar71 = auVar55._0_4_ - fVar66;
          fVar98 = auVar55._4_4_ - fVar76;
          fVar99 = auVar55._8_4_ - fVar102;
          fVar71 = fVar71 * fVar71;
          fVar98 = fVar98 * fVar98;
          fVar99 = fVar99 * fVar99;
          fVar66 = (fVar103 - fVar66) * (fVar103 - fVar66);
          fVar76 = (fVar104 - fVar76) * (fVar104 - fVar76);
          fVar102 = (fVar53 - fVar102) * (fVar53 - fVar102);
          fVar104 = fVar98 + fVar71 + fVar99;
          fVar53 = fVar98 + fVar71 + fVar99;
          fVar73 = fVar98 + fVar71 + fVar99;
          fVar99 = fVar98 + fVar71 + fVar99;
          fVar71 = fVar76 + fVar66 + fVar102;
          fVar98 = fVar76 + fVar66 + fVar102;
          fVar103 = fVar76 + fVar66 + fVar102;
          fVar102 = fVar76 + fVar66 + fVar102;
          if (local_158 < fVar71) {
            auVar12._4_4_ = fVar53;
            auVar12._0_4_ = fVar104;
            auVar12._8_4_ = fVar73;
            auVar12._12_4_ = fVar99;
            auVar78 = rsqrtps(auVar79,auVar12);
            fVar66 = auVar78._0_4_;
            fVar76 = auVar78._4_4_;
            fVar68 = auVar78._8_4_;
            fVar69 = auVar78._12_4_;
            auVar59._0_4_ = (3.0 - fVar66 * fVar104 * fVar66) * fVar66 * 0.5 * fVar104;
            auVar59._4_4_ = (3.0 - fVar76 * fVar53 * fVar76) * fVar76 * 0.5 * fVar53;
            auVar59._8_4_ = (3.0 - fVar68 * fVar73 * fVar68) * fVar68 * 0.5 * fVar73;
            auVar59._12_4_ = (3.0 - fVar69 * fVar99 * fVar69) * fVar69 * 0.5 * fVar99;
            fVar68 = (float)(~-(uint)(fVar104 <= 0.0) & (uint)auVar59._0_4_);
            fVar53 = (float)(~-(uint)(fVar53 <= 0.0) & (uint)auVar59._4_4_);
            fVar73 = (float)(~-(uint)(fVar73 <= 0.0) & (uint)auVar59._8_4_);
            fVar69 = (float)(~-(uint)(fVar99 <= 0.0) & (uint)auVar59._12_4_);
            auVar10._4_4_ = fVar98;
            auVar10._0_4_ = fVar71;
            auVar10._8_4_ = fVar103;
            auVar10._12_4_ = fVar102;
            auVar78 = rsqrtps(auVar59,auVar10);
            fVar66 = auVar78._0_4_;
            fVar99 = auVar78._4_4_;
            fVar76 = auVar78._8_4_;
            fVar104 = auVar78._12_4_;
            auVar60._0_4_ = fVar66 * 0.5;
            auVar60._4_4_ = fVar99 * 0.5;
            auVar60._8_4_ = fVar76 * 0.5;
            auVar60._12_4_ = fVar104 * 0.5;
            fVar66 = (float)(~-(uint)(fVar71 <= 0.0) &
                            (uint)((3.0 - fVar66 * fVar71 * fVar66) * auVar60._0_4_ * fVar71)) -
                     fVar68;
            fVar71 = (float)(~-(uint)(fVar98 <= 0.0) &
                            (uint)((3.0 - fVar99 * fVar98 * fVar99) * auVar60._4_4_ * fVar98)) -
                     fVar53;
            fVar98 = (float)(~-(uint)(fVar103 <= 0.0) &
                            (uint)((3.0 - fVar76 * fVar103 * fVar76) * auVar60._8_4_ * fVar103)) -
                     fVar73;
            fVar99 = (float)(~-(uint)(fVar102 <= 0.0) &
                            (uint)((3.0 - fVar104 * fVar102 * fVar104) * auVar60._12_4_ * fVar102))
                     - fVar69;
            auVar7._4_4_ = fVar71;
            auVar7._0_4_ = fVar66;
            auVar7._8_4_ = fVar98;
            auVar7._12_4_ = fVar99;
            auVar78 = rcpps(auVar60,auVar7);
            auVar14._4_4_ = fRam00000001467f06e4;
            auVar14._0_4_ = _DAT_1467f06e0;
            auVar14._8_4_ = fRam00000001467f06e8;
            auVar14._12_4_ = DAT_1467f06ec;
            fVar66 = (2.0 - auVar78._0_4_ * fVar66) * auVar78._0_4_ * (local_148 - fVar68);
            fVar71 = (2.0 - auVar78._4_4_ * fVar71) * auVar78._4_4_ * (fStack_144 - fVar53);
            fVar98 = (2.0 - auVar78._8_4_ * fVar98) * auVar78._8_4_ * (fStack_140 - fVar73);
            fVar99 = (2.0 - auVar78._12_4_ * fVar99) * auVar78._12_4_ * (fStack_13c - fVar69);
            uVar39 = -(uint)(fVar66 < DAT_1467f08d0);
            uVar40 = -(uint)(fVar71 < fRam00000001467f08d4);
            uVar43 = -(uint)(fVar98 < fRam00000001467f08d8);
            uVar45 = -(uint)(fVar99 < fRam00000001467f08dc);
            auVar79._0_4_ = (float)(~uVar39 & (uint)DAT_1467f08d0);
            auVar79._4_4_ = (float)(~uVar40 & (uint)fRam00000001467f08d4);
            auVar79._8_4_ = (float)(~uVar43 & (uint)fRam00000001467f08d8);
            auVar79._12_4_ = (float)(~uVar45 & (uint)fRam00000001467f08dc);
            auVar61._0_4_ = uVar39 & (uint)fVar66;
            auVar61._4_4_ = uVar40 & (uint)fVar71;
            auVar61._8_4_ = uVar43 & (uint)fVar98;
            auVar61._12_4_ = uVar45 & (uint)fVar99;
            auVar78 = maxps(auVar14,auVar61 | auVar79);
            fVar71 = auVar78._0_4_;
            if (fVar71 < fVar106) {
              fVar107 = auVar78._4_4_;
              fVar108 = auVar78._8_4_;
              fVar105 = auVar78._12_4_;
              fVar66 = 8.40779e-45;
              fVar106 = fVar71;
              fVar100 = fVar66;
              if (cVar1 == '\0') goto LAB_143858056;
            }
          }
        }
        plVar4 = *(longlong **)param_5[4];
        if ((plVar4 == (longlong *)0x0) && (*(longlong *)(param_5[3] + 8) == 0)) {
LAB_1438586e3:
          fVar71 = (float)local_388;
        }
        else {
          if (fVar100 == 1.26117e-44) {
            local_2c8 = 0xffffffff;
            local_2c0 = (int *)0x0;
            local_2b8 = 0;
          }
          else {
            if (((uint)local_440 == -1) || ((local_438 & 0x20) != 0)) goto LAB_1438586e3;
            local_2c0 = &local_448;
            local_2b8 = local_358;
            local_2c8 = uVar41;
          }
          bVar21 = 0;
          bVar30 = bVar21;
          if (fVar100 == 1.26117e-44) {
            bVar30 = 0x40;
          }
          if (local_42c == 0) {
            bVar21 = 0x10;
          }
          bVar30 = bVar30 | bVar21;
          if (bVar30 == 0) {
            bVar30 = 0x20;
          }
          local_2a8 = fVar77;
          fStack_2a4 = fVar89;
          fStack_2a0 = fVar90;
          fStack_29c = fVar54;
          if (plVar4 != (longlong *)0x0) {
            uStack_330 = (float *)(param_5[2] + 8);
            local_328 = local_2f8;
            local_320 = bVar30 | 2;
            local_338 = param_4;
            cVar20 = (**(code **)(*plVar4 + 0x30))();
            if (cVar20 == '\0') {
              fVar66 = 7.00649e-45;
              if (fVar100 == 4.2039e-45) {
                fVar100 = fVar66;
              }
              if (cVar1 == '\0') goto LAB_143858056;
              puVar26 = &local_258;
              local_418 = CONCAT44(fVar107,fVar106);
              uStack_410 = CONCAT44(fVar105,fVar108);
              puVar114 = &local_268;
              FUN_143859240(&local_3b8,local_378,&local_1e8,param_5[4][9] != '\0',&local_408,
                            puVar114,puVar26,&local_418);
              uVar115 = (undefined4)((ulonglong)puVar114 >> 0x20);
              uVar116 = (undefined4)((ulonglong)puVar26 >> 0x20);
              if ((float)local_418 < fVar106) {
                fVar100 = 7.00649e-45;
                fVar106 = (float)local_418;
                fVar107 = local_418._4_4_;
                fVar108 = (float)uStack_410;
                fVar105 = uStack_410._4_4_;
              }
            }
          }
          plVar4 = *(longlong **)(param_5[3] + 8);
          if (plVar4 == (longlong *)0x0) goto LAB_1438586e3;
          fVar71 = (float)local_388;
          uStack_330 = (float *)(param_5[2] + 8);
          local_328 = local_2f8;
          local_320 = bVar30 | 2;
          local_318 = (float)local_388;
          uStack_314 = local_388._4_4_;
          uStack_310 = (float)uStack_380;
          uStack_30c = uStack_380._4_4_;
          local_338 = param_4;
          local_308 = fVar101;
          fStack_304 = fVar67;
          fStack_300 = fVar72;
          fStack_2fc = fVar70;
          (**(code **)(*plVar4 + 0x28))(plVar4,&local_138,&local_338);
          fVar101 = local_138;
          fVar67 = fStack_134;
          fVar72 = fStack_130;
          fVar70 = fStack_12c;
        }
        if ((((local_438 & 0x10) == 0) || ((param_5[4][0xd] & 0x20) == 0)) &&
           (param_5[4][10] != '\0')) {
          local_418 = CONCAT44(fRam00000001467f06f4,DAT_1467f06f0);
          uStack_410 = CONCAT44(fRam00000001467f06fc,fRam00000001467f06f8);
          pauVar36 = param_5;
          fVar66 = (float)FUN_143856600(&local_3b8,local_378,&local_408,&local_1e8,param_4,param_5,
                                        CONCAT44(uVar116,uVar23),&local_418);
          uVar115 = (undefined4)((ulonglong)pauVar36 >> 0x20);
          if (fVar66 != 4.2039e-45) {
            if (((float)local_418 < fVar106) &&
               (fVar106 = (float)local_418, fVar107 = local_418._4_4_, fVar108 = (float)uStack_410,
               fVar105 = uStack_410._4_4_, fVar100 = fVar66, cVar1 == '\0')) goto LAB_143858056;
          }
        }
        fVar66 = fVar100;
        if (local_128 < fVar101 * fVar106 + fVar71) {
          fVar66 = 9.80909e-45;
        }
        else if (local_42c < *(int *)(param_5[2] + 4)) {
          local_42c = local_42c + 1;
          cVar20 = FUN_143859400(param_6);
          if ((cVar20 != '\0') && (uVar41 != 0xffffffff)) {
            uVar25 = FUN_143703a50();
            if (*(uint *)(param_6 + 1) == (*(uint *)((longlong)param_6 + 0xc) & 0x3fffffff)) {
              FUN_14370c460(uVar25,param_6,4);
            }
            *(uint *)(*param_6 + (longlong)(int)param_6[1] * 4) = uVar41;
            *(int *)(param_6 + 1) = (int)param_6[1] + 1;
          }
        }
        else {
          fVar66 = 1.12104e-44;
          local_42c = local_42c + 1;
        }
      }
      else {
        uStack_330 = local_240;
        local_328 = local_2f8;
        local_320 = 2;
        local_338 = param_4;
        cVar20 = (**(code **)(**(longlong **)param_5[4] + 0x30))();
        uVar115 = (undefined4)((ulonglong)puVar26 >> 0x20);
        if (cVar20 != '\0') goto LAB_143857b14;
        fVar66 = 7.00649e-45;
        fVar106 = fVar101;
        fVar107 = fVar67;
        fVar108 = fVar72;
        fVar105 = fVar70;
      }
LAB_143858056:
      fVar71 = (float)local_388 + fVar101 * fVar106;
      local_388 = CONCAT44(local_388._4_4_ + fVar67 * fVar107,fVar71);
      uStack_380 = CONCAT44(uStack_380._4_4_ + fVar70 * fVar105,(float)uStack_380 + fVar72 * fVar108
                           );
      cVar20 = FUN_1438593e0(param_6);
      if (cVar20 != '\0') {
        uVar25 = FUN_143703a50();
        if (*(uint *)(param_6 + 3) == (*(uint *)((longlong)param_6 + 0x1c) & 0x3fffffff)) {
          FUN_14370c460(uVar25,param_6 + 2,4);
        }
        *(float *)(param_6[2] + (longlong)(int)param_6[3] * 4) = fVar71;
        *(int *)(param_6 + 3) = (int)param_6[3] + 1;
      }
      fVar98 = fVar77 - local_3b8;
      fVar99 = fVar89 - fStack_3b4;
      fVar101 = fVar90 - fStack_3b0;
      fVar67 = fVar54 - fStack_3ac;
      fVar106 = fVar98 * fVar106 + local_3b8;
      fVar107 = fVar99 * fVar107 + fStack_3b4;
      fVar108 = fVar101 * fVar108 + fStack_3b0;
      fVar105 = fVar67 * fVar105 + fStack_3ac;
      cVar20 = FUN_143859420(param_6);
      if (cVar20 != '\0') {
        uVar25 = FUN_143703a50();
        if (*(uint *)(param_6 + 5) == (*(uint *)((longlong)param_6 + 0x2c) & 0x3fffffff)) {
          FUN_14370c460(uVar25,param_6 + 4,0x10);
        }
        pfVar29 = (float *)((longlong)(int)param_6[5] * 0x10 + param_6[4]);
        *pfVar29 = fVar106;
        pfVar29[1] = fVar107;
        pfVar29[2] = fVar108;
        pfVar29[3] = fVar105;
        *(int *)(param_6 + 5) = (int)param_6[5] + 1;
      }
      if (fVar66 != 4.2039e-45) {
        if (((cVar1 == '\0') && (fVar66 != 1.26117e-44)) && (param_5[4][8] == '\0')) {
          *(undefined4 *)(param_6 + 1) = 0;
        }
        *(int *)((longlong)param_6 + 0x34) = local_42c;
        *(float *)((longlong)param_6 + 0x3c) = fVar71;
        *(uint *)(param_6 + 7) = uVar23;
        *(float *)(param_6 + 8) = fVar106;
        *(float *)((longlong)param_6 + 0x44) = fVar107;
        *(float *)(param_6 + 9) = fVar108;
        *(float *)((longlong)param_6 + 0x4c) = fVar105;
        thunk_FUN_143719c70(0x460a6961);
        goto LAB_1438590f8;
      }
      uVar23 = local_440._4_4_;
      uVar39 = (uint)local_440;
      if ((*(longlong *)(param_5[3] + 8) != 0) || (*(longlong *)param_5[4] != 0)) {
        local_2d8 = CONCAT44(fStack_2a4,local_2a8);
        uStack_2d0 = CONCAT44(fStack_29c,fStack_2a0);
        local_3d8 = local_448;
        local_3d4 = local_444;
        local_3d0 = local_440;
        local_3c8 = local_438;
        local_2f8[0] = local_2c8;
        local_2f0 = &local_3d8;
        local_2e8 = local_2b8;
      }
      if (param_5[4][0xb] != '\0') {
        local_368 = CONCAT44(fStack_404,local_408);
        uStack_360 = CONCAT44(fStack_3fc,fStack_400);
        fVar112 = fVar98 * fVar98;
        fVar106 = fVar99 * fVar99;
        fVar107 = fVar101 * fVar101;
        local_454 = (float)(local_440._4_4_ & 0x3fffff);
        auVar93._0_4_ = fVar106 + fVar112 + fVar107;
        auVar93._4_4_ = fVar106 + fVar112 + fVar107;
        auVar93._8_4_ = fVar106 + fVar112 + fVar107;
        auVar93._12_4_ = fVar106 + fVar112 + fVar107;
        auVar78 = rsqrtps(auVar79,auVar93);
        fVar112 = auVar78._0_4_;
        fVar106 = auVar78._4_4_;
        fVar107 = auVar78._8_4_;
        fVar108 = auVar78._12_4_;
        auVar81._0_4_ = fVar112 * 0.5;
        auVar81._4_4_ = fVar106 * 0.5;
        auVar81._8_4_ = fVar107 * 0.5;
        auVar81._12_4_ = fVar108 * 0.5;
        fVar98 = fVar98 * (float)(~-(uint)(auVar93._0_4_ <= 0.0) &
                                 (uint)((3.0 - fVar112 * auVar93._0_4_ * fVar112) * auVar81._0_4_));
        fVar99 = fVar99 * (float)(~-(uint)(auVar93._4_4_ <= 0.0) &
                                 (uint)((3.0 - fVar106 * auVar93._4_4_ * fVar106) * auVar81._4_4_));
        fVar101 = fVar101 * (float)(~-(uint)(auVar93._8_4_ <= 0.0) &
                                   (uint)((3.0 - fVar107 * auVar93._8_4_ * fVar107) * auVar81._8_4_)
                                   );
        fVar67 = fVar67 * (float)(~-(uint)(auVar93._12_4_ <= 0.0) &
                                 (uint)((3.0 - fVar108 * auVar93._12_4_ * fVar108) * auVar81._12_4_)
                                 );
        FUN_143852420(local_e8,*(undefined8 *)
                                ((ulonglong)(local_440._4_4_ >> 0x16) * 0x100 +
                                *(longlong *)(param_4 + 0x38)),&local_454,&local_408);
        fVar112 = (float)local_368 * local_408;
        fVar106 = local_368._4_4_ * fStack_404;
        fVar105 = (float)uStack_360 * fStack_400;
        local_454 = 0.99999;
        fVar111 = fVar106 + fVar112 + fVar105;
        fVar110 = fVar106 + fVar112 + fVar105;
        fVar52 = fVar106 + fVar112 + fVar105;
        fVar105 = fVar106 + fVar112 + fVar105;
        fVar112 = DAT_1467f08c0;
        fVar106 = DAT_1467f08c4;
        fVar107 = DAT_1467f08c8;
        fVar108 = DAT_1467f08cc;
        if (fVar111 <= 0.99999) {
          if (-0.99999 <= fVar111) {
            auVar16._4_4_ = fRam00000001467f07e4;
            auVar16._0_4_ = _DAT_1467f07e0;
            auVar16._8_4_ = fRam00000001467f07e8;
            auVar16._12_4_ = fRam00000001467f07ec;
            local_454 = -0.999;
            fVar66 = _DAT_1467f07e0 * fVar111 + _DAT_1467f07e0;
            fVar71 = fRam00000001467f07e4 * fVar110 + fRam00000001467f07e4;
            fVar72 = fRam00000001467f07e8 * fVar52 + fRam00000001467f07e8;
            fVar102 = fRam00000001467f07ec * fVar105 + fRam00000001467f07ec;
            auVar11._4_4_ = fVar71;
            auVar11._0_4_ = fVar66;
            auVar11._8_4_ = fVar72;
            auVar11._12_4_ = fVar102;
            auVar78 = rsqrtps(auVar81,auVar11);
            fVar112 = auVar78._0_4_;
            fVar106 = auVar78._4_4_;
            fVar107 = auVar78._8_4_;
            fVar108 = auVar78._12_4_;
            auVar82._0_4_ = fVar112 * 0.5;
            auVar82._4_4_ = fVar106 * 0.5;
            auVar82._8_4_ = fVar107 * 0.5;
            auVar82._12_4_ = fVar108 * 0.5;
            fVar70 = fStack_404 * (float)local_368 - local_368._4_4_ * local_408;
            fVar100 = fStack_400 * local_368._4_4_ - (float)uStack_360 * fStack_404;
            fVar76 = local_408 * (float)uStack_360 - (float)local_368 * fStack_400;
            fVar112 = (float)(~-(uint)(fVar66 <= 0.0) &
                             (uint)((3.0 - fVar112 * fVar66 * fVar112) * auVar82._0_4_)) *
                      _DAT_1467f07e0;
            fVar106 = (float)(~-(uint)(fVar71 <= 0.0) &
                             (uint)((3.0 - fVar106 * fVar71 * fVar106) * auVar82._4_4_)) *
                      fRam00000001467f07e4;
            fVar107 = (float)(~-(uint)(fVar72 <= 0.0) &
                             (uint)((3.0 - fVar107 * fVar72 * fVar107) * auVar82._8_4_)) *
                      fRam00000001467f07e8;
            if (fVar111 < -0.999) {
              fVar112 = fVar100 * fVar100;
              fVar106 = fVar76 * fVar76;
              fVar107 = fVar70 * fVar70;
              fVar66 = fVar66 - fVar111;
              fVar71 = fVar71 - fVar110;
              fVar72 = fVar72 - fVar52;
              auVar6._4_4_ = fVar71;
              auVar6._0_4_ = fVar66;
              auVar6._8_4_ = fVar72;
              auVar6._12_4_ = fVar102 - fVar105;
              auVar78 = rsqrtps(auVar82,auVar6);
              fVar105 = auVar78._0_4_;
              fVar111 = auVar78._4_4_;
              fVar110 = auVar78._8_4_;
              fVar52 = fVar106 + fVar112 + fVar107;
              fVar103 = fVar106 + fVar112 + fVar107;
              fVar104 = fVar106 + fVar112 + fVar107;
              auVar9._4_4_ = fVar103;
              auVar9._0_4_ = fVar52;
              auVar9._8_4_ = fVar104;
              auVar9._12_4_ = fVar106 + fVar112 + fVar107;
              auVar78 = rsqrtps(auVar16,auVar9);
              fVar112 = auVar78._0_4_;
              fVar106 = auVar78._4_4_;
              fVar107 = auVar78._8_4_;
              fVar112 = (float)(~-(uint)(fVar66 <= 0.0) &
                               (uint)((3.0 - fVar66 * fVar105 * fVar105) * fVar105 * 0.5)) * fVar66
                        * (float)(~-(uint)(fVar52 <= 0.0) &
                                 (uint)((3.0 - fVar52 * fVar112 * fVar112) * fVar112 * 0.5));
              fVar106 = (float)(~-(uint)(fVar71 <= 0.0) &
                               (uint)((3.0 - fVar71 * fVar111 * fVar111) * fVar111 * 0.5)) * fVar71
                        * (float)(~-(uint)(fVar103 <= 0.0) &
                                 (uint)((3.0 - fVar103 * fVar106 * fVar106) * fVar106 * 0.5));
              fVar107 = (float)(~-(uint)(fVar72 <= 0.0) &
                               (uint)((3.0 - fVar72 * fVar110 * fVar110) * fVar110 * 0.5)) * fVar72
                        * (float)(~-(uint)(fVar104 <= 0.0) &
                                 (uint)((3.0 - fVar104 * fVar107 * fVar107) * fVar107 * 0.5));
            }
            fVar112 = fVar100 * fVar112;
            fVar106 = fVar76 * fVar106;
            fVar107 = fVar70 * fVar107;
            fVar108 = (float)(~-(uint)(fVar102 <= 0.0) &
                             (uint)((3.0 - fVar108 * fVar102 * fVar108) * auVar82._12_4_)) * fVar102
            ;
          }
          else {
            FUN_14375e960(&local_1d8);
            fVar112 = local_1d8;
            fVar106 = fStack_1d4;
            fVar107 = fStack_1d0;
            fVar108 = fStack_1cc;
          }
        }
        fStack_1cc = fVar108;
        fStack_1d0 = fVar107;
        fStack_1d4 = fVar106;
        local_1d8 = fVar112;
        fVar112 = local_1d8 * fVar98;
        fVar106 = fStack_1d4 * fVar99;
        fVar107 = fStack_1d0 * fVar101;
        fStack_1f0 = (fVar106 + fVar112 + fVar107) * local_1d8 +
                     (fStack_1cc * fStack_1cc - _DAT_1467f07e0) * fVar98 +
                     (fVar101 * fStack_1d4 - fStack_1d0 * fVar99) * fStack_1cc;
        local_1f8._0_4_ =
             (fVar106 + fVar112 + fVar107) * fStack_1d4 +
             (fStack_1cc * fStack_1cc - fRam00000001467f07e4) * fVar99 +
             (fVar98 * fStack_1d0 - local_1d8 * fVar101) * fStack_1cc;
        local_1f8._4_4_ =
             (fVar106 + fVar112 + fVar107) * fStack_1d0 +
             (fStack_1cc * fStack_1cc - fRam00000001467f07e8) * fVar101 +
             (fVar99 * local_1d8 - fStack_1d4 * fVar98) * fStack_1cc;
        fStack_1ec = (fVar106 + fVar112 + fVar107) * fStack_1cc +
                     (fStack_1cc * fStack_1cc - fRam00000001467f07ec) * fVar67 +
                     (fVar67 * fStack_1cc - fStack_1cc * fVar67) * fStack_1cc;
        fStack_1f0 = fStack_1f0 + fStack_1f0;
        local_1f8._0_4_ = (float)local_1f8._0_4_ + (float)local_1f8._0_4_;
        local_1f8._4_4_ = (float)local_1f8._4_4_ + (float)local_1f8._4_4_;
        fStack_1ec = fStack_1ec + fStack_1ec;
        local_348._4_4_ = local_1f8._0_4_;
        local_348._0_4_ = fStack_1f0;
        fStack_340 = (float)local_1f8._4_4_;
        fStack_33c = fStack_1ec;
        local_278._4_4_ = local_1f8._0_4_;
        local_278._0_4_ = fStack_1f0;
        fStack_270 = (float)local_1f8._4_4_;
        fStack_26c = fStack_1ec;
        fVar110 = (float)local_1f8._0_4_ * local_408 - fStack_404 * fStack_1f0;
        fVar111 = (float)local_1f8._4_4_ * fStack_404 - fStack_400 * (float)local_1f8._0_4_;
        fVar112 = fStack_1f0 * fStack_400 - local_408 * (float)local_1f8._4_4_;
        fVar106 = fVar111 * fVar111;
        fVar107 = fVar112 * fVar112;
        auVar62._8_4_ = fVar110 * fVar110;
        auVar62._4_4_ = auVar62._8_4_;
        auVar62._0_4_ = auVar62._8_4_;
        auVar62._12_4_ = auVar62._8_4_;
        auVar83._0_4_ = fVar107 + fVar106 + auVar62._8_4_;
        auVar83._4_4_ = fVar107 + fVar106 + auVar62._8_4_;
        auVar83._8_4_ = fVar107 + fVar106 + auVar62._8_4_;
        auVar83._12_4_ = fVar107 + fVar106 + auVar62._8_4_;
        auVar78 = rsqrtps(auVar62,auVar83);
        fVar106 = auVar78._0_4_;
        fVar107 = auVar78._4_4_;
        fVar108 = auVar78._8_4_;
        fVar111 = fVar111 * (float)(~-(uint)(auVar83._0_4_ <= 0.0) &
                                   (uint)((3.0 - fVar106 * auVar83._0_4_ * fVar106) * fVar106 * 0.5)
                                   );
        fVar112 = fVar112 * (float)(~-(uint)(auVar83._4_4_ <= 0.0) &
                                   (uint)((3.0 - fVar107 * auVar83._4_4_ * fVar107) * fVar107 * 0.5)
                                   );
        fVar110 = fVar110 * (float)(~-(uint)(auVar83._8_4_ <= 0.0) &
                                   (uint)((3.0 - fVar108 * auVar83._8_4_ * fVar108) * fVar108 * 0.5)
                                   );
        auVar79._8_4_ = fVar90 * fVar110;
        auVar79._4_4_ = auVar79._8_4_;
        auVar79._0_4_ = auVar79._8_4_;
        auVar79._12_4_ = auVar79._8_4_;
        fVar52 = 0.0 - (fVar89 * fVar112 + fVar77 * fVar111 + auVar79._8_4_);
      }
      if ((local_438 & 0x10) != 0) {
        lVar2 = *(longlong *)((ulonglong)(uVar23 >> 0x16) * 0x100 + *(longlong *)(param_4 + 0x38));
        lVar3 = *(longlong *)(lVar2 + 0x18);
        uVar25 = FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                               lVar3 + 0xc0,lVar3 + 0xe0,lVar3 + 0x70,
                               CONCAT44(uVar115,(uint)local_440) & 0xffffffff003fffff);
        FUN_143859670(lVar2,uVar25,&local_f8,&local_118);
        fVar67 = fStack_f0;
        fVar101 = fStack_f4;
        fVar99 = local_f8;
        fVar98 = fStack_110;
        fVar71 = fStack_114;
        fVar66 = local_118;
        fVar112 = (float)local_228;
        fVar106 = local_228._4_4_;
        fVar107 = (float)uStack_220;
        fVar108 = uStack_220._4_4_;
        fVar105 = (float)local_218;
        fVar111 = local_218._4_4_;
        fVar110 = (float)uStack_210;
        fVar52 = uStack_210._4_4_;
        fVar72 = (float)local_228 - (float)local_218;
        fVar100 = local_228._4_4_ - local_218._4_4_;
        fVar102 = (float)uStack_220 - (float)uStack_210;
        fVar54 = fVar72 * fVar72;
        fVar70 = fVar100 * fVar100;
        fVar76 = fVar102 * fVar102;
        auVar84._0_4_ = fVar70 + fVar54 + fVar76;
        auVar84._4_4_ = fVar70 + fVar54 + fVar76;
        auVar84._8_4_ = fVar70 + fVar54 + fVar76;
        auVar84._12_4_ = fVar70 + fVar54 + fVar76;
        fVar72 = ((float)local_228 - fVar77) * fVar72;
        fVar100 = (local_228._4_4_ - fVar89) * fVar100;
        auVar63._8_4_ = ((float)uStack_220 - fVar90) * fVar102;
        auVar63._4_4_ = auVar63._8_4_;
        auVar63._0_4_ = auVar63._8_4_;
        auVar63._12_4_ = auVar63._8_4_;
        auVar78 = rcpps(auVar63,auVar84);
        fVar77 = (2.0 - auVar78._0_4_ * auVar84._0_4_) * auVar78._0_4_ *
                 (fVar100 + fVar72 + auVar63._8_4_);
        fVar89 = (2.0 - auVar78._4_4_ * auVar84._4_4_) * auVar78._4_4_ *
                 (fVar100 + fVar72 + auVar63._8_4_);
        fVar90 = (2.0 - auVar78._8_4_ * auVar84._8_4_) * auVar78._8_4_ *
                 (fVar100 + fVar72 + auVar63._8_4_);
        fVar54 = (2.0 - auVar78._12_4_ * auVar84._12_4_) * auVar78._12_4_ *
                 (fVar100 + fVar72 + auVar63._8_4_);
        uVar40 = -(uint)(fVar77 < DAT_1467f06f0);
        uVar41 = -(uint)(fVar89 < fRam00000001467f06f4);
        uVar43 = -(uint)(fVar90 < fRam00000001467f06f8);
        uVar45 = -(uint)(fVar54 < fRam00000001467f06fc);
        auVar64._0_4_ = uVar40 & (uint)fVar77;
        auVar64._4_4_ = uVar41 & (uint)fVar89;
        auVar64._8_4_ = uVar43 & (uint)fVar90;
        auVar64._12_4_ = uVar45 & (uint)fVar54;
        auVar46._0_4_ = ~uVar40 & (uint)DAT_1467f06f0;
        auVar46._4_4_ = ~uVar41 & (uint)fRam00000001467f06f4;
        auVar46._8_4_ = ~uVar43 & (uint)fRam00000001467f06f8;
        auVar46._12_4_ = ~uVar45 & (uint)fRam00000001467f06fc;
        auVar78 = maxps(ZEXT816(0),auVar46 | auVar64);
        fVar54 = auVar78._12_4_;
        fVar77 = (DAT_1467f06f0 - fVar54) * (local_118 - local_f8) + local_f8;
        fVar89 = (fRam00000001467f06f4 - fVar54) * (fStack_114 - fStack_f4) + fStack_f4;
        fVar90 = (fRam00000001467f06f8 - fVar54) * (fStack_110 - fStack_f0) + fStack_f0;
        fVar54 = (fRam00000001467f06fc - fVar54) * (fStack_10c - fStack_ec) + fStack_ec;
        fVar72 = _DAT_1467f06e0;
        fVar70 = fRam00000001467f06e4;
        fVar100 = fRam00000001467f06e8;
        fVar76 = DAT_1467f06ec;
        if ((local_438 & 0x10) != 0) {
          local_454 = (float)((int)local_438._2_2_ << 0x10);
          fVar72 = local_454;
          fVar70 = local_454;
          fVar100 = local_454;
          fVar76 = local_454;
        }
        fVar72 = (float)local_388 + fVar72;
        local_388 = CONCAT44(local_388._4_4_ + fVar70,fVar72);
        uStack_380 = CONCAT44(uStack_380._4_4_ + fVar76,(float)uStack_380 + fVar100);
        cVar20 = FUN_1438593e0(param_6);
        if (cVar20 != '\0') {
          uVar25 = FUN_143703a50();
          if (*(uint *)(param_6 + 3) == (*(uint *)((longlong)param_6 + 0x1c) & 0x3fffffff)) {
            FUN_14370c460(uVar25,param_6 + 2,4);
          }
          *(float *)(param_6[2] + (longlong)(int)param_6[3] * 4) = fVar72;
          *(int *)(param_6 + 3) = (int)param_6[3] + 1;
        }
        cVar20 = FUN_143859420(param_6);
        if (cVar20 != '\0') {
          uVar25 = FUN_143703a50();
          if (*(uint *)(param_6 + 5) == (*(uint *)((longlong)param_6 + 0x2c) & 0x3fffffff)) {
            FUN_14370c460(uVar25,param_6 + 4,0x10);
          }
          pfVar29 = (float *)((longlong)(int)param_6[5] * 0x10 + param_6[4]);
          *pfVar29 = fVar77;
          pfVar29[1] = fVar89;
          pfVar29[2] = fVar90;
          pfVar29[3] = fVar54;
          *(int *)(param_6 + 5) = (int)param_6[5] + 1;
        }
        local_378._4_4_ = fVar89;
        local_378._0_4_ = fVar77;
        fStack_370 = fVar90;
        fStack_36c = fVar54;
        if (param_5[4][0xc] == '\0') {
          local_348._0_4_ = *(float *)*param_2 - fVar77;
          local_348._4_4_ = *(float *)(*param_2 + 4) - fVar89;
          fStack_340 = *(float *)(*param_2 + 8) - fVar90;
          fVar112 = (float)local_348._0_4_ * (float)local_348._0_4_;
          fVar106 = (float)local_348._4_4_ * (float)local_348._4_4_;
          fVar107 = fStack_340 * fStack_340;
          auVar95._0_4_ = fVar106 + fVar112 + fVar107;
          auVar95._4_4_ = fVar106 + fVar112 + fVar107;
          auVar95._8_4_ = fVar106 + fVar112 + fVar107;
          auVar95._12_4_ = fVar106 + fVar112 + fVar107;
          auVar78 = rsqrtps(auVar78,auVar95);
          fVar112 = auVar78._0_4_;
          fVar106 = auVar78._4_4_;
          fVar107 = auVar78._8_4_;
          fVar108 = auVar78._12_4_;
          local_348._0_4_ =
               (float)local_348._0_4_ *
               (float)(~-(uint)(auVar95._0_4_ <= 0.0) &
                      (uint)((3.0 - fVar112 * auVar95._0_4_ * fVar112) * fVar112 * 0.5));
          local_348._4_4_ =
               (float)local_348._4_4_ *
               (float)(~-(uint)(auVar95._4_4_ <= 0.0) &
                      (uint)((3.0 - fVar106 * auVar95._4_4_ * fVar106) * fVar106 * 0.5));
          fStack_340 = fStack_340 *
                       (float)(~-(uint)(auVar95._8_4_ <= 0.0) &
                              (uint)((3.0 - fVar107 * auVar95._8_4_ * fVar107) * fVar107 * 0.5));
          fStack_33c = (*(float *)(*param_2 + 0xc) - fVar54) *
                       (float)(~-(uint)(auVar95._12_4_ <= 0.0) &
                              (uint)((3.0 - fVar108 * auVar95._12_4_ * fVar108) * fVar108 * 0.5));
          local_278._4_4_ = local_348._4_4_;
          local_278._0_4_ = local_348._0_4_;
          fStack_270 = fStack_340;
          fStack_26c = fStack_33c;
          fStack_1f0 = (float)local_348._0_4_;
          local_1f8._0_4_ = local_348._4_4_;
          local_1f8._4_4_ = fStack_340;
          fStack_1ec = fStack_33c;
        }
        else if ((param_5[4][0xd] & 0x40) == 0) {
          fStack_1f0 = (float)local_348._0_4_;
          local_1f8._0_4_ = local_348._4_4_;
          local_1f8._4_4_ = fStack_340;
          fStack_1ec = fStack_33c;
        }
        else {
          fVar105 = fVar105 - fVar112;
          fVar111 = fVar111 - fVar106;
          fVar110 = fVar110 - fVar107;
          local_454 = 0.99999;
          fVar99 = fVar99 - fVar66;
          fVar101 = fVar101 - fVar71;
          fVar67 = fVar67 - fVar98;
          fVar112 = fVar105 * fVar105;
          fVar106 = fVar111 * fVar111;
          fVar107 = fVar110 * fVar110;
          auVar96._0_4_ = fVar106 + fVar112 + fVar107;
          auVar96._4_4_ = fVar106 + fVar112 + fVar107;
          auVar96._8_4_ = fVar106 + fVar112 + fVar107;
          auVar96._12_4_ = fVar106 + fVar112 + fVar107;
          auVar78 = rsqrtps(auVar78,auVar96);
          fVar66 = auVar78._0_4_;
          fVar71 = auVar78._4_4_;
          fVar98 = auVar78._8_4_;
          fVar72 = auVar78._12_4_;
          auVar85._0_4_ = fVar66 * 0.5;
          auVar85._4_4_ = fVar71 * 0.5;
          auVar85._8_4_ = fVar98 * 0.5;
          auVar85._12_4_ = fVar72 * 0.5;
          fVar112 = fVar99 * fVar99;
          fVar106 = fVar101 * fVar101;
          fVar107 = fVar67 * fVar67;
          fVar105 = fVar105 * (float)(~-(uint)(auVar96._0_4_ <= 0.0) &
                                     (uint)((3.0 - fVar66 * auVar96._0_4_ * fVar66) * auVar85._0_4_)
                                     );
          fVar111 = fVar111 * (float)(~-(uint)(auVar96._4_4_ <= 0.0) &
                                     (uint)((3.0 - fVar71 * auVar96._4_4_ * fVar71) * auVar85._4_4_)
                                     );
          fVar110 = fVar110 * (float)(~-(uint)(auVar96._8_4_ <= 0.0) &
                                     (uint)((3.0 - fVar98 * auVar96._8_4_ * fVar98) * auVar85._8_4_)
                                     );
          local_338 = CONCAT44(fVar111,fVar105);
          uStack_330 = (float *)CONCAT44((fVar52 - fVar108) *
                                         (float)(~-(uint)(auVar96._12_4_ <= 0.0) &
                                                (uint)((3.0 - fVar72 * auVar96._12_4_ * fVar72) *
                                                      auVar85._12_4_)),fVar110);
          auVar97._0_4_ = fVar106 + fVar112 + fVar107;
          auVar97._4_4_ = fVar106 + fVar112 + fVar107;
          auVar97._8_4_ = fVar106 + fVar112 + fVar107;
          auVar97._12_4_ = fVar106 + fVar112 + fVar107;
          auVar78 = rsqrtps(auVar85,auVar97);
          fVar112 = auVar78._0_4_;
          fVar106 = auVar78._4_4_;
          fVar107 = auVar78._8_4_;
          auVar86._0_4_ = fVar112 * 0.5;
          auVar86._4_4_ = fVar106 * 0.5;
          auVar86._8_4_ = fVar107 * 0.5;
          auVar86._12_4_ = auVar78._12_4_ * 0.5;
          fVar99 = fVar99 * (float)(~-(uint)(auVar97._0_4_ <= 0.0) &
                                   (uint)((3.0 - fVar112 * auVar97._0_4_ * fVar112) * auVar86._0_4_)
                                   );
          fVar101 = fVar101 * (float)(~-(uint)(auVar97._4_4_ <= 0.0) &
                                     (uint)((3.0 - fVar106 * auVar97._4_4_ * fVar106) *
                                           auVar86._4_4_));
          fVar67 = fVar67 * (float)(~-(uint)(auVar97._8_4_ <= 0.0) &
                                   (uint)((3.0 - fVar107 * auVar97._8_4_ * fVar107) * auVar86._8_4_)
                                   );
          fVar112 = fVar99 * fVar105;
          fVar106 = fVar101 * fVar111;
          fVar52 = fVar67 * fVar110;
          fVar66 = fVar106 + fVar112 + fVar52;
          fVar71 = fVar106 + fVar112 + fVar52;
          fVar98 = fVar106 + fVar112 + fVar52;
          fVar52 = fVar106 + fVar112 + fVar52;
          fVar112 = DAT_1467f08c0;
          fVar106 = DAT_1467f08c4;
          fVar107 = DAT_1467f08c8;
          fVar108 = DAT_1467f08cc;
          if (fVar66 <= 0.99999) {
            if (-0.99999 <= fVar66) {
              auVar15._4_4_ = fRam00000001467f07e4;
              auVar15._0_4_ = _DAT_1467f07e0;
              auVar15._8_4_ = fRam00000001467f07e8;
              auVar15._12_4_ = fRam00000001467f07ec;
              local_454 = -0.999;
              fVar72 = _DAT_1467f07e0 * fVar66 + _DAT_1467f07e0;
              fVar70 = fRam00000001467f07e4 * fVar71 + fRam00000001467f07e4;
              fVar100 = fRam00000001467f07e8 * fVar98 + fRam00000001467f07e8;
              fVar102 = fRam00000001467f07ec * fVar52 + fRam00000001467f07ec;
              fVar76 = fVar101 * fVar105 - fVar111 * fVar99;
              fVar111 = fVar67 * fVar111 - fVar110 * fVar101;
              fVar105 = fVar99 * fVar110 - fVar105 * fVar67;
              auVar13._4_4_ = fVar70;
              auVar13._0_4_ = fVar72;
              auVar13._8_4_ = fVar100;
              auVar13._12_4_ = fVar102;
              auVar78 = rsqrtps(auVar86,auVar13);
              fVar112 = auVar78._0_4_;
              fVar106 = auVar78._4_4_;
              fVar107 = auVar78._8_4_;
              fVar108 = auVar78._12_4_;
              auVar87._0_4_ = fVar112 * 0.5;
              auVar87._4_4_ = fVar106 * 0.5;
              auVar87._8_4_ = fVar107 * 0.5;
              auVar87._12_4_ = fVar108 * 0.5;
              fVar112 = (float)(~-(uint)(fVar72 <= 0.0) &
                               (uint)((3.0 - fVar112 * fVar72 * fVar112) * auVar87._0_4_)) *
                        _DAT_1467f07e0;
              fVar106 = (float)(~-(uint)(fVar70 <= 0.0) &
                               (uint)((3.0 - fVar106 * fVar70 * fVar106) * auVar87._4_4_)) *
                        fRam00000001467f07e4;
              fVar107 = (float)(~-(uint)(fVar100 <= 0.0) &
                               (uint)((3.0 - fVar107 * fVar100 * fVar107) * auVar87._8_4_)) *
                        fRam00000001467f07e8;
              if (fVar66 < -0.999) {
                fVar112 = fVar111 * fVar111;
                fVar106 = fVar105 * fVar105;
                fVar107 = fVar76 * fVar76;
                fVar72 = fVar72 - fVar66;
                fVar70 = fVar70 - fVar71;
                fVar100 = fVar100 - fVar98;
                auVar8._4_4_ = fVar70;
                auVar8._0_4_ = fVar72;
                auVar8._8_4_ = fVar100;
                auVar8._12_4_ = fVar102 - fVar52;
                auVar78 = rsqrtps(auVar87,auVar8);
                fVar110 = auVar78._0_4_;
                fVar52 = auVar78._4_4_;
                fVar66 = auVar78._8_4_;
                fVar71 = fVar106 + fVar112 + fVar107;
                fVar98 = fVar106 + fVar112 + fVar107;
                fVar99 = fVar106 + fVar112 + fVar107;
                auVar5._4_4_ = fVar98;
                auVar5._0_4_ = fVar71;
                auVar5._8_4_ = fVar99;
                auVar5._12_4_ = fVar106 + fVar112 + fVar107;
                auVar78 = rsqrtps(auVar15,auVar5);
                fVar112 = auVar78._0_4_;
                fVar106 = auVar78._4_4_;
                fVar107 = auVar78._8_4_;
                fVar112 = (float)(~-(uint)(fVar72 <= 0.0) &
                                 (uint)((3.0 - fVar110 * fVar72 * fVar110) * fVar110 * 0.5)) *
                          fVar72 * (float)(~-(uint)(fVar71 <= 0.0) &
                                          (uint)((3.0 - fVar112 * fVar71 * fVar112) * fVar112 * 0.5)
                                          );
                fVar106 = (float)(~-(uint)(fVar70 <= 0.0) &
                                 (uint)((3.0 - fVar52 * fVar70 * fVar52) * fVar52 * 0.5)) * fVar70 *
                          (float)(~-(uint)(fVar98 <= 0.0) &
                                 (uint)((3.0 - fVar106 * fVar98 * fVar106) * fVar106 * 0.5));
                fVar107 = (float)(~-(uint)(fVar100 <= 0.0) &
                                 (uint)((3.0 - fVar66 * fVar100 * fVar66) * fVar66 * 0.5)) * fVar100
                          * (float)(~-(uint)(fVar99 <= 0.0) &
                                   (uint)((3.0 - fVar107 * fVar99 * fVar107) * fVar107 * 0.5));
              }
              fVar112 = fVar111 * fVar112;
              fVar106 = fVar105 * fVar106;
              fVar107 = fVar76 * fVar107;
              fVar108 = (float)(~-(uint)(fVar102 <= 0.0) &
                               (uint)((3.0 - fVar108 * fVar102 * fVar108) * auVar87._12_4_)) *
                        fVar102;
            }
            else {
              FUN_14375e960(&local_208);
              fVar112 = local_208;
              fVar106 = fStack_204;
              fVar107 = fStack_200;
              fVar108 = fStack_1fc;
            }
          }
          fStack_1fc = fVar108;
          fStack_200 = fVar107;
          fStack_204 = fVar106;
          local_208 = fVar112;
          fVar112 = (float)local_348._0_4_ * local_208;
          fVar106 = (float)local_348._4_4_ * fStack_204;
          fVar107 = fStack_340 * fStack_200;
          fVar108 = (fVar106 + fVar112 + fVar107) * local_208 +
                    (fStack_1fc * fStack_1fc - _DAT_1467f07e0) * (float)local_348._0_4_ +
                    ((float)local_1f8._4_4_ * fStack_204 - fStack_200 * (float)local_348._4_4_) *
                    fStack_1fc;
          local_348._4_4_ =
               (fVar106 + fVar112 + fVar107) * fStack_204 +
               (fStack_1fc * fStack_1fc - fRam00000001467f07e4) * (float)local_348._4_4_ +
               (fStack_1f0 * fStack_200 - local_208 * fStack_340) * fStack_1fc;
          fStack_340 = (fVar106 + fVar112 + fVar107) * fStack_200 +
                       (fStack_1fc * fStack_1fc - fRam00000001467f07e8) * fStack_340 +
                       ((float)local_1f8._0_4_ * local_208 - fStack_204 * (float)local_348._0_4_) *
                       fStack_1fc;
          fStack_33c = (fVar106 + fVar112 + fVar107) * fStack_1fc +
                       (fStack_1fc * fStack_1fc - fRam00000001467f07ec) * fStack_33c +
                       (fStack_1ec * fStack_1fc - fStack_1fc * fStack_33c) * fStack_1fc;
          local_348._0_4_ = fVar108 + fVar108;
          local_348._4_4_ = (float)local_348._4_4_ + (float)local_348._4_4_;
          fStack_340 = fStack_340 + fStack_340;
          fStack_33c = fStack_33c + fStack_33c;
          local_278._4_4_ = local_348._4_4_;
          local_278._0_4_ = local_348._0_4_;
          fStack_270 = fStack_340;
          fStack_26c = fStack_33c;
          fStack_1f0 = (float)local_348._0_4_;
          local_1f8._0_4_ = local_348._4_4_;
          local_1f8._4_4_ = fStack_340;
          fStack_1ec = fStack_33c;
        }
        fVar110 = (float)local_1f8._0_4_ * local_408 - fStack_404 * fStack_1f0;
        fVar111 = (float)local_1f8._4_4_ * fStack_404 - fStack_400 * (float)local_1f8._0_4_;
        fVar112 = fStack_1f0 * fStack_400 - local_408 * (float)local_1f8._4_4_;
        fVar106 = fVar111 * fVar111;
        fVar107 = fVar112 * fVar112;
        auVar65._8_4_ = fVar110 * fVar110;
        auVar65._4_4_ = auVar65._8_4_;
        auVar65._0_4_ = auVar65._8_4_;
        auVar65._12_4_ = auVar65._8_4_;
        auVar88._0_4_ = fVar107 + fVar106 + auVar65._8_4_;
        auVar88._4_4_ = fVar107 + fVar106 + auVar65._8_4_;
        auVar88._8_4_ = fVar107 + fVar106 + auVar65._8_4_;
        auVar88._12_4_ = fVar107 + fVar106 + auVar65._8_4_;
        auVar78 = rsqrtps(auVar65,auVar88);
        fVar106 = auVar78._0_4_;
        fVar107 = auVar78._4_4_;
        fVar108 = auVar78._8_4_;
        fVar111 = fVar111 * (float)(~-(uint)(auVar88._0_4_ <= 0.0) &
                                   (uint)((3.0 - fVar106 * auVar88._0_4_ * fVar106) * fVar106 * 0.5)
                                   );
        fVar112 = fVar112 * (float)(~-(uint)(auVar88._4_4_ <= 0.0) &
                                   (uint)((3.0 - fVar107 * auVar88._4_4_ * fVar107) * fVar107 * 0.5)
                                   );
        fVar110 = fVar110 * (float)(~-(uint)(auVar88._8_4_ <= 0.0) &
                                   (uint)((3.0 - fVar108 * auVar88._8_4_ * fVar108) * fVar108 * 0.5)
                                   );
        auVar79._8_4_ = fVar90 * fVar110;
        auVar79._4_4_ = auVar79._8_4_;
        auVar79._0_4_ = auVar79._8_4_;
        auVar79._12_4_ = auVar79._8_4_;
        fVar52 = 0.0 - (fVar89 * fVar112 + fVar77 * fVar111 + auVar79._8_4_);
      }
      thunk_FUN_143719c70(0x7fc8bdeb);
      local_2d8 = *(undefined8 *)*param_5;
      uStack_2d0 = *(undefined8 *)(*param_5 + 8);
      local_398 = (ulonglong)(uVar23 >> 0x16);
      fVar66 = local_1c8;
      fVar71 = fStack_1c4;
      fVar98 = fStack_1c0;
      fVar99 = fStack_1bc;
      fVar106 = DAT_1467f06f0;
      fVar107 = fRam00000001467f06f4;
      fVar108 = fRam00000001467f06f8;
      fVar105 = fRam00000001467f06fc;
      lVar2 = *(longlong *)(local_398 * 0x100 + *(longlong *)(param_4 + 0x38));
    }
    local_288 = 0;
    local_290 = (int *)0x0;
    local_298 = 0xffffffff;
    local_2b8 = 0;
    local_2c0 = (int *)0x0;
    local_2c8 = 0xffffffff;
    local_2e8 = 0;
    local_2f0 = (int *)0x0;
    local_2f8[0] = 0xffffffff;
    fVar66 = 0.0;
LAB_1438590f8:
    iVar22 = local_3e0;
    lVar2 = local_3e8;
    if (local_3e8 == local_3f8) {
      local_3f0 = 0;
    }
    pvVar24 = TlsGetValue(DAT_146b7bf70);
    if (pvVar24 == (LPVOID)0x0) {
      pvVar24 = DAT_146b7bf68;
    }
    uVar23 = iVar22 * 4 + 0x7fU & 0xffffff80;
    if (((*(int *)((longlong)pvVar24 + 0x10) < (int)uVar23) ||
        ((int)uVar23 + lVar2 != *(longlong *)((longlong)pvVar24 + 0x18))) ||
       (*(longlong *)((longlong)pvVar24 + 0x28) == lVar2)) {
      FUN_143713ff0(pvVar24,lVar2);
    }
    else {
      *(longlong *)((longlong)pvVar24 + 0x18) = lVar2;
    }
    uVar25 = FUN_143703a50();
    local_3f0 = 0;
    if (-1 < (int)local_3ec) {
      FUN_143702e10(uVar25,local_3f8,4,local_3ec & 0x3fffffff);
    }
  }
  else {
    fVar66 = 0.0;
  }
  return fVar66;
}



// FUNCTION 143859240 FUN_143859240 body=415 status=ok
// SIG undefined FUN_143859240(void)

undefined8
FUN_143859240(float *param_1,float *param_2,undefined8 param_3,char param_4,float *param_5,
             float *param_6,float *param_7,longlong param_8)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  
  fVar14 = *param_2;
  fVar15 = param_2[1];
  fVar16 = param_2[2];
  local_58 = *param_1;
  fStack_54 = param_1[1];
  fStack_50 = param_1[2];
  fStack_4c = param_1[3];
  local_68 = *param_6;
  fStack_64 = param_6[1];
  fStack_60 = param_6[2];
  fStack_5c = param_6[3];
  local_78 = *param_7;
  fStack_74 = param_7[1];
  fStack_70 = param_7[2];
  fStack_6c = param_7[3];
  if (param_4 != '\0') {
    fVar2 = *param_5;
    fVar3 = param_5[1];
    fVar4 = param_5[2];
    fVar5 = param_5[3];
    fVar7 = fVar2 * local_58;
    fVar9 = fVar3 * fStack_54;
    fVar11 = fVar4 * fStack_50;
    fVar8 = fVar2 * fVar14;
    fVar10 = fVar3 * fVar15;
    fVar12 = fVar4 * fVar16;
    local_58 = local_58 - (fVar9 + fVar7 + fVar11) * fVar2;
    fStack_54 = fStack_54 - (fVar9 + fVar7 + fVar11) * fVar3;
    fStack_50 = fStack_50 - (fVar9 + fVar7 + fVar11) * fVar4;
    fStack_4c = fStack_4c - (fVar9 + fVar7 + fVar11) * fVar5;
    fVar7 = fVar2 * local_68;
    fVar9 = fVar3 * fStack_64;
    fVar11 = fVar4 * fStack_60;
    fVar14 = fVar14 - (fVar10 + fVar8 + fVar12) * fVar2;
    fVar15 = fVar15 - (fVar10 + fVar8 + fVar12) * fVar3;
    fVar16 = fVar16 - (fVar10 + fVar8 + fVar12) * fVar4;
    fVar8 = fVar2 * local_78;
    fVar10 = fVar3 * fStack_74;
    fVar12 = fVar4 * fStack_70;
    local_68 = local_68 - (fVar9 + fVar7 + fVar11) * fVar2;
    fStack_64 = fStack_64 - (fVar9 + fVar7 + fVar11) * fVar3;
    fStack_60 = fStack_60 - (fVar9 + fVar7 + fVar11) * fVar4;
    fStack_5c = fStack_5c - (fVar9 + fVar7 + fVar11) * fVar5;
    in_XMM2._0_4_ = (fVar10 + fVar8 + fVar12) * fVar2;
    in_XMM2._4_4_ = (fVar10 + fVar8 + fVar12) * fVar3;
    in_XMM2._8_4_ = (fVar10 + fVar8 + fVar12) * fVar4;
    in_XMM2._12_4_ = (fVar10 + fVar8 + fVar12) * fVar5;
    local_78 = local_78 - in_XMM2._0_4_;
    fStack_74 = fStack_74 - in_XMM2._4_4_;
    fStack_70 = fStack_70 - in_XMM2._8_4_;
    fStack_6c = fStack_6c - in_XMM2._12_4_;
  }
  local_48 = (float)(~-(uint)(fVar14 - local_58 == 0.0) & (uint)(fVar14 - local_58));
  fStack_44 = (float)(~-(uint)(fVar15 - fStack_54 == 0.0) & (uint)(fVar15 - fStack_54));
  fStack_40 = (float)(~-(uint)(fVar16 - fStack_50 == 0.0) & (uint)(fVar16 - fStack_50));
  fStack_3c = (float)(~-(uint)(*(float *)(param_8 + 0xc) == 0.0) & (uint)*(float *)(param_8 + 0xc));
  auVar1._4_4_ = fStack_44;
  auVar1._0_4_ = local_48;
  auVar1._8_4_ = fStack_40;
  auVar1._12_4_ = fStack_3c;
  auVar13 = rcpps(in_XMM2,auVar1);
  local_38._0_4_ =
       ~-(uint)(local_48 == 0.0) & (uint)((2.0 - local_48 * auVar13._0_4_) * auVar13._0_4_);
  local_38._4_4_ =
       ~-(uint)(fStack_44 == 0.0) & (uint)((2.0 - fStack_44 * auVar13._4_4_) * auVar13._4_4_);
  local_38._8_4_ =
       ~-(uint)(fStack_40 == 0.0) & (uint)((2.0 - fStack_40 * auVar13._8_4_) * auVar13._8_4_);
  local_38._12_4_ =
       ~-(uint)(fStack_3c == 0.0) & (uint)((2.0 - fStack_3c * auVar13._12_4_) * auVar13._12_4_);
  auVar13._8_4_ = -(uint)(fStack_40 == 0.0) & 0x7f7fffee;
  auVar13._0_8_ = CONCAT44(-(uint)(fStack_44 == 0.0),-(uint)(local_48 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar13._12_4_ = -(uint)(fStack_3c == 0.0) & 0x7f7fffee;
  local_38 = local_38 | auVar13;
  if (0.0 < fStack_44 * fStack_44 + local_48 * local_48 + fStack_40 * fStack_40) {
    uVar6 = FUN_143859720(&local_58,&local_68,&local_78,param_3,param_8);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 1438593e0 FUN_1438593e0 body=25 status=ok
// SIG undefined FUN_1438593e0(void)

undefined8 FUN_1438593e0(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) != '\0') {
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x3fffffff) <= *(int *)(param_1 + 0x18)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143859400 FUN_143859400 body=25 status=ok
// SIG undefined FUN_143859400(void)

undefined8 FUN_143859400(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) != '\0') {
    if ((int)(*(uint *)(param_1 + 0xc) & 0x3fffffff) <= *(int *)(param_1 + 8)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143859420 FUN_143859420 body=25 status=ok
// SIG undefined FUN_143859420(void)

undefined8 FUN_143859420(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) != '\0') {
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) <= *(int *)(param_1 + 0x28)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143859440 FUN_143859440 body=260 status=ok
// SIG undefined FUN_143859440(void)

bool FUN_143859440(undefined8 param_1,float *param_2,undefined8 param_3)

{
  int iVar1;
  LPVOID pvVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtlineOfSight");
  }
  if ((param_2[8] == -NAN) || (param_2[0x18] == -NAN)) {
    bVar3 = false;
  }
  else {
    local_18 = param_2[0x14] - *param_2;
    fStack_14 = param_2[0x15] - param_2[1];
    fStack_10 = param_2[0x16] - param_2[2];
    fVar4 = local_18 * local_18;
    fVar5 = fStack_14 * fStack_14;
    fVar6 = fStack_10 * fStack_10;
    fVar10 = fVar5 + fVar4 + fVar6;
    fVar11 = fVar5 + fVar4 + fVar6;
    fVar12 = fVar5 + fVar4 + fVar6;
    fVar6 = fVar5 + fVar4 + fVar6;
    auVar7._4_4_ = fVar11;
    auVar7._0_4_ = fVar10;
    auVar7._8_4_ = fVar12;
    auVar7._12_4_ = fVar6;
    auVar7 = rsqrtps(in_XMM2,auVar7);
    fVar4 = auVar7._0_4_;
    fVar5 = auVar7._4_4_;
    fVar8 = auVar7._8_4_;
    fVar9 = auVar7._12_4_;
    local_18 = local_18 *
               (float)(~-(uint)(fVar10 <= 0.0) &
                      (uint)((3.0 - fVar4 * fVar10 * fVar4) * fVar4 * 0.5));
    fStack_14 = fStack_14 *
                (float)(~-(uint)(fVar11 <= 0.0) &
                       (uint)((3.0 - fVar5 * fVar11 * fVar5) * fVar5 * 0.5));
    fStack_10 = fStack_10 *
                (float)(~-(uint)(fVar12 <= 0.0) &
                       (uint)((3.0 - fVar8 * fVar12 * fVar8) * fVar8 * 0.5));
    fStack_c = (param_2[0x17] - param_2[3]) *
               (float)(~-(uint)(fVar6 <= 0.0) & (uint)((3.0 - fVar9 * fVar6 * fVar9) * fVar9 * 0.5))
    ;
    iVar1 = FUN_143857520(&local_18,param_2 + 0x14,param_2[0x18],param_1,param_2,param_3);
    bVar3 = iVar1 == 9;
  }
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return bVar3;
}



// FUNCTION 143859550 FUN_143859550 body=273 status=ok
// SIG undefined FUN_143859550(void)

undefined4 FUN_143859550(undefined8 param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined1 auVar6 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtfindDirectPath");
  }
  fVar1 = param_2[0x14];
  fVar2 = param_2[0x15];
  fVar3 = param_2[0x16];
  auVar6._0_4_ = -(uint)(((uint)fVar1 & 0x7f800000) == 0x7f800000);
  auVar6._4_4_ = -(uint)(((uint)fVar2 & 0x7f800000) == 0x7f800000);
  auVar6._8_4_ = -(uint)(((uint)fVar3 & 0x7f800000) == 0x7f800000);
  auVar6._12_4_ = -(uint)(((uint)param_2[0x17] & 0x7f800000) == 0x7f800000);
  if ((((SUB161(auVar6 >> 7,0) & 1) != 0 || (SUB161(auVar6 >> 0x27,0) & 1) != 0) ||
       (SUB161(auVar6 >> 0x47,0) & 1) != 0) ||
     (0.0001 <= ABS((fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) - DAT_1467f06f0))) {
    uVar4 = 0;
  }
  else {
    local_18 = param_2[0x14] + *param_2;
    fStack_14 = param_2[0x15] + param_2[1];
    fStack_10 = param_2[0x16] + param_2[2];
    fStack_c = param_2[0x17] + param_2[3];
    uVar4 = FUN_143857520(param_2 + 0x14,&local_18,0xffffffff,param_1,param_2,param_3);
  }
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return uVar4;
}



// FUNCTION 143859670 FUN_143859670 body=172 status=ok
// SIG undefined FUN_143859670(void)

void FUN_143859670(longlong param_1,int *param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  float *pfVar22;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  iVar1 = *param_2;
  iVar2 = *(int *)(lVar3 + 0x40);
  if (iVar1 < iVar2) {
    pfVar22 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar22 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar4 = *pfVar22;
  fVar5 = pfVar22[1];
  fVar6 = pfVar22[2];
  iVar1 = param_2[1];
  if (iVar1 < iVar2) {
    pfVar22 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar22 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar7 = *pfVar22;
  fVar8 = pfVar22[1];
  fVar9 = pfVar22[2];
  fVar10 = *(float *)(param_1 + 0x54);
  fVar11 = *(float *)(param_1 + 0x58);
  fVar12 = *(float *)(param_1 + 0x5c);
  fVar13 = *(float *)(param_1 + 0x44);
  fVar14 = *(float *)(param_1 + 0x48);
  fVar15 = *(float *)(param_1 + 0x4c);
  fVar16 = *(float *)(param_1 + 100);
  fVar17 = *(float *)(param_1 + 0x68);
  fVar18 = *(float *)(param_1 + 0x6c);
  fVar19 = *(float *)(param_1 + 0x74);
  fVar20 = *(float *)(param_1 + 0x78);
  fVar21 = *(float *)(param_1 + 0x7c);
  *param_3 = fVar5 * *(float *)(param_1 + 0x50) + fVar4 * *(float *)(param_1 + 0x40) +
             fVar6 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x70);
  param_3[1] = fVar5 * fVar10 + fVar4 * fVar13 + fVar6 * fVar16 + fVar19;
  param_3[2] = fVar5 * fVar11 + fVar4 * fVar14 + fVar6 * fVar17 + fVar20;
  param_3[3] = fVar5 * fVar12 + fVar4 * fVar15 + fVar6 * fVar18 + fVar21;
  fVar4 = *(float *)(param_1 + 0x54);
  fVar5 = *(float *)(param_1 + 0x58);
  fVar6 = *(float *)(param_1 + 0x5c);
  fVar10 = *(float *)(param_1 + 0x44);
  fVar11 = *(float *)(param_1 + 0x48);
  fVar12 = *(float *)(param_1 + 0x4c);
  fVar13 = *(float *)(param_1 + 100);
  fVar14 = *(float *)(param_1 + 0x68);
  fVar15 = *(float *)(param_1 + 0x6c);
  fVar16 = *(float *)(param_1 + 0x74);
  fVar17 = *(float *)(param_1 + 0x78);
  fVar18 = *(float *)(param_1 + 0x7c);
  *param_4 = fVar8 * *(float *)(param_1 + 0x50) + fVar7 * *(float *)(param_1 + 0x40) +
             fVar9 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x70);
  param_4[1] = fVar8 * fVar4 + fVar7 * fVar10 + fVar9 * fVar13 + fVar16;
  param_4[2] = fVar8 * fVar5 + fVar7 * fVar11 + fVar9 * fVar14 + fVar17;
  param_4[3] = fVar8 * fVar6 + fVar7 * fVar12 + fVar9 * fVar15 + fVar18;
  return;
}



// FUNCTION 143859720 FUN_143859720 body=2857 status=ok
// SIG undefined FUN_143859720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_143859720(float *param_1,float *param_2,undefined1 (*param_3) [16],float *param_4,
                  float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 in_R10D;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar33;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar46;
  float fVar50;
  undefined1 auVar38 [16];
  float fVar47;
  float fVar51;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar48;
  float fVar52;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar49;
  float fVar53;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar54;
  float fVar55;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar61;
  float fVar62;
  float fVar70;
  float fVar72;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar71;
  float fVar73;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar96 [16];
  uint uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  float local_f8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  auVar15 = *param_3;
  fVar92 = *param_1;
  fVar93 = param_1[1];
  fVar94 = param_1[2];
  fVar95 = *param_2;
  fVar86 = param_2[1];
  fVar37 = param_2[2];
  fVar78 = fVar95 - auVar15._0_4_;
  fVar80 = fVar86 - auVar15._4_4_;
  fVar82 = fVar37 - auVar15._8_4_;
  fVar21 = fVar78 * fVar78;
  fVar29 = fVar80 * fVar80;
  fVar31 = fVar82 * fVar82;
  auVar63._0_4_ = fVar29 + fVar21 + fVar31;
  auVar63._4_4_ = fVar29 + fVar21 + fVar31;
  auVar63._8_4_ = fVar29 + fVar21 + fVar31;
  auVar63._12_4_ = fVar29 + fVar21 + fVar31;
  fVar21 = fVar78 * (fVar95 - fVar92);
  fVar29 = fVar80 * (fVar86 - fVar93);
  fVar31 = fVar82 * (fVar37 - fVar94);
  auVar11._4_4_ = fVar21;
  auVar11._0_4_ = fVar21;
  auVar11._8_4_ = fVar21;
  auVar11._12_4_ = fVar21;
  auVar11 = rcpps(auVar11,auVar63);
  fVar34 = (2.0 - auVar63._0_4_ * auVar11._0_4_) * auVar11._0_4_ * (fVar29 + fVar21 + fVar31);
  fVar46 = (2.0 - auVar63._4_4_ * auVar11._4_4_) * auVar11._4_4_ * (fVar29 + fVar21 + fVar31);
  fVar50 = (2.0 - auVar63._8_4_ * auVar11._8_4_) * auVar11._8_4_ * (fVar29 + fVar21 + fVar31);
  fVar29 = (2.0 - auVar63._12_4_ * auVar11._12_4_) * auVar11._12_4_ * (fVar29 + fVar21 + fVar31);
  fVar21 = param_4[3];
  fVar89 = *param_4 * *param_4;
  fVar90 = param_4[1] * param_4[1];
  fVar91 = param_4[2] * param_4[2];
  uVar5 = -(uint)(fVar34 < DAT_1467f06f0);
  uVar6 = -(uint)(fVar46 < fRam00000001467f06f4);
  uVar7 = -(uint)(fVar50 < fRam00000001467f06f8);
  uVar9 = -(uint)(fVar29 < fRam00000001467f06fc);
  auVar38._0_4_ = (uint)fVar34 & uVar5;
  auVar38._4_4_ = (uint)fVar46 & uVar6;
  auVar38._8_4_ = (uint)fVar50 & uVar7;
  auVar38._12_4_ = (uint)fVar29 & uVar9;
  auVar12._0_4_ = ~uVar5 & (uint)DAT_1467f06f0;
  auVar12._4_4_ = ~uVar6 & (uint)fRam00000001467f06f4;
  auVar12._8_4_ = ~uVar7 & (uint)fRam00000001467f06f8;
  auVar12._12_4_ = ~uVar9 & (uint)fRam00000001467f06fc;
  auVar11 = maxps(ZEXT816(0),auVar38 | auVar12);
  fVar29 = (fVar95 - fVar92) - fVar78 * auVar11._0_4_;
  fVar31 = (fVar86 - fVar93) - fVar80 * auVar11._4_4_;
  fVar34 = (fVar37 - fVar94) - fVar82 * auVar11._8_4_;
  if (fVar31 * fVar31 + fVar29 * fVar29 + fVar34 * fVar34 < fVar89) {
    param_5[0] = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[3] = 0.0;
    return 1;
  }
  fVar29 = auVar15._0_4_ - fVar95;
  fVar31 = auVar15._4_4_ - fVar86;
  fVar34 = auVar15._8_4_ - fVar37;
  if (fVar31 * fVar31 + fVar29 * fVar29 + fVar34 * fVar34 <= 0.0) {
    fVar29 = param_1[4];
    fVar31 = param_1[5];
    fVar34 = param_1[6];
    fVar92 = fVar92 - fVar95;
    fVar93 = fVar93 - fVar86;
    fVar94 = fVar94 - fVar37;
    fVar50 = fVar29 * fVar92;
    fVar78 = fVar31 * fVar93;
    fVar80 = fVar34 * fVar94;
    fVar86 = 0.0 - (fVar78 + fVar50 + fVar80);
    fVar82 = 0.0 - (fVar78 + fVar50 + fVar80);
    fVar89 = 0.0 - (fVar78 + fVar50 + fVar80);
    fVar95 = fVar29 * fVar29;
    fVar37 = fVar31 * fVar31;
    fVar46 = fVar34 * fVar34;
    auVar77._0_4_ = fVar37 + fVar95 + fVar46;
    auVar77._4_4_ = fVar37 + fVar95 + fVar46;
    auVar77._8_4_ = fVar37 + fVar95 + fVar46;
    auVar77._12_4_ = fVar37 + fVar95 + fVar46;
    auVar11 = rcpps(auVar15,auVar77);
    uVar5 = -(uint)(auVar77._0_4_ == 0.0);
    uVar6 = -(uint)(auVar77._4_4_ == 0.0);
    uVar7 = -(uint)(auVar77._8_4_ == 0.0);
    auVar15._4_4_ = uVar6;
    auVar15._0_4_ = uVar5;
    auVar15._8_4_ = uVar7;
    auVar15._12_4_ = -(uint)(auVar77._12_4_ == 0.0);
    fVar46 = auVar11._0_4_;
    fVar90 = auVar11._4_4_;
    fVar91 = auVar11._8_4_;
    fVar95 = (float)(~uVar5 & (uint)((2.0 - auVar77._0_4_ * fVar46) * fVar46 * fVar86) |
                    uVar5 & 0x7f7fffee) * fVar29 + fVar92;
    fVar37 = (float)(~uVar6 & (uint)((2.0 - auVar77._4_4_ * fVar90) * fVar90 * fVar82) |
                    uVar6 & 0x7f7fffee) * fVar31 + fVar93;
    fVar29 = (float)(~uVar7 & (uint)((2.0 - auVar77._8_4_ * fVar91) * fVar91 * fVar89) |
                    uVar7 & 0x7f7fffee) * fVar34 + fVar94;
    fVar95 = fVar95 * fVar95;
    fVar37 = fVar37 * fVar37;
    fVar29 = fVar29 * fVar29;
    auVar69._0_4_ = ((fVar37 + fVar95 + fVar29) - fVar21 * fVar21) * (0.0 - auVar77._0_4_);
    auVar69._4_4_ = ((fVar37 + fVar95 + fVar29) - fVar21 * fVar21) * (0.0 - auVar77._4_4_);
    auVar69._8_4_ = ((fVar37 + fVar95 + fVar29) - fVar21 * fVar21) * (0.0 - auVar77._8_4_);
    auVar69._12_4_ = ((fVar37 + fVar95 + fVar29) - fVar21 * fVar21) * (0.0 - auVar77._12_4_);
    if (0.0 <= auVar69._0_4_) {
      auVar15 = rsqrtps(auVar15,auVar69);
      fVar95 = auVar15._0_4_;
      fVar37 = auVar15._4_4_;
      fVar29 = auVar15._8_4_;
      fVar31 = auVar15._12_4_;
      fVar86 = (0.0 - (float)(~-(uint)(auVar69._0_4_ <= 0.0) &
                             (uint)((3.0 - auVar69._0_4_ * fVar95 * fVar95) * fVar95 * 0.5 *
                                   auVar69._0_4_))) + fVar86;
      if (fVar86 < *param_5 * auVar77._0_4_ && 0.0 <= fVar86) {
        *param_5 = (2.0 - auVar77._0_4_ * fVar46) * fVar46 * fVar86;
        param_5[1] = (2.0 - auVar77._4_4_ * fVar90) * fVar90 *
                     ((0.0 - (float)(~-(uint)(auVar69._4_4_ <= 0.0) &
                                    (uint)((3.0 - auVar69._4_4_ * fVar37 * fVar37) * fVar37 * 0.5 *
                                          auVar69._4_4_))) + fVar82);
        param_5[2] = (2.0 - auVar77._8_4_ * fVar91) * fVar91 *
                     ((0.0 - (float)(~-(uint)(auVar69._8_4_ <= 0.0) &
                                    (uint)((3.0 - auVar69._8_4_ * fVar29 * fVar29) * fVar29 * 0.5 *
                                          auVar69._8_4_))) + fVar89);
        param_5[3] = (2.0 - auVar77._12_4_ * auVar11._12_4_) * auVar11._12_4_ *
                     ((0.0 - (float)(~-(uint)(auVar69._12_4_ <= 0.0) &
                                    (uint)((3.0 - auVar69._12_4_ * fVar31 * fVar31) * fVar31 * 0.5 *
                                          auVar69._12_4_))) + (0.0 - (fVar78 + fVar50 + fVar80)));
        if (fVar93 * fVar93 + fVar92 * fVar92 + fVar94 * fVar94 <= fVar21 * fVar21) {
          uVar5 = movmskps(in_R10D,ZEXT816(0));
          return uVar5 & 4 | 1;
        }
        return 2;
      }
    }
                    /* WARNING: Read-only address (ram,0x000145b8de60) is written */
    return 0;
  }
  fVar46 = param_1[4];
  fVar50 = param_1[5];
  fVar33 = param_1[6];
  auVar13._4_4_ = -(uint)(fVar50 == 0.0);
  auVar13._0_4_ = -(uint)(fVar46 == 0.0);
  auVar13._8_4_ = -(uint)(fVar33 == 0.0);
  auVar13._12_4_ = -(uint)(param_1[7] == 0.0);
  uVar5 = movmskps((int)&stack0x00000000,auVar13);
  if ((char)(uVar5 & 7) == '\a') {
    return 0;
  }
  fVar22 = fVar78 * fVar78;
  fVar30 = fVar80 * fVar80;
  fVar32 = fVar82 * fVar82;
  uVar6 = 2;
  local_f8 = (float)*(undefined8 *)param_5;
  uVar97 = 0;
  uVar98 = 0;
  uVar99 = 0;
  uVar100 = 0;
  local_e8 = DAT_1467f06f0;
  fStack_e4 = fRam00000001467f06f4;
  fStack_e0 = fRam00000001467f06f8;
  fStack_dc = fRam00000001467f06fc;
  auVar64._0_4_ = fVar30 + fVar22 + fVar32;
  auVar64._4_4_ = fVar30 + fVar22 + fVar32;
  auVar64._8_4_ = fVar30 + fVar22 + fVar32;
  auVar64._12_4_ = fVar30 + fVar22 + fVar32;
  fVar22 = (fVar95 - fVar92) * fVar78;
  fVar30 = (fVar86 - fVar93) * fVar80;
  fVar32 = (fVar37 - fVar94) * fVar82;
  auVar14._4_4_ = fVar22;
  auVar14._0_4_ = fVar22;
  auVar14._8_4_ = fVar22;
  auVar14._12_4_ = fVar22;
  auVar15 = rcpps(auVar14,auVar64);
  fVar35 = (2.0 - auVar64._0_4_ * auVar15._0_4_) * auVar15._0_4_ * (fVar30 + fVar22 + fVar32);
  fVar47 = (2.0 - auVar64._4_4_ * auVar15._4_4_) * auVar15._4_4_ * (fVar30 + fVar22 + fVar32);
  fVar51 = (2.0 - auVar64._8_4_ * auVar15._8_4_) * auVar15._8_4_ * (fVar30 + fVar22 + fVar32);
  fVar22 = (2.0 - auVar64._12_4_ * auVar15._12_4_) * auVar15._12_4_ * (fVar30 + fVar22 + fVar32);
  uVar7 = -(uint)(fVar35 < DAT_1467f06f0);
  uVar9 = -(uint)(fVar47 < fRam00000001467f06f4);
  uVar8 = -(uint)(fVar51 < fRam00000001467f06f8);
  uVar10 = -(uint)(fVar22 < fRam00000001467f06fc);
  auVar16._0_4_ = uVar7 & (uint)fVar35;
  auVar16._4_4_ = uVar9 & (uint)fVar47;
  auVar16._8_4_ = uVar8 & (uint)fVar51;
  auVar16._12_4_ = uVar10 & (uint)fVar22;
  auVar23._0_4_ = ~uVar7 & (uint)DAT_1467f06f0;
  auVar23._4_4_ = ~uVar9 & (uint)fRam00000001467f06f4;
  auVar23._8_4_ = ~uVar8 & (uint)fRam00000001467f06f8;
  auVar23._12_4_ = ~uVar10 & (uint)fRam00000001467f06fc;
  auVar15 = maxps(ZEXT816(0),auVar23 | auVar16);
  fVar22 = (fVar95 - fVar92) - auVar15._0_4_ * fVar78;
  fVar30 = (fVar86 - fVar93) - auVar15._4_4_ * fVar80;
  fVar32 = (fVar37 - fVar94) - auVar15._8_4_ * fVar82;
  fVar22 = fVar22 * fVar22;
  fVar30 = fVar30 * fVar30;
  fVar32 = fVar32 * fVar32;
  auVar24._4_4_ = -(uint)(fVar30 + fVar22 + fVar32 < fVar90);
  auVar24._0_4_ = -(uint)(fVar30 + fVar22 + fVar32 < fVar89);
  auVar24._8_4_ = -(uint)(fVar30 + fVar22 + fVar32 < fVar91);
  auVar24._12_4_ = -(uint)(fVar30 + fVar22 + fVar32 < fVar21 * fVar21);
  iVar4 = movmskps(uVar5 & 7,auVar24);
  if (iVar4 == 0xf) {
    uVar6 = 5;
    iVar4 = movmskps(0xf,_DAT_145b8de60);
    if (iVar4 != 0xf) {
      return 0;
    }
    fVar22 = fVar78 * fVar78;
    fVar30 = fVar80 * fVar80;
    fVar32 = fVar82 * fVar82;
    fVar35 = fVar95 - (*param_5 * fVar46 + fVar92);
    fVar47 = fVar86 - (param_5[1] * fVar50 + fVar93);
    fVar51 = fVar37 - (param_5[2] * fVar33 + fVar94);
    auVar65._0_4_ = fVar30 + fVar22 + fVar32;
    auVar65._4_4_ = fVar30 + fVar22 + fVar32;
    auVar65._8_4_ = fVar30 + fVar22 + fVar32;
    auVar65._12_4_ = fVar30 + fVar22 + fVar32;
    fVar46 = fVar35 * fVar78;
    fVar50 = fVar47 * fVar80;
    fVar33 = fVar51 * fVar82;
    auVar17._4_4_ = fVar46;
    auVar17._0_4_ = fVar46;
    auVar17._8_4_ = fVar46;
    auVar17._12_4_ = fVar46;
    auVar15 = rcpps(auVar17,auVar65);
    auVar39._0_4_ =
         (2.0 - auVar65._0_4_ * auVar15._0_4_) * auVar15._0_4_ * (fVar50 + fVar46 + fVar33);
    auVar39._4_4_ =
         (2.0 - auVar65._4_4_ * auVar15._4_4_) * auVar15._4_4_ * (fVar50 + fVar46 + fVar33);
    auVar39._8_4_ =
         (2.0 - auVar65._8_4_ * auVar15._8_4_) * auVar15._8_4_ * (fVar50 + fVar46 + fVar33);
    auVar39._12_4_ =
         (2.0 - auVar65._12_4_ * auVar15._12_4_) * auVar15._12_4_ * (fVar50 + fVar46 + fVar33);
    auVar18._0_4_ = -(uint)(auVar39._0_4_ < DAT_1467f06f0) & (uint)auVar39._0_4_;
    auVar18._4_4_ = -(uint)(auVar39._4_4_ < fRam00000001467f06f4) & (uint)auVar39._4_4_;
    auVar18._8_4_ = -(uint)(auVar39._8_4_ < fRam00000001467f06f8) & (uint)auVar39._8_4_;
    auVar18._12_4_ = -(uint)(auVar39._12_4_ < fRam00000001467f06fc) & (uint)auVar39._12_4_;
    auVar25._0_4_ = ~-(uint)(auVar39._0_4_ < DAT_1467f06f0) & (uint)DAT_1467f06f0;
    auVar25._4_4_ = ~-(uint)(auVar39._4_4_ < fRam00000001467f06f4) & (uint)fRam00000001467f06f4;
    auVar25._8_4_ = ~-(uint)(auVar39._8_4_ < fRam00000001467f06f8) & (uint)fRam00000001467f06f8;
    auVar25._12_4_ = ~-(uint)(auVar39._12_4_ < fRam00000001467f06fc) & (uint)fRam00000001467f06fc;
    auVar15 = maxps(ZEXT816(0),auVar25 | auVar18);
    fVar46 = param_1[4] * param_1[4];
    fVar50 = param_1[5] * param_1[5];
    fVar33 = param_1[6] * param_1[6];
    uVar100 = 0xffffffff;
    uVar97 = 0xffffffff;
    uVar98 = 0xffffffff;
    uVar99 = 0xffffffff;
    fVar35 = fVar35 - auVar15._0_4_ * fVar78;
    fVar47 = fVar47 - auVar15._4_4_ * fVar80;
    fVar51 = fVar51 - auVar15._8_4_ * fVar82;
    auVar56._0_4_ = fVar50 + fVar46 + fVar33;
    auVar56._4_4_ = fVar50 + fVar46 + fVar33;
    auVar56._8_4_ = fVar50 + fVar46 + fVar33;
    auVar56._12_4_ = fVar50 + fVar46 + fVar33;
    auVar15 = rsqrtps(auVar39,auVar56);
    fVar46 = auVar15._0_4_;
    fVar50 = auVar15._4_4_;
    fVar78 = auVar15._8_4_;
    fVar80 = auVar15._12_4_;
    auVar40._0_4_ = fVar46 * 0.5;
    auVar40._4_4_ = fVar50 * 0.5;
    auVar40._8_4_ = fVar78 * 0.5;
    auVar40._12_4_ = fVar80 * 0.5;
    auVar74._0_4_ =
         (float)(~-(uint)(auVar56._0_4_ <= 0.0) &
                (uint)((3.0 - fVar46 * auVar56._0_4_ * fVar46) * auVar40._0_4_ * auVar56._0_4_));
    auVar74._4_4_ =
         (float)(~-(uint)(auVar56._4_4_ <= 0.0) &
                (uint)((3.0 - fVar50 * auVar56._4_4_ * fVar50) * auVar40._4_4_ * auVar56._4_4_));
    auVar74._8_4_ =
         (float)(~-(uint)(auVar56._8_4_ <= 0.0) &
                (uint)((3.0 - fVar78 * auVar56._8_4_ * fVar78) * auVar40._8_4_ * auVar56._8_4_));
    auVar74._12_4_ =
         (float)(~-(uint)(auVar56._12_4_ <= 0.0) &
                (uint)((3.0 - fVar80 * auVar56._12_4_ * fVar80) * auVar40._12_4_ * auVar56._12_4_));
    fVar46 = fVar29 * fVar29;
    fVar50 = fVar31 * fVar31;
    fVar78 = fVar34 * fVar34;
    auVar57._0_4_ = fVar50 + fVar46 + fVar78;
    auVar57._4_4_ = fVar50 + fVar46 + fVar78;
    auVar57._8_4_ = fVar50 + fVar46 + fVar78;
    auVar57._12_4_ = fVar50 + fVar46 + fVar78;
    auVar15 = rsqrtps(auVar40,auVar57);
    fVar46 = auVar15._0_4_;
    fVar50 = auVar15._4_4_;
    fVar78 = auVar15._8_4_;
    fVar80 = auVar15._12_4_;
    local_f8 = DAT_1467f06f0;
    auVar41._0_4_ = fVar46 * 0.5;
    auVar41._4_4_ = fVar50 * 0.5;
    auVar41._8_4_ = fVar78 * 0.5;
    auVar41._12_4_ = fVar80 * 0.5;
    auVar15 = rcpps(auVar41,auVar74);
    auVar66._0_4_ =
         (float)(~-(uint)(auVar57._0_4_ <= 0.0) &
                (uint)((3.0 - fVar46 * auVar57._0_4_ * fVar46) * auVar41._0_4_ * auVar57._0_4_)) +
         *param_4 * _DAT_1467f0720;
    auVar66._4_4_ =
         (float)(~-(uint)(auVar57._4_4_ <= 0.0) &
                (uint)((3.0 - fVar50 * auVar57._4_4_ * fVar50) * auVar41._4_4_ * auVar57._4_4_)) +
         param_4[1] * fRam00000001467f0724;
    auVar66._8_4_ =
         (float)(~-(uint)(auVar57._8_4_ <= 0.0) &
                (uint)((3.0 - fVar78 * auVar57._8_4_ * fVar78) * auVar41._8_4_ * auVar57._8_4_)) +
         param_4[2] * fRam00000001467f0728;
    auVar66._12_4_ =
         (float)(~-(uint)(auVar57._12_4_ <= 0.0) &
                (uint)((3.0 - fVar80 * auVar57._12_4_ * fVar80) * auVar41._12_4_ * auVar57._12_4_))
         + param_4[3] * fRam00000001467f072c;
    auVar2._4_4_ = param_5[1] * auVar74._4_4_;
    auVar2._0_4_ = *param_5 * auVar74._0_4_;
    auVar2._8_4_ = param_5[2] * auVar74._8_4_;
    auVar2._12_4_ = param_5[3] * auVar74._12_4_;
    auVar11 = minps(auVar66,auVar2);
    local_e8 = (float)(~-(uint)(auVar74._0_4_ == 0.0) &
                      (uint)((2.0 - auVar15._0_4_ * auVar74._0_4_) * auVar15._0_4_ * auVar11._0_4_))
    ;
    fStack_e4 = (float)(~-(uint)(auVar74._4_4_ == 0.0) &
                       (uint)((2.0 - auVar15._4_4_ * auVar74._4_4_) * auVar15._4_4_ * auVar11._4_4_)
                       );
    fStack_e0 = (float)(~-(uint)(auVar74._8_4_ == 0.0) &
                       (uint)((2.0 - auVar15._8_4_ * auVar74._8_4_) * auVar15._8_4_ * auVar11._8_4_)
                       );
    fStack_dc = (float)(~-(uint)(auVar74._12_4_ == 0.0) &
                       (uint)((2.0 - auVar15._12_4_ * auVar74._12_4_) * auVar15._12_4_ *
                             auVar11._12_4_));
    fVar46 = -(param_1[4] * local_e8);
    fVar50 = -(param_1[5] * fStack_e4);
    fVar33 = -(param_1[6] * fStack_e0);
    fVar92 = fVar92 - -(param_1[4] * local_e8);
    fVar93 = fVar93 - -(param_1[5] * fStack_e4);
    fVar94 = fVar94 - fVar33;
    if (fVar47 * fVar47 + fVar35 * fVar35 + fVar51 * fVar51 < fVar89) {
      return 0;
    }
  }
  fVar61 = fVar46 * fVar46;
  fVar70 = fVar50 * fVar50;
  fVar72 = fVar33 * fVar33;
  fVar78 = fVar46 * fVar29;
  fVar80 = fVar50 * fVar31;
  fVar30 = fVar33 * fVar34;
  fVar54 = (fVar95 - fVar92) * fVar46;
  fVar58 = (fVar86 - fVar93) * fVar50;
  fVar60 = (fVar37 - fVar94) * fVar33;
  fVar47 = (fVar95 - fVar92) * fVar29;
  fVar48 = (fVar86 - fVar93) * fVar31;
  fVar52 = (fVar37 - fVar94) * fVar34;
  fVar85 = fVar80 + fVar78 + fVar30;
  fVar87 = fVar80 + fVar78 + fVar30;
  fVar88 = fVar80 + fVar78 + fVar30;
  fVar30 = fVar80 + fVar78 + fVar30;
  fVar35 = fVar48 + fVar47 + fVar52;
  fVar51 = fVar48 + fVar47 + fVar52;
  fVar83 = fVar48 + fVar47 + fVar52;
  fVar62 = fVar29 * fVar29;
  fVar71 = fVar31 * fVar31;
  fVar73 = fVar34 * fVar34;
  auVar75._0_4_ = fVar71 + fVar62 + fVar73;
  auVar75._4_4_ = fVar71 + fVar62 + fVar73;
  auVar75._8_4_ = fVar71 + fVar62 + fVar73;
  auVar75._12_4_ = fVar71 + fVar62 + fVar73;
  fVar78 = auVar75._0_4_ * (fVar70 + fVar61 + fVar72);
  fVar80 = auVar75._4_4_ * (fVar70 + fVar61 + fVar72);
  fVar82 = auVar75._8_4_ * (fVar70 + fVar61 + fVar72);
  fVar22 = auVar75._12_4_ * (fVar70 + fVar61 + fVar72);
  auVar42._0_4_ = fVar78 - fVar85 * fVar85;
  auVar42._4_4_ = fVar80 - fVar87 * fVar87;
  auVar42._8_4_ = fVar82 - fVar88 * fVar88;
  auVar42._12_4_ = fVar22 - fVar30 * fVar30;
  auVar19._0_4_ = fVar85 * fVar85 + fVar78;
  auVar19._4_4_ = fVar87 * fVar87 + fVar80;
  auVar19._8_4_ = fVar88 * fVar88 + fVar82;
  auVar19._12_4_ = fVar30 * fVar30 + fVar22;
  auVar15 = rcpps(auVar19,auVar42);
  uVar5 = -(uint)(_DAT_1467f08f0 * _DAT_1467f0760 * auVar19._0_4_ < auVar42._0_4_);
  uVar7 = -(uint)(fRam00000001467f08f4 * fRam00000001467f0764 * auVar19._4_4_ < auVar42._4_4_);
  uVar9 = -(uint)(fRam00000001467f08f8 * fRam00000001467f0768 * auVar19._8_4_ < auVar42._8_4_);
  uVar8 = -(uint)(fRam00000001467f08fc * fRam00000001467f076c * auVar19._12_4_ < auVar42._12_4_);
  auVar11 = rcpps(auVar15,auVar75);
  fVar78 = (float)((uint)((2.0 - auVar42._0_4_ * auVar15._0_4_) * auVar15._0_4_ *
                         ((fVar58 + fVar54 + fVar60) * auVar75._0_4_ - fVar35 * fVar85)) & uVar5 |
                  ~uVar5 & (uint)DAT_1467f06f0);
  fVar82 = (float)((uint)((2.0 - auVar42._4_4_ * auVar15._4_4_) * auVar15._4_4_ *
                         ((fVar58 + fVar54 + fVar60) * auVar75._4_4_ - fVar51 * fVar87)) & uVar7 |
                  ~uVar7 & (uint)fRam00000001467f06f4);
  fVar32 = (float)((uint)((2.0 - auVar42._8_4_ * auVar15._8_4_) * auVar15._8_4_ *
                         ((fVar58 + fVar54 + fVar60) * auVar75._8_4_ - fVar83 * fVar88)) & uVar9 |
                  ~uVar9 & (uint)fRam00000001467f06f8);
  fVar80 = (fVar78 * fVar46 + fVar92) -
           ((2.0 - auVar75._0_4_ * auVar11._0_4_) * auVar11._0_4_ * (fVar78 * fVar85 - fVar35) *
            fVar29 + fVar95);
  fVar22 = (fVar82 * fVar50 + fVar93) -
           ((2.0 - auVar75._4_4_ * auVar11._4_4_) * auVar11._4_4_ * (fVar82 * fVar87 - fVar51) *
            fVar31 + fVar86);
  fVar35 = (fVar32 * fVar33 + fVar94) -
           ((2.0 - auVar75._8_4_ * auVar11._8_4_) * auVar11._8_4_ * (fVar32 * fVar88 - fVar83) *
            fVar34 + fVar37);
  fVar80 = fVar80 * fVar80;
  fVar22 = fVar22 * fVar22;
  fVar35 = fVar35 * fVar35;
  fVar51 = fVar22 + fVar80 + fVar35;
  if (fVar51 <= fVar89) {
    auVar26._4_4_ = fVar73;
    auVar26._0_4_ = fVar73;
    auVar26._8_4_ = fVar73;
    auVar26._12_4_ = fVar73;
    uVar5 = -(uint)(_DAT_1467f08f0 < fVar71 + fVar62 + fVar73);
    uVar7 = -(uint)(fRam00000001467f08f4 < fVar71 + fVar62 + fVar73);
    uVar9 = -(uint)(fRam00000001467f08f8 < fVar71 + fVar62 + fVar73);
    auVar43._0_4_ = fVar71 + fVar62 + fVar73;
    auVar43._4_4_ = fVar71 + fVar62 + fVar73;
    auVar43._8_4_ = fVar71 + fVar62 + fVar73;
    auVar43._12_4_ = fVar71 + fVar62 + fVar73;
    auVar11 = rsqrtps(auVar26,auVar43);
    fVar83 = auVar11._0_4_;
    fVar85 = auVar11._4_4_;
    fVar87 = auVar11._8_4_;
    fVar88 = auVar11._12_4_;
    fVar83 = (3.0 - auVar43._0_4_ * fVar83 * fVar83) * fVar83 * 0.5;
    fVar85 = (3.0 - auVar43._4_4_ * fVar85 * fVar85) * fVar85 * 0.5;
    fVar87 = (3.0 - auVar43._8_4_ * fVar87 * fVar87) * fVar87 * 0.5;
    fVar79 = (float)((uint)(fVar83 * fVar29) & uVar5);
    fVar81 = (float)((uint)(fVar85 * fVar31) & uVar7);
    fVar84 = (float)((uint)(fVar87 * fVar34) & uVar9);
    fVar36 = fVar79 * fVar46;
    fVar49 = fVar81 * fVar50;
    fVar53 = fVar84 * fVar33;
    fVar83 = (float)((uint)(fVar83 * auVar43._0_4_) & uVar5);
    fVar85 = (float)((uint)(fVar85 * auVar43._4_4_) & uVar7);
    fVar87 = (float)((uint)(fVar87 * auVar43._8_4_) & uVar9);
    fVar55 = (0.0 - (fVar49 + fVar36 + fVar53)) * fVar79 + fVar46;
    fVar59 = (0.0 - (fVar49 + fVar36 + fVar53)) * fVar81 + fVar50;
    fVar36 = (0.0 - (fVar49 + fVar36 + fVar53)) * fVar84 + fVar33;
    fVar55 = fVar55 * fVar55;
    fVar59 = fVar59 * fVar59;
    fVar36 = fVar36 * fVar36;
    auVar20._4_4_ = fVar55;
    auVar20._0_4_ = fVar55;
    auVar20._8_4_ = fVar55;
    auVar20._12_4_ = fVar55;
    auVar44._0_4_ = fVar59 + fVar55 + fVar36;
    auVar44._4_4_ = fVar59 + fVar55 + fVar36;
    auVar44._8_4_ = fVar59 + fVar55 + fVar36;
    auVar44._12_4_ = fVar59 + fVar55 + fVar36;
    auVar11 = rcpps(auVar20,auVar44);
    auVar45._0_4_ = auVar44._0_4_ * auVar11._0_4_;
    auVar45._4_4_ = auVar44._4_4_ * auVar11._4_4_;
    auVar45._8_4_ = auVar44._8_4_ * auVar11._8_4_;
    auVar45._12_4_ = auVar44._12_4_ * auVar11._12_4_;
    auVar67._0_4_ = (2.0 - auVar45._0_4_) * auVar11._0_4_ * (fVar89 - fVar51);
    auVar67._4_4_ = (2.0 - auVar45._4_4_) * auVar11._4_4_ * (fVar90 - (fVar22 + fVar80 + fVar35));
    auVar67._8_4_ = (2.0 - auVar45._8_4_) * auVar11._8_4_ * (fVar91 - (fVar22 + fVar80 + fVar35));
    auVar67._12_4_ =
         (2.0 - auVar45._12_4_) * auVar11._12_4_ * (fVar21 * fVar21 - (fVar22 + fVar80 + fVar35));
    auVar11 = rsqrtps(auVar45,auVar67);
    fVar21 = auVar11._0_4_;
    fVar80 = auVar11._4_4_;
    fVar90 = auVar11._8_4_;
    fVar91 = auVar11._12_4_;
    fVar21 = (float)(~-(uint)(auVar44._0_4_ == 0.0) &
                     (uint)(fVar78 - (float)(~-(uint)(auVar67._0_4_ <= 0.0) &
                                            (uint)((3.0 - auVar67._0_4_ * fVar21 * fVar21) *
                                                   fVar21 * 0.5 * auVar67._0_4_))) |
                    -(uint)(auVar44._0_4_ == 0.0) & _DAT_1467f06d0);
    fVar78 = (float)(~-(uint)(auVar44._4_4_ == 0.0) &
                     (uint)(fVar82 - (float)(~-(uint)(auVar67._4_4_ <= 0.0) &
                                            (uint)((3.0 - auVar67._4_4_ * fVar80 * fVar80) *
                                                   fVar80 * 0.5 * auVar67._4_4_))) |
                    -(uint)(auVar44._4_4_ == 0.0) & uRam00000001467f06d4);
    fVar80 = (float)(~-(uint)(auVar44._8_4_ == 0.0) &
                     (uint)(fVar32 - (float)(~-(uint)(auVar67._8_4_ <= 0.0) &
                                            (uint)((3.0 - auVar67._8_4_ * fVar90 * fVar90) *
                                                   fVar90 * 0.5 * auVar67._8_4_))) |
                    -(uint)(auVar44._8_4_ == 0.0) & uRam00000001467f06d8);
    fVar82 = (float)(~-(uint)(auVar44._12_4_ == 0.0) &
                     (uint)((float)((uint)((2.0 - auVar42._12_4_ * auVar15._12_4_) * auVar15._12_4_
                                          * ((fVar58 + fVar54 + fVar60) * auVar75._12_4_ -
                                            (fVar48 + fVar47 + fVar52) * fVar30)) & uVar8 |
                                   ~uVar8 & (uint)fRam00000001467f06fc) -
                           (float)(~-(uint)(auVar67._12_4_ <= 0.0) &
                                  (uint)((3.0 - auVar67._12_4_ * fVar91 * fVar91) * fVar91 * 0.5 *
                                        auVar67._12_4_))) |
                    -(uint)(auVar44._12_4_ == 0.0) & uRam00000001467f06dc);
    if (fVar21 < local_f8) {
      auVar3._4_4_ = fVar85;
      auVar3._0_4_ = fVar83;
      auVar3._8_4_ = fVar87;
      auVar3._12_4_ =
           (uint)((3.0 - auVar43._12_4_ * fVar88 * fVar88) * fVar88 * 0.5 * auVar43._12_4_) &
           -(uint)(fRam00000001467f08fc < fVar71 + fVar62 + fVar73);
      fVar90 = fVar95 * fVar79;
      fVar22 = fVar86 * fVar81;
      fVar32 = fVar37 * fVar84;
      fVar35 = fVar22 + fVar90 + fVar32;
      fVar47 = fVar22 + fVar90 + fVar32;
      fVar51 = fVar22 + fVar90 + fVar32;
      fVar91 = (fVar21 * fVar46 + fVar92) * fVar79;
      fVar30 = (fVar78 * fVar50 + fVar93) * fVar81;
      auVar27._8_4_ = (fVar80 * fVar33 + fVar94) * fVar84;
      auVar27._4_4_ = auVar27._8_4_;
      auVar27._0_4_ = auVar27._8_4_;
      auVar27._12_4_ = auVar27._8_4_;
      fVar48 = (fVar30 + fVar91 + auVar27._8_4_) - fVar35;
      if (((0.0 <= fVar21) && (0.0 < fVar48)) && (fVar48 < fVar83)) {
        fVar92 = fRam00000001467f06f4 - fVar78;
        fVar93 = fRam00000001467f06f8 - fVar80;
        fVar94 = fRam00000001467f06fc - fVar82;
        *param_5 = (float)((uint)((DAT_1467f06f0 - fVar21) * local_e8) & uVar97 |
                          ~uVar97 & (uint)fVar21);
        param_5[1] = (float)((uint)(fVar92 * fStack_e4) & uVar98 | ~uVar98 & (uint)fVar78);
        param_5[2] = (float)((uint)(fVar93 * fStack_e0) & uVar99 | ~uVar99 & (uint)fVar80);
        param_5[3] = (float)((uint)(fVar94 * fStack_dc) & uVar100 | ~uVar100 & (uint)fVar82);
        return uVar6;
      }
      fVar79 = fVar79 * fVar92;
      fVar81 = fVar81 * fVar93;
      fVar84 = fVar84 * fVar94;
      auVar15 = rcpps(auVar27,auVar3);
      fVar29 = fVar92 - (fVar29 * (2.0 - auVar15._0_4_ * fVar83) * auVar15._0_4_ *
                                  ((fVar81 + fVar79 + fVar84) - fVar35) + fVar95);
      fVar31 = fVar93 - (fVar31 * (2.0 - auVar15._4_4_ * fVar85) * auVar15._4_4_ *
                                  ((fVar81 + fVar79 + fVar84) - fVar47) + fVar86);
      fVar34 = fVar94 - (fVar34 * (2.0 - auVar15._8_4_ * fVar87) * auVar15._8_4_ *
                                  ((fVar81 + fVar79 + fVar84) - fVar51) + fVar37);
      if ((0.0 <= fVar21) || (fVar31 * fVar31 + fVar29 * fVar29 + fVar34 * fVar34 <= fVar89)) {
        uVar5 = -(uint)((fVar30 + fVar91 + auVar27._8_4_) - fVar47 <= 0.0);
        uVar7 = -(uint)((fVar30 + fVar91 + auVar27._8_4_) - fVar51 <= 0.0);
        uVar9 = -(uint)((fVar30 + fVar91 + auVar27._8_4_) - (fVar22 + fVar90 + fVar32) <= 0.0);
        auVar96._0_4_ = (uint)fVar95 & -(uint)(fVar48 <= 0.0);
        auVar96._4_4_ = (uint)fVar86 & uVar5;
        auVar96._8_4_ = (uint)fVar37 & uVar7;
        auVar96._12_4_ = (uint)param_2[3] & uVar9;
        auVar76._0_4_ = ~-(uint)(fVar48 <= 0.0) & *(uint *)*param_3;
        auVar76._4_4_ = ~uVar5 & *(uint *)(*param_3 + 4);
        auVar76._8_4_ = ~uVar7 & *(uint *)(*param_3 + 8);
        auVar76._12_4_ = ~uVar9 & *(uint *)(*param_3 + 0xc);
        auVar76 = auVar76 | auVar96;
        fVar95 = param_4[3];
        fVar92 = fVar92 - auVar76._0_4_;
        fVar93 = fVar93 - auVar76._4_4_;
        fVar94 = fVar94 - auVar76._8_4_;
        fVar37 = fVar92 * fVar46;
        fVar21 = fVar93 * fVar50;
        fVar29 = fVar94 * fVar33;
        fVar86 = 0.0 - (fVar21 + fVar37 + fVar29);
        fVar31 = 0.0 - (fVar21 + fVar37 + fVar29);
        fVar34 = 0.0 - (fVar21 + fVar37 + fVar29);
        fVar78 = 0.0 - (fVar21 + fVar37 + fVar29);
        fVar37 = fVar70 + fVar61 + fVar72;
        fVar21 = fVar70 + fVar61 + fVar72;
        fVar29 = fVar70 + fVar61 + fVar72;
        fVar72 = fVar70 + fVar61 + fVar72;
        auVar1._4_4_ = fVar21;
        auVar1._0_4_ = fVar37;
        auVar1._8_4_ = fVar29;
        auVar1._12_4_ = fVar72;
        auVar15 = rcpps(auVar96,auVar1);
        fVar80 = auVar15._0_4_;
        fVar82 = auVar15._4_4_;
        fVar89 = auVar15._8_4_;
        fVar90 = auVar15._12_4_;
        auVar28._0_4_ = (2.0 - fVar80 * fVar37) * fVar80 * fVar86;
        auVar28._4_4_ = (2.0 - fVar82 * fVar21) * fVar82 * fVar31;
        auVar28._8_4_ = (2.0 - fVar89 * fVar29) * fVar89 * fVar34;
        auVar28._12_4_ = (2.0 - fVar90 * fVar72) * fVar90 * fVar78;
        fVar92 = (float)(~-(uint)(fVar37 == 0.0) & (uint)auVar28._0_4_ |
                        -(uint)(fVar37 == 0.0) & 0x7f7fffee) * fVar46 + fVar92;
        fVar93 = (float)(~-(uint)(fVar21 == 0.0) & (uint)auVar28._4_4_ |
                        -(uint)(fVar21 == 0.0) & 0x7f7fffee) * fVar50 + fVar93;
        fVar94 = (float)(~-(uint)(fVar29 == 0.0) & (uint)auVar28._8_4_ |
                        -(uint)(fVar29 == 0.0) & 0x7f7fffee) * fVar33 + fVar94;
        fVar92 = fVar92 * fVar92;
        fVar93 = fVar93 * fVar93;
        fVar94 = fVar94 * fVar94;
        auVar68._0_4_ = ((fVar93 + fVar92 + fVar94) - fVar95 * fVar95) * (0.0 - fVar37);
        auVar68._4_4_ = ((fVar93 + fVar92 + fVar94) - fVar95 * fVar95) * (0.0 - fVar21);
        auVar68._8_4_ = ((fVar93 + fVar92 + fVar94) - fVar95 * fVar95) * (0.0 - fVar29);
        auVar68._12_4_ = ((fVar93 + fVar92 + fVar94) - fVar95 * fVar95) * (0.0 - fVar72);
        if (0.0 <= auVar68._0_4_) {
          auVar15 = rsqrtps(auVar28,auVar68);
          fVar92 = auVar15._0_4_;
          fVar93 = auVar15._4_4_;
          fVar94 = auVar15._8_4_;
          fVar95 = auVar15._12_4_;
          fVar86 = (0.0 - (float)(~-(uint)(auVar68._0_4_ <= 0.0) &
                                 (uint)((3.0 - fVar92 * auVar68._0_4_ * fVar92) * fVar92 * 0.5 *
                                       auVar68._0_4_))) + fVar86;
          if (fVar86 < fVar37 * local_f8 && 0.0 <= fVar86) {
            fVar86 = (2.0 - fVar80 * fVar37) * fVar80 * fVar86;
            fVar37 = (2.0 - fVar82 * fVar21) * fVar82 *
                     ((0.0 - (float)(~-(uint)(auVar68._4_4_ <= 0.0) &
                                    (uint)((3.0 - fVar93 * auVar68._4_4_ * fVar93) * fVar93 * 0.5 *
                                          auVar68._4_4_))) + fVar31);
            fVar21 = (2.0 - fVar89 * fVar29) * fVar89 *
                     ((0.0 - (float)(~-(uint)(auVar68._8_4_ <= 0.0) &
                                    (uint)((3.0 - fVar94 * auVar68._8_4_ * fVar94) * fVar94 * 0.5 *
                                          auVar68._8_4_))) + fVar34);
            fVar95 = (2.0 - fVar90 * fVar72) * fVar90 *
                     ((0.0 - (float)(~-(uint)(auVar68._12_4_ <= 0.0) &
                                    (uint)((3.0 - fVar95 * auVar68._12_4_ * fVar95) * fVar95 * 0.5 *
                                          auVar68._12_4_))) + fVar78);
            fVar92 = fRam00000001467f06f4 - fVar37;
            fVar93 = fRam00000001467f06f8 - fVar21;
            fVar94 = fRam00000001467f06fc - fVar95;
            *param_5 = (float)((uint)((DAT_1467f06f0 - fVar86) * local_e8) & uVar97 |
                              ~uVar97 & (uint)fVar86);
            param_5[1] = (float)((uint)(fVar92 * fStack_e4) & uVar98 | ~uVar98 & (uint)fVar37);
            param_5[2] = (float)((uint)(fVar93 * fStack_e0) & uVar99 | ~uVar99 & (uint)fVar21);
            param_5[3] = (float)((uint)(fVar94 * fStack_dc) & uVar100 | ~uVar100 & (uint)fVar95);
            return uVar6;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14385a250 FUN_14385a250 body=425 status=ok
// SIG undefined FUN_14385a250(void)

float * FUN_14385a250(float *param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_res8 [2];
  
  pfVar1 = param_1 + 0x1e;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  param_1[0x20] = 0.0;
  param_1[0x21] = -0.0;
  param_1[0x24] = 0.0;
  param_1[0x25] = 0.0;
  param_1[0x26] = 0.0;
  param_1[0x27] = 0.0;
  if ((char)param_2[0xc] != '\0') {
    param_1[0x22] = 7.00649e-45;
    return param_1;
  }
  fVar4 = *(float *)((longlong)param_2 + 0x54);
  fVar5 = *(float *)(param_2 + 0xb);
  fVar6 = *(float *)((longlong)param_2 + 0x5c);
  *param_1 = *(float *)(param_2 + 10);
  param_1[1] = fVar4;
  param_1[2] = fVar5;
  param_1[3] = fVar6;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    FUN_14370c030(lVar3);
  }
  if (*(longlong *)(param_1 + 0x24) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x24) = lVar3;
  lVar3 = param_2[5];
  if (lVar3 != 0) {
    FUN_14370c030(lVar3);
  }
  if (*(longlong *)(param_1 + 0x26) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x26) = lVar3;
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  param_1[0x1c] = *(float *)((longlong)param_2 + 0x44);
  param_1[0x1d] = (float)(uint)*(byte *)(param_2 + 9);
  pfVar2 = (float *)(param_2 + 6);
  param_1[0x22] = 0.0;
  fVar14 = *(float *)((longlong)param_2 + 0x34);
  fVar7 = *(float *)(param_2 + 7);
  fVar8 = *(float *)((longlong)param_2 + 0x3c);
  fVar11 = fVar4 * *pfVar2;
  fVar12 = fVar5 * fVar14;
  fVar13 = fVar6 * fVar7;
  param_1[4] = *pfVar2 - (fVar12 + fVar11 + fVar13) * fVar4;
  param_1[5] = fVar14 - (fVar12 + fVar11 + fVar13) * fVar5;
  param_1[6] = fVar7 - (fVar12 + fVar11 + fVar13) * fVar6;
  param_1[7] = fVar8 - (fVar12 + fVar11 + fVar13) * param_1[3];
  fVar14 = *(float *)(param_2 + 7);
  fVar7 = *(float *)((longlong)param_2 + 0x3c);
  fVar8 = *(float *)(param_2 + 3);
  fVar11 = *(float *)((longlong)param_2 + 0x1c);
  fVar12 = *pfVar2 + *(float *)(param_2 + 2);
  fVar13 = *(float *)((longlong)param_2 + 0x34) + *(float *)((longlong)param_2 + 0x14);
  param_1[8] = fVar12;
  param_1[9] = fVar13;
  param_1[10] = fVar14 + fVar8;
  param_1[0xb] = fVar7 + fVar11;
  fVar12 = fVar12 * fVar4;
  fVar13 = fVar13 * fVar5;
  fVar14 = (fVar14 + fVar8) * fVar6;
  param_1[8] = param_1[8] - (fVar13 + fVar12 + fVar14) * fVar4;
  param_1[9] = param_1[9] - (fVar13 + fVar12 + fVar14) * fVar5;
  param_1[10] = param_1[10] - (fVar13 + fVar12 + fVar14) * fVar6;
  param_1[0xb] = param_1[0xb] - (fVar13 + fVar12 + fVar14) * param_1[3];
  if (-1 < (int)param_2[8]) {
    FUN_14385abb0(param_1,(int)param_2[8],*(int *)((longlong)param_2 + 0x44) + 1,param_2 + 2,pfVar2,
                  &DAT_1467f0890,pfVar1);
  }
  local_res8[0] = (undefined4)param_2[4];
  uVar10 = hkaiEdgePath::getEdge(*param_2,param_1[0x1c]);
  iVar9 = FUN_1438a9180(local_res8,uVar10,param_2[5],param_1 + 0xc);
  if (iVar9 != 0) {
    param_1[0x22] = 5.60519e-45;
  }
  return param_1;
}



// FUNCTION 14385a400 FUN_14385a400 body=50 status=ok
// SIG undefined FUN_14385a400(void)

longlong FUN_14385a400(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x88) = 5;
  return param_1;
}



// FUNCTION 14385a440 FUN_14385a440 body=119 status=ok
// SIG undefined FUN_14385a440(void)

void FUN_14385a440(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x84)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x78),0x20,*(uint *)(param_1 + 0x84) & 0x3fffffff)
    ;
  }
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 14385a4c0 FUN_14385a4c0 body=778 status=ok
// SIG undefined FUN_14385a4c0(void)

void FUN_14385a4c0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  float fVar25;
  float fVar26;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [80];
  
  fVar22 = param_1[3];
  fVar7 = param_2[3];
  fVar12 = *param_3;
  fVar21 = param_3[1];
  fVar15 = param_3[2];
  fVar3 = param_3[3];
  fVar5 = fVar12 * *param_1;
  fVar10 = fVar21 * param_1[1];
  fVar13 = fVar15 * param_1[2];
  fVar6 = *param_2 * fVar12;
  fVar11 = param_2[1] * fVar21;
  fVar14 = param_2[2] * fVar15;
  fVar23 = *param_1 - (fVar10 + fVar5 + fVar13) * fVar12;
  fVar24 = param_1[1] - (fVar10 + fVar5 + fVar13) * fVar21;
  fVar25 = param_1[2] - (fVar10 + fVar5 + fVar13) * fVar15;
  fVar5 = fVar22 - (fVar10 + fVar5 + fVar13) * fVar3;
  fVar10 = *param_2 - (fVar11 + fVar6 + fVar14) * fVar12;
  fVar13 = param_2[1] - (fVar11 + fVar6 + fVar14) * fVar21;
  fVar26 = param_2[2] - (fVar11 + fVar6 + fVar14) * fVar15;
  fVar6 = fVar7 - (fVar11 + fVar6 + fVar14) * fVar3;
  if (fVar22 == 0.0 - fVar7) {
    fVar18 = fVar21 * (fVar10 - fVar23) - (fVar13 - fVar24) * fVar12;
    fVar19 = fVar15 * (fVar13 - fVar24) - (fVar26 - fVar25) * fVar21;
    fVar20 = fVar12 * (fVar26 - fVar25) - (fVar10 - fVar23) * fVar15;
    fVar7 = fVar19 * fVar19;
    fVar12 = fVar20 * fVar20;
    auVar8._8_4_ = fVar18 * fVar18;
    auVar8._4_4_ = auVar8._8_4_;
    auVar8._0_4_ = auVar8._8_4_;
    auVar8._12_4_ = auVar8._8_4_;
    fVar11 = fVar12 + fVar7 + auVar8._8_4_;
    fVar14 = fVar12 + fVar7 + auVar8._8_4_;
    fVar16 = fVar12 + fVar7 + auVar8._8_4_;
    fVar17 = fVar12 + fVar7 + auVar8._8_4_;
    auVar1._4_4_ = fVar14;
    auVar1._0_4_ = fVar11;
    auVar1._8_4_ = fVar16;
    auVar1._12_4_ = fVar17;
    auVar9 = rsqrtps(auVar8,auVar1);
    fVar7 = auVar9._0_4_;
    fVar12 = auVar9._4_4_;
    fVar21 = auVar9._8_4_;
    fVar15 = auVar9._12_4_;
    fVar7 = fVar19 * (float)(~-(uint)(fVar11 <= 0.0) &
                            (uint)((3.0 - fVar11 * fVar7 * fVar7) * fVar7 * 0.5)) * fVar22;
    fVar12 = fVar20 * (float)(~-(uint)(fVar14 <= 0.0) &
                             (uint)((3.0 - fVar14 * fVar12 * fVar12) * fVar12 * 0.5)) * fVar22;
    fVar21 = fVar18 * (float)(~-(uint)(fVar16 <= 0.0) &
                             (uint)((3.0 - fVar16 * fVar21 * fVar21) * fVar21 * 0.5)) * fVar22;
    fVar22 = (fVar3 * (fVar6 - fVar5) - (fVar6 - fVar5) * fVar3) *
             (float)(~-(uint)(fVar17 <= 0.0) &
                    (uint)((3.0 - fVar17 * fVar15 * fVar15) * fVar15 * 0.5)) * fVar22;
    *param_4 = fVar7 + fVar23;
    param_4[1] = fVar12 + fVar24;
    param_4[2] = fVar21 + fVar25;
    param_4[3] = fVar22 + fVar5;
    *param_5 = fVar7 + fVar10;
    param_5[1] = fVar12 + fVar13;
    param_5[2] = fVar21 + fVar26;
    param_5[3] = fVar22 + fVar6;
  }
  else {
    local_b8 = fVar10;
    fStack_b4 = fVar13;
    fStack_b0 = fVar26;
    fStack_ac = fVar6;
    local_a8 = fVar23;
    fStack_a4 = fVar24;
    fStack_a0 = fVar25;
    fStack_9c = fVar5;
    if (fVar22 == 0.0) {
      FUN_14385a8b0(&local_a8,&local_a8,&local_b8,&local_b8,param_3,&local_98,local_68,&local_88,
                    &local_78);
      *param_4 = fVar23;
      param_4[1] = fVar24;
      param_4[2] = fVar25;
      param_4[3] = fVar5;
      *param_5 = local_98 + fVar23;
      param_5[1] = fStack_94 + fVar24;
      param_5[2] = fStack_90 + fVar25;
      param_5[3] = fStack_8c + fVar5;
    }
    else {
      auVar9._4_4_ = fVar7;
      auVar9._0_4_ = fVar7;
      auVar9._8_4_ = fVar7;
      auVar9._12_4_ = fVar7;
      auVar4._4_12_ = auVar9._4_12_;
      auVar4._0_4_ = -(uint)(fVar7 == 0.0);
      if ((-(uint)(fVar7 == 0.0) & 1) == 0) {
        auVar2._4_4_ = fVar7 + fVar22;
        auVar2._0_4_ = fVar7 + fVar22;
        auVar2._8_4_ = fVar7 + fVar22;
        auVar2._12_4_ = fVar7 + fVar22;
        auVar9 = rcpps(auVar4,auVar2);
        fVar12 = (2.0 - (fVar7 + fVar22) * auVar9._12_4_) * auVar9._12_4_ * fVar22;
        fStack_9c = (float)((uint)fVar5 ^ -(uint)(fVar12 < 0.0) & 0x80000000);
        fVar23 = (fVar10 - fVar23) * (2.0 - (fVar7 + fVar22) * auVar9._0_4_) * auVar9._0_4_ * fVar22
                 + fVar23;
        fVar24 = (fVar13 - fVar24) * (2.0 - (fVar7 + fVar22) * auVar9._4_4_) * auVar9._4_4_ * fVar22
                 + fVar24;
        fVar25 = (fVar26 - fVar25) * (2.0 - (fVar7 + fVar22) * auVar9._8_4_) * auVar9._8_4_ * fVar22
                 + fVar25;
        fVar5 = (fVar6 - fVar5) * fVar12 + fVar5;
        fStack_ac = (float)((uint)fVar6 ^ -(uint)(fRam00000001467f06fc < fVar12) & 0x80000000);
        local_98 = fVar23;
        fStack_94 = fVar24;
        fStack_90 = fVar25;
        fStack_8c = fVar5;
        FUN_14385a8b0(&local_98,&local_98,&local_a8,&local_b8,param_3,&local_88,&local_78,local_58,
                      local_68);
        *param_4 = local_88 + fVar23;
        param_4[1] = fStack_84 + fVar24;
        param_4[2] = fStack_80 + fVar25;
        param_4[3] = fStack_7c + fVar5;
        *param_5 = local_78 + fVar23;
        param_5[1] = fStack_74 + fVar24;
        param_5[2] = fStack_70 + fVar25;
        param_5[3] = fStack_6c + fVar5;
      }
      else {
        FUN_14385a8b0(&local_b8,&local_b8,&local_a8,&local_a8,param_3,&local_98,&local_88,&local_78,
                      local_68);
        *param_5 = fVar10;
        param_5[1] = fVar13;
        param_5[2] = fVar26;
        param_5[3] = fVar6;
        *param_4 = local_98 + fVar10;
        param_4[1] = fStack_94 + fVar13;
        param_4[2] = fStack_90 + fVar26;
        param_4[3] = fStack_8c + fVar6;
      }
    }
  }
  return;
}



// FUNCTION 14385a7d0 FUN_14385a7d0 body=210 status=ok
// SIG undefined FUN_14385a7d0(void)

undefined8 * FUN_14385a7d0(undefined8 *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fStack_c = param_4[2];
  fVar2 = fVar8 * *param_2;
  fVar4 = fVar9 * param_2[1];
  fVar6 = fStack_c * param_2[2];
  fVar3 = *param_3 * fVar8;
  fVar5 = param_3[1] * fVar9;
  fVar7 = param_3[2] * fStack_c;
  fVar10 = *param_2 - (fVar4 + fVar2 + fVar6) * fVar8;
  fVar11 = param_2[1] - (fVar4 + fVar2 + fVar6) * fVar9;
  fVar12 = param_2[2] - (fVar4 + fVar2 + fVar6) * fStack_c;
  fVar4 = *param_3 - (fVar5 + fVar3 + fVar7) * fVar8;
  fVar6 = param_3[1] - (fVar5 + fVar3 + fVar7) * fVar9;
  fVar5 = param_3[2] - (fVar5 + fVar3 + fVar7) * fStack_c;
  fVar2 = fVar4 * fVar10;
  fVar3 = fVar6 * fVar11;
  fStack_1c = fVar5 * fVar12;
  local_28 = fVar3 + fVar2 + fStack_1c;
  fStack_24 = fVar3 + fVar2 + fStack_1c;
  fStack_20 = fVar3 + fVar2 + fStack_1c;
  fStack_1c = fVar3 + fVar2 + fStack_1c;
  fVar8 = (fVar5 * fVar11 - fVar12 * fVar6) * fVar8;
  fVar9 = (fVar4 * fVar12 - fVar10 * fVar5) * fVar9;
  fStack_c = (fVar6 * fVar10 - fVar11 * fVar4) * fStack_c;
  local_18 = fVar9 + fVar8 + fStack_c;
  fStack_14 = fVar9 + fVar8 + fStack_c;
  fStack_10 = fVar9 + fVar8 + fStack_c;
  fStack_c = fVar9 + fVar8 + fStack_c;
  uVar1 = FUN_143715ee0(&local_18,&local_28);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = extraout_XMM0_Dc;
  *(undefined4 *)((longlong)param_1 + 0xc) = extraout_XMM0_Dd;
  return param_1;
}



// FUNCTION 14385a8b0 FUN_14385a8b0 body=755 status=ok
// SIG undefined FUN_14385a8b0(void)

void FUN_14385a8b0(float *param_1,float *param_2,float *param_3,float *param_4,
                  undefined1 (*param_5) [16],float *param_6,float *param_7,float *param_8,
                  float *param_9)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  undefined1 auVar19 [16];
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
  
  auVar7 = *param_5;
  fVar28 = auVar7._0_4_;
  fVar29 = auVar7._4_4_;
  fVar14 = auVar7._8_4_;
  fVar15 = auVar7._12_4_;
  fVar3 = (*param_3 - *param_1) * fVar28;
  fVar8 = (param_3[1] - param_1[1]) * fVar29;
  fVar11 = (param_3[2] - param_1[2]) * fVar14;
  fVar16 = param_4[3];
  fVar4 = (*param_4 - *param_2) * fVar28;
  fVar9 = (param_4[1] - param_2[1]) * fVar29;
  fVar12 = (param_4[2] - param_2[2]) * fVar14;
  fVar21 = (*param_3 - *param_1) - (fVar8 + fVar3 + fVar11) * fVar28;
  fVar22 = (param_3[1] - param_1[1]) - (fVar8 + fVar3 + fVar11) * fVar29;
  fVar23 = (param_3[2] - param_1[2]) - (fVar8 + fVar3 + fVar11) * fVar14;
  fVar24 = (*param_4 - *param_2) - (fVar9 + fVar4 + fVar12) * fVar28;
  fVar25 = (param_4[1] - param_2[1]) - (fVar9 + fVar4 + fVar12) * fVar29;
  fVar26 = (param_4[2] - param_2[2]) - (fVar9 + fVar4 + fVar12) * fVar14;
  fVar27 = fVar22 * fVar22 + fVar21 * fVar21 + fVar23 * fVar23;
  fVar5 = fVar24 * fVar24;
  fVar10 = fVar25 * fVar25;
  fVar13 = fVar26 * fVar26;
  auVar17._0_4_ = fVar10 + fVar5 + fVar13;
  auVar17._4_4_ = fVar10 + fVar5 + fVar13;
  auVar17._8_4_ = fVar10 + fVar5 + fVar13;
  auVar17._12_4_ = fVar10 + fVar5 + fVar13;
  auVar18._4_4_ = auVar17._0_4_;
  auVar18._0_4_ = fVar27;
  auVar18._8_4_ = fVar27;
  auVar18._12_4_ = auVar17._0_4_;
  auVar18 = rsqrtps(auVar17,auVar18);
  fVar5 = auVar18._0_4_;
  fVar10 = auVar18._4_4_;
  fVar13 = auVar18._8_4_;
  fVar20 = auVar18._12_4_;
  fVar32 = (float)(~-(uint)(fVar27 <= 0.0) & (uint)((3.0 - fVar27 * fVar5 * fVar5) * fVar5 * 0.5));
  fVar10 = (float)(~-(uint)(auVar17._0_4_ <= 0.0) &
                  (uint)((3.0 - auVar17._0_4_ * fVar10 * fVar10) * fVar10 * 0.5));
  auVar6._0_8_ = auVar7._4_8_;
  auVar6._8_4_ = fVar28;
  auVar6._12_4_ = fVar15;
  fVar21 = fVar32 * fVar21;
  fVar22 = fVar32 * fVar22;
  fVar23 = fVar32 * fVar23;
  fVar37 = fVar32 * ((param_3[3] - param_1[3]) - (fVar8 + fVar3 + fVar11) * fVar15);
  fVar24 = fVar10 * fVar24;
  fVar25 = fVar10 * fVar25;
  fVar26 = fVar10 * fVar26;
  fVar38 = fVar10 * ((fVar16 - param_2[3]) - (fVar9 + fVar4 + fVar12) * fVar15);
  fVar3 = param_3[3];
  fVar33 = (float)((uint)(fVar23 * fVar29 - fVar22 * fVar14) ^ (uint)fVar3 & 0x80000000);
  fVar34 = (float)((uint)(fVar21 * fVar14 - fVar23 * fVar28) ^ (uint)fVar3 & 0x80000000);
  fVar35 = (float)((uint)(fVar22 * fVar28 - fVar21 * fVar29) ^ (uint)fVar3 & 0x80000000);
  fVar36 = (float)((uint)(fVar37 * fVar15 - fVar37 * fVar15) ^ (uint)fVar3 & 0x80000000);
  fVar4 = fVar27 - fVar3 * fVar3;
  fVar5 = auVar17._0_4_ - fVar16 * fVar16;
  fVar8 = fVar27 - fVar3 * fVar3;
  fVar9 = auVar17._0_4_ - fVar16 * fVar16;
  fVar11 = (float)((uint)(fVar26 * fVar29 - fVar25 * fVar14) ^ (uint)fVar16 & 0x80000000);
  fVar12 = (float)((uint)(fVar24 * fVar14 - fVar26 * fVar28) ^ (uint)fVar16 & 0x80000000);
  fVar30 = (float)((uint)(fVar25 * fVar28 - fVar24 * fVar29) ^ (uint)fVar16 & 0x80000000);
  fVar31 = (float)((uint)(fVar38 * fVar15 - fVar38 * fVar15) ^ (uint)fVar16 & 0x80000000);
  uVar1 = -(uint)(fVar4 <= 0.0);
  uVar2 = -(uint)(fVar5 <= 0.0);
  auVar7._0_8_ = CONCAT44(uVar2,uVar1) & 0x38d1b71738d1b717;
  auVar7._8_8_ = 0;
  auVar19._0_4_ = ~uVar1 & (uint)(fVar3 * fVar3 * fVar4);
  auVar19._4_4_ = ~uVar2 & (uint)(fVar16 * fVar16 * fVar5);
  auVar19._8_4_ = ~-(uint)(fVar8 <= 0.0) & (uint)(fVar8 * fVar8);
  auVar19._12_4_ = ~-(uint)(fVar9 <= 0.0) & (uint)(fVar9 * fVar9);
  auVar19 = auVar19 | auVar7;
  auVar7 = rsqrtps(auVar6,auVar19);
  fVar16 = auVar19._0_4_;
  fVar3 = auVar19._4_4_;
  fVar4 = auVar19._8_4_;
  fVar5 = auVar19._12_4_;
  fVar28 = auVar7._0_4_;
  fVar29 = auVar7._4_4_;
  fVar14 = auVar7._8_4_;
  fVar15 = auVar7._12_4_;
  fVar32 = (float)(~-(uint)(fVar16 <= 0.0) &
                  (uint)((3.0 - fVar16 * fVar28 * fVar28) * fVar28 * 0.5 * fVar16)) * fVar32;
  fVar10 = (float)(~-(uint)(fVar3 <= 0.0) &
                  (uint)((3.0 - fVar3 * fVar29 * fVar29) * fVar29 * 0.5 * fVar3)) * fVar10;
  fVar28 = (float)(~-(uint)(fVar4 <= 0.0) &
                  (uint)((3.0 - fVar4 * fVar14 * fVar14) * fVar14 * 0.5 * fVar4)) *
           (float)(~-(uint)(fVar27 <= 0.0) & (uint)((3.0 - fVar27 * fVar13 * fVar13) * fVar13 * 0.5)
                  );
  fVar29 = (float)(~-(uint)(fVar5 <= 0.0) &
                  (uint)((3.0 - fVar5 * fVar15 * fVar15) * fVar15 * 0.5 * fVar5)) *
           (float)(~-(uint)(auVar17._0_4_ <= 0.0) &
                  (uint)((3.0 - auVar17._0_4_ * fVar20 * fVar20) * fVar20 * 0.5));
  *param_6 = fVar21 * fVar28 + fVar33 * fVar32;
  param_6[1] = fVar22 * fVar28 + fVar34 * fVar32;
  param_6[2] = fVar23 * fVar28 + fVar35 * fVar32;
  param_6[3] = fVar37 * fVar28 + fVar36 * fVar32;
  *param_7 = fVar24 * fVar29 + fVar11 * fVar10;
  param_7[1] = fVar25 * fVar29 + fVar12 * fVar10;
  param_7[2] = fVar26 * fVar29 + fVar30 * fVar10;
  param_7[3] = fVar38 * fVar29 + fVar31 * fVar10;
  *param_8 = fVar33 * fVar28 - fVar21 * fVar32;
  param_8[1] = fVar34 * fVar28 - fVar22 * fVar32;
  param_8[2] = fVar35 * fVar28 - fVar23 * fVar32;
  param_8[3] = fVar36 * fVar28 - fVar37 * fVar32;
  *param_9 = fVar11 * fVar29 - fVar24 * fVar10;
  param_9[1] = fVar12 * fVar29 - fVar25 * fVar10;
  param_9[2] = fVar30 * fVar29 - fVar26 * fVar10;
  param_9[3] = fVar31 * fVar29 - fVar38 * fVar10;
  fVar28 = param_3[3];
  *param_8 = (float)((uint)fVar28 & 0x80000000 ^ (uint)*param_8);
  param_8[1] = (float)((uint)fVar28 & 0x80000000 ^ (uint)param_8[1]);
  param_8[2] = (float)((uint)fVar28 & 0x80000000 ^ (uint)param_8[2]);
  param_8[3] = (float)((uint)fVar28 & 0x80000000 ^ (uint)param_8[3]);
  fVar28 = param_4[3];
  *param_9 = (float)((uint)fVar28 & 0x80000000 ^ (uint)*param_9);
  param_9[1] = (float)((uint)fVar28 & 0x80000000 ^ (uint)param_9[1]);
  param_9[2] = (float)((uint)fVar28 & 0x80000000 ^ (uint)param_9[2]);
  param_9[3] = (float)((uint)fVar28 & 0x80000000 ^ (uint)param_9[3]);
  return;
}



// FUNCTION 14385abb0 FUN_14385abb0 body=871 status=ok
// SIG undefined FUN_14385abb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14385abb0(float *param_1,int param_2,int param_3,float *param_4,float *param_5,
                  float *param_6,longlong *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
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
  
  fVar33 = param_6[4];
  fVar34 = param_6[5];
  fVar35 = param_6[6];
  fVar36 = param_6[7];
  fVar37 = param_6[0xc];
  fVar38 = param_6[0xd];
  fVar39 = param_6[0xe];
  fVar40 = param_6[0xf];
  fVar41 = *param_6;
  fVar42 = param_6[1];
  fVar43 = param_6[2];
  fVar44 = param_6[3];
  fVar30 = param_5[1] * *param_1 - param_1[1] * *param_5;
  fVar31 = param_5[2] * param_1[1] - param_1[2] * param_5[1];
  fVar32 = *param_5 * param_1[2] - *param_1 * param_5[2];
  fVar45 = param_6[8];
  fVar46 = param_6[9];
  fVar47 = param_6[10];
  fVar48 = param_6[0xb];
  auVar7._12_4_ = 0.0 - (param_4[1] * fVar32 + *param_4 * fVar31 + param_4[2] * fVar30);
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    pfVar4 = (float *)hkaiEdgePath::getEdge(*(undefined8 *)(param_1 + 0x24),param_2);
    if (((uint)pfVar4[0x20] & 0x10) != 0) {
      fVar1 = *pfVar4;
      fVar2 = pfVar4[1];
      fVar3 = pfVar4[2];
      fVar23 = fVar1 * fVar41 + fVar37 + fVar2 * fVar33 + fVar3 * fVar45;
      fVar24 = fVar1 * fVar42 + fVar38 + fVar2 * fVar34 + fVar3 * fVar46;
      fVar25 = fVar1 * fVar43 + fVar39 + fVar2 * fVar35 + fVar3 * fVar47;
      fVar26 = fVar1 * fVar44 + fVar40 + fVar2 * fVar36 + fVar3 * fVar48;
      fVar1 = pfVar4[4];
      fVar2 = pfVar4[5];
      fVar3 = pfVar4[6];
      fVar20 = (fVar1 * fVar41 + fVar37 + fVar2 * fVar33 + fVar3 * fVar45) - fVar23;
      fVar21 = (fVar1 * fVar42 + fVar38 + fVar2 * fVar34 + fVar3 * fVar46) - fVar24;
      fVar22 = (fVar1 * fVar43 + fVar39 + fVar2 * fVar35 + fVar3 * fVar47) - fVar25;
      fVar9 = fVar31 * fVar20;
      fVar10 = fVar32 * fVar21;
      fVar11 = fVar30 * fVar22;
      fVar14 = fVar10 + fVar9 + fVar11;
      fVar16 = fVar10 + fVar9 + fVar11;
      fVar18 = fVar10 + fVar9 + fVar11;
      fVar11 = fVar10 + fVar9 + fVar11;
      if (_DAT_1467f08f0 < fVar14 * fVar14) {
        fVar9 = fVar23 * fVar31;
        fVar10 = fVar24 * fVar32;
        fVar12 = fVar25 * fVar30;
        auVar7._4_4_ = auVar7._12_4_;
        auVar7._0_4_ = auVar7._12_4_;
        auVar7._8_4_ = auVar7._12_4_;
        auVar8._4_4_ = fVar16;
        auVar8._0_4_ = fVar14;
        auVar8._8_4_ = fVar18;
        auVar8._12_4_ = fVar11;
        auVar8 = rcpps(auVar7,auVar8);
        uVar5 = FUN_143703a50();
        if (*(uint *)(param_7 + 1) == (*(uint *)((longlong)param_7 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar5,param_7,0x20);
        }
        pfVar6 = (float *)((longlong)(int)param_7[1] * 0x20 + *param_7);
        *(int *)(param_7 + 1) = (int)param_7[1] + 1;
        *pfVar6 = (2.0 - fVar14 * auVar8._0_4_) * auVar8._0_4_ *
                  (0.0 - (fVar10 + fVar9 + fVar12 + auVar7._12_4_)) * fVar20 + fVar23;
        pfVar6[1] = (2.0 - fVar16 * auVar8._4_4_) * auVar8._4_4_ *
                    (0.0 - (fVar10 + fVar9 + fVar12 + auVar7._12_4_)) * fVar21 + fVar24;
        pfVar6[2] = (2.0 - fVar18 * auVar8._8_4_) * auVar8._8_4_ *
                    (0.0 - (fVar10 + fVar9 + fVar12 + auVar7._12_4_)) * fVar22 + fVar25;
        pfVar6[3] = (2.0 - fVar11 * auVar8._12_4_) * auVar8._12_4_ *
                    (0.0 - (fVar10 + fVar9 + fVar12 + auVar7._12_4_)) *
                    ((fVar1 * fVar44 + fVar40 + fVar2 * fVar36 + fVar3 * fVar48) - fVar26) + fVar26;
        uVar5 = FUN_143879720(*(undefined8 *)(param_1 + 0x24),param_2);
        *(undefined8 *)(pfVar6 + 4) = uVar5;
      }
    }
    fVar1 = pfVar4[0x10];
    fVar2 = pfVar4[0x11];
    fVar3 = pfVar4[0x12];
    fVar9 = pfVar4[0x14];
    fVar10 = pfVar4[0x15];
    fVar11 = pfVar4[0x16];
    fVar14 = pfVar4[0x18];
    fVar16 = pfVar4[0x19];
    fVar18 = pfVar4[0x1a];
    fVar20 = pfVar4[0xc];
    fVar21 = pfVar4[0xd];
    fVar22 = pfVar4[0xe];
    fVar27 = fVar10 * fVar33;
    fVar28 = fVar10 * fVar34;
    fVar29 = fVar10 * fVar35;
    fVar10 = fVar10 * fVar36;
    fVar26 = fVar21 * fVar33;
    fVar12 = fVar21 * fVar34;
    fVar13 = fVar21 * fVar35;
    fVar21 = fVar21 * fVar36;
    fVar15 = fVar16 * fVar33;
    fVar17 = fVar16 * fVar34;
    fVar19 = fVar16 * fVar35;
    fVar16 = fVar16 * fVar36;
    fVar23 = fVar9 * fVar41;
    fVar24 = fVar9 * fVar42;
    fVar25 = fVar9 * fVar43;
    fVar9 = fVar9 * fVar44;
    fVar33 = fVar3 * fVar45 + fVar2 * fVar33 + fVar1 * fVar41;
    fVar34 = fVar3 * fVar46 + fVar2 * fVar34 + fVar1 * fVar42;
    fVar35 = fVar3 * fVar47 + fVar2 * fVar35 + fVar1 * fVar43;
    fVar36 = fVar3 * fVar48 + fVar2 * fVar36 + fVar1 * fVar44;
    fVar37 = fVar37 + fVar14 * fVar41 + fVar15 + fVar18 * fVar45;
    fVar38 = fVar38 + fVar14 * fVar42 + fVar17 + fVar18 * fVar46;
    fVar39 = fVar39 + fVar14 * fVar43 + fVar19 + fVar18 * fVar47;
    fVar40 = fVar40 + fVar14 * fVar44 + fVar16 + fVar18 * fVar48;
    fVar41 = fVar26 + fVar20 * fVar41 + fVar22 * fVar45;
    fVar42 = fVar12 + fVar20 * fVar42 + fVar22 * fVar46;
    fVar43 = fVar13 + fVar20 * fVar43 + fVar22 * fVar47;
    fVar44 = fVar21 + fVar20 * fVar44 + fVar22 * fVar48;
    fVar45 = fVar45 * fVar11 + fVar27 + fVar23;
    fVar46 = fVar46 * fVar11 + fVar28 + fVar24;
    fVar47 = fVar47 * fVar11 + fVar29 + fVar25;
    fVar48 = fVar48 * fVar11 + fVar10 + fVar9;
  }
  return;
}



// FUNCTION 14385af20 FUN_14385af20 body=1471 status=ok
// SIG undefined FUN_14385af20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14385af20(float *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  bool bVar8;
  float *pfVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined8 uVar14;
  float *pfVar15;
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
  float fVar43;
  float fVar44;
  byte local_res8 [8];
  float local_res18 [4];
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  if (param_1[0x22] == 5.60519e-45) {
    param_1[0x22] = 2.8026e-45;
    return 2;
  }
  if (param_1[0x22] != 7.00649e-45) {
    fVar1 = param_1[0x1c];
    fVar16 = param_1[0x1d];
    uVar10 = *(undefined8 *)(param_1 + 4);
    uVar7 = *(undefined8 *)(param_1 + 6);
    fVar23 = param_1[8];
    fVar24 = param_1[9];
    fVar25 = param_1[10];
    fVar20 = param_1[0xb];
    fVar26 = param_1[0x10];
    fVar27 = param_1[0x11];
    fVar28 = param_1[0x12];
    fVar29 = param_1[0x13];
    fVar30 = param_1[0xc];
    fVar31 = param_1[0xd];
    fVar32 = param_1[0xe];
    fVar33 = param_1[0xf];
    fVar34 = param_1[0x18];
    fVar35 = param_1[0x19];
    fVar36 = param_1[0x1a];
    fVar37 = param_1[0x1b];
    fVar38 = param_1[0x14];
    fVar39 = param_1[0x15];
    fVar40 = param_1[0x16];
    fVar41 = param_1[0x17];
    uVar14 = param_2[9];
    param_2[9] = *(undefined8 *)(param_1 + 0x1e);
    *(undefined8 *)(param_1 + 0x1e) = uVar14;
    fVar18 = *(float *)(param_2 + 10);
    *(float *)(param_2 + 10) = param_1[0x20];
    param_1[0x20] = fVar18;
    fVar18 = *(float *)((longlong)param_2 + 0x54);
    *(float *)((longlong)param_2 + 0x54) = param_1[0x21];
    param_1[0x21] = fVar18;
    param_1[0x20] = 0.0;
    uVar14 = *(undefined8 *)(param_1 + 0x24);
    local_128 = uVar10;
    uStack_120 = uVar7;
    local_118 = fVar30;
    fStack_114 = fVar31;
    fStack_110 = fVar32;
    fStack_10c = fVar33;
    local_108 = fVar26;
    fStack_104 = fVar27;
    fStack_100 = fVar28;
    fStack_fc = fVar29;
    local_f8 = fVar38;
    fStack_f4 = fVar39;
    fStack_f0 = fVar40;
    fStack_ec = fVar41;
    local_e8 = fVar34;
    fStack_e4 = fVar35;
    fStack_e0 = fVar36;
    fStack_dc = fVar37;
    pfVar9 = (float *)hkaiEdgePath::getEdge(uVar14,fVar1);
    auVar2._4_4_ = -(uint)(pfVar9[5] == pfVar9[1]);
    auVar2._0_4_ = -(uint)(pfVar9[4] == *pfVar9);
    auVar2._8_4_ = -(uint)(pfVar9[6] == pfVar9[2]);
    auVar2._12_4_ = -(uint)(pfVar9[7] == pfVar9[3]);
    iVar13 = movmskps((int)uVar14,auVar2);
    if (iVar13 == 0xf) {
      uVar14 = *(undefined8 *)(param_1 + 6);
      *param_2 = *(undefined8 *)(param_1 + 4);
      param_2[1] = uVar14;
      uVar14 = *(undefined8 *)(param_1 + 10);
      param_2[2] = *(undefined8 *)(param_1 + 8);
      param_2[3] = uVar14;
      uVar14 = *(undefined8 *)(pfVar9 + 2);
      uVar10 = 1;
      param_2[4] = *(undefined8 *)pfVar9;
      param_2[5] = uVar14;
      param_1[0x22] = 1.4013e-45;
    }
    else {
      pfVar15 = pfVar9 + 4;
      if (fVar16 != 0.0) {
        pfVar15 = pfVar9;
      }
      fVar18 = *pfVar15;
      fVar22 = pfVar15[1];
      fVar3 = pfVar15[2];
      fVar4 = pfVar15[3];
      fVar42 = fVar18 * fVar30 + fVar34 + fVar22 * fVar26 + fVar3 * fVar38;
      fVar43 = fVar18 * fVar31 + fVar35 + fVar22 * fVar27 + fVar3 * fVar39;
      fVar44 = fVar18 * fVar32 + fVar36 + fVar22 * fVar28 + fVar3 * fVar40;
      fVar17 = fVar42 * *param_1;
      fVar19 = fVar43 * param_1[1];
      fVar21 = fVar44 * param_1[2];
      fVar18 = *param_1;
      fVar22 = param_1[1];
      fVar3 = param_1[2];
      *(float *)(param_2 + 2) = fVar23;
      *(float *)((longlong)param_2 + 0x14) = fVar24;
      *(float *)(param_2 + 3) = fVar25;
      *(float *)((longlong)param_2 + 0x1c) = fVar20;
      *param_2 = uVar10;
      param_2[1] = uVar7;
      fVar42 = fVar42 - (fVar19 + fVar17 + fVar21) * fVar18;
      fVar43 = fVar43 - (fVar19 + fVar17 + fVar21) * fVar22;
      fVar44 = fVar44 - (fVar19 + fVar17 + fVar21) * fVar3;
      fVar23 = fVar23 - fVar42;
      fVar24 = fVar24 - fVar43;
      fVar25 = fVar25 - fVar44;
      *(float *)(param_2 + 4) = fVar42;
      *(float *)((longlong)param_2 + 0x24) = fVar43;
      *(float *)(param_2 + 5) = fVar44;
      *(float *)((longlong)param_2 + 0x2c) = fVar4;
      fVar18 = fVar23 * *param_1;
      fVar20 = fVar24 * param_1[1];
      fVar22 = fVar25 * param_1[2];
      fVar23 = fVar23 - (fVar20 + fVar18 + fVar22) * *param_1;
      fVar24 = fVar24 - (fVar20 + fVar18 + fVar22) * param_1[1];
      fVar25 = fVar25 - (fVar20 + fVar18 + fVar22) * param_1[2];
      if ((fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25 < fVar4 * fVar4 * _DAT_1467f0a10) ||
         (iVar13 = FUN_1438a90b0(*(undefined8 *)(param_1 + 0x24),fVar1,fVar16 != 0.0,
                                 *(undefined8 *)(param_1 + 0x26),local_res18,local_res8),
         iVar13 == 0)) {
        param_1[0x22] = 2.8026e-45;
        uVar10 = 2;
      }
      else {
        bVar8 = false;
        fVar16 = fVar1;
        while( true ) {
          lVar11 = hkaiEdgePath::getEdge(*(undefined8 *)(param_1 + 0x24),fVar16);
          if ((*(byte *)(lVar11 + 0x80) & 0x10) != 0) {
            bVar8 = true;
          }
          if (fVar16 == local_res18[0]) break;
          fVar18 = *(float *)(lVar11 + 0x40);
          fVar23 = *(float *)(lVar11 + 0x44);
          fVar24 = *(float *)(lVar11 + 0x48);
          fVar16 = (float)((int)fVar16 + 1);
          fVar25 = *(float *)(lVar11 + 0x50);
          fVar20 = *(float *)(lVar11 + 0x54);
          fVar22 = *(float *)(lVar11 + 0x58);
          fVar3 = *(float *)(lVar11 + 0x60);
          fVar17 = *(float *)(lVar11 + 100);
          fVar19 = *(float *)(lVar11 + 0x68);
          fVar21 = *(float *)(lVar11 + 0x30);
          fVar5 = *(float *)(lVar11 + 0x34);
          fVar6 = *(float *)(lVar11 + 0x38);
          fVar26 = fVar24 * fVar38 + fVar23 * fVar26 + fVar18 * fVar30;
          fVar27 = fVar24 * fVar39 + fVar23 * fVar27 + fVar18 * fVar31;
          fVar28 = fVar24 * fVar40 + fVar23 * fVar28 + fVar18 * fVar32;
          fVar29 = fVar24 * fVar41 + fVar23 * fVar29 + fVar18 * fVar33;
          fVar34 = fVar34 + fVar3 * fVar30 + fVar17 * fVar26 + fVar19 * fVar38;
          fVar35 = fVar35 + fVar3 * fVar31 + fVar17 * fVar27 + fVar19 * fVar39;
          fVar36 = fVar36 + fVar3 * fVar32 + fVar17 * fVar28 + fVar19 * fVar40;
          fVar37 = fVar37 + fVar3 * fVar33 + fVar17 * fVar29 + fVar19 * fVar41;
          fVar30 = fVar5 * fVar26 + fVar21 * fVar30 + fVar6 * fVar38;
          fVar31 = fVar5 * fVar27 + fVar21 * fVar31 + fVar6 * fVar39;
          fVar32 = fVar5 * fVar28 + fVar21 * fVar32 + fVar6 * fVar40;
          fVar33 = fVar5 * fVar29 + fVar21 * fVar33 + fVar6 * fVar41;
          fVar38 = fVar38 * fVar22 + fVar20 * fVar26 + fVar25 * fVar30;
          fVar39 = fVar39 * fVar22 + fVar20 * fVar27 + fVar25 * fVar31;
          fVar40 = fVar40 * fVar22 + fVar20 * fVar28 + fVar25 * fVar32;
          fVar41 = fVar41 * fVar22 + fVar20 * fVar29 + fVar25 * fVar33;
        }
        pfVar9 = (float *)hkaiEdgePath::getEdge(*(undefined8 *)(param_1 + 0x24));
        if (local_res8[0] == 0) {
          pfVar9 = pfVar9 + 4;
        }
        fVar16 = *pfVar9;
        fVar18 = pfVar9[1];
        fVar23 = pfVar9[2];
        fStack_15c = pfVar9[3];
        local_168 = fVar16 * fVar30 + fVar34 + fVar18 * fVar26 + fVar23 * fVar38;
        fStack_164 = fVar16 * fVar31 + fVar35 + fVar18 * fVar27 + fVar23 * fVar39;
        fStack_160 = fVar16 * fVar32 + fVar36 + fVar18 * fVar28 + fVar23 * fVar40;
        fVar16 = local_168 * *param_1;
        fVar18 = fStack_164 * param_1[1];
        fVar23 = fStack_160 * param_1[2];
        fStack_12c = 0.0 - fVar4;
        local_168 = local_168 - (fVar18 + fVar16 + fVar23) * *param_1;
        fStack_164 = fStack_164 - (fVar18 + fVar16 + fVar23) * param_1[1];
        fStack_160 = fStack_160 - (fVar18 + fVar16 + fVar23) * param_1[2];
        local_138 = fVar42;
        fStack_134 = fVar43;
        fStack_130 = fVar44;
        FUN_14385a4c0(&local_138,0.0 - fVar4,param_1,&local_158,&local_148);
        fVar16 = local_148 - local_158;
        fVar18 = fStack_144 - fStack_154;
        fVar23 = fStack_140 - fStack_150;
        fVar24 = fStack_13c - fStack_14c;
        local_168 = fVar16;
        fStack_164 = fVar18;
        fStack_160 = fVar23;
        fStack_15c = fVar24;
        if (bVar8) {
          FUN_14385abb0(param_1,(int)fVar1 + 1,(int)local_res18[0] + 1,&local_158,&local_168,
                        &local_118,param_1 + 0x1e);
        }
        *(float *)(param_2 + 6) = local_158;
        *(float *)((longlong)param_2 + 0x34) = fStack_154;
        *(float *)(param_2 + 7) = fStack_150;
        *(float *)((longlong)param_2 + 0x3c) = fStack_14c;
        puVar12 = (undefined4 *)FUN_14385a7d0(&local_148,&local_128,&local_168,param_1);
        *(undefined4 *)(param_2 + 8) = *puVar12;
        param_1[8] = local_148;
        param_1[9] = fStack_144;
        param_1[10] = fStack_140;
        param_1[0xb] = fStack_13c;
        param_1[4] = fVar16;
        param_1[5] = fVar18;
        param_1[6] = fVar23;
        param_1[7] = fVar24;
        param_1[0xc] = fVar30;
        param_1[0xd] = fVar31;
        param_1[0xe] = fVar32;
        param_1[0xf] = fVar33;
        param_1[0x10] = fVar26;
        param_1[0x11] = fVar27;
        param_1[0x12] = fVar28;
        param_1[0x13] = fVar29;
        param_1[0x14] = fVar38;
        param_1[0x15] = fVar39;
        param_1[0x16] = fVar40;
        param_1[0x17] = fVar41;
        param_1[0x18] = fVar34;
        param_1[0x19] = fVar35;
        param_1[0x1a] = fVar36;
        param_1[0x1b] = fVar37;
        param_1[0x1c] = local_res18[0];
        param_1[0x1d] = (float)(uint)local_res8[0];
        param_1[0x22] = 0.0;
        FUN_143703a50();
        uVar10 = 0;
      }
    }
    return uVar10;
  }
  param_1[0x22] = 4.2039e-45;
  return 3;
}



// FUNCTION 14385b4e0 FUN_14385b4e0 body=41 status=ok
// SIG undefined FUN_14385b4e0(void)

void FUN_14385b4e0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    puVar3 = (undefined4 *)(param_1 + 0x10);
    do {
      puVar1 = (undefined8 *)((param_2 - param_1) + -0x10 + (longlong)puVar3);
      uVar2 = puVar1[1];
      *(undefined8 *)(puVar3 + -4) = *puVar1;
      *(undefined8 *)(puVar3 + -2) = uVar2;
      *puVar3 = *(undefined4 *)((param_2 - param_1) + (longlong)puVar3);
      puVar3 = puVar3 + 8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14385b510 FUN_14385b510 body=108 status=ok
// SIG undefined FUN_14385b510(void)

undefined8 *
FUN_14385b510(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
             undefined4 param_5)

{
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined1 *)(param_1 + 3) = param_4;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = hkaiNavigator::PathRequest::vftable;
  param_1[7] = param_2;
  param_1[8] = param_3;
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  return param_1;
}



// FUNCTION 14385b580 FUN_14385b580 body=645 status=ok
// SIG undefined FUN_14385b580(void)

undefined8 * FUN_14385b580(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined2 local_28;
  undefined4 local_26;
  
  param_1[1] = 0;
  *param_1 = hkaiNavigator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x1ffff;
  param_1[0xe] = hkaiNavigator::NavigatorSettings::vftable;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x10301;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x101;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x20) = 0x7f7fffee;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x21) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x80000000;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  if (param_1[0x2a] != 0) {
    FUN_14370c150();
  }
  param_1[0x2a] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x124);
  uVar3 = *(undefined4 *)(param_2 + 0x128);
  uVar4 = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x13) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xba) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x28) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0xb;
  param_1[0x2c] = 1;
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x278);
  local_28 = 0x10;
  local_26 = 0x2c0800;
  puVar5 = *(undefined8 **)(param_1[0x2a] + 0x238);
  puVar1 = puVar5 + *(int *)(param_1[0x2a] + 0x240);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(code **)(*(longlong *)*puVar5 + 0x18))((longlong *)*puVar5,&local_28);
  }
  FUN_1438a9680(param_1[0x2a],param_1);
  return param_1;
}



// FUNCTION 14385b810 FUN_14385b810 body=496 status=ok
// SIG undefined FUN_14385b810(void)

void FUN_14385b810(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_10;
  
  local_16 = 0x2d0800;
  *param_1 = hkaiNavigator::vftable;
  local_18 = 0x10;
  local_10 = *(undefined4 *)((longlong)param_1 + 0x1fc);
  puVar3 = *(undefined8 **)(param_1[0x2a] + 0x238);
  puVar1 = puVar3 + *(int *)(param_1[0x2a] + 0x240);
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(longlong *)*puVar3 + 0x18))((longlong *)*puVar3,&local_18);
  }
  if (param_1[0x3a] != 0) {
    FUN_143876e90(param_1[0x3a],1);
  }
  if (param_1[0x3d] != 0) {
    FUN_14387c4d0();
  }
  FUN_1438a9700(param_1[0x2a],param_1);
  FUN_14370e7c0(param_1 + 0x49);
  FUN_14370e7c0(param_1 + 0x48);
  FUN_14370e7c0(param_1 + 0x47);
  FUN_14370e7c0(param_1 + 0x46);
  FUN_14370e7c0(param_1 + 0x45);
  FUN_14370e7c0(param_1 + 0x44);
  FUN_14370e7c0(param_1 + 0x43);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x214)) {
    FUN_143702e10(uVar2,param_1[0x41],0x90,*(uint *)((longlong)param_1 + 0x214) & 0x3fffffff);
  }
  param_1[0x41] = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x80000000;
  if (param_1[0x3d] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x3c] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x3a] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x2a] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x25] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x24] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1 + 0xe);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar2,param_1[4],0x20,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14385ba00 FUN_14385ba00 body=2653 status=ok
// SIG undefined FUN_14385ba00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14385ba00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  float *pfVar10;
  LPVOID pvVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffff108;
  undefined8 in_stack_fffffffffffff110;
  undefined4 uVar36;
  undefined8 in_stack_fffffffffffff118;
  undefined4 uVar37;
  uint local_eb8;
  int local_eb4;
  int local_eb0;
  undefined8 local_ea8;
  longlong lStack_ea0;
  ulonglong local_e98 [2];
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined4 local_e78;
  undefined4 uStack_e74;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  float local_e68;
  float fStack_e64;
  float fStack_e60;
  float fStack_e5c;
  float local_e58;
  float fStack_e54;
  float fStack_e50;
  undefined4 uStack_e4c;
  undefined8 local_e48;
  longlong lStack_e40;
  undefined1 local_e38 [12];
  float fStack_e2c;
  float local_e28;
  float fStack_e24;
  float fStack_e20;
  undefined4 local_e18;
  undefined4 uStack_e14;
  undefined8 uStack_e10;
  undefined4 local_e08;
  undefined4 uStack_e04;
  undefined8 uStack_e00;
  undefined1 local_df8 [16];
  undefined1 local_de8 [16];
  float local_dd8;
  float fStack_dd4;
  float fStack_dd0;
  float fStack_dcc;
  float local_dc8;
  float fStack_dc4;
  float fStack_dc0;
  float fStack_dbc;
  float local_db8;
  float fStack_db4;
  float fStack_db0;
  float fStack_dac;
  float local_da8;
  float fStack_da4;
  float fStack_da0;
  undefined4 uStack_d9c;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined1 local_d78 [3384];
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffff108 >> 0x20);
  uVar36 = (undefined4)((ulonglong)in_stack_fffffffffffff110 >> 0x20);
  uVar37 = (undefined4)((ulonglong)in_stack_fffffffffffff118 >> 0x20);
  local_res10 = param_2;
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
    cVar4 = FUN_14385da40(param_1);
    if (cVar4 != '\0') {
      puVar7 = (undefined8 *)FCulture::GetName(param_1);
      uVar14 = puVar7[1];
      *(undefined8 *)(param_1 + 0x170) = *puVar7;
      *(undefined8 *)(param_1 + 0x178) = uVar14;
    }
  }
  else {
    uVar18 = 0;
    iVar17 = 0;
    iVar15 = *(int *)(param_1 + 0x1f8);
    if (*(char *)(param_1 + 0x168) == '\0') {
      if ((*(int *)(param_1 + 0x164) == 8) &&
         (iVar5 = FUN_143879940(*(longlong *)(param_1 + 0x1e0),&local_eb4,&local_e28), iVar5 != 0))
      {
        lVar9 = *(longlong *)
                 ((longlong)local_eb4 * 0x100 +
                 *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x130) + 0x38));
        fVar30 = *(float *)(lVar9 + 0x44);
        fVar32 = *(float *)(lVar9 + 0x48);
        fVar34 = *(float *)(lVar9 + 0x4c);
        fVar21 = *(float *)(lVar9 + 0x54);
        fVar22 = *(float *)(lVar9 + 0x58);
        fVar23 = *(float *)(lVar9 + 0x5c);
        fVar24 = *(float *)(lVar9 + 100);
        fVar25 = *(float *)(lVar9 + 0x68);
        fVar26 = *(float *)(lVar9 + 0x6c);
        fVar27 = *(float *)(lVar9 + 0x74);
        fVar28 = *(float *)(lVar9 + 0x78);
        fVar29 = *(float *)(lVar9 + 0x7c);
        *(float *)(param_1 + 0x180) =
             *(float *)(lVar9 + 0x70) +
             fStack_e24 * *(float *)(lVar9 + 0x50) + local_e28 * *(float *)(lVar9 + 0x40) +
             fStack_e20 * *(float *)(lVar9 + 0x60);
        *(float *)(param_1 + 0x184) =
             fVar27 + fStack_e24 * fVar21 + local_e28 * fVar30 + fStack_e20 * fVar24;
        *(float *)(param_1 + 0x188) =
             fVar28 + fStack_e24 * fVar22 + local_e28 * fVar32 + fStack_e20 * fVar25;
        *(float *)(param_1 + 0x18c) =
             fVar29 + fStack_e24 * fVar23 + local_e28 * fVar34 + fStack_e20 * fVar26;
      }
      puVar7 = (undefined8 *)FCulture::GetName(param_1);
      local_e88 = *puVar7;
      uStack_e80 = puVar7[1];
      iVar5 = FUN_14387af90(*(undefined8 *)(param_1 + 0x1e0),param_1 + 0x1f0,&local_e88,
                            *(longlong *)(param_1 + 0x150) + 0x120,
                            CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x134)),
                            CONCAT44(uVar36,*(undefined4 *)(param_1 + 0x138)),
                            CONCAT44(uVar37,*(undefined4 *)(param_1 + 0x140)),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x130),&local_e78,
                            &local_res20);
      uStack_e10 = CONCAT44(uStack_e10._4_4_,(undefined4)uStack_e10);
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          uStack_e10 = CONCAT44(uStack_e10._4_4_,(undefined4)uStack_e10);
          if (*(longlong *)(param_1 + 0x1e8) != 0) {
            cVar4 = *(char *)(*(longlong *)(param_1 + 0x1e8) + 0x5c);
            FUN_14387c4d0(*(undefined8 *)(param_1 + 0x1e8));
            if (*(longlong *)(param_1 + 0x1e8) != 0) {
              FUN_14370c150();
            }
            *(undefined8 *)(param_1 + 0x1e8) = 0;
            pvVar11 = TlsGetValue(DAT_146b7bf70);
            if (pvVar11 == (LPVOID)0x0) {
              pvVar11 = DAT_146b7bf68;
            }
            lVar9 = (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))
                              (*(longlong **)((longlong)pvVar11 + 0x58),0xe0);
            uVar8 = uVar18;
            if (lVar9 != 0) {
              uVar8 = FUN_143829ca0(lVar9,param_1 + 0x70);
            }
            uVar14 = *(undefined8 *)(param_1 + 0x1e0);
            pvVar11 = TlsGetValue(DAT_146b7bf70);
            if (pvVar11 == (LPVOID)0x0) {
              pvVar11 = DAT_146b7bf68;
            }
            lVar9 = (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))
                              (*(longlong **)((longlong)pvVar11 + 0x58),0x80);
            uVar12 = uVar18;
            if (lVar9 != 0) {
              lVar1 = *(longlong *)(param_1 + 0x20);
              lStack_ea0 = (longlong)*(int *)(param_1 + 0x28) * 0x20 + lVar1;
              local_ea8._0_4_ = (undefined4)lVar1;
              local_ea8._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
              local_e18 = (undefined4)local_ea8;
              uStack_e14 = local_ea8._4_4_;
              local_ea8 = uVar8;
              uStack_e10 = lStack_ea0;
              uVar12 = FUN_14387c290(lVar9,uVar14,param_1,puVar7,&local_e18,&local_ea8);
              uVar8 = uVar18;
            }
            if (*(longlong *)(param_1 + 0x1e8) != 0) {
              FUN_14370c150();
            }
            *(ulonglong *)(param_1 + 0x1e8) = uVar12;
            if (uVar8 != 0) {
              FUN_14370c150(uVar8);
            }
            if ((byte)(cVar4 - 2U) < 2) {
              FUN_14387c8a0(*(undefined8 *)(param_1 + 0x1e8));
            }
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x1e8) != 0) {
            FUN_14387c4d0();
            if (*(longlong *)(param_1 + 0x1e8) != 0) {
              FUN_14370c150();
            }
            *(undefined8 *)(param_1 + 0x1e8) = 0;
          }
          cVar4 = FUN_14385d940(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x130),&local_e88,0
                                ,param_1 + 0x70,&local_e78,&local_res20);
          if (cVar4 == '\0') {
            local_e78 = (undefined4)local_e88;
            uStack_e74 = local_e88._4_4_;
            uStack_e70 = (undefined4)uStack_e80;
            uStack_e6c = uStack_e80._4_4_;
            local_res20 = CONCAT44(local_res20._4_4_,0xffffffff);
            FUN_14385dcf0(param_1,1,param_2);
            uStack_e10 = CONCAT44(uStack_e10._4_4_,(undefined4)uStack_e10);
          }
          else {
            FUN_14385dcf0(param_1,2,param_2);
            uStack_e10 = CONCAT44(uStack_e10._4_4_,(undefined4)uStack_e10);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x170) = local_e78;
      *(undefined4 *)(param_1 + 0x174) = uStack_e74;
      *(undefined4 *)(param_1 + 0x178) = uStack_e70;
      *(undefined4 *)(param_1 + 0x17c) = uStack_e6c;
      *(undefined4 *)(param_1 + 0x16c) = (undefined4)local_res20;
      if (*(char *)(param_1 + 0x168) == '\0') {
        iVar15 = iVar15 + 1;
        if (iVar15 <= *(int *)(param_1 + 0x1f8)) {
          do {
            lVar9 = hkaiEdgePath::getEdge(*(undefined8 *)(param_1 + 0x1e0),iVar15);
            if ((*(byte *)(lVar9 + 0x80) & 0x10) != 0) {
              FUN_14385ddc0(param_1,iVar15);
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 <= *(int *)(param_1 + 0x1f8));
        }
        uVar16 = *(uint *)(param_1 + 0x16c) >> 0x16;
        lVar9 = *(longlong *)
                 ((ulonglong)uVar16 * 0x100 +
                 *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x130) + 0x38));
        local_dd8 = *(float *)(lVar9 + 0x40);
        fStack_dd4 = *(float *)(lVar9 + 0x44);
        fStack_dd0 = *(float *)(lVar9 + 0x48);
        fStack_dcc = *(float *)(lVar9 + 0x4c);
        local_dc8 = *(float *)(lVar9 + 0x50);
        fStack_dc4 = *(float *)(lVar9 + 0x54);
        fStack_dc0 = *(float *)(lVar9 + 0x58);
        fStack_dbc = *(float *)(lVar9 + 0x5c);
        local_db8 = *(float *)(lVar9 + 0x60);
        fStack_db4 = *(float *)(lVar9 + 100);
        fStack_db0 = *(float *)(lVar9 + 0x68);
        fStack_dac = *(float *)(lVar9 + 0x6c);
        local_da8 = *(float *)(lVar9 + 0x70);
        fStack_da4 = *(float *)(lVar9 + 0x74);
        fStack_da0 = *(float *)(lVar9 + 0x78);
        uStack_d9c = *(undefined4 *)(lVar9 + 0x7c);
        fVar30 = *(float *)(param_1 + 0x170) - local_da8;
        fVar32 = *(float *)(param_1 + 0x174) - fStack_da4;
        fVar34 = *(float *)(param_1 + 0x178) - fStack_da0;
        local_d98 = *(undefined8 *)(lVar9 + 0x80);
        uStack_d90 = *(undefined8 *)(lVar9 + 0x88);
        local_d88 = *(undefined8 *)(lVar9 + 0x90);
        uStack_d80 = *(undefined8 *)(lVar9 + 0x98);
        local_e68 = fStack_dd4 * fVar32 + fVar30 * local_dd8 + fVar34 * fStack_dd0;
        fStack_e64 = fStack_dc4 * fVar32 + fVar30 * local_dc8 + fVar34 * fStack_dc0;
        fStack_e60 = fStack_db4 * fVar32 + fVar30 * local_db8 + fVar34 * fStack_db0;
        fStack_e5c = fStack_dac * fVar32 + fVar30 * fStack_db4 + fVar34 * fStack_dac;
        FUN_14385da60(param_1,local_d78);
        if (*(char *)(param_1 + 0x168) == '\0') {
          local_eb8 = uVar16;
          iVar15 = FUN_1438a6bd0(*(undefined8 *)(param_1 + 0x1e0),param_1 + 0x1f0,&local_e68,
                                 &local_eb8,*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x130),
                                 &local_e58,local_de8,local_e38,local_df8,local_res18,local_res8);
          uVar8 = uVar18;
          if (iVar15 != 2) {
            while ((iVar15 != 3 && (iVar15 != 4))) {
              if ((iVar15 != 0) || ((*(char *)(param_1 + 0xba) == '\0' || (fStack_e2c != 0.0))))
              goto LAB_14385c1ad;
              pfVar10 = (float *)hkaiEdgePath::getEdge
                                           (*(undefined8 *)(param_1 + 0x1e0),local_res18[0]);
              auVar20._4_4_ = -(uint)(pfVar10[5] == pfVar10[1]);
              auVar20._0_4_ = -(uint)(pfVar10[4] == *pfVar10);
              auVar20._8_4_ = -(uint)(pfVar10[6] == pfVar10[2]);
              auVar20._12_4_ = -(uint)(pfVar10[7] == pfVar10[3]);
              iVar15 = movmskps((int)pfVar10,auVar20);
              if (iVar15 == 0xf) goto LAB_14385c1ad;
              lVar9 = hkaiEdgePath::getEdge(*(undefined8 *)(param_1 + 0x1e0),local_res18[0]);
              if (((*(byte *)(lVar9 + 0x80) & 0x10) != 0) || (3 < (int)uVar8)) goto LAB_14385c1ad;
              local_eb0 = FUN_14387a0e0(*(undefined8 *)(param_1 + 0x1e0),local_res18[0],
                                        local_res8[0],param_1 + 0x1f0,
                                        *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x130),
                                        local_d78);
              if (*(longlong *)(param_1 + 0x1e8) != 0) {
                cVar4 = *(char *)(*(longlong *)(param_1 + 0x1e8) + 0x5c);
                FUN_14387c4d0(*(undefined8 *)(param_1 + 0x1e8));
                if (*(longlong *)(param_1 + 0x1e8) != 0) {
                  FUN_14370c150();
                }
                *(undefined8 *)(param_1 + 0x1e8) = 0;
                pvVar11 = TlsGetValue(DAT_146b7bf70);
                if (pvVar11 == (LPVOID)0x0) {
                  pvVar11 = DAT_146b7bf68;
                }
                lVar9 = (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))
                                  (*(longlong **)((longlong)pvVar11 + 0x58),0xe0);
                uVar12 = uVar18;
                if (lVar9 != 0) {
                  uVar12 = FUN_143829ca0(lVar9,param_1 + 0x70);
                }
                uVar14 = *(undefined8 *)(param_1 + 0x1e0);
                local_res20 = FCulture::GetName(param_1);
                pvVar11 = TlsGetValue(DAT_146b7bf70);
                if (pvVar11 == (LPVOID)0x0) {
                  pvVar11 = DAT_146b7bf68;
                }
                lVar9 = (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))
                                  (*(longlong **)((longlong)pvVar11 + 0x58),0x80);
                uVar13 = uVar18;
                if (lVar9 != 0) {
                  lVar1 = *(longlong *)(param_1 + 0x20);
                  lStack_e40 = (longlong)*(int *)(param_1 + 0x28) * 0x20 + lVar1;
                  local_e48._0_4_ = (undefined4)lVar1;
                  local_e48._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
                  local_e08 = (undefined4)local_e48;
                  uStack_e04 = local_e48._4_4_;
                  local_e98[0] = uVar12;
                  local_e48 = lVar1;
                  uStack_e00 = lStack_e40;
                  uVar13 = FUN_14387c290(lVar9,uVar14,param_1,local_res20,&local_e08,local_e98);
                  uVar12 = uVar18;
                }
                if (*(longlong *)(param_1 + 0x1e8) != 0) {
                  FUN_14370c150();
                }
                *(ulonglong *)(param_1 + 0x1e8) = uVar13;
                if (uVar12 != 0) {
                  FUN_14370c150(uVar12);
                }
                if ((byte)(cVar4 - 2U) < 2) {
                  FUN_14387c8a0(*(undefined8 *)(param_1 + 0x1e8));
                }
              }
              if (local_eb0 != 0) goto LAB_14385c1ad;
              local_eb8 = uVar16;
              iVar15 = FUN_1438a6bd0(*(undefined8 *)(param_1 + 0x1e0),param_1 + 0x1f0,&local_e68,
                                     &local_eb8,
                                     *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x130),
                                     &local_e58,local_de8,local_e38,local_df8,local_res18,local_res8
                                    );
              uVar8 = (ulonglong)((int)uVar8 + 1);
              if (iVar15 == 2) break;
            }
          }
          FUN_14385dcf0(param_1,0,local_res10);
LAB_14385c1ad:
          lVar9 = *(longlong *)(param_1 + 0x150);
          fVar30 = *(float *)(lVar9 + 300);
          fVar31 = local_e58 * local_dd8 + fStack_e54 * local_dc8 + fStack_e50 * local_db8;
          fVar33 = local_e58 * fStack_dd4 + fStack_e54 * fStack_dc4 + fStack_e50 * fStack_db4;
          fVar35 = local_e58 * fStack_dd0 + fStack_e54 * fStack_dc0 + fStack_e50 * fStack_db0;
          fVar32 = fVar31 * *(float *)(lVar9 + 0x120);
          fVar21 = fVar33 * *(float *)(lVar9 + 0x124);
          fVar23 = fVar35 * *(float *)(lVar9 + 0x128);
          fVar31 = fVar31 - (fVar21 + fVar32 + fVar23) * *(float *)(lVar9 + 0x120);
          fVar33 = fVar33 - (fVar21 + fVar32 + fVar23) * *(float *)(lVar9 + 0x124);
          fVar35 = fVar35 - (fVar21 + fVar32 + fVar23) * *(float *)(lVar9 + 0x128);
          fVar34 = fVar31 * fVar31;
          fVar22 = fVar33 * fVar33;
          auVar19._8_4_ = fVar35 * fVar35;
          auVar19._4_4_ = auVar19._8_4_;
          auVar19._0_4_ = auVar19._8_4_;
          auVar19._12_4_ = auVar19._8_4_;
          fVar26 = fVar22 + fVar34 + auVar19._8_4_;
          fVar27 = fVar22 + fVar34 + auVar19._8_4_;
          fVar28 = fVar22 + fVar34 + auVar19._8_4_;
          fVar29 = fVar22 + fVar34 + auVar19._8_4_;
          auVar3._4_4_ = fVar27;
          auVar3._0_4_ = fVar26;
          auVar3._8_4_ = fVar28;
          auVar3._12_4_ = fVar29;
          auVar20 = rsqrtps(auVar19,auVar3);
          fVar34 = auVar20._0_4_;
          fVar22 = auVar20._4_4_;
          fVar24 = auVar20._8_4_;
          fVar25 = auVar20._12_4_;
          *(float *)(param_1 + 400) =
               (float)(~-(uint)(fVar26 <= 0.0) &
                      (uint)((3.0 - fVar26 * fVar34 * fVar34) * fVar34 * 0.5)) * fVar31;
          *(float *)(param_1 + 0x194) =
               (float)(~-(uint)(fVar27 <= 0.0) &
                      (uint)((3.0 - fVar27 * fVar22 * fVar22) * fVar22 * 0.5)) * fVar33;
          *(float *)(param_1 + 0x198) =
               (float)(~-(uint)(fVar28 <= 0.0) &
                      (uint)((3.0 - fVar28 * fVar24 * fVar24) * fVar24 * 0.5)) * fVar35;
          *(float *)(param_1 + 0x19c) =
               (float)(~-(uint)(fVar29 <= 0.0) &
                      (uint)((3.0 - fVar29 * fVar25 * fVar25) * fVar25 * 0.5)) *
               ((local_e58 * fStack_dcc + fStack_e54 * fStack_dbc + fStack_e50 * fStack_dac) -
               (fVar21 + fVar32 + fVar23) * fVar30);
          uVar6 = FUN_143889180(&local_dd8,&local_e68,&DAT_1467f06e0,param_1 + 0x1a0);
          auVar2._4_4_ = -(uint)(ABS(local_d88._4_4_) <= fRam00000001467f08f4);
          auVar2._0_4_ = -(uint)(ABS((float)local_d88) <= _DAT_1467f08f0);
          auVar2._8_4_ = -(uint)(ABS((float)uStack_d80) <= fRam00000001467f08f8);
          auVar2._12_4_ = -(uint)(ABS(uStack_d80._4_4_) <= fRam00000001467f08fc);
          uVar6 = movmskps(uVar6,auVar2);
          if (((byte)uVar6 & 7) == 7) {
            *(undefined1 *)(param_1 + 0x60) = 0;
            *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 400);
            *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x194);
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x198);
            *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x19c);
          }
          else {
            *(ulonglong *)(param_1 + 0x50) = CONCAT44(fStack_e54,local_e58);
            *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_e4c,fStack_e50);
          }
          *(undefined4 *)(param_1 + 0x1c0) = local_res18[0];
          *(ulonglong *)(param_1 + 0x1b0) = CONCAT44(fStack_e54,local_e58);
          *(ulonglong *)(param_1 + 0x1b8) = CONCAT44(uStack_e4c,fStack_e50);
          *(undefined1 *)(param_1 + 0x1c4) = local_res8[0];
          *(undefined1 *)(param_1 + 0x61) = 1;
          *(undefined4 *)(param_1 + 0x160) = 0;
        }
        FUN_143897e50(local_d78);
      }
    }
    if (((*(char *)(param_1 + 0x168) == '\0') && (*(int *)(param_1 + 0x164) == 8)) &&
       (fVar30 = *(float *)(param_1 + 0x170) - *(float *)(param_1 + 0x180),
       fVar32 = *(float *)(param_1 + 0x174) - *(float *)(param_1 + 0x184),
       fVar34 = *(float *)(param_1 + 0x178) - *(float *)(param_1 + 0x188),
       fVar32 * fVar32 + fVar30 * fVar30 + fVar34 * fVar34 <
       *(float *)(param_1 + 0x13c) * *(float *)(param_1 + 0x13c))) {
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0;
      if (*(char *)(param_1 + 0x1d8) != '\0') goto LAB_14385c3c1;
      uVar14 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x210) == (*(uint *)(param_1 + 0x214) & 0x3fffffff)) {
        FUN_14370c460(uVar14,(longlong *)(param_1 + 0x208),0x90);
      }
      iVar15 = *(int *)(param_1 + 0x210);
      *(int *)(param_1 + 0x210) = iVar15 + 1;
      *(undefined4 *)((longlong)iVar15 * 0x90 + *(longlong *)(param_1 + 0x208)) = 6;
      *(undefined1 *)(param_1 + 0x1d8) = 1;
    }
    if (*(char *)(param_1 + 0x1d8) != '\0') {
LAB_14385c3c1:
      *(undefined4 *)(param_1 + 0x160) = 3;
      return;
    }
    if (*(char *)(param_1 + 0x168) == '\0') goto LAB_14385c449;
    cVar4 = FUN_14385db20(param_1,param_1 + 0x170,*(undefined4 *)(param_1 + 0x16c),param_1 + 400,
                          param_1 + 0x1a0);
    if (cVar4 != '\0') goto LAB_14385c449;
  }
  iVar17 = (*(longlong *)(param_1 + 0x1d0) != 0) + 1;
LAB_14385c449:
  *(int *)(param_1 + 0x160) = iVar17;
  return;
}



// FUNCTION 14385c460 FUN_14385c460 body=158 status=ok
// SIG undefined FUN_14385c460(void)

void FUN_14385c460(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x208);
  lVar3 = (longlong)*(int *)(param_1 + 0x210) * 0x90 + lVar2;
  if (lVar2 == lVar3) {
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  else {
    uVar1 = FUN_14203c490();
    do {
      FUN_1438a94d0(lVar2,param_1,param_2,uVar1);
      lVar2 = lVar2 + 0x90;
    } while (lVar2 != lVar3);
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  return;
}



// FUNCTION 14385c500 FUN_14385c500 body=482 status=ok
// SIG undefined FUN_14385c500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14385c500(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  iVar11 = TMeshAttributeArraySet<int>::GetNumIndices(*(undefined8 *)(param_1 + 0x1e0));
  iVar11 = (1 - *(int *)(param_1 + 0x1f0)) + iVar11;
  uVar12 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar12 < iVar11) {
    iVar3 = uVar12 * 2;
    if (iVar11 < iVar3) {
      iVar11 = iVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_2,iVar11,0x10);
  }
  cVar1 = *(char *)(param_1 + 0x168);
  *(undefined4 *)(param_2 + 1) = 0;
  if (cVar1 == '\0') {
    iVar11 = TMeshAttributeArraySet<int>::GetNumIndices(*(undefined8 *)(param_1 + 0x1e0));
    iVar11 = iVar11 + (1 - *(int *)(param_1 + 0x1f0));
    uVar12 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
    if ((int)uVar12 < iVar11) {
      iVar3 = uVar12 * 2;
      if (iVar11 < iVar3) {
        iVar11 = iVar3;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_2,iVar11,0x10);
    }
    if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,param_2,0x10);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x174);
    uVar8 = *(undefined4 *)(param_1 + 0x178);
    uVar9 = *(undefined4 *)(param_1 + 0x17c);
    puVar16 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
    *puVar16 = *(undefined4 *)(param_1 + 0x170);
    puVar16[1] = uVar7;
    puVar16[2] = uVar8;
    puVar16[3] = uVar9;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    iVar11 = *(int *)(param_1 + 0x1f0);
    iVar13 = TMeshAttributeArraySet<int>::GetNumIndices(*(undefined8 *)(param_1 + 0x1e0));
    iVar3 = 0;
    if (0 < iVar11) {
      iVar3 = iVar11;
    }
    for (; iVar3 < iVar13; iVar3 = iVar3 + 1) {
      FUN_143879740(*(undefined8 *)(param_1 + 0x1e0),iVar3,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x130),&local_28,&local_18);
      pfVar15 = (float *)((longlong)(int)param_2[1] * 0x10 + *param_2);
      fVar17 = (fStack_24 + fStack_14) * fRam00000001467f07e4;
      fVar18 = (fStack_20 + fStack_10) * fRam00000001467f07e8;
      fVar19 = (fStack_1c + fStack_c) * fRam00000001467f07ec;
      *pfVar15 = (local_28 + local_18) * _DAT_1467f07e0;
      pfVar15[1] = fVar17;
      pfVar15[2] = fVar18;
      pfVar15[3] = fVar19;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    }
  }
  else {
    uVar12 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
    if (uVar12 < 2) {
      uVar12 = uVar12 * 2;
      uVar2 = 2;
      if (2 < uVar12) {
        uVar2 = uVar12;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_2,uVar2,0x10);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x178);
    puVar14 = (undefined8 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
    *puVar14 = *(undefined8 *)(param_1 + 0x170);
    puVar14[1] = uVar10;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    fVar17 = *(float *)(param_1 + 0x194);
    fVar18 = *(float *)(param_1 + 0x198);
    fVar19 = *(float *)(param_1 + 0x19c);
    fVar4 = *(float *)(param_1 + 0x174);
    fVar5 = *(float *)(param_1 + 0x178);
    fVar6 = *(float *)(param_1 + 0x17c);
    pfVar15 = (float *)((longlong)(int)param_2[1] * 0x10 + *param_2);
    *pfVar15 = *(float *)(param_1 + 400) + *(float *)(param_1 + 0x170);
    pfVar15[1] = fVar17 + fVar4;
    pfVar15[2] = fVar18 + fVar5;
    pfVar15[3] = fVar19 + fVar6;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  return;
}



// FUNCTION 14385c6f0 FUN_14385c6f0 body=85 status=ok
// SIG undefined FUN_14385c6f0(void)

undefined8 FUN_14385c6f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1e8);
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)FCulture::GetName();
    uVar2 = puVar3[1];
    *(undefined8 *)(lVar1 + 0x20) = *puVar3;
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x1e8) + 0x58) = *(undefined4 *)(param_1 + 500);
    return *(undefined8 *)(param_1 + 0x1e8);
  }
  return 0;
}



// FUNCTION 14385c750 FUN_14385c750 body=195 status=ok
// SIG undefined FUN_14385c750(void)

void FUN_14385c750(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    if (param_2 != 0) {
      FUN_14370c030(param_2);
    }
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(param_1 + 0x1d0) = param_2;
  }
  if (*(char *)(param_1 + 0x168) == '\0') {
    *(undefined1 *)(param_1 + 0x168) = 1;
    uVar1 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x210) == (*(uint *)(param_1 + 0x214) & 0x3fffffff)) {
      FUN_14370c460(uVar1,(longlong *)(param_1 + 0x208),0x90);
    }
    puVar2 = (undefined4 *)
             ((longlong)*(int *)(param_1 + 0x210) * 0x90 + *(longlong *)(param_1 + 0x208));
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
    *puVar2 = 4;
    puVar2[4] = 0;
  }
  return;
}



// FUNCTION 14385c820 FUN_14385c820 body=253 status=ok
// SIG undefined FUN_14385c820(void)

void FUN_14385c820(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  piVar7 = (int *)*param_2;
  uVar6 = 0;
  uVar9 = (param_2[1] - (longlong)piVar7) + 3U >> 2;
  if ((int *)param_2[1] < piVar7) {
    uVar9 = uVar6;
  }
  if (uVar9 != 0) {
    do {
      iVar1 = *piVar7;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      if (*(int *)(param_1 + 0x28) != iVar1) {
        puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x20));
        lVar4 = 4;
        lVar8 = ((longlong)*(int *)(param_1 + 0x28) * 0x20 + *(longlong *)(param_1 + 0x20)) -
                (longlong)puVar2;
        do {
          *puVar2 = *(undefined8 *)(lVar8 + (longlong)puVar2);
          puVar2 = puVar2 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      uVar3 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x210) == (*(uint *)(param_1 + 0x214) & 0x3fffffff)) {
        FUN_14370c460(uVar3,(longlong *)(param_1 + 0x208),0x90);
      }
      piVar7 = piVar7 + 1;
      uVar6 = uVar6 + 1;
      puVar5 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x210) * 0x90 + *(longlong *)(param_1 + 0x208));
      *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
      *puVar5 = 3;
      puVar5[4] = param_3;
    } while (uVar6 != uVar9);
  }
  return;
}



// FUNCTION 14385c920 FUN_14385c920 body=196 status=ok
// SIG undefined FUN_14385c920(void)

void FUN_14385c920(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *local_28;
  int local_20;
  uint local_1c;
  undefined1 local_18 [16];
  
  local_28 = local_18;
  local_20 = 0;
  local_1c = 0x80000001;
  FUN_14385e090(param_1,&local_28);
  FUN_1438a0820(*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x1d0));
  uVar1 = FUN_143703a50();
  lVar2 = (longlong)(local_20 + -1);
  if (-1 < local_20 + -1) {
    plVar3 = (longlong *)(local_28 + lVar2 * 0x10 + 8);
    do {
      if (*plVar3 != 0) {
        FUN_14370c150();
      }
      plVar3 = plVar3 + -2;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  local_20 = 0;
  if (-1 < (int)local_1c) {
    FUN_143702e10(uVar1,local_28,0x10,local_1c & 0x3fffffff);
  }
  return;
}



// FUNCTION 14385c9f0 FUN_14385c9f0 body=176 status=ok
// SIG undefined FUN_14385c9f0(void)

void FUN_14385c9f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    local_18 = 0x10;
    local_10 = *(undefined4 *)(param_1 + 0x1fc);
    local_16 = 0x320800;
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
    puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_18);
    }
    if (*(longlong *)(param_1 + 0x128) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_14385da50(param_1);
  }
  return;
}



// FUNCTION 14385caa0 FUN_14385caa0 body=176 status=ok
// SIG undefined FUN_14385caa0(void)

void FUN_14385caa0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    local_18 = 0x10;
    local_10 = *(undefined4 *)(param_1 + 0x1fc);
    local_16 = 0x300800;
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
    puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_18);
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_14385da50(param_1);
  }
  return;
}



// FUNCTION 14385cb50 FUN_14385cb50 body=1434 status=ok
// SIG undefined FUN_14385cb50(void)

void FUN_14385cb50(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  float fVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  LPVOID pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  undefined8 in_stack_fffffffffffff018;
  undefined4 uVar26;
  undefined8 in_stack_fffffffffffff020;
  undefined4 uVar27;
  undefined8 local_fb8;
  longlong lStack_fb0;
  undefined4 local_fa8;
  undefined4 uStack_fa4;
  undefined8 uStack_fa0;
  undefined1 local_f88 [512];
  undefined1 local_d88 [3408];
  
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffff018 >> 0x20);
  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffff020 >> 0x20);
  bVar4 = *(byte *)(param_4 + 0x4c);
  bVar10 = false;
  if (bVar4 == 0) {
    FUN_1437134a0(&local_fa8,local_f88,0x200);
    Electra::FHTTPResourceRequest::URL
              (&local_fa8,
               "Output status shouldn\'t be SEARCH_IN_PROGRESS if path request is marked as processed."
              );
    iVar12 = FUN_143732300(0x7b6114fd,local_f88,"Navigator\\hkaiNavigator.cpp",0x4e9);
    if (iVar12 != 0) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FUN_143713520(&local_fa8);
    return;
  }
  lVar23 = 0;
  uVar22 = 0;
  if (bVar4 == 1) {
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    uVar18 = *(undefined8 *)(param_3 + 0x28);
    uVar5 = *(undefined4 *)(param_4 + 0x40);
    uVar6 = *(undefined4 *)(*(longlong *)(param_3 + 0x48) + (longlong)*(int *)(param_4 + 0x44) * 4);
    uVar22 = *(undefined4 *)(param_4 + 0x48);
    puVar1 = (undefined8 *)
             (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(param_4 + 0x44) * 0x10);
    uVar17 = *puVar1;
    uVar9 = puVar1[1];
    uVar13 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x210) == (*(uint *)(param_1 + 0x214) & 0x3fffffff)) {
      FUN_14370c460(uVar13,(longlong *)(param_1 + 0x208),0x90);
    }
    uVar21 = 8;
    puVar20 = (undefined4 *)
              ((longlong)*(int *)(param_1 + 0x210) * 0x90 + *(longlong *)(param_1 + 0x208));
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
    *puVar20 = 0;
    puVar20[0xe] = uVar22;
    *(undefined8 *)(puVar20 + 4) = uVar7;
    *(undefined8 *)(puVar20 + 6) = uVar18;
    *(undefined8 *)(puVar20 + 8) = uVar17;
    *(undefined8 *)(puVar20 + 10) = uVar9;
    puVar20[0xc] = uVar2;
    puVar20[0xd] = uVar6;
    puVar20[0xf] = uVar5;
  }
  else if (bVar4 == 2) {
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    uVar18 = *(undefined8 *)(param_3 + 0x28);
    uVar5 = *(undefined4 *)(param_4 + 0x40);
    uVar22 = *(undefined4 *)(param_4 + 0x48);
    uVar17 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x210) == (*(uint *)(param_1 + 0x214) & 0x3fffffff)) {
      FUN_14370c460(uVar17,(longlong *)(param_1 + 0x208),0x90);
    }
    puVar20 = (undefined4 *)
              ((longlong)*(int *)(param_1 + 0x210) * 0x90 + *(longlong *)(param_1 + 0x208));
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
    *puVar20 = 1;
    uVar21 = 4;
    puVar20[0xe] = uVar22;
    *(undefined8 *)(puVar20 + 4) = uVar7;
    *(undefined8 *)(puVar20 + 6) = uVar18;
    *(undefined8 *)(puVar20 + 8) = 0;
    *(undefined8 *)(puVar20 + 10) = 0;
    puVar20[0xc] = uVar2;
    puVar20[0xd] = 0xffffffff;
    puVar20[0xf] = uVar5;
    puVar20[0x10] = 2;
    if ((*(byte *)(param_1 + 0x250) & 4) == 0) {
      return;
    }
    if (*(int *)(param_4 + 0x20) == 0) {
      return;
    }
  }
  else {
    if (4 < bVar4) {
      return;
    }
    cVar11 = FUN_14385da30();
    if (((cVar11 == '\0') || (*(char *)(param_4 + 0x4d) != '\x01')) ||
       (iVar12 = FUN_14385d880(param_1), iVar12 <= *(int *)(param_4 + 0x40))) {
      uVar5 = *(undefined4 *)(param_3 + 0x40);
      uVar7 = *(undefined8 *)(param_3 + 0x20);
      uVar18 = *(undefined8 *)(param_3 + 0x28);
      uVar6 = *(undefined4 *)(param_4 + 0x40);
      uVar2 = *(undefined4 *)(param_4 + 0x48);
      if (*(char *)(param_4 + 0x4d) != '\x01') {
        if (*(char *)(param_4 + 0x4d) == '\x02') {
          uVar22 = 1;
        }
        else {
          uVar22 = 2;
        }
      }
      uVar17 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x210) == (*(uint *)(param_1 + 0x214) & 0x3fffffff)) {
        FUN_14370c460(uVar17,(longlong *)(param_1 + 0x208),0x90);
      }
      puVar20 = (undefined4 *)
                ((longlong)*(int *)(param_1 + 0x210) * 0x90 + *(longlong *)(param_1 + 0x208));
      *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
      *puVar20 = 2;
      puVar20[0x10] = uVar22;
      uVar21 = 2;
      puVar20[0xe] = uVar2;
      *(undefined8 *)(puVar20 + 4) = uVar7;
      *(undefined8 *)(puVar20 + 6) = uVar18;
      *(undefined8 *)(puVar20 + 8) = 0;
      *(undefined8 *)(puVar20 + 10) = 0;
      puVar20[0xc] = uVar5;
      puVar20[0xd] = 0xffffffff;
      puVar20[0xf] = uVar6;
    }
    else {
      bVar10 = true;
      uVar21 = 1;
    }
    uStack_fa0 = CONCAT44(uStack_fa0._4_4_,(undefined4)uStack_fa0);
    if (((*(byte *)(param_1 + 0x250) & (byte)uVar21) != (byte)uVar21) ||
       (uStack_fa0 = CONCAT44(uStack_fa0._4_4_,(undefined4)uStack_fa0),
       *(int *)(param_4 + 0x20) == 0)) goto LAB_14385d06b;
  }
  pvVar14 = TlsGetValue(DAT_146b7bf70);
  if (pvVar14 == (LPVOID)0x0) {
    pvVar14 = DAT_146b7bf68;
  }
  lVar15 = (**(code **)(**(longlong **)((longlong)pvVar14 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar14 + 0x58),0x48);
  lVar16 = lVar23;
  if (lVar15 != 0) {
    lVar16 = FUN_143878460(lVar15);
  }
  if (lVar16 != *(longlong *)(param_1 + 0x1e0)) {
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(param_1 + 0x1e0) = lVar16;
  }
  lVar16 = *(longlong *)(param_1 + 0x150);
  uVar7 = *(undefined8 *)(param_1 + 0x1e0);
  uVar18 = *(undefined8 *)(lVar16 + 0x130);
  uVar17 = FUN_14385da60(param_1,local_d88);
  fVar24 = (float)FUN_14385d670(param_1);
  fVar3 = *(float *)(param_1 + 0x148);
  fVar25 = (float)FUN_14385d670(param_1);
  FUN_1438794e0(uVar7,param_3,param_4,*(float *)(param_1 + 0xbc) * 0.5,
                CONCAT44(uVar26,fVar25 * *(float *)(param_1 + 0x144)),
                CONCAT44(uVar27,fVar24 * fVar3),lVar16 + 0x120,uVar18,uVar17);
  FUN_143897e50(local_d88);
  FUN_143879c20(*(undefined8 *)(param_1 + 0x1e0),param_1 + 0x1f0);
  *(undefined4 *)(param_1 + 0x164) = uVar21;
  *(undefined2 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_14387c4d0();
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  pvVar14 = TlsGetValue(DAT_146b7bf70);
  if (pvVar14 == (LPVOID)0x0) {
    pvVar14 = DAT_146b7bf68;
  }
  lVar15 = (**(code **)(**(longlong **)((longlong)pvVar14 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar14 + 0x58),0xe0);
  lVar16 = lVar23;
  if (lVar15 != 0) {
    lVar16 = FUN_143829ca0(lVar15,param_1 + 0x70);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x1e0);
  uVar18 = FCulture::GetName(param_1);
  pvVar14 = TlsGetValue(DAT_146b7bf70);
  if (pvVar14 == (LPVOID)0x0) {
    pvVar14 = DAT_146b7bf68;
  }
  lVar19 = (**(code **)(**(longlong **)((longlong)pvVar14 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar14 + 0x58),0x80);
  lVar15 = lVar23;
  if (lVar19 != 0) {
    lVar15 = *(longlong *)(param_1 + 0x20);
    lStack_fb0 = (longlong)*(int *)(param_1 + 0x28) * 0x20 + lVar15;
    local_fb8._0_4_ = (undefined4)lVar15;
    local_fb8._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
    local_fa8 = (undefined4)local_fb8;
    uStack_fa4 = local_fb8._4_4_;
    local_fb8 = lVar16;
    uStack_fa0 = lStack_fb0;
    lVar15 = FUN_14387c290(lVar19,uVar7,param_1,uVar18,&local_fa8,&local_fb8);
    lVar16 = lVar23;
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x1e8) = lVar15;
  if (lVar16 != 0) {
    FUN_14370c150(lVar16);
  }
LAB_14385d06b:
  if (bVar10) {
    FUN_14385e2f0(param_1);
  }
  return;
}



// FUNCTION 14385d0f0 FUN_14385d0f0 body=1048 status=ok
// SIG undefined FUN_14385d0f0(void)

longlong FUN_14385d0f0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  int local_res8 [2];
  longlong local_res10;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_70;
  
  local_res10 = param_2;
  FUN_14385d940(param_2,param_1 + 0x20,1,*(undefined8 *)(param_1 + 0x40),&local_c8,local_res8);
  iVar1 = local_res8[0];
  if (local_res8[0] == -1) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = FUN_143703a50();
    if (*(uint *)(param_4 + 1) == (*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar8,param_4,0x90);
    }
    lVar6 = param_4[1];
    *(int *)(param_4 + 1) = (int)lVar6 + 1;
    puVar12 = (undefined4 *)((longlong)(int)lVar6 * 0x90 + *param_4);
    lVar11 = 0;
    *puVar12 = 1;
    *(undefined8 *)(puVar12 + 8) = 0;
    *(undefined8 *)(puVar12 + 10) = 0;
    puVar12[0xe] = local_70;
    *(undefined8 *)(puVar12 + 4) = uVar9;
    *(undefined8 *)(puVar12 + 6) = uVar5;
    *(undefined8 *)(puVar12 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar12 + 0xf) = 0;
  }
  else {
    *(ulonglong *)(param_3 + 0x20) = CONCAT44(uStack_c4,local_c8);
    *(ulonglong *)(param_3 + 0x28) = CONCAT44(uStack_bc,uStack_c0);
    *(undefined4 *)(param_3 + 0x50) = 0;
    *(undefined4 *)(param_3 + 0x38) = 0;
    *(int *)(param_3 + 0x40) = local_res8[0];
    pfVar13 = *(float **)(param_1 + 0x30);
    pfVar14 = pfVar13 + (longlong)*(int *)(param_1 + 0x38) * 8;
    for (; pfVar13 != pfVar14; pfVar13 = pfVar13 + 8) {
      if (pfVar13[4] == -NAN) {
        local_b8 = *pfVar13;
        fStack_b4 = pfVar13[1];
        fStack_b0 = pfVar13[2];
        fStack_ac = pfVar13[3];
      }
      else {
        fVar2 = *pfVar13;
        fVar3 = pfVar13[1];
        fVar4 = pfVar13[2];
        lVar6 = *(longlong *)((longlong)(int)pfVar13[4] * 0x100 + *(longlong *)(param_2 + 0x38));
        local_b8 = fVar3 * *(float *)(lVar6 + 0x50) + fVar2 * *(float *)(lVar6 + 0x40) +
                   fVar4 * *(float *)(lVar6 + 0x60) + *(float *)(lVar6 + 0x70);
        fStack_b4 = fVar3 * *(float *)(lVar6 + 0x54) + fVar2 * *(float *)(lVar6 + 0x44) +
                    fVar4 * *(float *)(lVar6 + 100) + *(float *)(lVar6 + 0x74);
        fStack_b0 = fVar3 * *(float *)(lVar6 + 0x58) + fVar2 * *(float *)(lVar6 + 0x48) +
                    fVar4 * *(float *)(lVar6 + 0x68) + *(float *)(lVar6 + 0x78);
        fStack_ac = fVar3 * *(float *)(lVar6 + 0x5c) + fVar2 * *(float *)(lVar6 + 0x4c) +
                    fVar4 * *(float *)(lVar6 + 0x6c) + *(float *)(lVar6 + 0x7c);
      }
      FUN_14385d940(param_2,&local_b8,1,*(undefined8 *)(param_1 + 0x40),&local_a8,local_res8);
      iVar7 = local_res8[0];
      if (local_res8[0] != -1) {
        uVar9 = FUN_143703a50();
        if (*(uint *)(param_3 + 0x50) == (*(uint *)(param_3 + 0x54) & 0x3fffffff)) {
          FUN_14370c460(uVar9,param_3 + 0x48,4);
        }
        *(int *)(*(longlong *)(param_3 + 0x48) + (longlong)*(int *)(param_3 + 0x50) * 4) = iVar7;
        *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
        uVar9 = FUN_143703a50();
        if (*(uint *)(param_3 + 0x38) == (*(uint *)(param_3 + 0x3c) & 0x3fffffff)) {
          FUN_14370c460(uVar9,param_3 + 0x30,0x10);
        }
        puVar10 = (undefined8 *)
                  ((longlong)*(int *)(param_3 + 0x38) * 0x10 + *(longlong *)(param_3 + 0x30));
        *puVar10 = local_a8;
        puVar10[1] = uStack_a0;
        *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
        param_2 = local_res10;
      }
    }
    if (*(int *)(param_3 + 0x50) == 0) {
      local_98 = local_c8;
      uStack_94 = uStack_c4;
      uStack_90 = uStack_c0;
      uStack_8c = uStack_bc;
      uVar9 = FUN_143703a50();
      if (*(uint *)(param_4 + 1) == (*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar9,param_4,0x90);
      }
      lVar6 = param_4[1];
      iVar7 = (int)lVar6 + 1;
      *(int *)(param_4 + 1) = iVar7;
      puVar12 = (undefined4 *)((longlong)(int)lVar6 * 0x90 + *param_4);
      lVar11 = (ulonglong)(uint3)((uint)iVar7 >> 8) << 8;
      *puVar12 = 1;
      *(ulonglong *)(puVar12 + 4) = CONCAT44(uStack_94,local_98);
      *(ulonglong *)(puVar12 + 6) = CONCAT44(uStack_8c,uStack_90);
      puVar12[0xe] = local_70;
      *(undefined8 *)(puVar12 + 8) = 0;
      *(undefined8 *)(puVar12 + 10) = 0;
      puVar12[0xc] = iVar1;
      puVar12[0xd] = 0xffffffff;
      puVar12[0xf] = 0;
      puVar12[0x10] = 1;
    }
    else {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x44);
      iVar7 = 10000;
      if (0 < iVar1) {
        iVar7 = iVar1;
      }
      *(int *)(param_3 + 0x58) = iVar7;
      *(undefined8 *)(param_3 + 0x5c) = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x4c);
      lVar6 = *(longlong *)(param_1 + 0x40);
      uVar9 = *(undefined8 *)(lVar6 + 0x68);
      *(undefined8 *)(param_3 + 0x70) = *(undefined8 *)(lVar6 + 0x60);
      *(undefined8 *)(param_3 + 0x78) = uVar9;
      *(undefined8 *)(param_3 + 0x80) = *(undefined8 *)(lVar6 + 0x70);
      *(undefined8 *)(param_3 + 0x88) = *(undefined8 *)(lVar6 + 0x78);
      *(undefined1 *)(param_3 + 0x90) = *(undefined1 *)(lVar6 + 0x80);
      *(undefined1 *)(param_3 + 0x91) = *(undefined1 *)(lVar6 + 0x81);
      *(undefined1 *)(param_3 + 0x92) = *(undefined1 *)(lVar6 + 0x82);
      *(undefined1 *)(param_3 + 0x93) = *(undefined1 *)(lVar6 + 0x83);
      *(undefined1 *)(param_3 + 0x94) = *(undefined1 *)(lVar6 + 0x84);
      *(undefined1 *)(param_3 + 0x95) = *(undefined1 *)(lVar6 + 0x85);
      *(undefined1 *)(param_3 + 0x96) = *(undefined1 *)(lVar6 + 0x86);
      *(undefined1 *)(param_3 + 0x97) = *(undefined1 *)(lVar6 + 0x87);
      *(undefined4 *)(param_3 + 0x98) = *(undefined4 *)(lVar6 + 0x88);
      *(undefined4 *)(param_3 + 0x9c) = *(undefined4 *)(lVar6 + 0x8c);
      *(undefined4 *)(param_3 + 0xa0) = *(undefined4 *)(lVar6 + 0x90);
      *(undefined4 *)(param_3 + 0xa4) = *(undefined4 *)(lVar6 + 0x94);
      *(undefined4 *)(param_3 + 0xa8) = *(undefined4 *)(lVar6 + 0x98);
      *(undefined8 *)(param_3 + 0xac) = *(undefined8 *)(lVar6 + 0x9c);
      *(undefined8 *)(param_3 + 0xb4) = *(undefined8 *)(lVar6 + 0xa4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      uVar9 = *(undefined8 *)(lVar6 + 0x28);
      lVar11 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
      *(undefined8 *)(param_3 + 0x70) = *(undefined8 *)(lVar6 + 0x20);
      *(undefined8 *)(param_3 + 0x78) = uVar9;
      *(undefined1 *)(param_3 + 0x96) = 1;
    }
  }
  return lVar11;
}



// FUNCTION 14385d510 FUN_14385d510 body=350 status=ok
// SIG undefined FUN_14385d510(void)

void FUN_14385d510(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    FUN_14370c030(lVar4);
  }
  iVar3 = *(int *)(param_1 + 0x50);
  lVar14 = (longlong)iVar3;
  lVar12 = *(longlong *)(param_1 + 0x48);
  uVar10 = FUN_143703a50();
  iVar13 = *(int *)(lVar4 + 0x210) + iVar3;
  uVar9 = *(uint *)(lVar4 + 0x214) & 0x3fffffff;
  if (((int)uVar9 < iVar13) && ((int)uVar9 < iVar13)) {
    iVar5 = iVar13;
    if (iVar13 < (int)(uVar9 * 2)) {
      iVar5 = uVar9 * 2;
    }
    FUN_14370c310(uVar10,(longlong *)(lVar4 + 0x208),iVar5,0x90);
  }
  puVar11 = (undefined8 *)((longlong)*(int *)(lVar4 + 0x210) * 0x90 + *(longlong *)(lVar4 + 0x208));
  if (0 < iVar3) {
    lVar12 = lVar12 - (longlong)puVar11;
    do {
      uVar10 = ((undefined8 *)((longlong)puVar11 + lVar12))[1];
      *puVar11 = *(undefined8 *)((longlong)puVar11 + lVar12);
      puVar11[1] = uVar10;
      puVar1 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x10);
      uVar10 = puVar1[1];
      puVar11[2] = *puVar1;
      puVar11[3] = uVar10;
      puVar1 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x20);
      uVar10 = puVar1[1];
      puVar11[4] = *puVar1;
      puVar11[5] = uVar10;
      puVar1 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x30);
      uVar10 = puVar1[1];
      puVar11[6] = *puVar1;
      puVar11[7] = uVar10;
      puVar1 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x40);
      uVar10 = puVar1[1];
      puVar11[8] = *puVar1;
      puVar11[9] = uVar10;
      puVar1 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x50);
      uVar10 = puVar1[1];
      puVar11[10] = *puVar1;
      puVar11[0xb] = uVar10;
      puVar1 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x60);
      uVar10 = puVar1[1];
      puVar11[0xc] = *puVar1;
      puVar11[0xd] = uVar10;
      puVar1 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x70);
      uVar10 = puVar1[1];
      puVar11[0xe] = *puVar1;
      puVar11[0xf] = uVar10;
      puVar2 = (undefined4 *)((longlong)puVar11 + lVar12 + 0x80);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *(undefined4 *)(puVar11 + 0x10) = *puVar2;
      *(undefined4 *)((longlong)puVar11 + 0x84) = uVar6;
      *(undefined4 *)(puVar11 + 0x11) = uVar7;
      *(undefined4 *)((longlong)puVar11 + 0x8c) = uVar8;
      puVar11 = puVar11 + 0x12;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  *(int *)(lVar4 + 0x210) = iVar13;
  FUN_14385cb50(lVar4,*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  if (*(longlong *)(lVar4 + 0x1d0) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar4 + 0x1d0) = 0;
  if (lVar4 != 0) {
    FUN_14370c150(lVar4);
  }
  return;
}



// FUNCTION 14385d670 FUN_14385d670 body=17 status=ok
// SIG undefined FUN_14385d670(void)

float FUN_14385d670(longlong param_1)

{
  return *(float *)(param_1 + 0xbc) * 0.5;
}



// FUNCTION 14385d690 FUN_14385d690 body=315 status=ok
// SIG undefined FUN_14385d690(void)

undefined8 FUN_14385d690(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_e8 [2];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  
  if ((*(int *)(param_1 + 0x160) == 0) && (*(char *)(param_1 + 0x168) == '\0')) {
    local_e8[0] = *(undefined8 *)(param_1 + 0x1e0);
    lVar1 = *(longlong *)(param_1 + 0x150);
    local_c8 = *(uint *)(param_1 + 0x16c) >> 0x16;
    local_a0 = *(char *)(param_1 + 0x1c4) != '\0';
    lVar2 = *(longlong *)
             ((ulonglong)local_c8 * 0x100 + *(longlong *)(*(longlong *)(lVar1 + 0x130) + 0x38));
    fVar3 = *(float *)(param_1 + 0x170) - *(float *)(lVar2 + 0x70);
    fVar4 = *(float *)(param_1 + 0x174) - *(float *)(lVar2 + 0x74);
    fVar5 = *(float *)(param_1 + 0x178) - *(float *)(lVar2 + 0x78);
    local_b8 = *(undefined8 *)(param_1 + 0x1b0);
    uStack_b0 = *(undefined8 *)(param_1 + 0x1b8);
    local_d8 = *(float *)(lVar2 + 0x44) * fVar4 + fVar3 * *(float *)(lVar2 + 0x40) +
               *(float *)(lVar2 + 0x48) * fVar5;
    fStack_d4 = *(float *)(lVar2 + 0x54) * fVar4 + fVar3 * *(float *)(lVar2 + 0x50) +
                *(float *)(lVar2 + 0x58) * fVar5;
    fStack_d0 = *(float *)(lVar2 + 100) * fVar4 + fVar3 * *(float *)(lVar2 + 0x60) +
                *(float *)(lVar2 + 0x68) * fVar5;
    fStack_cc = *(float *)(lVar2 + 0x6c) * fVar4 + fVar3 * *(float *)(lVar2 + 100) +
                *(float *)(lVar2 + 0x6c) * fVar5;
    local_c0 = *(undefined8 *)(lVar1 + 0x130);
    local_a8 = *(undefined4 *)(param_1 + 0x1f0);
    local_a4 = *(undefined4 *)(param_1 + 0x1c0);
    local_98 = *(undefined4 *)(lVar1 + 0x120);
    uStack_94 = *(undefined4 *)(lVar1 + 0x124);
    uStack_90 = *(undefined4 *)(lVar1 + 0x128);
    uStack_8c = *(undefined4 *)(lVar1 + 300);
    local_88 = 0;
  }
  else {
    local_88 = 1;
  }
  FUN_14385a250(param_2,local_e8);
  return param_2;
}



// FUNCTION 14385d7d0 FUN_14385d7d0 body=18 status=ok
// SIG undefined FUN_14385d7d0(void)

undefined8 * FUN_14385d7d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468295e0;
  return param_2;
}



// FUNCTION 14385d7f0 FUN_14385d7f0 body=134 status=ok
// SIG undefined FUN_14385d7f0(void)

void FUN_14385d7f0(longlong param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float *pfVar17;
  float *pfVar18;
  float local_res10 [6];
  
  pfVar18 = (float *)((longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x20));
  local_res10[0] = pfVar18[4];
  if (local_res10[0] == -NAN) {
    uVar16 = *(undefined8 *)(pfVar18 + 2);
    *(undefined8 *)param_3 = *(undefined8 *)pfVar18;
    *(undefined8 *)(param_3 + 2) = uVar16;
    return;
  }
  pfVar17 = (float *)FUN_14383f810(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x130),
                                   local_res10);
  fVar1 = *pfVar18;
  fVar2 = pfVar18[1];
  fVar3 = pfVar18[2];
  fVar4 = pfVar17[5];
  fVar5 = pfVar17[6];
  fVar6 = pfVar17[7];
  fVar7 = pfVar17[1];
  fVar8 = pfVar17[2];
  fVar9 = pfVar17[3];
  fVar10 = pfVar17[9];
  fVar11 = pfVar17[10];
  fVar12 = pfVar17[0xb];
  fVar13 = pfVar17[0xd];
  fVar14 = pfVar17[0xe];
  fVar15 = pfVar17[0xf];
  *param_3 = fVar2 * pfVar17[4] + fVar1 * *pfVar17 + fVar3 * pfVar17[8] + pfVar17[0xc];
  param_3[1] = fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10 + fVar13;
  param_3[2] = fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11 + fVar14;
  param_3[3] = fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12 + fVar15;
  return;
}



// FUNCTION 14385d880 FUN_14385d880 body=7 status=ok
// SIG undefined FUN_14385d880(void)

undefined4 FUN_14385d880(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}



// FUNCTION 14385d890 FUN_14385d890 body=161 status=ok
// SIG undefined FUN_14385d890(void)

longlong * FUN_14385d890(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  LPVOID pvVar2;
  longlong lVar3;
  
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar2 + 0x58),0xe0);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_143841d70(lVar3,0);
  }
  cVar1 = FUN_14385d0f0(*(undefined8 *)(param_1 + 0x40),param_3,lVar3,param_1 + 0x48);
  if (cVar1 == '\0') {
    *param_2 = 0;
    if (lVar3 != 0) {
      FUN_14370c150(lVar3);
    }
  }
  else {
    *param_2 = lVar3;
  }
  return param_2;
}



// FUNCTION 14385d940 FUN_14385d940 body=232 status=ok
// SIG undefined FUN_14385d940(void)

bool FUN_14385d940(undefined8 param_1,undefined8 param_2,undefined1 param_3,longlong param_4,
                  undefined8 param_5,int *param_6)

{
  int iVar1;
  int *piVar2;
  undefined1 local_res18 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  float local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_1438a2d90(&local_68);
  local_68 = *(undefined4 *)(param_4 + 0xc0);
  local_24 = *(undefined4 *)(param_4 + 0x30);
  local_20 = *(undefined8 *)(param_4 + 0x78);
  local_44 = *(float *)(param_4 + 0x4c) * 0.5;
  local_18 = *(undefined4 *)(param_4 + 0x50);
  local_40 = 0x3f8147ae;
  local_3c = 0;
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  local_58 = local_68;
  uStack_54 = local_68;
  uStack_50 = local_68;
  uStack_4c = local_68;
  local_48 = param_3;
  piVar2 = (int *)FUN_1438a3410(local_res18,param_1,param_2,param_4 + 0x20,&local_68,param_5);
  iVar1 = *piVar2;
  *param_6 = iVar1;
  return iVar1 != -1;
}



// FUNCTION 14385da30 FUN_14385da30 body=11 status=ok
// SIG undefined FUN_14385da30(void)

bool FUN_14385da30(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0xb4);
}



// FUNCTION 14385da40 FUN_14385da40 body=8 status=ok
// SIG undefined FUN_14385da40(void)

bool FUN_14385da40(longlong param_1)

{
  return *(char *)(param_1 + 0x40) != '\0';
}



// FUNCTION 14385da50 FUN_14385da50 body=12 status=ok
// SIG undefined FUN_14385da50(void)

void FUN_14385da50(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x169) = 1;
  FUN_14385e2f0();
  return;
}



// FUNCTION 14385da60 FUN_14385da60 body=180 status=ok
// SIG undefined FUN_14385da60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14385da60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_48;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  local_3c = *(float *)(param_1 + 0xbc) * 0.5;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_1c = 0xff;
  local_48 = *(undefined8 *)(lVar1 + 0x130);
  local_40 = *(undefined4 *)(param_1 + 0xa0);
  local_28 = *(undefined8 *)(param_1 + 0xe8);
  local_38 = *(undefined4 *)(lVar1 + 0x120);
  uStack_34 = *(undefined4 *)(lVar1 + 0x124);
  uStack_30 = *(undefined4 *)(lVar1 + 0x128);
  uStack_2c = *(undefined4 *)(lVar1 + 300);
  local_20 = *(undefined4 *)(param_1 + 0xc0);
  FUN_143897b00(param_2,&local_48);
  return param_2;
}



// FUNCTION 14385db20 FUN_14385db20 body=459 status=ok
// SIG undefined FUN_14385db20(void)

bool FUN_14385db20(longlong param_1,float *param_2,uint param_3,float *param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res8 [2];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (*(char *)(param_1 + 0x61) == '\0') {
    return false;
  }
  if (param_3 != 0xffffffff) {
    local_res8[0] = param_3 >> 0x16;
    pfVar3 = (float *)FUN_14383f810(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x130),
                                    local_res8);
    if (*(char *)(param_1 + 0x60) == '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_4 + 2) = uVar2;
    }
    else {
      fVar17 = *(float *)(param_1 + 0x50);
      fVar4 = *(float *)(param_1 + 0x54);
      fVar5 = *(float *)(param_1 + 0x58);
      fVar6 = pfVar3[5];
      fVar9 = pfVar3[6];
      fVar10 = pfVar3[7];
      fVar11 = pfVar3[1];
      fVar12 = pfVar3[2];
      fVar13 = pfVar3[3];
      fVar14 = pfVar3[9];
      fVar15 = pfVar3[10];
      fVar16 = pfVar3[0xb];
      *param_4 = fVar4 * pfVar3[4] + fVar17 * *pfVar3 + fVar5 * pfVar3[8];
      param_4[1] = fVar4 * fVar6 + fVar17 * fVar11 + fVar5 * fVar14;
      param_4[2] = fVar4 * fVar9 + fVar17 * fVar12 + fVar5 * fVar15;
      param_4[3] = fVar4 * fVar10 + fVar17 * fVar13 + fVar5 * fVar16;
    }
    fVar17 = param_4[3];
    lVar1 = *(longlong *)(param_1 + 0x150);
    fVar4 = *param_4 * *(float *)(lVar1 + 0x120);
    fVar5 = param_4[1] * *(float *)(lVar1 + 0x124);
    fVar6 = param_4[2] * *(float *)(lVar1 + 0x128);
    auVar7._0_4_ = (fVar5 + fVar4 + fVar6) * *(float *)(lVar1 + 0x120);
    auVar7._4_4_ = (fVar5 + fVar4 + fVar6) * *(float *)(lVar1 + 0x124);
    auVar7._8_4_ = (fVar5 + fVar4 + fVar6) * *(float *)(lVar1 + 0x128);
    auVar7._12_4_ = (fVar5 + fVar4 + fVar6) * *(float *)(lVar1 + 300);
    fVar14 = *param_4 - auVar7._0_4_;
    fVar15 = param_4[1] - auVar7._4_4_;
    fVar16 = param_4[2] - auVar7._8_4_;
    *param_4 = fVar14;
    param_4[1] = fVar15;
    param_4[2] = fVar16;
    param_4[3] = fVar17 - auVar7._12_4_;
    fVar4 = fVar14 * fVar14;
    fVar5 = fVar15 * fVar15;
    fVar6 = fVar16 * fVar16;
    fVar11 = fVar5 + fVar4 + fVar6;
    fVar12 = fVar5 + fVar4 + fVar6;
    fVar13 = fVar5 + fVar4 + fVar6;
    fVar6 = fVar5 + fVar4 + fVar6;
    auVar8._4_4_ = fVar12;
    auVar8._0_4_ = fVar11;
    auVar8._8_4_ = fVar13;
    auVar8._12_4_ = fVar6;
    auVar8 = rsqrtps(auVar7,auVar8);
    fVar4 = auVar8._0_4_;
    fVar5 = auVar8._4_4_;
    fVar9 = auVar8._8_4_;
    fVar10 = auVar8._12_4_;
    *param_4 = (float)(~-(uint)(fVar11 <= 0.0) &
                      (uint)((3.0 - fVar4 * fVar11 * fVar4) * fVar4 * 0.5)) * fVar14;
    param_4[1] = (float)(~-(uint)(fVar12 <= 0.0) &
                        (uint)((3.0 - fVar5 * fVar12 * fVar5) * fVar5 * 0.5)) * fVar15;
    param_4[2] = (float)(~-(uint)(fVar13 <= 0.0) &
                        (uint)((3.0 - fVar9 * fVar13 * fVar9) * fVar9 * 0.5)) * fVar16;
    param_4[3] = (float)(~-(uint)(fVar6 <= 0.0) &
                        (uint)((3.0 - fVar10 * fVar6 * fVar10) * fVar10 * 0.5)) *
                 (fVar17 - auVar7._12_4_);
    fVar17 = *param_2 - pfVar3[0xc];
    fVar4 = param_2[1] - pfVar3[0xd];
    fVar5 = param_2[2] - pfVar3[0xe];
    local_28 = pfVar3[1] * fVar4 + fVar17 * *pfVar3 + pfVar3[2] * fVar5;
    fStack_24 = pfVar3[5] * fVar4 + fVar17 * pfVar3[4] + pfVar3[6] * fVar5;
    fStack_20 = pfVar3[9] * fVar4 + fVar17 * pfVar3[8] + pfVar3[10] * fVar5;
    fStack_1c = pfVar3[0xb] * fVar4 + fVar17 * pfVar3[9] + pfVar3[0xb] * fVar5;
    FUN_143889180(pfVar3,&local_28,&DAT_1467f06e0,param_5);
    return true;
  }
  *param_5 = 0;
  param_5[1] = 0;
  return *(char *)(param_1 + 0x60) == '\0';
}



// FUNCTION 14385dcf0 FUN_14385dcf0 body=194 status=ok
// SIG undefined FUN_14385dcf0(void)

void FUN_14385dcf0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_14387c4d0();
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  if (*(char *)(param_1 + 0x168) == '\0') {
    *(undefined1 *)(param_1 + 0x168) = 1;
    uVar1 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x210) == (*(uint *)(param_1 + 0x214) & 0x3fffffff)) {
      FUN_14370c460(uVar1,(longlong *)(param_1 + 0x208),0x90);
    }
    puVar2 = (undefined4 *)
             ((longlong)*(int *)(param_1 + 0x210) * 0x90 + *(longlong *)(param_1 + 0x208));
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
    *puVar2 = 4;
    puVar2[4] = param_2;
    FUN_14385e2d0(param_1,param_3);
  }
  return;
}



// FUNCTION 14385ddc0 FUN_14385ddc0 body=710 status=ok
// SIG undefined FUN_14385ddc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14385ddc0(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  float *pfVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  pfVar11 = (float *)hkaiEdgePath::getEdge(*(undefined8 *)(param_1 + 0x1e0));
  fVar1 = pfVar11[0x1c];
  lVar13 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x130) + 0x38) +
            (ulonglong)((uint)fVar1 >> 0x16) * 0x100);
  local_b8 = *(undefined8 *)(lVar13 + 0x40);
  uStack_b0 = *(undefined8 *)(lVar13 + 0x48);
  local_a8 = *(undefined8 *)(lVar13 + 0x50);
  uStack_a0 = *(undefined8 *)(lVar13 + 0x58);
  local_98 = *(undefined8 *)(lVar13 + 0x60);
  uStack_90 = *(undefined8 *)(lVar13 + 0x68);
  local_88 = *(undefined8 *)(lVar13 + 0x70);
  uStack_80 = *(undefined8 *)(lVar13 + 0x78);
  uVar12 = FCulture::GetName(param_1);
  FUN_143713730(&local_c8,&local_b8,uVar12);
  fVar33 = *pfVar11 - pfVar11[4];
  fVar34 = pfVar11[1] - pfVar11[5];
  fVar35 = pfVar11[2] - pfVar11[6];
  fVar36 = *pfVar11 - local_c8;
  fVar37 = pfVar11[1] - fStack_c4;
  fVar38 = pfVar11[2] - fStack_c0;
  fVar21 = fVar33 * fVar33;
  fVar24 = fVar34 * fVar34;
  fVar25 = fVar35 * fVar35;
  fVar30 = fVar24 + fVar21 + fVar25;
  fVar31 = fVar24 + fVar21 + fVar25;
  fVar32 = fVar24 + fVar21 + fVar25;
  fVar25 = fVar24 + fVar21 + fVar25;
  fVar21 = fVar36 * fVar33;
  fVar24 = fVar37 * fVar34;
  fVar26 = fVar38 * fVar35;
  auVar29._4_4_ = fVar21;
  auVar29._0_4_ = fVar21;
  auVar29._8_4_ = fVar21;
  auVar29._12_4_ = fVar21;
  auVar20._4_4_ = fVar31;
  auVar20._0_4_ = fVar30;
  auVar20._8_4_ = fVar32;
  auVar20._12_4_ = fVar25;
  auVar20 = rcpps(auVar29,auVar20);
  fVar30 = (2.0 - fVar30 * auVar20._0_4_) * auVar20._0_4_ * (fVar24 + fVar21 + fVar26);
  fVar31 = (2.0 - fVar31 * auVar20._4_4_) * auVar20._4_4_ * (fVar24 + fVar21 + fVar26);
  fVar32 = (2.0 - fVar32 * auVar20._8_4_) * auVar20._8_4_ * (fVar24 + fVar21 + fVar26);
  fVar21 = (2.0 - fVar25 * auVar20._12_4_) * auVar20._12_4_ * (fVar24 + fVar21 + fVar26);
  uVar16 = -(uint)(fVar30 < DAT_1467f06f0);
  uVar17 = -(uint)(fVar31 < fRam00000001467f06f4);
  uVar18 = -(uint)(fVar32 < fRam00000001467f06f8);
  uVar19 = -(uint)(fVar21 < fRam00000001467f06fc);
  auVar27._0_4_ = (uint)fVar30 & uVar16;
  auVar27._4_4_ = (uint)fVar31 & uVar17;
  auVar27._8_4_ = (uint)fVar32 & uVar18;
  auVar27._12_4_ = (uint)fVar21 & uVar19;
  auVar22._0_4_ = ~uVar16 & (uint)DAT_1467f06f0;
  auVar22._4_4_ = ~uVar17 & (uint)fRam00000001467f06f4;
  auVar22._8_4_ = ~uVar18 & (uint)fRam00000001467f06f8;
  auVar22._12_4_ = ~uVar19 & (uint)fRam00000001467f06fc;
  auVar29 = maxps(ZEXT816(0),auVar27 | auVar22);
  fVar36 = fVar36 - auVar29._0_4_ * fVar33;
  fVar37 = fVar37 - auVar29._4_4_ * fVar34;
  fVar38 = fVar38 - auVar29._8_4_ * fVar35;
  fVar21 = fVar36 * fVar36;
  fVar24 = fVar37 * fVar37;
  auVar23._8_4_ = fVar38 * fVar38;
  auVar23._4_4_ = auVar23._8_4_;
  auVar23._0_4_ = auVar23._8_4_;
  auVar23._12_4_ = auVar23._8_4_;
  auVar28._0_4_ = fVar24 + fVar21 + auVar23._8_4_;
  auVar28._4_4_ = fVar24 + fVar21 + auVar23._8_4_;
  auVar28._8_4_ = fVar24 + fVar21 + auVar23._8_4_;
  auVar28._12_4_ = fVar24 + fVar21 + auVar23._8_4_;
  auVar20 = rsqrtps(auVar23,auVar28);
  fVar21 = auVar20._0_4_;
  fVar24 = auVar20._4_4_;
  fVar25 = auVar20._8_4_;
  fVar21 = (float)(~-(uint)(auVar28._0_4_ <= 0.0) &
                  (uint)((3.0 - auVar28._0_4_ * fVar21 * fVar21) * fVar21 * 0.5)) *
           (local_c8 - (fVar36 + local_c8)) * _DAT_1467f06e0;
  fVar24 = (float)(~-(uint)(auVar28._4_4_ <= 0.0) &
                  (uint)((3.0 - auVar28._4_4_ * fVar24 * fVar24) * fVar24 * 0.5)) *
           (fStack_c4 - (fVar37 + fStack_c4)) * fRam00000001467f06e4;
  fVar25 = (float)(~-(uint)(auVar28._8_4_ <= 0.0) &
                  (uint)((3.0 - auVar28._8_4_ * fVar25 * fVar25) * fVar25 * 0.5)) *
           (fStack_c0 - (fVar38 + fStack_c0)) * fRam00000001467f06e8;
  iVar10 = TMeshAttributeArraySet<int>::GetNumIndices(*(undefined8 *)(param_1 + 0x1e0));
  if (param_2 + 1 < iVar10) {
    lVar13 = hkaiEdgePath::getEdge(*(undefined8 *)(param_1 + 0x1e0),param_2 + 1);
    uVar16 = *(uint *)(lVar13 + 0x70) >> 0x16;
  }
  else {
    uVar16 = 0xffffffff;
  }
  uVar12 = *(undefined8 *)(pfVar11 + 0xc);
  uVar3 = *(undefined8 *)(pfVar11 + 0xe);
  uVar4 = *(undefined8 *)(pfVar11 + 0x10);
  uVar5 = *(undefined8 *)(pfVar11 + 0x12);
  uVar6 = *(undefined8 *)(pfVar11 + 0x14);
  uVar7 = *(undefined8 *)(pfVar11 + 0x16);
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x1e0) + 0x38);
  uVar8 = *(undefined8 *)(pfVar11 + 0x18);
  uVar9 = *(undefined8 *)(pfVar11 + 0x1a);
  lVar13 = FUN_143879720(*(longlong *)(param_1 + 0x1e0),param_2);
  fVar26 = *pfVar11;
  fVar30 = pfVar11[1];
  fVar31 = pfVar11[2];
  fVar32 = pfVar11[3];
  fVar33 = pfVar11[4];
  fVar34 = pfVar11[5];
  fVar35 = pfVar11[6];
  fVar2 = pfVar11[7];
  uVar14 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x210) == (*(uint *)(param_1 + 0x214) & 0x3fffffff)) {
    FUN_14370c460(uVar14,(longlong *)(param_1 + 0x208),0x90);
  }
  puVar15 = (undefined4 *)
            ((longlong)*(int *)(param_1 + 0x210) * 0x90 + *(longlong *)(param_1 + 0x208));
  *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
  *puVar15 = 5;
  *(undefined8 *)(puVar15 + 4) = uVar12;
  *(undefined8 *)(puVar15 + 6) = uVar3;
  *(undefined8 *)(puVar15 + 8) = uVar4;
  *(undefined8 *)(puVar15 + 10) = uVar5;
  *(undefined8 *)(puVar15 + 0xc) = uVar6;
  *(undefined8 *)(puVar15 + 0xe) = uVar7;
  *(undefined8 *)(puVar15 + 0x10) = uVar8;
  *(undefined8 *)(puVar15 + 0x12) = uVar9;
  puVar15[0x14] = fVar21 + fVar36 + local_c8;
  puVar15[0x15] = fVar24 + fVar37 + fStack_c4;
  puVar15[0x16] = fVar25 + fVar38 + fStack_c0;
  puVar15[0x17] = auVar29._12_4_;
  puVar15[0x18] = fVar26 - fVar33;
  puVar15[0x19] = fVar30 - fVar34;
  puVar15[0x1a] = fVar31 - fVar35;
  puVar15[0x1b] = fVar32 - fVar2;
  puVar15[0x1c] = (uint)fVar1 >> 0x16;
  puVar15[0x1d] = uVar16;
  *(longlong *)(puVar15 + 0x1e) = lVar13;
  *(longlong *)(puVar15 + 0x20) = lVar13 + (longlong)iVar10 * 4;
  return;
}



// FUNCTION 14385e090 FUN_14385e090 body=574 status=ok
// SIG undefined FUN_14385e090(void)

void FUN_14385e090(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LPVOID pvVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  
  puVar12 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_143876e90(*(longlong *)(param_1 + 0x1d0),1);
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_14387c8a0();
  }
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar7 + 0x58),0x50);
  puVar14 = puVar12;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0x1ffff;
    *puVar8 = hkaiNavigator::PathRequestInput::vftable;
    puVar8[6] = 0;
    *(undefined4 *)(puVar8 + 7) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = 0x80000000;
    puVar8[8] = 0;
    puVar14 = puVar8;
  }
  puVar9 = (undefined4 *)FCulture::GetName(param_1);
  uVar4 = puVar9[1];
  uVar5 = puVar9[2];
  uVar6 = puVar9[3];
  *(undefined4 *)(puVar14 + 4) = *puVar9;
  *(undefined4 *)((longlong)puVar14 + 0x24) = uVar4;
  *(undefined4 *)(puVar14 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar6;
  iVar2 = *(int *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)puVar14 + 0x3c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar10,puVar14 + 6,iVar2,0x20);
  }
  FUN_14385b4e0(puVar14[6],uVar3,iVar2);
  *(int *)(puVar14 + 7) = iVar2;
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  lVar11 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar7 + 0x58),0xe0);
  puVar8 = puVar12;
  if (lVar11 != 0) {
    puVar8 = (undefined8 *)FUN_143829ca0(lVar11,param_1 + 0x70);
  }
  if (puVar14[8] != 0) {
    FUN_14370c150();
  }
  puVar14[8] = puVar8;
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  lVar11 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar7 + 0x58),0x58);
  if (lVar11 != 0) {
    puVar12 = (undefined8 *)FUN_14385b510(lVar11,param_1,puVar14,*(undefined1 *)(param_1 + 0x200),0)
    ;
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_14370c150();
  }
  *(undefined8 **)(param_1 + 0x1d0) = puVar12;
  LOCK();
  plVar1 = param_2 + 1;
  lVar11 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  lVar11 = (longlong)(int)lVar11 * 0x10;
  lVar13 = *param_2 + lVar11;
  if (lVar13 != 0) {
    *(undefined8 *)(lVar13 + 8) = 0;
  }
  puVar9 = (undefined4 *)(*param_2 + lVar11);
  *puVar9 = *(undefined4 *)(param_1 + 0x1fc);
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(puVar9 + 2) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(param_1 + 0x1d0);
  FUN_14370c150(puVar14);
  return;
}



// FUNCTION 14385e2d0 FUN_14385e2d0 body=17 status=ok
// SIG undefined FUN_14385e2d0(void)

void FUN_14385e2d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LPVOID pvVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  
  if ((*(char *)(param_1 + 0x40) != '\0') && (*(int *)(param_1 + 0x28) != 0)) {
    puVar12 = (undefined8 *)0x0;
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      FUN_143876e90(*(longlong *)(param_1 + 0x1d0),1);
      if (*(longlong *)(param_1 + 0x1d0) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(param_1 + 0x1d0) = 0;
    }
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      FUN_14387c8a0();
    }
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    puVar8 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar7 + 0x58),0x50);
    puVar14 = puVar12;
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = 0;
      *(undefined4 *)(puVar8 + 2) = 0x1ffff;
      *puVar8 = hkaiNavigator::PathRequestInput::vftable;
      puVar8[6] = 0;
      *(undefined4 *)(puVar8 + 7) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0x80000000;
      puVar8[8] = 0;
      puVar14 = puVar8;
    }
    puVar9 = (undefined4 *)FCulture::GetName(param_1);
    uVar4 = puVar9[1];
    uVar5 = puVar9[2];
    uVar6 = puVar9[3];
    *(undefined4 *)(puVar14 + 4) = *puVar9;
    *(undefined4 *)((longlong)puVar14 + 0x24) = uVar4;
    *(undefined4 *)(puVar14 + 5) = uVar5;
    *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar6;
    iVar2 = *(int *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = FUN_143703a50();
    if ((int)(*(uint *)((longlong)puVar14 + 0x3c) & 0x3fffffff) < iVar2) {
      FUN_14370c310(uVar10,puVar14 + 6,iVar2,0x20);
    }
    FUN_14385b4e0(puVar14[6],uVar3,iVar2);
    *(int *)(puVar14 + 7) = iVar2;
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    lVar11 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar7 + 0x58),0xe0);
    puVar8 = puVar12;
    if (lVar11 != 0) {
      puVar8 = (undefined8 *)FUN_143829ca0(lVar11,param_1 + 0x70);
    }
    if (puVar14[8] != 0) {
      FUN_14370c150();
    }
    puVar14[8] = puVar8;
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    lVar11 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar7 + 0x58),0x58);
    if (lVar11 != 0) {
      puVar12 = (undefined8 *)
                FUN_14385b510(lVar11,param_1,puVar14,*(undefined1 *)(param_1 + 0x200),0);
    }
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      FUN_14370c150();
    }
    *(undefined8 **)(param_1 + 0x1d0) = puVar12;
    LOCK();
    plVar1 = param_2 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
    lVar11 = (longlong)(int)lVar11 * 0x10;
    lVar13 = *param_2 + lVar11;
    if (lVar13 != 0) {
      *(undefined8 *)(lVar13 + 8) = 0;
    }
    puVar9 = (undefined4 *)(*param_2 + lVar11);
    *puVar9 = *(undefined4 *)(param_1 + 0x1fc);
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      FUN_14370c030();
    }
    if (*(longlong *)(puVar9 + 2) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(param_1 + 0x1d0);
    FUN_14370c150(puVar14);
    return;
  }
  return;
}



// FUNCTION 14385e2f0 FUN_14385e2f0 body=17 status=ok
// SIG undefined FUN_14385e2f0(void)

void FUN_14385e2f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puStack_28;
  int iStack_20;
  uint uStack_1c;
  undefined1 auStack_18 [16];
  
  if ((*(char *)(param_1 + 0x40) != '\0') && (*(int *)(param_1 + 0x28) != 0)) {
    puStack_28 = auStack_18;
    iStack_20 = 0;
    uStack_1c = 0x80000001;
    FUN_14385e090(param_1,&puStack_28);
    FUN_1438a0820(*(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x1d0));
    uVar1 = FUN_143703a50();
    lVar2 = (longlong)(iStack_20 + -1);
    if (-1 < iStack_20 + -1) {
      plVar3 = (longlong *)(puStack_28 + lVar2 * 0x10 + 8);
      do {
        if (*plVar3 != 0) {
          FUN_14370c150();
        }
        plVar3 = plVar3 + -2;
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
    }
    iStack_20 = 0;
    if (-1 < (int)uStack_1c) {
      FUN_143702e10(uVar1,puStack_28,0x10,uStack_1c & 0x3fffffff);
    }
    return;
  }
  return;
}



// FUNCTION 14385e310 FUN_14385e310 body=246 status=ok
// SIG undefined FUN_14385e310(void)

void FUN_14385e310(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_10;
  
  local_16 = 0x4a0800;
  local_18 = 0x10;
  local_10 = *(undefined4 *)(param_1 + 0x1fc);
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
  puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_18);
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_143876e90(*(longlong *)(param_1 + 0x1d0),1);
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_14387c4d0();
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x160) = 1;
  return;
}



// FUNCTION 14385e410 FUN_14385e410 body=183 status=ok
// SIG undefined FUN_14385e410(void)

void FUN_14385e410(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined2 local_28;
  undefined4 local_26;
  undefined4 local_20;
  float local_1c;
  
  fVar3 = (float)FUN_14385d670();
  if (fVar3 != param_2) {
    local_28 = 0x10;
    local_20 = *(undefined4 *)(param_1 + 0x1fc);
    local_26 = 0x2e0800;
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
    puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
    local_1c = param_2;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_28);
    }
    *(float *)(param_1 + 0xbc) = param_2 + param_2;
    *(undefined1 *)(param_1 + 0x169) = 1;
    FUN_14385da50(param_1);
  }
  return;
}



// FUNCTION 14385e4d0 FUN_14385e4d0 body=208 status=ok
// SIG undefined FUN_14385e4d0(void)

void FUN_14385e4d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_28;
  undefined4 local_26;
  undefined4 local_20;
  longlong local_18;
  
  if (*(longlong *)(param_1 + 0x128) != param_2) {
    local_28 = 0x20;
    local_20 = *(undefined4 *)(param_1 + 0x1fc);
    local_26 = 0x310800;
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
    puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
    local_18 = param_2;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_28);
    }
    if (param_2 != 0) {
      FUN_14370c030(param_2);
    }
    if (*(longlong *)(param_1 + 0x128) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(param_1 + 0x128) = param_2;
    *(longlong *)(param_1 + 0xe0) = param_2;
    FUN_14385da50(param_1);
  }
  return;
}



// FUNCTION 14385e5a0 FUN_14385e5a0 body=208 status=ok
// SIG undefined FUN_14385e5a0(void)

void FUN_14385e5a0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_28;
  undefined4 local_26;
  undefined4 local_20;
  longlong local_18;
  
  if (*(longlong *)(param_1 + 0x120) != param_2) {
    local_28 = 0x20;
    local_20 = *(undefined4 *)(param_1 + 0x1fc);
    local_26 = 0x2f0800;
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
    puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
    local_18 = param_2;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_28);
    }
    if (param_2 != 0) {
      FUN_14370c030(param_2);
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(param_1 + 0x120) = param_2;
    *(longlong *)(param_1 + 0xe8) = param_2;
    FUN_14385da50(param_1);
  }
  return;
}



// FUNCTION 14385e670 FUN_14385e670 body=598 status=ok
// SIG undefined FUN_14385e670(void)

/* WARNING: Removing unreachable block (ram,0x00014385e883) */

void FUN_14385e670(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 local_48;
  undefined4 local_46;
  undefined4 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  if (*(int *)(*(longlong *)(param_1 + 0x150) + 0x240) != 0) {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    puVar5 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar4 + 0x58),0x28);
    puVar8 = (undefined8 *)0x0;
    puVar10 = puVar8;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0x1ffff;
      *puVar5 = hkaiReferencedArray<hkVector4f>::vftable;
      puVar5[3] = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x24) = 0x80000000;
      puVar10 = puVar5;
    }
    uVar6 = FUN_143703a50();
    if (*(uint *)(puVar10 + 4) == (*(uint *)((longlong)puVar10 + 0x24) & 0x3fffffff)) {
      FUN_14370c460(uVar6,puVar10 + 3,0x10);
    }
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    puVar7 = (undefined4 *)((longlong)*(int *)(puVar10 + 4) * 0x10 + puVar10[3]);
    *puVar7 = *param_2;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    *(int *)(puVar10 + 4) = *(int *)(puVar10 + 4) + 1;
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    puVar5 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar4 + 0x58),0x28);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0x1ffff;
      *puVar5 = hkaiReferencedArray<hkaiIndex<int,hkaiRuntimeIndexDiscriminant>_>::vftable;
      puVar5[3] = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x24) = 0x80000000;
      puVar8 = puVar5;
    }
    uVar6 = FUN_143703a50();
    if (*(uint *)(puVar8 + 4) == (*(uint *)((longlong)puVar8 + 0x24) & 0x3fffffff)) {
      FUN_14370c460(uVar6,puVar8 + 3,4);
    }
    *(undefined4 *)(puVar8[3] + (longlong)*(int *)(puVar8 + 4) * 4) = *param_3;
    *(int *)(puVar8 + 4) = *(int *)(puVar8 + 4) + 1;
    local_48 = 0x20;
    local_40 = *(undefined4 *)(param_1 + 0x1fc);
    local_46 = 0x450800;
    puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
    puVar5 = puVar9 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
    local_38 = puVar10;
    local_30 = puVar8;
    for (; puVar9 != puVar5; puVar9 = puVar9 + 1) {
      (**(code **)(*(longlong *)*puVar9 + 0x18))((longlong *)*puVar9,&local_48);
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_14370c150(puVar8);
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_14370c150(puVar10);
    }
  }
  uVar6 = FUN_143703a50();
  if ((*(uint *)(param_1 + 0x2c) & 0x3fffffff) == 0) {
    FUN_14370c310(uVar6,param_1 + 0x20,1,0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  puVar7 = *(undefined4 **)(param_1 + 0x20);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *puVar7 = *param_2;
  puVar7[1] = uVar1;
  puVar7[2] = uVar2;
  puVar7[3] = uVar3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10) = *param_3;
  FUN_14385da50(param_1);
  return;
}



// FUNCTION 14385e8d0 FUN_14385e8d0 body=158 status=ok
// SIG undefined FUN_14385e8d0(void)

void FUN_14385e8d0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_28;
  undefined4 local_26;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_26 = 0x420800;
  local_28 = 0x10;
  local_20 = *(undefined4 *)(param_1 + 0x1fc);
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
  puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
  local_1c = param_2;
  if (puVar2 == puVar1) {
    *(undefined4 *)(param_1 + 0x13c) = param_2;
  }
  else {
    do {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_28);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    *(undefined4 *)(param_1 + 0x13c) = param_2;
  }
  return;
}



// FUNCTION 14385e970 FUN_14385e970 body=154 status=ok
// SIG undefined FUN_14385e970(void)

void FUN_14385e970(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0xb4) != param_2) {
    local_18 = 0x10;
    local_10 = *(undefined4 *)(param_1 + 0x1fc);
    local_16 = 0x390800;
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
    puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
    local_c = param_2;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_18);
    }
    *(int *)(param_1 + 0xb4) = param_2;
    FUN_14385da50(param_1);
  }
  return;
}



// FUNCTION 14385ea10 FUN_14385ea10 body=154 status=ok
// SIG undefined FUN_14385ea10(void)

void FUN_14385ea10(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0xa0) != param_2) {
    local_18 = 0x10;
    local_10 = *(undefined4 *)(param_1 + 0x1fc);
    local_16 = 0x340800;
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
    puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
    local_c = param_2;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_18);
    }
    *(int *)(param_1 + 0xa0) = param_2;
    FUN_14385da50(param_1);
  }
  return;
}



// FUNCTION 14385eab0 FUN_14385eab0 body=166 status=ok
// SIG undefined FUN_14385eab0(void)

void FUN_14385eab0(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined2 local_28;
  undefined4 local_26;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  local_28 = 0x20;
  local_20 = *(undefined4 *)(param_1 + 0x1fc);
  local_26 = 0x460800;
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
  puVar1 = puVar5 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(code **)(*(longlong *)*puVar5 + 0x18))((longlong *)*puVar5,&local_28);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_14385e2f0(param_1);
  }
  return;
}



// FUNCTION 14385eb60 FUN_14385eb60 body=158 status=ok
// SIG undefined FUN_14385eb60(void)

void FUN_14385eb60(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_28;
  undefined4 local_26;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_26 = 0x430800;
  local_28 = 0x10;
  local_20 = *(undefined4 *)(param_1 + 0x1fc);
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
  puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
  local_1c = param_2;
  if (puVar2 == puVar1) {
    *(undefined4 *)(param_1 + 0x140) = param_2;
  }
  else {
    do {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_28);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    *(undefined4 *)(param_1 + 0x140) = param_2;
  }
  return;
}



// FUNCTION 14385ec00 FUN_14385ec00 body=172 status=ok
// SIG undefined FUN_14385ec00(void)

void FUN_14385ec00(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_28;
  undefined4 local_26;
  undefined4 local_20;
  float local_1c;
  
  if (param_2 != *(float *)(param_1 + 0x138)) {
    local_28 = 0x10;
    local_20 = *(undefined4 *)(param_1 + 0x1fc);
    local_26 = 0x3d0800;
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 0x238);
    puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x150) + 0x240);
    local_1c = param_2;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_28);
    }
    *(float *)(param_1 + 0x138) = param_2;
    FUN_14385da50(param_1);
  }
  return;
}



// FUNCTION 14385ecb0 FUN_14385ecb0 body=34 status=ok
// SIG undefined FUN_14385ecb0(void)

void FUN_14385ecb0(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_3;
  if (0 < param_3) {
    param_2 = param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(param_2 + (longlong)param_1);
      uVar2 = puVar1[1];
      *param_1 = *puVar1;
      param_1[1] = uVar2;
      param_1 = param_1 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14385ece0 FUN_14385ece0 body=180 status=ok
// SIG undefined FUN_14385ece0(void)

void FUN_14385ece0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (*(int *)(param_2 + 0x10) != -1) {
    lVar5 = param_3[1];
    iVar4 = hkaiGatePath::getNumGatesRemaining();
    iVar4 = iVar4 + (int)lVar5;
    uVar6 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
    if ((int)uVar6 < iVar4) {
      iVar2 = uVar6 * 2;
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_3,iVar4,0x10);
    }
    lVar5 = (longlong)*(int *)(param_2 + 0x10);
    if (lVar5 < *(int *)(param_1 + 0x20)) {
      lVar8 = *(int *)(param_1 + 0x20) - lVar5;
      lVar5 = lVar5 << 6;
      do {
        puVar7 = (undefined8 *)((longlong)(int)param_3[1] * 0x10 + *param_3);
        puVar1 = (undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x18));
        uVar3 = puVar1[1];
        *puVar7 = *puVar1;
        puVar7[1] = uVar3;
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
        lVar8 = lVar8 + -1;
        lVar5 = lVar5 + 0x40;
      } while (lVar8 != 0);
    }
  }
  return;
}



// FUNCTION 14385eda0 FUN_14385eda0 body=227 status=ok
// SIG undefined FUN_14385eda0(void)

void FUN_14385eda0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  lVar8 = param_3[1];
  iVar7 = hkaiGatePath::getNumGatesRemaining();
  iVar7 = iVar7 + (int)lVar8;
  uVar9 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  if ((int)uVar9 < iVar7) {
    iVar3 = uVar9 * 2;
    if (iVar7 < iVar3) {
      iVar7 = iVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_3,iVar7,0x20);
  }
  lVar8 = (longlong)*(int *)(param_2 + 0x10);
  if (lVar8 < *(int *)(param_1 + 0x20)) {
    lVar11 = lVar8 << 6;
    lVar8 = *(int *)(param_1 + 0x20) - lVar8;
    do {
      lVar2 = *(longlong *)(param_1 + 0x18);
      iVar7 = hkaiGatePathUtil::Gate::isPoint(lVar2 + 0x10 + lVar11);
      if (iVar7 == 0) {
        puVar10 = (undefined4 *)((longlong)(int)param_3[1] * 0x20 + *param_3);
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
        puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar11);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *puVar10 = *puVar1;
        puVar10[1] = uVar4;
        puVar10[2] = uVar5;
        puVar10[3] = uVar6;
        FUN_1438aae60(lVar2 + 0x10 + lVar11,puVar10 + 4);
      }
      lVar11 = lVar11 + 0x40;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 14385ee90 FUN_14385ee90 body=108 status=ok
// SIG undefined FUN_14385ee90(void)

undefined8 *
FUN_14385ee90(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
             undefined4 param_5)

{
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined1 *)(param_1 + 3) = param_4;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = hkaiVolumeNavigator::PathRequest::vftable;
  param_1[7] = param_2;
  param_1[8] = param_3;
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  return param_1;
}



// FUNCTION 14385ef00 FUN_14385ef00 body=547 status=ok
// SIG undefined FUN_14385ef00(void)

undefined8 * FUN_14385ef00(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined2 local_28;
  undefined4 local_26;
  
  param_1[1] = 0;
  *param_1 = hkaiVolumeNavigator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x1ffff;
  param_1[0xc] = hkaiVolumeNavigator::NavigatorSettings::vftable;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  param_1[0x1b] = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  if (param_1[0x21] != 0) {
    FUN_14370c150();
  }
  param_1[0x21] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x120);
  uVar3 = *(undefined4 *)(param_2 + 0x124);
  uVar4 = *(undefined4 *)(param_2 + 0x128);
  uVar5 = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f000000;
  param_1[0x14] = 0x3f000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0xf;
  param_1[0x22] = 1;
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x278);
  local_28 = 0x10;
  local_26 = 0x4c0800;
  puVar6 = *(undefined8 **)(param_1[0x21] + 0x238);
  puVar1 = puVar6 + *(int *)(param_1[0x21] + 0x240);
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    (**(code **)(*(longlong *)*puVar6 + 0x18))((longlong *)*puVar6,&local_28);
  }
  FUN_1438a96c0(param_1[0x21],param_1);
  return param_1;
}



// FUNCTION 14385f130 FUN_14385f130 body=496 status=ok
// SIG undefined FUN_14385f130(void)

void FUN_14385f130(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_10;
  
  local_16 = 0x4d0800;
  *param_1 = hkaiVolumeNavigator::vftable;
  local_10 = *(undefined4 *)((longlong)param_1 + 0x194);
  local_18 = 0x10;
  puVar3 = *(undefined8 **)(param_1[0x21] + 0x238);
  puVar1 = puVar3 + *(int *)(param_1[0x21] + 0x240);
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(longlong *)*puVar3 + 0x18))((longlong *)*puVar3,&local_18);
  }
  if (param_1[0x2a] != 0) {
    FUN_143876e90(param_1[0x2a],1);
  }
  if (param_1[0x2d] != 0) {
    FUN_14387c4d0();
  }
  FUN_1438a9740(param_1[0x21],param_1);
  FUN_14370e7c0(param_1 + 0x3c);
  FUN_14370e7c0(param_1 + 0x3b);
  FUN_14370e7c0(param_1 + 0x3a);
  FUN_14370e7c0(param_1 + 0x39);
  FUN_14370e7c0(param_1 + 0x38);
  FUN_14370e7c0(param_1 + 0x37);
  FUN_14370e7c0(param_1 + 0x36);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1ac)) {
    FUN_143702e10(uVar2,param_1[0x34],0x50,*(uint *)((longlong)param_1 + 0x1ac) & 0x3fffffff);
  }
  param_1[0x34] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000000;
  if (param_1[0x2d] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x2c] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x2a] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x21] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x1f] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x1e] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1 + 0xc);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar2,param_1[4],0x10,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14385f320 FUN_14385f320 body=144 status=ok
// SIG undefined FUN_14385f320(void)

undefined8 * FUN_14385f320(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiSpatialQueryHitFilter::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x28;
      if (*(short *)(param_1 + 2) != -1) {
        sVar2 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14385f3b0 FUN_14385f3b0 body=861 status=ok
// SIG undefined FUN_14385f3b0(void)

void FUN_14385f3b0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_res8 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar2 = *(longlong *)(param_1 + 0x160);
  if (lVar2 == 0) {
    *(uint *)(param_1 + 0x110) = (*(longlong *)(param_1 + 0x150) != 0) + 1;
    return;
  }
  if (*(char *)((longlong)(*(int *)(lVar2 + 0x20) + -1) * 0x40 + 0x28 + *(longlong *)(lVar2 + 0x18))
      == -1) {
    puVar1 = (undefined8 *)
             ((longlong)(*(int *)(lVar2 + 0x20) + -1) * 0x40 + 0x10 + *(longlong *)(lVar2 + 0x18));
    uVar6 = puVar1[1];
    *(undefined8 *)(param_1 + 0x130) = *puVar1;
    *(undefined8 *)(param_1 + 0x138) = uVar6;
  }
  FUN_1438605f0(*(undefined8 *)(*(longlong *)(param_1 + 0x108) + 0x130),(float *)(param_1 + 0x30),
                param_1 + 0x60,&local_48,local_res8);
  if (local_res8[0] == -1) {
    FUN_14385f900(param_1,1,param_2);
  }
  else {
    *(undefined8 *)(param_1 + 0x120) = local_48;
    *(undefined8 *)(param_1 + 0x128) = uStack_40;
    *(int *)(param_1 + 0x11c) = local_res8[0];
  }
  if (*(char *)(param_1 + 0x118) == '\0') {
    iVar4 = FUN_1438ac2b0(*(undefined8 *)(param_1 + 0x160),param_1 + 0x170,local_res8[0],&local_48);
    if (iVar4 == 1) {
      FUN_14385f900(param_1,2,param_2);
    }
    else {
      local_38 = 0x2000000008;
      uStack_30 = 0x2000000008;
      local_28 = 0x3c000000;
      local_24 = 0x3dc00000;
      FUN_1438abe00(*(undefined8 *)(param_1 + 0x160),param_1 + 0x170,&local_38);
    }
    if (*(char *)(param_1 + 0x118) == '\0') {
      FUN_1438ab200(*(undefined8 *)(param_1 + 0x160),param_1 + 0x170,&local_38);
      fVar11 = (float)local_38 * (float)local_38;
      fVar14 = local_38._4_4_ * local_38._4_4_;
      auVar12._8_4_ = (float)uStack_30 * (float)uStack_30;
      auVar12._4_4_ = auVar12._8_4_;
      auVar12._0_4_ = auVar12._8_4_;
      auVar12._12_4_ = auVar12._8_4_;
      fVar16 = fVar14 + fVar11 + auVar12._8_4_;
      fVar17 = fVar14 + fVar11 + auVar12._8_4_;
      fVar18 = fVar14 + fVar11 + auVar12._8_4_;
      fVar20 = fVar14 + fVar11 + auVar12._8_4_;
      auVar13._4_4_ = fVar17;
      auVar13._0_4_ = fVar16;
      auVar13._8_4_ = fVar18;
      auVar13._12_4_ = fVar20;
      auVar13 = rsqrtps(auVar12,auVar13);
      uVar7 = -(uint)(0.0 - fVar16 < 0.0);
      uVar8 = -(uint)(0.0 - fVar17 < 0.0);
      uVar9 = -(uint)(0.0 - fVar18 < 0.0);
      uVar10 = -(uint)(0.0 - fVar20 < 0.0);
      fVar11 = auVar13._0_4_;
      fVar14 = auVar13._4_4_;
      fVar19 = auVar13._8_4_;
      fVar15 = auVar13._12_4_;
      uVar7 = (uint)((float)(~-(uint)(fVar16 <= 0.0) &
                            (uint)((3.0 - fVar16 * fVar11 * fVar11) * fVar11 * 0.5)) *
                    (float)local_38) & uVar7 | ~uVar7 & (uint)(float)local_38;
      uVar8 = (uint)((float)(~-(uint)(fVar17 <= 0.0) &
                            (uint)((3.0 - fVar17 * fVar14 * fVar14) * fVar14 * 0.5)) *
                    local_38._4_4_) & uVar8 | ~uVar8 & (uint)local_38._4_4_;
      uVar9 = (uint)((float)(~-(uint)(fVar18 <= 0.0) &
                            (uint)((3.0 - fVar18 * fVar19 * fVar19) * fVar19 * 0.5)) *
                    (float)uStack_30) & uVar9 | ~uVar9 & (uint)(float)uStack_30;
      uVar10 = (uint)((float)(~-(uint)(fVar20 <= 0.0) &
                             (uint)((3.0 - fVar20 * fVar15 * fVar15) * fVar15 * 0.5)) *
                     uStack_30._4_4_) & uVar10 | ~uVar10 & (uint)uStack_30._4_4_;
      *(uint *)(param_1 + 0x140) = uVar7;
      *(uint *)(param_1 + 0x144) = uVar8;
      *(uint *)(param_1 + 0x148) = uVar9;
      *(uint *)(param_1 + 0x14c) = uVar10;
      *(uint *)(param_1 + 0x40) = uVar7;
      *(uint *)(param_1 + 0x44) = uVar8;
      *(uint *)(param_1 + 0x48) = uVar9;
      *(uint *)(param_1 + 0x4c) = uVar10;
      *(undefined1 *)(param_1 + 0x50) = 1;
      local_38 = CONCAT44(uVar8,uVar7);
      uStack_30 = CONCAT44(uVar10,uVar9);
      iVar4 = FUN_1438abce0(*(undefined8 *)(param_1 + 0x160),param_1 + 0x170);
      if (-1 < iVar4) {
        FUN_1438609f0(param_1,iVar4);
        *(int *)(param_1 + 400) = iVar4;
      }
    }
  }
  if (*(int *)(param_1 + 0x114) == 8) {
    pfVar5 = (float *)&local_48;
    if (local_res8[0] == -1) {
      pfVar5 = (float *)(param_1 + 0x30);
    }
    fVar11 = *pfVar5 - *(float *)(param_1 + 0x130);
    fVar14 = pfVar5[1] - *(float *)(param_1 + 0x134);
    fVar19 = pfVar5[2] - *(float *)(param_1 + 0x138);
    if (fVar14 * fVar14 + fVar11 * fVar11 + fVar19 * fVar19 <
        *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0x9c)) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      if (*(char *)(param_1 + 0x158) == '\0') {
        uVar6 = FUN_143703a50();
        if (*(uint *)(param_1 + 0x1a8) == (*(uint *)(param_1 + 0x1ac) & 0x3fffffff)) {
          FUN_14370c460(uVar6,(longlong *)(param_1 + 0x1a0),0x50);
        }
        iVar4 = *(int *)(param_1 + 0x1a8);
        *(int *)(param_1 + 0x1a8) = iVar4 + 1;
        *(undefined4 *)((longlong)iVar4 * 0x50 + *(longlong *)(param_1 + 0x1a0)) = 6;
        *(undefined1 *)(param_1 + 0x158) = 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x158) != '\0') {
    *(undefined4 *)(param_1 + 0x110) = 3;
    return;
  }
  if (*(char *)(param_1 + 0x118) != '\0') {
    cVar3 = FUN_1438609d0(param_1,param_1 + 0x140);
    if (cVar3 == '\0') {
      *(uint *)(param_1 + 0x110) = (*(longlong *)(param_1 + 0x150) != 0) + 1;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 14385f710 FUN_14385f710 body=155 status=ok
// SIG undefined FUN_14385f710(void)

void FUN_14385f710(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  lVar3 = (longlong)*(int *)(param_1 + 0x1a8) * 0x50 + lVar2;
  if (lVar2 == lVar3) {
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  else {
    uVar1 = FHttpRequestWinInet::OnRequestProgress();
    do {
      FUN_1438a94d0(lVar2,param_1,param_2,uVar1);
      lVar2 = lVar2 + 0x50;
    } while (lVar2 != lVar3);
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 14385f7b0 FUN_14385f7b0 body=39 status=ok
// SIG undefined FUN_14385f7b0(void)

void FUN_14385f7b0(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(char *)(param_1 + 0x118) == '\0') {
    FUN_14385eda0(*(undefined8 *)(param_1 + 0x160),param_1 + 0x170,param_2);
    return;
  }
  return;
}



// FUNCTION 14385f7e0 FUN_14385f7e0 body=230 status=ok
// SIG undefined FUN_14385f7e0(void)

void FUN_14385f7e0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  float *pfVar15;
  undefined4 *puVar16;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(char *)(param_1 + 0x118) != '\0') {
    uVar12 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
    if (uVar12 < 2) {
      uVar12 = uVar12 * 2;
      uVar1 = 2;
      if (2 < uVar12) {
        uVar1 = uVar12;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_2,uVar1,0x10);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x128);
    puVar14 = (undefined8 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
    *puVar14 = *(undefined8 *)(param_1 + 0x120);
    puVar14[1] = uVar11;
    iVar13 = (int)param_2[1] + 1;
    *(int *)(param_2 + 1) = iVar13;
    fVar2 = *(float *)(param_1 + 0x144);
    fVar3 = *(float *)(param_1 + 0x148);
    fVar4 = *(float *)(param_1 + 0x14c);
    fVar5 = *(float *)(param_1 + 0x124);
    fVar6 = *(float *)(param_1 + 0x128);
    fVar7 = *(float *)(param_1 + 300);
    pfVar15 = (float *)((longlong)iVar13 * 0x10 + *param_2);
    *pfVar15 = *(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x120);
    pfVar15[1] = fVar2 + fVar5;
    pfVar15[2] = fVar3 + fVar6;
    pfVar15[3] = fVar4 + fVar7;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    return;
  }
  if ((*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff) == 0) {
    FUN_14370c460(&PTR_vftable_1467f0638,param_2,0x10);
  }
  uVar8 = *(undefined4 *)(param_1 + 0x124);
  uVar9 = *(undefined4 *)(param_1 + 0x128);
  uVar10 = *(undefined4 *)(param_1 + 300);
  puVar16 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
  *puVar16 = *(undefined4 *)(param_1 + 0x120);
  puVar16[1] = uVar8;
  puVar16[2] = uVar9;
  puVar16[3] = uVar10;
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  FUN_14385ece0(*(undefined8 *)(param_1 + 0x160),param_1 + 0x170,param_2);
  return;
}



// FUNCTION 14385f8d0 FUN_14385f8d0 body=44 status=ok
// SIG undefined FUN_14385f8d0(void)

undefined8 FUN_14385f8d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x168) + 0x58) = *(undefined4 *)(param_1 + 0x180);
    uVar2 = *(undefined8 *)(param_1 + 0x168);
  }
  return uVar2;
}



// FUNCTION 14385f900 FUN_14385f900 body=194 status=ok
// SIG undefined FUN_14385f900(void)

void FUN_14385f900(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_14387c4d0();
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (*(char *)(param_1 + 0x118) == '\0') {
    *(undefined1 *)(param_1 + 0x118) = 1;
    uVar1 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x1a8) == (*(uint *)(param_1 + 0x1ac) & 0x3fffffff)) {
      FUN_14370c460(uVar1,(longlong *)(param_1 + 0x1a0),0x50);
    }
    puVar2 = (undefined4 *)
             ((longlong)*(int *)(param_1 + 0x1a8) * 0x50 + *(longlong *)(param_1 + 0x1a0));
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
    *puVar2 = 4;
    puVar2[4] = param_2;
    FUN_143860d10(param_1,param_3);
  }
  return;
}



// FUNCTION 14385f9d0 FUN_14385f9d0 body=195 status=ok
// SIG undefined FUN_14385f9d0(void)

void FUN_14385f9d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x150) == 0) {
    if (param_2 != 0) {
      FUN_14370c030(param_2);
    }
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(param_1 + 0x150) = param_2;
  }
  if (*(char *)(param_1 + 0x118) == '\0') {
    *(undefined1 *)(param_1 + 0x118) = 1;
    uVar1 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x1a8) == (*(uint *)(param_1 + 0x1ac) & 0x3fffffff)) {
      FUN_14370c460(uVar1,(longlong *)(param_1 + 0x1a0),0x50);
    }
    puVar2 = (undefined4 *)
             ((longlong)*(int *)(param_1 + 0x1a8) * 0x50 + *(longlong *)(param_1 + 0x1a0));
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
    *puVar2 = 4;
    puVar2[4] = 0;
  }
  return;
}



// FUNCTION 14385faa0 FUN_14385faa0 body=502 status=ok
// SIG undefined FUN_14385faa0(void)

void FUN_14385faa0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar10 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_143876e90(*(longlong *)(param_1 + 0x150),0);
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_14387c8a0();
  }
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  puVar7 = (undefined8 *)(**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))();
  puVar11 = puVar10;
  if (puVar7 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar7,0,0x50);
    puVar7[1] = 0;
    *puVar7 = hkaiVolumeNavigator::PathRequestInput::vftable;
    *(undefined4 *)(puVar7 + 2) = 0x1ffff;
    puVar7[6] = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x80000000;
    puVar7[8] = 0;
    puVar11 = puVar7;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)puVar11 + 0x24) = uVar3;
  *(undefined4 *)(puVar11 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar5;
  iVar1 = *(int *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)puVar11 + 0x3c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar8,puVar11 + 6,iVar1,0x10);
  }
  FUN_14385ecb0(puVar11[6],uVar2,iVar1);
  *(int *)(puVar11 + 7) = iVar1;
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  lVar9 = (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar6 + 0x58),0xa0);
  puVar7 = puVar10;
  if (lVar9 != 0) {
    puVar7 = (undefined8 *)FUN_143829df0(lVar9,param_1 + 0x60);
  }
  if (puVar11[8] != 0) {
    FUN_14370c150();
  }
  puVar11[8] = puVar7;
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  lVar9 = (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar6 + 0x58),0x58);
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)FUN_14385ee90(lVar9,param_1,puVar11,*(undefined1 *)(param_1 + 0x198),0);
  }
  if (puVar10 != *(undefined8 **)(param_1 + 0x150)) {
    if (*(undefined8 **)(param_1 + 0x150) != (undefined8 *)0x0) {
      FUN_14370c150();
    }
    *(undefined8 **)(param_1 + 0x150) = puVar10;
  }
  FUN_1438a0830(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x150));
  FUN_14370c150(puVar11);
  return;
}



// FUNCTION 14385fca0 FUN_14385fca0 body=1334 status=ok
// SIG undefined FUN_14385fca0(void)

void FUN_14385fca0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  LPVOID pvVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  undefined4 local_298;
  undefined8 local_288;
  longlong lStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined1 local_258 [560];
  
  bVar9 = false;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_4 + 0x5c)) {
  case 0:
    FUN_1437134a0(&local_278,local_258,0x200);
    Electra::FHTTPResourceRequest::URL
              (&local_278,
               "Output status shouldn\'t be SEARCH_IN_PROGRESS if path request is marked as processed."
              );
    iVar11 = FUN_143732300(0x45c0fd69,local_258,"Navigator\\hkaiVolumeNavigator.cpp",0x2fe);
    if (iVar11 != 0) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FUN_143713520(&local_278);
    break;
  case 1:
    uVar3 = *(undefined4 *)(param_3 + 0x40);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    uVar2 = *(undefined4 *)(param_4 + 0x50);
    uVar20 = *(undefined4 *)(*(longlong *)(param_3 + 0x48) + (longlong)*(int *)(param_4 + 0x54) * 4)
    ;
    uVar1 = *(undefined4 *)(param_4 + 0x58);
    puVar19 = (undefined8 *)
              (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(param_4 + 0x54) * 0x10);
    uVar13 = *puVar19;
    uVar8 = puVar19[1];
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x1a8) == (*(uint *)(param_1 + 0x1ac) & 0x3fffffff)) {
      FUN_14370c460(uVar12,(longlong *)(param_1 + 0x1a0),0x50);
    }
    puVar18 = (undefined4 *)
              ((longlong)*(int *)(param_1 + 0x1a8) * 0x50 + *(longlong *)(param_1 + 0x1a0));
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
    *puVar18 = 0;
    puVar18[0xd] = uVar20;
    uVar20 = 8;
    puVar18[0xe] = uVar1;
    *(undefined8 *)(puVar18 + 4) = uVar4;
    *(undefined8 *)(puVar18 + 6) = uVar7;
    *(undefined8 *)(puVar18 + 8) = uVar13;
    *(undefined8 *)(puVar18 + 10) = uVar8;
    puVar18[0xc] = uVar3;
    puVar18[0xf] = uVar2;
LAB_14385ffb6:
    puVar19 = (undefined8 *)0x0;
    pvVar14 = TlsGetValue(DAT_146b7bf70);
    if (pvVar14 == (LPVOID)0x0) {
      pvVar14 = DAT_146b7bf68;
    }
    puVar15 = (undefined8 *)
              (**(code **)(**(longlong **)((longlong)pvVar14 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar14 + 0x58),0x50);
    puVar17 = puVar19;
    if (puVar15 != (undefined8 *)0x0) {
      puVar15[1] = 0;
      *(undefined4 *)(puVar15 + 2) = 0x1ffff;
      *puVar15 = hkaiGatePath::vftable;
      puVar15[3] = 0;
      *(undefined4 *)(puVar15 + 4) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x24) = 0x80000000;
      *(undefined4 *)(puVar15 + 8) = 0;
      puVar17 = puVar15;
    }
    if (puVar17 != *(undefined8 **)(param_1 + 0x160)) {
      if (*(undefined8 **)(param_1 + 0x160) != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      *(undefined8 **)(param_1 + 0x160) = puVar17;
    }
    FUN_1438ab2b0(*(undefined8 *)(param_1 + 0x160),param_3,param_4,
                  *(undefined8 *)(*(longlong *)(param_1 + 0x108) + 0x130));
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 400) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x114) = uVar20;
    *(undefined2 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x158) = 0;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_14387c4d0();
      if (*(longlong *)(param_1 + 0x168) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(param_1 + 0x168) = 0;
    }
    pvVar14 = TlsGetValue(DAT_146b7bf70);
    if (pvVar14 == (LPVOID)0x0) {
      pvVar14 = DAT_146b7bf68;
    }
    lVar16 = (**(code **)(**(longlong **)((longlong)pvVar14 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar14 + 0x58),0xa0);
    puVar17 = puVar19;
    if (lVar16 != 0) {
      puVar17 = (undefined8 *)FUN_143829df0(lVar16,param_1 + 0x60);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x160);
    pvVar14 = TlsGetValue(DAT_146b7bf70);
    if (pvVar14 == (LPVOID)0x0) {
      pvVar14 = DAT_146b7bf68;
    }
    lVar16 = (**(code **)(**(longlong **)((longlong)pvVar14 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar14 + 0x58),0x70);
    puVar15 = puVar19;
    if (lVar16 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      lStack_280 = (longlong)*(int *)(param_1 + 0x28) * 0x10 + lVar5;
      local_288._0_4_ = (undefined4)lVar5;
      local_288._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
      local_278 = (undefined4)local_288;
      uStack_274 = local_288._4_4_;
      local_288 = puVar17;
      uStack_270 = lStack_280;
      puVar15 = (undefined8 *)
                FUN_143887a20(lVar16,uVar4,param_1,param_1 + 0x30,&local_278,&local_288);
      puVar17 = puVar19;
    }
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_14370c150();
    }
    *(undefined8 **)(param_1 + 0x168) = puVar15;
    if (puVar17 != (undefined8 *)0x0) {
      FUN_14370c150(puVar17);
    }
    goto LAB_143860194;
  case 2:
    uVar1 = *(undefined4 *)(param_3 + 0x40);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_4 + 0x50);
    uVar20 = *(undefined4 *)(param_4 + 0x58);
    uVar13 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x1a8) == (*(uint *)(param_1 + 0x1ac) & 0x3fffffff)) {
      FUN_14370c460(uVar13,(longlong *)(param_1 + 0x1a0),0x50);
    }
    puVar18 = (undefined4 *)
              ((longlong)*(int *)(param_1 + 0x1a8) * 0x50 + *(longlong *)(param_1 + 0x1a0));
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
    *puVar18 = 1;
    puVar18[0xf] = uVar3;
    puVar18[0x10] = 2;
    puVar18[0xe] = uVar20;
    *(undefined8 *)(puVar18 + 4) = uVar4;
    *(undefined8 *)(puVar18 + 6) = uVar7;
    *(undefined8 *)(puVar18 + 8) = 0;
    *(undefined8 *)(puVar18 + 10) = 0;
    puVar18[0xc] = uVar1;
    puVar18[0xd] = 0xffffffff;
    break;
  case 3:
    cVar10 = FUN_1438607b0(param_1);
    uVar20 = 1;
    if (((cVar10 == '\0') || (*(char *)(param_4 + 0x5d) != '\x01')) ||
       (iVar11 = FUN_140844ea0(param_1), iVar11 <= *(int *)(param_4 + 0x50))) {
      uVar20 = 2;
      uVar3 = *(undefined4 *)(param_3 + 0x40);
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      uVar1 = *(undefined4 *)(param_4 + 0x58);
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,*(undefined4 *)(param_4 + 0x50));
      if (*(char *)(param_4 + 0x5d) == '\x01') {
        local_298 = 0;
      }
      else if (*(char *)(param_4 + 0x5d) == '\x02') {
        local_298 = 1;
      }
      else {
        local_298 = 2;
      }
      uVar13 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x1a8) == (*(uint *)(param_1 + 0x1ac) & 0x3fffffff)) {
        FUN_14370c460(uVar13,(longlong *)(param_1 + 0x1a0),0x50);
      }
      iVar11 = *(int *)(param_1 + 0x1a8);
      *(int *)(param_1 + 0x1a8) = iVar11 + 1;
      puVar18 = (undefined4 *)((longlong)iVar11 * 0x50 + *(longlong *)(param_1 + 0x1a0));
      *puVar18 = 2;
      puVar18[0xf] = (undefined4)local_288;
      puVar18[0x10] = local_298;
      puVar18[0xe] = uVar1;
      *(undefined8 *)(puVar18 + 4) = uVar4;
      *(undefined8 *)(puVar18 + 6) = uVar7;
      *(undefined8 *)(puVar18 + 8) = 0;
      *(undefined8 *)(puVar18 + 10) = 0;
      puVar18[0xc] = uVar3;
      puVar18[0xd] = 0xffffffff;
    }
    else {
      bVar9 = true;
    }
    if ((*(byte *)(param_1 + 0x1e8) >> 1 & 1) != 0) goto LAB_14385ffb6;
LAB_143860194:
    if (bVar9) {
      FUN_143860d30(param_1);
    }
    break;
  case 4:
    FUN_1437134a0(&local_278,local_258,0x200);
    Electra::FHTTPResourceRequest::URL
              (&local_278,"We don\'t expect result truncation in hkaiVolumeNavigator.");
    iVar11 = FUN_143732300(0x16844053,local_258,"Navigator\\hkaiVolumeNavigator.cpp",0x302);
    if (iVar11 != 0) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FUN_143713520(&local_278);
  }
  return;
}



// FUNCTION 1438601f0 FUN_1438601f0 body=784 status=ok
// SIG undefined FUN_1438601f0(void)

longlong FUN_1438601f0(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res8 [2];
  undefined8 local_res10;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_70;
  
  local_res10 = param_2;
  FUN_1438605f0(param_2,param_1 + 0x20,*(undefined8 *)(param_1 + 0x40),&local_b8,local_res8);
  iVar1 = local_res8[0];
  if (local_res8[0] == -1) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_4 + 1) == (*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar4,param_4,0x50);
    }
    lVar7 = param_4[1];
    *(int *)(param_4 + 1) = (int)lVar7 + 1;
    puVar6 = (undefined4 *)((longlong)(int)lVar7 * 0x50 + *param_4);
    lVar8 = 0;
    *puVar6 = 1;
    *(undefined8 *)(puVar6 + 8) = 0;
    *(undefined8 *)(puVar6 + 10) = 0;
    puVar6[0xe] = local_70;
    *(undefined8 *)(puVar6 + 4) = uVar5;
    *(undefined8 *)(puVar6 + 6) = uVar2;
    *(undefined8 *)(puVar6 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(param_3 + 0x20) = local_b8;
    *(undefined4 *)(param_3 + 0x24) = uStack_b4;
    *(undefined4 *)(param_3 + 0x28) = uStack_b0;
    *(undefined4 *)(param_3 + 0x2c) = uStack_ac;
    *(undefined4 *)(param_3 + 0x50) = 0;
    *(undefined4 *)(param_3 + 0x38) = 0;
    *(int *)(param_3 + 0x40) = local_res8[0];
    lVar7 = *(longlong *)(param_1 + 0x30);
    lVar8 = (longlong)*(int *)(param_1 + 0x38) * 0x10 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x10) {
      FUN_1438605f0(param_2,lVar7,*(undefined8 *)(param_1 + 0x40),&local_a8,local_res8);
      iVar3 = local_res8[0];
      if (local_res8[0] != -1) {
        uVar5 = FUN_143703a50();
        if (*(uint *)(param_3 + 0x50) == (*(uint *)(param_3 + 0x54) & 0x3fffffff)) {
          FUN_14370c460(uVar5,param_3 + 0x48,4);
        }
        *(int *)(*(longlong *)(param_3 + 0x48) + (longlong)*(int *)(param_3 + 0x50) * 4) = iVar3;
        *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
        uVar5 = FUN_143703a50();
        if (*(uint *)(param_3 + 0x38) == (*(uint *)(param_3 + 0x3c) & 0x3fffffff)) {
          FUN_14370c460(uVar5,param_3 + 0x30,0x10);
        }
        puVar6 = (undefined4 *)
                 ((longlong)*(int *)(param_3 + 0x38) * 0x10 + *(longlong *)(param_3 + 0x30));
        *puVar6 = local_a8;
        puVar6[1] = uStack_a4;
        puVar6[2] = uStack_a0;
        puVar6[3] = uStack_9c;
        *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
        param_2 = local_res10;
      }
    }
    if (*(int *)(param_3 + 0x50) == 0) {
      local_98 = local_b8;
      uStack_94 = uStack_b4;
      uStack_90 = uStack_b0;
      uStack_8c = uStack_ac;
      uVar5 = FUN_143703a50();
      if (*(uint *)(param_4 + 1) == (*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar5,param_4,0x50);
      }
      lVar7 = param_4[1];
      iVar3 = (int)lVar7 + 1;
      *(int *)(param_4 + 1) = iVar3;
      puVar6 = (undefined4 *)((longlong)(int)lVar7 * 0x50 + *param_4);
      lVar8 = (ulonglong)(uint3)((uint)iVar3 >> 8) << 8;
      *puVar6 = 1;
      *(ulonglong *)(puVar6 + 4) = CONCAT44(uStack_94,local_98);
      *(ulonglong *)(puVar6 + 6) = CONCAT44(uStack_8c,uStack_90);
      puVar6[0xe] = local_70;
      *(undefined8 *)(puVar6 + 8) = 0;
      *(undefined8 *)(puVar6 + 10) = 0;
      puVar6[0xc] = iVar1;
      puVar6[0xd] = 0xffffffff;
      puVar6[0xf] = 0;
      puVar6[0x10] = 1;
    }
    else {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x30);
      iVar3 = 10000;
      if (0 < iVar1) {
        iVar3 = iVar1;
      }
      *(int *)(param_3 + 0x58) = iVar3;
      *(undefined8 *)(param_3 + 0x5c) = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x44);
      lVar7 = *(longlong *)(param_1 + 0x40);
      uVar5 = *(undefined8 *)(lVar7 + 0x58);
      *(undefined8 *)(param_3 + 0x70) = *(undefined8 *)(lVar7 + 0x50);
      *(undefined8 *)(param_3 + 0x78) = uVar5;
      *(undefined8 *)(param_3 + 0x80) = *(undefined8 *)(lVar7 + 0x60);
      *(undefined8 *)(param_3 + 0x88) = *(undefined8 *)(lVar7 + 0x68);
      *(undefined1 *)(param_3 + 0x90) = *(undefined1 *)(lVar7 + 0x70);
      *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(lVar7 + 0x74);
      *(undefined4 *)(param_3 + 0x98) = *(undefined4 *)(lVar7 + 0x78);
      *(undefined8 *)(param_3 + 0x9c) = *(undefined8 *)(lVar7 + 0x7c);
      lVar7 = *(longlong *)(param_1 + 0x40);
      uVar5 = *(undefined8 *)(lVar7 + 0x28);
      lVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
      *(undefined8 *)(param_3 + 0x70) = *(undefined8 *)(lVar7 + 0x20);
      *(undefined8 *)(param_3 + 0x78) = uVar5;
    }
  }
  return lVar8;
}



// FUNCTION 143860500 FUN_143860500 body=204 status=ok
// SIG undefined FUN_143860500(void)

void FUN_143860500(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FUN_14370c030(lVar1);
  }
  FUN_14385fca0(lVar1,*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  lVar2 = *(longlong *)(lVar1 + 0x108);
  uVar3 = FHttpRequestWinInet::OnRequestProgress(lVar1);
  lVar5 = *(longlong *)(param_1 + 0x48);
  lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x50 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x50) {
    FUN_1438a94d0(lVar5,lVar1,lVar2 + 0x480,uVar3);
  }
  if (*(longlong *)(lVar1 + 0x150) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar1 + 0x150) = 0;
  FUN_14370c150(lVar1);
  return;
}



// FUNCTION 1438605d0 getGoalPositionWorld body=20 status=ok
// SIG undefined getGoalPositionWorld(void)

void hkaiVolumeNavigator::getGoalPositionWorld(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x10);
  uVar2 = puVar1[1];
  *param_3 = *puVar1;
  param_3[1] = uVar2;
  return;
}



// FUNCTION 1438605f0 FUN_1438605f0 body=270 status=ok
// SIG undefined FUN_1438605f0(void)

bool FUN_1438605f0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  int *param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  undefined4 local_78;
  int local_74;
  undefined8 local_70;
  undefined ***local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  longlong local_18;
  
  local_28 = 0x1ffff;
  local_70 = 0;
  local_30 = 0;
  local_78 = *(undefined4 *)(param_3 + 0x48);
  local_74 = 1 << ((byte)*(undefined4 *)(param_3 + 0x34) & 0x1f);
  local_18 = *(longlong *)(param_3 + 0x68);
  local_38 = _anon_86E96536::HitFilter::vftable;
  local_68 = &local_38;
  if (local_18 == 0) {
    local_68 = (undefined ***)0x0;
  }
  uStack_60 = 0;
  local_20 = param_1;
  FUN_1438a2d70(&local_58);
  local_58 = *(undefined4 *)(param_3 + 0x38);
  uStack_54 = local_58;
  uStack_50 = local_58;
  uStack_4c = local_58;
  thunk_FUN_143719c70(0x6971e8f4);
  piVar2 = (int *)FUN_1438a3140(local_res8,param_1,param_2,&local_78,&local_58,param_4);
  iVar1 = *piVar2;
  *param_5 = iVar1;
  local_38 = hkaiSpatialQueryHitFilter::vftable;
  FUN_14370c000(&local_38);
  return iVar1 != -1;
}



// FUNCTION 143860700 FUN_143860700 body=161 status=ok
// SIG undefined FUN_143860700(void)

longlong * FUN_143860700(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  LPVOID pvVar2;
  longlong lVar3;
  
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar2 + 0x58),0xc0);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_143875090(lVar3,0);
  }
  cVar1 = FUN_1438601f0(*(undefined8 *)(param_1 + 0x40),param_3,lVar3,param_1 + 0x48);
  if (cVar1 == '\0') {
    *param_2 = 0;
    if (lVar3 != 0) {
      FUN_14370c150(lVar3);
    }
  }
  else {
    *param_2 = lVar3;
  }
  return param_2;
}



// FUNCTION 1438607b0 FUN_1438607b0 body=11 status=ok
// SIG undefined FUN_1438607b0(void)

bool FUN_1438607b0(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x90);
}



// FUNCTION 1438607c0 FUN_1438607c0 body=11 status=ok
// SIG undefined FUN_1438607c0(void)

bool FUN_1438607c0(longlong param_1)

{
  return *(char *)(param_1 + 0x100) != '\0';
}



// FUNCTION 1438607d0 FUN_1438607d0 body=12 status=ok
// SIG undefined FUN_1438607d0(void)

void FUN_1438607d0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x119) = 1;
  FUN_143860d30();
  return;
}



// FUNCTION 1438607e0 FUN_1438607e0 body=267 status=ok
// SIG undefined FUN_1438607e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1438607e0(longlong param_1,longlong param_2,uint *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined1 local_f0;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  uint local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  local_58 = 0;
  uStack_50 = 0;
  local_a8 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x94) << 0x16 | *param_3;
  local_e0 = 0;
  local_60 = 0;
  local_28 = DAT_1467f08d0;
  uStack_24 = uRam00000001467f08d4;
  uStack_20 = uRam00000001467f08d8;
  uStack_1c = uRam00000001467f08dc;
  local_e8[0] = 0xffffffff;
  uStack_10 = uRam00000001467f08d8 ^ 0x80000000;
  uStack_c = uRam00000001467f08dc ^ 0x80000000;
  local_68 = 0xffffffff;
  local_18 = DAT_1467f08d0 ^ 0x80000000;
  uStack_14 = uRam00000001467f08d4 ^ 0x80000000;
  local_108 = *(undefined8 *)(param_1 + 0x18);
  local_100 = &local_res8;
  local_a0 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x18) + (longlong)(int)*param_3 * 0x18;
  local_f8 = local_e8;
  local_res8 = 0;
  local_98 = _DAT_1467f06e0;
  uStack_94 = uRam00000001467f06e4;
  uStack_90 = uRam00000001467f06e8;
  uStack_8c = DAT_1467f06ec;
  local_f0 = 0;
  local_resc = param_4;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                    (*(longlong **)(param_1 + 0x20),&local_108);
  return uVar1;
}



// FUNCTION 1438608f0 FUN_1438608f0 body=98 status=ok
// SIG undefined FUN_1438608f0(void)

undefined8 FUN_1438608f0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_228 [32];
  undefined1 local_208 [520];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL(local_228,"Not implemented");
  iVar2 = FUN_143732300(0x362e4038,local_208,"Navigator\\hkaiVolumeNavigator.cpp",0x392);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_143713520(local_228);
  return 0;
}



// FUNCTION 143860960 FUN_143860960 body=98 status=ok
// SIG undefined FUN_143860960(void)

undefined8 FUN_143860960(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_228 [32];
  undefined1 local_208 [520];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL(local_228,"Not implemented");
  iVar2 = FUN_143732300(0x6370a13c,local_208,"Navigator\\hkaiVolumeNavigator.cpp",0x38c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_143713520(local_228);
  return 0;
}



// FUNCTION 1438609d0 FUN_1438609d0 body=19 status=ok
// SIG undefined FUN_1438609d0(void)

undefined1 FUN_1438609d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *param_2 = *(undefined8 *)(param_1 + 0x40);
    param_2[1] = uVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1438609f0 FUN_1438609f0 body=220 status=ok
// SIG undefined FUN_1438609f0(void)

void FUN_1438609f0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [64];
  
  FUN_1438abdd0(*(undefined8 *)(param_1 + 0x160),param_2,&local_68,&local_58);
  puVar3 = (undefined8 *)
           FUN_1438abd80(*(undefined8 *)(param_1 + 0x160),local_48,param_2 & 0xffffffff,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x108) + 0x130));
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x1a8) == (*(uint *)(param_1 + 0x1ac) & 0x3fffffff)) {
    FUN_14370c460(uVar4,(longlong *)(param_1 + 0x1a0),0x50);
  }
  puVar5 = (undefined4 *)
           ((longlong)*(int *)(param_1 + 0x1a8) * 0x50 + *(longlong *)(param_1 + 0x1a0));
  *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
  *puVar5 = 5;
  *(undefined8 *)(puVar5 + 4) = local_68;
  *(undefined8 *)(puVar5 + 6) = uStack_60;
  *(undefined8 *)(puVar5 + 8) = local_58;
  *(undefined8 *)(puVar5 + 10) = uStack_50;
  *(undefined8 *)(puVar5 + 0xc) = uVar1;
  *(undefined8 *)(puVar5 + 0xe) = uVar2;
  return;
}



// FUNCTION 143860ad0 FUN_143860ad0 body=566 status=ok
// SIG undefined FUN_143860ad0(void)

void FUN_143860ad0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LPVOID pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  
  puVar11 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_143876e90(*(longlong *)(param_1 + 0x150),0);
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_14387c8a0();
  }
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar7 + 0x58),0x50);
  puVar14 = puVar11;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0x1ffff;
    *puVar8 = hkaiVolumeNavigator::PathRequestInput::vftable;
    puVar8[6] = 0;
    *(undefined4 *)(puVar8 + 7) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = 0x80000000;
    puVar8[8] = 0;
    puVar14 = puVar8;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)puVar14 + 0x24) = uVar4;
  *(undefined4 *)(puVar14 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar6;
  iVar2 = *(int *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)puVar14 + 0x3c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar9,puVar14 + 6,iVar2,0x10);
  }
  FUN_14385ecb0(puVar14[6],uVar3,iVar2);
  *(int *)(puVar14 + 7) = iVar2;
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar7 + 0x58),0xa0);
  puVar8 = puVar11;
  if (lVar10 != 0) {
    puVar8 = (undefined8 *)FUN_143829df0(lVar10,param_1 + 0x60);
  }
  if (puVar14[8] != 0) {
    FUN_14370c150();
  }
  puVar14[8] = puVar8;
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar7 + 0x58),0x58);
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)FUN_14385ee90(lVar10,param_1,puVar14,*(undefined1 *)(param_1 + 0x198),0)
    ;
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_14370c150();
  }
  *(undefined8 **)(param_1 + 0x150) = puVar11;
  LOCK();
  plVar1 = param_2 + 1;
  lVar10 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  lVar10 = (longlong)(int)lVar10 * 0x10;
  lVar12 = *param_2 + lVar10;
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 8) = 0;
  }
  puVar13 = (undefined4 *)(*param_2 + lVar10);
  *puVar13 = *(undefined4 *)(param_1 + 0x194);
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(puVar13 + 2) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(param_1 + 0x150);
  FUN_14370c150(puVar14);
  return;
}



// FUNCTION 143860d10 FUN_143860d10 body=20 status=ok
// SIG undefined FUN_143860d10(void)

void FUN_143860d10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LPVOID pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  
  if ((*(char *)(param_1 + 0x100) != '\0') && (*(int *)(param_1 + 0x28) != 0)) {
    puVar11 = (undefined8 *)0x0;
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_143876e90(*(longlong *)(param_1 + 0x150),0);
      if (*(longlong *)(param_1 + 0x150) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_14387c8a0();
    }
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    puVar8 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar7 + 0x58),0x50);
    puVar14 = puVar11;
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = 0;
      *(undefined4 *)(puVar8 + 2) = 0x1ffff;
      *puVar8 = hkaiVolumeNavigator::PathRequestInput::vftable;
      puVar8[6] = 0;
      *(undefined4 *)(puVar8 + 7) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0x80000000;
      puVar8[8] = 0;
      puVar14 = puVar8;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    uVar6 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar14 + 0x24) = uVar4;
    *(undefined4 *)(puVar14 + 5) = uVar5;
    *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar6;
    iVar2 = *(int *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = FUN_143703a50();
    if ((int)(*(uint *)((longlong)puVar14 + 0x3c) & 0x3fffffff) < iVar2) {
      FUN_14370c310(uVar9,puVar14 + 6,iVar2,0x10);
    }
    FUN_14385ecb0(puVar14[6],uVar3,iVar2);
    *(int *)(puVar14 + 7) = iVar2;
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    lVar10 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar7 + 0x58),0xa0);
    puVar8 = puVar11;
    if (lVar10 != 0) {
      puVar8 = (undefined8 *)FUN_143829df0(lVar10,param_1 + 0x60);
    }
    if (puVar14[8] != 0) {
      FUN_14370c150();
    }
    puVar14[8] = puVar8;
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    lVar10 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar7 + 0x58),0x58);
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)
                FUN_14385ee90(lVar10,param_1,puVar14,*(undefined1 *)(param_1 + 0x198),0);
    }
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_14370c150();
    }
    *(undefined8 **)(param_1 + 0x150) = puVar11;
    LOCK();
    plVar1 = param_2 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
    lVar10 = (longlong)(int)lVar10 * 0x10;
    lVar12 = *param_2 + lVar10;
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 8) = 0;
    }
    puVar13 = (undefined4 *)(*param_2 + lVar10);
    *puVar13 = *(undefined4 *)(param_1 + 0x194);
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_14370c030();
    }
    if (*(longlong *)(puVar13 + 2) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(param_1 + 0x150);
    FUN_14370c150(puVar14);
    return;
  }
  return;
}



// FUNCTION 143860d30 FUN_143860d30 body=20 status=ok
// SIG undefined FUN_143860d30(void)

void FUN_143860d30(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if ((*(char *)(param_1 + 0x100) != '\0') && (*(int *)(param_1 + 0x28) != 0)) {
    puVar10 = (undefined8 *)0x0;
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_143876e90(*(longlong *)(param_1 + 0x150),0);
      if (*(longlong *)(param_1 + 0x150) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_14387c8a0();
    }
    pvVar6 = TlsGetValue(DAT_146b7bf70);
    if (pvVar6 == (LPVOID)0x0) {
      pvVar6 = DAT_146b7bf68;
    }
    puVar7 = (undefined8 *)(**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))();
    puVar11 = puVar10;
    if (puVar7 != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(puVar7,0,0x50);
      puVar7[1] = 0;
      *puVar7 = hkaiVolumeNavigator::PathRequestInput::vftable;
      *(undefined4 *)(puVar7 + 2) = 0x1ffff;
      puVar7[6] = 0;
      *(undefined4 *)(puVar7 + 7) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x80000000;
      puVar7[8] = 0;
      puVar11 = puVar7;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar11 + 0x24) = uVar3;
    *(undefined4 *)(puVar11 + 5) = uVar4;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar5;
    iVar1 = *(int *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = FUN_143703a50();
    if ((int)(*(uint *)((longlong)puVar11 + 0x3c) & 0x3fffffff) < iVar1) {
      FUN_14370c310(uVar8,puVar11 + 6,iVar1,0x10);
    }
    FUN_14385ecb0(puVar11[6],uVar2,iVar1);
    *(int *)(puVar11 + 7) = iVar1;
    pvVar6 = TlsGetValue(DAT_146b7bf70);
    if (pvVar6 == (LPVOID)0x0) {
      pvVar6 = DAT_146b7bf68;
    }
    lVar9 = (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar6 + 0x58),0xa0);
    puVar7 = puVar10;
    if (lVar9 != 0) {
      puVar7 = (undefined8 *)FUN_143829df0(lVar9,param_1 + 0x60);
    }
    if (puVar11[8] != 0) {
      FUN_14370c150();
    }
    puVar11[8] = puVar7;
    pvVar6 = TlsGetValue(DAT_146b7bf70);
    if (pvVar6 == (LPVOID)0x0) {
      pvVar6 = DAT_146b7bf68;
    }
    lVar9 = (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar6 + 0x58),0x58);
    if (lVar9 != 0) {
      puVar10 = (undefined8 *)
                FUN_14385ee90(lVar9,param_1,puVar11,*(undefined1 *)(param_1 + 0x198),0);
    }
    if (puVar10 != *(undefined8 **)(param_1 + 0x150)) {
      if (*(undefined8 **)(param_1 + 0x150) != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      *(undefined8 **)(param_1 + 0x150) = puVar10;
    }
    FUN_1438a0830(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x150));
    FUN_14370c150(puVar11);
    return;
  }
  return;
}



// FUNCTION 143860d50 FUN_143860d50 body=249 status=ok
// SIG undefined FUN_143860d50(void)

void FUN_143860d50(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_10;
  
  local_16 = 0x5e0800;
  local_18 = 0x10;
  local_10 = *(undefined4 *)(param_1 + 0x194);
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x108) + 0x238);
  puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x108) + 0x240);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_18);
  }
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_143876e90(*(longlong *)(param_1 + 0x150),1);
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_14387c4d0();
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x110) = 1;
  return;
}



// FUNCTION 143860e50 FUN_143860e50 body=404 status=ok
// SIG undefined FUN_143860e50(void)

/* WARNING: Removing unreachable block (ram,0x000143860fb3) */

void FUN_143860e50(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined2 local_38;
  undefined4 local_36;
  undefined4 local_30;
  undefined8 *local_28;
  
  if (*(int *)(*(longlong *)(param_1 + 0x108) + 0x240) != 0) {
    pvVar5 = TlsGetValue(DAT_146b7bf70);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = DAT_146b7bf68;
    }
    puVar6 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar5 + 0x58),0x28);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0x1ffff;
      *puVar6 = hkaiReferencedArray<hkVector4f>::vftable;
      puVar6[3] = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x24) = 0x80000000;
    }
    uVar7 = FUN_143703a50();
    if (*(uint *)(puVar6 + 4) == (*(uint *)((longlong)puVar6 + 0x24) & 0x3fffffff)) {
      FUN_14370c460(uVar7,puVar6 + 3,0x10);
    }
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    puVar8 = (undefined4 *)((longlong)*(int *)(puVar6 + 4) * 0x10 + puVar6[3]);
    *puVar8 = *param_2;
    puVar8[1] = uVar2;
    puVar8[2] = uVar3;
    puVar8[3] = uVar4;
    *(int *)(puVar6 + 4) = *(int *)(puVar6 + 4) + 1;
    local_38 = 0x20;
    local_30 = *(undefined4 *)(param_1 + 0x194);
    local_36 = 0x590800;
    puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 0x108) + 0x238);
    puVar1 = puVar9 + *(int *)(*(longlong *)(param_1 + 0x108) + 0x240);
    local_28 = puVar6;
    for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      (**(code **)(*(longlong *)*puVar9 + 0x18))((longlong *)*puVar9,&local_38);
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_14370c150(puVar6);
    }
  }
  uVar7 = FUN_143703a50();
  if ((*(uint *)(param_1 + 0x2c) & 0x3fffffff) == 0) {
    FUN_14370c310(uVar7,param_1 + 0x20,1,0x10);
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  puVar8 = *(undefined4 **)(param_1 + 0x20);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *puVar8 = *param_2;
  puVar8[1] = uVar2;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  FUN_1438607d0(param_1);
  return;
}



// FUNCTION 143860ff0 FUN_143860ff0 body=158 status=ok
// SIG undefined FUN_143860ff0(void)

void FUN_143860ff0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_28;
  undefined4 local_26;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_26 = 0x570800;
  local_28 = 0x10;
  local_20 = *(undefined4 *)(param_1 + 0x194);
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x108) + 0x238);
  puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x108) + 0x240);
  local_1c = param_2;
  if (puVar2 == puVar1) {
    *(undefined4 *)(param_1 + 0x9c) = param_2;
  }
  else {
    do {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_28);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    *(undefined4 *)(param_1 + 0x9c) = param_2;
  }
  return;
}



// FUNCTION 143861090 FUN_143861090 body=154 status=ok
// SIG undefined FUN_143861090(void)

void FUN_143861090(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0x90) != param_2) {
    local_18 = 0x10;
    local_10 = *(undefined4 *)(param_1 + 0x194);
    local_16 = 0x540800;
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x108) + 0x238);
    puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x108) + 0x240);
    local_c = param_2;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_18);
    }
    *(int *)(param_1 + 0x90) = param_2;
    FUN_1438607d0(param_1);
  }
  return;
}



// FUNCTION 143861130 FUN_143861130 body=154 status=ok
// SIG undefined FUN_143861130(void)

void FUN_143861130(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0x94) != param_2) {
    local_18 = 0x10;
    local_10 = *(undefined4 *)(param_1 + 0x194);
    local_16 = 0x530800;
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x108) + 0x238);
    puVar1 = puVar2 + *(int *)(*(longlong *)(param_1 + 0x108) + 0x240);
    local_c = param_2;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(longlong *)*puVar2 + 0x18))((longlong *)*puVar2,&local_18);
    }
    *(int *)(param_1 + 0x94) = param_2;
    FUN_1438607d0(param_1);
  }
  return;
}



// FUNCTION 1438611d0 FUN_1438611d0 body=172 status=ok
// SIG undefined FUN_1438611d0(void)

void FUN_1438611d0(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined2 local_28;
  undefined4 local_26;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  local_28 = 0x20;
  local_20 = *(undefined4 *)(param_1 + 0x194);
  local_26 = 0x5a0800;
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x108) + 0x238);
  puVar1 = puVar5 + *(int *)(*(longlong *)(param_1 + 0x108) + 0x240);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(code **)(*(longlong *)*puVar5 + 0x18))((longlong *)*puVar5,&local_28);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  if (*(char *)(param_1 + 0x100) == '\0') {
    *(undefined1 *)(param_1 + 0x100) = 1;
    FUN_143860d30(param_1);
  }
  return;
}



// FUNCTION 143861280 FUN_143861280 body=46 status=ok
// SIG undefined FUN_143861280(void)

void FUN_143861280(undefined8 *param_1)

{
  *param_1 = hkaiMaterialPainter::vftable;
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438612b0 FUN_1438612b0 body=46 status=ok
// SIG undefined FUN_1438612b0(void)

void FUN_1438612b0(undefined8 *param_1)

{
  *param_1 = hkaiCarver::vftable;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438612e0 FUN_1438612e0 body=136 status=ok
// SIG undefined FUN_1438612e0(void)

void FUN_1438612e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      lVar1 = *(longlong *)((longlong)iVar2 * 0x100 + *(longlong *)(param_1 + 0x38));
      if ((lVar1 != 0) &&
         ((*(int *)(*(longlong *)(lVar1 + 0x18) + 0x164) != 0 ||
          (*(int *)(*(longlong *)(lVar1 + 0x18) + 0x160) != 0)))) {
        FUN_1438613b0(lVar1,param_1);
        FUN_143861370(lVar1,param_1,param_2);
        FUN_1438613f0(lVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 143861370 FUN_143861370 body=57 status=ok
// SIG undefined FUN_143861370(void)

void FUN_143861370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14 [5];
  
  local_14[0] = 0;
  local_18 = 0;
  local_res20[0] = 0x7fffffff;
  FUN_143861470(param_1,param_2,local_14,&local_18,local_res20,param_3);
  return;
}



// FUNCTION 1438613b0 FUN_1438613b0 body=52 status=ok
// SIG undefined FUN_1438613b0(void)

void FUN_1438613b0(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_18 [6];
  
  local_res18[0] = 0x7fffffff;
  local_18[0] = 0;
  local_res20[0] = 0;
  FUN_143861b90(param_1,param_2,local_18,local_res20,local_res18);
  return;
}



// FUNCTION 1438613f0 FUN_1438613f0 body=27 status=ok
// SIG undefined FUN_1438613f0(void)

void FUN_1438613f0(undefined8 param_1)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0x7fffffff;
  FUN_143861f50(param_1,local_res10);
  return;
}



// FUNCTION 143861410 FUN_143861410 body=81 status=ok
// SIG undefined FUN_143861410(void)

int FUN_143861410(longlong param_1)

{
  return (DAT_1468296dc - DAT_1468296d8) * *(int *)(param_1 + 0x164) +
         (DAT_1468296e4 - DAT_1468296e0) * *(int *)(param_1 + 0x160) +
         *(int *)(param_1 + 0xe8) * DAT_1468296d8 + *(int *)(param_1 + 0xd8) * DAT_1468296e0 +
         *(int *)(param_1 + 0xf8);
}



// FUNCTION 143861470 FUN_143861470 body=1817 status=ok
// SIG undefined FUN_143861470(void)

bool FUN_143861470(longlong param_1,undefined8 param_2,uint *param_3,uint *param_4,int *param_5,
                  longlong *param_6)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  int local_e4;
  longlong local_e0;
  int local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0 [2];
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  undefined4 local_6c;
  ulonglong local_68;
  longlong *local_60;
  LPVOID local_58;
  
  local_58 = TlsGetValue(DAT_146b8198c);
  if (local_58 != (LPVOID)0x0) {
    FUN_14370d5c0(local_58,"TtstepCompactOwnedEdges");
  }
  plVar17 = (longlong *)(param_1 + 0x18);
  local_60 = plVar17;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar4 = *plVar17;
  }
  else {
    lVar4 = FUN_142fbda20(plVar17);
  }
  local_7c = 0x80000000;
  local_88 = 0;
  local_80 = 0;
  FUN_143852fa0(lVar4,&local_88);
  thunk_FUN_143719c70(0xcbdb432a);
  local_98 = 0;
  local_90 = 0;
  local_8c = 0x80000000;
  FUN_143852e50(lVar4,&local_98);
  uVar6 = *param_3;
  uVar15 = 0;
  uVar11 = *param_4;
  uVar14 = *(uint *)(*plVar17 + 0xe8);
  local_a4 = *(int *)(*plVar17 + 0x30);
  local_e0 = 0;
  local_e4 = *param_5;
  local_a0 = uVar6 + local_a4;
  local_d8 = 0;
  local_d4 = 0x80000000;
  local_cc = uVar14;
  if (0 < (int)uVar14) {
    uVar13 = uVar14;
    if ((int)uVar14 < 0) {
      uVar13 = uVar15;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_e0,uVar13,4);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x80000000;
  thunk_FUN_143719c70(0x9021d7a5);
  if ((int)uVar6 < (int)uVar14) {
    do {
      plVar17 = local_60;
      if (local_e4 < 1) break;
      iVar12 = *(int *)(local_88 + (longlong)(int)uVar6 * 4);
      if (iVar12 < 0) {
        iVar12 = *(int *)(local_98 + (longlong)(int)uVar6 * 4);
        if (-1 < iVar12) {
          piVar8 = (int *)((longlong)iVar12 * 0x10 + *(longlong *)(lVar4 + 0xb0));
          uVar13 = *(uint *)(*(longlong *)(lVar4 + 0xa0) + (longlong)iVar12 * 4);
          uVar16 = uVar13;
          goto LAB_143861629;
        }
LAB_1438618b0:
        uVar6 = uVar6 + 1;
        local_e4 = local_e4 - DAT_1468296dc;
        uVar15 = uVar15 + 0x38db40;
        *(undefined4 *)(local_e0 + (longlong)local_d8 * 4) = 0xffffffff;
        local_d8 = local_d8 + 1;
        if (uVar15 < 0x38db40) {
          thunk_FUN_143719c70(0xefe0f571);
        }
      }
      else {
        uVar13 = *(int *)(lVar4 + 0x20) + iVar12;
        piVar8 = (int *)((longlong)iVar12 * 0x10 + *(longlong *)(lVar4 + 0xd0));
        uVar16 = *(uint *)(*(longlong *)(lVar4 + 0x168) + (longlong)(int)uVar13 * 4);
LAB_143861629:
        uVar14 = local_cc;
        local_c8 = uVar16;
        local_c4 = uVar13;
        if (piVar8 == (int *)0x0) goto LAB_1438618b0;
        if (*piVar8 == local_a4 + uVar6) {
          iVar7 = piVar8[2];
          uVar13 = (uint)(short)iVar7;
          iVar12 = *(int *)(lVar4 + 0x30);
          local_e4 = local_e4 - uVar13 * DAT_1468296d8;
          *piVar8 = iVar12 + uVar11;
          local_c8 = uVar13;
          if (uVar15 + 0x3ed35b < 0x3ed35b) {
            thunk_FUN_143719c70(0xdcd396);
          }
          if (0 < (short)iVar7) {
            uVar9 = (ulonglong)uVar13;
            do {
              *(uint *)(local_e0 + (longlong)local_d8 * 4) = iVar12 + uVar11;
              local_d8 = local_d8 + 1;
              local_c4 = uVar11;
              local_c0[0] = uVar6;
              FUN_143854390(param_2,lVar4,&local_c4,local_c0);
              uVar11 = uVar11 + 1;
              uVar6 = uVar6 + 1;
              uVar9 = uVar9 - 1;
              uVar13 = local_c8;
            } while (uVar9 != 0);
          }
          uVar15 = uVar15 + 0x3ed35b + uVar13 * 0x48d3a2;
          uVar14 = local_cc;
          if (uVar15 < uVar13 * 0x48d3a2) {
            thunk_FUN_143719c70(0xdcd396);
            uVar14 = local_cc;
          }
        }
        else {
          local_d0 = (uint)*(short *)((longlong)piVar8 + 10);
          bVar3 = false;
          local_e4 = local_e4 - local_d0 * DAT_1468296d8;
          local_a8 = *(int *)(lVar4 + 0x30);
          piVar8[1] = local_a8 + uVar11;
          local_c0[0] = local_d0;
          if (uVar15 + 0x3ea704 < 0x3ea704) {
            thunk_FUN_143719c70(0xf69c29ca);
          }
          iVar12 = local_a8;
          if (0 < (int)local_c0[0]) {
            local_68 = (ulonglong)local_c0[0];
            do {
              if ((*(byte *)(*(longlong *)(lVar4 + 0xe0) + 0x10 + (longlong)(int)uVar6 * 0x14) & 8)
                  == 0) {
                *(uint *)(local_e0 + (longlong)local_d8 * 4) = iVar12 + uVar11;
                local_d8 = local_d8 + 1;
                local_78 = uVar6;
                local_74 = uVar11;
                FUN_143854390(param_2,lVar4,&local_74,&local_78);
                uVar11 = uVar11 + 1;
              }
              else {
                *(undefined4 *)(local_e0 + (longlong)local_d8 * 4) = 0xffffffff;
                local_d8 = local_d8 + 1;
                bVar3 = true;
                local_d0 = local_d0 - 1;
              }
              uVar6 = uVar6 + 1;
              local_68 = local_68 - 1;
            } while (local_68 != 0);
            local_68 = 0;
            uVar13 = local_c4;
            uVar16 = local_c8;
          }
          uVar15 = uVar15 + 0x3ea704 + local_c0[0] * 0x492f70;
          if (uVar15 < local_c0[0] * 0x492f70) {
            thunk_FUN_143719c70(0xf69c29ca);
          }
          *(short *)((longlong)piVar8 + 10) = (short)local_d0;
          if (local_d0 == 0) {
            piVar8[1] = -1;
          }
          uVar14 = local_cc;
          if (bVar3) {
            if (uVar16 != 0xffffffff) {
              iVar12 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x17c);
              if (*(uint *)(param_6 + 1) == (*(uint *)((longlong)param_6 + 0xc) & 0x3fffffff)) {
                FUN_14370c460(&PTR_vftable_1467f0638,param_6,4);
              }
              *(uint *)(*param_6 + (longlong)(int)param_6[1] * 4) = iVar12 << 0x16 | uVar16;
              *(int *)(param_6 + 1) = (int)param_6[1] + 1;
            }
            if (local_b0 == (local_ac & 0x3fffffff)) {
              FUN_14370c460(&PTR_vftable_1467f0638,&local_b8,4);
            }
            *(uint *)(local_b8 + (longlong)(int)local_b0 * 4) = uVar13;
            local_b0 = local_b0 + 1;
            uVar14 = local_cc;
          }
        }
      }
      plVar17 = local_60;
    } while ((int)uVar6 < (int)uVar14);
  }
  *param_5 = local_e4;
  *param_3 = uVar6;
  *param_4 = uVar11;
  thunk_FUN_143719c70(0xa5eb7685);
  lVar1 = *plVar17;
  if (uVar6 == uVar14) {
    *(int *)(lVar4 + 0x164) = *(int *)(lVar4 + 0x164) + (uVar11 - *(int *)(lVar1 + 0xe8));
    uVar5 = FUN_143703a50();
    uVar15 = *(uint *)(lVar4 + 0xec) & 0x3fffffff;
    if ((int)uVar15 < (int)uVar11) {
      uVar15 = uVar15 * 2;
      uVar13 = uVar11;
      if ((int)uVar11 < (int)uVar15) {
        uVar13 = uVar15;
      }
      FUN_14370c310(uVar5,lVar4 + 0xe0,uVar13,0x14);
    }
    *(uint *)(lVar4 + 0xe8) = uVar11;
    uVar5 = FUN_143703a50();
    uVar15 = *(uint *)(lVar4 + 0x11c) & 0x3fffffff;
    if ((int)uVar15 < (int)uVar11) {
      uVar15 = uVar15 * 2;
      uVar13 = uVar11;
      if ((int)uVar11 < (int)uVar15) {
        uVar13 = uVar15;
      }
      FUN_14370c310(uVar5,lVar4 + 0x110,uVar13,2);
    }
    *(uint *)(lVar4 + 0x118) = uVar11;
    iVar7 = *(int *)(lVar4 + 0x60) * uVar11;
    uVar5 = FUN_143703a50();
    uVar15 = *(uint *)(lVar4 + 0x15c) & 0x3fffffff;
    if ((int)uVar15 < iVar7) {
      iVar2 = uVar15 * 2;
      iVar12 = iVar7;
      if (iVar7 < iVar2) {
        iVar12 = iVar2;
      }
      FUN_14370c310(uVar5,lVar4 + 0x150,iVar12,4);
    }
    piVar8 = &local_a8;
    iVar12 = local_a4 + uVar11;
    *(int *)(lVar4 + 0x158) = iVar7;
    local_a8 = local_a0;
  }
  else {
    piVar8 = &local_70;
    iVar12 = *(int *)(lVar1 + 0xe8) + *(int *)(lVar1 + 0x30);
    local_70 = local_a0;
  }
  FUN_14383a610(param_1,&local_e0,piVar8,iVar12);
  thunk_FUN_143719c70(0x4a0fb296);
  uVar10 = 0;
  uVar9 = uVar10;
  if (0 < (int)local_b0) {
    do {
      local_6c = *(undefined4 *)(local_b8 + uVar9);
      FUN_14383a3c0(param_1,&local_6c);
      uVar11 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar11;
      uVar9 = uVar9 + 4;
    } while ((int)uVar11 < (int)local_b0);
  }
  thunk_FUN_143719c70(0x96a0235d);
  local_b0 = 0;
  if (-1 < (int)local_ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_b8,4,local_ac & 0x3fffffff);
  }
  local_b8 = 0;
  local_ac = 0x80000000;
  local_d8 = 0;
  if (-1 < (int)local_d4) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_e0,4,local_d4 & 0x3fffffff);
  }
  local_e0 = 0;
  local_d4 = 0x80000000;
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,4,local_8c & 0x3fffffff);
  }
  local_98 = 0;
  local_8c = 0x80000000;
  local_80 = 0;
  if (-1 < (int)local_7c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_88,4,local_7c & 0x3fffffff);
  }
  local_88 = 0;
  local_7c = 0x80000000;
  if (local_58 != (LPVOID)0x0) {
    FUN_14370d750(local_58,&DAT_145b8eda0);
  }
  return uVar6 == uVar14;
}



// FUNCTION 143861b90 FUN_143861b90 body=960 status=ok
// SIG undefined FUN_143861b90(void)

undefined4 FUN_143861b90(longlong param_1,undefined8 param_2,int *param_3,int *param_4,int *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  int local_98;
  int local_94;
  longlong local_90;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  longlong local_60;
  longlong *local_58;
  LPVOID local_50;
  
  local_50 = TlsGetValue(DAT_146b8198c);
  if (local_50 != (LPVOID)0x0) {
    FUN_14370d5c0(local_50,"TtstepCompactOwnedFaces");
  }
  plVar13 = (longlong *)(param_1 + 0x18);
  local_58 = plVar13;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar3 = *plVar13;
  }
  else {
    lVar3 = FUN_142fbda20(plVar13);
  }
  local_98 = *param_4;
  iVar11 = *(int *)(*plVar13 + 0x20);
  iVar14 = *(int *)(*plVar13 + 0xd8);
  local_94 = *param_5;
  iVar5 = *param_3;
  iVar10 = iVar14 - iVar5;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0x80000000;
  local_74 = iVar5 + iVar11;
  local_80 = iVar11;
  local_7c = iVar14;
  local_60 = lVar3;
  if (0 < iVar10) {
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_90,iVar10,4);
  }
  if (iVar5 < iVar14) {
    do {
      lVar2 = local_60;
      plVar13 = local_58;
      if (local_94 < 1) break;
      lVar12 = *(longlong *)(lVar3 + 0x168);
      iVar10 = *(int *)(lVar12 + (longlong)(iVar5 + iVar11) * 4);
      if (iVar10 == -1) {
        *(undefined4 *)(local_90 + (longlong)local_88 * 4) = 0xffffffff;
        local_88 = local_88 + 1;
        iVar5 = iVar5 + 1;
        iVar10 = DAT_1468296e4;
      }
      else {
        local_78 = iVar5 + 1;
        if (local_78 < iVar14) {
          lVar8 = (longlong)local_78;
          piVar7 = (int *)(lVar12 + (lVar8 + iVar11) * 4);
          do {
            if (*piVar7 != iVar10) break;
            local_78 = local_78 + 1;
            lVar8 = lVar8 + 1;
            piVar7 = piVar7 + 1;
          } while (lVar8 < iVar14);
        }
        local_68 = local_78 - iVar5;
        if (iVar5 != local_98) {
          lVar8 = (longlong)local_68;
          *(int *)(lVar12 + (longlong)iVar10 * 4) = local_98 + iVar11;
          if (0 < local_68) {
            lVar12 = ((longlong)iVar11 + (longlong)local_98) * 4;
            iVar14 = local_98;
            do {
              lVar1 = *(longlong *)(lVar2 + 0x168);
              lVar3 = lVar1 + ((longlong)iVar5 - (longlong)local_98) * 4;
              *(undefined4 *)(lVar1 + lVar12) = *(undefined4 *)(lVar3 + lVar12);
              local_70 = (iVar5 - local_98) + iVar14;
              *(undefined4 *)(lVar3 + lVar12) = 0xffffffff;
              local_6c = iVar14;
              FUN_1438545b0(param_2,lVar2,&local_6c,&local_70);
              iVar14 = iVar14 + 1;
              lVar12 = lVar12 + 4;
              lVar8 = lVar8 + -1;
              lVar3 = local_60;
              iVar11 = local_80;
            } while (lVar8 != 0);
          }
        }
        iVar14 = 0;
        if (0 < local_68) {
          do {
            iVar5 = local_98 + iVar11 + iVar14;
            iVar14 = iVar14 + 1;
            *(int *)(local_90 + (longlong)local_88 * 4) = iVar5;
            local_88 = local_88 + 1;
          } while (iVar14 < local_68);
        }
        local_98 = local_98 + local_68;
        iVar10 = DAT_1468296e0 * local_68;
        iVar5 = local_78;
        iVar14 = local_7c;
      }
      local_94 = local_94 - iVar10;
      thunk_FUN_143719c70(0x8ba0850e);
      plVar13 = local_58;
    } while (iVar5 < iVar14);
  }
  *param_3 = iVar5;
  *param_4 = local_98;
  *param_5 = local_94;
  if (iVar5 == iVar14) {
    iVar11 = local_98 + iVar11;
    *(int *)(lVar3 + 0x160) = *(int *)(lVar3 + 0x160) + (local_98 - *(int *)(*plVar13 + 0xd8));
    local_7c = local_74;
    FUN_14383a6a0(param_1,&local_90,&local_7c,iVar11);
    uVar4 = FUN_143703a50();
    uVar6 = *(uint *)(lVar3 + 0x174) & 0x3fffffff;
    if ((int)uVar6 < iVar11) {
      iVar5 = uVar6 * 2;
      iVar14 = iVar11;
      if (iVar11 < iVar5) {
        iVar14 = iVar5;
      }
      FUN_14370c310(uVar4,lVar3 + 0x168,iVar14,4);
    }
    *(int *)(lVar3 + 0x170) = iVar11;
    FUN_143854eb0(lVar3,local_98);
    uVar9 = 1;
  }
  else {
    local_80 = local_74;
    FUN_14383a6a0(param_1,&local_90,&local_80,*(undefined4 *)(lVar3 + 0x170));
    uVar9 = 0;
  }
  local_88 = 0;
  if (-1 < (int)local_84) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_90,4,local_84 & 0x3fffffff);
  }
  local_90 = 0;
  local_84 = 0x80000000;
  if (local_50 != (LPVOID)0x0) {
    FUN_14370d750(local_50,&DAT_145b8eda0);
  }
  return uVar9;
}



// FUNCTION 143861f50 FUN_143861f50 body=1800 status=ok
// SIG undefined FUN_143861f50(void)

undefined8 FUN_143861f50(longlong param_1,int *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  LPVOID pvVar10;
  longlong lVar11;
  LPVOID pvVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  ulonglong uVar25;
  ulonglong uVar26;
  int *piVar27;
  int iVar28;
  undefined8 *puVar29;
  int iVar30;
  longlong lVar31;
  uint local_res18 [2];
  undefined8 local_res20;
  longlong local_88;
  longlong local_78;
  uint local_70;
  uint local_6c;
  undefined4 *local_68;
  uint local_60;
  uint local_5c;
  undefined4 *local_58;
  uint local_50;
  uint local_48;
  ulonglong uVar24;
  
  pvVar10 = TlsGetValue(DAT_146b8198c);
  if (pvVar10 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar10,"TtstepCompactOwnedVertices");
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar11 = *plVar1;
  }
  else {
    lVar11 = FUN_142fbda20(plVar1);
  }
  uVar22 = *(uint *)(*plVar1 + 0xf8);
  uVar4 = *(uint *)(*plVar1 + 0x40);
  iVar30 = uVar4 + uVar22;
  local_res20 = CONCAT44(local_res20._4_4_,iVar30);
  local_res18[0] = uVar22;
  if (uVar22 != 0) {
    *param_2 = *param_2 - uVar22;
    uVar20 = 0;
    local_68 = (undefined4 *)0x0;
    uVar19 = (int)(uVar22 + 0x1f) >> 5;
    local_60 = 0;
    local_5c = 0x80000000;
    local_50 = uVar19;
    if (uVar19 == 0) {
      local_58 = (undefined4 *)0x0;
    }
    else {
      pvVar12 = TlsGetValue(DAT_146b7bf70);
      if (pvVar12 == (LPVOID)0x0) {
        pvVar12 = DAT_146b7bf68;
      }
      uVar15 = uVar19 * 4 + 0x7f & 0xffffff80;
      local_58 = *(undefined4 **)((longlong)pvVar12 + 0x18);
      uVar26 = (longlong)(int)uVar15 + (longlong)local_58;
      if ((*(int *)((longlong)pvVar12 + 0x10) < (int)uVar15) ||
         (*(ulonglong *)((longlong)pvVar12 + 0x20) < uVar26)) {
        local_58 = (undefined4 *)FUN_1437138c0(pvVar12);
      }
      else {
        *(ulonglong *)((longlong)pvVar12 + 0x18) = uVar26;
      }
    }
    local_5c = uVar19 | 0x80000000;
    local_68 = local_58;
    local_48 = uVar22;
    uVar13 = FUN_143703a50();
    if ((int)(local_5c & 0x3fffffff) < (int)uVar19) {
      uVar6 = (local_5c & 0x3fffffff) * 2;
      uVar15 = uVar19;
      if ((int)uVar19 < (int)uVar6) {
        uVar15 = uVar6;
      }
      FUN_14370c310(uVar13,&local_68,uVar15,4);
    }
    if (-1 < (int)(uVar19 - 1)) {
      puVar23 = local_68;
      for (uVar26 = (ulonglong)uVar19; uVar26 != 0; uVar26 = uVar26 - 1) {
        *puVar23 = 0;
        puVar23 = puVar23 + 1;
      }
    }
    local_60 = uVar19;
    thunk_FUN_143719c70(0xd82c4190);
    if (0 < *(int *)(*plVar1 + 0xe8)) {
      lVar17 = 0;
      uVar19 = uVar20;
      do {
        iVar14 = *(int *)(lVar17 + *(longlong *)(lVar11 + 0xe0));
        if ((iVar14 < iVar30) &&
           (iVar28 = *(int *)(lVar17 + 4 + *(longlong *)(lVar11 + 0xe0)), iVar28 < iVar30)) {
          iVar28 = iVar28 - uVar4;
          iVar14 = iVar14 - uVar4;
          if (-1 < iVar14) {
            local_68[(longlong)iVar14 >> 5] =
                 local_68[(longlong)iVar14 >> 5] | 1 << ((byte)iVar14 & 0x1f);
          }
          if (-1 < iVar28) {
            local_68[(longlong)iVar28 >> 5] =
                 local_68[(longlong)iVar28 >> 5] | 1 << ((byte)iVar28 & 0x1f);
          }
        }
        uVar20 = uVar20 + 0xd1b71;
        if (uVar20 < 0xd1b71) {
          thunk_FUN_143719c70(0xf08668e5);
        }
        uVar19 = uVar19 + 1;
        lVar17 = lVar17 + 0x14;
        uVar22 = local_res18[0];
      } while ((int)uVar19 < *(int *)(*plVar1 + 0xe8));
    }
    uVar24 = 0;
    uVar19 = 0;
    uVar26 = uVar24;
    uVar25 = uVar24;
    if (0 < *(int *)(lVar11 + 200)) {
      do {
        iVar28 = *(int *)(uVar25 + 4 + *(longlong *)(lVar11 + 0xc0)) - uVar4;
        iVar14 = *(int *)(uVar25 + *(longlong *)(lVar11 + 0xc0)) - uVar4;
        if (-1 < iVar14) {
          local_68[(longlong)iVar14 >> 5] =
               local_68[(longlong)iVar14 >> 5] | 1 << ((byte)iVar14 & 0x1f);
        }
        if (-1 < iVar28) {
          local_68[(longlong)iVar28 >> 5] =
               local_68[(longlong)iVar28 >> 5] | 1 << ((byte)iVar28 & 0x1f);
        }
        uVar20 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar20;
        uVar25 = uVar25 + 0x14;
      } while ((int)uVar20 < *(int *)(lVar11 + 200));
    }
    thunk_FUN_143719c70(0xbcd81b26);
    puVar5 = *(undefined8 **)(lVar11 + 0x188);
    iVar14 = *(int *)(lVar11 + 400);
    if (puVar5 != puVar5 + (longlong)iVar14 * 7) {
      puVar29 = puVar5 + 1;
      do {
        piVar27 = (int *)*puVar29;
        piVar16 = piVar27 + (longlong)*(int *)(puVar29 + 1) * 5;
        for (; piVar27 != piVar16; piVar27 = piVar27 + 5) {
          iVar21 = piVar27[1] - uVar4;
          iVar28 = *piVar27 - uVar4;
          if (-1 < iVar28) {
            local_68[(longlong)iVar28 >> 5] =
                 local_68[(longlong)iVar28 >> 5] | 1 << ((byte)iVar28 & 0x1f);
          }
          if (-1 < iVar21) {
            local_68[(longlong)iVar21 >> 5] =
                 local_68[(longlong)iVar21 >> 5] | 1 << ((byte)iVar21 & 0x1f);
          }
        }
        puVar2 = puVar29 + 6;
        puVar29 = puVar29 + 7;
      } while (puVar2 != puVar5 + (longlong)iVar14 * 7);
    }
    uVar15 = ~(-1 << ((char)local_48 - 1U & 0x1f)) * 2 | 1;
    lVar17 = (longlong)(int)(local_60 - 1);
    uVar26 = uVar24;
    uVar20 = uVar19;
    if (-1 < (int)(local_60 - 1)) {
      do {
        uVar20 = local_68[lVar17] & uVar15;
        uVar15 = 0xffffffff;
        uVar20 = uVar20 - (uVar20 >> 1 & 0x55555555);
        uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
        uVar20 = (int)uVar26 + (((uVar20 >> 4) + uVar20 & 0xf0f0f0f) * 0x1010101 >> 0x18);
        lVar17 = lVar17 + -1;
        uVar26 = (ulonglong)uVar20;
      } while (-1 < lVar17);
    }
    if (uVar20 != uVar22) {
      local_78 = 0;
      local_70 = 0;
      local_6c = 0x80000000;
      if (0 < (int)uVar22) {
        uVar26 = (ulonglong)uVar22;
        if ((int)uVar22 < 0) {
          uVar26 = uVar24;
        }
        FUN_14370c310(&PTR_vftable_1467f0638,&local_78,uVar26,4);
      }
      local_70 = uVar22;
      thunk_FUN_143719c70(0xf4b66c83);
      if (0 < (int)uVar22) {
        lVar18 = 0;
        local_88 = 0;
        lVar17 = lVar18;
        lVar31 = lVar18;
        uVar26 = uVar24;
        do {
          if (((uint)local_68[(longlong)(int)uVar26 >> 5] >> ((byte)uVar26 & 0x1f) & 1) == 0) {
            *(undefined4 *)(local_78 + lVar18 * 4) = 0xffffffff;
          }
          else {
            iVar30 = uVar19 + uVar4;
            uVar19 = uVar19 + 1;
            *(int *)(local_78 + lVar18 * 4) = iVar30;
            puVar23 = (undefined4 *)(lVar31 + *(longlong *)(lVar11 + 0xf0));
            uVar7 = puVar23[1];
            uVar8 = puVar23[2];
            uVar9 = puVar23[3];
            puVar3 = (undefined4 *)(lVar17 + *(longlong *)(lVar11 + 0xf0));
            *puVar3 = *puVar23;
            puVar3[1] = uVar7;
            puVar3[2] = uVar8;
            puVar3[3] = uVar9;
            lVar17 = lVar17 + 0x10;
            local_88 = lVar17;
          }
          uVar22 = (int)uVar24 + 0xd1b71;
          uVar24 = (ulonglong)uVar22;
          if (uVar22 < 0xd1b71) {
            thunk_FUN_143719c70(0x95338538);
            lVar17 = local_88;
          }
          uVar26 = (ulonglong)((int)uVar26 + 1);
          lVar18 = lVar18 + 1;
          lVar31 = lVar31 + 0x10;
        } while (lVar18 < (int)local_res18[0]);
        iVar30 = (int)local_res20;
      }
      uVar13 = FUN_143703a50();
      uVar22 = *(uint *)(lVar11 + 0xfc) & 0x3fffffff;
      if ((int)uVar22 < (int)uVar19) {
        uVar22 = uVar22 * 2;
        uVar20 = uVar19;
        if ((int)uVar19 < (int)uVar22) {
          uVar20 = uVar22;
        }
        FUN_14370c310(uVar13,lVar11 + 0xf0,uVar20,0x10);
      }
      *(uint *)(lVar11 + 0xf8) = uVar19;
      iVar14 = 0;
      uVar26 = 0;
      thunk_FUN_143719c70(0x99056c8d);
      if (0 < *(int *)(lVar11 + 0xe8)) {
        lVar17 = 0;
        uVar25 = uVar26;
        iVar28 = iVar14;
        do {
          piVar16 = (int *)(*(longlong *)(lVar11 + 0xe0) + lVar17);
          iVar21 = *piVar16;
          if ((iVar21 < iVar30) && (piVar16[1] < iVar30)) {
            if ((int)uVar4 <= iVar21) {
              *piVar16 = *(int *)(local_78 + (longlong)(int)(iVar21 - uVar4) * 4);
            }
            if ((int)uVar4 <= piVar16[1]) {
              piVar16[1] = *(int *)(local_78 + (longlong)(int)(piVar16[1] - uVar4) * 4);
            }
          }
          uVar22 = (int)uVar25 + 0xd1b71;
          uVar25 = (ulonglong)uVar22;
          if (uVar22 < 0xd1b71) {
            thunk_FUN_143719c70(0xc7a9d6c6);
          }
          iVar28 = iVar28 + 1;
          lVar17 = lVar17 + 0x14;
        } while (iVar28 < *(int *)(lVar11 + 0xe8));
      }
      if (0 < *(int *)(lVar11 + 200)) {
        do {
          piVar16 = (int *)(*(longlong *)(lVar11 + 0xc0) + uVar26);
          if ((int)uVar4 <= *piVar16) {
            *piVar16 = *(int *)(local_78 + (longlong)(int)(*piVar16 - uVar4) * 4);
          }
          if ((int)uVar4 <= piVar16[1]) {
            piVar16[1] = *(int *)(local_78 + (longlong)(int)(piVar16[1] - uVar4) * 4);
          }
          iVar14 = iVar14 + 1;
          uVar26 = uVar26 + 0x14;
        } while (iVar14 < *(int *)(lVar11 + 200));
      }
      thunk_FUN_143719c70(0x2ded4694);
      uVar22 = *(int *)(lVar11 + 400) - 1;
      if (-1 < (int)uVar22) {
        local_res18[1] = 0xffffffff;
        local_res18[0] = uVar22;
        do {
          lVar17 = (longlong)(int)local_res18[0] * 0x38 + *(longlong *)(lVar11 + 0x188);
          piVar27 = *(int **)(lVar17 + 8);
          piVar16 = piVar27 + (longlong)*(int *)(lVar17 + 0x10) * 5;
          for (; piVar27 != piVar16; piVar27 = piVar27 + 5) {
            if ((int)uVar4 <= *piVar27) {
              *piVar27 = *(int *)(local_78 + (longlong)(int)(*piVar27 - uVar4) * 4);
            }
            if ((int)uVar4 <= piVar27[1]) {
              piVar27[1] = *(int *)(local_78 + (longlong)(int)(piVar27[1] - uVar4) * 4);
            }
          }
          local_res18[0] = local_res18[0] - 1;
          local_res20 = CONCAT44(0xffffffff,local_res18[0]);
        } while (-1 < (int)local_res18[0]);
      }
      thunk_FUN_143719c70(0x42618cb0);
      local_res18[0] = uVar4;
      FUN_14383a730(param_1,&local_78,local_res18,*(int *)(lVar11 + 0xf8) + *(int *)(lVar11 + 0x40))
      ;
      local_70 = 0;
      if (-1 < (int)local_6c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_78,4,local_6c & 0x3fffffff);
      }
      local_78 = 0;
      local_6c = 0x80000000;
    }
    FUN_1437f12e0(&local_68);
  }
  if (pvVar10 != (LPVOID)0x0) {
    FUN_14370d750(pvVar10,&DAT_145b8eda0);
  }
  return 1;
}



// FUNCTION 143862660 FUN_143862660 body=451 status=ok
// SIG undefined FUN_143862660(void)

undefined1 *
FUN_143862660(undefined1 *param_1,longlong param_2,int *param_3,float param_4,undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int local_res10 [2];
  
  iVar7 = 0;
  iVar5 = 0;
  iVar6 = 0;
  if (0 < (int)*(uint *)(param_2 + 0x40)) {
    uVar3 = (ulonglong)*(uint *)(param_2 + 0x40);
    plVar4 = *(longlong **)(param_2 + 0x38);
    do {
      if ((*plVar4 != 0) && (lVar1 = *(longlong *)(*plVar4 + 0x18), lVar1 != 0)) {
        iVar2 = FUN_143861410(lVar1);
        iVar7 = iVar7 + iVar2;
        iVar5 = iVar5 + *(int *)(lVar1 + 0x164) + *(int *)(lVar1 + 0x160);
        iVar6 = iVar6 + *(int *)(lVar1 + 0xe8) + *(int *)(lVar1 + 0xd8);
      }
      plVar4 = plVar4 + 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (iVar6 != 0) {
      fVar8 = (float)iVar5 / ((float)iVar6 * param_4);
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      local_res10[0] = (int)(fVar8 * (float)iVar7);
      while( true ) {
        if (((char)param_3[1] != '\x03') &&
           (iVar5 = FUN_143862830(*(undefined8 *)
                                   ((longlong)*param_3 * 0x100 + *(longlong *)(param_2 + 0x38)),
                                  param_2,param_3,local_res10,param_5), iVar5 == 0)) {
          thunk_FUN_143719c70(0x14c9c224);
          *param_1 = 0;
          return param_1;
        }
        thunk_FUN_143719c70(0xeb69ee9e);
        iVar5 = *(int *)(param_2 + 0x40);
        iVar6 = 0;
        if (iVar5 < 1) break;
        while( true ) {
          *param_3 = *param_3 + 1;
          if (iVar5 <= *param_3) {
            *param_3 = 0;
          }
          lVar1 = *(longlong *)((longlong)*param_3 * 0x100 + *(longlong *)(param_2 + 0x38));
          if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x18), lVar1 != 0)) &&
             ((*(int *)(lVar1 + 0x164) != 0 || (*(int *)(lVar1 + 0x160) != 0)))) break;
          iVar6 = iVar6 + 1;
          if (iVar5 <= iVar6) goto LAB_1438627d0;
        }
        *(undefined1 *)(param_3 + 1) = 0;
        param_3[2] = 0;
        param_3[3] = 0;
      }
LAB_1438627d0:
      *param_1 = 1;
      return param_1;
    }
  }
  *param_1 = 1;
  return param_1;
}



// FUNCTION 143862830 FUN_143862830 body=292 status=ok
// SIG undefined FUN_143862830(void)

undefined8
FUN_143862830(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_3 + 4);
  if (cVar1 == '\0') {
    thunk_FUN_143719c70(0x8658a7);
    iVar2 = FUN_143861b90(param_1,param_2,param_3 + 8,param_3 + 0xc,param_4);
    if (iVar2 == 0) {
      thunk_FUN_143719c70(0xd5723aad);
      return 0;
    }
    *(undefined1 *)(param_3 + 4) = 1;
    *(undefined8 *)(param_3 + 8) = 0;
  }
  else if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return 1;
    }
    goto LAB_143862901;
  }
  thunk_FUN_143719c70(0xa9b49f3d);
  iVar2 = FUN_143861470(param_1,param_2,param_3 + 8,param_3 + 0xc,param_4,param_5);
  if (iVar2 == 0) {
    thunk_FUN_143719c70(0x1b61be2b);
    return 0;
  }
  *(undefined1 *)(param_3 + 4) = 2;
  *(undefined8 *)(param_3 + 8) = 0;
LAB_143862901:
  thunk_FUN_143719c70(0x5384e468);
  iVar2 = FUN_143861f50(param_1,param_4);
  if (iVar2 != 0) {
    *(undefined1 *)(param_3 + 4) = 3;
    *(undefined8 *)(param_3 + 8) = 0;
    return 1;
  }
  thunk_FUN_143719c70(0xe50dbc6a);
  return 0;
}



// FUNCTION 143862960 FUN_143862960 body=305 status=ok
// SIG undefined FUN_143862960(void)

int * FUN_143862960(longlong param_1,int *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x60);
  uVar4 = FUN_143703a50();
  if (((int)(*(uint *)(param_3 + 0x24) & 0x3fffffff) < iVar3) &&
     (iVar3 = FUN_14370c310(uVar4,param_3 + 0x18,iVar3,0x10), iVar3 < 0)) {
    *param_2 = -0x7ffbfe00;
    return param_2;
  }
  iVar3 = *(int *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = FUN_143703a50();
  if ((int)(*(uint *)(param_3 + 0x24) & 0x3fffffff) < iVar3) {
    FUN_14370c310(uVar5,param_3 + 0x18,iVar3,0x10);
  }
  FUN_142ba3370(*(undefined8 *)(param_3 + 0x18),uVar4,iVar3);
  *(int *)(param_3 + 0x20) = iVar3;
  puVar1 = (undefined8 *)(param_3 + 0x28);
  iVar3 = *(int *)(param_1 + 0x70);
  uVar4 = FUN_143703a50();
  if ((int)(*(uint *)(param_3 + 0x34) & 0x3fffffff) < iVar3) {
    iVar3 = FUN_14370c310(uVar4,puVar1,iVar3,0x10);
    if (iVar3 < 0) goto LAB_143862a79;
  }
  else {
    iVar3 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar5 = FUN_143703a50();
  if ((int)(*(uint *)(param_3 + 0x34) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar5,puVar1,iVar2,0x10);
  }
  FUN_1436ee950(*puVar1,uVar4,iVar2);
  *(int *)(param_3 + 0x30) = iVar2;
LAB_143862a79:
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 143862aa0 FUN_143862aa0 body=98 status=ok
// SIG undefined FUN_143862aa0(void)

void FUN_143862aa0(ulonglong param_1,float *param_2,uint param_3,ulonglong *param_4)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (0 < (int)param_3) {
    uVar6 = (ulonglong)param_3;
    uVar3 = 1;
    lVar7 = 0;
    uVar5 = param_1;
    do {
      auVar2._4_4_ = -(uint)(param_2[1] <= *(float *)(param_1 + 0x34) &&
                            *(float *)(param_1 + 0x24) <= param_2[1]);
      auVar2._0_4_ = -(uint)(*param_2 <= *(float *)(param_1 + 0x30) &&
                            *(float *)(param_1 + 0x20) <= *param_2);
      auVar2._8_4_ = -(uint)(param_2[2] <= *(float *)(param_1 + 0x38) &&
                            *(float *)(param_1 + 0x28) <= param_2[2]);
      auVar2._12_4_ =
           -(uint)(param_2[3] <= *(float *)(param_1 + 0x3c) &&
                  *(float *)(param_1 + 0x2c) <= param_2[3]);
      uVar4 = movmskps((int)uVar5,auVar2);
      uVar5 = (ulonglong)(uVar4 & 7);
      if ((char)(uVar4 & 7) != '\a') {
        uVar5 = *param_4;
        puVar1 = (uint *)(uVar5 + (lVar7 >> 5) * 4);
        *puVar1 = *puVar1 | uVar3;
      }
      lVar7 = lVar7 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      param_2 = param_2 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 143862b10 FUN_143862b10 body=35 status=ok
// SIG undefined FUN_143862b10(void)

bool FUN_143862b10(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1._4_4_ = -(uint)(*(float *)(param_1 + 0x24) <= param_2[5] &&
                        param_2[1] <= *(float *)(param_1 + 0x34));
  auVar1._0_4_ = -(uint)(*(float *)(param_1 + 0x20) <= param_2[4] &&
                        *param_2 <= *(float *)(param_1 + 0x30));
  auVar1._8_4_ = -(uint)(*(float *)(param_1 + 0x28) <= param_2[6] &&
                        param_2[2] <= *(float *)(param_1 + 0x38));
  auVar1._12_4_ =
       -(uint)(*(float *)(param_1 + 0x2c) <= param_2[7] && param_2[3] <= *(float *)(param_1 + 0x3c))
  ;
  uVar2 = movmskps((int)param_1,auVar1);
  return ((byte)uVar2 & 7) != 7;
}



// FUNCTION 143862b40 FUN_143862b40 body=53 status=ok
// SIG undefined FUN_143862b40(void)

bool FUN_143862b40(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = minps(*param_2,*param_3);
  auVar2 = maxps(*param_2,*param_3);
  auVar3 = minps(auVar3,*param_4);
  auVar2 = maxps(auVar2,*param_4);
  auVar4._0_4_ = -(uint)(*(float *)(param_1 + 0x20) <= auVar2._0_4_ &&
                        auVar3._0_4_ <= *(float *)(param_1 + 0x30));
  auVar4._4_4_ = -(uint)(*(float *)(param_1 + 0x24) <= auVar2._4_4_ &&
                        auVar3._4_4_ <= *(float *)(param_1 + 0x34));
  auVar4._8_4_ = -(uint)(auVar3._8_4_ <= *(float *)(param_1 + 0x38) &&
                        *(float *)(param_1 + 0x28) <= auVar2._8_4_);
  auVar4._12_4_ =
       -(uint)(*(float *)(param_1 + 0x2c) <= auVar2._12_4_ &&
              auVar3._12_4_ <= *(float *)(param_1 + 0x3c));
  uVar1 = movmskps((int)param_1,auVar4);
  return ((byte)uVar1 & 7) != 7;
}



// FUNCTION 143862b80 FUN_143862b80 body=37 status=ok
// SIG undefined FUN_143862b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143862b80(undefined8 param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001467f08d8;
  *(undefined8 *)(param_2 + 4) = _DAT_1467f08d0;
  *(undefined8 *)(param_2 + 6) = uVar1;
  *param_2 = param_2[4] ^ 0x80000000;
  param_2[1] = param_2[5] ^ 0x80000000;
  param_2[2] = param_2[6] ^ 0x80000000;
  param_2[3] = param_2[7] ^ 0x80000000;
  return;
}



// FUNCTION 143862bb0 FUN_143862bb0 body=35 status=ok
// SIG undefined FUN_143862bb0(void)

bool FUN_143862bb0(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1._4_4_ = -(uint)(param_2[5] <= *(float *)(param_1 + 0x34) &&
                        *(float *)(param_1 + 0x24) <= param_2[1]);
  auVar1._0_4_ = -(uint)(param_2[4] <= *(float *)(param_1 + 0x30) &&
                        *(float *)(param_1 + 0x20) <= *param_2);
  auVar1._8_4_ = -(uint)(param_2[6] <= *(float *)(param_1 + 0x38) &&
                        *(float *)(param_1 + 0x28) <= param_2[2]);
  auVar1._12_4_ =
       -(uint)(param_2[7] <= *(float *)(param_1 + 0x3c) && *(float *)(param_1 + 0x2c) <= param_2[3])
  ;
  uVar2 = movmskps((int)param_1,auVar1);
  return ((byte)uVar2 & 7) != 7;
}



// FUNCTION 143862be0 FUN_143862be0 body=156 status=ok
// SIG undefined FUN_143862be0(void)

void FUN_143862be0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1437faf00(param_1 + 8);
  *param_1 = hkGeometry::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],0x10,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x10,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143862c80 FUN_143862c80 body=155 status=ok
// SIG undefined FUN_143862c80(void)

undefined8 * FUN_143862c80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int local_res8 [2];
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  local_res8[0] = 0;
  uVar1 = FUN_143703a50();
  iVar3 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar2 = FUN_143702d60(uVar1,4,local_res8);
  }
  param_1[3] = uVar2;
  *(int *)(param_1 + 4) = iVar3;
  iVar3 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar3 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x24) = iVar3;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1437fac90(param_1 + 6);
  param_1[0x4a] = 0;
  return param_1;
}



// FUNCTION 143862d20 FUN_143862d20 body=242 status=ok
// SIG undefined FUN_143862d20(void)

void FUN_143862d20(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1[0x4a] != 0) {
    FUN_14370c150();
  }
  FUN_1437faf00(param_1 + 6);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar2,param_1[3],4,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[1];
  iVar3 = (int)param_1[2] + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(lVar1 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x14)) {
    FUN_143702e10(uVar2,param_1[1],8,*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff);
  }
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  if (*param_1 != 0) {
    FUN_14370c150();
  }
  return;
}



// FUNCTION 143862e20 FUN_143862e20 body=78 status=ok
// SIG undefined FUN_143862e20(void)

undefined2 * FUN_143862e20(undefined2 *param_1)

{
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *param_1 = 0x103;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 2) = 0x14;
  *(undefined4 *)(param_1 + 0xc) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xe) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)(param_1 + 0x12) = 2;
  *(undefined4 *)(param_1 + 0x14) = 4;
  *(undefined4 *)(param_1 + 0x16) = 100000;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 143862e70 FUN_143862e70 body=265 status=ok
// SIG undefined FUN_143862e70(void)

void FUN_143862e70(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  
  if (0 < param_3) {
    param_2 = param_2 - param_1;
    puVar4 = (uint *)(param_1 + 0x14);
    lVar5 = (longlong)param_3;
    do {
      puVar4[-5] = *(uint *)(param_2 + -0x14 + (longlong)puVar4);
      uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar4);
      uVar2 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar4);
      uVar3 = FUN_143703a50();
      if ((int)(*puVar4 & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar4 + -3,uVar1,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar4 + -3),uVar2,uVar1);
      puVar4[-1] = uVar1;
      FUN_1437347a0(puVar4 + 1,(longlong)puVar4 + param_2 + 4);
      FUN_143863580(puVar4 + 5,param_2 + 0x14 + (longlong)puVar4);
      FUN_14383dde0(puVar4 + 0xd,param_2 + 0x34 + (longlong)puVar4);
      puVar4 = puVar4 + 0x1a;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 143862f80 FUN_143862f80 body=363 status=ok
// SIG undefined FUN_143862f80(void)

uint * FUN_143862f80(longlong *param_1,uint *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  int *piVar7;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar2 = oo2net::OodleNetwork1_HashBack3(*param_3);
  puVar6 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar2) * 8);
  if (-1 < *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar2) * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x30) == *param_3) {
        *param_2 = puVar6[1];
        goto LAB_1438630ba;
      }
      lVar4 = param_1[2];
      uVar5 = ((longlong)puVar6 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar6 = (uint *)(lVar4 + uVar5 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar5 * 8));
  }
  uVar1 = *(uint *)(param_1 + 1);
  *puVar6 = uVar2;
  puVar6[1] = uVar1;
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1,0x30);
  }
  lVar4 = (longlong)(int)param_1[1] * 0x30 + *param_1;
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x1c) = 0x80000000;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    FUN_143734b10(lVar4 + 0x20);
  }
  lVar4 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar4 + 1;
  piVar7 = (int *)((longlong)(int)lVar4 * 0x30 + *param_1);
  *piVar7 = *param_3;
  piVar7[2] = *param_4;
  FUN_143863660(piVar7 + 4,param_4 + 2);
  *param_2 = uVar1;
LAB_1438630ba:
  param_2[1] = (uint)((longlong)puVar6 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 1438630f0 FUN_1438630f0 body=376 status=ok
// SIG undefined FUN_1438630f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438630f0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)0x0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavMeshCutter::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_1437fab00(param_1 + 10);
  param_1[0x11] = 0;
  param_1[0x12] = 0x38d1b717;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3a83126f;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x3f000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  FUN_143734b10(param_1 + 0x18);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80000000;
  FUN_143734b10(param_1 + 0x1c);
  param_1[0x1e] = 0;
  hkaiNavMeshEdgeMatchingParameters::setForNavMeshCutting(param_1 + 10);
  uVar3 = uRam00000001467f08bc;
  uVar2 = uRam00000001467f08b8;
  uVar1 = uRam00000001467f08b4;
  *(undefined4 *)(param_1 + 8) = _DAT_1467f08b0;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 9) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  *(undefined1 *)(param_1 + 0x14) = 1;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x38);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0x1ffff;
    *puVar5 = hkaiModifiedSections::vftable;
    puVar5[3] = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0x80000000;
    FUN_143734b10(puVar5 + 5);
    puVar6 = puVar5;
  }
  if (param_1[0x1e] != 0) {
    FUN_14370c150();
  }
  param_1[0x1e] = puVar6;
  return param_1;
}



// FUNCTION 143863270 FUN_143863270 body=153 status=ok
// SIG undefined FUN_143863270(void)

void FUN_143863270(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  if (-1 < iVar2) {
    lVar3 = *param_1 + 0x10 + (longlong)iVar2 * 0x30;
    do {
      FUN_14382bd60(lVar3);
      lVar3 = lVar3 + -0x30;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x30,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 143863310 FUN_143863310 body=153 status=ok
// SIG undefined FUN_143863310(void)

void FUN_143863310(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  if (-1 < iVar2) {
    lVar3 = *param_1 + ((longlong)iVar2 * 5 + 1) * 8;
    do {
      FUN_14375d9f0(lVar3);
      lVar3 = lVar3 + -0x28;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x28,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 1438633b0 FUN_1438633b0 body=236 status=ok
// SIG undefined FUN_1438633b0(void)

void FUN_1438633b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),0x10,*(uint *)(param_1 + 0x44) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),8,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),8,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 8),8,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1438634a0 FUN_1438634a0 body=224 status=ok
// SIG undefined FUN_1438634a0(void)

void FUN_1438634a0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkaiNavMeshCutter::vftable;
  if (param_1[0x1e] != 0) {
    FUN_14370c150();
  }
  FUN_143863270(param_1 + 0x1a);
  FUN_143863310(param_1 + 0x16);
  if (param_1[0x11] != 0) {
    FUN_14370c150();
  }
  uVar2 = FUN_143703a50();
  lVar1 = param_1[4];
  lVar3 = (longlong)(*(int *)(param_1 + 5) + -1);
  if (-1 < *(int *)(param_1 + 5) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar2,param_1[4],8,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143863580 FUN_143863580 body=223 status=ok
// SIG undefined FUN_143863580(void)

longlong * FUN_143863580(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = (int)param_2[1];
  lVar6 = *param_2;
  uVar2 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar2,param_1,iVar1,0xc);
  }
  iVar5 = iVar1;
  if ((int)param_1[1] < iVar1) {
    iVar5 = (int)param_1[1];
  }
  FUN_1437f2fc0(*param_1,lVar6,iVar5);
  puVar3 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0xc);
  lVar4 = (longlong)(iVar1 - iVar5);
  if (0 < iVar1 - iVar5) {
    lVar6 = ((longlong)iVar5 * 0xc - (longlong)puVar3) + lVar6;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *(undefined8 *)(lVar6 + (longlong)puVar3);
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar6 + 8 + (longlong)puVar3);
      }
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_1437347a0(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 143863660 FUN_143863660 body=311 status=ok
// SIG undefined FUN_143863660(void)

longlong * FUN_143863660(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = (int)param_2[1];
  lVar7 = *param_2;
  uVar2 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar2,param_1,iVar1,0x68);
  }
  iVar4 = ((int)param_1[1] - iVar1) + -1;
  if (-1 < iVar4) {
    lVar6 = (longlong)iVar1 * 0x68 + *param_1 + 8 + (longlong)iVar4 * 0x68;
    do {
      FUN_14382c2b0(lVar6);
      lVar6 = lVar6 + -0x68;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = iVar1;
  if ((int)param_1[1] < iVar1) {
    iVar4 = (int)param_1[1];
  }
  FUN_143862e70(*param_1,lVar7,iVar4);
  lVar6 = (longlong)(iVar1 - iVar4);
  if (0 < iVar1 - iVar4) {
    lVar5 = lVar7 + 0x48 + (longlong)iVar4 * 0x68;
    lVar7 = *param_1 - lVar7;
    do {
      puVar3 = (undefined4 *)(lVar7 + -0x48 + lVar5);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(lVar5 + -0x48);
        FUN_1438290b0(lVar7 + -0x40 + lVar5,lVar5 + -0x40);
        FUN_143828d40(lVar7 + -0x20 + lVar5,lVar5 + -0x20);
        FUN_143828ee0(lVar7 + lVar5,lVar5);
      }
      lVar5 = lVar5 + 0x68;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_1437347a0(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 1438637a0 FUN_1438637a0 body=136 status=ok
// SIG undefined FUN_1438637a0(void)

longlong FUN_1438637a0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar2 = oo2net::OodleNetwork1_HashBack3(*param_2);
  uVar3 = (ulonglong)(uVar2 & *(uint *)(param_1 + 3));
  lVar1 = param_1[2];
  iVar4 = *(int *)(lVar1 + 4 + uVar3 * 8);
  if (-1 < iVar4) {
    do {
      if (*(int *)(*param_1 + (longlong)iVar4 * 0x30) == *param_2) {
        return lVar1 + uVar3 * 8;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1U & *(uint *)(param_1 + 3));
      iVar4 = *(int *)(lVar1 + 4 + uVar3 * 8);
    } while (-1 < iVar4);
  }
  return 0;
}



// FUNCTION 143863830 FUN_143863830 body=312 status=ok
// SIG undefined FUN_143863830(void)

void FUN_143863830(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_1438637a0(param_1,(longlong)(int)uVar4 * 0x30 + *param_1);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  FUN_14382bd60(*param_1 + 0x10 + (longlong)(int)uVar2 * 0x30);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    puVar7 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x30);
    lVar5 = 6;
    lVar8 = ((longlong)(int)*(uint *)(param_1 + 1) * 0x30 + *param_1) - (longlong)puVar7;
    do {
      *puVar7 = *(undefined8 *)(lVar8 + (longlong)puVar7);
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = param_1[2];
  uVar6 = ((longlong)param_2 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + uVar6 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  while (-1 < iVar3) {
    lVar5 = param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & *puVar1) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar6 = ((longlong)puVar1 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 143863970 FUN_143863970 body=541 status=ok
// SIG undefined FUN_143863970(void)

void FUN_143863970(longlong param_1,undefined4 *param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar5;
  uint local_68;
  uint local_64;
  longlong local_60 [3];
  longlong local_48 [4];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar2 = 0;
  if (param_2 != (undefined4 *)0x0) {
    uVar2 = *param_2;
  }
  FUN_14383e240(*(undefined8 *)(param_1 + 0x18),uVar2,param_3,local_60);
  FUN_14383f6a0(*(undefined8 *)(param_1 + 0x18),local_res18,*(undefined4 *)(param_3 + 0x30));
  FUN_14383f6a0(*(undefined8 *)(param_1 + 0x18),local_res20,*(undefined4 *)(param_3 + 0x34));
  local_68 = *(uint *)(param_3 + 0x38);
  local_64 = *(uint *)(param_3 + 0x3c);
  uVar4 = local_res18[0] << 0x16 | local_68;
  uVar3 = local_res20[0] << 0x16 | local_64;
  if (local_res18[0] == local_res20[0]) {
    uVar1 = local_68;
    local_68 = local_64;
    local_64 = uVar1;
    FUN_143883550(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_res18[0] * 8),
                  &local_64,&local_68,local_60,local_48,param_1 + 0x40,
                  CONCAT44(uVar5,*(undefined4 *)(param_1 + 0x9c)));
  }
  else {
    FUN_143883970(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_res18[0] * 8),
                  &local_68,local_60,
                  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_res20[0] * 8),
                  &local_64,local_48,param_1 + 0x40,*(undefined4 *)(param_1 + 0x9c));
  }
  if (param_2 != (undefined4 *)0x0) {
    FUN_1438acf40(param_2,uVar4,uVar3);
  }
  FUN_14389f540(local_res10,*(undefined8 *)(param_1 + 0x18),uVar4);
  FUN_14389f540(local_res8,*(undefined8 *)(param_1 + 0x18),uVar3);
  if (((local_res10[0] != -1) && (local_res8[0] != -1)) && (local_res10[0] != local_res8[0])) {
    if ((*(byte *)(local_60[0] + 0x10) & 0x20) == 0) {
      FUN_14389f300(*(undefined8 *)(param_1 + 0x18),local_res8[0],local_res10[0],1,
                    *(undefined2 *)(local_60[0] + 0x12));
      if (param_2 == (undefined4 *)0x0) {
        if (((uVar3 ^ uVar4) & 0xffc00000) != 0) {
          FUN_1438ad0e0(param_1 + 0xb0,local_res8[0],local_res10[0]);
        }
      }
      else {
        FUN_1438acd90(param_2,local_res8[0],local_res10[0]);
      }
    }
    if ((*(byte *)(local_48[0] + 0x10) & 0x20) == 0) {
      FUN_14389f300(*(undefined8 *)(param_1 + 0x18),local_res10[0],local_res8[0],1,
                    *(undefined2 *)(local_48[0] + 0x12));
      if (param_2 != (undefined4 *)0x0) {
        FUN_1438acd90(param_2,local_res10[0],local_res8[0]);
        return;
      }
      if (((uVar3 ^ uVar4) & 0xffc00000) != 0) {
        FUN_1438ad0e0(param_1 + 0xb0,local_res10[0],local_res8[0]);
      }
    }
  }
  return;
}



// FUNCTION 143863b90 FUN_143863b90 body=88 status=ok
// SIG undefined FUN_143863b90(void)

void FUN_143863b90(longlong param_1,undefined4 param_2)

{
  undefined1 local_res8 [8];
  undefined4 local_res10 [6];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [24];
  
  local_30 = 0;
  local_28 = 0;
  local_24 = 0x80000000;
  local_res10[0] = param_2;
  local_38[0] = param_2;
  FUN_143734b10(local_20);
  FUN_143862f80(param_1 + 0xd0,local_res8,local_res10,local_38);
  FUN_14382bd60(&local_30);
  return;
}



// FUNCTION 143863bf0 FUN_143863bf0 body=151 status=ok
// SIG undefined FUN_143863bf0(void)

void FUN_143863bf0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res10 [2];
  
  local_res10[0] = param_2;
  lVar3 = FUN_1438637a0(param_1 + 0xd0,local_res10);
  if (lVar3 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(lVar3 + 4);
  }
  lVar3 = param_3[1];
  lVar1 = *(longlong *)(param_1 + 0xd0);
  for (lVar4 = *param_3; lVar4 != lVar3; lVar4 = lVar4 + 0x50) {
    FUN_143863970(param_1,(longlong)iVar2 * 0x30 + lVar1 + 8,lVar4);
    thunk_FUN_143719c70(0x1c6e3ad);
  }
  return;
}



// FUNCTION 143863c90 FUN_143863c90 body=80 status=ok
// SIG undefined FUN_143863c90(void)

void FUN_143863c90(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_143863970(param_1,0,lVar2);
    thunk_FUN_143719c70(0x6e06431d);
  }
  return;
}



// FUNCTION 143863ce0 FUN_143863ce0 body=808 status=ok
// SIG undefined FUN_143863ce0(void)

void FUN_143863ce0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_res8;
  int local_res10;
  undefined4 uStackX_14;
  undefined4 *local_58;
  int local_50;
  uint local_4c;
  undefined4 *local_48;
  int local_40;
  uint local_3c;
  
  local_48 = (undefined4 *)0x0;
  local_40 = 0;
  local_3c = 0x80000000;
  local_res8 = CONCAT44(local_res8._4_4_,*param_2);
  FUN_1438407a0(*(undefined8 *)(param_1 + 0x18),&local_res8,&local_48);
  puVar4 = local_48 + (longlong)local_40 * 0xe;
  for (puVar2 = local_48; puVar2 != puVar4; puVar2 = puVar2 + 0xe) {
    FUN_143864fd0(param_1,*puVar2,puVar2 + 2);
  }
  local_res8._4_4_ = (undefined4)((ulonglong)local_res8 >> 0x20);
  local_res8 = CONCAT44(local_res8._4_4_,*param_2);
  local_58 = (undefined4 *)0x0;
  local_50 = 0;
  local_4c = 0x80000000;
  FUN_1438ad2f0(param_1 + 0xb0,&local_res8,&local_58);
  puVar2 = local_58 + (longlong)local_50 * 3;
  for (puVar4 = local_58; puVar4 != puVar2; puVar4 = puVar4 + 3) {
    FUN_14389f300(*(undefined8 *)(param_1 + 0x18),*puVar4,puVar4[1],-puVar4[2],0);
  }
  local_res8._4_4_ = (undefined4)((ulonglong)local_res8 >> 0x20);
  local_res8._0_4_ = *param_2;
  FUN_1438add00(param_1 + 0xb0,&local_res8);
  local_50 = 0;
  if (-1 < (int)local_4c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_58,0xc,local_4c & 0x3fffffff);
  }
  iVar5 = *(int *)(param_1 + 0xd8) + -1;
  if (-1 < iVar5) {
    uStackX_14 = 0xffffffff;
    do {
      local_58 = (undefined4 *)0x0;
      local_50 = 0;
      local_4c = 0x80000000;
      lVar6 = (longlong)iVar5 * 0x30 + *(longlong *)(param_1 + 0xd0);
      local_res8 = CONCAT44(local_res8._4_4_,*param_2);
      FUN_1438ad380(lVar6 + 8,&local_res8,&local_58);
      puVar2 = local_58 + (longlong)local_50 * 3;
      for (puVar4 = local_58; puVar4 != puVar2; puVar4 = puVar4 + 3) {
        FUN_14389f300(*(undefined8 *)(param_1 + 0x18),*puVar4,puVar4[1],-puVar4[2],0);
      }
      local_res8._4_4_ = (undefined4)((ulonglong)local_res8 >> 0x20);
      local_res8 = CONCAT44(local_res8._4_4_,*param_2);
      FUN_1438ade20(lVar6 + 8,&local_res8);
      local_50 = 0;
      if (-1 < (int)local_4c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_58,0xc,local_4c & 0x3fffffff);
      }
      iVar5 = iVar5 + -1;
      local_58 = (undefined4 *)0x0;
      local_res8._4_4_ = uStackX_14;
      local_4c = 0x80000000;
      local_res10 = iVar5;
      local_res8._0_4_ = iVar5;
    } while (-1 < iVar5);
  }
  lVar6 = (longlong)(local_40 + -1);
  if (-1 < local_40 + -1) {
    puVar3 = local_48 + lVar6 * 0xe + 9;
    do {
      uVar1 = FUN_143703a50();
      puVar3[-1] = 0;
      if (-1 < (int)*puVar3) {
        FUN_143702e10(uVar1,*(undefined8 *)(puVar3 + -3),4,*puVar3 & 0x3fffffff);
      }
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3[-5] = 0;
      if (-1 < (int)puVar3[-4]) {
        FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(puVar3 + -7),2,puVar3[-4] & 0x3fffffff)
        ;
      }
      puVar3[-7] = 0;
      puVar3[-6] = 0;
      puVar3[-4] = 0x80000000;
      puVar3 = puVar3 + -0xe;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_48,0x38,local_3c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143864010 FUN_143864010 body=376 status=ok
// SIG undefined FUN_143864010(void)

undefined8 * FUN_143864010(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  LPVOID pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  
  cVar6 = FUN_143864470();
  if (cVar6 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar7 + 0x58),0x28);
  puVar12 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0x1ffff;
    *puVar8 = hkaiNavMeshModifiedAabbs::vftable;
    puVar8[3] = 0;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0x80000000;
    puVar12 = puVar8;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  uVar9 = FUN_143703a50();
  uVar10 = *(uint *)((longlong)puVar12 + 0x24) & 0x3fffffff;
  if ((int)uVar10 < iVar2) {
    iVar5 = uVar10 * 2;
    if (iVar2 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_14370c310(uVar9,puVar12 + 3,iVar2,0x10);
  }
  plVar11 = *(longlong **)(param_1 + 0x20);
  plVar1 = plVar11 + *(int *)(param_1 + 0x28);
  for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
    lVar4 = *plVar11;
    lVar13 = (longlong)*(int *)(puVar12 + 4) * 0x10;
    *(int *)(puVar12 + 4) = *(int *)(puVar12 + 4) + 1;
    puVar8 = (undefined8 *)(puVar12[3] + lVar13);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0x80000000;
    }
    puVar8 = (undefined8 *)(puVar12[3] + lVar13);
    if (lVar4 != 0) {
      uVar9 = *puVar8;
      *puVar8 = *(undefined8 *)(lVar4 + 0xf8);
      *(undefined8 *)(lVar4 + 0xf8) = uVar9;
      uVar3 = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(lVar4 + 0x100);
      *(undefined4 *)(lVar4 + 0x100) = uVar3;
      uVar3 = *(undefined4 *)((longlong)puVar8 + 0xc);
      *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)(lVar4 + 0x104);
      *(undefined4 *)(lVar4 + 0x104) = uVar3;
    }
  }
  *param_2 = puVar12;
  return param_2;
}



// FUNCTION 143864190 FUN_143864190 body=503 status=ok
// SIG undefined FUN_143864190(void)

undefined8 * FUN_143864190(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  LPVOID pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  
  cVar6 = FUN_1438644a0();
  if (cVar6 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar7 + 0x58),0x28);
  puVar11 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0x1ffff;
    *puVar8 = hkaiNavMeshModifiedFaces::vftable;
    puVar8[3] = 0;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0x80000000;
    puVar11 = puVar8;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  uVar9 = FUN_143703a50();
  uVar10 = *(uint *)((longlong)puVar11 + 0x24) & 0x3fffffff;
  if ((int)uVar10 < iVar2) {
    iVar5 = uVar10 * 2;
    if (iVar2 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_14370c310(uVar9,puVar11 + 3,iVar2,0x20);
  }
  plVar12 = *(longlong **)(param_1 + 0x20);
  plVar1 = plVar12 + *(int *)(param_1 + 0x28);
  for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
    lVar4 = *plVar12;
    lVar13 = (longlong)*(int *)(puVar11 + 4) * 0x20;
    *(int *)(puVar11 + 4) = *(int *)(puVar11 + 4) + 1;
    puVar8 = (undefined8 *)(puVar11[3] + lVar13);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0x80000000;
      FUN_143734b10(puVar8 + 2);
    }
    puVar8 = (undefined8 *)(puVar11[3] + lVar13);
    if (lVar4 != 0) {
      uVar9 = *puVar8;
      *puVar8 = *(undefined8 *)(lVar4 + 0xb8);
      *(undefined8 *)(lVar4 + 0xb8) = uVar9;
      uVar3 = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(lVar4 + 0xc0);
      *(undefined4 *)(lVar4 + 0xc0) = uVar3;
      uVar3 = *(undefined4 *)((longlong)puVar8 + 0xc);
      *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)(lVar4 + 0xc4);
      *(undefined4 *)(lVar4 + 0xc4) = uVar3;
      FUN_143734b30(puVar8 + 2,lVar4 + 200);
      uVar9 = FUN_143703a50();
      *(undefined4 *)(lVar4 + 0xe0) = 0;
      if (-1 < (int)*(uint *)(lVar4 + 0xe4)) {
        FUN_143702e10(uVar9,*(undefined8 *)(lVar4 + 0xd8),4,*(uint *)(lVar4 + 0xe4) & 0x3fffffff);
      }
      *(undefined8 *)(lVar4 + 0xd8) = 0;
      *(undefined4 *)(lVar4 + 0xe4) = 0x80000000;
      FUN_143734820(lVar4 + 0xe8);
    }
  }
  *param_2 = puVar11;
  return param_2;
}



// FUNCTION 143864390 FUN_143864390 body=224 status=ok
// SIG undefined FUN_143864390(void)

longlong * FUN_143864390(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (*(int *)(lVar1 + 0x20) != 0) {
    if (lVar1 != 0) {
      FUN_14370c030(lVar1);
    }
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    puVar3 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar2 + 0x58),0x38);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      *puVar3 = hkaiModifiedSections::vftable;
      *(undefined4 *)(puVar3 + 2) = 0x1ffff;
      puVar3[3] = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x24) = 0x80000000;
      FUN_143734b10(puVar3 + 5);
    }
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      FUN_14370c150();
    }
    *(undefined8 **)(param_1 + 0xf0) = puVar3;
    *param_2 = lVar1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143864470 FUN_143864470 body=46 status=ok
// SIG undefined FUN_143864470(void)

longlong FUN_143864470(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint7 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  plVar1 = plVar2 + *(int *)(param_1 + 0x28);
  while( true ) {
    uVar3 = (uint7)((ulonglong)plVar2 >> 8);
    if (plVar2 == plVar1) {
      return (ulonglong)uVar3 << 8;
    }
    if ((*plVar2 != 0) && (*(int *)(*plVar2 + 0x100) != 0)) break;
    plVar2 = plVar2 + 1;
  }
  return CONCAT71(uVar3,1);
}



// FUNCTION 1438644a0 FUN_1438644a0 body=46 status=ok
// SIG undefined FUN_1438644a0(void)

longlong FUN_1438644a0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint7 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  plVar1 = plVar2 + *(int *)(param_1 + 0x28);
  while( true ) {
    uVar3 = (uint7)((ulonglong)plVar2 >> 8);
    if (plVar2 == plVar1) {
      return (ulonglong)uVar3 << 8;
    }
    if ((*plVar2 != 0) && (*(int *)(*plVar2 + 0xc0) != 0)) break;
    plVar2 = plVar2 + 1;
  }
  return CONCAT71(uVar3,1);
}


