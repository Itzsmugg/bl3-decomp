// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1430ff9f0 FUN_1430ff9f0 body=113 status=ok
// SIG undefined FUN_1430ff9f0(void)

longlong FUN_1430ff9f0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res10 [3];
  
  if (*param_2 == 0) {
    uVar1 = 0;
    local_res10[0] = param_1;
    if (*(int *)(param_1 + 0x90) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x80);
      if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) {
        plVar3 = (longlong *)(param_1 + 0x60);
      }
      if (plVar3 != (longlong *)0x0) {
        uVar1 = (**(code **)(*plVar3 + 8))();
      }
    }
    lVar2 = (**(code **)(param_1 + 0x50))(uVar1,local_res10);
    *param_2 = lVar2;
    return lVar2;
  }
  return *param_2;
}



// FUNCTION 1430ffa70 FUN_1430ffa70 body=52 status=ok
// SIG undefined FUN_1430ffa70(void)

undefined8 FUN_1430ffa70(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x460) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x460) + 0x28);
  }
  lVar1 = FUN_1422325e0();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x90);
  }
  return 0;
}



// FUNCTION 1430ffab0 FUN_1430ffab0 body=188 status=ok
// SIG undefined FUN_1430ffab0(void)

longlong FUN_1430ffab0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x610);
  if (*plVar1 == 0) {
    lVar3 = operator_new(0x618);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1430f8610(lVar3,param_2);
    }
    if (plVar1 != &local_res8) {
      lVar2 = *plVar1;
      *plVar1 = lVar3;
      if (lVar2 != 0) {
        TActorListAllocator<128,12>::FPool::FBlock::~FBlock(lVar2);
        FMemory::operator_delete(lVar2,0x618);
        return *plVar1;
      }
      return lVar3;
    }
    if (lVar3 != 0) {
      TActorListAllocator<128,12>::FPool::FBlock::~FBlock(lVar3);
      FMemory::operator_delete(lVar3,0x618);
    }
  }
  return *plVar1;
}



// FUNCTION 1430ffb70 FUN_1430ffb70 body=246 status=ok
// SIG undefined FUN_1430ffb70(void)

uint * FUN_1430ffb70(uint *param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  uint local_res8 [2];
  uint local_res10;
  
  uVar1 = param_1[0x1260];
  for (puVar5 = param_1; puVar5 != param_1 + (longlong)(int)uVar1 * 0x188; puVar5 = puVar5 + 0x188)
  {
    if ((int)param_2 <= (int)*puVar5) {
      return puVar5;
    }
  }
  if (param_3 == '\0') {
    iVar2 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (param_2 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    param_2 = param_2 - 1;
    iVar2 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (param_2 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x1f' - (char)iVar2;
    }
    param_2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - cVar4 & 0x1f);
  }
  param_1[0x1260] = uVar1 + 1;
  local_res10 = param_2;
  if ((int)param_1[0x1261] < (int)(uVar1 + 1)) {
    TArray<TActorListAllocator<128,12>::FPool,TFixedAllocator<12>_>::ResizeGrow(param_1,uVar1);
  }
  param_1 = param_1 + (longlong)(int)uVar1 * 0x188;
  if (param_1 != (uint *)0x0) {
    *param_1 = param_2;
    local_res8[0] = param_2;
    FUN_1430f8610(param_1 + 2,local_res8);
    return param_1;
  }
  return (uint *)0x0;
}



// FUNCTION 1430ffc70 FUN_1430ffc70 body=307 status=ok
// SIG undefined FUN_1430ffc70(void)

void FUN_1430ffc70(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_38 [2];
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  local_res10 = 0xffffffff;
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(local_38,lVar1);
    local_res10 = local_38[0];
  }
  uVar2 = local_res10;
  TSet<TTuple<TTuple<FVertexInstanceID,FVertexInstanceID>,int>,TDefaultMapHashableKeyFuncs<TTuple<FVertexInstanceID,FVertexInstanceID>,int,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xb0,local_res8,&local_res10);
  lVar4 = 0;
  if (local_res8[0] != -1) {
    lVar4 = *(longlong *)(param_1 + 0xb0) + (longlong)local_res8[0] * 0x14;
  }
  lVar3 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  if (lVar3 == 0) {
    lVar3 = FUN_1430ff3e0(param_1 + 0xb0,uVar2,lVar1);
  }
  if (lVar3 == 0) {
    if (*param_3 < *(float *)(param_1 + 0xa4)) {
      *(undefined1 *)(param_1 + 0x1b0) = 1;
      *(float *)(param_1 + 0xa4) = *param_3 - *(float *)(param_1 + 0xa0) * 0.5;
    }
    if (param_3[1] < *(float *)(param_1 + 0xa8)) {
      *(undefined1 *)(param_1 + 0x1b0) = 1;
      *(float *)(param_1 + 0xa8) = param_3[1] - *(float *)(param_1 + 0xa0) * 0.5;
    }
  }
  return;
}



// FUNCTION 1430ffdb0 FUN_1430ffdb0 body=727 status=ok
// SIG undefined FUN_1430ffdb0(void)

void FUN_1430ffdb0(longlong param_1,longlong *param_2,int param_3,longlong *param_4,
                  undefined4 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  int local_res18;
  int local_98 [2];
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong local_60;
  undefined8 *local_58;
  longlong **local_50;
  longlong local_48;
  
  if (param_3 < (int)param_2[1]) {
    local_60 = param_1 + 0xa8;
    lVar12 = (longlong)param_3 << 5;
    local_res18 = param_3;
    do {
      uVar11 = 0;
      lVar7 = *param_2;
      lVar5 = *(longlong *)(lVar12 + 0x18 + lVar7);
      if (*(int *)(lVar5 + 0x18) == 0) {
        *(undefined4 *)(lVar5 + 0x18) = param_5;
      }
      uVar4 = *(uint *)(lVar5 + 0x1c);
      local_68 = *(undefined8 *)(lVar12 + 8 + lVar7);
      local_88 = lVar12;
      lVar7 = FUN_140decfc0(local_60,&local_68);
      local_48 = *(longlong *)(lVar7 + 0x18);
      if (local_48 != 0) {
        puVar13 = (undefined8 *)(local_48 + 0x20);
        puVar2 = (undefined8 *)(local_48 + ((longlong)*(int *)(local_48 + 8) + 4) * 8);
        uVar14 = (ulonglong)((longlong)puVar2 + (7 - (longlong)puVar13)) >> 3;
        if (puVar2 < puVar13) {
          uVar14 = uVar11;
        }
        if (uVar14 != 0) {
          do {
            plVar9 = (longlong *)0x0;
            local_90 = *puVar13;
            TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
            ::FindId(param_4,local_98);
            plVar8 = plVar9;
            if (local_98[0] != -1) {
              plVar8 = (longlong *)((longlong)local_98[0] * 0x20 + *param_4);
            }
            plVar10 = plVar8 + 1;
            if (plVar8 == (longlong *)0x0) {
              plVar10 = plVar9;
            }
            if (plVar10 == (longlong *)0x0) {
              plVar8 = (longlong *)operator_new(0x28);
              plVar10 = plVar9;
              if (plVar8 != (longlong *)0x0) {
                lVar12 = FUN_140decfc0(param_4[0x14],&local_90);
                *(byte *)((longlong)plVar8 + 0x24) = *(byte *)((longlong)plVar8 + 0x24) & 0xfc;
                plVar8[1] = 0;
                plVar8[2] = 1;
                *plVar8 = 0;
                plVar8[3] = 0;
                *(undefined4 *)(plVar8 + 4) = 0;
                *(undefined4 *)(plVar8 + 2) = *(undefined4 *)(lVar12 + 0x3c);
                *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(lVar12 + 0x38);
                plVar10 = plVar8;
              }
              local_80 = plVar10;
              plVar8 = (longlong *)operator_new(0x18);
              if (plVar8 != (longlong *)0x0) {
                *(undefined4 *)(plVar8 + 1) = 1;
                *plVar8 = (longlong)&PTR_FUN_144576340;
                *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
                plVar8[2] = (longlong)plVar10;
                plVar9 = plVar8;
              }
              local_78 = plVar9;
              SharedPointerInternals::EnableSharedFromThis(&local_80,plVar10,plVar10);
              local_58 = &local_90;
              local_50 = &local_80;
              FUN_140dd9ec0(param_4,local_70,&local_58,0);
              plVar9 = local_78;
              if (local_78 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_78 + 1;
                lVar12 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*local_78)(local_78);
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
              plVar10 = (longlong *)*plVar10;
            }
            uVar6 = *(uint *)((longlong)plVar10 + 0x1c);
            if (*(uint *)((longlong)plVar10 + 0x1c) <= uVar4) {
              uVar6 = uVar4;
            }
            *(uint *)((longlong)plVar10 + 0x1c) = uVar6;
            FUN_14310d9f0(param_1,local_90,param_4);
            puVar13 = puVar13 + 1;
            uVar11 = uVar11 + 1;
            lVar12 = local_88;
          } while (uVar11 != uVar14);
        }
      }
      lVar12 = lVar12 + 0x20;
      local_res18 = local_res18 + 1;
    } while (local_res18 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 143100090 FUN_143100090 body=359 status=ok
// SIG undefined FUN_143100090(void)

void FUN_143100090(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar4 = FUN_14310e270();
  uVar4 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
  (**(code **)(*param_1 + 0x340))(param_1,uVar4);
  plVar1 = (longlong *)(param_2 + 0x180);
  *(undefined8 *)(param_2 + 400) = uVar4;
  iVar2 = *(int *)(param_2 + 0x188);
  *(int *)(param_2 + 0x188) = iVar2 + 1;
  if (*(int *)(param_2 + 0x18c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar4;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar4 = UPlatformGameInstance::StaticClass();
  uVar4 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
  (**(code **)(*param_1 + 0x340))(param_1,uVar4);
  iVar2 = *(int *)(param_2 + 0x188);
  *(int *)(param_2 + 0x188) = iVar2 + 1;
  if (*(int *)(param_2 + 0x18c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar4;
  iVar2 = (int)param_1[0x42];
  *(int *)(param_1 + 0x42) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x214) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x41,iVar2);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + param_1[0x41]);
  puVar5[1] = uVar4;
  *puVar5 = uVar3;
  return;
}



// FUNCTION 143100200 FUN_143100200 body=177 status=ok
// SIG undefined FUN_143100200(void)

void FUN_143100200(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = FUN_14310e270();
  uVar2 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
  (**(code **)(*param_1 + 0x340))(param_1,uVar2);
  *(undefined8 *)(param_2 + 400) = uVar2;
  iVar1 = *(int *)(param_2 + 0x188);
  *(int *)(param_2 + 0x188) = iVar1 + 1;
  if (*(int *)(param_2 + 0x18c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x180,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x180) + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1431002c0 FUN_1431002c0 body=146 status=ok
// SIG undefined FUN_1431002c0(void)

void FUN_1431002c0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  param_1[6] = param_2;
  (**(code **)(*param_1 + 0x348))();
  (**(code **)(*param_1 + 0x350))(param_1);
  uVar3 = 0;
  puVar2 = *(undefined8 **)(param_1[6] + 0x98);
  uVar1 = (ulonglong)*(int *)(param_1[6] + 0xa0);
  uVar4 = uVar1 & 0x1fffffffffffffff;
  if (puVar2 + uVar1 < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      (**(code **)(*param_1 + 0x290))(param_1,*puVar2);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 143100360 FUN_143100360 body=199 status=ok
// SIG undefined FUN_143100360(void)

void FUN_143100360(float *param_1,longlong *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((*(byte *)(*param_2 + 0x90) & 8) == 0) {
    if (*param_1 <= 0.0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = *(float *)(*param_2 + 0x138);
    }
    param_1[2] = fVar3;
  }
  else {
    param_1[2] = 0.0;
    if (*(float *)(*param_2 + 0x138) == 0.0) {
      *param_1 = 0.0;
    }
  }
  fVar3 = param_3 / *(float *)(*param_2 + 0x140);
  fVar1 = (float)(longlong)(float)((int)ROUND(fVar3 + fVar3 + 0.5) >> 1);
  fVar3 = 1.4013e-45;
  if (fVar1 != 0.0) {
    fVar3 = fVar1;
  }
  param_1[3] = fVar3;
  param_1[5] = fVar3;
  if (0.0 < *(float *)(*param_2 + 0x144)) {
    param_3 = param_3 / *(float *)(*param_2 + 0x144);
    fVar2 = (float)(longlong)(float)((int)ROUND(param_3 + param_3 + 0.5) >> 1);
    fVar1 = 1.4013e-45;
    if (fVar2 != 0.0) {
      fVar1 = fVar2;
    }
    if ((uint)fVar1 <= (uint)fVar3) {
      fVar1 = fVar3;
    }
    param_1[6] = fVar1;
  }
  return;
}



// FUNCTION 143100430 FUN_143100430 body=1076 status=ok
// SIG undefined FUN_143100430(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143100430(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  int local_res8 [2];
  undefined8 *******local_res10;
  undefined8 *******local_res18;
  undefined8 *******local_res20;
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  bVar7 = false;
  local_res8[0] = 0;
  uStack_94 = 0x3f800000;
  iStack_90 = 0;
  uStack_8c = 1;
  local_88 = 4;
  uStack_84 = 1;
  local_98 = 0;
  lVar9 = AXScriptedBotSpawner::GetPrivateStaticClass();
  local_res10 = (undefined8 *******)0xffffffff;
  if (lVar9 != 0) {
    FWeakObjectPtr::operator=(&local_res18,lVar9);
    local_res10 = local_res18;
  }
  local_res20 = &local_res10;
  plVar1 = (longlong *)(param_1 + 0x100);
  FUN_140dd8d30(plVar1,local_res8,&local_res20,0);
  lVar9 = *plVar1;
  uVar10 = CONCAT44(uStack_94,local_98);
  uVar4 = CONCAT44(uStack_8c,iStack_90);
  lVar12 = (longlong)local_res8[0] * 0x2c;
  puVar2 = (undefined8 *)(lVar12 + 8 + lVar9);
  *puVar2 = uVar10;
  puVar2[1] = uVar4;
  *(ulonglong *)(lVar12 + 0x18 + lVar9) = CONCAT44(uStack_84,local_88);
  *(undefined4 *)(lVar12 + 0x20 + lVar9) = 0;
  lVar9 = FUN_1429e18b0();
  local_res10 = (undefined8 *******)0xffffffff;
  if (lVar9 != 0) {
    FWeakObjectPtr::operator=(&local_res18,lVar9);
    local_res10 = local_res18;
  }
  local_res20 = &local_res10;
  FUN_140dd8d30(plVar1,local_res8,&local_res20,0);
  lVar9 = *plVar1;
  uVar5 = CONCAT44(uStack_84,local_88);
  lVar12 = (longlong)local_res8[0] * 0x2c;
  local_98 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  uStack_8c = 0;
  local_88 = -1;
  puVar2 = (undefined8 *)(lVar12 + 8 + lVar9);
  *puVar2 = uVar10;
  puVar2[1] = uVar4;
  *(undefined8 *)(lVar12 + 0x18 + lVar9) = uVar5;
  *(undefined4 *)(lVar12 + 0x20 + lVar9) = 0;
  uVar10 = FUN_14171bfe0();
  FUN_1417a5560(uVar10,&local_98,1,0x10,0);
  lVar9 = CONCAT44(uStack_94,local_98);
  do {
    local_88 = local_88 + 1;
    if (iStack_90 <= local_88) break;
  } while (*(longlong *)(lVar9 + (longlong)local_88 * 8) == 0);
  do {
    if ((local_88 < 0) || (iStack_90 <= local_88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) {
      if (lVar9 != 0) {
        FMemory::Free(lVar9);
      }
      return;
    }
    plVar3 = *(longlong **)(lVar9 + (longlong)local_88 * 8);
    lVar12 = plVar3[0x1f];
    if (lVar12 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar12 = plVar3[0x1f];
      lVar9 = CONCAT44(uStack_94,local_98);
      if (lVar12 != 0) goto LAB_14310061f;
    }
    else {
LAB_14310061f:
      lVar9 = FUN_1428dfc70();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && ((*(byte *)(lVar12 + 0x92) & 0x40) != 0)) {
        local_res18 = (undefined8 *******)plVar3[3];
        FName::ToString(&local_res18,local_a8);
        cVar8 = FString::StartsWith(local_a8,L"SKEL_",1);
        if (cVar8 == '\0') {
          local_res18 = (undefined8 *******)plVar3[3];
          bVar7 = true;
          FName::ToString(&local_res18,local_b8);
          cVar8 = FString::StartsWith(local_b8,L"REINST_",1);
          if (cVar8 != '\0') goto LAB_1431006cf;
          bVar6 = false;
        }
        else {
LAB_1431006cf:
          bVar6 = true;
        }
        if ((bVar7) && (bVar7 = false, local_b8[0] != 0)) {
          FMemory::Free();
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
        if (!bVar6) {
          local_78 = 0x3f800000;
          uStack_74 = 0x3f800000;
          local_68 = 4;
          uStack_64 = 1;
          fVar13 = (float)*(int *)(*(longlong *)(param_1 + 0x30) + 0x58) /
                   *(float *)(lVar12 + 0x140);
          iVar11 = (int)(longlong)(float)((int)ROUND(fVar13 + fVar13 + 0.5) >> 1);
          iStack_6c = 1;
          if (iVar11 != 0) {
            iStack_6c = iVar11;
          }
          if ((*(byte *)(lVar12 + 0x90) & 0xc) == 0) {
            uStack_70 = *(undefined4 *)(lVar12 + 0x138);
          }
          else {
            uStack_70 = 0;
          }
          local_res10 = (undefined8 *******)0xffffffff;
          FWeakObjectPtr::operator=(&local_res20,plVar3);
          local_res10 = local_res20;
          local_res18 = &local_res10;
          FUN_140dd8d30(plVar1,local_res8,&local_res18,0);
          lVar12 = (longlong)local_res8[0] * 0x2c;
          lVar9 = *plVar1;
          puVar2 = (undefined8 *)(lVar12 + 8 + lVar9);
          *puVar2 = CONCAT44(uStack_74,local_78);
          puVar2[1] = CONCAT44(iStack_6c,uStack_70);
          *(ulonglong *)(lVar12 + 0x18 + lVar9) = CONCAT44(uStack_64,local_68);
          *(undefined4 *)(lVar12 + 0x20 + lVar9) = 0;
        }
      }
      lVar9 = CONCAT44(uStack_94,local_98);
    }
    do {
      local_88 = local_88 + 1;
      if (iStack_90 <= local_88) break;
    } while (*(longlong *)(lVar9 + (longlong)local_88 * 8) == 0);
  } while( true );
}



// FUNCTION 143100870 FUN_143100870 body=294 status=ok
// SIG undefined FUN_143100870(void)

void FUN_143100870(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 *local_res20;
  
  lVar2 = AXScriptedBotSpawner::GetPrivateStaticClass();
  local_res10 = 0xffffffff;
  if (lVar2 != 0) {
    FWeakObjectPtr::operator=(&local_res18,lVar2);
    local_res10 = local_res18;
  }
  local_res20 = &local_res10;
  FUN_140dd8d30(param_1 + 0x100,local_res8,&local_res20,0);
  lVar3 = (longlong)local_res8[0] * 0x2c;
  lVar2 = *(longlong *)(param_1 + 0x100);
  puVar1 = (undefined8 *)(lVar3 + 8 + lVar2);
  *puVar1 = 0x3f80000000000000;
  puVar1[1] = 0x100000000;
  *(undefined8 *)(lVar3 + 0x18 + lVar2) = 0x100000004;
  *(undefined4 *)(lVar3 + 0x20 + lVar2) = 0;
  lVar2 = FUN_1429e18b0();
  local_res10 = 0xffffffff;
  if (lVar2 != 0) {
    FWeakObjectPtr::operator=(&local_res18,lVar2);
    local_res10 = local_res18;
  }
  local_res20 = &local_res10;
  FUN_140dd8d30(param_1 + 0x100,local_res8,&local_res20,0);
  lVar3 = (longlong)local_res8[0] * 0x2c;
  lVar2 = *(longlong *)(param_1 + 0x100);
  puVar1 = (undefined8 *)(lVar3 + 8 + lVar2);
  *puVar1 = 0x3f80000000000000;
  puVar1[1] = 0x100000000;
  *(undefined8 *)(lVar3 + 0x18 + lVar2) = 0x100000004;
  *(undefined4 *)(lVar3 + 0x20 + lVar2) = 0;
  return;
}



// FUNCTION 1431009a0 FUN_1431009a0 body=732 status=ok
// SIG undefined FUN_1431009a0(void)

void FUN_1431009a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  undefined4 local_res10;
  
  uVar6 = DAT_146b50040;
  uVar8 = (ulonglong)(int)DAT_146b50040;
  local_res10 = 3;
  for (piVar5 = &DAT_146b4b6c0; &DAT_146b4b6c0 + uVar8 * 0x188 != piVar5; piVar5 = piVar5 + 0x188) {
    uVar9 = uVar8;
    if (2 < *piVar5) goto LAB_143100a42;
  }
  DAT_146b50040 = DAT_146b50040 + 1;
  if (DAT_146b50044 < (int)DAT_146b50040) {
    TArray<TActorListAllocator<128,12>::FPool,TFixedAllocator<12>_>::ResizeGrow
              (&DAT_146b4b6c0,uVar6);
  }
  uVar9 = (ulonglong)DAT_146b50040;
  if (&DAT_146b4b6c0 + uVar8 * 0x188 != (undefined4 *)0x0) {
    (&DAT_146b4b6c0)[uVar8 * 0x188] = 3;
    local_res8 = CONCAT44(local_res8._4_4_,3);
    FUN_1430f8610(&DAT_146b4b6c8 + uVar8 * 0x620,&local_res8);
    uVar9 = (ulonglong)DAT_146b50040;
  }
LAB_143100a42:
  uVar6 = (uint)uVar9;
  local_res10 = 6;
  for (piVar5 = &DAT_146b4b6c0; &DAT_146b4b6c0 + (longlong)(int)uVar6 * 0x188 != piVar5;
      piVar5 = piVar5 + 0x188) {
    uVar7 = uVar6;
    if (5 < *piVar5) goto LAB_143100ac2;
  }
  DAT_146b50040 = uVar6 + 1;
  if (DAT_146b50044 < (int)DAT_146b50040) {
    TArray<TActorListAllocator<128,12>::FPool,TFixedAllocator<12>_>::ResizeGrow
              (&DAT_146b4b6c0,uVar9 & 0xffffffff);
  }
  uVar7 = DAT_146b50040;
  if (&DAT_146b4b6c0 + (longlong)(int)uVar6 * 0x188 != (undefined4 *)0x0) {
    (&DAT_146b4b6c0)[(longlong)(int)uVar6 * 0x188] = 6;
    local_res8 = CONCAT44(local_res8._4_4_,6);
    FUN_1430f8610(&DAT_146b4b6c8 + (longlong)(int)uVar6 * 0x620,&local_res8);
    uVar7 = DAT_146b50040;
  }
LAB_143100ac2:
  local_res10 = 0x80;
  for (piVar5 = &DAT_146b4b6c0; &DAT_146b4b6c0 + (longlong)(int)uVar7 * 0x188 != piVar5;
      piVar5 = piVar5 + 0x188) {
    if (0x7f < *piVar5) goto LAB_143100b3a;
  }
  DAT_146b50040 = uVar7 + 1;
  if (DAT_146b50044 < (int)DAT_146b50040) {
    TArray<TActorListAllocator<128,12>::FPool,TFixedAllocator<12>_>::ResizeGrow
              (&DAT_146b4b6c0,uVar7);
  }
  if (&DAT_146b4b6c0 + (longlong)(int)uVar7 * 0x188 != (undefined4 *)0x0) {
    (&DAT_146b4b6c0)[(longlong)(int)uVar7 * 0x188] = 0x80;
    local_res8 = CONCAT44(local_res8._4_4_,0x80);
    FUN_1430f8610(&DAT_146b4b6c8 + (longlong)(int)uVar7 * 0x620,&local_res8);
  }
LAB_143100b3a:
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar3 = FUN_14310e600();
  lVar4 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  (**(code **)(*param_1 + 0x340))(param_1,lVar4);
  param_1[0x3f] = lVar4;
  *(undefined4 *)(lVar4 + 0xa0) = 0x461c4000;
  plVar1 = param_1 + 0x11;
  lVar4 = param_1[0x3f];
  *(undefined4 *)(lVar4 + 0xa4) = 0xca000000;
  *(undefined4 *)(lVar4 + 0xa8) = 0xca000000;
  iVar2 = (int)param_1[0x12];
  lVar4 = param_1[0x3f];
  *(int *)(param_1 + 0x12) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x94) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar3 = FUN_14310ee40();
  lVar4 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  (**(code **)(*param_1 + 0x340))(param_1,lVar4);
  param_1[0x40] = lVar4;
  iVar2 = (int)param_1[0x12];
  *(int *)(param_1 + 0x12) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x94) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
  return;
}



// FUNCTION 143100c80 FUN_143100c80 body=104 status=ok
// SIG undefined FUN_143100c80(void)

void FUN_143100c80(longlong param_1,longlong param_2)

{
  int iVar1;
  
  FUN_143100cf0(param_2,param_1 + 0x68);
  if (*(char *)(param_2 + 0x48) != '\0') {
    iVar1 = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa0) = iVar1 + 1;
    if (*(int *)(param_1 + 0xa4) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x98,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 143100cf0 FUN_143100cf0 body=188 status=ok
// SIG undefined FUN_143100cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143100cf0(longlong param_1,undefined8 *param_2)

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
  local_38 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 0x38);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar1;
    plVar6 = *(longlong **)(param_1 + 0x40);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x3c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x44) = uStack_30._4_4_;
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
  return;
}



// FUNCTION 143100db0 FUN_143100db0 body=1587 status=ok
// SIG undefined FUN_143100db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143100db0(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint *puVar21;
  longlong *plVar22;
  bool bVar23;
  undefined1 auStack_148 [32];
  longlong local_128;
  int local_120;
  uint uStack_11c;
  uint *puStack_118;
  undefined4 local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong lStack_e8;
  uint *puStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  longlong *local_68;
  char local_60;
  char cStack_5f;
  undefined6 uStack_5e;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  local_128 = param_2;
  local_100 = param_1;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x15c)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x2a,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  iVar6 = (int)param_1[0x2f] + 0x1f;
  plVar14 = (longlong *)param_1[0x2e];
  if ((longlong *)param_1[0x2e] == (longlong *)0x0) {
    plVar14 = param_1 + 0x2c;
  }
  _guard_xfg_dispatch_icall_nop
            (plVar14,0,(longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) << 2);
  uVar19 = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x33)) {
    uVar20 = (ulonglong)*(uint *)(param_1 + 0x33);
    uVar16 = uVar19;
    do {
      plVar14 = (longlong *)param_1[0x32];
      if ((longlong *)param_1[0x32] == (longlong *)0x0) {
        plVar14 = param_1 + 0x31;
      }
      uVar8 = (longlong)(int)param_1[0x33] - 1U & uVar16;
      uVar16 = uVar16 + 1;
      *(undefined4 *)((longlong)plVar14 + uVar8 * 4) = 0xffffffff;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  puVar18 = (undefined8 *)param_1[0x11];
  uVar16 = (longlong)(int)param_1[0x12] & 0x1fffffffffffffff;
  if (puVar18 + (int)param_1[0x12] < puVar18) {
    uVar16 = uVar19;
  }
  if (uVar16 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar18 + 0x288))();
      uVar19 = uVar19 + 1;
      puVar18 = puVar18 + 1;
    } while (uVar19 != uVar16);
  }
  plVar22 = (longlong *)param_1[7];
  plVar14 = plVar22 + (int)param_1[8];
  for (; plVar22 != plVar14; plVar22 = plVar22 + 1) {
    uVar16 = 0;
    lVar9 = *plVar22;
    puVar18 = *(undefined8 **)(lVar9 + 0x180);
    uVar19 = (longlong)*(int *)(lVar9 + 0x188) & 0x1fffffffffffffff;
    if (puVar18 + *(int *)(lVar9 + 0x188) < puVar18) {
      uVar19 = uVar16;
    }
    if (uVar19 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar18 + 0x288))();
        uVar16 = uVar16 + 1;
        puVar18 = puVar18 + 1;
      } while (uVar16 != uVar19);
    }
    local_f0 = (longlong *)(lVar9 + 0x30);
    uStack_11c = 1;
    iVar6 = *(int *)(lVar9 + 0x58);
    puStack_118 = (uint *)(lVar9 + 0x40);
    local_120 = 0;
    iStack_10c = 0;
    iStack_108 = 0;
    if (iVar6 != 0) {
      puVar21 = *(uint **)(lVar9 + 0x50);
      if (*(uint **)(lVar9 + 0x50) == (uint *)0x0) {
        puVar21 = puStack_118;
      }
      uVar7 = *puVar21;
      iStack_108 = 0;
      local_120 = 0;
      while (uVar7 == 0) {
        lVar17 = (longlong)local_120;
        iStack_108 = iStack_108 + 0x20;
        iVar13 = local_120 + 1;
        bVar23 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_120;
        local_120 = iVar13;
        if (bVar23) goto LAB_143101005;
        uVar7 = puVar21[lVar17 + 1];
      }
      uStack_11c = uVar7 - 1 & uVar7 ^ uVar7;
      iVar13 = 0x1f;
      if (uStack_11c != 0) {
        for (; uStack_11c >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (uStack_11c == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      iStack_10c = (iStack_108 - iVar13) + 0x1f;
      if (iVar6 < iStack_10c) {
LAB_143101005:
        iStack_10c = iVar6;
      }
    }
    local_110 = 0xffffffff;
    uStack_80 = CONCAT44(iStack_10c,0xffffffff);
    auStack_d8._8_4_ = iStack_108;
    auStack_d8._0_8_ = uStack_80;
    auStack_d8._12_4_ = uStack_104;
    lStack_e8 = CONCAT44(uStack_11c,local_120);
    local_60 = '\0';
    cStack_5f = '\0';
    local_a8._8_4_ = SUB84(local_f0,0);
    local_a8._12_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
    local_78._8_4_ = local_a8._8_4_;
    local_78._0_8_ = auStack_d8._8_8_;
    local_78._12_4_ = local_a8._12_4_;
    local_a8._0_8_ = auStack_d8._8_8_;
    iVar13 = iStack_10c;
    puStack_e0 = puStack_118;
    local_98 = local_f0;
    uStack_90 = lStack_e8;
    local_88 = puStack_118;
    local_68 = local_f0;
    if (iStack_10c < iVar6) {
      do {
        uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
        pbVar1 = (byte *)(*(longlong *)((longlong)iVar13 * 0x20 + 8 + *local_98) + 0x24);
        *pbVar1 = *pbVar1 & 0xfe;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
        iVar13 = uStack_80._4_4_;
      } while (uStack_80._4_4_ < (int)local_88[6]);
      if ((local_60 != '\0') && (cStack_5f != '\0')) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
      }
    }
    *(undefined4 *)(lVar9 + 0x1a0) = 0;
    if (*(int *)(lVar9 + 0x1a4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar9 + 0x198,0);
    }
    TSet<TTuple<enum_AkGlobalCallbackLocation,TMulticastDelegate<void,AK::IAkGlobalPluginContext_*,enum_AkGlobalCallbackLocation>_>,TDefaultMapHashableKeyFuncs<enum_AkGlobalCallbackLocation,TMulticastDelegate<void,AK::IAkGlobalPluginContext_*,enum_AkGlobalCallbackLocation>,0>,FDefaultSetAllocator>
    ::Empty(lVar9 + 0x108,0);
    param_1 = local_100;
    param_2 = local_128;
  }
  TSet<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x16);
  if (param_2 != 0) {
    local_128 = FUN_1428dfc70();
    local_98 = (longlong *)CONCAT44(local_98._4_4_,5);
    local_40 = '\0';
    local_f8 = param_2;
    FUN_14044bc80(&uStack_90,&local_f8,&local_128);
    FUN_14045a130(&local_98);
    if (local_78[4] == '\0') {
LAB_143101160:
      plVar14 = local_68;
      if (local_68 != (longlong *)0x0) {
        iVar6 = *(int *)((longlong)local_68 + 0xc);
        if (iVar6 < (int)DAT_1469e91c4) {
          uVar15 = iVar6 >> 0x1f & 0xffff;
          uVar7 = iVar6 + uVar15;
          lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
        }
        else {
          lVar9 = 0;
        }
        if (((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) &&
           (cVar5 = FUN_14252c130(local_68), cVar5 != '\0')) {
          (**(code **)(*param_1 + 0x2a0))(param_1,plVar14);
        }
      }
      lVar9 = uStack_90;
      uVar19 = uStack_80 & 0xffffffff;
      iVar6 = local_78._0_4_ + 1;
      if (iVar6 < (int)((uint)uStack_80 + local_58)) {
        lVar17 = (longlong)iVar6 * 8;
        iVar13 = local_58;
        do {
          if (iVar6 < (int)uVar19) {
            plVar14 = *(longlong **)(lVar17 + (longlong)local_88);
          }
          else {
            plVar14 = *(longlong **)
                       (CONCAT62(uStack_5e,CONCAT11(cStack_5f,local_60)) +
                       (longlong)(iVar6 - (int)uVar19) * 8);
          }
          local_78._8_4_ = local_78._8_4_ + 1;
          if (plVar14 != (longlong *)0x0) {
            lVar10 = AActor::GetLevel(plVar14);
            if (lVar10 != 0) {
              if (((ulonglong)local_98 & 1) != 0) {
                iVar13 = *(int *)((longlong)plVar14 + 0xc);
                if (iVar13 < (int)DAT_1469e91c4) {
                  uVar15 = iVar13 >> 0x1f & 0xffff;
                  uVar7 = iVar13 + uVar15;
                  lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                           (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
                }
                else {
                  lVar11 = 0;
                }
                if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_143101355;
              }
              if (((uint)local_98 >> 1 & 1) != 0) {
                cVar5 = FOutputDevice::CanBeUsedOnAnyThread(plVar14);
                if (cVar5 == '\0') goto LAB_143101355;
              }
              if (((uint)local_98 >> 2 & 1) != 0) {
                if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                  bVar23 = false;
                }
                else {
                  bVar23 = true;
                }
                piVar2 = *(int **)(lVar10 + 600);
                if (((*(longlong *)(lVar10 + 0xc0) == 0) ||
                    (piVar12 = (int *)UWorld::GetActiveLevelCollection(), piVar12 == (int *)0x0)) ||
                   (piVar2 == piVar12)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                if ((!bVar23) || (!bVar3)) goto LAB_143101355;
              }
              lVar10 = ULevel::GetWorld(lVar10);
              if (lVar10 == lVar9) {
                lVar10 = AActor::GetLevel(plVar14);
                if (lVar10 == *(longlong *)(lVar9 + 0x30)) goto LAB_1431013da;
                lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                    lVar10 + 0x88)) {
                  bVar23 = false;
                }
                else {
                  bVar23 = true;
                }
                if (!bVar23) goto LAB_1431013da;
              }
            }
LAB_143101355:
            uVar19 = uStack_80 & 0xffffffff;
            iVar13 = local_58;
          }
          iVar6 = iVar6 + 1;
          lVar17 = lVar17 + 8;
          if ((int)uVar19 + iVar13 <= iVar6) break;
        } while( true );
      }
      local_68 = (longlong *)0x0;
      local_78[4] = 1;
    }
LAB_14310137a:
    if (local_40 != '\0') {
      local_40 = 0;
      UWorld::RemoveOnActorSpawnedHandler(uStack_90,local_48);
      if (CONCAT62(uStack_5e,CONCAT11(cStack_5f,local_60)) != 0) {
        FMemory::Free();
      }
      if (local_88 != (uint *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
LAB_1431013da:
  bVar23 = local_78[4] != '\0';
  local_78._0_4_ = iVar6;
  param_1 = local_100;
  local_68 = plVar14;
  if (bVar23) goto LAB_14310137a;
  goto LAB_143101160;
}



// FUNCTION 143101400 FUN_143101400 body=262 status=ok
// SIG undefined FUN_143101400(void)

ulonglong FUN_143101400(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xb0,local_res8,param_2);
  plVar8 = (longlong *)0x0;
  if (local_res8[0] == -1) {
    plVar4 = (longlong *)&DAT_ffffffffffffffff;
    plVar5 = plVar8;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0xb0);
    plVar5 = plVar4 + (longlong)local_res8[0] * 3;
  }
  plVar7 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (((plVar7 != (longlong *)0x0) && (lVar2 = *plVar7, lVar2 != 0)) &&
     (plVar4 = (longlong *)(ulonglong)*(uint *)(lVar2 + 0x3c),
     *(uint *)(lVar2 + 0x3c) < *(uint *)(lVar2 + 0x48))) {
    plVar7 = *(longlong **)(param_1 + 0x38);
    plVar4 = (longlong *)(longlong)*(int *)(param_1 + 0x40);
    plVar5 = plVar7 + (longlong)plVar4;
    for (; plVar7 != plVar5; plVar7 = plVar7 + 1) {
      lVar3 = *plVar7;
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x30,local_res8,param_2);
      plVar6 = plVar8;
      if (local_res8[0] != -1) {
        plVar6 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar3 + 0x30));
      }
      plVar4 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar4 = plVar8;
      }
      if ((plVar4 != (longlong *)0x0) && (lVar3 = *plVar4, lVar3 != 0)) {
        uVar1 = *(uint *)(lVar2 + 0x44);
        plVar4 = (longlong *)(ulonglong)uVar1;
        if (uVar1 < *(uint *)(lVar3 + 0x10)) {
          return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        }
      }
    }
  }
  return (ulonglong)plVar4 & 0xffffffffffffff00;
}



// FUNCTION 143101510 Log body=122 status=ok
// SIG undefined Log(void)

void FStreamingLevelActorListCollection::Log(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x88) * 0x20 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
    uVar1 = FName::ToString(lVar2,local_18);
    FUN_143101590(param_2,uVar1,lVar2 + 8);
  }
  return;
}



// FUNCTION 143101590 FUN_143101590 body=1603 status=ok
// SIG undefined FUN_143101590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143101590(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 **ppuVar3;
  void *_Src;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 auStack_168 [32];
  undefined2 *local_148;
  int local_140;
  int local_13c;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 *puStack_120;
  int local_118;
  int iStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  int local_108 [2];
  void *local_100;
  int local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong local_98 [2];
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_138 = param_1;
  local_f0 = param_2;
  if ((*param_3 == 0) || ((int)param_3[2] < 1)) {
    lVar9 = *param_2;
    goto LAB_143101bb0;
  }
  if ((int)param_2[1] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_2;
  }
  FString::PrintfImpl(&local_148,L"%s [%d Actors] ",puVar11);
  if (*(int *)(param_1 + 1) == 0) {
    lVar9 = *param_3;
    uVar17 = 0;
    plVar10 = (longlong *)(lVar9 + 0x20);
    plVar1 = (longlong *)(lVar9 + ((longlong)*(int *)(lVar9 + 8) + 4) * 8);
    uVar16 = (ulonglong)((longlong)plVar1 + (7 - (longlong)plVar10)) >> 3;
    if (plVar1 < plVar10) {
      uVar16 = uVar17;
    }
    param_1 = local_138;
    if (uVar16 != 0) {
      do {
        if (*plVar10 == 0) {
          local_128 = (undefined8 **)0x0;
          puStack_120 = (undefined1 *)0x5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
          FGenericPlatformString::Memcpy(local_128,&DAT_143f3edc8,10);
        }
        else {
          local_100 = *(void **)(*plVar10 + 0x18);
          FName::ToString(&local_100,&local_128);
        }
        ppuVar3 = local_128;
        iVar15 = local_140;
        iVar5 = 0;
        if ((int)puStack_120 != 0) {
          iVar5 = (int)puStack_120 + -1;
        }
        if (iVar5 != 0) {
          lVar9 = (longlong)local_140;
          local_140 = (uint)(local_140 == 0) + local_140 + iVar5;
          if (local_13c < local_140) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,iVar15);
          }
          puVar11 = local_148 + (lVar9 - (ulonglong)(iVar15 != 0));
          _guard_xfg_dispatch_icall_nop(puVar11,ppuVar3,(longlong)iVar5 * 2);
          puVar11[iVar5] = 0;
        }
        if (local_128 != (undefined8 **)0x0) {
          FMemory::Free();
        }
        iVar15 = local_140;
        lVar9 = (longlong)local_140;
        local_140 = (2 - (uint)(local_140 != 0)) + local_140;
        if (local_13c < local_140) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,iVar15);
        }
        plVar10 = plVar10 + 1;
        uVar17 = uVar17 + 1;
        local_148[lVar9 - (ulonglong)(iVar15 != 0)] = 0x20;
        (local_148 + (lVar9 - (ulonglong)(iVar15 != 0)))[1] = 0;
        param_2 = local_f0;
        param_1 = local_138;
      } while (uVar17 != uVar16);
    }
LAB_143101797:
  }
  else {
    if (1 < *(int *)(param_1 + 1) - 1U) goto LAB_143101797;
    lVar9 = *param_3;
    puVar7 = (undefined1 *)0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_78 = 0;
    plVar10 = (longlong *)(lVar9 + 0x20);
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    plVar1 = (longlong *)(lVar9 + ((longlong)*(int *)(lVar9 + 8) + 4) * 8);
    puVar14 = (undefined1 *)((ulonglong)((longlong)plVar1 + (7 - (longlong)plVar10)) >> 3);
    if (plVar1 < plVar10) {
      puVar14 = puVar7;
    }
    puVar18 = puVar7;
    iVar15 = 0;
    if (puVar14 != (undefined1 *)0x0) {
      do {
        local_138 = *(undefined8 **)(*plVar10 + 0x10);
        if ((*(int *)(param_1 + 1) == 2) && (local_138 != (undefined8 *)0x0)) {
          while ((*(uint *)((longlong)local_138 + 0xb4) >> 7 & 1) == 0) {
            lVar9 = local_138[6];
            lVar6 = FUN_1428dfc70();
            if ((lVar9 == lVar6) ||
               (local_138 = (undefined8 *)local_138[6], local_138 == (undefined8 *)0x0)) break;
          }
        }
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(local_98,local_108,local_138);
        if ((local_108[0] == -1) ||
           (lVar9 = local_98[0] + (longlong)local_108[0] * 0x18, lVar9 == 0)) {
          local_128 = &local_138;
          TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(local_98,&local_100,&local_128,0);
          lVar9 = local_98[0] + (longlong)(int)local_100 * 0x18;
        }
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        plVar10 = plVar10 + 1;
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar14);
      iVar15 = (int)local_70;
    }
    local_128 = (undefined8 **)0x100000000;
    puStack_120 = local_88;
    iStack_114 = 0;
    uStack_110 = 0;
    if (iVar15 != 0) {
      puVar14 = local_88;
      if (local_78 != 0) {
        puVar14 = puVar7;
      }
      uVar4 = *(uint *)((ulonglong)puVar14 | local_78);
      puVar18 = puVar7;
      while (uVar4 == 0) {
        iVar5 = (int)puVar7;
        uStack_110 = (int)puVar18 + 0x20;
        puVar18 = (undefined1 *)(ulonglong)uStack_110;
        puVar7 = (undefined1 *)(ulonglong)(iVar5 + 1U);
        uVar16 = (ulonglong)local_128 >> 0x20;
        local_128 = (undefined8 **)CONCAT44((int)uVar16,iVar5 + 1U);
        iStack_114 = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1431019ea;
        uVar4 = ((uint *)((ulonglong)puVar14 | local_78))[(longlong)iVar5 + 1];
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      local_128 = (undefined8 **)CONCAT44(uVar4,SUB84(local_128,0));
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_114 = (uStack_110 - iVar5) + 0x1f;
      if (iVar15 < iStack_114) {
        iStack_114 = iVar15;
      }
    }
LAB_1431019ea:
    uStack_d0 = CONCAT44(iStack_114,0xffffffff);
    local_c8 = CONCAT44(uStack_10c,uStack_110);
    local_c0 = local_98;
    local_118 = -1 << ((byte)iVar15 & 0x1f);
    uStack_b8 = local_128;
    ppuVar3 = uStack_b8;
    uStack_b8._0_4_ = SUB84(local_128,0);
    uStack_b8._4_4_ = (uint)((ulonglong)local_128 >> 0x20);
    uStack_e0 = (undefined4)uStack_b8;
    uStack_dc = uStack_b8._4_4_;
    iStack_114 = iVar15;
    local_d8 = puStack_120;
    uStack_b8 = ppuVar3;
    puStack_b0 = puStack_120;
    uStack_a8 = uStack_d0;
    uStack_a0 = local_c8;
    local_e8 = local_c0;
    while( true ) {
      lVar9 = (longlong)uStack_d0._4_4_;
      if (((uStack_d0._4_4_ == iVar15) && (local_d8 == local_88)) && (local_e8 == local_98)) break;
      lVar6 = *local_e8;
      lVar2 = *(longlong *)(lVar6 + lVar9 * 0x18);
      if (lVar2 == 0) {
        local_138 = (undefined8 *)0x0;
        local_130 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
        FGenericPlatformString::Memcpy(local_138,&DAT_143f3edc8,10);
      }
      else {
        local_128 = *(undefined8 ***)(lVar2 + 0x18);
        FName::ToString(&local_128,&local_138);
      }
      puVar12 = (undefined8 *)&DAT_143f3eda8;
      if ((int)local_130 != 0) {
        puVar12 = local_138;
      }
      FString::PrintfImpl(&local_100,L"%s:[%d] ",puVar12,*(undefined4 *)(lVar6 + lVar9 * 0x18 + 8));
      _Src = local_100;
      iVar5 = local_140;
      iVar8 = 0;
      if (local_f8 != 0) {
        iVar8 = local_f8 + -1;
      }
      if (iVar8 != 0) {
        lVar9 = (longlong)local_140;
        local_140 = (uint)(local_140 == 0) + local_140 + iVar8;
        if (local_13c < local_140) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,iVar5);
        }
        puVar11 = local_148 + (lVar9 - (ulonglong)(iVar5 != 0));
        _guard_xfg_dispatch_icall_nop(puVar11,_Src,(longlong)iVar8 * 2);
        puVar11[iVar8] = 0;
      }
      if (local_100 != (void *)0x0) {
        FMemory::Free(local_100);
      }
      if (local_138 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_dc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_98);
    param_2 = local_f0;
  }
  puVar11 = &DAT_143f3eda8;
  puVar13 = &DAT_143f3eda8;
  if (local_140 != 0) {
    puVar13 = local_148;
  }
  if (*(int *)(param_1 + 3) != 0) {
    puVar11 = (undefined2 *)param_1[2];
  }
  FOutputDevice::LogfImpl(*param_1,L"%s%s",puVar11,puVar13);
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar9 = *param_2;
LAB_143101bb0:
  if (lVar9 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143101be0 FUN_143101be0 body=780 status=ok
// SIG undefined FUN_143101be0(void)

void FUN_143101be0(undefined4 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  void *_Src;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 local_res8;
  undefined8 local_res10;
  ulonglong local_res18;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  undefined8 local_40;
  
  local_res10 = param_2;
  FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)(float)param_1[2],
                      (double)(float)param_1[3],(double)(float)param_1[4]);
  puVar9 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar9 = local_48;
  }
  FOutputDevice::LogfImpl
            (param_2,
             L"  LastPreReplicationFrame: %d. ForceNetUpdateFrame: %d. WorldLocation: %s. bWantsToBeDormant %d"
             ,*param_1,param_1[1],puVar9,*(undefined1 *)(param_1 + 5));
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)FUN_1430fcc40(param_1 + 0xc,&local_48);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar4;
  }
  FOutputDevice::LogfImpl(param_2,L"  Settings: %s",puVar9);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (0 < (int)param_1[10]) {
    uVar10 = 0;
    local_48 = (undefined2 *)0x0;
    local_40 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar9 = local_48;
    FGenericPlatformString::Memcpy(local_48,L"DependentActors: ",0x24);
    lVar5 = *(longlong *)(param_1 + 6);
    plVar12 = (longlong *)(lVar5 + 0x20);
    plVar1 = (longlong *)(lVar5 + ((longlong)*(int *)(lVar5 + 8) + 4) * 8);
    uVar7 = (ulonglong)((longlong)plVar1 + (7 - (longlong)plVar12)) >> 3;
    if (plVar1 < plVar12) {
      uVar7 = uVar10;
    }
    local_res18 = uVar7;
    if (uVar7 != 0) {
      do {
        if (*plVar12 == 0) {
          local_68 = (void *)0x0;
          local_60 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          FGenericPlatformString::Memcpy(local_68,&DAT_143f3edc8,10);
        }
        else {
          local_res8 = *(undefined8 *)(*plVar12 + 0x18);
          FName::ToString(&local_res8,&local_68);
        }
        local_50 = (int)local_60;
        bVar13 = (int)local_60 != 0;
        iVar11 = local_60._4_4_;
        local_58 = local_68;
        local_68 = (void *)0x0;
        local_4c = local_60._4_4_;
        local_60 = 0;
        iVar8 = (2 - (uint)bVar13) + local_50;
        if (iVar11 < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,iVar8);
        }
        iVar11 = local_50 + -1;
        if (local_50 < 1) {
          iVar11 = 0;
        }
        local_50 = (local_50 < 1) + 1 + local_50;
        if (local_4c < local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
        }
        uVar2 = local_40;
        _Src = local_58;
        *(undefined4 *)((longlong)local_58 + (longlong)iVar11 * 2) = 0x20;
        if ((local_50 != 0) && (iVar11 = local_50 + -1, iVar11 != 0)) {
          iVar8 = (int)local_40;
          lVar5 = (longlong)(int)local_40;
          iVar3 = (uint)((int)local_40 == 0) + (int)local_40 + iVar11;
          local_40 = CONCAT44(local_40._4_4_,iVar3);
          if (local_40._4_4_ < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar2 & 0xffffffff);
            puVar9 = local_48;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar9 + (lVar5 - (ulonglong)(iVar8 != 0)),_Src,(longlong)iVar11 * 2);
          (puVar9 + (lVar5 - (ulonglong)(iVar8 != 0)))[iVar11] = 0;
          uVar7 = local_res18;
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
        if (local_68 != (void *)0x0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar7);
    }
    puVar6 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar6 = puVar9;
    }
    FOutputDevice::LogfImpl(local_res10,L"  %s",puVar6);
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
  }
  return;
}



// FUNCTION 143101ef0 FUN_143101ef0 body=786 status=ok
// SIG undefined FUN_143101ef0(void)

void FUN_143101ef0(longlong param_1,undefined8 *param_2)

{
  wchar_t **ppwVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  undefined8 local_res18;
  longlong *local_res20;
  wchar_t *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68 [2];
  longlong local_58 [3];
  
  puVar7 = *(undefined8 **)(param_1 + 0x88);
  uVar12 = 0;
  uVar15 = (longlong)*(int *)(param_1 + 0x90) & 0x1fffffffffffffff;
  if (puVar7 + *(int *)(param_1 + 0x90) < puVar7) {
    uVar15 = uVar12;
  }
  if (uVar15 != 0) {
    do {
      plVar8 = (longlong *)*puVar7;
      lVar3 = *plVar8;
      uVar6 = (**(code **)(lVar3 + 0x2b0))(plVar8,&local_78);
      (**(code **)(lVar3 + 0x2a8))(plVar8,param_2,uVar6);
      if (local_78 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar7 = puVar7 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar15);
  }
  plVar8 = *(longlong **)(param_1 + 0x38);
  local_res20 = plVar8 + *(int *)(param_1 + 0x40);
  if (plVar8 != local_res20) {
    ppwVar1 = (wchar_t **)(param_2 + 2);
    do {
      lVar3 = *plVar8;
      local_res18 = *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x1830);
      puVar7 = (undefined8 *)FName::ToString(&local_res18,local_68);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(&local_78,L"Connection: %s",puVar14);
      puVar14 = &DAT_143f3eda8;
      if (local_70 != 0) {
        puVar14 = local_78;
      }
      if (*(int *)(param_2 + 3) == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = *ppwVar1;
      }
      FOutputDevice::LogfImpl(*param_2,L"%s%s",pwVar16,puVar14);
      if (local_78 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      _Src = (void *)param_2[4];
      iVar9 = *(int *)(param_2 + 5) + -1;
      if (*(int *)(param_2 + 5) == 0) {
        iVar9 = 0;
      }
      if (iVar9 != 0) {
        iVar2 = *(int *)(param_2 + 3);
        iVar5 = (uint)(iVar2 == 0) + iVar2 + iVar9;
        *(int *)(param_2 + 3) = iVar5;
        if (*(int *)((longlong)param_2 + 0x1c) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(ppwVar1,iVar2);
        }
        pwVar16 = *ppwVar1;
        _guard_xfg_dispatch_icall_nop
                  (pwVar16 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)),_Src,(longlong)iVar9 * 2);
        (pwVar16 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)))[iVar9] = L'\0';
      }
      puVar7 = *(undefined8 **)(lVar3 + 0x180);
      uVar12 = 0;
      uVar15 = (longlong)*(int *)(lVar3 + 0x188) & 0x1fffffffffffffff;
      if (puVar7 + *(int *)(lVar3 + 0x188) < puVar7) {
        uVar15 = uVar12;
      }
      if (uVar15 != 0) {
        do {
          plVar4 = (longlong *)*puVar7;
          lVar3 = *plVar4;
          uVar6 = (**(code **)(lVar3 + 0x2b0))(plVar4,local_58);
          (**(code **)(lVar3 + 0x2a8))(plVar4,param_2,uVar6);
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          puVar7 = puVar7 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar15);
      }
      iVar2 = *(int *)(param_2 + 3);
      iVar9 = *(int *)(param_2 + 5) + -1;
      if (*(int *)(param_2 + 5) == 0) {
        iVar9 = 0;
      }
      if (iVar2 == 0) {
        pwVar16 = L"";
        iVar5 = -1;
      }
      else {
        pwVar16 = *ppwVar1;
        iVar5 = iVar2 + -1;
      }
      iVar10 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      if (iVar2 == 0) {
        iVar10 = 0;
      }
      iVar5 = iVar5 - iVar9;
      if (iVar5 < 0) {
        iVar10 = 0;
      }
      else if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
      local_88 = (wchar_t *)0x0;
      uVar11 = iVar10 + 1;
      if (iVar10 == 0) {
        uVar11 = 0;
      }
      pwVar13 = (wchar_t *)0x0;
      local_80 = (ulonglong)uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        pwVar13 = local_88;
        uVar11 = (uint)local_80;
        if (0 < (int)(uint)local_80) {
          wcsncpy(local_88,pwVar16,(longlong)iVar10);
          pwVar13[iVar10] = L'\0';
        }
      }
      if (ppwVar1 == &local_88) {
        if (pwVar13 != (wchar_t *)0x0) {
          FMemory::Free(pwVar13);
        }
      }
      else {
        if (*ppwVar1 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *ppwVar1 = pwVar13;
        *(uint *)(param_2 + 3) = uVar11;
        *(undefined4 *)((longlong)param_2 + 0x1c) = local_80._4_4_;
        local_80 = 0;
        local_88 = (wchar_t *)0x0;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != local_res20);
  }
  return;
}



// FUNCTION 143102210 FUN_143102210 body=569 status=ok
// SIG undefined FUN_143102210(void)

void FUN_143102210(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_68;
  ulonglong local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_58 = -1;
  local_68 = 0;
  local_60 = 0;
  uVar2 = FUN_14310ed90();
  FUN_1417a5560(uVar2,&local_68,1,0x10,0);
  uVar5 = local_60 & 0xffffffff;
  do {
    local_58 = local_58 + 1;
    lVar3 = local_68;
    if ((int)local_60 <= local_58) break;
  } while (*(longlong *)(local_68 + (longlong)local_58 * 8) == 0);
LAB_143102290:
  lVar6 = 0;
  if ((local_58 < 0) || (lVar6 = 0, (int)uVar5 <= local_58)) goto LAB_1431022f0;
  if (*(longlong *)(*(longlong *)(lVar3 + (longlong)local_58 * 8) + 0x30) != 0) {
    iVar1 = UNetDriver::GetNetMode();
    lVar3 = local_68;
    if (iVar1 != 3) {
      lVar6 = *(longlong *)(local_68 + (longlong)local_58 * 8);
LAB_1431022f0:
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
      if (lVar6 != 0) {
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 3;
        local_50 = param_1;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_30,0);
        FGenericPlatformString::Memcpy(local_30,&DAT_144fe1610,6);
        lVar3 = FUN_1430f7920(param_2,0);
        if (lVar3 == 0) {
          lVar3 = *param_2;
          lVar4 = (longlong)(int)param_2[1] * 0x10 + lVar3;
          for (; lVar3 != lVar4; lVar3 = lVar3 + 0x10) {
            iVar1 = FUN_141592950(lVar3,L"class",1,0,0xffffffff);
            if (iVar1 != -1) {
              if (lVar3 != 0) {
                local_48 = 1;
                goto LAB_143102408;
              }
              break;
            }
          }
          lVar3 = *param_2;
          lVar4 = (longlong)(int)param_2[1] * 0x10 + lVar3;
          for (; lVar3 != lVar4; lVar3 = lVar3 + 0x10) {
            iVar1 = FUN_141592950(lVar3,&DAT_145ac0910,1,0,0xffffffff);
            if (iVar1 != -1) {
              local_48 = 3;
              if (lVar3 != 0) goto LAB_143102408;
              break;
            }
          }
          local_48 = 0;
        }
        else {
          local_48 = 2;
        }
LAB_143102408:
        FUN_143101ef0(lVar6,&local_50);
        if (local_30 != 0) {
          FMemory::Free();
        }
        if (local_40 != 0) {
          FMemory::Free();
        }
      }
      return;
    }
    uVar5 = local_60 & 0xffffffff;
  }
  do {
    local_58 = local_58 + 1;
    if ((int)uVar5 <= local_58) break;
  } while (*(longlong *)(lVar3 + (longlong)local_58 * 8) == 0);
  goto LAB_143102290;
}



// FUNCTION 143102450 FUN_143102450 body=223 status=ok
// SIG undefined FUN_143102450(void)

void FUN_143102450(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong local_28 [2];
  
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 3) != 0) {
    puVar5 = (undefined2 *)param_2[2];
  }
  FOutputDevice::LogfImpl(*param_2,L"%s%s",puVar5,puVar6);
  FUN_140e02840(param_2);
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  uVar4 = 0;
  uVar7 = (longlong)*(int *)(param_1 + 0x30) & 0x1fffffffffffffff;
  if (puVar8 + *(int *)(param_1 + 0x30) < puVar8) {
    uVar7 = uVar4;
  }
  if (uVar7 != 0) {
    do {
      plVar1 = (longlong *)*puVar8;
      lVar2 = *plVar1;
      uVar3 = (**(code **)(lVar2 + 0x2b0))(plVar1,local_28);
      (**(code **)(lVar2 + 0x2a8))(plVar1,param_2,uVar3);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      puVar8 = puVar8 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar7);
  }
  FUN_140e020c0(param_2);
  return;
}



// FUNCTION 143102530 LogNode body=177 status=ok
// SIG undefined LogNode(void)

void UReplicationGraphNode_ActorList::LogNode
               (longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar1 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 3) != 0) {
    puVar1 = (undefined2 *)param_2[2];
  }
  FOutputDevice::LogfImpl(*param_2,L"%s%s",puVar1,puVar2);
  FUN_140e02840(param_2);
  local_10 = 6;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"World",0xc);
  FUN_143101590(param_2,&local_18,param_1 + 0xa0);
  FStreamingLevelActorListCollection::Log(param_1 + 0xb8,param_2);
  FUN_140e020c0(param_2);
  return;
}



// FUNCTION 1431025f0 LogNode body=309 status=ok
// SIG undefined LogNode(void)

void UReplicationGraphNode_ActorListFrequencyBuckets::LogNode
               (longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 local_28 [16];
  
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 3) != 0) {
    puVar5 = (undefined2 *)param_2[2];
  }
  FOutputDevice::LogfImpl(*param_2,L"%s%s",puVar5,puVar6);
  FUN_140e02840(param_2);
  iVar2 = 0;
  lVar4 = *(longlong *)(param_1 + 0xd8);
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    lVar4 = param_1 + 0xa8;
  }
  lVar3 = lVar4 + (longlong)*(int *)(param_1 + 0xe0) * 0x18;
  for (; lVar4 != lVar3; lVar4 = lVar4 + 0x18) {
    iVar2 = iVar2 + 1;
    FString::PrintfImpl(local_28,L"World Bucket %d",iVar2);
    FUN_143101590(param_2,local_28,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    lVar4 = param_1 + 0xe8;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x170) * 0x20 + lVar4;
  for (; lVar4 != lVar3; lVar4 = lVar4 + 0x20) {
    uVar1 = FName::ToString(lVar4,local_28);
    FUN_143101590(param_2,uVar1,lVar4 + 8);
  }
  FUN_140e020c0(param_2);
  return;
}



// FUNCTION 143102730 FUN_143102730 body=503 status=ok
// SIG undefined FUN_143102730(void)

void FUN_143102730(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  undefined8 local_20;
  
  puVar1 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 3) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_2[2];
  }
  FOutputDevice::LogfImpl(*param_2,L"%s%s",puVar2,puVar3);
  FUN_140e02840(param_2);
  local_20 = 7;
  local_28 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar3 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Static",0xe);
  puVar2 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar2 = puVar3;
  }
  if (*(int *)(param_2 + 3) != 0) {
    puVar1 = (undefined2 *)param_2[2];
  }
  FOutputDevice::LogfImpl(*param_2,L"%s%s",puVar1,puVar2);
  FUN_140e02840(param_2);
  local_28 = (undefined2 *)0x0;
  local_20 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"World",0xc);
  FUN_143101590(param_2,&local_28,param_1 + 0xa0);
  FStreamingLevelActorListCollection::Log(param_1 + 0xb8,param_2);
  FUN_140e020c0(param_2);
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    local_28 = (undefined2 *)0x0;
    local_20 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"Dynamic",0x10);
    (**(code **)(**(longlong **)(param_1 + 0x148) + 0x2a8))
              (*(longlong **)(param_1 + 0x148),param_2,&local_28);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    local_28 = (undefined2 *)0x0;
    local_20 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"Dormant",0x10);
    (**(code **)(**(longlong **)(param_1 + 0x150) + 0x2a8))
              (*(longlong **)(param_1 + 0x150),param_2,&local_28);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_140e020c0(param_2);
  return;
}



// FUNCTION 143102930 LogNode body=162 status=ok
// SIG undefined LogNode(void)

void UReplicationGraphNode_TearOff_ForConnection::LogNode
               (longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar1 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 3) != 0) {
    puVar1 = (undefined2 *)param_2[2];
  }
  FOutputDevice::LogfImpl(*param_2,L"%s%s",puVar1,puVar2);
  FUN_140e02840(param_2);
  local_10 = 8;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"TearOff",0x10);
  FUN_143101590(param_2,&local_18,param_1 + 0xb0);
  FUN_140e020c0(param_2);
  return;
}



// FUNCTION 1431029e0 FUN_1431029e0 body=650 status=ok
// SIG undefined FUN_1431029e0(void)

undefined8 *
FUN_1431029e0(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b50170) && (_Init_thread_header(&DAT_146b50170), DAT_146b50170 == -1))
  {
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,&DAT_146b50130);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_143f3f130;
    }
    DAT_146b50120 =
         UE4Function_Private::
         TFunctionRefCaller<<lambda_88a6f01829a85076e3eb767797953bd0>,void___cdecl(void)>::Call;
    atexit(`LogPrioritizedListHelper'::`2'::_dynamic_atexit_destructor_for__ResetFunc__);
    _Init_thread_footer(&DAT_146b50170);
  }
  lVar2 = RepGraphDebugging::FindReplicationGraphHelper();
  uVar9 = DAT_146b50110;
  if (lVar2 != 0) {
    if (0 < (int)param_3[1]) {
      if (*(int *)((undefined8 *)*param_3 + 1) == 0) {
        DAT_146b50174 = _wtoi(L"");
      }
      else {
        DAT_146b50174 = _wtoi(*(wchar_t **)*param_3);
      }
    }
    uVar9 = DAT_146b50110;
    if ((-1 < DAT_146b50174) && (DAT_146b50174 < *(int *)(lVar2 + 0x40))) {
      uVar9 = 0;
      uVar3 = uVar9;
      if (DAT_146b50160 != 0) {
        plVar8 = DAT_146b50150;
        if (DAT_146b50150 == (longlong *)0x0) {
          plVar8 = (longlong *)&DAT_146b50130;
        }
        if (plVar8 != (longlong *)0x0) {
          uVar3 = (**(code **)(*plVar8 + 8))();
        }
      }
      (*DAT_146b50120)(uVar3);
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + (longlong)DAT_146b50174 * 8);
      FWeakObjectPtr::operator=(&DAT_1467bc430,lVar2);
      uStack_20 = CONCAT31(uStack_20._1_3_,param_4);
      plVar8 = (longlong *)(lVar2 + 0xd8);
      local_28 = param_2;
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_GetPoolName_145ac09b8;
        *(undefined4 *)(plVar4 + 1) = (undefined4)local_28;
        *(undefined4 *)((longlong)plVar4 + 0xc) = local_28._4_4_;
        *(undefined4 *)(plVar4 + 2) = uStack_20;
        *(undefined4 *)((longlong)plVar4 + 0x14) = uStack_1c;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar5;
        *plVar4 = (longlong)&PTR_GetPoolName_145ac0a00;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_28);
        iVar1 = *(int *)(lVar2 + 0xe0);
        uVar9 = *puVar6;
        *(int *)(lVar2 + 0xe0) = iVar1 + 1;
        if (*(int *)(lVar2 + 0xe4) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
        *puVar6 = plVar4;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
    }
  }
  DAT_146b50110 = uVar9;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (DAT_146b50160 != 0) {
    plVar8 = DAT_146b50150;
    if (DAT_146b50150 == (longlong *)0x0) {
      plVar8 = (longlong *)&DAT_146b50130;
    }
    if (plVar8 != (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)*plVar8)(plVar8,param_1 + 2);
      (**(code **)(*plVar8 + 8))(plVar8);
      pcVar7 = DAT_146b50120;
      goto LAB_143102be9;
    }
  }
  pcVar7 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_143102be9:
  *param_1 = pcVar7;
  return param_1;
}



// FUNCTION 143102c70 FUN_143102c70 body=568 status=ok
// SIG undefined FUN_143102c70(void)

void FUN_143102c70(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int local_res8 [2];
  undefined8 local_res10;
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong **local_50;
  longlong *local_48;
  longlong *local_40;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  local_res10 = param_2;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8,param_2);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (local_res8[0] != -1) {
    plVar5 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar1);
  }
  plVar7 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x28);
    plVar7 = plVar8;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = FUN_140decfc0(*(undefined8 *)(param_1 + 0xd0),&local_res10);
      *(byte *)((longlong)plVar5 + 0x24) = *(byte *)((longlong)plVar5 + 0x24) & 0xfc;
      plVar5[1] = 0;
      plVar5[2] = 1;
      *plVar5 = 0;
      plVar5[3] = 0;
      *(undefined4 *)(plVar5 + 4) = 0;
      *(undefined4 *)(plVar5 + 2) = *(undefined4 *)(lVar6 + 0x3c);
      *(undefined4 *)(plVar5 + 1) = *(undefined4 *)(lVar6 + 0x38);
      plVar7 = plVar5;
    }
    local_68 = plVar7;
    plVar5 = (longlong *)operator_new(0x18);
    local_60 = plVar8;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_144576340;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)plVar7;
      local_60 = plVar5;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_68,plVar7,plVar7);
    local_58 = &local_res10;
    local_50 = &local_68;
    FUN_140dd9ec0(plVar1,local_res20,&local_58,0);
    plVar5 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  else {
    plVar7 = (longlong *)*plVar7;
  }
  if ((*plVar7 != 0) && (param_3 != *plVar7)) {
    TSet<TTuple<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x80);
  }
  *plVar7 = param_3;
  local_70 = param_3;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res18,local_res10);
  plVar5 = plVar8;
  if (local_res18[0] != -1) {
    plVar5 = (longlong *)((longlong)local_res18[0] * 0x20 + *plVar1);
  }
  local_40 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    local_40 = plVar8;
  }
  if (local_40 != (longlong *)0x0) {
    local_48 = &local_70;
    FUN_1427ec9a0(param_1 + 0x80,local_78,&local_48,0);
  }
  return;
}



// FUNCTION 143102eb0 FUN_143102eb0 body=128 status=ok
// SIG undefined FUN_143102eb0(void)

void FUN_143102eb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res10 [6];
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res10,param_2);
    puVar4 = (undefined8 *)0x0;
    if (local_res10[0] != -1) {
      puVar4 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *plVar1);
    }
    puVar3 = puVar4 + 1;
    if (puVar4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    if ((puVar3 != (undefined8 *)0x0) && (plVar2 = (longlong *)*puVar3, plVar2 != (longlong *)0x0))
    {
      if (param_2 == *plVar2) {
        *plVar2 = 0;
        *(undefined4 *)((longlong)plVar2 + 0xc) = 0;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
      }
      TSet<TTuple<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
      ::Remove(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 143102f30 FUN_143102f30 body=626 status=ok
// SIG undefined FUN_143102f30(void)

void FUN_143102f30(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong local_res8;
  int local_res10 [2];
  
  local_res8 = param_1;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xb0,local_res10,param_2);
  plVar13 = (longlong *)0x0;
  plVar10 = plVar13;
  if (local_res10[0] != -1) {
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)local_res10[0] * 0x18);
  }
  plVar7 = plVar10 + 1;
  if (plVar10 == (longlong *)0x0) {
    plVar7 = plVar13;
  }
  if ((plVar7 != (longlong *)0x0) && (lVar2 = *plVar7, lVar2 != 0)) {
    iVar9 = *(int *)(param_2 + 0xc);
    plVar10 = plVar13;
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar12 = iVar9 >> 0x1f & 0xffff;
      uVar5 = iVar9 + uVar12;
      plVar10 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18);
    }
    if (((*(uint *)(plVar10 + 1) >> 0x1d & 1) == 0) && ((*(byte *)(param_2 + 0x94) & 2) == 0)) {
      if (iVar9 < (int)DAT_1469e91c4) {
        uVar12 = iVar9 >> 0x1f & 0xffff;
        uVar5 = iVar9 + uVar12;
        plVar13 = (longlong *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18);
      }
      if ((*(uint *)(plVar13 + 1) >> 0x1d & 1) == 0) {
        bVar1 = *(byte *)(param_2 + 0x129);
        bVar3 = false;
        *(bool *)(lVar2 + 0x14) = 1 < bVar1;
        *(int *)(lVar2 + 100) = *(int *)(lVar2 + 100) + 1;
        iVar9 = *(int *)(lVar2 + 100);
        iVar6 = *(int *)(lVar2 + 0x58) + -1;
        lVar15 = (longlong)iVar6;
        if (-1 < iVar6) {
          lVar14 = lVar15 << 4;
          bVar3 = false;
          do {
            if (((*(int *)(lVar14 + 8 + *(longlong *)(lVar2 + 0x50)) == 0) ||
                (plVar13 = *(longlong **)(lVar14 + *(longlong *)(lVar2 + 0x50)),
                plVar13 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar13 + 0x40))(plVar13,param_2,lVar2,bVar1,param_3),
               cVar4 == '\0')) {
              bVar3 = true;
            }
            lVar14 = lVar14 + -0x10;
            lVar15 = lVar15 + -1;
          } while (-1 < lVar15);
          iVar9 = *(int *)(lVar2 + 100);
        }
        *(int *)(lVar2 + 100) = iVar9 + -1;
        if (bVar3) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x50,0);
        }
        if ((bVar1 < 2) && (1 < param_3)) {
          plVar7 = (longlong *)0x0;
          plVar13 = *(longlong **)(local_res8 + 0x38);
          plVar10 = (longlong *)((longlong)*(int *)(local_res8 + 0x40) & 0x1fffffffffffffff);
          if (plVar13 + *(int *)(local_res8 + 0x40) < plVar13) {
            plVar10 = plVar7;
          }
          plVar16 = plVar7;
          if (plVar10 != (longlong *)0x0) {
            do {
              lVar15 = *plVar13;
              TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::FindId(lVar15 + 0x30,&local_res8,param_2);
              plVar11 = plVar7;
              if ((int)local_res8 != -1) {
                plVar11 = (longlong *)
                          ((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar15 + 0x30));
              }
              plVar8 = plVar11 + 1;
              if (plVar11 == (longlong *)0x0) {
                plVar8 = plVar7;
              }
              if ((plVar8 != (longlong *)0x0) && (lVar15 = *plVar8, lVar15 != 0)) {
                *(byte *)(lVar15 + 0x24) = *(byte *)(lVar15 + 0x24) & 0xfe;
                *(undefined4 *)(lVar15 + 8) = *(undefined4 *)(lVar2 + 0x38);
              }
              plVar13 = plVar13 + 1;
              plVar16 = (longlong *)((longlong)plVar16 + 1);
            } while (plVar16 != plVar10);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1431031b0 FUN_1431031b0 body=667 status=ok
// SIG undefined FUN_1431031b0(void)

void FUN_1431031b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res10 [3];
  longlong local_40;
  
  lVar4 = *(longlong *)(param_2 + 0x20);
  plVar8 = (longlong *)0x0;
  local_40 = 0;
  local_res10[0] = param_2;
  if (lVar4 != 0) {
    lVar3 = FUN_1429a0270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = ULevel::IsPersistentLevel(lVar4), cVar2 == '\0')) {
      lVar4 = UObjectBaseUtility::GetOutermost(lVar4);
      local_40 = *(longlong *)(lVar4 + 0x18);
    }
  }
  local_res10[1] = 0;
  if (local_40 == 0) {
    plVar8 = (longlong *)(param_1 + 0xa0);
    iVar9 = *(int *)(param_1 + 0xb0);
    if (-1 < iVar9 + -1) {
      lVar4 = (longlong)(iVar9 + -1);
      plVar7 = (longlong *)(*plVar8 + 0x20 + lVar4 * 8);
      do {
        if (*plVar7 == param_2) {
          return;
        }
        plVar7 = plVar7 + -1;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    if (iVar9 == *(int *)(param_1 + 0xb4)) {
      FActorRepListRefView::RequestNewList
                (plVar8,*(int *)(param_1 + 0xb4) + 1,CONCAT71((uint7)(uint3)((uint)iVar9 >> 8),1));
      iVar9 = *(int *)(param_1 + 0xb0);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar9 * 8) = param_2;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    *(int *)(*plVar8 + 8) = *(int *)(*plVar8 + 8) + 1;
    return;
  }
  iVar9 = *(int *)(param_1 + 0x140);
  plVar7 = (longlong *)(param_1 + 0xb8);
  plVar6 = *(longlong **)(param_1 + 0x138);
  if (*(longlong **)(param_1 + 0x138) == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  plVar5 = plVar6 + (longlong)iVar9 * 4;
  for (; plVar6 != plVar5; plVar6 = plVar6 + 4) {
    if (local_40 == *plVar6) {
      iVar9 = (int)plVar6[3];
      plVar8 = plVar6 + 1;
      if (iVar9 + -1 < 0) goto LAB_14310336f;
      lVar4 = (longlong)(iVar9 + -1);
      plVar7 = (longlong *)(*plVar8 + (lVar4 + 4) * 8);
      goto LAB_143103360;
    }
  }
  *(int *)(param_1 + 0x140) = iVar9 + 1;
  if (*(int *)(param_1 + 0x144) < iVar9 + 1) {
    TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(plVar7);
  }
  plVar6 = *(longlong **)(param_1 + 0x138);
  if (*(longlong **)(param_1 + 0x138) == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  plVar6 = plVar6 + (longlong)iVar9 * 4;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = local_40;
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    FActorRepListRefView::Reset(plVar6 + 1,4);
    plVar8 = plVar6;
  }
  iVar9 = (int)plVar8[3];
  if (iVar9 == *(int *)((longlong)plVar8 + 0x1c)) {
    FActorRepListRefView::RequestNewList(plVar8 + 1,*(int *)((longlong)plVar8 + 0x1c) + 1,1);
    iVar9 = (int)plVar8[3];
  }
  *(longlong *)(plVar8[2] + (longlong)iVar9 * 8) = param_2;
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  lVar4 = plVar8[1];
  goto LAB_1431033d1;
  while( true ) {
    plVar7 = plVar7 + -1;
    lVar4 = lVar4 + -1;
    if (lVar4 < 0) break;
LAB_143103360:
    if (*plVar7 == param_2) goto LAB_1431033d4;
  }
LAB_14310336f:
  if (iVar9 == *(int *)((longlong)plVar6 + 0x1c)) {
    FActorRepListRefView::RequestNewList
              (plVar8,*(int *)((longlong)plVar6 + 0x1c) + 1,
               CONCAT71((uint7)(uint3)((uint)iVar9 >> 8),1));
    iVar9 = (int)plVar6[3];
  }
  *(longlong *)(plVar6[2] + (longlong)iVar9 * 8) = param_2;
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  lVar4 = *plVar8;
LAB_1431033d1:
  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
LAB_1431033d4:
  plVar8 = *(longlong **)(param_1 + 0x1d0);
  if (*(longlong **)(param_1 + 0x1d0) == (longlong *)0x0) {
    plVar8 = (longlong *)(param_1 + 0x150);
  }
  plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x1d8) * 4;
  if (plVar8 != plVar7) {
    while (local_40 != *plVar8) {
      plVar8 = plVar8 + 4;
      if (plVar8 == plVar7) {
        return;
      }
    }
    FActorRepListRefView::PrepareForWrite(plVar8 + 1,0);
    FUN_140e04ba0(plVar8 + 1,local_res10);
  }
  return;
}



// FUNCTION 143103450 FUN_143103450 body=134 status=ok
// SIG undefined FUN_143103450(void)

void FUN_143103450(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res8 [8];
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  plVar3 = plVar2 + *(int *)(param_1 + 0x40);
  if (plVar2 != plVar3) {
    while (*(longlong *)(*plVar2 + 0x28) != param_3) {
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar3) {
        return;
      }
    }
    plVar3 = (longlong *)(*plVar2 + 0x30);
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(plVar3,local_res8,param_2);
    plVar2 = (longlong *)0x0;
    if (local_res8[0] != -1) {
      plVar2 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar3);
    }
    plVar3 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
      pbVar1 = (byte *)(*plVar3 + 0x24);
      *pbVar1 = *pbVar1 | 1;
    }
  }
  return;
}



// FUNCTION 1431034e0 FUN_1431034e0 body=414 status=ok
// SIG undefined FUN_1431034e0(void)

void FUN_1431034e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xb0,local_res8,param_2);
  plVar11 = (longlong *)0x0;
  plVar7 = plVar11;
  if (local_res8[0] != -1) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)local_res8[0] * 0x18);
  }
  plVar9 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar9 = plVar11;
  }
  if ((plVar9 != (longlong *)0x0) && (lVar1 = *plVar9, lVar1 != 0)) {
    fVar12 = (float)*(int *)(*(longlong *)(param_1 + 0x30) + 0x58) / *(float *)(param_2 + 0x140);
    uVar3 = (uint)(longlong)(float)((int)ROUND(fVar12 + fVar12 + 0.5) >> 1);
    uVar6 = 1;
    if (uVar3 != 0) {
      uVar6 = uVar3;
    }
    *(uint *)(lVar1 + 0x3c) = uVar6;
    *(uint *)(lVar1 + 0x44) = uVar6;
    if (0.0 < *(float *)(param_2 + 0x144)) {
      fVar12 = (float)*(int *)(*(longlong *)(param_1 + 0x30) + 0x58) / *(float *)(param_2 + 0x144);
      uVar4 = (uint)(longlong)(float)((int)ROUND(fVar12 + fVar12 + 0.5) >> 1);
      uVar3 = 1;
      if (uVar4 != 0) {
        uVar3 = uVar4;
      }
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
      *(uint *)(lVar1 + 0x48) = uVar3;
    }
    plVar7 = *(longlong **)(param_1 + 0x38);
    plVar9 = (longlong *)((longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff);
    if (plVar7 + *(int *)(param_1 + 0x40) < plVar7) {
      plVar9 = plVar11;
    }
    plVar10 = plVar11;
    if (plVar9 != (longlong *)0x0) {
      do {
        lVar2 = *plVar7;
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(lVar2 + 0x30,local_res8,param_2);
        plVar8 = plVar11;
        if (local_res8[0] != -1) {
          plVar8 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar2 + 0x30));
        }
        plVar5 = plVar8 + 1;
        if (plVar8 == (longlong *)0x0) {
          plVar5 = plVar11;
        }
        if ((plVar5 != (longlong *)0x0) && (*plVar5 != 0)) {
          *(undefined4 *)(*plVar5 + 0x10) = *(undefined4 *)(lVar1 + 0x3c);
        }
        plVar7 = plVar7 + 1;
        plVar10 = (longlong *)((longlong)plVar10 + 1);
      } while (plVar10 != plVar9);
    }
  }
  return;
}



// FUNCTION 143103680 FUN_143103680 body=533 status=ok
// SIG undefined FUN_143103680(void)

void FUN_143103680(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int local_res8 [2];
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  
  piVar7 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                            (param_1 + 0x2a,local_res8,param_2);
  if (*piVar7 != -1) {
    uVar10 = 0;
    plVar12 = (longlong *)param_1[7];
    uVar11 = (longlong)(int)param_1[8] & 0x1fffffffffffffff;
    if (plVar12 + (int)param_1[8] < plVar12) {
      uVar11 = uVar10;
    }
    if (uVar11 != 0) {
      do {
        lVar8 = *plVar12;
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(lVar8 + 0x30,local_res8,param_2);
        if (((((local_res8[0] != -1) &&
              (lVar9 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar8 + 0x30), lVar9 != 0)) &&
             (plVar1 = (longlong *)(lVar9 + 8), plVar1 != (longlong *)0x0)) &&
            (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) &&
           (((*plVar1 != 0 && (*(longlong *)(*plVar1 + 0x68) != 0)) ||
            (((*(byte *)((longlong)plVar1 + 0x24) & 2) == 0 &&
             ((*(int *)((longlong)plVar1 + 0x14) != 0 && ((*(byte *)(param_2 + 0x12) & 1) == 0))))))
           )) {
          bVar5 = *(byte *)((longlong)plVar1 + 0x24);
          if ((bVar5 & 1) != 0) {
            (**(code **)(*param_2 + 0x600))(param_2);
            bVar5 = *(byte *)((longlong)plVar1 + 0x24);
          }
          uVar2 = *(undefined4 *)((longlong)plVar1 + 0x14);
          *(byte *)((longlong)plVar1 + 0x24) = bVar5 | 2;
          lVar8 = *(longlong *)(lVar8 + 400);
          iVar3 = *(int *)(lVar8 + 0xa8);
          *(int *)(lVar8 + 0xa8) = iVar3 + 1;
          if (*(int *)(lVar8 + 0xac) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar8 + 0xa0,iVar3);
          }
          lVar8 = *(longlong *)(lVar8 + 0xa0);
          *(undefined4 *)(lVar8 + (longlong)iVar3 * 0x10) = uVar2;
          *(longlong **)(lVar8 + 8 + (longlong)iVar3 * 0x10) = param_2;
        }
        plVar12 = plVar12 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar11);
    }
    local_38 = param_2[2];
    local_40 = 0;
    lVar8 = param_2[4];
    local_48 = param_2;
    if (lVar8 != 0) {
      lVar9 = FUN_1429a0270();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (cVar6 = ULevel::IsPersistentLevel(lVar8), cVar6 == '\0')) {
        lVar8 = UObjectBaseUtility::GetOutermost(lVar8);
        local_40 = *(undefined8 *)(lVar8 + 0x18);
      }
    }
    (**(code **)(*param_1 + 0x330))(param_1,&local_48);
  }
  return;
}



// FUNCTION 1431038a0 FUN_1431038a0 body=259 status=ok
// SIG undefined FUN_1431038a0(void)

void FUN_1431038a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uStack_14;
  
  lVar3 = *(longlong *)(param_2 + 0x30);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (*(int *)(lVar4 + 0x1750) == *(int *)(lVar4 + 0x177c)) {
      return;
    }
    lVar6 = *(longlong *)(lVar4 + 0x1788);
    if (*(longlong *)(lVar4 + 0x1788) == 0) {
      lVar6 = lVar4 + 0x1780;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                             (longlong)*(int *)(lVar4 + 0x1790) - 1U) * 4);
    if (iVar5 == -1) {
      return;
    }
    while (*(longlong *)(*(longlong *)(lVar4 + 0x1748) + (longlong)iVar5 * 0x10) != lVar3) {
      iVar5 = *(int *)(*(longlong *)(lVar4 + 0x1748) + 8 + (longlong)iVar5 * 0x10);
      if (iVar5 == -1) {
        return;
      }
    }
    if (iVar5 == -1) {
      return;
    }
  }
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_2 + 0x10);
  iVar5 = *(int *)(param_1 + 0x1b0);
  *(int *)(param_1 + 0x1b0) = iVar5 + 1;
  if (*(int *)(param_1 + 0x1b4) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x1a8),iVar5);
  }
  lVar4 = *(longlong *)(param_1 + 0x1a8);
  plVar1 = (longlong *)(lVar4 + (longlong)iVar5 * 0x18);
  *plVar1 = param_2;
  plVar1[1] = lVar3;
  *(ulonglong *)(lVar4 + 0x10 + (longlong)iVar5 * 0x18) = CONCAT44(uStack_14,uVar2);
  return;
}



// FUNCTION 1431039b0 FUN_1431039b0 body=83 status=ok
// SIG undefined FUN_1431039b0(void)

void FUN_1431039b0(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\plugins\\runtime\\replicationgraph\\source\\public\\ReplicationGraph.h"
             ,0x51,L"Pure virtual not implemented (%s)",
             L"UReplicationGraphNode::NotifyAddNetworkActor");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\plugins\\runtime\\replicationgraph\\source\\public\\ReplicationGraph.h"
             ,0x51,L"Pure virtual not implemented (%s)",
             L"UReplicationGraphNode::NotifyAddNetworkActor");
  return;
}



// FUNCTION 143103a10 FUN_143103a10 body=111 status=ok
// SIG undefined FUN_143103a10(void)

void FUN_143103a10(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2[1] == 0) {
    iVar2 = *(int *)(param_1 + 0xb0);
    if (iVar2 == *(int *)(param_1 + 0xb4)) {
      FActorRepListRefView::RequestNewList
                ((longlong *)(param_1 + 0xa0),*(int *)(param_1 + 0xb4) + 1,1);
      iVar2 = *(int *)(param_1 + 0xb0);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar2 * 8) = *param_2;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
    *piVar1 = *piVar1 + 1;
    return;
  }
  FUN_1430fbed0(param_1 + 0xb8);
  return;
}



// FUNCTION 143103a80 FUN_143103a80 body=352 status=ok
// SIG undefined FUN_143103a80(void)

void FUN_143103a80(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  
  if (param_2[1] == 0) {
    plVar7 = *(longlong **)(param_1 + 0xd8);
    if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
      plVar7 = (longlong *)(param_1 + 0xa8);
    }
    plVar1 = plVar7 + (longlong)*(int *)(param_1 + 0xe0) * 3;
    plVar4 = (longlong *)0x0;
    iVar5 = 0x7fffffff;
    for (; plVar7 != plVar1; plVar7 = plVar7 + 3) {
      iVar8 = (int)plVar7[2];
      plVar3 = plVar7;
      if (iVar5 <= (int)plVar7[2]) {
        iVar8 = iVar5;
        plVar3 = plVar4;
      }
      plVar4 = plVar3;
      iVar5 = iVar8;
    }
    iVar5 = (int)plVar4[2];
    if (iVar5 == *(int *)((longlong)plVar4 + 0x14)) {
      FActorRepListRefView::RequestNewList
                (plVar4,*(int *)((longlong)plVar4 + 0x14) + 1,
                 CONCAT71((int7)((ulonglong)plVar1 >> 8),1));
      iVar5 = (int)plVar4[2];
    }
    *(undefined8 *)(plVar4[1] + (longlong)iVar5 * 8) = *param_2;
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    *(int *)(*plVar4 + 8) = *(int *)(*plVar4 + 8) + 1;
    iVar5 = *(int *)(param_1 + 0xa0) + 1;
    *(int *)(param_1 + 0xa0) = iVar5;
    piVar6 = DAT_146b4b5b0;
    if (DAT_146b4b5b0 == (int *)0x0) {
      piVar6 = (int *)&DAT_146b4b590;
    }
    piVar2 = piVar6 + (longlong)DAT_146b4b5b8 * 2;
    if (piVar6 != piVar2) {
      while (*piVar6 < iVar5) {
        piVar6 = piVar6 + 2;
        if (piVar6 == piVar2) {
          return;
        }
      }
      if (piVar6[1] != *(int *)(param_1 + 0xe0)) {
        FUN_14310d460(param_1);
        return;
      }
    }
  }
  else {
    FUN_1430fbed0(param_1 + 0xe8);
  }
  return;
}



// FUNCTION 143103be0 FUN_143103be0 body=435 status=ok
// SIG undefined FUN_143103be0(void)

void FUN_143103be0(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res8 [2];
  
  plVar9 = (longlong *)0x0;
  if ((param_3 != 0) && (lVar4 = *(longlong *)(param_3 + 0x30), lVar4 != 0)) {
    plVar7 = *(longlong **)(lVar4 + 0xa0);
    plVar5 = (longlong *)((longlong)*(int *)(lVar4 + 0xa8) & 0x1fffffffffffffff);
    if (plVar7 + *(int *)(lVar4 + 0xa8) < plVar7) {
      plVar5 = plVar9;
    }
    plVar8 = plVar9;
    if (plVar5 != (longlong *)0x0) {
      do {
        lVar4 = *plVar7;
        if (((lVar4 != 0) && ((*(byte *)(lVar4 + 0x92) & 0x40) != 0)) &&
           (*(char *)(lVar4 + 0x129) == '\x02')) {
          TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x30,local_res8);
          plVar6 = plVar9;
          if (local_res8[0] != -1) {
            plVar6 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x30));
          }
          plVar3 = plVar6 + 1;
          if (plVar6 == (longlong *)0x0) {
            plVar3 = plVar9;
          }
          if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
            pbVar1 = (byte *)(*plVar3 + 0x24);
            *pbVar1 = *pbVar1 & 0xfe;
          }
        }
        plVar7 = plVar7 + 1;
        plVar8 = (longlong *)((longlong)plVar8 + 1);
      } while (plVar8 != plVar5);
    }
  }
  FUN_1430fcb80(param_1 + 0xf0,param_2,param_3);
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    lVar4 = *(longlong *)(param_1 + 0x148);
    if (*(longlong *)(param_1 + 0x148) == 0) {
      lVar4 = param_1 + 0x140;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x150) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar2 * 0x28);
        if (*(longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar2 * 0x28) == param_2) {
          if (iVar2 != -1) goto LAB_143103d63;
          break;
        }
        iVar2 = (int)plVar7[4];
      } while (iVar2 != -1);
    }
  }
  plVar7 = plVar9;
LAB_143103d63:
  plVar5 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar5 = plVar9;
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_1430fcb80(plVar5,param_2,param_3);
  }
  return;
}



// FUNCTION 143103da0 FUN_143103da0 body=182 status=ok
// SIG undefined FUN_143103da0(void)

void FUN_143103da0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = *(longlong **)(param_1 + 0x1a8);
  iVar6 = *(int *)(param_1 + 0x1b0);
  plVar4 = plVar1;
  if (plVar1 != plVar1 + (longlong)iVar6 * 3) {
    while (param_2 != *plVar4) {
      plVar4 = plVar4 + 3;
      if (plVar4 == plVar1 + (longlong)iVar6 * 3) {
        return;
      }
    }
    lVar3 = ((longlong)plVar4 - (longlong)plVar1) / 6 +
            ((longlong)plVar4 - (longlong)plVar1 >> 0x3f);
    iVar5 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
    if (iVar5 != -1) {
      iVar2 = (iVar6 - iVar5) + -1;
      if (iVar2 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (plVar1 + (longlong)iVar5 * 3,plVar1 + (longlong)(iVar5 + 1) * 3,
                   (longlong)iVar2 * 0x18);
        iVar6 = *(int *)(param_1 + 0x1b0);
      }
      *(int *)(param_1 + 0x1b0) = iVar6 + -1;
    }
  }
  return;
}



// FUNCTION 143103e60 NotifyRemoveNetworkActor body=85 status=ok
// SIG undefined NotifyRemoveNetworkActor(void)

undefined1 UReplicationGraphNode::NotifyRemoveNetworkActor(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\plugins\\runtime\\replicationgraph\\source\\public\\ReplicationGraph.h"
             ,0x54,L"Pure virtual not implemented (%s)",
             L"UReplicationGraphNode::NotifyRemoveNetworkActor");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\plugins\\runtime\\replicationgraph\\source\\public\\ReplicationGraph.h"
             ,0x54,L"Pure virtual not implemented (%s)",
             L"UReplicationGraphNode::NotifyRemoveNetworkActor");
  return 0;
}



// FUNCTION 143103ec0 FUN_143103ec0 body=128 status=ok
// SIG undefined FUN_143103ec0(void)

ulonglong FUN_143103ec0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_2 + 8) == 0) {
    uVar1 = FUN_140e04ba0(param_1 + 0xa0);
    return uVar1 & 0xffffffffffffff00;
  }
  plVar3 = *(longlong **)(param_1 + 0x138);
  if (*(longlong **)(param_1 + 0x138) == (longlong *)0x0) {
    plVar3 = (longlong *)(param_1 + 0xb8);
  }
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x140) * 4;
  if (plVar3 != plVar2) {
    while (*plVar3 != *(longlong *)(param_2 + 8)) {
      plVar3 = plVar3 + 4;
      if (plVar3 == plVar2) {
        return (ulonglong)plVar2 & 0xffffffffffffff00;
      }
    }
    plVar2 = (longlong *)FUN_140e04ba0(plVar3 + 1,param_2);
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 143103f40 FUN_143103f40 body=427 status=ok
// SIG undefined FUN_143103f40(void)

undefined1 FUN_143103f40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if (param_2[1] != 0) {
    plVar10 = *(longlong **)(param_1 + 0x168);
    if (*(longlong **)(param_1 + 0x168) == (longlong *)0x0) {
      plVar10 = (longlong *)(param_1 + 0xe8);
    }
    plVar6 = plVar10 + (longlong)*(int *)(param_1 + 0x170) * 4;
    while( true ) {
      if (plVar10 == plVar6) {
        return 0;
      }
      if (*plVar10 == param_2[1]) break;
      plVar10 = plVar10 + 4;
    }
    uVar3 = FUN_140e04ba0(plVar10 + 1);
    return uVar3;
  }
  plVar10 = *(longlong **)(param_1 + 0xd8);
  if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
    plVar10 = (longlong *)(param_1 + 0xa8);
  }
  plVar6 = plVar10 + (longlong)*(int *)(param_1 + 0xe0) * 3;
  do {
    if (plVar10 == plVar6) {
      return 0;
    }
    lVar2 = *plVar10;
    if (lVar2 != 0) {
      if (0 < *(int *)(lVar2 + 8)) {
        uVar5 = 0;
        uVar11 = 0;
        do {
          iVar8 = (int)uVar11;
          if (*(longlong *)(lVar2 + 0x20 + uVar5 * 8) == *param_2) {
            if (-1 < iVar8) {
              iVar7 = (int)plVar10[2];
              iVar4 = (iVar7 - iVar8) + -1;
              if (iVar4 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(plVar10[1] + (longlong)iVar8 * 8),
                           (void *)(plVar10[1] + (longlong)(iVar8 + 1) * 8),(longlong)iVar4 << 3);
                iVar7 = (int)plVar10[2];
              }
              *(int *)(plVar10 + 2) = iVar7 + -1;
              *(int *)(*plVar10 + 8) = *(int *)(*plVar10 + 8) + -1;
              iVar8 = *(int *)(param_1 + 0xa0) + -1;
              *(int *)(param_1 + 0xa0) = iVar8;
              piVar9 = DAT_146b4b5b0;
              if (DAT_146b4b5b0 == (int *)0x0) {
                piVar9 = (int *)&DAT_146b4b590;
              }
              piVar1 = piVar9 + (longlong)DAT_146b4b5b8 * 2;
              if (piVar9 != piVar1) {
                while (*piVar9 < iVar8) {
                  piVar9 = piVar9 + 2;
                  if (piVar9 == piVar1) {
                    return 1;
                  }
                }
                if (piVar9[1] != *(int *)(param_1 + 0xe0)) {
                  FUN_14310d460(param_1);
                }
              }
              return 1;
            }
            break;
          }
          uVar11 = (ulonglong)(iVar8 + 1);
          uVar5 = uVar5 + 1;
        } while ((longlong)uVar5 < (longlong)*(int *)(lVar2 + 8));
      }
    }
    plVar10 = plVar10 + 3;
  } while( true );
}



// FUNCTION 1431040f0 FUN_1431040f0 body=156 status=ok
// SIG undefined FUN_1431040f0(void)

undefined1 FUN_1431040f0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  cVar1 = FUN_143103ec0(param_1,param_2,0);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = 0;
  plVar4 = *(longlong **)(param_1 + 0x1d0);
  if (*(longlong **)(param_1 + 0x1d0) == (longlong *)0x0) {
    plVar4 = (longlong *)(param_1 + 0x150);
  }
  plVar3 = plVar4 + (longlong)*(int *)(param_1 + 0x1d8) * 4;
  if (plVar4 != plVar3) {
    while (*plVar4 != *(longlong *)(param_2 + 8)) {
      plVar4 = plVar4 + 4;
      if (plVar4 == plVar3) {
        return 0;
      }
    }
    uVar2 = FUN_140e04ba0(plVar4 + 1,param_2);
  }
  return uVar2;
}



// FUNCTION 143104190 FUN_143104190 body=104 status=ok
// SIG undefined FUN_143104190(void)

void FUN_143104190(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  uVar2 = (longlong)*(int *)(param_1 + 0x30) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x30) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x288))();
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 143104200 FUN_143104200 body=42 status=ok
// SIG undefined FUN_143104200(void)

void FUN_143104200(longlong param_1)

{
  FActorRepListRefView::Reset(param_1 + 0xa0,0);
  FUN_1430fdb20(param_1 + 0xb8,0);
  return;
}



// FUNCTION 143104230 FUN_143104230 body=264 status=ok
// SIG undefined FUN_143104230(void)

void FUN_143104230(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0xd8);
  if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
    plVar6 = (longlong *)(param_1 + 0xa8);
  }
  plVar1 = plVar6 + (longlong)*(int *)(param_1 + 0xe0) * 3;
  for (; plVar6 != plVar1; plVar6 = plVar6 + 3) {
    piVar2 = (int *)*plVar6;
    if (((piVar2 == (int *)0x0) || (*piVar2 != 1)) || (piVar2[1] < 0)) {
      iVar5 = 4;
      if (0 < (int)plVar6[2]) {
        iVar5 = (int)plVar6[2];
      }
      lVar3 = FUN_1430ffb70(&DAT_146b4b6c0,iVar5,0);
      piVar4 = (int *)FUN_14310ae50(lVar3 + 8,lVar3);
      piVar2 = (int *)*plVar6;
      *plVar6 = (longlong)piVar4;
      *(undefined4 *)(plVar6 + 2) = 0;
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + 1;
      }
      if ((piVar2 != (int *)0x0) && (iVar5 = *piVar2, *piVar2 = iVar5 + -1, iVar5 == 1)) {
        **(uint **)(piVar2 + 4) = **(uint **)(piVar2 + 4) & ~piVar2[6];
        piVar2[2] = 0;
      }
      plVar6[1] = *plVar6 + 0x20;
      *(undefined4 *)((longlong)plVar6 + 0x14) = *(undefined4 *)(*plVar6 + 4);
    }
    else {
      piVar2[2] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
    }
  }
  FUN_1430fdb20(param_1 + 0xe8,0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 143104340 FUN_143104340 body=56 status=ok
// SIG undefined FUN_143104340(void)

void FUN_143104340(longlong param_1)

{
  FActorRepListRefView::Reset(param_1 + 0xa0,0);
  FUN_1430fdb20(param_1 + 0xb8,0);
  FUN_1430fdb20(param_1 + 0x150,0);
  return;
}



// FUNCTION 143104380 FUN_143104380 body=561 status=ok
// SIG undefined FUN_143104380(void)

void FUN_143104380(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
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
  
  FUN_143104f70(param_1,param_1);
  FActorRepListRefView::Reset(param_1 + 0xa0,0);
  FUN_1430fdb20(param_1 + 0xb8,0);
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x148);
  uVar3 = *(uint *)(param_1 + 0x170);
  puVar1 = (uint *)(param_1 + 0x158);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar6) goto LAB_14310447d;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
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
    if ((int)uVar3 < (int)uStack_74) {
LAB_14310447d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x170);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_143104543;
      uVar8 = puVar11[(longlong)iVar7 + 1];
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
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_143104543:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    plVar5 = *(longlong **)(*plVar2 + 8 + (longlong)(int)uStack_4c * 0x18);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x288))();
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 1431045c0 FUN_1431045c0 body=91 status=ok
// SIG undefined FUN_1431045c0(void)

void FUN_1431045c0(longlong param_1)

{
  FActorRepListRefView::Reset(param_1 + 0xa0,0);
  FUN_1430fdb20(param_1 + 0xb8,0);
  if (*(longlong **)(param_1 + 0x148) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x148) + 0x288))();
  }
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014310460e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x150) + 0x288))();
    return;
  }
  return;
}



// FUNCTION 143104620 FUN_143104620 body=2341 status=ok
// SIG undefined FUN_143104620(void)

void FUN_143104620(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  uint uStack_48;
  uint uStack_44;
  uint *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar18 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar2 = *(uint *)(param_1 + 0x178);
    puVar1 = (uint *)(param_1 + 0x160);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar2 != 0) {
      puVar16 = *(uint **)(param_1 + 0x170);
      if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar15 = *puVar16;
      uVar10 = uVar18;
      uVar17 = uVar18;
      while (uVar15 == 0) {
        iVar6 = (int)uVar17;
        uStack_80 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_80;
        local_98 = iVar6 + 1;
        uVar17 = (ulonglong)local_98;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_14310470b;
        uVar15 = puVar16[(longlong)iVar6 + 1];
      }
      uStack_94 = -uVar15 & uVar15;
      iVar6 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_84 = (uStack_80 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_14310470b:
        uStack_84 = uVar2;
      }
    }
    uStack_64 = *(uint *)(param_1 + 0x178);
    uStack_38._0_4_ = 0xffffffff;
    uStack_38._4_4_ = uStack_84;
    local_30 = CONCAT44(uStack_7c,uStack_80);
    uVar15 = uStack_64 & 0xffffffe0;
    uStack_48 = local_98;
    uStack_44 = uStack_94;
    local_40 = puVar1;
    if (uStack_64 != uVar2) {
      puVar16 = *(uint **)(param_1 + 0x170);
      if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar11 = puVar16[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
      iVar6 = (int)uStack_64 >> 5;
      while (uVar11 == 0) {
        uVar15 = uVar15 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_1431047d4;
        uVar11 = puVar16[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar6 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_64 = (uVar15 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_64) {
LAB_1431047d4:
        uStack_64 = uVar2;
      }
    }
    while ((uStack_38._4_4_ != uStack_64 || (local_40 != puVar1))) {
      if (*(char *)((longlong)(int)uStack_38._4_4_ * 0x30 + *(longlong *)(param_1 + 0x150) + 0x20)
          != '\0') {
        lVar8 = FUN_140decfc0(**(undefined8 **)(param_1 + 0x38));
        if (*(int *)(lVar8 + 100) < 1) {
          iVar6 = *(int *)(lVar8 + 0x58);
          uVar10 = uVar18;
          uVar17 = uVar18;
          if (0 < iVar6) {
            do {
              if ((((*(int *)(uVar17 + 8 + *(longlong *)(lVar8 + 0x50)) == 0) ||
                   (plVar12 = *(longlong **)(uVar17 + *(longlong *)(lVar8 + 0x50)),
                   plVar12 == (longlong *)0x0)) ||
                  (cVar5 = (**(code **)(*plVar12 + 8))(plVar12,param_1), cVar5 != '\0')) ||
                 (cVar5 = (**(code **)(*plVar12 + 0x10))(plVar12), cVar5 != '\0')) {
                TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(lVar8 + 0x50,uVar10,1);
              }
              else {
                uVar10 = (ulonglong)((int)uVar10 + 1);
                uVar17 = uVar17 + 0x10;
              }
              iVar6 = *(int *)(lVar8 + 0x58);
            } while ((int)uVar10 < iVar6);
          }
          iVar7 = iVar6 * 2;
          if (iVar7 < 3) {
            iVar7 = 2;
          }
          *(int *)(lVar8 + 0x60) = iVar7;
          if (*(int *)(lVar8 + 0x5c) != iVar6) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo
                      (lVar8 + 0x50,*(undefined4 *)(lVar8 + 0x58));
          }
        }
        else {
          plVar12 = *(longlong **)(lVar8 + 0x50);
          bVar4 = false;
          plVar14 = plVar12 + (longlong)*(int *)(lVar8 + 0x58) * 2;
          if (plVar12 != plVar14) {
            do {
              if ((((int)plVar12[1] != 0) &&
                  (plVar3 = (longlong *)*plVar12, plVar3 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_1), cVar5 != '\0')) {
                if (((int)plVar12[1] != 0) &&
                   (plVar3 = (longlong *)*plVar12, plVar3 != (longlong *)0x0)) {
                  (**(code **)(*plVar3 + 0x28))(plVar3,0);
                  if (*plVar12 != 0) {
                    lVar9 = FMemory::Realloc(*plVar12,0,0);
                    *plVar12 = lVar9;
                  }
                  *(undefined4 *)(plVar12 + 1) = 0;
                }
                bVar4 = true;
              }
              plVar12 = plVar12 + 2;
            } while (plVar12 != plVar14);
            if (bVar4) {
              *(undefined4 *)(lVar8 + 0x60) = 0;
            }
          }
        }
        if (*(int *)(lVar8 + 0x7c) < 1) {
          iVar6 = *(int *)(lVar8 + 0x70);
          uVar10 = uVar18;
          uVar17 = uVar18;
          if (0 < iVar6) {
            do {
              if ((((*(int *)(uVar17 + 8 + *(longlong *)(lVar8 + 0x68)) == 0) ||
                   (plVar12 = *(longlong **)(uVar17 + *(longlong *)(lVar8 + 0x68)),
                   plVar12 == (longlong *)0x0)) ||
                  (cVar5 = (**(code **)(*plVar12 + 8))(plVar12,param_1), cVar5 != '\0')) ||
                 (cVar5 = (**(code **)(*plVar12 + 0x10))(plVar12), cVar5 != '\0')) {
                TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(lVar8 + 0x68,uVar10);
              }
              else {
                uVar10 = (ulonglong)((int)uVar10 + 1);
                uVar17 = uVar17 + 0x10;
              }
              iVar6 = *(int *)(lVar8 + 0x70);
            } while ((int)uVar10 < iVar6);
          }
          iVar7 = iVar6 * 2;
          if (iVar7 < 3) {
            iVar7 = 2;
          }
          *(int *)(lVar8 + 0x78) = iVar7;
          if (*(int *)(lVar8 + 0x74) != iVar6) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo
                      (lVar8 + 0x68,*(undefined4 *)(lVar8 + 0x70));
          }
        }
        else {
          plVar12 = *(longlong **)(lVar8 + 0x68);
          bVar4 = false;
          plVar14 = plVar12 + (longlong)*(int *)(lVar8 + 0x70) * 2;
          if (plVar12 != plVar14) {
            do {
              if ((((int)plVar12[1] != 0) &&
                  (plVar3 = (longlong *)*plVar12, plVar3 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_1), cVar5 != '\0')) {
                if (((int)plVar12[1] != 0) &&
                   (plVar3 = (longlong *)*plVar12, plVar3 != (longlong *)0x0)) {
                  (**(code **)(*plVar3 + 0x28))(plVar3,0);
                  if (*plVar12 != 0) {
                    lVar9 = FMemory::Realloc(*plVar12,0,0);
                    *plVar12 = lVar9;
                  }
                  *(undefined4 *)(plVar12 + 1) = 0;
                }
                bVar4 = true;
              }
              plVar12 = plVar12 + 2;
            } while (plVar12 != plVar14);
            if (bVar4) {
              *(undefined4 *)(lVar8 + 0x78) = 0;
            }
          }
        }
      }
      uStack_38._0_4_ = (uint)uStack_38 & ~uStack_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_48);
    }
    uStack_94 = 1;
    uVar2 = *(uint *)(param_1 + 0x128);
    puVar1 = (uint *)(param_1 + 0x110);
    local_98 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar2 != 0) {
      puVar16 = *(uint **)(param_1 + 0x120);
      if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar15 = *puVar16;
      uVar10 = uVar18;
      uVar17 = uVar18;
      while (uVar15 == 0) {
        iVar6 = (int)uVar10;
        uStack_80 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_80;
        local_98 = iVar6 + 1;
        uVar10 = (ulonglong)local_98;
        uStack_84 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_143104b5b;
        uVar15 = puVar16[(longlong)iVar6 + 1];
      }
      uStack_94 = -uVar15 & uVar15;
      iVar6 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_84 = (uStack_80 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
        uStack_84 = uVar2;
      }
    }
LAB_143104b5b:
    uStack_64 = *(uint *)(param_1 + 0x128);
    uStack_38 = CONCAT44(uStack_84,0xffffffff);
    local_30 = CONCAT44(uStack_7c,uStack_80);
    uVar15 = uStack_64 & 0xffffffe0;
    uStack_48 = local_98;
    uStack_44 = uStack_94;
    local_40 = puVar1;
    if (uStack_64 != uVar2) {
      puVar16 = *(uint **)(param_1 + 0x120);
      if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar11 = puVar16[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
      iVar6 = (int)uStack_64 >> 5;
      while (uVar11 == 0) {
        uVar15 = uVar15 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_143104c22;
        uVar11 = puVar16[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar6 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_64 = (uVar15 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_64) {
LAB_143104c22:
        uStack_64 = uVar2;
      }
    }
    while( true ) {
      if ((uStack_38._4_4_ == uStack_64) && (local_40 == puVar1)) break;
      lVar8 = FUN_140decfc0(**(undefined8 **)(param_1 + 0x38),
                            (longlong)(int)uStack_38._4_4_ * 0x38 + *(longlong *)(param_1 + 0x100));
      if (*(int *)(lVar8 + 100) < 1) {
        iVar6 = *(int *)(lVar8 + 0x58);
        uVar10 = uVar18;
        uVar17 = uVar18;
        if (0 < iVar6) {
          do {
            if ((((*(int *)(uVar17 + 8 + *(longlong *)(lVar8 + 0x50)) == 0) ||
                 (plVar12 = *(longlong **)(uVar17 + *(longlong *)(lVar8 + 0x50)),
                 plVar12 == (longlong *)0x0)) ||
                (cVar5 = (**(code **)(*plVar12 + 8))(plVar12,param_1), cVar5 != '\0')) ||
               (cVar5 = (**(code **)(*plVar12 + 0x10))(plVar12), cVar5 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(lVar8 + 0x50,uVar10,1);
            }
            else {
              uVar10 = (ulonglong)((int)uVar10 + 1);
              uVar17 = uVar17 + 0x10;
            }
            iVar6 = *(int *)(lVar8 + 0x58);
          } while ((int)uVar10 < iVar6);
        }
        iVar7 = iVar6 * 2;
        if (iVar7 < 3) {
          iVar7 = 2;
        }
        *(int *)(lVar8 + 0x60) = iVar7;
        if (*(int *)(lVar8 + 0x5c) != iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar8 + 0x50,*(undefined4 *)(lVar8 + 0x58))
          ;
        }
      }
      else {
        plVar12 = *(longlong **)(lVar8 + 0x50);
        bVar4 = false;
        plVar14 = plVar12 + (longlong)*(int *)(lVar8 + 0x58) * 2;
        if (plVar12 != plVar14) {
          do {
            if ((((int)plVar12[1] != 0) &&
                (plVar3 = (longlong *)*plVar12, plVar3 != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_1), cVar5 != '\0')) {
              if (((int)plVar12[1] != 0) &&
                 (plVar3 = (longlong *)*plVar12, plVar3 != (longlong *)0x0)) {
                (**(code **)(*plVar3 + 0x28))(plVar3,0);
                if (*plVar12 != 0) {
                  lVar9 = FMemory::Realloc(*plVar12,0,0);
                  *plVar12 = lVar9;
                }
                *(undefined4 *)(plVar12 + 1) = 0;
              }
              bVar4 = true;
            }
            plVar12 = plVar12 + 2;
          } while (plVar12 != plVar14);
          if (bVar4) {
            *(undefined4 *)(lVar8 + 0x60) = 0;
          }
        }
      }
      if (*(int *)(lVar8 + 0x7c) < 1) {
        iVar6 = *(int *)(lVar8 + 0x70);
        uVar10 = uVar18;
        uVar17 = uVar18;
        if (0 < iVar6) {
          do {
            if ((((*(int *)(uVar17 + 8 + *(longlong *)(lVar8 + 0x68)) == 0) ||
                 (plVar12 = *(longlong **)(uVar17 + *(longlong *)(lVar8 + 0x68)),
                 plVar12 == (longlong *)0x0)) ||
                (cVar5 = (**(code **)(*plVar12 + 8))(plVar12,param_1), cVar5 != '\0')) ||
               (cVar5 = (**(code **)(*plVar12 + 0x10))(plVar12), cVar5 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(lVar8 + 0x68,uVar10,1);
            }
            else {
              uVar10 = (ulonglong)((int)uVar10 + 1);
              uVar17 = uVar17 + 0x10;
            }
            iVar6 = *(int *)(lVar8 + 0x70);
          } while ((int)uVar10 < iVar6);
        }
        iVar7 = iVar6 * 2;
        if (iVar7 < 3) {
          iVar7 = 2;
        }
        *(int *)(lVar8 + 0x78) = iVar7;
        if (*(int *)(lVar8 + 0x74) != iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar8 + 0x68,*(undefined4 *)(lVar8 + 0x70))
          ;
        }
      }
      else {
        plVar12 = *(longlong **)(lVar8 + 0x68);
        bVar4 = false;
        plVar14 = plVar12 + (longlong)*(int *)(lVar8 + 0x70) * 2;
        if (plVar12 != plVar14) {
          do {
            if ((((int)plVar12[1] != 0) &&
                (plVar3 = (longlong *)*plVar12, plVar3 != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_1), cVar5 != '\0')) {
              if (((int)plVar12[1] != 0) &&
                 (plVar3 = (longlong *)*plVar12, plVar3 != (longlong *)0x0)) {
                (**(code **)(*plVar3 + 0x28))(plVar3,0);
                if (*plVar12 != 0) {
                  lVar9 = FMemory::Realloc(*plVar12,0,0);
                  *plVar12 = lVar9;
                }
                *(undefined4 *)(plVar12 + 1) = 0;
              }
              bVar4 = true;
            }
            plVar12 = plVar12 + 2;
          } while (plVar12 != plVar14);
          if (bVar4) {
            *(undefined4 *)(lVar8 + 0x78) = 0;
          }
        }
      }
      uStack_38 = CONCAT44(uStack_38._4_4_,(uint)uStack_38 & ~uStack_44);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_48);
    }
  }
  FUN_1405f01f0(param_1 + 0x150);
  TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x100);
  puVar13 = *(undefined8 **)(param_1 + 0x28);
  uVar10 = (longlong)*(int *)(param_1 + 0x30) & 0x1fffffffffffffff;
  if (puVar13 + *(int *)(param_1 + 0x30) < puVar13) {
    uVar10 = uVar18;
  }
  if (uVar10 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar13 + 0x288))();
      uVar18 = uVar18 + 1;
      puVar13 = puVar13 + 1;
    } while (uVar18 != uVar10);
  }
  return;
}



// FUNCTION 143104f70 FUN_143104f70 body=734 status=ok
// SIG undefined FUN_143104f70(void)

void FUN_143104f70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    iVar1 = *(int *)(lVar2 + 8);
    for (lVar12 = lVar2 + 0x20; lVar12 != lVar2 + ((longlong)iVar1 + 4) * 8; lVar12 = lVar12 + 8) {
      lVar6 = FUN_140decfc0(**(undefined8 **)(param_1 + 0x38),lVar12);
      if (*(int *)(lVar6 + 0x7c) < 1) {
        iVar8 = *(int *)(lVar6 + 0x70);
        iVar11 = 0;
        if (0 < iVar8) {
          lVar7 = 0;
          do {
            if ((((*(int *)(lVar7 + 8 + *(longlong *)(lVar6 + 0x68)) == 0) ||
                 (plVar9 = *(longlong **)(lVar7 + *(longlong *)(lVar6 + 0x68)),
                 plVar9 == (longlong *)0x0)) ||
                (cVar5 = (**(code **)(*plVar9 + 8))(plVar9,param_2), cVar5 != '\0')) ||
               (cVar5 = (**(code **)(*plVar9 + 0x10))(plVar9), cVar5 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(lVar6 + 0x68,iVar11,1);
            }
            else {
              iVar11 = iVar11 + 1;
              lVar7 = lVar7 + 0x10;
            }
            iVar8 = *(int *)(lVar6 + 0x70);
          } while (iVar11 < iVar8);
        }
        iVar11 = iVar8 * 2;
        if (iVar11 < 3) {
          iVar11 = 2;
        }
        *(int *)(lVar6 + 0x78) = iVar11;
        if (*(int *)(lVar6 + 0x74) != iVar8) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar6 + 0x68,*(undefined4 *)(lVar6 + 0x70))
          ;
        }
      }
      else {
        plVar9 = *(longlong **)(lVar6 + 0x68);
        bVar4 = false;
        plVar10 = plVar9 + (longlong)*(int *)(lVar6 + 0x70) * 2;
        if (plVar9 != plVar10) {
          do {
            if ((((int)plVar9[1] != 0) && (plVar3 = (longlong *)*plVar9, plVar3 != (longlong *)0x0))
               && (cVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_2), cVar5 != '\0')) {
              if (((int)plVar9[1] != 0) && (plVar3 = (longlong *)*plVar9, plVar3 != (longlong *)0x0)
                 ) {
                (**(code **)(*plVar3 + 0x28))(plVar3,0);
                if (*plVar9 != 0) {
                  lVar7 = FMemory::Realloc(*plVar9,0,0);
                  *plVar9 = lVar7;
                }
                *(undefined4 *)(plVar9 + 1) = 0;
              }
              bVar4 = true;
            }
            plVar9 = plVar9 + 2;
          } while (plVar9 != plVar10);
          if (bVar4) {
            *(undefined4 *)(lVar6 + 0x78) = 0;
          }
        }
      }
      plVar9 = (longlong *)(lVar6 + 0x50);
      if (*(int *)(lVar6 + 100) < 1) {
        iVar8 = *(int *)(lVar6 + 0x58);
        iVar11 = 0;
        if (0 < iVar8) {
          lVar7 = 0;
          do {
            if ((((*(int *)(lVar7 + 8 + *plVar9) == 0) ||
                 (plVar10 = *(longlong **)(lVar7 + *plVar9), plVar10 == (longlong *)0x0)) ||
                (cVar5 = (**(code **)(*plVar10 + 8))(plVar10,param_2), cVar5 != '\0')) ||
               (cVar5 = (**(code **)(*plVar10 + 0x10))(plVar10), cVar5 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(plVar9,iVar11);
            }
            else {
              iVar11 = iVar11 + 1;
              lVar7 = lVar7 + 0x10;
            }
            iVar8 = *(int *)(lVar6 + 0x58);
          } while (iVar11 < iVar8);
        }
        iVar11 = iVar8 * 2;
        if (iVar11 < 3) {
          iVar11 = 2;
        }
        *(int *)(lVar6 + 0x60) = iVar11;
        if (*(int *)(lVar6 + 0x5c) != iVar8) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar9,*(undefined4 *)(lVar6 + 0x58));
        }
      }
      else {
        plVar9 = (longlong *)*plVar9;
        bVar4 = false;
        plVar10 = plVar9 + (longlong)*(int *)(lVar6 + 0x58) * 2;
        if (plVar9 != plVar10) {
          do {
            if ((((int)plVar9[1] != 0) && (plVar3 = (longlong *)*plVar9, plVar3 != (longlong *)0x0))
               && (cVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_2), cVar5 != '\0')) {
              if (((int)plVar9[1] != 0) && (plVar3 = (longlong *)*plVar9, plVar3 != (longlong *)0x0)
                 ) {
                (**(code **)(*plVar3 + 0x28))(plVar3,0);
                if (*plVar9 != 0) {
                  lVar7 = FMemory::Realloc(*plVar9,0,0);
                  *plVar9 = lVar7;
                }
                *(undefined4 *)(plVar9 + 1) = 0;
              }
              bVar4 = true;
            }
            plVar9 = plVar9 + 2;
          } while (plVar9 != plVar10);
          if (bVar4) {
            *(undefined4 *)(lVar6 + 0x60) = 0;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143105250 FUN_143105250 body=527 status=ok
// SIG undefined FUN_143105250(void)

void FUN_143105250(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
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
  
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x148);
  uVar3 = *(uint *)(param_1 + 0x170);
  puVar1 = (uint *)(param_1 + 0x158);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_14310532d;
      uVar4 = puVar10[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
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
    if ((int)uVar3 < (int)uStack_74) {
LAB_14310532d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x170);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1431053f3;
      uVar7 = puVar10[(longlong)iVar6 + 1];
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
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1431053f3:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    FUN_1431031b0(*(undefined8 *)(*plVar2 + 8 + (longlong)(int)uStack_4c * 0x18),param_2);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 143105460 FUN_143105460 body=161 status=ok
// SIG undefined FUN_143105460(void)

void FUN_143105460(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  UReplicationGraphNode_GridSpatialization2D::GetGridNodesForActor();
  plVar3 = *(longlong **)(param_1 + 0x1b8);
  uVar1 = 0;
  uVar2 = (longlong)*(int *)(param_1 + 0x1c0) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x1c0) < plVar3) {
    uVar2 = uVar1;
  }
  if (uVar2 != 0) {
    do {
      if (*(longlong *)(*plVar3 + 0x150) != 0) {
        FUN_143105250(*(longlong *)(*plVar3 + 0x150),param_2,param_3);
      }
      plVar3 = plVar3 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 143105510 FUN_143105510 body=665 status=ok
// SIG undefined FUN_143105510(void)

void FUN_143105510(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  plVar7 = *(longlong **)(param_1 + 0x1d0);
  if (*(longlong **)(param_1 + 0x1d0) == (longlong *)0x0) {
    plVar7 = (longlong *)(param_1 + 0x150);
  }
  plVar3 = plVar7 + (longlong)*(int *)(param_1 + 0x1d8) * 4;
  if (plVar7 != plVar3) {
    while (param_2 != *plVar7) {
      plVar7 = plVar7 + 4;
      if (plVar7 == plVar3) {
        return;
      }
    }
    if (plVar7 != (longlong *)0x0) {
      iVar8 = *(int *)(param_1 + 0x140);
      plVar3 = (longlong *)(param_1 + 0xb8);
      plVar10 = *(longlong **)(param_1 + 0x138);
      if (*(longlong **)(param_1 + 0x138) == (longlong *)0x0) {
        plVar10 = plVar3;
      }
      plVar9 = plVar10 + (longlong)iVar8 * 4;
      for (; plVar10 != plVar9; plVar10 = plVar10 + 4) {
        if (param_2 == *plVar10) goto LAB_143105627;
      }
      *(int *)(param_1 + 0x140) = iVar8 + 1;
      if (*(int *)(param_1 + 0x144) < iVar8 + 1) {
        TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(plVar3,iVar8);
      }
      plVar9 = *(longlong **)(param_1 + 0x138);
      if (*(longlong **)(param_1 + 0x138) == (longlong *)0x0) {
        plVar9 = plVar3;
      }
      plVar9 = plVar9 + (longlong)iVar8 * 4;
      plVar10 = (longlong *)0x0;
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = param_2;
        plVar9[1] = 0;
        plVar9[2] = 0;
        plVar9[3] = 0;
        FActorRepListRefView::Reset(plVar9 + 1,4);
        plVar10 = plVar9;
      }
LAB_143105627:
      FActorRepListRefView::PrepareForWrite(plVar10 + 1,0);
      iVar2 = (int)plVar7[3];
      iVar6 = (int)plVar10[3];
      iVar8 = iVar6 + iVar2;
      if (*(int *)((longlong)plVar10 + 0x1c) < iVar8) {
        FActorRepListRefView::RequestNewList(plVar10 + 1,iVar8,1);
        iVar2 = (int)plVar7[3];
        iVar6 = (int)plVar10[3];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(plVar10[2] + (longlong)iVar6 * 8),(void *)plVar7[2],(longlong)iVar2 << 3);
      *(int *)(plVar10[1] + 8) = iVar8;
      *(int *)(plVar10 + 3) = iVar8;
      if ((int *)plVar7[1] == (int *)0x0) {
        lVar4 = FUN_1430ffb70(&DAT_146b4b6c0,4,0);
        piVar5 = (int *)FUN_14310ae50(lVar4 + 8,lVar4);
        piVar1 = (int *)plVar7[1];
        plVar7[1] = (longlong)piVar5;
        *(undefined4 *)(plVar7 + 3) = 0;
        if (piVar5 != (int *)0x0) {
          *piVar5 = *piVar5 + 1;
        }
        if ((piVar1 != (int *)0x0) && (iVar8 = *piVar1, *piVar1 = iVar8 + -1, iVar8 == 1)) {
          **(uint **)(piVar1 + 4) = **(uint **)(piVar1 + 4) & ~piVar1[6];
          piVar1[2] = 0;
        }
        plVar7[2] = plVar7[1] + 0x20;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = *(undefined4 *)(plVar7[1] + 4);
      }
      else if (1 < *(int *)plVar7[1]) {
        FActorRepListRefView::RequestNewList(plVar7 + 1,(int)plVar7[3],1);
      }
      piVar1 = (int *)plVar7[1];
      if (((piVar1 != (int *)0x0) && (*piVar1 == 1)) && (-1 < piVar1[1])) {
        piVar1[2] = 0;
        *(undefined4 *)(plVar7 + 3) = 0;
        return;
      }
      iVar8 = 4;
      if (0 < (int)plVar7[3]) {
        iVar8 = (int)plVar7[3];
      }
      lVar4 = FUN_1430ffb70(&DAT_146b4b6c0,iVar8,0);
      piVar5 = (int *)FUN_14310ae50(lVar4 + 8,lVar4);
      piVar1 = (int *)plVar7[1];
      plVar7[1] = (longlong)piVar5;
      *(undefined4 *)(plVar7 + 3) = 0;
      if (piVar5 != (int *)0x0) {
        *piVar5 = *piVar5 + 1;
      }
      if ((piVar1 != (int *)0x0) && (iVar8 = *piVar1, *piVar1 = iVar8 + -1, iVar8 == 1)) {
        **(uint **)(piVar1 + 4) = **(uint **)(piVar1 + 4) & ~piVar1[6];
        piVar1[2] = 0;
      }
      plVar7[2] = plVar7[1] + 0x20;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = *(undefined4 *)(plVar7[1] + 4);
    }
  }
  return;
}



// FUNCTION 1431057b0 FUN_1431057b0 body=566 status=ok
// SIG undefined FUN_1431057b0(void)

void FUN_1431057b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4,int param_5)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = param_2;
  if (param_4 < 2) {
    if (1 < param_5) {
      local_10 = *(undefined8 *)(param_2 + 0x10);
      local_18 = 0;
      lVar6 = *(longlong *)(param_2 + 0x20);
      if (lVar6 != 0) {
        lVar5 = FUN_1429a0270();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (cVar3 = ULevel::IsPersistentLevel(lVar6), cVar3 == '\0')) {
          lVar6 = UObjectBaseUtility::GetOutermost(lVar6);
          local_18 = *(longlong *)(lVar6 + 0x18);
        }
      }
      uVar7 = FUN_1430ff4c0(param_1);
      FUN_14310a290(uVar7,&local_20,param_3);
      if (local_18 == 0) {
        iVar4 = *(int *)(param_1 + 0xb0);
        if (iVar4 == *(int *)(param_1 + 0xb4)) {
          FActorRepListRefView::RequestNewList
                    ((longlong *)(param_1 + 0xa0),*(int *)(param_1 + 0xb4) + 1,1);
          iVar4 = *(int *)(param_1 + 0xb0);
        }
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar4 * 8) = local_20;
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
        *piVar1 = *piVar1 + 1;
      }
      else {
        FUN_1430fbed0(param_1 + 0xb8,&local_20);
      }
    }
  }
  else if (param_5 < 2) {
    local_10 = *(undefined8 *)(param_2 + 0x10);
    local_18 = 0;
    lVar6 = *(longlong *)(param_2 + 0x20);
    if (lVar6 != 0) {
      lVar5 = FUN_1429a0270();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (cVar3 = ULevel::IsPersistentLevel(lVar6), cVar3 == '\0')) {
        lVar6 = UObjectBaseUtility::GetOutermost(lVar6);
        local_18 = *(longlong *)(lVar6 + 0x18);
      }
    }
    uVar7 = 0;
    if (local_18 == 0) {
      plVar9 = (longlong *)(param_1 + 0xa0);
LAB_1431059ac:
      FUN_140e04ba0(plVar9,&local_20);
    }
    else {
      plVar9 = (longlong *)
               ((ulonglong)(*(ulonglong *)(param_1 + 0x138) != 0) - 1 & param_1 + 0xb8U |
               *(ulonglong *)(param_1 + 0x138));
      plVar10 = plVar9 + (longlong)*(int *)(param_1 + 0x140) * 4;
      for (; plVar9 != plVar10; plVar9 = plVar9 + 4) {
        if (*plVar9 == local_18) {
          plVar9 = plVar9 + 1;
          goto LAB_1431059ac;
        }
      }
    }
    uVar8 = FUN_1430ff4c0(param_1);
    FUN_1430fc380(uVar8,&local_20,param_3,0,uVar7);
  }
  return;
}



// FUNCTION 1431059f0 FUN_1431059f0 body=391 status=ok
// SIG undefined FUN_1431059f0(void)

void FUN_1431059f0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = param_2;
  if (param_4 < 2) {
    if (1 < param_5) {
      local_20 = 0;
      local_18 = *(undefined8 *)(param_2 + 0x10);
      lVar4 = *(longlong *)(param_2 + 0x20);
      if (lVar4 != 0) {
        lVar3 = FUN_1429a0270();
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
          cVar2 = ULevel::IsPersistentLevel(lVar4);
          if (cVar2 == '\0') {
            lVar4 = UObjectBaseUtility::GetOutermost(lVar4);
            local_20 = *(undefined8 *)(lVar4 + 0x18);
          }
        }
      }
      (**(code **)(*param_1 + 0x2d0))(param_1,&local_28,param_3,1);
      (**(code **)(*param_1 + 0x2b8))(param_1,&local_28);
    }
  }
  else if (param_5 < 2) {
    local_20 = 0;
    local_18 = *(undefined8 *)(param_2 + 0x10);
    lVar4 = *(longlong *)(param_2 + 0x20);
    if (lVar4 != 0) {
      lVar3 = FUN_1429a0270();
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
        cVar2 = ULevel::IsPersistentLevel(lVar4);
        if (cVar2 == '\0') {
          lVar4 = UObjectBaseUtility::GetOutermost(lVar4);
          local_20 = *(undefined8 *)(lVar4 + 0x18);
        }
      }
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_28);
    (**(code **)(*param_1 + 0x2c0))(param_1,&local_28,param_3,1);
    return;
  }
  return;
}



// FUNCTION 143105b80 FUN_143105b80 body=286 status=ok
// SIG undefined FUN_143105b80(void)

void FUN_143105b80(int param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  int local_res8 [2];
  int local_res10;
  longlong local_res18 [2];
  longlong *plVar4;
  
  iVar2 = DAT_146b50040;
  lVar6 = (longlong)DAT_146b50040;
  for (piVar5 = &DAT_146b4b6c0; local_res10 = param_1, &DAT_146b4b6c0 + lVar6 * 0x188 != piVar5;
      piVar5 = piVar5 + 0x188) {
    if (param_1 <= *piVar5) goto LAB_143105c02;
  }
  DAT_146b50040 = DAT_146b50040 + 1;
  if (DAT_146b50044 < DAT_146b50040) {
    TArray<TActorListAllocator<128,12>::FPool,TFixedAllocator<12>_>::ResizeGrow
              (&DAT_146b4b6c0,iVar2);
  }
  piVar5 = &DAT_146b4b6c0 + lVar6 * 0x188;
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = param_1;
    local_res8[0] = param_1;
    FUN_1430f8610(&DAT_146b4b6c8 + lVar6 * 0x620,local_res8);
  }
LAB_143105c02:
  piVar3 = piVar5 + 2;
  if (0x80 < param_2) {
    uVar7 = (ulonglong)((param_2 - 0x81 >> 7) + 1);
    do {
      plVar4 = (longlong *)(piVar3 + 0x184);
      if (*plVar4 == 0) {
        lVar6 = operator_new(0x618);
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_1430f8610(lVar6,piVar5);
        }
        if (plVar4 == local_res18) {
          if (lVar6 != 0) {
            TActorListAllocator<128,12>::FPool::FBlock::~FBlock(lVar6);
            goto LAB_143105c80;
          }
        }
        else {
          lVar1 = *plVar4;
          *plVar4 = lVar6;
          if (lVar1 != 0) {
            TActorListAllocator<128,12>::FPool::FBlock::~FBlock(lVar1);
            lVar6 = lVar1;
LAB_143105c80:
            FMemory::operator_delete(lVar6,0x618);
          }
        }
      }
      piVar3 = (int *)*plVar4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 143105ca0 FUN_143105ca0 body=1241 status=ok
// SIG undefined FUN_143105ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143105ca0(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_c8 = param_1;
  if (param_1[0x14] != 0) goto LAB_143105d0c;
  local_d8 = param_1;
  if (*(int *)(param_1 + 0x12) == 0) {
LAB_143105cf9:
    uVar8 = 0;
  }
  else {
    plVar14 = (longlong *)param_1[0x10];
    if ((longlong *)param_1[0x10] == (longlong *)0x0) {
      plVar14 = param_1 + 0xc;
    }
    if (plVar14 == (longlong *)0x0) goto LAB_143105cf9;
    uVar8 = (**(code **)(*plVar14 + 8))();
  }
  uVar8 = (*(code *)param_1[10])(uVar8,&local_d8);
  param_1[0x14] = uVar8;
LAB_143105d0c:
  (**(code **)(*(longlong *)param_1[0x14] + 0x288))();
  puVar18 = (undefined8 *)param_1[0x15];
  puVar21 = puVar18 + *(int *)(param_1 + 0x16);
  local_d8 = puVar21;
  if (puVar18 != puVar21) {
    do {
      uVar8 = *puVar18;
      local_d0 = puVar18;
      local_b8 = UReplicationGraphNode::GetWorld(param_1);
      local_98[0] = 5;
      local_40 = '\0';
      local_c0 = uVar8;
      FUN_14044bc80(&local_90,&local_b8,&local_c0);
      FUN_14045a130(local_98);
      if (local_74 == '\0') {
LAB_143105db0:
        iVar20 = *(int *)(local_68 + 0xc);
        if (iVar20 < (int)DAT_1469e91c4) {
          uVar15 = iVar20 >> 0x1f & 0xffff;
          uVar7 = iVar20 + uVar15;
          lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                   (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
        }
        else {
          lVar10 = 0;
        }
        if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) {
          if ((*(byte *)(local_68 + 0x94) & 2) == 0) {
            if (iVar20 < (int)DAT_1469e91c4) {
              uVar15 = iVar20 >> 0x1f & 0xffff;
              uVar7 = iVar20 + uVar15;
              lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
            }
            else {
              lVar10 = 0;
            }
            if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_143105e3e;
            bVar3 = false;
          }
          else {
LAB_143105e3e:
            bVar3 = true;
          }
          if (bVar3) goto LAB_143105e48;
          bVar3 = true;
        }
        else {
LAB_143105e48:
          bVar3 = false;
        }
        bVar4 = false;
        if (bVar3) {
          if ((*(byte *)(local_68 + 0x92) & 0x40) == 0) {
            bVar4 = false;
          }
          else if ((*(byte *)(local_68 + 0x90) & 0x20) == 0) {
            if ((*(char *)(local_68 + 0x129) == '\x04') &&
               (cVar6 = UAbilityTask::IsWaitingOnRemotePlayerdata(local_68), cVar6 != '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
          }
          else {
            bVar4 = false;
          }
        }
        if (bVar4) {
          local_a8 = 0;
          local_a0 = *(undefined8 *)(local_68 + 0x10);
          lVar10 = *(longlong *)(local_68 + 0x20);
          local_b0 = local_68;
          if (lVar10 != 0) {
            lVar9 = FUN_1429a0270();
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && (cVar6 = ULevel::IsPersistentLevel(lVar10), cVar6 == '\0')) {
              lVar10 = UObjectBaseUtility::GetOutermost(lVar10);
              local_a8 = *(undefined8 *)(lVar10 + 0x18);
            }
          }
          (**(code **)(*(longlong *)param_1[0x14] + 0x278))((longlong *)param_1[0x14],&local_b0);
        }
        lVar10 = local_90;
        iVar20 = local_78 + 1;
        if (iVar20 < local_58 + local_80) {
          lVar9 = (longlong)iVar20 * 8;
          iVar19 = local_58;
          iVar16 = local_80;
          do {
            if (iVar20 < iVar16) {
              lVar17 = *(longlong *)(lVar9 + local_88);
            }
            else {
              lVar17 = *(longlong *)(local_60 + (longlong)(iVar20 - iVar16) * 8);
            }
            local_70 = local_70 + 1;
            if ((lVar17 != 0) &&
               (lVar11 = AActor::GetLevel(lVar17), iVar19 = local_58, iVar16 = local_80, lVar11 != 0
               )) {
              if ((local_98[0] & 1) != 0) {
                iVar1 = *(int *)(lVar17 + 0xc);
                if (iVar1 < (int)DAT_1469e91c4) {
                  uVar15 = iVar1 >> 0x1f & 0xffff;
                  uVar7 = iVar1 + uVar15;
                  lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                           (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
                }
                else {
                  lVar12 = 0;
                }
                if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_1431060b5;
              }
              if (((local_98[0] >> 1 & 1) == 0) ||
                 (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar17), iVar19 = local_58,
                 iVar16 = local_80, cVar6 != '\0')) {
                if ((local_98[0] >> 2 & 1) != 0) {
                  if (((*(byte *)(lVar11 + 0x204) & 0x10) == 0) &&
                     ((*(byte *)(lVar11 + 0x205) & 0x10) == 0)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  piVar2 = *(int **)(lVar11 + 600);
                  if (((*(longlong *)(lVar11 + 0xc0) == 0) ||
                      (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0))
                     || (piVar2 == piVar13)) {
                    bVar4 = true;
                  }
                  else {
                    bVar4 = false;
                  }
                  if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  if ((bVar4) || (bVar4 = false, bVar5)) {
                    bVar4 = true;
                  }
                  iVar19 = local_58;
                  iVar16 = local_80;
                  if ((!bVar3) || (!bVar4)) goto LAB_1431060b5;
                }
                lVar11 = ULevel::GetWorld(lVar11);
                iVar19 = local_58;
                iVar16 = local_80;
                if (lVar11 == lVar10) {
                  lVar11 = AActor::GetLevel(lVar17);
                  if (lVar11 == *(longlong *)(lVar10 + 0x30)) goto LAB_14310615e;
                  lVar11 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  iVar19 = local_58;
                  iVar16 = local_80;
                  if (!bVar3) goto LAB_14310615e;
                }
              }
            }
LAB_1431060b5:
            iVar20 = iVar20 + 1;
            lVar9 = lVar9 + 8;
            if (iVar19 + iVar16 <= iVar20) break;
          } while( true );
        }
        local_68 = 0;
        local_74 = '\x01';
        puVar18 = local_d0;
        puVar21 = local_d8;
      }
LAB_1431060dd:
      if (local_40 != '\0') {
        local_40 = '\0';
        UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
        if (local_60 != 0) {
          FMemory::Free();
        }
        if (local_88 != 0) {
          FMemory::Free();
        }
      }
      puVar18 = puVar18 + 1;
      param_1 = local_c8;
    } while (puVar18 != puVar21);
  }
  return;
LAB_14310615e:
  param_1 = local_c8;
  puVar18 = local_d0;
  puVar21 = local_d8;
  local_78 = iVar20;
  local_68 = lVar17;
  if (local_74 != '\0') goto LAB_1431060dd;
  goto LAB_143105db0;
}



// FUNCTION 143106180 FUN_143106180 body=5661 status=ok
// SIG undefined FUN_143106180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143106180(longlong param_1)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  longlong *plVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int local_178;
  int local_174;
  int local_160;
  uint uStack_15c;
  uint *puStack_158;
  uint local_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  longlong *local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  longlong local_108;
  longlong *local_100;
  int iStack_f8;
  uint uStack_f4;
  uint *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  
  if (*(undefined8 **)(param_1 + 0x38) == (undefined8 *)0x0) {
    local_c0 = 0;
  }
  else {
    local_c0 = **(undefined8 **)(param_1 + 0x38);
  }
  local_130 = (longlong *)(param_1 + 0x100);
  uStack_15c = 1;
  uVar29 = *(uint *)(param_1 + 0x128);
  puStack_158 = (uint *)(param_1 + 0x110);
  local_160 = 0;
  uStack_14c = 0;
  iStack_148 = 0;
  if (uVar29 != 0) {
    puVar21 = *(uint **)(param_1 + 0x120);
    if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
      puVar21 = puStack_158;
    }
    uVar7 = *puVar21;
    iStack_148 = 0;
    local_160 = 0;
    while (uVar7 == 0) {
      lVar16 = (longlong)local_160;
      iStack_148 = iStack_148 + 0x20;
      iVar13 = local_160 + 1;
      bVar3 = (int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_160;
      local_160 = iVar13;
      if (bVar3) goto LAB_14310627e;
      uVar7 = puVar21[lVar16 + 1];
    }
    uStack_15c = -uVar7 & uVar7;
    iVar13 = 0x1f;
    if (uStack_15c != 0) {
      for (; uStack_15c >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_15c == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_14c = (iStack_148 - iVar13) + 0x1f;
    if ((int)uVar29 < (int)uStack_14c) {
LAB_14310627e:
      uStack_14c = uVar29;
    }
  }
  local_150 = 0xffffffff;
  uVar7 = *(uint *)(param_1 + 0x128);
  uStack_128 = CONCAT44(uStack_15c,local_160);
  uStack_e8 = 0xffffffff;
  uStack_e4 = uStack_14c;
  uStack_110 = CONCAT44(uStack_144,iStack_148);
  uVar25 = -1 << ((byte)uVar7 & 0x1f);
  uVar20 = uVar7 & 0xffffffe0;
  uStack_120 = CONCAT44(uVar7,uVar25);
  iStack_f8 = local_160;
  uStack_f4 = uStack_15c;
  if (uVar7 != uVar29) {
    puVar21 = *(uint **)(param_1 + 0x120);
    if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
      puVar21 = puStack_158;
    }
    uVar25 = puVar21[(int)uVar7 >> 5] & uVar25;
    iVar13 = (int)uVar7 >> 5;
    while (uVar25 == 0) {
      uVar20 = uVar20 + 0x20;
      if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_143106351;
      uVar25 = puVar21[(longlong)iVar13 + 1];
      uStack_120 = 0xffffffff;
      iVar13 = iVar13 + 1;
    }
    uVar25 = -uVar25 & uVar25;
    iVar13 = 0x1f;
    if (uVar25 != 0) {
      for (; uVar25 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar25 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    iVar13 = (uVar20 - iVar13) + 0x1f;
    uStack_120 = CONCAT44(iVar13,(undefined4)uStack_120);
    if ((int)uVar29 < iVar13) {
LAB_143106351:
      uStack_120 = CONCAT44(uVar29,(undefined4)uStack_120);
    }
  }
  local_80 = uStack_120 >> 0x20;
  local_f0 = puStack_158;
  local_e0 = uStack_110;
  local_100 = local_130;
  uStack_118 = uStack_e8;
  uStack_114 = uStack_e4;
  while( true ) {
    plVar10 = (longlong *)(param_1 + 0x100);
    if (((uStack_e4 == (uint)local_80) && (local_f0 == puStack_158)) && (local_100 == plVar10))
    break;
    plVar22 = (longlong *)((longlong)(int)uStack_e4 * 0x38 + *local_100);
    plVar27 = plVar22 + 1;
    plVar10 = plVar22 + 4;
    local_140 = plVar27;
    local_138 = plVar10;
    lVar8 = FUN_140decfc0(local_c0,plVar22);
    lVar16 = *(longlong *)(*plVar22 + 0x168);
    if (lVar16 == 0) {
      puVar15 = &local_a8;
      local_a8 = _DAT_1468b5d90;
      local_a0 = DAT_1468b5d98;
    }
    else {
      puVar15 = (undefined8 *)&local_b8;
      local_b8 = *(undefined4 *)(lVar16 + 0x220);
      local_b0 = *(undefined4 *)(lVar16 + 0x228);
      uStack_b4 = *(undefined4 *)(lVar16 + 0x224);
    }
    local_d8 = *puVar15;
    fVar34 = (float)((ulonglong)local_d8 >> 0x20);
    local_d0 = *(undefined4 *)(puVar15 + 1);
    *(undefined8 *)(lVar8 + 8) = local_d8;
    fVar35 = (float)local_d8;
    *(undefined4 *)(lVar8 + 0x10) = local_d0;
    if (((float)local_d8 < *(float *)(param_1 + 0xa4)) || (fVar34 < *(float *)(param_1 + 0xa8))) {
      FUN_1430ffc70(param_1,*plVar22,&local_d8,0);
    }
    if (*(char *)(param_1 + 0x1b0) == '\0') {
      fVar33 = SQRT(*(float *)(lVar8 + 0x38));
      iVar13 = (int)*plVar10;
      fVar35 = fVar35 - *(float *)(param_1 + 0xa4);
      fVar34 = fVar34 - *(float *)(param_1 + 0xa8);
      fVar32 = 1.0 / *(float *)(param_1 + 0xa0);
      iVar5 = (int)((fVar35 - fVar33) * fVar32);
      if (iVar5 < 1) {
        iVar5 = 0;
      }
      iVar17 = (int)((fVar34 - fVar33) * fVar32);
      if (iVar17 < 1) {
        iVar17 = 0;
      }
      local_130 = (longlong *)CONCAT44(iVar17,iVar5);
      iVar14 = (int)((fVar33 + fVar34) * fVar32);
      iVar23 = (int)((fVar33 + fVar35) * fVar32);
      if (iVar23 < 1) {
        iVar23 = 0;
      }
      if (iVar14 < 1) {
        iVar14 = 0;
      }
      uStack_128 = CONCAT44(iVar14,iVar23);
      if (iVar13 == -1) {
        FUN_1430ff640(param_1,*plVar22,&local_130);
        uVar19 = 0;
        puVar15 = *(undefined8 **)(param_1 + 0x1b8);
        uVar26 = (longlong)*(int *)(param_1 + 0x1c0) & 0x1fffffffffffffff;
        if (puVar15 + *(int *)(param_1 + 0x1c0) < puVar15) {
          uVar26 = uVar19;
        }
        if (uVar26 != 0) {
          do {
            plVar10 = (longlong *)FUN_1430ff580(*puVar15);
            (**(code **)(*plVar10 + 0x278))(plVar10,plVar27);
            uVar19 = uVar19 + 1;
            puVar15 = puVar15 + 1;
          } while (uVar19 != uVar26);
        }
      }
      else {
        bVar3 = false;
        if (((((int)plVar22[5] < iVar5) || (iVar23 < iVar13)) ||
            (*(int *)((longlong)plVar22 + 0x2c) < iVar17)) ||
           (iVar14 < *(int *)((longlong)plVar22 + 0x24))) {
          puVar1 = (ulonglong *)(param_1 + 0x1b8);
          FUN_1430ff640(param_1,*plVar22,plVar10,puVar1);
          uVar19 = 0;
          puVar15 = (undefined8 *)*puVar1;
          uVar26 = (longlong)*(int *)(param_1 + 0x1c0) & 0x1fffffffffffffff;
          if (puVar15 + *(int *)(param_1 + 0x1c0) < puVar15) {
            uVar26 = uVar19;
          }
          if (uVar26 != 0) {
            do {
              plVar10 = (longlong *)FUN_1430ff580(*puVar15);
              (**(code **)(*plVar10 + 0x280))(plVar10,plVar27,1);
              uVar19 = uVar19 + 1;
              puVar15 = puVar15 + 1;
            } while (uVar19 != uVar26);
          }
          FUN_1430ff640(param_1,*plVar22,&local_130);
          uVar19 = 0;
          puVar15 = (undefined8 *)*puVar1;
          uVar26 = (longlong)*(int *)(param_1 + 0x1c0) & 0x1fffffffffffffff;
          if (puVar15 + *(int *)(param_1 + 0x1c0) < puVar15) {
            uVar26 = uVar19;
          }
          if (uVar26 != 0) {
            do {
              plVar10 = (longlong *)FUN_1430ff580(*puVar15);
              (**(code **)(*plVar10 + 0x278))(plVar10,plVar27);
              uVar19 = uVar19 + 1;
              puVar15 = puVar15 + 1;
            } while (uVar19 != uVar26);
          }
        }
        else {
          if (iVar13 < iVar5) {
            do {
              uVar9 = FUN_1430ff940(param_1,iVar13);
              iVar18 = *(int *)((longlong)plVar22 + 0x24);
              if (iVar18 <= *(int *)((longlong)plVar22 + 0x2c)) {
                do {
                  plVar10 = (longlong *)
                            UReplicationGraphNode_GridSpatialization2D::GetCell
                                      (param_1,uVar9,iVar18);
                  if (*plVar10 != 0) {
                    plVar10 = (longlong *)FUN_1430ff580();
                    (**(code **)(*plVar10 + 0x280))(plVar10,plVar27,1);
                  }
                  iVar18 = iVar18 + 1;
                } while (iVar18 <= *(int *)((longlong)plVar22 + 0x2c));
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar5);
LAB_143106636:
            bVar3 = true;
          }
          else {
            iVar18 = iVar5;
            if (iVar5 < iVar13) {
              do {
                uVar9 = FUN_1430ff940(param_1,iVar18);
                for (iVar13 = iVar17; iVar13 <= iVar14; iVar13 = iVar13 + 1) {
                  uVar11 = UReplicationGraphNode_GridSpatialization2D::GetCell(param_1,uVar9,iVar13)
                  ;
                  uVar11 = FUN_1430ff9f0(param_1,uVar11);
                  plVar10 = (longlong *)FUN_1430ff580(uVar11);
                  (**(code **)(*plVar10 + 0x278))(plVar10,plVar27);
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 < (int)plVar22[4]);
              goto LAB_143106636;
            }
          }
          plVar10 = plVar22 + 4;
          iVar13 = (int)plVar22[5];
          if (iVar13 < iVar23) {
            local_178 = iVar13 + 1;
            bVar3 = true;
            if (local_178 <= iVar23) {
              do {
                plVar10 = (longlong *)FUN_1430ff940(param_1);
                uVar26 = (ulonglong)iVar17;
                if (iVar17 <= iVar14) {
                  lVar16 = uVar26 * 8;
                  lVar8 = (longlong)(iVar17 + 1) << 3;
                  do {
                    iVar13 = (int)plVar10[1];
                    iVar18 = (int)uVar26;
                    if (iVar13 <= iVar18) {
                      if (iVar13 < iVar18 + 1) {
                        iVar28 = (iVar18 - iVar13) + 1;
                        iVar6 = iVar28 + iVar13;
                        *(int *)(plVar10 + 1) = iVar6;
                        if (*(int *)((longlong)plVar10 + 0xc) < iVar6) {
                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10)
                          ;
                        }
                        _guard_xfg_dispatch_icall_nop
                                  ((void *)(*plVar10 + (longlong)iVar13 * 8),0,(longlong)iVar28 << 3
                                  );
                        plVar27 = local_140;
                      }
                      else if ((iVar18 + 1 < iVar13) &&
                              (iVar6 = (iVar13 - iVar18) + -1, plVar27 = local_140, iVar6 != 0)) {
                        iVar28 = ((iVar13 - iVar6) - iVar18) + -1;
                        if (iVar28 != 0) {
                          _guard_xfg_dispatch_icall_nop
                                    ((void *)(*plVar10 + lVar8),
                                     (void *)(*plVar10 + (longlong)iVar13 * 8),(longlong)iVar28 << 3
                                    );
                          iVar13 = (int)plVar10[1];
                        }
                        *(int *)(plVar10 + 1) = iVar13 - iVar6;
                        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
                        plVar27 = local_140;
                      }
                    }
                    lVar30 = *plVar10;
                    if (*(longlong *)(lVar16 + lVar30) == 0) {
                      local_98 = param_1;
                      if (*(int *)(param_1 + 0x90) == 0) {
LAB_14310676a:
                        uVar9 = 0;
                      }
                      else {
                        plVar22 = *(longlong **)(param_1 + 0x80);
                        if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) {
                          plVar22 = (longlong *)(param_1 + 0x60);
                        }
                        if (plVar22 == (longlong *)0x0) goto LAB_14310676a;
                        uVar9 = (**(code **)(*plVar22 + 8))();
                      }
                      uVar9 = (**(code **)(param_1 + 0x50))(uVar9,&local_98);
                      *(undefined8 *)(lVar16 + lVar30) = uVar9;
                    }
                    plVar22 = (longlong *)FUN_1430ff580(*(undefined8 *)(lVar16 + lVar30));
                    (**(code **)(*plVar22 + 0x278))();
                    uVar26 = (ulonglong)(iVar18 + 1U);
                    lVar8 = lVar8 + 8;
                    lVar16 = lVar16 + 8;
                  } while ((int)(iVar18 + 1U) <= iVar14);
                }
                local_178 = local_178 + 1;
              } while (local_178 <= iVar23);
              iVar13 = (int)plVar27[4];
              plVar10 = local_138;
            }
          }
          else if (iVar23 < iVar13) {
            local_178 = iVar23 + 1;
            bVar3 = true;
            if (local_178 <= iVar13) {
              do {
                plVar22 = (longlong *)FUN_1430ff940(param_1);
                plVar27 = local_140;
                iVar13 = *(int *)((longlong)plVar10 + 4);
                uVar26 = (ulonglong)iVar13;
                if (iVar13 <= *(int *)((longlong)plVar10 + 0xc)) {
                  lVar16 = uVar26 * 8;
                  do {
                    iVar13 = iVar13 + 1;
                    iVar18 = (int)plVar22[1];
                    if (iVar18 <= (int)uVar26) {
                      if (iVar18 < iVar13) {
                        *(int *)(plVar22 + 1) = iVar13;
                        if (*(int *)((longlong)plVar22 + 0xc) < iVar13) {
                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar22)
                          ;
                        }
                        _guard_xfg_dispatch_icall_nop
                                  ((void *)(*plVar22 + (longlong)iVar18 * 8),0,
                                   (longlong)(iVar13 - iVar18) << 3);
                        plVar10 = plVar27 + 3;
                      }
                      else if ((iVar13 < iVar18) && (iVar13 != iVar18)) {
                        *(int *)(plVar22 + 1) = iVar13;
                        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar22);
                      }
                    }
                    if (*(longlong *)(*plVar22 + lVar16) != 0) {
                      plVar12 = (longlong *)FUN_1430ff580();
                      (**(code **)(*plVar12 + 0x280))(plVar12,plVar27,1);
                    }
                    uVar29 = (int)uVar26 + 1;
                    uVar26 = (ulonglong)uVar29;
                    lVar16 = lVar16 + 8;
                  } while ((int)uVar29 <= *(int *)((longlong)plVar10 + 0xc));
                }
                iVar13 = (int)plVar10[1];
                local_178 = local_178 + 1;
              } while (local_178 <= iVar13);
            }
          }
          local_174 = (int)*plVar10;
          if ((int)*plVar10 <= iVar5) {
            local_174 = iVar5;
          }
          if (iVar23 <= iVar13) {
            iVar13 = iVar23;
          }
          lVar16 = (longlong)iVar13;
          if (*(int *)((longlong)plVar10 + 4) < iVar17) {
            lVar8 = (longlong)local_174;
            bVar3 = true;
            if (lVar8 <= lVar16) {
              lVar30 = lVar8 << 4;
              lVar8 = (lVar16 - lVar8) + 1;
              iVar13 = local_174;
              do {
                iVar5 = iVar13 + 1;
                plVar27 = (longlong *)(param_1 + 0x1a0);
                local_c8 = lVar30;
                if (*(int *)(param_1 + 0x1a8) <= iVar13) {
                  iVar13 = *(int *)(param_1 + 0x1a8);
                  if (iVar13 < iVar5) {
                    *(int *)(param_1 + 0x1a8) = iVar5;
                    if (*(int *)(param_1 + 0x1ac) < iVar5) {
                      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar27);
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)iVar13 * 0x10 + *plVar27),0,
                               (longlong)(iVar5 - iVar13) << 4);
                  }
                  else if (iVar5 < iVar13) {
                    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
                              (plVar27,iVar5,iVar13 - iVar5,1);
                  }
                }
                plVar22 = local_140;
                iVar13 = *(int *)((longlong)plVar10 + 4);
                uVar26 = (ulonglong)iVar13;
                plVar27 = (longlong *)(*plVar27 + lVar30);
                if (iVar13 < iVar17) {
                  lVar24 = uVar26 * 8;
                  do {
                    iVar13 = iVar13 + 1;
                    iVar23 = (int)plVar27[1];
                    iVar18 = (int)uVar26;
                    if (iVar23 <= iVar18) {
                      if (iVar23 < iVar13) {
                        iVar28 = (iVar18 - iVar23) + 1;
                        iVar6 = iVar28 + iVar23;
                        *(int *)(plVar27 + 1) = iVar6;
                        if (*(int *)((longlong)plVar27 + 0xc) < iVar6) {
                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar27)
                          ;
                        }
                        _guard_xfg_dispatch_icall_nop
                                  ((void *)(*plVar27 + (longlong)iVar23 * 8),0,(longlong)iVar28 << 3
                                  );
                      }
                      else if ((iVar13 < iVar23) && (iVar6 = (iVar23 - iVar18) + -1, iVar6 != 0)) {
                        *(int *)(plVar27 + 1) = iVar23 - iVar6;
                        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar27);
                      }
                    }
                    if (*(longlong *)(*plVar27 + lVar24) != 0) {
                      plVar10 = (longlong *)FUN_1430ff580();
                      (**(code **)(*plVar10 + 0x280))(plVar10,plVar22,1);
                    }
                    uVar26 = (ulonglong)(iVar18 + 1U);
                    lVar24 = lVar24 + 8;
                    plVar10 = local_138;
                    lVar30 = local_c8;
                  } while ((int)(iVar18 + 1U) < iVar17);
                }
                lVar30 = lVar30 + 0x10;
                lVar8 = lVar8 + -1;
                local_c8 = lVar30;
                iVar13 = iVar5;
              } while (lVar8 != 0);
LAB_143106c82:
              bVar3 = true;
            }
          }
          else if (iVar17 < *(int *)((longlong)plVar10 + 4)) {
            lVar8 = (longlong)local_174;
            bVar3 = true;
            if (lVar8 <= lVar16) {
              lVar30 = lVar8 << 4;
              lVar8 = (lVar16 - lVar8) + 1;
              iVar13 = local_174;
              do {
                plVar27 = (longlong *)(param_1 + 0x1a0);
                local_108 = lVar30;
                if (*(int *)(param_1 + 0x1a8) <= iVar13) {
                  iVar5 = *(int *)(param_1 + 0x1a8);
                  iVar23 = iVar13 + 1;
                  if (iVar5 < iVar23) {
                    iVar18 = (iVar13 - iVar5) + 1;
                    iVar23 = iVar5 + iVar18;
                    *(int *)(param_1 + 0x1a8) = iVar23;
                    if (*(int *)(param_1 + 0x1ac) < iVar23) {
                      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar27);
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)iVar5 * 0x10 + *plVar27),0,(longlong)iVar18 << 4);
                  }
                  else if (iVar23 < iVar5) {
                    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
                              (plVar27,iVar23,(iVar5 - iVar13) + -1,1);
                  }
                }
                plVar22 = local_138;
                plVar27 = (longlong *)(lVar30 + *plVar27);
                if (iVar17 < *(int *)((longlong)plVar10 + 4)) {
                  iVar5 = iVar17 + 1;
                  lVar30 = (longlong)iVar17 * 8;
                  do {
                    iVar23 = (int)plVar27[1];
                    if (iVar23 <= iVar5 + -1) {
                      if (iVar23 < iVar5) {
                        *(int *)(plVar27 + 1) = iVar5;
                        if (*(int *)((longlong)plVar27 + 0xc) < iVar5) {
                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar27)
                          ;
                        }
                        _guard_xfg_dispatch_icall_nop
                                  ((void *)(*plVar27 + (longlong)iVar23 * 8),0,
                                   (longlong)(iVar5 - iVar23) << 3);
                      }
                      else if ((iVar5 < iVar23) && (iVar5 != iVar23)) {
                        *(int *)(plVar27 + 1) = iVar5;
                        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
                      }
                    }
                    lVar24 = *plVar27;
                    if (*(longlong *)(lVar30 + lVar24) == 0) {
                      local_90 = param_1;
                      if (*(int *)(param_1 + 0x90) == 0) {
LAB_143106c0a:
                        uVar9 = 0;
                      }
                      else {
                        plVar10 = *(longlong **)(param_1 + 0x80);
                        if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) {
                          plVar10 = (longlong *)(param_1 + 0x60);
                        }
                        if (plVar10 == (longlong *)0x0) goto LAB_143106c0a;
                        uVar9 = (**(code **)(*plVar10 + 8))();
                      }
                      uVar9 = (**(code **)(param_1 + 0x50))(uVar9,&local_90);
                      *(undefined8 *)(lVar30 + lVar24) = uVar9;
                    }
                    plVar10 = (longlong *)FUN_1430ff580(*(undefined8 *)(lVar30 + lVar24));
                    (**(code **)(*plVar10 + 0x278))();
                    iVar5 = iVar5 + 1;
                    lVar30 = lVar30 + 8;
                    plVar10 = local_138;
                  } while (iVar5 <= *(int *)((longlong)plVar22 + 4));
                }
                iVar13 = iVar13 + 1;
                lVar30 = local_108 + 0x10;
                lVar8 = lVar8 + -1;
                local_108 = lVar30;
              } while (lVar8 != 0);
              goto LAB_143106c82;
            }
          }
          if (*(int *)((longlong)plVar10 + 0xc) < iVar14) {
            lVar8 = (longlong)local_174;
            if (lVar8 <= lVar16) {
              lVar30 = lVar8 << 4;
              lVar16 = (lVar16 - lVar8) + 1;
              do {
                iVar13 = local_174 + 1;
                plVar27 = (longlong *)(param_1 + 0x1a0);
                local_108 = lVar30;
                if (*(int *)(param_1 + 0x1a8) <= local_174) {
                  iVar5 = *(int *)(param_1 + 0x1a8);
                  if (iVar5 < iVar13) {
                    *(int *)(param_1 + 0x1a8) = iVar13;
                    if (*(int *)(param_1 + 0x1ac) < iVar13) {
                      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar27);
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)iVar5 * 0x10 + *plVar27),0,
                               (longlong)(iVar13 - iVar5) << 4);
                  }
                  else if (iVar13 < iVar5) {
                    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
                              (plVar27,iVar13,iVar5 - iVar13);
                  }
                }
                plVar27 = (longlong *)(*plVar27 + lVar30);
                iVar5 = *(int *)((longlong)plVar10 + 0xc) + 1;
                if (iVar5 <= iVar14) {
                  iVar17 = *(int *)((longlong)plVar10 + 0xc) + 2;
                  lVar24 = (longlong)iVar17 << 3;
                  lVar8 = (longlong)iVar5 * 8;
                  do {
                    iVar23 = (int)plVar27[1];
                    if (iVar23 <= iVar5) {
                      if (iVar23 < iVar17) {
                        iVar6 = (iVar5 - iVar23) + 1;
                        iVar18 = iVar23 + iVar6;
                        *(int *)(plVar27 + 1) = iVar18;
                        if (*(int *)((longlong)plVar27 + 0xc) < iVar18) {
                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar27)
                          ;
                        }
                        _guard_xfg_dispatch_icall_nop
                                  ((void *)(*plVar27 + (longlong)iVar23 * 8),0,(longlong)iVar6 << 3)
                        ;
                      }
                      else if ((iVar17 < iVar23) && (iVar18 = (iVar23 - iVar5) + -1, iVar18 != 0)) {
                        iVar6 = ((iVar23 - iVar18) - iVar5) + -1;
                        if (iVar6 != 0) {
                          _guard_xfg_dispatch_icall_nop
                                    ((void *)(*plVar27 + lVar24),
                                     (void *)(*plVar27 + (longlong)iVar23 * 8),(longlong)iVar6 << 3)
                          ;
                          iVar23 = (int)plVar27[1];
                        }
                        *(int *)(plVar27 + 1) = iVar23 - iVar18;
                        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
                      }
                    }
                    lVar30 = *plVar27;
                    if (*(longlong *)(lVar8 + lVar30) == 0) {
                      local_88 = param_1;
                      if (*(int *)(param_1 + 0x90) == 0) {
LAB_143106e3e:
                        uVar9 = 0;
                      }
                      else {
                        plVar10 = *(longlong **)(param_1 + 0x80);
                        if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) {
                          plVar10 = (longlong *)(param_1 + 0x60);
                        }
                        if (plVar10 == (longlong *)0x0) goto LAB_143106e3e;
                        uVar9 = (**(code **)(*plVar10 + 8))();
                      }
                      uVar9 = (**(code **)(param_1 + 0x50))(uVar9,&local_88);
                      *(undefined8 *)(lVar8 + lVar30) = uVar9;
                    }
                    plVar10 = (longlong *)FUN_1430ff580(*(undefined8 *)(lVar8 + lVar30));
                    (**(code **)(*plVar10 + 0x278))();
                    iVar5 = iVar5 + 1;
                    lVar24 = lVar24 + 8;
                    iVar17 = iVar17 + 1;
                    lVar8 = lVar8 + 8;
                    plVar10 = local_138;
                    lVar30 = local_108;
                  } while (iVar5 <= iVar14);
                }
                lVar30 = lVar30 + 0x10;
                lVar16 = lVar16 + -1;
                local_108 = lVar30;
                local_174 = iVar13;
              } while (lVar16 != 0);
            }
          }
          else if (iVar14 < *(int *)((longlong)plVar10 + 0xc)) {
            lVar8 = (longlong)local_174;
            if (lVar8 <= lVar16) {
              iVar14 = iVar14 + 1;
              lVar30 = lVar8 << 4;
              lVar16 = (lVar16 - lVar8) + 1;
              do {
                plVar27 = (longlong *)(param_1 + 0x1a0);
                if (*(int *)(param_1 + 0x1a8) <= local_174) {
                  iVar13 = *(int *)(param_1 + 0x1a8);
                  iVar5 = local_174 + 1;
                  if (iVar13 < iVar5) {
                    iVar17 = (local_174 - iVar13) + 1;
                    iVar5 = iVar13 + iVar17;
                    *(int *)(param_1 + 0x1a8) = iVar5;
                    if (*(int *)(param_1 + 0x1ac) < iVar5) {
                      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar27);
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)iVar13 * 0x10 + *plVar27),0,(longlong)iVar17 << 4)
                    ;
                  }
                  else if (iVar5 < iVar13) {
                    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
                              (plVar27,iVar5,(iVar13 - local_174) + -1);
                  }
                }
                plVar22 = local_140;
                plVar27 = (longlong *)(*plVar27 + lVar30);
                uVar26 = (ulonglong)iVar14;
                if (iVar14 <= *(int *)((longlong)plVar10 + 0xc)) {
                  lVar8 = uVar26 * 8;
                  iVar13 = iVar14;
                  do {
                    iVar13 = iVar13 + 1;
                    iVar5 = (int)plVar27[1];
                    if (iVar5 <= (int)uVar26) {
                      if (iVar5 < iVar13) {
                        *(int *)(plVar27 + 1) = iVar13;
                        if (*(int *)((longlong)plVar27 + 0xc) < iVar13) {
                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar27)
                          ;
                        }
                        _guard_xfg_dispatch_icall_nop
                                  ((void *)(*plVar27 + (longlong)iVar5 * 8),0,
                                   (longlong)(iVar13 - iVar5) << 3);
                        plVar10 = plVar22 + 3;
                      }
                      else if ((iVar13 < iVar5) && (iVar13 != iVar5)) {
                        *(int *)(plVar27 + 1) = iVar13;
                        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar27);
                      }
                    }
                    if (*(longlong *)(*plVar27 + lVar8) != 0) {
                      plVar12 = (longlong *)FUN_1430ff580();
                      (**(code **)(*plVar12 + 0x280))(plVar12,plVar22,1);
                    }
                    uVar29 = (int)uVar26 + 1;
                    uVar26 = (ulonglong)uVar29;
                    lVar8 = lVar8 + 8;
                  } while ((int)uVar29 <= *(int *)((longlong)plVar10 + 0xc));
                }
                lVar30 = lVar30 + 0x10;
                local_174 = local_174 + 1;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
          else if (!bVar3) goto LAB_1431071d4;
        }
      }
      *local_138 = (longlong)local_130;
      local_138[1] = uStack_128;
    }
LAB_1431071d4:
    uStack_e8 = uStack_e8 & ~uStack_f4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_f8);
  }
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    puVar15 = *(undefined8 **)(param_1 + 0x1a0);
    puVar31 = puVar15 + (longlong)*(int *)(param_1 + 0x1a8) * 2;
    for (; puVar15 != puVar31; puVar15 = puVar15 + 2) {
      plVar22 = (longlong *)*puVar15;
      plVar27 = plVar22 + *(int *)(puVar15 + 1);
      for (; plVar22 != plVar27; plVar22 = plVar22 + 1) {
        if ((longlong *)*plVar22 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar22 + 0x290))();
          *plVar22 = 0;
        }
      }
    }
    FUN_14172d470(0,1);
    lVar16 = param_1 + 0x110;
    uStack_15c = 1;
    local_160 = 0;
    local_150 = 0xffffffff;
    uStack_14c = 0;
    iStack_148 = 0;
    iVar13 = 0;
    puStack_158 = (uint *)lVar16;
    if (*(int *)(param_1 + 0x128) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
      iVar13 = *(int *)(param_1 + 0x128);
    }
    uStack_e8 = local_150;
    uStack_e4 = uStack_14c;
    uStack_110 = CONCAT44(uStack_144,iStack_148);
    uStack_128 = CONCAT44(uStack_15c,local_160);
    uStack_120 = (ulonglong)puStack_158;
    local_150 = -1 << ((byte)iVar13 & 0x1f);
    iStack_f8 = local_160;
    uStack_f4 = uStack_15c;
    local_f0 = puStack_158;
    uStack_14c = iVar13;
    local_130 = plVar10;
    local_e0 = uStack_110;
    uStack_118 = uStack_e8;
    uStack_114 = uStack_e4;
    local_100 = plVar10;
    while( true ) {
      lVar8 = 0;
      if (((uStack_e4 == iVar13) && (local_f0 == (uint *)lVar16)) &&
         (local_100 == (longlong *)(param_1 + 0x100))) break;
      plVar10 = (longlong *)((longlong)(int)uStack_e4 * 0x38 + *local_100);
      lVar30 = *plVar10;
      uVar29 = *(uint *)(lVar30 + 0xc);
      lVar24 = lVar8;
      if ((int)uVar29 < (int)DAT_1469e91c4) {
        uVar25 = uVar29 & 0xffff;
        uVar7 = uVar29;
        if ((int)uVar29 < 0) {
          uVar7 = uVar29 + 0xffff;
          uVar25 = uVar25 - 0x10000;
        }
        lVar24 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                 (longlong)(int)uVar25 * 0x18;
      }
      if (((*(uint *)(lVar24 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(lVar30 + 0x94) & 2) == 0)) {
        if ((int)uVar29 < (int)DAT_1469e91c4) {
          uVar7 = uVar29 & 0xffff;
          if ((int)uVar29 < 0) {
            uVar29 = uVar29 + 0xffff;
            uVar7 = uVar7 - 0x10000;
          }
          lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar29 >> 0x10) * 8) +
                  (longlong)(int)uVar7 * 0x18;
        }
        if ((((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(lVar30 + 0x92) & 0x40) != 0))
           && ((*(byte *)(lVar30 + 0x90) & 0x20) == 0)) {
          if (*(char *)(lVar30 + 0x129) == '\x04') {
            cVar4 = UAbilityTask::IsWaitingOnRemotePlayerdata(lVar30);
            if (cVar4 != '\0') goto LAB_143107591;
          }
          lVar8 = *(longlong *)(*plVar10 + 0x168);
          if (lVar8 == 0) {
            puVar15 = &local_a8;
            local_a8 = _DAT_1468b5d90;
            local_a0 = DAT_1468b5d98;
          }
          else {
            puVar15 = &local_d8;
            local_d0 = *(undefined4 *)(lVar8 + 0x228);
            local_d8 = *(undefined8 *)(lVar8 + 0x220);
          }
          uVar9 = *puVar15;
          lVar8 = FUN_140decfc0(local_c0,plVar10);
          uVar2 = *(undefined4 *)(puVar15 + 1);
          fVar32 = SQRT(*(float *)(lVar8 + 0x38));
          *(undefined8 *)(lVar8 + 8) = uVar9;
          *(undefined4 *)(lVar8 + 0x10) = uVar2;
          fVar34 = 1.0 / *(float *)(param_1 + 0xa0);
          fVar35 = (float)uVar9 - *(float *)(param_1 + 0xa4);
          fVar33 = (float)((ulonglong)uVar9 >> 0x20) - *(float *)(param_1 + 0xa8);
          iVar5 = (int)((fVar35 - fVar32) * fVar34);
          if (iVar5 < 1) {
            iVar5 = 0;
          }
          iVar17 = (int)((fVar33 - fVar32) * fVar34);
          iVar23 = 0;
          if (iVar17 < 1) {
            iVar17 = iVar23;
          }
          local_130 = (longlong *)CONCAT44(iVar17,iVar5);
          iVar5 = (int)((fVar32 + fVar35) * fVar34);
          if (iVar5 < 1) {
            iVar5 = iVar23;
          }
          iVar17 = (int)((fVar32 + fVar33) * fVar34);
          if (iVar17 < 1) {
            iVar17 = iVar23;
          }
          uStack_128 = CONCAT44(iVar17,iVar5);
          FUN_1430ff640(param_1,*plVar10,&local_130,param_1 + 0x1b8);
          uVar19 = 0;
          puVar15 = *(undefined8 **)(param_1 + 0x1b8);
          uVar26 = (longlong)*(int *)(param_1 + 0x1c0) & 0x1fffffffffffffff;
          if (puVar15 + *(int *)(param_1 + 0x1c0) < puVar15) {
            uVar26 = uVar19;
          }
          if (uVar26 != 0) {
            do {
              plVar27 = (longlong *)FUN_1430ff580(*puVar15);
              (**(code **)(*plVar27 + 0x278))(plVar27,plVar10 + 1);
              uVar19 = uVar19 + 1;
              puVar15 = puVar15 + 1;
            } while (uVar19 != uVar26);
          }
          *(undefined4 *)(plVar10 + 4) = (undefined4)local_130;
          *(undefined4 *)((longlong)plVar10 + 0x24) = local_130._4_4_;
          *(undefined4 *)(plVar10 + 5) = (undefined4)uStack_128;
          *(undefined4 *)((longlong)plVar10 + 0x2c) = uStack_128._4_4_;
        }
      }
LAB_143107591:
      uStack_e8 = uStack_e8 & ~uStack_f4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_f8);
    }
    plVar10 = (longlong *)(param_1 + 0x150);
    local_160 = 0;
    lVar16 = param_1 + 0x160;
    uStack_15c = 1;
    local_150 = 0xffffffff;
    uStack_14c = 0;
    iStack_148 = 0;
    iVar13 = 0;
    puStack_158 = (uint *)lVar16;
    if (*(int *)(param_1 + 0x178) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
      iVar13 = *(int *)(param_1 + 0x178);
    }
    uStack_e8 = local_150;
    uStack_e4 = uStack_14c;
    uStack_110 = CONCAT44(uStack_144,iStack_148);
    uStack_128 = CONCAT44(uStack_15c,local_160);
    local_150 = -1 << ((byte)iVar13 & 0x1f);
    uStack_120 = (ulonglong)puStack_158;
    iStack_f8 = local_160;
    uStack_f4 = uStack_15c;
    local_f0 = puStack_158;
    uStack_14c = iVar13;
    local_130 = plVar10;
    local_e0 = uStack_110;
    local_100 = plVar10;
    uStack_118 = uStack_e8;
    uStack_114 = uStack_e4;
    while (((uStack_e4 != iVar13 || (local_f0 != (uint *)lVar16)) || (local_100 != plVar10))) {
      plVar27 = (longlong *)((longlong)(int)uStack_e4 * 0x30 + *local_100);
      lVar8 = *plVar27;
      uVar29 = *(uint *)(lVar8 + 0xc);
      if ((int)uVar29 < (int)DAT_1469e91c4) {
        uVar25 = uVar29 & 0xffff;
        uVar7 = uVar29;
        if ((int)uVar29 < 0) {
          uVar7 = uVar29 + 0xffff;
          uVar25 = uVar25 - 0x10000;
        }
        lVar30 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                 (longlong)(int)uVar25 * 0x18;
      }
      else {
        lVar30 = 0;
      }
      lVar24 = 0;
      if (((*(uint *)(lVar30 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(lVar8 + 0x94) & 2) == 0)) {
        if ((int)uVar29 < (int)DAT_1469e91c4) {
          uVar7 = uVar29 & 0xffff;
          if ((int)uVar29 < 0) {
            uVar29 = uVar29 + 0xffff;
            uVar7 = uVar7 - 0x10000;
          }
          lVar24 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar29 >> 0x10) * 8) +
                   (longlong)(int)uVar7 * 0x18;
        }
        if ((((*(uint *)(lVar24 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(lVar8 + 0x92) & 0x40) != 0))
           && ((*(byte *)(lVar8 + 0x90) & 0x20) == 0)) {
          if (*(char *)(lVar8 + 0x129) == '\x04') {
            cVar4 = UAbilityTask::IsWaitingOnRemotePlayerdata(lVar8);
            if (cVar4 != '\0') goto LAB_14310775b;
          }
          uVar9 = FUN_140decfc0(local_c0,plVar27);
          FUN_1431095f0(param_1,plVar27 + 1,uVar9,(char)plVar27[4]);
        }
      }
LAB_14310775b:
      uStack_e8 = uStack_e8 & ~uStack_f4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_f8);
    }
    *(undefined1 *)(param_1 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 1431077a0 PrepareForWrite body=168 status=ok
// SIG undefined PrepareForWrite(void)

void FActorRepListRefView::PrepareForWrite(longlong *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    lVar3 = FUN_1430ffb70(&DAT_146b4b6c0,4);
    piVar4 = (int *)FUN_14310ae50(lVar3 + 8,lVar3);
    piVar2 = (int *)*param_1;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = (longlong)piVar4;
    if (piVar4 != (int *)0x0) {
      *piVar4 = *piVar4 + 1;
    }
    if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, *piVar2 = iVar1 + -1, iVar1 == 1)) {
      **(uint **)(piVar2 + 4) = **(uint **)(piVar2 + 4) & ~piVar2[6];
      piVar2[2] = 0;
    }
    param_1[1] = *param_1 + 0x20;
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(*param_1 + 4);
    return;
  }
  if (1 < *piVar2) {
    RequestNewList(param_1,(int)param_1[2],param_2 ^ 1);
    return;
  }
  if (param_2 != 0) {
    piVar2[2] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 143107850 FUN_143107850 body=2937 status=ok
// SIG undefined FUN_143107850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143107850(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  longlong *plVar22;
  uint uVar23;
  uint *puVar24;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  uint local_170;
  uint local_168;
  uint local_158;
  undefined2 *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined2 *local_130;
  undefined8 local_128;
  int local_120;
  uint uStack_11c;
  uint *puStack_118;
  undefined4 local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8 [2];
  longlong *local_d8;
  longlong lStack_d0;
  uint *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  longlong *local_78;
  char local_70;
  char cStack_6f;
  undefined6 uStack_6e;
  int local_68;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar23 = 0;
  local_158 = 0;
  local_f8 = param_2;
  local_f0 = param_1;
  uVar7 = FUN_141672640();
  FOutputDevice::LogfImpl(uVar7,L"================================================================")
  ;
  uVar7 = FUN_141672640();
  FOutputDevice::LogfImpl(uVar7,L"Printing All Actor Info. Replication Frame: %d. MatchString: %s");
  uVar7 = FUN_141672640();
  FOutputDevice::LogfImpl(uVar7,L"================================================================")
  ;
  lVar16 = param_1[0x8b];
  local_d8 = (longlong *)(lVar16 + 0x100);
  local_120 = 0;
  iVar6 = *(int *)(lVar16 + 0x128);
  puStack_118 = (uint *)(lVar16 + 0x110);
  uStack_11c = 1;
  iStack_10c = 0;
  iStack_108 = 0;
  if (iVar6 != 0) {
    puVar24 = *(uint **)(lVar16 + 0x120);
    if (*(uint **)(lVar16 + 0x120) == (uint *)0x0) {
      puVar24 = puStack_118;
    }
    uVar17 = *puVar24;
    local_120 = 0;
    iStack_108 = 0;
    while (uVar17 == 0) {
      lVar19 = (longlong)local_120;
      iStack_108 = iStack_108 + 0x20;
      iVar15 = local_120 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_120;
      local_120 = iVar15;
      if (bVar2) goto LAB_1431079b0;
      uVar17 = puVar24[lVar19 + 1];
    }
    uStack_11c = uVar17 - 1 & uVar17 ^ uVar17;
    iVar15 = 0x1f;
    if (uStack_11c != 0) {
      for (; uStack_11c >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uStack_11c == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    iStack_10c = (iStack_108 - iVar15) + 0x1f;
    if (iVar6 < iStack_10c) {
LAB_1431079b0:
      iStack_10c = iVar6;
    }
  }
  local_110 = 0xffffffff;
  uStack_90 = CONCAT44(iStack_10c,0xffffffff);
  auStack_c0._8_4_ = iStack_108;
  auStack_c0._0_8_ = uStack_90;
  auStack_c0._12_4_ = uStack_104;
  lStack_d0 = CONCAT44(uStack_11c,local_120);
  local_b0._0_4_ = SUB84(local_d8,0);
  local_b0._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
  local_70 = '\0';
  cStack_6f = '\0';
  local_88._8_4_ = (undefined4)local_b0;
  local_88._0_8_ = auStack_c0._8_8_;
  local_88._12_4_ = local_b0._4_4_;
  iVar6 = iStack_10c;
  puStack_c8 = puStack_118;
  local_b0 = local_d8;
  local_a8 = local_d8;
  uStack_a0 = lStack_d0;
  local_98 = puStack_118;
  local_78 = local_d8;
  if (iStack_10c < *(int *)(lVar16 + 0x128)) {
    do {
      plVar22 = local_a8;
      lVar19 = (longlong)iVar6 * 0x2c;
      local_140 = CONCAT44(*(undefined4 *)(lVar19 + 4 + *local_a8),
                           *(undefined4 *)(lVar19 + *local_a8));
      puVar8 = (undefined2 *)FWeakObjectPtr::Get(&local_140);
      lVar16 = *plVar22;
      if ((int)param_2[1] < 2) {
LAB_143107ab1:
        bVar2 = true;
      }
      else {
        uVar23 = uVar23 | 1;
        local_158 = uVar23;
        uVar7 = UObjectBaseUtility::GetPathName(puVar8,local_e8,0);
        if ((int)param_2[1] == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*param_2;
        }
        local_188 = 0xffffffff;
        iVar6 = FUN_141592950(uVar7,puVar20);
        if (iVar6 != -1) goto LAB_143107ab1;
        bVar2 = false;
      }
      if (((uVar23 & 1) != 0) &&
         (uVar23 = uVar23 & 0xfffffffe, local_158 = uVar23, local_e8[0] != 0)) {
        FMemory::Free();
      }
      puVar20 = puVar8;
      if (bVar2) {
        for (; puVar20 != (undefined2 *)0x0; puVar20 = *(undefined2 **)(puVar20 + 0x18)) {
          iVar6 = *(int *)(puVar20 + 6);
          if (iVar6 < (int)DAT_1469e91c4) {
            uVar17 = iVar6 >> 0x1f & 0xffff;
            uVar23 = iVar6 + uVar17;
            lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar23 >> 0x10) * 8) +
                     (longlong)(int)((uVar23 & 0xffff) - uVar17) * 0x18;
          }
          else {
            lVar13 = 0;
          }
          uVar23 = local_158;
          if ((((*(uint *)(lVar13 + 8) >> 0x19 & 1) != 0) ||
              (lVar13 = *(longlong *)(puVar20 + 0x18), lVar13 == 0)) ||
             (lVar9 = FUN_1428dfc70(), uVar23 = local_158, lVar13 == lVar9)) break;
        }
        uVar7 = FUN_141672640();
        FOutputDevice::LogfImpl(uVar7,&DAT_145ab966c);
        if (puVar20 == (undefined2 *)0x0) {
          local_148 = 5;
          local_150 = puVar20;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
          FGenericPlatformString::Memcpy(local_150,&DAT_143f3edc8,10);
        }
        else {
          local_100 = *(undefined8 *)(puVar20 + 0xc);
          FName::ToString(&local_100,&local_150);
        }
        if (puVar8 == (undefined2 *)0x0) {
          local_128 = 5;
          local_130 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,0);
          FGenericPlatformString::Memcpy(local_130,&DAT_143f3edc8,10);
        }
        else {
          local_138 = *(undefined8 *)(puVar8 + 0xc);
          FName::ToString(&local_138,&local_130);
        }
        puVar8 = &DAT_143f3eda8;
        if ((int)local_128 != 0) {
          puVar8 = local_130;
        }
        uVar7 = FUN_141672640();
        FOutputDevice::LogfImpl(uVar7,L"ClassInfo for %s (Native: %s)",puVar8);
        if (local_130 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_150 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        FUN_1430fcc40(lVar16 + lVar19 + 8,&local_120);
        uVar7 = FUN_141672640();
        FOutputDevice::LogfImpl(uVar7,L"  %s");
        if (CONCAT44(uStack_11c,local_120) != 0) {
          FMemory::Free();
        }
      }
      uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_a0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      iVar6 = uStack_90._4_4_;
    } while (uStack_90._4_4_ < (int)local_98[6]);
    if ((local_70 != '\0') && (cStack_6f != '\0')) {
      FUN_140de5e00(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  uVar7 = FUN_1428dfc70();
  local_140 = (**(code **)(*param_1 + 0x148))(param_1);
  local_a8 = (longlong *)CONCAT44(local_a8._4_4_,5);
  local_50 = '\0';
  local_138 = uVar7;
  FUN_14044bc80(&uStack_a0,&local_140,&local_138);
  FUN_14045a130(&local_a8);
  plVar22 = local_78;
  cVar5 = local_88[4];
joined_r0x000143107d1a:
  local_78 = plVar22;
  if (cVar5 == '\0') {
    iVar6 = *(int *)((longlong)plVar22 + 0xc);
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar18 = iVar6 >> 0x1f & 0xffff;
      uVar17 = iVar6 + uVar18;
      lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar17 >> 0x10) * 8) +
               (longlong)(int)((uVar17 & 0xffff) - uVar18) * 0x18;
    }
    else {
      lVar16 = 0;
    }
    if ((*(uint *)(lVar16 + 8) >> 0x1d & 1) == 0) {
      if ((*(byte *)((longlong)plVar22 + 0x94) & 2) == 0) {
        if (iVar6 < (int)DAT_1469e91c4) {
          uVar18 = iVar6 >> 0x1f & 0xffff;
          uVar17 = iVar6 + uVar18;
          lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar17 >> 0x10) * 8) +
                   (longlong)(int)((uVar17 & 0xffff) - uVar18) * 0x18;
        }
        else {
          lVar16 = 0;
        }
        if ((*(uint *)(lVar16 + 8) >> 0x1d & 1) != 0) goto LAB_143107db2;
        bVar2 = false;
      }
      else {
LAB_143107db2:
        bVar2 = true;
      }
      if (bVar2) goto LAB_143107dbc;
      bVar2 = true;
    }
    else {
LAB_143107dbc:
      bVar2 = false;
    }
    if (bVar2) {
      if ((int)param_2[1] < 2) {
LAB_143107e18:
        bVar2 = true;
      }
      else {
        uVar23 = uVar23 | 2;
        local_158 = uVar23;
        uVar7 = UObjectBaseUtility::GetPathName(plVar22,&local_120,0);
        if ((int)param_2[1] == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*param_2;
        }
        local_188 = 0xffffffff;
        iVar6 = FUN_141592950(uVar7,puVar8,1);
        if (iVar6 != -1) goto LAB_143107e18;
        bVar2 = false;
      }
      if (((uVar23 & 2) != 0) &&
         (local_158 = uVar23 & 0xfffffffd, CONCAT44(uStack_11c,local_120) != 0)) {
        FMemory::Free();
      }
      if (bVar2) {
        lVar16 = param_1[0x8b];
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(lVar16 + 0xb0,&local_100,plVar22);
        if (((((int)local_100 != -1) &&
             (lVar16 = *(longlong *)(lVar16 + 0xb0) + (longlong)(int)local_100 * 0x18, lVar16 != 0))
            && (plVar10 = (longlong *)(lVar16 + 8), plVar10 != (longlong *)0x0)) &&
           (lVar16 = *plVar10, lVar16 != 0)) {
          uVar7 = FUN_141672640();
          FOutputDevice::LogfImpl(uVar7,&DAT_145ab978c);
          puVar11 = (undefined8 *)UObjectBaseUtility::GetPathName(plVar22,local_e8,0);
          if (*(int *)(puVar11 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar11;
          }
          uVar7 = FUN_141672640();
          FOutputDevice::LogfImpl(uVar7,L"GlobalInfo for %s",puVar8);
          if (local_e8[0] != 0) {
            FMemory::Free();
          }
          uVar7 = FUN_141672640();
          FUN_143101be0(lVar16,uVar7);
        }
        lVar16 = param_1[0x8c];
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(lVar16 + 0x30,&local_140,plVar22);
        if ((((int)local_140 != -1) &&
            (lVar16 = (longlong)(int)local_140 * 0x20 + *(longlong *)(lVar16 + 0x30), lVar16 != 0))
           && ((puVar11 = (undefined8 *)(lVar16 + 8), puVar11 != (undefined8 *)0x0 &&
               (puVar11 = (undefined8 *)*puVar11, puVar11 != (undefined8 *)0x0)))) {
          uVar7 = FUN_141672640();
          FOutputDevice::LogfImpl(uVar7,&DAT_145ab9ac4);
          puVar12 = (undefined8 *)UObjectBaseUtility::GetPathName(plVar22,&local_130,0);
          if (*(int *)(puVar12 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar12;
          }
          uVar7 = FUN_141672640();
          FOutputDevice::LogfImpl(uVar7,L"ConnectionInfo for %s",puVar8);
          if (local_130 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          uVar7 = FUN_141672640();
          puVar8 = (undefined2 *)*puVar11;
          if (puVar8 == (undefined2 *)0x0) {
            local_148 = 5;
            local_150 = puVar8;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
            FGenericPlatformString::Memcpy(local_150,&DAT_143f3edc8,10);
          }
          else {
            local_138 = *(undefined8 *)(puVar8 + 0xc);
            FName::ToString(&local_138,&local_150);
          }
          puVar8 = &DAT_143f3eda8;
          if ((int)local_148 != 0) {
            puVar8 = local_150;
          }
          FOutputDevice::LogfImpl(uVar7,L"  Channel: %s",puVar8);
          if (local_150 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          FOutputDevice::LogfImpl
                    (uVar7,L"  CullDistSq: %.2f (%.2f)",(double)*(float *)(puVar11 + 1),
                     (double)SQRT(*(float *)(puVar11 + 1)));
          local_178 = *(undefined4 *)((longlong)puVar11 + 0x1c);
          local_180 = *(undefined4 *)(puVar11 + 3);
          local_188 = *(undefined4 *)((longlong)puVar11 + 0x14);
          local_168 = (uint)(*(byte *)((longlong)puVar11 + 0x24) >> 1 & 1);
          local_170 = (uint)(*(byte *)((longlong)puVar11 + 0x24) & 1);
          FOutputDevice::LogfImpl
                    (uVar7,
                     L"  NextReplicationFrameNum: %d. ReplicationPeriodFrame: %d. LastRepFrameNum: %d. StarvedFrameNum: %d. ActorChannelCloseFrameNum: %d. IsDormantOnConnection: %d. TearOff: %d"
                     ,*(undefined4 *)((longlong)puVar11 + 0xc),*(undefined4 *)(puVar11 + 2));
        }
      }
    }
    lVar16 = uStack_a0;
    uVar21 = uStack_90 & 0xffffffff;
    iVar6 = local_88._0_4_ + 1;
    if (iVar6 < (int)(local_68 + (uint)uStack_90)) {
      lVar19 = (longlong)iVar6 * 8;
      iVar15 = local_68;
      do {
        if (iVar6 < (int)uVar21) {
          plVar22 = *(longlong **)(lVar19 + (longlong)local_98);
        }
        else {
          plVar22 = *(longlong **)
                     (CONCAT62(uStack_6e,CONCAT11(cStack_6f,local_70)) +
                     (longlong)(iVar6 - (int)uVar21) * 8);
        }
        local_88._8_4_ = local_88._8_4_ + 1;
        if (plVar22 != (longlong *)0x0) {
          lVar13 = AActor::GetLevel(plVar22);
          if (lVar13 != 0) {
            if (((ulonglong)local_a8 & 1) != 0) {
              iVar15 = *(int *)((longlong)plVar22 + 0xc);
              if (iVar15 < (int)DAT_1469e91c4) {
                uVar17 = iVar15 >> 0x1f & 0xffff;
                uVar23 = iVar15 + uVar17;
                lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar23 >> 0x10) * 8) +
                        (longlong)(int)((uVar23 & 0xffff) - uVar17) * 0x18;
              }
              else {
                lVar9 = 0;
              }
              if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) != 0) goto LAB_14310823e;
            }
            if (((uint)local_a8 >> 1 & 1) != 0) {
              cVar5 = FOutputDevice::CanBeUsedOnAnyThread(plVar22);
              if (cVar5 == '\0') goto LAB_14310823e;
            }
            if (((uint)local_a8 >> 2 & 1) != 0) {
              if (((*(byte *)(lVar13 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar13 + 0x205) & 0x10) == 0)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              piVar1 = *(int **)(lVar13 + 600);
              if (((*(longlong *)(lVar13 + 0xc0) == 0) ||
                  (piVar14 = (int *)UWorld::GetActiveLevelCollection(), piVar14 == (int *)0x0)) ||
                 (piVar1 == piVar14)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if ((piVar1 == (int *)0x0) || (*piVar1 == 2)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar3) || (bVar3 = false, bVar4)) {
                bVar3 = true;
              }
              if ((!bVar2) || (!bVar3)) goto LAB_14310823e;
            }
            lVar13 = ULevel::GetWorld(lVar13);
            if (lVar13 == lVar16) {
              lVar13 = AActor::GetLevel(plVar22);
              if (lVar13 == *(longlong *)(lVar16 + 0x30)) goto LAB_1431083a6;
              lVar13 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar22[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar22[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                  lVar13 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_1431083a6;
            }
          }
LAB_14310823e:
          uVar21 = uStack_90 & 0xffffffff;
          iVar15 = local_68;
        }
        iVar6 = iVar6 + 1;
        lVar19 = lVar19 + 8;
        if (iVar15 + (int)uVar21 <= iVar6) break;
      } while( true );
    }
    local_78 = (longlong *)0x0;
    local_88[4] = 1;
    param_2 = local_f8;
  }
  if (local_50 != '\0') {
    local_50 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(uStack_a0,local_58);
    if (CONCAT62(uStack_6e,CONCAT11(cStack_6f,local_70)) != 0) {
      FMemory::Free();
    }
    if (local_98 != (uint *)0x0) {
      FMemory::Free();
    }
  }
  uVar7 = FUN_141672640();
  FOutputDevice::LogfImpl(uVar7,&DAT_145ab9ca4);
  uVar7 = FUN_141672640();
  FOutputDevice::LogfImpl(uVar7,L"sizeof(FGlobalActorReplicationInfo): %d",0x98);
  uVar7 = FUN_141672640();
  FOutputDevice::LogfImpl(uVar7,L"sizeof(FConnectionReplicationActorInfo): %d",0x28);
  plVar22 = local_f0;
  iVar6 = *(int *)(local_f0[0x8b] + 0xb8) - *(int *)(local_f0[0x8b] + 0xe4);
  uVar7 = FUN_141672640();
  FOutputDevice::LogfImpl
            (uVar7,
             L"Total GlobalActorReplicationInfoMap Num/Size (Unfiltered): %d elements / %d bytes",
             iVar6,(longlong)iVar6 * 0x98);
  iVar6 = *(int *)(plVar22[0x8c] + 0x38) - *(int *)(plVar22[0x8c] + 100);
  uVar7 = FUN_141672640();
  FOutputDevice::LogfImpl
            (uVar7,
             L"Total PerConnectionActorInfoMap Num/Size (Unfiltered, for this connection only): %d elements / %d bytes"
             ,iVar6,(longlong)iVar6 * 0x28);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
LAB_1431083a6:
  cVar5 = local_88[4];
  local_88._0_4_ = iVar6;
  param_1 = local_f0;
  param_2 = local_f8;
  uVar23 = local_158;
  goto joined_r0x000143107d1a;
}



// FUNCTION 1431083d0 FUN_1431083d0 body=807 status=ok
// SIG undefined FUN_1431083d0(void)

void FUN_1431083d0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  undefined1 local_res8 [8];
  int local_d8;
  uint uStack_d4;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  int iStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  plVar11 = (longlong *)0x0;
  lVar3 = *(longlong *)(param_1 + 0x458);
  local_a8 = (longlong *)(lVar3 + 0xb0);
  iVar2 = *(int *)(lVar3 + 0xd8);
  local_98 = (uint *)(lVar3 + 0xc0);
  iVar14 = 0;
  local_b8 = (longlong *)0x0;
  iVar12 = 0;
  local_ac = 0;
  local_d8 = 0;
  uStack_d4 = 1;
  iStack_c4 = 0;
  iStack_c0 = 0;
  if (iVar2 != 0) {
    puVar13 = *(uint **)(lVar3 + 0xd0);
    if (*(uint **)(lVar3 + 0xd0) == (uint *)0x0) {
      puVar13 = local_98;
    }
    uVar6 = *puVar13;
    iStack_c0 = 0;
    while (uVar6 == 0) {
      lVar10 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar8 = local_d8 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar8;
      if (bVar5) goto LAB_1431084af;
      uVar6 = puVar13[lVar10 + 1];
    }
    uStack_d4 = -uVar6 & uVar6;
    iVar8 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_c4 = (iStack_c0 - iVar8) + 0x1f;
    if (iVar2 < iStack_c4) {
LAB_1431084af:
      iStack_c4 = iVar2;
    }
  }
  uStack_90 = CONCAT44(iStack_c4,0xffffffff);
  auStack_50._8_4_ = iStack_c0;
  auStack_50._0_8_ = uStack_90;
  auStack_50._12_4_ = uStack_bc;
  iStack_60 = local_d8;
  uStack_5c = uStack_d4;
  local_70 = 0;
  local_40._0_4_ = SUB84(local_a8,0);
  local_40._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  iStack_a0 = local_d8;
  uStack_9c = uStack_d4;
  local_88._8_4_ = (undefined4)local_40;
  local_88._0_8_ = auStack_50._8_8_;
  local_88._12_4_ = local_40._4_4_;
  local_78 = local_a8;
  local_68 = local_a8;
  puStack_58 = local_98;
  local_40 = local_a8;
  if (iStack_c4 < *(int *)(lVar3 + 0xd8)) {
    do {
      lVar3 = *(longlong *)(*local_a8 + 8 + (longlong)iStack_c4 * 0x18);
      lVar10 = *(longlong *)(*local_a8 + (longlong)iStack_c4 * 0x18);
      if (lVar3 != 0) {
        if (plVar11 != plVar11 + (longlong)iVar12 * 2) {
          plVar7 = plVar11;
          do {
            if ((*plVar7 == *(longlong *)(lVar10 + 0x10)) &&
               (ABS(*(float *)(plVar7 + 1) - *(float *)(lVar3 + 0x38)) <= 1e-08)) {
              *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
              goto LAB_1431085d7;
            }
            plVar7 = plVar7 + 2;
          } while (plVar7 != plVar11 + (longlong)iVar12 * 2);
        }
        uVar4 = *(undefined8 *)(lVar10 + 0x10);
        uVar1 = *(undefined4 *)(lVar3 + 0x38);
        local_b0 = iVar12 + 1;
        if (iVar14 < local_b0) {
          TArray<`FVulkanDynamicRHI::SelectAndInitDevice'::`2'::FDeviceInfo,FDefaultAllocator>::
          ResizeGrow(&local_b8,iVar12);
          plVar11 = local_b8;
          iVar14 = local_ac;
        }
        local_d8 = (int)uVar4;
        uStack_d4 = (uint)((ulonglong)uVar4 >> 0x20);
        plVar7 = plVar11 + (longlong)iVar12 * 2;
        *(int *)plVar7 = local_d8;
        *(uint *)((longlong)plVar7 + 4) = uStack_d4;
        *(undefined4 *)(plVar7 + 1) = uVar1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        iVar12 = local_b0;
      }
LAB_1431085d7:
      uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
      iStack_c4 = uStack_90._4_4_;
    } while (uStack_90._4_4_ < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  local_res8[0] = 0;
  FUN_1430f7e50(plVar11,(longlong)iVar12,0,local_res8);
  plVar7 = plVar11;
  do {
    if (plVar7 == plVar11 + (longlong)iVar12 * 2) {
      if (plVar11 != (longlong *)0x0) {
        FMemory::Free(plVar11);
      }
      return;
    }
    for (lVar3 = *plVar7; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      uVar6 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar6 < (int)DAT_1469e91c4) {
        uVar9 = uVar6 & 0xffff;
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0xffff;
          uVar9 = uVar9 - 0x10000;
        }
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                 (longlong)(int)uVar9 * 0x18;
      }
      else {
        lVar10 = 0;
      }
      if ((*(uint *)(lVar10 + 8) >> 0x19 & 1) != 0) break;
    }
    plVar7 = plVar7 + 2;
  } while( true );
}



// FUNCTION 143108700 FUN_143108700 body=1047 status=ok
// SIG undefined FUN_143108700(void)

void FUN_143108700(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 **ppuVar14;
  uint uVar15;
  longlong lVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  longlong *plVar21;
  int local_res10 [2];
  int local_res18;
  undefined1 local_res20 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined2 *local_78 [2];
  longlong *local_68;
  undefined8 **local_60;
  undefined2 *local_58;
  undefined4 local_50;
  
  bVar8 = false;
  bVar7 = false;
  local_res10[0] = 0;
  lVar16 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x58) + 0x520);
  if (lVar16 != 0) {
    lVar10 = FUN_14310ed90();
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_143108777;
  }
  lVar16 = 0;
LAB_143108777:
  local_res18 = *(int *)(lVar16 + 0x1f0);
  FOutputDevice::LogfImpl(param_1,L"[%d Passed Actors]",*(undefined4 *)(param_3 + 1));
  plVar5 = (longlong *)*param_3;
  iVar3 = *(int *)(param_3 + 1);
  if (plVar5 != plVar5 + (longlong)iVar3 * 4) {
    plVar1 = (longlong *)(param_2 + 0x30);
    plVar21 = plVar5 + 1;
    do {
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_res10,*plVar21);
      if (((local_res10[0] == -1) ||
          (lVar16 = (longlong)local_res10[0] * 0x20 + *plVar1, lVar16 == 0)) ||
         (puVar11 = (undefined8 *)(lVar16 + 8), puVar11 == (undefined8 *)0x0)) {
        puVar11 = (undefined8 *)operator_new(0x28);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          lVar16 = FUN_140decfc0(*(undefined8 *)(param_2 + 0xd0),plVar21);
          puVar11[2] = 1;
          *(byte *)((longlong)puVar11 + 0x24) = *(byte *)((longlong)puVar11 + 0x24) & 0xfc;
          puVar11[1] = 0;
          *puVar11 = 0;
          puVar11[3] = 0;
          *(undefined4 *)(puVar11 + 4) = 0;
          *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(lVar16 + 0x3c);
          *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(lVar16 + 0x38);
        }
        plVar13 = (longlong *)0x0;
        local_88 = puVar11;
        plVar12 = (longlong *)operator_new(0x18);
        if (plVar12 != (longlong *)0x0) {
          *(undefined4 *)(plVar12 + 1) = 1;
          *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
          *plVar12 = (longlong)&PTR_FUN_144576340;
          plVar12[2] = (longlong)puVar11;
          plVar13 = plVar12;
        }
        local_80 = plVar13;
        SharedPointerInternals::EnableSharedFromThis(&local_88,puVar11,puVar11);
        local_60 = &local_88;
        local_68 = plVar21;
        FUN_140dd9ec0(plVar1,local_res20,&local_68,0);
        plVar13 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_80 + 1;
          lVar16 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
      }
      else {
        puVar11 = (undefined8 *)*puVar11;
      }
      if (*(int *)(puVar11 + 3) == 0) {
        bVar7 = true;
        ppuVar14 = &local_58;
        puVar18 = (undefined2 *)0x0;
        local_50 = 0;
      }
      else {
        bVar8 = true;
        FString::PrintfImpl(local_78,L" (Starved %d) ",
                            local_res18 - *(int *)((longlong)puVar11 + 0x14));
        ppuVar14 = local_78;
        puVar18 = local_78[0];
      }
      *ppuVar14 = (undefined2 *)0x0;
      iVar4 = *(int *)(ppuVar14 + 1);
      ppuVar14[1] = (undefined2 *)0x0;
      if ((bVar7) && (bVar7 = false, local_58 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if ((bVar8) && (bVar8 = false, local_78[0] != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      for (lVar16 = *(longlong *)(*plVar21 + 0x10); lVar16 != 0;
          lVar16 = *(longlong *)(lVar16 + 0x30)) {
        uVar9 = *(uint *)(lVar16 + 0xc);
        lVar10 = 0;
        if ((int)uVar9 < (int)DAT_1469e91c4) {
          uVar15 = uVar9 & 0xffff;
          if ((int)uVar9 < 0) {
            uVar9 = uVar9 + 0xffff;
            uVar15 = uVar15 - 0x10000;
          }
          lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                   (longlong)(int)uVar15 * 0x18;
        }
        if ((*(uint *)(lVar10 + 8) >> 0x19 & 1) != 0) break;
      }
      puVar19 = &DAT_143f3eda8;
      if (iVar4 != 0) {
        puVar19 = puVar18;
      }
      if (lVar16 == 0) {
        local_90 = 5;
        local_98 = (undefined2 *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        FGenericPlatformString::Memcpy(local_98,&DAT_143f3edc8,10);
      }
      else {
        local_b8 = *(undefined8 *)(lVar16 + 0x18);
        FName::ToString(&local_b8,&local_98);
      }
      puVar20 = (undefined2 *)*plVar21;
      puVar17 = &DAT_143f3eda8;
      if ((int)local_90 != 0) {
        puVar17 = local_98;
      }
      if (puVar20 == (undefined2 *)0x0) {
        local_a0 = 5;
        local_a8 = puVar20;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        FGenericPlatformString::Memcpy(local_a8,&DAT_143f3edc8,10);
      }
      else {
        local_b0 = *(undefined8 *)(puVar20 + 0xc);
        FName::ToString(&local_b0,&local_a8);
      }
      puVar20 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar20 = local_a8;
      }
      FOutputDevice::LogfImpl
                (param_1,L"%-40s %-20s %.4f %s",puVar20,puVar17,(double)*(float *)(plVar21 + -1),
                 puVar19);
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_98 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (puVar18 != (undefined2 *)0x0) {
        FMemory::Free(puVar18);
      }
      plVar13 = plVar21 + 3;
      plVar21 = plVar21 + 4;
    } while (plVar13 != plVar5 + (longlong)iVar3 * 4);
  }
  FOutputDevice::LogfImpl(param_1,&DAT_145ab7f6c);
  return;
}



// FUNCTION 143108b20 FUN_143108b20 body=2762 status=ok
// SIG undefined FUN_143108b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_143108b20(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  longlong lVar16;
  uint uVar17;
  byte bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_278 [32];
  longlong *local_258;
  longlong *local_250;
  longlong local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228;
  uint local_220;
  byte local_218;
  longlong *local_210;
  longlong local_208;
  uint local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  uint local_1c8;
  uint uStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  longlong *local_190;
  longlong *local_188;
  undefined1 local_180 [8];
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  longlong *local_140;
  longlong **local_138;
  longlong **local_130;
  undefined1 local_128 [8];
  longlong local_120;
  undefined1 local_110 [24];
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_e0 [24];
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  float local_90;
  char local_8c;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar8 = (longlong *)0x0;
  local_1b8 = param_5;
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  local_1c0 = param_6;
  plVar11 = plVar8;
  if (iVar5 < (int)DAT_1469e91c4) {
    uVar17 = iVar5 >> 0x1f & 0xffff;
    uVar4 = iVar5 + uVar17;
    plVar11 = (longlong *)
              (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar17) * 0x18);
  }
  if (((*(uint *)(plVar11 + 1) >> 0x1d & 1) == 0) &&
     ((*(byte *)((longlong)param_2 + 0x94) & 2) == 0)) {
    plVar11 = plVar8;
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar17 = iVar5 >> 0x1f & 0xffff;
      uVar4 = iVar5 + uVar17;
      plVar11 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar17) * 0x18);
    }
    if ((*(uint *)(plVar11 + 1) >> 0x1d & 1) == 0) {
      lVar6 = *(longlong *)(param_3 + 0x30);
      while (lVar10 = lVar6, lVar10 != 0) {
        param_3 = lVar10;
        lVar6 = *(longlong *)(lVar10 + 0x30);
      }
      local_1a8 = param_2;
      if (param_7 != (longlong *)0x0) {
        local_1a8 = param_7;
      }
      local_210 = param_2;
      local_208 = param_1;
      local_1b0 = param_4;
      lVar6 = FUN_14171a990(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xf0),local_1a8[2]);
      local_1e0 = lVar6;
      if (lVar6 != 0) {
        do {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(lVar6 + 0x30,&local_1fc,param_3);
          if ((local_1fc == -1) ||
             (lVar10 = *(longlong *)(lVar6 + 0x30) + (longlong)local_1fc * 0x18, lVar10 == 0)) {
            local_1e8 = 0;
          }
          else {
            local_1e8 = *(longlong *)(lVar10 + 8);
            if (local_1e8 != 0) goto LAB_143108cc7;
          }
          lVar6 = *(longlong *)(lVar6 + 8);
        } while (lVar6 != 0);
        if (local_1e8 != 0) {
LAB_143108cc7:
          if ((*(uint *)(param_3 + 0x88) & 0x4000) == 0) {
            plVar11 = (longlong *)(**(code **)(*local_210 + 0x4a8))();
            if ((plVar11 != (longlong *)0x0) &&
               (((*(byte *)(param_3 + 0x88) & 0x80) != 0 ||
                ((longlong)(int)plVar11[0x42] + plVar11[0xaa] < 1)))) {
              lVar6 = (**(code **)(*plVar11 + 0x280))(plVar11);
              if (lVar6 != 0) {
                plVar11 = (longlong *)plVar11[0x32e];
              }
              if (*(int *)((longlong)plVar11 + 300) != 1) {
                bVar18 = 0;
                FWeakObjectPtr::operator=(&local_1c8,local_210);
                plVar7 = local_210;
                plVar13 = plVar8;
                if ((int)plVar11[0x2c1] != *(int *)((longlong)plVar11 + 0x1634)) {
                  plVar12 = (longlong *)plVar11[0x2c8];
                  if ((longlong *)plVar11[0x2c8] == (longlong *)0x0) {
                    plVar12 = plVar11 + 0x2c7;
                  }
                  iVar5 = *(int *)((longlong)plVar12 +
                                  ((longlong)(int)(uStack_1c4 ^ local_1c8) &
                                  (longlong)(int)plVar11[0x2c9] - 1U) * 4);
                  if (iVar5 != -1) {
                    lVar6 = plVar11[0x2c0];
                    do {
                      lVar10 = (longlong)iVar5;
                      if ((*(uint *)(lVar6 + lVar10 * 0x18) == local_1c8) &&
                         (*(uint *)(lVar6 + 4 + lVar10 * 0x18) == uStack_1c4)) {
                        if ((iVar5 != -1) && (lVar6 = lVar6 + lVar10 * 0x18, lVar6 != 0)) {
                          plVar13 = *(longlong **)(lVar6 + 8);
                        }
                        break;
                      }
                      iVar5 = *(int *)(lVar6 + 0x10 + lVar10 * 0x18);
                    } while (iVar5 != -1);
                  }
                }
                if (plVar13 == (longlong *)0x0) {
                  cVar3 = FUN_1407cd900(local_210);
                  if (cVar3 != '\0') {
                    return 1;
                  }
                  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x3d0))
                                    (*(longlong **)(param_1 + 0x30),plVar7,plVar11);
                  if (cVar3 == '\0') {
                    return 1;
                  }
                  plVar13 = (longlong *)FUN_1425b9f20(plVar11,2,1);
                  FUN_1423fcda0(plVar13,local_210);
                  plVar7 = local_210;
                  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0xb0,&local_1f0,local_210);
                  plVar12 = plVar8;
                  if (local_1f0 != -1) {
                    plVar12 = (longlong *)
                              (*(longlong *)(param_1 + 0xb0) + (longlong)local_1f0 * 0x18);
                  }
                  plVar14 = plVar12 + 1;
                  if (plVar12 == (longlong *)0x0) {
                    plVar14 = plVar8;
                  }
                  if (((plVar14 != (longlong *)0x0) && (lVar6 = *plVar14, lVar6 != 0)) &&
                     (plVar11[0x2ca] != 0)) {
                    plVar8 = (longlong *)(plVar11[0x2ca] + 0x30);
                    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                    ::FindId(plVar8,&local_1ec,plVar7);
                    if (local_1ec == -1) {
                      lVar10 = 0;
                    }
                    else {
                      lVar10 = (longlong)local_1ec * 0x20 + *plVar8;
                    }
                    plVar8 = (longlong *)(lVar10 + 8);
                    if (lVar10 == 0) {
                      plVar8 = (longlong *)0x0;
                    }
                    param_1 = local_208;
                    if ((plVar8 != (longlong *)0x0) && (lVar10 = *plVar8, lVar10 != 0)) {
                      iVar5 = *(int *)(lVar6 + 0x40);
                      if (iVar5 != 0) {
                        uVar4 = iVar5 + 1 +
                                *(int *)(local_208 + 0x1f0) + *(int *)(local_208 + 100) +
                                *(int *)(lVar10 + 0x10);
                        if (uVar4 <= *(uint *)(lVar10 + 0x1c)) {
                          uVar4 = *(uint *)(lVar10 + 0x1c);
                        }
                        *(uint *)(lVar10 + 0x1c) = uVar4;
                      }
                      bVar18 = *(byte *)(lVar10 + 0x24) & 1;
                    }
                  }
                }
                local_220 = 0;
                local_228 = 1;
                local_230 = local_1c0;
                local_238 = local_1b8;
                local_240 = local_1b0;
                local_258 = local_1a8;
                local_250 = plVar11;
                local_248 = param_3;
                FUN_1425c8a80(*(undefined8 *)(param_1 + 0x30),plVar13,local_1e0,local_1e8);
                if (bVar18 != 0) {
                  FUN_14222c7e0(local_210);
                }
              }
            }
          }
          else {
            FUN_1425bf040(*(undefined8 *)(param_1 + 0x30),&local_148,param_3);
            local_8c = '\0';
            local_200 = 0;
            FWeakObjectPtr::operator=(&local_178,param_3);
            local_170 = local_178;
            TSet<TTuple<TTuple<FVertexInstanceID,FVertexInstanceID>,int>,TDefaultMapHashableKeyFuncs<TTuple<FVertexInstanceID,FVertexInstanceID>,int,0>,FDefaultSetAllocator>
            ::FindId((longlong *)(param_1 + 0x1a0),&local_1f8,&local_170);
            plVar11 = plVar8;
            if (local_1f8 != -1) {
              plVar11 = (longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)local_1f8 * 0x14);
            }
            plVar7 = plVar11 + 1;
            if (plVar11 == (longlong *)0x0) {
              plVar7 = plVar8;
            }
            if (plVar7 != (longlong *)0x0) {
              local_200 = (uint)((char)*plVar7 != '\0');
            }
            FUN_1427244b0(local_148,param_4);
            local_168 = FUN_140decfc0(param_1 + 0xa8,&local_210);
            local_218 = 0;
            fVar2 = *(float *)(local_168 + 0x38);
            FUN_140ddc410(local_128,&local_210);
            plVar11 = *(longlong **)(param_1 + 0x38);
            local_160 = plVar11 + *(int *)(param_1 + 0x40);
            lVar6 = local_120;
            bVar18 = 0;
            local_1d0 = plVar11;
            if (plVar11 != local_160) {
              do {
                lVar10 = *plVar11;
                local_1d0 = plVar11;
                TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                ::FindId(lVar10 + 0x30,&local_1f4,local_210);
                if (local_1f4 == -1) {
                  lVar16 = 0;
                }
                else {
                  lVar16 = (longlong)local_1f4 * 0x20 + *(longlong *)(lVar10 + 0x30);
                }
                puVar9 = (undefined8 *)(lVar16 + 8);
                if (lVar16 == 0) {
                  puVar9 = (undefined8 *)0x0;
                }
                if (puVar9 == (undefined8 *)0x0) {
                  plVar8 = (longlong *)operator_new(0x28);
                  if (plVar8 == (longlong *)0x0) {
                    plVar8 = (longlong *)0x0;
                  }
                  else {
                    lVar16 = FUN_140decfc0(*(undefined8 *)(lVar10 + 0xd0),&local_210);
                    plVar8[2] = 1;
                    *(byte *)((longlong)plVar8 + 0x24) = *(byte *)((longlong)plVar8 + 0x24) & 0xfc;
                    plVar8[1] = 0;
                    *plVar8 = 0;
                    plVar8[3] = 0;
                    *(undefined4 *)(plVar8 + 4) = 0;
                    *(undefined4 *)(plVar8 + 2) = *(undefined4 *)(lVar16 + 0x3c);
                    *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(lVar16 + 0x38);
                  }
                  local_190 = plVar8;
                  local_188 = (longlong *)operator_new(0x18);
                  if (local_188 != (longlong *)0x0) {
                    local_188[2] = (longlong)plVar8;
                    *(undefined4 *)(local_188 + 1) = 1;
                    *(undefined4 *)((longlong)local_188 + 0xc) = 1;
                    *local_188 = (longlong)&PTR_FUN_144576340;
                  }
                  SharedPointerInternals::EnableSharedFromThis(&local_190,plVar8,plVar8);
                  local_138 = &local_210;
                  local_130 = &local_190;
                  FUN_140dd9ec0(lVar10 + 0x30,local_180,&local_138,0);
                  plVar7 = local_188;
                  if (local_188 != (longlong *)0x0) {
                    LOCK();
                    plVar13 = local_188 + 1;
                    lVar16 = *plVar13;
                    *(int *)plVar13 = (int)*plVar13 + -1;
                    UNLOCK();
                    lVar6 = local_120;
                    if ((int)lVar16 == 1) {
                      (**(code **)*local_188)(local_188);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar7 + 0xc);
                      iVar5 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      lVar6 = local_120;
                      if (iVar5 == 1) {
                        (**(code **)(*plVar7 + 8))(plVar7,1);
                        lVar6 = local_120;
                      }
                    }
                  }
                }
                else {
                  plVar8 = (longlong *)*puVar9;
                }
                plVar7 = *(longlong **)(lVar10 + 0x28);
                if ((plVar7[0x12] != 0) ||
                   ((((*(byte *)(param_3 + 0x88) & 0x80) != 0 && (*plVar8 != 0)) &&
                    ((plVar7[0x13] != 0 &&
                     ((plVar7[6] != 0 && (*(int *)((longlong)plVar7 + 300) == 3)))))))) {
                  local_1d8 = 0;
                  if (lVar6 == 0) {
LAB_143108ff6:
                    lVar10 = *plVar8;
                    if (lVar10 == 0) {
                      bVar15 = (bool)(*(byte *)(local_210 + 0x12) >> 3 & 1);
                      lVar10 = 0;
                      if (((bVar15 == false) && (lVar10 = 0, 0.0 < fVar2)) && (plVar7[0x12] != 0)) {
                        FUN_1425ad800(local_110,plVar7,0);
                        if (local_8c == '\0') {
                          lVar10 = local_210[0x2d];
                          if (lVar10 == 0) {
                            local_150 = DAT_1468b5d98;
                            puVar9 = &local_158;
                            local_158 = _DAT_1468b5d90;
                          }
                          else {
                            local_a8 = *(undefined4 *)(lVar10 + 0x220);
                            uStack_a4 = *(undefined4 *)(lVar10 + 0x224);
                            uStack_a0 = *(undefined4 *)(lVar10 + 0x228);
                            uStack_9c = *(undefined4 *)(lVar10 + 0x22c);
                            puVar9 = (undefined8 *)&local_1a0;
                            local_1a0 = local_a8;
                            local_198 = uStack_a0;
                            uStack_19c = uStack_a4;
                          }
                          local_98 = *puVar9;
                          local_90 = *(float *)(puVar9 + 1);
                          local_8c = '\x01';
                        }
                        uVar20 = 0;
                        plVar11 = (longlong *)plVar7[9];
                        uVar19 = (longlong)(int)plVar7[10] & 0x1fffffffffffffff;
                        if (plVar11 + (int)plVar7[10] < plVar11) {
                          uVar19 = uVar20;
                        }
                        fVar21 = (local_98._4_4_ - local_f4) * (local_98._4_4_ - local_f4) +
                                 ((float)local_98 - local_f8) * ((float)local_98 - local_f8) +
                                 (local_90 - local_f0) * (local_90 - local_f0);
                        fVar22 = fVar21;
                        if (uVar19 != 0) {
                          do {
                            lVar10 = *plVar11;
                            fVar21 = fVar22;
                            if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x90) != 0)) {
                              FUN_1425ad800(local_e0,lVar10,0);
                              fVar21 = (local_98._4_4_ - local_c4) * (local_98._4_4_ - local_c4) +
                                       ((float)local_98 - local_c8) * ((float)local_98 - local_c8) +
                                       (local_90 - local_c0) * (local_90 - local_c0);
                              if (fVar22 <= fVar21) {
                                fVar21 = fVar22;
                              }
                            }
                            plVar11 = plVar11 + 1;
                            uVar20 = uVar20 + 1;
                            fVar22 = fVar21;
                          } while (uVar20 != uVar19);
                        }
                        lVar10 = *plVar8;
                        bVar15 = fVar21 <= fVar2;
                        plVar11 = local_1d0;
                      }
                      if (bVar15 != false) {
                        lVar10 = FUN_1425b9f20(plVar7,2,1);
                        *plVar8 = lVar10;
                        FUN_1423fcda0(lVar10,local_210);
                        if (*(int *)(local_168 + 0x40) != 0) {
                          uVar4 = *(int *)(local_168 + 0x40) + 1 +
                                  *(int *)(local_208 + 0x1f0) + *(int *)(local_208 + 100) +
                                  (int)plVar8[2];
                          if (uVar4 <= *(uint *)((longlong)plVar8 + 0x1c)) {
                            uVar4 = *(uint *)((longlong)plVar8 + 0x1c);
                          }
                          *(uint *)((longlong)plVar8 + 0x1c) = uVar4;
                        }
                        lVar10 = *plVar8;
                        local_218 = local_218 | *(byte *)((longlong)plVar8 + 0x24) & 1;
                      }
                      if (lVar10 == 0) goto LAB_143109283;
                    }
                    uVar4 = local_200;
                    local_220 = local_200;
                    local_228 = 1;
                    local_230 = local_1c0;
                    local_238 = local_1b8;
                    local_240 = local_1b0;
                    local_258 = local_1a8;
                    local_250 = plVar7;
                    local_248 = param_3;
                    FUN_1425c8a80(*(undefined8 *)(local_208 + 0x30),lVar10,local_1e0);
                    if (uVar4 == 1) {
                      (**(code **)(*plVar7 + 0x2c8))(plVar7,0);
                    }
                  }
                  else if ((int)plVar7[0x2ea] != *(int *)((longlong)plVar7 + 0x177c)) {
                    plVar13 = (longlong *)plVar7[0x2f1];
                    if ((longlong *)plVar7[0x2f1] == (longlong *)0x0) {
                      plVar13 = plVar7 + 0x2f0;
                    }
                    iVar5 = *(int *)((longlong)plVar13 +
                                    ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                                    (longlong)(int)plVar7[0x2f2] - 1U) * 4);
                    if (iVar5 != -1) {
                      do {
                        if (*(longlong *)((longlong)iVar5 * 0x10 + plVar7[0x2e9]) == lVar6) {
                          if (iVar5 != -1) goto LAB_143108ff6;
                          break;
                        }
                        iVar5 = *(int *)((longlong)iVar5 * 0x10 + 8 + plVar7[0x2e9]);
                      } while (iVar5 != -1);
                    }
                  }
                }
LAB_143109283:
                plVar11 = plVar11 + 1;
                bVar18 = local_218;
                local_1d0 = plVar11;
              } while (plVar11 != local_160);
            }
            FUN_142725fc0(local_148);
            if (bVar18 != 0) {
              FUN_14222c7e0(local_210);
            }
            if (local_140 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_140 + 1;
              lVar6 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_140)(local_140);
                LOCK();
                piVar1 = (int *)((longlong)local_140 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_140 + 8))(local_140,1);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1431095f0 FUN_1431095f0 body=301 status=ok
// SIG undefined FUN_1431095f0(void)

void FUN_1431095f0(longlong param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  
  UReplicationGraphNode_GridSpatialization2D::GetGridNodesForActor
            (param_1,*param_2,param_3,param_1 + 0x1b8);
  uVar6 = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x1b8);
  uVar7 = (longlong)*(int *)(param_1 + 0x1c0) & 0x1fffffffffffffff;
  if (puVar5 + *(int *)(param_1 + 0x1c0) < puVar5) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      FUN_1430fc9d0(*puVar5,param_2,param_3,param_4);
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != uVar7);
  }
  plVar1 = (longlong *)(param_3 + 0x68);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_1441c0108;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    plVar3[2] = (longlong)FUN_143105460;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_1441c0150;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar2 = *(int *)(param_3 + 0x70);
    *(int *)(param_3 + 0x70) = iVar2 + 1;
    if (*(int *)(param_3 + 0x74) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return;
}



// FUNCTION 143109720 Realloc body=59 status=ok
// SIG undefined Realloc(void)

void TBitArray<TFixedAllocator<128>_>::Realloc(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  iVar2 = *(int *)(param_1 + 0x204) + 0x1f;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  if (iVar2 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(param_1 + (longlong)iVar1 * 4),0,(longlong)(iVar2 - iVar1) << 2);
    return;
  }
  return;
}



// FUNCTION 143109760 FUN_143109760 body=435 status=ok
// SIG undefined FUN_143109760(void)

void FUN_143109760(void)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38[1] = 0x16;
  local_38[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"Recompiling rep graph",0x2c);
  uVar3 = FText::FromString(local_28,local_38);
  FUN_141664530(DAT_1468b6160,uVar3,1,0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146850168) {
    _Init_thread_header(&DAT_146850168);
    if (DAT_146850168 == -1) {
      FName::FName(&DAT_146850160,"HotReload",1);
      _Init_thread_footer(&DAT_146850168);
    }
  }
  plVar4 = (longlong *)FModuleManager::GetModulePtr_Internal(DAT_146850160);
  if (plVar4 != (longlong *)0x0) {
    local_48 = 0;
    local_40 = 0;
    lVar5 = FUN_14178ae20(0,L"/Script/ReplicationGraph");
    uVar2 = local_40;
    if (lVar5 != 0) {
      lVar7 = (longlong)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (local_40._4_4_ < iVar6) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_48,uVar2 & 0xffffffff);
      }
      *(longlong *)(local_48 + lVar7 * 8) = lVar5;
    }
    lVar5 = *plVar4;
    uVar3 = FUN_141672640();
    (**(code **)(lVar5 + 0x78))(plVar4,&local_48,1,uVar3);
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  FUN_14166aae0(DAT_1468b6160);
  return;
}



// FUNCTION 143109920 Release body=31 status=ok
// SIG undefined Release(void)

void FActorRepList::Release(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 == 1) {
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) & ~param_1[6];
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 143109940 FUN_143109940 body=431 status=ok
// SIG undefined FUN_143109940(void)

undefined8 FUN_143109940(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar12 = (int)(param_2 >> 4);
  uVar9 = (longlong)(int)param_1[9] - 1;
  uVar11 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
  uVar8 = -(uVar11 + iVar12) ^ uVar11 >> 0xd;
  uVar13 = (iVar12 - uVar11) - uVar8 ^ uVar8 >> 0xc;
  uVar11 = (uVar11 - uVar13) - uVar8 ^ uVar13 << 0x10;
  uVar8 = (uVar8 - uVar11) - uVar13 ^ uVar11 >> 5;
  uVar13 = (uVar13 - uVar11) - uVar8 ^ uVar8 >> 3;
  uVar11 = (uVar11 - uVar13) - uVar8 ^ uVar13 << 10;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar12 = *(int *)((longlong)plVar10 +
                   (((longlong)(int)((uVar8 - uVar11) - uVar13) ^ (ulonglong)(uVar11 >> 0xf)) &
                   uVar9) * 4);
  if (iVar12 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar12 * 0x38;
      if (*(ulonglong *)(lVar6 + lVar3) == param_2) {
        lVar6 = (longlong)iVar12 * 0x38;
        uVar9 = (longlong)*(int *)(lVar6 + 0x34 + lVar3) & uVar9;
        piVar7 = (int *)((longlong)plVar10 + uVar9 * 4);
        iVar2 = *(int *)((longlong)plVar10 + uVar9 * 4);
        goto joined_r0x000143109a50;
      }
      iVar12 = *(int *)(lVar6 + 0x30 + lVar3);
    } while (iVar12 != -1);
  }
  return 0;
joined_r0x000143109a50:
  if (iVar2 == -1) {
LAB_143109a72:
    bVar4 = (byte)iVar12 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar12;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar6) = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar12;
    plVar10 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar10 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar10 +
                     (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar12) {
    *piVar7 = *(int *)(lVar6 + lVar3 + 0x30);
    goto LAB_143109a72;
  }
  piVar7 = (int *)((longlong)iVar2 * 0x38 + 0x30 + lVar3);
  iVar2 = *piVar7;
  goto joined_r0x000143109a50;
}



// FUNCTION 143109af0 Remove body=386 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<AActor_*,TUniquePtr<FGlobalActorReplicationInfo,TDefaultDelete<FGlobalActorReplicationInfo>_>_>,TDefaultMapHashableKeyFuncs<AActor_*,TUniquePtr<FGlobalActorReplicationInfo,TDefaultDelete<FGlobalActorReplicationInfo>_>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar10 = (int)(param_2 >> 4);
  uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
  uVar8 = (longlong)(int)param_1[9] - 1;
  uVar6 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
  uVar11 = (iVar10 - uVar9) - uVar6 ^ uVar6 >> 0xc;
  uVar9 = (uVar9 - uVar11) - uVar6 ^ uVar11 << 0x10;
  uVar6 = (uVar6 - uVar9) - uVar11 ^ uVar9 >> 5;
  uVar11 = (uVar11 - uVar9) - uVar6 ^ uVar6 >> 3;
  uVar9 = (uVar9 - uVar11) - uVar6 ^ uVar11 << 10;
  plVar12 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar12 = param_1 + 7;
  }
  iVar10 = *(int *)((longlong)plVar12 +
                   (((longlong)(int)((uVar6 - uVar9) - uVar11) ^ (ulonglong)(uVar9 >> 0xf)) & uVar8)
                   * 4);
  if (iVar10 != -1) {
    lVar4 = *param_1;
    do {
      lVar7 = (longlong)iVar10;
      if (*(ulonglong *)(lVar4 + lVar7 * 0x18) == param_2) {
        lVar7 = lVar7 * 0x18;
        uVar8 = (longlong)*(int *)(lVar7 + 0x14 + lVar4) & uVar8;
        puVar2 = (undefined4 *)((longlong)plVar12 + uVar8 * 4);
        iVar3 = *(int *)((longlong)plVar12 + uVar8 * 4);
        goto joined_r0x000143109c0c;
      }
      iVar10 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
    } while (iVar10 != -1);
  }
  return 0;
joined_r0x000143109c0c:
  if (iVar3 == -1) {
LAB_143109c33:
    puVar5 = (undefined8 *)(*param_1 + 8 + lVar7);
    FUN_1430fbb20(puVar5,*puVar5);
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar10,1);
    return 1;
  }
  if (iVar3 == iVar10) {
    *puVar2 = *(undefined4 *)(lVar7 + lVar4 + 0x10);
    goto LAB_143109c33;
  }
  lVar1 = (longlong)iVar3 * 3 + 2;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x000143109c0c;
}



// FUNCTION 143109c80 FUN_143109c80 body=256 status=ok
// SIG undefined FUN_143109c80(void)

void FUN_143109c80(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int local_res8 [2];
  
  plVar1 = (longlong *)(param_1 + 0x100);
  TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8,*param_2);
  uVar5 = 0;
  uVar2 = uVar5;
  if (local_res8[0] != -1) {
    uVar2 = (longlong)local_res8[0] * 0x38 + *plVar1;
  }
  uVar4 = uVar2 + 8;
  if (uVar2 == 0) {
    uVar4 = uVar5;
  }
  if (uVar4 == 0) {
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x150,*param_2);
    return;
  }
  if (*(int *)(uVar4 + 0x18) != -1) {
    FUN_1430ff640(param_1,*param_2,uVar4 + 0x18,(ulonglong *)(param_1 + 0x1b8));
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
    uVar2 = (longlong)*(int *)(param_1 + 0x1c0) & 0x1fffffffffffffff;
    if (puVar6 + *(int *)(param_1 + 0x1c0) < puVar6) {
      uVar2 = uVar5;
    }
    if (uVar2 != 0) {
      do {
        plVar3 = (longlong *)FUN_1430ff580(*puVar6);
        (**(code **)(*plVar3 + 0x280))(plVar3,param_2,1);
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != uVar2);
    }
  }
  FUN_143109940(plVar1,*param_2);
  return;
}



// FUNCTION 143109d80 FUN_143109d80 body=353 status=ok
// SIG undefined FUN_143109d80(void)

void FUN_143109d80(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  iVar2 = TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x150,*param_2);
  if (iVar2 < 1) {
    FUN_143109940(param_1 + 0x100,*param_2);
  }
  UReplicationGraphNode_GridSpatialization2D::GetGridNodesForActor
            (param_1,*param_2,param_3,param_1 + 0x1b8);
  uVar6 = 0;
  plVar7 = *(longlong **)(param_1 + 0x1b8);
  uVar8 = (longlong)*(int *)(param_1 + 0x1c0) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x1c0) < plVar7) {
    uVar8 = uVar6;
  }
  if (uVar8 != 0) {
    do {
      lVar1 = *plVar7;
      if (param_4 == '\0') {
        if (param_2[1] == 0) {
          plVar5 = (longlong *)(lVar1 + 0xa0);
LAB_143109e94:
          FUN_140e04ba0(plVar5,param_2);
        }
        else {
          plVar5 = *(longlong **)(lVar1 + 0x138);
          if (*(longlong **)(lVar1 + 0x138) == (longlong *)0x0) {
            plVar5 = (longlong *)(lVar1 + 0xb8);
          }
          plVar4 = plVar5 + (longlong)*(int *)(lVar1 + 0x140) * 4;
          for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
            if (*plVar5 == param_2[1]) {
              plVar5 = plVar5 + 1;
              goto LAB_143109e94;
            }
          }
        }
      }
      else {
        uVar3 = FUN_1430ff4c0(lVar1);
        FUN_14310a290(uVar3,param_2,param_3);
      }
      FUN_140483870(param_3 + 0x50,lVar1);
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar8);
  }
  FUN_140483870(param_3 + 0x68,param_1);
  return;
}



// FUNCTION 143109ef0 FUN_143109ef0 body=104 status=ok
// SIG undefined FUN_143109ef0(void)

void FUN_143109ef0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    lVar1 = FUN_140decfc0(*(undefined8 *)param_1[7]);
    if (*(char *)(lVar1 + 0x14) == '\0') {
      (**(code **)(*param_1 + 0x2c8))(param_1,param_2);
    }
    else {
      (**(code **)(*param_1 + 0x2d0))(param_1,param_2,lVar1,1);
    }
    FUN_140483870(lVar1 + 0x50,param_1);
  }
  return;
}



// FUNCTION 143109f60 FUN_143109f60 body=93 status=ok
// SIG undefined FUN_143109f60(void)

void FUN_143109f60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    lVar1 = FUN_140decfc0(*(undefined8 *)param_1[7]);
    (**(code **)(*param_1 + 0x2d0))(param_1,param_2,lVar1,*(undefined1 *)(lVar1 + 0x14));
    FUN_140483870(lVar1 + 0x50,param_1);
  }
  return;
}



// FUNCTION 143109fc0 RemoveAtImpl body=233 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FActorRepListRefView,TInlineAllocator<2,FDefaultAllocator>_>::RemoveAtImpl
               (longlong param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar4 = param_1;
    }
    puVar5 = (undefined8 *)(lVar4 + (longlong)param_2 * 0x18);
    iVar3 = param_3;
    do {
      piVar1 = (int *)*puVar5;
      if ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, *piVar1 = iVar2 + -1, iVar2 == 1)) {
        **(uint **)(piVar1 + 4) = **(uint **)(piVar1 + 4) & ~piVar1[6];
        piVar1[2] = 0;
      }
      puVar5 = puVar5 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = *(int *)(param_1 + 0x38);
    iVar2 = (iVar3 - param_2) - param_3;
    if (iVar2 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = param_1;
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar4 + (longlong)param_2 * 0x18),
                 (void *)(lVar4 + (longlong)(param_2 + param_3) * 0x18),(longlong)iVar2 * 0x18);
      iVar3 = *(int *)(param_1 + 0x38);
    }
    *(int *)(param_1 + 0x38) = iVar3 - param_3;
    if (param_4 != '\0') {
      FUN_14310b190(param_1);
    }
  }
  return;
}



// FUNCTION 14310a0b0 RemoveAtSwapImpl body=248 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<FStreamingLevelActorListCollection::FStreamingLevelActors,TInlineAllocator<4,FDefaultAllocator>_>
     ::RemoveAtSwapImpl(longlong param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (param_3 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar3 = param_1;
    }
    puVar4 = (undefined8 *)(lVar3 + 8 + (longlong)param_2 * 0x20);
    iVar5 = param_3;
    do {
      piVar1 = (int *)*puVar4;
      if ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, *piVar1 = iVar2 + -1, iVar2 == 1)) {
        **(uint **)(piVar1 + 4) = **(uint **)(piVar1 + 4) & ~piVar1[6];
        piVar1[2] = 0;
      }
      puVar4 = puVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = *(int *)(param_1 + 0x88);
    iVar2 = (iVar5 - param_2) - param_3;
    if (param_3 <= iVar2) {
      iVar2 = param_3;
    }
    if (iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar3 = param_1;
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar3 + (longlong)param_2 * 0x20),
                 (void *)((longlong)(iVar5 - iVar2) * 0x20 + lVar3),(longlong)iVar2 << 5);
      iVar5 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x88) = iVar5 - param_3;
    if (param_4 != '\0') {
      TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14310a1b0 FUN_14310a1b0 body=213 status=ok
// SIG undefined FUN_14310a1b0(void)

void FUN_14310a1b0(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined4 local_res18 [4];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  
  local_50 = *(int *)(param_1 + 0x40);
  lVar2 = (longlong)local_50;
  local_40 = &local_res10;
  pvVar1 = *(void **)(param_1 + 0x38);
  local_38 = local_res8;
  local_30 = local_res18;
  local_res18[0] = 0;
  local_res8[0] = 0;
  local_58 = (void *)0x0;
  local_res10 = param_2;
  local_48 = param_1;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar2 << 3);
  }
  FUN_1430fa910(&local_48,&local_58);
  local_50 = *(int *)(param_1 + 0x50);
  lVar2 = (longlong)local_50;
  pvVar1 = *(void **)(param_1 + 0x48);
  local_58 = (void *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar2 << 3);
  }
  FUN_1430fa910(&local_48,&local_58);
  return;
}



// FUNCTION 14310a290 FUN_14310a290 body=550 status=ok
// SIG undefined FUN_14310a290(void)

void FUN_14310a290(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
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
  
  FUN_143103ec0(param_1,param_2,1);
  FUN_140483870(param_3 + 0x68,param_1);
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x148);
  uVar3 = *(uint *)(param_1 + 0x170);
  puVar1 = (uint *)(param_1 + 0x158);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar6) goto LAB_14310a37c;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
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
    if ((int)uVar3 < (int)uStack_74) {
LAB_14310a37c:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x170);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14310a441;
      uVar8 = puVar11[(longlong)iVar7 + 1];
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
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14310a441:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    plVar5 = *(longlong **)(*plVar2 + 8 + (longlong)(int)uStack_4c * 0x18);
    (**(code **)(*plVar5 + 0x280))(plVar5,param_2,0);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 14310a4c0 FUN_14310a4c0 body=478 status=ok
// SIG undefined FUN_14310a4c0(void)

void FUN_14310a4c0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int local_res8 [2];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  iVar3 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(param_1 + 0x2a);
  if (iVar3 != 0) {
    uVar7 = 0;
    if ((*(byte *)(param_2 + 0x90) & 0x20) == 0) {
      local_38 = *(undefined8 *)(param_2 + 0x10);
      local_40 = 0;
      lVar5 = *(longlong *)(param_2 + 0x20);
      local_48 = param_2;
      if (lVar5 != 0) {
        lVar4 = FUN_1429a0270();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (cVar2 = ULevel::IsPersistentLevel(lVar5), cVar2 == '\0')) {
          lVar5 = UObjectBaseUtility::GetOutermost(lVar5);
          local_40 = *(undefined8 *)(lVar5 + 0x18);
        }
      }
      (**(code **)(*param_1 + 0x330))(param_1,&local_48);
    }
    plVar9 = (longlong *)param_1[7];
    uVar8 = (longlong)(int)param_1[8] & 0x1fffffffffffffff;
    if (plVar9 + (int)param_1[8] < plVar9) {
      uVar8 = uVar7;
    }
    if (uVar8 != 0) {
      do {
        lVar5 = *plVar9;
        if (((*(byte *)(param_2 + 0x92) & 0x40) == 0) &&
           (cVar2 = UAbilityTask::IsWaitingOnRemotePlayerdata(param_2), cVar2 == '\0')) {
          TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
          ::FindId(lVar5 + 0x30,local_res8,param_2);
          if (((local_res8[0] != -1) &&
              (((lVar4 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar5 + 0x30), lVar4 != 0 &&
                (plVar6 = (longlong *)(lVar4 + 8), plVar6 != (longlong *)0x0)) &&
               (lVar4 = *plVar6, lVar4 != 0)))) && ((*(byte *)(lVar4 + 0x24) & 1) != 0)) {
            iVar3 = *(int *)(lVar5 + 0x1a0);
            *(int *)(lVar5 + 0x1a0) = iVar3 + 1;
            if (*(int *)(lVar5 + 0x1a4) < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0x198,iVar3)
              ;
            }
            *(longlong *)(*(longlong *)(lVar5 + 0x198) + (longlong)iVar3 * 8) = param_2;
          }
        }
        TSet<TTuple<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
        ::Remove(lVar5 + 0x30,param_2);
        plVar9 = plVar9 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar8);
    }
    TSet<TTuple<AActor_*,TUniquePtr<FGlobalActorReplicationInfo,TDefaultDelete<FGlobalActorReplicationInfo>_>_>,TDefaultMapHashableKeyFuncs<AActor_*,TUniquePtr<FGlobalActorReplicationInfo,TDefaultDelete<FGlobalActorReplicationInfo>_>,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x16,param_2);
  }
  return;
}



// FUNCTION 14310a6a0 FUN_14310a6a0 body=689 status=ok
// SIG undefined FUN_14310a6a0(void)

longlong FUN_14310a6a0(longlong param_1,longlong *param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar20 = 0;
  iVar17 = *(int *)(param_1 + 0x1b0) + -1;
  if (-1 < iVar17) {
    lVar16 = (longlong)iVar17 * 0x18;
    lVar19 = lVar16;
    do {
      lVar11 = *(longlong *)(param_1 + 0x1a8);
      lVar10 = *param_2;
      lVar15 = (longlong)(int)param_2[1];
      fVar7 = *(float *)(lVar16 + 8 + lVar11);
      fVar8 = *(float *)(lVar16 + 0xc + lVar11);
      fVar23 = fVar8 - *(float *)(lVar10 + 0x1c);
      fVar21 = fVar7 - *(float *)(lVar10 + 0x18);
      fVar21 = fVar23 * fVar23 + fVar21 * fVar21;
      if (1 < lVar15) {
        lVar18 = 1;
        if (4 < lVar15) {
          pfVar13 = (float *)(lVar10 + 0x4c);
          lVar9 = (lVar15 - 5U >> 2) + 1;
          lVar18 = lVar9 * 4 + 1;
          do {
            pfVar1 = pfVar13 + 0xc;
            pfVar2 = pfVar13 + 0xb;
            pfVar3 = pfVar13 + 0x17;
            pfVar4 = pfVar13 + 0x18;
            pfVar5 = pfVar13 + 0x23;
            fVar23 = (fVar8 - *pfVar13) * (fVar8 - *pfVar13) +
                     (fVar7 - pfVar13[-1]) * (fVar7 - pfVar13[-1]);
            pfVar6 = pfVar13 + 0x24;
            if (fVar21 <= fVar23) {
              fVar23 = fVar21;
            }
            pfVar13 = pfVar13 + 0x30;
            fVar22 = (fVar8 - *pfVar1) * (fVar8 - *pfVar1) + (fVar7 - *pfVar2) * (fVar7 - *pfVar2);
            fVar21 = (fVar8 - *pfVar4) * (fVar8 - *pfVar4) + (fVar7 - *pfVar3) * (fVar7 - *pfVar3);
            if (fVar22 <= fVar23) {
              fVar23 = fVar22;
            }
            fVar22 = (fVar8 - *pfVar6) * (fVar8 - *pfVar6) + (fVar7 - *pfVar5) * (fVar7 - *pfVar5);
            if (fVar21 <= fVar23) {
              fVar23 = fVar21;
            }
            fVar21 = fVar23;
            if (fVar22 <= fVar23) {
              fVar21 = fVar22;
            }
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        if (lVar18 < lVar15) {
          pfVar13 = (float *)(lVar10 + 0x1c + lVar18 * 0x30);
          lVar15 = lVar15 - lVar18;
          fVar23 = fVar21;
          do {
            fVar21 = *pfVar13;
            pfVar1 = pfVar13 + -1;
            pfVar13 = pfVar13 + 0xc;
            fVar21 = (fVar8 - fVar21) * (fVar8 - fVar21) + (fVar7 - *pfVar1) * (fVar7 - *pfVar1);
            if (fVar23 <= fVar21) {
              fVar21 = fVar23;
            }
            lVar15 = lVar15 + -1;
            fVar23 = fVar21;
          } while (lVar15 != 0);
        }
      }
      if (fVar21 < param_3) {
        lVar10 = FUN_1425b9f20(*(undefined8 *)(param_1 + 0x28),2,1);
        if (lVar10 != 0) {
          lVar11 = FUN_1423fd050(lVar10,*(undefined8 *)(lVar16 + lVar11));
          lVar20 = lVar20 + lVar11;
        }
        iVar14 = *(int *)(param_1 + 0x1b0);
        iVar12 = (iVar14 - iVar17) + -1;
        if (0 < iVar12) {
          iVar12 = 1;
        }
        if (iVar12 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x1a8) + lVar19),
                     (void *)(*(longlong *)(param_1 + 0x1a8) + (longlong)(iVar14 - iVar12) * 0x18),
                     (longlong)iVar12 * 0x18);
          iVar14 = *(int *)(param_1 + 0x1b0);
        }
        *(int *)(param_1 + 0x1b0) = iVar14 + -1;
      }
      lVar19 = lVar19 + -0x18;
      lVar16 = lVar16 + -0x18;
      iVar17 = iVar17 + -1;
    } while (-1 < iVar17);
  }
  return lVar20;
}



// FUNCTION 14310a960 FUN_14310a960 body=1258 status=ok
// SIG undefined FUN_14310a960(void)

longlong FUN_14310a960(longlong param_1,longlong param_2,longlong *param_3,uint *param_4,
                      longlong *param_5,undefined8 param_6,uint param_7)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int local_78;
  uint local_74;
  undefined1 local_70 [8];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong **local_40;
  
  if ((*param_3 == 0) || ((*(byte *)(*param_3 + 0x30) & 2) == 0)) {
    iVar3 = *(int *)(param_2 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar14 = iVar3 >> 0x1f & 0xffff;
      uVar4 = iVar3 + uVar14;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar14) * 0x18;
    }
    else {
      lVar10 = 0;
    }
    if (((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(param_2 + 0x94) & 2) == 0)) {
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar14 = iVar3 >> 0x1f & 0xffff;
        uVar4 = iVar3 + uVar14;
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                 (longlong)(int)((uVar4 & 0xffff) - uVar14) * 0x18;
      }
      else {
        lVar10 = 0;
      }
      if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) {
        *(uint *)((longlong)param_3 + 0x14) = param_7;
        *(uint *)((longlong)param_3 + 0xc) = (int)param_3[2] + param_7;
        *(undefined4 *)(param_3 + 3) = 0;
        if (*param_4 != param_7) {
          *param_4 = param_7;
          FUN_142224a10(param_2,*(undefined8 *)(param_1 + 0x30));
        }
        plVar12 = (longlong *)*param_3;
        lVar10 = *(longlong *)(param_4 + 6);
        uVar4 = param_4[5];
        local_60 = lVar10;
        if (plVar12 == (longlong *)0x0) {
          lVar5 = FUN_1425b9f20(param_6,2,1,0xffffffff);
          *param_3 = lVar5;
          if (lVar5 == 0) {
            return 0;
          }
          FUN_1423fcda0(lVar5,param_2);
          plVar12 = (longlong *)*param_3;
          *(uint *)(param_3 + 4) = param_7;
        }
        if ((char)uVar4 != '\0') {
          (**(code **)(*plVar12 + 0x2d8))();
          plVar12 = (longlong *)*param_3;
        }
        bVar2 = *(byte *)((longlong)param_3 + 0x24);
        lVar5 = FUN_1423f9930(plVar12);
        if ((bVar2 & 2) != 0) {
          lVar6 = (**(code **)(*(longlong *)*param_3 + 0x288))();
          lVar5 = lVar5 + lVar6;
        }
        if (lVar10 != 0) {
          local_74 = *(uint *)((longlong)param_3 + 0x1c);
          plVar12 = (longlong *)(lVar10 + 0x20);
          uVar16 = 0;
          plVar9 = (longlong *)(lVar10 + ((longlong)*(int *)(lVar10 + 8) + 4) * 8);
          uVar7 = (ulonglong)((longlong)plVar9 + (7 - (longlong)plVar12)) >> 3;
          if (plVar9 < plVar12) {
            uVar7 = uVar16;
          }
          if (uVar7 != 0) {
            do {
              plVar9 = (longlong *)0x0;
              local_68 = *plVar12;
              TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::FindId(param_5,&local_78);
              plVar8 = plVar9;
              if (local_78 != -1) {
                plVar8 = (longlong *)((longlong)local_78 * 0x20 + *param_5);
              }
              plVar15 = plVar8 + 1;
              if (plVar8 == (longlong *)0x0) {
                plVar15 = plVar9;
              }
              if (plVar15 == (longlong *)0x0) {
                plVar8 = (longlong *)operator_new(0x28);
                plVar15 = plVar9;
                if (plVar8 != (longlong *)0x0) {
                  lVar10 = FUN_140decfc0(param_5[0x14],&local_68);
                  *(byte *)((longlong)plVar8 + 0x24) = *(byte *)((longlong)plVar8 + 0x24) & 0xfc;
                  plVar8[1] = 0;
                  plVar8[2] = 1;
                  *plVar8 = 0;
                  plVar8[3] = 0;
                  *(undefined4 *)(plVar8 + 4) = 0;
                  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)(lVar10 + 0x3c);
                  *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(lVar10 + 0x38);
                  plVar15 = plVar8;
                }
                local_58 = plVar15;
                plVar8 = (longlong *)operator_new(0x18);
                if (plVar8 != (longlong *)0x0) {
                  *(undefined4 *)(plVar8 + 1) = 1;
                  *plVar8 = (longlong)&PTR_FUN_144576340;
                  *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
                  plVar8[2] = (longlong)plVar15;
                  plVar9 = plVar8;
                }
                local_50 = plVar9;
                SharedPointerInternals::EnableSharedFromThis(&local_58,plVar15,plVar15);
                local_48 = &local_68;
                local_40 = &local_58;
                FUN_140dd9ec0(param_5,local_70,&local_48,0);
                plVar9 = local_50;
                if (local_50 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = local_50 + 1;
                  lVar10 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_50)(local_50);
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
                plVar15 = (longlong *)*plVar15;
              }
              if ((*(byte *)((longlong)plVar15 + 0x24) & 1) == 0) {
                lVar10 = FUN_140decfc0(param_1 + 0xa8,&local_68);
                uVar4 = *(uint *)((longlong)plVar15 + 0x1c);
                if (*(uint *)((longlong)plVar15 + 0x1c) <= local_74) {
                  uVar4 = local_74;
                }
                *(uint *)((longlong)plVar15 + 0x1c) = uVar4;
                if ((param_7 < *(uint *)((longlong)plVar15 + 0xc)) &&
                   (*(uint *)(lVar10 + 4) <= *(uint *)((longlong)plVar15 + 0x14))) {
                  FUN_14310d9f0(param_1,local_68,param_5);
                }
                else {
                  uVar4 = *(uint *)(local_68 + 0xc);
                  if ((int)uVar4 < (int)DAT_1469e91c4) {
                    uVar11 = uVar4 & 0xffff;
                    uVar14 = uVar4;
                    if ((int)uVar4 < 0) {
                      uVar14 = uVar4 + 0xffff;
                      uVar11 = uVar11 - 0x10000;
                    }
                    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar14 >> 0x10) * 8) +
                            (longlong)(int)uVar11 * 0x18;
                  }
                  else {
                    lVar6 = 0;
                  }
                  lVar13 = 0;
                  if (((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) &&
                     ((*(byte *)(local_68 + 0x94) & 2) == 0)) {
                    if ((int)uVar4 < (int)DAT_1469e91c4) {
                      uVar14 = uVar4 & 0xffff;
                      if ((int)uVar4 < 0) {
                        uVar4 = uVar4 + 0xffff;
                        uVar14 = uVar14 - 0x10000;
                      }
                      lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                               (longlong)(int)uVar14 * 0x18;
                    }
                    if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) == 0) {
                      lVar10 = FUN_14310a960(param_1,local_68,plVar15,lVar10,param_5,param_6,param_7
                                            );
                      lVar5 = lVar5 + lVar10;
                    }
                  }
                }
              }
              plVar12 = plVar12 + 1;
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar7);
          }
        }
        if (0 < lVar5) {
          *(uint *)(param_3 + 4) = param_7;
          uVar4 = param_4[0x11];
          if (uVar4 < *(uint *)(param_3 + 2)) {
            *(uint *)(param_3 + 2) = uVar4;
            *(uint *)((longlong)param_3 + 0xc) = uVar4 + param_7;
          }
        }
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 14310ae50 FUN_14310ae50 body=154 status=ok
// SIG undefined FUN_14310ae50(void)

undefined8 FUN_14310ae50(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  do {
    lVar4 = 0;
    iVar2 = *(int *)(param_1 + 0x608) + 0x1f;
    iVar5 = 0;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
    if (0 < iVar2) {
      do {
        if (*(int *)(param_1 + 0x408 + lVar4 * 4) != -1) break;
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
    }
    if (iVar5 < iVar2) {
      lVar4 = param_1 + lVar4 * 4;
      uVar1 = *(uint *)(lVar4 + 0x408);
      uVar3 = ~uVar1;
      iVar2 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      iVar2 = iVar5 * 0x20 + iVar2;
      if ((iVar2 < *(int *)(param_1 + 0x608)) &&
         (*(uint *)(lVar4 + 0x408) = uVar1 | -uVar3 & uVar3, iVar2 != -1)) {
        return *(undefined8 *)(param_1 + (longlong)iVar2 * 8);
      }
    }
    param_1 = FUN_1430ffab0(param_1,param_2);
  } while( true );
}



// FUNCTION 14310aef0 RequestNewList body=185 status=ok
// SIG undefined RequestNewList(void)

void FActorRepListRefView::RequestNewList(longlong *param_1,int param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 4;
  if (0 < param_2) {
    iVar4 = param_2;
  }
  lVar2 = FUN_1430ffb70(&DAT_146b4b6c0,iVar4,0);
  piVar3 = (int *)FUN_14310ae50(lVar2 + 8,lVar2);
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    ::_guard_xfg_dispatch_icall_nop(piVar3 + 8,(void *)param_1[1],(longlong)(int)param_1[2] << 3);
    piVar3[2] = (int)param_1[2];
  }
  piVar1 = (int *)*param_1;
  *param_1 = (longlong)piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  if ((piVar1 != (int *)0x0) && (iVar4 = *piVar1, *piVar1 = iVar4 + -1, iVar4 == 1)) {
    **(uint **)(piVar1 + 4) = **(uint **)(piVar1 + 4) & ~piVar1[6];
    piVar1[2] = 0;
  }
  param_1[1] = *param_1 + 0x20;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(*param_1 + 4);
  return;
}



// FUNCTION 14310afb0 Reset body=272 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = *local_38 + (longlong)local_1c * 0x18;
      FUN_1430fbb20(lVar3 + 8,*(undefined8 *)(lVar3 + 8));
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14310b0c0 Reset body=169 status=ok
// SIG undefined Reset(void)

void FActorRepListRefView::Reset(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = (int *)*param_1;
  if (((piVar1 != (int *)0x0) && (*piVar1 == 1)) && (param_2 <= piVar1[1])) {
    piVar1[2] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  if (param_2 < 1) {
    param_2 = (int)param_1[2];
  }
  iVar4 = 4;
  if (0 < param_2) {
    iVar4 = param_2;
  }
  lVar2 = FUN_1430ffb70(&DAT_146b4b6c0,iVar4);
  piVar3 = (int *)FUN_14310ae50(lVar2 + 8,lVar2);
  piVar1 = (int *)*param_1;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (longlong)piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  if ((piVar1 != (int *)0x0) && (iVar4 = *piVar1, *piVar1 = iVar4 + -1, iVar4 == 1)) {
    **(uint **)(piVar1 + 4) = **(uint **)(piVar1 + 4) & ~piVar1[6];
    piVar1[2] = 0;
  }
  param_1[1] = *param_1 + 0x20;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(*param_1 + 4);
  return;
}



// FUNCTION 14310b170 ResizeGrow body=11 status=ok
// SIG undefined ResizeGrow(void)

void TArray<void_*,TFixedAllocator<128>_>::ResizeGrow(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x404) = 0x80;
  return;
}



// FUNCTION 14310b180 ResizeGrow body=11 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TActorListAllocator<128,12>::FPool,TFixedAllocator<12>_>::ResizeGrow(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x4984) = 0xc;
  return;
}



// FUNCTION 14310b190 FUN_14310b190 body=163 status=ok
// SIG undefined FUN_14310b190(void)

void FUN_14310b190(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  uVar3 = *(uint *)(param_1 + 0x3c);
  if (uVar2 < 3) {
    uVar2 = 2;
    goto LAB_14310b20c;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x18)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x18,0);
        uVar3 = *(uint *)(param_1 + 0x3c);
        uVar2 = (uint)(uVar1 / 0x18);
      }
      goto LAB_14310b20c;
    }
    if (uVar2 == 0) goto LAB_14310b20c;
  }
  uVar2 = uVar3;
LAB_14310b20c:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x3c) = uVar2;
    FUN_1405a7760(param_1,*(undefined4 *)(param_1 + 0x38),uVar2,0x18);
    return;
  }
  return;
}



// FUNCTION 14310b240 ResizeShrink body=159 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeShrink(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0x8c);
  if (uVar2 < 5) {
    uVar2 = 4;
    goto LAB_14310b2b2;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 5)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 5,0);
        uVar3 = *(uint *)(param_1 + 0x8c);
        uVar2 = (uint)(uVar1 >> 5);
      }
      goto LAB_14310b2b2;
    }
    if (uVar2 == 0) goto LAB_14310b2b2;
  }
  uVar2 = uVar3;
LAB_14310b2b2:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x8c) = uVar2;
    FUN_140a6fd60(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,0x20);
    return;
  }
  return;
}



// FUNCTION 14310b2e0 ResizeTo body=25 status=ok
// SIG undefined ResizeTo(void)

void TArray<void_*,TFixedAllocator<128>_>::ResizeTo(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x80;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  if (iVar1 != *(int *)(param_1 + 0x404)) {
    *(int *)(param_1 + 0x404) = iVar1;
  }
  return;
}



// FUNCTION 14310b300 FUN_14310b300 body=337 status=ok
// SIG undefined FUN_14310b300(void)

void FUN_14310b300(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res10 [8];
  
  if ((*(byte *)(*param_2 + 0x90) & 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014310b336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x278))(*(longlong **)(param_1 + 0x200),param_2)
    ;
    return;
  }
  if ((*(byte *)(*param_2 + 0x90) & 4) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x1f8);
    if (*(char *)(param_3 + 0x14) == '\0') {
      (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2);
    }
    else {
      (**(code **)(*plVar3 + 0x2c0))();
    }
    plVar1 = (longlong *)(param_3 + 0x50);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_144576470;
      FWeakObjectPtr::operator=(plVar4 + 1,plVar3);
      plVar4[2] = (longlong)FUN_1431059f0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_1445764b8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
      iVar2 = *(int *)(param_3 + 0x58);
      *(int *)(param_3 + 0x58) = iVar2 + 1;
      if (*(int *)(param_3 + 0x5c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    return;
  }
  iVar2 = *(int *)(param_1 + 0x220);
  *(int *)(param_1 + 0x220) = iVar2 + 1;
  if (*(int *)(param_1 + 0x224) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x218),iVar2);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar2 * 8) = *param_2;
  return;
}



// FUNCTION 14310b460 FUN_14310b460 body=128 status=ok
// SIG undefined FUN_14310b460(void)

void FUN_14310b460(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  uVar2 = (longlong)*(int *)(param_1 + 0x90) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x90) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x278))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 14310b4e0 FUN_14310b4e0 body=267 status=ok
// SIG undefined FUN_14310b4e0(void)

void FUN_14310b4e0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  bVar1 = *(byte *)((longlong *)*param_2 + 0x12);
  if ((bVar1 & 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014310b515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x280))
              (*(longlong **)(param_1 + 0x200),param_2,1);
    return;
  }
  if ((bVar1 & 4) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x1f8);
    if ((undefined8 *)plVar3[7] != (undefined8 *)0x0) {
      lVar2 = FUN_140decfc0(*(undefined8 *)plVar3[7]);
      if (*(char *)(lVar2 + 0x14) == '\0') {
        (**(code **)(*plVar3 + 0x2c8))(plVar3,param_2);
      }
      else {
        (**(code **)(*plVar3 + 0x2d0))(plVar3,param_2,lVar2,1);
      }
      FUN_140483870(lVar2 + 0x50,plVar3);
    }
  }
  else {
    lVar2 = (**(code **)(*(longlong *)*param_2 + 0x4a8))();
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(param_1 + 0x208);
      plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x210) * 2;
      if (plVar3 != plVar4) {
        while (lVar2 != *plVar3) {
          plVar3 = plVar3 + 2;
          if (plVar3 == plVar4) {
            return;
          }
        }
        plVar3 = (longlong *)plVar3[1];
        if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014310b585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x280))(plVar3,param_2,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14310b5f0 FUN_14310b5f0 body=118 status=ok
// SIG undefined FUN_14310b5f0(void)

void FUN_14310b5f0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  uVar2 = (longlong)*(int *)(param_1 + 0x90) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x90) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x280))((longlong *)*puVar1,param_2,1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 14310b670 FUN_14310b670 body=534 status=ok
// SIG undefined FUN_14310b670(void)

void FUN_14310b670(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  float fVar10;
  undefined8 local_78;
  undefined4 local_70;
  float local_68;
  float fStack_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48 [2];
  undefined1 local_38 [24];
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  uVar4 = (**(code **)(*param_1 + 0x4a8))();
  FUN_1425ad800(local_38,uVar4,0);
  plVar9 = *(longlong **)(param_1[0x8b] + 0x88);
  plVar6 = plVar9 + *(int *)(param_1[0x8b] + 0x90);
  do {
    if (plVar9 == plVar6) {
      return;
    }
    lVar2 = *plVar9;
    if (lVar2 != 0) {
      lVar5 = FUN_14310e600();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        bVar3 = false;
        fVar10 = 1.0 / *(float *)(lVar2 + 0xa0);
        iVar8 = (int)((local_20 - *(float *)(lVar2 + 0xa4)) * fVar10);
        local_48[0] = 0;
        local_48[1] = 0;
        fVar1 = *(float *)(lVar2 + 0xa0);
        if (iVar8 < 1) {
          iVar8 = 0;
        }
        local_78 = CONCAT44(fVar1,fVar1);
        iVar7 = (int)((local_1c - *(float *)(lVar2 + 0xa8)) * fVar10);
        if (iVar7 < 1) {
          iVar7 = 0;
        }
        local_68 = ((float)iVar8 + 0.5) * fVar1 + *(float *)(lVar2 + 0xa4);
        fStack_64 = ((float)iVar7 + 0.5) * fVar1 + *(float *)(lVar2 + 0xa8);
        local_60 = local_18;
        local_70 = 0x41200000;
        if ((-1 < iVar8) && (iVar8 < *(int *)(lVar2 + 0x1a8))) {
          bVar3 = true;
        }
        if (bVar3) {
          plVar6 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar2 + 0x1a0));
          if ((iVar7 < 0) || ((int)plVar6[1] <= iVar7)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) &&
             (plVar6 = *(longlong **)(*plVar6 + (longlong)iVar7 * 8), plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x2b8))(plVar6,local_48);
          }
        }
        local_58 = local_78;
        local_78 = CONCAT44(fStack_64,local_68);
        local_50 = local_70;
        local_70 = local_60;
        FUN_14310ec10(param_1,&local_78,&local_58,local_48);
        if (local_48[0] == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 14310b890 GetTile body=36 status=ok
// SIG undefined GetTile(void)

void CWorldTileManager::GetTile(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FString::FString(local_18);
  FUN_143107850(param_1,uVar1);
  return;
}



// FUNCTION 14310b8c0 FUN_14310b8c0 body=489 status=ok
// SIG undefined FUN_14310b8c0(void)

void FUN_14310b8c0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  
  iVar10 = *(int *)(param_1 + 0x220) + -1;
  if (-1 < iVar10) {
    lVar12 = (longlong)iVar10 * 8;
    lVar13 = lVar12;
    do {
      plVar1 = *(longlong **)(lVar12 + *(longlong *)(param_1 + 0x218));
      if (plVar1 == (longlong *)0x0) {
LAB_14310ba16:
        iVar9 = *(int *)(param_1 + 0x220);
        iVar4 = (iVar9 - iVar10) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x218) + lVar13),
                     (void *)(*(longlong *)(param_1 + 0x218) + (longlong)(iVar9 - iVar4) * 8),
                     (longlong)iVar4 << 3);
          iVar9 = *(int *)(param_1 + 0x220);
        }
        *(int *)(param_1 + 0x220) = iVar9 + -1;
      }
      else {
        lVar5 = (**(code **)(*plVar1 + 0x4a8))(plVar1);
        if (lVar5 != 0) {
          lVar5 = (**(code **)(*plVar1 + 0x4a8))(plVar1);
          plVar11 = (longlong *)0x0;
          if (lVar5 != 0) {
            plVar6 = *(longlong **)(param_1 + 0x208);
            plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0x210) * 2;
            for (; plVar11 = (longlong *)0x0, plVar6 != plVar8; plVar6 = plVar6 + 2) {
              if (lVar5 == *plVar6) {
                plVar11 = (longlong *)0x0;
                if ((longlong *)plVar6[1] != (longlong *)0x0) {
                  plVar11 = (longlong *)plVar6[1];
                }
                break;
              }
            }
          }
          if (plVar11 != (longlong *)0x0) {
            local_48 = plVar1[2];
            local_50 = 0;
            lVar5 = plVar1[4];
            local_58 = plVar1;
            if (lVar5 != 0) {
              lVar7 = FUN_1429a0270();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) && (cVar3 = ULevel::IsPersistentLevel(lVar5), cVar3 == '\0')) {
                lVar5 = UObjectBaseUtility::GetOutermost(lVar5);
                local_50 = *(undefined8 *)(lVar5 + 0x18);
              }
            }
            (**(code **)(*plVar11 + 0x278))(plVar11,&local_58);
          }
          goto LAB_14310ba16;
        }
      }
      lVar13 = lVar13 + -8;
      lVar12 = lVar12 + -8;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  FUN_14310bab0(param_1,param_2);
  return;
}



// FUNCTION 14310bab0 FUN_14310bab0 body=4403 status=ok
// SIG undefined FUN_14310bab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14310bab0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint *puVar14;
  int iVar15;
  longlong *plVar16;
  float *pfVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  longlong *plVar27;
  longlong *plVar28;
  ulonglong uVar29;
  longlong *plVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_378 [32];
  longlong *local_358;
  longlong local_350;
  uint local_348;
  undefined1 local_338;
  longlong local_330;
  longlong local_328;
  int local_320;
  int local_31c;
  uint local_318;
  longlong *local_310;
  undefined8 local_308;
  longlong *local_300;
  longlong local_2f8;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  uint local_2e4;
  longlong *local_2e0;
  longlong local_2d8;
  int local_2d0;
  uint uStack_2cc;
  uint *puStack_2c8;
  undefined4 local_2c0;
  int iStack_2bc;
  int iStack_2b8;
  undefined4 uStack_2b4;
  uint *local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  longlong lStack_270;
  uint *local_268;
  undefined1 auStack_260 [16];
  longlong *local_248;
  undefined8 uStack_240;
  uint *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong *local_218;
  undefined2 local_210;
  longlong *local_208;
  longlong *local_200;
  int local_1f8;
  undefined1 local_1f4 [4];
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  float local_1e0;
  longlong local_1d8;
  uint local_1d0;
  longlong **local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong **local_1a8;
  longlong *local_1a0;
  uint **local_198;
  undefined8 local_170;
  longlong *plStack_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  piVar2 = (int *)(*(longlong *)(param_1 + 0x30) + 0x350);
  *piVar2 = *piVar2 + 1;
  *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
  local_318 = *(uint *)(param_1 + 0x1f0);
  puVar20 = *(undefined8 **)(param_1 + 0x98);
  uVar24 = 0;
  uVar18 = (longlong)*(int *)(param_1 + 0xa0) & 0x1fffffffffffffff;
  if (puVar20 + *(int *)(param_1 + 0xa0) < puVar20) {
    uVar18 = uVar24;
  }
  local_2a0 = param_1;
  if (uVar18 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar20 + 0x2a0))();
      puVar20 = puVar20 + 1;
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar18);
  }
  local_290 = *(longlong **)(param_1 + 0x38);
  local_200 = local_290 + *(int *)(param_1 + 0x40);
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_158 = 0;
  local_150 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_310 = (longlong *)0x0;
  local_308 = 0;
  uVar19 = local_338;
  if (local_290 != local_200) {
    do {
      lVar11 = *local_290;
      lVar22 = *(longlong *)(lVar11 + 0x28);
      local_2f8 = lVar11;
      if (*(longlong **)(lVar22 + 0x30) == (longlong *)0x0) {
        uVar10 = *(undefined8 *)(lVar22 + 0x98);
      }
      else {
        uVar10 = (**(code **)(**(longlong **)(lVar22 + 0x30) + 0x758))();
        lVar22 = *(longlong *)(lVar11 + 0x28);
      }
      uVar29 = 0;
      *(undefined8 *)(lVar22 + 0x90) = uVar10;
      plVar13 = *(longlong **)(*(longlong *)(lVar11 + 0x28) + 0x48);
      uVar24 = (ulonglong)*(int *)(*(longlong *)(lVar11 + 0x28) + 0x50);
      uVar18 = uVar24 & 0x1fffffffffffffff;
      if (plVar13 + uVar24 < plVar13) {
        uVar18 = uVar29;
      }
      if (uVar18 != 0) {
        do {
          uVar10 = 0;
          lVar22 = *plVar13;
          if ((*(longlong *)(*(longlong *)(lVar11 + 0x28) + 0x90) != 0) &&
             (plVar27 = *(longlong **)(lVar22 + 0x30), plVar27 != (longlong *)0x0)) {
            uVar10 = (**(code **)(*plVar27 + 0x758))();
          }
          plVar13 = plVar13 + 1;
          *(undefined8 *)(lVar22 + 0x90) = uVar10;
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar18);
      }
      uVar18 = 0;
      lVar22 = *(longlong *)(lVar11 + 0x28);
      local_2d8 = lVar22;
      if (*(longlong *)(lVar22 + 0x90) != 0) {
        plVar27 = (longlong *)(lVar11 + 0x30);
        plVar13 = *(longlong **)(lVar22 + 0x30);
        piVar2 = (int *)(*(longlong *)(param_1 + 0x30) + 0x218);
        *piVar2 = *piVar2 + 1;
        local_2f0 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x218);
        uVar24 = uVar18;
        if (0 < *(int *)(lVar22 + 0x88)) {
          do {
            lVar11 = *(longlong *)(uVar18 + *(longlong *)(lVar22 + 0x80));
            if (lVar11 != 0) {
              *(int *)(lVar11 + 0x13c) = local_2f0;
            }
            uVar26 = (int)uVar24 + 1;
            uVar18 = uVar18 + 8;
            uVar24 = (ulonglong)uVar26;
          } while ((int)uVar26 < *(int *)(lVar22 + 0x88));
        }
        local_2e0 = plVar27;
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0xea8))();
        }
        uVar24 = 0;
        plVar13 = *(longlong **)(lVar22 + 0x48);
        uVar18 = (longlong)*(int *)(lVar22 + 0x50) & 0x1fffffffffffffff;
        if (plVar13 + *(int *)(lVar22 + 0x50) < plVar13) {
          uVar18 = uVar24;
        }
        if (uVar18 != 0) {
          do {
            if (*(longlong **)(*plVar13 + 0x30) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(*plVar13 + 0x30) + 0xea8))();
            }
            plVar13 = plVar13 + 1;
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar18);
        }
        local_328 = 0;
        local_31c = 0;
        local_320 = 0;
        iVar21 = 0;
        if (0 < *(int *)(lVar22 + 0x50) + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(&local_328);
          iVar21 = local_320;
        }
        local_320 = iVar21 + 1;
        if (local_31c < local_320) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_328,iVar21);
        }
        FUN_1425ad800((longlong)iVar21 * 0x30 + local_328,lVar22,0);
        uVar24 = 0;
        uVar18 = uVar24;
        if (0 < *(int *)(lVar22 + 0x50)) {
          do {
            iVar21 = local_320;
            lVar11 = *(longlong *)(lVar22 + 0x48);
            if (*(longlong *)(*(longlong *)(uVar24 + lVar11) + 0x90) != 0) {
              lVar22 = (longlong)local_320;
              local_320 = local_320 + 1;
              if (local_31c < local_320) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_328,iVar21);
              }
              FUN_1425ad800(lVar22 * 0x30 + local_328,*(undefined8 *)(lVar11 + uVar24),0);
            }
            uVar26 = (int)uVar18 + 1;
            uVar24 = uVar24 + 8;
            uVar18 = (ulonglong)uVar26;
            lVar22 = local_2d8;
          } while ((int)uVar26 < *(int *)(local_2d8 + 0x50));
        }
        lVar11 = local_308;
        uVar26 = local_308._4_4_;
        local_308 = (ulonglong)local_308._4_4_ << 0x20;
        if ((lVar11 < 0) && (uVar26 != 0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_310,0);
        }
        uVar18 = 0;
        local_1e8 = &local_328;
        local_1d8 = local_2f8;
        local_1d0 = local_318;
        local_1c8 = &local_310;
        local_1c0 = lVar22 + 0x1748;
        local_1b8 = 0;
        fVar3 = 3.4028235e+38;
        lVar11 = local_328;
        while (local_1e0 = fVar3, lVar11 != (longlong)local_320 * 0x30 + local_328) {
          pfVar17 = (float *)(lVar11 + 0x20);
          lVar11 = lVar11 + 0x30;
          fVar3 = *pfVar17;
          if (local_1e0 <= *pfVar17) {
            fVar3 = local_1e0;
          }
        }
        puVar20 = *(undefined8 **)(param_1 + 0x88);
        uVar24 = (longlong)*(int *)(param_1 + 0x90) & 0x1fffffffffffffff;
        if (puVar20 + *(int *)(param_1 + 0x90) < puVar20) {
          uVar24 = uVar18;
        }
        if (uVar24 != 0) {
          do {
            (**(code **)(*(longlong *)*puVar20 + 0x298))((longlong *)*puVar20,&local_1e8);
            uVar18 = uVar18 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar18 != uVar24);
        }
        uVar24 = 0;
        puVar20 = *(undefined8 **)(local_2f8 + 0x180);
        uVar18 = (longlong)*(int *)(local_2f8 + 0x188) & 0x1fffffffffffffff;
        if (puVar20 + *(int *)(local_2f8 + 0x188) < puVar20) {
          uVar18 = uVar24;
        }
        if (uVar18 != 0) {
          do {
            (**(code **)(*(longlong *)*puVar20 + 0x298))((longlong *)*puVar20,&local_1e8);
            uVar24 = uVar24 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar24 != uVar18);
        }
        if ((int)local_308 == 0) {
          if (local_328 != 0) {
            FMemory::Free(local_328);
          }
          goto LAB_14310cade;
        }
        plVar13 = (longlong *)(param_1 + 0x78);
        *(undefined4 *)(param_1 + 0x80) = 0;
        local_298 = plVar13;
        if ((*(int *)(param_1 + 0x84) < 0) && (*(int *)(param_1 + 0x84) != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
          ResizeTo(plVar13,0);
        }
        lVar11 = local_2a0;
        local_2e4 = *(uint *)(param_1 + 0x60);
        fVar3 = *(float *)(param_1 + 0x5c);
        local_2a8 = local_310;
        local_208 = local_310 + (int)local_308;
        if (local_310 != local_208) {
          do {
            lVar22 = *local_2a8;
            plVar28 = (longlong *)(lVar22 + 0x20);
            plVar12 = (longlong *)(lVar22 + ((longlong)*(int *)(lVar22 + 8) + 4) * 8);
            local_300 = plVar12;
            if (plVar28 != plVar12) {
              do {
                plVar16 = (longlong *)0x0;
                lVar22 = *plVar28;
                local_330 = lVar22;
                if (((*(byte *)(lVar22 + 0x90) & 1) == 0) || (*(int *)(lVar22 + 0x13c) != local_2f0)
                   ) {
                  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                  ::FindId(plVar27,&local_2ec,lVar22);
                  plVar12 = plVar16;
                  if (local_2ec != -1) {
                    plVar12 = (longlong *)((longlong)local_2ec * 0x20 + *plVar27);
                  }
                  plVar30 = plVar12 + 1;
                  if (plVar12 == (longlong *)0x0) {
                    plVar30 = plVar16;
                  }
                  if (plVar30 == (longlong *)0x0) {
                    plVar12 = (longlong *)operator_new(0x28);
                    plVar30 = plVar16;
                    if (plVar12 != (longlong *)0x0) {
                      lVar22 = FUN_140decfc0(plVar27[0x14],&local_330);
                      *(byte *)((longlong)plVar12 + 0x24) =
                           *(byte *)((longlong)plVar12 + 0x24) & 0xfc;
                      plVar12[1] = 0;
                      plVar12[2] = 1;
                      *plVar12 = 0;
                      plVar12[3] = 0;
                      *(undefined4 *)(plVar12 + 4) = 0;
                      *(undefined4 *)(plVar12 + 2) = *(undefined4 *)(lVar22 + 0x3c);
                      *(undefined4 *)(plVar12 + 1) = *(undefined4 *)(lVar22 + 0x38);
                      plVar30 = plVar12;
                    }
                    local_288 = plVar30;
                    plVar12 = (longlong *)operator_new(0x18);
                    local_280 = plVar16;
                    if (plVar12 != (longlong *)0x0) {
                      *(undefined4 *)(plVar12 + 1) = 1;
                      *plVar12 = (longlong)&PTR_FUN_144576340;
                      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
                      plVar12[2] = (longlong)plVar30;
                      local_280 = plVar12;
                    }
                    SharedPointerInternals::EnableSharedFromThis(&local_288,plVar30,plVar30);
                    local_1b0 = &local_330;
                    local_1a8 = &local_288;
                    FUN_140dd9ec0(plVar27,local_1f0,&local_1b0,0);
                    plVar12 = local_280;
                    lVar22 = local_330;
                    if (local_280 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_280 + 1;
                      lVar23 = *plVar1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)lVar23 == 1) {
                        (**(code **)*local_280)(local_280);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar12 + 0xc);
                        iVar21 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        lVar22 = local_330;
                        if (iVar21 == 1) {
                          (**(code **)(*plVar12 + 8))(plVar12,1);
                          lVar22 = local_330;
                        }
                      }
                    }
                  }
                  else {
                    plVar30 = (longlong *)*plVar30;
                  }
                  plVar12 = local_300;
                  if ((*(byte *)((longlong)plVar30 + 0x24) & 1) == 0) {
                    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                    ::FindId(lVar11 + 0xb0,&local_2e8,lVar22);
                    if (local_2e8 != -1) {
                      plVar16 = (longlong *)
                                (*(longlong *)(lVar11 + 0xb0) + (longlong)local_2e8 * 0x18);
                    }
                    plVar27 = plVar16 + 1;
                    if (plVar16 == (longlong *)0x0) {
                      plVar27 = (longlong *)0x0;
                    }
                    if (plVar27 == (longlong *)0x0) {
                      plVar13 = (longlong *)
                                FUN_140ded2a0(lVar11 + 0x100,*(undefined8 *)(lVar22 + 0x10));
                      cVar7 = *(char *)(lVar11 + 0xa8);
                      puVar14 = (uint *)operator_new();
                      if (cVar7 == '\0') {
                        if (puVar14 == (uint *)0x0) goto LAB_14310c496;
                        puVar14[0] = 0;
                        puVar14[1] = 0;
                        puVar14[2] = 0;
                        puVar14[3] = 0;
                        puVar14[4] = 0;
                        *(undefined1 *)(puVar14 + 5) = 0;
                        puVar14[6] = 0;
                        puVar14[7] = 0;
                        puVar14[8] = 0;
                        puVar14[9] = 0;
                        puVar14[10] = 0;
                        puVar14[0xb] = 0;
                        lVar22 = plVar13[1];
                        *(longlong *)(puVar14 + 0xc) = *plVar13;
                        *(longlong *)(puVar14 + 0xe) = lVar22;
                        *(longlong *)(puVar14 + 0x10) = plVar13[2];
                        puVar14[0x12] = *(uint *)(plVar13 + 3);
                        puVar14[0x14] = 0;
                        puVar14[0x15] = 0;
                        puVar14[0x16] = 0;
                        puVar14[0x17] = 0;
                        puVar14[0x18] = 2;
                        puVar14[0x19] = 0;
                        puVar14[0x1a] = 0;
                        puVar14[0x1b] = 0;
                        puVar14[0x1c] = 0;
                        puVar14[0x1d] = 0;
                        puVar14[0x1e] = 2;
                        puVar14[0x1f] = 0;
                        puVar14[0x20] = 0;
                        puVar14[0x21] = 0;
                        puVar14[0x22] = 0;
                        puVar14[0x23] = 0;
                        puVar14[0x24] = 2;
                        puVar14[0x25] = 0;
                      }
                      else if (puVar14 == (uint *)0x0) {
LAB_14310c496:
                        puVar14 = (uint *)0x0;
                      }
                      else {
                        fVar33 = *(float *)(lVar11 + 0xac);
                        puVar14[0] = 0;
                        puVar14[1] = 0;
                        puVar14[2] = 0;
                        puVar14[3] = 0;
                        puVar14[4] = 0;
                        *(undefined1 *)(puVar14 + 5) = 0;
                        puVar14[6] = 0;
                        puVar14[7] = 0;
                        puVar14[8] = 0;
                        puVar14[9] = 0;
                        puVar14[10] = 0;
                        puVar14[0xb] = 0;
                        lVar22 = plVar13[1];
                        *(longlong *)(puVar14 + 0xc) = *plVar13;
                        *(longlong *)(puVar14 + 0xe) = lVar22;
                        *(longlong *)(puVar14 + 0x10) = plVar13[2];
                        puVar14[0x12] = *(uint *)(plVar13 + 3);
                        puVar14[0x14] = 0;
                        puVar14[0x15] = 0;
                        puVar14[0x16] = 0;
                        puVar14[0x17] = 0;
                        puVar14[0x18] = 2;
                        puVar14[0x19] = 0;
                        puVar14[0x1a] = 0;
                        puVar14[0x1b] = 0;
                        puVar14[0x1c] = 0;
                        puVar14[0x1d] = 0;
                        puVar14[0x1e] = 2;
                        puVar14[0x1f] = 0;
                        puVar14[0x20] = 0;
                        puVar14[0x21] = 0;
                        puVar14[0x22] = 0;
                        puVar14[0x23] = 0;
                        puVar14[0x24] = 2;
                        puVar14[0x25] = 0;
                        if ((*(byte *)(local_330 + 0x90) & 8) == 0) {
                          if ((float)puVar14[0xc] <= 0.0) {
                            uVar26 = 0;
                          }
                          else {
                            uVar26 = *(uint *)(local_330 + 0x138);
                          }
                          puVar14[0xe] = uVar26;
                        }
                        else {
                          puVar14[0xe] = 0;
                          if (*(float *)(local_330 + 0x138) == 0.0) {
                            puVar14[0xc] = 0;
                          }
                        }
                        fVar31 = fVar33 / *(float *)(local_330 + 0x140);
                        uVar8 = (uint)(longlong)(float)((int)ROUND(fVar31 + fVar31 + 0.5) >> 1);
                        uVar26 = 1;
                        if (uVar8 != 0) {
                          uVar26 = uVar8;
                        }
                        puVar14[0xf] = uVar26;
                        puVar14[0x11] = uVar26;
                        if (0.0 < *(float *)(local_330 + 0x144)) {
                          fVar33 = fVar33 / *(float *)(local_330 + 0x144);
                          uVar9 = (uint)(longlong)(float)((int)ROUND(fVar33 + fVar33 + 0.5) >> 1);
                          uVar8 = 1;
                          if (uVar9 != 0) {
                            uVar8 = uVar9;
                          }
                          if (uVar8 <= uVar26) {
                            uVar8 = uVar26;
                          }
                          puVar14[0x12] = uVar8;
                        }
                      }
                      local_1a0 = &local_330;
                      local_198 = &local_2b0;
                      local_2b0 = puVar14;
                      FUN_140dda160(lVar11 + 0xb0,local_1f4,&local_1a0,0);
                      puVar6 = local_2b0;
                      lVar22 = local_330;
                      plVar13 = local_298;
                      if (local_2b0 != (uint *)0x0) {
                        TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>
                                  (local_2b0 + 0x20);
                        TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>
                                  (puVar6 + 0x1a);
                        TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>
                                  (puVar6 + 0x14);
                        piVar2 = *(int **)(puVar6 + 6);
                        if ((piVar2 != (int *)0x0) &&
                           (iVar21 = *piVar2, *piVar2 = iVar21 + -1, iVar21 == 1)) {
                          **(uint **)(piVar2 + 4) = **(uint **)(piVar2 + 4) & ~piVar2[6];
                          piVar2[2] = 0;
                        }
                        FMemory::operator_delete(puVar6,0x98);
                        lVar22 = local_330;
                        plVar13 = local_298;
                      }
                    }
                    else {
                      puVar14 = (uint *)*plVar27;
                    }
                    plVar12 = local_300;
                    plVar27 = local_2e0;
                    if ((*(uint *)((longlong)plVar30 + 0xc) <= local_318) ||
                       (*(uint *)((longlong)plVar30 + 0x14) < puVar14[1])) {
                      if (*(uint *)(plVar30 + 2) < puVar14[0x12]) {
                        if (*(uint *)((longlong)plVar30 + 0x14) < puVar14[1]) {
                          uVar26 = puVar14[0x11];
                        }
                        else {
                          iVar21 = *(int *)(*(longlong *)(lVar11 + 0x30) + 0x58);
                          uVar26 = local_318 - (int)plVar30[4];
                          if (uVar26 <= (uint)(iVar21 * 2)) goto LAB_14310c5d6;
                          fVar33 = (float)(uVar26 + iVar21 * -2) / (float)(uint)(iVar21 * 5);
                          if (0.0 <= fVar33) {
                            if (1.0 <= fVar33) {
                              fVar33 = 1.0;
                            }
                          }
                          else {
                            fVar33 = 0.0;
                          }
                          uVar26 = (uint)(longlong)
                                         ((float)(puVar14[0x12] - puVar14[0x11]) * fVar33 +
                                         (float)puVar14[0x11]);
                        }
                        *(uint *)(plVar30 + 2) = uVar26;
                        lVar22 = local_330;
                      }
LAB_14310c5d6:
                      fVar33 = 0.0;
                      if (0.0 < (float)puVar14[0xc]) {
                        fVar34 = (float)puVar14[3] - *(float *)(local_328 + 0x1c);
                        fVar31 = (float)puVar14[2] - *(float *)(local_328 + 0x18);
                        fVar33 = (float)puVar14[4] - *(float *)(local_328 + 0x20);
                        fVar33 = fVar34 * fVar34 + fVar31 * fVar31 + fVar33 * fVar33;
                        if (1 < local_320) {
                          pfVar17 = (float *)(local_328 + 0x50);
                          uVar18 = (ulonglong)(local_320 - 1);
                          fVar31 = fVar33;
                          do {
                            fVar32 = (float)puVar14[3] - pfVar17[-1];
                            fVar34 = (float)puVar14[2] - pfVar17[-2];
                            fVar33 = (float)puVar14[4] - *pfVar17;
                            pfVar17 = pfVar17 + 0xc;
                            fVar33 = fVar32 * fVar32 + fVar34 * fVar34 + fVar33 * fVar33;
                            if (fVar31 <= fVar33) {
                              fVar33 = fVar31;
                            }
                            uVar18 = uVar18 - 1;
                            fVar31 = fVar33;
                          } while (uVar18 != 0);
                        }
                        if ((0.0 < *(float *)(plVar30 + 1)) && (*(float *)(plVar30 + 1) < fVar33))
                        goto LAB_14310c778;
                        fVar33 = fVar33 / fVar3;
                        if (0.0 <= fVar33) {
                          if (1.0 <= fVar33) {
                            fVar33 = 1.0;
                          }
                        }
                        else {
                          fVar33 = 0.0;
                        }
                        fVar33 = fVar33 * (float)puVar14[0xc];
                      }
                      lStack_270 = lVar22;
                      if (puVar14[0x10] != 0) {
                        uVar26 = *(int *)(lVar11 + 100) + puVar14[0x10] + (int)plVar30[2] +
                                 local_318;
                        if (uVar26 <= *(uint *)((longlong)plVar30 + 0x1c)) {
                          uVar26 = *(uint *)((longlong)plVar30 + 0x1c);
                        }
                        *(uint *)((longlong)plVar30 + 0x1c) = uVar26;
                        lStack_270 = local_330;
                      }
                      if ((0.0 < (float)puVar14[0xd]) && ((int)plVar30[3] != 0)) {
                        fVar31 = ((float)(local_318 - (int)plVar30[3]) * (float)puVar14[0xd]) /
                                 (float)local_2e4;
                        if (0.0 <= fVar31) {
                          if (1.0 <= fVar31) {
                            fVar31 = 1.0;
                          }
                        }
                        else {
                          fVar31 = 0.0;
                        }
                        fVar33 = fVar33 - fVar31;
                      }
                      if (*(uint *)((longlong)plVar30 + 0x14) < puVar14[1]) {
                        fVar33 = fVar33 + -1.0;
                      }
                      iVar21 = (int)plVar13[1];
                      local_278 = (longlong *)CONCAT44(local_278._4_4_,fVar33);
                      auStack_260._0_8_ = plVar30;
                      *(int *)(plVar13 + 1) = iVar21 + 1;
                      local_268 = puVar14;
                      if (*(int *)((longlong)plVar13 + 0xc) < iVar21 + 1) {
                        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                        ::ResizeGrow(plVar13,iVar21);
                      }
                      lVar22 = *plVar13;
                      plVar27 = (longlong *)((longlong)iVar21 * 0x20 + lVar22);
                      *plVar27 = (longlong)local_278;
                      plVar27[1] = lStack_270;
                      puVar20 = (undefined8 *)((longlong)iVar21 * 0x20 + 0x10 + lVar22);
                      *puVar20 = local_268;
                      puVar20[1] = auStack_260._0_8_;
                      plVar12 = local_300;
                      plVar27 = local_2e0;
                    }
                  }
                }
LAB_14310c778:
                plVar28 = plVar28 + 1;
              } while (plVar28 != plVar12);
            }
            local_2a8 = local_2a8 + 1;
            param_1 = local_2a0;
            uVar19 = local_338;
          } while (local_2a8 != local_208);
        }
        iVar21 = 0;
        AlgoImpl::
        IntroSortInternal<FPrioritizedRepList::FItem,FIdentityFunctor,TDereferenceWrapper<FPrioritizedRepList::FItem,TLess<FPrioritizedRepList::FItem>_>_>
                  (*plVar13,(longlong)(int)plVar13[1],uVar19);
        uVar26 = local_318;
        if (0 < *(int *)(param_1 + 0x80)) {
          lVar11 = 0;
          do {
            if (*(uint *)(*(longlong *)(lVar11 + 0x18 + *plVar13) + 0x14) != uVar26) {
              local_348 = uVar26;
              local_350 = local_2d8;
              local_358 = plVar27;
              FUN_14310a960(param_1,*(undefined8 *)(lVar11 + 8 + *plVar13));
              if (0 < (longlong)*(int *)(local_2d8 + 0x210) + *(longlong *)(local_2d8 + 0x550)) {
                local_358 = (longlong *)CONCAT44(local_358._4_4_,uVar26);
                FUN_1430ffdb0(param_1,plVar13,iVar21 + 1);
                _DAT_146afefdc = _DAT_146afefdc + 1;
                break;
              }
            }
            iVar21 = iVar21 + 1;
            lVar11 = lVar11 + 0x20;
          } while (iVar21 < *(int *)(param_1 + 0x80));
        }
        uStack_2cc = 1;
        local_278 = plVar27 + 10;
        iVar21 = (int)plVar27[0xf];
        puStack_2c8 = (uint *)(plVar27 + 0xc);
        local_2d0 = 0;
        iStack_2bc = 0;
        iStack_2b8 = 0;
        if (iVar21 != 0) {
          puVar14 = (uint *)plVar27[0xe];
          if ((uint *)plVar27[0xe] == (uint *)0x0) {
            puVar14 = puStack_2c8;
          }
          uVar8 = *puVar14;
          local_2d0 = 0;
          iStack_2b8 = 0;
          while (uVar8 == 0) {
            lVar11 = (longlong)local_2d0;
            iStack_2b8 = iStack_2b8 + 0x20;
            iVar15 = local_2d0 + 1;
            bVar5 = (int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_2d0;
            local_2d0 = iVar15;
            if (bVar5) goto LAB_14310c905;
            uVar8 = puVar14[lVar11 + 1];
          }
          uStack_2cc = -uVar8 & uVar8;
          local_1f8 = 0x1f;
          if (uStack_2cc != 0) {
            for (; uStack_2cc >> local_1f8 == 0; local_1f8 = local_1f8 + -1) {
            }
          }
          if (uStack_2cc == 0) {
            iVar15 = 0x20;
          }
          else {
            iVar15 = 0x1f - local_1f8;
          }
          iStack_2bc = (iStack_2b8 - iVar15) + 0x1f;
          if (iVar21 < iStack_2bc) {
LAB_14310c905:
            iStack_2bc = iVar21;
          }
        }
        local_2c0 = 0xffffffff;
        uStack_230 = CONCAT44(iStack_2bc,0xffffffff);
        auStack_260._8_4_ = iStack_2b8;
        auStack_260._0_8_ = uStack_230;
        auStack_260._12_4_ = uStack_2b4;
        lStack_270 = CONCAT44(uStack_2cc,local_2d0);
        local_210 = 0;
        local_228 = auStack_260._8_8_;
        iVar21 = iStack_2bc;
        local_268 = puStack_2c8;
        local_248 = local_278;
        uStack_240 = lStack_270;
        local_238 = puStack_2c8;
        local_218 = local_278;
        local_170 = local_228;
        plStack_168 = local_278;
        uStack_220 = local_278;
        if (iStack_2bc < (int)plVar27[0xf]) {
          do {
            plVar13 = *(longlong **)((longlong)iVar21 * 0x20 + 8 + *local_248);
            lVar11 = *(longlong *)((longlong)iVar21 * 0x20 + *local_248);
            if (((((*(byte *)(lVar11 + 0x30) & 2) == 0) && ((*(byte *)(*plVar13 + 0x30) & 2) == 0))
                && (*(uint *)((longlong)plVar13 + 0x1c) != 0)) &&
               ((*(uint *)((longlong)plVar13 + 0x1c) <= uVar26 &&
                (*(longlong *)(lVar11 + 0x68) != 0)))) {
              cVar7 = UAbilityTask::IsWaitingOnRemotePlayerdata();
              if (cVar7 == '\0') {
                (**(code **)(*(longlong *)*plVar13 + 0x288))();
              }
            }
            uStack_230 = CONCAT44(uStack_230._4_4_,(uint)uStack_230 & ~uStack_240._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_240);
            iVar21 = uStack_230._4_4_;
          } while (uStack_230._4_4_ < (int)local_238[6]);
          if (((char)local_210 != '\0') && (local_210._1_1_ != '\0')) {
            TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_218,(int)local_218[1] - *(int *)((longlong)local_218 + 0x34),1
                               );
          }
        }
        lVar11 = local_2f8;
        FUN_14310a6a0(local_2f8,&local_328,*(undefined4 *)(param_1 + 0x58));
        FUN_1430fd8d0(lVar11);
        plVar13 = local_298;
        lVar22 = local_2f8;
        bVar5 = false;
        *(int *)(lVar11 + 0xec) = *(int *)(lVar11 + 0xec) + 1;
        iVar21 = *(int *)(lVar11 + 0xec);
        iVar15 = *(int *)(lVar11 + 0xe0) + -1;
        lVar23 = (longlong)iVar15;
        if (-1 < iVar15) {
          lVar25 = lVar23 << 4;
          bVar5 = false;
          do {
            lVar4 = *(longlong *)(lVar11 + 0xd8);
            if ((*(int *)(lVar25 + 8 + lVar4) == 0) ||
               (plVar27 = *(longlong **)(lVar25 + lVar4), plVar27 == (longlong *)0x0)) {
LAB_14310ca83:
              bVar5 = true;
            }
            else {
              cVar7 = (**(code **)(*plVar27 + 0x40))(plVar27,lVar22,plVar13);
              if (cVar7 == '\0') goto LAB_14310ca83;
            }
            lVar25 = lVar25 + -0x10;
            lVar23 = lVar23 + -1;
          } while (-1 < lVar23);
          iVar21 = *(int *)(lVar11 + 0xec);
          uVar19 = local_338;
        }
        *(int *)(lVar11 + 0xec) = iVar21 + -1;
        if (bVar5) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(lVar11 + 0xd8),0);
        }
        if (local_328 != 0) {
          FMemory::Free();
        }
      }
      local_290 = local_290 + 1;
    } while (local_290 != local_200);
  }
  _DAT_146b4b4b8 = 0;
LAB_14310cade:
  if (local_310 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_110 = 0;
  if (local_118 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_158);
  local_c0 = 0;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_108);
  return 0;
}



// FUNCTION 14310cbf0 FUN_14310cbf0 body=938 status=ok
// SIG undefined FUN_14310cbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14310cbf0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  uint local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  int local_98;
  int local_90;
  char local_8c;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  undefined8 local_60;
  char local_58;
  ulonglong local_50;
  
  if (param_2 != 0) {
    local_50 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
    local_b8 = param_1;
    lVar9 = FUN_140ded2a0(param_1[0x8b] + 0x100);
    *(undefined4 *)(lVar9 + 8) = param_3;
    local_c8 = (**(code **)(*param_1 + 0x148))(param_1);
    local_b0[0] = 5;
    local_58 = '\0';
    local_c0 = param_2;
    FUN_14044bc80(&local_a8,&local_c8,&local_c0);
    FUN_14045a130(local_b0);
    if (local_8c == '\0') {
LAB_14310ccb2:
      lVar6 = local_80;
      lVar9 = param_1[0x8b];
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0xb0,&local_c8,local_80);
      if (((((int)local_c8 != -1) &&
           (lVar9 = *(longlong *)(lVar9 + 0xb0) + (longlong)(int)local_c8 * 0x18, lVar9 != 0)) &&
          (plVar10 = (longlong *)(lVar9 + 8), plVar10 != (longlong *)0x0)) &&
         (lVar9 = *plVar10, lVar9 != 0)) {
        *(undefined4 *)(lVar9 + 0x38) = param_3;
      }
      lVar9 = param_1[0x8c];
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0x30,&local_c0,lVar6);
      lVar6 = local_a8;
      if ((((int)local_c0 != -1) &&
          (lVar9 = (longlong)(int)local_c0 * 0x20 + *(longlong *)(lVar9 + 0x30), lVar9 != 0)) &&
         ((plVar10 = (longlong *)(lVar9 + 8), plVar10 != (longlong *)0x0 &&
          (lVar9 = *plVar10, lVar9 != 0)))) {
        *(undefined4 *)(lVar9 + 8) = param_3;
      }
      iVar18 = local_90 + 1;
      if (iVar18 < local_70 + local_98) {
        lVar9 = (longlong)iVar18 * 8;
        iVar17 = local_70;
        iVar14 = local_98;
        do {
          if (iVar18 < iVar14) {
            lVar16 = *(longlong *)(local_a0 + lVar9);
          }
          else {
            lVar16 = *(longlong *)(local_78 + (longlong)(iVar18 - iVar14) * 8);
          }
          local_88 = local_88 + 1;
          if ((lVar16 != 0) &&
             (lVar11 = AActor::GetLevel(lVar16), iVar17 = local_70, iVar14 = local_98, lVar11 != 0))
          {
            if ((local_b0[0] & 1) != 0) {
              iVar1 = *(int *)(lVar16 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar15 = iVar1 >> 0x1f & 0xffff;
                uVar8 = iVar1 + uVar15;
                lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                         (longlong)(int)((uVar8 & 0xffff) - uVar15) * 0x18;
              }
              else {
                lVar12 = 0;
              }
              if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_14310cee5;
            }
            if (((local_b0[0] >> 1 & 1) == 0) ||
               (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(lVar16), iVar17 = local_70,
               iVar14 = local_98, cVar7 != '\0')) {
              if ((local_b0[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar11 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar11 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar2 = *(int **)(lVar11 + 600);
                if (((*(longlong *)(lVar11 + 0xc0) == 0) ||
                    (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)) ||
                   (piVar2 == piVar13)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                iVar17 = local_70;
                iVar14 = local_98;
                if ((!bVar5) || (!bVar3)) goto LAB_14310cee5;
              }
              lVar11 = ULevel::GetWorld(lVar11);
              iVar17 = local_70;
              iVar14 = local_98;
              if (lVar11 == lVar6) {
                lVar11 = AActor::GetLevel(lVar16);
                if (lVar11 == *(longlong *)(lVar6 + 0x30)) goto LAB_14310cf7f;
                lVar11 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar17 = local_70;
                iVar14 = local_98;
                if (!bVar5) goto LAB_14310cf7f;
              }
            }
          }
LAB_14310cee5:
          iVar18 = iVar18 + 1;
          lVar9 = lVar9 + 8;
          if (iVar17 + iVar14 <= iVar18) break;
        } while( true );
      }
      local_80 = 0;
      local_8c = '\x01';
    }
LAB_14310cf2d:
    if (local_58 != '\0') {
      local_58 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_a8,local_60);
      if (local_78 != 0) {
        FMemory::Free();
      }
      if (local_a0 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
LAB_14310cf7f:
  param_1 = local_b8;
  local_90 = iVar18;
  local_80 = lVar16;
  if (local_8c != '\0') goto LAB_14310cf2d;
  goto LAB_14310ccb2;
}



// FUNCTION 14310cfa0 FUN_14310cfa0 body=1209 status=ok
// SIG undefined FUN_14310cfa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14310cfa0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  undefined8 local_170;
  uint *puStack_168;
  int local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  uint local_150 [2];
  uint ***local_148;
  uint *local_140;
  uint **local_138;
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  uint *local_120;
  uint uStack_118;
  int iStack_114;
  undefined8 local_110;
  longlong *local_108;
  int iStack_100;
  uint uStack_fc;
  uint *puStack_f8;
  uint uStack_f0;
  int iStack_ec;
  undefined8 uStack_e8;
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8 [4];
  uint *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  undefined1 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  *(undefined1 *)(*(longlong *)(param_1 + 0x460) + 0x178) = 1;
  plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x458) + 0x88);
  plVar12 = plVar10 + *(int *)(*(longlong *)(param_1 + 0x458) + 0x90);
joined_r0x00014310cfe8:
  if (plVar10 == plVar12) {
    return;
  }
  lVar9 = *plVar10;
  if (lVar9 != 0) {
    lVar7 = FUN_14310e600();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      local_88 = 0;
      local_80 = 0;
      local_68 = 0;
      local_60 = 0;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_b8 = (uint *)0x0;
      local_b0 = 0;
      local_a4 = 0;
      local_98 = (undefined1 *)0x0;
      local_90 = 0;
      local_58 = 0xffffffff;
      local_a8 = 0xffffffff;
      plVar12 = *(longlong **)(lVar9 + 0x1a0);
      plVar10 = plVar12 + (longlong)*(int *)(lVar9 + 0x1a8) * 2;
      for (; plVar12 != plVar10; plVar12 = plVar12 + 2) {
        plVar13 = (longlong *)*plVar12;
        plVar1 = plVar13 + (int)plVar12[1];
        for (; plVar13 != plVar1; plVar13 = plVar13 + 1) {
          plVar4 = (longlong *)*plVar13;
          if (plVar4 != (longlong *)0x0) {
            local_170 = 0;
            puStack_168 = (uint *)0x0;
            (**(code **)(*plVar4 + 0x2b8))(plVar4,&local_170);
            if ((int)local_80 - local_54 < ((int)local_80 - local_54) + (int)puStack_168) {
              FUN_1405effc0(&local_88);
            }
            lVar9 = local_170 + (longlong)(int)puStack_168 * 8;
            for (lVar7 = local_170; lVar7 != lVar9; lVar7 = lVar7 + 8) {
              FUN_14058c900(&local_88,&local_138,lVar7,0);
            }
            local_150[0] = *(uint *)(plVar4 + 0x28);
            if ((int)local_d0 != local_a4) {
              puVar8 = local_a0;
              if (local_98 != (undefined1 *)0x0) {
                puVar8 = local_98;
              }
              iVar2 = *(int *)(puVar8 + (longlong)(int)(local_90 - 1U & local_150[0]) * 4);
              while (iVar2 != -1) {
                lVar9 = (longlong)iVar2;
                if (*(uint *)(local_d8 + lVar9 * 0x10) == local_150[0]) {
                  if ((iVar2 != -1) && (lVar9 = local_d8 + lVar9 * 0x10, lVar9 != 0))
                  goto LAB_14310d209;
                  break;
                }
                iVar2 = *(int *)(local_d8 + lVar9 * 0x10 + 8);
              }
            }
            local_140 = local_150;
            FUN_14058d450(&local_d8,&local_148,&local_140);
            lVar9 = (longlong)(int)local_148 * 0x10 + local_d8;
LAB_14310d209:
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
            if (local_170 != 0) {
              FMemory::Free();
            }
          }
        }
      }
      local_140 = (uint *)local_178;
      local_138 = &local_140;
      if (0 < (int)local_d0 - local_a4) {
        TSparseArray<TSetElement<UClass_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Compact(&local_d8);
        local_148 = &local_138;
        AlgoImpl::
        IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>
                  (local_d8,(longlong)((int)local_d0 - local_a4),local_178[0],&local_148);
      }
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Rehash
                (&local_d8);
      iVar2 = (int)local_b0;
      puStack_168 = local_c8;
      local_170._0_4_ = 0;
      local_170._4_4_ = 1;
      iStack_15c = 0;
      iStack_158 = 0;
      if ((int)local_b0 != 0) {
        puVar11 = local_c8;
        if (local_b8 != (uint *)0x0) {
          puVar11 = local_b8;
        }
        uVar3 = *puVar11;
        while (uVar3 == 0) {
          iStack_158 = iStack_158 + 0x20;
          if ((int)((int)local_b0 + -1 + ((int)local_b0 + -1 >> 0x1f & 0x1fU)) >> 5 <=
              (int)local_170) {
            iStack_15c = (int)local_b0;
            local_170._0_4_ = (int)local_170 + 1;
            goto LAB_14310d36a;
          }
          uVar3 = puVar11[(longlong)(int)local_170 + 1];
          local_170._0_4_ = (int)local_170 + 1;
        }
        local_170._4_4_ = -uVar3 & uVar3;
        iVar6 = 0x1f;
        if (local_170._4_4_ != 0) {
          for (; local_170._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (local_170._4_4_ == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        iStack_15c = (iStack_158 - iVar6) + 0x1f;
        if ((int)local_b0 < iStack_15c) {
          iStack_15c = (int)local_b0;
        }
      }
LAB_14310d36a:
      uStack_118 = 0xffffffff;
      iStack_114 = iStack_15c;
      local_110 = CONCAT44(uStack_154,iStack_158);
      local_108 = &local_d8;
      iStack_15c = (int)local_b0;
      iStack_100 = (int)local_170;
      uStack_fc = local_170._4_4_;
      local_160 = -1 << ((byte)local_b0 & 0x1f);
      iStack_128 = (int)local_170;
      uStack_124 = local_170._4_4_;
      local_120 = puStack_168;
      puStack_f8 = puStack_168;
      uStack_e8 = local_110;
      local_130 = local_108;
      uStack_f0 = uStack_118;
      iStack_ec = iStack_114;
      while( true ) {
        if ((iStack_114 == iVar2) && (local_120 == local_c8)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((bVar5) && (local_130 == &local_d8)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) break;
        uStack_118 = uStack_118 & ~uStack_124;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_128);
      }
      local_90 = 0;
      if (local_98 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_d8);
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      return;
    }
  }
  plVar10 = plVar10 + 1;
  goto joined_r0x00014310cfe8;
}



// FUNCTION 14310d460 FUN_14310d460 body=969 status=ok
// SIG undefined FUN_14310d460(void)

void FUN_14310d460(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar13;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b50108) && (_Init_thread_header(&DAT_146b50108), DAT_146b50108 == -1))
  {
    atexit((_func_5014 *)&LAB_143ec3d10);
    _Init_thread_footer(&DAT_146b50108);
  }
  uVar13 = 0;
  DAT_146b50100 = 0;
  if ((DAT_146b50104 < 0) && (DAT_146b50104 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b500f8,0);
  }
  plVar1 = (longlong *)(param_1 + 0xa8);
  iVar14 = *(int *)(param_1 + 0xe0);
  plVar8 = *(longlong **)(param_1 + 0xd8);
  if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
    plVar8 = plVar1;
  }
  plVar2 = plVar8 + (longlong)iVar14 * 3;
  if (plVar8 != plVar2) {
    do {
      lVar10 = *plVar8;
      if (lVar10 != 0) {
        puVar15 = (undefined8 *)(lVar10 + 0x20);
        puVar7 = (undefined8 *)(lVar10 + (longlong)*(int *)(lVar10 + 8) * 8 + 0x20);
        uVar16 = (ulonglong)((longlong)puVar7 + (7 - (longlong)puVar15)) >> 3;
        if (puVar7 < puVar15) {
          uVar16 = uVar13;
        }
        uVar12 = uVar13;
        if (uVar16 != 0) {
          do {
            iVar14 = DAT_146b50100;
            lVar10 = (longlong)DAT_146b50100;
            uVar3 = *puVar15;
            DAT_146b50100 = DAT_146b50100 + 1;
            if (DAT_146b50104 < DAT_146b50100) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&DAT_146b500f8,iVar14);
            }
            puVar15 = puVar15 + 1;
            uVar12 = uVar12 + 1;
            *(undefined8 *)(DAT_146b500f8 + lVar10 * 8) = uVar3;
          } while (uVar12 != uVar16);
        }
      }
      plVar8 = plVar8 + 3;
    } while (plVar8 != plVar2);
    iVar14 = *(int *)(param_1 + 0xe0);
  }
  if (iVar14 < param_2) {
    *(int *)(param_1 + 0xe0) = param_2;
    iVar9 = param_2 - iVar14;
    if (*(int *)(param_1 + 0xe4) < param_2) {
      TArray<FCompactPose,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(plVar1,iVar14);
    }
    plVar8 = *(longlong **)(param_1 + 0xd8);
    if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
      plVar8 = plVar1;
    }
    plVar8 = plVar8 + (longlong)iVar14 * 3;
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      plVar8 = plVar8 + 3;
    }
  }
  else if (param_2 < iVar14) {
    TArray<FActorRepListRefView,TInlineAllocator<2,FDefaultAllocator>_>::RemoveAtImpl
              (plVar1,param_2,iVar14 - param_2,1);
  }
  plVar8 = *(longlong **)(param_1 + 0xd8);
  if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
    plVar8 = plVar1;
  }
  plVar2 = plVar8 + (longlong)*(int *)(param_1 + 0xe0) * 3;
  for (; plVar8 != plVar2; plVar8 = plVar8 + 3) {
    piVar4 = (int *)*plVar8;
    if (((piVar4 == (int *)0x0) || (*piVar4 != 1)) || (piVar4[1] < DAT_1467bc374)) {
      iVar14 = DAT_1467bc374;
      if (DAT_1467bc374 < 1) {
        iVar14 = (int)plVar8[2];
      }
      iVar9 = 4;
      if (0 < iVar14) {
        iVar9 = iVar14;
      }
      lVar10 = FUN_1430ffb70(&DAT_146b4b6c0,iVar9,0);
      piVar6 = (int *)FUN_14310ae50(lVar10 + 8,lVar10);
      piVar4 = (int *)*plVar8;
      *plVar8 = (longlong)piVar6;
      *(undefined4 *)(plVar8 + 2) = 0;
      if (piVar6 != (int *)0x0) {
        *piVar6 = *piVar6 + 1;
      }
      if ((piVar4 != (int *)0x0) && (iVar14 = *piVar4, *piVar4 = iVar14 + -1, iVar14 == 1)) {
        **(uint **)(piVar4 + 4) = **(uint **)(piVar4 + 4) & ~piVar4[6];
        piVar4[2] = 0;
      }
      plVar8[1] = *plVar8 + 0x20;
      *(undefined4 *)((longlong)plVar8 + 0x14) = *(undefined4 *)(*plVar8 + 4);
    }
    else {
      piVar4[2] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
    }
  }
  uVar16 = uVar13;
  if (0 < DAT_146b50100) {
    do {
      lVar10 = DAT_146b500f8;
      plVar8 = *(longlong **)(param_1 + 0xd8);
      if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      lVar5 = (longlong)((int)uVar13 % param_2);
      plVar2 = plVar8 + lVar5 * 3;
      iVar14 = *(int *)((longlong)plVar8 + lVar5 * 0x18 + 0x14);
      if ((int)plVar2[2] == iVar14) {
        iVar9 = 4;
        if (-1 < iVar14) {
          iVar9 = iVar14 + 1;
        }
        lVar5 = FUN_1430ffb70(&DAT_146b4b6c0,iVar9,0);
        piVar6 = (int *)FUN_14310ae50(lVar5 + 8,lVar5);
        _guard_xfg_dispatch_icall_nop(piVar6 + 8,(void *)plVar2[1],(longlong)(int)plVar2[2] << 3);
        piVar6[2] = (int)plVar2[2];
        piVar4 = (int *)*plVar2;
        *plVar2 = (longlong)piVar6;
        *piVar6 = *piVar6 + 1;
        if ((piVar4 != (int *)0x0) && (iVar14 = *piVar4, *piVar4 = iVar14 + -1, iVar14 == 1)) {
          **(uint **)(piVar4 + 4) = **(uint **)(piVar4 + 4) & ~piVar4[6];
          piVar4[2] = 0;
        }
        plVar2[1] = *plVar2 + 0x20;
        *(undefined4 *)((longlong)plVar2 + 0x14) = *(undefined4 *)(*plVar2 + 4);
      }
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
      *(undefined8 *)(plVar2[1] + (longlong)(int)plVar2[2] * 8) = *(undefined8 *)(uVar16 + lVar10);
      *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
      *(int *)(*plVar2 + 8) = *(int *)(*plVar2 + 8) + 1;
      uVar16 = uVar16 + 8;
    } while ((int)uVar11 < DAT_146b50100);
  }
  return;
}



// FUNCTION 14310d830 FUN_14310d830 body=233 status=ok
// SIG undefined FUN_14310d830(void)

void FUN_14310d830(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  if (param_1[0xd] != 0) {
    *(longlong *)(param_1[0xd] + 8) = param_2;
  }
  if (param_2 != 0) {
    cVar3 = FUN_1428c5cc0(param_2);
    if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014310d875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x338))(param_1,param_2);
      return;
    }
    plVar1 = (longlong *)(param_2 + 0x840);
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = (longlong)param_1;
      *plVar4 = (longlong)&PTR_GetPoolName_145ac0928;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_145ac0970;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar2 = *(int *)(param_2 + 0x848);
      *(int *)(param_2 + 0x848) = iVar2 + 1;
      if (*(int *)(param_2 + 0x84c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 2;
    }
  }
  return;
}



// FUNCTION 14310d920 FUN_14310d920 body=196 status=ok
// SIG undefined FUN_14310d920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310d920(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  uVar6 = (longlong)*(int *)(param_1 + 0x30) & 0x1fffffffffffffff;
  if (puVar5 + *(int *)(param_1 + 0x30) < puVar5) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar5 + 0x290))();
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 != uVar6);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar4 = iVar2 >> 0x1f & 0xffff;
    uVar3 = iVar2 + uVar4;
    puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) + 8 +
                     (longlong)(int)((uVar3 & 0xffff) - uVar4) * 0x18);
    *puVar1 = *puVar1 | 0x20000000;
  }
  else {
    _DAT_00000008 = _DAT_00000008 | 0x20000000;
  }
  return;
}



// FUNCTION 14310d9f0 FUN_14310d9f0 body=570 status=ok
// SIG undefined FUN_14310d9f0(void)

void FUN_14310d9f0(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int local_res8 [2];
  undefined8 local_res10;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong **local_40;
  
  local_res10 = param_2;
  lVar3 = FUN_140decfc0(param_1 + 0xa8,&local_res10);
  lVar3 = *(longlong *)(lVar3 + 0x18);
  if (lVar3 != 0) {
    uVar11 = 0;
    puVar10 = (undefined8 *)(lVar3 + 0x20);
    puVar6 = (undefined8 *)(lVar3 + (longlong)*(int *)(lVar3 + 8) * 8 + 0x20);
    uVar8 = (ulonglong)((longlong)puVar6 + (7 - (longlong)puVar10)) >> 3;
    if (puVar6 < puVar10) {
      uVar8 = uVar11;
    }
    if (uVar8 != 0) {
      do {
        plVar5 = (longlong *)0x0;
        local_60 = *puVar10;
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(param_3,local_res8);
        plVar4 = plVar5;
        if (local_res8[0] != -1) {
          plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_3);
        }
        plVar7 = plVar4 + 1;
        if (plVar4 == (longlong *)0x0) {
          plVar7 = plVar5;
        }
        if (plVar7 == (longlong *)0x0) {
          plVar4 = (longlong *)operator_new(0x28);
          plVar7 = plVar5;
          if (plVar4 != (longlong *)0x0) {
            lVar3 = FUN_140decfc0(param_3[0x14],&local_60);
            *(byte *)((longlong)plVar4 + 0x24) = *(byte *)((longlong)plVar4 + 0x24) & 0xfc;
            plVar4[1] = 0;
            plVar4[2] = 1;
            *plVar4 = 0;
            plVar4[3] = 0;
            *(undefined4 *)(plVar4 + 4) = 0;
            *(undefined4 *)(plVar4 + 2) = *(undefined4 *)(lVar3 + 0x3c);
            *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(lVar3 + 0x38);
            plVar7 = plVar4;
          }
          local_58 = plVar7;
          plVar4 = (longlong *)operator_new(0x18);
          if (plVar4 != (longlong *)0x0) {
            *(undefined4 *)(plVar4 + 1) = 1;
            *plVar4 = (longlong)&PTR_FUN_144576340;
            *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
            plVar4[2] = (longlong)plVar7;
            plVar5 = plVar4;
          }
          local_50 = plVar5;
          SharedPointerInternals::EnableSharedFromThis(&local_58,plVar7,plVar7);
          local_48 = &local_60;
          local_40 = &local_58;
          FUN_140dd9ec0(param_3,local_68,&local_48,0);
          plVar5 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_50 + 1;
            lVar3 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_50)(local_50);
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
        }
        else {
          plVar7 = (longlong *)*plVar7;
        }
        uVar9 = *(uint *)((longlong)plVar7 + 0x1c);
        if (*(uint *)((longlong)plVar7 + 0x1c) <= param_4) {
          uVar9 = param_4;
        }
        *(uint *)((longlong)plVar7 + 0x1c) = uVar9;
        FUN_14310d9f0(param_1,local_60,param_3);
        puVar10 = puVar10 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar8);
    }
  }
  return;
}



// FUNCTION 14310dc30 FUN_14310dc30 body=162 status=ok
// SIG undefined FUN_14310dc30(void)

longlong FUN_14310dc30(void)

{
  if (DAT_146b502e8 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraphDebugActor",&DAT_146b502e8,
                  FUN_14310f110,0x468,0x10000008,0,L"Engine",FUN_14310e6b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b502e8;
}



// FUNCTION 14310dce0 FUN_14310dce0 body=162 status=ok
// SIG undefined FUN_14310dce0(void)

longlong FUN_14310dce0(void)

{
  if (DAT_146b501d8 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"BasicReplicationGraph",&DAT_146b501d8,FUN_140447710,
                  0x228,0x1000000c,0,L"Engine",&LAB_14310e6e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14310ed90,&LAB_140447700,0);
  }
  return DAT_146b501d8;
}



// FUNCTION 14310dd90 FUN_14310dd90 body=47 status=ok
// SIG undefined FUN_14310dd90(void)

longlong FUN_14310dd90(void)

{
  if (DAT_146b502f0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b502f0,&PTR_s__Script_ReplicationGraph_145ac4350);
  }
  return DAT_146b502f0;
}



// FUNCTION 14310ddc0 FUN_14310ddc0 body=47 status=ok
// SIG undefined FUN_14310ddc0(void)

longlong FUN_14310ddc0(void)

{
  if (DAT_146b50290 == 0) {
    FUN_141786440(&DAT_146b50290,&PTR_thunk_FUN_14310ed90_145ac2150);
  }
  return DAT_146b50290;
}



// FUNCTION 14310de10 FUN_14310de10 body=47 status=ok
// SIG undefined FUN_14310de10(void)

longlong FUN_14310de10(void)

{
  if (DAT_146b501f0 == 0) {
    FUN_141786440(&DAT_146b501f0,&PTR_StaticClass_145ac0e60);
  }
  return DAT_146b501f0;
}



// FUNCTION 14310de40 FUN_14310de40 body=47 status=ok
// SIG undefined FUN_14310de40(void)

longlong FUN_14310de40(void)

{
  if (DAT_146b50200 == 0) {
    FUN_141786440(&DAT_146b50200,&PTR_thunk_FUN_14310ee40_145ac0fb0);
  }
  return DAT_146b50200;
}



// FUNCTION 14310de70 FUN_14310de70 body=47 status=ok
// SIG undefined FUN_14310de70(void)

longlong FUN_14310de70(void)

{
  if (DAT_146b502e0 == 0) {
    FUN_141786440(&DAT_146b502e0,&PTR_FUN_145ac2650);
  }
  return DAT_146b502e0;
}



// FUNCTION 14310dea0 FUN_14310dea0 body=47 status=ok
// SIG undefined FUN_14310dea0(void)

longlong FUN_14310dea0(void)

{
  if (DAT_146b502b0 == 0) {
    FUN_141786a30(&DAT_146b502b0,&PTR_FUN_1467bd080);
  }
  return DAT_146b502b0;
}



// FUNCTION 14310ded0 FUN_14310ded0 body=47 status=ok
// SIG undefined FUN_14310ded0(void)

longlong FUN_14310ded0(void)

{
  if (DAT_146b502b8 == 0) {
    FUN_141786a30(&DAT_146b502b8,&PTR_FUN_1467bd0c0);
  }
  return DAT_146b502b8;
}



// FUNCTION 14310df00 FUN_14310df00 body=47 status=ok
// SIG undefined FUN_14310df00(void)

longlong FUN_14310df00(void)

{
  if (DAT_146b502c0 == 0) {
    FUN_141786a30(&DAT_146b502c0,&PTR_FUN_1467bd100);
  }
  return DAT_146b502c0;
}



// FUNCTION 14310df30 FUN_14310df30 body=47 status=ok
// SIG undefined FUN_14310df30(void)

longlong FUN_14310df30(void)

{
  if (DAT_146b502c8 == 0) {
    FUN_141786a30(&DAT_146b502c8,&PTR_FUN_1467bd1f0);
  }
  return DAT_146b502c8;
}



// FUNCTION 14310df60 FUN_14310df60 body=47 status=ok
// SIG undefined FUN_14310df60(void)

longlong FUN_14310df60(void)

{
  if (DAT_146b502d0 == 0) {
    FUN_141786a30(&DAT_146b502d0,&PTR_FUN_1467bd230);
  }
  return DAT_146b502d0;
}



// FUNCTION 14310df90 FUN_14310df90 body=47 status=ok
// SIG undefined FUN_14310df90(void)

longlong FUN_14310df90(void)

{
  if (DAT_146b502d8 == 0) {
    FUN_141786a30(&DAT_146b502d8,&PTR_FUN_1467bd270);
  }
  return DAT_146b502d8;
}



// FUNCTION 14310dfc0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong USelection::StaticClass(void)

{
  if (DAT_146b501f8 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraphNode",&DAT_146b501f8,FUN_140447710,
                  0xa0,0x10000008,0,L"Engine",&LAB_14310e710,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b501f8;
}



// FUNCTION 14310e0d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDemoPendingNetGame::GetPrivateStaticClass(void)

{
  if (DAT_146b50268 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraphNode_AlwaysRelevant",&DAT_146b50268,
                  FUN_140447710,0xc0,0x10000008,0,L"Engine",&LAB_14310e7a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USelection::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b50268;
}



// FUNCTION 14310e1b0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPlatformGameInstance::StaticClass(void)

{
  if (DAT_146b50278 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraphNode_AlwaysRelevant_ForConnection",
                  &DAT_146b50278,FUN_140447710,0x170,0x10000008,0,L"Engine",FUN_14310e7b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14310ee40,&LAB_140447700,0);
  }
  return DAT_146b50278;
}



// FUNCTION 14310e270 FUN_14310e270 body=162 status=ok
// SIG undefined FUN_14310e270(void)

longlong FUN_14310e270(void)

{
  if (DAT_146b50288 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraphNode_TearOff_ForConnection",
                  &DAT_146b50288,FUN_140447710,0xd0,0x10000008,0,L"Engine",FUN_14310e900,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USelection::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b50288;
}



// FUNCTION 14310e320 FUN_14310e320 body=162 status=ok
// SIG undefined FUN_14310e320(void)

longlong FUN_14310e320(void)

{
  if (DAT_146b50218 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraphNode_ActorListFrequencyBuckets",
                  &DAT_146b50218,FUN_140447710,0x180,0x10000008,0,L"Engine",FUN_14310e730,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USelection::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b50218;
}



// FUNCTION 14310e3e0 FUN_14310e3e0 body=162 status=ok
// SIG undefined FUN_14310e3e0(void)

longlong FUN_14310e3e0(void)

{
  if (DAT_146b50228 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraphNode_ConnectionDormanyNode",
                  &DAT_146b50228,FUN_140447710,0x1e0,0x10000008,0,L"Engine",FUN_14310e800,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14310ee40,&LAB_140447700,0);
  }
  return DAT_146b50228;
}



// FUNCTION 14310e4a0 FUN_14310e4a0 body=162 status=ok
// SIG undefined FUN_14310e4a0(void)

longlong FUN_14310e4a0(void)

{
  if (DAT_146b50238 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraphNode_DormancyNode",&DAT_146b50238,
                  FUN_140447710,0x1a0,0x10000008,0,L"Engine",FUN_14310e840,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14310ee40,&LAB_140447700,0);
  }
  return DAT_146b50238;
}



// FUNCTION 14310e550 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULevelStreamingPersistent::GetPrivateStaticClass(void)

{
  if (DAT_146b50248 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraphNode_GridCell",&DAT_146b50248,
                  FUN_140447710,0x160,0x10000008,0,L"Engine",FUN_14310e8b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14310ee40,&LAB_140447700,0);
  }
  return DAT_146b50248;
}



// FUNCTION 14310e600 FUN_14310e600 body=162 status=ok
// SIG undefined FUN_14310e600(void)

longlong FUN_14310e600(void)

{
  if (DAT_146b50258 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraphNode_GridSpatialization2D",
                  &DAT_146b50258,FUN_140447710,0x1d0,0x10000008,0,L"Engine",&LAB_14310e8f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USelection::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b50258;
}



// FUNCTION 14310e6b0 FUN_14310e6b0 body=45 status=ok
// SIG undefined FUN_14310e6b0(void)

void FUN_14310e6b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14221fbd0(puVar1);
    *(byte *)((longlong)puVar1 + 0x92) = *(byte *)((longlong)puVar1 + 0x92) | 0x40;
    *puVar1 = &PTR_FUN_145ac3a60;
  }
  return;
}



// FUNCTION 14310e730 FUN_14310e730 body=103 status=ok
// SIG undefined FUN_14310e730(void)

void FUN_14310e730(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1430f8bd0(puVar1);
    *puVar1 = &PTR_FUN_145ac29e8;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    if ((*(uint *)(puVar1 + 1) >> 4 & 1) == 0) {
      FUN_14310d460(puVar1,DAT_1467bc370);
      return;
    }
  }
  return;
}



// FUNCTION 14310e7b0 FUN_14310e7b0 body=75 status=ok
// SIG undefined FUN_14310e7b0(void)

void FUN_14310e7b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140ddde00(puVar1);
    *puVar1 = &PTR_FUN_145ac34e8;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
  }
  return;
}



// FUNCTION 14310e800 FUN_14310e800 body=64 status=ok
// SIG undefined FUN_14310e800(void)

void FUN_14310e800(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140ddde00(puVar1);
    *(undefined4 *)(puVar1 + 0x29) = 10;
    *puVar1 = &PTR_FUN_145ac2ca8;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
  }
  return;
}



// FUNCTION 14310e840 FUN_14310e840 body=97 status=ok
// SIG undefined FUN_14310e840(void)

void FUN_14310e840(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140ddde00(puVar1);
    *puVar1 = &PTR_FUN_145ac2f68;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    *(undefined4 *)(puVar1 + 0x2f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x17c) = 0;
    puVar1[0x31] = 0;
    *(undefined4 *)(puVar1 + 0x32) = 0;
  }
  return;
}



// FUNCTION 14310e8b0 FUN_14310e8b0 body=54 status=ok
// SIG undefined FUN_14310e8b0(void)

void FUN_14310e8b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140ddde00(puVar1);
    *puVar1 = &PTR_FUN_145ac3228;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
  }
  return;
}



// FUNCTION 14310e900 FUN_14310e900 body=75 status=ok
// SIG undefined FUN_14310e900(void)

void FUN_14310e900(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1430f8bd0(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__145ac37a8;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
  }
  return;
}



// FUNCTION 14310e950 ~TArray<FActorRepListRefView,TInlineAllocator<2,FDefaultAllocator>_> body=100 status=ok
// SIG undefined ~TArray<FActorRepListRefView,TInlineAllocator<2,FDefaultAllocator>_>(void)

void TArray<FActorRepListRefView,TInlineAllocator<2,FDefaultAllocator>_>::
     ~TArray<FActorRepListRefView,TInlineAllocator<2,FDefaultAllocator>_>(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar1 = (longlong *)param_1[6];
  iVar3 = (int)param_1[7];
  plVar2 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar2 = param_1;
  }
  if (iVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FActorRepList::Release();
      }
      plVar2 = plVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar1 = (longlong *)param_1[6];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14310e9c0 FUN_14310e9c0 body=52 status=ok
// SIG undefined FUN_14310e9c0(void)

undefined8 FUN_14310e9c0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x468);
  }
  return param_1;
}



// FUNCTION 14310ea00 FUN_14310ea00 body=79 status=ok
// SIG undefined FUN_14310ea00(void)

longlong FUN_14310ea00(longlong param_1,ulonglong param_2)

{
  FUN_140dde270(param_1 + 0xe8);
  TArray<FActorRepListRefView,TInlineAllocator<2,FDefaultAllocator>_>::
  ~TArray<FActorRepListRefView,TInlineAllocator<2,FDefaultAllocator>_>(param_1 + 0xa8);
  FUN_140de0f20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 14310ea50 FUN_14310ea50 body=97 status=ok
// SIG undefined FUN_14310ea50(void)

longlong FUN_14310ea50(longlong param_1,ulonglong param_2)

{
  FUN_140dde270(param_1 + 0x150);
  FUN_140dde270(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FActorRepList::Release();
  }
  FUN_140de0f20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 14310eac0 FUN_14310eac0 body=134 status=ok
// SIG undefined FUN_14310eac0(void)

longlong FUN_14310eac0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x148);
  FUN_140dde270(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FActorRepList::Release();
  }
  FUN_140de0f20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 14310eb50 FUN_14310eb50 body=85 status=ok
// SIG undefined FUN_14310eb50(void)

longlong FUN_14310eb50(longlong param_1,ulonglong param_2)

{
  FUN_140dde270(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FActorRepList::Release();
  }
  FUN_140de0f20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 14310ebb0 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong GatherNavLengths::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FActorRepList::Release();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  FUN_140de0f20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14310ec10 FUN_14310ec10 body=196 status=ok
// SIG undefined FUN_14310ec10(void)

void FUN_14310ec10(longlong *param_1,undefined8 *param_2,undefined8 *param_3,void **param_4)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  void *local_20;
  ulonglong local_18;
  
  local_38 = *param_2;
  local_20 = (void *)0x0;
  local_18 = 0;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_24 = *(undefined4 *)(param_3 + 1);
  local_2c = *param_3;
  if (&local_20 != param_4) {
    uVar1 = *(uint *)(param_4 + 1);
    _Src = *param_4;
    local_18 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_20,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_20,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  lVar2 = *param_1;
  uVar3 = FUN_14178ac60(param_1,DAT_146b50198);
  (**(code **)(lVar2 + 0x208))(param_1,uVar3,&local_38);
  if (local_20 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14310ece0 FUN_14310ece0 body=162 status=ok
// SIG undefined FUN_14310ece0(void)

longlong FUN_14310ece0(void)

{
  if (DAT_146b502a8 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"NetReplicationGraphConnection",&DAT_146b502a8,
                  FUN_140447710,0x1b8,0x10000008,0,L"Engine",&LAB_14310e6f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UReplicationConnectionDriver::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b502a8;
}



// FUNCTION 14310ed90 FUN_14310ed90 body=162 status=ok
// SIG undefined FUN_14310ed90(void)

longlong FUN_14310ed90(void)

{
  if (DAT_146b50298 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraph",&DAT_146b50298,FUN_140447710,0x1f8
                  ,0x1000000c,0,L"Engine",&LAB_14310e700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UReplicationDriver::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b50298;
}



// FUNCTION 14310ee40 FUN_14310ee40 body=162 status=ok
// SIG undefined FUN_14310ee40(void)

longlong FUN_14310ee40(void)

{
  if (DAT_146b50208 == 0) {
    FUN_14171ccd0(L"/Script/ReplicationGraph",L"ReplicationGraphNode_ActorList",&DAT_146b50208,
                  FUN_140447710,0x150,0x10000008,0,L"Engine",&LAB_14310e720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USelection::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b50208;
}



// FUNCTION 14310eef0 FUN_14310eef0 body=6 status=ok
// SIG undefined FUN_14310eef0(void)

undefined8 FUN_14310eef0(void)

{
  return 0x939af4bf;
}



// FUNCTION 14310ef00 FUN_14310ef00 body=6 status=ok
// SIG undefined FUN_14310ef00(void)

undefined8 FUN_14310ef00(void)

{
  return 0xe2af53b7;
}



// FUNCTION 14310ef30 ResizeTo body=99 status=ok
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



// FUNCTION 14310efa0 FUN_14310efa0 body=57 status=ok
// SIG undefined FUN_14310efa0(void)

void FUN_14310efa0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b501a0);
                    /* WARNING: Could not recover jumptable at 0x00014310efd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14310efe0 FUN_14310efe0 body=159 status=ok
// SIG undefined FUN_14310efe0(void)

void FUN_14310efe0(longlong *param_1,void **param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  if (&local_18 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    _Src = *param_2;
    local_10 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  lVar2 = *param_1;
  uVar3 = FUN_14178ac60(param_1,DAT_146b501a8);
  (**(code **)(lVar2 + 0x208))(param_1,uVar3,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14310f080 FUN_14310f080 body=67 status=ok
// SIG undefined FUN_14310f080(void)

void FUN_14310f080(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146b501b0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 14310f0d0 FUN_14310f0d0 body=57 status=ok
// SIG undefined FUN_14310f0d0(void)

void FUN_14310f0d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b501b8);
                    /* WARNING: Could not recover jumptable at 0x00014310f106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14310f110 FUN_14310f110 body=34 status=ok
// SIG undefined FUN_14310f110(void)

void FUN_14310f110(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14310dc30();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClientCellInfo_145ac42f0,6);
  return;
}



// FUNCTION 14310f140 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FConnectionAlwaysRelevantNodePair::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b50178 == 0) {
    if (DAT_146b502f0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b502f0,&PTR_s__Script_ReplicationGraph_145ac4350);
    }
    lVar1 = DAT_146b502f0;
    uVar2 = FUN_14310eef0();
    DAT_146b50178 =
         GetStaticStruct(FUN_14310f420,lVar1,L"ConnectionAlwaysRelevantNodePair",0x10,uVar2);
  }
  return;
}



// FUNCTION 14310f1c0 FUN_14310f1c0 body=113 status=ok
// SIG undefined FUN_14310f1c0(void)

void FUN_14310f1c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b501e0 == 0) {
    if (DAT_146b502f0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b502f0,&PTR_s__Script_ReplicationGraph_145ac4350);
    }
    lVar1 = DAT_146b502f0;
    uVar2 = FUN_14310ef00();
    DAT_146b501e0 = GetStaticStruct(FUN_14310f450,lVar1,L"TearOffActorInfo",0x10,uVar2);
  }
  return;
}



// FUNCTION 14310f240 FUN_14310f240 body=47 status=ok
// SIG undefined FUN_14310f240(void)

longlong FUN_14310f240(void)

{
  if (DAT_146b501d0 == 0) {
    FUN_141786440(&DAT_146b501d0,&PTR_FUN_145ac0bc0);
  }
  return DAT_146b501d0;
}



// FUNCTION 14310f270 FUN_14310f270 body=47 status=ok
// SIG undefined FUN_14310f270(void)

longlong FUN_14310f270(void)

{
  if (DAT_146b502a0 == 0) {
    FUN_141786440(&DAT_146b502a0,&PTR_thunk_FUN_14310ece0_145ac2250);
  }
  return DAT_146b502a0;
}



// FUNCTION 14310f2a0 FUN_14310f2a0 body=47 status=ok
// SIG undefined FUN_14310f2a0(void)

longlong FUN_14310f2a0(void)

{
  if (DAT_146b50210 == 0) {
    FUN_141786440(&DAT_146b50210,&PTR_FUN_145ac1110);
  }
  return DAT_146b50210;
}



// FUNCTION 14310f2d0 FUN_14310f2d0 body=47 status=ok
// SIG undefined FUN_14310f2d0(void)

longlong FUN_14310f2d0(void)

{
  if (DAT_146b50260 == 0) {
    FUN_141786440(&DAT_146b50260,&PTR_GetPrivateStaticClass_145ac1b20);
  }
  return DAT_146b50260;
}



// FUNCTION 14310f300 FUN_14310f300 body=47 status=ok
// SIG undefined FUN_14310f300(void)

longlong FUN_14310f300(void)

{
  if (DAT_146b50270 == 0) {
    FUN_141786440(&DAT_146b50270,&PTR_StaticClass_145ac1cc0);
  }
  return DAT_146b50270;
}



// FUNCTION 14310f330 FUN_14310f330 body=47 status=ok
// SIG undefined FUN_14310f330(void)

longlong FUN_14310f330(void)

{
  if (DAT_146b50220 == 0) {
    FUN_141786440(&DAT_146b50220,&PTR_FUN_145ac12d0);
  }
  return DAT_146b50220;
}



// FUNCTION 14310f360 FUN_14310f360 body=47 status=ok
// SIG undefined FUN_14310f360(void)

longlong FUN_14310f360(void)

{
  if (DAT_146b50230 == 0) {
    FUN_141786440(&DAT_146b50230,&PTR_FUN_145ac1520);
  }
  return DAT_146b50230;
}



// FUNCTION 14310f390 FUN_14310f390 body=47 status=ok
// SIG undefined FUN_14310f390(void)

longlong FUN_14310f390(void)

{
  if (DAT_146b50240 == 0) {
    FUN_141786440(&DAT_146b50240,&PTR_GetPrivateStaticClass_145ac1730);
  }
  return DAT_146b50240;
}



// FUNCTION 14310f3c0 FUN_14310f3c0 body=47 status=ok
// SIG undefined FUN_14310f3c0(void)

longlong FUN_14310f3c0(void)

{
  if (DAT_146b50250 == 0) {
    FUN_141786440(&DAT_146b50250,&PTR_FUN_145ac18f0);
  }
  return DAT_146b50250;
}



// FUNCTION 14310f3f0 FUN_14310f3f0 body=47 status=ok
// SIG undefined FUN_14310f3f0(void)

longlong FUN_14310f3f0(void)

{
  if (DAT_146b50280 == 0) {
    FUN_141786440(&DAT_146b50280,&PTR_FUN_145ac1f00);
  }
  return DAT_146b50280;
}



// FUNCTION 14310f420 FUN_14310f420 body=47 status=ok
// SIG undefined FUN_14310f420(void)

longlong FUN_14310f420(void)

{
  if (DAT_146b501c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b501c8,&PTR_FUN_1467bc4c0);
  }
  return DAT_146b501c8;
}



// FUNCTION 14310f450 FUN_14310f450 body=47 status=ok
// SIG undefined FUN_14310f450(void)

longlong FUN_14310f450(void)

{
  if (DAT_146b501e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b501e8,&PTR_FUN_1467bc6e0);
  }
  return DAT_146b501e8;
}



// FUNCTION 14310f480 FUN_14310f480 body=312 status=ok
// SIG undefined FUN_14310f480(void)

void FUN_14310f480(longlong *param_1,longlong param_2)

{
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_38 = local_58;
  local_28 = local_48;
  local_30 = local_50;
  local_20 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x6e8))(param_1,&local_28,&local_38,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14310f5c0 FUN_14310f5c0 body=78 status=ok
// SIG undefined FUN_14310f5c0(void)

void FUN_14310f5c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x710))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerCellInfo_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014310f607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x718))(param_1);
  return;
}



// FUNCTION 14310f610 FUN_14310f610 body=187 status=ok
// SIG undefined FUN_14310f610(void)

void FUN_14310f610(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x700))(param_1,local_18);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerPrintAllActorInfo_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x708))(param_1,local_18);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14310f6d0 FUN_14310f6d0 body=255 status=ok
// SIG undefined FUN_14310f6d0(void)

void FUN_14310f6d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x6f0))(param_1,local_res10,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetCullDistanceForClass_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x6f8))(param_1,local_res10,local_res8[0]);
  return;
}



// FUNCTION 14310f7d0 FUN_14310f7d0 body=78 status=ok
// SIG undefined FUN_14310f7d0(void)

void FUN_14310f7d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x730))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStartDebugging_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014310f817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x738))(param_1);
  return;
}



// FUNCTION 14310f820 FUN_14310f820 body=78 status=ok
// SIG undefined FUN_14310f820(void)

void FUN_14310f820(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x720))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStopDebugging_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014310f867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x728))(param_1);
  return;
}



// FUNCTION 14310f870 FUN_14310f870 body=258 status=ok
// SIG undefined FUN_14310f870(void)

undefined8 * FUN_14310f870(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14302fc90();
  *param_1 = &PTR_FUN_145ac45f0;
  param_1[5] = &PTR_LAB_145ac5058;
  param_1[0x5a] = &PTR_LAB_145ac5088;
  param_1[0x146] = &PTR_LAB_145ac50e0;
  param_1[0x167] = &PTR_LAB_145ac5100;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x183] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  *(undefined1 *)(param_1 + 7) = 4;
  *(undefined4 *)(param_1 + 0x17b) = 0x42700000;
  uVar1 = FUN_1428dfc70();
  param_1[0x180] = uVar1;
  *(undefined4 *)(param_1 + 0x182) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc0c) = 0x40600000;
  *(undefined4 *)(param_1 + 0x181) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x184) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0xc24) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x185) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x172) = 1;
  *(undefined1 *)(param_1 + 0x10f) = 2;
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) | 0x20;
  return param_1;
}



// FUNCTION 14310f980 FUN_14310f980 body=233 status=ok
// SIG undefined FUN_14310f980(void)

void FUN_14310f980(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0xb80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xb38) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0xb20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xaf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xad0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xaa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa68) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0xa60);
  puVar2 = *(undefined8 **)(param_1 + 0xa58);
  if (iVar1 != 0) {
    do {
      *puVar2 = &PTR_FUN_144019aa0;
      puVar2 = puVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar2 = *(undefined8 **)(param_1 + 0xa58);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xa30) = &PTR_FUN_143fce298;
  FUN_14061f9e0(param_1);
  return;
}



// FUNCTION 14310fa70 FUN_14310fa70 body=1342 status=ok
// SIG undefined FUN_14310fa70(void)

/* WARNING: Removing unreachable block (ram,0x00014310fd5d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14310fa70(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  void *pvVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 in_XMM5 [16];
  undefined1 auVar24 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 local_res18 [8];
  void *local_a8;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  plVar8 = *(longlong **)(*param_1 + 0xa78);
  if ((plVar8 != (longlong *)0x0) &&
     (plVar8 = (longlong *)(**(code **)(*plVar8 + 0xd0))(plVar8,*(undefined4 *)param_1[1]),
     plVar8 != (longlong *)0x0)) {
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + 0xc70);
    lVar13 = (longlong)iVar2;
    *(int *)(lVar3 + 0xc70) = iVar2 + 1;
    if (*(int *)(lVar3 + 0xc74) < iVar2 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar3 + 0xc68,iVar2);
    }
    lVar3 = *(longlong *)(lVar3 + 0xc68);
    *(undefined8 *)(lVar3 + lVar13 * 0x30) = 0;
    *(undefined8 *)(lVar3 + 8 + lVar13 * 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x10 + lVar13 * 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x18 + lVar13 * 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x20 + lVar13 * 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x28 + lVar13 * 0x30) = 0;
    lVar3 = *(longlong *)(*param_1 + 0xc68);
    *(undefined4 *)(lVar3 + lVar13 * 0x30) = *(undefined4 *)param_1[1];
    lVar9 = *(longlong *)(*param_1 + 0x120);
    if (lVar9 == 0) {
      lVar9 = FUN_1423407b0();
    }
    *(float *)(lVar3 + 0x18 + lVar13 * 0x30) = *(float *)param_1[2] + *(float *)(lVar9 + 0x790);
    (**(code **)(*plVar8 + 0x48))(plVar8,&local_88,0x3f8147ae);
    *(float *)(lVar3 + 0x1c + lVar13 * 0x30) =
         (((local_74 - local_80) * 0.5) / *(float *)(*param_1 + 0xc20)) *
         *(float *)(*param_1 + 0xc28);
    lVar9 = *param_1;
    auVar24 = *(undefined1 (*) [16])(lVar9 + 0x230);
    fVar15 = auVar24._0_4_;
    fVar16 = auVar24._4_4_;
    fVar17 = auVar24._8_4_;
    fVar23 = auVar24._12_4_;
    fVar28 = *(float *)(lVar9 + 0x210) * _DAT_146b50400;
    fVar29 = *(float *)(lVar9 + 0x214) * fRam0000000146b50404;
    fVar30 = *(float *)(lVar9 + 0x218) * fRam0000000146b50408;
    fVar31 = *(float *)(lVar9 + 0x21c) * fRam0000000146b5040c;
    auVar24 = rcpps(in_XMM5,auVar24);
    fVar32 = (float)((uint)((local_88 + local_7c) * 0.5 - *(float *)(lVar9 + 0x220)) &
                    _DAT_146b50350);
    fVar33 = (float)((uint)((local_78 + local_84) * 0.5 - *(float *)(lVar9 + 0x224)) &
                    uRam0000000146b50354);
    fVar34 = (float)((uint)((local_80 + local_74) * 0.5 - *(float *)(lVar9 + 0x228)) &
                    uRam0000000146b50358);
    fVar35 = (float)((uint)(0.0 - *(float *)(lVar9 + 0x22c)) & uRam0000000146b5035c);
    fVar18 = fVar34 * fVar29 - fVar33 * fVar30;
    fVar19 = fVar32 * fVar30 - fVar34 * fVar28;
    fVar20 = fVar33 * fVar28 - fVar32 * fVar29;
    fVar21 = fVar35 * fVar31 - fVar35 * fVar31;
    fVar22 = auVar24._0_4_;
    fVar25 = auVar24._4_4_;
    fVar26 = auVar24._8_4_;
    fVar27 = auVar24._12_4_;
    fVar18 = fVar18 + fVar18;
    fVar19 = fVar19 + fVar19;
    fVar20 = fVar20 + fVar20;
    fVar21 = fVar21 + fVar21;
    fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar15;
    fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar16;
    fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar17;
    fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar23;
    fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar15;
    fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar16;
    fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar17;
    fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar23;
    local_98 = ((fVar20 * fVar29 - fVar19 * fVar30) + fVar31 * fVar18 + fVar32) *
               (float)(-(uint)((float)((uint)fVar15 & _DAT_146b503d0) <= _DAT_146b503f0) &
                       (uint)fVar22 ^ (uint)fVar22);
    fStack_94 = ((fVar18 * fVar30 - fVar20 * fVar28) + fVar31 * fVar19 + fVar33) *
                (float)(-(uint)((float)((uint)fVar16 & uRam0000000146b503d4) <= fRam0000000146b503f4
                               ) & (uint)fVar25 ^ (uint)fVar25);
    fStack_90 = ((fVar19 * fVar28 - fVar18 * fVar29) + fVar31 * fVar20 + fVar34) *
                (float)(-(uint)((float)((uint)fVar17 & uRam0000000146b503d8) <= fRam0000000146b503f8
                               ) & (uint)fVar26 ^ (uint)fVar26);
    fStack_8c = ((fVar21 * fVar31 - fVar21 * fVar31) + fVar31 * fVar21 + fVar35) *
                (float)(-(uint)((float)((uint)fVar23 & uRam0000000146b503dc) <= fRam0000000146b503fc
                               ) & (uint)fVar27 ^ (uint)fVar27);
    (**(code **)(*plVar8 + 200))(plVar8);
    local_a8 = (void *)0x0;
    local_9c = 0;
    iVar6 = (**(code **)(*plVar8 + 200))(plVar8);
    if (iVar6 < 1) {
      pvVar14 = (void *)0x0;
      fVar15 = (float)0;
      if ((iVar6 < 0) && (iVar6 != 0)) {
        pvVar14 = (void *)0x0;
        fVar15 = (float)iVar6;
      }
    }
    else {
      local_a0 = (float)iVar6;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8);
      pvVar14 = local_a8;
      _guard_xfg_dispatch_icall_nop(local_a8,0,(longlong)iVar6 << 3);
      fVar15 = local_a0;
    }
    iVar6 = (**(code **)(*plVar8 + 0xd0))(plVar8,pvVar14,fVar15,0);
    lVar9 = lVar3 + lVar13 * 0x30;
    if (*(int *)(lVar9 + 0x14) < iVar6) {
      TArray<float,FDefaultAllocator>::ResizeTo(lVar9 + 8,iVar6);
    }
    if (0 < iVar6) {
      lVar12 = 0;
      do {
        piVar4 = *(int **)(*(longlong *)((longlong)pvVar14 + lVar12 * 8) + 0x10);
        if ((piVar4 == (int *)0x0) || (*piVar4 != 7)) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)(piVar4 + 2);
        }
        uVar10 = (**(code **)(*plVar8 + 8))(plVar8,local_res18);
        cVar5 = FUN_14058c1e0(uVar10,*param_1);
        if (cVar5 != '\0') {
          iVar7 = (int)plVar8[2] + -1;
          if ((-1 < iVar7) && (iVar7 < *(int *)(*param_1 + 0xc58))) {
            pbVar1 = (byte *)((longlong)(int)plVar8[2] * 0x40 + -4 + *(longlong *)(*param_1 + 0xc50)
                             );
            *pbVar1 = *pbVar1 | 2;
          }
          iVar7 = *(int *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x10) = iVar7 + 1;
          if (*(int *)(lVar9 + 0x14) < iVar7 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar9 + 8,iVar7);
          }
          *(int *)(*(longlong *)(lVar9 + 8) + (longlong)iVar7 * 4) = (int)plVar8[2];
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar6);
    }
    lVar12 = (longlong)*(int *)(*param_1 + 0x770);
    pfVar11 = (float *)(((longlong)**(int **)(lVar9 + 8) + 1) * 0x30 +
                       *(longlong *)(*param_1 + 0x728 + lVar12 * 0x10));
    fVar23 = *pfVar11 * _DAT_146b50400;
    fVar18 = pfVar11[1] * fRam0000000146b50404;
    fVar19 = pfVar11[2] * fRam0000000146b50408;
    fVar20 = pfVar11[3] * fRam0000000146b5040c;
    fVar21 = (float)((uint)(local_98 - pfVar11[4]) & _DAT_146b50350);
    fVar22 = (float)((uint)(fStack_94 - pfVar11[5]) & uRam0000000146b50354);
    fVar25 = (float)((uint)(fStack_90 - pfVar11[6]) & uRam0000000146b50358);
    fVar15 = fVar25 * fVar18 - fVar22 * fVar19;
    fVar16 = fVar21 * fVar19 - fVar25 * fVar23;
    fVar17 = fVar22 * fVar23 - fVar21 * fVar18;
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    fVar17 = fVar17 + fVar17;
    local_a0 = (fVar16 * fVar23 - fVar15 * fVar18) + fVar20 * fVar17 + fVar25;
    *(ulonglong *)(lVar3 + 0x20 + lVar13 * 0x30) =
         CONCAT44((fVar15 * fVar19 - fVar17 * fVar23) + fVar20 * fVar16 + fVar22,
                  (fVar17 * fVar18 - fVar16 * fVar19) + fVar20 * fVar15 + fVar21);
    *(float *)(lVar3 + 0x28 + lVar13 * 0x30) = local_a0;
    lVar9 = *param_1;
    if (iVar2 == 0) {
      *(undefined4 *)(lVar9 + 0xc60) = *(undefined4 *)(lVar3 + 0x18);
      (**(code **)(*(longlong *)*param_1 + 0x358))
                ((longlong *)*param_1,CONCAT71((int7)((ulonglong)(lVar12 * 2) >> 8),1));
    }
    else {
      fVar15 = *(float *)(lVar3 + 0x18 + lVar13 * 0x30);
      if (*(float *)(lVar9 + 0xc60) <= fVar15) {
        fVar15 = *(float *)(lVar9 + 0xc60);
      }
      *(float *)(lVar9 + 0xc60) = fVar15;
    }
    if (pvVar14 != (void *)0x0) {
      FMemory::Free(pvVar14);
    }
  }
  return;
}



// FUNCTION 14310ffb0 FUN_14310ffb0 body=430 status=ok
// SIG undefined FUN_14310ffb0(void)

void FUN_14310ffb0(longlong *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  byte *pbVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  lVar6 = *param_1;
  lVar5 = *(longlong *)(lVar6 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0();
    lVar6 = *param_1;
  }
  fVar1 = *(float *)(lVar5 + 0x790);
  lVar6 = FUN_140626d60(lVar6);
  lVar5 = (longlong)*(int *)(lVar6 + 0x450);
  if (0 < lVar5) {
    iVar10 = -1;
    lVar9 = 0;
    lVar11 = lVar9;
    local_res10 = lVar6;
    do {
      cVar4 = FUN_1423b47e0(*param_1,iVar10 + 3);
      if (cVar4 == '\0') {
        lVar3 = *(longlong *)(*param_1 + 0xc50);
        if (((*(byte *)(lVar3 + 0x3c + lVar9) & 2) == 0) &&
           (*(float *)(lVar3 + 0x38 + lVar9) <= 0.0)) {
          plVar7 = *(longlong **)(*param_1 + 0xa78);
          plVar7 = (longlong *)(**(code **)(*plVar7 + 0xd0))(plVar7,iVar10 + 2);
          if (plVar7 != (longlong *)0x0) {
            pbVar8 = (byte *)(**(code **)(*plVar7 + 0x178))(plVar7,local_res8);
            if ((*pbVar8 & 1) == 0) {
              *(float *)(*(longlong *)(*param_1 + 0xc50) + 0x38 + lVar9) =
                   fVar1 + *(float *)param_1[1];
              *(undefined1 *)param_1[2] = 1;
            }
            else if (((((*(byte *)(*(longlong *)(lVar6 + 0x448) + 0x10 + lVar11) & 1) != 0) &&
                      (-1 < iVar10)) && (iVar10 < *(int *)(*param_1 + 0xc58))) &&
                    ((*(byte *)(*(longlong *)(*param_1 + 0xc50) + -4 + lVar9) & 2) != 0)) {
              plVar7 = (longlong *)param_1[3];
              iVar2 = (int)plVar7[1];
              *(int *)(plVar7 + 1) = iVar2 + 1;
              if (*(int *)((longlong)plVar7 + 0xc) < iVar2 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
              }
              *(int *)(*plVar7 + (longlong)iVar2 * 4) = iVar10 + 2;
              lVar6 = local_res10;
            }
          }
        }
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 0x18;
      lVar9 = lVar9 + 0x40;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 143110160 FUN_143110160 body=259 status=ok
// SIG undefined FUN_143110160(void)

void FUN_143110160(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  float *pfVar3;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  plVar2 = *(longlong **)(*param_1 + 0xa78);
  if (((plVar2 != (longlong *)0x0) &&
      (cVar1 = (**(code **)(*plVar2 + 0x240))(plVar2,*(undefined4 *)param_1[1]), cVar1 == '\0')) &&
     (plVar2 = (longlong *)
               (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0xd0))
                         (*(longlong **)(*param_1 + 0xa78),*(undefined4 *)param_1[1]),
     plVar2 != (longlong *)0x0)) {
    FUN_1426d3dd0(local_28);
    FUN_1426ea8d0(local_28,0,0);
    FCollisionResponseContainer::SetResponse(local_28,0,2);
    FUN_14062b860(*param_1,plVar2,*(undefined4 *)param_1[1],local_28);
    pfVar3 = (float *)(**(code **)(*plVar2 + 0x128))(plVar2,local_38);
    if (*pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1] + pfVar3[2] * pfVar3[2] <= 100.0) {
      (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0x160))
                (*(longlong **)(*param_1 + 0xa78),*(undefined4 *)param_1[1],0);
    }
  }
  return;
}



// FUNCTION 143110270 FUN_143110270 body=864 status=ok
// SIG undefined FUN_143110270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143110459) */

void FUN_143110270(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  void *pvVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  void *pvVar16;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined1 local_90 [8];
  longlong local_88 [8];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  iVar15 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar5 = FUN_140626d60(*param_1);
  lVar13 = (longlong)*(int *)(lVar5 + 0x450);
  plVar9 = local_48;
  local_b0 = lVar13;
  local_a8 = lVar5;
  if (0 < lVar13) {
    local_b8 = 0;
    do {
      lVar10 = local_b8;
      pvVar12 = (void *)0x0;
      if (((*(byte *)(local_b8 + 0x10 + *(longlong *)(lVar5 + 0x448)) & 1) != 0) &&
         (local_b0 = lVar13,
         cVar3 = (**(code **)(**(longlong **)(*param_1 + 0xa78) + 0x240))
                           (*(longlong **)(*param_1 + 0xa78),iVar15 + 1), lVar5 = local_a8,
         plVar9 = local_48, cVar3 == '\0')) {
        plVar9 = (longlong *)param_1[1];
        iVar4 = (int)plVar9[1];
        *(int *)(plVar9 + 1) = iVar4 + 1;
        if (*(int *)((longlong)plVar9 + 0xc) < iVar4 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar4);
        }
        *(int *)(*plVar9 + (longlong)iVar4 * 4) = iVar15;
        plVar6 = (longlong *)(**(code **)(**(longlong **)(*param_1 + 0xa78) + 0xd0))();
        lVar5 = local_a8;
        lVar10 = local_b8;
        lVar13 = local_b0;
        plVar9 = local_48;
        if (plVar6 != (longlong *)0x0) {
          lVar14 = (longlong)(int)local_40;
          plVar8 = local_88;
          if (local_48 != (longlong *)0x0) {
            plVar8 = local_48;
          }
          plVar1 = plVar8 + lVar14;
          for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
            if ((longlong *)*plVar8 == plVar6) goto LAB_143110533;
          }
          iVar4 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar4);
          if (local_40._4_4_ < iVar4) {
            TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_88);
          }
          plVar9 = local_88;
          if (local_48 != (longlong *)0x0) {
            plVar9 = local_48;
          }
          plVar9[lVar14] = (longlong)plVar6;
          (**(code **)(*plVar6 + 200))(plVar6);
          local_a0 = (void *)0x0;
          local_94 = 0;
          iVar4 = (**(code **)(*plVar6 + 200))(plVar6);
          if (iVar4 < 1) {
            pvVar16 = pvVar12;
            iVar11 = 0;
            if ((iVar4 < 0) && (pvVar16 = (void *)0x0, iVar4 != 0)) {
              iVar11 = iVar4;
            }
          }
          else {
            local_98 = iVar4;
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a0);
            pvVar16 = local_a0;
            _guard_xfg_dispatch_icall_nop(local_a0,0,(longlong)iVar4 << 3);
            iVar11 = local_98;
          }
          iVar4 = (**(code **)(*plVar6 + 0xd0))(plVar6,pvVar16,iVar11,0);
          if (0 < iVar4) {
            do {
              piVar2 = *(int **)(*(longlong *)((longlong)pvVar16 + (longlong)pvVar12 * 8) + 0x10);
              if ((piVar2 == (int *)0x0) || (*piVar2 != 7)) {
                plVar9 = (longlong *)0x0;
              }
              else {
                plVar9 = *(longlong **)(piVar2 + 2);
              }
              uVar7 = (**(code **)(*plVar9 + 8))(plVar9,local_90);
              cVar3 = FUN_14058c1e0(uVar7,*param_1);
              if ((cVar3 != '\0') && ((int)plVar9[2] != iVar15)) {
                plVar6 = (longlong *)param_1[1];
                iVar11 = (int)plVar6[1];
                *(int *)(plVar6 + 1) = iVar11 + 1;
                if (*(int *)((longlong)plVar6 + 0xc) < iVar11 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6,iVar11);
                }
                *(int *)(*plVar6 + (longlong)iVar11 * 4) = (int)plVar9[2];
              }
              pvVar12 = (void *)((longlong)pvVar12 + 1);
            } while ((longlong)pvVar12 < (longlong)iVar4);
          }
          lVar5 = local_a8;
          lVar10 = local_b8;
          lVar13 = local_b0;
          plVar9 = local_48;
          if (pvVar16 != (void *)0x0) {
            FMemory::Free(pvVar16);
            lVar5 = local_a8;
            lVar10 = local_b8;
            lVar13 = local_b0;
            plVar9 = local_48;
          }
        }
      }
LAB_143110533:
      local_b8 = lVar10 + 0x18;
      iVar15 = iVar15 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    local_b0 = 0;
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  return;
}



// FUNCTION 1431105d0 FUN_1431105d0 body=338 status=ok
// SIG undefined FUN_1431105d0(void)

void FUN_1431105d0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  float *pfVar5;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 *local_38;
  longlong *plStack_30;
  longlong local_28;
  int *local_20;
  undefined4 *local_18;
  
  plVar3 = *(longlong **)(*param_1 + 0xa78);
  if (plVar3 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar3 + 0x228))(plVar3,*(int *)param_1[1] + 1);
    if (cVar4 != '\0') {
      FUN_143111f40(*param_1,*(int *)param_1[1] + 1,0);
      return;
    }
    pfVar5 = (float *)(**(code **)(**(longlong **)(*param_1 + 0xa78) + 0xf0))
                                (*(longlong **)(*param_1 + 0xa78),&local_38,*(int *)param_1[1] + 1);
    if (*pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1] + pfVar5[2] * pfVar5[2] <= 100.0) {
      local_res10[0] = 0;
      local_20 = local_res8;
      local_res8[0] = *(int *)param_1[1] + 1;
      local_18 = local_res10;
      local_28 = *param_1;
      plStack_30 = &local_28;
      local_38 = &LAB_143110940;
      FUN_140625610(local_28,&local_38);
      return;
    }
    *(byte *)(param_1[2] + 0x3c) = *(byte *)(param_1[2] + 0x3c) & 0xfd;
    *(undefined4 *)(param_1[2] + 0x38) = 0;
    plVar3 = (longlong *)param_1[3];
    iVar1 = *(int *)param_1[1];
    iVar2 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
    }
    *(int *)(*plVar3 + (longlong)iVar2 * 4) = iVar1 + 1;
  }
  return;
}



// FUNCTION 143110760 FUN_143110760 body=85 status=ok
// SIG undefined FUN_143110760(void)

longlong FUN_143110760(longlong param_1,ulonglong param_2)

{
  TArray<FSpriteGeometryShape,FDefaultAllocator>::~TArray<FSpriteGeometryShape,FDefaultAllocator>
            (param_1 + 0xc68);
  if (*(longlong *)(param_1 + 0xc50) != 0) {
    FMemory::Free();
  }
  FUN_14310f980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc90);
  }
  return param_1;
}



// FUNCTION 1431107c0 FUN_1431107c0 body=175 status=ok
// SIG undefined FUN_1431107c0(void)

void FUN_1431107c0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,char param_6)

{
  longlong lVar1;
  undefined8 in_RDX;
  
  FUN_143030840(param_1,in_RDX,param_3,param_4,param_5,param_6);
  if (param_6 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    lVar1 = FUN_143114ce0(lVar1);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x128) == '\x03')) {
      FUN_143114a60(lVar1,param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 143110870 FUN_143110870 body=207 status=ok
// SIG undefined FUN_143110870(void)

void FUN_143110870(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,char param_7)

{
  longlong lVar1;
  undefined8 in_RDX;
  undefined8 in_R9;
  
  FUN_1430309f0(param_1,in_RDX,param_3,in_R9,param_5,param_6,param_7);
  if (param_7 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    lVar1 = FUN_143114ce0(lVar1);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x128) == '\x03')) {
      FUN_143114af0(lVar1,param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}



// FUNCTION 143110960 FUN_143110960 body=80 status=ok
// SIG undefined FUN_143110960(void)

void FUN_143110960(longlong *param_1)

{
  longlong *plVar1;
  undefined1 local_28 [8];
  float local_20;
  float local_14;
  
  plVar1 = *(longlong **)(*param_1 + 0xa78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x230))(plVar1,local_28,*(undefined4 *)param_1[1]);
    *(float *)param_1[2] = (local_14 - local_20) * 0.5;
  }
  return;
}



// FUNCTION 1431109e0 FUN_1431109e0 body=1395 status=ok
// SIG undefined FUN_1431109e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1431109e0(longlong *param_1,char param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,float param_6,float param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  float local_128;
  int local_120;
  undefined8 local_118;
  float fStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  uint local_100;
  uint local_fc;
  undefined8 local_e8;
  longlong local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  lVar3 = 0;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar9 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar9;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar9) * 0x18;
  }
  if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) &&
     ((param_1[0x24] != 0 || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)))) {
    if ((int)param_1[0x186] == 1) {
      FUN_143111850(param_1,0x3f800000,1);
    }
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    lVar3 = FUN_143114ce0(lVar3);
    FUN_14062c610(param_1,0);
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf7;
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | param_2 << 3;
    *(undefined1 *)((longlong)param_1 + 0xc34) = 1;
    FUN_14062c1d0(param_1,0,0);
    *(undefined1 *)(param_1 + 0x10f) = 0;
    *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xdf;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    if ((*(byte *)(param_1 + 0x17) & 4) == 0) {
      FUN_1426d3dd0(&local_108);
      FUN_1426ea8d0(&local_108,2);
      FUN_143111150(&local_108,*(undefined1 *)((longlong)param_1 + 0xb6a));
      FUN_1426a9ea0(param_1 + 0x76,&local_108,0);
      *(byte *)((longlong)param_1 + 0x2ee) = *(byte *)((longlong)param_1 + 0x2ee) | 0x80;
      FUN_1426a8bf0(param_1 + 0x76,3,0);
      (**(code **)(*param_1 + 0x638))(param_1,3);
    }
    if (lVar3 == 0) {
      (**(code **)(*param_1 + 0x3b0))(param_1,0);
    }
    else {
      if (param_1[0x17c] != 0) {
        (**(code **)(*param_1 + 0x568))(param_1,0);
      }
      if (0.0 < param_6) {
        if (param_7 <= 0.0) {
          local_120 = CONCAT31(local_120._1_3_,1);
          local_128 = param_6;
          (**(code **)(*param_1 + 0xa58))(param_1,0,param_4,param_5);
        }
        else {
          local_120 = (uint)local_120._1_3_ << 8;
          local_128 = param_6;
          (**(code **)(param_1[0x146] + 0x18))();
        }
      }
      if (param_2 == '\0') {
        uVar8 = 0;
        local_108 = 0;
        local_fc = 0;
        local_100 = 0;
        uVar10 = uVar8;
        uVar11 = uVar8;
        uVar13 = uVar8;
        if (0 < (int)param_1[0x18b]) {
          do {
            if ((*(byte *)(uVar13 + 0x3c + param_1[0x18a]) & 1) != 0) {
              local_100 = (int)uVar11 + 1;
              if ((int)uVar8 < (int)local_100) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_108,uVar11);
              }
              *(int *)(local_108 + (longlong)(int)uVar11 * 4) = (int)uVar10 + 1;
              uVar8 = (ulonglong)local_fc;
              uVar11 = (ulonglong)local_100;
            }
            uVar2 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar2;
            uVar13 = uVar13 + 0x40;
          } while ((int)uVar2 < (int)param_1[0x18b]);
        }
        FUN_1406290e0(param_1,&local_108,0x41000000);
        if (0.0 < *(float *)(param_1 + 0x184)) {
          local_118 = FUN_1431120b0;
          fStack_110 = 0.0;
          fVar14 = *(float *)(param_1 + 0x17b) -
                   (*(float *)(param_1 + 0x184) + *(float *)((longlong)param_1 + 0xc24) + 5.0);
          if (fVar14 <= 1.0) {
            fVar14 = 1.0;
          }
          uVar4 = AActor::GetWorldTimerManager(param_1[0x23]);
          plVar5 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar5 + 1,param_1);
            *(float *)(plVar5 + 2) = (float)local_118;
            *(float *)((longlong)plVar5 + 0x14) = local_118._4_4_;
            *(float *)(plVar5 + 3) = fStack_110;
            *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_10c;
            lVar6 = FDelegateHandle::GenerateNewID();
            plVar5[5] = lVar6;
            *plVar5 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_d8 = 0;
          local_d0 = 0;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x30))(plVar5,&local_d8);
          }
          FWeakObjectPtr::operator=(local_c8,0);
          local_120 = -0x40800000;
          local_128 = (float)((uint)local_128 & 0xffffff00);
          local_c0 = 0;
          local_88 = (longlong *)0x0;
          local_78 = 0;
          local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar4,param_1 + 0x189,&local_d8,fVar14);
          if (local_78 != 0) {
            plVar12 = local_a8;
            if (local_88 != (longlong *)0x0) {
              plVar12 = local_88;
            }
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x10))(plVar12,0);
            }
          }
          if (local_88 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            lVar6 = FMemory::Realloc(plVar5,0,0);
            if (lVar6 != 0) {
              FMemory::Free(lVar6);
            }
          }
        }
        if (local_108 != 0) {
          FMemory::Free();
        }
      }
      local_118 = (code *)*param_3;
      fVar15 = SUB84(local_118,0);
      fVar16 = (float)((ulonglong)local_118 >> 0x20);
      fVar14 = *(float *)(param_3 + 1);
      fStack_110 = fVar14;
      if ((((param_2 != '\0') && (fVar15 == 0.0)) && (fVar16 == 0.0)) &&
         ((fVar14 == 0.0 && (lVar6 = FWeakObjectPtr::Get(param_1 + 0x162), lVar6 != 0)))) {
        local_e8 = 0;
        uVar4 = FWeakObjectPtr::Get(param_1 + 0x162);
        puVar7 = (undefined8 *)
                 UPrimitiveComponent::GetPhysicsAngularVelocityInRadians(uVar4,&local_108,local_e8);
        local_118 = (code *)*puVar7;
        fVar15 = SUB84(local_118,0);
        fVar16 = (float)((ulonglong)local_118 >> 0x20);
        fVar14 = *(float *)(puVar7 + 1);
        fStack_110 = fVar14;
      }
      if ((((float)local_118 != 0.0) || (local_118._4_4_ != 0.0)) || (fStack_110 != 0.0)) {
        local_118 = (code *)CONCAT44(fVar16,fVar15);
        fStack_110 = fVar14;
        (**(code **)(*param_1 + 0x620))(param_1,&local_118,1);
      }
      local_128 = *(float *)((longlong)param_1 + 0xc2c);
      FUN_143114650(lVar3,param_1,param_1[0x180],(int)param_1[0x17b]);
    }
  }
  return;
}



// FUNCTION 143110f60 FUN_143110f60 body=488 status=ok
// SIG undefined FUN_143110f60(void)

void FUN_143110f60(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  if ((int)param_1[0x186] != 2) {
    iVar3 = 1;
    *(undefined4 *)(param_1 + 0x186) = 1;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    *(float *)((longlong)param_1 + 0xc3c) = param_2;
    *(undefined4 *)(param_1 + 0x187) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    if ((char)param_1[0x163] == '\0') {
      puVar1 = (undefined8 *)param_1[0x18a];
      *puVar1 = *(undefined8 *)((longlong)param_1 + 0x1ec);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_1 + 500);
      lVar4 = param_1[0x18a];
      *(undefined8 *)(lVar4 + 0xc) = *(undefined8 *)((longlong)param_1 + 0x204);
      *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x20c);
    }
    if (param_2 <= 0.0) {
      *(undefined4 *)(param_1 + 0x186) = 2;
      FUN_143111850(param_1,0x3f800000,0);
      if ((char)param_1[0x163] != '\0') {
        (**(code **)(*param_1 + 0x358))(param_1,1);
      }
    }
    else {
      param_2 = 1.0 / param_2;
      *(float *)(param_1[0x18a] + 0x30) = param_2;
      if (1 < (int)param_1[0x18b]) {
        lVar4 = 0x40;
        do {
          fVar5 = *(float *)(param_1 + 0x181);
          iVar2 = rand();
          iVar3 = iVar3 + 1;
          *(float *)(param_1[0x18a] + 0x30 + lVar4) =
               (float)iVar2 * 3.051851e-05 * param_2 * fVar5 + param_2;
          fVar5 = 1.0 / *(float *)(param_1[0x18a] + 0x30 + lVar4);
          lVar4 = lVar4 + 0x40;
          if (fVar5 <= *(float *)((longlong)param_1 + 0xc3c)) {
            fVar5 = *(float *)((longlong)param_1 + 0xc3c);
          }
          *(float *)((longlong)param_1 + 0xc3c) = fVar5;
        } while (iVar3 < (int)param_1[0x18b]);
      }
      FUN_143111850(param_1,0,1);
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
  }
  return;
}



// FUNCTION 143111150 FUN_143111150 body=237 status=ok
// SIG undefined FUN_143111150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143111150(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_res18 [16];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b50438) {
    _Init_thread_header(&DAT_146b50438);
    if (DAT_146b50438 == -1) {
      FName::FName(&DAT_146b50430,L"Destructible",1);
      _Init_thread_footer(&DAT_146b50438);
    }
  }
  cVar2 = FUN_142311390(DAT_146b50430,local_res18,param_1);
  uVar1 = uRam0000000146aefe70;
  if (cVar2 != '\0') {
    if (param_2 == '\0') {
      FCollisionResponseContainer::SetResponse(param_1,6);
    }
    FCollisionResponseContainer::SetResponse(param_1,5);
    FCollisionResponseContainer::SetResponse(param_1,0x14);
    return;
  }
  *param_1 = _DAT_146aefe68;
  param_1[1] = uVar1;
  uVar1 = uRam0000000146aefe80;
  param_1[2] = _DAT_146aefe78;
  param_1[3] = uVar1;
  return;
}



// FUNCTION 143111240 FUN_143111240 body=15 status=ok
// SIG undefined FUN_143111240(void)

void FUN_143111240(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0xc78) = param_2;
  *(undefined4 *)(param_1 + 0xc80) = param_3;
  return;
}



// FUNCTION 143111250 FUN_143111250 body=1480 status=ok
// SIG undefined FUN_143111250(void)

void FUN_143111250(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  void *_Src;
  longlong *plVar4;
  uint *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  char cVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  ushort *puVar17;
  int iVar18;
  uint *puVar19;
  longlong lVar20;
  int *piVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  float fVar27;
  uint local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 *local_b8;
  longlong **pplStack_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  void *local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  uint *local_78;
  undefined8 **local_70;
  
  local_res10 = param_2;
  FUN_143032d30();
  puVar10 = (undefined1 *)FUN_140626d60(param_1);
  local_90 = (int)param_1[0x35];
  lVar20 = (longlong)local_90;
  uVar22 = 0;
  _Src = (void *)param_1[0x34];
  local_98 = (void *)0x0;
  local_b8 = puVar10;
  if (local_90 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_98,local_90,0);
    pvVar7 = local_98;
    _guard_xfg_dispatch_icall_nop(local_98,_Src,lVar20 << 3);
    iVar12 = local_90;
    puVar6 = local_b8;
    if ((0 < local_90) && (puVar10 = puVar6, *(int *)(param_2 + 0x40) != 0)) {
      do {
        if (*(int *)(*(longlong *)(param_2 + 0x38) + 4 + uVar22 * 0x28) != 0) {
          iVar26 = *(int *)(*(longlong *)(param_2 + 0x38) + uVar22 * 0x28);
          if ((-1 < iVar26) && (iVar26 < *(int *)(puVar6 + 0x468))) {
            FUN_1423acf90(param_1,&local_res8,
                          *(ushort *)(*(longlong *)(puVar6 + 0x460) + (longlong)iVar26 * 2) + 1);
            lVar20 = (longlong)(iVar12 + -1);
            if (-1 < iVar12 + -1) {
              do {
                plVar4 = *(longlong **)((longlong)pvVar7 + lVar20 * 8);
                if ((plVar4 != (longlong *)0x0) && (plVar4[0x33] == CONCAT44(uStackX_c,local_res8)))
                {
                  (**(code **)(*plVar4 + 0x3b0))(plVar4,0);
                }
                lVar20 = lVar20 + -1;
              } while (-1 < lVar20);
            }
          }
        }
        uVar23 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar23;
      } while (uVar23 < *(uint *)(param_2 + 0x40));
    }
  }
  uVar22 = 0;
  lVar20 = param_1[399];
  if (lVar20 != 0) {
    iVar12 = *(int *)(lVar20 + 0xc);
    uVar11 = uVar22;
    if (iVar12 < (int)DAT_1469e91c4) {
      uVar15 = iVar12 >> 0x1f & 0xffff;
      uVar23 = iVar12 + uVar15;
      uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar23 >> 0x10) * 8) +
               (longlong)(int)((uVar23 & 0xffff) - uVar15) * 0x18;
    }
    if ((*(uint *)(uVar11 + 8) >> 0x1d & 1) == 0) {
      FUN_140625a20(lVar20,(int)param_1[400],0);
      param_1[399] = 0;
    }
  }
  cVar8 = (char)param_1[0x163];
  if (cVar8 != '\0') {
    local_res8 = 0;
    if (*(int *)(param_2 + 0x40) != 0) {
      do {
        lVar20 = *(longlong *)(param_2 + 0x38);
        uVar23 = (uint)uVar22;
        local_res20 = lVar20;
        if ((*(int *)(lVar20 + 4 + uVar22 * 0x28) == 1) &&
           (cVar8 = FUN_1423b47e0(param_1,*(int *)(lVar20 + uVar22 * 0x28) + 1), cVar8 == '\0')) {
          uVar15 = *(uint *)(lVar20 + uVar22 * 0x28);
          lVar25 = (longlong)(int)uVar15;
          if ((-1 < (int)(uVar15 - 1)) && ((int)(uVar15 - 1) < (int)param_1[0x18b])) {
            iVar12 = 0;
            lVar13 = (longlong)(*(int *)(puVar10 + 0x450) + 1);
            if (lVar13 < *(int *)(puVar10 + 0x468)) {
              lVar24 = *(int *)(puVar10 + 0x468) - lVar13;
              puVar17 = (ushort *)(*(longlong *)(puVar10 + 0x460) + lVar13 * 2);
              iVar26 = iVar12;
              do {
                uVar3 = *puVar17;
                puVar17 = puVar17 + 1;
                iVar12 = iVar26 + 1;
                if (uVar3 != uVar15) {
                  iVar12 = iVar26;
                }
                lVar24 = lVar24 + -1;
                iVar26 = iVar12;
              } while (lVar24 != 0);
            }
            puVar14 = (undefined8 *)param_1[0x18a];
            fVar27 = *(float *)((longlong)param_1 + 0xc24);
            local_res18 = lVar25 * 0x40;
            local_a8 = puVar14;
            if ((*(byte *)(local_res18 + -4 + (longlong)puVar14) & 2) != 0) {
              iVar26 = 0;
              param_2 = local_res10;
              if (0 < (int)param_1[0x18e]) {
                piVar21 = (int *)param_1[0x18d];
                do {
                  puVar5 = *(uint **)(piVar21 + 2);
                  for (puVar19 = puVar5; puVar19 != puVar5 + piVar21[4]; puVar19 = puVar19 + 1) {
                    if (*puVar19 == uVar15) {
                      iVar18 = (int)((longlong)puVar19 - (longlong)puVar5 >> 2);
                      if (iVar18 != -1) {
                        if (iVar12 == 0) {
                          lVar20 = param_1[0x24];
                          if (lVar20 == 0) {
                            lVar20 = FUN_1423407b0(param_1);
                            puVar14 = (undefined8 *)param_1[0x18a];
                          }
                          fVar27 = *(float *)(local_a8 + lVar25 * 8 + -1) -
                                   *(float *)(lVar20 + 0x790);
                          pbVar1 = (byte *)(lVar25 * 0x40 + -4 + (longlong)puVar14);
                          *pbVar1 = *pbVar1 & 0xfd;
                          if (fVar27 <= 0.0) {
                            fVar27 = 0.0;
                          }
                        }
                        iVar16 = piVar21[4];
                        iVar9 = (iVar16 - iVar18) + -1;
                        if (iVar9 != 0) {
                          _guard_xfg_dispatch_icall_nop
                                    ((void *)(*(longlong *)(piVar21 + 2) + (longlong)iVar18 * 4),
                                     (void *)(*(longlong *)(piVar21 + 2) +
                                             (longlong)(iVar18 + 1) * 4),(longlong)iVar9 << 2);
                          iVar16 = piVar21[4];
                        }
                        piVar21[4] = iVar16 + -1;
                        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(piVar21 + 2);
                        if (piVar21[4] == 0) {
                          plVar4 = param_1 + 0x18d;
                          if (*(longlong *)((longlong)iVar26 * 0x30 + 8 + *plVar4) != 0) {
                            FMemory::Free();
                          }
                          iVar18 = (int)param_1[0x18e];
                          iVar16 = (iVar18 - iVar26) + -1;
                          if (0 < iVar16) {
                            iVar16 = 1;
                          }
                          if (iVar16 != 0) {
                            _guard_xfg_dispatch_icall_nop
                                      ((void *)(*plVar4 + (longlong)iVar26 * 0x30),
                                       (void *)((longlong)(iVar18 - iVar16) * 0x30 + *plVar4),
                                       (longlong)iVar16 * 0x30);
                            iVar18 = (int)param_1[0x18e];
                          }
                          *(int *)(param_1 + 0x18e) = iVar18 + -1;
                          TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar4);
                          lVar20 = local_res20;
                          param_2 = local_res10;
                          uVar23 = local_res8;
                          if (0 < (int)param_1[0x18e]) {
                            *(undefined4 *)(param_1 + 0x18c) = 0xbf800000;
                          }
                        }
                        else {
                          lVar20 = local_res20;
                          param_2 = local_res10;
                          uVar23 = local_res8;
                          if (*piVar21 == *(int *)(local_res20 + uVar22 * 0x28)) {
                            *piVar21 = **(int **)(piVar21 + 2);
                          }
                        }
                        goto LAB_14311155f;
                      }
                      break;
                    }
                  }
                  iVar26 = iVar26 + 1;
                  piVar21 = piVar21 + 0xc;
                  lVar20 = local_res20;
                  uVar23 = local_res8;
                } while (iVar26 < (int)param_1[0x18e]);
              }
            }
LAB_14311155f:
            if (iVar12 == 0) {
              bVar2 = *(byte *)(local_res18 + -4 + param_1[0x18a]);
              if ((bVar2 & 2) == 0) {
                *(byte *)(local_res18 + -4 + param_1[0x18a]) = bVar2 | 2;
                FUN_143111f40(param_1,*(undefined4 *)(lVar20 + uVar22 * 0x28),fVar27);
              }
            }
          }
        }
        local_res8 = uVar23 + 1;
        uVar22 = (ulonglong)local_res8;
        puVar10 = local_b8;
      } while (local_res8 < *(uint *)(param_2 + 0x40));
      cVar8 = (char)param_1[0x163];
    }
    local_res18 = CONCAT44(local_res18._4_4_,*(undefined4 *)((longlong)param_1 + 0xc24));
    if ((cVar8 != '\0') && (param_1[0x14f] != 0)) {
      local_80 = &local_res18;
      local_res8 = local_res8 & 0xffffff00;
      local_78 = &local_res8;
      local_a8 = (undefined8 *)0x0;
      local_70 = &local_a8;
      local_a0 = 0;
      pplStack_b0 = &local_88;
      local_b8 = &LAB_143110950;
      local_88 = param_1;
      FUN_140625610(param_1,&local_b8);
      if (0 < (int)local_a0) {
        FUN_140625aa0(param_1,local_a8,local_a0 & 0xffffffff,0);
      }
      if (((char)local_res8 != '\0') && ((int)param_1[0x18e] == 0)) {
        (**(code **)(*param_1 + 0x358))(param_1,1);
      }
      if (local_a8 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143111820 FUN_143111820 body=37 status=ok
// SIG undefined FUN_143111820(void)

void FUN_143111820(longlong param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  longlong lVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xc58))) {
    lVar2 = *(longlong *)(param_1 + 0xc50);
    pbVar1 = (byte *)((longlong)param_2 * 0x40 + 0x3c + lVar2);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)((longlong)param_2 * 0x40 + 0x3c + lVar2);
    *pbVar1 = *pbVar1 | param_3;
  }
  return;
}



// FUNCTION 143111850 FUN_143111850 body=344 status=ok
// SIG undefined FUN_143111850(void)

void FUN_143111850(longlong *param_1,float param_2,char param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined8 local_38;
  float local_30;
  float local_20;
  
  if ((char)param_1[0x163] == '\0') {
    *(float *)((longlong)param_1 + 0x6cc) = *(float *)((longlong)param_1 + 0x6cc) + 0.01;
    *(float *)((longlong)param_1 + 0x6d4) = *(float *)((longlong)param_1 + 0x6d4) + 0.01;
    *(float *)(param_1 + 0xda) = *(float *)(param_1 + 0xda) + 0.01;
    *(float *)(param_1[0x18a] + 0x34) = param_2;
    lVar1 = param_1[0x18a];
    local_30 = param_2 * *(float *)(lVar1 + 0x14);
    fVar8 = param_2 * *(float *)(lVar1 + 0xc);
    local_38 = CONCAT44(param_2 * *(float *)(lVar1 + 0x10),fVar8);
    local_20 = local_30;
    (**(code **)(*param_1 + 0x3f8))(fVar8,&local_38);
  }
  else {
    plVar3 = (longlong *)FUN_140626e50();
    uVar4 = 0;
    uVar5 = uVar4;
    uVar7 = uVar4;
    if (0 < (int)plVar3[1]) {
      do {
        uVar6 = (int)uVar7 + 1;
        *(float *)(uVar4 + 0x34 + param_1[0x18a]) = param_2;
        lVar1 = param_1[0x18a];
        auVar2._4_4_ = param_2 * *(float *)(uVar4 + 0x10 + lVar1);
        auVar2._0_4_ = param_2 * *(float *)(uVar4 + 0xc + lVar1);
        auVar2._8_4_ = param_2 * *(float *)(uVar4 + 0x14 + lVar1);
        auVar2._12_4_ = 0;
        *(undefined1 (*) [16])(*plVar3 + -0x10 + uVar5 + 0x30) = auVar2;
        uVar4 = uVar4 + 0x40;
        uVar5 = uVar5 + 0x30;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)plVar3[1]);
    }
    if (param_3 != '\0') {
      FUN_1406292a0(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1431119b0 FUN_1431119b0 body=811 status=ok
// SIG undefined FUN_1431119b0(void)

void FUN_1431119b0(longlong *param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 local_48 [32];
  
  if (param_2 == 0) {
    return;
  }
  if ((param_1[0x24] == 0) && (lVar4 = FUN_1423407b0(), lVar4 == 0)) {
    return;
  }
  if (param_1[0x23] == 0) {
    return;
  }
  lVar4 = param_1[0x24];
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  FUN_143114ce0(lVar4);
  *(byte *)((longlong)param_1 + 0x2ee) = *(byte *)((longlong)param_1 + 0x2ee) & 0x7f;
  *(undefined1 *)((longlong)param_1 + 0x714) = 1;
  *(byte *)((longlong)param_1 + 0x2ee) = *(byte *)((longlong)param_1 + 0x2ee) | ~param_3 << 7;
  if (param_3 == 0) {
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 8;
    FUN_1426d3dd0(local_48);
    FUN_1426ea8d0(local_48,2);
    FUN_143111150(local_48,*(undefined1 *)((longlong)param_1 + 0xb6a));
    FUN_1426a9ea0(param_1 + 0x76,local_48,0);
  }
  else {
    FUN_1426a8bf0(param_1 + 0x76,0,0,0);
  }
  FUN_14062bfc0(param_1,param_2);
  if (param_1[0x17a] != 0) {
    (**(code **)(*param_1 + 0x568))(param_1,0);
  }
  if (param_1[0x17d] != 0) {
    (**(code **)(*param_1 + 0x568))(param_1,1);
  }
  if (((param_1[0x17e] != 0) || (param_1[0x17f] != 0)) && (0 < *(int *)(param_2 + 0x438))) {
    *(uint *)(param_1 + 0x147) = *(uint *)(param_1 + 0x147) | 1;
    plVar1 = param_1 + 0x148;
    if (plVar1 != (longlong *)(param_2 + 0x430)) {
      iVar8 = *(int *)(param_2 + 0x438);
      _Src = *(void **)(param_2 + 0x430);
      *(int *)(param_1 + 0x149) = iVar8;
      if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xa4c) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0xa4c) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar8);
        _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar8 << 4);
      }
    }
    iVar8 = 1;
    if (1 < (int)param_1[0x149]) {
      lVar4 = 0x10;
      do {
        lVar6 = *plVar1;
        lVar2 = param_1[0x17f];
        iVar8 = iVar8 + 1;
        *(longlong *)(lVar4 + lVar6) = param_1[0x17e];
        ((longlong *)(lVar4 + lVar6))[1] = lVar2;
        lVar4 = lVar4 + 0x10;
      } while (iVar8 < (int)param_1[0x149]);
    }
  }
  plVar1 = param_1 + 0x18a;
  *(undefined4 *)(param_1 + 0x18b) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc5c)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  iVar8 = (int)param_1[0x18b];
  iVar9 = 1;
  if (0 < *(int *)(param_2 + 0x450)) {
    iVar9 = *(int *)(param_2 + 0x450);
  }
  *(int *)(param_1 + 0x18b) = iVar8 + iVar9;
  if (*(int *)((longlong)param_1 + 0xc5c) < iVar8 + iVar9) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar8);
  }
  puVar7 = (undefined4 *)((longlong)iVar8 * 0x40 + *plVar1);
  if (iVar9 != 0) {
    puVar5 = (undefined8 *)(puVar7 + 5);
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 0x10;
      puVar5[-2] = 0;
      *(undefined4 *)(puVar5 + -1) = 0x3f800000;
      *(undefined4 *)((longlong)puVar5 + -4) = 0x3f800000;
      *puVar5 = 0x3f800000;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(byte *)(puVar5 + 5) = *(byte *)(puVar5 + 5) & 0xfc;
      puVar5[4] = 0;
      puVar5 = puVar5 + 8;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  lVar4 = param_1[0x32];
  if (lVar4 != 0) {
    lVar6 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_143111c82;
  }
  lVar4 = 0;
LAB_143111c82:
  FUN_14062c0a0(param_1,lVar4);
  lVar4 = param_1[0x24];
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  FUN_14234b270(param_1,lVar4);
  if (param_3 != 0) {
    FUN_140625260(param_1);
  }
  (**(code **)(*param_1 + 0x4b8))(param_1);
  return;
}



// FUNCTION 143111ce0 FUN_143111ce0 body=607 status=ok
// SIG undefined FUN_143111ce0(void)

void FUN_143111ce0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined1 local_48 [64];
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) &&
     ((param_1[0x24] != 0 || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)))) {
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    lVar3 = FUN_143114ce0(lVar3);
    if (lVar3 == 0) {
      (**(code **)(*param_1 + 0x3b0))(param_1,0);
    }
    else {
      if ((int)param_1[0x186] == 1) {
        FUN_143111850(param_1,0x3f800000,1);
      }
      if (param_1[0x17c] != 0) {
        (**(code **)(*param_1 + 0x568))(param_1,0);
      }
      FUN_14062c610(param_1,0);
      *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 8;
      *(undefined1 *)((longlong)param_1 + 0xc34) = 1;
      FUN_14062c1d0(param_1,0,0);
      *(undefined1 *)(param_1 + 0x10f) = 0;
      *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xdf;
      (**(code **)(*param_1 + 0x358))(param_1,1);
      if ((*(byte *)(param_1 + 0x17) & 4) == 0) {
        FUN_1426d3dd0(local_48);
        FUN_1426ea8d0(local_48,2);
        FUN_143111150(local_48,*(undefined1 *)((longlong)param_1 + 0xb6a));
        FUN_1426a9ea0(param_1 + 0x76,local_48,0);
        *(byte *)((longlong)param_1 + 0x2ee) = *(byte *)((longlong)param_1 + 0x2ee) | 0x80;
        FUN_1426a8bf0(param_1 + 0x76,3,0);
        (**(code **)(*param_1 + 0x638))(param_1,3);
      }
      (**(code **)(param_1[0x146] + 0x18))(param_1 + 0x146,0x461c4000,param_2,0x461c4000,param_3,1);
      if ((((char)param_1[0x178] != '\0') && (fVar6 = *(float *)(param_1 + 0x179), 0.0 < fVar6)) ||
         ((lVar4 = FUN_140626d60(param_1), fVar7 = 20.0, lVar4 != 0 &&
          (fVar6 = *(float *)(lVar4 + 0x394), 0.0 < fVar6)))) {
        fVar7 = fVar6;
      }
      FUN_143114650(lVar3,param_1,param_1[0x180],fVar7,0);
    }
  }
  return;
}



// FUNCTION 143111f40 FUN_143111f40 body=354 status=ok
// SIG undefined FUN_143111f40(void)

void FUN_143111f40(longlong *param_1,undefined4 param_2,float param_3)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined4 local_res10 [2];
  float local_res18 [4];
  code *local_58;
  longlong **pplStack_50;
  longlong *local_48;
  undefined4 *local_40;
  float *local_38;
  
  plVar1 = param_1 + 0x18d;
  iVar3 = (int)param_1[0x18e];
  lVar6 = (longlong)iVar3;
  *(int *)(param_1 + 0x18e) = iVar3 + 1;
  local_res10[0] = param_2;
  if (*(int *)((longlong)param_1 + 0xc74) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  *(undefined8 *)(lVar4 + lVar6 * 0x30) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar6 * 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x18 + lVar6 * 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x20 + lVar6 * 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x28 + lVar6 * 0x30) = 0;
  lVar4 = *plVar1;
  *(undefined4 *)(lVar4 + lVar6 * 0x30) = local_res10[0];
  lVar5 = param_1[0x24];
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  local_40 = local_res10;
  local_38 = local_res18;
  pplStack_50 = &local_48;
  *(float *)(lVar4 + 0x18 + lVar6 * 0x30) = param_3 + *(float *)(lVar5 + 0x790);
  local_res18[0] = 50.0;
  local_58 = FUN_143110960;
  local_48 = param_1;
  FUN_140625610(param_1,&local_58);
  fVar2 = *(float *)(lVar4 + 0x18 + lVar6 * 0x30);
  *(float *)(lVar4 + 0x1c + lVar6 * 0x30) =
       (local_res18[0] / *(float *)(param_1 + 0x184)) * *(float *)(param_1 + 0x185);
  if (iVar3 == 0) {
    *(float *)(param_1 + 0x18c) = fVar2;
    (**(code **)(*param_1 + 0x358))(param_1,1);
  }
  else {
    fVar7 = *(float *)(param_1 + 0x18c);
    if (fVar2 <= *(float *)(param_1 + 0x18c)) {
      fVar7 = fVar2;
    }
    *(float *)(param_1 + 0x18c) = fVar7;
  }
  return;
}



// FUNCTION 1431120b0 FUN_1431120b0 body=170 status=ok
// SIG undefined FUN_1431120b0(void)

void FUN_1431120b0(longlong param_1)

{
  longlong local_38;
  ulonglong local_30;
  longlong local_28;
  longlong *local_20;
  undefined1 *local_18;
  longlong *plStack_10;
  
  *(undefined8 *)(param_1 + 0xc48) = 0;
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    if (*(char *)(param_1 + 0xb18) == '\0') {
      FUN_140625a20(param_1,1);
      return;
    }
    local_38 = 0;
    local_30 = 0;
    local_20 = &local_38;
    plStack_10 = &local_28;
    local_18 = &LAB_1431109c0;
    local_28 = param_1;
    FUN_140625610(0x431109c0,&local_18);
    if (0 < (int)local_30) {
      FUN_140625aa0(param_1,local_38,local_30 & 0xffffffff,0);
    }
    if (local_38 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 143112160 FUN_143112160 body=610 status=ok
// SIG undefined FUN_143112160(void)

void FUN_143112160(longlong *param_1,float param_2,float param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 local_6c [84];
  
  if ((int)param_1[0x186] != 0) {
    *(undefined4 *)(param_1 + 0x186) = 3;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    if (((char)param_1[0x163] != '\0') && (*(char *)((longlong)param_1 + 0xb19) == '\0')) {
      FUN_14062c610(param_1,1);
    }
    iVar8 = 0;
    *(float *)((longlong)param_1 + 0xc3c) = param_2;
    *(float *)(param_1 + 0x188) = param_3;
    *(undefined4 *)(param_1 + 0x187) = 0;
    if (0.0 < param_2) {
      fVar11 = 1.0 / (param_2 - param_3);
      if ((char)param_1[0x163] == '\0') {
        puVar5 = (undefined8 *)param_1[0x18a];
        *puVar5 = *(undefined8 *)((longlong)param_1 + 0x1ec);
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)((longlong)param_1 + 500);
        lVar6 = param_1[0x18a];
        puVar5 = (undefined8 *)UKismetMathLibrary::RandomUnitVector(local_6c);
        *(undefined8 *)(lVar6 + 0x24) = *puVar5;
        *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(puVar5 + 1);
        *(float *)(param_1[0x18a] + 0x30) = fVar11;
      }
      else {
        plVar4 = (longlong *)FUN_140626e50(param_1);
        if (0 < (int)param_1[0x18b]) {
          lVar6 = param_1[0x18a];
          lVar7 = 0;
          lVar9 = 0;
          do {
            auVar2 = *(undefined1 (*) [16])(*plVar4 + 0x10 + lVar9);
            *(longlong *)(lVar6 + lVar7) = auVar2._0_8_;
            *(int *)(lVar6 + 8 + lVar7) = auVar2._8_4_;
            lVar6 = param_1[0x18a];
            puVar5 = (undefined8 *)UKismetMathLibrary::RandomUnitVector(local_6c);
            *(undefined8 *)(lVar6 + 0x24 + lVar7) = *puVar5;
            *(undefined4 *)(lVar6 + 0x2c + lVar7) = *(undefined4 *)(puVar5 + 1);
            fVar10 = *(float *)(param_1 + 0x181);
            iVar3 = rand();
            iVar8 = iVar8 + 1;
            lVar9 = lVar9 + 0x30;
            *(float *)(param_1[0x18a] + 0x30 + lVar7) =
                 (float)iVar3 * 3.051851e-05 * fVar11 * fVar10 + fVar11;
            lVar6 = param_1[0x18a];
            pfVar1 = (float *)(lVar6 + 0x30 + lVar7);
            lVar7 = lVar7 + 0x40;
            fVar10 = 1.0 / *pfVar1 + *(float *)(param_1 + 0x188);
            if (fVar10 <= *(float *)((longlong)param_1 + 0xc3c)) {
              fVar10 = *(float *)((longlong)param_1 + 0xc3c);
            }
            *(float *)((longlong)param_1 + 0xc3c) = fVar10;
          } while (iVar8 < (int)param_1[0x18b]);
        }
      }
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
  }
  return;
}



// FUNCTION 1431123d0 FUN_1431123d0 body=317 status=ok
// SIG undefined FUN_1431123d0(void)

void FUN_1431123d0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  FUN_1423bea10();
  if (*(int *)(param_1 + 0xc30) == 1) {
    FUN_143113430(param_1,param_2);
    return;
  }
  if (*(int *)(param_1 + 0xc30) == 3) {
    FUN_143113650(param_1,param_2);
    return;
  }
  if (*(char *)(param_1 + 0xc34) != '\0') {
    FUN_143112510(param_1,param_2);
    return;
  }
  if (*(char *)(param_1 + 0xb19) != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb10);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_142a07000();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((*(byte *)((longlong)plVar3 + 0xb1c) & 8) == 0) {
          return;
        }
        cVar2 = (**(code **)(*plVar3 + 0x400))(plVar3,0);
        if (cVar2 != '\0') {
          return;
        }
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x118);
    uVar5 = FUN_142e27720();
    lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
    if (lVar4 != 0) {
      uVar5 = FUN_142e23920();
      cVar2 = FUN_142c736c0(lVar4,uVar5);
      if (cVar2 != '\0') {
        return;
      }
    }
    FUN_14062c610(param_1,0);
  }
  return;
}



// FUNCTION 143112510 FUN_143112510 body=3870 status=ok
// SIG undefined FUN_143112510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143112510(longlong *param_1,float param_2)

{
  longlong lVar1;
  int *piVar2;
  uint *puVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int *piVar18;
  longlong lVar19;
  ulonglong uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
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
  uint local_res8 [2];
  float local_res10;
  int local_res18;
  float local_res20;
  longlong local_380;
  ulonglong local_378;
  undefined1 *local_368;
  longlong **pplStack_360;
  float local_358;
  float local_354;
  float local_348;
  float local_338;
  float local_334;
  float local_330;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  undefined8 uStack_2d0;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  longlong local_288;
  int *local_280;
  longlong local_278;
  float local_268;
  undefined8 uStack_264;
  undefined8 uStack_25c;
  float fStack_254;
  undefined8 uStack_250;
  undefined8 local_248;
  float fStack_240;
  float fStack_23c;
  undefined1 local_228 [8];
  undefined8 uStack_220;
  longlong local_218;
  longlong *local_210;
  longlong *local_208;
  int *local_200;
  undefined1 *local_1f8;
  longlong **pplStack_1f0;
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
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
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
  
  lVar12 = param_1[0x24];
  local_res10 = param_2;
  if (lVar12 == 0) {
    lVar12 = FUN_1423407b0();
  }
  fVar21 = *(float *)(lVar12 + 0x790);
  local_330 = fVar21;
  if (((param_1[0x23] == 0) || ((longlong *)param_1[0x14f] == (longlong *)0x0)) ||
     (iVar11 = (**(code **)(*(longlong *)param_1[0x14f] + 0xa0))(), iVar11 != 0)) {
    if ((char)param_1[0x163] != '\0') {
      local_380 = 0;
      local_378 = 0;
      local_res8[0] = 0;
      if (0 < (int)param_1[0x18b]) {
        do {
          lVar12 = (longlong)(int)local_res8[0] * 0x40 + param_1[0x18a];
          if ((((*(byte *)(lVar12 + 0x3c) & 2) == 0) && (0.0 < *(float *)(lVar12 + 0x38))) &&
             (*(float *)(lVar12 + 0x38) <= fVar21)) {
            *(byte *)(lVar12 + 0x3c) = *(byte *)(lVar12 + 0x3c) | 2;
            cVar10 = FUN_1423b47e0(param_1,local_res8[0] + 2);
            if (cVar10 == '\0') {
              local_368 = &LAB_1431109d0;
              local_210 = &local_380;
              uStack_220 = local_res8;
              local_228 = (undefined1  [8])param_1;
              pplStack_360 = (longlong **)local_228;
              local_2d8 = 145.03833;
              fStack_2d4 = 1.4013e-45;
              local_218 = lVar12;
              uStack_2d0 = pplStack_360;
              FUN_140625610(param_1,&local_2d8);
            }
          }
          local_res8[0] = local_res8[0] + 1;
        } while ((int)local_res8[0] < (int)param_1[0x18b]);
        if (0 < (int)local_378) {
          FUN_140625aa0(param_1,local_380,local_378 & 0xffffffff,0);
        }
        if (local_380 != 0) {
          FMemory::Free();
        }
      }
    }
    if ((0 < (int)param_1[0x18e]) && (*(float *)(param_1 + 0x18c) <= fVar21)) {
      lVar12 = (longlong)*(int *)((longlong)param_1 + 0x76c);
      *(undefined4 *)(param_1 + 0x18c) = 0x7f7fffff;
      fVar37 = param_2 / *(float *)(param_1 + 0x184);
      iVar11 = (int)param_1[0x18e] + -1;
      local_res8[0] = local_res8[0] & 0xffffff00;
      if (-1 < iVar11) {
        lVar15 = (longlong)iVar11 * 0x30;
        lVar19 = lVar15;
        local_res20 = fVar37;
        do {
          plVar17 = param_1 + 0x18d;
          piVar2 = (int *)(lVar15 + *plVar17);
          if (fVar21 < *(float *)(lVar15 + 0x18 + *plVar17)) {
LAB_143113339:
            fVar26 = *(float *)(param_1 + 0x18c);
            if ((float)piVar2[6] <= *(float *)(param_1 + 0x18c)) {
              fVar26 = (float)piVar2[6];
            }
            *(float *)(param_1 + 0x18c) = fVar26;
          }
          else {
            local_res18 = iVar11;
            local_288 = lVar19;
            if ((*(byte *)(piVar2 + 1) & 1) == 0) {
              local_1f8 = &LAB_1431109b0;
              *(byte *)(piVar2 + 1) = *(byte *)(piVar2 + 1) | 1;
              pplStack_1f0 = &local_208;
              local_2d8 = 145.03784;
              fStack_2d4 = 1.4013e-45;
              local_208 = param_1;
              local_200 = piVar2;
              uStack_2d0 = pplStack_1f0;
              FUN_1406256c0(param_1,&local_2d8);
            }
            iVar6 = *piVar2;
            lVar13 = param_1[lVar12 * 2 + 0xe5];
            iVar14 = piVar2[4];
            lVar1 = (longlong)iVar6 + 1;
            pfVar4 = (float *)(lVar13 + 0x20 + lVar1 * 0x30);
            fVar26 = pfVar4[1];
            if (*pfVar4 <= pfVar4[1]) {
              fVar26 = *pfVar4;
            }
            if (pfVar4[2] <= fVar26) {
              fVar26 = pfVar4[2];
            }
            fVar36 = fVar26 - fVar37;
            if (0.0 < fVar36) {
              local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
              local_334 = -(param_2 * (float)piVar2[7]);
              if (iVar14 < 1) {
                auVar23._4_4_ = fVar36;
                auVar23._0_4_ = fVar36;
                auVar23._8_4_ = fVar36;
                auVar23._12_4_ = 0;
                *(undefined1 (*) [16])(lVar13 + 0x20 + lVar1 * 0x30) = auVar23;
                pfVar4 = (float *)(param_1[lVar12 * 2 + 0xe5] + 0x10 + lVar1 * 0x30);
                fVar37 = pfVar4[1];
                fVar26 = pfVar4[2];
                fVar36 = pfVar4[3];
                pfVar5 = (float *)(param_1[lVar12 * 2 + 0xe5] + 0x10 + lVar1 * 0x30);
                *pfVar5 = *pfVar4 + 0.0;
                pfVar5[1] = fVar37 + 0.0;
                pfVar5[2] = local_334 + fVar26;
                pfVar5[3] = fVar36 + 0.0;
                fVar37 = local_res20;
              }
              else {
                piVar18 = *(int **)(piVar2 + 2);
                fVar21 = (float)piVar2[10];
                fVar37 = (float)piVar2[9];
                fVar29 = (float)piVar2[8];
                local_268 = fVar36 / fVar26;
                uStack_264 = 0;
                local_278 = ((longlong)*piVar18 + 1) * 0x30;
                local_280 = piVar18 + iVar14;
                uStack_25c = 0;
                uStack_250 = 0;
                local_248 = 0;
                fStack_23c = 0.0;
                pfVar4 = (float *)(local_278 + lVar13);
                fVar26 = *pfVar4;
                fVar36 = pfVar4[1];
                fVar39 = pfVar4[2];
                fVar34 = pfVar4[3];
                fVar24 = fVar21 * fVar36 - fVar37 * fVar39;
                fVar25 = fVar29 * fVar39 - fVar21 * fVar26;
                fVar27 = fVar37 * fVar26 - fVar29 * fVar36;
                fVar28 = fVar34 * 0.0 - fVar34 * 0.0;
                fVar24 = fVar24 + fVar24;
                fVar25 = fVar25 + fVar25;
                fVar27 = fVar27 + fVar27;
                fVar28 = fVar28 + fVar28;
                pfVar4 = (float *)(local_278 + 0x10 + lVar13);
                local_2e8 = (fVar27 * fVar36 - fVar25 * fVar39) + fVar34 * fVar24 + fVar29 + *pfVar4
                ;
                fStack_2e4 = (fVar24 * fVar39 - fVar27 * fVar26) + fVar34 * fVar25 + fVar37 +
                             pfVar4[1];
                fStack_2e0 = (fVar25 * fVar26 - fVar24 * fVar36) + fVar34 * fVar27 + fVar21 +
                             pfVar4[2];
                fStack_2dc = (fVar28 * fVar34 - fVar28 * fVar34) + fVar34 * fVar28 + 0.0 + pfVar4[3]
                ;
                local_2d8 = fStack_2e0;
                fStack_2d4 = fStack_2e0;
                uStack_2d0._0_4_ = fStack_2e0;
                uStack_2d0._4_4_ = fStack_2e0;
                fStack_254 = local_268;
                fStack_240 = local_268;
                if (piVar18 != local_280) {
                  local_358 = -fStack_2e4;
                  local_338 = -local_2e8;
                  local_354 = -fStack_2e0;
                  _local_228 = ZEXT416((uint)local_334) << 0x40;
                  do {
                    lVar1 = param_1[lVar12 * 2 + 0xe5];
                    iVar11 = *piVar18;
                    lVar19 = (longlong)iVar11 + 1;
                    pfVar4 = (float *)(lVar1 + lVar19 * 0x30);
                    fVar21 = *pfVar4;
                    fVar37 = pfVar4[1];
                    fVar26 = pfVar4[2];
                    fVar36 = pfVar4[3];
                    pfVar4 = (float *)(lVar1 + 0x10 + lVar19 * 0x30);
                    fVar24 = fVar37 + fVar37;
                    fVar27 = fVar26 + fVar26;
                    fVar28 = (fVar21 + fVar21) * fVar21;
                    fVar25 = (fVar21 + fVar21) * fVar36;
                    pfVar5 = (float *)(lVar1 + 0x20 + lVar19 * 0x30);
                    fVar29 = *pfVar5;
                    fVar39 = pfVar5[1];
                    fVar34 = pfVar5[2];
                    fVar38 = (fVar27 * fVar36 + fVar24 * fVar21) * fVar29;
                    fVar40 = (fVar25 + fVar27 * fVar37) * fVar39;
                    fVar41 = (fVar24 * fVar36 + fVar27 * fVar21) * fVar34;
                    fVar33 = fVar39 * (fVar24 * fVar21 - fVar27 * fVar36);
                    fVar25 = fVar34 * (fVar27 * fVar37 - fVar25);
                    fVar35 = fVar29 * (fVar27 * fVar21 - fVar24 * fVar36);
                    fVar42 = local_338 + *pfVar4;
                    fVar36 = (float)((uint)((_DAT_146b50340 - (fVar27 * fVar26 + fVar24 * fVar37)) *
                                           fVar29) & _DAT_146b50350);
                    fVar26 = (float)((uint)((fRam0000000146b50344 - (fVar27 * fVar26 + fVar28)) *
                                           fVar39) & uRam0000000146b50354);
                    fVar37 = (float)((uint)((fRam0000000146b50348 - (fVar24 * fVar37 + fVar28)) *
                                           fVar34) & uRam0000000146b50358);
                    fVar29 = (float)((uint)((fRam0000000146b5034c - (fVar28 + fVar28)) * pfVar5[3])
                                    & uRam0000000146b5035c);
                    fVar39 = local_358 + pfVar4[1];
                    fVar21 = local_354 + pfVar4[2];
                    local_148 = fVar38 * uStack_25c._4_4_ + fVar36 * local_268 +
                                fVar35 * (float)local_248 + fVar29 * 0.0;
                    local_158 = fVar38 * fStack_254 + fVar36 * (float)uStack_264 +
                                fVar35 * local_248._4_4_ + fVar29 * 0.0;
                    fStack_140 = fVar38 * (float)uStack_250 + fVar36 * uStack_264._4_4_ +
                                 fVar35 * fStack_240 + fVar29 * 0.0;
                    fStack_2bc = fVar38 * uStack_250._4_4_ + fVar36 * (float)uStack_25c +
                                 fVar35 * fStack_23c + fVar29 * 1.0;
                    local_1d8 = fVar26 * uStack_25c._4_4_ + fVar33 * local_268 +
                                fVar40 * (float)local_248 + fVar29 * 0.0;
                    local_1e8 = fVar26 * fStack_254 + fVar33 * (float)uStack_264 +
                                fVar40 * local_248._4_4_ + fVar29 * 0.0;
                    fStack_1d0 = fVar26 * (float)uStack_250 + fVar33 * uStack_264._4_4_ +
                                 fVar40 * fStack_240 + fVar29 * 0.0;
                    fStack_2ac = fVar26 * uStack_250._4_4_ + fVar33 * (float)uStack_25c +
                                 fVar40 * fStack_23c + fVar29 * 1.0;
                    local_1a8 = fVar25 * uStack_25c._4_4_ + fVar41 * local_268 +
                                fVar37 * (float)local_248 + fVar29 * 0.0;
                    local_1b8 = fVar25 * fStack_254 + fVar41 * (float)uStack_264 +
                                fVar37 * local_248._4_4_ + fVar29 * 0.0;
                    fStack_1a0 = fVar25 * (float)uStack_250 + fVar41 * uStack_264._4_4_ +
                                 fVar37 * fStack_240 + fVar29 * 0.0;
                    fStack_29c = fVar25 * uStack_250._4_4_ + fVar41 * (float)uStack_25c +
                                 fVar37 * fStack_23c + fVar29 * 1.0;
                    fStack_174 = fVar39 * fStack_254 + fVar42 * (float)uStack_264 +
                                 fVar21 * local_248._4_4_ + fRam0000000146b5034c * 0.0;
                    fStack_184 = fVar39 * (float)uStack_250 + fVar42 * uStack_264._4_4_ +
                                 fVar21 * fStack_240 + fRam0000000146b5034c * 0.0;
                    fStack_28c = fVar39 * uStack_250._4_4_ + fVar42 * (float)uStack_25c +
                                 fVar21 * fStack_23c + fRam0000000146b5034c * 1.0;
                    local_348 = fVar39 * uStack_25c._4_4_ + fVar42 * local_268 +
                                fVar21 * (float)local_248 + fRam0000000146b5034c * 0.0 + local_2e8;
                    fStack_290 = fStack_184 + local_2d8;
                    fStack_294 = fStack_174 + fStack_2e4;
                    local_368 = (undefined1 *)CONCAT44(fStack_28c,fStack_28c);
                    pplStack_360 = (longlong **)CONCAT44(fStack_28c,fStack_28c);
                    fVar34 = 0.0;
                    fVar39 = local_158 * local_158 + local_148 * local_148 + fStack_140 * fStack_140
                    ;
                    fVar36 = local_1e8 * local_1e8 + local_1d8 * local_1d8 + fStack_1d0 * fStack_1d0
                    ;
                    fVar29 = local_1b8 * local_1b8 + local_1a8 * local_1a8 + fStack_1a0 * fStack_1a0
                    ;
                    fVar21 = local_148;
                    fVar37 = local_158;
                    fVar26 = fStack_140;
                    if (1e-08 < fVar39) {
                      fVar34 = SQRT(fVar39);
                      fVar26 = 1.0 / fVar34;
                      fVar21 = fVar26 * local_148;
                      fVar37 = local_158 * fVar26;
                      fVar26 = fStack_140 * fVar26;
                    }
                    fVar39 = 0.0;
                    local_2b8 = local_1d8;
                    fStack_2b4 = local_1e8;
                    fStack_2b0 = fStack_1d0;
                    if (1e-08 < fVar36) {
                      fVar39 = SQRT(fVar36);
                      fStack_2b0 = 1.0 / fVar39;
                      local_2b8 = local_1d8 * fStack_2b0;
                      fStack_2b4 = local_1e8 * fStack_2b0;
                      fStack_2b0 = fStack_1d0 * fStack_2b0;
                    }
                    if (fVar29 <= 1e-08) {
                      fVar29 = 0.0;
                      local_2a8 = local_1a8;
                      fStack_2a4 = local_1b8;
                      fStack_2a0 = fStack_1a0;
                    }
                    else {
                      fVar29 = SQRT(fVar29);
                      fVar36 = 1.0 / fVar29;
                      local_2a8 = local_1a8 * fVar36;
                      fStack_2a4 = local_1b8 * fVar36;
                      fStack_2a0 = fStack_1a0 * fVar36;
                    }
                    auVar9._4_4_ = fVar39;
                    auVar9._0_4_ = fVar34;
                    auVar9._8_4_ = fVar29;
                    auVar9._12_4_ = 0;
                    *(undefined1 (*) [16])(lVar1 + 0x20 + lVar19 * 0x30) = auVar9;
                    local_2c8 = fVar21;
                    fStack_2c4 = fVar37;
                    fStack_2c0 = fVar26;
                    local_298 = local_348;
                    fStack_1e4 = local_1e8;
                    fStack_1e0 = local_1e8;
                    fStack_1dc = local_1e8;
                    fStack_1d4 = local_1e8;
                    fStack_1cc = fStack_2ac;
                    local_1c8 = fStack_1d0;
                    fStack_1c4 = fStack_1d0;
                    fStack_1c0 = fStack_1d0;
                    fStack_1bc = fStack_1d0;
                    fStack_1b4 = local_1b8;
                    fStack_1b0 = local_1b8;
                    fStack_1ac = local_1b8;
                    fStack_1a4 = local_1b8;
                    fStack_19c = fStack_29c;
                    local_188 = fStack_290;
                    fStack_180 = fStack_184;
                    fStack_17c = fStack_184;
                    local_178 = fStack_294;
                    fStack_170 = fStack_174;
                    fStack_16c = fStack_174;
                    local_168 = fStack_29c;
                    fStack_164 = fStack_29c;
                    fStack_160 = fStack_29c;
                    fStack_15c = fStack_29c;
                    fStack_154 = local_158;
                    fStack_150 = local_158;
                    fStack_14c = local_158;
                    fStack_144 = local_158;
                    fStack_13c = fStack_2bc;
                    local_138 = fStack_140;
                    fStack_134 = fStack_140;
                    fStack_130 = fStack_140;
                    fStack_12c = fStack_140;
                    local_128 = local_148;
                    fStack_124 = local_158;
                    fStack_120 = fStack_140;
                    fStack_11c = fStack_2bc;
                    local_118 = local_1d8;
                    fStack_114 = local_1e8;
                    fStack_110 = fStack_1d0;
                    fStack_10c = fStack_2ac;
                    local_108 = local_1a8;
                    fStack_104 = local_1b8;
                    fStack_100 = fStack_1a0;
                    fStack_fc = fStack_29c;
                    local_f8 = local_348;
                    fStack_f4 = fStack_294;
                    fStack_f0 = fStack_290;
                    fStack_ec = fStack_28c;
                    fVar36 = (float)FMatrix::Determinant(&local_128);
                    if (fVar36 < 0.0) {
                      fVar39 = fVar39 * fRam0000000146b50424;
                      fVar29 = fVar29 * fRam0000000146b50428;
                      fVar36 = fRam0000000146b5042c * 0.0;
                      local_2c8 = -fVar21;
                      fStack_2c4 = -fVar37;
                      fStack_2c0 = -fVar26;
                      pfVar4 = (float *)(lVar1 + 0x20 + lVar19 * 0x30);
                      *pfVar4 = fVar34 * _DAT_146b50420;
                      pfVar4[1] = fVar39;
                      pfVar4[2] = fVar29;
                      pfVar4[3] = fVar36;
                    }
                    FQuat::FQuat(&local_198,&local_2c8);
                    fVar36 = fRam0000000146b5033c;
                    fVar26 = fRam0000000146b50338;
                    fVar37 = fRam0000000146b50334;
                    fVar21 = _DAT_146b50330;
                    piVar18 = piVar18 + 1;
                    auVar7._4_4_ = local_178;
                    auVar7._0_4_ = local_348;
                    auVar7._8_4_ = local_188;
                    auVar7._12_4_ = 0;
                    *(undefined1 (*) [16])(lVar1 + 0x10 + lVar19 * 0x30) = auVar7;
                    pfVar4 = (float *)(lVar1 + lVar19 * 0x30);
                    *pfVar4 = local_198;
                    pfVar4[1] = fStack_194;
                    pfVar4[2] = fStack_190;
                    pfVar4[3] = fStack_18c;
                    auVar22._0_4_ = local_198 * local_198 + fStack_190 * fStack_190;
                    auVar22._4_4_ = fStack_194 * fStack_194 + fStack_18c * fStack_18c;
                    auVar22._8_4_ = fStack_190 * fStack_190 + local_198 * local_198;
                    auVar22._12_4_ = fStack_18c * fStack_18c + fStack_194 * fStack_194;
                    fVar25 = auVar22._4_4_ + auVar22._0_4_;
                    fVar27 = auVar22._8_4_ + auVar22._4_4_;
                    fVar28 = auVar22._12_4_ + auVar22._8_4_;
                    fVar33 = auVar22._0_4_ + auVar22._12_4_;
                    auVar8._4_4_ = fVar27;
                    auVar8._0_4_ = fVar25;
                    auVar8._8_4_ = fVar28;
                    auVar8._12_4_ = fVar33;
                    auVar23 = rsqrtps(auVar22,auVar8);
                    fVar29 = auVar23._0_4_;
                    fVar39 = auVar23._4_4_;
                    fVar34 = auVar23._8_4_;
                    fVar24 = auVar23._12_4_;
                    fVar29 = (fVar21 - fVar29 * fVar29 * fVar25 * fVar21) * fVar29 + fVar29;
                    fVar39 = (fVar37 - fVar39 * fVar39 * fVar27 * fVar37) * fVar39 + fVar39;
                    fVar34 = (fVar26 - fVar34 * fVar34 * fVar28 * fVar26) * fVar34 + fVar34;
                    fVar24 = (fVar36 - fVar24 * fVar24 * fVar33 * fVar36) * fVar24 + fVar24;
                    uVar30 = ((uint)(((fVar37 - fVar39 * fVar39 * fVar27 * fVar37) * fVar39 + fVar39
                                     ) * fStack_194) ^ uRam0000000146b50324) &
                             -(uint)(fRam0000000146b503e4 <= fVar27) ^ uRam0000000146b50324;
                    uVar31 = ((uint)(((fVar26 - fVar34 * fVar34 * fVar28 * fVar26) * fVar34 + fVar34
                                     ) * fStack_190) ^ uRam0000000146b50328) &
                             -(uint)(fRam0000000146b503e8 <= fVar28) ^ uRam0000000146b50328;
                    uVar32 = ((uint)(((fVar36 - fVar24 * fVar24 * fVar33 * fVar36) * fVar24 + fVar24
                                     ) * fStack_18c) ^ uRam0000000146b5032c) &
                             -(uint)(fRam0000000146b503ec <= fVar33) ^ uRam0000000146b5032c;
                    puVar3 = (uint *)(lVar1 + lVar19 * 0x30);
                    *puVar3 = ((uint)(((fVar21 - fVar29 * fVar29 * fVar25 * fVar21) * fVar29 +
                                      fVar29) * local_198) ^ _DAT_146b50320) &
                              -(uint)(_DAT_146b503e0 <= fVar25) ^ _DAT_146b50320;
                    puVar3[1] = uVar30;
                    puVar3[2] = uVar31;
                    puVar3[3] = uVar32;
                    lVar19 = ((longlong)iVar11 + 1) * 0x30 + param_1[lVar12 * 2 + 0xe5];
                    *(float *)(lVar19 + 0x10) = (float)local_228._0_4_ + *(float *)(lVar19 + 0x10);
                    *(float *)(lVar19 + 0x14) = (float)local_228._4_4_ + *(float *)(lVar19 + 0x14);
                    *(float *)(lVar19 + 0x18) = (float)uStack_220 + *(float *)(lVar19 + 0x18);
                    *(float *)(lVar19 + 0x1c) = uStack_220._4_4_ + *(float *)(lVar19 + 0x1c);
                  } while (piVar18 != local_280);
                  lVar13 = param_1[lVar12 * 2 + 0xe5];
                  lVar19 = local_288;
                  param_2 = local_res10;
                  iVar11 = local_res18;
                }
                pfVar4 = (float *)(lVar13 + local_278);
                fVar29 = *pfVar4 * _DAT_146b50400;
                fVar39 = pfVar4[1] * fRam0000000146b50404;
                fVar34 = pfVar4[2] * fRam0000000146b50408;
                fVar24 = pfVar4[3] * fRam0000000146b5040c;
                pfVar4 = (float *)(lVar13 + 0x10 + local_278);
                fVar25 = (float)((uint)(local_2e8 - *pfVar4) & _DAT_146b50350);
                fVar27 = (float)((uint)(fStack_2e4 - pfVar4[1]) & uRam0000000146b50354);
                fVar36 = (float)((uint)((local_334 + local_2d8) - pfVar4[2]) & uRam0000000146b50358)
                ;
                fVar21 = fVar36 * fVar39 - fVar27 * fVar34;
                fVar37 = fVar25 * fVar34 - fVar36 * fVar29;
                fVar26 = fVar27 * fVar29 - fVar25 * fVar39;
                fVar21 = fVar21 + fVar21;
                fVar37 = fVar37 + fVar37;
                fVar26 = fVar26 + fVar26;
                fVar36 = (fVar37 * fVar29 - fVar21 * fVar39) + fVar24 * fVar26 + fVar36;
                local_378 = CONCAT44(local_378._4_4_,fVar36);
                *(ulonglong *)(piVar2 + 8) =
                     CONCAT44((fVar21 * fVar34 - fVar26 * fVar29) + fVar24 * fVar37 + fVar27,
                              (fVar26 * fVar39 - fVar37 * fVar34) + fVar24 * fVar21 + fVar25);
                piVar2[10] = (int)fVar36;
                fVar21 = local_330;
                fVar37 = local_res20;
              }
              goto LAB_143113339;
            }
            if (iVar14 < 1) {
              FUN_140625a20(param_1,iVar6,CONCAT71((int7)(int3)((uint)iVar14 >> 8),1));
              (**(code **)(*param_1 + 0x9d0))(param_1,*piVar2 + 1,0);
            }
            else {
              FUN_140625aa0(param_1,*(undefined8 *)(piVar2 + 2),(longlong)iVar14,
                            CONCAT71((int7)(int3)((uint)iVar6 >> 8),1));
              piVar18 = *(int **)(piVar2 + 2);
              uVar16 = 0;
              uVar20 = (longlong)piVar2[4] & 0x3fffffffffffffff;
              if (piVar18 + piVar2[4] < piVar18) {
                uVar20 = uVar16;
              }
              iVar11 = local_res18;
              if (uVar20 != 0) {
                do {
                  (**(code **)(*param_1 + 0x9d0))(param_1,*piVar18 + 1,0);
                  uVar16 = uVar16 + 1;
                  piVar18 = piVar18 + 1;
                  iVar11 = local_res18;
                } while (uVar16 != uVar20);
              }
            }
            if (*(longlong *)(*plVar17 + 8 + lVar19) != 0) {
              FMemory::Free();
            }
            iVar6 = (int)param_1[0x18e];
            iVar14 = (iVar6 - iVar11) + -1;
            if (0 < iVar14) {
              iVar14 = 1;
            }
            if (iVar14 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar17 + lVar19),
                         (void *)((longlong)(iVar6 - iVar14) * 0x30 + *plVar17),
                         (longlong)iVar14 * 0x30);
              iVar6 = (int)param_1[0x18e];
            }
            *(int *)(param_1 + 0x18e) = iVar6 + -1;
            TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar17);
          }
          iVar11 = iVar11 + -1;
          lVar19 = lVar19 + -0x30;
          lVar15 = lVar15 + -0x30;
        } while (-1 < iVar11);
        if ((char)local_res8[0] != '\0') {
          local_res18 = iVar11;
          local_288 = lVar19;
          UActorComponent::MarkRenderDynamicDataDirty(param_1);
          FUN_1423424c0(param_1);
          (**(code **)(*param_1 + 0x990))(param_1);
        }
      }
    }
  }
  else {
    iVar11 = (int)param_1[0x18e];
    if (iVar11 != 0) {
      plVar17 = (longlong *)(param_1[0x18d] + 8);
      do {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 6;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    *(undefined4 *)(param_1 + 0x18e) = 0;
    if (*(int *)((longlong)param_1 + 0xc74) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x18d,0);
    }
    FUN_142227350(param_1[0x23],0,1);
  }
  return;
}



// FUNCTION 143113430 FUN_143113430 body=534 status=ok
// SIG undefined FUN_143113430(void)

void FUN_143113430(longlong *param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_68;
  float local_60;
  float local_50;
  
  fVar13 = *(float *)(param_1 + 0x187);
  *(float *)(param_1 + 0x187) = param_2 + fVar13;
  if (*(float *)((longlong)param_1 + 0xc3c) <= 0.0) {
    fVar13 = 1.0;
  }
  else {
    fVar13 = (param_2 + fVar13) / *(float *)((longlong)param_1 + 0xc3c);
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
  }
  if ((char)param_1[0x163] == '\0') {
    lVar6 = param_1[0x18a];
    fVar11 = param_2 * *(float *)(lVar6 + 0x30) + *(float *)(lVar6 + 0x34);
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    *(float *)(lVar6 + 0x34) = fVar11;
    *(float *)((longlong)param_1 + 0x6cc) = *(float *)((longlong)param_1 + 0x6cc) + 0.01;
    *(float *)((longlong)param_1 + 0x6d4) = *(float *)((longlong)param_1 + 0x6d4) + 0.01;
    *(float *)(param_1 + 0xda) = *(float *)(param_1 + 0xda) + 0.01;
    lVar6 = param_1[0x18a];
    fVar11 = *(float *)(lVar6 + 0x34);
    local_60 = fVar11 * *(float *)(lVar6 + 0x14);
    fVar12 = fVar11 * *(float *)(lVar6 + 0xc);
    local_68 = CONCAT44(fVar11 * *(float *)(lVar6 + 0x10),fVar12);
    local_50 = local_60;
    (**(code **)(*param_1 + 0x3f8))(fVar12,&local_68);
  }
  else {
    plVar5 = (longlong *)FUN_140626e50();
    uVar7 = 0;
    uVar9 = uVar7;
    uVar10 = uVar7;
    if (0 < (int)plVar5[1]) {
      do {
        lVar6 = param_1[0x18a];
        uVar8 = (int)uVar9 + 1;
        fVar11 = param_2 * *(float *)(uVar7 + 0x30 + lVar6) + *(float *)(uVar7 + 0x34 + lVar6);
        if (1.0 <= fVar11) {
          fVar11 = 1.0;
        }
        *(float *)(uVar7 + 0x34 + lVar6) = fVar11;
        lVar3 = param_1[0x18a];
        fVar11 = *(float *)(uVar7 + 0x34 + lVar3);
        lVar6 = uVar7 + 0xc;
        lVar1 = uVar7 + 0x10;
        lVar2 = uVar7 + 0x14;
        uVar7 = uVar7 + 0x40;
        auVar4._4_4_ = fVar11 * *(float *)(lVar1 + lVar3);
        auVar4._0_4_ = fVar11 * *(float *)(lVar6 + lVar3);
        auVar4._8_4_ = fVar11 * *(float *)(lVar2 + lVar3);
        auVar4._12_4_ = 0;
        *(undefined1 (*) [16])(uVar10 + 0x20 + *plVar5) = auVar4;
        uVar9 = (ulonglong)uVar8;
        uVar10 = uVar10 + 0x30;
      } while ((int)uVar8 < (int)plVar5[1]);
    }
    FUN_1406292a0(param_1,0);
  }
  if (1.0 <= fVar13) {
    lVar6 = param_1[0x24];
    *(undefined4 *)(param_1 + 0x186) = 2;
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0x36c) = *(undefined4 *)(lVar6 + 0x790);
    if ((char)param_1[0x163] == '\0') {
      (**(code **)(*param_1 + 0x358))(param_1,0);
    }
  }
  return;
}



// FUNCTION 143113650 FUN_143113650 body=1599 status=ok
// SIG undefined FUN_143113650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143113650(longlong *param_1,float param_2)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  longlong local_a8;
  longlong lStack_a0;
  
  fVar14 = *(float *)(param_1 + 0x188);
  fVar19 = *(float *)(param_1 + 0x187);
  *(float *)(param_1 + 0x187) = param_2 + fVar19;
  if (0.0 < fVar14) {
    fVar14 = fVar14 - param_2;
    *(float *)(param_1 + 0x188) = fVar14;
  }
  if (*(float *)((longlong)param_1 + 0xc3c) <= 0.0) {
    fVar19 = 1.0;
  }
  else {
    fVar19 = (param_2 + fVar19) / *(float *)((longlong)param_1 + 0xc3c);
    if (1.0 <= fVar19) {
      fVar19 = 1.0;
    }
  }
  fVar18 = (1.0 - (1.0 - fVar19) * (1.0 - fVar19)) * *(float *)(param_1 + 0x182);
  if ((char)param_1[0x163] == '\0') {
    if (fVar14 <= 0.0) {
      lVar10 = param_1[0x18a];
      fVar14 = *(float *)(lVar10 + 0x34) - param_2 * *(float *)(lVar10 + 0x30);
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      *(float *)(lVar10 + 0x34) = fVar14;
      *(float *)((longlong)param_1 + 0x6cc) = *(float *)((longlong)param_1 + 0x6cc) + 0.01;
      *(float *)((longlong)param_1 + 0x6d4) = *(float *)((longlong)param_1 + 0x6d4) + 0.01;
      *(float *)(param_1 + 0xda) = *(float *)(param_1 + 0xda) + 0.01;
      lVar10 = param_1[0x18a];
      fVar14 = *(float *)(lVar10 + 0x34);
      local_c0 = fVar14 * *(float *)(lVar10 + 0x14);
      local_b8 = CONCAT44(fVar14 * *(float *)(lVar10 + 0x10),fVar14 * *(float *)(lVar10 + 0xc));
      local_b0 = local_c0;
      (**(code **)(*param_1 + 0x3f8))(local_b8,&local_b8);
    }
    lVar10 = param_1[0x18a];
    local_b8 = *(undefined8 *)(lVar10 + 0x18);
    pfVar1 = (float *)(lVar10 + 0x24);
    local_b0 = *(float *)(lVar10 + 0x20);
    FMath::VInterpConstantTo
              (&local_c8,&local_b8,pfVar1,param_2,*(undefined4 *)((longlong)param_1 + 0xc0c));
    if (((ABS(*pfVar1 - (float)local_c8) <= 0.0001) &&
        (ABS(*(float *)(lVar10 + 0x28) - local_c8._4_4_) <= 0.0001)) &&
       (ABS(*(float *)(lVar10 + 0x2c) - local_c0) <= 0.0001)) {
      puVar9 = (undefined8 *)UKismetMathLibrary::RandomUnitVector(&local_a8);
      *(undefined8 *)pfVar1 = *puVar9;
      *(undefined4 *)(lVar10 + 0x2c) = *(undefined4 *)(puVar9 + 1);
    }
    lVar10 = param_1[0x18a];
    *(ulonglong *)(lVar10 + 0x18) = CONCAT44(local_c8._4_4_ * fVar18,(float)local_c8 * fVar18);
    *(float *)(lVar10 + 0x20) = local_c0 * fVar18;
    pfVar1 = (float *)(param_1 + 0x50);
    pfVar4 = (float *)param_1[0x18a];
    local_b0 = fVar18 * pfVar4[8] + pfVar4[2];
    local_b8 = CONCAT44(fVar18 * pfVar4[7] + pfVar4[1],fVar18 * pfVar4[6] + *pfVar4);
    if (((*(float *)(param_1 + 0x3f) != *pfVar1) ||
        (*(float *)((longlong)param_1 + 0x1fc) != *(float *)((longlong)param_1 + 0x284))) ||
       (local_c0 = local_b0, *(float *)(param_1 + 0x40) != *(float *)(param_1 + 0x51))) {
      local_c8 = *(longlong *)*(undefined1 (*) [12])(param_1 + 0x3f);
      auVar13._12_4_ = 0;
      auVar13._0_12_ = *(undefined1 (*) [12])(param_1 + 0x3f);
      fVar14 = (float)DAT_146b50310;
      fVar18 = DAT_146b50310._4_4_;
      fVar5 = DAT_146b50310._8_4_;
      auVar13 = divps(auVar13,_DAT_146b50310);
      fVar15 = (float)local_c8 - (float)(int)auVar13._0_4_ * fVar14;
      fVar16 = (float)((ulonglong)local_c8 >> 0x20) - (float)(int)auVar13._4_4_ * fVar18;
      fVar17 = *(float *)(param_1 + 0x40) - (float)(int)auVar13._8_4_ * fVar5;
      fVar15 = (float)(((uint)(fVar15 + fVar14) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                      (uint)(fVar15 + fVar14));
      fVar16 = (float)(((uint)(fVar16 + fVar18) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                      (uint)(fVar16 + fVar18));
      local_c0 = (float)(((uint)(fVar17 + fVar5) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                        (uint)(fVar17 + fVar5));
      local_c0 = (float)(((uint)(local_c0 - fVar5) ^ (uint)local_c0) &
                         -(uint)(fRam0000000146b50308 < local_c0) ^ (uint)local_c0);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar16 - fVar18) ^ (uint)fVar16) &
                    -(uint)(fRam0000000146b50304 < fVar16) ^ (uint)fVar16,
                    ((uint)(fVar15 - fVar14) ^ (uint)fVar15) & -(uint)(_DAT_146b50300 < fVar15) ^
                    (uint)fVar15);
      *(float *)(param_1 + 0x51) = local_c0;
      plVar8 = (longlong *)FRotator::Quaternion(pfVar1,&local_c8);
      lVar10 = plVar8[1];
      param_1[0x4e] = *plVar8;
      param_1[0x4f] = lVar10;
    }
    local_a8 = param_1[0x4e];
    lStack_a0 = param_1[0x4f];
    FUN_142397be0(param_1,&local_b8,&local_a8,0,0,0);
  }
  else {
    plVar8 = (longlong *)FUN_140626e50();
    iVar12 = 0;
    if (0 < (int)plVar8[1]) {
      lVar11 = 0;
      lVar10 = 0;
      do {
        lVar3 = param_1[0x18a];
        local_b8 = *(undefined8 *)(lVar10 + 0x18 + lVar3);
        lVar2 = lVar10 + lVar3;
        local_b0 = *(float *)(lVar10 + 0x20 + lVar3);
        FMath::VInterpConstantTo
                  (&local_c8,&local_b8,lVar2 + 0x24,param_2,
                   *(undefined4 *)((longlong)param_1 + 0xc0c));
        if (((ABS(*(float *)(lVar2 + 0x24) - (float)local_c8) <= 0.0001) &&
            (ABS(*(float *)(lVar2 + 0x28) - local_c8._4_4_) <= 0.0001)) &&
           (ABS(*(float *)(lVar2 + 0x2c) - local_c0) <= 0.0001)) {
          puVar9 = (undefined8 *)UKismetMathLibrary::RandomUnitVector(&local_a8);
          *(undefined8 *)(lVar2 + 0x24) = *puVar9;
          *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(puVar9 + 1);
        }
        lVar2 = param_1[0x18a];
        *(longlong *)(lVar10 + 0x18 + lVar2) = local_c8;
        *(float *)(lVar10 + 0x20 + lVar2) = local_c0;
        lVar2 = param_1[0x18a];
        auVar6._4_4_ = fVar18 * *(float *)(lVar10 + 0x1c + lVar2) + *(float *)(lVar10 + 4 + lVar2);
        auVar6._0_4_ = fVar18 * *(float *)(lVar10 + 0x18 + lVar2) + *(float *)(lVar10 + lVar2);
        auVar6._8_4_ = fVar18 * *(float *)(lVar10 + 0x20 + lVar2) + *(float *)(lVar10 + 8 + lVar2);
        auVar6._12_4_ = 0;
        *(undefined1 (*) [16])(lVar11 + 0x10 + *plVar8) = auVar6;
        if (*(float *)(param_1 + 0x188) <= 0.0) {
          lVar2 = param_1[0x18a];
          fVar14 = *(float *)(lVar10 + 0x34 + lVar2) - param_2 * *(float *)(lVar10 + 0x30 + lVar2);
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          *(float *)(lVar10 + 0x34 + lVar2) = fVar14;
          lVar2 = param_1[0x18a];
          fVar14 = *(float *)(lVar10 + 0x34 + lVar2);
          auVar7._4_4_ = fVar14 * *(float *)(lVar10 + 0x10 + lVar2);
          auVar7._0_4_ = fVar14 * *(float *)(lVar10 + 0xc + lVar2);
          auVar7._8_4_ = fVar14 * *(float *)(lVar10 + 0x14 + lVar2);
          auVar7._12_4_ = 0;
          *(undefined1 (*) [16])(lVar11 + 0x20 + *plVar8) = auVar7;
        }
        iVar12 = iVar12 + 1;
        lVar10 = lVar10 + 0x40;
        lVar11 = lVar11 + 0x30;
      } while (iVar12 < (int)plVar8[1]);
    }
    FUN_1406292a0(param_1,1);
  }
  if (param_1[0x183] != 0) {
    FUN_142378260(param_1,param_1[0x183],fVar19);
  }
  if ((1.0 <= fVar19) && (*(undefined4 *)(param_1 + 0x186) = 0, (char)param_1[0x163] == '\0')) {
    (**(code **)(*param_1 + 0x358))(param_1,0);
  }
  return;
}



// FUNCTION 143113c90 FUN_143113c90 body=118 status=ok
// SIG undefined FUN_143113c90(void)

void FUN_143113c90(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xc30) != 0) && (0.0 < *(float *)(param_1 + 0xc20))) {
    iVar2 = 1;
    if (*(char *)(param_1 + 0xb18) != '\0') {
      iVar2 = *(int *)(param_1 + 0xb28) + 2;
    }
    if (iVar2 < param_2) {
      cVar1 = FUN_1423b47e0();
      if (cVar1 != '\0') {
        iVar2 = 0;
        if (-1 < param_2 + -1) {
          iVar2 = param_2 + -1;
        }
        FUN_143111f40(param_1,iVar2,*(undefined4 *)(param_1 + 0xc24));
      }
    }
  }
  FUN_1423bfcf0(param_1,param_2);
  return;
}



// FUNCTION 143113d10 FUN_143113d10 body=166 status=ok
// SIG undefined FUN_143113d10(void)

void FUN_143113d10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0xc48) != 0) {
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar2 = FUN_1423407b0();
      if (lVar2 == 0) goto LAB_143113da4;
    }
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    cVar1 = UWorld::IsGameWorld(lVar2);
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x120);
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      FUN_142880530(uVar3,param_1 + 0xc48);
      *(undefined8 *)(param_1 + 0xc48) = 0;
    }
  }
LAB_143113da4:
  FUN_142359510(param_1);
  return;
}



// FUNCTION 143113dc0 FUN_143113dc0 body=539 status=ok
// SIG undefined FUN_143113dc0(void)

int * FUN_143113dc0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x14);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar9 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar6 * 0x14);
  puVar2 = (uint *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  puVar1[1] = *puVar2;
  puVar1[2] = puVar2[1];
  puVar1[3] = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    if (iVar8 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x14) == *puVar1) goto LAB_143113f0d;
          iVar4 = *(int *)(*param_1 + 0xc + (longlong)iVar4 * 0x14);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_143113f0d:
    bVar9 = iVar4 != -1;
    if (bVar9) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x14),puVar1,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar4;
      goto LAB_143113fb2;
    }
  }
  cVar3 = TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar8,0);
  if (cVar3 == '\0') {
    uVar7 = (int)param_1[9] - 1U & *puVar1;
    puVar1[4] = uVar7;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar5 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_143113fb2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 143113fe0 FUN_143113fe0 body=173 status=ok
// SIG undefined FUN_143113fe0(void)

undefined8 * FUN_143113fe0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145ac5188;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x40;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x40400000;
  *(undefined4 *)(param_1 + 0x28) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x40000000;
  *(undefined4 *)(param_1 + 0x8b) = 1;
  return param_1;
}



// FUNCTION 143114090 FUN_143114090 body=122 status=ok
// SIG undefined FUN_143114090(void)

longlong FUN_143114090(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x460);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c0);
  }
  return param_1;
}



// FUNCTION 143114110 FUN_143114110 body=27 status=ok
// SIG undefined FUN_143114110(void)

void FUN_143114110(undefined8 param_1)

{
  FUN_142223710();
  FUN_143114f20(param_1);
  return;
}



// FUNCTION 143114130 FUN_143114130 body=239 status=ok
// SIG undefined FUN_143114130(void)

void FUN_143114130(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x128) != '\x03') {
    if (*(int *)(param_1 + 0x468) != *(int *)(param_1 + 0x494)) {
      lVar3 = *(longlong *)(param_1 + 0x4a0);
      if (*(longlong *)(param_1 + 0x4a0) == 0) {
        lVar3 = param_1 + 0x498;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x4a8) - 1U & (longlong)param_2) * 4);
      if (iVar2 != -1) {
        do {
          lVar3 = *(longlong *)(param_1 + 0x460) + (longlong)iVar2 * 0x14;
          if (*(int *)(*(longlong *)(param_1 + 0x460) + (longlong)iVar2 * 0x14) == param_2) {
            if (iVar2 != -1) goto LAB_1431141c3;
            break;
          }
          iVar2 = *(int *)(lVar3 + 0xc);
        } while (iVar2 != -1);
      }
    }
    lVar3 = 0;
LAB_1431141c3:
    lVar5 = lVar3 + 4;
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    if ((lVar5 != 0) && (cVar1 = FWeakObjectPtr::IsValid(lVar5), cVar1 != '\0')) {
      plVar4 = (longlong *)FWeakObjectPtr::Get(lVar5);
      (**(code **)(*plVar4 + 0xa58))(plVar4,param_3,param_4,param_5,param_6,1);
    }
  }
  return;
}



// FUNCTION 143114220 FUN_143114220 body=258 status=ok
// SIG undefined FUN_143114220(void)

void FUN_143114220(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x128) != '\x03') {
    if (*(int *)(param_1 + 0x468) != *(int *)(param_1 + 0x494)) {
      lVar3 = *(longlong *)(param_1 + 0x4a0);
      if (*(longlong *)(param_1 + 0x4a0) == 0) {
        lVar3 = param_1 + 0x498;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x4a8) - 1U & (longlong)param_2) * 4);
      if (iVar2 != -1) {
        do {
          lVar3 = *(longlong *)(param_1 + 0x460) + (longlong)iVar2 * 0x14;
          if (*(int *)(*(longlong *)(param_1 + 0x460) + (longlong)iVar2 * 0x14) == param_2) {
            if (iVar2 != -1) goto LAB_1431142b3;
            break;
          }
          iVar2 = *(int *)(lVar3 + 0xc);
        } while (iVar2 != -1);
      }
    }
    lVar3 = 0;
LAB_1431142b3:
    lVar5 = lVar3 + 4;
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    if ((lVar5 != 0) && (cVar1 = FWeakObjectPtr::IsValid(lVar5), cVar1 != '\0')) {
      plVar4 = (longlong *)FWeakObjectPtr::Get(lVar5);
      (**(code **)(*plVar4 + 0xa60))(plVar4,param_3,param_4,param_5,param_6,param_7,1);
    }
  }
  return;
}



// FUNCTION 143114330 FUN_143114330 body=120 status=ok
// SIG undefined FUN_143114330(void)

void FUN_143114330(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x4b8) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3 << 3;
    do {
      cVar2 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0x4b0) + lVar4);
      if (cVar2 != '\0') {
        uVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x4b0) + lVar4);
        FUN_142227350(uVar1,0,1);
      }
      lVar4 = lVar4 + -8;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}



// FUNCTION 1431143b0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::Empty
               (longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 143114470 FUN_143114470 body=60 status=ok
// SIG undefined FUN_143114470(void)

void FUN_143114470(longlong param_1)

{
  FUN_14222a250();
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  if (*(int *)(param_1 + 0x4bc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4b0,0);
  }
  TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::Empty
            (param_1 + 0x460,0);
  return;
}



// FUNCTION 1431144b0 FUN_1431144b0 body=382 status=ok
// SIG undefined FUN_1431144b0(void)

longlong FUN_1431144b0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = (int)param_1[5];
  local_58 = 0;
  uStack_54 = 1;
  puStack_20 = (uint *)(param_1 + 2);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puStack_20;
    }
    uVar2 = *puVar7;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_143114571;
      uVar2 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
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
    local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
    if (iVar1 < local_48._4_4_) {
LAB_143114571:
      local_48._4_4_ = iVar1;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar3 = local_48._4_4_ < iVar1;
  local_30 = param_1;
  local_48 = puStack_20;
  if (bVar3) {
    do {
      iVar1 = iStack_3c;
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                        (*param_1 + ((longlong)iStack_3c * 5 + 1) * 4,param_2);
      if (cVar4 != '\0') {
        return *param_1 + (longlong)iVar1 * 0x14;
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return 0;
}



// FUNCTION 143114630 FUN_143114630 body=32 status=ok
// SIG undefined FUN_143114630(void)

void FUN_143114630(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x458) + 1;
  if (0xffffff < uVar1) {
    uVar1 = 1;
  }
  *(uint *)(param_1 + 0x458) = uVar1;
  return;
}



// FUNCTION 143114650 FUN_143114650 body=697 status=ok
// SIG undefined FUN_143114650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143114650(longlong *param_1,longlong *param_2,wchar_t *param_3,undefined4 param_4,
                  int param_5)

{
  longlong lVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  wchar_t *pwVar10;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 *local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ushort local_96;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  if (param_2 != (longlong *)0x0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
    FActorSpawnParameters::FActorSpawnParameters(local_c0);
    local_88 = param_2[0x42];
    lStack_80 = param_2[0x43];
    pwVar10 = (wchar_t *)0x0;
    local_96 = local_96 | 4;
    local_78 = (undefined4)param_2[0x44];
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x224);
    uStack_70 = (undefined4)param_2[0x45];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x22c);
    local_68 = (undefined4)param_2[0x46];
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x234);
    uStack_60 = (undefined4)param_2[0x47];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x23c);
    pwVar7 = pwVar10;
    local_b0 = param_1;
    if (param_3 != (wchar_t *)0x0) {
      pwVar3 = (wchar_t *)FUN_1428dfc70();
      pwVar8 = param_3;
      do {
        pwVar7 = param_3;
        if (pwVar8 == pwVar3) break;
        pwVar8 = *(wchar_t **)(pwVar8 + 0x18);
        pwVar7 = pwVar10;
      } while (pwVar8 != (wchar_t *)0x0);
    }
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar5 = (longlong *)FUN_142550d00(uVar4,pwVar7,&local_88,local_c0);
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*param_2 + 0x3b0))(param_2,0);
    }
    else {
      FUN_14062c0a0(param_2,0);
      (**(code **)(*param_2 + 0x418))(param_2,&DAT_146532190);
      local_c8 = param_2[3];
      puVar6 = (undefined8 *)FName::ToString(&local_c8,&local_d8);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar6;
      }
      (**(code **)(*param_2 + 0x138))(param_2,puVar9,plVar5,0x35);
      if (local_d8 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      FUN_14223f010(plVar5,param_2);
      FWeakObjectPtr::operator=(&local_e8,plVar5);
      iVar2 = (int)param_1[0x97];
      *(int *)(param_1 + 0x97) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x4bc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x96,iVar2);
      }
      lVar1 = param_1[0x96];
      *(undefined4 *)(lVar1 + (longlong)iVar2 * 8) = local_e8;
      *(undefined4 *)(lVar1 + 4 + (longlong)iVar2 * 8) = local_e4;
      if ((param_5 != 0) && (iVar2 = FUN_142235230(param_1), iVar2 != 0)) {
        FWeakObjectPtr::operator=(&local_e0,param_2);
        local_d8 = &param_5;
        local_d0 = &local_e0;
        FUN_143113dc0(param_1 + 0x8c,&local_e8,&local_d8,0);
        pwVar7 = _guard_xfg_dispatch_icall_nop
                           (L"&AOakDestructibleFXManager::OnDestructibleDestroyed",L"::");
        while (pwVar8 = pwVar7, pwVar8 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
          pwVar10 = pwVar8;
        }
        FName::FName(&local_e0,pwVar10 + 2,1);
        TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
        ::__Internal_AddDynamic<ANgheDa>(plVar5 + 0x52,param_1,FUN_143114910,local_e0);
        (**(code **)(*param_1 + 0x600))(param_1);
      }
      (**(code **)(*plVar5 + 0x3a0))(plVar5,param_4);
      FUN_14222b9f0(plVar5,&local_88,1,0);
    }
  }
  return;
}



// FUNCTION 143114910 FUN_143114910 body=328 status=ok
// SIG undefined FUN_143114910(void)

void FUN_143114910(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 local_res8 [8];
  
  FWeakObjectPtr::operator=(local_res8);
  plVar1 = (longlong *)(param_1 + 0x4b0);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x4b8)) {
    do {
      cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                        (*plVar1 + (longlong)iVar7 * 8,local_res8);
      if (cVar3 != '\0') {
        iVar4 = *(int *)(param_1 + 0x4b8);
        iVar9 = (iVar4 - iVar7) + -1;
        if (0 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar7 * 8),
                     (void *)(*plVar1 + (longlong)(iVar4 - iVar9) * 8),(longlong)iVar9 << 3);
          iVar4 = *(int *)(param_1 + 0x4b8);
        }
        *(int *)(param_1 + 0x4b8) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        iVar7 = iVar7 + -1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x4b8));
  }
  lVar8 = *(longlong *)(param_2 + 0x168);
  if (lVar8 != 0) {
    lVar5 = FUN_143036a00();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_143114a18;
  }
  lVar8 = 0;
LAB_143114a18:
  FWeakObjectPtr::operator=(local_res8,lVar8);
  puVar6 = (undefined4 *)FUN_1431144b0(param_1 + 0x460,local_res8);
  if (puVar6 == (undefined4 *)0x0) {
    return;
  }
  TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x460,*puVar6);
  return;
}



// FUNCTION 143114a60 FUN_143114a60 body=144 status=ok
// SIG undefined FUN_143114a60(void)

void FUN_143114a60(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined1 local_res8 [8];
  
  if ((char)param_1[0x25] == '\x03') {
    FWeakObjectPtr::operator=(local_res8);
    puVar1 = (undefined4 *)FUN_1431144b0(param_1 + 0x8c,local_res8);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)(*param_1 + 0x600))(param_1);
      FUN_1431152b0(param_1,*puVar1,param_3,param_4,param_5,param_6);
    }
  }
  return;
}



// FUNCTION 143114af0 FUN_143114af0 body=164 status=ok
// SIG undefined FUN_143114af0(void)

void FUN_143114af0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  undefined1 local_res8 [8];
  
  if ((char)param_1[0x25] == '\x03') {
    FWeakObjectPtr::operator=(local_res8);
    puVar1 = (undefined4 *)FUN_1431144b0(param_1 + 0x8c,local_res8);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)(*param_1 + 0x600))(param_1);
      FUN_143115330(param_1,*puVar1,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return;
}



// FUNCTION 143114ba0 FUN_143114ba0 body=185 status=ok
// SIG undefined FUN_143114ba0(void)

void FUN_143114ba0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [24];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_1;
    *plVar2 = (longlong)&DAT_143f3ed00;
    plVar2[2] = (longlong)FUN_143114ee0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1465357b0;
    lVar3 = (longlong)DAT_1465357b0;
    DAT_1465357b0 = DAT_1465357b0 + 1;
    if (DAT_1465357b4 < DAT_1465357b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1465357a8);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  return;
}



// FUNCTION 143114c70 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
BuildPatchServices::FChunkDataSizeProvider::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 143114ce0 FUN_143114ce0 body=400 status=ok
// SIG undefined FUN_143114ce0(void)

longlong FUN_143114ce0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_48 [48];
  
  puVar3 = (undefined8 *)FName::FName(local_60,"OakDestruction",1);
  uVar7 = *puVar3;
  uVar4 = FUN_14168dc80();
  lVar5 = FUN_141690010(uVar4,uVar7);
  if (param_1 != 0) {
    cVar1 = UWorld::IsGameWorld(param_1);
    if (cVar1 != '\0') {
      FWeakObjectPtr::operator=(&local_res18,param_1);
      local_res20 = local_res18;
      TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::FindId(lVar5 + 8,local_res8,&local_res20);
      if ((local_res8[0] == -1) ||
         (lVar6 = *(longlong *)(lVar5 + 8) + (longlong)local_res8[0] * 0x18, lVar6 == 0)) {
        local_res10 = 0xffffffff;
        local_res14 = 0;
      }
      else {
        local_res10 = *(undefined4 *)(lVar6 + 8);
        local_res14 = *(undefined4 *)(lVar6 + 0xc);
      }
      lVar6 = FWeakObjectPtr::Get(&local_res10);
      if (lVar6 == 0) {
        iVar2 = FUN_1428cf800(param_1);
        if (iVar2 != 3) {
          uVar7 = FActorSpawnParameters::FActorSpawnParameters(local_48);
          uVar4 = AXGameMode::GetPrivateStaticClass();
          lVar6 = UWorld::SpawnActor(param_1,uVar4,0,0,uVar7);
          FWeakObjectPtr::operator=(local_68,lVar6);
          FWeakObjectPtr::operator=(&local_res20,param_1);
          local_58 = &local_res20;
          local_50 = local_68;
          FUN_142c60d30(lVar5 + 8,local_res8,&local_58,0);
        }
      }
      return lVar6;
    }
  }
  return 0;
}



// FUNCTION 143114e70 Create body=99 status=ok
// SIG undefined Create(void)

undefined8 * BuildPatchServices::FChunkDataSizeProviderFactory::Create(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145ac58b8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143114ee0 FUN_143114ee0 body=53 status=ok
// SIG undefined FUN_143114ee0(void)

void FUN_143114ee0(longlong param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_18 [2];
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(local_res10);
    local_18[0] = local_res10[0];
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 8,local_18);
  }
  return;
}



// FUNCTION 143114f20 FUN_143114f20 body=163 status=ok
// SIG undefined FUN_143114f20(void)

void FUN_143114f20(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 *local_28;
  undefined1 *local_20;
  
  if ((char)param_1[0x25] != '\x03') {
    puVar1 = (undefined8 *)FName::FName(local_res20,"OakDestruction",1);
    uVar4 = *puVar1;
    uVar2 = FUN_14168dc80();
    lVar3 = FUN_141690010(uVar2,uVar4);
    FWeakObjectPtr::operator=(local_res18,param_1);
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    FWeakObjectPtr::operator=(local_res10,uVar4);
    local_28 = local_res10;
    local_20 = local_res18;
    FUN_142c60d30(lVar3 + 8,local_res8,&local_28,0);
  }
  return;
}



// FUNCTION 143114ff0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMultiLineEditableTextBox::GetPrivateStaticClass(void)

{
  if (DAT_146b506d8 == 0) {
    FUN_14171ccd0(L"/Script/OakDestruction",L"CryoDestructibleComponent",&DAT_146b506d8,
                  FUN_140447710,0xc90,0x10000000,0,L"Engine",&LAB_1431150a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_143036a00,&LAB_140447700,0);
  }
  return DAT_146b506d8;
}



// FUNCTION 1431150c0 FUN_1431150c0 body=47 status=ok
// SIG undefined FUN_1431150c0(void)

longlong FUN_1431150c0(void)

{
  if (DAT_146b506d0 == 0) {
    FUN_141786440(&DAT_146b506d0,&PTR_GetPrivateStaticClass_145ac5990);
  }
  return DAT_146b506d0;
}



// FUNCTION 1431150f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AXGameMode::GetPrivateStaticClass(void)

{
  if (DAT_146b507d8 == 0) {
    FUN_14171ccd0(L"/Script/OakDestruction",L"OakDestructibleFXManager",&DAT_146b507d8,FUN_1431153b0
                  ,0x4c0,0x10000008,0,L"Engine",&LAB_1431152a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b507d8;
}



// FUNCTION 1431151a0 FUN_1431151a0 body=47 status=ok
// SIG undefined FUN_1431151a0(void)

longlong FUN_1431151a0(void)

{
  if (DAT_146b507d0 == 0) {
    FUN_141786440(&DAT_146b507d0,&PTR_GetPrivateStaticClass_145ac5f00);
  }
  return DAT_146b507d0;
}



// FUNCTION 1431151d0 FUN_1431151d0 body=47 status=ok
// SIG undefined FUN_1431151d0(void)

longlong FUN_1431151d0(void)

{
  if (DAT_146b507b0 == 0) {
    FUN_141786a30(&DAT_146b507b0,&PTR_FUN_1467bd9f0);
  }
  return DAT_146b507b0;
}



// FUNCTION 143115200 FUN_143115200 body=47 status=ok
// SIG undefined FUN_143115200(void)

longlong FUN_143115200(void)

{
  if (DAT_146b507b8 == 0) {
    FUN_141786a30(&DAT_146b507b8,&PTR_FUN_1467bdb60);
  }
  return DAT_146b507b8;
}



// FUNCTION 143115230 FUN_143115230 body=47 status=ok
// SIG undefined FUN_143115230(void)

longlong FUN_143115230(void)

{
  if (DAT_146b507c0 == 0) {
    FUN_141786a30(&DAT_146b507c0,&PTR_FUN_1467bdba0);
  }
  return DAT_146b507c0;
}



// FUNCTION 143115260 FUN_143115260 body=47 status=ok
// SIG undefined FUN_143115260(void)

longlong FUN_143115260(void)

{
  if (DAT_146b507c8 == 0) {
    FUN_141786a30(&DAT_146b507c8,&PTR_FUN_1467bdc20);
  }
  return DAT_146b507c8;
}



// FUNCTION 1431152b0 FUN_1431152b0 body=125 status=ok
// SIG undefined FUN_1431152b0(void)

void FUN_1431152b0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_28 = *(undefined4 *)(param_4 + 1);
  local_30 = *param_4;
  lVar1 = *param_1;
  local_24 = *param_5;
  local_1c = *(undefined4 *)(param_5 + 1);
  local_18 = param_6;
  local_38 = param_2;
  local_34 = param_3;
  uVar2 = FUN_14178ac60(param_6,DAT_146b50790);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_38);
  return;
}



// FUNCTION 143115330 FUN_143115330 body=121 status=ok
// SIG undefined FUN_143115330(void)

void FUN_143115330(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_20 = *param_4;
  local_18 = *(undefined4 *)(param_4 + 1);
  lVar1 = *param_1;
  local_14 = param_5;
  local_10 = param_6;
  local_c = param_7;
  local_28 = param_2;
  local_24 = param_3;
  uVar2 = FUN_14178ac60(param_5,DAT_146b50798);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 1431153b0 FUN_1431153b0 body=34 status=ok
// SIG undefined FUN_1431153b0(void)

void FUN_1431153b0(void)

{
  undefined8 uVar1;
  
  uVar1 = AXGameMode::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClientApplyDamage_145ac6090,4);
  return;
}



// FUNCTION 1431153e0 FUN_1431153e0 body=374 status=ok
// SIG undefined FUN_1431153e0(void)

void FUN_1431153e0(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x6f0))
            (param_1,local_res20[0],local_res10[0],local_28,local_38,local_res8[0]);
  return;
}



// FUNCTION 143115560 FUN_143115560 body=480 status=ok
// SIG undefined FUN_143115560(void)

void FUN_143115560(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [24];
  
  local_34 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x6e8))
            (param_1,local_34,local_38,local_30,local_res20[0],local_res10[0],local_res8[0] != 0);
  return;
}



// FUNCTION 143115740 FUN_143115740 body=128 status=ok
// SIG undefined FUN_143115740(void)

void FUN_143115740(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143114910(param_1,local_res10);
  return;
}



// FUNCTION 1431157c0 FUN_1431157c0 body=47 status=ok
// SIG undefined FUN_1431157c0(void)

longlong FUN_1431157c0(void)

{
  if (DAT_146b507e0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b507e0,&PTR_s__Script_OakDestruction_145ac60e8);
  }
  return DAT_146b507e0;
}



// FUNCTION 1431157ef _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431157ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MiniDumpWriteDump();
  return;
}



// FUNCTION 1431157f5 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431157f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  K32GetProcessMemoryInfo();
  return;
}



// FUNCTION 1431157fb _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001431157fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetAdaptersAddresses();
  return;
}



// FUNCTION 143115801 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG UINT _guard_xfg_dispatch_icall_nop(HKL param_1, LPWSTR lpszDescription, UINT uBufLen)

UINT __stdcall _guard_xfg_dispatch_icall_nop(HKL param_1,LPWSTR lpszDescription,UINT uBufLen)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = ImmGetDescriptionW(param_1,lpszDescription,uBufLen);
  return UVar1;
}



// FUNCTION 143115807 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG UINT _guard_xfg_dispatch_icall_nop(HKL param_1, LPWSTR lpszFileName, UINT uBufLen)

UINT __stdcall _guard_xfg_dispatch_icall_nop(HKL param_1,LPWSTR lpszFileName,UINT uBufLen)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = ImmGetIMEFileNameW(param_1,lpszFileName,uBufLen);
  return UVar1;
}



// FUNCTION 14311580d _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG DWORD _guard_xfg_dispatch_icall_nop(HKL param_1, DWORD param_2)

DWORD __stdcall _guard_xfg_dispatch_icall_nop(HKL param_1,DWORD param_2)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014311580d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ImmGetProperty(param_1,param_2);
  return DVar1;
}



// FUNCTION 143115813 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG HIMC _guard_xfg_dispatch_icall_nop(void)

HIMC __stdcall _guard_xfg_dispatch_icall_nop(void)

{
  HIMC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ImmCreateContext();
  return pHVar1;
}



// FUNCTION 143115819 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG BOOL _guard_xfg_dispatch_icall_nop(HIMC param_1)

BOOL __stdcall _guard_xfg_dispatch_icall_nop(HIMC param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmDestroyContext(param_1);
  return BVar1;
}



// FUNCTION 14311581f _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG HIMC _guard_xfg_dispatch_icall_nop(HWND param_1)

HIMC __stdcall _guard_xfg_dispatch_icall_nop(HWND param_1)

{
  HIMC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014311581f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ImmGetContext(param_1);
  return pHVar1;
}



// FUNCTION 143115825 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG BOOL _guard_xfg_dispatch_icall_nop(HWND param_1, HIMC param_2)

BOOL __stdcall _guard_xfg_dispatch_icall_nop(HWND param_1,HIMC param_2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143115825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImmReleaseContext(param_1,param_2);
  return BVar1;
}



// FUNCTION 14311582b _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG HIMC _guard_xfg_dispatch_icall_nop(HWND param_1, HIMC param_2)

HIMC __stdcall _guard_xfg_dispatch_icall_nop(HWND param_1,HIMC param_2)

{
  HIMC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014311582b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ImmAssociateContext(param_1,param_2);
  return pHVar1;
}


