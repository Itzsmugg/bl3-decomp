// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142b787f0 FUN_142b787f0 body=126 status=ok
// SIG undefined FUN_142b787f0(void)

void FUN_142b787f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)UGameplayTaskResource::GetPrivateStaticClass();
    plVar4 = param_2;
    do {
      if (plVar4 == plVar1) goto LAB_142b78820;
      plVar4 = (longlong *)plVar4[6];
    } while (plVar4 != (longlong *)0x0);
  }
  param_2 = (longlong *)0x0;
LAB_142b78820:
  lVar2 = param_2[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    lVar2 = param_2[0x1f];
  }
  if (((*(byte *)(lVar2 + 0x30) & 1) == 0) && (*(int *)(lVar2 + 0x28) == -1)) {
    bVar3 = *(byte *)(lVar2 + 0x2c);
  }
  else {
    bVar3 = *(byte *)(lVar2 + 0x28);
  }
  *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | (ushort)(1 << (bVar3 & 0x1f));
  return;
}



// FUNCTION 142b78870 FUN_142b78870 body=126 status=ok
// SIG undefined FUN_142b78870(void)

void FUN_142b78870(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)UGameplayTaskResource::GetPrivateStaticClass();
    plVar4 = param_2;
    do {
      if (plVar4 == plVar1) goto LAB_142b788a0;
      plVar4 = (longlong *)plVar4[6];
    } while (plVar4 != (longlong *)0x0);
  }
  param_2 = (longlong *)0x0;
LAB_142b788a0:
  lVar2 = param_2[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    lVar2 = param_2[0x1f];
  }
  if (((*(byte *)(lVar2 + 0x30) & 1) == 0) && (*(int *)(lVar2 + 0x28) == -1)) {
    bVar3 = *(byte *)(lVar2 + 0x2c);
  }
  else {
    bVar3 = *(byte *)(lVar2 + 0x28);
  }
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) | (ushort)(1 << (bVar3 & 0x1f));
  return;
}



// FUNCTION 142b788f0 FUN_142b788f0 body=139 status=ok
// SIG undefined FUN_142b788f0(void)

void FUN_142b788f0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  iVar2 = *(int *)(param_1 + 0x1b0);
  local_18 = local_18 & 0xffffff00;
  *(int *)(param_1 + 0x1b0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1b4) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1a8,iVar2);
  }
  uStack_10 = (uint)param_2;
  uStack_c = (uint)((ulonglong)param_2 >> 0x20);
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar2 * 0x10);
  *puVar1 = local_18;
  puVar1[1] = uStack_14;
  puVar1[2] = uStack_10;
  puVar1[3] = uStack_c;
  if (((*(int *)(param_1 + 0x1b0) == 1) && ((*(byte *)(param_1 + 500) & 1) == 0)) &&
     (*(int *)(param_1 + 0x1f0) == 0)) {
    FUN_142b7afe0(param_1);
  }
  return;
}



// FUNCTION 142b78980 BeginSpawningActor body=413 status=ok
// SIG undefined BeginSpawningActor(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool UGameplayTask_SpawnActor::BeginSpawningActor
               (longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_60;
  ushort local_5e;
  longlong local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (lVar2 == 0) {
    local_98 = *param_3;
    goto LAB_142b78adc;
  }
  FRotator::Quaternion(param_1 + 0x94,&local_98);
  local_58 = local_98;
  uStack_50 = uStack_90;
  local_48._12_4_ = 0;
  local_48._0_12_ = *(undefined1 (*) [12])(param_1 + 0x88);
  local_38._4_4_ = DAT_1464aa788._4_4_;
  local_38._0_4_ = (undefined4)DAT_1464aa788;
  local_38._8_4_ = DAT_1464aa790;
  local_38._12_4_ = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar3 = FUN_1428dfc70();
    lVar4 = *(longlong *)(param_1 + 0xa0);
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) goto LAB_142b78a60;
    }
  }
  lVar4 = 0;
LAB_142b78a60:
  FActorSpawnParameters::FActorSpawnParameters(local_88);
  local_5e = local_5e | 4;
  local_60 = 1;
  local_78 = 0;
  uStack_70 = 0;
  if ((lVar4 == 0) || (local_98 = FUN_142550d00(lVar2,lVar4,&local_58,local_88), local_98 == 0)) {
LAB_142b78ad2:
    local_98 = 0;
  }
  else {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(local_98 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_98 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_142b78ad2;
  }
  *param_3 = local_98;
LAB_142b78adc:
  bVar5 = local_98 != 0;
  if (!bVar5) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x78,&local_98);
  }
  return bVar5;
}



// FUNCTION 142b78b20 ClaimResource body=234 status=ok
// SIG undefined ClaimResource(void)

longlong UGameplayTask_ClaimResource::ClaimResource
                   (undefined8 param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar1 = UGameplayTaskResource::GetPrivateStaticClass();
    lVar4 = param_2;
    do {
      if (lVar4 == lVar1) {
        uVar2 = GetTransientPackage();
        FUN_1417846f0(uVar2,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar3 = GetPrivateStaticClass();
        lVar4 = FUN_1417985e0(uVar3,uVar2,0,0,0,0,0,0,0);
        if (lVar4 != 0) {
          FUN_142b79770(lVar4,param_1,param_3);
          *(undefined8 *)(lVar4 + 0x30) = param_4;
          FUN_142b787f0(lVar4,param_2);
        }
        return lVar4;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 142b78c10 ClaimResource body=247 status=ok
// SIG undefined ClaimResource(void)

longlong UGameplayTask_ClaimResource::ClaimResource
                   (longlong *param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) && (param_2 != 0)) {
    lVar2 = UGameplayTaskResource::GetPrivateStaticClass();
    lVar5 = param_2;
    do {
      if (lVar5 == lVar2) {
        uVar3 = GetTransientPackage();
        FUN_1417846f0(uVar3,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar4 = GetPrivateStaticClass();
        lVar5 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
        if (lVar5 != 0) {
          FUN_142b79770(lVar5,lVar1,param_3);
          *(undefined8 *)(lVar5 + 0x30) = param_4;
          FUN_142b787f0(lVar5,param_2);
        }
        return lVar5;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 142b78d10 ClaimResources body=269 status=ok
// SIG undefined ClaimResources(void)

longlong UGameplayTask_ClaimResource::ClaimResources
                   (longlong *param_1,longlong *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (((*param_1 == 0) || (lVar2 = param_1[1], lVar2 == 0)) || ((int)param_2[1] == 0)) {
    lVar5 = 0;
  }
  else {
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar4 = GetPrivateStaticClass();
    lVar5 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    if (lVar5 != 0) {
      FUN_142b79770(lVar5,lVar2,param_3);
      *(undefined8 *)(lVar5 + 0x30) = param_4;
      puVar6 = (undefined8 *)*param_2;
      puVar1 = puVar6 + (int)param_2[1];
      for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        FUN_142b787f0(lVar5,*puVar6);
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return lVar5;
}



// FUNCTION 142b78e20 FUN_142b78e20 body=329 status=ok
// SIG undefined FUN_142b78e20(void)

void FUN_142b78e20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x1a0)) {
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x198));
      if (lVar4 != 0) {
        if ((*(longlong *)(lVar4 + 0x50) == 0) ||
           (cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x48), cVar2 == '\0')) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)(lVar4 + 0x50);
        }
        if ((lVar4 == param_2) &&
           (plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x198)),
           *(char *)((longlong)plVar1 + 0x39) != '\x04')) {
          *(uint *)((longlong)plVar1 + 0x3c) = *(uint *)((longlong)plVar1 + 0x3c) | 0x80;
          uVar3 = *(uint *)((longlong)plVar1 + 0xc);
          if ((int)uVar3 < (int)DAT_1469e91c4) {
            uVar5 = uVar3 & 0xffff;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0xffff;
              uVar5 = uVar5 - 0x10000;
            }
            lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)uVar5 * 0x18;
          }
          else {
            lVar4 = 0;
          }
          if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
            (**(code **)(*plVar1 + 0x2b8))(plVar1,1);
          }
          else {
            *(undefined1 *)((longlong)plVar1 + 0x39) = 4;
          }
        }
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x1a0));
  }
  iVar6 = *(int *)(param_1 + 0x1f0) + -1;
  *(int *)(param_1 + 0x1f0) = iVar6;
  if (((*(int *)(param_1 + 0x1b0) != 0) && ((*(byte *)(param_1 + 500) & 1) == 0)) && (iVar6 == 0)) {
    FUN_142b7afe0(param_1);
    return;
  }
  return;
}



// FUNCTION 142b78f70 EndTask body=95 status=ok
// SIG undefined EndTask(void)

void UGameplayTask::EndTask(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b78fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2b8))(param_1,0);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x39) = 4;
  }
  return;
}



// FUNCTION 142b78fd0 FUN_142b78fd0 body=9 status=ok
// SIG undefined FUN_142b78fd0(void)

void FUN_142b78fd0(longlong *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (param_2 == '\0') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b78fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2b8))(param_1,0);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x39) = 4;
  }
  return;
}



// FUNCTION 142b78fe0 FUN_142b78fe0 body=69 status=ok
// SIG undefined FUN_142b78fe0(void)

undefined8 FUN_142b78fe0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1a0)) {
    uVar3 = uVar2;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x198) + uVar2 * 8);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_2)) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x198) + (longlong)(int)uVar3 * 8);
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x1a0));
  }
  return 0;
}



// FUNCTION 142b79030 FUN_142b79030 body=156 status=ok
// SIG undefined FUN_142b79030(void)

undefined8 FUN_142b79030(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1a0)) {
    uVar2 = uVar3;
    uVar4 = uVar3;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x198) + uVar2 * 8);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_2)) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x198) + (longlong)(int)uVar4 * 8);
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x1a0));
  }
  if (0 < *(int *)(param_1 + 0x1c0)) {
    uVar2 = uVar3;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + uVar3 * 8);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_2)) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + (longlong)(int)uVar2 * 8);
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x1c0));
  }
  return 0;
}



// FUNCTION 142b790d0 FUN_142b790d0 body=302 status=ok
// SIG undefined FUN_142b790d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b790d0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    FRotator::Quaternion((longlong)param_1 + 0x94,&local_58);
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_38._12_4_ = 0;
    local_38._0_12_ = *(undefined1 (*) [12])(param_1 + 0x11);
    local_28._4_4_ = DAT_1464aa788._4_4_;
    local_28._0_4_ = (undefined4)DAT_1464aa788;
    local_28._8_4_ = DAT_1464aa790;
    local_28._12_4_ = 0;
    FUN_14222b9f0(param_3,&local_48,0,0);
    local_58 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xd,&local_58);
  }
  if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      (**(code **)(*param_1 + 0x2b8))(param_1,0);
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x39) = 4;
    }
  }
  return;
}



// FUNCTION 142b79200 GetDebugString body=171 status=ok
// SIG undefined GetDebugString(void)

undefined8 UGameplayTask::GetDebugString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0x30,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_res8,&local_28);
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  FString::PrintfImpl(param_2,L"%s (%s)",puVar3,puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b792b0 GetDebugString body=238 status=ok
// SIG undefined GetDebugString(void)

undefined8 UGameplayTask_TimeLimitedExecution::GetDebugString(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined2 *local_28;
  undefined8 local_20;
  
  fVar1 = *(float *)((longlong)param_1 + 0x8c);
  lVar4 = (**(code **)(*param_1 + 0x148))();
  fVar2 = *(float *)(lVar4 + 0x790);
  puVar5 = (undefined2 *)param_1[0xc];
  fVar3 = *(float *)(param_1 + 0x11);
  if (puVar5 == (undefined2 *)0x0) {
    local_20 = 5;
    local_28 = puVar5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(puVar5 + 0xc);
    FName::ToString(&local_res8,&local_28);
  }
  puVar5 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar5 = local_28;
  }
  FString::PrintfImpl(param_2,L"TimeLimit for %s. Time: %.2f. TimeLeft: %.2f",puVar5,
                      (double)*(float *)(param_1 + 0x11),(double)(fVar3 - (fVar2 - fVar1)));
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b793a0 GetDebugString body=109 status=ok
// SIG undefined GetDebugString(void)

undefined8 UGameplayTask_WaitDelay::GetDebugString(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  
  fVar1 = *(float *)((longlong)param_1 + 0x7c);
  lVar2 = (**(code **)(*param_1 + 0x148))();
  FString::PrintfImpl(param_2,L"WaitDelay. Time: %.2f. TimeLeft: %.2f",
                      (double)*(float *)(param_1 + 0xf),
                      (double)(*(float *)(param_1 + 0xf) - (*(float *)(lVar2 + 0x790) - fVar1)));
  return param_2;
}



// FUNCTION 142b79410 FUN_142b79410 body=128 status=ok
// SIG undefined FUN_142b79410(void)

undefined8 FUN_142b79410(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_2 != *(longlong *)(param_1 + 0x38)) && (param_2 != param_1 + -0x28)) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x20);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142b7945a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
                        (*(longlong **)(param_1 + 0x28),param_1 + -0x28);
      return uVar2;
    }
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x30);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b79482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar3 + 0x178) + 0x20))
                      ((longlong *)(lVar3 + 0x178),param_1 + -0x28);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142b794a0 FUN_142b794a0 body=128 status=ok
// SIG undefined FUN_142b794a0(void)

undefined8 FUN_142b794a0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_2 != *(longlong *)(param_1 + 0x38)) && (param_2 != param_1 + -0x28)) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x20);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142b794ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                        (*(longlong **)(param_1 + 0x28),param_1 + -0x28);
      return uVar2;
    }
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x30);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b79512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar3 + 0x178) + 0x18))
                      ((longlong *)(lVar3 + 0x178),param_1 + -0x28);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142b79550 FUN_142b79550 body=236 status=ok
// SIG undefined FUN_142b79550(void)

void FUN_142b79550(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2b8b0) && (_Init_thread_header(&DAT_146b2b8b0), DAT_146b2b8b0 == -1))
  {
    uVar1 = UEnvQueryTest_Cover::StaticClass();
    UEnvQueryTest_Cover::StaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SimulatedTasks",1);
    DAT_146b2b8a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b2b8b0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b2b8a8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b2b8a8 + 0x40) + (short)iVar3;
      local_14 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b2b8a8 + 0x30));
  }
  return;
}



// FUNCTION 142b79640 FUN_142b79640 body=90 status=ok
// SIG undefined FUN_142b79640(void)

void FUN_142b79640(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    cVar1 = FWeakObjectPtr::IsValid();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142b7966c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(longlong **)(param_1 + 0x50),param_1);
      return;
    }
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b79690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar2 + 0x178) + 0x18))((longlong *)(lVar2 + 0x178),param_1);
    return;
  }
  return;
}



// FUNCTION 142b796b0 FUN_142b796b0 body=47 status=ok
// SIG undefined FUN_142b796b0(void)

void FUN_142b796b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x58);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x120) == 0)) {
    FUN_1423407b0(lVar1);
    return;
  }
  return;
}



// FUNCTION 142b796e0 FUN_142b796e0 body=104 status=ok
// SIG undefined FUN_142b796e0(void)

ulonglong FUN_142b796e0(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1d0)) {
    plVar3 = *(longlong **)(param_1 + 0x1c8);
    do {
      in_RAX = 0;
      if (*plVar3 != 0) {
        uVar1 = *(ulonglong *)(*plVar3 + 0x10);
        if ((*(int *)(uVar1 + 0x90) < *(int *)(param_2 + 0x90)) ||
           (uVar1 = *(ulonglong *)(uVar1 + 0x88),
           *(longlong *)(uVar1 + (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
          in_RAX = uVar1 & 0xffffffffffffff00;
        }
        else {
          in_RAX = CONCAT71((int7)(uVar1 >> 8),1);
        }
        if ((char)in_RAX != '\0') {
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
      }
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x1d0));
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142b79750 InitSimulatedTask body=28 status=ok
// SIG undefined InitSimulatedTask(void)

void UGameplayTask::InitSimulatedTask(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x58);
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 4;
  return;
}



// FUNCTION 142b79770 FUN_142b79770 body=297 status=ok
// SIG undefined FUN_142b79770(void)

void FUN_142b79770(longlong param_1,longlong *param_2,undefined1 param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_18;
  undefined4 local_14;
  longlong *local_10;
  
  *(undefined1 *)(param_1 + 0x38) = param_3;
  local_18 = 0xffffffff;
  local_14 = 0;
  lVar5 = 0;
  local_10 = param_2;
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 8))(param_2);
    lVar4 = UObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = lVar3;
    }
  }
  FWeakObjectPtr::operator=(&local_18,lVar5);
  *(undefined4 *)(param_1 + 0x48) = local_18;
  *(undefined4 *)(param_1 + 0x4c) = local_14;
  *(longlong **)(param_1 + 0x50) = local_10;
  *(undefined1 *)(param_1 + 0x39) = 1;
  if ((*(byte *)(param_1 + 0x3c) & 0x40) != 0) {
    *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | *(ushort *)(param_1 + 0x40);
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1);
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,param_1);
  FWeakObjectPtr::operator=(param_1 + 0x58,lVar5);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x48);
  uVar1 = 0;
  if (lVar5 == lVar3) {
    uVar1 = 0x20;
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffdf | uVar1;
  if ((lVar5 != 0) && (uVar1 == 0)) {
    (**(code **)(*(longlong *)(lVar5 + 0x178) + 0x30))((longlong *)(lVar5 + 0x178),param_1);
  }
  return;
}



// FUNCTION 142b798a0 FUN_142b798a0 body=3692 status=ok
// SIG undefined FUN_142b798a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_142b798a0(longlong *param_1,longlong param_2,undefined1 param_3,longlong *param_4,
                  longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  byte bVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_458 [32];
  longlong *local_438;
  longlong local_430 [3];
  undefined4 *local_418;
  undefined4 *puStack_410;
  undefined4 *local_408;
  ulonglong *puStack_400;
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  undefined4 *local_3d8;
  undefined4 *puStack_3d0;
  undefined1 local_3c8 [8];
  longlong local_3c0;
  undefined1 local_3b8 [8];
  undefined8 local_3b0;
  longlong *local_3a8;
  undefined8 local_3a0;
  longlong local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 local_380;
  longlong local_378;
  undefined1 local_370 [16];
  undefined1 local_360 [8];
  longlong *local_358;
  undefined4 *local_348;
  undefined4 *puStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [8];
  longlong *local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined1 local_2a0 [8];
  longlong *local_298;
  undefined1 local_288 [8];
  longlong *local_280;
  undefined1 local_270 [8];
  longlong *local_268;
  undefined1 local_258 [8];
  longlong *local_250;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [40];
  undefined1 local_170 [40];
  undefined1 local_148 [40];
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_458;
  plVar16 = (longlong *)0x0;
  local_430[2] = local_430[2] & 0xffffffff00000000;
  local_430[0] = 0;
  local_430[1] = 5;
  local_3a8 = param_5;
  local_438 = param_4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_430,0);
  FGenericPlatformString::Memcpy(local_430[0],L"None",10);
  FText::FromString(local_3f8,local_430);
  if (local_430[0] != 0) {
    FMemory::Free();
  }
  if ((*param_1 == 0) || (plVar5 = (longlong *)param_1[1], plVar5 == (longlong *)0x0)) {
    bVar17 = param_2 == 0;
    if (bVar17) {
      uVar7 = FText::FText(local_1f8,local_3f8);
    }
    else {
      local_3b0 = *(undefined8 *)(param_2 + 0x18);
      uVar7 = FText::FromName(local_1e0,&local_3b0);
    }
    FName::FName(&local_3d8,&DAT_1457c6458,1);
    lVar6 = FText::FText(local_f0,uVar7);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_210,L"Tried running a gameplay task {0} while owner is None!",
                       L"GameplayTasksComponent",L"RunGameplayTaskNullOwner");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_1c8,uVar7);
    local_78[0] = 4;
    FText::FText(local_68,lVar6);
    local_380 = *puVar8;
    local_408 = local_78;
    puStack_400 = local_48;
    local_378 = puVar8[1];
    local_50 = '\x01';
    if (local_378 != 0) {
      LOCK();
      *(int *)(local_378 + 8) = *(int *)(local_378 + 8) + 1;
      UNLOCK();
    }
    local_318 = local_408;
    uStack_310 = puStack_400;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_308,&local_318);
    uVar7 = FText::Format(local_228,&local_380,uVar7);
    FText::FText(local_2a0,uVar7);
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_220 + 1;
      lVar3 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar1 = (int *)((longlong)local_220 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_220 + 8))(local_220,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_308);
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      LOCK();
      plVar16 = local_60 + 1;
      lVar3 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
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
    plVar16 = (longlong *)puVar8[1];
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar16 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
    plVar16 = *(longlong **)(lVar6 + 8);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar16 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
    uVar7 = FUN_14161fb50(local_148,&local_3d8);
    FMessageLog::Error(uVar7,local_2f8,local_2a0);
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_2f0 + 1;
      lVar6 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_2f0 + 8))(local_2f0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_148);
    if (local_298 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_298 + 1;
      lVar6 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_298)(local_298);
        LOCK();
        piVar1 = (int *)((longlong)local_298 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_298 + 8))(local_298,1);
        }
      }
    }
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_208 + 1;
      lVar6 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar1 = (int *)((longlong)local_208 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_208 + 8))(local_208,1);
        }
      }
    }
    if ((bVar17) && (local_1f0 != (longlong *)0x0)) {
      LOCK();
      plVar16 = local_1f0 + 1;
      lVar6 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)local_1f0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,(undefined4)local_2c8);
    uStack_2c0 = (undefined4 *)CONCAT44(uStack_2c0._4_4_,(undefined4)uStack_2c0);
    if ((!bVar17) &&
       (local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,(undefined4)local_2c8),
       uStack_2c0 = (undefined4 *)CONCAT44(uStack_2c0._4_4_,(undefined4)uStack_2c0),
       local_1d8 != (longlong *)0x0)) {
      LOCK();
      plVar16 = local_1d8 + 1;
      lVar6 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      local_2c8 = (undefined4 *)CONCAT44(local_2c8._4_4_,(undefined4)local_2c8);
      uStack_2c0 = (undefined4 *)CONCAT44(uStack_2c0._4_4_,(undefined4)uStack_2c0);
      if ((int)lVar6 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar1 = (int *)((longlong)local_1d8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1d8 + 8))(local_1d8,1);
        }
      }
    }
  }
  else {
    if (param_2 != 0) {
      cVar4 = *(char *)(param_2 + 0x39);
      if ((cVar4 == '\x02') || (cVar4 == '\x03')) {
        FName::FName(local_3b8,&DAT_1457c69c4,1);
        plVar15 = plVar16;
        if (plVar5 != (longlong *)0x0) {
          plVar10 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5);
          lVar6 = UObject::GetPrivateStaticClass();
          if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
          }
          if (bVar17) {
            plVar15 = plVar10;
          }
        }
        local_3c0 = plVar15[3];
        FName::ToString(&local_3c0,&local_408);
        lVar6 = FText::FromString(local_108,&local_408);
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_240,L"Tried running a None task for {0}",L"GameplayTasksComponent",
                           L"RunNullGameplayTask");
        puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_1a8,uVar7);
        local_a8[0] = 4;
        FText::FText(local_98,lVar6);
        local_390 = *puVar8;
        local_418 = local_a8;
        puStack_410 = local_78;
        local_388 = puVar8[1];
        local_80 = '\x01';
        if (local_388 != 0) {
          LOCK();
          *(int *)(local_388 + 8) = *(int *)(local_388 + 8) + 1;
          UNLOCK();
        }
        local_348 = local_418;
        puStack_340 = puStack_410;
        uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_338,&local_348);
        uVar7 = FText::Format(local_258,&local_390,uVar7);
        FText::FText(local_2e8,uVar7);
        if (local_250 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_250 + 1;
          lVar3 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_250)(local_250);
            LOCK();
            piVar1 = (int *)((longlong)local_250 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_250 + 8))(local_250,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_338);
        if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_90 + 1;
          lVar3 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
        }
        plVar15 = (longlong *)puVar8[1];
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar15 + 1;
          lVar3 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        plVar15 = *(longlong **)(lVar6 + 8);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar15 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        uVar7 = FUN_14161fb50(local_170,local_3b8);
        FMessageLog::Warning(uVar7,local_328,local_2e8);
        if (local_320 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_320 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_320)(local_320);
            LOCK();
            piVar1 = (int *)((longlong)local_320 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_320 + 8))(local_320,1);
            }
          }
        }
        FMessageLog::~FMessageLog(local_170);
        if (local_2e0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_2e0 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_2e0)(local_2e0);
            LOCK();
            piVar1 = (int *)((longlong)local_2e0 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_2e0 + 8))(local_2e0,1);
            }
          }
        }
        if (local_238 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_238 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_238)(local_238);
            LOCK();
            piVar1 = (int *)((longlong)local_238 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_238 + 8))(local_238,1);
            }
          }
        }
        if (local_408 != (undefined4 *)0x0) {
          FMemory::Free();
        }
        if (*(longlong *)(param_2 + 0x50) != 0) {
          cVar4 = FWeakObjectPtr::IsValid(param_2 + 0x48);
          if (cVar4 != '\0') {
            bVar17 = true;
            goto LAB_142b7a298;
          }
        }
        bVar17 = false;
LAB_142b7a298:
        if (bVar17) {
          plVar16 = *(longlong **)(param_2 + 0x50);
        }
        if (plVar16 == plVar5) {
          cVar4 = (*(char *)(param_2 + 0x39) != '\x02') + '\x02';
        }
        else {
          cVar4 = '\0';
        }
        if (local_3f0 != (longlong *)0x0) {
          LOCK();
          plVar16 = local_3f0 + 1;
          lVar6 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_3f0)(local_3f0);
            LOCK();
            piVar1 = (int *)((longlong)local_3f0 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_3f0 + 8))(local_3f0,1);
            }
          }
        }
        if (*local_438 != 0) {
          FMemory::Free();
        }
        if (*local_3a8 == 0) {
          return cVar4;
        }
        FMemory::Free();
        return cVar4;
      }
      if (cVar4 == '\0') {
        FUN_142b79770(param_2,plVar5,param_3);
      }
      puVar8 = (undefined8 *)*param_4;
      plVar5 = (longlong *)((longlong)(int)param_4[1] & 0x1fffffffffffffff);
      if (puVar8 + (int)param_4[1] < puVar8) {
        plVar5 = plVar16;
      }
      plVar15 = plVar16;
      if (plVar5 != (longlong *)0x0) {
LAB_142b79cf0:
        plVar10 = (longlong *)*puVar8;
        if (plVar10 != (longlong *)0x0) {
          plVar9 = (longlong *)UGameplayTaskResource::GetPrivateStaticClass();
          plVar11 = plVar10;
          do {
            if (plVar11 == plVar9) {
              plVar9 = (longlong *)UGameplayTaskResource::GetPrivateStaticClass();
              plVar11 = plVar10;
              goto LAB_142b79d18;
            }
            plVar11 = (longlong *)plVar11[6];
          } while (plVar11 != (longlong *)0x0);
        }
        goto LAB_142b79d6c;
      }
LAB_142b79d7c:
      puVar8 = (undefined8 *)*param_5;
      plVar5 = (longlong *)((longlong)(int)param_5[1] & 0x1fffffffffffffff);
      if (puVar8 + (int)param_5[1] < puVar8) {
        plVar5 = plVar16;
      }
      plVar15 = plVar16;
      if (plVar5 != (longlong *)0x0) {
LAB_142b79da7:
        plVar10 = (longlong *)*puVar8;
        if (plVar10 != (longlong *)0x0) {
          plVar9 = (longlong *)UGameplayTaskResource::GetPrivateStaticClass();
          plVar11 = plVar10;
          do {
            if (plVar11 == plVar9) {
              plVar9 = (longlong *)UGameplayTaskResource::GetPrivateStaticClass();
              plVar11 = plVar10;
              goto LAB_142b79dd0;
            }
            plVar11 = (longlong *)plVar11[6];
          } while (plVar11 != (longlong *)0x0);
        }
        goto LAB_142b79e23;
      }
LAB_142b79e33:
      FUN_142b7b2b0(param_2);
      bVar12 = *(byte *)(param_2 + 0x39);
      if (bVar12 != 0) {
        if (bVar12 < 3) {
          if (local_3f0 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_3f0 + 1;
            lVar6 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_3f0)(local_3f0);
              LOCK();
              piVar1 = (int *)((longlong)local_3f0 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_3f0 + 8))(local_3f0,1);
              }
            }
          }
          if (*local_438 != 0) {
            FMemory::Free();
          }
          if (*param_5 != 0) {
            FMemory::Free();
          }
          return '\x02';
        }
        if ((bVar12 == 3) || (bVar12 == 4)) {
          if (local_3f0 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_3f0 + 1;
            lVar6 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_3f0)(local_3f0);
              LOCK();
              piVar1 = (int *)((longlong)local_3f0 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_3f0 + 8))(local_3f0,1);
              }
            }
          }
          if (*local_438 != 0) {
            FMemory::Free();
          }
          if (*param_5 != 0) {
            FMemory::Free();
          }
          return '\x03';
        }
      }
      if (local_3f0 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_3f0 + 1;
        lVar6 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_3f0)(local_3f0);
          LOCK();
          piVar1 = (int *)((longlong)local_3f0 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_3f0 + 8))(local_3f0,1);
          }
        }
      }
      lVar6 = *local_438;
      goto LAB_142b7a6c8;
    }
    FName::FName(local_3c8,&DAT_1457c67e8,1);
    if (plVar5 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5);
      lVar6 = UObject::GetPrivateStaticClass();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) {
        plVar16 = plVar5;
      }
    }
    local_430[2] = plVar16[3];
    FName::ToString(local_430 + 2,&local_418);
    lVar6 = FText::FromString(local_120,&local_418);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_270,L"Tried running a None task for {0}",L"GameplayTasksComponent",
                       L"RunNullGameplayTask");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_1b8,uVar7);
    local_d8[0] = 4;
    FText::FText(local_c8,lVar6);
    local_3a0 = *puVar8;
    local_3d8 = local_d8;
    puStack_3d0 = local_a8;
    local_398 = puVar8[1];
    local_b0 = '\x01';
    if (local_398 != 0) {
      LOCK();
      *(int *)(local_398 + 8) = *(int *)(local_398 + 8) + 1;
      UNLOCK();
    }
    local_2c8 = local_3d8;
    uStack_2c0 = puStack_3d0;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_370,&local_2c8);
    uVar7 = FText::Format(local_288,&local_3a0,uVar7);
    FText::FText(local_2b8,uVar7);
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_280 + 1;
      lVar3 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar1 = (int *)((longlong)local_280 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_280 + 8))(local_280,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_370);
    if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
      LOCK();
      plVar16 = local_c0 + 1;
      lVar3 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    plVar16 = (longlong *)puVar8[1];
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar16 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
    plVar16 = *(longlong **)(lVar6 + 8);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar16 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
    uVar7 = FUN_14161fb50(local_198,local_3c8);
    FMessageLog::Error(uVar7,local_360,local_2b8);
    if (local_358 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_358 + 1;
      lVar6 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_358)(local_358);
        LOCK();
        piVar1 = (int *)((longlong)local_358 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_358 + 8))(local_358,1);
        }
      }
    }
    FMessageLog::~FMessageLog(local_198);
    if (local_2b0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_2b0 + 1;
      lVar6 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_2b0)(local_2b0);
        LOCK();
        piVar1 = (int *)((longlong)local_2b0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_2b0 + 8))(local_2b0,1);
        }
      }
    }
    if (local_268 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_268 + 1;
      lVar6 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_268)(local_268);
        LOCK();
        piVar1 = (int *)((longlong)local_268 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_268 + 8))(local_268,1);
        }
      }
    }
    if (local_418 != (undefined4 *)0x0) {
      FMemory::Free();
    }
  }
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_3f0 + 1;
    lVar6 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_3f0)(local_3f0);
      LOCK();
      piVar1 = (int *)((longlong)local_3f0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_3f0 + 8))(local_3f0,1);
      }
    }
  }
  lVar6 = *param_4;
LAB_142b7a6c8:
  if (lVar6 != 0) {
    FMemory::Free();
  }
  if (*param_5 != 0) {
    FMemory::Free();
  }
  return '\0';
  while (plVar11 = (longlong *)plVar11[6], plVar14 = plVar16, plVar11 != (longlong *)0x0) {
LAB_142b79d18:
    plVar14 = plVar10;
    if (plVar11 == plVar9) break;
  }
  lVar6 = plVar14[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar14 + 0x368))(plVar14);
    lVar6 = plVar14[0x1f];
  }
  if (((*(byte *)(lVar6 + 0x30) & 1) == 0) && (*(int *)(lVar6 + 0x28) == -1)) {
    bVar12 = *(byte *)(lVar6 + 0x2c);
  }
  else {
    bVar12 = *(byte *)(lVar6 + 0x28);
  }
  *(ushort *)(param_2 + 0x40) = *(ushort *)(param_2 + 0x40) | (ushort)(1 << (bVar12 & 0x1f));
LAB_142b79d6c:
  puVar8 = puVar8 + 1;
  plVar15 = (longlong *)((longlong)plVar15 + 1);
  if (plVar15 == plVar5) goto LAB_142b79d7c;
  goto LAB_142b79cf0;
  while (plVar11 = (longlong *)plVar11[6], plVar14 = plVar16, plVar11 != (longlong *)0x0) {
LAB_142b79dd0:
    plVar14 = plVar10;
    if (plVar11 == plVar9) break;
  }
  lVar6 = plVar14[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar14 + 0x368))(plVar14);
    lVar6 = plVar14[0x1f];
  }
  if (((*(byte *)(lVar6 + 0x30) & 1) == 0) && (*(int *)(lVar6 + 0x28) == -1)) {
    uVar13 = (uint)*(char *)(lVar6 + 0x2c);
  }
  else {
    uVar13 = *(uint *)(lVar6 + 0x28);
  }
  *(ushort *)(param_2 + 0x42) = *(ushort *)(param_2 + 0x42) | (ushort)(1 << (uVar13 & 0x1f));
LAB_142b79e23:
  puVar8 = puVar8 + 1;
  plVar15 = (longlong *)((longlong)plVar15 + 1);
  if (plVar15 == plVar5) goto LAB_142b79e33;
  goto LAB_142b79da7;
}



// FUNCTION 142b7a710 FUN_142b7a710 body=119 status=ok
// SIG undefined FUN_142b7a710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7a710(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  *(undefined1 *)(param_1 + 0x39) = 4;
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(lVar4 + 0x178) + 0x40))((longlong *)(lVar4 + 0x178),param_1);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar5 = iVar2 >> 0x1f & 0xffff;
    uVar3 = iVar2 + uVar5;
    puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) + 8 +
                     (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18);
    *puVar1 = *puVar1 | 0x20000000;
    return;
  }
  _DAT_00000008 = _DAT_00000008 | 0x20000000;
  return;
}



// FUNCTION 142b7a7a0 FUN_142b7a7a0 body=353 status=ok
// SIG undefined FUN_142b7a7a0(void)

void FUN_142b7a7a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + -0x178);
  if (plVar1 != (longlong *)0x0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  }
  iVar4 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = iVar4 + 1;
  if (*(int *)(param_1 + 0x5c) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x50,iVar4);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 8) = param_2;
  if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar4 + 1;
    if (*(int *)(param_1 + 0x4c) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x40,iVar4);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar4 * 8) = param_2;
    if (*(int *)(param_1 + 0x48) == 1) {
      bVar2 = (**(code **)(*plVar1 + 0x3f8))(plVar1);
      if ((*(byte *)(param_1 + -0xbe) >> 2 & 1) != bVar2) {
        (**(code **)(*plVar1 + 0x290))(plVar1,bVar2,0);
      }
    }
  }
  if ((*(uint *)(param_2 + 0x3c) >> 1 & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar4 + 1;
    if (*(int *)(param_1 + 0x1c) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar4);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 8) = param_2;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    cVar3 = FWeakObjectPtr::IsValid();
    if (cVar3 != '\0') {
      plVar5 = *(longlong **)(param_2 + 0x50);
      goto LAB_142b7a89d;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_142b7a89d:
  if (((*(uint *)(param_2 + 0x3c) >> 5 & 1) == 0) && (plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x38))(plVar5,param_2);
  }
  if (plVar1 != (longlong *)0x0) {
    iVar4 = *(int *)(param_1 + 0x78) + -1;
    *(int *)(param_1 + 0x78) = iVar4;
    if (((*(int *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0x7c) & 1) == 0)) && (iVar4 == 0))
    {
      FUN_142b7afe0(plVar1);
    }
  }
  return;
}



// FUNCTION 142b7a930 OnGameplayTaskDeactivated body=82 status=ok
// SIG undefined OnGameplayTaskDeactivated(void)

void UGameplayTask_TimeLimitedExecution::OnGameplayTaskDeactivated
               (longlong param_1,longlong param_2)

{
  uint uVar1;
  
  if (param_2 == *(longlong *)(param_1 + 0x38)) {
    if (*(char *)(param_2 + 0x39) != '\x04') {
      return;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(char *)(param_2 + 0x39) != '\x04') {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if ((uVar1 & 3) == 0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x40,0);
    uVar1 = *(uint *)(param_1 + 0x68);
  }
  *(uint *)(param_1 + 0x68) = uVar1 | 2;
  UGameplayTask::EndTask(param_1 + -0x28);
  return;
}



// FUNCTION 142b7a990 FUN_142b7a990 body=831 status=ok
// SIG undefined FUN_142b7a990(void)

void FUN_142b7a990(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 != 0x178) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  }
  cVar3 = *(char *)(param_2 + 0x39);
  if ((*(longlong *)(param_2 + 0x60) != 0) && (cVar3 == '\x04')) {
    if ((*(uint *)(param_2 + 0x3c) >> 7 & 1) == 0) {
      UGameplayTask::EndTask();
    }
    else {
      UGameplayTask::TaskOwnerEnded();
    }
  }
  if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x40);
    iVar6 = *(int *)(param_1 + 0x48);
    for (plVar8 = plVar11; plVar8 != plVar11 + iVar6; plVar8 = plVar8 + 1) {
      if (*plVar8 == param_2) {
        iVar9 = (int)((longlong)plVar8 - (longlong)plVar11 >> 3);
        if (iVar9 != -1) {
          iVar5 = (iVar6 - iVar9) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar11 + iVar9,plVar11 + (iVar6 - iVar5),(longlong)iVar5 << 3);
            iVar6 = *(int *)(param_1 + 0x48);
          }
          *(int *)(param_1 + 0x48) = iVar6 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x40);
        }
        break;
      }
    }
  }
  plVar11 = (longlong *)0x0;
  if ((cVar3 == '\x04') && (iVar6 = *(int *)(param_1 + 0x58), 0 < iVar6)) {
    plVar8 = plVar11;
    plVar10 = plVar11;
    do {
      iVar9 = (int)plVar10;
      lVar2 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(lVar2 + (longlong)plVar8) == param_2) {
        iVar5 = (iVar6 - iVar9) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + (longlong)iVar9 * 8),
                     (void *)(lVar2 + (longlong)(iVar6 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar6 = *(int *)(param_1 + 0x58);
        }
        *(int *)(param_1 + 0x58) = iVar6 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x50);
        iVar6 = *(int *)(param_1 + 0x58);
        iVar9 = iVar9 + -1;
        plVar8 = plVar8 + -1;
      }
      plVar10 = (longlong *)(ulonglong)(iVar9 + 1U);
      plVar8 = plVar8 + 1;
    } while ((int)(iVar9 + 1U) < iVar6);
  }
  plVar8 = (longlong *)(param_1 + -0x178);
  if ((*(uint *)(param_2 + 0x3c) >> 1 & 1) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x10);
    iVar6 = *(int *)(param_1 + 0x18);
    for (plVar7 = plVar10; plVar7 != plVar10 + iVar6; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_2) {
        iVar9 = (int)((longlong)plVar7 - (longlong)plVar10 >> 3);
        if (iVar9 != -1) {
          iVar5 = (iVar6 - iVar9) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar10 + iVar9,plVar10 + (iVar6 - iVar5),(longlong)iVar5 << 3);
            iVar6 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar6 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
        }
        break;
      }
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if (((((*(byte *)(param_2 + 0x3c) & 0x10) != 0) || (*(short *)(param_2 + 0x40) != 0)) ||
      (*(short *)(param_2 + 0x42) != 0)) && (cVar3 == '\x04')) {
    iVar6 = *(int *)(param_1 + 0x38);
    local_38 = CONCAT31(local_38._1_3_,1);
    *(int *)(param_1 + 0x38) = iVar6 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x30,iVar6);
    }
    uStack_30 = (undefined4)param_2;
    uStack_2c = (undefined4)((ulonglong)param_2 >> 0x20);
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar6 * 0x10);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if (((*(int *)(param_1 + 0x38) == 1) && ((*(byte *)(param_1 + 0x7c) & 1) == 0)) &&
       (*(int *)(param_1 + 0x78) == 0)) {
      FUN_142b7afe0(plVar8);
    }
  }
  if ((*(longlong *)(param_2 + 0x50) != 0) && (cVar3 = FWeakObjectPtr::IsValid(), cVar3 != '\0')) {
    plVar11 = *(longlong **)(param_2 + 0x50);
  }
  if (((*(byte *)(param_2 + 0x3c) & 0xa0) == 0) && (plVar11 != (longlong *)0x0)) {
    (**(code **)(*plVar11 + 0x40))(plVar11,param_2);
  }
  bVar4 = (**(code **)(*plVar8 + 0x3f8))(plVar8);
  if ((*(byte *)(param_1 + -0xbe) >> 2 & 1) != bVar4) {
    (**(code **)(*plVar8 + 0x290))(plVar8,bVar4,0);
  }
  if (plVar8 != (longlong *)0x0) {
    iVar6 = *(int *)(param_1 + 0x78) + -1;
    *(int *)(param_1 + 0x78) = iVar6;
    if (((*(int *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0x7c) & 1) == 0)) && (iVar6 == 0))
    {
      FUN_142b7afe0(plVar8);
      return;
    }
  }
  return;
}



// FUNCTION 142b7acd0 OnGameplayTaskInitialized body=45 status=ok
// SIG undefined OnGameplayTaskInitialized(void)

void UGameplayTask::OnGameplayTaskInitialized(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    EndTask();
  }
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 142b7ad00 FUN_142b7ad00 body=293 status=ok
// SIG undefined FUN_142b7ad00(void)

void FUN_142b7ad00(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  plVar8 = (longlong *)param_1[0x31];
  uVar7 = (longlong)(int)param_1[0x32] & 0x1fffffffffffffff;
  if (plVar8 + (int)param_1[0x32] < plVar8) {
    uVar7 = uVar9;
  }
  if (uVar7 != 0) {
    do {
      plVar4 = (longlong *)*plVar8;
      if ((plVar4 != (longlong *)0x0) && ((*(byte *)((longlong)plVar4 + 0x3c) & 1) != 0)) {
        plVar1 = param_1 + 0x37;
        plVar6 = (longlong *)*plVar1;
        plVar2 = plVar6 + (int)param_1[0x38];
        for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
          if ((longlong *)*plVar6 == plVar4) goto LAB_142b7adf6;
        }
        (**(code **)(*plVar4 + 0x280))(plVar4,param_1);
        if (((int)param_1[0x38] == 0) &&
           (bVar5 = (**(code **)(*param_1 + 0x3f8))(param_1),
           (*(byte *)((longlong)param_1 + 0xba) >> 2 & 1) != bVar5)) {
          (**(code **)(*param_1 + 0x290))(param_1,bVar5,0);
        }
        iVar3 = (int)param_1[0x38];
        *(int *)(param_1 + 0x38) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x1c4) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        *(longlong **)(*plVar1 + (longlong)iVar3 * 8) = plVar4;
      }
LAB_142b7adf6:
      plVar8 = plVar8 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar7);
  }
  return;
}



// FUNCTION 142b7ae30 OnTimeFinish body=121 status=ok
// SIG undefined OnTimeFinish(void)

void UGameplayTask_WaitDelay::OnTimeFinish(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xd,0);
  if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b7ae98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2b8))(param_1,0);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x39) = 4;
  }
  return;
}



// FUNCTION 142b7aeb0 FUN_142b7aeb0 body=146 status=ok
// SIG undefined FUN_142b7aeb0(void)

void FUN_142b7aeb0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x12);
  if ((uVar2 & 3) == 0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xf,0);
    uVar2 = *(uint *)(param_1 + 0x12);
  }
  *(uint *)(param_1 + 0x12) = uVar2 | 1;
  if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b7af31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2b8))(param_1,0);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x39) = 4;
  }
  return;
}



// FUNCTION 142b7af50 FUN_142b7af50 body=44 status=ok
// SIG undefined FUN_142b7af50(void)

void FUN_142b7af50(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x39) = 2;
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000142b7af78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar1 + 0x178) + 0x40))((longlong *)(lVar1 + 0x178),param_1);
  return;
}



// FUNCTION 142b7af80 PostInitProperties body=81 status=ok
// SIG undefined PostInitProperties(void)

void UGameplayTaskResource::PostInitProperties(longlong param_1)

{
  FUN_1417931d0();
  if (((((*(uint *)(param_1 + 8) >> 4 & 1) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xb4) & 1) == 0)) &&
      (((*(byte *)(param_1 + 0x30) & 1) == 0 || (*(int *)(param_1 + 0x28) == -1)))) &&
     (*(char *)(param_1 + 0x2c) == -1)) {
    *(char *)(param_1 + 0x2c) = (char)DAT_146b2b8a0;
    DAT_146b2b8a0 = DAT_146b2b8a0 + 1;
  }
  return;
}



// FUNCTION 142b7afe0 FUN_142b7afe0 body=714 status=ok
// SIG undefined FUN_142b7afe0(void)

void FUN_142b7afe0(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 1;
  iVar10 = 0;
  iVar13 = *(int *)(param_1 + 0x1b0);
  if (0 < iVar13) {
    plVar1 = (longlong *)(param_1 + 0x198);
    do {
      iVar10 = iVar10 + 1;
      if (0x10 < iVar10) {
        *(undefined4 *)(param_1 + 0x1b0) = 0;
        if ((*(int *)(param_1 + 0x1b4) < 0) && (*(int *)(param_1 + 0x1b4) != 0)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1a8,0);
        }
        break;
      }
      iVar15 = 0;
      if (0 < iVar13) {
        lVar16 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 8 + lVar16);
          uVar7 = *(uint *)(lVar4 + 0xc);
          if ((int)uVar7 < (int)DAT_1469e91c4) {
            uVar12 = uVar7 & 0xffff;
            if ((int)uVar7 < 0) {
              uVar7 = uVar7 + 0xffff;
              uVar12 = uVar12 - 0x10000;
            }
            lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                     (longlong)(int)uVar12 * 0x18;
          }
          else {
            lVar14 = 0;
          }
          if ((*(uint *)(lVar14 + 8) >> 0x1d & 1) == 0) {
            cVar2 = *(char *)(*(longlong *)(param_1 + 0x1a8) + lVar16);
            if (cVar2 == '\0') {
              if (*(char *)(lVar4 + 0x39) != '\x04') {
                iVar13 = 0;
                lVar14 = 0;
                if (0 < *(int *)(param_1 + 0x1a0)) {
                  do {
                    lVar6 = *(longlong *)(*plVar1 + lVar14 * 8);
                    if (lVar6 != 0) {
                      bVar3 = *(byte *)(lVar6 + 0x38);
                      if (*(char *)(lVar4 + 0x3a) == '\0') {
                        if (bVar3 <= *(byte *)(lVar4 + 0x38)) {
LAB_142b7b186:
                          iVar8 = *(int *)(param_1 + 0x1a0);
                          *(int *)(param_1 + 0x1a0) = iVar8 + 1;
                          if (*(int *)(param_1 + 0x1a4) < iVar8 + 1) {
                            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                      (plVar1,iVar8);
                          }
                          _Src = (void *)(*plVar1 + (longlong)iVar13 * 8);
                          _guard_xfg_dispatch_icall_nop
                                    ((void *)((longlong)_Src + 8),_Src,
                                     (longlong)(iVar8 - iVar13) << 3);
                          *(longlong *)(*plVar1 + lVar14 * 8) = lVar4;
                          if (iVar13 != -1) goto LAB_142b7b1eb;
                          break;
                        }
                      }
                      else if (bVar3 < *(byte *)(lVar4 + 0x38)) goto LAB_142b7b186;
                    }
                    iVar13 = iVar13 + 1;
                    lVar14 = lVar14 + 1;
                  } while (iVar13 < *(int *)(param_1 + 0x1a0));
                }
                iVar13 = *(int *)(param_1 + 0x1a0);
                iVar8 = iVar13 + 1;
                *(int *)(param_1 + 0x1a0) = iVar8;
                if (*(int *)(param_1 + 0x1a4) < iVar8) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
                }
                *(longlong *)(*plVar1 + (longlong)iVar13 * 8) = lVar4;
              }
            }
            else if (cVar2 == '\x01') {
              FUN_142b7b3d0(param_1);
            }
          }
          else {
            plVar5 = (longlong *)*plVar1;
            iVar13 = *(int *)(param_1 + 0x1a0);
            for (plVar9 = plVar5; plVar9 != plVar5 + iVar13; plVar9 = plVar9 + 1) {
              if (*plVar9 == lVar4) {
                iVar8 = (int)((longlong)plVar9 - (longlong)plVar5 >> 3);
                if (iVar8 != -1) {
                  iVar11 = (iVar13 - iVar8) + -1;
                  if (iVar11 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              (plVar5 + iVar8,plVar5 + (iVar8 + 1),(longlong)iVar11 << 3);
                    iVar13 = *(int *)(param_1 + 0x1a0);
                  }
                  *(int *)(param_1 + 0x1a0) = iVar13 + -1;
                }
                break;
              }
            }
          }
LAB_142b7b1eb:
          iVar15 = iVar15 + 1;
          lVar16 = lVar16 + 0x10;
        } while (iVar15 < *(int *)(param_1 + 0x1b0));
      }
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      if ((*(int *)(param_1 + 0x1b4) < 0) && (*(int *)(param_1 + 0x1b4) != 0)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1a8,0);
      }
      FUN_142b7b9f0(param_1);
      iVar13 = *(int *)(param_1 + 0x1b0);
    } while (0 < iVar13);
  }
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0xfffffffe;
  return;
}



// FUNCTION 142b7b2b0 FUN_142b7b2b0 body=280 status=ok
// SIG undefined FUN_142b7b2b0(void)

void FUN_142b7b2b0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xb);
  if (lVar3 == 0) {
    UGameplayTask::EndTask(param_1);
  }
  else if ((((*(byte *)((longlong)param_1 + 0x3c) & 0x10) == 0) && ((short)param_1[8] == 0)) &&
          (*(short *)((longlong)param_1 + 0x42) == 0)) {
    if (*(char *)((longlong)param_1 + 0x39) != '\x03') {
      *(undefined1 *)((longlong)param_1 + 0x39) = 3;
      (**(code **)(*param_1 + 0x278))(param_1);
      if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
        lVar3 = FWeakObjectPtr::Get(param_1 + 0xb);
                    /* WARNING: Could not recover jumptable at 0x000142b7b334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)(lVar3 + 0x178) + 0x38))((longlong *)(lVar3 + 0x178),param_1);
        return;
      }
    }
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x1b0);
    local_18 = local_18 & 0xffffff00;
    *(int *)(lVar3 + 0x1b0) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x1b4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x1a8,iVar2);
    }
    uStack_10 = (uint)param_1;
    uStack_c = (uint)((ulonglong)param_1 >> 0x20);
    puVar1 = (uint *)(*(longlong *)(lVar3 + 0x1a8) + (longlong)iVar2 * 0x10);
    *puVar1 = local_18;
    puVar1[1] = uStack_14;
    puVar1[2] = uStack_10;
    puVar1[3] = uStack_c;
    if (((*(int *)(lVar3 + 0x1b0) == 1) && ((*(byte *)(lVar3 + 500) & 1) == 0)) &&
       (*(int *)(lVar3 + 0x1f0) == 0)) {
      FUN_142b7afe0(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 142b7b3d0 FUN_142b7b3d0 body=129 status=ok
// SIG undefined FUN_142b7b3d0(void)

void FUN_142b7b3d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x198);
  iVar5 = *(int *)(param_1 + 0x1a0);
  plVar3 = plVar1;
  if (plVar1 != plVar1 + iVar5) {
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar1 + iVar5) {
        return;
      }
    }
    iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
    if (iVar2 != -1) {
      iVar4 = (iVar5 - iVar2) + -1;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop(plVar1 + iVar2,plVar1 + (iVar2 + 1),(longlong)iVar4 << 3);
        iVar5 = *(int *)(param_1 + 0x1a0);
      }
      *(int *)(param_1 + 0x1a0) = iVar5 + -1;
    }
  }
  return;
}



// FUNCTION 142b7b460 FUN_142b7b460 body=272 status=ok
// SIG undefined FUN_142b7b460(void)

byte FUN_142b7b460(longlong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  bVar2 = FOutputDevice::CanBeUsedOnAnyThread();
  if ((*param_4 & 1) != 0) {
    return bVar2;
  }
  plVar7 = *(longlong **)(param_1 + 0x188);
  uVar9 = 0;
  uVar10 = (longlong)*(int *)(param_1 + 400) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 400) < plVar7) {
    uVar10 = uVar9;
  }
  uVar8 = uVar9;
  if (uVar10 != 0) {
    do {
      lVar1 = *plVar7;
      if (lVar1 != 0) {
        uVar4 = *(uint *)(lVar1 + 0xc);
        uVar5 = uVar9;
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar6 = uVar4 & 0xffff;
          if ((int)uVar4 < 0) {
            uVar4 = uVar4 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
          bVar3 = FUN_1423fb1a0(param_2,lVar1,param_3,param_4);
          bVar2 = bVar2 | bVar3;
        }
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar10);
  }
  return bVar2;
}



// FUNCTION 142b7b570 FUN_142b7b570 body=44 status=ok
// SIG undefined FUN_142b7b570(void)

void FUN_142b7b570(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x39) = 3;
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000142b7b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar1 + 0x178) + 0x38))((longlong *)(lVar1 + 0x178),param_1);
  return;
}



// FUNCTION 142b7b5a0 FUN_142b7b5a0 body=230 status=ok
// SIG undefined FUN_142b7b5a0(void)

longlong FUN_142b7b5a0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                      char param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((*param_1 != 0) && (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    bVar5 = true;
    if ((param_5 == '\x01') && (lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0), lVar4 != 0)) {
      bVar5 = *(char *)(lVar4 + 0x128) == '\x03';
    }
    lVar4 = 0;
    if (bVar5) {
      if (*param_1 != 0) {
        lVar4 = param_1[1];
      }
      if ((lVar4 != 0) &&
         (lVar4 = UGameplayTask::NewTask<UGameplayTask_SpawnActor>(lVar4,0), lVar4 != 0)) {
        uVar2 = *(undefined4 *)(param_2 + 1);
        *(undefined8 *)(lVar4 + 0x88) = *param_2;
        uVar1 = *param_3;
        *(undefined4 *)(lVar4 + 0x90) = uVar2;
        uVar2 = *(undefined4 *)(param_3 + 1);
        *(undefined8 *)(lVar4 + 0x94) = uVar1;
        *(undefined4 *)(lVar4 + 0x9c) = uVar2;
        *(undefined8 *)(lVar4 + 0xa0) = param_4;
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 142b7b690 TaskOwnerEnded body=102 status=ok
// SIG undefined TaskOwnerEnded(void)

void UGameplayTask::TaskOwnerEnded(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
    *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 0x80;
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b7b6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2b8))(param_1,1);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x39) = 4;
  }
  return;
}



// FUNCTION 142b7b700 TaskWaitDelay body=185 status=ok
// SIG undefined TaskWaitDelay(void)

longlong UGameplayTask_WaitDelay::TaskWaitDelay
                   (longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  if (((lVar3 != 0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    FUN_142b79770(lVar3,param_1[1],param_3);
    *(undefined4 *)(lVar3 + 0x78) = param_2;
  }
  return lVar3;
}



// FUNCTION 142b7b7c0 FUN_142b7b7c0 body=555 status=ok
// SIG undefined FUN_142b7b7c0(void)

void FUN_142b7b7c0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  FUN_142357eb0();
  uVar5 = 0;
  if ((int)param_1[0x38] != 0) {
    if ((int)param_1[0x38] == 1) {
      plVar4 = *(longlong **)param_1[0x37];
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x288))(plVar4,param_2);
        return;
      }
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b2b8c8) &&
         (_Init_thread_header(&DAT_146b2b8c8), DAT_146b2b8c8 == -1)) {
        atexit((_func_5014 *)&LAB_143ebf150);
        _Init_thread_footer(&DAT_146b2b8c8);
      }
      DAT_146b2b8c0 = 0;
      if ((DAT_146b2b8c4 < 0) && (DAT_146b2b8c4 != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b2b8b8);
      }
      iVar1 = (int)param_1[0x38];
      if (iVar1 != 0) {
        if (DAT_146b2b8c4 < DAT_146b2b8c0 + iVar1) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b2b8b8);
        }
        _guard_xfg_dispatch_icall_nop
                  (DAT_146b2b8b8 + DAT_146b2b8c0,(void *)param_1[0x37],(longlong)iVar1 << 3);
        DAT_146b2b8c0 = DAT_146b2b8c0 + iVar1;
      }
      uVar7 = (ulonglong)((longlong)(DAT_146b2b8b8 + DAT_146b2b8c0) + (7 - (longlong)DAT_146b2b8b8))
              >> 3;
      if (DAT_146b2b8b8 + DAT_146b2b8c0 < DAT_146b2b8b8) {
        uVar7 = uVar5;
      }
      plVar4 = DAT_146b2b8b8;
      uVar6 = uVar5;
      if (uVar7 != 0) {
        do {
          plVar2 = (longlong *)*plVar4;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x288))(plVar2,param_2);
            uVar5 = (ulonglong)((int)uVar5 + 1);
          }
          plVar4 = plVar4 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar7);
        if ((int)uVar5 != 0) {
          return;
        }
      }
    }
  }
  iVar1 = (int)param_1[0x38];
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)((longlong)param_1 + 0x1c4) < 0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x37);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1[0x37] + (longlong)iVar1 * 8),0,(longlong)-iVar1 << 3);
  }
  else if ((0 < iVar1) && (iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  bVar3 = (**(code **)(*param_1 + 0x3f8))(param_1);
  if ((*(byte *)((longlong)param_1 + 0xba) >> 2 & 1) != bVar3) {
    (**(code **)(*param_1 + 0x290))(param_1,bVar3,0);
  }
  return;
}



// FUNCTION 142b7b9f0 FUN_142b7b9f0 body=752 status=ok
// SIG undefined FUN_142b7b9f0(void)

void FUN_142b7b9f0(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ushort uVar12;
  ushort uVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  undefined8 local_res8;
  char local_res10;
  longlong *local_48;
  undefined8 local_40;
  
  uVar7 = 0;
  local_res10 = '\0';
  uVar12 = 0;
  local_res8 = param_1;
  if (0 < *(int *)(param_1 + 0x1a0)) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_48);
    if (*(int *)(param_1 + 0x1a0) < 1) {
      uVar11 = local_40 & 0xffffffff;
    }
    else {
      uVar11 = local_40 & 0xffffffff;
      uVar14 = uVar7;
      uVar13 = uVar12;
      do {
        lVar4 = *(longlong *)(param_1 + 0x198);
        plVar5 = *(longlong **)(uVar14 + lVar4);
        if (plVar5 == (longlong *)0x0) {
          local_res10 = '\x01';
        }
        else {
          uVar2 = *(ushort *)((longlong)plVar5 + 0x42);
          if ((*(ushort *)(plVar5 + 8) & uVar13) == 0) {
            iVar8 = (int)uVar11;
            uVar9 = iVar8 + 1;
            local_40 = CONCAT44(local_40._4_4_,uVar9);
            if (local_40._4_4_ < (int)uVar9) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,uVar11);
              uVar9 = (uint)local_40;
            }
            uVar11 = (ulonglong)uVar9;
            uVar12 = uVar12 | uVar2;
            uVar13 = uVar13 | uVar2;
            local_48[iVar8] = *(longlong *)(uVar14 + lVar4);
          }
          else {
            if (*(char *)((longlong)plVar5 + 0x39) == '\x03') {
              (**(code **)(*plVar5 + 0x2c0))();
            }
            uVar13 = uVar13 | uVar2;
          }
        }
        uVar9 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar9;
        uVar14 = uVar14 + 8;
        param_1 = local_res8;
      } while ((int)uVar9 < *(int *)(local_res8 + 0x1a0));
    }
    plVar5 = local_48;
    if (0 < (int)uVar11) {
      do {
        plVar3 = (longlong *)*plVar5;
        if ((plVar3 != (longlong *)0x0) &&
           (cVar1 = *(char *)((longlong)plVar3 + 0x39), cVar1 != '\x04')) {
          uVar9 = *(uint *)((longlong)plVar3 + 0xc);
          if ((int)uVar9 < (int)DAT_1469e91c4) {
            uVar6 = uVar9 & 0xffff;
            if ((int)uVar9 < 0) {
              uVar9 = uVar9 + 0xffff;
              uVar6 = uVar6 - 0x10000;
            }
            lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                    (longlong)(int)uVar6 * 0x18;
          }
          else {
            lVar4 = 0;
          }
          if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
            if (cVar1 == '\x01') {
LAB_142b7bb6b:
              if (cVar1 != '\x03') {
                *(undefined1 *)((longlong)plVar3 + 0x39) = 3;
                (**(code **)(*plVar3 + 0x278))(plVar3);
                if (*(char *)((longlong)plVar3 + 0x39) != '\x04') {
                  lVar4 = FWeakObjectPtr::Get(plVar3 + 0xb);
                  (**(code **)(*(longlong *)(lVar4 + 0x178) + 0x38))
                            ((longlong *)(lVar4 + 0x178),plVar3);
                }
              }
            }
            else if (cVar1 == '\x02') {
              (**(code **)(*plVar3 + 0x2c8))(plVar3);
            }
            else if (cVar1 == '\x04') goto LAB_142b7bb6b;
          }
        }
        uVar11 = uVar11 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar11 != 0);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  cVar1 = local_res10;
  uVar7 = 0;
  uVar13 = *(ushort *)(param_1 + 0x1da);
  if (uVar13 != uVar12) {
    *(ushort *)(param_1 + 0x1da) = uVar12;
    local_res8._0_4_ = CONCAT22(~uVar12 & uVar13,~uVar13 & uVar12);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1e0,&local_res8);
  }
  if ((cVar1 != '\0') &&
     (lVar4 = (longlong)*(int *)(param_1 + 0x1a0), *(int *)(param_1 + 0x1a0) != 0)) {
    bVar16 = **(longlong **)(param_1 + 0x198) != 0;
    uVar11 = uVar7;
    uVar14 = uVar7;
    do {
      iVar8 = (int)uVar11;
      uVar7 = uVar7 + 1;
      uVar11 = (ulonglong)(iVar8 + 1);
      if ((longlong)uVar7 < lVar4) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x198) + uVar7 * 8);
        do {
          if (bVar16 != (*plVar5 != 0)) break;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar7 = uVar7 + 1;
          plVar5 = plVar5 + 1;
        } while ((longlong)uVar7 < lVar4);
      }
      iVar10 = (int)uVar11 - iVar8;
      if (bVar16 != false) {
        iVar15 = (int)uVar14;
        if (iVar15 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x198) + (longlong)iVar15 * 8),
                     (void *)(*(longlong *)(param_1 + 0x198) + (longlong)iVar8 * 8),
                     (longlong)iVar10 << 3);
        }
        uVar14 = (ulonglong)(uint)(iVar15 + iVar10);
      }
      bVar16 = (bool)(bVar16 ^ 1);
    } while ((longlong)uVar7 < lVar4);
    *(int *)(param_1 + 0x1a0) = (int)uVar14;
  }
  return;
}



// FUNCTION 142b7bce0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UGameplayTaskOwnerInterface::StaticClass(void)

{
  if (DAT_146b2b9d0 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTasks",L"GameplayTaskOwnerInterface",&DAT_146b2b9d0,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2b9d0;
}



// FUNCTION 142b7bd90 FUN_142b7bd90 body=47 status=ok
// SIG undefined FUN_142b7bd90(void)

longlong FUN_142b7bd90(void)

{
  if (DAT_146b2b8e8 == 0) {
    FUN_141786a30(&DAT_146b2b8e8,&PTR_FUN_146686410);
  }
  return DAT_146b2b8e8;
}



// FUNCTION 142b7bdc0 FUN_142b7bdc0 body=47 status=ok
// SIG undefined FUN_142b7bdc0(void)

longlong FUN_142b7bdc0(void)

{
  if (DAT_146b2b930 == 0) {
    FUN_141786440(&DAT_146b2b930,&PTR_GetPrivateStaticClass_1457c8090);
  }
  return DAT_146b2b930;
}



// FUNCTION 142b7bdf0 FUN_142b7bdf0 body=47 status=ok
// SIG undefined FUN_142b7bdf0(void)

longlong FUN_142b7bdf0(void)

{
  if (DAT_146b2b9e8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b2b9e8,&PTR_s__Script_GameplayTasks_1457c9ae0);
  }
  return DAT_146b2b9e8;
}



// FUNCTION 142b7be20 FUN_142b7be20 body=47 status=ok
// SIG undefined FUN_142b7be20(void)

longlong FUN_142b7be20(void)

{
  if (DAT_146b2b920 == 0) {
    FUN_141786a30(&DAT_146b2b920,&PTR_FUN_1466864d0);
  }
  return DAT_146b2b920;
}



// FUNCTION 142b7be50 FUN_142b7be50 body=47 status=ok
// SIG undefined FUN_142b7be50(void)

longlong FUN_142b7be50(void)

{
  if (DAT_146b2b928 == 0) {
    FUN_141786a30(&DAT_146b2b928,&PTR_FUN_146686510);
  }
  return DAT_146b2b928;
}



// FUNCTION 142b7be90 FUN_142b7be90 body=53 status=ok
// SIG undefined FUN_142b7be90(void)

void FUN_142b7be90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &PTR_FUN_14402d490;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return;
  }
  return;
}



// FUNCTION 142b7bef0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTask_ClaimResource::GetPrivateStaticClass(void)

{
  if (DAT_146b2b958 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTasks",L"GameplayTask_ClaimResource",&DAT_146b2b958,
                  StaticRegisterNativesUGameplayTask_ClaimResource,0x68,0x10000004,0,L"Game",
                  &LAB_142b7c5a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameplayTask::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2b958;
}



// FUNCTION 142b7bfa0 FUN_142b7bfa0 body=47 status=ok
// SIG undefined FUN_142b7bfa0(void)

longlong FUN_142b7bfa0(void)

{
  if (DAT_146b2b950 == 0) {
    FUN_141786440(&DAT_146b2b950,&PTR_GetPrivateStaticClass_1457c83a0);
  }
  return DAT_146b2b950;
}



// FUNCTION 142b7bfd0 FUN_142b7bfd0 body=47 status=ok
// SIG undefined FUN_142b7bfd0(void)

longlong FUN_142b7bfd0(void)

{
  if (DAT_146b2b940 == 0) {
    FUN_141786a30(&DAT_146b2b940,&PTR_FUN_1466867b0);
  }
  return DAT_146b2b940;
}



// FUNCTION 142b7c000 FUN_142b7c000 body=47 status=ok
// SIG undefined FUN_142b7c000(void)

longlong FUN_142b7c000(void)

{
  if (DAT_146b2b948 == 0) {
    FUN_141786a30(&DAT_146b2b948,&PTR_FUN_146686980);
  }
  return DAT_146b2b948;
}



// FUNCTION 142b7c040 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTask_SpawnActor::GetPrivateStaticClass(void)

{
  if (DAT_146b2b988 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTasks",L"GameplayTask_SpawnActor",&DAT_146b2b988,
                  StaticRegisterNativesUGameplayTask_SpawnActor,0xa8,0x10000004,0,L"Game",
                  InternalConstructor<UGameplayTask_SpawnActor>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameplayTask::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2b988;
}



// FUNCTION 142b7c0f0 FUN_142b7c0f0 body=47 status=ok
// SIG undefined FUN_142b7c0f0(void)

longlong FUN_142b7c0f0(void)

{
  if (DAT_146b2b980 == 0) {
    FUN_141786440(&DAT_146b2b980,&PTR_GetPrivateStaticClass_1457c8730);
  }
  return DAT_146b2b980;
}



// FUNCTION 142b7c120 FUN_142b7c120 body=47 status=ok
// SIG undefined FUN_142b7c120(void)

longlong FUN_142b7c120(void)

{
  if (DAT_146b2b968 == 0) {
    FUN_141786a30(&DAT_146b2b968,&PTR_FUN_146686b30);
  }
  return DAT_146b2b968;
}



// FUNCTION 142b7c150 FUN_142b7c150 body=47 status=ok
// SIG undefined FUN_142b7c150(void)

longlong FUN_142b7c150(void)

{
  if (DAT_146b2b970 == 0) {
    FUN_141786a30(&DAT_146b2b970,&PTR_FUN_146686bf0);
  }
  return DAT_146b2b970;
}



// FUNCTION 142b7c180 FUN_142b7c180 body=47 status=ok
// SIG undefined FUN_142b7c180(void)

longlong FUN_142b7c180(void)

{
  if (DAT_146b2b978 == 0) {
    FUN_141786a30(&DAT_146b2b978,&PTR_FUN_146686e20);
  }
  return DAT_146b2b978;
}



// FUNCTION 142b7c1c0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UGameplayTask_TimeLimitedExecution::StaticClass(void)

{
  if (DAT_146b2b9a0 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTasks",L"GameplayTask_TimeLimitedExecution",&DAT_146b2b9a0,
                  FUN_140447710,0x98,0x10000004,0,L"Game",&LAB_142b7c610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameplayTask::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2b9a0;
}



// FUNCTION 142b7c270 FUN_142b7c270 body=47 status=ok
// SIG undefined FUN_142b7c270(void)

longlong FUN_142b7c270(void)

{
  if (DAT_146b2b998 == 0) {
    FUN_141786440(&DAT_146b2b998,&PTR_StaticClass_1457c8920);
  }
  return DAT_146b2b998;
}



// FUNCTION 142b7c2b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTask_WaitDelay::GetPrivateStaticClass(void)

{
  if (DAT_146b2b9c0 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTasks",L"GameplayTask_WaitDelay",&DAT_146b2b9c0,
                  StaticRegisterNativesUGameplayTask_WaitDelay,0x80,0x10000004,0,L"Game",
                  &LAB_142b7c630,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameplayTask::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2b9c0;
}



// FUNCTION 142b7c360 FUN_142b7c360 body=47 status=ok
// SIG undefined FUN_142b7c360(void)

longlong FUN_142b7c360(void)

{
  if (DAT_146b2b9a8 == 0) {
    FUN_141786a30(&DAT_146b2b9a8,&PTR_FUN_146687010);
  }
  return DAT_146b2b9a8;
}



// FUNCTION 142b7c390 FUN_142b7c390 body=47 status=ok
// SIG undefined FUN_142b7c390(void)

longlong FUN_142b7c390(void)

{
  if (DAT_146b2b9b8 == 0) {
    FUN_141786440(&DAT_146b2b9b8,&PTR_GetPrivateStaticClass_1457c8ba0);
  }
  return DAT_146b2b9b8;
}



// FUNCTION 142b7c3c0 FUN_142b7c3c0 body=47 status=ok
// SIG undefined FUN_142b7c3c0(void)

longlong FUN_142b7c3c0(void)

{
  if (DAT_146b2b9b0 == 0) {
    FUN_141786a30(&DAT_146b2b9b0,&PTR_FUN_146687110);
  }
  return DAT_146b2b9b0;
}



// FUNCTION 142b7c410 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryTest_Cover::StaticClass(void)

{
  if (DAT_146b2ba18 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTasks",L"GameplayTasksComponent",&DAT_146b2ba18,FUN_142b7ca00,
                  0x1f8,0x10000000,0,L"Engine",&LAB_142b7c650,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b2ba18;
}



// FUNCTION 142b7c4c0 FUN_142b7c4c0 body=47 status=ok
// SIG undefined FUN_142b7c4c0(void)

longlong FUN_142b7c4c0(void)

{
  if (DAT_146b2ba10 == 0) {
    FUN_141786440(&DAT_146b2ba10,&PTR_StaticClass_1457c93a0);
  }
  return DAT_146b2ba10;
}



// FUNCTION 142b7c4f0 FUN_142b7c4f0 body=47 status=ok
// SIG undefined FUN_142b7c4f0(void)

longlong FUN_142b7c4f0(void)

{
  if (DAT_146b2ba00 == 0) {
    FUN_141786a30(&DAT_146b2ba00,&PTR_FUN_1466875e0);
  }
  return DAT_146b2ba00;
}



// FUNCTION 142b7c520 FUN_142b7c520 body=47 status=ok
// SIG undefined FUN_142b7c520(void)

longlong FUN_142b7c520(void)

{
  if (DAT_146b2ba08 == 0) {
    FUN_141786a30(&DAT_146b2ba08,&PTR_FUN_146687620);
  }
  return DAT_146b2ba08;
}



// FUNCTION 142b7c5c0 InternalConstructor<UGameplayTask_SpawnActor> body=80 status=ok
// SIG undefined InternalConstructor<UGameplayTask_SpawnActor>(void)

void InternalConstructor<UGameplayTask_SpawnActor>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UGameplayTask::UGameplayTask(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1457c9750;
    puVar1[5] = &PTR_LAB_1457c9a30;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x14] = 0;
  }
  return;
}



// FUNCTION 142b7c670 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGameplayTask_SpawnActor::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142b7c6d0 EGameplayTaskRunResult_StaticEnum body=85 status=ok
// SIG undefined EGameplayTaskRunResult_StaticEnum(void)

void EGameplayTaskRunResult_StaticEnum(void)

{
  if (DAT_146b2b8e0 == 0) {
    if (DAT_146b2b9e8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2b9e8,&PTR_s__Script_GameplayTasks_1457c9ae0);
    }
    DAT_146b2b8e0 = GetStaticEnum(FUN_142b7cba0,DAT_146b2b9e8,L"EGameplayTaskRunResult");
  }
  return;
}



// FUNCTION 142b7c730 EGameplayTaskState_StaticEnum body=85 status=ok
// SIG undefined EGameplayTaskState_StaticEnum(void)

void EGameplayTaskState_StaticEnum(void)

{
  if (DAT_146b2b8d8 == 0) {
    if (DAT_146b2b9e8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2b9e8,&PTR_s__Script_GameplayTasks_1457c9ae0);
    }
    DAT_146b2b8d8 = GetStaticEnum(FUN_142b7cbd0,DAT_146b2b9e8,L"EGameplayTaskState");
  }
  return;
}



// FUNCTION 142b7c790 ETaskResourceOverlapPolicy_StaticEnum body=85 status=ok
// SIG undefined ETaskResourceOverlapPolicy_StaticEnum(void)

void ETaskResourceOverlapPolicy_StaticEnum(void)

{
  if (DAT_146b2b8d0 == 0) {
    if (DAT_146b2b9e8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2b9e8,&PTR_s__Script_GameplayTasks_1457c9ae0);
    }
    DAT_146b2b8d0 = GetStaticEnum(FUN_142b7cc00,DAT_146b2b9e8,L"ETaskResourceOverlapPolicy");
  }
  return;
}



// FUNCTION 142b7c7f0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTask::GetPrivateStaticClass(void)

{
  if (DAT_146b2b938 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTasks",L"GameplayTask",&DAT_146b2b938,
                  StaticRegisterNativesUGameplayTask,0x68,0x10000005,0,L"Game",&LAB_142b7c560,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2b938;
}



// FUNCTION 142b7c890 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTaskResource::GetPrivateStaticClass(void)

{
  if (DAT_146b2b9e0 == 0) {
    FUN_14171ccd0(L"/Script/GameplayTasks",L"GameplayTaskResource",&DAT_146b2b9e0,FUN_140447710,0x38
                  ,0x10000005,0,L"Game",&LAB_142b7c580,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2b9e0;
}



// FUNCTION 142b7c930 Get_Z_Construct_UScriptStruct_FGameplayResourceSet_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameplayResourceSet_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameplayResourceSet_CRC(void)

{
  return 0x2da40874;
}



// FUNCTION 142b7c940 StaticRegisterNativesUGameplayTask body=34 status=ok
// SIG undefined StaticRegisterNativesUGameplayTask(void)

void UGameplayTask::StaticRegisterNativesUGameplayTask(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EndTask_1457c9710,2);
  return;
}



// FUNCTION 142b7c970 StaticRegisterNativesUGameplayTask_ClaimResource body=34 status=ok
// SIG undefined StaticRegisterNativesUGameplayTask_ClaimResource(void)

void UGameplayTask_ClaimResource::StaticRegisterNativesUGameplayTask_ClaimResource(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClaimResource_1457c9730,2);
  return;
}



// FUNCTION 142b7c9a0 StaticRegisterNativesUGameplayTask_SpawnActor body=34 status=ok
// SIG undefined StaticRegisterNativesUGameplayTask_SpawnActor(void)

void UGameplayTask_SpawnActor::StaticRegisterNativesUGameplayTask_SpawnActor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BeginSpawningActor_1457c9a78,3);
  return;
}



// FUNCTION 142b7c9d0 StaticRegisterNativesUGameplayTask_WaitDelay body=34 status=ok
// SIG undefined StaticRegisterNativesUGameplayTask_WaitDelay(void)

void UGameplayTask_WaitDelay::StaticRegisterNativesUGameplayTask_WaitDelay(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_TaskWaitDelay_1457c9aa8,1);
  return;
}



// FUNCTION 142b7ca00 FUN_142b7ca00 body=34 status=ok
// SIG undefined FUN_142b7ca00(void)

void FUN_142b7ca00(void)

{
  undefined8 uVar1;
  
  uVar1 = UEnvQueryTest_Cover::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_K2_RunGameplayTask_1457c9b60,2);
  return;
}



// FUNCTION 142b7ca30 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameplayResourceSet::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2b910 == 0) {
    if (DAT_146b2b9e8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2b9e8,&PTR_s__Script_GameplayTasks_1457c9ae0);
    }
    lVar1 = DAT_146b2b9e8;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameplayResourceSet_CRC();
    DAT_146b2b910 = GetStaticStruct(FUN_142b7cc30,lVar1,L"GameplayResourceSet",2,uVar2);
  }
  return;
}



// FUNCTION 142b7cab0 FUN_142b7cab0 body=47 status=ok
// SIG undefined FUN_142b7cab0(void)

longlong FUN_142b7cab0(void)

{
  if (DAT_146b2b9c8 == 0) {
    FUN_141786440(&DAT_146b2b9c8,&PTR_StaticClass_1457c8cf0);
  }
  return DAT_146b2b9c8;
}



// FUNCTION 142b7cae0 FUN_142b7cae0 body=47 status=ok
// SIG undefined FUN_142b7cae0(void)

longlong FUN_142b7cae0(void)

{
  if (DAT_146b2b9d8 == 0) {
    FUN_141786440(&DAT_146b2b9d8,&PTR_GetPrivateStaticClass_1457c8e60);
  }
  return DAT_146b2b9d8;
}



// FUNCTION 142b7cb10 FUN_142b7cb10 body=47 status=ok
// SIG undefined FUN_142b7cb10(void)

longlong FUN_142b7cb10(void)

{
  if (DAT_146b2b960 == 0) {
    FUN_141786a30(&DAT_146b2b960,&PTR_FUN_146686a00);
  }
  return DAT_146b2b960;
}



// FUNCTION 142b7cb40 FUN_142b7cb40 body=47 status=ok
// SIG undefined FUN_142b7cb40(void)

longlong FUN_142b7cb40(void)

{
  if (DAT_146b2b9f0 == 0) {
    FUN_141786a30(&DAT_146b2b9f0,&PTR_FUN_1466872f0);
  }
  return DAT_146b2b9f0;
}



// FUNCTION 142b7cb70 FUN_142b7cb70 body=47 status=ok
// SIG undefined FUN_142b7cb70(void)

longlong FUN_142b7cb70(void)

{
  if (DAT_146b2b990 == 0) {
    FUN_141786a30(&DAT_146b2b990,&PTR_FUN_146686f50);
  }
  return DAT_146b2b990;
}



// FUNCTION 142b7cba0 FUN_142b7cba0 body=47 status=ok
// SIG undefined FUN_142b7cba0(void)

longlong FUN_142b7cba0(void)

{
  if (DAT_146b2b9f8 == 0) {
    FUN_1417866a0(&DAT_146b2b9f8,&PTR_FUN_146687920);
  }
  return DAT_146b2b9f8;
}



// FUNCTION 142b7cbd0 FUN_142b7cbd0 body=47 status=ok
// SIG undefined FUN_142b7cbd0(void)

longlong FUN_142b7cbd0(void)

{
  if (DAT_146b2b908 == 0) {
    FUN_1417866a0(&DAT_146b2b908,&PTR_FUN_1466878d0);
  }
  return DAT_146b2b908;
}



// FUNCTION 142b7cc00 FUN_142b7cc00 body=47 status=ok
// SIG undefined FUN_142b7cc00(void)

longlong FUN_142b7cc00(void)

{
  if (DAT_146b2b900 == 0) {
    FUN_1417866a0(&DAT_146b2b900,&PTR_FUN_146687880);
  }
  return DAT_146b2b900;
}



// FUNCTION 142b7cc30 FUN_142b7cc30 body=47 status=ok
// SIG undefined FUN_142b7cc30(void)

longlong FUN_142b7cc30(void)

{
  if (DAT_146b2b918 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2b918,&PTR_FUN_146686450);
  }
  return DAT_146b2b918;
}



// FUNCTION 142b7cc60 FUN_142b7cc60 body=212 status=ok
// SIG undefined FUN_142b7cc60(void)

void FUN_142b7cc60(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  puVar2 = &local_res8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,local_res10,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142b7cd40 execClaimResource body=334 status=ok
// SIG undefined execClaimResource(void)

void UGameplayTask_ClaimResource::execClaimResource
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_38;
  local_20 = 0;
  if (local_38 != 0) {
    local_20 = uStack_30;
  }
  uVar1 = ClaimResource(&local_28,local_res20,local_res10[0],local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142b7ce90 execClaimResources body=415 status=ok
// SIG undefined execClaimResources(void)

void UGameplayTask_ClaimResource::execClaimResources
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  _Src = local_58;
  local_48 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_50;
  local_40 = (int)local_50;
  if ((int)local_50 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_48,local_50 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_48,_Src,lVar2 << 3);
  }
  local_28 = local_38;
  local_20 = 0;
  if (local_38 != 0) {
    local_20 = uStack_30;
  }
  uVar1 = ClaimResources(&local_28,&local_48,local_res10[0],local_res18);
  *param_3 = uVar1;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b7d050 FUN_142b7d050 body=195 status=ok
// SIG undefined FUN_142b7d050(void)

void FUN_142b7d050(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x2d8))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 142b7d120 execK2_RunGameplayTask body=562 status=ok
// SIG undefined execK2_RunGameplayTask(void)

void UGameplayTasksComponent::execK2_RunGameplayTask
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  void *local_78;
  ulonglong local_70;
  void *local_68;
  ulonglong local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  pvVar1 = local_78;
  local_58 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar3 = (longlong)(int)local_70;
  local_50 = (int)local_70;
  if ((int)local_70 == 0) {
    local_4c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_58,local_70 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar3 << 3);
  }
  pvVar1 = local_68;
  lVar3 = (longlong)(int)local_60;
  local_48 = (void *)0x0;
  local_40 = (int)local_60;
  if ((int)local_60 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_48,local_60 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar3 << 3);
  }
  local_28 = local_38;
  local_20 = 0;
  if (local_38 != 0) {
    local_20 = uStack_30;
  }
  uVar2 = FUN_142b798a0(&local_28,local_res18,local_res10[0],&local_48,&local_58);
  *param_3 = uVar2;
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b7d3a0 execSpawnActor body=426 status=ok
// SIG undefined execSpawnActor(void)

void UGameplayTask_SpawnActor::execSpawnActor
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_res10 [2];
  undefined8 local_res18 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_58 = local_78;
  local_48 = local_68;
  local_50 = local_70;
  local_40 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_38;
  local_20 = 0;
  if (local_38 != 0) {
    local_20 = uStack_30;
  }
  uVar1 = FUN_142b7b5a0(&local_28,&local_48,&local_58,local_res18[0],local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142b7d550 execTaskWaitDelay body=282 status=ok
// SIG undefined execTaskWaitDelay(void)

void UGameplayTask_WaitDelay::execTaskWaitDelay
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18;
  undefined8 local_10;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_28;
  local_10 = 0;
  if (local_28 != 0) {
    local_10 = uStack_20;
  }
  uVar1 = TaskWaitDelay(&local_18,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142b7d670 FUN_142b7d670 body=261 status=ok
// SIG undefined FUN_142b7d670(void)

void FUN_142b7d670(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140d0d3f0(param_1,param_3 + param_5,param_4);
    lVar4 = *param_1;
    if (param_3 != 0) {
      plVar3 = (longlong *)(param_2 + 0xa8);
      plVar5 = (longlong *)(lVar4 + 0xa8);
      do {
        FUN_142b80820(lVar4,plVar3 + -0x15);
        *(int *)(plVar5 + -5) = (int)plVar3[-5];
        plVar5[-4] = 0;
        *(undefined4 *)(plVar5 + -3) = 0;
        if (((plVar3 + -4 != plVar5 + -4) && ((int)plVar3[-3] != 0)) &&
           (plVar1 = (longlong *)plVar3[-4], plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x30))();
        }
        *(char *)(plVar5 + -2) = (char)plVar3[-2];
        plVar5[-1] = plVar3[-1];
        lVar2 = *plVar3;
        *plVar5 = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + 0xb8;
        *(int *)(plVar5 + 1) = (int)plVar3[1];
        plVar3 = plVar3 + 0x17;
        plVar5 = plVar5 + 0x17;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}



// FUNCTION 142b7d780 FUN_142b7d780 body=1186 status=ok
// SIG undefined FUN_142b7d780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_142b7d780(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong **pplVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong *local_88 [2];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [32];
  
  plVar8 = (longlong *)operator_new(0xf8);
  plVar13 = (longlong *)0x0;
  plVar11 = plVar13;
  if (plVar8 != (longlong *)0x0) {
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (longlong)&PTR__scalar_deleting_destructor__1457cca80;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[6] = 0;
    *(undefined4 *)(plVar8 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)plVar8 + 0x3c) = 0;
    *(undefined4 *)(plVar8 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)plVar8 + 0x44) = 0;
    plVar8[9] = 0;
    *(undefined4 *)(plVar8 + 10) = 0xffffffff;
    *(undefined4 *)((longlong)plVar8 + 0x54) = 0;
    plVar8[0xb] = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    *(undefined4 *)(plVar8 + 0xe) = DAT_146b2bad0;
    plVar8[0xf] = DAT_146b2bad8;
    plVar8[0x10] = 0;
    plVar8[0x11] = 0;
    plVar8[0x12] = 2;
    *(uint *)(plVar8 + 0x13) = *(uint *)(plVar8 + 0x13) & 0xfffffcdf | 0xd0;
    *(undefined4 *)((longlong)plVar8 + 0x9c) = 0xffffffff;
    *(undefined4 *)(plVar8 + 0x14) = 0;
    *(undefined4 *)(plVar8 + 0x15) = 0xffffffff;
    *(undefined4 *)((longlong)plVar8 + 0xac) = 0;
    plVar8[0x16] = DAT_146687978;
    *(undefined4 *)(plVar8 + 0x17) = DAT_146687980;
    *(longlong *)((longlong)plVar8 + 0xbc) = DAT_146687978;
    *(undefined4 *)((longlong)plVar8 + 0xc4) = DAT_146687980;
    plVar8[0x19] = 0;
    plVar8[0x1a] = 0;
    *(uint *)((longlong)plVar8 + 0xdc) = *(uint *)((longlong)plVar8 + 0xdc) | 1;
    *(undefined4 *)(plVar8 + 0x1b) = 0;
    *(undefined4 *)(plVar8 + 0x1c) = 0xbf800000;
    *(undefined4 *)((longlong)plVar8 + 0xe4) = 0xbf800000;
    plVar8[0x1d] = _DAT_1468b5d90;
    *(undefined4 *)(plVar8 + 0x1e) = DAT_1468b5d98;
    FUN_142b90d80(plVar8);
    *plVar8 = (longlong)&PTR__scalar_deleting_destructor__1457cca80;
    uVar6 = uRam0000000146b2ba5c;
    uVar5 = uRam0000000146b2ba58;
    uVar14 = uRam0000000146b2ba54;
    *(undefined4 *)(plVar8 + 0xe) = DAT_146b2ba50;
    *(undefined4 *)((longlong)plVar8 + 0x74) = uVar14;
    *(undefined4 *)(plVar8 + 0xf) = uVar5;
    *(undefined4 *)((longlong)plVar8 + 0x7c) = uVar6;
    plVar11 = plVar8;
  }
  plVar9 = (longlong *)operator_new(0x18);
  plVar8 = plVar13;
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
    plVar9[2] = (longlong)plVar11;
    plVar8 = plVar9;
  }
  *param_2 = (longlong)plVar11;
  param_2[1] = (longlong)plVar8;
  plVar9 = plVar11 + 1;
  if (plVar11 == (longlong *)0x0) {
    plVar9 = plVar13;
  }
  if (plVar9 != (longlong *)0x0) {
    if (*plVar9 != 0) {
      if (plVar9[1] != 0) {
        piVar1 = (int *)(plVar9[1] + 8);
        LOCK();
        iVar7 = *piVar1;
        if (iVar7 == 0) {
          *piVar1 = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (0 < iVar7) goto LAB_142b7d9f5;
      }
      plVar8 = (longlong *)param_2[1];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar9 = (longlong)plVar11;
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
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      plVar9[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar8 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
LAB_142b7d9f5:
  lVar10 = *param_2;
  FWeakObjectPtr::operator=(&local_res8,param_1);
  *(undefined4 *)(lVar10 + 0x9c) = local_res8;
  *(undefined4 *)(lVar10 + 0xa0) = local_resc;
  FPathFindingQueryData::operator=(*param_2 + 0xa8,param_3);
  lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar10 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined4 *)(lVar10 + 0x790);
  }
  lVar10 = *param_2;
  plVar11 = (longlong *)param_2[1];
  local_78 = FUN_142b94cf0;
  uStack_70 = 0;
  *(undefined4 *)(lVar10 + 0xe0) = uVar14;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x40);
  local_88[0] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_68 = lVar10;
    local_60 = plVar11;
    FUN_142b7ec90(plVar8,param_1,&local_58,&local_68);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
    plVar8 = local_88[0];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar11 + 1;
      lVar10 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar8 = local_88[0];
        if (iVar7 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
          plVar8 = local_88[0];
        }
      }
    }
  }
  plVar11 = (longlong *)FUN_141d29000(local_48,0,0xff);
  lVar10 = *plVar11;
  pplVar12 = (longlong **)(lVar10 + 0x10);
  *pplVar12 = (longlong *)0x0;
  *(undefined4 *)(lVar10 + 0x18) = 0;
  if ((local_88 != pplVar12) && (plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x30))(plVar8,pplVar12);
  }
  *(undefined4 *)(lVar10 + 0x20) = 2;
  lVar10 = *plVar11;
  lVar4 = plVar11[2];
  lVar2 = plVar11[1];
  lVar3 = *(longlong *)(lVar10 + 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
    plVar8 = local_88[0];
  }
  FUN_1409691d0(lVar10,lVar2,(int)lVar4,1);
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar8 = local_88[0];
    if (iVar7 == 1) {
      FGraphEvent::Recycle(lVar3);
      plVar8 = local_88[0];
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar10 = FMemory::Realloc(plVar8,0,0);
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  return param_2;
}



// FUNCTION 142b7dc30 Emplace<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>_const_&> body=439 status=ok
// SIG undefined Emplace<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>_const_&>(void)

int * TSet<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>,TDefaultMapHashableKeyFuncs<INavLinkCustomInterface_*,FWeakObjectPtr,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>_const_&>
                (longlong *param_1,int *param_2,ulonglong *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int local_res8 [2];
  int local_28 [2];
  ulonglong *local_20;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  bVar7 = false;
  *param_2 = local_28[0];
  *local_20 = *param_3;
  *(int *)(local_20 + 1) = (int)param_3[1];
  *(undefined4 *)((longlong)local_20 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)(local_20 + 2) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)local_res8[0] * 0x18),local_20,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142b7ddc3;
    }
  }
  cVar1 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar1 == '\0') {
    iVar3 = (int)(*local_20 >> 4);
    uVar5 = 0x9e3779b9U - iVar3 ^ iVar3 << 8;
    uVar6 = -(uVar5 + iVar3) ^ uVar5 >> 0xd;
    uVar4 = (iVar3 - uVar5) - uVar6 ^ uVar6 >> 0xc;
    uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 0x10;
    uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar6 >> 3;
    uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 10;
    uVar4 = ((uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x14) = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 2) =
         *(undefined4 *)
          ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_142b7ddc3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 142b7ddf0 FUN_142b7ddf0 body=560 status=ok
// SIG undefined FUN_142b7ddf0(void)

int * FUN_142b7ddf0(longlong *param_1,int *param_2,uint *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FBatchedLine,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)((longlong)iVar7 * 0x34 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x34 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar10 = false;
  puVar9 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)iVar7 & 0x1f);
  puVar9 = (uint *)((longlong)iVar7 * 0x34 + *param_1);
  *puVar9 = *param_3;
  uVar5 = param_3[2];
  uVar1 = param_3[3];
  uVar2 = param_3[4];
  puVar9[1] = param_3[1];
  puVar9[2] = uVar5;
  puVar9[3] = uVar1;
  puVar9[4] = uVar2;
  *(undefined8 *)(puVar9 + 5) = *(undefined8 *)(param_3 + 5);
  puVar9[7] = param_3[7];
  puVar9[8] = param_3[8];
  puVar9[9] = param_3[9];
  puVar9[10] = param_3[10];
  puVar9[0xb] = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    if (iVar8 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar9) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x34 + *param_1) == *puVar9) goto LAB_142b7df5b;
          iVar4 = *(int *)((longlong)iVar4 * 0x34 + 0x2c + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_142b7df5b:
    bVar10 = iVar4 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x34 + *param_1),puVar9,0x2c);
      TSparseArray<TSetElement<FNavigationBounds>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar4;
      goto LAB_142b7dff7;
    }
  }
  cVar3 = TSet<FNavigationBounds,DefaultKeyFuncs<FNavigationBounds,0>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar8,0);
  if (cVar3 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *puVar9;
    puVar9[0xc] = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar9[0xb] = *(uint *)((longlong)plVar6 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_142b7dff7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 142b7e020 FUN_142b7e020 body=604 status=ok
// SIG undefined FUN_142b7e020(void)

int * FUN_142b7e020(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong *_Src;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
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
    iVar3 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar9 * 0x20 + *param_1);
  FWeakObjectPtr::operator=(&local_38,0);
  bVar11 = false;
  local_30 = 0;
  uVar4 = *(ulonglong *)*param_3;
  *_Src = uVar4;
  *(undefined4 *)(_Src + 1) = local_38;
  *(undefined4 *)((longlong)_Src + 0xc) = local_34;
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar4);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x20 + *param_1),_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142b7e254;
    }
  }
  cVar5 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar5 == '\0') {
    iVar9 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar10 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
    uVar7 = (iVar9 - uVar8) - uVar10 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = ((uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_142b7e254:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 142b7e280 Emplace<TPairInitializer<INavLinkCustomInterface_*_&&,FWeakObjectPtr_&&>_> body=444 status=ok
// SIG undefined Emplace<TPairInitializer<INavLinkCustomInterface_*_&&,FWeakObjectPtr_&&>_>(void)

int * TSet<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>,TDefaultMapHashableKeyFuncs<INavLinkCustomInterface_*,FWeakObjectPtr,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<INavLinkCustomInterface_*_&&,FWeakObjectPtr_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int local_res8 [2];
  int local_28 [2];
  ulonglong *local_20;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  puVar1 = (undefined4 *)param_3[1];
  bVar8 = false;
  *param_2 = local_28[0];
  *local_20 = *(ulonglong *)*param_3;
  *(undefined4 *)(local_20 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_20 + 0xc) = puVar1[1];
  *(undefined4 *)(local_20 + 2) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)local_res8[0] * 0x18),local_20,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142b7e418;
    }
  }
  cVar2 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar2 == '\0') {
    iVar4 = (int)(*local_20 >> 4);
    uVar6 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar7 = -(uVar6 + iVar4) ^ uVar6 >> 0xd;
    uVar5 = (iVar4 - uVar6) - uVar7 ^ uVar7 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 0x10;
    uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar7 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 << 10;
    uVar5 = ((uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x14) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 2) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_142b7e418:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 142b7e440 FUN_142b7e440 body=627 status=ok
// SIG undefined FUN_142b7e440(void)

int * FUN_142b7e440(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint *_Src;
  bool bVar10;
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + *param_1);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  puVar1 = (uint *)param_3[1];
  _Src = (uint *)((longlong)iVar6 * 0x20 + *param_1);
  *_Src = *(uint *)*param_3;
  _Src[2] = *puVar1;
  _Src[3] = puVar1[1];
  *(undefined8 *)(_Src + 4) = *(undefined8 *)(puVar1 + 2);
  _Src[6] = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 1) {
    if (uVar9 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x20 + *param_1) == *_Src) goto LAB_142b7e59b;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_142b7e59b:
    bVar10 = iVar5 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar5 * 0x20 + *param_1),_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar5;
      goto LAB_142b7e68a;
    }
  }
  if (3 < uVar9) {
    uVar3 = (uVar9 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar5 = 0x20;
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar7;
    }
    uVar3 = (uVar9 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar9 = (int)param_1[9] - 1U & *_Src;
    _Src[7] = uVar9;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar4 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) = iVar6
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142b7e68a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 142b7e6c0 FUN_142b7e6c0 body=512 status=ok
// SIG undefined FUN_142b7e6c0(void)

int * FUN_142b7e6c0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  void *_Src;
  void *_Dst;
  uint uVar8;
  bool bVar9;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar7 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (void *)((longlong)iVar7 * 0x40 + *param_1);
  puVar4 = (undefined4 *)param_3[1];
  FNavAgentProperties::FNavAgentProperties(_Src,*param_3);
  bVar9 = false;
  *(undefined4 *)((longlong)_Src + 0x30) = *puVar4;
  *(undefined4 *)((longlong)_Src + 0x34) = puVar4[1];
  *(undefined4 *)((longlong)_Src + 0x38) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)local_res8[0] * 0x40 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142b7e89e;
    }
  }
  cVar5 = TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    uVar8 = (((int)(short)(int)*(float *)((longlong)_Src + 4) << 0x10 |
             (int)(short)(int)*(float *)((longlong)_Src + 8)) ^
            (int)*(float *)((longlong)_Src + 0xc)) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x3c) = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x38) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_142b7e89e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 142b7e8c0 GenerateKeyArray<TSizedDefaultAllocator<32>_> body=448 status=ok
// SIG undefined GenerateKeyArray<TSizedDefaultAllocator<32>_>(void)

void TMapBase<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>_>
     ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  int iVar7;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar4 = (int)param_2[1];
  if (iVar4 != 0) {
    plVar5 = (longlong *)(*param_2 + 0x20);
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar7) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_2,iVar7);
  }
  iVar4 = (int)param_1[5];
  puStack_30 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar4 != 0) {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puStack_30;
    }
    uVar1 = *puVar6;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar1 == 0) {
      lVar3 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar2 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar2) goto LAB_142b7e9bd;
      uVar1 = puVar6[lVar3 + 1];
    }
    uStack_64 = -uVar1 & uVar1;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_58._4_4_ = (uStack_50 - iVar7) + 0x1f;
    if (iVar4 < local_58._4_4_) {
LAB_142b7e9bd:
      local_58._4_4_ = iVar4;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iVar7 = local_58._4_4_;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  bVar2 = local_58._4_4_ < iVar4;
  local_58 = puStack_30;
  local_40 = param_1;
  uStack_50 = 0xffffffff;
  iStack_4c = iVar7;
  if (bVar2) {
    do {
      iVar7 = iStack_4c;
      iVar4 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      lVar3 = (longlong)iVar4 * 0x30 + *param_2;
      if (lVar3 != 0) {
        FNavAgentProperties::FNavAgentProperties(lVar3,(longlong)iVar7 * 0x40 + *param_1);
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return;
}



// FUNCTION 142b7ea80 GetCurrent<UNavigationSystemV1> body=115 status=ok
// SIG undefined GetCurrent<UNavigationSystemV1>(void)

longlong FNavigationSystem::GetCurrent<UNavigationSystemV1>(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = GetWorldFromContextObject();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar2 + 0x138);
  if (lVar2 != 0) {
    lVar3 = FUN_142ba9430();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 142b7eb00 FUN_142b7eb00 body=177 status=ok
// SIG undefined FUN_142b7eb00(void)

longlong FUN_142b7eb00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  puVar3 = (undefined4 *)FUN_143716940(local_18,0,0);
  local_28 = *puVar3;
  uStack_24 = puVar3[1];
  uStack_20 = puVar3[2];
  uStack_1c = puVar3[3];
  lVar4 = FUN_143716af0(param_1,param_2,&local_28);
  if (lVar4 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(lVar4 + 0x18);
  if (*(longlong *)(lVar4 + 0x20) != 0) {
    cVar2 = FUN_143714910(*(longlong *)(lVar4 + 0x20),&DAT_1467e3a30);
    if ((cVar2 != '\0') && (lVar1 != 0)) {
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      FUN_14370c150(lVar4);
      return lVar1;
    }
  }
  FUN_14370c150(lVar4);
  return 0;
}



// FUNCTION 142b7ebc0 FUN_142b7ebc0 body=49 status=ok
// SIG undefined FUN_142b7ebc0(void)

undefined8 FUN_142b7ebc0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_143714910(param_2,param_3);
    if (cVar1 != '\0') {
      return param_1;
    }
  }
  return 0;
}



// FUNCTION 142b7ec00 TBaseStaticDelegateInstance<void___cdecl(void),FAsyncPathFindingQuery> body=142 status=ok
// SIG undefined TBaseStaticDelegateInstance<void___cdecl(void),FAsyncPathFindingQuery>(void)

undefined8 *
TBaseStaticDelegateInstance<void___cdecl(void),FAsyncPathFindingQuery>::
TBaseStaticDelegateInstance<void___cdecl(void),FAsyncPathFindingQuery>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_c8 [192];
  
  uVar1 = FAsyncPathFindingQuery::FAsyncPathFindingQuery(local_c8,param_3);
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_1457d28d8;
  FAsyncPathFindingQuery::FAsyncPathFindingQuery(param_1 + 2,uVar1);
  uVar2 = FDelegateHandle::GenerateNewID();
  param_1[0x19] = uVar2;
  FAsyncPathFindingQuery::~FAsyncPathFindingQuery(uVar1);
  *param_1 = &PTR_GetPoolName_1457d2920;
  FAsyncPathFindingQuery::~FAsyncPathFindingQuery(param_3);
  return param_1;
}



// FUNCTION 142b7ec90 FUN_142b7ec90 body=245 status=ok
// SIG undefined FUN_142b7ec90(void)

undefined8 *
FUN_142b7ec90(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

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
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  plVar4 = (longlong *)param_4[1];
  uVar10 = *param_4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_1457d2968;
  FWeakObjectPtr::operator=(param_1 + 1);
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
  *param_1 = &PTR_FUN_1457d29b0;
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



// FUNCTION 142b7ed90 TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),TArray<FAsyncPathFindingQuery,FDefaultAllocator>_> body=187 status=ok
// SIG undefined TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),TArray<FAsyncPathFindingQuery,FDefaultAllocator>_>(void)

undefined8 *
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),TArray<FAsyncPathFindingQuery,FDefaultAllocator>_>
::
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,void___cdecl(void),TArray<FAsyncPathFindingQuery,FDefaultAllocator>_>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  FUN_142b7d670(&local_18,*param_4,*(undefined4 *)(param_4 + 1),0,0);
  *param_1 = &PTR_FUN_1457d2848;
  FWeakObjectPtr::operator=(param_1 + 1,param_2);
  param_1[2] = param_3;
  param_1[3] = 0;
  FUN_142b7d670(param_1 + 3,local_18,local_10,0,0);
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar1;
  TArray<FAsyncPathFindingQuery,FDefaultAllocator>::
  ~TArray<FAsyncPathFindingQuery,FDefaultAllocator>(&local_18);
  *param_1 = &PTR_FUN_1457d2890;
  TArray<FAsyncPathFindingQuery,FDefaultAllocator>::
  ~TArray<FAsyncPathFindingQuery,FDefaultAllocator>(param_4);
  return param_1;
}



// FUNCTION 142b7ee50 FUN_142b7ee50 body=374 status=ok
// SIG undefined FUN_142b7ee50(void)

undefined8 * FUN_142b7ee50(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 **ppuVar7;
  undefined8 *local_18;
  longlong *local_10;
  
  FUN_142b7efd0();
  *(uint *)(param_1 + 0x9a) = *(uint *)(param_1 + 0x9a) & 0xfffffff3;
  *param_1 = &PTR__scalar_deleting_destructor__1457cd568;
  param_1[0x8b] = &PTR_LAB_1457cddc8;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    param_1[0x9c] = AAbstractNavData::FindPathAbstract;
    param_1[0x9d] = AAbstractNavData::FindPathAbstract;
    param_1[0x9e] = FOutputDevice::CanBeUsedOnAnyThread;
    param_1[0x9f] = FOutputDevice::CanBeUsedOnAnyThread;
    lVar4 = param_1[0xaa];
    param_1[0xa0] = AAbstractNavData::GetRandomPointInNavigableRadius;
    puVar5 = (undefined8 *)operator_new(8);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_1457cd4e8;
    }
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
      plVar6[2] = (longlong)puVar5;
    }
    ppuVar7 = (undefined8 **)(lVar4 + 0x10);
    local_18 = puVar5;
    local_10 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_18,puVar5,puVar5);
    if (ppuVar7 != &local_18) {
      *ppuVar7 = puVar5;
      local_18 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar4 + 0x18,&local_10);
      plVar6 = local_10;
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 142b7efd0 FUN_142b7efd0 body=842 status=ok
// SIG undefined FUN_142b7efd0(void)

undefined8 * FUN_142b7efd0(undefined8 *param_1)

{
  int *piVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *local_30;
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__1457ccaf8;
  param_1[0x8b] = &PTR_LAB_1457cd358;
  FUN_142243f40(param_1 + 0x8d,0x420c0000,0x43100000);
  *(uint *)(param_1 + 0x9a) = *(uint *)(param_1 + 0x9a) & 0xfffffffc;
  pplVar2 = (longlong **)(param_1 + 0xaa);
  *(uint *)(param_1 + 0x9a) = *(uint *)(param_1 + 0x9a) | 0xc;
  plVar9 = (longlong *)0x0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 3;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0xd;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *pplVar2 = (longlong *)0x0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(uint *)(param_1 + 0xc2) = *(uint *)(param_1 + 0xc2) & 0xfffffffe;
  iVar4 = DAT_146b2bb60;
  LOCK();
  DAT_146b2bb60 = DAT_146b2bb60 + 1;
  UNLOCK();
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0x7f;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(short *)((longlong)param_1 + 0x614) = (short)iVar4 + 1;
  plVar5 = (longlong *)operator_new(0x28);
  plVar10 = plVar9;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *(undefined4 *)(plVar5 + 4) = 0x800;
    plVar10 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_1450167a8;
    plVar5[2] = (longlong)plVar10;
    plVar9 = plVar5;
  }
  local_38 = plVar10;
  local_30 = plVar9;
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
      if (0 < iVar4) goto LAB_142b7f24a;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar10 = (longlong)plVar10;
    plVar5 = (longlong *)plVar10[1];
    if (plVar9 != plVar5) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar10[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar10[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
  }
LAB_142b7f24a:
  if (pplVar2 != &local_38) {
    *pplVar2 = plVar10;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xab,&local_30);
  }
  plVar9 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_30 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x9b) = 0x3f000000;
  puVar6 = (undefined8 *)FName::FName(local_res8,L"SceneComp",1);
  uVar3 = *puVar6;
  uVar7 = FUN_1429ff160();
  lVar8 = FUN_141752410(param_1,uVar3,uVar7,uVar7,1,0,0);
  param_1[0x2d] = lVar8;
  *(undefined1 *)(lVar8 + 0x24e) = 0;
  return param_1;
}



// FUNCTION 142b7f320 FUN_142b7f320 body=542 status=ok
// SIG undefined FUN_142b7f320(void)

undefined8 * FUN_142b7f320(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_28;
  longlong *local_20;
  
  FUN_142b7efd0();
  *param_1 = &PTR__scalar_deleting_destructor__1457ccaf8;
  param_1[0x8b] = &PTR_LAB_1457cd358;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    return param_1;
  }
  plVar4 = (longlong *)operator_new(0x60);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (longlong)&PTR__scalar_deleting_destructor__1457d1588;
    plVar4[3] = 0;
    plVar4[4] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(plVar4 + 5));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar4 + 5),4000);
    plVar7 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar7;
    plVar4 = plVar5;
  }
  plVar5 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  local_28 = plVar7;
  local_20 = plVar4;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_142b7f4ae;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar7;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
LAB_142b7f4ae:
  if ((longlong **)(param_1 + 0xa1) != &local_28) {
    param_1[0xa1] = plVar7;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa2,&local_20);
  }
  plVar7 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return param_1;
}



// FUNCTION 142b7f540 FUN_142b7f540 body=868 status=ok
// SIG undefined FUN_142b7f540(void)

undefined8 * FUN_142b7f540(undefined8 *param_1)

{
  longlong *plVar1;
  float fVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1457d20d8;
  plVar1 = param_1 + 0xa6;
  param_1[0x8b] = &PTR_LAB_1457d27c8;
  param_1[0x8c] = &PTR_LAB_1457d2820;
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xffffffe0;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x91) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x92) = 0x3f000000;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0xa0] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  uVar3 = *(uint *)((longlong)param_1 + 0x4d4);
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x42080000;
  *(undefined4 *)(param_1 + 0x91) = 0x43100000;
  *(uint *)((longlong)param_1 + 0x4d4) = uVar3 & 0xfffffe7f | 0x60;
  *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x9c) = DAT_1468b5d88._4_4_;
  *(uint *)((longlong)param_1 + 0x4d4) = uVar3 & 0xfffffe6f | 0x68;
  param_1[0xa2] = DAT_146687978;
  uStack_10 = 0x437a0000;
  *(undefined4 *)(param_1 + 0xa3) = DAT_146687980;
  param_1[0x96] = 0x4248000042480000;
  *(undefined4 *)(param_1 + 0x97) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  puVar6 = (undefined8 *)FName::FName(local_res8,L"CollisionCylinder",1);
  uVar4 = *puVar6;
  uVar7 = FUN_142912e90();
  lVar8 = FUN_141752410(param_1,uVar4,uVar7,uVar7,1,0,0);
  fVar2 = *(float *)((longlong)param_1 + 0x484);
  fVar11 = *(float *)(param_1 + 0x91) * 0.5;
  fVar10 = fVar2;
  if (fVar2 <= 0.0) {
    fVar10 = 0.0;
  }
  param_1[0x8d] = lVar8;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  *(float *)(lVar8 + 0x714) = fVar10;
  if (fVar11 <= fVar2) {
    fVar11 = fVar2;
  }
  *(float *)(lVar8 + 0x710) = fVar11;
  (**(code **)(*(longlong *)param_1[0x8d] + 0x640))((longlong *)param_1[0x8d],DAT_146aefc58);
  *(undefined1 *)(param_1[0x8d] + 0x303) = 0;
  FUN_142398900(param_1[0x8d],1);
  FUN_14234fe40(param_1[0x8d],0);
  param_1[0x2d] = param_1[0x8d];
  puVar6 = (undefined8 *)FName::FName(local_res8,L"InvokerComponent",1);
  uVar4 = *puVar6;
  uVar7 = FUN_142ba9ce0();
  lVar8 = FUN_141752410(param_1,uVar4,uVar7,uVar7,1,0,0);
  param_1[0x8e] = lVar8;
  uStack_10 = 0;
  *(byte *)(lVar8 + 0xba) =
       *(byte *)(lVar8 + 0xba) ^ (*(char *)(param_1 + 0x8f) * '\x02' ^ *(byte *)(lVar8 + 0xba)) & 2;
  local_18 = &LAB_142b920c0;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_14428ae88;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar8;
    *plVar9 = (longlong)&PTR_FUN_14428aed0;
  }
  if (&local_18 != plVar1) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0xa7) != 0) &&
         (plVar5 = (longlong *)*plVar1, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar1 != 0) {
          lVar8 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar8;
        }
        *(undefined4 *)(param_1 + 0xa7) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar1);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    lVar8 = FMemory::Realloc(plVar9,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  return param_1;
}



// FUNCTION 142b7f8b0 FAsyncPathFindingQuery body=155 status=ok
// SIG undefined FAsyncPathFindingQuery(void)

longlong FAsyncPathFindingQuery::FAsyncPathFindingQuery(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_142b80820();
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(longlong *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((((longlong *)(param_2 + 0x88) != (longlong *)(param_1 + 0x88)) &&
      (*(int *)(param_2 + 0x90) != 0)) &&
     (plVar1 = *(longlong **)(param_2 + 0x88), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))();
  }
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  lVar2 = *(longlong *)(param_2 + 0xa8);
  *(longlong *)(param_1 + 0xa8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  return param_1;
}



// FUNCTION 142b7f950 FUN_142b7f950 body=2657 status=ok
// SIG undefined FUN_142b7f950(void)

undefined8 FUN_142b7f950(undefined8 param_1)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *local_18;
  int local_10;
  
  pplVar1 = (longlong **)FUN_142252cf0();
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (&local_18 != pplVar1) {
    if (plVar2 == (longlong *)0x0) {
      if ((*(int *)(pplVar1 + 1) != 0) && (plVar6 = *pplVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar6;
        }
        *(undefined4 *)(pplVar1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,pplVar1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  pplVar1 = (longlong **)FUN_142252d30();
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (&local_18 != pplVar1) {
    if (plVar2 == (longlong *)0x0) {
      if ((*(int *)(pplVar1 + 1) != 0) && (plVar6 = *pplVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar6;
        }
        *(undefined4 *)(pplVar1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,pplVar1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  pplVar1 = (longlong **)FUN_142252d20();
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144510c40;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144510c88;
  }
  if (&local_18 != pplVar1) {
    if (plVar2 == (longlong *)0x0) {
      if ((*(int *)(pplVar1 + 1) != 0) && (plVar6 = *pplVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar6;
        }
        *(undefined4 *)(pplVar1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,pplVar1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  pplVar1 = (longlong **)FUN_142251cb0();
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144510c40;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144510c88;
  }
  if (&local_18 != pplVar1) {
    if (plVar2 == (longlong *)0x0) {
      if ((*(int *)(pplVar1 + 1) != 0) && (plVar6 = *pplVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar6;
        }
        *(undefined4 *)(pplVar1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,pplVar1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  pplVar1 = (longlong **)FUN_142251dd0();
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_1457d29f8;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_1457d2a40;
  }
  if (&local_18 != pplVar1) {
    if (plVar2 == (longlong *)0x0) {
      if ((*(int *)(pplVar1 + 1) != 0) && (plVar6 = *pplVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar6;
        }
        *(undefined4 *)(pplVar1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,pplVar1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  pplVar1 = (longlong **)FUN_142251d90();
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_1457d2a88;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_1457d2ad0;
  }
  if (&local_18 != pplVar1) {
    if (plVar2 == (longlong *)0x0) {
      if ((*(int *)(pplVar1 + 1) != 0) && (plVar6 = *pplVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar6;
        }
        *(undefined4 *)(pplVar1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,pplVar1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  pplVar1 = (longlong **)FUN_142251ce0();
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144510c40;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144510c88;
  }
  if (&local_18 != pplVar1) {
    if (plVar2 == (longlong *)0x0) {
      if ((*(int *)(pplVar1 + 1) != 0) && (plVar6 = *pplVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar6;
        }
        *(undefined4 *)(pplVar1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,pplVar1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  pplVar1 = (longlong **)FUN_142251d10();
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144510c40;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144510c88;
  }
  if (&local_18 != pplVar1) {
    if (plVar2 == (longlong *)0x0) {
      if ((*(int *)(pplVar1 + 1) != 0) && (plVar6 = *pplVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar6;
        }
        *(undefined4 *)(pplVar1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,pplVar1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  pplVar1 = (longlong **)FUN_142251d80();
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144510c40;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144510c88;
  }
  if (&local_18 != pplVar1) {
    if (plVar2 == (longlong *)0x0) {
      if ((*(int *)(pplVar1 + 1) != 0) && (plVar6 = *pplVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar6;
        }
        *(undefined4 *)(pplVar1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,pplVar1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  pplVar1 = (longlong **)FUN_142251dc0();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  puVar4 = (undefined8 *)operator_new(0x18,&local_18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_144510c40;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &PTR_GetPoolName_144510c88;
  }
  plVar2 = local_18;
  if (&local_18 != pplVar1) {
    if ((local_10 == 0) || (local_18 == (longlong *)0x0)) {
      if ((*(int *)(pplVar1 + 1) != 0) && (plVar6 = *pplVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar6;
        }
        *(undefined4 *)(pplVar1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*local_18 + 0x30))(local_18,pplVar1);
    }
  }
  if (local_10 != 0) {
    if (plVar2 == (longlong *)0x0) goto LAB_142b80083;
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    plVar2 = (longlong *)FMemory::Realloc(plVar2,0,0);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
LAB_142b80083:
  uVar5 = FUN_142252130();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  puVar4 = (undefined8 *)operator_new(0x18,&local_18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_144510c40;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar7;
    *puVar4 = &PTR_GetPoolName_144510c88;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(uVar5,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  uVar5 = FUN_142250c90();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  puVar4 = (undefined8 *)operator_new(0x18,&local_18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_1457d2b18;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar7;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(uVar5,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  uVar5 = FUN_14224f500();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  puVar4 = (undefined8 *)operator_new(0x18,&local_18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_1457d2b58;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar7;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(uVar5,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  uVar5 = FUN_14224f4c0();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  puVar4 = (undefined8 *)operator_new(0x20,&local_18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_144d72168;
    puVar4[1] = FUN_142b8e9b0;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar4[3] = uVar7;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(uVar5,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  uVar5 = FUN_142252cc0();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  puVar4 = (undefined8 *)operator_new(0x20,&local_18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_144fb1630;
    puVar4[1] = AK::MemoryMgr::StartProfileThreadUsage;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar4[3] = uVar7;
    *puVar4 = &PTR_GetPoolName_144fb1678;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(uVar5,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  uVar5 = FUN_142251d50();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  puVar4 = (undefined8 *)operator_new(0x18,&local_18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_1457d2b98;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar7;
    *puVar4 = &PTR_GetPoolName_1457d2be0;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(uVar5,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  uVar5 = FUN_142250060();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  puVar4 = (undefined8 *)operator_new(0x20,&local_18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_143f3f148;
    puVar4[1] = FUN_142b8efa0;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar4[3] = uVar7;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(uVar5,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  uVar5 = FUN_142252ee0();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  puVar4 = (undefined8 *)operator_new(0x18,&local_18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_1457d2c28;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar7;
    *puVar4 = &PTR_GetPoolName_1457d2c70;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(uVar5,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  uVar5 = FUN_14224b700();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  puVar4 = (undefined8 *)operator_new(0x18,&local_18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_1457d2cb8;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar7;
    *puVar4 = &PTR_GetPoolName_1457d2d00;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(uVar5,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  return param_1;
}



// FUNCTION 142b803c0 FUN_142b803c0 body=22 status=ok
// SIG undefined FUN_142b803c0(void)

longlong FUN_142b803c0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 142b80580 ChunkSettings body=23 status=ok
// SIG undefined ChunkSettings(void)

undefined4 * hkaiNavVolumeGenerationSettings::ChunkSettings::ChunkSettings(undefined4 *param_1)

{
  *param_1 = 0x1000100;
  *(undefined2 *)(param_1 + 1) = 0x100;
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 142b80600 FUN_142b80600 body=34 status=ok
// SIG undefined FUN_142b80600(void)

undefined8 * FUN_142b80600(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x43fa0000;
  *(undefined4 *)(param_1 + 3) = 0x42c80000;
  return param_1;
}



// FUNCTION 142b80630 FNavGraphNode body=42 status=ok
// SIG undefined FNavGraphNode(void)

undefined8 * FNavGraphNode::FNavGraphNode(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
            (param_1 + 1,4);
  return param_1;
}



// FUNCTION 142b80660 FUN_142b80660 body=93 status=ok
// SIG undefined FUN_142b80660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142b80660(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = uRam0000000146b2ba3c;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(uint *)((longlong)param_1 + 0x1c) = uVar2;
  uVar2 = uRam0000000146b2ba34 & uRam0000000146b2ba44;
  uVar3 = uRam0000000146b2ba38 & uRam0000000146b2ba48;
  uVar4 = uRam0000000146b2ba3c & uRam0000000146b2ba4c;
  *(uint *)(param_1 + 6) = _DAT_146b2ba30 & _DAT_146b2ba40;
  *(uint *)((longlong)param_1 + 0x34) = uVar2;
  *(uint *)(param_1 + 7) = uVar3;
  *(uint *)((longlong)param_1 + 0x3c) = uVar4;
  *param_1 = *(undefined8 *)(param_2 + 0x118);
  uVar1 = *(undefined8 *)(param_2 + 0x218);
  param_1[2] = *(undefined8 *)(param_2 + 0x210);
  param_1[3] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x228);
  param_1[4] = *(undefined8 *)(param_2 + 0x220);
  param_1[5] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x238);
  param_1[6] = *(undefined8 *)(param_2 + 0x230);
  param_1[7] = uVar1;
  return param_1;
}



// FUNCTION 142b806c0 FNavigationPath body=338 status=ok
// SIG undefined FNavigationPath(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FNavigationPath::FNavigationPath(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457cca80;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = DAT_146b2bad0;
  param_1[0xf] = DAT_146b2bad8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffcdf | 0xd0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  param_1[0x16] = DAT_146687978;
  *(undefined4 *)(param_1 + 0x17) = DAT_146687980;
  *(undefined8 *)((longlong)param_1 + 0xbc) = DAT_146687978;
  *(undefined4 *)((longlong)param_1 + 0xc4) = DAT_146687980;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(uint *)((longlong)param_1 + 0xdc) = *(uint *)((longlong)param_1 + 0xdc) | 1;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xbf800000;
  param_1[0x1d] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1e) = DAT_1468b5d98;
  FUN_142b90d80(param_1);
  return param_1;
}



// FUNCTION 142b80820 FUN_142b80820 body=350 status=ok
// SIG undefined FUN_142b80820(void)

longlong FUN_142b80820(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *(undefined8 *)(param_2 + 0x20);
  local_10 = *(longlong *)(param_2 + 0x28);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FWeakObjectPtr::Get(param_2);
  FPathFindingQueryData::FPathFindingQueryData
            (param_1,uVar6,param_2 + 8,param_2 + 0x14,&local_18,*(undefined4 *)(param_2 + 0x30),
             *(byte *)(param_2 + 0x34) & 1);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  lVar7 = *(longlong *)(param_2 + 0x48);
  *(longlong *)(param_1 + 0x48) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  FNavAgentProperties::FNavAgentProperties(param_1 + 0x50,param_2 + 0x50);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x38);
    if (cVar5 != '\0') {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x38);
      local_20 = *(longlong **)(lVar7 + 0x558);
      local_28 = *(undefined8 *)(lVar7 + 0x550);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      if ((undefined8 *)(param_1 + 0x20) != &local_28) {
        *(undefined8 *)(param_1 + 0x20) = local_28;
        local_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_20);
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
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 142b80980 FUN_142b80980 body=584 status=ok
// SIG undefined FUN_142b80980(void)

longlong FUN_142b80980(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_28 = *param_6;
  local_20 = param_6[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  lVar10 = 0;
  if (param_2 != (longlong *)0x0) {
    lVar7 = (**(code **)(*param_2 + 8))(param_2);
    lVar8 = UObject::GetPrivateStaticClass();
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
      lVar10 = lVar7;
    }
  }
  FPathFindingQueryData::FPathFindingQueryData(param_1,lVar10,param_4,param_5,&local_28,0,1);
  FWeakObjectPtr::operator=(param_1 + 0x38,param_3);
  *(undefined8 *)(param_1 + 0x40) = *param_7;
  lVar10 = param_7[1];
  *(longlong *)(param_1 + 0x48) = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  uVar9 = (**(code **)(*param_2 + 0x10))(param_2);
  FNavAgentProperties::FNavAgentProperties(param_1 + 0x50,uVar9);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x38);
    if (cVar6 != '\0') {
      lVar10 = FWeakObjectPtr::Get(param_1 + 0x38);
      local_30 = *(longlong **)(lVar10 + 0x558);
      local_38 = *(undefined8 *)(lVar10 + 0x550);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      if ((undefined8 *)(param_1 + 0x20) != &local_38) {
        *(undefined8 *)(param_1 + 0x20) = local_38;
        local_38 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_30);
      }
      plVar4 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  plVar4 = (longlong *)param_6[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  plVar4 = (longlong *)param_7[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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



// FUNCTION 142b80bd0 FUN_142b80bd0 body=708 status=ok
// SIG undefined FUN_142b80bd0(void)

longlong FUN_142b80bd0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  local_58 = *param_6;
  local_50 = param_6[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FPathFindingQueryData::FPathFindingQueryData(param_1,param_2,param_4,param_5,&local_58,0,1);
  FWeakObjectPtr::operator=(param_1 + 0x38,param_3);
  *(undefined8 *)(param_1 + 0x40) = *param_7;
  lVar6 = param_7[1];
  *(longlong *)(param_1 + 0x48) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  FNavAgentProperties::FNavAgentProperties(param_1 + 0x50,&DAT_1465318f0);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x38);
    if (cVar5 != '\0') {
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x38);
      local_60 = *(longlong **)(lVar6 + 0x558);
      local_68 = *(undefined8 *)(lVar6 + 0x550);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      if ((undefined8 *)(param_1 + 0x20) != &local_68) {
        *(undefined8 *)(param_1 + 0x20) = local_68;
        local_68 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_60);
      }
      plVar8 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
  }
  if (param_2 != 0) {
    uVar7 = UNavAgentInterface::GetPrivateStaticClass();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar7);
    if (plVar8 == (longlong *)0x0) {
      lVar6 = FUN_1428dfc70();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar6 = FUN_14222e260(param_2);
        if (lVar6 != 0) {
          uVar7 = (**(code **)(*(longlong *)(lVar6 + 0x458) + 0x10))();
          FUN_1409f69a0(param_1 + 0x50,uVar7);
        }
      }
    }
    else {
      puVar9 = (undefined4 *)(**(code **)(*plVar8 + 0x10))(plVar8);
      *(undefined4 *)(param_1 + 0x50) = *puVar9;
      *(undefined4 *)(param_1 + 0x54) = puVar9[1];
      *(undefined4 *)(param_1 + 0x58) = puVar9[2];
      *(undefined4 *)(param_1 + 0x5c) = puVar9[3];
      *(undefined4 *)(param_1 + 0x60) = puVar9[4];
      local_48 = *(undefined8 *)(puVar9 + 6);
      FString::FString(local_40,puVar9 + 8);
      FSoftObjectPath::operator=(param_1 + 0x68,&local_48);
    }
  }
  plVar8 = (longlong *)param_6[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar8)(plVar8);
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
  plVar8 = (longlong *)param_7[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar8)(plVar8);
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
  return param_1;
}



// FUNCTION 142b80ea0 FUN_142b80ea0 body=1137 status=ok
// SIG undefined FUN_142b80ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_142b80ea0(undefined4 *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fStack_f4;
  longlong local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar8 = *param_2;
  plVar6 = (longlong *)(param_1 + 8);
  *param_1 = *(undefined4 *)(lVar8 + 0xa8);
  param_1[1] = *(undefined4 *)(lVar8 + 0xac);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar8 + 0xb0);
  param_1[4] = *(undefined4 *)(lVar8 + 0xb8);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(lVar8 + 0xbc);
  param_1[7] = *(undefined4 *)(lVar8 + 0xc4);
  *plVar6 = *(longlong *)(lVar8 + 200);
  lVar4 = *(longlong *)(lVar8 + 0xd0);
  *(longlong *)(param_1 + 10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[0xc] = *(undefined4 *)(lVar8 + 0xd8);
  param_1[0xd] = param_1[0xd] ^ (*(uint *)(lVar8 + 0xdc) ^ param_1[0xd]) & 1;
  if (param_3 == 0) {
    param_3 = FWeakObjectPtr::Get(*param_2 + 0x9c);
  }
  FWeakObjectPtr::operator=(param_1 + 0xe,param_3);
  *(longlong *)(param_1 + 0x10) = *param_2;
  lVar8 = param_2[1];
  *(longlong *)(param_1 + 0x12) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  FNavAgentProperties::FNavAgentProperties(param_1 + 0x14,&DAT_1465318f0);
  puVar12 = &DAT_146687978;
  if ((*(uint *)(*param_2 + 0x98) >> 6 & 1) != 0) {
    lVar8 = FWeakObjectPtr::Get(*param_2 + 0x50);
    if (lVar8 != 0) {
      lVar8 = *param_2;
      cVar7 = FUN_14044af00(lVar8 + 0x50,0);
      if (cVar7 == '\0') {
        if (*(int *)(lVar8 + 0x30) < 1) {
          puVar10 = &DAT_146687978;
        }
        else {
          puVar10 = *(undefined8 **)(lVar8 + 0x28);
        }
        puVar11 = &local_9c;
        local_9c = *puVar10;
        local_94 = *(undefined4 *)(puVar10 + 1);
      }
      else {
        plVar5 = *(longlong **)(lVar8 + 0x58);
        if (plVar5 == (longlong *)0x0) {
          lVar8 = FWeakObjectPtr::Get(lVar8 + 0x50);
          lVar8 = *(longlong *)(lVar8 + 0x168);
          if (lVar8 == 0) {
            local_b8 = DAT_1468b5d98;
            puVar10 = &local_c0;
            local_c0 = _DAT_1468b5d90;
          }
          else {
            puVar10 = (undefined8 *)&local_d8;
            local_d8 = *(undefined4 *)(lVar8 + 0x220);
            local_48 = *(undefined4 *)(lVar8 + 0x220);
            uStack_44 = *(undefined4 *)(lVar8 + 0x224);
            uStack_40 = *(undefined4 *)(lVar8 + 0x228);
            uStack_3c = *(undefined4 *)(lVar8 + 0x22c);
            local_d0 = *(undefined4 *)(lVar8 + 0x228);
            uStack_d4 = *(undefined4 *)(lVar8 + 0x224);
          }
          local_ac = *(undefined4 *)(puVar10 + 1);
          puVar9 = &local_b4;
          local_b4 = *puVar10;
        }
        else {
          puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x18))(plVar5,local_60);
        }
        puVar11 = &local_a8;
        local_a8 = *puVar9;
        local_a0 = *(undefined4 *)(puVar9 + 1);
      }
      fVar3 = *(float *)(puVar11 + 1);
      if ((((float)*puVar11 != (float)DAT_146687978) ||
          (fStack_f4 = (float)((ulonglong)*puVar11 >> 0x20), fStack_f4 != DAT_146687978._4_4_)) ||
         (fVar3 != DAT_146687980)) {
        *(undefined8 *)(param_1 + 2) = *puVar11;
        param_1[4] = fVar3;
      }
    }
  }
  if ((*(uint *)(*param_2 + 0x98) >> 7 & 1) != 0) {
    lVar8 = FWeakObjectPtr::Get(*param_2 + 0x40);
    if (lVar8 != 0) {
      lVar8 = *param_2;
      cVar7 = FUN_14044af00(lVar8 + 0x40,0);
      if (cVar7 == '\0') {
        if (0 < *(int *)(lVar8 + 0x30)) {
          puVar12 = (undefined8 *)
                    ((longlong)(*(int *)(lVar8 + 0x30) + -1) * 0x20 + *(longlong *)(lVar8 + 0x28));
        }
        puVar10 = &local_6c;
        local_6c = *puVar12;
        local_64 = *(undefined4 *)(puVar12 + 1);
      }
      else {
        plVar5 = *(longlong **)(lVar8 + 0x48);
        if (plVar5 == (longlong *)0x0) {
          lVar8 = FWeakObjectPtr::Get(lVar8 + 0x40);
          lVar8 = *(longlong *)(lVar8 + 0x168);
          if (lVar8 == 0) {
            local_88 = DAT_1468b5d98;
            puVar12 = &local_90;
            local_90 = _DAT_1468b5d90;
          }
          else {
            puVar12 = (undefined8 *)&local_cc;
            local_cc = *(undefined4 *)(lVar8 + 0x220);
            local_38 = *(undefined4 *)(lVar8 + 0x220);
            uStack_34 = *(undefined4 *)(lVar8 + 0x224);
            uStack_30 = *(undefined4 *)(lVar8 + 0x228);
            uStack_2c = *(undefined4 *)(lVar8 + 0x22c);
            local_c4 = *(undefined4 *)(lVar8 + 0x228);
            uStack_c8 = *(undefined4 *)(lVar8 + 0x224);
          }
          local_7c = *(undefined4 *)(puVar12 + 1);
          puVar11 = &local_84;
          local_84 = *puVar12;
        }
        else {
          puVar11 = (undefined8 *)(**(code **)(*plVar5 + 0x18))(plVar5,local_54);
        }
        puVar10 = &local_78;
        local_78 = *puVar11;
        local_70 = *(undefined4 *)(puVar11 + 1);
      }
      fVar3 = *(float *)(puVar10 + 1);
      if ((((float)*puVar10 != (float)DAT_146687978) ||
          (fStack_f4 = (float)((ulonglong)*puVar10 >> 0x20), fStack_f4 != DAT_146687978._4_4_)) ||
         (fVar3 != DAT_146687980)) {
        *(undefined8 *)(param_1 + 5) = *puVar10;
        param_1[7] = fVar3;
      }
    }
  }
  if (*plVar6 == 0) {
    cVar7 = FWeakObjectPtr::IsValid(param_1 + 0xe);
    if (cVar7 != '\0') {
      lVar8 = FWeakObjectPtr::Get(param_1 + 0xe);
      local_e0 = *(longlong **)(lVar8 + 0x558);
      local_e8 = *(longlong *)(lVar8 + 0x550);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
        UNLOCK();
      }
      if (plVar6 != &local_e8) {
        *plVar6 = local_e8;
        local_e8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 10,&local_e0);
      }
      plVar6 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_e0 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return param_1;
}



// FUNCTION 142b81320 FPathFindingQueryData body=181 status=ok
// SIG undefined FPathFindingQueryData(void)

longlong FPathFindingQueryData::FPathFindingQueryData
                   (longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined4 param_6,byte param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FWeakObjectPtr::operator=();
  *(undefined8 *)(param_1 + 8) = *param_3;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x14) = *param_4;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_1 + 0x20) = *param_5;
  lVar4 = param_5[1];
  *(longlong *)(param_1 + 0x28) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x30) = param_6;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | (uint)param_7;
  plVar5 = (longlong *)param_5[1];
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



// FUNCTION 142b813e0 FUN_142b813e0 body=172 status=ok
// SIG undefined FUN_142b813e0(void)

undefined1 * FUN_142b813e0(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x138);
    if (lVar1 != 0) {
      lVar3 = FUN_142ba9430();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && ((*(byte *)(lVar1 + 0x39a) & 0x20) != 0)) {
        *param_1 = 1;
        FWeakObjectPtr::operator=(param_1 + 4,lVar1);
        *(byte *)(lVar1 + 0x39a) = *(byte *)(lVar1 + 0x39a) & 0xdf;
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 142b81490 FSimpleLinkNavModifier body=307 status=ok
// SIG undefined FSimpleLinkNavModifier(void)

undefined4 * FSimpleLinkNavModifier::FSimpleLinkNavModifier(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar5 = param_2[4];
  lVar1 = *(longlong *)(param_2 + 2);
  param_1[4] = iVar5;
  if (iVar5 == 0) {
    param_1[5] = 0;
  }
  else {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar5,0);
    lVar6 = *(longlong *)(param_1 + 2);
    puVar4 = (undefined8 *)(lVar1 + 0x44);
    puVar7 = (undefined8 *)(lVar6 + 0x44);
    do {
      FNavigationLinkBase::FNavigationLinkBase(lVar6,(longlong)puVar4 + -0x44);
      lVar6 = lVar6 + 0x50;
      *(undefined8 *)((longlong)puVar7 + -0xc) = *(undefined8 *)((longlong)puVar4 + -0xc);
      *(undefined4 *)((longlong)puVar7 + -4) = *(undefined4 *)((longlong)puVar4 + -4);
      *puVar7 = *puVar4;
      *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 10;
      puVar7 = puVar7 + 10;
    } while (iVar5 != 0);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  TArray<FNavigationSegmentLink,FDefaultAllocator>::CopyToEmpty<FNavigationSegmentLink>
            (param_1 + 6,*(undefined8 *)(param_2 + 6),param_2[8],0,0);
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_1[0x19] ^ (param_1[0x19] ^ param_2[0x19]) & 1;
  uVar3 = (param_1[0x19] ^ param_2[0x19]) & 2 ^ param_1[0x19];
  param_1[0x19] = uVar3;
  param_1[0x19] = (uVar3 ^ param_2[0x19]) & 4 ^ uVar3;
  return param_1;
}



// FUNCTION 142b815d0 FSupportedAreaData body=286 status=ok
// SIG undefined FSupportedAreaData(void)

longlong *
FSupportedAreaData::FSupportedAreaData(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res8;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  lVar3 = 0;
  if (param_2 != 0) {
    lVar1 = UAITask::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      lVar3 = param_2;
      if (lVar2 == lVar1) break;
      lVar2 = *(longlong *)(lVar2 + 0x30);
      lVar3 = 0;
    } while (lVar2 != 0);
  }
  param_1[3] = lVar3;
  if (lVar3 == 0) {
    if ((wchar_t *)*param_1 != L"Invalid") {
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,8);
        iVar4 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar4 + 8;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"Invalid",8);
    }
  }
  else {
    local_res8 = *(undefined8 *)(lVar3 + 0x18);
    FName::ToString(&local_res8,&local_18);
    if (param_1 != &local_18) {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = local_18;
      *(undefined4 *)(param_1 + 1) = local_10;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_c;
      return param_1;
    }
    if (local_18 != 0) {
      FMemory::Free();
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142b816f0 FUN_142b816f0 body=57 status=ok
// SIG undefined FUN_142b816f0(void)

undefined8 * FUN_142b816f0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1457ce090;
  *(undefined4 *)(param_1 + 6) = 0x8000a030;
  return param_1;
}



// FUNCTION 142b81730 FUN_142b81730 body=257 status=ok
// SIG undefined FUN_142b81730(void)

undefined8 * FUN_142b81730(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_141781840();
  *param_1 = &PTR_FUN_1457cde18;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x20;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0xf,0);
  *(undefined4 *)(param_1 + 0x12) = 0x20;
  puVar1 = (undefined8 *)param_1[0x11];
  if ((undefined8 *)param_1[0x11] == (undefined8 *)0x0) {
    puVar1 = param_1 + 0xf;
  }
  *(undefined4 *)puVar1 = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x20;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x13,0);
  *(undefined4 *)(param_1 + 0x16) = 0x20;
  puVar1 = (undefined8 *)param_1[0x15];
  if ((undefined8 *)param_1[0x15] == (undefined8 *)0x0) {
    puVar1 = param_1 + 0x13;
  }
  *(undefined4 *)puVar1 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 142b81840 UOCPlayerRank body=51 status=ok
// SIG undefined UOCPlayerRank(void)

undefined8 * UOCPlayerRank::UOCPlayerRank(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1457ce870;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 142b81880 FUN_142b81880 body=682 status=ok
// SIG undefined FUN_142b81880(void)

undefined8 * FUN_142b81880(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)(param_1 + 5) = 0x3f480000;
  *param_1 = &PTR_FUN_1457cf0c0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f000000;
  *(undefined4 *)(param_1 + 7) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xff;
  *(uint *)((longlong)param_1 + 100) = *(uint *)((longlong)param_1 + 100) & 0xfffffffe;
  *(undefined4 *)(param_1 + 8) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x41200000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 10) = 0x3f7f069e;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xb) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xd) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x41200000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0xf) = 0x3f7f069e;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x10) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined4 *)((longlong)param_1 + 0x94) = 2;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 2;
  *(undefined4 *)(param_1 + 0x13) = 0x47435000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x14) = 0x41200000;
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 1;
  *(undefined4 *)(param_1 + 0x16) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x43fa0000;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(uint *)((longlong)param_1 + 0xbc) = *(uint *)((longlong)param_1 + 0xbc) | 1;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) & 0xfffffffe;
  *(uint *)(param_1 + 0x1f) = *(uint *)(param_1 + 0x1f) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x11c) = *(uint *)((longlong)param_1 + 0x11c) | 1;
  *(undefined4 *)(param_1 + 0x19) = 0x466a6000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x1a) = 0x42200000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x42700000;
  *(undefined4 *)(param_1 + 0x1b) = 0x461c4000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x463b8000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x43160000;
  *(undefined4 *)(param_1 + 0x1d) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 40000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f7d70a4;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x21) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x22) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x23) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x27) = *(uint *)(param_1 + 0x27) | 3;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x25) = 0x3903126f;
  *(undefined4 *)(param_1 + 0x26) = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x459c4000;
  *(undefined4 *)(param_1 + 0x28) = 0x459c4000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x2c) = 0x42c80000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffffe;
  return param_1;
}



// FUNCTION 142b81b30 FUN_142b81b30 body=78 status=ok
// SIG undefined FUN_142b81b30(void)

undefined8 * FUN_142b81b30(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)(param_1 + 6) = 0x8000a030;
  *param_1 = &PTR_FUN_1457ce370;
  *(undefined4 *)(param_1 + 7) = 0x42f00000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42f00000;
  *(undefined4 *)(param_1 + 8) = 0x42800000;
  return param_1;
}



// FUNCTION 142b81b80 FUN_142b81b80 body=43 status=ok
// SIG undefined FUN_142b81b80(void)

undefined8 * FUN_142b81b80(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1457cf338;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142b81bb0 FUN_142b81bb0 body=132 status=ok
// SIG undefined FUN_142b81bb0(void)

undefined8 * FUN_142b81bb0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1457cf5b0;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0x100;
  *(undefined4 *)(param_1 + 5) = 0x1000100;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 7) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x41200000;
  *(undefined4 *)(param_1 + 9) = 0x49742400;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7b;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0x4a989680;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x42c80000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 142b81c40 FUN_142b81c40 body=75 status=ok
// SIG undefined FUN_142b81c40(void)

undefined8 * FUN_142b81c40(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)(param_1 + 6) = 0x8000a030;
  *param_1 = &PTR_FUN_1457ce5f0;
  *(undefined4 *)(param_1 + 7) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42c80000;
  *(undefined1 *)(param_1 + 8) = 1;
  return param_1;
}



// FUNCTION 142b81c90 FUN_142b81c90 body=75 status=ok
// SIG undefined FUN_142b81c90(void)

undefined8 * FUN_142b81c90(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)(param_1 + 6) = 0x8000a030;
  *(undefined4 *)(param_1 + 7) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42c80000;
  *(undefined1 *)(param_1 + 8) = 1;
  *param_1 = &PTR_FUN_1457ce5f0;
  return param_1;
}



// FUNCTION 142b81ce0 URecastFilter_UseDefaultArea body=60 status=ok
// SIG undefined URecastFilter_UseDefaultArea(void)

undefined8 * URecastFilter_UseDefaultArea::URecastFilter_UseDefaultArea(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffc;
  *(undefined2 *)(param_1 + 7) = 0xffff;
  *param_1 = &PTR_FUN_1457cc7f8;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  return param_1;
}



// FUNCTION 142b81d20 FUN_142b81d20 body=62 status=ok
// SIG undefined FUN_142b81d20(void)

undefined8 * FUN_142b81d20(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1457cf828;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 5) = 0x42b20000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x42b40000;
  return param_1;
}



// FUNCTION 142b81d60 FUN_142b81d60 body=118 status=ok
// SIG undefined FUN_142b81d60(void)

undefined8 * FUN_142b81d60(undefined8 *param_1)

{
  FUN_141781840();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457cfb68;
  *(undefined4 *)(param_1 + 5) = 0x42b20000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x42b40000;
  *(undefined4 *)(param_1 + 0xb) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x42480000;
  *(undefined4 *)(param_1 + 0xc) = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x40a00000;
  return param_1;
}



// FUNCTION 142b81de0 FUN_142b81de0 body=91 status=ok
// SIG undefined FUN_142b81de0(void)

undefined8 * FUN_142b81de0(undefined8 *param_1)

{
  FUN_141781840();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_1457cfde8;
  *(undefined4 *)(param_1 + 5) = 0x42b20000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x42b40000;
  *(undefined4 *)(param_1 + 0xb) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x43960000;
  param_1[0xc] = 0x42c80000;
  *(undefined4 *)(param_1 + 0xd) = 0x42c80000;
  return param_1;
}



// FUNCTION 142b81e40 FUN_142b81e40 body=91 status=ok
// SIG undefined FUN_142b81e40(void)

undefined8 * FUN_142b81e40(undefined8 *param_1)

{
  FUN_141781840();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_1457d0068;
  *(undefined4 *)(param_1 + 5) = 0x42b20000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x42b40000;
  *(undefined4 *)(param_1 + 0xb) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x42480000;
  *(undefined4 *)(param_1 + 0xc) = 0x42480000;
  *(undefined8 *)((longlong)param_1 + 100) = 0x42c80000;
  return param_1;
}



// FUNCTION 142b81ea0 FUN_142b81ea0 body=132 status=ok
// SIG undefined FUN_142b81ea0(void)

undefined8 * FUN_142b81ea0(undefined8 *param_1)

{
  FUN_141781840();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457d0308;
  *(undefined4 *)(param_1 + 5) = 0x42b20000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x42b40000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f480000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x42480000;
  *(undefined4 *)(param_1 + 0xc) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x43160000;
  *(undefined4 *)(param_1 + 0xd) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x43160000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  return param_1;
}



// FUNCTION 142b81f30 FUN_142b81f30 body=56 status=ok
// SIG undefined FUN_142b81f30(void)

undefined8 * FUN_142b81f30(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1457d0588;
  param_1[6] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 7) = DAT_1464aa730;
  return param_1;
}



// FUNCTION 142b81f70 FUN_142b81f70 body=93 status=ok
// SIG undefined FUN_142b81f70(void)

undefined8 * FUN_142b81f70(undefined8 *param_1)

{
  UNavAreaBase::UNavAreaBase();
  *param_1 = &PTR__scalar_deleting_destructor__1457cc548;
  FNavAgentSelector::FNavAgentSelector((longlong)param_1 + 0x3c);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = DAT_1464aa74c;
  *(undefined2 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 10) = 3;
  return param_1;
}



// FUNCTION 142b81fd0 FUN_142b81fd0 body=107 status=ok
// SIG undefined FUN_142b81fd0(void)

undefined8 * FUN_142b81fd0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  UNavAreaBase::UNavAreaBase();
  *param_1 = &PTR__scalar_deleting_destructor__1457cc548;
  FNavAgentSelector::FNavAgentSelector((longlong)param_1 + 0x3c);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0x3f800000;
  uVar1 = DAT_1464aa74c;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x44) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__1457d0ab0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 10) = 3;
  return param_1;
}



// FUNCTION 142b82040 FUN_142b82040 body=398 status=ok
// SIG undefined FUN_142b82040(void)

undefined8 * FUN_142b82040(undefined8 *param_1)

{
  undefined8 uVar1;
  
  UNavAreaBase::UNavAreaBase();
  *param_1 = &PTR__scalar_deleting_destructor__1457cc548;
  FNavAgentSelector::FNavAgentSelector();
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = DAT_1464aa74c;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(undefined2 *)((longlong)param_1 + 0x44) = 1;
  *param_1 = &PTR_FUN_1457d0d68;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 10) = 3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0xe] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0xf] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x10] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x11] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x12] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x13] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x14] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x15] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x16] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x17] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x18] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x19] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x1a] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x1b] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x1c] = uVar1;
  uVar1 = UAITask_LockLogic::StaticClass();
  param_1[0x1d] = uVar1;
  return param_1;
}



// FUNCTION 142b821d0 FUN_142b821d0 body=103 status=ok
// SIG undefined FUN_142b821d0(void)

undefined8 * FUN_142b821d0(undefined8 *param_1)

{
  UNavAreaBase::UNavAreaBase();
  *param_1 = &PTR__scalar_deleting_destructor__1457cc548;
  FNavAgentSelector::FNavAgentSelector((longlong)param_1 + 0x3c);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = DAT_1464aa74c;
  *(undefined2 *)((longlong)param_1 + 0x44) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__1457cc548;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 10) = 3;
  return param_1;
}



// FUNCTION 142b82240 FUN_142b82240 body=111 status=ok
// SIG undefined FUN_142b82240(void)

undefined8 * FUN_142b82240(undefined8 *param_1)

{
  UNavAreaBase::UNavAreaBase();
  *param_1 = &PTR__scalar_deleting_destructor__1457cc548;
  FNavAgentSelector::FNavAgentSelector();
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457d0800;
  *(undefined4 *)(param_1 + 7) = 0xff000080;
  param_1[6] = 0x7f7fc99e;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 10) = 3;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 142b822b0 FUN_142b822b0 body=105 status=ok
// SIG undefined FUN_142b822b0(void)

undefined8 * FUN_142b822b0(undefined8 *param_1)

{
  UNavAreaBase::UNavAreaBase();
  *param_1 = &PTR__scalar_deleting_destructor__1457cc548;
  FNavAgentSelector::FNavAgentSelector();
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = DAT_1464aa74c;
  *param_1 = &PTR__scalar_deleting_destructor__1457cc548;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0x7f7fc99e;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 10) = 2;
  return param_1;
}



// FUNCTION 142b82320 FUN_142b82320 body=118 status=ok
// SIG undefined FUN_142b82320(void)

undefined8 * FUN_142b82320(undefined8 *param_1)

{
  UNavAreaBase::UNavAreaBase();
  *param_1 = &PTR__scalar_deleting_destructor__1457cc548;
  FNavAgentSelector::FNavAgentSelector((longlong)param_1 + 0x3c);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__1457cc548;
  *(undefined4 *)(param_1 + 7) = 0xff7f3300;
  param_1[6] = 0x49742400;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 10) = 1;
  return param_1;
}



// FUNCTION 142b823a0 FUN_142b823a0 body=350 status=ok
// SIG undefined FUN_142b823a0(void)

undefined8 * FUN_142b823a0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  UNavCollisionBase::UNavCollisionBase();
  *param_1 = &PTR__scalar_deleting_destructor__1457d1020;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffd;
  *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) & 0xfffffffd | 1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    plVar1 = (longlong *)FMemory::Realloc(0,0x20,0);
    if (plVar1 == (longlong *)0x0) {
      if ((DAT_146aeea68 != 0) && (DAT_146aeea60 != (longlong *)0x0)) {
        (**(code **)(*DAT_146aeea60 + 0x28))(DAT_146aeea60,0);
        if (DAT_146aeea60 != (longlong *)0x0) {
          DAT_146aeea60 = (longlong *)FMemory::Realloc(DAT_146aeea60,0,0);
        }
        DAT_146aeea68 = 0;
      }
    }
    else {
      *plVar1 = (longlong)&PTR_GetPoolName_143f3f148;
      plVar1[1] = (longlong)`anonymous_namespace'::CreateNewNavCollisionInstance;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[3] = lVar2;
      (**(code **)(*plVar1 + 0x30))(plVar1,&DAT_146aeea60);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 142b82500 FUN_142b82500 body=75 status=ok
// SIG undefined FUN_142b82500(void)

undefined8 * FUN_142b82500(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR__scalar_deleting_destructor__1457d15e0;
  param_1[5] = &PTR_LAB_1457d1b28;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
            (param_1 + 0x5b,4);
  return param_1;
}



// FUNCTION 142b82550 FUN_142b82550 body=71 status=ok
// SIG undefined FUN_142b82550(void)

undefined8 * FUN_142b82550(undefined8 *param_1)

{
  FUN_142326e40();
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *param_1 = &PTR_FUN_1457d1b58;
  param_1[5] = &PTR_LAB_1457d1f50;
  *(undefined4 *)(param_1 + 0x2f) = 0x453b8000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x459c4000;
  return param_1;
}



// FUNCTION 142b825a0 FUN_142b825a0 body=344 status=ok
// SIG undefined FUN_142b825a0(void)

undefined8 * FUN_142b825a0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1457d12b8;
  plVar1 = param_1 + 0xe;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfffffffc;
  *(undefined4 *)(param_1 + 10) = DAT_1464aa730;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f4d200;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)UNavigationPath::OnPathEvent;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f4d248;
    }
    if (local_18 != plVar1) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(param_1 + 0xf) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(param_1 + 0xf) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 142b82700 UNavigationQueryFilter body=60 status=ok
// SIG undefined UNavigationQueryFilter(void)

undefined8 * UNavigationQueryFilter::UNavigationQueryFilter(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1457cc7f8;
  param_1[5] = 0;
  param_1[6] = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffc;
  *(undefined2 *)(param_1 + 7) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  return param_1;
}



// FUNCTION 142b82740 FUN_142b82740 body=213 status=ok
// SIG undefined FUN_142b82740(void)

undefined8 * FUN_142b82740(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  FUN_142244d20();
  *param_1 = &PTR_FUN_1457cee40;
  plVar1 = (longlong *)FUN_142ba9430();
  lVar4 = plVar1[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      return param_1;
    }
  }
  lVar2 = FUN_141796280(param_1 + 5);
  if (lVar2 != 0) {
    while (lVar2 != *(longlong *)(lVar4 + 0x10)) {
      lVar2 = *(longlong *)(lVar2 + 0x30);
      if (lVar2 == 0) {
        return param_1;
      }
    }
    *(uint *)(param_1 + 8) =
         *(uint *)(param_1 + 8) ^ ((uint)DAT_146b2ba24 ^ *(uint *)(param_1 + 8)) & 1;
    uVar3 = (*(uint *)(lVar4 + 0x40) >> 1 ^ *(uint *)(param_1 + 8)) & 2 ^ *(uint *)(param_1 + 8);
    *(uint *)(param_1 + 8) = uVar3;
    uVar3 = (*(int *)(lVar4 + 0x40) << 2 ^ uVar3) & 4 ^ uVar3;
    *(uint *)(param_1 + 8) = uVar3;
    *(uint *)(param_1 + 8) = (*(int *)(lVar4 + 0x40) << 2 ^ uVar3) & 8 ^ uVar3;
  }
  return param_1;
}



// FUNCTION 142b82820 FUN_142b82820 body=1414 status=ok
// SIG undefined FUN_142b82820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142b82820(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  
  FUN_141781840();
  *param_1 = &PTR_FUN_1457ceae8;
  param_1[7] = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffe6f;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x42700000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 2;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3f),4000);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x6e),4000);
  *(byte *)((longlong)param_1 + 0x39a) = *(byte *)((longlong)param_1 + 0x39a) & 0xf0;
  pvVar2 = ThreadLocalStoragePointer;
  uVar8 = (ulonglong)_tls_index;
  *(undefined2 *)(param_1 + 0x73) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  lVar4 = *(longlong *)((longlong)pvVar2 + uVar8 * 8);
  param_1[0x79] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  if ((*(int *)(lVar4 + 0x38) < DAT_146b2bb68) &&
     (_Init_thread_header(&DAT_146b2bb68), DAT_146b2bb68 == -1)) {
    FUN_142b7f950(&DAT_146b2bb64);
    _Init_thread_footer(&DAT_146b2bb68);
  }
  uVar3 = UCrowdManagerBase::GetPrivateStaticClass();
  lVar4 = FUN_141799830(uVar3,0,L"/Script/AIModule.CrowdManager",0,0,0);
  if (lVar4 == 0) {
    lVar4 = UCrowdManagerBase::GetPrivateStaticClass();
  }
  param_1[7] = lVar4;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffe;
  *(byte *)((longlong)param_1 + 0x39a) = *(byte *)((longlong)param_1 + 0x39a) | 0x20;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    if (*(int *)((longlong)param_1 + 500) < 0x20) {
      TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(param_1 + 0x3d,0x20);
    }
    if (*(int *)((longlong)param_1 + 0x84) < 0x10) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0x10);
    }
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_1441c0108;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_142b916f0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar4;
      *plVar5 = (longlong)&PTR_FUN_1441c0150;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357f0,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar1 = DAT_1465357f8;
      lVar4 = (longlong)DAT_1465357f8;
      DAT_1465357f8 = DAT_1465357f8 + 1;
      if (DAT_1465357fc < DAT_1465357f8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357f0,iVar1);
      }
      puVar6 = (undefined8 *)(lVar4 * 0x10 + _DAT_1465357f0);
      *puVar6 = plVar5;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_1441c0108;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_142b917a0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar4;
      *plVar5 = (longlong)&PTR_FUN_1441c0150;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535808,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar1 = DAT_146535810;
      lVar4 = (longlong)DAT_146535810;
      DAT_146535810 = DAT_146535810 + 1;
      if (DAT_146535814 < DAT_146535810) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535808,iVar1);
      }
      puVar6 = (undefined8 *)(lVar4 * 0x10 + DAT_146535808);
      *puVar6 = plVar5;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
  }
  else {
    lVar4 = param_1[2];
    lVar7 = FUN_142ba9430();
    if (lVar4 == lVar7) {
      DAT_146b2bae0 = UAITask_LockLogic::StaticClass();
      DAT_146b2bae8 = UAITask_LockLogic::StaticClass();
      uVar3 = UAITask_LockLogic::StaticClass();
      FUN_1422529a0(uVar3);
    }
  }
  return param_1;
}



// FUNCTION 142b82db0 ~TArray<FAsyncPathFindingQuery,FDefaultAllocator> body=172 status=ok
// SIG undefined ~TArray<FAsyncPathFindingQuery,FDefaultAllocator>(void)

void TArray<FAsyncPathFindingQuery,FDefaultAllocator>::
     ~TArray<FAsyncPathFindingQuery,FDefaultAllocator>(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    do {
      plVar4 = *(longlong **)(lVar7 + 0xa8);
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + 0x88);
      FPathFindingQuery::~FPathFindingQuery(lVar7);
      lVar7 = lVar7 + 0xb8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar7 = *param_1;
  }
  if (lVar7 == 0) {
    return;
  }
  FMemory::Free(lVar7);
  return;
}



// FUNCTION 142b82e60 ~TArray<FNavigationOctreeElement,TInlineAllocator<16,FDefaultAllocator>_> body=179 status=ok
// SIG undefined ~TArray<FNavigationOctreeElement,TInlineAllocator<16,FDefaultAllocator>_>(void)

void TArray<FNavigationOctreeElement,TInlineAllocator<16,FDefaultAllocator>_>::
     ~TArray<FNavigationOctreeElement,TInlineAllocator<16,FDefaultAllocator>_>(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x300);
  iVar6 = *(int *)(param_1 + 0x308);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    lVar7 = param_1;
  }
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar7 + 0x28);
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
      plVar8 = plVar8 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x300);
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142b82f20 ~TSparseArray<TSetElement<FNavigationBounds>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<FNavigationBounds>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<FNavigationBounds>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<FNavigationBounds>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBatchedLine,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b82f90 ~FAsyncPathFindingQuery body=111 status=ok
// SIG undefined ~FAsyncPathFindingQuery(void)

void FAsyncPathFindingQuery::~FAsyncPathFindingQuery(longlong param_1)

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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x88);
  FPathFindingQuery::~FPathFindingQuery(param_1);
  return;
}



// FUNCTION 142b83000 FUN_142b83000 body=98 status=ok
// SIG undefined FUN_142b83000(void)

void FUN_142b83000(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 142b83070 FUN_142b83070 body=59 status=ok
// SIG undefined FUN_142b83070(void)

void FUN_142b83070(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 142b830b0 ~FNavigationPath body=232 status=ok
// SIG undefined ~FNavigationPath(void)

void FNavigationPath::~FNavigationPath(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__1457cca80;
  plVar4 = (longlong *)param_1[0x1a];
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
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
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
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
  return;
}



// FUNCTION 142b831a0 ~FNode body=127 status=ok
// SIG undefined ~FNode(void)

void TOctree<FNavigationOctreeElement,FNavigationOctreeSemantics>::FNode::~FNode(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x318 + (ulonglong)(uVar2 & 7) * 8);
    if (lVar1 != 0) {
      ~FNode(lVar1);
      FMemory::operator_delete(lVar1,0x360);
    }
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  TArray<FNavigationOctreeElement,TInlineAllocator<16,FDefaultAllocator>_>::
  ~TArray<FNavigationOctreeElement,TInlineAllocator<16,FDefaultAllocator>_>(param_1);
  return;
}



// FUNCTION 142b83220 FUN_142b83220 body=35 status=ok
// SIG undefined FUN_142b83220(void)

void FUN_142b83220(char *param_1)

{
  longlong lVar1;
  
  if (*param_1 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 4);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x39a) = *(byte *)(lVar1 + 0x39a) | 0x20;
    }
  }
  return;
}



// FUNCTION 142b83250 FUN_142b83250 body=591 status=ok
// SIG undefined FUN_142b83250(void)

void FUN_142b83250(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1457ceae8;
  FUN_142b885f0(param_1,1);
  if (param_1[0x83] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x81) = 0;
  if (param_1[0x80] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x78);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6e));
  if (param_1[0x6c] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (param_1[0x6a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x62);
  *(undefined4 *)(param_1 + 0x61) = 0;
  if (param_1[0x60] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x57) = 0;
  if (param_1[0x56] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4e);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x44);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3f));
  TArray<FAsyncPathFindingQuery,FDefaultAllocator>::
  ~TArray<FAsyncPathFindingQuery,FDefaultAllocator>(param_1 + 0x3d);
  plVar4 = (longlong *)param_1[0x3c];
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
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNavigationBounds>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNavigationBounds>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x26);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x21);
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x11);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  TArray<FNavDataConfig,FDefaultAllocator>::~TArray<FNavDataConfig,FDefaultAllocator>(param_1 + 10);
  *param_1 = &PTR__scalar_deleting_destructor__1452d9278;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 142b834a0 operator= body=373 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>,TDefaultMapHashableKeyFuncs<INavLinkCustomInterface_*,FWeakObjectPtr,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_142b8357d;
        uVar2 = puVar6[lVar4 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_142b8357d:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        Emplace<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x18,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 142b83620 operator= body=273 status=ok
// SIG undefined operator=(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FPathFindingQueryData::operator=(undefined4 *param_1,undefined4 *param_2)

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
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  puVar1 = (undefined8 *)(param_1 + 8);
  param_1[7] = param_2[7];
  uStack_30 = *(longlong **)(param_2 + 10);
  local_38 = *(undefined8 *)(param_2 + 8);
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar1;
    plVar6 = *(longlong **)(param_1 + 10);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    param_1[9] = local_38._4_4_;
    param_1[10] = (undefined4)uStack_30;
    param_1[0xb] = uStack_30._4_4_;
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
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_1[0xd] ^ (param_2[0xd] ^ param_1[0xd]) & 1;
  return param_1;
}



// FUNCTION 142b83740 FUN_142b83740 body=1631 status=ok
// SIG undefined FUN_142b83740(void)

longlong * FUN_142b83740(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int local_res8 [2];
  longlong local_88;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  int local_70;
  uint local_6c;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [24];
  undefined8 local_30;
  
  lVar7 = 0;
  iVar8 = 0;
  local_res8[0] = 0;
  local_58 = 0;
  local_4c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)(param_1 + 5) & 2) == 0) {
      return param_1;
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 0x80000000;
    uVar5 = FUN_143703a50();
    if (local_80 == (local_7c & 0x3fffffff)) {
      FUN_14370c460(uVar5,&local_88,0x18);
    }
    puVar1 = (undefined8 *)(local_88 + (longlong)(int)local_80 * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    uVar5 = *(undefined8 *)(param_2 + 2);
    lVar4 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    lVar4 = local_88 + lVar4 * 0x18;
    FUN_1437166c0(lVar4,"NavMesh");
    FUN_143716530(lVar4 + 0x10,uVar5,&DAT_14680f140);
    uVar5 = FUN_1437151f0(&DAT_14680f140);
    FUN_1437166c0(lVar4 + 8,uVar5);
    uVar5 = FUN_143703a50();
    if (local_80 == (local_7c & 0x3fffffff)) {
      FUN_14370c460(uVar5,&local_88,0x18);
    }
    puVar1 = (undefined8 *)(local_88 + (longlong)(int)local_80 * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    uVar5 = *(undefined8 *)(param_2 + 6);
    lVar4 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    lVar4 = local_88 + lVar4 * 0x18;
    FUN_1437166c0(lVar4,"Graph");
    FUN_143716530(lVar4 + 0x10,uVar5,&DAT_146814f60);
    uVar5 = FUN_1437151f0(&DAT_146814f60);
    FUN_1437166c0(lVar4 + 8,uVar5);
    uVar5 = FUN_143703a50();
    if (local_80 == (local_7c & 0x3fffffff)) {
      FUN_14370c460(uVar5,&local_88,0x18);
    }
    puVar1 = (undefined8 *)(local_88 + (longlong)(int)local_80 * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    uVar5 = *(undefined8 *)(param_2 + 4);
    lVar4 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    lVar4 = local_88 + lVar4 * 0x18;
    FUN_1437166c0(lVar4,"QueryMediator");
    FUN_143716530(lVar4 + 0x10,uVar5,&DAT_146817360);
    uVar5 = FUN_1437151f0(&DAT_146817360);
    FUN_1437166c0(lVar4 + 8,uVar5);
    uVar5 = FUN_143703a50();
    if (local_80 == (local_7c & 0x3fffffff)) {
      FUN_14370c460(uVar5,&local_88,0x18);
    }
    puVar1 = (undefined8 *)(local_88 + (longlong)(int)local_80 * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    uVar5 = *(undefined8 *)(param_2 + 8);
    lVar4 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    lVar4 = local_88 + lVar4 * 0x18;
    FUN_1437166c0(lVar4,"TraversalAnnotationLibrary");
    FUN_143716530(lVar4 + 0x10,uVar5,&DAT_146829df0);
    uVar5 = FUN_1437151f0(&DAT_146829df0);
    FUN_1437166c0(lVar4 + 8,uVar5);
    local_78 = 0;
    local_70 = 0;
    local_6c = 0x80000000;
    FUN_1437158f0(local_48,&local_78);
    iVar3 = FUN_143716d90(&local_88,&DAT_1467e3a30,local_30,0);
    if (-1 < iVar3) {
      local_res8[0] = local_70;
      local_50 = local_70;
      if (0 < local_70) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_58,0,local_70);
        lVar7 = local_58;
      }
      iVar8 = local_50;
      FUN_14370c700(lVar7,local_78,local_res8[0]);
    }
    plVar2 = (longlong *)param_1[1];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (local_res8[0] != 0) {
      (**(code **)(*param_1 + 0x50))(param_1,lVar7,local_res8[0]);
    }
    FUN_143715a60(local_48);
    uVar5 = FUN_143703a50();
    local_70 = 0;
    if (-1 < (int)local_6c) {
      FUN_143702e10(uVar5,local_78,1,local_6c & 0x3fffffff);
    }
    local_78 = 0;
    local_6c = 0x80000000;
    uVar5 = FUN_143703a50();
    lVar4 = (longlong)(int)(local_80 + -1);
    if (-1 < (int)(local_80 + -1)) {
      lVar6 = local_88 + (lVar4 * 3 + 1) * 8;
      do {
        if (*(longlong *)(lVar6 + 8) != 0) {
          FUN_14370c150();
        }
        FUN_143716650(lVar6);
        FUN_143716650(lVar6 + -8);
        lVar6 = lVar6 + -0x18;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    local_80 = 0;
    if (-1 < (int)local_7c) {
      FUN_143702e10(uVar5,local_88,0x18,local_7c & 0x3fffffff);
    }
  }
  else {
    if (*(longlong *)(param_2 + 2) != 0) {
      FUN_14370c150();
      param_2[2] = 0;
      param_2[3] = 0;
    }
    if (*(longlong *)(param_2 + 4) != 0) {
      FUN_14370c150();
      param_2[4] = 0;
      param_2[5] = 0;
    }
    if (*(longlong *)(param_2 + 6) != 0) {
      FUN_14370c150();
      param_2[6] = 0;
      param_2[7] = 0;
    }
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_14370c150();
      param_2[8] = 0;
      param_2[9] = 0;
    }
    plVar2 = (longlong *)param_1[1];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (local_res8[0] == 0) {
      return param_1;
    }
    local_50 = local_res8[0];
    if (0 < local_res8[0]) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_58,0);
      lVar7 = local_58;
    }
    iVar8 = local_50;
    (**(code **)(*param_1 + 0x50))(param_1,lVar7,local_res8[0]);
    FUN_1424c8610();
    FUN_1424c98a0();
    FUN_143717320(&local_78,lVar7,local_res8[0]);
    lVar4 = FUN_142b7eb00(local_60,0);
    if (lVar4 == 0) {
      FUN_1437173d0(&local_78);
      goto LAB_142b83d72;
    }
    uVar5 = FUN_1437151f0(&DAT_14680f140);
    lVar6 = FUN_143717530(lVar4,uVar5,0);
    *(longlong *)(param_2 + 2) = lVar6;
    if (lVar6 != 0) {
      FUN_14370c030(lVar6);
    }
    uVar5 = FUN_1437151f0(&DAT_146814f60);
    lVar6 = FUN_143717530(lVar4,uVar5,0);
    *(longlong *)(param_2 + 6) = lVar6;
    if (lVar6 != 0) {
      FUN_14370c030(lVar6);
    }
    lVar6 = FUN_143717490(lVar4,"QueryMediator",0);
    *(longlong *)(param_2 + 4) = lVar6;
    if (lVar6 != 0) {
      FUN_14370c030(lVar6);
    }
    uVar5 = FUN_1437151f0(&DAT_146829df0);
    lVar6 = FUN_143717530(lVar4,uVar5,0);
    *(longlong *)(param_2 + 8) = lVar6;
    if (lVar6 != 0) {
      FUN_14370c030(lVar6);
    }
    FUN_142b857e0(lVar4,1);
    FUN_1437173d0(&local_78);
  }
  if (0 < iVar8) {
    *param_2 = iVar8;
  }
LAB_142b83d72:
  if (lVar7 != 0) {
    FMemory::Free(lVar7);
  }
  return param_1;
}



// FUNCTION 142b83da0 FUN_142b83da0 body=1200 status=ok
// SIG undefined FUN_142b83da0(void)

longlong * FUN_142b83da0(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong local_88;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  int local_70;
  uint local_6c;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [24];
  undefined8 local_30;
  
  lVar8 = 0;
  iVar7 = 0;
  local_res8[0] = 0;
  local_58 = 0;
  local_4c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)(param_1 + 5) & 2) == 0) {
      return param_1;
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 0x80000000;
    uVar5 = FUN_143703a50();
    if (local_80 == (local_7c & 0x3fffffff)) {
      FUN_14370c460(uVar5,&local_88,0x18);
    }
    puVar1 = (undefined8 *)(local_88 + (longlong)(int)local_80 * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    uVar5 = *(undefined8 *)(param_2 + 2);
    lVar4 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    lVar4 = local_88 + lVar4 * 0x18;
    FUN_1437166c0(lVar4,"NavVolume");
    FUN_143716530(lVar4 + 0x10,uVar5,&DAT_14680ff30);
    uVar5 = FUN_1437151f0(&DAT_14680ff30);
    FUN_1437166c0(lVar4 + 8,uVar5);
    uVar5 = FUN_143703a50();
    if (local_80 == (local_7c & 0x3fffffff)) {
      FUN_14370c460(uVar5,&local_88,0x18);
    }
    puVar1 = (undefined8 *)(local_88 + (longlong)(int)local_80 * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    uVar5 = *(undefined8 *)(param_2 + 4);
    lVar4 = (longlong)(int)local_80;
    local_80 = local_80 + 1;
    lVar4 = local_88 + lVar4 * 0x18;
    FUN_1437166c0(lVar4,"QueryMediator");
    FUN_143716530(lVar4 + 0x10,uVar5,&DAT_1468141e0);
    uVar5 = FUN_1437151f0(&DAT_1468141e0);
    FUN_1437166c0(lVar4 + 8,uVar5);
    local_78 = 0;
    local_70 = 0;
    local_6c = 0x80000000;
    FUN_1437158f0(local_48,&local_78);
    iVar3 = FUN_143716d90(&local_88,&DAT_1467e3a30,local_30,0);
    if (-1 < iVar3) {
      local_res8[0] = local_70;
      local_50 = local_70;
      if (0 < local_70) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_58,0,local_70);
        lVar8 = local_58;
      }
      iVar7 = local_50;
      FUN_14370c700(lVar8,local_78,local_res8[0]);
    }
    plVar2 = (longlong *)param_1[1];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (local_res8[0] != 0) {
      (**(code **)(*param_1 + 0x50))(param_1,lVar8,local_res8[0]);
    }
    FUN_143715a60(local_48);
    uVar5 = FUN_143703a50();
    local_70 = 0;
    if (-1 < (int)local_6c) {
      FUN_143702e10(uVar5,local_78,1,local_6c & 0x3fffffff);
    }
    local_78 = 0;
    local_6c = 0x80000000;
    uVar5 = FUN_143703a50();
    lVar4 = (longlong)(int)(local_80 + -1);
    if (-1 < (int)(local_80 + -1)) {
      lVar6 = local_88 + (lVar4 * 3 + 1) * 8;
      do {
        if (*(longlong *)(lVar6 + 8) != 0) {
          FUN_14370c150();
        }
        FUN_143716650(lVar6);
        FUN_143716650(lVar6 + -8);
        lVar6 = lVar6 + -0x18;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    local_80 = 0;
    if (-1 < (int)local_7c) {
      FUN_143702e10(uVar5,local_88,0x18,local_7c & 0x3fffffff);
    }
  }
  else {
    if (*(longlong *)(param_2 + 2) != 0) {
      FUN_14370c150();
      param_2[2] = 0;
      param_2[3] = 0;
    }
    if (*(longlong *)(param_2 + 4) != 0) {
      FUN_14370c150();
      param_2[4] = 0;
      param_2[5] = 0;
    }
    plVar2 = (longlong *)param_1[1];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (local_res8[0] == 0) {
      return param_1;
    }
    local_50 = local_res8[0];
    if (0 < local_res8[0]) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_58,0);
      lVar8 = local_58;
    }
    iVar7 = local_50;
    (**(code **)(*param_1 + 0x50))(param_1,lVar8,local_res8[0]);
    FUN_1424c8610();
    FUN_1424c98a0();
    FUN_143717320(&local_78,lVar8,local_res8[0]);
    lVar4 = FUN_142b7eb00(local_60,0);
    if (lVar4 == 0) {
      FUN_1437173d0(&local_78);
      goto LAB_142b84223;
    }
    uVar5 = FUN_1437151f0(&DAT_14680ff30);
    lVar6 = FUN_143717530(lVar4,uVar5,0);
    *(longlong *)(param_2 + 2) = lVar6;
    if (lVar6 != 0) {
      FUN_14370c030(lVar6);
    }
    lVar6 = FUN_143717490(lVar4,"QueryMediator",0);
    *(longlong *)(param_2 + 4) = lVar6;
    if (lVar6 != 0) {
      FUN_14370c030(lVar6);
    }
    FUN_142b857e0(lVar4,1);
    FUN_1437173d0(&local_78);
  }
  if (0 < iVar7) {
    *param_2 = iVar7;
  }
LAB_142b84223:
  if (lVar8 != 0) {
    FMemory::Free(lVar8);
  }
  return param_1;
}



// FUNCTION 142b84250 operator== body=114 status=ok
// SIG undefined operator==(void)

undefined1 FNavAgentProperties::operator==(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((ABS(*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) < 5.0) &&
      (ABS(*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) < 5.0)) &&
     ((*(float *)(param_1 + 0xc) < 0.0 ||
      ((*(float *)(param_2 + 0xc) < 0.0 ||
       (ABS(*(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc)) < 5.0)))))) {
    cVar1 = IsNavDataMatching();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b842d0 FUN_142b842d0 body=235 status=ok
// SIG undefined FUN_142b842d0(void)

undefined4 * FUN_142b842d0(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  puVar1 = (undefined4 *)FUN_142b9b730(param_1,local_58,param_3 + 0x30);
  puVar2 = (undefined4 *)FUN_142b9b730(param_1,local_48,param_3 + 0x20);
  puVar3 = (undefined4 *)FUN_142b9b730(param_1,local_38,param_3 + 0x10);
  puVar4 = (undefined4 *)FUN_142b9b730(param_1,local_28,param_3);
  *param_2 = *puVar4;
  param_2[1] = puVar4[1];
  param_2[2] = puVar4[2];
  param_2[3] = puVar4[3];
  param_2[4] = *puVar3;
  param_2[5] = puVar3[1];
  param_2[6] = puVar3[2];
  param_2[7] = puVar3[3];
  param_2[8] = *puVar2;
  param_2[9] = puVar2[1];
  param_2[10] = puVar2[2];
  param_2[0xb] = puVar2[3];
  param_2[0xc] = *puVar1;
  param_2[0xd] = puVar1[1];
  param_2[0xe] = puVar1[2];
  param_2[0xf] = puVar1[3];
  return param_2;
}



// FUNCTION 142b843c0 FUN_142b843c0 body=112 status=ok
// SIG undefined FUN_142b843c0(void)

void FUN_142b843c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x138), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_142ba9430();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x000142b8441f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x308))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142b84430 FUN_142b84430 body=173 status=ok
// SIG undefined FUN_142b84430(void)

void FUN_142b84430(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((DAT_146687975 == '\0') || (DAT_146b2ba24 != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) &&
     (((lVar3 = *(longlong *)(param_2 + 0x120), lVar3 != 0 ||
       (lVar3 = FUN_1423407b0(param_2), lVar3 != 0)) &&
      (lVar1 = *(longlong *)(lVar3 + 0x138), lVar1 != 0)))) {
    lVar4 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((*(uint *)(lVar1 + 0x40) >> 2 & 1) == 0)) {
      FUN_1428cf800(lVar3);
    }
  }
  return;
}



// FUNCTION 142b844e0 FUN_142b844e0 body=1098 status=ok
// SIG undefined FUN_142b844e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b844e0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_988 [32];
  undefined8 local_968;
  undefined8 uStack_960;
  float local_958;
  float local_954;
  float local_950;
  float local_948;
  float local_944;
  float local_940;
  float local_93c;
  float local_938;
  float local_934;
  float local_930;
  undefined1 local_928 [16];
  undefined1 local_918 [48];
  undefined1 local_8e8 [2048];
  undefined1 *local_e8;
  int local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_988;
  plVar1 = *(longlong **)(*(longlong *)*param_1 + 0x110);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa0))(plVar1,&local_948);
    iVar7 = (**(code **)(*plVar1 + 200))(plVar1);
    puVar11 = (undefined1 *)0x0;
    local_e8 = (undefined1 *)0x0;
    local_dc = 0;
    local_e0 = iVar7;
    if (0 < iVar7) {
      TArray<FStaticMeshBatch_const_*,TInlineAllocator<256,FDefaultAllocator>_>::ResizeGrow
                (local_8e8);
    }
    puVar10 = local_8e8;
    if (local_e8 != (undefined1 *)0x0) {
      puVar10 = puVar11;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((ulonglong)puVar10 | (ulonglong)local_e8),0,(longlong)iVar7 * 8);
    puVar10 = local_8e8;
    if (local_e8 != (undefined1 *)0x0) {
      puVar10 = local_e8;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar10,iVar7,0);
    if (0 < iVar7) {
      do {
        puVar10 = local_8e8;
        if (local_e8 != (undefined1 *)0x0) {
          puVar10 = local_e8;
        }
        plVar1 = *(longlong **)(puVar10 + (longlong)puVar11 * 8);
        (**(code **)(*plVar1 + 0x90))(plVar1,&local_968);
        fVar6 = local_93c;
        fVar5 = local_940;
        fVar4 = local_944;
        fVar3 = local_948;
        if (*(char *)param_1[1] == '\0') {
          fVar15 = local_958 * 2.0;
          fVar13 = local_954 * 2.0;
          fVar16 = local_950 * 2.0;
          fVar14 = local_93c * local_93c - 0.5;
          fVar12 = local_944 * fVar13 + local_948 * fVar15 + local_940 * fVar16;
          puVar8 = (undefined8 *)physx::PxQuat::operator*(&local_948,local_928,&local_968);
          local_968 = *puVar8;
          uStack_960 = puVar8[1];
          local_958 = (fVar4 * fVar16 - fVar5 * fVar13) * fVar6 + fVar14 * fVar15 + fVar3 * fVar12 +
                      local_938;
          local_950 = (fVar3 * fVar13 - fVar4 * fVar15) * fVar6 + fVar14 * fVar16 + fVar5 * fVar12 +
                      local_930;
          local_954 = (fVar5 * fVar15 - fVar3 * fVar16) * fVar6 + fVar14 * fVar13 + fVar4 * fVar12 +
                      local_934;
        }
        uVar2 = param_1[2];
        puVar9 = (undefined4 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_918);
        switch(*puVar9) {
        case 0:
          FUN_142b874a0(puVar9,&local_968,0,uVar2);
          break;
        case 2:
          FUN_142b86490(puVar9,&local_968,0,uVar2);
          break;
        case 3:
          FUN_142b86270(puVar9,&local_968,0,uVar2);
          break;
        case 4:
          FUN_142b866b0(puVar9,&local_968,0,uVar2);
          break;
        case 5:
          FUN_142b876a0(puVar9,&local_968,0,uVar2);
          break;
        case 6:
          FUN_142b86d70(puVar9,&local_968,0,uVar2);
        }
        puVar11 = puVar11 + 1;
      } while ((longlong)puVar11 < (longlong)iVar7);
    }
    if (local_e8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142b84950 FUN_142b84950 body=183 status=ok
// SIG undefined FUN_142b84950(void)

void FUN_142b84950(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x138), lVar4 != 0)) {
    lVar2 = FUN_142ba9430();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (plVar3 = (longlong *)FUN_142b8e790(lVar4,0), plVar3 != (longlong *)0x0)) &&
       (plVar3[0x8c] == 0)) {
      lVar4 = (**(code **)(*plVar3 + 0x848))(plVar3);
      plVar3[0x8c] = lVar4;
      if (lVar4 != 0) {
        FUN_142398ec0(lVar4,param_3,1);
        FUN_14234b150(plVar3[0x8c]);
      }
    }
  }
  return;
}



// FUNCTION 142b84a10 FUN_142b84a10 body=460 status=ok
// SIG undefined FUN_142b84a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142b84a10(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int local_res10 [2];
  uint local_48;
  uint local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined1 local_18;
  byte local_14;
  
  uVar4 = *(ulonglong *)(param_2 + 0x120);
  if (uVar4 == 0) {
    uVar4 = FUN_1423407b0(param_2);
  }
  if ((uVar4 != 0) && (lVar2 = *(longlong *)(uVar4 + 0x138), lVar2 != 0)) {
    lVar5 = FUN_142ba9430();
    iVar6 = *(int *)(lVar5 + 0x90);
    uVar4 = (longlong)iVar6;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar6) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar6 * 8) != lVar5 + 0x88)) {
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)uVar4 != '\0') {
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(lVar2 + 0x270,local_res10,param_2);
      if (((local_res10[0] != -1) &&
          (lVar5 = (longlong)local_res10[0] * 0x20 + *(longlong *)(lVar2 + 0x270), lVar5 != 0)) &&
         (uVar4 = lVar5 + 8, uVar4 != 0)) {
LAB_142b84bc7:
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      FWeakObjectPtr::operator=(&local_48,param_2);
      local_14 = local_14 & 0xfc;
      local_1c = DAT_1468b5d98;
      local_28 = DAT_1468b5d98;
      local_40 = 0;
      local_38 = 0;
      local_24 = _DAT_1468b5d90;
      local_30 = _DAT_1468b5d90;
      local_18 = 0;
      uVar3 = *(int *)(lVar2 + 0x90) - *(int *)(lVar2 + 0xbc);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 != 0) {
        uVar4 = (longlong)*(int *)(lVar2 + 0xd0) - 1;
        lVar5 = *(longlong *)(lVar2 + 200);
        if (*(longlong *)(lVar2 + 200) == 0) {
          lVar5 = lVar2 + 0xc0;
        }
        iVar6 = *(int *)(lVar5 + ((longlong)(int)(local_48 ^ local_44) & uVar4) * 4);
        if (iVar6 != -1) {
          uVar4 = *(ulonglong *)(lVar2 + 0x88);
          do {
            puVar1 = (uint *)((longlong)iVar6 * 0x40 + uVar4);
            if ((*puVar1 == local_48) && (uVar4 = (ulonglong)local_44, puVar1[1] == local_44)) {
LAB_142b84b93:
              uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
            }
            else {
              uVar4 = FWeakObjectPtr::IsValid();
              if ((char)uVar4 == '\0') {
                uVar4 = FWeakObjectPtr::IsValid(&local_48);
                if ((char)uVar4 == '\0') goto LAB_142b84b93;
              }
              uVar4 = uVar4 & 0xffffffffffffff00;
            }
            if ((char)uVar4 != '\0') {
              if (iVar6 != -1) goto LAB_142b84bc7;
              break;
            }
            uVar4 = *(ulonglong *)(lVar2 + 0x88);
            iVar6 = *(int *)(uVar4 + 0x38 + (longlong)iVar6 * 0x40);
          } while (iVar6 != -1);
        }
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142b84c20 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(void),FAsyncPathFindingQuery>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FAsyncPathFindingQuery::~FAsyncPathFindingQuery(param_1 + 2);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142b84c70 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseUObjectMethodDelegateInstance<0,UNavigationSystemV1,TTypeWrapper<void>___cdecl(void),TArray<FAsyncPathFindingQuery,FDefaultAllocator>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<FAsyncPathFindingQuery,FDefaultAllocator>::
  ~TArray<FAsyncPathFindingQuery,FDefaultAllocator>(param_1 + 3);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b84cc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRenderAssetStreamingManager::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1409f5de0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x618);
  }
  return param_1;
}



// FUNCTION 142b84d00 FUN_142b84d00 body=230 status=ok
// SIG undefined FUN_142b84d00(void)

undefined8 * FUN_142b84d00(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1457d20d8;
  param_1[0x8b] = &PTR_LAB_1457d27c8;
  param_1[0x8c] = &PTR_LAB_1457d2820;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xa6);
  plVar4 = (longlong *)param_1[0xa5];
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
  if (param_1[0x94] != 0) {
    FMemory::Free();
  }
  param_1[0x8c] = &PTR_FUN_1457d1f90;
  param_1[0x8b] = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x540);
  }
  return param_1;
}



// FUNCTION 142b84df0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FNavigationPath::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FNavigationPath();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 142b84e30 FUN_142b84e30 body=43 status=ok
// SIG undefined FUN_142b84e30(void)

undefined8 * FUN_142b84e30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457cc4c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142b84e60 FUN_142b84e60 body=146 status=ok
// SIG undefined FUN_142b84e60(void)

undefined8 * FUN_142b84e60(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiTraversalAnalyzer::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x40;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b84f00 FUN_142b84f00 body=170 status=ok
// SIG undefined FUN_142b84f00(void)

undefined8 * FUN_142b84f00(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  *param_1 = hkaiAstarEdgeFilter::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
      if (*(short *)(param_1 + 2) == -1) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x20);
        return param_1;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 2));
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b84fb0 FUN_142b84fb0 body=98 status=ok
// SIG undefined FUN_142b84fb0(void)

undefined8 * FUN_142b84fb0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_1457d1530;
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
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b85020 `scalar_deleting_destructor' body=132 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FNavGraphGenerator::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__1457d1588;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1457d1530;
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
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142b850b0 FUN_142b850b0 body=43 status=ok
// SIG undefined FUN_142b850b0(void)

undefined8 * FUN_142b850b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457d1f90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142b850e0 FUN_142b850e0 body=169 status=ok
// SIG undefined FUN_142b850e0(void)

longlong FUN_142b850e0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 142b85190 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGeometryCollectionCache::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_142b83000(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142b851d0 FUN_142b851d0 body=90 status=ok
// SIG undefined FUN_142b851d0(void)

longlong FUN_142b851d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 142b85230 FUN_142b85230 body=100 status=ok
// SIG undefined FUN_142b85230(void)

longlong FUN_142b85230(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14370c150();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b852a0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleMeshRotationRate::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142b852f0 FUN_142b852f0 body=70 status=ok
// SIG undefined FUN_142b852f0(void)

longlong FUN_142b852f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142b85340 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UEnvQueryGenerator_ProjectedPoints::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142b85390 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UUGGridPrefabDungeonConfig::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142b853e0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneComponentMaterialTrack::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142b85430 FUN_142b85430 body=70 status=ok
// SIG undefined FUN_142b85430(void)

longlong FUN_142b85430(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 142b85480 `scalar_deleting_destructor' body=172 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNavCollision::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FFormatContainer::~FFormatContainer(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142b85530 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong AAkSpatialAudioVolume::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 142b85580 FUN_142b85580 body=52 status=ok
// SIG undefined FUN_142b85580(void)

undefined8 FUN_142b85580(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 142b855c0 `scalar_deleting_destructor' body=169 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNavigationPath::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x70);
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
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142b85670 FUN_142b85670 body=52 status=ok
// SIG undefined FUN_142b85670(void)

undefined8 FUN_142b85670(undefined8 param_1,ulonglong param_2)

{
  FUN_142b83250();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x428);
  }
  return param_1;
}



// FUNCTION 142b856b0 FUN_142b856b0 body=303 status=ok
// SIG undefined FUN_142b856b0(void)

undefined8 * FUN_142b856b0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  
  *param_1 = hkGeometry::vftable;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar2,param_1[5],0x10,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar2,param_1[3],0x10,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar3 = TlsGetValue(DAT_146b7bf70);
      if (pvVar3 == (LPVOID)0x0) {
        pvVar3 = DAT_146b7bf68;
      }
      plVar1 = *(longlong **)((longlong)pvVar3 + 0x58);
      if (*(short *)(param_1 + 2) == -1) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x38);
        return param_1;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 2));
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b857e0 FUN_142b857e0 body=256 status=ok
// SIG undefined FUN_142b857e0(void)

longlong * FUN_142b857e0(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = FUN_143703a50();
  iVar5 = (int)param_1[1] + -1;
  lVar4 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar3 = *param_1 + (lVar4 * 3 + 1) * 8;
    do {
      if (*(longlong *)(lVar3 + 8) != 0) {
        FUN_14370c150();
      }
      FUN_143716650(lVar3);
      FUN_143716650(lVar3 + -8);
      lVar3 = lVar3 + -0x18;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x18,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,0x10);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 142b858e0 FUN_142b858e0 body=170 status=ok
// SIG undefined FUN_142b858e0(void)

undefined8 * FUN_142b858e0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  *param_1 = hkaiAstarCostModifier::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
      if (*(short *)(param_1 + 2) == -1) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x18);
        return param_1;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 2));
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b85990 FUN_142b85990 body=170 status=ok
// SIG undefined FUN_142b85990(void)

undefined8 * FUN_142b85990(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  *param_1 = hkaiAstarEdgeFilter::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
      if (*(short *)(param_1 + 2) == -1) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,0x18);
        return param_1;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(short *)(param_1 + 2));
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b85a40 FUN_142b85a40 body=146 status=ok
// SIG undefined FUN_142b85a40(void)

undefined8 * FUN_142b85a40(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiTraversalAnalyzer::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x48;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142b85ae0 FUN_142b85ae0 body=146 status=ok
// SIG undefined FUN_142b85ae0(void)

undefined8 * FUN_142b85ae0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiTraversalAnalyzer::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x38;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b85b80 FUN_142b85b80 body=146 status=ok
// SIG undefined FUN_142b85b80(void)

undefined8 * FUN_142b85b80(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiSpatialQueryHitFilter::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x18;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b85c20 FUN_142b85c20 body=146 status=ok
// SIG undefined FUN_142b85c20(void)

undefined8 * FUN_142b85c20(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiTraversalAnalyzer::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x28;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b85cc0 FUN_142b85cc0 body=146 status=ok
// SIG undefined FUN_142b85cc0(void)

undefined8 * FUN_142b85cc0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiTraversalAnalyzer::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
      if (sVar2 == -1) {
        sVar2 = 0x58;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142b85d60 FUN_142b85d60 body=181 status=ok
// SIG undefined FUN_142b85d60(void)

void FUN_142b85d60(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_14232c410();
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x17c);
    uVar2 = *(undefined4 *)(param_1 + 0x178);
    lVar5 = (**(code **)(*plVar3 + 0x148))(plVar3);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x138), lVar5 != 0)) {
      lVar6 = FUN_142ba9430();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        UNavigationSystemV1::RegisterInvoker(lVar5,plVar3,uVar2,uVar1);
      }
    }
  }
  return;
}



// FUNCTION 142b85e20 FUN_142b85e20 body=106 status=ok
// SIG undefined FUN_142b85e20(void)

void FUN_142b85e20(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (((DAT_146b2ba28 != (longlong *)0x0) && (lVar1 = *DAT_146b2ba28, lVar1 != 0)) && (param_1 != 0)
     ) {
    uVar2 = FUN_143703a50();
    uVar3 = *(uint *)(lVar1 + 0x70);
    if (uVar3 == (*(uint *)(lVar1 + 0x74) & 0x3fffffff)) {
      FUN_14370c460(uVar2,lVar1 + 0x68,8);
      uVar3 = *(uint *)(lVar1 + 0x70);
    }
    *(longlong *)(*(longlong *)(lVar1 + 0x68) + (longlong)(int)uVar3 * 8) = param_1;
    *(int *)(lVar1 + 0x70) = *(int *)(lVar1 + 0x70) + 1;
  }
  return;
}



// FUNCTION 142b85e90 FUN_142b85e90 body=157 status=ok
// SIG undefined FUN_142b85e90(void)

void FUN_142b85e90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar7 = FNavigationSystem::GetCurrent<UNavigationSystemV1>();
  if (((lVar7 != 0) && ((*(byte *)(lVar7 + 0x39a) & 0x20) != 0)) && (*(char *)(param_2 + 3) != '\0')
     ) {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar3 = *(undefined4 *)(param_2 + 3);
    uVar2 = param_2[2];
    iVar4 = *(int *)(lVar7 + 0x368);
    *(int *)(lVar7 + 0x368) = iVar4 + 1;
    if (*(int *)(lVar7 + 0x36c) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(lVar7 + 0x360,iVar4);
    }
    lVar7 = *(longlong *)(lVar7 + 0x360);
    puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar7);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + 0x10 + lVar7);
    *puVar1 = uVar2;
    puVar1[1] = CONCAT44(3,uVar3);
  }
  return;
}



// FUNCTION 142b85f30 AddNavigationBoundsUpdateRequest body=688 status=ok
// SIG undefined AddNavigationBoundsUpdateRequest(void)

void UNavigationSystemV1::AddNavigationBoundsUpdateRequest(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  uint *puVar14;
  longlong lVar15;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  plVar1 = (longlong *)(param_1 + 0xd8);
  piVar10 = (int *)*plVar1;
  iVar9 = *(int *)(param_1 + 0xe0);
  lVar15 = (longlong)iVar9 * 0x30;
  if (piVar10 != piVar10 + (longlong)iVar9 * 0xc) {
    piVar13 = piVar10;
    do {
      if (*param_2 == *piVar13) {
        lVar11 = ((longlong)piVar13 - (longlong)piVar10) / 6 +
                 ((longlong)piVar13 - (longlong)piVar10 >> 0x3f);
        iVar12 = (int)(lVar11 >> 3) - (int)(lVar11 >> 0x3f);
        goto LAB_142b85f87;
      }
      piVar13 = piVar13 + 0xc;
    } while (piVar13 != piVar10 + (longlong)iVar9 * 0xc);
  }
  iVar12 = -1;
LAB_142b85f87:
  if (iVar12 == -1) {
    *(int *)(param_1 + 0xe0) = iVar9 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar9 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar9);
    }
  }
  else {
    bVar5 = false;
    lVar15 = (longlong)iVar12 * 0x30;
    local_58 = (uint *)CONCAT44(local_58._4_4_,(undefined4)local_58);
    if ((piVar10[(longlong)iVar12 * 0xc + 0xb] == 1) &&
       (local_58 = (uint *)CONCAT44(local_58._4_4_,(undefined4)local_58), param_2[0xb] == 0)) {
      plVar2 = (longlong *)(param_1 + 0x130);
      iVar9 = *(int *)(param_1 + 0x158);
      puStack_30 = (uint *)(param_1 + 0x140);
      local_68 = 0x100000000;
      local_58._4_4_ = 0;
      uStack_50 = 0;
      if (iVar9 != 0) {
        puVar14 = *(uint **)(param_1 + 0x150);
        if (*(uint **)(param_1 + 0x150) == (uint *)0x0) {
          puVar14 = puStack_30;
        }
        uVar7 = *puVar14;
        uStack_50 = 0;
        iVar8 = 0;
        while (uVar7 == 0) {
          uStack_50 = uStack_50 + 0x20;
          uVar6 = (ulonglong)local_68 >> 0x20;
          local_68 = CONCAT44((int)uVar6,iVar8 + 1);
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_142b86095;
          uVar7 = puVar14[(longlong)iVar8 + 1];
          iVar8 = iVar8 + 1;
        }
        uVar7 = -uVar7 & uVar7;
        iVar8 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        local_68 = CONCAT44(uVar7,(undefined4)local_68);
        if (uVar7 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        local_58._4_4_ = (uStack_50 - iVar8) + 0x1f;
        if (iVar9 < local_58._4_4_) {
LAB_142b86095:
          local_58._4_4_ = iVar9;
        }
      }
      uStack_38 = local_68;
      uStack_28 = 0xffffffff;
      iStack_24 = local_58._4_4_;
      iStack_20 = uStack_50;
      uStack_60 = local_68;
      local_48 = uStack_50;
      uStack_50 = 0xffffffff;
      iStack_4c = local_58._4_4_;
      bVar3 = local_58._4_4_ < iVar9;
      local_40 = plVar2;
      local_58 = puStack_30;
      if (bVar3) {
        do {
          if (*(int *)((longlong)iStack_4c * 0x34 + *plVar2) == *param_2) {
            bVar5 = true;
            break;
          }
          uStack_50 = uStack_50 & ~uStack_60._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
        } while (iStack_4c < (int)local_58[6]);
      }
    }
    if (bVar5) {
      iVar9 = *(int *)(param_1 + 0xe0);
      iVar8 = (iVar9 - iVar12) + -1;
      if (iVar8 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(lVar15 + *plVar1),(void *)((longlong)(iVar12 + 1) * 0x30 + *plVar1),
                   (longlong)iVar8 * 0x30);
        iVar9 = *(int *)(param_1 + 0xe0);
      }
      *(int *)(param_1 + 0xe0) = iVar9 + -1;
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
      return;
    }
  }
  piVar10 = (int *)(*plVar1 + lVar15);
  *piVar10 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)(piVar10 + 1) = *(undefined8 *)(param_2 + 1);
  *(undefined8 *)(piVar10 + 3) = uVar4;
  *(undefined8 *)(piVar10 + 5) = *(undefined8 *)(param_2 + 5);
  piVar10[7] = param_2[7];
  piVar10[8] = param_2[8];
  piVar10[9] = param_2[9];
  piVar10[10] = param_2[10];
  piVar10[0xb] = param_2[0xb];
  return;
}



// FUNCTION 142b861e0 AddReferencedObjects body=94 status=ok
// SIG undefined AddReferencedObjects(void)

void UNavigationSystemV1::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  undefined8 local_res8;
  
  local_res8 = FWeakObjectPtr::Get(param_1 + 0x120);
  (**(code **)(*param_2 + 0x38))(param_2,&local_res8,param_1,0);
  if (*(char *)(param_1 + 0x1d4) != '\x02') {
    FReferenceCollector::AddReferencedObjects<UObject>(param_2,param_1 + 0x3c0,param_1,0);
  }
  return;
}



// FUNCTION 142b86240 FUN_142b86240 body=37 status=ok
// SIG undefined FUN_142b86240(void)

void FUN_142b86240(longlong param_1)

{
  if (((DAT_146b2ba28 != (longlong *)0x0) && (*DAT_146b2ba28 != 0)) && (param_1 != 0)) {
    FUN_1438da890(*DAT_146b2ba28,param_1);
    return;
  }
  return;
}



// FUNCTION 142b86270 FUN_142b86270 body=532 status=ok
// SIG undefined FUN_142b86270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b863b8) */
/* WARNING: Removing unreachable block (ram,0x000142b8639f) */
/* WARNING: Removing unreachable block (ram,0x000142b86383) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b86270(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_128 [32];
  undefined **local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  uint local_d4;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  longlong lStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_100 = 0;
  local_f8 = 0x1ffff;
  local_108 = hkGeometry::vftable;
  local_f0 = 0;
  local_e8 = 0;
  local_c8 = CONCAT44(*(float *)(param_1 + 8) * fRam0000000146af9cc4,
                      *(float *)(param_1 + 4) * _DAT_146af9cc0);
  uStack_c0 = CONCAT44(fRam0000000146af9ccc * 0.0,*(float *)(param_1 + 0xc) * fRam0000000146af9cc8);
  local_e4 = 0x80000000;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0x80000000;
  FUN_142b8d850(&local_c8,param_3,&local_108);
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  fVar2 = *(float *)(param_2 + 2) * _DAT_146af9cc0;
  fVar3 = *(float *)((longlong)param_2 + 0x14) * fRam0000000146af9cc4;
  fVar4 = *(float *)(param_2 + 3) * fRam0000000146af9cc8;
  fVar5 = fRam0000000146af9ccc * 0.0;
  FUN_143716430(&local_b8,&local_c8);
  local_78._0_8_ = local_b8 << 0x20;
  local_78._8_8_ = lStack_b0 << 0x20 | local_b8 >> 0x20;
  local_78 = local_78 >> 0x20;
  local_58._0_8_ = local_98 << 0x20;
  local_58._8_8_ = lStack_90 << 0x20 | local_98 >> 0x20;
  local_58 = local_58 >> 0x20;
  local_68._0_8_ = local_a8 << 0x20;
  local_68._8_8_ = lStack_a0 << 0x20 | local_a8 >> 0x20;
  local_68 = local_68 >> 0x20;
  uStack_3c = uRam00000001467f06fc;
  local_88 = fVar2;
  fStack_84 = fVar3;
  fStack_80 = fVar4;
  fStack_7c = fVar5;
  local_48 = fVar2;
  fStack_44 = fVar3;
  fStack_40 = fVar4;
  FUN_1437170a0(param_4,local_d0,&local_108,local_78);
  local_108 = hkGeometry::vftable;
  uVar1 = FUN_143703a50();
  local_d8 = 0;
  if (-1 < (int)local_d4) {
    FUN_143702e10(uVar1,local_e0,0x10,local_d4 & 0x3fffffff);
  }
  local_e0 = 0;
  local_d4 = 0x80000000;
  uVar1 = FUN_143703a50();
  local_e8 = 0;
  if (-1 < (int)local_e4) {
    FUN_143702e10(uVar1,local_f0,0x10,local_e4 & 0x3fffffff);
  }
  local_f0 = 0;
  local_e4 = 0x80000000;
  FUN_14370c000(&local_108);
  return;
}



// FUNCTION 142b86490 FUN_142b86490 body=541 status=ok
// SIG undefined FUN_142b86490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b865e1) */
/* WARNING: Removing unreachable block (ram,0x000142b865c8) */
/* WARNING: Removing unreachable block (ram,0x000142b865ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b86490(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_128 [32];
  undefined **local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  uint local_d4;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  longlong lStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_100 = 0;
  local_f8 = 0x1ffff;
  local_108 = hkGeometry::vftable;
  local_f0 = 0;
  local_c8 = CONCAT44(*(float *)(param_1 + 4) * 0.01,*(float *)(param_1 + 8) * 0.01);
  uStack_c0 = (ulonglong)(uint)(*(float *)(param_1 + 4) * 0.01);
  local_e8 = 0;
  local_e4 = 0x80000000;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0x80000000;
  FUN_142b8d850(&local_c8,param_3,&local_108);
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  fVar2 = *(float *)(param_2 + 2) * _DAT_146af9cc0;
  fVar3 = *(float *)((longlong)param_2 + 0x14) * fRam0000000146af9cc4;
  fVar4 = *(float *)(param_2 + 3) * fRam0000000146af9cc8;
  fVar5 = fRam0000000146af9ccc * 0.0;
  FUN_143716430(&local_b8,&local_c8);
  local_78._0_8_ = local_b8 << 0x20;
  local_78._8_8_ = lStack_b0 << 0x20 | local_b8 >> 0x20;
  local_78 = local_78 >> 0x20;
  local_58._0_8_ = local_98 << 0x20;
  local_58._8_8_ = lStack_90 << 0x20 | local_98 >> 0x20;
  local_58 = local_58 >> 0x20;
  local_68._0_8_ = local_a8 << 0x20;
  local_68._8_8_ = lStack_a0 << 0x20 | local_a8 >> 0x20;
  local_68 = local_68 >> 0x20;
  uStack_3c = uRam00000001467f06fc;
  local_88 = fVar2;
  fStack_84 = fVar3;
  fStack_80 = fVar4;
  fStack_7c = fVar5;
  local_48 = fVar2;
  fStack_44 = fVar3;
  fStack_40 = fVar4;
  FUN_1437170a0(param_4,local_d0,&local_108,local_78);
  local_108 = hkGeometry::vftable;
  uVar1 = FUN_143703a50();
  local_d8 = 0;
  if (-1 < (int)local_d4) {
    FUN_143702e10(uVar1,local_e0,0x10,local_d4 & 0x3fffffff);
  }
  local_e0 = 0;
  local_d4 = 0x80000000;
  uVar1 = FUN_143703a50();
  local_e8 = 0;
  if (-1 < (int)local_e4) {
    FUN_143702e10(uVar1,local_f0,0x10,local_e4 & 0x3fffffff);
  }
  local_f0 = 0;
  local_e4 = 0x80000000;
  FUN_14370c000(&local_108);
  return;
}



// FUNCTION 142b866b0 FUN_142b866b0 body=1723 status=ok
// SIG undefined FUN_142b866b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b866b0(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  float *pfVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar11;
  ulonglong uVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
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
  undefined1 auStack_218 [32];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  longlong *local_1c8;
  int local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  undefined4 local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined1 local_138 [64];
  undefined1 local_f8 [16];
  ushort local_e8;
  ushort local_e6;
  ulonglong local_e0;
  
  local_e0 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  fVar19 = *(float *)(param_1 + 0x18);
  fVar21 = *(float *)(param_1 + 0x14);
  fVar23 = *(float *)(param_1 + 0x10);
  fVar26 = *(float *)(param_1 + 0x1c);
  local_1d8 = *(float *)(param_1 + 4);
  fVar24 = fVar21 + fVar21;
  fVar25 = *(float *)(param_1 + 8);
  fVar28 = *(float *)(param_1 + 0xc);
  fVar22 = fVar23 + fVar23;
  fVar20 = (fVar19 + fVar19) * fVar19;
  local_1e4 = (fVar19 + fVar19) * fVar26;
  fVar18 = local_1e4 + fVar22 * fVar21;
  local_1e4 = fVar22 * fVar21 - local_1e4;
  local_1d4 = fVar22 * fVar19 - fVar24 * fVar26;
  local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,fVar18);
  local_1dc = fVar24 * fVar26 + fVar22 * fVar19;
  local_1e8 = (1.0 - fVar24 * fVar21) - fVar20;
  local_1d0 = fVar18 * fVar25;
  fVar27 = 1.0 - fVar23 * fVar22;
  local_1f4 = local_1e4 * local_1d8;
  fVar20 = fVar27 - fVar20;
  fVar27 = fVar27 - fVar24 * fVar21;
  fVar21 = fVar24 * fVar19 - fVar22 * fVar26;
  fVar19 = fVar24 * fVar19 + fVar22 * fVar26;
  local_1e0 = local_1e8 * local_1d8;
  local_1d8 = local_1dc * local_1d8;
  fVar26 = fVar20 * fVar25;
  fVar25 = fVar21 * fVar25;
  fVar22 = local_1d4 * fVar28;
  fVar23 = fVar19 * fVar28;
  fVar28 = fVar27 * fVar28;
  local_1ac = 0;
  local_1f0 = fVar27 * fVar28;
  local_194 = fVar21 * fVar26 + local_1dc * local_1f4 + fVar27 * fVar23;
  local_1f8 = fVar21 * fVar25 + local_1dc * local_1d8;
  local_1ec = fVar27 * fVar22 + fVar21 * local_1d0 + local_1dc * local_1e0;
  local_1a8 = fVar22 * fVar19 + local_1e4 * local_1e0 + local_1d0 * fVar20;
  local_1a4 = local_1f4 * local_1e4 + fVar20 * fVar26 + fVar19 * fVar23;
  local_1a0 = local_1d8 * local_1e4 + fVar25 * fVar20 + fVar28 * fVar19;
  local_1b8 = local_1e8 * local_1e0 + local_1d0 * fVar18 + fVar22 * local_1d4;
  local_1b4 = local_1e8 * local_1f4 + fVar18 * fVar26 + local_1d4 * fVar23;
  local_190 = local_1f8 + local_1f0;
  local_1b0 = local_1e8 * local_1d8 + fVar18 * fVar25 + fVar28 * local_1d4;
  local_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0x3f800000;
  local_19c = 0;
  local_18c = 0;
  local_1c0 = param_3;
  local_198 = local_1ec;
  uVar8 = physx::PxMat44::PxMat44(local_138);
  FUN_142b842d0(uVar8,&local_178,&local_1b8);
  plVar16 = *(longlong **)(param_1 + 0x20);
  local_1c8 = plVar16;
  lVar9 = (**(code **)(*plVar16 + 0x30))(plVar16);
  iVar7 = (**(code **)(*plVar16 + 0x28))(plVar16);
  iVar4 = *(int *)(param_4 + 0x20);
  lVar15 = (longlong)iVar7;
  uVar8 = FUN_143703a50();
  iVar14 = *(int *)(param_4 + 0x20);
  uVar11 = *(uint *)(param_4 + 0x24) & 0x3fffffff;
  iVar17 = iVar14 + iVar7;
  if ((int)uVar11 < iVar17) {
    iVar6 = uVar11 * 2;
    if (iVar17 < iVar6) {
      iVar17 = iVar6;
    }
    FUN_14370c310(uVar8,param_4 + 0x18,iVar17,0x10);
  }
  *(int *)(param_4 + 0x20) = *(int *)(param_4 + 0x20) + iVar7;
  lVar5 = *(longlong *)(param_4 + 0x18);
  if (0 < iVar7) {
    pfVar10 = (float *)(lVar9 + 8);
    lVar9 = (longlong)iVar14 << 4;
    do {
      fVar19 = pfVar10[-2];
      fVar21 = pfVar10[-1];
      fVar23 = *pfVar10;
      pfVar10 = pfVar10 + 3;
      fVar26 = (fVar19 * local_174 + fVar21 * local_164 + fVar23 * local_154 + local_144) *
               fRam0000000146af9cc4;
      fVar25 = (fVar19 * local_170 + fVar21 * local_160 + fVar23 * local_150 + local_140) *
               fRam0000000146af9cc8;
      fVar28 = fRam0000000146af9ccc * 0.0;
      pfVar2 = (float *)(lVar5 + lVar9);
      *pfVar2 = (fVar19 * local_178 + fVar21 * local_168 + fVar23 * local_158 + local_148) *
                _DAT_146af9cc0;
      pfVar2[1] = fVar26;
      pfVar2[2] = fVar25;
      pfVar2[3] = fVar28;
      lVar9 = lVar9 + 0x10;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  iVar14 = *(int *)(param_4 + 0x30);
  iVar17 = (**(code **)(*plVar16 + 0x40))(plVar16);
  iVar14 = iVar14 + iVar17;
  plVar1 = (longlong *)(param_4 + 0x28);
  uVar8 = FUN_143703a50();
  uVar11 = *(uint *)(param_4 + 0x34) & 0x3fffffff;
  if ((int)uVar11 < iVar14) {
    iVar17 = uVar11 * 2;
    if (iVar14 < iVar17) {
      iVar14 = iVar17;
    }
    FUN_14370c310(uVar8,plVar1,iVar14,0x10);
  }
  lVar9 = (**(code **)(*plVar16 + 0x38))(plVar16);
  local_1e8 = (float)(**(code **)(*plVar16 + 0x40))(plVar16);
  local_1f4 = 0.0;
  if (0 < (int)local_1e8) {
    do {
      iVar17 = 2;
      (**(code **)(*plVar16 + 0x48))(plVar16,local_1f4,local_f8);
      uVar12 = (ulonglong)local_e6;
      bVar3 = *(byte *)(uVar12 + lVar9);
      iVar14 = (uint)*(byte *)(uVar12 + 1 + lVar9) + iVar4;
      if (2 < local_e8) {
        while( true ) {
          iVar7 = (uint)*(byte *)(((int)uVar12 + iVar17) + lVar9) + iVar4;
          uVar8 = FUN_143703a50();
          uVar11 = *(uint *)(param_4 + 0x30);
          if (uVar11 == (*(uint *)(param_4 + 0x34) & 0x3fffffff)) {
            FUN_14370c460(uVar8,plVar1,0x10);
            uVar11 = *(uint *)(param_4 + 0x30);
          }
          iVar17 = iVar17 + 1;
          piVar13 = (int *)((longlong)(int)uVar11 * 0x10 + *plVar1);
          *(uint *)(param_4 + 0x30) = uVar11 + 1;
          piVar13[1] = iVar14;
          piVar13[3] = local_1c0;
          *piVar13 = (uint)bVar3 + iVar4;
          piVar13[2] = iVar7;
          plVar16 = local_1c8;
          if ((int)(uint)local_e8 <= iVar17) break;
          uVar12 = (ulonglong)local_e6;
          iVar14 = iVar7;
        }
      }
      local_1f4 = (float)((int)local_1f4 + 1);
    } while ((int)local_1f4 < (int)local_1e8);
  }
  return;
}



// FUNCTION 142b86d70 FUN_142b86d70 body=1833 status=ok
// SIG undefined FUN_142b86d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b86d70(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  LPVOID pvVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 (*pauVar18) [16];
  int iVar19;
  ulonglong uVar20;
  short *psVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong local_210;
  int local_208;
  uint local_204;
  longlong local_200;
  uint local_1f8;
  ulonglong local_1f0;
  int local_1e8;
  ulonglong local_1e0;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  int local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined1 local_118 [224];
  
  local_158 = *(undefined4 *)(param_1 + 0x14);
  local_144 = *(undefined4 *)(param_1 + 0x10);
  local_130 = *(undefined4 *)(param_1 + 0x18);
  local_11c = 0x3f800000;
  local_154 = 0;
  uStack_14c = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_12c = 0;
  uStack_124 = 0;
  uVar9 = physx::PxMat44::PxMat44(local_118);
  FUN_142b842d0(uVar9,&local_198,&local_158);
  plVar4 = *(longlong **)(param_1 + 8);
  iVar6 = (**(code **)(*plVar4 + 0x38))(plVar4);
  iVar7 = (**(code **)(*plVar4 + 0x40))(plVar4);
  local_1e8 = iVar7;
  iVar8 = (**(code **)(*plVar4 + 0x50))(plVar4);
  uVar17 = iVar7 * iVar6;
  local_210 = 0;
  local_208 = 0;
  local_1f8 = uVar17;
  if (uVar17 == 0) {
    local_210 = 0;
  }
  else {
    pvVar10 = TlsGetValue(DAT_146b7bf70);
    if (pvVar10 == (LPVOID)0x0) {
      pvVar10 = DAT_146b7bf68;
    }
    uVar14 = uVar17 * 4 + 0x7f & 0xffffff80;
    lVar12 = *(longlong *)((longlong)pvVar10 + 0x18);
    uVar20 = (int)uVar14 + lVar12;
    if ((*(int *)((longlong)pvVar10 + 0x10) < (int)uVar14) ||
       (*(ulonglong *)((longlong)pvVar10 + 0x20) < uVar20)) {
      local_210 = FUN_1437138c0(pvVar10);
    }
    else {
      *(ulonglong *)((longlong)pvVar10 + 0x18) = uVar20;
      local_210 = lVar12;
    }
  }
  local_204 = uVar17 | 0x80000000;
  local_200 = local_210;
  uVar9 = FUN_143703a50();
  lVar12 = (longlong)local_208;
  iVar19 = uVar17 + local_208;
  if ((int)(local_204 & 0x3fffffff) < iVar19) {
    iVar3 = (local_204 & 0x3fffffff) * 2;
    if (iVar19 < iVar3) {
      iVar19 = iVar3;
    }
    FUN_14370c310(uVar9,&local_210,iVar19,4);
  }
  lVar16 = (longlong)(int)uVar17;
  if (0 < (int)uVar17) {
    lVar13 = local_210 + 3 + (longlong)local_208 * 4;
    do {
      if (lVar13 != 3) {
        *(undefined2 *)(lVar13 + -1) = 0;
      }
      lVar13 = lVar13 + 4;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  local_208 = local_208 + uVar17;
  psVar21 = (short *)(local_210 + lVar12 * 4);
  (**(code **)(*plVar4 + 0x28))(plVar4,psVar21,uVar17 * 4);
  iVar3 = *(int *)(param_4 + 0x20);
  uVar9 = FUN_143703a50();
  iVar15 = *(int *)(param_4 + 0x20);
  uVar14 = *(uint *)(param_4 + 0x24) & 0x3fffffff;
  local_1f0 = CONCAT44(local_1f0._4_4_,iVar15);
  iVar19 = iVar15 + uVar17;
  if ((int)uVar14 < iVar19) {
    iVar15 = uVar14 * 2;
    if (iVar19 < iVar15) {
      iVar19 = iVar15;
    }
    FUN_14370c310(uVar9,(longlong *)(param_4 + 0x18),iVar19,0x10);
    iVar15 = *(int *)(param_4 + 0x20);
  }
  *(uint *)(param_4 + 0x20) = iVar15 + uVar17;
  pauVar18 = (undefined1 (*) [16])((longlong)(int)local_1f0 * 0x10 + *(longlong *)(param_4 + 0x18));
  iVar19 = (**(code **)(*plVar4 + 0x48))(plVar4);
  if ((iVar19 == 1) && (iVar19 = 0, 0 < iVar6)) {
    do {
      iVar15 = 0;
      if (0 < iVar7) {
        fVar22 = (float)iVar19;
        do {
          sVar2 = *psVar21;
          psVar21 = (short *)((longlong)psVar21 + (longlong)iVar8);
          fVar24 = (float)(int)sVar2;
          fVar26 = (float)iVar15;
          iVar15 = iVar15 + 1;
          fVar27 = local_188 * fVar24 + local_198 * fVar22 + local_178 * fVar26 + local_168;
          fVar25 = local_184 * fVar24 + local_194 * fVar22 + local_174 * fVar26 + local_164;
          fVar24 = local_180 * fVar24 + local_190 * fVar22 + local_170 * fVar26 + local_160;
          auVar5._4_4_ = fVar25;
          auVar5._0_4_ = fVar27;
          auVar5._8_4_ = fVar24;
          auVar5._12_4_ = 0;
          *pauVar18 = auVar5;
          fVar25 = fVar25 * fRam0000000146af9cc4;
          fVar24 = fVar24 * fRam0000000146af9cc8;
          fVar26 = fRam0000000146af9ccc * 0.0;
          *(float *)*pauVar18 = fVar27 * _DAT_146af9cc0;
          *(float *)(*pauVar18 + 4) = fVar25;
          *(float *)(*pauVar18 + 8) = fVar24;
          *(float *)(*pauVar18 + 0xc) = fVar26;
          pauVar18 = pauVar18 + 1;
        } while (iVar15 < iVar7);
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar6);
  }
  iVar8 = (iVar7 * 2 + -2) * (iVar6 + -1) + *(int *)(param_4 + 0x30);
  plVar4 = (longlong *)(param_4 + 0x28);
  uVar9 = FUN_143703a50();
  uVar17 = *(uint *)(param_4 + 0x34) & 0x3fffffff;
  if ((int)uVar17 < iVar8) {
    iVar19 = uVar17 * 2;
    if (iVar8 < iVar19) {
      iVar8 = iVar19;
    }
    FUN_14370c310(uVar9,plVar4,iVar8,0x10);
  }
  if (1 < iVar6) {
    local_1e0 = (ulonglong)(iVar6 - 1);
    iVar6 = iVar3 + iVar7;
    do {
      if (1 < iVar7) {
        local_1f0 = (ulonglong)(iVar7 - 1);
        iVar8 = iVar6;
        do {
          lVar12 = (longlong)(((1 - iVar3) - iVar7) + iVar8);
          bVar1 = *(byte *)(local_210 + -2 + lVar12 * 4);
          if ((bVar1 & 0x7f) != 0x7f) {
            uVar9 = FUN_143703a50();
            iVar19 = iVar8 + 1;
            if ((char)bVar1 < '\0') {
              local_1d8 = -iVar7 + iVar8;
              uVar17 = *(uint *)(param_4 + 0x30);
              iStack_1d4 = iVar19;
              iStack_1d0 = iVar8;
              uStack_1cc = param_3;
              if (uVar17 == (*(uint *)(param_4 + 0x34) & 0x3fffffff)) {
                FUN_14370c460(uVar9,plVar4,0x10);
                uVar17 = *(uint *)(param_4 + 0x30);
              }
              uVar9 = CONCAT44(iStack_1d4,local_1d8);
              uVar23 = CONCAT44(uStack_1cc,iStack_1d0);
            }
            else {
              uVar17 = *(uint *)(param_4 + 0x30);
              local_1c8 = iVar8 + (1 - iVar7);
              iStack_1c4 = iVar19;
              iStack_1c0 = iVar8;
              uStack_1bc = param_3;
              if (uVar17 == (*(uint *)(param_4 + 0x34) & 0x3fffffff)) {
                FUN_14370c460(uVar9,plVar4,0x10);
                uVar17 = *(uint *)(param_4 + 0x30);
              }
              uVar9 = CONCAT44(iStack_1c4,local_1c8);
              uVar23 = CONCAT44(uStack_1bc,iStack_1c0);
            }
            puVar11 = (undefined8 *)((longlong)(int)uVar17 * 0x10 + *plVar4);
            *puVar11 = uVar9;
            puVar11[1] = uVar23;
            *(int *)(param_4 + 0x30) = *(int *)(param_4 + 0x30) + 1;
          }
          if ((*(byte *)(local_210 + -1 + lVar12 * 4) & 0x7f) != 0x7f) {
            uVar9 = FUN_143703a50();
            iVar19 = -iVar7 + iVar8;
            iVar15 = iVar8 + (1 - iVar7);
            uVar17 = *(uint *)(param_4 + 0x34) & 0x3fffffff;
            if ((char)bVar1 < '\0') {
              iStack_1b0 = iVar8 + 1;
              uVar14 = *(uint *)(param_4 + 0x30);
              local_1b8 = iVar19;
              iStack_1b4 = iVar15;
              uStack_1ac = param_3;
              if (uVar14 == uVar17) {
                FUN_14370c460(uVar9,plVar4,0x10);
                uVar14 = *(uint *)(param_4 + 0x30);
              }
              uVar9 = CONCAT44(iStack_1b4,local_1b8);
              uVar23 = CONCAT44(uStack_1ac,iStack_1b0);
            }
            else {
              uVar14 = *(uint *)(param_4 + 0x30);
              local_1a8 = iVar19;
              iStack_1a4 = iVar15;
              iStack_1a0 = iVar8;
              uStack_19c = param_3;
              if (uVar14 == uVar17) {
                FUN_14370c460(uVar9,plVar4,0x10);
                uVar14 = *(uint *)(param_4 + 0x30);
              }
              uVar9 = CONCAT44(iStack_1a4,local_1a8);
              uVar23 = CONCAT44(uStack_19c,iStack_1a0);
            }
            puVar11 = (undefined8 *)((longlong)(int)uVar14 * 0x10 + *plVar4);
            *puVar11 = uVar9;
            puVar11[1] = uVar23;
            *(int *)(param_4 + 0x30) = *(int *)(param_4 + 0x30) + 1;
          }
          iVar8 = iVar8 + 1;
          local_1f0 = local_1f0 - 1;
        } while (local_1f0 != 0);
        local_1f0 = 0;
        iVar7 = local_1e8;
      }
      iVar6 = iVar6 + iVar7;
      local_1e0 = local_1e0 - 1;
    } while (local_1e0 != 0);
  }
  uVar17 = local_1f8;
  lVar12 = local_200;
  if (local_200 == local_210) {
    local_208 = 0;
  }
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  uVar17 = uVar17 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar10 + 0x10) < (int)uVar17) ||
      ((int)uVar17 + lVar12 != *(longlong *)((longlong)pvVar10 + 0x18))) ||
     (*(longlong *)((longlong)pvVar10 + 0x28) == lVar12)) {
    FUN_143713ff0(pvVar10,lVar12);
  }
  else {
    *(longlong *)((longlong)pvVar10 + 0x18) = lVar12;
  }
  uVar9 = FUN_143703a50();
  local_208 = 0;
  if (-1 < (int)local_204) {
    FUN_143702e10(uVar9,local_210,4,local_204 & 0x3fffffff);
  }
  return;
}



// FUNCTION 142b874a0 FUN_142b874a0 body=501 status=ok
// SIG undefined FUN_142b874a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b875c9) */
/* WARNING: Removing unreachable block (ram,0x000142b875b0) */
/* WARNING: Removing unreachable block (ram,0x000142b87594) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b874a0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_128 [32];
  undefined **local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  uint local_d4;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  longlong lStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_100 = 0;
  local_f8 = 0x1ffff;
  local_108 = hkGeometry::vftable;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0x80000000;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0x80000000;
  FUN_142b8db00(*(float *)(param_1 + 4) * 0.01,param_3,&local_108);
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  fVar2 = *(float *)(param_2 + 2) * _DAT_146af9cc0;
  fVar3 = *(float *)((longlong)param_2 + 0x14) * fRam0000000146af9cc4;
  fVar4 = *(float *)(param_2 + 3) * fRam0000000146af9cc8;
  fVar5 = fRam0000000146af9ccc * 0.0;
  FUN_143716430(&local_b8,&local_c8);
  local_78._0_8_ = local_b8 << 0x20;
  local_78._8_8_ = lStack_b0 << 0x20 | local_b8 >> 0x20;
  local_78 = local_78 >> 0x20;
  local_58._0_8_ = local_98 << 0x20;
  local_58._8_8_ = lStack_90 << 0x20 | local_98 >> 0x20;
  local_58 = local_58 >> 0x20;
  local_68._0_8_ = local_a8 << 0x20;
  local_68._8_8_ = lStack_a0 << 0x20 | local_a8 >> 0x20;
  local_68 = local_68 >> 0x20;
  uStack_3c = uRam00000001467f06fc;
  local_88 = fVar2;
  fStack_84 = fVar3;
  fStack_80 = fVar4;
  fStack_7c = fVar5;
  local_48 = fVar2;
  fStack_44 = fVar3;
  fStack_40 = fVar4;
  FUN_1437170a0(param_4,local_d0,&local_108,local_78);
  local_108 = hkGeometry::vftable;
  uVar1 = FUN_143703a50();
  local_d8 = 0;
  if (-1 < (int)local_d4) {
    FUN_143702e10(uVar1,local_e0,0x10,local_d4 & 0x3fffffff);
  }
  local_e0 = 0;
  local_d4 = 0x80000000;
  uVar1 = FUN_143703a50();
  local_e8 = 0;
  if (-1 < (int)local_e4) {
    FUN_143702e10(uVar1,local_f0,0x10,local_e4 & 0x3fffffff);
  }
  local_f0 = 0;
  local_e4 = 0x80000000;
  FUN_14370c000(&local_108);
  return;
}



// FUNCTION 142b876a0 FUN_142b876a0 body=1667 status=ok
// SIG undefined FUN_142b876a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b876a0(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  ushort *puVar1;
  int *piVar2;
  float *pfVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  float *pfVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int *piVar18;
  ushort *puVar19;
  int *piVar20;
  longlong lVar21;
  longlong lVar22;
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
  longlong local_res20;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined1 local_118 [224];
  
  fVar31 = *(float *)(param_1 + 0x18);
  fVar26 = *(float *)(param_1 + 0x14);
  fVar36 = *(float *)(param_1 + 0x1c);
  fVar24 = *(float *)(param_1 + 0x10);
  fVar33 = fVar24 + fVar24;
  fVar23 = *(float *)(param_1 + 4);
  fVar28 = (fVar31 + fVar31) * fVar36;
  fVar37 = *(float *)(param_1 + 8);
  fVar30 = (fVar31 + fVar31) * fVar31;
  fVar35 = *(float *)(param_1 + 0xc);
  fVar40 = fVar26 + fVar26;
  fVar38 = fVar28 + fVar33 * fVar26;
  fVar28 = fVar33 * fVar26 - fVar28;
  fVar24 = 1.0 - fVar24 * fVar33;
  fVar34 = fVar28 * fVar23;
  fVar25 = fVar24 - fVar40 * fVar26;
  fVar26 = (1.0 - fVar40 * fVar26) - fVar30;
  fVar24 = fVar24 - fVar30;
  fVar30 = fVar33 * fVar31 - fVar40 * fVar36;
  fVar41 = fVar40 * fVar36 + fVar33 * fVar31;
  fVar32 = fVar38 * fVar37;
  fVar39 = fVar24 * fVar37;
  fVar27 = fVar40 * fVar31 + fVar33 * fVar36;
  fVar29 = fVar41 * fVar23;
  fVar33 = fVar40 * fVar31 - fVar33 * fVar36;
  fVar23 = fVar26 * fVar23;
  fVar37 = fVar33 * fVar37;
  fVar31 = fVar30 * fVar35;
  fVar36 = fVar27 * fVar35;
  fVar35 = fVar25 * fVar35;
  local_178 = fVar31 * fVar25 + fVar23 * fVar41 + fVar32 * fVar33;
  local_174 = fVar34 * fVar41 + fVar39 * fVar33 + fVar36 * fVar25;
  local_188 = fVar28 * fVar23 + fVar32 * fVar24 + fVar27 * fVar31;
  local_184 = fVar34 * fVar28 + fVar39 * fVar24 + fVar27 * fVar36;
  local_198 = fVar26 * fVar23 + fVar32 * fVar38 + fVar31 * fVar30;
  local_194 = fVar26 * fVar34 + fVar38 * fVar39 + fVar30 * fVar36;
  local_180 = fVar29 * fVar28 + fVar37 * fVar24 + fVar27 * fVar35;
  local_190 = fVar26 * fVar29 + fVar38 * fVar37 + fVar30 * fVar35;
  local_170 = fVar29 * fVar41 + fVar37 * fVar33 + fVar35 * fVar25;
  local_18c = 0;
  local_17c = 0;
  local_16c = 0;
  local_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0x3f800000;
  local_res20 = param_4;
  uVar10 = physx::PxMat44::PxMat44(local_118);
  FUN_142b842d0(uVar10,&local_158,&local_198);
  plVar7 = *(longlong **)(param_1 + 0x28);
  lVar11 = (**(code **)(*plVar7 + 0x30))(plVar7);
  iVar9 = (**(code **)(*plVar7 + 0x28))(plVar7);
  iVar6 = *(int *)(param_4 + 0x20);
  lVar22 = (longlong)iVar9;
  uVar10 = FUN_143703a50();
  iVar15 = *(int *)(param_4 + 0x20);
  uVar14 = *(uint *)(param_4 + 0x24) & 0x3fffffff;
  iVar17 = iVar15 + iVar9;
  if ((int)uVar14 < iVar17) {
    iVar8 = uVar14 * 2;
    if (iVar17 < iVar8) {
      iVar17 = iVar8;
    }
    FUN_14370c310(uVar10,param_4 + 0x18,iVar17,0x10);
  }
  *(int *)(param_4 + 0x20) = *(int *)(param_4 + 0x20) + iVar9;
  lVar16 = *(longlong *)(param_4 + 0x18);
  if (0 < iVar9) {
    pfVar12 = (float *)(lVar11 + 8);
    lVar11 = (longlong)iVar15 << 4;
    do {
      fVar31 = pfVar12[-2];
      fVar26 = pfVar12[-1];
      fVar36 = *pfVar12;
      pfVar12 = pfVar12 + 3;
      fVar24 = (fVar31 * local_154 + fVar26 * local_144 + fVar36 * local_134 + local_124) *
               fRam0000000146af9cc4;
      fVar23 = (fVar31 * local_150 + fVar26 * local_140 + fVar36 * local_130 + local_120) *
               fRam0000000146af9cc8;
      fVar37 = fRam0000000146af9ccc * 0.0;
      pfVar3 = (float *)(lVar16 + lVar11);
      *pfVar3 = (fVar31 * local_158 + fVar26 * local_148 + fVar36 * local_138 + local_128) *
                _DAT_146af9cc0;
      pfVar3[1] = fVar24;
      pfVar3[2] = fVar23;
      pfVar3[3] = fVar37;
      lVar11 = lVar11 + 0x10;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  iVar9 = (**(code **)(*plVar7 + 0x48))(plVar7);
  lVar21 = (longlong)iVar9;
  lVar22 = (**(code **)(*plVar7 + 0x50))(plVar7);
  lVar11 = local_res20;
  uVar10 = FUN_143703a50();
  iVar15 = *(int *)(lVar11 + 0x30);
  lVar16 = (longlong)iVar15;
  uVar14 = *(uint *)(lVar11 + 0x34) & 0x3fffffff;
  iVar17 = iVar15 + iVar9;
  if ((int)uVar14 < iVar17) {
    iVar15 = uVar14 * 2;
    if (iVar17 < iVar15) {
      iVar17 = iVar15;
    }
    FUN_14370c310(uVar10,lVar11 + 0x28,iVar17,0x10);
    iVar15 = *(int *)(lVar11 + 0x30);
  }
  lVar16 = lVar16 * 0x10 + *(longlong *)(lVar11 + 0x28);
  *(int *)(lVar11 + 0x30) = iVar15 + iVar9;
  pbVar13 = (byte *)(**(code **)(*plVar7 + 0x58))(plVar7,&local_res20);
  if (0 < iVar9) {
    if ((*pbVar13 & 2) == 0) {
      piVar18 = (int *)(lVar22 + 8);
      piVar20 = (int *)(lVar16 + 8);
      do {
        piVar2 = piVar18 + -1;
        iVar15 = *piVar18;
        iVar17 = piVar18[-2];
        piVar18 = piVar18 + 3;
        piVar20[-1] = *piVar2 + iVar6;
        *piVar20 = iVar15 + iVar6;
        piVar20[-2] = iVar17 + iVar6;
        piVar20[1] = param_3;
        lVar21 = lVar21 + -1;
        piVar20 = piVar20 + 4;
      } while (lVar21 != 0);
    }
    else {
      puVar19 = (ushort *)(lVar22 + 4);
      piVar18 = (int *)(lVar16 + 8);
      do {
        puVar1 = puVar19 + -1;
        uVar4 = *puVar19;
        uVar5 = puVar19[-2];
        puVar19 = puVar19 + 3;
        piVar18[-1] = (uint)*puVar1 + iVar6;
        *piVar18 = (uint)uVar4 + iVar6;
        piVar18[-2] = (uint)uVar5 + iVar6;
        piVar18[1] = param_3;
        lVar21 = lVar21 + -1;
        piVar18 = piVar18 + 4;
      } while (lVar21 != 0);
    }
  }
  return;
}



// FUNCTION 142b87d30 FUN_142b87d30 body=390 status=ok
// SIG undefined FUN_142b87d30(void)

void FUN_142b87d30(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  cVar2 = UWorld::IsGameWorld(uVar3);
  uVar5 = 0;
  if (cVar2 != '\0') {
    plVar7 = (longlong *)param_1[0xd];
    bVar9 = 0;
    uVar6 = (longlong)(int)param_1[0xe] & 0x1fffffffffffffff;
    if (plVar7 + (int)param_1[0xe] < plVar7) {
      uVar6 = uVar5;
    }
    plVar4 = plVar7;
    uVar8 = uVar5;
    if (uVar6 != 0) {
      do {
        if ((*plVar4 != 0) && (bVar1 = *(byte *)(*plVar4 + 0x4d4), bVar9 < bVar1)) {
          bVar9 = bVar1;
        }
        uVar8 = uVar8 + 1;
        plVar4 = plVar4 + 1;
      } while (uVar8 != uVar6);
    }
    if (bVar9 != 2) {
      if (uVar6 == 0) {
        return;
      }
      do {
        plVar4 = (longlong *)*plVar7;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x3c0))(plVar4,param_2,param_3);
        }
        plVar7 = plVar7 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
      return;
    }
  }
  plVar7 = (longlong *)param_1[0xd];
  uVar6 = (longlong)(int)param_1[0xe] & 0x1fffffffffffffff;
  if (plVar7 + (int)param_1[0xe] < plVar7) {
    uVar6 = uVar5;
  }
  uVar8 = uVar5;
  if (uVar6 != 0) {
    do {
      if ((*plVar7 != 0) && (plVar4 = *(longlong **)(*plVar7 + 0x508), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x18))();
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar6);
  }
  (**(code **)(*param_1 + 0x308))(param_1);
  plVar7 = (longlong *)param_1[0xd];
  uVar6 = (longlong)(int)param_1[0xe] & 0x1fffffffffffffff;
  if (plVar7 + (int)param_1[0xe] < plVar7) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x750))();
      }
      plVar7 = plVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



// FUNCTION 142b87ec0 FUN_142b87ec0 body=234 status=ok
// SIG undefined FUN_142b87ec0(void)

void FUN_142b87ec0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 local_28;
  longlong *local_20;
  
  plVar5 = *(longlong **)(param_1 + 0xa8);
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0xb0);
  uVar4 = *(undefined4 *)(param_1 + 0x80);
  if ((*(int *)(param_1 + 0x90) != 0) && (*(longlong **)(param_1 + 0x88) != (longlong *)0x0)) {
    cVar8 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
    if (cVar8 != '\0') {
      if (*(int *)(param_1 + 0x90) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x88);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_28 = uVar6;
      local_20 = plVar5;
      (**(code **)(*plVar9 + 0x40))(plVar9,uVar4,uVar3,&local_28);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar5 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  FAsyncPathFindingQuery::~FAsyncPathFindingQuery(param_1);
  return;
}



// FUNCTION 142b87fb0 FUN_142b87fb0 body=150 status=ok
// SIG undefined FUN_142b87fb0(void)

void FUN_142b87fb0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong in_R9;
  
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavigationData.h",
             0x33a,L"Pure virtual not implemented (%s)",L"ANavigationData::BatchProjectPoints");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavigationData.h",
             0x33a,L"Pure virtual not implemented (%s)",L"ANavigationData::BatchProjectPoints");
  plVar4 = *(longlong **)(in_R9 + 8);
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



// FUNCTION 142b88050 BatchRaycast body=150 status=ok
// SIG undefined BatchRaycast(void)

void ANavigationData::BatchRaycast(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavigationData.h",
             0x311,L"Pure virtual not implemented (%s)",L"ANavigationData::BatchRaycast");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\navigationsystem\\public\\NavigationData.h",
             0x311,L"Pure virtual not implemented (%s)",L"ANavigationData::BatchRaycast");
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



// FUNCTION 142b880f0 FUN_142b880f0 body=294 status=ok
// SIG undefined FUN_142b880f0(void)

void FUN_142b880f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x520) != &local_28) {
    *(undefined8 *)(param_1 + 0x520) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x528,&local_20);
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
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x4f8);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x4f8) == param_1)) {
    *(undefined8 *)(lVar4 + 0x4f8) = 0;
    lVar4 = *(longlong *)(param_1 + 0x4f8);
    puVar6 = (undefined8 *)(lVar4 + 0x520);
    local_10 = (longlong *)0x0;
    if (puVar6 != &local_18) {
      *puVar6 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar4 + 0x528,&local_10);
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
  FUN_1422235f0(param_1);
  return;
}



// FUNCTION 142b88220 FUN_142b88220 body=88 status=ok
// SIG undefined FUN_142b88220(void)

void FUN_142b88220(longlong param_1)

{
  FUN_1423850d0();
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x2f0) + 0x2e8) = *(undefined8 *)(param_1 + 0x2e8);
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x2e8) + 0x2f0) = *(undefined8 *)(param_1 + 0x2f0);
  }
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  return;
}



// FUNCTION 142b88280 BeginDestroy body=47 status=ok
// SIG undefined BeginDestroy(void)

void UNavigationPath::BeginDestroy(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(param_1 + 0x60) + 0x80,*(undefined8 *)(param_1 + 0x80));
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142b882b0 FUN_142b882b0 body=206 status=ok
// SIG undefined FUN_142b882b0(void)

void FUN_142b882b0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    FNavigationSystem::DiscardNavigationDataChunks(lVar2);
    cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x73) & 0xfd) == 0)) {
      QueryPerformanceCounter(&local_res8);
      (**(code **)(*param_1 + 0x340))(param_1);
      (**(code **)(*param_1 + 0x2f0))(param_1);
      FUN_142b94ab0(param_1,0);
      plVar3 = (longlong *)param_1[0xd];
      uVar5 = 0;
      uVar4 = (longlong)(int)param_1[0xe] & 0x1fffffffffffffff;
      if (plVar3 + (int)param_1[0xe] < plVar3) {
        uVar4 = uVar5;
      }
      if (uVar4 != 0) {
        do {
          if ((longlong *)*plVar3 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar3 + 0x760))();
          }
          plVar3 = plVar3 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
    }
  }
  return;
}



// FUNCTION 142b88380 FUN_142b88380 body=366 status=ok
// SIG undefined FUN_142b88380(void)

undefined4 * FUN_142b88380(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20 [24];
  
  if (*(longlong *)(param_1 + 0x4c0) == 0) {
    *param_2 = 0xffffffff;
    param_2[1] = 0;
    *(undefined8 *)(param_2 + 2) = DAT_146687978;
    param_2[4] = DAT_146687980;
    *(undefined8 *)(param_2 + 5) = DAT_146687978;
    param_2[7] = DAT_146687980;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 10) = 0;
    param_2[0xd] = param_2[0xd] | 1;
    param_2[0xc] = 0;
    param_2[0xe] = 0xffffffff;
    param_2[0xf] = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x12) = 0;
    param_2[0x14] = param_2[0x14] & 0xffffffe0;
    param_2[0x15] = 0xbf800000;
    param_2[0x16] = 0xbf800000;
    param_2[0x17] = 0xbf800000;
    param_2[0x18] = 0x3f000000;
    *(undefined8 *)(param_2 + 0x1a) = 0;
    *(undefined8 *)(param_2 + 0x1c) = 0;
    *(undefined8 *)(param_2 + 0x1e) = 0;
  }
  else {
    local_30 = 0;
    uStack_28 = 0;
    uVar1 = FUN_142b90120(local_20,*(longlong *)(param_1 + 0x4c0),param_1,
                          *(undefined8 *)(param_1 + 0x500));
    uVar2 = (**(code **)(*(longlong *)(param_3 + 0x458) + 0x18))
                      ((longlong *)(param_3 + 0x458),local_48);
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x458) + 0x18))(param_1 + 0x458,local_3c);
    FUN_142b80bd0(param_2,param_1,*(undefined8 *)(param_1 + 0x4c0),uVar3,uVar2,uVar1,&local_30);
  }
  return param_2;
}



// FUNCTION 142b884f0 FUN_142b884f0 body=92 status=ok
// SIG undefined FUN_142b884f0(void)

undefined8 FUN_142b884f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong in_stack_00000028;
  
  plVar4 = *(longlong **)(in_stack_00000028 + 8);
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
    return 0;
  }
  return 0;
}



// FUNCTION 142b88550 CalcPathLengthAndCost body=92 status=ok
// SIG undefined CalcPathLengthAndCost(void)

undefined8 AAbstractNavData::CalcPathLengthAndCost(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong in_stack_00000030;
  
  plVar4 = *(longlong **)(in_stack_00000030 + 8);
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
    return 0;
  }
  return 0;
}



// FUNCTION 142b885f0 FUN_142b885f0 body=563 status=ok
// SIG undefined FUN_142b885f0(void)

void FUN_142b885f0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong local_28;
  longlong *local_20;
  
  FUN_140483870(&DAT_1464b57d0,param_1);
  FUN_140483870(&DAT_1466879e0,param_1);
  FUN_140483870(&DAT_1465357f0,param_1);
  FUN_140483870(&DAT_146535808,param_1);
  plVar3 = param_1 + 0x3b;
  lVar8 = 0;
  lVar7 = *plVar3;
  if (lVar7 != 0) {
    TOctree<FNavigationOctreeElement,FNavigationOctreeSemantics>::FNode::~FNode(lVar7 + 0x10);
    *(undefined8 *)(lVar7 + 0x310) = 0;
    uVar6 = 0;
    *(undefined8 *)(lVar7 + 0x318) = 0;
    *(undefined8 *)(lVar7 + 800) = 0;
    *(undefined4 *)(lVar7 + 0x368) = 0x80000000;
    do {
      *(undefined8 *)(lVar7 + 0x328 + (ulonglong)(uVar6 & 7) * 8) = 0;
      if (((byte)uVar6 & 7) < 7) {
        uVar6 = uVar6 ^ (uVar6 + 1 ^ uVar6) & 7;
      }
      else {
        uVar6 = uVar6 | 8;
      }
    } while (uVar6 >> 3 == 0);
    *(undefined8 *)(lVar7 + 0x3a8) = 0;
    local_20 = (longlong *)0x0;
    if (plVar3 != &local_28) {
      *plVar3 = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3c,&local_20);
      plVar3 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
    }
  }
  TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x4e,0);
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x24);
  if (lVar7 != 0) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x24);
    if (cVar5 != '\0') {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x24);
      iVar4 = *(int *)(lVar7 + 0xc);
      if (iVar4 < (int)DAT_1469e91c4) {
        uVar9 = iVar4 >> 0x1f & 0xffff;
        uVar6 = iVar4 + uVar9;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar9) * 0x18;
      }
      *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & 0xbfffffff;
    }
    FWeakObjectPtr::operator=(param_1 + 0x24,0);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x74)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xd,0);
  }
  if (((param_2 == '\0') && (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) &&
     (*(int *)(lVar8 + 0x708) == 1 || *(int *)(lVar8 + 0x708) == 2)) {
    DAT_146687970 = 1;
  }
  return;
}



// FUNCTION 142b88830 FUN_142b88830 body=135 status=ok
// SIG undefined FUN_142b88830(void)

void FUN_142b88830(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  
  (**(code **)(*param_1 + 0x6e8))();
  (**(code **)(*param_1 + 0x310))(param_1,1);
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1428d4e50(uVar3,param_1);
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x20000000;
                    /* WARNING: Could not recover jumptable at 0x000142b888b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4f0))(param_1);
  return;
}



// FUNCTION 142b888c0 ClearCollision body=150 status=ok
// SIG undefined ClearCollision(void)

void UNavCollision::ClearCollision(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x3c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x30,0);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((*(int *)(param_1 + 0x4c) < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((*(int *)(param_1 + 0x5c) < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x50,0);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((*(int *)(param_1 + 0x6c) < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((*(int *)(param_1 + 0x7c) < 0) && (*(int *)(param_1 + 0x7c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffd;
  return;
}



// FUNCTION 142b88960 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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



// FUNCTION 142b88a10 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FNavigationBounds,DefaultKeyFuncs<FNavigationBounds,0>,FDefaultSetAllocator>::ConditionalRehash
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


