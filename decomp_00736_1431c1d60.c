// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1431c1d60 Create body=116 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionPlay::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    CAkAction::CAkAction(puVar1,param_1,param_2);
    *(undefined4 *)(puVar1 + 7) = 0;
    *puVar1 = &PTR_FUN_145ace998;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c1de0 FUN_1431c1de0 body=619 status=ok
// SIG undefined FUN_1431c1de0(void)

int FUN_1431c1de0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  byte local_res8 [8];
  undefined4 local_1b8;
  uint local_1b4;
  undefined1 local_1b0;
  undefined4 local_1a8 [2];
  longlong *local_1a0;
  undefined8 local_198;
  undefined4 *local_190;
  int *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  char local_110 [3];
  char local_10d;
  undefined1 local_100 [224];
  byte local_20;
  
  pbVar2 = *(byte **)(param_1 + 0x20);
  uVar11 = 0;
  if (pbVar2 != (byte *)0x0) {
    do {
      uVar10 = (int)uVar11 + 1;
      if (pbVar2[uVar10] == 0x11) {
        pfVar1 = (float *)(pbVar2 + uVar11 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc));
        if ((pfVar1 != (float *)0x0) &&
           ((*pfVar1 == 0.0 ||
            (DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1,
            *pfVar1 < (float)(uint)((ulonglong)DAT_146b50b60 >> 0x21) * 4.656613e-08)))) {
          return 1;
        }
        break;
      }
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < *pbVar2);
  }
  plVar9 = (longlong *)CAkAction::GetAndRefTarget(param_1);
  if (plVar9 == (longlong *)0x0) {
    return 0xf;
  }
  local_1b0 = 0;
  local_1b8 = CAkAction::GetTransitionTime(param_1);
  local_1b4 = *(byte *)(param_1 + 0x36) & 0x1f;
  FUN_14313bbf0(local_1a8);
  local_174 = *(undefined4 *)(param_2 + 0x30);
  piVar3 = *(int **)(param_2 + 0x1c);
  local_180 = *(undefined8 *)(param_2 + 0x24);
  local_178 = *(undefined4 *)(param_2 + 0x2c);
  local_1a8[0] = 0;
  local_1a0 = plVar9;
  if (local_188 != (int *)0x0) {
    AkExternalSourceArray::Release();
  }
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  local_124 = *(undefined4 *)(param_2 + 0x14);
  local_20 = local_20 | 2;
  local_128 = 0;
  local_188 = piVar3;
  cVar5 = CAkAction::PlayDirectly(*(undefined8 *)(param_2 + 8));
  uVar4 = local_174;
  bVar6 = cVar5 << 2 | local_20 & 0xfb;
  local_120 = 0;
  local_198 = *(undefined8 *)(param_2 + 0x40);
  local_190 = &local_1b8;
  local_118 = 0;
  if ((local_110[0] == -0x70) && (local_10d != '\0')) {
    local_res8[0] = local_20 & 1;
    local_20 = bVar6;
    uVar7 = AkPBIParams::GetMidiTargetID(local_1a8);
    iVar8 = CAkParameterNode::FilterAndTransformMidiEvent
                      (plVar9,local_110,uVar7,local_res8,local_198,uVar4);
    if (iVar8 != 1) goto LAB_1431c2005;
    bVar6 = local_20 ^ (local_res8[0] ^ local_20) & 1;
  }
  local_20 = bVar6;
  iVar8 = FUN_1431a35f0(plVar9,local_1a8);
  if (iVar8 == 3) {
    iVar8 = 1;
  }
  else if (iVar8 == 1) {
    iVar8 = (**(code **)(*plVar9 + 0x238))(plVar9,local_1a8);
  }
LAB_1431c2005:
  (**(code **)(*plVar9 + 0x10))(plVar9);
  AkInitialSoundParams::DoTerm(local_100);
  if (local_188 != (int *)0x0) {
    AkExternalSourceArray::Release();
  }
  return iVar8;
}



// FUNCTION 1431c2090 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMaterialResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ace9f8;
  CAkActionActive::~CAkActionActive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1431c20d0 Create body=113 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionPause::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    CAkActionActive::CAkActionActive(puVar1,param_1,param_2);
    *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) | 1;
    *puVar1 = &PTR__scalar_deleting_destructor__145ace9f8;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c2150 Execute body=261 status=ok
// SIG undefined Execute(void)

undefined4 CAkActionPause::Execute(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x34);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  if (0x201 < uVar1) {
    if (uVar1 < 0x204) {
      plVar4 = (longlong *)CAkAction::GetAndRefTarget(param_1);
      if (plVar4 == (longlong *)0x0) {
        uVar3 = 1;
      }
      else {
        uVar3 = CAkActionActive::Exec(param_1,1,uVar2,*(undefined4 *)(param_2 + 0x38));
        CAkAudioMgr::PausePendingAction
                  (DAT_146b50b78,plVar4,uVar2,*(byte *)(param_1 + 0x48) & 1,
                   *(undefined4 *)(param_2 + 0x38));
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      return uVar3;
    }
    if (uVar1 < 0x206) {
      CAkActionActive::AllExecExcept(param_1,1,uVar2,*(undefined4 *)(param_2 + 0x38));
      CAkAudioMgr::PausePendingActionAllExcept
                (DAT_146b50b78,uVar2,param_1 + 0x38,*(byte *)(param_1 + 0x48) & 1,
                 *(undefined4 *)(param_2 + 0x38));
    }
  }
  return 1;
}



// FUNCTION 1431c22a0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMaterialResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acea68;
  CAkActionActive::~CAkActionActive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1431c22e0 FUN_1431c22e0 body=109 status=ok
// SIG undefined FUN_1431c22e0(void)

undefined8 * FUN_1431c22e0(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    CAkActionActive::CAkActionActive(puVar1,param_1,param_2);
    *puVar1 = &PTR__scalar_deleting_destructor__145acea68;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c2350 Execute body=261 status=ok
// SIG undefined Execute(void)

undefined4 CAkActionResume::Execute(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x34);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  if (0x301 < uVar1) {
    if (uVar1 < 0x304) {
      plVar4 = (longlong *)CAkAction::GetAndRefTarget(param_1);
      if (plVar4 == (longlong *)0x0) {
        uVar3 = 1;
      }
      else {
        uVar3 = CAkActionActive::Exec(param_1,2,uVar2,*(undefined4 *)(param_2 + 0x38));
        CAkAudioMgr::ResumePausedPendingAction
                  (DAT_146b50b78,plVar4,uVar2,*(byte *)(param_1 + 0x48) & 1,
                   *(undefined4 *)(param_2 + 0x38));
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      return uVar3;
    }
    if (uVar1 < 0x306) {
      CAkActionActive::AllExecExcept(param_1,2,uVar2,*(undefined4 *)(param_2 + 0x38));
      CAkAudioMgr::ResumePausedPendingActionAllExcept
                (DAT_146b50b78,uVar2,param_1 + 0x38,*(byte *)(param_1 + 0x48) & 1,
                 *(undefined4 *)(param_2 + 0x38));
    }
  }
  return 1;
}



// FUNCTION 1431c2490 FUN_1431c2490 body=62 status=ok
// SIG undefined FUN_1431c2490(void)

undefined8 * FUN_1431c2490(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acead8;
  CAkAction::~CAkAction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1431c24d0 FUN_1431c24d0 body=109 status=ok
// SIG undefined FUN_1431c24d0(void)

undefined8 * FUN_1431c24d0(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    CAkAction::CAkAction(puVar1,param_1,param_2);
    *puVar1 = &PTR_FUN_145acead8;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c2540 Execute body=174 status=ok
// SIG undefined Execute(void)

undefined4 CAkActionBreak::Execute(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  undefined2 local_15;
  longlong *local_10;
  
  plVar1 = (longlong *)CAkAction::GetAndRefTarget();
  if (plVar1 == (longlong *)0x0) {
    return 0xf;
  }
  local_30 = *(undefined8 *)(param_2 + 0x40);
  local_28 = *(undefined4 *)(param_2 + 0x38);
  local_24 = 0;
  local_20 = 4;
  local_1c = 0;
  local_15 = 0;
  local_38[0] = 3;
  local_18 = 0;
  local_16 = 0;
  local_10 = plVar1;
  (**(code **)(*plVar1 + 0x90))(plVar1,local_38);
  FUN_14313bf70(DAT_146b50b78,plVar1,*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x38)
               );
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return 1;
}



// FUNCTION 1431c25f0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkActionMute::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145aceb28;
  CAkActionSetValue::~CAkActionSetValue();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1431c2630 Create body=109 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionMute::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
  if (puVar1 != (undefined8 *)0x0) {
    CAkActionSetValue::CAkActionSetValue(puVar1,param_1,param_2);
    *puVar1 = &PTR__scalar_deleting_destructor__145aceb28;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c26a0 ExecResetValue body=69 status=ok
// SIG undefined ExecResetValue(void)

void CAkActionMute::ExecResetValue(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = CAkAction::GetTransitionTime();
                    /* WARNING: Could not recover jumptable at 0x0001431c26e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x180))(param_2,0,bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 1431c26f0 ExecResetValue body=85 status=ok
// SIG undefined ExecResetValue(void)

void CAkActionMute::ExecResetValue(longlong param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = CAkAction::GetTransitionTime();
                    /* WARNING: Could not recover jumptable at 0x0001431c2742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x180))(param_2,param_3,bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 1431c2750 FUN_1431c2750 body=123 status=ok
// SIG undefined FUN_1431c2750(void)

void FUN_1431c2750(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x38);
  piVar1 = piVar5 + (ulonglong)*(uint *)(param_1 + 0x40) * 2;
  if (piVar5 != piVar1) {
    do {
      if (((int)param_2[2] == *piVar5) && (*(byte *)(param_2 + 0x15) >> 7 == *(byte *)(piVar5 + 1)))
      {
        return;
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != piVar1);
  }
  lVar3 = *param_2;
  bVar2 = *(byte *)(param_1 + 0x36);
  uVar4 = CAkAction::GetTransitionTime();
  (**(code **)(lVar3 + 0x188))(param_2,bVar2 & 0x1f,uVar4);
  return;
}



// FUNCTION 1431c27d0 FUN_1431c27d0 body=133 status=ok
// SIG undefined FUN_1431c27d0(void)

void FUN_1431c27d0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x38);
  piVar1 = piVar5 + (ulonglong)*(uint *)(param_1 + 0x40) * 2;
  if (piVar5 != piVar1) {
    do {
      if (((int)param_2[2] == *piVar5) && (*(byte *)(param_2 + 0x15) >> 7 == *(byte *)(piVar5 + 1)))
      {
        return;
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != piVar1);
  }
  bVar2 = *(byte *)(param_1 + 0x36);
  lVar3 = *param_2;
  uVar4 = CAkAction::GetTransitionTime();
  (**(code **)(lVar3 + 0x180))(param_2,param_3,bVar2 & 0x1f,uVar4);
  return;
}



// FUNCTION 1431c2860 ExecSetValue body=69 status=ok
// SIG undefined ExecSetValue(void)

void CAkActionMute::ExecSetValue(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = CAkAction::GetTransitionTime();
                    /* WARNING: Could not recover jumptable at 0x0001431c28a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x178))(param_2,0,bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 1431c28b0 ExecSetValue body=85 status=ok
// SIG undefined ExecSetValue(void)

void CAkActionMute::ExecSetValue(longlong param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = CAkAction::GetTransitionTime();
                    /* WARNING: Could not recover jumptable at 0x0001431c2902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x178))(param_2,param_3,bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 1431c2910 GetModValue<float> body=98 status=ok
// SIG undefined GetModValue<float>(void)

float RandomizerModifier::GetModValue<float>(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[1];
  fVar2 = 0.0;
  if (param_1[2] - fVar1 != 0.0) {
    DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
    fVar2 = (float)(uint)((ulonglong)DAT_146b50b60 >> 0x21) * 4.656613e-10 * (param_1[2] - fVar1);
    fVar1 = param_1[1];
  }
  return fVar1 + fVar2 + *param_1;
}



// FUNCTION 1431c2980 FUN_1431c2980 body=62 status=ok
// SIG undefined FUN_1431c2980(void)

undefined8 * FUN_1431c2980(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acebc0;
  CAkActionSetValue::~CAkActionSetValue();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1431c29c0 Create body=123 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionSetAkProp::Create(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x58);
  if (puVar1 != (undefined8 *)0x0) {
    CAkActionSetValue::CAkActionSetValue(puVar1,param_1,param_2);
    *puVar1 = &PTR_FUN_145acebc0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x54) = 2;
    *(undefined1 *)((longlong)puVar1 + 0x55) = param_3;
    CAkAction::AddToIndex(puVar1);
  }
  return puVar1;
}



// FUNCTION 1431c2a40 ExecResetValue body=86 status=ok
// SIG undefined ExecResetValue(void)

void CAkActionSetAkProp::ExecResetValue(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = CAkAction::GetTransitionTime();
                    /* WARNING: Could not recover jumptable at 0x0001431c2a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x170))(param_2,*(undefined1 *)(param_1 + 0x55),bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 1431c2aa0 ExecResetValue body=113 status=ok
// SIG undefined ExecResetValue(void)

void CAkActionSetAkProp::ExecResetValue(longlong param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = CAkAction::GetTransitionTime();
  (**(code **)(lVar2 + 0x168))
            (param_2,*(undefined1 *)(param_1 + 0x55),param_3,0,0,bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 1431c2ba0 ExecSetValue body=136 status=ok
// SIG undefined ExecSetValue(void)

void CAkActionSetAkProp::ExecSetValue(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = RandomizerModifier::GetModValue<float>(param_1 + 0x48);
  bVar1 = *(byte *)(param_1 + 0x36);
  uVar2 = *(undefined1 *)(param_1 + 0x54);
  lVar3 = *param_2;
  uVar4 = CAkAction::GetTransitionTime(param_1);
  (**(code **)(lVar3 + 0x168))
            (param_2,*(undefined1 *)(param_1 + 0x55),0,uVar2,uVar5,bVar1 & 0x1f,uVar4);
  return;
}



// FUNCTION 1431c2c30 ExecSetValue body=74 status=ok
// SIG undefined ExecSetValue(void)

void CAkActionSetAkProp::ExecSetValue(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = RandomizerModifier::GetModValue<float>(param_1 + 0x48);
  ExecSetValueInternal(param_1,param_2,param_3,*(undefined1 *)(param_1 + 0x54),uVar1);
  return;
}



// FUNCTION 1431c2c80 ExecSetValueInternal body=118 status=ok
// SIG undefined ExecSetValueInternal(void)

void CAkActionSetAkProp::ExecSetValueInternal
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = CAkAction::GetTransitionTime();
  (**(code **)(lVar2 + 0x168))
            (param_2,*(undefined1 *)(param_1 + 0x55),param_3,param_4,param_5,bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 1431c2d40 FUN_1431c2d40 body=62 status=ok
// SIG undefined FUN_1431c2d40(void)

undefined8 * FUN_1431c2d40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acec58;
  CAkAction::~CAkAction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1431c2d80 Create body=117 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionSetSwitch::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    CAkAction::CAkAction(puVar1,param_1,param_2);
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_145acec58;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c2e00 Execute body=41 status=ok
// SIG undefined Execute(void)

undefined8 CAkActionSetState::Execute(longlong param_1)

{
  FUN_14312e230(DAT_146b50ae8,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),0,0);
  return 1;
}



// FUNCTION 1431c2e60 FUN_1431c2e60 body=62 status=ok
// SIG undefined FUN_1431c2e60(void)

undefined8 * FUN_1431c2e60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145aceca8;
  CAkAction::~CAkAction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1431c2ea0 Create body=117 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionSetSwitch::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    CAkAction::CAkAction(puVar1,param_1,param_2);
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_145aceca8;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c2f20 Execute body=111 status=ok
// SIG undefined Execute(void)

undefined8 CAkActionSetSwitch::Execute(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  CAkSwitchMgr *pCVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  pCVar4 = g_pSwitchMgr;
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  CAkSwitchMgr::SwitchingInThisScope::SwitchingInThisScope(local_res8);
  lVar5 = CAkSwitchMgr::GetSwitchEntry(pCVar4,uVar2);
  if (lVar5 != 0) {
    CAkSwitchMgr::AkSwitchEntry::SetSwitchInternal(lVar5,uVar1,uVar3);
  }
  CAkSwitchMgr::SwitchingInThisScope::~SwitchingInThisScope(local_res8);
  return 1;
}



// FUNCTION 1431c2f90 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
CAkActionSetGameParameter::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acecf8;
  CAkActionSetValue::~CAkActionSetValue();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1431c2fd0 Create body=128 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionSetGameParameter::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x60);
  if (puVar1 != (undefined8 *)0x0) {
    CAkActionSetValue::CAkActionSetValue(puVar1,param_1,param_2);
    *puVar1 = &PTR__scalar_deleting_destructor__145acecf8;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 2;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c3050 ExecResetValue body=117 status=ok
// SIG undefined ExecResetValue(void)

void CAkActionSetGameParameter::ExecResetValue(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  uVar2 = *(undefined1 *)(param_1 + 0x58);
  local_48 = CAkAction::GetTransitionTime();
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_44 = bVar1 & 0x1f;
  local_40 = uVar2;
  FUN_1431367b0(g_pRTPCMgr,*(undefined4 *)(param_1 + 0x30),&local_38,&local_48);
  return;
}



// FUNCTION 1431c30d0 ExecResetValue body=133 status=ok
// SIG undefined ExecResetValue(void)

void CAkActionSetGameParameter::ExecResetValue
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  uVar2 = *(undefined1 *)(param_1 + 0x58);
  local_48 = CAkAction::GetTransitionTime();
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_44 = bVar1 & 0x1f;
  local_40 = uVar2;
  local_38 = param_3;
  FUN_1431367b0(g_pRTPCMgr,*(undefined4 *)(param_1 + 0x30),&local_38,&local_48);
  return;
}



// FUNCTION 1431c3160 ExecSetValue body=156 status=ok
// SIG undefined ExecSetValue(void)

void CAkActionSetGameParameter::ExecSetValue(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ulong uVar3;
  float fVar4;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  uVar2 = *(undefined1 *)(param_1 + 0x58);
  local_48 = CAkAction::GetTransitionTime();
  uVar3 = *(ulong *)(param_1 + 0x30);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_44 = bVar1 & 0x1f;
  local_40 = uVar2;
  fVar4 = (float)RandomizerModifier::GetModValue<float>(param_1 + 0x48);
  CAkRTPCMgr::SetRTPCInternal
            (g_pRTPCMgr,uVar3,fVar4,(AkRTPCKey *)&local_38,(TransParamsBase *)&local_48,
             *(AkValueMeaning *)(param_1 + 0x54),false);
  return;
}



// FUNCTION 1431c3200 ExecSetValue body=168 status=ok
// SIG undefined ExecSetValue(void)

void CAkActionSetGameParameter::ExecSetValue(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  ulong uVar3;
  float fVar4;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  uVar2 = *(undefined1 *)(param_1 + 0x58);
  local_48 = CAkAction::GetTransitionTime();
  uVar3 = *(ulong *)(param_1 + 0x30);
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_44 = bVar1 & 0x1f;
  local_40 = uVar2;
  local_38 = param_3;
  fVar4 = (float)RandomizerModifier::GetModValue<float>(param_1 + 0x48);
  CAkRTPCMgr::SetRTPCInternal
            (g_pRTPCMgr,uVar3,fVar4,(AkRTPCKey *)&local_38,(TransParamsBase *)&local_48,
             *(AkValueMeaning *)(param_1 + 0x54),false);
  return;
}



// FUNCTION 1431c3300 FUN_1431c3300 body=62 status=ok
// SIG undefined FUN_1431c3300(void)

undefined8 * FUN_1431c3300(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145aced90;
  CAkAction::~CAkAction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1431c3340 FUN_1431c3340 body=109 status=ok
// SIG undefined FUN_1431c3340(void)

undefined8 * FUN_1431c3340(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    CAkAction::CAkAction(puVar1,param_1,param_2);
    *puVar1 = &PTR_FUN_145aced90;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c33b0 Execute body=72 status=ok
// SIG undefined Execute(void)

undefined8 CAkActionUseState::Execute(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)CAkAction::GetAndRefTarget();
  if (plVar1 != (longlong *)0x0) {
    CAkStateAware::UseState(plVar1 + 3,*(short *)(param_1 + 0x34) == 0x1002);
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return 1;
}



// FUNCTION 1431c3400 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMaterialResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acede0;
  CAkActionExcept::~CAkActionExcept();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1431c3440 Create body=120 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionBypassFX::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    CAkActionExcept::CAkActionExcept(puVar1,param_1,param_2);
    *(undefined1 *)(puVar1 + 9) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__145acede0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0xffffffff;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c34c0 Execute body=432 status=ok
// SIG undefined Execute(void)

undefined8 CAkActionBypassFX::Execute(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong *plVar7;
  int *piVar8;
  undefined4 uVar9;
  
  uVar2 = *(ushort *)(param_1 + 0x34);
  lVar3 = *(longlong *)(param_2 + 0x40);
  if (uVar2 < 0x1b05) {
    if (uVar2 == 0x1b04) {
      ResetBypassFXAEHelper(param_1,g_pRegistryMgr);
      for (lVar3 = DAT_146b50898; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
        ResetBypassFXAEHelper(param_1,lVar3 + 0x20);
      }
    }
    else {
      uVar6 = (uint)uVar2;
      if (0x1a01 < uVar6) {
        if (uVar6 < 0x1a04) {
          plVar7 = (longlong *)CAkAction::GetAndRefTarget();
          if (plVar7 != (longlong *)0x0) {
            uVar9 = *(undefined4 *)(param_1 + 0x4c);
            if (*(char *)(param_1 + 0x48) == '\0') {
              uVar9 = 0;
            }
            FUN_143173fb0(plVar7,uVar9,*(undefined4 *)(param_1 + 0x4c),lVar3,0);
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        else if ((uVar6 - 0x1b02 < 2) &&
                (plVar7 = (longlong *)CAkAction::GetAndRefTarget(), plVar7 != (longlong *)0x0)) {
          CAkParameterNodeBase::ResetBypassFX(plVar7,*(undefined4 *)(param_1 + 0x4c),lVar3);
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else if (((uVar2 == 0x1b05) && (3 < *(uint *)(lVar3 + 0x40))) &&
          (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x18), lVar4 != 0)) {
    for (puVar5 = *(undefined8 **)(lVar4 + 0x20); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)*puVar5) {
      plVar7 = (longlong *)FUN_14313b2c0(DAT_146b50af8,puVar5 + 1);
      if (plVar7 != (longlong *)0x0) {
        piVar8 = *(int **)(param_1 + 0x38);
        piVar1 = piVar8 + (ulonglong)*(uint *)(param_1 + 0x40) * 2;
        if (piVar8 != piVar1) {
          do {
            if (((int)plVar7[2] == *piVar8) &&
               (*(byte *)(plVar7 + 0x15) >> 7 == *(byte *)(piVar8 + 1))) goto LAB_1431c3645;
            piVar8 = piVar8 + 2;
          } while (piVar8 != piVar1);
        }
        CAkParameterNodeBase::ResetBypassFX(plVar7,*(undefined4 *)(param_1 + 0x4c),lVar3);
LAB_1431c3645:
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return 1;
}



// FUNCTION 1431c3670 ResetBypassFXAEHelper body=166 status=ok
// SIG undefined ResetBypassFXAEHelper(void)

void CAkActionBypassFX::ResetBypassFXAEHelper(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    for (param_2 = (undefined8 *)*param_2; param_2 != (undefined8 *)0x0;
        param_2 = (undefined8 *)*param_2) {
      plVar2 = (longlong *)FUN_14313b2c0(DAT_146b50af8,param_2 + 1);
      if (plVar2 != (longlong *)0x0) {
        piVar3 = *(int **)(param_1 + 0x38);
        piVar1 = piVar3 + (ulonglong)*(uint *)(param_1 + 0x40) * 2;
        if (piVar3 != piVar1) {
          do {
            if (((int)plVar2[2] == *piVar3) &&
               (*(byte *)(plVar2 + 0x15) >> 7 == *(byte *)(piVar3 + 1))) goto LAB_1431c36f5;
            piVar3 = piVar3 + 2;
          } while (piVar3 != piVar1);
        }
        CAkParameterNodeBase::ResetBypassFX(plVar2,*(undefined4 *)(param_1 + 0x4c),0);
LAB_1431c36f5:
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return;
}



// FUNCTION 1431c3750 FUN_1431c3750 body=62 status=ok
// SIG undefined FUN_1431c3750(void)

undefined8 * FUN_1431c3750(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acee48;
  CAkAction::~CAkAction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1431c3790 FUN_1431c3790 body=109 status=ok
// SIG undefined FUN_1431c3790(void)

undefined8 * FUN_1431c3790(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    CAkAction::CAkAction(puVar1,param_1,param_2);
    *puVar1 = &PTR_FUN_145acee48;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c3800 Execute body=33 status=ok
// SIG undefined Execute(void)

undefined8 CAkActionTrigger::Execute(longlong param_1,longlong param_2)

{
  CAkStateMgr::Trigger
            (DAT_146b50ae8,*(undefined4 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x40));
  return 1;
}



// FUNCTION 1431c3830 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TLocalizedTextData<FTextHistory_AsDate>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acee98;
  CAkActionExcept::~CAkActionExcept();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1431c3870 Create body=122 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionSeek::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x58);
  if (puVar1 != (undefined8 *)0x0) {
    CAkActionExcept::CAkActionExcept(puVar1,param_1,param_2);
    *puVar1 = &PTR__scalar_deleting_destructor__145acee98;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x54) = 0;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c38f0 Execute body=451 status=ok
// SIG undefined Execute(void)

undefined8 CAkActionSeek::Execute(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  undefined2 local_25;
  undefined8 local_20;
  longlong local_18;
  float local_10;
  byte local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x34);
  local_40 = *(undefined8 *)(param_2 + 0x40);
  if (uVar1 < 0x1e02) {
    return 1;
  }
  if (uVar1 < 0x1e04) {
    uVar2 = *(undefined4 *)(param_2 + 0x38);
    plVar4 = (longlong *)CAkAction::GetAndRefTarget();
    if (plVar4 == (longlong *)0x0) {
      uVar3 = 0xf;
    }
    else {
      local_20 = 0;
      bVar5 = (*(byte *)(param_1 + 0x54) ^ local_c) & 1 ^ local_c;
      local_18 = 0;
      local_28 = 0;
      local_26 = 0;
      local_34 = 0;
      local_2c = 0;
      local_25 = 0;
      local_30 = 4;
      local_38 = uVar2;
      local_10 = (float)RandomizerModifier::GetModValue<float>(param_1 + 0x48);
      if ((bVar5 & 1) == 0) {
        local_10 = (float)(int)local_10;
      }
      local_48[0] = 4;
      local_c = (*(char *)(param_1 + 0x55) * '\x02' ^ bVar5) & 2 ^ bVar5;
      (**(code **)(*plVar4 + 0x90))(plVar4,local_48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      uVar3 = 1;
    }
  }
  else {
    if (uVar1 < 0x1e06) {
      local_30 = *(byte *)(param_1 + 0x36) & 0x1f;
      local_38 = *(undefined4 *)(param_2 + 0x38);
      bVar5 = (*(byte *)(param_1 + 0x54) ^ local_c) & 1 ^ local_c;
      local_20 = 0;
      local_26 = 0;
      local_34 = 0;
      local_2c = 0;
      local_28 = 0;
      local_25 = 0;
      local_10 = (float)RandomizerModifier::GetModValue<float>(param_1 + 0x48);
      if ((bVar5 & 1) == 0) {
        local_10 = (float)(int)local_10;
      }
      local_48[0] = 4;
      local_c = (*(char *)(param_1 + 0x55) * '\x02' ^ bVar5) & 2 ^ bVar5;
      local_18 = param_1 + 0x38;
      FUN_1431450d0(local_48);
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1431c3b20 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkActionMute::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acef00;
  CAkActionActive::~CAkActionActive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1431c3b60 Create body=109 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionMute::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
  if (puVar1 != (undefined8 *)0x0) {
    CAkActionActive::CAkActionActive(puVar1,param_1,param_2);
    *puVar1 = &PTR__scalar_deleting_destructor__145acef00;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c3bd0 Execute body=152 status=ok
// SIG undefined Execute(void)

undefined4 CAkActionRelease::Execute(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  if ((0x1f01 < *(ushort *)(param_1 + 0x34)) && (*(ushort *)(param_1 + 0x34) < 0x1f04)) {
    plVar3 = (longlong *)CAkAction::GetAndRefTarget(param_1);
    if (plVar3 == (longlong *)0x0) {
      uVar2 = 2;
    }
    else {
      uVar2 = CAkActionActive::Exec(param_1,5,uVar1,*(undefined4 *)(param_2 + 0x38));
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    return uVar2;
  }
  return 2;
}



// FUNCTION 1431c3c70 FUN_1431c3c70 body=62 status=ok
// SIG undefined FUN_1431c3c70(void)

undefined8 * FUN_1431c3c70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acef70;
  CAkAction::~CAkAction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1431c3cb0 FUN_1431c3cb0 body=109 status=ok
// SIG undefined FUN_1431c3cb0(void)

undefined8 * FUN_1431c3cb0(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    CAkAction::CAkAction(puVar1,param_1,param_2);
    *puVar1 = &PTR_FUN_145acef70;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c3d20 Execute body=223 status=ok
// SIG undefined Execute(void)

undefined8 CAkActionPlayEvent::Execute(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar6 = DAT_146b50af8;
  uVar1 = *(uint *)(param_1 + 0x30);
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0xc0);
  EnterCriticalSection(lpCriticalSection);
  uVar2 = *(uint *)(lVar6 + 0xf0);
  if (uVar2 != 0) {
    for (plVar4 = *(longlong **)
                   (*(longlong *)(lVar6 + 0xe8) + ((ulonglong)uVar1 % (ulonglong)uVar2) * 8);
        plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[1]) {
      if (*(uint *)(plVar4 + 2) == uVar1) {
        if (plVar4 != (longlong *)0x0) {
          *(int *)((longlong)plVar4 + 0x14) = *(int *)((longlong)plVar4 + 0x14) + 1;
          LeaveCriticalSection(lpCriticalSection);
          uVar3 = *(undefined4 *)(param_2 + 0x30);
          uVar5 = *(undefined8 *)(param_2 + 0x40);
          uVar7 = AkPendingAction::GameObjID(param_2);
          CAkAudioMgr::ExecuteEvent(plVar4,uVar5,uVar7,uVar3,0,param_2 + 0x1c);
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return 1;
        }
        break;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0xf;
}



// FUNCTION 1431c3e00 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkActionMute::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acefc0;
  CAkActionActive::~CAkActionActive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1431c3e40 Create body=109 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionMute::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
  if (puVar1 != (undefined8 *)0x0) {
    CAkActionActive::CAkActionActive(puVar1,param_1,param_2);
    *puVar1 = &PTR__scalar_deleting_destructor__145acefc0;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431c3eb0 Execute body=104 status=ok
// SIG undefined Execute(void)

undefined8 CAkActionResetPlaylist::Execute(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (*(short *)(param_1 + 0x34) != 0x2202) {
    if (*(short *)(param_1 + 0x34) != 0x2203) {
      return 1;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x40);
  }
  plVar2 = (longlong *)CAkAction::GetAndRefTarget();
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x80))(plVar2);
    if (iVar1 == 2) {
      FUN_14315dff0(plVar2,uVar3);
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return 1;
}



// FUNCTION 1431c3f20 AkContParamsAndPath body=94 status=ok
// SIG undefined AkContParamsAndPath(void)

undefined8 * AkContParamsAndPath::AkContParamsAndPath(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  if (((DAT_146b50b10 != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) &&
     (*(longlong *)param_1[2] != 0)) {
    CAkPathManager::AddPotentialUser();
  }
  return param_1;
}



// FUNCTION 1431c3f80 CAkMultiPlayNode body=71 status=ok
// SIG undefined CAkMultiPlayNode(void)

undefined8 * CAkMultiPlayNode::CAkMultiPlayNode(undefined8 *param_1)

{
  CAkContainerBase::CAkContainerBase();
  *param_1 = &PTR__scalar_deleting_destructor__145acf030;
  param_1[3] = &PTR_LAB_145acf298;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 1431c3fd0 SafeContinuationList body=120 status=ok
// SIG undefined SafeContinuationList(void)

longlong *
SafeContinuationList::SafeContinuationList(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x22) + 0x18);
    if (lVar2 != 0) {
      CAkContinuationList::AddRef(lVar2);
      lVar1 = *param_1;
      *param_1 = lVar2;
      if (lVar1 != 0) {
        CAkContinuationList::Release();
        lVar2 = *param_1;
      }
      CAkMultiPlayNode::ContRefList(param_3,lVar2);
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1431c4050 ~AkContParamsAndPath body=80 status=ok
// SIG undefined ~AkContParamsAndPath(void)

void AkContParamsAndPath::~AkContParamsAndPath(longlong param_1)

{
  if (((DAT_146b50b10 != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) &&
     (**(longlong **)(param_1 + 0x10) != 0)) {
    CAkPathManager::RemovePotentialUser();
  }
  CAkModCtxRefContainer::~CAkModCtxRefContainer(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    CAkContinuationList::Release();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1431c40a0 ~CAkMultiPlayNode body=37 status=ok
// SIG undefined ~CAkMultiPlayNode(void)

void CAkMultiPlayNode::~CAkMultiPlayNode(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf030;
  param_1[3] = &PTR_LAB_145acf298;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  CAkContainerBase::~CAkContainerBase();
  return;
}



// FUNCTION 1431c40e0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkMultiPlayNode::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf030;
  param_1[3] = &PTR_LAB_145acf298;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  CAkContainerBase::~CAkContainerBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1431c4140 FUN_1431c4140 body=486 status=ok
// SIG undefined FUN_1431c4140(void)

undefined8 FUN_1431c4140(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *pvVar9;
  ulonglong uVar10;
  
  plVar4 = *(longlong **)(param_2 + 0x18);
  uVar3 = *(uint *)(plVar4 + 1);
  if (*(uint *)((longlong)plVar4 + 0xc) <= uVar3) {
    uVar1 = *(uint *)((longlong)plVar4 + 0xc) + 2;
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x28);
    if (pvVar6 == (void *)0x0) goto LAB_1431c42f4;
    pvVar8 = (void *)*plVar4;
    if ((pvVar8 != (void *)0x0) && (pvVar8 != pvVar6)) {
      uVar10 = (ulonglong)*(uint *)(plVar4 + 1);
      pvVar9 = pvVar6;
      if (uVar10 != 0) {
        do {
          if (pvVar9 != (void *)0x0) {
            CAkContinueListItem::CAkContinueListItem(pvVar9);
          }
          CAkContinueListItem::operator=(pvVar9,(longlong)pvVar9 + (*plVar4 - (longlong)pvVar6));
          CAkContinueListItem::~CAkContinueListItem((longlong)pvVar9 + (*plVar4 - (longlong)pvVar6))
          ;
          uVar10 = uVar10 - 1;
          pvVar9 = (void *)((longlong)pvVar9 + 0x28);
        } while (uVar10 != 0);
        pvVar8 = (void *)*plVar4;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar8);
    }
    *(uint *)((longlong)plVar4 + 0xc) = uVar1;
    *plVar4 = (longlong)pvVar6;
    if (uVar1 <= uVar3) goto LAB_1431c42f4;
  }
  lVar2 = *plVar4 + (ulonglong)*(uint *)(plVar4 + 1) * 0x28;
  *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) + 1;
  if ((lVar2 != 0) && (CAkContinueListItem::CAkContinueListItem(lVar2), lVar2 != 0)) {
    if (*(longlong *)(*(longlong *)(param_3 + 0x88) + 0x18) == 0) {
      uVar7 = CAkContinuationList::Create();
      lVar5 = *(longlong *)(*(longlong *)(param_3 + 0x88) + 0x18);
      *(undefined8 *)(*(longlong *)(param_3 + 0x88) + 0x18) = uVar7;
      if (lVar5 != 0) {
        CAkContinuationList::Release();
      }
    }
    if (*(longlong *)(*(longlong *)(param_3 + 0x88) + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *param_4;
      if (param_1 != (longlong *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      plVar4 = *(longlong **)(lVar2 + 0x18);
      *(longlong **)(lVar2 + 0x18) = param_1;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      plVar4 = *(longlong **)(*(longlong *)(param_3 + 0x88) + 0x18);
      if ((int)plVar4[1] == 0) {
        *(byte *)(lVar2 + 0x12) = *(byte *)(lVar2 + 0x12) & 0xfc;
        *(undefined2 *)(lVar2 + 0x10) = 1;
      }
      else {
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(*plVar4 + 0x10);
      }
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        CAkMultiPlayNode::ContRefList(param_1);
      }
      return 1;
    }
  }
LAB_1431c42f4:
  lVar2 = *(longlong *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (lVar2 != 0) {
    CAkContinuationList::Release();
  }
  return 0x34;
}



// FUNCTION 1431c4330 FUN_1431c4330 body=147 status=ok
// SIG undefined FUN_1431c4330(void)

ulonglong FUN_1431c4330(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  iVar4 = (int)param_1[1] + -1;
  iVar2 = 0;
  if (-1 < iVar4) {
    uVar3 = uVar5;
    do {
      iVar2 = (iVar4 - (int)uVar3) / 2 + (int)uVar3;
      uVar1 = *(ulonglong *)((longlong)iVar2 * 0x10 + *param_1);
      if (param_2 < uVar1) {
        iVar4 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar2 * 0x10;
        }
        uVar3 = (ulonglong)(iVar2 + 1);
      }
      iVar2 = (int)uVar3;
    } while (iVar2 <= iVar4);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar5 = (longlong)iVar2 * 0x10 + *param_1;
  }
  return uVar5;
}



// FUNCTION 1431c43d0 FUN_1431c43d0 body=222 status=ok
// SIG undefined FUN_1431c43d0(void)

void FUN_1431c43d0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  
  plVar4 = (longlong *)FUN_14315c960(param_1 + 0x1b);
  if (plVar4 != (longlong *)0x0) {
    if (*(uint *)(plVar4 + 1) < 2) {
      cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
      if (cVar3 == '\0') {
        lVar1 = *plVar4;
        if (lVar1 != 0) {
          CAkContinuationList::AddRef(lVar1);
        }
        lVar2 = *param_3;
        *param_3 = lVar1;
        if (lVar2 != 0) {
          CAkContinuationList::Release();
        }
      }
      CAkContinuationList::Release(*plVar4);
      uVar7 = *(uint *)(param_1 + 0x1c);
      plVar5 = (longlong *)((ulonglong)uVar7 * 0x10 + param_1[0x1b] + -0x10);
      if (plVar4 < plVar5) {
        uVar6 = ((ulonglong)((longlong)plVar5 + (-1 - (longlong)plVar4)) >> 3 & 0xfffffffffffffffe)
                + 2 & 0x1ffffffffffffffe;
        plVar5 = plVar4 + 2;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *plVar4 = *plVar5;
          plVar5 = plVar5 + 1;
          plVar4 = plVar4 + 1;
        }
        uVar7 = *(uint *)(param_1 + 0x1c);
      }
      *(uint *)(param_1 + 0x1c) = uVar7 - 1;
    }
    else {
      *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) - 1;
    }
  }
  return;
}



// FUNCTION 1431c44b0 ContRefList body=91 status=ok
// SIG undefined ContRefList(void)

undefined4 CAkMultiPlayNode::ContRefList(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  lVar2 = FUN_1431c4880(param_1 + 0xd8,param_2,local_res8);
  if (lVar2 == 0) {
    return 2;
  }
  iVar1 = *(int *)(lVar2 + 8);
  if (iVar1 == 0) {
    CAkContinuationList::AddRef(param_2);
    iVar1 = *(int *)(lVar2 + 8);
  }
  *(int *)(lVar2 + 8) = iVar1 + 1;
  return 1;
}



// FUNCTION 1431c4510 ContUnrefList body=167 status=ok
// SIG undefined ContUnrefList(void)

undefined8 CAkMultiPlayNode::ContUnrefList(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)FUN_14315c960((longlong *)(param_1 + 0xd8));
  if (puVar1 != (undefined8 *)0x0) {
    if (*(uint *)(puVar1 + 1) < 2) {
      CAkContinuationList::Release(*puVar1);
      uVar4 = *(uint *)(param_1 + 0xe0);
      puVar2 = (undefined8 *)((ulonglong)uVar4 * 0x10 + *(longlong *)(param_1 + 0xd8) + -0x10);
      if (puVar1 < puVar2) {
        uVar3 = ((ulonglong)((longlong)puVar2 + (-1 - (longlong)puVar1)) >> 3 & 0xfffffffffffffffe)
                + 2 & 0x1ffffffffffffffe;
        puVar2 = puVar1 + 2;
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar1 = puVar1 + 1;
        }
        uVar4 = *(uint *)(param_1 + 0xe0);
      }
      *(uint *)(param_1 + 0xe0) = uVar4 - 1;
      return 1;
    }
    *(uint *)(puVar1 + 1) = *(uint *)(puVar1 + 1) - 1;
  }
  return 1;
}



// FUNCTION 1431c45c0 FUN_1431c45c0 body=169 status=ok
// SIG undefined FUN_1431c45c0(void)

undefined8 FUN_1431c45c0(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar5 << 4);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*param_1;
    if ((puVar4 != (undefined8 *)0x0) && (puVar4 != puVar2)) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 1);
      puVar3 = puVar2;
      if (uVar6 != 0) {
        do {
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar3 + 1) = 0;
          }
          puVar4 = (undefined8 *)((longlong)puVar3 + (*param_1 - (longlong)puVar2));
          uVar1 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar1;
          uVar6 = uVar6 - 1;
          puVar3 = puVar3 + 2;
        } while (uVar6 != 0);
        puVar4 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    *param_1 = (longlong)puVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 1431c4670 Init body=65 status=ok
// SIG undefined Init(void)

undefined8 CAkMultiPlayNode::Init(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x80))();
  if ((iVar2 == 0) || (iVar2 == 10)) {
    bVar1 = 0x80;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0x7f;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | bVar1;
  CAkParameterNodeBase::AddToIndex(param_1);
  return 1;
}



// FUNCTION 1431c46c0 FUN_1431c46c0 body=443 status=ok
// SIG undefined FUN_1431c46c0(void)

undefined4 FUN_1431c46c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar8 = *(undefined8 **)(param_2 + 0x88);
  uVar3 = 2;
  local_58 = *puVar8;
  local_50 = puVar8[1];
  local_48 = (longlong *)puVar8[2];
  local_40 = 0;
  local_38 = *(undefined4 *)(puVar8 + 4);
  local_30 = 0;
  local_28 = 0;
  if (((DAT_146b50b10 != 0) && (local_48 != (longlong *)0x0)) && (*local_48 != 0)) {
    CAkPathManager::AddPotentialUser(DAT_146b50b10,*local_48);
    puVar8 = *(undefined8 **)(param_2 + 0x88);
  }
  plVar4 = (longlong *)FUN_14315c960(param_1 + 0x1b,puVar8[3]);
  if (plVar4 != (longlong *)0x0) {
    if (*(uint *)(plVar4 + 1) < 2) {
      cVar2 = (**(code **)(*param_1 + 0x260))(param_1);
      if (cVar2 == '\0') {
        lVar1 = *plVar4;
        if (lVar1 != 0) {
          CAkContinuationList::AddRef(lVar1);
        }
        bVar9 = local_40 != 0;
        local_40 = lVar1;
        if (bVar9) {
          CAkContinuationList::Release();
        }
      }
      CAkContinuationList::Release(*plVar4);
      uVar7 = *(uint *)(param_1 + 0x1c);
      plVar5 = (longlong *)((ulonglong)uVar7 * 0x10 + param_1[0x1b] + -0x10);
      if (plVar4 < plVar5) {
        uVar6 = ((ulonglong)((longlong)plVar5 + (-1 - (longlong)plVar4)) >> 3 & 0xfffffffffffffffe)
                + 2 & 0x1ffffffffffffffe;
        plVar5 = plVar4 + 2;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *plVar4 = *plVar5;
          plVar5 = plVar5 + 1;
          plVar4 = plVar4 + 1;
        }
        uVar7 = *(uint *)(param_1 + 0x1c);
      }
      *(uint *)(param_1 + 0x1c) = uVar7 - 1;
    }
    else {
      *(uint *)(plVar4 + 1) = *(uint *)(plVar4 + 1) - 1;
    }
  }
  if (local_40 != 0) {
    *(undefined8 **)(param_2 + 0x88) = &local_58;
    uVar3 = CAkParameterNode::PlayAndContinueAlternate(param_1,param_2);
  }
  if (((DAT_146b50b10 != 0) && (local_48 != (longlong *)0x0)) && (*local_48 != 0)) {
    CAkPathManager::RemovePotentialUser();
  }
  CAkModCtxRefContainer::~CAkModCtxRefContainer(&local_30);
  if (local_40 != 0) {
    CAkContinuationList::Release();
  }
  return uVar3;
}



// FUNCTION 1431c4880 FUN_1431c4880 body=296 status=ok
// SIG undefined FUN_1431c4880(void)

undefined8 * FUN_1431c4880(longlong *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar3 = (undefined8 *)FUN_1431c4330();
  if (*param_3 != '\0') {
    return puVar3;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (puVar3 == (undefined8 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
       (cVar2 = FUN_1431c45c0(param_1,1), cVar2 == '\0')) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
      return (undefined8 *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar3 = (undefined8 *)((ulonglong)uVar1 * 0x10 + *param_1);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = 0;
    }
  }
  else {
    lVar6 = *param_1;
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
        (cVar2 = FUN_1431c45c0(param_1,1), cVar2 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar1)) {
      return (undefined8 *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    lVar5 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar4 = (undefined8 *)((ulonglong)uVar1 * 0x10 + lVar5);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 1) = 0;
      lVar5 = *param_1;
    }
    lVar6 = ((longlong)puVar3 - lVar6 >> 4 & 0xffffffffU) * 0x10;
    if ((undefined8 *)(lVar6 + lVar5) < puVar4) {
      do {
        *puVar4 = puVar4[-2];
        puVar4[1] = puVar4[-1];
        lVar5 = *param_1;
        puVar4 = puVar4 + -2;
      } while ((undefined8 *)(lVar5 + lVar6) < puVar4);
    }
    if (lVar6 + lVar5 != 0) {
      *(undefined4 *)(lVar6 + lVar5 + 8) = 0;
      lVar5 = *param_1;
    }
    puVar3 = (undefined8 *)(lVar5 + lVar6);
  }
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = param_2;
  }
  return puVar3;
}



// FUNCTION 1431c49b0 Term body=69 status=ok
// SIG undefined Term(void)

void CAkMultiPlayNode::Term(longlong param_1)

{
  if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  return;
}



// FUNCTION 1431c4a00 CAkActionExcept body=43 status=ok
// SIG undefined CAkActionExcept(void)

undefined8 * CAkActionExcept::CAkActionExcept(undefined8 *param_1)

{
  CAkAction::CAkAction();
  *param_1 = &PTR__scalar_deleting_destructor__145acf318;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1431c4a30 ~CAkActionExcept body=74 status=ok
// SIG undefined ~CAkActionExcept(void)

void CAkActionExcept::~CAkActionExcept(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf318;
  if ((void *)param_1[7] != (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[7]);
    param_1[7] = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  CAkAction::~CAkAction(param_1);
  return;
}



// FUNCTION 1431c4a80 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkActionExcept::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf318;
  if ((void *)param_1[7] != (void *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[7]);
    param_1[7] = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  CAkAction::~CAkAction(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1431c4af0 FUN_1431c4af0 body=104 status=ok
// SIG undefined FUN_1431c4af0(void)

int FUN_1431c4af0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 local_res10;
  
  piVar2 = *(int **)(param_1 + 0x38);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x40) * 2;
  if (piVar2 != piVar1) {
    local_res10._4_1_ = (char)((ulonglong)param_2 >> 0x20);
    do {
      if (((int)param_2 == *piVar2) && (local_res10._4_1_ == (char)piVar2[1])) break;
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar1);
  }
  piVar4 = (int *)0x0;
  if (piVar2 != piVar1) {
    piVar4 = piVar2;
  }
  if (piVar4 != (int *)0x0) {
    return 1;
  }
  local_res10 = param_2;
  lVar3 = FUN_1431c4b60(param_1 + 0x38,&local_res10);
  return 2 - (uint)(lVar3 != 0);
}



// FUNCTION 1431c4b60 FUN_1431c4b60 body=200 status=ok
// SIG undefined FUN_1431c4b60(void)

undefined8 * FUN_1431c4b60(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
LAB_1431c4bf0:
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar5 = (undefined8 *)(*param_1 + (ulonglong)uVar2 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *param_2;
    }
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 4;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar4 != (void *)0x0) {
      pvVar6 = (void *)*param_1;
      if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar4)) {
        uVar3 = *(uint *)(param_1 + 1);
        uVar7 = 0;
        if ((ulonglong)uVar3 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar7 * 8) = *(undefined8 *)(*param_1 + uVar7 * 8);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar3);
          pvVar6 = (void *)*param_1;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
      }
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      if (uVar2 < uVar1) goto LAB_1431c4bf0;
    }
    puVar5 = (undefined8 *)0x0;
  }
  return puVar5;
}



// FUNCTION 1431c4c40 RemoveException body=116 status=ok
// SIG undefined RemoveException(void)

void CAkActionExcept::RemoveException(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar2 = *(int **)(param_1 + 0x38);
  uVar4 = *(uint *)(param_1 + 0x40);
  piVar3 = piVar2 + (ulonglong)uVar4 * 2;
  if (piVar2 != piVar3) {
    do {
      if (((int)param_2 == *piVar2) && ((char)((ulonglong)param_2 >> 0x20) == (char)piVar2[1]))
      break;
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar3);
    if (piVar2 != piVar3) {
      if (piVar2 < piVar3 + -2) {
        lVar1 = ((ulonglong)((longlong)(piVar3 + -2) + (-1 - (longlong)piVar2)) >> 3) + 1;
        piVar3 = piVar2;
        for (; piVar2 = piVar2 + 2, lVar1 != 0; lVar1 = lVar1 + -1) {
          *(undefined8 *)piVar3 = *(undefined8 *)piVar2;
          piVar3 = piVar3 + 2;
        }
        uVar4 = *(uint *)(param_1 + 0x40);
      }
      *(uint *)(param_1 + 0x40) = uVar4 - 1;
    }
  }
  return;
}



// FUNCTION 1431c4cc0 FUN_1431c4cc0 body=392 status=ok
// SIG undefined FUN_1431c4cc0(void)

undefined8 FUN_1431c4cc0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  void *pvVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  byte *pbVar13;
  undefined4 uStackX_c;
  
  bVar3 = *(byte *)*param_2;
  pbVar13 = (byte *)*param_2 + 1;
  *param_2 = (longlong)pbVar13;
  uVar12 = bVar3 & 0x7f;
  while (uVar11 = (ulonglong)uVar12, (char)bVar3 < '\0') {
    bVar3 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    *param_2 = (longlong)pbVar13;
    uVar12 = bVar3 & 0x7f | uVar12 << 7;
  }
  if (uVar12 != 0) {
    pvVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,uVar11 * 8);
    *(void **)(param_1 + 0x38) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      return 2;
    }
    *(uint *)(param_1 + 0x44) = uVar12;
    if (uVar12 != 0) {
      do {
        puVar7 = (undefined4 *)*param_2;
        uVar5 = *puVar7;
        *param_2 = (longlong)(puVar7 + 1);
        cVar4 = *(char *)(puVar7 + 1);
        *param_2 = (longlong)puVar7 + 5;
        uVar12 = *(uint *)(param_1 + 0x40);
        uStackX_c = CONCAT31(uStackX_c._1_3_,cVar4 != '\0');
        if (uVar12 < *(uint *)(param_1 + 0x44)) {
LAB_1431c4df3:
          uVar12 = *(uint *)(param_1 + 0x40);
          *(uint *)(param_1 + 0x40) = uVar12 + 1;
          puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar12 * 8);
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = CONCAT44(uStackX_c,uVar5);
          }
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x44) + 4;
          pvVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
          if (pvVar8 != (void *)0x0) {
            pvVar9 = *(void **)(param_1 + 0x38);
            if ((pvVar9 != (void *)0x0) && (pvVar9 != pvVar8)) {
              uVar6 = *(uint *)(param_1 + 0x40);
              uVar10 = 0;
              if ((ulonglong)uVar6 != 0) {
                do {
                  *(undefined8 *)((longlong)pvVar8 + uVar10 * 8) =
                       *(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar10 * 8);
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar6);
                pvVar9 = *(void **)(param_1 + 0x38);
              }
              AK::MemoryMgr::Free(g_DefaultPoolId,pvVar9);
            }
            *(void **)(param_1 + 0x38) = pvVar8;
            *(uint *)(param_1 + 0x44) = uVar1;
            if (uVar12 < uVar1) goto LAB_1431c4df3;
          }
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  return 1;
}



// FUNCTION 1431c4e50 CAkActionActive body=33 status=ok
// SIG undefined CAkActionActive(void)

undefined8 * CAkActionActive::CAkActionActive(undefined8 *param_1)

{
  CAkActionExcept::CAkActionExcept();
  *param_1 = &PTR_FUN_145acf380;
  return param_1;
}



// FUNCTION 1431c4e80 ~CAkActionActive body=15 status=ok
// SIG undefined ~CAkActionActive(void)

void CAkActionActive::~CAkActionActive(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145acf380;
  CAkActionExcept::~CAkActionExcept();
  return;
}



// FUNCTION 1431c4e90 FUN_1431c4e90 body=62 status=ok
// SIG undefined FUN_1431c4e90(void)

undefined8 * FUN_1431c4e90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acf380;
  CAkActionExcept::~CAkActionExcept();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1431c4ed0 AllExecExcept body=165 status=ok
// SIG undefined AllExecExcept(void)

void CAkActionActive::AllExecExcept
               (longlong *param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_5c;
  int local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int local_28;
  uint uStack_24;
  undefined8 uStack_20;
  longlong *local_18;
  
  uStack_34 = 0;
  uStack_2c = uStack_2c & 0xffffff00;
  uStack_24 = uStack_24 & 0xffffff00;
  uStack_20 = 0;
  local_28 = (uint)(param_3 == 0) << 8;
  uStack_30 = *(byte *)((longlong)param_1 + 0x36) & 0x1f;
  local_18 = param_1 + 7;
  local_48 = param_2;
  lStack_40 = param_3;
  local_38 = param_4;
  uStack_34 = CAkAction::GetTransitionTime();
  (**(code **)(*param_1 + 0x68))(param_1,&local_48);
  local_78 = CONCAT44(uStack_44,local_48);
  lStack_70 = lStack_40;
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_58 = local_28;
  uStack_54 = uStack_24;
  uStack_50 = (undefined4)uStack_20;
  uStack_4c = uStack_20._4_4_;
  ExecOnDynamicSequences(param_1,&local_78);
  FUN_1431450d0(&local_48);
  return;
}



// FUNCTION 1431c4f80 Exec body=190 status=ok
// SIG undefined Exec(void)

undefined8
CAkActionActive::Exec(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  
  plVar1 = (longlong *)CAkAction::GetAndRefTarget();
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xf;
  }
  else {
    local_20 = *(byte *)((longlong)param_1 + 0x36) & 0x1f;
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_38[0] = param_2;
    local_30 = param_3;
    local_28 = param_4;
    local_24 = CAkAction::GetTransitionTime(param_1);
    (**(code **)(*param_1 + 0x68))(param_1,local_38);
    (**(code **)(*plVar1 + 0x90))(plVar1,local_38);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1431c5040 ExecOnDynamicSequences body=316 status=ok
// SIG undefined ExecOnDynamicSequences(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkActionActive::ExecOnDynamicSequences(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  uint uVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_38 [32];
  longlong *plVar7;
  longlong *plVar13;
  
  lVar3 = DAT_146b50af8;
  if (*(char *)(param_2 + 9) != '\0') {
    plVar10 = (longlong *)0x0;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x200);
    uVar12 = 0;
    EnterCriticalSection(lpCriticalSection);
    puVar11 = auStack_38;
    plVar15 = plVar10;
    if (*(uint *)(lVar3 + 0x238) != 0) {
      uVar6 = (ulonglong)*(uint *)(lVar3 + 0x238) * 8;
      uVar8 = uVar6 + 0xf;
      if (uVar8 <= uVar6) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar4 = -(uVar8 & 0xfffffffffffffff0);
      plVar15 = (longlong *)(&stack0xffffffffffffffe8 + lVar4);
      puVar11 = auStack_38 + lVar4;
      if (*(uint *)(lVar3 + 0x230) != 0) {
        lVar9 = **(longlong **)(lVar3 + 0x228);
        plVar7 = plVar10;
        while (plVar13 = plVar10, plVar14 = plVar15, lVar9 == 0) {
          uVar5 = (int)plVar7 + 1;
          plVar7 = (longlong *)(ulonglong)uVar5;
          puVar11 = auStack_38 + lVar4;
          if (*(uint *)(lVar3 + 0x230) <= uVar5) goto LAB_1431c512b;
          lVar9 = (*(longlong **)(lVar3 + 0x228))[(longlong)plVar7];
        }
        do {
          while( true ) {
            *plVar14 = lVar9;
            plVar14 = plVar14 + 1;
            lVar9 = *(longlong *)(lVar9 + 8);
            uVar12 = (int)plVar13 + 1;
            plVar13 = (longlong *)(ulonglong)uVar12;
            if (lVar9 != 0) break;
            do {
              uVar5 = (int)plVar7 + 1;
              plVar7 = (longlong *)(ulonglong)uVar5;
              if (*(uint *)(lVar3 + 0x230) <= uVar5) goto LAB_1431c5126;
              lVar9 = *(longlong *)(*(longlong *)(lVar3 + 0x228) + (longlong)plVar7 * 8);
            } while (lVar9 == 0);
          }
LAB_1431c5126:
          puVar11 = auStack_38 + lVar4;
        } while (lVar9 != 0);
      }
    }
LAB_1431c512b:
    *(undefined8 *)(puVar11 + -8) = 0x1431c5134;
    LeaveCriticalSection(lpCriticalSection);
    if (0 < (int)uVar12) {
      uVar2 = *(undefined8 *)(param_2 + 2);
      uVar1 = *param_2;
      do {
        lVar3 = plVar15[(longlong)plVar10];
        *(undefined8 *)(puVar11 + -8) = 0x1431c515f;
        CAkDynamicSequence::AllExec(lVar3,uVar1,uVar2);
        plVar10 = (longlong *)((longlong)plVar10 + 1);
      } while ((longlong)plVar10 < (longlong)(int)uVar12);
    }
  }
  return;
}



// FUNCTION 1431c5180 SetActionParams body=90 status=ok
// SIG undefined SetActionParams(void)

void CAkActionActive::SetActionParams(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  *(byte *)((longlong)param_1 + 0x36) = *(byte *)((longlong)param_1 + 0x36) & 0xe0;
  *(byte *)((longlong)param_1 + 0x36) = *(byte *)((longlong)param_1 + 0x36) | bVar1 & 0x1f;
  iVar2 = (**(code **)(*param_1 + 0x48))();
  if (iVar2 == 1) {
    FUN_1431c4cc0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1431c51e0 EvalCutoff body=20 status=ok
// SIG undefined EvalCutoff(void)

void AkHpfParamEval::EvalCutoff(float param_1)

{
  FUN_1431c5210(100.0 - param_1);
  return;
}



// FUNCTION 1431c5200 EvalCutoff body=5 status=ok
// SIG undefined EvalCutoff(void)

float AkLpfParamEval::EvalCutoff(float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (30.0 <= param_1) {
    uVar1 = (uint)(longlong)((100.0 - param_1) * 1042939.94 + 1.0653532e+09);
    fVar3 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
    fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) * (float)(uVar1 & 0xff800000)
            * 16.797443;
  }
  else {
    fVar3 = (30.0 - param_1) * 433.33334 + 7000.0;
  }
  fVar2 = (float)DAT_1467bdcac * 0.45;
  if (fVar3 <= (float)DAT_1467bdcac * 0.45) {
    fVar2 = fVar3;
  }
  return fVar2;
}



// FUNCTION 1431c5210 FUN_1431c5210 body=176 status=ok
// SIG undefined FUN_1431c5210(void)

float FUN_1431c5210(float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (30.0 <= param_1) {
    uVar1 = (uint)(longlong)((100.0 - param_1) * 1042939.94 + 1.0653532e+09);
    fVar3 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
    fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) * (float)(uVar1 & 0xff800000)
            * 16.797443;
  }
  else {
    fVar3 = (30.0 - param_1) * 433.33334 + 7000.0;
  }
  fVar2 = (float)DAT_1467bdcac * 0.45;
  if (fVar3 <= (float)DAT_1467bdcac * 0.45) {
    fVar2 = fVar3;
  }
  return fVar2;
}



// FUNCTION 1431c52c0 FUN_1431c52c0 body=58 status=ok
// SIG undefined FUN_1431c52c0(void)

longlong FUN_1431c52c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 == 0) {
    lVar1 = FUN_14312d650();
  }
  else {
    lVar1 = FUN_14312d720(DAT_146b50ae8,param_4,param_2,param_3);
  }
  if (lVar1 != 0) {
    return lVar1 + 8;
  }
  return 0;
}



// FUNCTION 1431c5300 FUN_1431c5300 body=161 status=ok
// SIG undefined FUN_1431c5300(void)

undefined8 FUN_1431c5300(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_4 == 0) {
    lVar1 = FUN_14312d650();
  }
  else {
    lVar1 = FUN_14312d720(DAT_146b50ae8,param_4,param_2,param_3);
  }
  if (lVar1 != 0) {
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      puVar2[1] = 0;
      if (*(longlong *)(lVar1 + 0x38) == 0) {
        *(undefined8 **)(lVar1 + 0x38) = puVar2;
        *(undefined8 **)(lVar1 + 0x30) = puVar2;
        puVar2[1] = 0;
        return 1;
      }
      puVar2[1] = *(longlong *)(lVar1 + 0x38);
      *(undefined8 **)(lVar1 + 0x38) = puVar2;
    }
    return 1;
  }
  return 2;
}



// FUNCTION 1431c53b0 FUN_1431c53b0 body=139 status=ok
// SIG undefined FUN_1431c53b0(void)

void FUN_1431c53b0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_4 == 0) {
    lVar2 = FUN_14312d650();
  }
  else {
    lVar2 = FUN_14312d720(DAT_146b50ae8,param_4,param_2,param_3);
  }
  if (lVar2 != 0) {
    plVar3 = (longlong *)0x0;
    plVar4 = *(longlong **)(lVar2 + 0x38);
    if (*(longlong **)(lVar2 + 0x38) != (longlong *)0x0) {
      do {
        if (*plVar4 == param_1) {
          if (plVar4 == *(longlong **)(lVar2 + 0x38)) {
            *(longlong *)(lVar2 + 0x38) = plVar4[1];
          }
          else {
            plVar3[1] = plVar4[1];
          }
          if (plVar4 == *(longlong **)(lVar2 + 0x30)) {
            *(longlong **)(lVar2 + 0x30) = plVar3;
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,plVar4);
          return;
        }
        plVar1 = plVar4 + 1;
        plVar3 = plVar4;
        plVar4 = (longlong *)*plVar1;
      } while ((longlong *)*plVar1 != (longlong *)0x0);
      return;
    }
  }
  return;
}



// FUNCTION 1431c5440 FUN_1431c5440 body=545 status=ok
// SIG undefined FUN_1431c5440(void)

undefined8 FUN_1431c5440(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  float *pfVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  float *pfVar15;
  
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  uVar13 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar12 = (uint)uVar2;
  if (uVar13 < uVar2) {
    uVar12 = uVar13;
  }
  piVar14 = (int *)(*param_1 + (ulonglong)(uint)(*(int *)(param_4 + 0x28) * 2) * 2);
  pfVar15 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  lVar11 = (longlong)(int)((uVar12 - 1) * 2);
  **(short **)(param_4 + 0x20) = *(short *)((longlong)piVar14 + lVar11 * 2);
  *(undefined2 *)(*(longlong *)(param_4 + 0x20) + 2) =
       *(undefined2 *)((longlong)piVar14 + lVar11 * 2 + 2);
  uVar3 = *(ushort *)(param_2 + 2);
  iVar10 = uVar12 + (uVar12 >> 4) * -0x10;
  piVar1 = (int *)((longlong)piVar14 + (ulonglong)((uVar12 >> 4) << 5) * 2);
  if (piVar14 < piVar1) {
    pfVar9 = pfVar15 + (ulonglong)uVar3 + 8;
    do {
      iVar4 = *piVar14;
      iVar5 = piVar14[1];
      iVar6 = piVar14[2];
      iVar7 = piVar14[3];
      *pfVar15 = (float)(int)(short)iVar4 * 3.0517578e-05;
      pfVar15[1] = (float)(int)(short)iVar5 * 3.0517578e-05;
      pfVar15[2] = (float)(int)(short)iVar6 * 3.0517578e-05;
      pfVar15[3] = (float)(int)(short)iVar7 * 3.0517578e-05;
      pfVar9[-8] = (float)(iVar4 >> 0x10) * 3.0517578e-05;
      pfVar9[-7] = (float)(iVar5 >> 0x10) * 3.0517578e-05;
      pfVar9[-6] = (float)(iVar6 >> 0x10) * 3.0517578e-05;
      pfVar9[-5] = (float)(iVar7 >> 0x10) * 3.0517578e-05;
      iVar4 = piVar14[4];
      iVar5 = piVar14[5];
      iVar6 = piVar14[6];
      iVar7 = piVar14[7];
      pfVar15[4] = (float)(int)(short)iVar4 * 3.0517578e-05;
      pfVar15[5] = (float)(int)(short)iVar5 * 3.0517578e-05;
      pfVar15[6] = (float)(int)(short)iVar6 * 3.0517578e-05;
      pfVar15[7] = (float)(int)(short)iVar7 * 3.0517578e-05;
      pfVar9[-4] = (float)(iVar4 >> 0x10) * 3.0517578e-05;
      pfVar9[-3] = (float)(iVar5 >> 0x10) * 3.0517578e-05;
      pfVar9[-2] = (float)(iVar6 >> 0x10) * 3.0517578e-05;
      pfVar9[-1] = (float)(iVar7 >> 0x10) * 3.0517578e-05;
      iVar4 = piVar14[8];
      iVar5 = piVar14[9];
      iVar6 = piVar14[10];
      iVar7 = piVar14[0xb];
      pfVar15[8] = (float)(int)(short)iVar4 * 3.0517578e-05;
      pfVar15[9] = (float)(int)(short)iVar5 * 3.0517578e-05;
      pfVar15[10] = (float)(int)(short)iVar6 * 3.0517578e-05;
      pfVar15[0xb] = (float)(int)(short)iVar7 * 3.0517578e-05;
      *pfVar9 = (float)(iVar4 >> 0x10) * 3.0517578e-05;
      pfVar9[1] = (float)(iVar5 >> 0x10) * 3.0517578e-05;
      pfVar9[2] = (float)(iVar6 >> 0x10) * 3.0517578e-05;
      pfVar9[3] = (float)(iVar7 >> 0x10) * 3.0517578e-05;
      iVar4 = piVar14[0xc];
      iVar5 = piVar14[0xd];
      iVar6 = piVar14[0xe];
      iVar7 = piVar14[0xf];
      piVar14 = piVar14 + 0x10;
      pfVar15[0xc] = (float)(int)(short)iVar4 * 3.0517578e-05;
      pfVar15[0xd] = (float)(int)(short)iVar5 * 3.0517578e-05;
      pfVar15[0xe] = (float)(int)(short)iVar6 * 3.0517578e-05;
      pfVar15[0xf] = (float)(int)(short)iVar7 * 3.0517578e-05;
      pfVar15 = pfVar15 + 0x10;
      pfVar9[4] = (float)(iVar4 >> 0x10) * 3.0517578e-05;
      pfVar9[5] = (float)(iVar5 >> 0x10) * 3.0517578e-05;
      pfVar9[6] = (float)(iVar6 >> 0x10) * 3.0517578e-05;
      pfVar9[7] = (float)(iVar7 >> 0x10) * 3.0517578e-05;
      pfVar9 = pfVar9 + 0x10;
    } while (piVar14 < piVar1);
  }
  if (iVar10 != 0) {
    do {
      *pfVar15 = (float)(int)(short)*piVar14 * 3.0517578e-05;
      pfVar15[uVar3] = (float)(int)*(short *)((longlong)piVar14 + 2) * 3.0517578e-05;
      iVar10 = iVar10 + -1;
      piVar14 = piVar14 + 1;
      pfVar15 = pfVar15 + 1;
    } while (iVar10 != 0);
  }
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar12;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar12 + *(short *)(param_4 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = 0x10000;
  if (uVar12 == uVar2) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar12;
  }
  if (uVar12 == uVar13) {
    uVar8 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar12;
    uVar8 = 0x2b;
  }
  return uVar8;
}



// FUNCTION 1431c5670 Bypass_I16_NChanVecSSE2 body=442 status=ok
// SIG undefined Bypass_I16_NChanVecSSE2(void)

undefined8 Bypass_I16_NChanVecSSE2(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  float *pfVar17;
  undefined1 auVar18 [16];
  undefined1 auVar21 [16];
  int iVar24;
  undefined1 auVar27 [12];
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  
  uVar4 = *(ushort *)((longlong)param_1 + 0x12);
  bVar3 = *(byte *)(param_1 + 1);
  uVar16 = (ulonglong)bVar3;
  uVar13 = param_3 - *(int *)(param_4 + 0x2c);
  uVar5 = (uint)uVar4;
  if (uVar13 < uVar4) {
    uVar5 = uVar13;
  }
  uVar14 = bVar3 * uVar5;
  pauVar11 = (undefined1 (*) [16])
             (*param_1 + (ulonglong)(*(int *)(param_4 + 0x28) * (uint)bVar3) * 2);
  pfVar17 = (float *)(*param_2 + (ulonglong)(*(int *)(param_4 + 0x2c) * (uint)bVar3) * 4);
  uVar9 = uVar14 & 0xfffffff0;
  iVar15 = uVar14 - uVar9;
  puVar8 = *pauVar11;
  for (; pauVar11 < (undefined1 (*) [16])(puVar8 + (ulonglong)uVar9 * 2); pauVar11 = pauVar11 + 2) {
    auVar21 = *pauVar11;
    auVar2 = pauVar11[1];
    auVar20._0_12_ = auVar21._0_12_;
    auVar20._12_2_ = auVar21._6_2_;
    auVar20._14_2_ = -(ushort)(auVar21._6_2_ < 0);
    auVar19._12_4_ = auVar20._12_4_;
    auVar19._0_10_ = auVar21._0_10_;
    auVar19._10_2_ = -(ushort)(auVar21._4_2_ < 0);
    auVar18._10_6_ = auVar19._10_6_;
    auVar18._0_8_ = auVar21._0_8_;
    auVar18._8_2_ = auVar21._4_2_;
    auVar6._4_8_ = auVar18._8_8_;
    auVar6._2_2_ = -(ushort)(auVar21._2_2_ < 0);
    auVar6._0_2_ = auVar21._2_2_;
    iVar24 = CONCAT22(-(ushort)(auVar21._8_2_ < 0),auVar21._8_2_);
    auVar25._0_8_ = CONCAT26(-(ushort)(auVar21._10_2_ < 0),CONCAT24(auVar21._10_2_,iVar24));
    auVar25._8_2_ = auVar21._12_2_;
    auVar25._10_2_ = -(ushort)(auVar21._12_2_ < 0);
    auVar26._12_2_ = auVar21._14_2_;
    auVar26._0_12_ = auVar25;
    auVar26._14_2_ = -(ushort)(auVar21._14_2_ < 0);
    *pfVar17 = (float)CONCAT22(-(ushort)(auVar21._0_2_ < 0),auVar21._0_2_) * 3.0517578e-05;
    pfVar17[1] = (float)auVar6._0_4_ * 3.0517578e-05;
    pfVar17[2] = (float)auVar18._8_4_ * 3.0517578e-05;
    pfVar17[3] = (float)auVar19._12_4_ * 3.0517578e-05;
    pfVar17[4] = (float)iVar24 * 3.0517578e-05;
    pfVar17[5] = (float)(int)((ulonglong)auVar25._0_8_ >> 0x20) * 3.0517578e-05;
    pfVar17[6] = (float)auVar25._8_4_ * 3.0517578e-05;
    pfVar17[7] = (float)auVar26._12_4_ * 3.0517578e-05;
    iVar24 = CONCAT22(-(ushort)(auVar2._8_2_ < 0),auVar2._8_2_);
    auVar27._0_8_ = CONCAT26(-(ushort)(auVar2._10_2_ < 0),CONCAT24(auVar2._10_2_,iVar24));
    auVar27._8_2_ = auVar2._12_2_;
    auVar27._10_2_ = -(ushort)(auVar2._12_2_ < 0);
    auVar28._12_2_ = auVar2._14_2_;
    auVar28._0_12_ = auVar27;
    auVar28._14_2_ = -(ushort)(auVar2._14_2_ < 0);
    auVar23._0_12_ = auVar2._0_12_;
    auVar23._12_2_ = auVar2._6_2_;
    auVar23._14_2_ = -(ushort)(auVar2._6_2_ < 0);
    auVar22._12_4_ = auVar23._12_4_;
    auVar22._0_10_ = auVar2._0_10_;
    auVar22._10_2_ = -(ushort)(auVar2._4_2_ < 0);
    auVar21._10_6_ = auVar22._10_6_;
    auVar21._0_8_ = auVar2._0_8_;
    auVar21._8_2_ = auVar2._4_2_;
    auVar7._4_8_ = auVar21._8_8_;
    auVar7._2_2_ = -(ushort)(auVar2._2_2_ < 0);
    auVar7._0_2_ = auVar2._2_2_;
    pfVar17[8] = (float)CONCAT22(-(ushort)(auVar2._0_2_ < 0),auVar2._0_2_) * 3.0517578e-05;
    pfVar17[9] = (float)auVar7._0_4_ * 3.0517578e-05;
    pfVar17[10] = (float)auVar21._8_4_ * 3.0517578e-05;
    pfVar17[0xb] = (float)auVar22._12_4_ * 3.0517578e-05;
    pfVar17[0xc] = (float)iVar24 * 3.0517578e-05;
    pfVar17[0xd] = (float)(int)((ulonglong)auVar27._0_8_ >> 0x20) * 3.0517578e-05;
    pfVar17[0xe] = (float)auVar27._8_4_ * 3.0517578e-05;
    pfVar17[0xf] = (float)auVar28._12_4_ * 3.0517578e-05;
    pfVar17 = pfVar17 + 0x10;
  }
  for (; iVar15 != 0; iVar15 = iVar15 + -1) {
    puVar8 = *pauVar11;
    pauVar11 = (undefined1 (*) [16])(*pauVar11 + 2);
    *pfVar17 = (float)(int)*(short *)puVar8 * 3.0517578e-05;
    pfVar17 = pfVar17 + 1;
  }
  lVar1 = uVar16 * -2;
  if (bVar3 != 0) {
    lVar12 = 0;
    do {
      *(undefined2 *)(lVar12 + *(longlong *)(param_4 + 0x20)) =
           *(undefined2 *)((longlong)pauVar11 + lVar12 + lVar1);
      uVar16 = uVar16 - 1;
      lVar12 = lVar12 + 2;
    } while (uVar16 != 0);
  }
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar5;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar5 + *(short *)(param_4 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = 0x10000;
  if (uVar5 == uVar4) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar5;
  }
  if (uVar5 == uVar13) {
    uVar10 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar5;
    uVar10 = 0x2b;
  }
  return uVar10;
}



// FUNCTION 1431c5830 Fixed_I16_1Chan body=431 status=ok
// SIG undefined Fixed_I16_1Chan(void)

undefined8 Fixed_I16_1Chan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar9;
  
  uVar8 = *(uint *)(param_4 + 0x34);
  uVar14 = *(uint *)(param_4 + 0x30);
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  uVar17 = (uint)uVar2;
  uVar10 = uVar14 & 0xffff;
  uVar15 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar4 = ((uVar8 - uVar14) + 0xffff) / uVar8;
  if (uVar15 < uVar4) {
    uVar4 = uVar15;
  }
  psVar1 = (short *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 2);
  pfVar11 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  if (uVar4 != 0) {
    sVar3 = **(short **)(param_4 + 0x20);
    uVar7 = uVar4;
    do {
      uVar14 = uVar14 + uVar8;
      iVar5 = ((int)*psVar1 - (int)sVar3) * uVar10;
      uVar10 = uVar14 & 0xffff;
      *pfVar11 = (float)(iVar5 + sVar3 * 0x10000) * 4.656613e-10;
      pfVar11 = pfVar11 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar9 = (ulonglong)((uVar17 * 0x10000 - uVar14) + -1 + uVar8) / (ulonglong)uVar8;
  uVar13 = (ulonglong)(uVar15 - uVar4);
  if ((uint)uVar9 <= uVar15 - uVar4) {
    uVar13 = uVar9;
  }
  uVar16 = (uint)uVar13;
  uVar7 = uVar16;
  while( true ) {
    uVar12 = uVar14 >> 0x10;
    if (uVar7 == 0) break;
    uVar14 = uVar14 + uVar8;
    iVar5 = ((int)psVar1[(ulonglong)(uVar12 + 1) - 1] - (int)psVar1[(ulonglong)uVar12 - 1]) * uVar10
    ;
    uVar10 = uVar14 & 0xffff;
    *pfVar11 = (float)(iVar5 + psVar1[(ulonglong)uVar12 - 1] * 0x10000) * 4.656613e-10;
    uVar7 = (int)uVar13 - 1;
    uVar13 = (ulonglong)uVar7;
    pfVar11 = pfVar11 + 1;
  }
  uVar9 = (ulonglong)uVar17;
  if (uVar12 < uVar2) {
    uVar9 = (ulonglong)uVar12;
  }
  uVar8 = (uint)uVar9;
  if (uVar8 != 0) {
    **(short **)(param_4 + 0x20) = psVar1[uVar9 - 1];
  }
  uVar4 = uVar4 + uVar16;
  *(uint *)(param_4 + 0x30) = uVar14 + uVar8 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar9;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar4 + *(short *)(param_4 + 0x2c);
  if (uVar8 == uVar17) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar8;
  }
  if (uVar4 == uVar15) {
    uVar6 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar4;
    uVar6 = 0x2b;
  }
  return uVar6;
}



// FUNCTION 1431c59e0 Fixed_I16_2Chan body=631 status=ok
// SIG undefined Fixed_I16_2Chan(void)

undefined8 Fixed_I16_2Chan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar19;
  ulonglong uVar18;
  
  uVar5 = *(uint *)(param_4 + 0x34);
  uVar15 = *(uint *)(param_4 + 0x30);
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  uVar13 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar7 = ((uVar5 - uVar15) + 0xffff) / uVar5;
  uVar11 = uVar15 & 0xffff;
  if (uVar13 < uVar7) {
    uVar7 = uVar13;
  }
  uVar3 = *(ushort *)(param_2 + 2);
  pfVar12 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  psVar1 = (short *)(*param_1 + (ulonglong)(uint)(*(int *)(param_4 + 0x28) * 2) * 2);
  if (uVar7 != 0) {
    iVar19 = (int)**(short **)(param_4 + 0x20);
    iVar16 = (int)(*(short **)(param_4 + 0x20))[1];
    uVar14 = uVar7;
    do {
      uVar15 = uVar15 + uVar5;
      iVar8 = (*psVar1 - iVar19) * uVar11;
      iVar10 = (psVar1[1] - iVar16) * uVar11;
      uVar11 = uVar15 & 0xffff;
      *pfVar12 = (float)(iVar8 + iVar19 * 0x10000) * 4.656613e-10;
      pfVar12[uVar3] = (float)(iVar10 + iVar16 * 0x10000) * 4.656613e-10;
      pfVar12 = pfVar12 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar14 = uVar15 >> 0x10;
  uVar6 = (ulonglong)(((uint)uVar2 * 0x10000 - uVar15) + -1 + uVar5) / (ulonglong)uVar5;
  uVar18 = (ulonglong)(uVar13 - uVar7);
  if ((uint)uVar6 <= uVar13 - uVar7) {
    uVar18 = uVar6;
  }
  iVar16 = (int)uVar18;
  if (iVar16 != 0) {
    do {
      uVar14 = uVar14 * 2;
      uVar15 = uVar15 + uVar5;
      sVar4 = psVar1[(ulonglong)(uVar14 + 1) - 2];
      iVar8 = ((int)psVar1[(ulonglong)(uVar14 + 3) - 2] - (int)sVar4) * uVar11;
      iVar19 = ((int)psVar1[(ulonglong)(uVar14 + 2) - 2] - (int)psVar1[(ulonglong)uVar14 - 2]) *
               uVar11;
      uVar11 = uVar15 & 0xffff;
      *pfVar12 = (float)(iVar19 + psVar1[(ulonglong)uVar14 - 2] * 0x10000) * 4.656613e-10;
      uVar14 = uVar15 >> 0x10;
      pfVar12[uVar3] = (float)(iVar8 + sVar4 * 0x10000) * 4.656613e-10;
      uVar17 = (int)uVar18 - 1;
      uVar18 = (ulonglong)uVar17;
      pfVar12 = pfVar12 + 1;
    } while (uVar17 != 0);
  }
  uVar11 = (uint)uVar2;
  uVar5 = uVar11;
  if (uVar14 < uVar11) {
    uVar5 = uVar14;
  }
  if (uVar5 != 0) {
    **(short **)(param_4 + 0x20) = psVar1[(ulonglong)(uVar5 * 2) - 2];
    *(short *)(*(longlong *)(param_4 + 0x20) + 2) = psVar1[(ulonglong)(uVar5 * 2 + 1) - 2];
  }
  uVar7 = uVar7 + iVar16;
  *(uint *)(param_4 + 0x30) = uVar15 + uVar5 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar5;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar7 + *(short *)(param_4 + 0x2c);
  if (uVar5 == uVar11) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar5;
  }
  if (uVar7 == uVar13) {
    uVar9 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar7;
    uVar9 = 0x2b;
  }
  return uVar9;
}



// FUNCTION 1431c5c60 Fixed_Native_1Chan body=435 status=ok
// SIG undefined Fixed_Native_1Chan(void)

undefined8 Fixed_Native_1Chan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar8;
  
  uVar9 = *(uint *)(param_4 + 0x34);
  uVar14 = *(uint *)(param_4 + 0x30);
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  uVar16 = (uint)uVar3;
  uVar17 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar8 = (ulonglong)((uVar9 - uVar14) + 0xffff) / (ulonglong)uVar9;
  pfVar1 = (float *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 4);
  if (uVar17 < (uint)uVar8) {
    uVar8 = (ulonglong)uVar17;
  }
  fVar2 = **(float **)(param_4 + 0x20);
  pfVar12 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  uVar15 = (uint)uVar8;
  uVar6 = uVar15;
  while (uVar11 = uVar14 & 0xffff, uVar6 != 0) {
    uVar14 = uVar14 + uVar9;
    *pfVar12 = (*pfVar1 - fVar2) * (float)uVar11 * 1.5258789e-05 + fVar2;
    pfVar12 = pfVar12 + 1;
    uVar6 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar6;
  }
  uVar8 = (ulonglong)((uVar16 * 0x10000 - uVar14) + -1 + uVar9) / (ulonglong)uVar9;
  uVar10 = (ulonglong)(uVar17 - uVar15);
  if ((uint)uVar8 <= uVar17 - uVar15) {
    uVar10 = uVar8;
  }
  uVar7 = (uint)uVar10;
  uVar6 = uVar7;
  while( true ) {
    uVar13 = uVar14 >> 0x10;
    uVar8 = (ulonglong)uVar13;
    if (uVar6 == 0) break;
    uVar14 = uVar14 + uVar9;
    uVar4 = (ulonglong)uVar11;
    uVar11 = uVar14 & 0xffff;
    *pfVar12 = (pfVar1[(ulonglong)(uVar13 + 1) - 1] - pfVar1[uVar8 - 1]) * (float)uVar4 *
               1.5258789e-05 + pfVar1[uVar8 - 1];
    pfVar12 = pfVar12 + 1;
    uVar6 = (int)uVar10 - 1;
    uVar10 = (ulonglong)uVar6;
  }
  uVar10 = (ulonglong)uVar16;
  if (uVar13 < uVar3) {
    uVar10 = uVar8;
  }
  uVar9 = (uint)uVar10;
  if (uVar9 != 0) {
    **(float **)(param_4 + 0x20) = pfVar1[uVar10 - 1];
  }
  uVar7 = uVar7 + uVar15;
  *(uint *)(param_4 + 0x30) = uVar14 + uVar9 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar10;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar7 + *(short *)(param_4 + 0x2c);
  if (uVar9 == uVar16) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar9;
  }
  if (uVar7 == uVar17) {
    uVar5 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar7;
    uVar5 = 0x2b;
  }
  return uVar5;
}



// FUNCTION 1431c5e20 Fixed_Native_2Chan body=564 status=ok
// SIG undefined Fixed_Native_2Chan(void)

undefined8 Fixed_Native_2Chan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  
  uVar17 = *(uint *)(param_4 + 0x34);
  uVar21 = *(uint *)(param_4 + 0x30);
  uVar5 = *(ushort *)(param_2 + 2);
  uVar6 = *(ushort *)((longlong)param_1 + 0x12);
  uVar22 = (uint)uVar6;
  uVar7 = *(ushort *)(param_1 + 2);
  uVar16 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar11 = ((uVar17 - uVar21) + 0xffff) / uVar17;
  uVar15 = uVar21 & 0xffff;
  if (uVar16 < uVar11) {
    uVar11 = uVar16;
  }
  pfVar1 = (float *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 4);
  pfVar18 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  fVar2 = **(float **)(param_4 + 0x20);
  fVar3 = (*(float **)(param_4 + 0x20))[1];
  if (uVar11 != 0) {
    uVar13 = uVar11;
    do {
      fVar4 = pfVar1[(ulonglong)(uVar7 + 1) - 1];
      uVar21 = uVar21 + uVar17;
      uVar12 = (ulonglong)uVar15;
      uVar15 = uVar21 & 0xffff;
      *pfVar18 = (*pfVar1 - fVar2) * (float)uVar12 * 1.5258789e-05 + fVar2;
      pfVar18[uVar5] = (float)uVar12 * 1.5258789e-05 * (fVar4 - fVar3) + fVar3;
      pfVar18 = pfVar18 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar19 = (ulonglong)(uVar21 >> 0x10);
  uVar12 = (ulonglong)((uVar22 * 0x10000 - uVar21) + -1 + uVar17) / (ulonglong)uVar17;
  uVar14 = (ulonglong)(uVar16 - uVar11);
  if ((uint)uVar12 <= uVar16 - uVar11) {
    uVar14 = uVar12;
  }
  iVar20 = (int)uVar14;
  if (iVar20 != 0) {
    do {
      iVar8 = (int)uVar19;
      uVar13 = (uint)uVar7 + iVar8;
      fVar2 = pfVar1[(ulonglong)uVar13 - 1];
      fVar3 = pfVar1[(ulonglong)(uVar13 + 1) - 1];
      uVar21 = uVar21 + uVar17;
      uVar12 = (ulonglong)uVar15;
      uVar15 = uVar21 & 0xffff;
      lVar9 = uVar19 - 1;
      lVar10 = uVar19 - 1;
      uVar19 = (ulonglong)(uVar21 >> 0x10);
      *pfVar18 = (pfVar1[(ulonglong)(iVar8 + 1) - 1] - pfVar1[lVar9]) *
                 (float)uVar12 * 1.5258789e-05 + pfVar1[lVar10];
      pfVar18[uVar5] = (float)uVar12 * 1.5258789e-05 * (fVar3 - fVar2) + fVar2;
      pfVar18 = pfVar18 + 1;
      uVar13 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  uVar12 = (ulonglong)uVar22;
  if ((uint)uVar19 < (uint)uVar6) {
    uVar12 = uVar19;
  }
  uVar17 = (uint)uVar12;
  if (uVar17 != 0) {
    **(float **)(param_4 + 0x20) = pfVar1[uVar12 - 1];
    *(float *)(*(longlong *)(param_4 + 0x20) + 4) = pfVar1[(ulonglong)(uVar17 + uVar7) - 1];
  }
  uVar11 = uVar11 + iVar20;
  *(uint *)(param_4 + 0x30) = uVar21 + uVar17 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar12;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar11 + *(short *)(param_4 + 0x2c);
  if (uVar17 == uVar22) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar17;
  }
  if (uVar11 == uVar16) {
    return 0x2d;
  }
  *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar11;
  return 0x2b;
}



// FUNCTION 1431c6060 Interpolating_I16_1Chan body=566 status=ok
// SIG undefined Interpolating_I16_1Chan(void)

undefined8 Interpolating_I16_1Chan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  short *psVar1;
  float *pfVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  uVar11 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar18 = *(uint *)(param_4 + 0x30);
  uVar19 = *(uint *)(param_4 + 0x40);
  psVar1 = (short *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 2);
  uVar17 = (ulonglong)(uVar18 >> 0x10);
  uVar20 = uVar18 & 0xffff;
  pfVar2 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  iVar13 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar5 = *(int *)(param_4 + 0x34) * 0x400;
  iVar12 = *(int *)(param_4 + 0x3c);
  sVar4 = **(short **)(param_4 + 0x20);
  uVar10 = (ulonglong)(0x400 - iVar12) / (ulonglong)uVar19;
  pfVar15 = pfVar2;
  if (uVar18 >> 0x10 == 0) {
    if (uVar11 < (uint)uVar10) {
      uVar10 = (ulonglong)uVar11;
    }
    uVar9 = iVar13 * iVar12 + iVar5;
    do {
      iVar7 = (int)uVar10;
      uVar10 = (ulonglong)(iVar7 - 1);
      if (iVar7 == 0) break;
      uVar9 = uVar9 + iVar13 * uVar19;
      iVar12 = iVar12 + uVar19;
      iVar7 = ((int)*psVar1 - (int)sVar4) * uVar20;
      uVar18 = uVar18 + (uVar9 >> 10);
      uVar20 = uVar18 & 0xffff;
      uVar17 = (ulonglong)(uVar18 >> 0x10);
      *pfVar15 = (float)(iVar7 + sVar4 * 0x10000) * 4.656613e-10;
      pfVar15 = pfVar15 + 1;
    } while (uVar18 >> 0x10 == 0);
  }
  uVar9 = uVar3 - 1;
  uVar8 = (longlong)((longlong)pfVar2 + ((ulonglong)uVar11 * 4 - (longlong)pfVar15)) >> 2;
  uVar10 = (ulonglong)(0x400 - iVar12) / (ulonglong)uVar19;
  if ((uint)uVar17 <= uVar9) {
    if ((uint)uVar8 < (uint)uVar10) {
      uVar10 = uVar8;
    }
    uVar10 = uVar10 & 0xffffffff;
    uVar14 = iVar13 * iVar12 + iVar5;
    do {
      iVar5 = (int)uVar10;
      uVar10 = (ulonglong)(iVar5 - 1);
      if (iVar5 == 0) break;
      lVar16 = uVar17 - 1;
      uVar14 = uVar14 + iVar13 * uVar19;
      iVar12 = iVar12 + uVar19;
      iVar5 = ((int)psVar1[(ulonglong)((int)uVar17 + 1) - 1] - (int)psVar1[lVar16]) * uVar20;
      uVar18 = uVar18 + (uVar14 >> 10);
      uVar20 = uVar18 & 0xffff;
      uVar17 = (ulonglong)(uVar18 >> 0x10);
      *pfVar15 = (float)(iVar5 + psVar1[lVar16] * 0x10000) * 4.656613e-10;
      pfVar15 = pfVar15 + 1;
    } while (uVar18 >> 0x10 <= uVar9);
  }
  uVar19 = (uint)uVar3;
  *(int *)(param_4 + 0x3c) = iVar12;
  uVar10 = (ulonglong)uVar19;
  if ((uint)uVar17 < uVar19) {
    uVar10 = uVar17;
  }
  uVar20 = (uint)uVar10;
  if (uVar20 != 0) {
    **(short **)(param_4 + 0x20) = psVar1[uVar10 - 1];
  }
  lVar16 = (longlong)pfVar15 - (longlong)pfVar2 >> 2;
  *(uint *)(param_4 + 0x30) = uVar18 + uVar20 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar10;
  *(short *)((longlong)param_2 + 0x12) = (short)lVar16 + *(short *)(param_4 + 0x2c);
  if (uVar20 == uVar19) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar20;
  }
  uVar18 = (uint)lVar16;
  if (uVar18 == uVar11) {
    uVar6 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar18;
    uVar6 = 0x2b;
  }
  return uVar6;
}



// FUNCTION 1431c62a0 Interpolating_I16_2Chan body=802 status=ok
// SIG undefined Interpolating_I16_2Chan(void)

undefined8 Interpolating_I16_2Chan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  short *psVar1;
  float *pfVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  
  uVar16 = *(uint *)(param_4 + 0x30);
  uVar17 = param_3 - *(uint *)(param_4 + 0x2c);
  iVar15 = *(int *)(param_4 + 0x3c);
  uVar7 = *(uint *)(param_4 + 0x40);
  uVar8 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar3 = *(ushort *)(param_2 + 2);
  uVar19 = uVar16 >> 0x10;
  uVar22 = uVar16 & 0xffff;
  psVar1 = (short *)(*param_1 + (ulonglong)(uint)(*(int *)(param_4 + 0x28) * 2) * 2);
  pfVar2 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  iVar23 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar9 = *(int *)(param_4 + 0x34) * 0x400;
  sVar4 = **(short **)(param_4 + 0x20);
  sVar5 = (*(short **)(param_4 + 0x20))[1];
  uVar14 = (ulonglong)(0x400 - iVar15) / (ulonglong)uVar7;
  pfVar20 = pfVar2;
  if (uVar16 >> 0x10 == 0) {
    if (uVar17 < (uint)uVar14) {
      uVar14 = (ulonglong)uVar17;
    }
    uVar13 = iVar23 * iVar15 + iVar9;
    do {
      iVar10 = (int)uVar14;
      uVar14 = (ulonglong)(iVar10 - 1);
      if (iVar10 == 0) break;
      iVar10 = (int)sVar4;
      uVar13 = uVar13 + iVar23 * uVar7;
      iVar15 = iVar15 + uVar7;
      sVar6 = psVar1[1];
      iVar18 = (int)sVar5;
      *pfVar20 = (float)(int)((*psVar1 - iVar10) * uVar22 + iVar10 * 0x10000) * 4.656613e-10;
      pfVar20[uVar3] = (float)(int)((sVar6 - iVar18) * uVar22 + iVar18 * 0x10000) * 4.656613e-10;
      pfVar20 = pfVar20 + 1;
      uVar16 = uVar16 + (uVar13 >> 10);
      uVar22 = uVar16 & 0xffff;
      uVar19 = uVar16 >> 0x10;
    } while (uVar16 >> 0x10 == 0);
  }
  uVar14 = (ulonglong)(0x400 - iVar15) / (ulonglong)uVar7;
  uVar12 = (longlong)((longlong)pfVar2 + ((ulonglong)uVar17 * 4 - (longlong)pfVar20)) >> 2;
  if (uVar19 <= uVar8 - 1) {
    if ((uint)uVar12 < (uint)uVar14) {
      uVar14 = uVar12;
    }
    uVar14 = uVar14 & 0xffffffff;
    uVar13 = iVar23 * iVar15 + iVar9;
    do {
      iVar9 = (int)uVar14;
      uVar14 = (ulonglong)(iVar9 - 1);
      if (iVar9 == 0) break;
      uVar19 = uVar19 * 2;
      uVar13 = uVar13 + iVar23 * uVar7;
      sVar4 = psVar1[(ulonglong)(uVar19 + 1) - 2];
      iVar15 = iVar15 + uVar7;
      sVar5 = psVar1[(ulonglong)(uVar19 + 3) - 2];
      *pfVar20 = (float)(int)(((int)psVar1[(ulonglong)(uVar19 + 2) - 2] -
                              (int)psVar1[(ulonglong)uVar19 - 2]) * uVar22 +
                             psVar1[(ulonglong)uVar19 - 2] * 0x10000) * 4.656613e-10;
      pfVar20[uVar3] =
           (float)(int)(((int)sVar5 - (int)sVar4) * uVar22 + sVar4 * 0x10000) * 4.656613e-10;
      pfVar20 = pfVar20 + 1;
      uVar16 = uVar16 + (uVar13 >> 10);
      uVar22 = uVar16 & 0xffff;
      uVar19 = uVar16 >> 0x10;
    } while (uVar19 <= uVar8 - 1);
  }
  *(int *)(param_4 + 0x3c) = iVar15;
  uVar7 = uVar8;
  if (uVar19 < uVar8) {
    uVar7 = uVar19;
  }
  if (uVar7 != 0) {
    **(short **)(param_4 + 0x20) = psVar1[(ulonglong)(uVar7 * 2) - 2];
    *(short *)(*(longlong *)(param_4 + 0x20) + 2) = psVar1[(ulonglong)(uVar7 * 2 + 1) - 2];
  }
  lVar21 = (longlong)pfVar20 - (longlong)pfVar2 >> 2;
  *(uint *)(param_4 + 0x30) = uVar16 + uVar7 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar7;
  *(short *)((longlong)param_2 + 0x12) = (short)lVar21 + *(short *)(param_4 + 0x2c);
  if (uVar7 == uVar8) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar7;
  }
  uVar16 = (uint)lVar21;
  if (uVar16 == uVar17) {
    uVar11 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar16;
    uVar11 = 0x2b;
  }
  return uVar11;
}



// FUNCTION 1431c65d0 Interpolating_Native_1Chan body=545 status=ok
// SIG undefined Interpolating_Native_1Chan(void)

undefined8
Interpolating_Native_1Chan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  
  uVar17 = *(uint *)(param_4 + 0x30);
  uVar19 = param_3 - *(uint *)(param_4 + 0x2c);
  iVar13 = *(int *)(param_4 + 0x3c);
  uVar11 = *(uint *)(param_4 + 0x40);
  uVar5 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar16 = (ulonglong)(uVar17 >> 0x10);
  uVar20 = uVar17 & 0xffff;
  pfVar1 = (float *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 4);
  pfVar2 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  iVar12 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar6 = *(int *)(param_4 + 0x34) * 0x400;
  fVar3 = **(float **)(param_4 + 0x20);
  uVar9 = (ulonglong)(0x400 - iVar13) / (ulonglong)uVar11;
  pfVar14 = pfVar2;
  if (uVar17 >> 0x10 == 0) {
    if (uVar19 < (uint)uVar9) {
      uVar9 = (ulonglong)uVar19;
    }
    uVar10 = iVar12 * iVar13 + iVar6;
    do {
      iVar8 = (int)uVar9;
      uVar9 = (ulonglong)(iVar8 - 1);
      if (iVar8 == 0) break;
      uVar10 = uVar10 + iVar12 * uVar11;
      uVar18 = (ulonglong)uVar20;
      iVar13 = iVar13 + uVar11;
      uVar17 = uVar17 + (uVar10 >> 10);
      uVar20 = uVar17 & 0xffff;
      uVar16 = (ulonglong)(uVar17 >> 0x10);
      *pfVar14 = (*pfVar1 - fVar3) * (float)uVar18 * 1.5258789e-05 + fVar3;
      pfVar14 = pfVar14 + 1;
    } while (uVar17 >> 0x10 == 0);
  }
  uVar9 = (ulonglong)(0x400 - iVar13) / (ulonglong)uVar11;
  uVar18 = (longlong)((longlong)pfVar2 + ((ulonglong)uVar19 * 4 - (longlong)pfVar14)) >> 2;
  if ((uint)uVar16 <= uVar5 - 1) {
    if ((uint)uVar18 < (uint)uVar9) {
      uVar9 = uVar18;
    }
    uVar9 = uVar9 & 0xffffffff;
    uVar10 = iVar12 * iVar13 + iVar6;
    do {
      iVar6 = (int)uVar9;
      uVar9 = (ulonglong)(iVar6 - 1);
      if (iVar6 == 0) break;
      iVar6 = (int)uVar16;
      uVar10 = uVar10 + iVar12 * uVar11;
      lVar15 = uVar16 - 1;
      uVar18 = (ulonglong)uVar20;
      iVar13 = iVar13 + uVar11;
      uVar17 = uVar17 + (uVar10 >> 10);
      uVar20 = uVar17 & 0xffff;
      lVar4 = uVar16 - 1;
      uVar16 = (ulonglong)(uVar17 >> 0x10);
      *pfVar14 = (pfVar1[(ulonglong)(iVar6 + 1) - 1] - pfVar1[lVar15]) * (float)uVar18 *
                 1.5258789e-05 + pfVar1[lVar4];
      pfVar14 = pfVar14 + 1;
    } while (uVar17 >> 0x10 <= uVar5 - 1);
  }
  *(int *)(param_4 + 0x3c) = iVar13;
  uVar9 = (ulonglong)uVar5;
  if ((uint)uVar16 < uVar5) {
    uVar9 = uVar16;
  }
  uVar11 = (uint)uVar9;
  if (uVar11 != 0) {
    **(float **)(param_4 + 0x20) = pfVar1[uVar9 - 1];
  }
  lVar15 = (longlong)pfVar14 - (longlong)pfVar2 >> 2;
  *(uint *)(param_4 + 0x30) = uVar17 + uVar11 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar9;
  *(short *)((longlong)param_2 + 0x12) = (short)lVar15 + *(short *)(param_4 + 0x2c);
  if (uVar11 == uVar5) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar11;
  }
  uVar17 = (uint)lVar15;
  if (uVar17 == uVar19) {
    uVar7 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar17;
    uVar7 = 0x2b;
  }
  return uVar7;
}



// FUNCTION 1431c6800 Interpolating_Native_2Chan body=725 status=ok
// SIG undefined Interpolating_Native_2Chan(void)

undefined8
Interpolating_Native_2Chan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  
  uVar21 = *(uint *)(param_4 + 0x30);
  iVar14 = *(int *)(param_4 + 0x3c);
  uVar22 = param_3 - *(uint *)(param_4 + 0x2c);
  uVar19 = *(uint *)(param_4 + 0x40);
  uVar7 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar8 = (uint)*(ushort *)(param_1 + 2);
  uVar6 = *(ushort *)(param_2 + 2);
  uVar17 = (ulonglong)(uVar21 >> 0x10);
  uVar23 = uVar21 & 0xffff;
  pfVar1 = (float *)(*param_1 + (ulonglong)*(uint *)(param_4 + 0x28) * 4);
  iVar13 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar10 = *(int *)(param_4 + 0x34) * 0x400;
  pfVar2 = (float *)(*param_2 + (ulonglong)*(uint *)(param_4 + 0x2c) * 4);
  fVar3 = **(float **)(param_4 + 0x20);
  fVar4 = (*(float **)(param_4 + 0x20))[1];
  uVar20 = (ulonglong)(0x400 - iVar14) / (ulonglong)uVar19;
  pfVar15 = pfVar2;
  if (uVar21 >> 0x10 == 0) {
    if (uVar22 < (uint)uVar20) {
      uVar20 = (ulonglong)uVar22;
    }
    uVar12 = iVar13 * iVar14 + iVar10;
    do {
      iVar18 = (int)uVar20;
      uVar20 = (ulonglong)(iVar18 - 1);
      if (iVar18 == 0) break;
      fVar5 = pfVar1[(ulonglong)(uVar8 + 1) - 1];
      uVar12 = uVar12 + iVar13 * uVar19;
      iVar14 = iVar14 + uVar19;
      *pfVar15 = (*pfVar1 - fVar3) * (float)uVar23 * 1.5258789e-05 + fVar3;
      pfVar15[uVar6] = (float)uVar23 * 1.5258789e-05 * (fVar5 - fVar4) + fVar4;
      pfVar15 = pfVar15 + 1;
      uVar21 = uVar21 + (uVar12 >> 10);
      uVar23 = uVar21 & 0xffff;
      uVar17 = (ulonglong)(uVar21 >> 0x10);
    } while (uVar21 >> 0x10 == 0);
  }
  uVar24 = (longlong)((longlong)pfVar2 + ((ulonglong)uVar22 * 4 - (longlong)pfVar15)) >> 2;
  uVar20 = (ulonglong)(0x400 - iVar14) / (ulonglong)uVar19;
  if ((uint)uVar17 <= uVar7 - 1) {
    if ((uint)uVar24 < (uint)uVar20) {
      uVar20 = uVar24;
    }
    uVar20 = uVar20 & 0xffffffff;
    uVar12 = iVar13 * iVar14 + iVar10;
    do {
      iVar10 = (int)uVar20;
      uVar20 = (ulonglong)(iVar10 - 1);
      if (iVar10 == 0) break;
      uVar11 = uVar8 + (int)uVar17;
      fVar3 = pfVar1[(ulonglong)uVar11 - 1];
      fVar4 = pfVar1[(ulonglong)(uVar11 + 1) - 1];
      uVar12 = uVar12 + iVar13 * uVar19;
      iVar14 = iVar14 + uVar19;
      *pfVar15 = (pfVar1[(ulonglong)((int)uVar17 + 1) - 1] - pfVar1[uVar17 - 1]) *
                 (float)uVar23 * 1.5258789e-05 + pfVar1[uVar17 - 1];
      pfVar15[uVar6] = (float)uVar23 * 1.5258789e-05 * (fVar4 - fVar3) + fVar3;
      pfVar15 = pfVar15 + 1;
      uVar21 = uVar21 + (uVar12 >> 10);
      uVar23 = uVar21 & 0xffff;
      uVar17 = (ulonglong)(uVar21 >> 0x10);
    } while (uVar21 >> 0x10 <= uVar7 - 1);
  }
  *(int *)(param_4 + 0x3c) = iVar14;
  uVar20 = (ulonglong)uVar7;
  if ((uint)uVar17 < uVar7) {
    uVar20 = uVar17;
  }
  uVar19 = (uint)uVar20;
  if (uVar19 != 0) {
    **(float **)(param_4 + 0x20) = pfVar1[uVar20 - 1];
    *(float *)(*(longlong *)(param_4 + 0x20) + 4) = pfVar1[(ulonglong)(uVar8 + uVar19) - 1];
  }
  lVar16 = (longlong)pfVar15 - (longlong)pfVar2 >> 2;
  *(uint *)(param_4 + 0x30) = uVar21 + uVar19 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar20;
  *(short *)((longlong)param_2 + 0x12) = (short)lVar16 + *(short *)(param_4 + 0x2c);
  if (uVar19 == uVar7) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar19;
  }
  uVar21 = (uint)lVar16;
  if (uVar21 == uVar22) {
    uVar9 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar21;
    uVar9 = 0x2b;
  }
  return uVar9;
}



// FUNCTION 1431c6ae0 Bypass_Native_NChan body=359 status=ok
// SIG undefined Bypass_Native_NChan(void)

undefined8 Bypass_Native_NChan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  void *_Src;
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  uVar4 = param_3 - *(int *)(param_4 + 0x2c);
  uVar3 = (uint)uVar2;
  uVar1 = (uint)uVar2;
  if (uVar4 < uVar2) {
    uVar1 = uVar4;
  }
  if (*(byte *)(param_1 + 1) != 0) {
    uVar5 = (ulonglong)*(byte *)(param_1 + 1);
    lVar7 = 0;
    lVar6 = 0;
    do {
      _Src = (void *)(*param_1 +
                     ((ulonglong)*(ushort *)(param_1 + 2) * lVar7 +
                     (ulonglong)*(uint *)(param_4 + 0x28)) * 4);
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_2 +
                         ((ulonglong)*(ushort *)(param_2 + 2) * lVar6 +
                         (ulonglong)*(uint *)(param_4 + 0x2c)) * 4),_Src,(ulonglong)(uVar1 * 4));
      lVar6 = lVar6 + 1;
      *(undefined4 *)(*(longlong *)(param_4 + 0x20) + lVar7 * 4) =
           *(undefined4 *)((longlong)_Src + (longlong)(int)uVar1 * 4 + -4);
      lVar7 = lVar7 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  }
  *(ushort *)((longlong)param_1 + 0x12) = uVar2 - (short)uVar1;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar1 + *(short *)(param_4 + 0x2c);
  *(undefined4 *)(param_4 + 0x30) = 0x10000;
  if (uVar1 == uVar3) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar1;
  }
  if (uVar1 == uVar4) {
    return 0x2d;
  }
  *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar1;
  return 0x2b;
}



// FUNCTION 1431c6c50 Deinterleave_Native_NChan body=295 status=ok
// SIG undefined Deinterleave_Native_NChan(void)

void Deinterleave_Native_NChan(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar12 = 0;
  uVar2 = *(ushort *)((longlong)param_2 + 0x12);
  if (bVar1 != 0) {
    lVar7 = 0;
    do {
      uVar8 = *(uint *)(param_1 + 1) >> 0xc;
      puVar4 = (undefined4 *)(*param_1 + lVar7);
      if ((uVar8 & 8) == 0) {
LAB_1431c6cc4:
        uVar11 = (ulonglong)uVar12;
      }
      else {
        uVar10 = 0;
        for (uVar8 = uVar8 & 7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
          uVar10 = uVar10 + 1;
        }
        if (uVar12 == uVar10) {
          uVar11 = (ulonglong)((*(uint *)(param_1 + 1) & 0xff) - 1);
        }
        else {
          if (uVar12 <= uVar10) goto LAB_1431c6cc4;
          uVar11 = (ulonglong)(uVar12 - 1);
        }
      }
      uVar8 = 0;
      puVar9 = (undefined4 *)(*param_2 + uVar11 * *(ushort *)(param_2 + 2) * 4);
      if (3 < uVar2) {
        uVar8 = (uVar2 - 4 >> 2) + 1;
        uVar11 = (ulonglong)uVar8;
        uVar8 = uVar8 * 4;
        do {
          puVar5 = puVar4 + bVar1;
          *puVar9 = *puVar4;
          puVar6 = puVar5 + bVar1;
          puVar9[1] = *puVar5;
          puVar9[2] = *puVar6;
          puVar4 = puVar6 + bVar1 + bVar1;
          puVar9[3] = puVar6[bVar1];
          puVar9 = puVar9 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar8 < uVar2) {
        uVar11 = (ulonglong)(uVar2 - uVar8);
        do {
          uVar3 = *puVar4;
          puVar4 = puVar4 + bVar1;
          *puVar9 = uVar3;
          puVar9 = puVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar12 = uVar12 + 1;
      lVar7 = lVar7 + 4;
    } while (uVar12 < bVar1);
  }
  return;
}



// FUNCTION 1431c6d80 Fixed_I16_NChan body=732 status=ok
// SIG undefined Fixed_I16_NChan(void)

undefined8 Fixed_I16_NChan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  
  bVar2 = *(byte *)(param_1 + 1);
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  uVar14 = param_3 - *(int *)(param_4 + 0x2c);
  uVar15 = *(uint *)(param_4 + 0x34);
  uVar19 = *(uint *)(param_4 + 0x30);
  uVar18 = (ulonglong)((uVar15 - uVar19) + 0xffff) / (ulonglong)uVar15;
  if (uVar14 < (uint)uVar18) {
    uVar18 = (ulonglong)uVar14;
  }
  uVar9 = 0;
  iVar16 = (int)uVar18;
  lVar1 = *param_1 + ((ulonglong)(*(int *)(param_4 + 0x28) * (uint)bVar2) - (ulonglong)bVar2) * 2;
  uVar21 = (uint)bVar2;
  uVar8 = uVar19;
  uVar12 = uVar14;
  if (bVar2 != 0) {
    lVar20 = 0;
    do {
      uVar8 = *(uint *)(param_1 + 1) >> 0xc;
      lVar10 = lVar1 + lVar20;
      if ((uVar8 & 8) == 0) {
LAB_1431c6e9d:
        uVar7 = (ulonglong)uVar9;
      }
      else {
        uVar12 = 0;
        for (uVar8 = uVar8 & 7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
          uVar12 = uVar12 + 1;
        }
        if (uVar9 == uVar12) {
          uVar7 = (ulonglong)((*(uint *)(param_1 + 1) & 0xff) - 1);
        }
        else {
          if (uVar9 <= uVar12) goto LAB_1431c6e9d;
          uVar7 = (ulonglong)(uVar9 - 1);
        }
      }
      pfVar13 = (float *)(*param_2 +
                         (uVar7 * *(ushort *)(param_2 + 2) + (ulonglong)*(uint *)(param_4 + 0x2c)) *
                         4);
      uVar8 = uVar19;
      uVar22 = uVar19 & 0xffff;
      if (iVar16 != 0) {
        iVar17 = (int)*(short *)(*(longlong *)(param_4 + 0x20) + lVar20);
        uVar7 = uVar18;
        do {
          uVar8 = uVar8 + uVar15;
          iVar4 = (*(short *)(lVar10 + (ulonglong)bVar2 * 2) - iVar17) * uVar22;
          uVar22 = uVar8 & 0xffff;
          *pfVar13 = (float)(iVar4 + iVar17 * 0x10000) * 4.656613e-10;
          pfVar13 = pfVar13 + 1;
          uVar12 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar12;
        } while (uVar12 != 0);
      }
      uVar7 = (ulonglong)(((uint)uVar3 * 0x10000 - uVar8) + -1 + uVar15) / (ulonglong)uVar15;
      uVar11 = (ulonglong)(uVar14 - iVar16);
      if ((uint)uVar7 <= uVar14 - iVar16) {
        uVar11 = uVar7;
      }
      uVar12 = (uint)uVar11;
      uVar6 = uVar12;
      while (uVar6 != 0) {
        uVar6 = uVar21 * (uVar8 >> 0x10);
        uVar8 = uVar8 + uVar15;
        iVar4 = (int)*(short *)(lVar10 + (ulonglong)uVar6 * 2);
        iVar17 = (*(short *)(lVar10 + (ulonglong)(uVar6 + bVar2) * 2) - iVar4) * uVar22;
        uVar22 = uVar8 & 0xffff;
        *pfVar13 = (float)(iVar17 + iVar4 * 0x10000) * 4.656613e-10;
        uVar6 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar6;
        pfVar13 = pfVar13 + 1;
      }
      uVar9 = uVar9 + 1;
      lVar20 = lVar20 + 2;
    } while (uVar9 < uVar21);
  }
  uVar19 = (uint)uVar3;
  uVar15 = uVar8 >> 0x10;
  if (uVar19 <= uVar8 >> 0x10) {
    uVar15 = uVar19;
  }
  if ((uVar15 != 0) && (uVar9 = 0, bVar2 != 0)) {
    lVar20 = 0;
    do {
      uVar22 = uVar15 * uVar21 + uVar9;
      uVar9 = uVar9 + 1;
      *(undefined2 *)(lVar20 + *(longlong *)(param_4 + 0x20)) =
           *(undefined2 *)(lVar1 + (ulonglong)uVar22 * 2);
      lVar20 = lVar20 + 2;
    } while (uVar9 < uVar21);
  }
  uVar12 = iVar16 + uVar12;
  *(uint *)(param_4 + 0x30) = uVar8 + uVar15 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar15;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar12 + *(short *)(param_4 + 0x2c);
  if (uVar15 == uVar19) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar15;
  }
  if (uVar12 == uVar14) {
    uVar5 = 0x2d;
  }
  else {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar12;
    uVar5 = 0x2b;
  }
  return uVar5;
}



// FUNCTION 1431c7070 Fixed_Native_NChan body=931 status=ok
// SIG undefined Fixed_Native_NChan(void)

undefined8 Fixed_Native_NChan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar9;
  ulonglong uVar11;
  
  uVar15 = *(uint *)(param_4 + 0x30);
  uVar19 = *(uint *)(param_4 + 0x34);
  uVar6 = *(ushort *)((longlong)param_1 + 0x12);
  uVar17 = param_3 - *(int *)(param_4 + 0x2c);
  bVar5 = *(byte *)(param_1 + 1);
  uVar20 = (ulonglong)bVar5;
  uVar13 = (ulonglong)((uVar19 - uVar15) + 0xffff) / (ulonglong)uVar19;
  if (uVar17 < (uint)uVar13) {
    uVar13 = (ulonglong)uVar17;
  }
  uVar8 = (uint)uVar13;
  uVar14 = uVar15;
  uVar7 = uVar17;
  if (bVar5 != 0) {
    lVar21 = 0;
    lVar18 = 0;
    do {
      pfVar3 = (float *)(*param_1 +
                        ((ulonglong)*(ushort *)(param_1 + 2) * lVar21 +
                        (ulonglong)*(uint *)(param_4 + 0x28)) * 4);
      pfVar16 = (float *)(*param_2 +
                         ((ulonglong)*(ushort *)(param_2 + 2) * lVar18 +
                         (ulonglong)*(uint *)(param_4 + 0x2c)) * 4);
      fVar4 = *(float *)(*(longlong *)(param_4 + 0x20) + lVar21 * 4);
      uVar14 = uVar15;
      uVar9 = uVar13;
      uVar7 = uVar8;
      while (uVar12 = uVar14 & 0xffff, uVar7 != 0) {
        uVar14 = uVar14 + uVar19;
        *pfVar16 = (*pfVar3 - fVar4) * (float)uVar12 * 1.5258789e-05 + fVar4;
        pfVar16 = pfVar16 + 1;
        uVar7 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar7;
      }
      uVar9 = (ulonglong)(((uint)uVar6 * 0x10000 - uVar14) + -1 + uVar19) / (ulonglong)uVar19;
      uVar11 = (ulonglong)(uVar17 - uVar8);
      if ((uint)uVar9 <= uVar17 - uVar8) {
        uVar11 = uVar9;
      }
      uVar7 = (uint)uVar11;
      uVar10 = uVar7;
      while (uVar10 != 0) {
        uVar10 = uVar14 >> 0x10;
        uVar14 = uVar14 + uVar19;
        *pfVar16 = (pfVar3[(ulonglong)(uVar10 + 1) - 1] - pfVar3[(ulonglong)uVar10 - 1]) *
                   (float)uVar12 * 1.5258789e-05 + pfVar3[(ulonglong)uVar10 - 1];
        pfVar16 = pfVar16 + 1;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
        uVar12 = uVar14 & 0xffff;
      }
      lVar18 = lVar18 + 1;
      lVar21 = lVar21 + 1;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  uVar19 = (uint)bVar5;
  uVar15 = uVar14 >> 0x10;
  if ((uint)uVar6 <= uVar14 >> 0x10) {
    uVar15 = (uint)uVar6;
  }
  if (uVar15 != 0) {
    uVar12 = 0;
    if (3 < uVar19) {
      uVar20 = (ulonglong)uVar15;
      lVar21 = 2;
      uVar12 = (uVar19 - 4 >> 2) + 1;
      uVar13 = (ulonglong)uVar12;
      uVar12 = uVar12 * 4;
      lVar18 = 0;
      do {
        lVar1 = lVar18 + 0x10;
        *(undefined4 *)(lVar18 + *(longlong *)(param_4 + 0x20)) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * (lVar21 + -2) + uVar20) * 4);
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + -0xc + lVar1) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * (lVar21 + -1) + uVar20) * 4);
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + -8 + lVar1) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * lVar21 + uVar20) * 4);
        lVar2 = lVar21 + 1;
        lVar21 = lVar21 + 4;
        *(undefined4 *)(lVar18 + 0xc + *(longlong *)(param_4 + 0x20)) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              (ulonglong)*(ushort *)(param_1 + 2) * lVar2 + uVar20) * 4);
        uVar13 = uVar13 - 1;
        lVar18 = lVar1;
      } while (uVar13 != 0);
    }
    if (uVar12 < uVar19) {
      uVar20 = (ulonglong)uVar12;
      uVar13 = (ulonglong)(uVar19 - uVar12);
      do {
        *(undefined4 *)(*(longlong *)(param_4 + 0x20) + uVar20 * 4) =
             *(undefined4 *)
              (*param_1 + -4 +
              ((ulonglong)*(uint *)(param_4 + 0x28) +
              *(ushort *)(param_1 + 2) * uVar20 + (ulonglong)uVar15) * 4);
        uVar20 = uVar20 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  uVar8 = uVar8 + uVar7;
  *(uint *)(param_4 + 0x30) = uVar14 + uVar15 * -0x10000;
  *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar15;
  *(short *)((longlong)param_2 + 0x12) = (short)uVar8 + *(short *)(param_4 + 0x2c);
  if (uVar15 == uVar6) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  else {
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar15;
  }
  if (uVar8 != uVar17) {
    *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar8;
    return 0x2b;
  }
  return 0x2d;
}



// FUNCTION 1431c7420 Interleave_Native_NChan body=291 status=ok
// SIG undefined Interleave_Native_NChan(void)

void Interleave_Native_NChan(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  bVar2 = *(byte *)(param_1 + 1);
  uVar11 = 0;
  uVar3 = *(ushort *)((longlong)param_2 + 0x12);
  if (bVar2 != 0) {
    lVar8 = 0;
    do {
      uVar6 = *(uint *)(param_1 + 1) >> 0xc;
      if ((uVar6 & 8) == 0) {
LAB_1431c748c:
        uVar6 = uVar11;
      }
      else {
        uVar9 = 0;
        for (uVar6 = uVar6 & 7; uVar6 != 0; uVar6 = uVar6 & uVar6 - 1) {
          uVar9 = uVar9 + 1;
        }
        if (uVar11 == uVar9) {
          uVar6 = (*(uint *)(param_1 + 1) & 0xff) - 1;
        }
        else {
          uVar6 = uVar11 - 1;
          if (uVar11 <= uVar9) goto LAB_1431c748c;
        }
      }
      uVar9 = 0;
      puVar7 = (undefined4 *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)uVar6 * 4)
      ;
      puVar5 = (undefined4 *)(*param_2 + lVar8);
      if (3 < uVar3) {
        uVar9 = (uVar3 - 4 >> 2) + 1;
        uVar10 = (ulonglong)uVar9;
        uVar9 = uVar9 * 4;
        do {
          *puVar5 = *puVar7;
          puVar5 = puVar5 + bVar2;
          *puVar5 = puVar7[1];
          puVar5 = puVar5 + bVar2;
          *puVar5 = puVar7[2];
          puVar1 = puVar7 + 3;
          puVar7 = puVar7 + 4;
          puVar5[bVar2] = *puVar1;
          puVar5 = puVar5 + bVar2 + bVar2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (uVar9 < uVar3) {
        uVar10 = (ulonglong)(uVar3 - uVar9);
        do {
          uVar4 = *puVar7;
          puVar7 = puVar7 + 1;
          *puVar5 = uVar4;
          puVar5 = puVar5 + bVar2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 4;
    } while (uVar11 < bVar2);
  }
  return;
}



// FUNCTION 1431c7550 Interpolating_I16_NChan body=895 status=ok
// SIG undefined Interpolating_I16_NChan(void)

undefined8 Interpolating_I16_NChan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  float *pfVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint local_98;
  uint local_94;
  
  bVar2 = *(byte *)(param_1 + 1);
  uVar11 = 0;
  uVar10 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar17 = *(uint *)(param_4 + 0x30);
  uVar20 = param_3 - *(int *)(param_4 + 0x2c);
  uVar15 = *(uint *)(param_4 + 0x40);
  iVar4 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar7 = *(int *)(param_4 + 0x34) * 0x400;
  uVar23 = uVar17 >> 0x10;
  lVar19 = *param_1 + ((ulonglong)(*(int *)(param_4 + 0x28) * (uint)bVar2) - (ulonglong)bVar2) * 2;
  local_94 = 0;
  do {
    iVar13 = *(int *)(param_4 + 0x3c);
    lVar22 = lVar19 + uVar11 * 2;
    uVar9 = *(uint *)(param_1 + 1) >> 0xc;
    uVar21 = (uint)uVar11;
    if ((uVar9 & 8) == 0) {
LAB_1431c765b:
      uVar9 = uVar21;
    }
    else {
      uVar14 = 0;
      for (uVar9 = uVar9 & 7; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
        uVar14 = uVar14 + 1;
      }
      if (uVar21 == uVar14) {
        uVar9 = (*(uint *)(param_1 + 1) & 0xff) - 1;
      }
      else {
        uVar9 = uVar21 - 1;
        if (uVar21 <= uVar14) goto LAB_1431c765b;
      }
    }
    pfVar1 = (float *)(*param_2 +
                      ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar9 +
                      (ulonglong)*(uint *)(param_4 + 0x2c)) * 4);
    sVar3 = *(short *)(*(longlong *)(param_4 + 0x20) + uVar11 * 2);
    uVar16 = (ulonglong)(0x400 - iVar13) / (ulonglong)uVar15;
    pfVar18 = pfVar1;
    local_98 = uVar17 & 0xffff;
    uVar9 = uVar17;
    uVar21 = uVar23;
    if (uVar23 == 0) {
      if (uVar20 < (uint)uVar16) {
        uVar16 = (ulonglong)uVar20;
      }
      uVar14 = iVar4 * iVar13 + iVar7;
      do {
        iVar5 = (int)uVar16;
        uVar16 = (ulonglong)(iVar5 - 1);
        if (iVar5 == 0) break;
        uVar14 = uVar14 + iVar4 * uVar15;
        iVar5 = (int)sVar3;
        iVar13 = iVar13 + uVar15;
        iVar8 = (*(short *)(lVar22 + (ulonglong)bVar2 * 2) - iVar5) * local_98;
        uVar9 = uVar9 + (uVar14 >> 10);
        local_98 = uVar9 & 0xffff;
        uVar21 = uVar9 >> 0x10;
        *pfVar18 = (float)(iVar8 + iVar5 * 0x10000) * 4.656613e-10;
        pfVar18 = pfVar18 + 1;
      } while (uVar21 == 0);
      uVar11 = (ulonglong)local_94;
    }
    uVar12 = (longlong)((longlong)pfVar1 + ((ulonglong)uVar20 * 4 - (longlong)pfVar18)) >> 2;
    uVar16 = (ulonglong)(0x400 - iVar13) / (ulonglong)uVar15;
    uVar25 = (uint)bVar2;
    uVar14 = (uint)uVar11;
    if (uVar21 <= uVar10 - 1) {
      if ((uint)uVar12 < (uint)uVar16) {
        uVar16 = uVar12;
      }
      uVar16 = uVar16 & 0xffffffff;
      uVar24 = iVar4 * iVar13 + iVar7;
      do {
        iVar5 = (int)uVar16;
        uVar16 = (ulonglong)(iVar5 - 1);
        uVar14 = local_94;
        if (iVar5 == 0) break;
        uVar24 = uVar24 + iVar4 * uVar15;
        iVar13 = iVar13 + uVar15;
        iVar8 = (int)*(short *)(lVar22 + (ulonglong)(uVar25 * uVar21) * 2);
        iVar5 = (*(short *)(lVar22 + (ulonglong)(uVar25 * uVar21 + uVar25) * 2) - iVar8) * local_98;
        uVar9 = uVar9 + (uVar24 >> 10);
        local_98 = uVar9 & 0xffff;
        uVar21 = uVar9 >> 0x10;
        *pfVar18 = (float)(iVar5 + iVar8 * 0x10000) * 4.656613e-10;
        pfVar18 = pfVar18 + 1;
      } while (uVar21 <= uVar10 - 1);
    }
    local_94 = uVar14 + 1;
    uVar11 = (ulonglong)local_94;
    if (uVar25 <= local_94) {
      *(int *)(param_4 + 0x3c) = iVar13;
      uVar17 = uVar9 >> 0x10;
      if (uVar10 <= uVar9 >> 0x10) {
        uVar17 = uVar10;
      }
      if ((uVar17 != 0) && (uVar15 = 0, uVar25 != 0)) {
        lVar22 = 0;
        do {
          uVar23 = uVar15 + uVar17 * uVar25;
          uVar15 = uVar15 + 1;
          *(undefined2 *)(lVar22 + *(longlong *)(param_4 + 0x20)) =
               *(undefined2 *)(lVar19 + (ulonglong)uVar23 * 2);
          lVar22 = lVar22 + 2;
        } while (uVar15 < uVar25);
      }
      lVar19 = (longlong)pfVar18 - (longlong)pfVar1 >> 2;
      *(uint *)(param_4 + 0x30) = uVar9 + uVar17 * -0x10000;
      *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar17;
      *(short *)((longlong)param_2 + 0x12) = (short)lVar19 + *(short *)(param_4 + 0x2c);
      if (uVar17 == uVar10) {
        *(undefined4 *)(param_4 + 0x28) = 0;
      }
      else {
        *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar17;
      }
      uVar17 = (uint)lVar19;
      if (uVar17 == uVar20) {
        uVar6 = 0x2d;
      }
      else {
        *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar17;
        uVar6 = 0x2b;
      }
      return uVar6;
    }
  } while( true );
}



// FUNCTION 1431c78e0 Interpolating_Native_NChan body=983 status=ok
// SIG undefined Interpolating_Native_NChan(void)

undefined8
Interpolating_Native_NChan(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  float *pfVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  
  uVar14 = 0;
  uVar10 = (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar19 = param_3 - *(int *)(param_4 + 0x2c);
  uVar23 = *(uint *)(param_4 + 0x30);
  uVar27 = *(uint *)(param_4 + 0x40);
  uVar6 = (uint)*(byte *)(param_1 + 1);
  iVar16 = *(int *)(param_4 + 0x38) - *(int *)(param_4 + 0x34);
  iVar7 = *(int *)(param_4 + 0x34) * 0x400;
  uVar8 = *(ushort *)((longlong)param_1 + 0x12) - 1;
  do {
    uVar22 = (ulonglong)uVar23;
    uVar20 = (ulonglong)(uVar23 >> 0x10);
    iVar15 = *(int *)(param_4 + 0x3c);
    pfVar3 = (float *)(*param_1 +
                      (*(ushort *)(param_1 + 2) * uVar14 + (ulonglong)*(uint *)(param_4 + 0x28)) * 4
                      );
    pfVar4 = (float *)(*param_2 +
                      (*(ushort *)(param_2 + 2) * uVar14 + (ulonglong)*(uint *)(param_4 + 0x2c)) * 4
                      );
    fVar5 = *(float *)(*(longlong *)(param_4 + 0x20) + uVar14 * 4);
    uVar18 = (ulonglong)(0x400 - iVar15) / (ulonglong)uVar27;
    if (uVar19 < (uint)uVar18) {
      uVar18 = (ulonglong)uVar19;
    }
    pfVar24 = pfVar4;
    uVar26 = uVar23 & 0xffff;
    if (uVar23 >> 0x10 == 0) {
      uVar12 = iVar16 * iVar15 + iVar7;
      do {
        iVar11 = (int)uVar18;
        uVar18 = (ulonglong)(iVar11 - 1);
        if (iVar11 == 0) break;
        uVar12 = uVar12 + iVar16 * uVar27;
        iVar15 = iVar15 + uVar27;
        uVar13 = (ulonglong)uVar26;
        uVar21 = (int)uVar22 + (uVar12 >> 10);
        uVar22 = (ulonglong)uVar21;
        uVar26 = uVar21 & 0xffff;
        uVar20 = (ulonglong)(uVar21 >> 0x10);
        *pfVar24 = (*pfVar3 - fVar5) * (float)uVar13 * 1.5258789e-05 + fVar5;
        pfVar24 = pfVar24 + 1;
      } while (uVar21 >> 0x10 == 0);
    }
    uVar13 = (longlong)((longlong)pfVar4 + ((ulonglong)uVar19 * 4 - (longlong)pfVar24)) >> 2;
    uVar18 = (ulonglong)(0x400 - iVar15) / (ulonglong)uVar27;
    if ((uint)uVar13 < (uint)uVar18) {
      uVar18 = uVar13;
    }
    uVar18 = uVar18 & 0xffffffff;
    if ((uint)uVar20 <= uVar8) {
      uVar12 = iVar16 * iVar15 + iVar7;
      do {
        iVar11 = (int)uVar18;
        uVar18 = (ulonglong)(iVar11 - 1);
        if (iVar11 == 0) break;
        uVar12 = uVar12 + iVar16 * uVar27;
        iVar15 = iVar15 + uVar27;
        lVar25 = uVar20 - 1;
        iVar11 = (int)uVar20;
        uVar13 = (ulonglong)uVar26;
        uVar21 = (int)uVar22 + (uVar12 >> 10);
        uVar22 = (ulonglong)uVar21;
        uVar26 = uVar21 & 0xffff;
        uVar20 = (ulonglong)(uVar21 >> 0x10);
        *pfVar24 = (pfVar3[(ulonglong)(iVar11 + 1) - 1] - pfVar3[lVar25]) * (float)uVar13 *
                   1.5258789e-05 + pfVar3[lVar25];
        pfVar24 = pfVar24 + 1;
      } while (uVar21 >> 0x10 <= uVar8);
    }
    uVar26 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar26;
    if (uVar6 <= uVar26) {
      uVar23 = (uint)(uVar22 >> 0x10);
      *(int *)(param_4 + 0x3c) = iVar15;
      if (uVar10 <= uVar23) {
        uVar23 = uVar10;
      }
      if (uVar23 != 0) {
        uVar27 = 0;
        if (3 < uVar6) {
          uVar18 = (ulonglong)uVar23;
          lVar17 = 2;
          uVar27 = (uVar6 - 4 >> 2) + 1;
          uVar14 = (ulonglong)uVar27;
          uVar27 = uVar27 * 4;
          lVar25 = 0;
          do {
            lVar1 = lVar25 + 0x10;
            *(undefined4 *)(lVar25 + *(longlong *)(param_4 + 0x20)) =
                 *(undefined4 *)
                  (*param_1 + -4 +
                  ((ulonglong)*(uint *)(param_4 + 0x28) +
                  (ulonglong)*(ushort *)(param_1 + 2) * (lVar17 + -2) + uVar18) * 4);
            *(undefined4 *)(*(longlong *)(param_4 + 0x20) + -0xc + lVar1) =
                 *(undefined4 *)
                  (*param_1 + -4 +
                  ((ulonglong)*(uint *)(param_4 + 0x28) +
                  (ulonglong)*(ushort *)(param_1 + 2) * (lVar17 + -1) + uVar18) * 4);
            *(undefined4 *)(*(longlong *)(param_4 + 0x20) + -8 + lVar1) =
                 *(undefined4 *)
                  (*param_1 + -4 +
                  ((ulonglong)*(uint *)(param_4 + 0x28) +
                  (ulonglong)*(ushort *)(param_1 + 2) * lVar17 + uVar18) * 4);
            lVar2 = lVar17 + 1;
            lVar17 = lVar17 + 4;
            *(undefined4 *)(lVar25 + 0xc + *(longlong *)(param_4 + 0x20)) =
                 *(undefined4 *)
                  (*param_1 + -4 +
                  ((ulonglong)*(uint *)(param_4 + 0x28) +
                  (ulonglong)*(ushort *)(param_1 + 2) * lVar2 + uVar18) * 4);
            uVar14 = uVar14 - 1;
            lVar25 = lVar1;
          } while (uVar14 != 0);
        }
        if (uVar27 < uVar6) {
          uVar18 = (ulonglong)uVar27;
          uVar14 = (ulonglong)(uVar6 - uVar27);
          do {
            *(undefined4 *)(*(longlong *)(param_4 + 0x20) + uVar18 * 4) =
                 *(undefined4 *)
                  (*param_1 + -4 +
                  ((ulonglong)*(uint *)(param_4 + 0x28) +
                  *(ushort *)(param_1 + 2) * uVar18 + (ulonglong)uVar23) * 4);
            uVar18 = uVar18 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      lVar25 = (longlong)pfVar24 - (longlong)pfVar4 >> 2;
      *(uint *)(param_4 + 0x30) = (int)uVar22 + uVar23 * -0x10000;
      *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) - (short)uVar23;
      *(short *)((longlong)param_2 + 0x12) = (short)lVar25 + *(short *)(param_4 + 0x2c);
      if (uVar23 == uVar10) {
        *(undefined4 *)(param_4 + 0x28) = 0;
      }
      else {
        *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + uVar23;
      }
      uVar23 = (uint)lVar25;
      if (uVar23 == uVar19) {
        uVar9 = 0x2d;
      }
      else {
        *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + uVar23;
        uVar9 = 0x2b;
      }
      return uVar9;
    }
  } while( true );
}



// FUNCTION 1431c7cd0 FUN_1431c7cd0 body=111 status=ok
// SIG undefined FUN_1431c7cd0(void)

undefined8 * FUN_1431c7cd0(undefined8 *param_1)

{
  CAkVPLSrcNode::CAkVPLSrcNode();
  *param_1 = &PTR__scalar_deleting_destructor__145acf400;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  CAkMarkers::CAkMarkers(param_1 + 8);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[3] != 0) {
    *(undefined2 *)((longlong)param_1 + 0x54) = *(undefined2 *)(param_1[3] + 0x290);
    return param_1;
  }
  *(undefined2 *)((longlong)param_1 + 0x54) = 1;
  return param_1;
}



// FUNCTION 1431c7d40 ~CAkSrcBaseEx body=44 status=ok
// SIG undefined ~CAkSrcBaseEx(void)

void CAkSrcBaseEx::~CAkSrcBaseEx(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf400;
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x40);
  *param_1 = &PTR_FUN_145aca4d0;
  return;
}



// FUNCTION 1431c7d70 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkSrcBaseEx::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf400;
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x40);
  *param_1 = &PTR_FUN_145aca4d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1431c7dc0 GetAnalyzedEnvelope body=310 status=ok
// SIG undefined GetAnalyzedEnvelope(void)

undefined8 CAkSrcBaseEx::GetAnalyzedEnvelope(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ushort uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong uVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((lVar4 == 0) || (*(uint *)(lVar4 + 8) == 0)) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x50);
  puVar6 = (uint *)(lVar4 + (ulonglong)uVar2 * 6 + 0x10);
  uVar8 = *(int *)(param_1 + 0x2c) - param_2;
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    uVar8 = 0;
  }
  uVar7 = uVar2 + 1;
  uVar10 = (ulonglong)uVar2;
  do {
    uVar9 = (uint)uVar10;
    uVar5 = (ushort)puVar6[1];
    uVar2 = *puVar6;
    for (; uVar7 < *(uint *)(lVar4 + 8); uVar7 = uVar7 + 1) {
      lVar1 = (ulonglong)uVar7 * 3 + 8;
      uVar3 = *(uint *)(lVar4 + lVar1 * 2);
      puVar6 = (uint *)(lVar4 + lVar1 * 2);
      if ((uVar2 <= uVar8) && (uVar8 < uVar3)) {
        *(int *)(param_1 + 0x50) = (int)uVar10;
        fVar11 = (((float)(ushort)puVar6[1] - (float)uVar5) * (float)(uVar8 - uVar2)) /
                 (float)(uVar3 - uVar2) + (float)uVar5;
        goto LAB_1431c7eb4;
      }
      uVar5 = (ushort)puVar6[1];
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar2 = uVar3;
    }
    if (*puVar6 <= uVar8) {
      *(uint *)(param_1 + 0x50) = uVar9;
      fVar11 = (float)(ushort)puVar6[1];
LAB_1431c7eb4:
      auVar12._0_4_ = -fVar11;
      auVar12._4_4_ = 0x80000000;
      auVar12._8_4_ = 0x80000000;
      auVar12._12_4_ = 0x80000000;
      auVar13._4_12_ = auVar12._4_12_;
      auVar13._0_4_ = auVar12._0_4_ - *(float *)(lVar4 + 0xc);
      return auVar13._0_8_;
    }
    puVar6 = (uint *)(lVar4 + 0x10);
    uVar7 = 1;
    uVar10 = 0;
  } while( true );
}



// FUNCTION 1431c7f00 FUN_1431c7f00 body=124 status=ok
// SIG undefined FUN_1431c7f00(void)

void FUN_1431c7f00(longlong *param_1)

{
  if (*(short *)(param_1[3] + 0x290) == 0) {
    return;
  }
  (**(code **)(*param_1 + 0xd8))();
  return;
}



// FUNCTION 1431c7f80 FUN_1431c7f80 body=490 status=ok
// SIG undefined FUN_1431c7f80(void)

ulonglong FUN_1431c7f80(longlong *param_1)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  short sVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  
  if (*(char *)(param_1[3] + 0x295) < '\0') {
    if (*(short *)(param_1[3] + 0x290) == 0) {
      uVar4 = *(uint *)(param_1 + 5);
      uVar9 = (**(code **)(*param_1 + 0xd8))();
      fVar10 = ((float)uVar4 * 1000.0) / (float)uVar9;
    }
    else {
      fVar10 = (float)(**(code **)(*param_1 + 0x60))();
    }
    uVar4 = (**(code **)(*param_1 + 0xd8))(param_1);
    lVar5 = param_1[3];
    uVar8 = (ulonglong)(fVar10 * *(float *)(lVar5 + 0x28c) * (float)uVar4 * 0.001);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0xd8))();
    lVar5 = param_1[3];
    uVar8 = ((ulonglong)*(uint *)(lVar5 + 0x28c) * (ulonglong)uVar4) / (ulonglong)DAT_1467bdcac &
            0xffffffff;
  }
  bVar1 = *(byte *)(lVar5 + 0x296);
  uVar2 = *(ushort *)(lVar5 + 0x290);
  uVar4 = *(uint *)((longlong)param_1 + 0x3c);
  uVar9 = *(uint *)(param_1 + 7);
  *(ushort *)((longlong)param_1 + 0x54) = uVar2;
  sVar6 = 1;
  if (((uVar2 != 1) && (uVar7 = (uint)uVar8, uVar4 < uVar7)) && (uVar9 < uVar4)) {
    uVar4 = (uVar4 - uVar9) + 1;
    uVar3 = (ulonglong)(uVar7 - uVar9) / (ulonglong)uVar4;
    if (((uint)uVar3 < (uint)uVar2) || (uVar2 == 0)) {
      uVar8 = (ulonglong)((uVar7 - uVar9) % uVar4 + uVar9);
      sVar6 = uVar2 - (short)uVar3;
      if (uVar2 == 0) {
        sVar6 = 0;
      }
    }
    else {
      uVar8 = (ulonglong)(uVar7 - (uVar2 - 1) * uVar4);
    }
    *(short *)((longlong)param_1 + 0x54) = sVar6;
  }
  if (((bVar1 & 1) != 0) && (lVar5 = CAkMarkers::GetClosestMarker(param_1 + 8), lVar5 != 0)) {
    uVar2 = *(ushort *)((longlong)param_1 + 0x54);
    uVar9 = *(uint *)((longlong)param_1 + 0x3c);
    uVar7 = *(uint *)(param_1 + 7);
    uVar4 = *(uint *)(lVar5 + 4);
    *(ushort *)((longlong)param_1 + 0x54) = uVar2;
    if ((uVar2 != 1) && ((uVar9 < uVar4 && (uVar7 < uVar9)))) {
      uVar9 = (uVar9 - uVar7) + 1;
      uVar8 = (ulonglong)(uVar4 - uVar7) / (ulonglong)uVar9;
      if (((uint)uVar2 <= (uint)uVar8) && (uVar2 != 0)) {
        *(undefined2 *)((longlong)param_1 + 0x54) = 1;
        return (ulonglong)(uVar4 - (uVar2 - 1) * uVar9);
      }
      uVar4 = (uVar4 - uVar7) % uVar9 + uVar7;
      sVar6 = uVar2 - (short)uVar8;
      if (uVar2 == 0) {
        sVar6 = 0;
      }
      *(short *)((longlong)param_1 + 0x54) = sVar6;
    }
    return (ulonglong)uVar4;
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1431c8180 FUN_1431c8180 body=111 status=ok
// SIG undefined FUN_1431c8180(void)

undefined4 FUN_1431c8180(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar2 = FUN_1431816e0();
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((*(uint *)(lVar1 + 8) & 0x100000) != 0) {
    local_c = *(undefined4 *)(lVar1 + 0x230);
    local_18 = *(undefined4 *)(param_1 + 0x2c);
    local_10 = *(undefined4 *)(param_1 + 0x28);
    local_14 = 0;
    FUN_143162940(DAT_146b50b70,*(undefined4 *)(lVar1 + 0x200),&local_18,param_1);
  }
  return uVar2;
}



// FUNCTION 1431c8200 StopStream body=9 status=ok
// SIG undefined StopStream(void)

void CAkSrcBaseEx::StopStream(longlong param_1)

{
  CAkMarkers::Free(param_1 + 0x40);
  return;
}



// FUNCTION 1431c8210 FUN_1431c8210 body=193 status=ok
// SIG undefined FUN_1431c8210(void)

void FUN_1431c8210(longlong *param_1,undefined8 param_2,ushort param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    *(undefined2 *)((longlong)param_6 + 0x12) = 0;
    *(undefined4 *)(param_6 + 7) = 0x2e;
    return;
  }
  *(undefined4 *)(param_6 + 1) = param_5;
  *param_6 = param_2;
  *(ushort *)(param_6 + 2) = param_3;
  *(ushort *)((longlong)param_6 + 0x12) = param_3;
  if (param_1[3] != 0) {
    CAkMarkers::CopyRelevantMarkers
              (param_1 + 8,param_1[3],param_6,*(undefined4 *)((longlong)param_1 + 0x2c));
  }
  *(undefined4 *)((longlong)param_6 + 0x34) = param_4;
  *(undefined4 *)(param_6 + 5) = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(int *)(param_6 + 6) = (int)param_1[5];
  uVar1 = 0x2d;
  uVar2 = (uint)param_3 + *(int *)((longlong)param_1 + 0x2c);
  *(uint *)((longlong)param_1 + 0x2c) = uVar2;
  if (*(short *)((longlong)param_1 + 0x54) == 1) {
    if (uVar2 < *(uint *)(param_1 + 5)) goto LAB_1431c82b9;
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (uVar2 <= *(uint *)((longlong)param_1 + 0x3c)) goto LAB_1431c82b9;
    uVar3 = 0;
    *(int *)((longlong)param_1 + 0x2c) = (int)param_1[7];
  }
  uVar1 = (**(code **)(*param_1 + 0xe0))(param_1,uVar3);
LAB_1431c82b9:
  *(undefined4 *)(param_6 + 7) = uVar1;
  return;
}



// FUNCTION 1431c82e0 FUN_1431c82e0 body=221 status=ok
// SIG undefined FUN_1431c82e0(void)

undefined8 FUN_1431c82e0(longlong param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int local_18 [3];
  undefined4 local_c;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  uVar5 = 0x2d;
  uVar6 = *param_2 + iVar2;
  *(uint *)(param_1 + 0x2c) = uVar6;
  sVar1 = *(short *)(param_1 + 0x54);
  if (sVar1 == 1) {
    if (*(uint *)(param_1 + 0x28) <= uVar6) {
      uVar5 = 0x11;
      *param_2 = *(uint *)(param_1 + 0x28) - iVar2;
    }
  }
  else if (*(uint *)(param_1 + 0x3c) < uVar6) {
    if (sVar1 != 0) {
      *(short *)(param_1 + 0x54) = sVar1 + -1;
    }
    *param_2 = (*(uint *)(param_1 + 0x3c) - iVar2) + 1;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x38);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  CAkMarkers::NotifyRelevantMarkers
            (param_1 + 0x40,*(undefined8 *)(param_1 + 0x18),iVar2,*param_2 + iVar2);
  lVar4 = *(longlong *)(param_1 + 0x18);
  if ((*(uint *)(lVar4 + 8) & 0x100000) != 0) {
    local_c = *(undefined4 *)(lVar4 + 0x230);
    local_18[1] = 0x3f800000;
    local_18[0] = iVar2;
    local_18[2] = uVar3;
    FUN_143162940(DAT_146b50b70,*(undefined4 *)(lVar4 + 0x200),local_18,param_1);
  }
  return uVar5;
}



// FUNCTION 1431c83c0 CAkSrcFileBase body=69 status=ok
// SIG undefined CAkSrcFileBase(void)

undefined8 * CAkSrcFileBase::CAkSrcFileBase(undefined8 *param_1)

{
  FUN_1431c7cd0();
  *param_1 = &PTR__scalar_deleting_destructor__145acf4e8;
  *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0xe0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 1431c8410 ~CAkSrcFileBase body=92 status=ok
// SIG undefined ~CAkSrcFileBase(void)

void CAkSrcFileBase::~CAkSrcFileBase(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf4e8;
  if (((void *)param_1[2] != (void *)0x0) && ((*(byte *)((longlong)param_1 + 0x82) & 0x10) == 0)) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[2]);
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 8))();
    param_1[0xb] = 0;
    CAkSrcBaseEx::StopStream(param_1);
  }
  CAkSrcBaseEx::~CAkSrcBaseEx(param_1);
  return;
}



// FUNCTION 1431c8470 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkSrcFileBase::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf4e8;
  if (((void *)param_1[2] != (void *)0x0) && ((*(byte *)((longlong)param_1 + 0x82) & 0x10) == 0)) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[2]);
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 8))();
    param_1[0xb] = 0;
    CAkSrcBaseEx::StopStream(param_1);
  }
  CAkSrcBaseEx::~CAkSrcBaseEx(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1431c84f0 ChangeSourcePosition body=102 status=ok
// SIG undefined ChangeSourcePosition(void)

undefined8 CAkSrcFileBase::ChangeSourcePosition(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1431c8ca0();
  if (iVar1 != 1) {
    return 2;
  }
  if ((*(byte *)(param_1 + 0x82) & 2) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    return 1;
  }
  *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}



// FUNCTION 1431c8560 FUN_1431c8560 body=288 status=ok
// SIG undefined FUN_1431c8560(void)

int FUN_1431c8560(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined1 local_3b;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined8 local_28;
  byte local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0xffffffff;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x220);
  if ((*(longlong *)(lVar1 + 0x10) == 0) && (*(int *)(lVar1 + 4) == -1)) {
    return 2;
  }
  local_48 = 0x3f800000;
  local_44 = 0;
  local_3b = (undefined1)(int)*(float *)(*(longlong *)(param_1 + 0x18) + 0x2a0);
  if ((*(uint *)(lVar1 + 0xc) & 0x500) == 0) {
    local_1c = *(undefined4 *)(lVar1 + 4);
  }
  local_20 = (byte)*(uint *)(lVar1 + 0xc) & 1;
  local_34 = (uint)*(ushort *)(lVar1 + 0x1a);
  local_30 = 0;
  local_28 = 0;
  local_18 = 0;
  uVar2 = *(uint *)(lVar1 + 0xc);
  bVar5 = (uVar2 >> 8 & 1) != 0;
  if (bVar5) {
    uVar2 = *(uint *)(lVar1 + 0xc);
  }
  local_38 = (uint)bVar5;
  local_3c = param_3;
  if ((uVar2 >> 9 & 1) == 0) {
    iVar3 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x28))
                      (AK::IAkStreamMgr::m_pStreamMgr,*(undefined4 *)(lVar1 + 4),&local_38,&local_48
                       ,param_2,param_1 + 0x58,0);
  }
  else {
    iVar3 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x30))
                      (AK::IAkStreamMgr::m_pStreamMgr,*(undefined8 *)(lVar1 + 0x10),&local_38,
                       &local_48,param_2,param_1 + 0x58,0);
  }
  iVar4 = 1;
  if (iVar3 != 1) {
    iVar4 = iVar3;
  }
  return iVar4;
}



// FUNCTION 1431c8680 FUN_1431c8680 body=174 status=ok
// SIG undefined FUN_1431c8680(void)

undefined8 FUN_1431c8680(longlong *param_1)

{
  undefined8 uVar1;
  int local_res8 [2];
  undefined8 local_res10 [3];
  undefined1 local_18 [13];
  undefined1 local_b;
  
  param_1[0xc] = 0;
  (**(code **)(*(longlong *)param_1[0xb] + 0x20))((longlong *)param_1[0xb],local_18);
  local_b = (undefined1)(int)*(float *)(param_1[3] + 0x2a0);
  (**(code **)(*(longlong *)param_1[0xb] + 0x28))((longlong *)param_1[0xb],local_18);
  local_res10[0] = 0;
  local_res8[0] = 0;
  uVar1 = (**(code **)(*(longlong *)param_1[0xb] + 0x80))
                    ((longlong *)param_1[0xb],local_res10,local_res8,0);
  if (((int)uVar1 == 0x2d) || ((int)uVar1 == 0x11)) {
    if (local_res8[0] == 0) {
      uVar1 = 2;
    }
    else {
      *(int *)(param_1 + 0xd) = local_res8[0];
      uVar1 = (**(code **)(*param_1 + 0xf8))(param_1,local_res10[0],0);
      if ((int)uVar1 == 1) {
        return 0x2d;
      }
    }
  }
  return uVar1;
}



// FUNCTION 1431c8730 GetStreamLoopHeuristic body=26 status=ok
// SIG undefined GetStreamLoopHeuristic(void)

void CAkSrcFileBase::GetStreamLoopHeuristic(longlong param_1,char param_2,longlong param_3)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x7c);
    return;
  }
  *(undefined8 *)(param_3 + 4) = 0;
  return;
}



// FUNCTION 1431c8750 FUN_1431c8750 body=223 status=ok
// SIG undefined FUN_1431c8750(void)

undefined8 FUN_1431c8750(longlong *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  
  *param_2 = '\0';
  lVar3 = param_1[3];
  if (((*(uint *)(*(longlong *)(lVar3 + 0x220) + 0xc) >> 1 & 1) != 0) &&
     ((*(byte *)(lVar3 + 0x295) & 0x40) == 0)) {
    lVar4 = *(longlong *)(lVar3 + 0x2c0);
    iVar1 = *(int *)(lVar3 + 0x2c8);
    *(int *)(param_1 + 0xd) = iVar1;
    if ((lVar4 == 0) || (iVar1 == 0)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    *param_2 = cVar5;
    *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0xfd;
    *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | cVar5 * '\x02';
    if (*param_2 != '\0') {
      *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | 0x10;
      uVar6 = (**(code **)(*param_1 + 0xe8))(param_1,lVar4);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      uVar6 = (**(code **)(*param_1 + 0xf8))(param_1,lVar4,1);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      if (((short)param_1[0x10] == 0) &&
         (uVar6 = CAkSrcFileBase::SetStreamPosition(param_1,(int)param_1[0xd]), (int)uVar6 != 1)) {
        return uVar6;
      }
      uVar2 = *(uint *)((longlong)param_1 + 0x34);
      param_1[0xc] = param_1[0xc] + (ulonglong)uVar2;
      *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar2;
      *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + uVar2;
    }
  }
  return 1;
}



// FUNCTION 1431c8830 IsInitialPrebufferingReady body=128 status=ok
// SIG undefined IsInitialPrebufferingReady(void)

int CAkSrcFileBase::IsInitialPrebufferingReady(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_res8 [2];
  
  iVar5 = 1;
  if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    plVar2 = *(longlong **)(param_1 + 0x58);
    iVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,local_res8);
    if (iVar3 == 0x2d || iVar3 == 0x2e) {
      uVar4 = (**(code **)(*plVar2 + 0x58))(plVar2);
      if ((uint)(local_res8[0] + iVar1) < uVar4) {
        iVar5 = 0x3f;
      }
    }
    else if (iVar3 != 0x11) {
      iVar5 = iVar3;
    }
  }
  FUN_1431c8eb0(param_1);
  return iVar5;
}



// FUNCTION 1431c88d0 FUN_1431c88d0 body=392 status=ok
// SIG undefined FUN_1431c88d0(void)

ulonglong FUN_1431c88d0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  
  *(byte *)(param_1 + 4) =
       *(byte *)(param_1 + 4) ^ (*(byte *)(param_1[3] + 0x295) >> 4 ^ *(byte *)(param_1 + 4)) & 2;
  while( true ) {
    iVar1 = (**(code **)(*(longlong *)param_1[0xb] + 0x80))
                      ((longlong *)param_1[0xb],&local_res8,param_1 + 0xd,0);
    if (iVar1 == 0x2e) {
      return 0x3f;
    }
    if ((iVar1 != 0x2d) && (iVar1 != 0x11)) break;
    uVar4 = (**(code **)(*param_1 + 0xe8))(param_1,local_res8);
    if ((int)uVar4 != 0x3f) {
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      if ((*(byte *)(param_1[3] + 0x295) & 0x40) == 0) {
        iVar3 = (**(code **)(*(longlong *)param_1[0xb] + 0x70))((longlong *)param_1[0xb],0);
        iVar1 = *(int *)((longlong)param_1 + 0x74);
        uVar2 = (**(code **)(*param_1 + 0xf8))(param_1,local_res8,0);
        uVar4 = (ulonglong)uVar2;
        uVar2 = *(int *)((longlong)param_1 + 0x34) - (iVar3 + iVar1);
        *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar2;
        param_1[0xc] = param_1[0xc] + (ulonglong)uVar2;
        *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + uVar2;
      }
      else {
        uVar2 = FUN_1431c8ca0(param_1);
        uVar4 = (ulonglong)uVar2;
        if ((int)param_1[0xd] != 0) {
          if ((*(byte *)((longlong)param_1 + 0x82) & 2) != 0) {
            *(undefined4 *)(param_1 + 0xd) = 0;
            *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0xfd;
            *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | 4;
            return uVar4;
          }
          (**(code **)(*(longlong *)param_1[0xb] + 0x88))();
          *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | 4;
          *(undefined4 *)(param_1 + 0xd) = 0;
          return uVar4;
        }
      }
      *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | 4;
      return uVar4;
    }
  }
  return 2;
}



// FUNCTION 1431c8a60 FUN_1431c8a60 body=337 status=ok
// SIG undefined FUN_1431c8a60(void)

undefined8 FUN_1431c8a60(longlong param_1,longlong param_2,char param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  iVar3 = *(int *)(param_1 + 0x70);
  bVar7 = *(byte *)(param_1 + 0x82) & 0xf7 | param_3 << 3;
  uVar1 = *(ushort *)(param_1 + 0x54);
  uVar5 = *(int *)(param_1 + 0x68) + iVar3;
  *(byte *)(param_1 + 0x82) = bVar7;
  *(uint *)(param_1 + 0x70) = uVar5;
  uVar4 = *(uint *)(param_1 + 0x74);
  iVar6 = *(int *)(param_1 + 0x68) - uVar4;
  *(int *)(param_1 + 0x68) = iVar6;
  *(ulonglong *)(param_1 + 0x60) = param_2 + (ulonglong)uVar4;
  *(uint *)(param_1 + 0x6c) = iVar3 + uVar4;
  if (uVar1 == 0) {
    uVar2 = *(uint *)(param_1 + 0x7c);
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)uVar1;
    if (uVar4 - *(ushort *)(param_1 + 0x80) == 1) {
      uVar2 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30);
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x7c);
    }
  }
  if (uVar5 < uVar2) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  else {
    *(uint *)(param_1 + 0x68) = (iVar6 - uVar5) + uVar2;
    if ((uVar1 != 0) && (uVar4 - *(ushort *)(param_1 + 0x80) == 1)) {
      *(byte *)(param_1 + 0x82) = bVar7 | 1;
      return 1;
    }
    iVar3 = CAkSrcFileBase::SetStreamPosition(param_1,*(undefined4 *)(param_1 + 0x78));
    if (iVar3 != 1) {
      return 2;
    }
    uVar1 = *(short *)(param_1 + 0x80) + 1;
    *(ushort *)(param_1 + 0x80) = uVar1;
    if ((*(ushort *)(param_1 + 0x54) != 0) && ((uint)*(ushort *)(param_1 + 0x54) - (uint)uVar1 == 1)
       ) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),local_18)
      ;
      local_10 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),local_18)
      ;
      return 1;
    }
  }
  return 1;
}



// FUNCTION 1431c8be0 FUN_1431c8be0 body=191 status=ok
// SIG undefined FUN_1431c8be0(void)

undefined8 FUN_1431c8be0(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined4 local_res10;
  undefined1 local_18 [4];
  longlong local_14;
  
  if (param_2 < *(uint *)(param_1 + 5)) {
    iVar1 = (**(code **)(*param_1 + 0xf0))();
    if (iVar1 == 1) {
      *(undefined2 *)(param_1 + 0x10) = 0;
      iVar1 = CAkSrcFileBase::SetStreamPosition(param_1,local_res10);
      if (iVar1 == 1) {
        (**(code **)(*(longlong *)param_1[0xb] + 0x20))((longlong *)param_1[0xb],local_18);
        if (*(short *)((longlong)param_1 + 0x54) == 1) {
          local_14 = 0;
        }
        else {
          local_14 = param_1[0xf];
        }
        (**(code **)(*(longlong *)param_1[0xb] + 0x28))((longlong *)param_1[0xb],local_18);
        *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0xfe;
        *(byte *)(param_1 + 4) =
             *(byte *)(param_1 + 4) ^
             (*(byte *)(param_1[3] + 0x295) >> 4 ^ *(byte *)(param_1 + 4)) & 2;
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 1431c8ca0 FUN_1431c8ca0 body=118 status=ok
// SIG undefined FUN_1431c8ca0(void)

undefined8 FUN_1431c8ca0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_1431c7f80();
  iVar3 = (**(code **)(*param_1 + 0x100))(param_1,iVar2,(longlong)param_1 + 0x2c);
  if (iVar3 != 1) {
    return 2;
  }
  lVar1 = param_1[3];
  iVar3 = *(int *)((longlong)param_1 + 0x2c);
  *(byte *)(lVar1 + 0x295) = *(byte *)(lVar1 + 0x295) & 0x3f;
  *(byte *)(lVar1 + 0x296) = *(byte *)(lVar1 + 0x296) & 0xfe;
  *(int *)(lVar1 + 0x28c) = iVar2 - iVar3;
  return 1;
}



// FUNCTION 1431c8d20 SetStreamPosition body=85 status=ok
// SIG undefined SetStreamPosition(void)

undefined8 CAkSrcFileBase::SetStreamPosition(longlong param_1,int param_2)

{
  int iVar1;
  int local_res8 [2];
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))
                    (*(longlong **)(param_1 + 0x58),param_2,0,local_res8);
  if (iVar1 != 1) {
    return 2;
  }
  *(int *)(param_1 + 0x70) = local_res8[0];
  *(int *)(param_1 + 0x74) = param_2 - local_res8[0];
  return 1;
}



// FUNCTION 1431c8d80 StartStream body=34 status=ok
// SIG undefined StartStream(void)

void CAkSrcFileBase::StartStream(undefined8 param_1)

{
  undefined4 local_18;
  undefined8 local_14;
  
  local_14 = 0x800;
  local_18 = 0;
  FUN_1431c90d0(param_1,&local_18);
  return;
}



// FUNCTION 1431c8db0 StopLooping body=77 status=ok
// SIG undefined StopLooping(void)

undefined8 CAkSrcFileBase::StopLooping(longlong param_1)

{
  longlong *plVar1;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x80) + 1;
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,local_18);
    local_10 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),local_18);
  }
  return 1;
}



// FUNCTION 1431c8e00 StopStream body=45 status=ok
// SIG undefined StopStream(void)

void CAkSrcFileBase::StopStream(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  CAkSrcBaseEx::StopStream(param_1);
  return;
}



// FUNCTION 1431c8e30 StoreAnalysisData body=118 status=ok
// SIG undefined StoreAnalysisData(void)

undefined8 CAkSrcFileBase::StoreAnalysisData(longlong param_1,uint *param_2)

{
  void *_Dst;
  
  if ((*(byte *)(param_1 + 0x82) & 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 2);
    return 1;
  }
  _Dst = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)*param_2);
  *(void **)(param_1 + 0x10) = _Dst;
  if (_Dst == (void *)0x0) {
    return 0x34;
  }
  ::_guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_2 + 2),(ulonglong)*param_2);
  return 1;
}



// FUNCTION 1431c8eb0 FUN_1431c8eb0 body=224 status=ok
// SIG undefined FUN_1431c8eb0(void)

void FUN_1431c8eb0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  float local_28 [4];
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x18) + 8) & 0x400000) != 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    plVar2 = *(longlong **)(param_1 + 0x58);
    iVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,local_res8);
    local_res10 = 0;
    if (iVar3 == 2) {
      local_res14 = 2;
    }
    else {
      (**(code **)(*plVar2 + 0x20))(plVar2,local_28);
      local_res10 = (undefined4)(longlong)((float)(uint)(local_res8[0] + iVar1) / local_28[0]);
      if ((iVar3 == 0x11) ||
         (uVar4 = (**(code **)(*plVar2 + 0x58))(plVar2), uVar4 <= (uint)(local_res8[0] + iVar1))) {
        local_res14 = 0x11;
      }
      else {
        local_res14 = 1;
      }
    }
    FUN_143162760(DAT_146b50b70,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x200),param_1,
                  &local_res10);
    return;
  }
  return;
}



// FUNCTION 1431c8f90 FUN_1431c8f90 body=205 status=ok
// SIG undefined FUN_1431c8f90(void)

void FUN_1431c8f90(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  if (param_2 == 1) {
    if (param_3 == '\0') {
      iVar1 = (**(code **)(*param_1 + 0x100))
                        (param_1,*(undefined4 *)((longlong)param_1 + 0x2c),(longlong)param_1 + 0x2c)
      ;
      if (iVar1 == 1) goto LAB_1431c9048;
      iVar1 = (**(code **)(*param_1 + 0x100))(param_1,0,(longlong)param_1 + 0x2c);
    }
    else {
      iVar1 = FUN_1431c8ca0();
    }
    if (iVar1 != 1) {
      return;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (param_1[3] == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = *(undefined2 *)(param_1[3] + 0x290);
    }
    *(undefined2 *)((longlong)param_1 + 0x54) = uVar2;
    iVar1 = (**(code **)(*param_1 + 0x100))(param_1,0);
    if (iVar1 != 1) {
      return;
    }
  }
  else if (param_2 == 2) {
    *(byte *)(param_1 + 4) =
         *(byte *)(param_1 + 4) ^ (*(byte *)(param_1[3] + 0x295) >> 4 ^ *(byte *)(param_1 + 4)) & 2;
  }
LAB_1431c9048:
                    /* WARNING: Could not recover jumptable at 0x0001431c9059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0xb] + 0x60))();
  return;
}



// FUNCTION 1431c9060 VirtualOn body=97 status=ok
// SIG undefined VirtualOn(void)

void CAkSrcFileBase::VirtualOn(longlong param_1,uint param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x68))();
  if ((param_2 < 2) && (*(int *)(param_1 + 0x68) != 0)) {
    if ((*(byte *)(param_1 + 0x82) & 2) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
    }
    else {
      *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_1431c8eb0(param_1);
  return;
}



// FUNCTION 1431c90d0 FUN_1431c90d0 body=610 status=ok
// SIG undefined FUN_1431c90d0(void)

undefined8 FUN_1431c90d0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined4 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined1 local_3b;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined8 local_28;
  byte local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((*(byte *)((longlong)param_1 + 0x82) & 4) != 0) {
    uVar5 = CAkSrcFileBase::IsInitialPrebufferingReady();
    return uVar5;
  }
  if (param_1[0xb] == 0) {
    local_1c = 0xffffffff;
    lVar2 = *(longlong *)(param_1[3] + 0x220);
    if ((*(longlong *)(lVar2 + 0x10) == 0) && (*(int *)(lVar2 + 4) == -1)) {
      return 2;
    }
    local_48 = 0x3f800000;
    local_44 = 0;
    local_3c = 0;
    local_3b = (undefined1)(int)*(float *)(param_1[3] + 0x2a0);
    if ((*(uint *)(lVar2 + 0xc) & 0x500) == 0) {
      local_1c = *(undefined4 *)(lVar2 + 4);
    }
    local_20 = (byte)*(uint *)(lVar2 + 0xc) & 1;
    local_34 = (uint)*(ushort *)(lVar2 + 0x1a);
    local_30 = 0;
    local_28 = 0;
    local_18 = 0;
    uVar4 = *(uint *)(lVar2 + 0xc);
    bVar7 = (uVar4 >> 8 & 1) != 0;
    if (bVar7) {
      uVar4 = *(uint *)(lVar2 + 0xc);
    }
    local_38 = (uint)bVar7;
    if ((uVar4 >> 9 & 1) == 0) {
      uVar5 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x28))
                        (AK::IAkStreamMgr::m_pStreamMgr,*(undefined4 *)(lVar2 + 4));
    }
    else {
      uVar5 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x30))
                        (AK::IAkStreamMgr::m_pStreamMgr,*(undefined8 *)(lVar2 + 0x10),&local_38,
                         &local_48,param_2,param_1 + 0xb,0);
    }
    if ((int)uVar5 == 1) {
      lVar2 = param_1[3];
      cVar6 = '\0';
      if (((*(uint *)(*(longlong *)(lVar2 + 0x220) + 0xc) >> 1 & 1) != 0) &&
         ((*(byte *)(lVar2 + 0x295) & 0x40) == 0)) {
        lVar3 = *(longlong *)(lVar2 + 0x2c0);
        iVar1 = *(int *)(lVar2 + 0x2c8);
        *(int *)(param_1 + 0xd) = iVar1;
        if ((lVar3 == 0) || (iVar1 == 0)) {
          cVar6 = '\0';
        }
        else {
          cVar6 = '\x01';
        }
        *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) & 0xfd;
        *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | cVar6 * '\x02';
        if (cVar6 != '\0') {
          *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_1 + 0x82) | 0x10;
          uVar5 = (**(code **)(*param_1 + 0xe8))(param_1,lVar3);
          if ((int)uVar5 != 1) {
            return uVar5;
          }
          uVar5 = (**(code **)(*param_1 + 0xf8))(param_1,lVar3,1);
          if ((int)uVar5 != 1) {
            return uVar5;
          }
          if (((short)param_1[0x10] == 0) &&
             (uVar5 = CAkSrcFileBase::SetStreamPosition(param_1,(int)param_1[0xd]), (int)uVar5 != 1)
             ) {
            return uVar5;
          }
          uVar4 = *(uint *)((longlong)param_1 + 0x34);
          param_1[0xc] = param_1[0xc] + (ulonglong)uVar4;
          *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar4;
          *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + uVar4;
        }
      }
      uVar5 = (**(code **)(*(longlong *)param_1[0xb] + 0x60))();
      if ((((int)uVar5 == 1) && (cVar6 == '\0')) &&
         (uVar5 = FUN_1431c88d0(param_1), (int)uVar5 == 1)) {
        uVar5 = CAkSrcFileBase::IsInitialPrebufferingReady(param_1);
      }
    }
  }
  else {
    uVar5 = FUN_1431c88d0();
    if ((int)uVar5 == 1) {
      uVar5 = CAkSrcFileBase::IsInitialPrebufferingReady(param_1);
      return uVar5;
    }
  }
  return uVar5;
}



// FUNCTION 1431c9340 FUN_1431c9340 body=568 status=ok
// SIG undefined FUN_1431c9340(void)

undefined8 FUN_1431c9340(short *param_1,short *param_2,int param_3,uint param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  if (param_3 != 0) {
    uVar5 = (ulonglong)param_5;
    do {
      iVar3 = (int)*param_1;
      uVar6 = (uint)*(byte *)(param_1 + 1);
      param_3 = param_3 + -1;
      iVar7 = 0x1f;
      pbVar9 = (byte *)(param_1 + 2);
      *param_2 = *param_1;
      param_2 = param_2 + uVar5;
      do {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        iVar8 = (int)(short)(&DAT_145acf610)[(int)uVar6] * ((bVar1 & 7) * 2 + 1);
        iVar4 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
        if ((bVar1 & 8) != 0) {
          iVar4 = -((int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3);
        }
        iVar4 = iVar4 + iVar3;
        iVar3 = iVar4;
        if ((short)iVar4 != iVar4) {
          iVar3 = 0x7fff;
          if (iVar4 < -0x8000) {
            iVar3 = -0x8000;
          }
        }
        iVar4 = (int)*(short *)(&DAT_145acf5f0 + (ulonglong)(bVar1 & 0xf) * 2) + uVar6;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0x58 < iVar4) {
          iVar4 = 0x58;
        }
        bVar1 = bVar1 >> 4;
        *param_2 = (short)iVar3;
        iVar8 = (int)(short)(&DAT_145acf610)[iVar4] * ((bVar1 & 7) * 2 + 1);
        iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
        if ((bVar1 & 8) != 0) {
          iVar8 = -iVar8;
        }
        iVar8 = iVar8 + iVar3;
        iVar3 = iVar8;
        if ((short)iVar8 != iVar8) {
          iVar3 = 0x7fff;
          if (iVar8 < -0x8000) {
            iVar3 = -0x8000;
          }
        }
        uVar6 = *(short *)(&DAT_145acf5f0 + (ulonglong)(uint)bVar1 * 2) + iVar4;
        if ((int)uVar6 < 0) {
          uVar6 = 0;
        }
        else if (0x58 < (int)uVar6) {
          uVar6 = 0x58;
        }
        param_2[uVar5] = (short)iVar3;
        param_2 = param_2 + uVar5 + uVar5;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = (int)(short)(&DAT_145acf610)[(int)uVar6] * ((*pbVar9 & 7) * 2 + 1);
      iVar7 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
      if ((*pbVar9 & 8) != 0) {
        iVar7 = -((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3);
      }
      iVar7 = iVar7 + iVar3;
      if (((short)iVar7 != iVar7) && (bVar2 = iVar7 < -0x8000, iVar7 = 0x7fff, bVar2)) {
        iVar7 = -0x8000;
      }
      param_1 = (short *)((longlong)param_1 + (ulonglong)param_4);
      *param_2 = (short)iVar7;
      param_2 = param_2 + uVar5;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 1431c9580 CAkActionSetValue body=33 status=ok
// SIG undefined CAkActionSetValue(void)

undefined8 * CAkActionSetValue::CAkActionSetValue(undefined8 *param_1)

{
  CAkActionExcept::CAkActionExcept();
  *param_1 = &PTR_FUN_145acf6c8;
  return param_1;
}



// FUNCTION 1431c95b0 ~CAkActionSetValue body=15 status=ok
// SIG undefined ~CAkActionSetValue(void)

void CAkActionSetValue::~CAkActionSetValue(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145acf6c8;
  CAkActionExcept::~CAkActionExcept();
  return;
}



// FUNCTION 1431c95c0 FUN_1431c95c0 body=62 status=ok
// SIG undefined FUN_1431c95c0(void)

undefined8 * FUN_1431c95c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acf6c8;
  CAkActionExcept::~CAkActionExcept();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1431c9600 Execute body=823 status=ok
// SIG undefined Execute(void)

undefined8 CAkActionSetValue::Execute(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0x34);
  uVar4 = (uint)uVar1;
  if (uVar1 < 0xc03) {
    if (uVar1 != 0xc02) {
      if (uVar1 < 0x904) {
        if (uVar1 == 0x903) {
LAB_1431c9664:
          plVar5 = (longlong *)CAkAction::GetAndRefTarget();
          if (plVar5 == (longlong *)0x0) {
            return 1;
          }
          (**(code **)(*param_1 + 0x78))(param_1,plVar5,*(undefined8 *)(param_2 + 0x40));
          goto LAB_1431c9682;
        }
        if (uVar4 < 0x705) {
          if (uVar4 == 0x704) goto LAB_1431c977f;
          if (uVar4 != 0x602) {
            if (uVar4 == 0x603) goto LAB_1431c986d;
            if (uVar4 == 0x702) goto LAB_1431c96c6;
            if (uVar4 != 0x703) {
              return 1;
            }
            goto LAB_1431c9664;
          }
        }
        else {
          if (uVar4 == 0x705) goto LAB_1431c98b1;
          if (uVar4 != 0x802) {
            if (uVar4 != 0x803) {
              if (uVar4 != 0x902) {
                return 1;
              }
              goto LAB_1431c96c6;
            }
            goto LAB_1431c986d;
          }
        }
      }
      else {
        if (0xb02 < uVar1) {
          if (uVar4 != 0xb03) {
            if (uVar4 != 0xb04) {
              if (uVar4 != 0xb05) {
                return 1;
              }
              goto LAB_1431c98b1;
            }
LAB_1431c977f:
            ResetAEHelper(param_1,g_pRegistryMgr);
            for (lVar2 = DAT_146b50898; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
              ResetAEHelper(param_1,lVar2 + 0x20);
            }
            return 1;
          }
          goto LAB_1431c9664;
        }
        if (uVar1 == 0xb02) goto LAB_1431c96c6;
        if (uVar4 == 0x904) goto LAB_1431c977f;
        if (uVar4 == 0x905) goto LAB_1431c98b1;
        if (uVar4 != 0xa02) {
          if (uVar4 != 0xa03) {
            return 1;
          }
          goto LAB_1431c986d;
        }
      }
    }
  }
  else {
    if (uVar4 < 0xf06) {
      if (uVar4 == 0xf05) {
LAB_1431c98b1:
        if (*(uint *)(*(longlong *)(param_2 + 0x40) + 0x40) < 4) {
          return 1;
        }
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x40) + 0x38) + 0x18);
        if (lVar2 == 0) {
          return 1;
        }
        for (puVar3 = *(undefined8 **)(lVar2 + 0x20); puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)*puVar3) {
          plVar5 = (longlong *)FUN_14313b2c0(DAT_146b50af8,puVar3 + 1);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*param_1 + 0x88))(param_1,plVar5,*(undefined8 *)(param_2 + 0x40));
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        return 1;
      }
      if (uVar4 < 0xe03) {
        if (uVar4 == 0xe02) goto LAB_1431c983f;
        if (uVar4 == 0xc03) goto LAB_1431c986d;
        if (uVar4 == 0xd02) goto LAB_1431c96c6;
        if (uVar4 != 0xd03) {
          if (uVar4 != 0xd04) {
            return 1;
          }
          goto LAB_1431c977f;
        }
      }
      else {
        if (uVar4 == 0xe03) {
LAB_1431c986d:
          plVar5 = (longlong *)CAkAction::GetAndRefTarget();
          if (plVar5 == (longlong *)0x0) {
            return 1;
          }
          (**(code **)(*param_1 + 0x68))(param_1,plVar5,*(undefined8 *)(param_2 + 0x40));
          goto LAB_1431c9682;
        }
        if (uVar4 == 0xf02) {
LAB_1431c96c6:
          plVar5 = (longlong *)CAkAction::GetAndRefTarget();
          if (plVar5 == (longlong *)0x0) {
            return 1;
          }
          (**(code **)(*param_1 + 0x80))(param_1,plVar5);
          goto LAB_1431c9682;
        }
        if (uVar4 != 0xf03) {
          if (uVar4 != 0xf04) {
            return 1;
          }
          goto LAB_1431c977f;
        }
      }
      goto LAB_1431c9664;
    }
    if (0x3002 < uVar4) {
      if (uVar4 != 0x3003) {
        if (uVar4 == 0x3004) goto LAB_1431c977f;
        if (uVar4 != 0x3005) {
          return 1;
        }
        goto LAB_1431c98b1;
      }
      goto LAB_1431c9664;
    }
    if (uVar4 == 0x3002) goto LAB_1431c96c6;
    if (0x2002 < uVar4) {
      if (uVar4 != 0x2003) {
        return 1;
      }
      goto LAB_1431c986d;
    }
    if (uVar4 != 0x2002) {
      if (uVar4 < 0x1302) {
        return 1;
      }
      if (0x1303 < uVar4) {
        if (1 < uVar4 - 0x1402) {
          return 1;
        }
        (**(code **)(*param_1 + 0x78))(param_1,0,*(undefined8 *)(param_2 + 0x40));
        return 1;
      }
      (**(code **)(*param_1 + 0x68))(param_1,0,*(undefined8 *)(param_2 + 0x40));
      return 1;
    }
  }
LAB_1431c983f:
  plVar5 = (longlong *)CAkAction::GetAndRefTarget();
  if (plVar5 == (longlong *)0x0) {
    return 1;
  }
  (**(code **)(*param_1 + 0x70))(param_1,plVar5);
LAB_1431c9682:
  (**(code **)(*plVar5 + 0x10))(plVar5);
  return 1;
}



// FUNCTION 1431c9940 ResetAEHelper body=104 status=ok
// SIG undefined ResetAEHelper(void)

void CAkActionSetValue::ResetAEHelper(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    for (param_2 = (undefined8 *)*param_2; param_2 != (undefined8 *)0x0;
        param_2 = (undefined8 *)*param_2) {
      plVar1 = (longlong *)FUN_14313b2c0(DAT_146b50af8,param_2 + 1);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*param_1 + 0x90))(param_1,plVar1);
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  return;
}



// FUNCTION 1431c99b0 CheckPoolId body=39 status=ok
// SIG AKRESULT CheckPoolId(long param_1)

/* enum AKRESULT __cdecl AK::MemoryMgr::CheckPoolId(long) */

AKRESULT __cdecl AK::MemoryMgr::CheckPoolId(long param_1)

{
  AKRESULT AVar1;
  
                    /* 0x31c99b0  88  ?CheckPoolId@MemoryMgr@AK@@YA?AW4AKRESULT@@J@Z */
  if ((DAT_146b52028 <= param_1) ||
     (AVar1 = 1, *(int *)((longlong)param_1 * 0x70 + DAT_146b52030) == 0)) {
    AVar1 = 0xe;
  }
  return AVar1;
}



// FUNCTION 1431c99e0 Falign body=5 status=ok
// SIG AKRESULT Falign(long param_1, void * param_2)

/* enum AKRESULT __cdecl AK::MemoryMgr::Falign(long,void * __ptr64) */

AKRESULT __cdecl AK::MemoryMgr::Falign(long param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x31c99e0  119  ?Falign@MemoryMgr@AK@@YA?AW4AKRESULT@@JPEAX@Z */
  if (param_2 != (void *)0x0) {
    lVar2 = (longlong)param_1 * 0x70 + DAT_146b52030;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x30));
    iVar1 = tlsf_block_size(param_2);
    *(int *)(lVar2 + 100) = *(int *)(lVar2 + 100) - (iVar1 + 8);
    tlsf_free(*(undefined8 *)(lVar2 + 0x58),param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x30));
  }
  return 1;
}



// FUNCTION 1431c99f0 Free body=105 status=ok
// SIG AKRESULT Free(long param_1, void * param_2)

/* enum AKRESULT __cdecl AK::MemoryMgr::Free(long,void * __ptr64) */

AKRESULT __cdecl AK::MemoryMgr::Free(long param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x31c99f0  124  ?Free@MemoryMgr@AK@@YA?AW4AKRESULT@@JPEAX@Z */
  if (param_2 != (void *)0x0) {
    lVar2 = (longlong)param_1 * 0x70 + DAT_146b52030;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x30));
    iVar1 = tlsf_block_size(param_2);
    *(int *)(lVar2 + 100) = *(int *)(lVar2 + 100) - (iVar1 + 8);
    tlsf_free(*(undefined8 *)(lVar2 + 0x58),param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x30));
  }
  return 1;
}



// FUNCTION 1431c9a60 GetBlock body=59 status=ok
// SIG void * GetBlock(long param_1)

/* void * __ptr64 __cdecl AK::MemoryMgr::GetBlock(long) */

void * __cdecl AK::MemoryMgr::GetBlock(long param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
                    /* 0x31c9a60  132  ?GetBlock@MemoryMgr@AK@@YAPEAXJ@Z */
  lVar2 = (longlong)param_1 * 0x70 + DAT_146b52030;
  plVar1 = *(longlong **)(lVar2 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 == 0) {
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 100) = *(int *)(lVar2 + 100) + *(int *)(lVar2 + 4);
      return plVar1;
    }
    *(longlong *)(lVar2 + 0x20) = *plVar1;
    *(int *)(lVar2 + 100) = *(int *)(lVar2 + 100) + *(int *)(lVar2 + 4);
  }
  return plVar1;
}



// FUNCTION 1431c9aa0 GetBlockSize body=19 status=ok
// SIG ulong GetBlockSize(long param_1)

/* unsigned long __cdecl AK::MemoryMgr::GetBlockSize(long) */

ulong __cdecl AK::MemoryMgr::GetBlockSize(long param_1)

{
                    /* 0x31c9aa0  133  ?GetBlockSize@MemoryMgr@AK@@YAKJ@Z */
  return *(ulong *)((longlong)param_1 * 0x70 + 4 + DAT_146b52030);
}



// FUNCTION 1431c9ac0 GetMaxPools body=7 status=ok
// SIG long GetMaxPools(void)

/* long __cdecl AK::MemoryMgr::GetMaxPools(void) */

long __cdecl AK::MemoryMgr::GetMaxPools(void)

{
                    /* 0x31c9ac0  176  ?GetMaxPools@MemoryMgr@AK@@YAJXZ */
  return DAT_146b52028;
}



// FUNCTION 1431c9ad0 GetNumPools body=7 status=ok
// SIG long GetNumPools(void)

/* long __cdecl AK::MemoryMgr::GetNumPools(void) */

long __cdecl AK::MemoryMgr::GetNumPools(void)

{
                    /* 0x31c9ad0  180  ?GetNumPools@MemoryMgr@AK@@YAJXZ */
  return DAT_146b5202c;
}



// FUNCTION 1431c9ae0 GetPoolAttributes body=19 status=ok
// SIG AkMemPoolAttributes GetPoolAttributes(long param_1)

/* enum AkMemPoolAttributes __cdecl AK::MemoryMgr::GetPoolAttributes(long) */

AkMemPoolAttributes __cdecl AK::MemoryMgr::GetPoolAttributes(long param_1)

{
                    /* 0x31c9ae0  191
                       ?GetPoolAttributes@MemoryMgr@AK@@YA?AW4AkMemPoolAttributes@@J@Z */
  return *(AkMemPoolAttributes *)((longlong)param_1 * 0x70 + 0x28 + DAT_146b52030);
}



// FUNCTION 1431c9b00 GetPoolMemoryUsed body=79 status=ok
// SIG void GetPoolMemoryUsed(long param_1, PoolMemInfo * param_2)

/* void __cdecl AK::MemoryMgr::GetPoolMemoryUsed(long,struct AK::MemoryMgr::PoolMemInfo & __ptr64)
    */

void __cdecl AK::MemoryMgr::GetPoolMemoryUsed(long param_1,PoolMemInfo *param_2)

{
  longlong lVar1;
  
                    /* 0x31c9b00  193  ?GetPoolMemoryUsed@MemoryMgr@AK@@YAXJAEAUPoolMemInfo@12@@Z */
  lVar1 = (longlong)param_1 * 0x70 + DAT_146b52030;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x30));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar1 + 100);
  *(undefined4 *)param_2 = *(undefined4 *)(lVar1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x0001431c9b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x30));
  return;
}



// FUNCTION 1431c9b50 GetPoolStats body=120 status=ok
// SIG AKRESULT GetPoolStats(long param_1, PoolStats * param_2)

/* enum AKRESULT __cdecl AK::MemoryMgr::GetPoolStats(long,struct AK::MemoryMgr::PoolStats & __ptr64)
    */

AKRESULT __cdecl AK::MemoryMgr::GetPoolStats(long param_1,PoolStats *param_2)

{
  longlong lVar1;
  
                    /* 0x31c9b50  195
                       ?GetPoolStats@MemoryMgr@AK@@YA?AW4AKRESULT@@JAEAUPoolStats@12@@Z */
  if ((param_1 < DAT_146b52028) && (-1 < param_1)) {
    lVar1 = (longlong)param_1 * 0x70 + DAT_146b52030;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x30));
    *(undefined4 *)param_2 = *(undefined4 *)(lVar1 + 0x68);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar1 + 100);
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x30));
    return 1;
  }
  return 2;
}



// FUNCTION 1431c9bd0 Init body=32 status=ok
// SIG undefined Init(void)

void AkMemPool::Init(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 5) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}



// FUNCTION 1431c9bf0 InitBase body=210 status=ok
// SIG undefined InitBase(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 AK::MemoryMgr::InitBase(int param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)param_1;
  lVar2 = operator_new(lVar3 * 0x70);
  DAT_146b52030 = lVar2;
  if (lVar2 != 0) {
    lVar4 = 0;
    if (0 < param_1) {
      do {
        puVar1 = (undefined8 *)(lVar4 + lVar2);
        if (puVar1 != (undefined8 *)0x0) {
          puVar1[3] = 0;
          puVar1[4] = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 6));
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          *(undefined4 *)(puVar1 + 5) = 1;
          puVar1[0xb] = 0;
          puVar1[0xc] = 0;
          *(undefined4 *)(puVar1 + 0xd) = 0;
          lVar2 = DAT_146b52030;
        }
        lVar4 = lVar4 + 0x70;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    DAT_146b5202c = 0;
    DAT_146b52028 = param_1;
    _DAT_146b52038 = param_2;
    DAT_146b5203c = 1;
    return 1;
  }
  return 2;
}



// FUNCTION 1431c9cd0 IsInitialized body=8 status=ok
// SIG bool IsInitialized(void)

/* bool __cdecl AK::MemoryMgr::IsInitialized(void) */

bool __cdecl AK::MemoryMgr::IsInitialized(void)

{
                    /* 0x31c9cd0  235  ?IsInitialized@MemoryMgr@AK@@YA_NXZ */
  return (bool)DAT_146b5203c;
}



// FUNCTION 1431c9ce0 Malign body=139 status=ok
// SIG void * Malign(long param_1, __uint64 param_2, ulong param_3)

/* void * __ptr64 __cdecl AK::MemoryMgr::Malign(long,unsigned __int64,unsigned long) */

void * __cdecl AK::MemoryMgr::Malign(long param_1,__uint64 param_2,ulong param_3)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
                    /* 0x31c9ce0  266  ?Malign@MemoryMgr@AK@@YAPEAXJ_KK@Z */
  if (param_2 == 0) {
    return (void *)0x0;
  }
  lVar3 = (longlong)param_1 * 0x70 + DAT_146b52030;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
  pvVar2 = (void *)tlsf_memalign(*(undefined8 *)(lVar3 + 0x58),param_3,param_2);
  if (pvVar2 != (void *)0x0) {
    iVar1 = tlsf_block_size(pvVar2);
    *(int *)(lVar3 + 100) = *(int *)(lVar3 + 100) + iVar1 + 8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
  return pvVar2;
}



// FUNCTION 1431c9d70 Malloc body=139 status=ok
// SIG void * Malloc(long param_1, __uint64 param_2)

/* void * __ptr64 __cdecl AK::MemoryMgr::Malloc(long,unsigned __int64) */

void * __cdecl AK::MemoryMgr::Malloc(long param_1,__uint64 param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
                    /* 0x31c9d70  267  ?Malloc@MemoryMgr@AK@@YAPEAXJ_K@Z */
  if (param_2 == 0) {
    return (void *)0x0;
  }
  lVar3 = (longlong)param_1 * 0x70 + DAT_146b52030;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
  if (*(uint *)(lVar3 + 0x60) < 5) {
    pvVar2 = (void *)tlsf_malloc(*(undefined8 *)(lVar3 + 0x58),param_2);
  }
  else {
    pvVar2 = (void *)tlsf_memalign(*(undefined8 *)(lVar3 + 0x58),*(uint *)(lVar3 + 0x60),param_2);
  }
  if (pvVar2 != (void *)0x0) {
    iVar1 = tlsf_block_size(pvVar2);
    *(int *)(lVar3 + 100) = *(int *)(lVar3 + 100) + iVar1 + 8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
  return pvVar2;
}



// FUNCTION 1431c9e00 Realloc body=154 status=ok
// SIG void * Realloc(long param_1, void * param_2, __uint64 param_3)

/* void * __ptr64 __cdecl AK::MemoryMgr::Realloc(long,void * __ptr64,unsigned __int64) */

void * __cdecl AK::MemoryMgr::Realloc(long param_1,void *param_2,__uint64 param_3)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
                    /* 0x31c9e00  344  ?Realloc@MemoryMgr@AK@@YAPEAXJPEAX_K@Z */
  lVar3 = (longlong)param_1 * 0x70 + DAT_146b52030;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
  if (param_2 != (void *)0x0) {
    iVar1 = tlsf_block_size(param_2);
    *(int *)(lVar3 + 100) = *(int *)(lVar3 + 100) - (iVar1 + 8);
  }
  pvVar2 = (void *)tlsf_realloc(*(undefined8 *)(lVar3 + 0x58),param_2,param_3);
  if (pvVar2 == (void *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
    pvVar2 = (void *)0x0;
  }
  else {
    iVar1 = tlsf_block_size(param_2);
    *(int *)(lVar3 + 100) = *(int *)(lVar3 + 100) + iVar1 + 8;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x30));
  }
  return pvVar2;
}



// FUNCTION 1431c9ea0 ReleaseBlock body=65 status=ok
// SIG AKRESULT ReleaseBlock(long param_1, void * param_2)

/* enum AKRESULT __cdecl AK::MemoryMgr::ReleaseBlock(long,void * __ptr64) */

AKRESULT __cdecl AK::MemoryMgr::ReleaseBlock(long param_1,void *param_2)

{
  longlong lVar1;
  
                    /* 0x31c9ea0  357  ?ReleaseBlock@MemoryMgr@AK@@YA?AW4AKRESULT@@JPEAX@Z */
  lVar1 = (longlong)param_1 * 0x70 + DAT_146b52030;
  *(int *)(lVar1 + 100) = *(int *)(lVar1 + 100) - *(int *)(lVar1 + 4);
  *(undefined8 *)param_2 = 0;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    *(void **)(lVar1 + 0x20) = param_2;
    *(void **)(lVar1 + 0x18) = param_2;
    return 1;
  }
  **(undefined8 **)(lVar1 + 0x18) = param_2;
  *(void **)(lVar1 + 0x18) = param_2;
  return 1;
}



// FUNCTION 1431c9ef0 SetPoolName body=60 status=ok
// SIG AKRESULT SetPoolName(long param_1, char * param_2)

/* enum AKRESULT __cdecl AK::MemoryMgr::SetPoolName(long,char const * __ptr64) */

AKRESULT __cdecl AK::MemoryMgr::SetPoolName(long param_1,char *param_2)

{
  WCHAR local_218 [268];
  
                    /* 0x31c9ef0  435  ?SetPoolName@MemoryMgr@AK@@YA?AW4AKRESULT@@JPEBD@Z */
  MultiByteToWideChar(0xfde9,0,param_2,-1,local_218,0x104);
  return 1;
}



// FUNCTION 1431c9f30 Term body=165 status=ok
// SIG void Term(void)

/* void __cdecl AK::MemoryMgr::Term(void) */

void __cdecl AK::MemoryMgr::Term(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
                    /* 0x31c9f30  478  ?Term@MemoryMgr@AK@@YAXXZ */
  if (DAT_146b5203c != '\0') {
    iVar2 = 0;
    if (0 < DAT_146b52028) {
      lVar3 = 0;
      do {
        lVar1 = DAT_146b52030;
        if (*(int *)(DAT_146b52030 + lVar3) != 0) {
          DestroyPool(iVar2);
        }
        DeleteCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x30 + lVar3));
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 0x70;
      } while (iVar2 < DAT_146b52028);
    }
    FMemory::operator_delete(DAT_146b52030);
    DAT_146b52028 = 0;
    DAT_146b5202c = 0;
    DAT_146b52030 = 0;
    DAT_146b5203c = '\0';
  }
  return;
}



// FUNCTION 1431c9fe0 CreatePool body=473 status=ok
// SIG long CreatePool(void * param_1, ulong param_2, ulong param_3, ulong param_4, ulong param_5)

/* long __cdecl AK::MemoryMgr::CreatePool(void * __ptr64,unsigned long,unsigned long,unsigned
   long,unsigned long) */

long __cdecl
AK::MemoryMgr::CreatePool(void *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  LPVOID pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar10;
  
                    /* 0x31c9fe0  102  ?CreatePool@MemoryMgr@AK@@YAJPEAXKKKK@Z */
  uVar10 = param_4 & 3;
  if (uVar10 == 0) {
    if (param_1 == (void *)0x0) {
      return -1;
    }
  }
  else if (1 < uVar10 - 1) {
    return -1;
  }
  if ((DAT_146b5202c < DAT_146b52028) && (iVar8 = 0, 0 < DAT_146b52028)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b52030 + 0xc);
    puVar7 = DAT_146b52030;
    do {
      EnterCriticalSection(lpCriticalSection);
      if (*puVar7 == 0) {
        if (DAT_146b52028 <= iVar8) {
          return -1;
        }
        uVar9 = (param_2 / param_3) * param_3;
        if (param_1 == (void *)0x0) {
          uVar2 = uVar9 + param_5;
          if (uVar2 != 0) {
            if (uVar10 == 2) {
              pvVar4 = VirtualAlloc((LPVOID)0x0,(ulonglong)uVar2,0x1000,4);
            }
            else {
              pvVar4 = (LPVOID)operator_new(uVar2);
            }
            *(LPVOID *)(puVar7 + 2) = pvVar4;
          }
          param_1 = *(void **)(puVar7 + 2);
          *(void **)(puVar7 + 4) = param_1;
          if (param_1 == (undefined8 *)0x0) goto LAB_1431ca17d;
          if ((param_5 != 0) && (uVar6 = (ulonglong)param_1 % (ulonglong)param_5, uVar6 != 0)) {
            param_1 = (void *)((param_5 - uVar6) + (longlong)param_1);
            *(void **)(puVar7 + 4) = param_1;
          }
          puVar7[0xb] = puVar7[0xb] | 1;
        }
        else {
          puVar7[0xb] = puVar7[0xb] & 0xfffffffe;
          *(void **)(puVar7 + 4) = param_1;
        }
        puVar7[10] = param_4;
        puVar7[0x1a] = uVar9;
        if ((param_4 & 8) == 0) {
          lVar5 = tlsf_create(param_1,uVar9);
          *(longlong *)(puVar7 + 0x16) = lVar5;
          if (lVar5 == 0) {
            DeallocatePool(puVar7);
LAB_1431ca17d:
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar7 + 0xc));
            return -1;
          }
          iVar3 = tlsf_overhead();
          puVar7[0x1a] = puVar7[0x1a] - iVar3;
        }
        else {
          puVar1 = (undefined8 *)((ulonglong)uVar9 + (longlong)param_1);
          for (; param_1 != puVar1; param_1 = (void *)((longlong)param_1 + (ulonglong)param_3)) {
            *(undefined8 *)param_1 = 0;
            if (*(longlong *)(puVar7 + 8) == 0) {
              *(void **)(puVar7 + 8) = param_1;
            }
            else {
              **(undefined8 **)(puVar7 + 6) = param_1;
            }
            *(void **)(puVar7 + 6) = param_1;
          }
        }
        *puVar7 = param_2 / param_3;
        puVar7[1] = param_3;
        puVar7[0x18] = param_5;
        DAT_146b5202c = DAT_146b5202c + 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar7 + 0xc));
        return iVar8;
      }
      LeaveCriticalSection(lpCriticalSection);
      puVar7 = puVar7 + 0x1c;
      lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[2].SpinCount;
      iVar8 = iVar8 + 1;
    } while (iVar8 < DAT_146b52028);
  }
  return -1;
}



// FUNCTION 1431ca1c0 DeallocatePool body=72 status=ok
// SIG undefined DeallocatePool(void)

void AK::MemoryMgr::DeallocatePool(longlong param_1)

{
  if (((byte)*(undefined4 *)(param_1 + 0x28) & 3) == 2) {
    VirtualFreeHook(*(LPVOID *)(param_1 + 8),0,0x8000);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  FMemory::operator_delete();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1431ca210 DestroyPool body=172 status=ok
// SIG AKRESULT DestroyPool(long param_1)

/* enum AKRESULT __cdecl AK::MemoryMgr::DestroyPool(long) */

AKRESULT __cdecl AK::MemoryMgr::DestroyPool(long param_1)

{
  AKRESULT AVar1;
  longlong lVar2;
  
                    /* 0x31ca210  108  ?DestroyPool@MemoryMgr@AK@@YA?AW4AKRESULT@@J@Z */
  AVar1 = CheckPoolId(param_1);
  if (AVar1 == 1) {
    lVar2 = (longlong)param_1 * 0x70 + DAT_146b52030;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x30));
    if ((*(byte *)(lVar2 + 0x28) & 8) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
    if ((*(byte *)(lVar2 + 0x2c) & 1) != 0) {
      if (((byte)*(undefined4 *)(lVar2 + 0x28) & 3) == 2) {
        VirtualFreeHook(*(LPVOID *)(lVar2 + 8),0,0x8000);
      }
      else {
        FMemory::operator_delete();
      }
      *(undefined8 *)(lVar2 + 8) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    AkMemPool::Init(lVar2);
    DAT_146b5202c = DAT_146b5202c + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x30));
  }
  return AVar1;
}



// FUNCTION 1431ca2c0 Init body=58 status=ok
// SIG AKRESULT Init(AkMemSettings * param_1)

/* enum AKRESULT __cdecl AK::MemoryMgr::Init(struct AkMemSettings * __ptr64) */

AKRESULT __cdecl AK::MemoryMgr::Init(AkMemSettings *param_1)

{
  bool bVar1;
  AKRESULT AVar2;
  
                    /* 0x31ca2c0  224  ?Init@MemoryMgr@AK@@YA?AW4AKRESULT@@PEAUAkMemSettings@@@Z */
  bVar1 = IsInitialized();
  if (bVar1) {
    return 1;
  }
  if (param_1 == (AkMemSettings *)0x0) {
    return 2;
  }
  AVar2 = InitBase(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
  return AVar2;
}



// FUNCTION 1431ca300 block_insert body=186 status=ok
// SIG undefined block_insert(void)

void block_insert(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar2 = *(ulonglong *)(param_2 + 8);
  if ((uVar2 & 0xfffffffffffffffc) < 0x100) {
    iVar4 = 0;
    uVar7 = (int)(((int)(uint)uVar2 >> 0x1f & 7U) + ((uint)uVar2 & 0xfffffffc)) >> 3;
  }
  else {
    if ((int)(uVar2 >> 0x20) == 0) {
      iVar4 = tlsf_fls_generic(uVar2 & 0xfffffffc);
      bVar5 = (char)iVar4 - 6;
      iVar4 = iVar4 + -8;
    }
    else {
      iVar4 = tlsf_fls_generic(uVar2 >> 0x20);
      bVar5 = (char)iVar4 + 0x1a;
      iVar4 = iVar4 + 0x18;
    }
    uVar7 = (uint)((uVar2 & 0xfffffffffffffffc) >> (bVar5 & 0x3f)) ^ 0x20;
  }
  lVar6 = (longlong)iVar4 * 0x20 + (longlong)(int)uVar7;
  lVar3 = *(longlong *)(param_1 + 0x88 + lVar6 * 8);
  *(longlong *)(param_2 + 0x10) = lVar3;
  *(longlong *)(param_2 + 0x18) = param_1;
  *(longlong *)(lVar3 + 0x18) = param_2;
  *(longlong *)(param_1 + 0x88 + lVar6 * 8) = param_2;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1 << ((byte)iVar4 & 0x1f);
  puVar1 = (uint *)(param_1 + 0x24 + (longlong)iVar4 * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
  return;
}



// FUNCTION 1431ca3c0 block_locate_free body=407 status=ok
// SIG undefined block_locate_free(void)

longlong block_locate_free(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0x1f < param_2) {
    if ((int)(param_2 >> 0x20) == 0) {
      cVar5 = tlsf_fls_generic(param_2 & 0xffffffff);
      bVar6 = cVar5 - 6;
    }
    else {
      cVar5 = tlsf_fls_generic(param_2 >> 0x20);
      bVar6 = cVar5 + 0x1a;
    }
    param_2 = param_2 + (longlong)((1 << (bVar6 & 0x1f)) + -1);
  }
  if (param_2 < 0x100) {
    iVar7 = 0;
    bVar6 = (byte)((int)(((int)param_2 >> 0x1f & 7U) + (int)param_2) >> 3);
  }
  else {
    if ((int)(param_2 >> 0x20) == 0) {
      iVar7 = tlsf_fls_generic(param_2 & 0xffffffff);
      bVar6 = (char)iVar7 - 6;
      iVar7 = iVar7 + -8;
    }
    else {
      iVar7 = tlsf_fls_generic(param_2 >> 0x20);
      bVar6 = (char)iVar7 + 0x1a;
      iVar7 = iVar7 + 0x18;
    }
    bVar6 = (byte)(param_2 >> (bVar6 & 0x3f));
  }
  lVar11 = (longlong)iVar7;
  uVar10 = *(uint *)(param_1 + 0x24 + lVar11 * 4) & -1 << (bVar6 & 0x1f);
  if (uVar10 == 0) {
    uVar10 = -1 << ((char)iVar7 + 1U & 0x1f) & *(uint *)(param_1 + 0x20);
    if (uVar10 == 0) {
      return 0;
    }
    iVar7 = tlsf_fls_generic(~uVar10 + 1 & uVar10);
    iVar7 = iVar7 + -1;
    lVar11 = (longlong)iVar7;
    uVar10 = *(uint *)(param_1 + 0x24 + lVar11 * 4);
  }
  iVar8 = tlsf_fls_generic(~uVar10 + 1 & uVar10);
  lVar2 = *(longlong *)(param_1 + 0x80 + ((longlong)iVar8 + lVar11 * 0x20) * 8);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    lVar4 = *(longlong *)(lVar2 + 0x18);
    lVar9 = (longlong)iVar8 + lVar11 * 0x20;
    *(longlong *)(lVar3 + 0x18) = lVar4;
    *(longlong *)(lVar4 + 0x10) = lVar3;
    if ((*(longlong *)(param_1 + 0x80 + lVar9 * 8) == lVar2) &&
       (*(longlong *)(param_1 + 0x80 + lVar9 * 8) = lVar3, lVar3 == param_1)) {
      puVar1 = (uint *)(param_1 + 0x24 + lVar11 * 4);
      *puVar1 = *puVar1 & ~(1 << ((char)iVar8 - 1U & 0x1f));
      if (*puVar1 == 0) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << ((byte)iVar7 & 0x1f));
      }
    }
  }
  return lVar2;
}



// FUNCTION 1431ca560 block_prepare_used body=154 status=ok
// SIG undefined block_prepare_used(void)

longlong block_prepare_used(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if (param_3 + 0x20 <= (uVar2 & 0xfffffffffffffffc)) {
      lVar3 = param_3 + 8 + param_2;
      *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) & 3;
      *(ulonglong *)(lVar3 + 8) =
           *(ulonglong *)(lVar3 + 8) | ((uVar2 & 0xfffffffffffffffc) - param_3) - 8;
      *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) & 3;
      *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | param_3;
      uVar2 = *(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffc;
      puVar1 = (ulonglong *)(uVar2 + 0x10 + lVar3);
      *puVar1 = *puVar1 | 2;
      *(longlong *)(uVar2 + 8 + lVar3) = lVar3;
      *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) | 1;
      *(longlong *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffc) + 8 + param_2) = param_2;
      *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) | 2;
      block_insert();
      uVar2 = *(ulonglong *)(param_2 + 8);
    }
    puVar1 = (ulonglong *)((uVar2 & 0xfffffffffffffffc) + 0x10 + param_2);
    *puVar1 = *puVar1 & 0xfffffffffffffffd;
    *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe;
    return param_2 + 0x10;
  }
  return 0;
}



// FUNCTION 1431ca600 block_remove body=203 status=ok
// SIG undefined block_remove(void)

void block_remove(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar2 = *(ulonglong *)(param_2 + 8);
  if ((uVar2 & 0xfffffffffffffffc) < 0x100) {
    iVar4 = 0;
    uVar7 = (int)(((int)(uint)uVar2 >> 0x1f & 7U) + ((uint)uVar2 & 0xfffffffc)) >> 3;
  }
  else {
    if ((int)(uVar2 >> 0x20) == 0) {
      iVar4 = tlsf_fls_generic(uVar2 & 0xfffffffc);
      bVar5 = (char)iVar4 - 6;
      iVar4 = iVar4 + -8;
    }
    else {
      iVar4 = tlsf_fls_generic(uVar2 >> 0x20);
      bVar5 = (char)iVar4 + 0x1a;
      iVar4 = iVar4 + 0x18;
    }
    uVar7 = (uint)((uVar2 & 0xfffffffffffffffc) >> (bVar5 & 0x3f)) ^ 0x20;
  }
  lVar6 = *(longlong *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(lVar3 + 0x18) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar3;
  lVar6 = (longlong)iVar4 * 0x20 + (longlong)(int)uVar7;
  if ((*(longlong *)(param_1 + 0x88 + lVar6 * 8) == param_2) &&
     (*(longlong *)(param_1 + 0x88 + lVar6 * 8) = lVar3, lVar3 == param_1)) {
    puVar1 = (uint *)(param_1 + 0x24 + (longlong)iVar4 * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)uVar7 & 0x1f));
    if (*puVar1 == 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << ((byte)iVar4 & 0x1f));
    }
  }
  return;
}



// FUNCTION 1431ca6d0 block_trim_free_leading body=125 status=ok
// SIG undefined block_trim_free_leading(void)

longlong block_trim_free_leading(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffffc;
  if (param_3 + 0x20U <= uVar4) {
    uVar1 = param_3 - 8;
    lVar3 = param_2 + 8 + uVar1;
    *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) & 3;
    *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) | (uVar4 - uVar1) - 8;
    *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) & 3;
    *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) | uVar1;
    uVar4 = *(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffc;
    puVar2 = (ulonglong *)(uVar4 + 0x10 + lVar3);
    *puVar2 = *puVar2 | 2;
    *(longlong *)(uVar4 + 8 + lVar3) = lVar3;
    *(ulonglong *)(lVar3 + 8) = *(ulonglong *)(lVar3 + 8) | 3;
    *(longlong *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffc) + 8 + param_2) = param_2;
    block_insert();
    return lVar3;
  }
  return param_2;
}



// FUNCTION 1431ca750 tlsf_block_size body=17 status=ok
// SIG undefined tlsf_block_size(void)

ulonglong tlsf_block_size(longlong param_1)

{
  if (param_1 != 0) {
    return *(ulonglong *)(param_1 + -8) & 0xfffffffffffffffc;
  }
  return 0;
}



// FUNCTION 1431ca770 tlsf_create body=367 status=ok
// SIG undefined tlsf_create(void)

longlong tlsf_create(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = param_2 - 0x1998U & 0xfffffffffffffff8;
  if (uVar4 - 0x18 < 0xffffffe9) {
    *(longlong *)(param_1 + 0x10) = param_1;
    puVar2 = (undefined4 *)(param_1 + 0x24);
    *(longlong *)(param_1 + 0x18) = param_1;
    plVar1 = (longlong *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x20) = 0;
    lVar3 = 0x19;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      plVar1[-1] = param_1;
      *plVar1 = param_1;
      plVar1[1] = param_1;
      plVar1[2] = param_1;
      plVar1[3] = param_1;
      plVar1[4] = param_1;
      plVar1[5] = param_1;
      plVar1[6] = param_1;
      plVar1[7] = param_1;
      plVar1[8] = param_1;
      plVar1[9] = param_1;
      plVar1[10] = param_1;
      plVar1[0xb] = param_1;
      plVar1[0xc] = param_1;
      plVar1[0xd] = param_1;
      plVar1[0xe] = param_1;
      plVar1[0xf] = param_1;
      plVar1[0x10] = param_1;
      plVar1[0x11] = param_1;
      plVar1[0x12] = param_1;
      plVar1[0x13] = param_1;
      plVar1[0x14] = param_1;
      plVar1[0x15] = param_1;
      plVar1[0x16] = param_1;
      plVar1[0x17] = param_1;
      plVar1[0x18] = param_1;
      plVar1[0x19] = param_1;
      plVar1[0x1a] = param_1;
      plVar1[0x1b] = param_1;
      plVar1[0x1c] = param_1;
      plVar1[0x1d] = param_1;
      plVar1[0x1e] = param_1;
      plVar1 = plVar1 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar3 = param_1 + 0x1980;
    *(ulonglong *)(param_1 + 0x1988) = uVar4 | 1;
    block_insert(param_1,lVar3);
    uVar4 = *(ulonglong *)(param_1 + 0x1988) & 0xfffffffffffffffc;
    *(longlong *)(uVar4 + 8 + lVar3) = lVar3;
    *(undefined8 *)(uVar4 + 0x10 + lVar3) = 2;
    return param_1;
  }
  printf("tlsf_create: Pool size must be at least %d bytes.\n",0x19b0);
  return 0;
}



// FUNCTION 1431ca8e0 tlsf_fls_generic body=126 status=ok
// SIG undefined tlsf_fls_generic(void)

int tlsf_fls_generic(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = param_1 != 0;
  iVar4 = bVar5 + 0x1f;
  if ((param_1 & 0xffff0000) == 0) {
    param_1 = param_1 << 0x10;
    iVar4 = bVar5 + 0xf;
  }
  iVar3 = iVar4 + -8;
  uVar2 = param_1 << 8;
  if ((param_1 & 0xff000000) != 0) {
    iVar3 = iVar4;
    uVar2 = param_1;
  }
  iVar4 = iVar3 + -4;
  uVar1 = uVar2 << 4;
  if ((uVar2 & 0xf0000000) != 0) {
    iVar4 = iVar3;
    uVar1 = uVar2;
  }
  uVar2 = uVar1 * 4;
  iVar3 = iVar4 + -2;
  if ((uVar1 & 0xc0000000) != 0) {
    uVar2 = uVar1;
    iVar3 = iVar4;
  }
  iVar4 = iVar3 + -1;
  if ((int)uVar2 < 0) {
    iVar4 = iVar3;
  }
  return iVar4;
}



// FUNCTION 1431ca960 tlsf_free body=189 status=ok
// SIG undefined tlsf_free(void)

void tlsf_free(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_2 + -0x10);
    puVar1 = (ulonglong *)(param_2 + -8);
    uVar3 = *(ulonglong *)(param_2 + -8) & 0xfffffffffffffffc;
    puVar2 = (ulonglong *)(uVar3 + 0x10 + (longlong)plVar4);
    *puVar2 = *puVar2 | 2;
    *(longlong **)(uVar3 + 8 + (longlong)plVar4) = plVar4;
    *puVar1 = *puVar1 | 1;
    if ((*(byte *)puVar1 & 2) != 0) {
      plVar4 = (longlong *)*plVar4;
      block_remove(param_1,plVar4);
      plVar4[1] = plVar4[1] + (*puVar1 & 0xfffffffffffffffc) + 8;
      *(longlong **)((plVar4[1] & 0xfffffffffffffffcU) + 8 + (longlong)plVar4) = plVar4;
    }
    uVar3 = plVar4[1] & 0xfffffffffffffffc;
    if ((*(byte *)(uVar3 + 0x10 + (longlong)plVar4) & 1) != 0) {
      block_remove(param_1,(longlong)plVar4 + uVar3 + 8);
      plVar4[1] = plVar4[1] +
                  (*(ulonglong *)(uVar3 + 0x10 + (longlong)plVar4) & 0xfffffffffffffffc) + 8;
      *(longlong **)((plVar4[1] & 0xfffffffffffffffcU) + 8 + (longlong)plVar4) = plVar4;
    }
    block_insert(param_1,plVar4);
  }
  return;
}



// FUNCTION 1431caa20 tlsf_malloc body=90 status=ok
// SIG undefined tlsf_malloc(void)

void tlsf_malloc(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (((param_2 != 0) && (uVar1 = param_2 + 7U & 0xfffffffffffffff8, uVar1 < 0x100000000)) &&
     (uVar3 = 0x18, 0x18 < uVar1)) {
    uVar3 = uVar1;
  }
  uVar2 = block_locate_free(param_1,uVar3);
  block_prepare_used(param_1,uVar2,uVar3);
  return;
}



// FUNCTION 1431caa80 tlsf_memalign body=249 status=ok
// SIG undefined tlsf_memalign(void)

void tlsf_memalign(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar5 = uVar6;
  if (((param_3 != 0) && (uVar2 = param_3 + 7U & 0xfffffffffffffff8, uVar5 = 0, uVar2 < 0x100000000)
      ) && (uVar5 = 0x18, 0x18 < uVar2)) {
    uVar5 = uVar2;
  }
  lVar3 = param_2 + 0x20 + uVar5;
  if (((lVar3 != 0) && (uVar2 = (param_2 - 1) + lVar3 & ~(param_2 - 1), uVar2 < 0x100000000)) &&
     (uVar6 = 0x18, 0x18 < uVar2)) {
    uVar6 = uVar2;
  }
  if (param_2 < 9) {
    uVar6 = uVar5;
  }
  lVar3 = block_locate_free(param_1,uVar6);
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
    uVar2 = (param_2 - 1) + lVar1 & -param_2;
    uVar6 = uVar2 - lVar1;
    if (uVar6 != 0) {
      if (uVar6 < 0x20) {
        uVar4 = param_2;
        if (param_2 < 0x20 - uVar6) {
          uVar4 = 0x20 - uVar6;
        }
        uVar6 = ((param_2 - 1) + uVar4 + uVar2 & ~(param_2 - 1)) - lVar1;
      }
      if (uVar6 != 0) {
        lVar3 = block_trim_free_leading(param_1,lVar3);
      }
    }
  }
  block_prepare_used(param_1,lVar3,uVar5);
  return;
}



// FUNCTION 1431cab80 tlsf_overhead body=6 status=ok
// SIG undefined tlsf_overhead(void)

undefined8 tlsf_overhead(void)

{
  return 0x1998;
}



// FUNCTION 1431cab90 tlsf_realloc body=549 status=ok
// SIG undefined tlsf_realloc(void)

void * tlsf_realloc(undefined8 param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar5 = 0;
  if (param_2 == (void *)0x0) {
    if (((param_3 != 0) && (uVar9 = param_3 + 7 & 0xfffffffffffffff8, uVar9 < 0x100000000)) &&
       (uVar5 = 0x18, 0x18 < uVar9)) {
      uVar5 = uVar9;
    }
    uVar6 = block_locate_free(param_1,uVar5);
    pvVar4 = (void *)block_prepare_used(param_1,uVar6,uVar5);
    return pvVar4;
  }
  if (param_3 == 0) {
    tlsf_free();
    return (void *)0x0;
  }
  uVar9 = *(ulonglong *)((longlong)param_2 + -8);
  lVar1 = (longlong)param_2 + -0x10;
  uVar7 = param_3 + 7 & 0xfffffffffffffff8;
  uVar10 = uVar9 & 0xfffffffffffffffc;
  uVar3 = *(ulonglong *)(uVar10 + 0x10 + lVar1);
  if (uVar7 < 0x100000000) {
    uVar5 = 0x18;
    if (0x18 < uVar7) {
      uVar5 = uVar7;
    }
    if (uVar5 <= uVar10) goto LAB_1431caccb;
    if (((uVar3 & 1) == 0) || (uVar10 + 8 + (uVar3 & 0xfffffffffffffffc) < uVar5)) {
      pvVar4 = (void *)tlsf_malloc(param_1,param_3);
      if (pvVar4 == (void *)0x0) {
        return (void *)0x0;
      }
      if (uVar10 < param_3) {
        param_3 = uVar10;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_2,param_3);
      tlsf_free(param_1,param_2);
      return pvVar4;
    }
  }
  if (uVar10 < uVar5) {
    if ((uVar3 & 1) != 0) {
      block_remove(param_1,uVar10 + lVar1 + 8);
      *(longlong *)((longlong)param_2 + -8) =
           *(longlong *)((longlong)param_2 + -8) +
           (*(ulonglong *)(uVar10 + lVar1 + 0x10) & 0xfffffffffffffffc) + 8;
      *(longlong *)((*(ulonglong *)((longlong)param_2 + -8) & 0xfffffffffffffffc) + 8 + lVar1) =
           lVar1;
      uVar9 = *(ulonglong *)((longlong)param_2 + -8);
    }
    puVar2 = (ulonglong *)((uVar9 & 0xfffffffffffffffc) + 0x10 + lVar1);
    *puVar2 = *puVar2 & 0xfffffffffffffffd;
    *(ulonglong *)((longlong)param_2 + -8) =
         *(ulonglong *)((longlong)param_2 + -8) & 0xfffffffffffffffe;
    uVar9 = *(ulonglong *)((longlong)param_2 + -8);
  }
LAB_1431caccb:
  if (uVar5 + 0x20 <= (uVar9 & 0xfffffffffffffffc)) {
    lVar8 = (longlong)param_2 + (uVar5 - 8);
    *(ulonglong *)(lVar8 + 8) = *(ulonglong *)(lVar8 + 8) & 3;
    *(ulonglong *)(lVar8 + 8) =
         *(ulonglong *)(lVar8 + 8) | ((uVar9 & 0xfffffffffffffffc) - uVar5) - 8;
    *(ulonglong *)((longlong)param_2 + -8) = *(ulonglong *)((longlong)param_2 + -8) & 3;
    *(ulonglong *)((longlong)param_2 + -8) = *(ulonglong *)((longlong)param_2 + -8) | uVar5;
    uVar5 = *(ulonglong *)(lVar8 + 8) & 0xfffffffffffffffc;
    puVar2 = (ulonglong *)(uVar5 + 0x10 + lVar8);
    *puVar2 = *puVar2 | 2;
    *(longlong *)(uVar5 + 8 + lVar8) = lVar8;
    uVar5 = *(ulonglong *)(lVar8 + 8);
    *(ulonglong *)(lVar8 + 8) = uVar5 & 0xfffffffffffffffd | 1;
    uVar5 = uVar5 & 0xfffffffffffffffc;
    lVar1 = uVar5 + lVar8;
    if ((*(byte *)(uVar5 + 0x10 + lVar8) & 1) != 0) {
      block_remove(param_1,lVar1 + 8);
      *(longlong *)(lVar8 + 8) =
           *(longlong *)(lVar8 + 8) + (*(ulonglong *)(lVar1 + 0x10) & 0xfffffffffffffffc) + 8;
      *(longlong *)((*(ulonglong *)(lVar8 + 8) & 0xfffffffffffffffc) + 8 + lVar8) = lVar8;
    }
    block_insert(param_1,lVar8);
  }
  return param_2;
}



// FUNCTION 1431cadc0 FUN_1431cadc0 body=285 status=ok
// SIG undefined FUN_1431cadc0(void)

undefined8 * FUN_1431cadc0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = (void *)param_1[1];
  *param_1 = &PTR_FUN_145acf798;
  pvVar3 = pvVar2;
  if (pvVar2 != (void *)((longlong)pvVar2 + (ulonglong)*(uint *)(param_1 + 2) * 0x18)) {
    do {
      (**(code **)(*(longlong *)**(undefined8 **)((longlong)pvVar2 + 0x10) + 8))();
      **(undefined8 **)((longlong)pvVar2 + 0x10) = 0;
      lVar1 = *(longlong *)((longlong)pvVar2 + 0x10);
      if (lVar1 != 0) {
        if (*(void **)(lVar1 + 0x10) != (void *)0x0) {
          *(undefined4 *)(lVar1 + 0x18) = 0;
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar1 + 0x10));
          *(undefined8 *)(lVar1 + 0x10) = 0;
          *(undefined4 *)(lVar1 + 0x1c) = 0;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar2 + 0x10));
        *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
      }
      pvVar2 = (void *)((longlong)pvVar2 + 0x18);
      pvVar3 = (void *)param_1[1];
    } while (pvVar2 != (void *)((longlong)pvVar3 + (ulonglong)*(uint *)(param_1 + 2) * 0x18));
  }
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    AK::MemoryMgr::Free(DAT_1467be440,pvVar3);
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  AK::IAkStreamMgr::m_pStreamMgr = (IAkStreamMgr *)0x0;
  *param_1 = &PTR_FUN_144eec1b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1431caee0 AddLanguageChangeObserver body=269 status=ok
// SIG AKRESULT AddLanguageChangeObserver(_func_void_wchar_t_ptr_void_ptr * param_1, void * param_2)

/* enum AKRESULT __cdecl AK::StreamMgr::AddLanguageChangeObserver(void (__cdecl*)(wchar_t const *
   __ptr64 const,void * __ptr64),void * __ptr64) */

AKRESULT __cdecl
AK::StreamMgr::AddLanguageChangeObserver(_func_void_wchar_t_ptr_void_ptr *param_1,void *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
                    /* 0x31caee0  59
                       ?AddLanguageChangeObserver@StreamMgr@AK@@YA?AW4AKRESULT@@P6AXQEB_WPEAX@Z1@Z
                        */
  uVar8 = (ulonglong)DAT_146b52078;
  uVar7 = (ulonglong)DAT_146b5207c;
  uVar5 = uVar8;
  pvVar2 = DAT_146b52070;
  uVar6 = DAT_146b5207c;
  if (uVar7 <= uVar8) {
    uVar6 = DAT_146b5207c + 1;
    uVar7 = (ulonglong)uVar6;
    pvVar2 = MemoryMgr::Malloc(DAT_1467be440,uVar7 << 4);
    if (pvVar2 == (void *)0x0) {
      return 2;
    }
    uVar5 = (ulonglong)DAT_146b52078;
    if ((DAT_146b52070 != (void *)0x0) && (DAT_146b52070 != pvVar2)) {
      if (DAT_146b52078 != 0) {
        lVar3 = 0;
        do {
          uVar1 = ((undefined8 *)(lVar3 + (longlong)DAT_146b52070))[1];
          *(undefined8 *)(lVar3 + (longlong)pvVar2) =
               *(undefined8 *)(lVar3 + (longlong)DAT_146b52070);
          ((undefined8 *)(lVar3 + (longlong)pvVar2))[1] = uVar1;
          uVar5 = uVar5 - 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar5 != 0);
      }
      MemoryMgr::Free(DAT_1467be440,DAT_146b52070);
      uVar5 = (ulonglong)DAT_146b52078;
    }
  }
  DAT_146b5207c = uVar6;
  DAT_146b52070 = pvVar2;
  if (uVar8 < uVar7) {
    DAT_146b52078 = (int)uVar5 + 1;
    puVar4 = (undefined8 *)(uVar5 * 0x10 + (longlong)DAT_146b52070);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = param_1;
      puVar4[1] = param_2;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1431caff0 FUN_1431caff0 body=219 status=ok
// SIG undefined FUN_1431caff0(void)

bool FUN_1431caff0(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  puVar7 = (undefined1 *)0x0;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x1c) <= uVar2) {
    uVar1 = *(uint *)(param_1 + 0x1c) + 8;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1);
    if (pvVar4 == (void *)0x0) goto LAB_1431cb0a6;
    pvVar5 = *(void **)(param_1 + 0x10);
    if ((pvVar5 != (void *)0x0) && (pvVar5 != pvVar4)) {
      uVar3 = *(uint *)(param_1 + 0x18);
      puVar6 = puVar7;
      if ((undefined1 *)(ulonglong)uVar3 != (undefined1 *)0x0) {
        do {
          puVar6[(longlong)pvVar4] = puVar6[*(longlong *)(param_1 + 0x10)];
          puVar6 = puVar6 + 1;
        } while (puVar6 < (undefined1 *)(ulonglong)uVar3);
        pvVar5 = *(void **)(param_1 + 0x10);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar5);
    }
    *(void **)(param_1 + 0x10) = pvVar4;
    *(uint *)(param_1 + 0x1c) = uVar1;
    if (uVar1 <= uVar2) goto LAB_1431cb0a6;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = uVar2 + 1;
  puVar7 = (undefined1 *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x10));
  if (puVar7 != (undefined1 *)0x0) {
    *puVar7 = param_2;
  }
LAB_1431cb0a6:
  return puVar7 != (undefined1 *)0x0;
}



// FUNCTION 1431cb0d0 Create body=121 status=ok
// SIG undefined Create(void)

void AK::StreamMgr::AkDeferredOpenData::Create
               (undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = MemoryMgr::Malloc(DAT_1467be440,0x38);
  if (puVar2 != (undefined4 *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      puVar2[0xd] = puVar2[0xd] & 0xfffffffc;
    }
    else {
      puVar2[0xd] = puVar2[0xd] & 0xfffffffe | 2;
      uVar1 = param_2[1];
      *(undefined8 *)(puVar2 + 2) = *param_2;
      *(undefined8 *)(puVar2 + 4) = uVar1;
      uVar1 = param_2[3];
      *(undefined8 *)(puVar2 + 6) = param_2[2];
      *(undefined8 *)(puVar2 + 8) = uVar1;
      *(undefined8 *)(puVar2 + 10) = param_2[4];
    }
    *puVar2 = param_1;
    puVar2[0xc] = param_3;
  }
  return;
}



// FUNCTION 1431cb150 Create body=209 status=ok
// SIG undefined Create(void)

undefined8 *
AK::StreamMgr::AkDeferredOpenData::Create(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar2 = MemoryMgr::Malloc(DAT_1467be440,0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 6) = param_3;
    if (param_2 == (undefined8 *)0x0) {
      *(uint *)((longlong)puVar2 + 0x34) = *(uint *)((longlong)puVar2 + 0x34) & 0xfffffffd | 1;
    }
    else {
      *(uint *)((longlong)puVar2 + 0x34) = *(uint *)((longlong)puVar2 + 0x34) | 3;
      uVar1 = param_2[1];
      puVar2[1] = *param_2;
      puVar2[2] = uVar1;
      uVar1 = param_2[3];
      puVar2[3] = param_2[2];
      puVar2[4] = uVar1;
      puVar2[5] = param_2[4];
    }
    lVar4 = -1;
    do {
      lVar5 = lVar4;
      lVar4 = lVar5 + 1;
    } while (*(short *)(param_1 + lVar4 * 2) != 0);
    lVar5 = lVar5 + 2;
    pvVar3 = MemoryMgr::Malloc(DAT_1467be440,lVar5 * 2);
    *puVar2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      MemoryMgr::Free(DAT_1467be440,puVar2);
      puVar2 = (undefined8 *)0x0;
    }
    else {
      AKPLATFORM::SafeStrCpy(pvVar3,param_1,lVar5);
    }
  }
  return puVar2;
}



// FUNCTION 1431cb230 Create body=189 status=ok
// SIG IAkStreamMgr * Create(AkStreamMgrSettings * param_1)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class AK::IAkStreamMgr * __ptr64 __cdecl AK::StreamMgr::Create(struct AkStreamMgrSettings const &
   __ptr64) */

IAkStreamMgr * __cdecl AK::StreamMgr::Create(AkStreamMgrSettings *param_1)

{
  bool bVar1;
  IAkStreamMgr *pIVar2;
  
                    /* 0x31cb230  100
                       ?Create@StreamMgr@AK@@YAPEAVIAkStreamMgr@2@AEBUAkStreamMgrSettings@@@Z */
  bVar1 = MemoryMgr::IsInitialized();
  if (bVar1) {
    if (IAkStreamMgr::m_pStreamMgr != (IAkStreamMgr *)0x0) {
      return IAkStreamMgr::m_pStreamMgr;
    }
    _DAT_146b52080 = 0;
    if ((DAT_1467be440 != -1) ||
       (DAT_1467be440 = MemoryMgr::CreatePool((void *)0x0,*(ulong *)param_1,0x20,1,0),
       DAT_1467be440 != -1)) {
      pIVar2 = MemoryMgr::Malloc(DAT_1467be440,0x18);
      if (pIVar2 == (IAkStreamMgr *)0x0) {
        MemoryMgr::DestroyPool(DAT_1467be440);
        return IAkStreamMgr::m_pStreamMgr;
      }
      *(undefined ***)pIVar2 = &PTR_FUN_145acf798;
      *(undefined8 *)(pIVar2 + 8) = 0;
      *(undefined8 *)(pIVar2 + 0x10) = 0;
      IAkStreamMgr::m_pStreamMgr = pIVar2;
      return pIVar2;
    }
  }
  return (IAkStreamMgr *)0x0;
}



// FUNCTION 1431cb2f0 FUN_1431cb2f0 body=500 status=ok
// SIG undefined FUN_1431cb2f0(void)

undefined4
FUN_1431cb2f0(undefined8 param_1,undefined4 param_2,longlong param_3,float *param_4,
             ulonglong param_5,undefined8 *param_6,char param_7)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  char local_res20 [8];
  undefined8 local_28 [2];
  
  if ((*param_4 <= 0.0 && *param_4 != 0.0) || (100 < *(byte *)((longlong)param_4 + 0xd))) {
    return 0x1f;
  }
  uVar5 = 0xffffffff;
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 0x19) = 1;
    uVar5 = 0xffffffff;
    if (*(int *)(param_3 + 0x1c) != -1) {
      uVar5 = *(undefined4 *)(param_3 + 0x1c);
    }
  }
  plVar3 = AK::MemoryMgr::Malloc(DAT_1467be440,0x28);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    local_res20[0] = param_7;
    iVar2 = (**(code **)(*DAT_146b52058 + 8))(DAT_146b52058,param_2,0,param_3,local_res20,plVar3);
    if ((iVar2 == 1) && ((local_res20[0] == '\0' || (0 < *plVar3)))) {
      if ((*(uint *)(plVar3 + 4) < DAT_146b52068) &&
         (lVar1 = *(longlong *)(DAT_146b52060 + (ulonglong)*(uint *)(plVar3 + 4) * 8), lVar1 != 0))
      {
        local_28[0] = 0;
        plVar4 = (longlong *)
                 AK::StreamMgr::CAkDeviceBase::CreateAuto
                           (lVar1,plVar3,uVar5,param_4,param_5,local_28);
        if (plVar4 != (longlong *)0x0) {
          if (local_res20[0] == '\0') {
            iVar2 = AK::StreamMgr::CAkStmTask::SetDeferredFileOpen
                              (plVar4,plVar3,param_2,param_3,param_5 & 0xffffffff00000000);
            if (iVar2 != 1) {
              *(undefined1 *)(plVar4 + 0xf) = 1;
              *(undefined1 *)((longlong)plVar4 + 0x7c) = 0;
              (**(code **)(*plVar4 + 0x10))(plVar4);
              return 2;
            }
          }
          else {
            plVar4[5] = (longlong)plVar3;
            *(undefined1 *)((longlong)plVar4 + 0x79) = 1;
          }
          *param_6 = local_28[0];
          return 1;
        }
        if (local_res20[0] != '\0') {
          (**(code **)(**(longlong **)(lVar1 + 0x428) + 8))(*(longlong **)(lVar1 + 0x428),plVar3);
        }
      }
      AK::MemoryMgr::Free(DAT_1467be440,plVar3);
      return 2;
    }
    AK::MemoryMgr::Free(DAT_1467be440,plVar3);
    if (iVar2 == 0x42) {
      return 0x42;
    }
    return 2;
  }
  return 2;
}



// FUNCTION 1431cb4f0 FUN_1431cb4f0 body=502 status=ok
// SIG undefined FUN_1431cb4f0(void)

undefined4
FUN_1431cb4f0(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,ulonglong param_5,
             undefined8 *param_6,char param_7)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  char local_res10 [8];
  undefined8 local_28 [2];
  
  if (((param_2 == 0) || (*param_4 <= 0.0 && *param_4 != 0.0)) ||
     (100 < *(byte *)((longlong)param_4 + 0xd))) {
    return 0x1f;
  }
  uVar5 = 0xffffffff;
  if (param_3 != 0) {
    uVar5 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined1 *)(param_3 + 0x19) = 1;
  }
  plVar3 = AK::MemoryMgr::Malloc(DAT_1467be440,0x28);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    local_res10[0] = param_7;
    iVar2 = (**(code **)(*DAT_146b52058 + 0x10))(DAT_146b52058,param_2,0,param_3,local_res10,plVar3)
    ;
    if ((iVar2 == 1) && ((local_res10[0] == '\0' || (0 < *plVar3)))) {
      if ((*(uint *)(plVar3 + 4) < DAT_146b52068) &&
         (lVar1 = *(longlong *)(DAT_146b52060 + (ulonglong)*(uint *)(plVar3 + 4) * 8), lVar1 != 0))
      {
        local_28[0] = 0;
        plVar4 = (longlong *)
                 AK::StreamMgr::CAkDeviceBase::CreateAuto
                           (lVar1,plVar3,uVar5,param_4,param_5,local_28);
        if (plVar4 != (longlong *)0x0) {
          if (local_res10[0] == '\0') {
            iVar2 = AK::StreamMgr::CAkStmTask::SetDeferredFileOpen
                              (plVar4,plVar3,param_2,param_3,param_5 & 0xffffffff00000000);
            if (iVar2 != 1) {
              *(undefined1 *)(plVar4 + 0xf) = 1;
              *(undefined1 *)((longlong)plVar4 + 0x7c) = 0;
              (**(code **)(*plVar4 + 0x10))(plVar4);
              return 2;
            }
          }
          else {
            plVar4[5] = (longlong)plVar3;
            *(undefined1 *)((longlong)plVar4 + 0x79) = 1;
          }
          *param_6 = local_28[0];
          return 1;
        }
        if (local_res10[0] != '\0') {
          (**(code **)(**(longlong **)(lVar1 + 0x428) + 8))(*(longlong **)(lVar1 + 0x428),plVar3);
        }
      }
      AK::MemoryMgr::Free(DAT_1467be440,plVar3);
      return 2;
    }
    AK::MemoryMgr::Free(DAT_1467be440,plVar3);
    if (iVar2 == 0x42) {
      return 0x42;
    }
    return 2;
  }
  return 2;
}



// FUNCTION 1431cb6f0 CreateCachingStream body=464 status=ok
// SIG undefined CreateCachingStream(void)

undefined4
AK::StreamMgr::CAkStreamMgr::CreateCachingStream
          (undefined8 param_1,undefined4 param_2,longlong param_3,undefined1 param_4,
          undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char local_res18 [8];
  char *pcVar6;
  ulonglong uVar7;
  undefined8 local_28 [2];
  
  *(undefined1 *)(param_3 + 0x19) = 1;
  plVar4 = MemoryMgr::Malloc(DAT_1467be440,0x28);
  if (plVar4 == (longlong *)0x0) {
    return 2;
  }
  *plVar4 = 0;
  pcVar6 = local_res18;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  local_res18[0] = '\0';
  iVar2 = (**(code **)(*DAT_146b52058 + 8))(DAT_146b52058,param_2,0,param_3,pcVar6,plVar4);
  if (*(int *)(param_3 + 0x20) == 0) {
    iVar2 = 2;
  }
  else if ((iVar2 == 1) && ((local_res18[0] == '\0' || (0 < *plVar4)))) {
    if ((*(uint *)(plVar4 + 4) < DAT_146b52068) &&
       (plVar1 = *(longlong **)(DAT_146b52060 + (ulonglong)*(uint *)(plVar4 + 4) * 8),
       plVar1 != (longlong *)0x0)) {
      local_28[0] = 0;
      uVar7 = CONCAT71((int7)((ulonglong)pcVar6 >> 8),param_4);
      plVar5 = (longlong *)
               (**(code **)(*plVar1 + 0x30))
                         (plVar1,plVar4,param_2,*(int *)(param_3 + 0x20),uVar7,local_28);
      if (plVar5 == (longlong *)0x0) {
        if (local_res18[0] != '\0') {
          (**(code **)(*(longlong *)plVar1[0x85] + 8))((longlong *)plVar1[0x85],plVar4);
        }
        MemoryMgr::Free(DAT_1467be440,plVar4);
        return 2;
      }
      if (local_res18[0] == '\0') {
        iVar2 = CAkStmTask::SetDeferredFileOpen
                          (plVar5,plVar4,param_2,param_3,uVar7 & 0xffffffff00000000);
        if (iVar2 != 1) {
          *(undefined1 *)(plVar5 + 0xf) = 1;
          *(undefined1 *)((longlong)plVar5 + 0x7c) = 0;
          (**(code **)(*plVar5 + 0x10))(plVar5);
          return 2;
        }
      }
      else {
        plVar5[5] = (longlong)plVar4;
        *(undefined1 *)((longlong)plVar5 + 0x79) = 1;
      }
      *param_5 = local_28[0];
      return 1;
    }
    MemoryMgr::Free(DAT_1467be440,plVar4);
    return 2;
  }
  MemoryMgr::Free(DAT_1467be440,plVar4);
  uVar3 = 2;
  if (iVar2 == 0x42) {
    uVar3 = 0x42;
  }
  return uVar3;
}



// FUNCTION 1431cb8c0 FUN_1431cb8c0 body=442 status=ok
// SIG undefined FUN_1431cb8c0(void)

ulonglong FUN_1431cb8c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = (ulonglong)DAT_146b52068;
  uVar5 = 0;
  plVar2 = DAT_146b52060;
  if (DAT_146b52068 != 0) {
    do {
      if (*plVar2 == 0) {
        if ((int)uVar5 != -1) goto LAB_1431cb9d9;
        break;
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      plVar2 = plVar2 + 1;
    } while (uVar6 < DAT_146b52068);
  }
  uVar7 = (ulonglong)DAT_146b5206c;
  uVar5 = uVar4;
  plVar2 = DAT_146b52060;
  uVar6 = DAT_146b5206c;
  if (uVar7 <= uVar4) {
    uVar6 = DAT_146b5206c + 1;
    uVar7 = (ulonglong)uVar6;
    plVar2 = AK::MemoryMgr::Malloc(DAT_1467be440,uVar7 << 3);
    if (plVar2 == (longlong *)0x0) {
      return 0xffffffff;
    }
    uVar5 = (ulonglong)DAT_146b52068;
    uVar8 = (ulonglong)DAT_146b52068;
    if ((DAT_146b52060 != (longlong *)0x0) && (DAT_146b52060 != plVar2)) {
      uVar5 = 0;
      if (uVar8 != 0) {
        do {
          plVar2[uVar5] = DAT_146b52060[uVar5];
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar8);
      }
      AK::MemoryMgr::Free(DAT_1467be440,DAT_146b52060);
      uVar5 = (ulonglong)DAT_146b52068;
    }
  }
  DAT_146b5206c = uVar6;
  DAT_146b52060 = plVar2;
  if (uVar4 < uVar7) {
    DAT_146b52068 = (int)uVar5 + 1;
    if (DAT_146b52060 + uVar5 != (longlong *)0x0) {
      DAT_146b52060[uVar5] = 0;
      uVar5 = (ulonglong)(DAT_146b52068 - 1);
      DAT_146b52060[(ulonglong)DAT_146b52068 - 1] = 0;
LAB_1431cb9d9:
      if ((*(uint *)(param_2 + 0x18) & 1) == 0) {
        if ((*(uint *)(param_2 + 0x18) & 2) == 0) {
          return 0xffffffff;
        }
        pvVar3 = AK::MemoryMgr::Malloc(DAT_1467be440,0x468);
        if (pvVar3 == (void *)0x0) {
          return 0xffffffff;
        }
        plVar2 = (longlong *)
                 AK::StreamMgr::CAkDeviceDeferredLinedUp::CAkDeviceDeferredLinedUp(pvVar3,param_3);
      }
      else {
        pvVar3 = AK::MemoryMgr::Malloc(DAT_1467be440,0x460);
        if (pvVar3 == (void *)0x0) {
          return 0xffffffff;
        }
        plVar2 = (longlong *)AK::StreamMgr::CAkDeviceBlocking::CAkDeviceBlocking(pvVar3,param_3);
      }
      if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2,uVar5);
        if (iVar1 == 1) {
          DAT_146b52060[uVar5] = (longlong)plVar2;
          return uVar5;
        }
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 1431cba80 CreateDevice body=18 status=ok
// SIG ulong CreateDevice(AkDeviceSettings * param_1, IAkLowLevelIOHook * param_2)

/* unsigned long __cdecl AK::StreamMgr::CreateDevice(struct AkDeviceSettings const & __ptr64,class
   AK::StreamMgr::IAkLowLevelIOHook * __ptr64) */

ulong __cdecl AK::StreamMgr::CreateDevice(AkDeviceSettings *param_1,IAkLowLevelIOHook *param_2)

{
  ulong uVar1;
  
                    /* 0x31cba80  101
                       ?CreateDevice@StreamMgr@AK@@YAKAEBUAkDeviceSettings@@PEAVIAkLowLevelIOHook@12@@Z
                        */
  uVar1 = FUN_1431cb8c0(IAkStreamMgr::m_pStreamMgr,param_1,param_2);
  return uVar1;
}



// FUNCTION 1431cbaa0 CreateStd body=437 status=ok
// SIG undefined CreateStd(void)

undefined4
AK::StreamMgr::CAkStreamMgr::CreateStd
          (undefined8 param_1,undefined4 param_2,longlong param_3,int param_4,undefined8 *param_5,
          char param_6)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char local_res18 [8];
  char *pcVar5;
  undefined8 local_28 [2];
  undefined4 uVar6;
  
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 0x19) = 0;
  }
  plVar3 = MemoryMgr::Malloc(DAT_1467be440,0x28);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    pcVar5 = local_res18;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    local_res18[0] = param_6;
    iVar2 = (**(code **)(*DAT_146b52058 + 8))(DAT_146b52058,param_2,param_4,param_3,pcVar5,plVar3);
    uVar6 = (undefined4)((ulonglong)pcVar5 >> 0x20);
    if ((iVar2 == 1) && (((0 < *plVar3 || (local_res18[0] == '\0')) || (param_4 != 0)))) {
      if ((*(uint *)(plVar3 + 4) < DAT_146b52068) &&
         (lVar1 = *(longlong *)(DAT_146b52060 + (ulonglong)*(uint *)(plVar3 + 4) * 8), lVar1 != 0))
      {
        local_28[0] = 0;
        plVar4 = (longlong *)CAkDeviceBase::CreateStd(lVar1,plVar3,param_4,local_28);
        if (plVar4 != (longlong *)0x0) {
          if (local_res18[0] == '\0') {
            iVar2 = CAkStmTask::SetDeferredFileOpen
                              (plVar4,plVar3,param_2,param_3,CONCAT44(uVar6,param_4));
            if (iVar2 != 1) {
              *(undefined1 *)(plVar4 + 0xf) = 1;
              *(undefined1 *)((longlong)plVar4 + 0x7c) = 0;
              (**(code **)(*plVar4 + 0x10))(plVar4);
              return 2;
            }
          }
          else {
            plVar4[5] = (longlong)plVar3;
            *(undefined1 *)((longlong)plVar4 + 0x79) = 1;
          }
          *param_5 = local_28[0];
          return 1;
        }
        if (local_res18[0] != '\0') {
          (**(code **)(**(longlong **)(lVar1 + 0x428) + 8))(*(longlong **)(lVar1 + 0x428),plVar3);
        }
      }
      MemoryMgr::Free(DAT_1467be440,plVar3);
      return 2;
    }
    MemoryMgr::Free(DAT_1467be440,plVar3);
    if (iVar2 == 0x42) {
      return 0x42;
    }
    return 2;
  }
  return 2;
}



// FUNCTION 1431cbc60 CreateStd body=456 status=ok
// SIG undefined CreateStd(void)

undefined4
AK::StreamMgr::CAkStreamMgr::CreateStd
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4,undefined8 *param_5,
          char param_6)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char local_res10 [8];
  char *pcVar5;
  undefined8 local_28 [2];
  undefined4 uVar6;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 0x19) = 0;
  }
  plVar3 = MemoryMgr::Malloc(DAT_1467be440,0x28);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    pcVar5 = local_res10;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    local_res10[0] = param_6;
    iVar2 = (**(code **)(*DAT_146b52058 + 0x10))
                      (DAT_146b52058,param_2,param_4,param_3,pcVar5,plVar3);
    uVar6 = (undefined4)((ulonglong)pcVar5 >> 0x20);
    if ((iVar2 == 1) && (((0 < *plVar3 || (local_res10[0] == '\0')) || (param_4 != 0)))) {
      if ((*(uint *)(plVar3 + 4) < DAT_146b52068) &&
         (lVar1 = *(longlong *)(DAT_146b52060 + (ulonglong)*(uint *)(plVar3 + 4) * 8), lVar1 != 0))
      {
        local_28[0] = 0;
        plVar4 = (longlong *)CAkDeviceBase::CreateStd(lVar1,plVar3,param_4,local_28);
        if (plVar4 != (longlong *)0x0) {
          if (local_res10[0] == '\0') {
            iVar2 = CAkStmTask::SetDeferredFileOpen
                              (plVar4,plVar3,param_2,param_3,CONCAT44(uVar6,param_4));
            if (iVar2 != 1) {
              *(undefined1 *)(plVar4 + 0xf) = 1;
              *(undefined1 *)((longlong)plVar4 + 0x7c) = 0;
              (**(code **)(*plVar4 + 0x10))(plVar4);
              return 2;
            }
          }
          else {
            plVar4[5] = (longlong)plVar3;
            *(undefined1 *)((longlong)plVar4 + 0x79) = 1;
          }
          *param_5 = local_28[0];
          return 1;
        }
        if (local_res10[0] != '\0') {
          (**(code **)(**(longlong **)(lVar1 + 0x428) + 8))(*(longlong **)(lVar1 + 0x428),plVar3);
        }
      }
      MemoryMgr::Free(DAT_1467be440,plVar3);
      return 2;
    }
    MemoryMgr::Free(DAT_1467be440,plVar3);
    if (iVar2 == 0x42) {
      return 0x42;
    }
    return 2;
  }
  return 2;
}



// FUNCTION 1431cbe30 Destroy body=53 status=ok
// SIG undefined Destroy(void)

void AK::StreamMgr::AkDeferredOpenData::Destroy(undefined8 *param_1)

{
  if (((*(byte *)((longlong)param_1 + 0x34) & 1) != 0) && ((void *)*param_1 != (void *)0x0)) {
    MemoryMgr::Free(DAT_1467be440,(void *)*param_1);
  }
  MemoryMgr::Free(DAT_1467be440,param_1);
  return;
}



// FUNCTION 1431cbe70 Destroy body=261 status=ok
// SIG undefined Destroy(void)

void AK::StreamMgr::CAkStreamMgr::Destroy(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_146b52068;
  DAT_146b52058 = 0;
  plVar3 = DAT_146b52060;
  plVar4 = DAT_146b52060;
  if (DAT_146b52060 != DAT_146b52060 + uVar5) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x28))();
        uVar5 = (ulonglong)DAT_146b52068;
        plVar4 = DAT_146b52060;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4 + uVar5);
  }
  if (plVar4 != (longlong *)0x0) {
    DAT_146b52068 = 0;
    MemoryMgr::Free(DAT_1467be440,plVar4);
    DAT_146b52060 = (longlong *)0x0;
    DAT_146b5206c = 0;
  }
  if (DAT_146b52070 != (void *)0x0) {
    DAT_146b52078 = 0;
    MemoryMgr::Free(DAT_1467be440,DAT_146b52070);
    DAT_146b52070 = (void *)0x0;
    DAT_146b5207c = 0;
  }
  bVar2 = MemoryMgr::IsInitialized();
  iVar1 = DAT_1467be440;
  if (((bVar2) && (DAT_1467be440 != -1)) && (param_1 != (undefined8 *)0x0)) {
    (**(code **)*param_1)(param_1,0);
    MemoryMgr::Free(iVar1,param_1);
  }
  MemoryMgr::DestroyPool(DAT_1467be440);
  DAT_1467be440 = 0xffffffff;
  return;
}



// FUNCTION 1431cbf80 DestroyDevice body=83 status=ok
// SIG AKRESULT DestroyDevice(ulong param_1)

/* enum AKRESULT __cdecl AK::StreamMgr::DestroyDevice(unsigned long) */

AKRESULT __cdecl AK::StreamMgr::DestroyDevice(ulong param_1)

{
  longlong *plVar1;
  
                    /* 0x31cbf80  107  ?DestroyDevice@StreamMgr@AK@@YA?AW4AKRESULT@@K@Z */
  if (param_1 < DAT_146b52068) {
    plVar1 = *(longlong **)((ulonglong)param_1 * 8 + DAT_146b52060);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
      *(undefined8 *)((ulonglong)param_1 * 8 + DAT_146b52060) = 0;
      return 1;
    }
  }
  return 0x1f;
}



// FUNCTION 1431cbfe0 Execute body=125 status=ok
// SIG undefined Execute(void)

undefined8 AK::StreamMgr::AkDeferredOpenData::Execute(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char local_res8 [8];
  
  puVar2 = param_1 + 1;
  local_res8[0] = '\x01';
  if ((*(uint *)((longlong)param_1 + 0x34) & 2) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  if ((*(uint *)((longlong)param_1 + 0x34) & 1) == 0) {
    uVar1 = (**(code **)(*DAT_146b52058 + 8))
                      (DAT_146b52058,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 6),puVar2,
                       local_res8,param_2);
  }
  else {
    uVar1 = (**(code **)(*DAT_146b52058 + 0x10))(DAT_146b52058,*param_1);
  }
  if (((int)uVar1 != 1) ||
     (((*param_2 < 1 && (*(int *)(param_1 + 6) == 0)) || (local_res8[0] == '\0')))) {
    uVar1 = 2;
  }
  return uVar1;
}



// FUNCTION 1431cc060 FlushAllCaches body=71 status=ok
// SIG void FlushAllCaches(void)

/* void __cdecl AK::StreamMgr::FlushAllCaches(void) */

void __cdecl AK::StreamMgr::FlushAllCaches(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
                    /* 0x31cc060  122  ?FlushAllCaches@StreamMgr@AK@@YAXXZ */
  uVar3 = 0;
  uVar1 = DAT_146b52068;
  if (DAT_146b52068 != 0) {
    do {
      if (*(longlong *)(DAT_146b52060 + uVar3 * 8) != 0) {
        CAkDeviceBase::FlushCache();
        uVar1 = DAT_146b52068;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 1431cc0b0 ForceCleanup body=109 status=ok
// SIG undefined ForceCleanup(void)

void AK::StreamMgr::CAkStreamMgr::ForceCleanup(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = DAT_146b52068;
  if (DAT_146b52068 != 0) {
    do {
      lVar1 = *(longlong *)(DAT_146b52060 + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_1431cdbe0(lVar1,param_1 == lVar1,param_2);
        uVar4 = DAT_146b52068;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar4);
  }
  return;
}



// FUNCTION 1431cc120 FreeData body=97 status=ok
// SIG undefined FreeData(void)

void AkKeyDataPtrStruct<unsigned_long,AK::StreamMgr::CAkStreamMgr::CachedFileStreamData,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>
     ::FreeData(longlong param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((longlong)pvVar1 + 0x10) != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar1 + 0x18) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar1 + 0x10));
      *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
      *(undefined4 *)((longlong)pvVar1 + 0x1c) = 0;
      pvVar1 = *(void **)(param_1 + 8);
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1431cc190 GetBufferStatusForPinnedFile body=322 status=ok
// SIG undefined GetBufferStatusForPinnedFile(void)

char AK::StreamMgr::CAkStreamMgr::GetBufferStatusForPinnedFile
               (longlong param_1,int param_2,float *param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  uint local_res8 [2];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  *param_3 = 0.0;
  *param_4 = 0;
  piVar4 = *(int **)(param_1 + 8);
  iVar7 = 2;
  piVar1 = piVar4 + (ulonglong)*(uint *)(param_1 + 0x10) * 6;
  for (; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 6) {
  }
  plVar5 = (longlong *)(piVar4 + 2);
  if (piVar4 == piVar1) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    local_res8[0] = 0;
    plVar8 = (longlong *)(*(longlong *)plVar5[1] + -0x80);
    if (*(longlong *)plVar5[1] == 0) {
      plVar8 = (longlong *)0x0;
    }
    iVar7 = (**(code **)(plVar8[0x10] + 0x50))(plVar8 + 0x10,local_res8);
    if (iVar7 != 2) {
      uVar3 = (**(code **)(*plVar8 + 0x40))(plVar8);
      uVar6 = (ulonglong)uVar3;
      if (uVar3 != 0) {
        (**(code **)(plVar8[0x10] + 0x10))(plVar8 + 0x10,local_48);
        if ((local_38 != 0) && (local_38 <= uVar6)) {
          uVar6 = local_38 & 0xffffffff;
        }
        *param_3 = ((float)local_res8[0] / (float)uVar6) * 100.0;
        if ((local_res8[0] < (uint)uVar6) &&
           ((uint)(*(int *)(plVar8[0xc] + 0x43c) - *(int *)(plVar8[0xc] + 0x440)) <
            (uint)uVar6 - local_res8[0])) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
        *param_4 = uVar2;
      }
    }
  }
  return (iVar7 == 2) + '\x01';
}



// FUNCTION 1431cc2e0 GetCurrentLanguage body=8 status=ok
// SIG wchar_t * GetCurrentLanguage(void)

/* wchar_t const * __ptr64 __cdecl AK::StreamMgr::GetCurrentLanguage(void) */

wchar_t * __cdecl AK::StreamMgr::GetCurrentLanguage(void)

{
                    /* 0x31cc2e0  140  ?GetCurrentLanguage@StreamMgr@AK@@YAPEB_WXZ */
  return (wchar_t *)&DAT_146b52080;
}



// FUNCTION 1431cc2f0 GetDefaultDeviceSettings body=80 status=ok
// SIG void GetDefaultDeviceSettings(AkDeviceSettings * param_1)

/* void __cdecl AK::StreamMgr::GetDefaultDeviceSettings(struct AkDeviceSettings & __ptr64) */

void __cdecl AK::StreamMgr::GetDefaultDeviceSettings(AkDeviceSettings *param_1)

{
                    /* 0x31cc2f0  144
                       ?GetDefaultDeviceSettings@StreamMgr@AK@@YAXAEAUAkDeviceSettings@@@Z */
  *(undefined4 *)(param_1 + 8) = 0x200000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)(param_1 + 0x14) = 0x4000;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0x20000;
  *(undefined8 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x43be0000;
  *(undefined4 *)(param_1 + 0x2c) = 8;
  param_1[0x30] = (AkDeviceSettings)0x0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  return;
}



// FUNCTION 1431cc340 GetDefaultSettings body=7 status=ok
// SIG void GetDefaultSettings(AkStreamMgrSettings * param_1)

/* void __cdecl AK::StreamMgr::GetDefaultSettings(struct AkStreamMgrSettings & __ptr64) */

void __cdecl AK::StreamMgr::GetDefaultSettings(AkStreamMgrSettings *param_1)

{
                    /* 0x31cc340  148
                       ?GetDefaultSettings@StreamMgr@AK@@YAXAEAUAkStreamMgrSettings@@@Z */
  *(undefined4 *)param_1 = 0x10000;
  return;
}



// FUNCTION 1431cc350 GetFileLocationResolver body=8 status=ok
// SIG IAkFileLocationResolver * GetFileLocationResolver(void)

/* class AK::StreamMgr::IAkFileLocationResolver * __ptr64 __cdecl
   AK::StreamMgr::GetFileLocationResolver(void) */

IAkFileLocationResolver * __cdecl AK::StreamMgr::GetFileLocationResolver(void)

{
                    /* 0x31cc350  159
                       ?GetFileLocationResolver@StreamMgr@AK@@YAPEAVIAkFileLocationResolver@12@XZ */
  return DAT_146b52058;
}



// FUNCTION 1431cc360 GetPoolID body=7 status=ok
// SIG long GetPoolID(void)

/* long __cdecl AK::StreamMgr::GetPoolID(void) */

long __cdecl AK::StreamMgr::GetPoolID(void)

{
                    /* 0x31cc360  192  ?GetPoolID@StreamMgr@AK@@YAJXZ */
  return DAT_1467be440;
}



// FUNCTION 1431cc370 FUN_1431cc370 body=436 status=ok
// SIG undefined FUN_1431cc370(void)

undefined8 FUN_1431cc370(longlong *param_1,uint param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  char cVar11;
  char *pcVar12;
  uint *puVar13;
  wchar_t local_38 [16];
  
  puVar4 = (uint *)param_1[1];
  uVar10 = (ulonglong)param_2;
  puVar13 = puVar4 + (ulonglong)*(uint *)(param_1 + 2) * 6;
  for (; (puVar4 != puVar13 && (*puVar4 != param_2)); puVar4 = puVar4 + 6) {
  }
  puVar9 = puVar4 + 2;
  if (puVar4 == puVar13) {
    puVar9 = (uint *)0x0;
  }
  if (puVar9 == (uint *)0x0) {
    lVar7 = FUN_1431cc640(param_1 + 1);
    if (lVar7 != 0) {
      puVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
      *(undefined8 **)(lVar7 + 8) = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8 = *(undefined8 **)(lVar7 + 8);
        iVar3 = (**(code **)(*param_1 + 0x58))(param_1,uVar10,param_3,param_4,puVar8);
        if (iVar3 == 1) {
          FUN_1431caff0(puVar8,param_4);
          swprintf_s(local_38,0xb,L"%u",uVar10);
          (**(code **)(*(longlong *)*puVar8 + 0x40))((longlong *)*puVar8,local_38);
          (**(code **)(*(longlong *)*puVar8 + 0x60))();
          return 1;
        }
        AkKeyDataPtrStruct<unsigned_long,AK::StreamMgr::CAkStreamMgr::CachedFileStreamData,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>
        ::FreeData(lVar7);
      }
      FUN_1431cc9f0(param_1 + 1,uVar10);
    }
    uVar6 = 2;
  }
  else {
    plVar1 = *(longlong **)(puVar9 + 2);
    cVar2 = FUN_1431caff0(plVar1,param_4);
    if (cVar2 == '\0') {
      uVar6 = 2;
    }
    else {
      pcVar5 = (char *)plVar1[2];
      puVar13 = (uint *)(*plVar1 + -0x80);
      if (*plVar1 == 0) {
        puVar13 = (uint *)0x0;
      }
      pcVar12 = pcVar5 + *(uint *)(plVar1 + 3);
      cVar2 = '\0';
      for (; pcVar5 != pcVar12; pcVar5 = pcVar5 + 1) {
        cVar11 = *pcVar5;
        if (*pcVar5 <= cVar2) {
          cVar11 = cVar2;
        }
        cVar2 = cVar11;
      }
      AK::StreamMgr::CAkDeviceBase::UpdateCachingPriority(*(undefined8 *)(puVar13 + 0x18),puVar13);
      uVar6 = 1;
    }
  }
  return uVar6;
}



// FUNCTION 1431cc530 RemoveLanguageChangeObserver body=156 status=ok
// SIG void RemoveLanguageChangeObserver(void * param_1)

/* void __cdecl AK::StreamMgr::RemoveLanguageChangeObserver(void * __ptr64) */

void __cdecl AK::StreamMgr::RemoveLanguageChangeObserver(void *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
                    /* 0x31cc530  360  ?RemoveLanguageChangeObserver@StreamMgr@AK@@YAXPEAX@Z */
  uVar2 = (ulonglong)DAT_146b52078;
  puVar1 = DAT_146b52070;
  puVar6 = DAT_146b52070;
  uVar3 = DAT_146b52078;
  if (DAT_146b52070 != DAT_146b52070 + uVar2 * 2) {
    do {
      if ((void *)puVar1[1] == param_1) {
        if (puVar1 < puVar6 + uVar2 * 2 + -2) {
          puVar4 = puVar1 + 2;
          puVar5 = puVar1;
          for (uVar2 = ((ulonglong)((longlong)(puVar6 + uVar2 * 2 + -2) + (-1 - (longlong)puVar1))
                        >> 3 & 0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe; puVar6 = DAT_146b52070,
              uVar3 = DAT_146b52078, uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        uVar3 = uVar3 - 1;
        DAT_146b52078 = uVar3;
      }
      else {
        puVar1 = puVar1 + 2;
      }
      uVar2 = (ulonglong)uVar3;
    } while (puVar1 != puVar6 + uVar2 * 2);
  }
  return;
}



// FUNCTION 1431cc5d0 SafeStrCpy body=109 status=ok
// SIG undefined SafeStrCpy(void)

void AKPLATFORM::SafeStrCpy(wchar_t *param_1,wchar_t *param_2,rsize_t param_3)

{
  longlong lVar1;
  ulonglong _MaxCount;
  longlong lVar2;
  
  _MaxCount = param_3 - 1;
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (param_2[lVar1] != L'\0');
  if (lVar2 + 2U <= _MaxCount) {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (param_2[lVar1] != L'\0');
    _MaxCount = lVar2 + 2;
  }
  wcsncpy_s(param_1,param_3,param_2,_MaxCount);
  param_1[_MaxCount] = L'\0';
  return;
}



// FUNCTION 1431cc640 FUN_1431cc640 body=334 status=ok
// SIG undefined FUN_1431cc640(void)

int * FUN_1431cc640(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar12;
  
  piVar5 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  piVar12 = piVar5 + (ulonglong)uVar2 * 6;
  for (; (piVar5 != piVar12 && (*piVar5 != param_2)); piVar5 = piVar5 + 6) {
  }
  piVar7 = (int *)0x0;
  piVar10 = piVar5 + 2;
  if (piVar5 == piVar12) {
    piVar10 = piVar7;
  }
  if (piVar10 != (int *)0x0) {
    return piVar10;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    puVar6 = AK::MemoryMgr::Malloc(DAT_1467be440,(ulonglong)uVar1 * 0x18);
    if (puVar6 == (undefined8 *)0x0) {
      return (int *)0x0;
    }
    puVar9 = (undefined8 *)*param_1;
    if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar6)) {
      uVar11 = (ulonglong)*(uint *)(param_1 + 1);
      puVar8 = puVar6;
      if (uVar11 != 0) {
        do {
          if (puVar8 != (undefined8 *)0x0) {
            puVar8[2] = 0;
          }
          lVar3 = *param_1;
          puVar9 = (undefined8 *)((longlong)puVar8 + (lVar3 - (longlong)puVar6));
          uVar4 = puVar9[1];
          *puVar8 = *puVar9;
          puVar8[1] = uVar4;
          puVar8[2] = *(undefined8 *)((longlong)puVar8 + lVar3 + (0x10 - (longlong)puVar6));
          uVar11 = uVar11 - 1;
          puVar8 = puVar8 + 3;
        } while (uVar11 != 0);
        puVar9 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(DAT_1467be440,puVar9);
    }
    *param_1 = (longlong)puVar6;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    piVar12 = piVar7;
    if (uVar1 <= uVar2) goto LAB_1431cc76c;
  }
  piVar12 = (int *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  if (piVar12 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar12[4] = 0;
  piVar12[5] = 0;
LAB_1431cc76c:
  if (piVar12 != (int *)0x0) {
    *piVar12 = param_2;
    piVar7 = piVar12 + 2;
  }
  return piVar7;
}



// FUNCTION 1431cc790 SetCurrentLanguage body=249 status=ok
// SIG AKRESULT SetCurrentLanguage(wchar_t * param_1)

/* enum AKRESULT __cdecl AK::StreamMgr::SetCurrentLanguage(wchar_t const * __ptr64) */

AKRESULT __cdecl AK::StreamMgr::SetCurrentLanguage(wchar_t *param_1)

{
  ulonglong uVar1;
  longlong lVar3;
  undefined8 *puVar5;
  uint uVar6;
  rsize_t _MaxCount;
  ulonglong uVar2;
  longlong lVar4;
  
                    /* 0x31cc790  399  ?SetCurrentLanguage@StreamMgr@AK@@YA?AW4AKRESULT@@PEB_W@Z */
  if (param_1 == (wchar_t *)0x0) {
    return 2;
  }
  uVar1 = 0xffffffffffffffff;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 + 1;
  } while (param_1[uVar1] != L'\0');
  if ((uVar1 < 0x20) && ((uVar1 == 0 || ((param_1[uVar2] != L'/' && (param_1[uVar2] != L'\\')))))) {
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (param_1[lVar3] != L'\0');
    lVar3 = -1;
    if (lVar4 + 2U < 0x20) {
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (param_1[lVar3] != L'\0');
      _MaxCount = lVar4 + 2;
    }
    else {
      _MaxCount = 0x1f;
    }
    wcsncpy_s((wchar_t *)&DAT_146b52080,0x20,param_1,_MaxCount);
    *(undefined2 *)(&DAT_146b52080 + _MaxCount * 2) = 0;
    uVar6 = DAT_146b52078;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      puVar5 = (undefined8 *)((ulonglong)uVar6 * 0x10 + DAT_146b52070);
      (*(code *)*puVar5)(&DAT_146b52080,puVar5[1]);
    }
    return 1;
  }
  return 2;
}



// FUNCTION 1431cc890 SetFileLocationResolver body=8 status=ok
// SIG void SetFileLocationResolver(IAkFileLocationResolver * param_1)

/* void __cdecl AK::StreamMgr::SetFileLocationResolver(class AK::StreamMgr::IAkFileLocationResolver
   * __ptr64) */

void __cdecl AK::StreamMgr::SetFileLocationResolver(IAkFileLocationResolver *param_1)

{
                    /* 0x31cc890  403
                       ?SetFileLocationResolver@StreamMgr@AK@@YAXPEAVIAkFileLocationResolver@12@@Z
                        */
  DAT_146b52058 = param_1;
  return;
}



// FUNCTION 1431cc8a0 FUN_1431cc8a0 body=321 status=ok
// SIG undefined FUN_1431cc8a0(void)

undefined8 FUN_1431cc8a0(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  char cVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  
  piVar4 = *(int **)(param_1 + 8);
  piVar11 = piVar4 + (ulonglong)*(uint *)(param_1 + 0x10) * 6;
  for (; (piVar4 != piVar11 && (*piVar4 != param_2)); piVar4 = piVar4 + 6) {
  }
  piVar9 = piVar4 + 2;
  if (piVar4 == piVar11) {
    piVar9 = (int *)0x0;
  }
  if (piVar9 == (int *)0x0) {
    uVar6 = 2;
  }
  else {
    plVar2 = *(longlong **)(piVar9 + 2);
    pcVar8 = (char *)plVar2[2];
    uVar10 = *(uint *)(plVar2 + 3);
    for (pcVar5 = pcVar8; pcVar5 != pcVar8 + uVar10; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == param_3) {
        if (1 < uVar10) {
          *pcVar5 = pcVar8[(ulonglong)uVar10 - 1];
          uVar10 = *(uint *)(plVar2 + 3);
        }
        *(uint *)(plVar2 + 3) = uVar10 - 1;
        break;
      }
    }
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 8))();
        *plVar2 = 0;
      }
      AkKeyDataPtrStruct<unsigned_long,AK::StreamMgr::CAkStreamMgr::CachedFileStreamData,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>
      ::FreeData(piVar9);
      FUN_1431cc9f0(param_1 + 8,param_2);
      uVar6 = 1;
    }
    else {
      pcVar8 = (char *)plVar2[2];
      piVar11 = (int *)(*plVar2 + -0x80);
      if (*plVar2 == 0) {
        piVar11 = (int *)0x0;
      }
      pcVar5 = pcVar8 + *(uint *)(plVar2 + 3);
      cVar3 = '\0';
      for (; pcVar8 != pcVar5; pcVar8 = pcVar8 + 1) {
        cVar7 = *pcVar8;
        if (*pcVar8 <= cVar3) {
          cVar7 = cVar3;
        }
        cVar3 = cVar7;
      }
      AK::StreamMgr::CAkDeviceBase::UpdateCachingPriority
                (*(undefined8 *)(piVar11 + 0x18),piVar11,cVar3);
      uVar6 = 2;
    }
  }
  return uVar6;
}



// FUNCTION 1431cc9f0 FUN_1431cc9f0 body=126 status=ok
// SIG undefined FUN_1431cc9f0(void)

void FUN_1431cc9f0(undefined8 *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  piVar3 = piVar4 + (ulonglong)uVar2 * 6;
  if (piVar4 != piVar3) {
    do {
      if (*piVar4 == param_2) break;
      piVar4 = piVar4 + 6;
    } while (piVar4 != piVar3);
    if (piVar4 != piVar3) {
      if (piVar4 < piVar3 + -6) {
        uVar1 = ((ulonglong)((longlong)(piVar3 + -6) + (-1 - (longlong)piVar4)) / 0x18 + 1) * 3 &
                0x1fffffffffffffff;
        piVar3 = piVar4 + 6;
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined8 *)piVar4 = *(undefined8 *)piVar3;
          piVar3 = piVar3 + 2;
          piVar4 = piVar4 + 2;
        }
        uVar2 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar2 - 1;
    }
  }
  return;
}



// FUNCTION 1431cca70 FUN_1431cca70 body=190 status=ok
// SIG undefined FUN_1431cca70(void)

undefined8 FUN_1431cca70(longlong param_1,int param_2,char param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  piVar3 = *(int **)(param_1 + 8);
  piVar8 = piVar3 + (ulonglong)*(uint *)(param_1 + 0x10) * 6;
  for (; (piVar3 != piVar8 && (*piVar3 != param_2)); piVar3 = piVar3 + 6) {
  }
  piVar6 = piVar3 + 2;
  if (piVar3 == piVar8) {
    piVar6 = (int *)0x0;
  }
  if (piVar6 != (int *)0x0) {
    plVar1 = *(longlong **)(piVar6 + 2);
    pcVar5 = (char *)plVar1[2];
    pcVar7 = pcVar5 + *(uint *)(plVar1 + 3);
    for (; pcVar5 != pcVar7; pcVar5 = pcVar5 + 1) {
      if (*pcVar5 == param_4) {
        *pcVar5 = param_3;
        pcVar5 = (char *)plVar1[2];
        piVar8 = (int *)(*plVar1 + -0x80);
        if (*plVar1 == 0) {
          piVar8 = (int *)0x0;
        }
        pcVar7 = pcVar5 + *(uint *)(plVar1 + 3);
        cVar2 = '\0';
        for (; pcVar5 != pcVar7; pcVar5 = pcVar5 + 1) {
          cVar4 = *pcVar5;
          if (*pcVar5 <= cVar2) {
            cVar4 = cVar2;
          }
          cVar2 = cVar4;
        }
        AK::StreamMgr::CAkDeviceBase::UpdateCachingPriority
                  (*(undefined8 *)(piVar8 + 0x18),piVar8,cVar2);
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 1431ccb30 CAkAutoStmBase body=166 status=ok
// SIG undefined CAkAutoStmBase(void)

undefined8 * AK::StreamMgr::CAkAutoStmBase::CAkAutoStmBase(undefined8 *param_1)

{
  CAkClientThreadAware::CAkClientThreadAware();
  *param_1 = &PTR__scalar_deleting_destructor__145acf8b8;
  param_1[4] = 0;
  param_1[5] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  param_1[0xd] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145acf9f0;
  param_1[0x10] = &PTR_LAB_145acfa80;
  *(undefined4 *)((longlong)param_1 + 0x77) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x75) = 1;
  return param_1;
}



// FUNCTION 1431ccbe0 CAkDeviceBase body=119 status=ok
// SIG undefined CAkDeviceBase(void)

undefined8 * AK::StreamMgr::CAkDeviceBase::CAkDeviceBase(undefined8 *param_1,undefined8 param_2)

{
  CAkIOThread::CAkIOThread();
  *param_1 = &PTR__scalar_deleting_destructor__145acf860;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  CAkIOMemMgr::CAkIOMemMgr(param_1 + 0x18);
  param_1[0x85] = param_2;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return param_1;
}



// FUNCTION 1431ccc60 CAkStdStmBase body=165 status=ok
// SIG undefined CAkStdStmBase(void)

undefined8 * AK::StreamMgr::CAkStdStmBase::CAkStdStmBase(undefined8 *param_1)

{
  CAkClientThreadAware::CAkClientThreadAware();
  *param_1 = &PTR__scalar_deleting_destructor__145acf8b8;
  param_1[4] = 0;
  param_1[5] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  param_1[0xd] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145acf920;
  param_1[0x10] = &PTR_LAB_145acf988;
  *(undefined4 *)((longlong)param_1 + 0x77) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7b) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  *(undefined2 *)((longlong)param_1 + 0x75) = 0;
  return param_1;
}



// FUNCTION 1431ccd10 ~CAkAutoStmBase body=75 status=ok
// SIG undefined ~CAkAutoStmBase(void)

void AK::StreamMgr::CAkAutoStmBase::~CAkAutoStmBase(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf9f0;
  param_1[0x10] = &PTR_LAB_145acfa80;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    CAkIOThread::AutoSemDecr(param_1[0xc]);
  }
  param_1[0x10] = &PTR_FUN_144d4f688;
  CAkStmTask::~CAkStmTask(param_1);
  return;
}



// FUNCTION 1431ccd60 ~CAkDeviceBase body=57 status=ok
// SIG undefined ~CAkDeviceBase(void)

void AK::StreamMgr::CAkDeviceBase::~CAkDeviceBase(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf860;
  CAkIOMemMgr::~CAkIOMemMgr(param_1 + 0x18);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  CAkIOThread::~CAkIOThread(param_1);
  return;
}



// FUNCTION 1431ccda0 ~CAkStdStmBase body=75 status=ok
// SIG undefined ~CAkStdStmBase(void)

void AK::StreamMgr::CAkStdStmBase::~CAkStdStmBase(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf920;
  param_1[0x10] = &PTR_LAB_145acf988;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    CAkIOThread::StdSemDecr(param_1[0xc]);
  }
  param_1[0x10] = &PTR_FUN_145acf7f8;
  CAkStmTask::~CAkStmTask(param_1);
  return;
}



// FUNCTION 1431ccdf0 ~CAkStmTask body=131 status=ok
// SIG undefined ~CAkStmTask(void)

void AK::StreamMgr::CAkStmTask::~CAkStmTask(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf8b8;
  if (*(char *)((longlong)param_1 + 0x79) != '\0') {
    (**(code **)(**(longlong **)(param_1[0xc] + 0x428) + 8))
              (*(longlong **)(param_1[0xc] + 0x428),param_1[5]);
  }
  if (param_1[4] != 0) {
    AkDeferredOpenData::Destroy();
    param_1[4] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    MemoryMgr::Free(DAT_1467be440,(void *)param_1[0xd]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    MemoryMgr::Free(DAT_1467be440,(void *)param_1[5]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  CAkClientThreadAware::~CAkClientThreadAware(param_1);
  return;
}



// FUNCTION 1431cce90 `scalar_deleting_destructor' body=109 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkAutoStmBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf9f0;
  param_1[0x10] = &PTR_LAB_145acfa80;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    CAkIOThread::AutoSemDecr(param_1[0xc]);
  }
  param_1[0x10] = &PTR_FUN_144d4f688;
  CAkStmTask::~CAkStmTask(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1431ccf00 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkDeviceBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf860;
  CAkIOMemMgr::~CAkIOMemMgr(param_1 + 0x18);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  CAkIOThread::~CAkIOThread(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x448);
  }
  return param_1;
}



// FUNCTION 1431ccf60 `scalar_deleting_destructor' body=109 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
AK::StreamMgr::CAkStdStmBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acf920;
  param_1[0x10] = &PTR_LAB_145acf988;
  if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
    CAkIOThread::StdSemDecr(param_1[0xc]);
  }
  param_1[0x10] = &PTR_FUN_145acf7f8;
  CAkStmTask::~CAkStmTask(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1431ccfd0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AK::StreamMgr::CAkStmTask::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~CAkStmTask();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1431cd010 FUN_1431cd010 body=43 status=ok
// SIG undefined FUN_1431cd010(void)

undefined8 * FUN_1431cd010(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acf7f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1431cd040 AddMemView body=182 status=ok
// SIG undefined AddMemView(void)

void AK::StreamMgr::CAkAutoStmBase::AddMemView(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  
  if (((param_3 != '\0') && (*(char *)(param_1 + 0x78) == '\0')) &&
     (*(char *)(param_1 + 0xd3) == '\0')) {
    *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffffb;
    *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 3;
    *param_2 = 0;
    if (*(longlong *)(param_1 + 200) == 0) {
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
      *(undefined8 **)(param_1 + 200) = param_2;
      *(undefined8 **)(param_1 + 0xc0) = param_2;
      return;
    }
    **(undefined8 **)(param_1 + 0xc0) = param_2;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    *(undefined8 **)(param_1 + 0xc0) = param_2;
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x60);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  FUN_1431cd600(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001431cd0ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  return;
}



// FUNCTION 1431cd100 AddMemView body=241 status=ok
// SIG undefined AddMemView(void)

void AK::StreamMgr::CAkStdStmBase::AddMemView(longlong param_1,void *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  if (((param_3 != '\0') && (*(char *)(param_1 + 0x78) == '\0')) && (*(int *)(param_1 + 0xb8) != 4))
  {
    *(undefined1 *)(param_1 + 0x77) = 0;
    *(undefined1 *)(param_1 + 0xbc) = 1;
    uVar5 = *(int *)(*(longlong *)((longlong)param_2 + 8) + 0x18) -
            *(int *)((longlong)param_2 + 0x10);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x430);
    if (uVar1 < uVar5) {
      *(undefined1 *)(param_1 + 0xbc) = 0;
      uVar5 = uVar1;
    }
    if ((*(char *)(param_1 + 0x76) == '\0') &&
       ((**(longlong **)(param_1 + 0x28) - (ulonglong)*(uint *)((longlong)param_2 + 0x10)) -
        **(longlong **)((longlong)param_2 + 8) <= (ulonglong)uVar5)) {
      *(undefined1 *)(param_1 + 0x77) = 1;
      *(undefined1 *)(param_1 + 0xbc) = 1;
      *(int *)(param_1 + 0xa0) =
           *(int *)(param_1 + 0xa0) +
           (((int)**(longlong **)(param_1 + 0x28) - (*(int **)((longlong)param_2 + 8))[6]) -
           **(int **)((longlong)param_2 + 8));
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
  lVar3 = *(longlong *)((longlong)param_2 + 8);
  lVar4 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  if (lVar3 != 0) {
    CAkIOMemMgr::DestroyTempBlock(lVar4 + 0xc0,param_1 + 0x88);
  }
  MemoryMgr::Free(DAT_1467be440,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001431cd1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
  return;
}



// FUNCTION 1431cd200 ClearStreams body=74 status=ok
// SIG undefined ClearStreams(void)

undefined1 AK::StreamMgr::CAkDeviceBase::ClearStreams(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_1431cd250(param_1,param_1 + 0x78);
  cVar2 = FUN_1431cd250(param_1,param_1 + 0x88);
  if ((cVar1 != '\0') && (cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1431cd250 FUN_1431cd250 body=195 status=ok
// SIG undefined FUN_1431cd250(void)

undefined8 FUN_1431cd250(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  long lVar3;
  longlong *plVar4;
  char cVar5;
  
  plVar1 = *(longlong **)(param_2 + 8);
  plVar4 = (longlong *)0x0;
  while (plVar2 = plVar4, plVar4 = plVar1, plVar4 != (longlong *)0x0) {
    if ((char)plVar4[0xf] == '\0') {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      plVar1 = (longlong *)plVar4[3];
    }
    else {
      cVar5 = (**(code **)(*plVar4 + 8))();
      plVar1 = (longlong *)plVar4[3];
      if (cVar5 != '\0') {
        if (plVar4 == *(longlong **)(param_2 + 8)) {
          *(longlong **)(param_2 + 8) = plVar1;
        }
        else {
          plVar2[3] = (longlong)plVar1;
        }
        lVar3 = DAT_1467be440;
        (**(code **)*plVar4)(plVar4,0);
        AK::MemoryMgr::Free(lVar3,plVar4);
        plVar4 = plVar2;
      }
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    return 0;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  return 1;
}



// FUNCTION 1431cd320 CreateAuto body=134 status=ok
// SIG undefined CreateAuto(void)

longlong AK::StreamMgr::CAkDeviceBase::CreateAuto(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x40))();
  if (lVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
    if (param_1[0x10] == 0) {
      param_1[0x10] = lVar1;
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    else {
      *(longlong *)(lVar1 + 0x18) = param_1[0x10];
      param_1[0x10] = lVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  }
  return lVar1;
}



// FUNCTION 1431cd3b0 CreateCachingStream body=189 status=ok
// SIG undefined CreateCachingStream(void)

longlong *
AK::StreamMgr::CAkDeviceBase::CreateCachingStream
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x40))();
  if (plVar1 != (longlong *)0x0) {
    *(undefined1 *)((longlong)plVar1 + 0x7b) = 1;
    (**(code **)(*plVar1 + 0x38))(plVar1,param_4);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
    if (param_1[0x12] == 0) {
      param_1[0x12] = (longlong)plVar1;
      plVar1[3] = 0;
    }
    else {
      plVar1[3] = param_1[0x12];
      param_1[0x12] = (longlong)plVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  }
  return plVar1;
}



// FUNCTION 1431cd470 CreateStd body=113 status=ok
// SIG undefined CreateStd(void)

longlong AK::StreamMgr::CAkDeviceBase::CreateStd(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x38))();
  if (lVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
    if (param_1[0x10] == 0) {
      param_1[0x10] = lVar1;
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    else {
      *(longlong *)(lVar1 + 0x18) = param_1[0x10];
      param_1[0x10] = lVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  }
  return lVar1;
}



// FUNCTION 1431cd4f0 Destroy body=186 status=ok
// SIG undefined Destroy(void)

void AK::StreamMgr::CAkAutoStmBase::Destroy(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  *(undefined1 *)(param_1 + -8) = 1;
  *(undefined1 *)(param_1 + -4) = 0;
  cVar7 = *(char *)(param_1 + 0x50);
  puVar5 = *(undefined8 **)(param_1 + 0x48);
  if (cVar7 != '\0') {
    iVar8 = *(int *)(param_1 + 0x28);
    do {
      plVar3 = (longlong *)puVar5[1];
      uVar1 = *(uint *)(puVar5 + 2);
      uVar2 = *(uint *)(param_1 + 0x20);
      lVar4 = *plVar3;
      if ((lVar4 + (ulonglong)uVar1 < (ulonglong)uVar2) &&
         ((ulonglong)uVar2 < (ulonglong)*(uint *)(plVar3 + 3) + lVar4)) {
        iVar6 = (uVar2 - uVar1) - (int)lVar4;
      }
      else {
        iVar6 = (int)plVar3[3] - uVar1;
      }
      iVar8 = iVar8 + iVar6;
      cVar7 = cVar7 + -1;
      *(int *)(param_1 + 0x28) = iVar8;
      *(char *)(param_1 + 0x50) = cVar7;
      puVar5 = (undefined8 *)*puVar5;
    } while (cVar7 != '\0');
  }
  FUN_1431cda40(param_1 + -0x80);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001431cd5a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x50));
  return;
}



// FUNCTION 1431cd5b0 Destroy body=72 status=ok
// SIG undefined Destroy(void)

void AK::StreamMgr::CAkDeviceBase::Destroy(undefined8 *param_1)

{
  long lVar1;
  
  CAkIOThread::Term();
  CAkIOMemMgr::Term(param_1 + 0x18);
  lVar1 = DAT_1467be440;
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    MemoryMgr::Free(lVar1,param_1);
  }
  return;
}



// FUNCTION 1431cd600 FUN_1431cd600 body=121 status=ok
// SIG undefined FUN_1431cd600(void)

void FUN_1431cd600(longlong param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x10);
  plVar3 = *(longlong **)((longlong)param_2 + 8);
  uVar2 = *(uint *)(param_1 + 0xa0);
  lVar4 = *plVar3;
  if ((lVar4 + (ulonglong)uVar1 < (ulonglong)uVar2) &&
     ((ulonglong)uVar2 < (ulonglong)*(uint *)(plVar3 + 3) + lVar4)) {
    iVar6 = (uVar2 - uVar1) - (int)lVar4;
  }
  else {
    iVar6 = (int)plVar3[3] - uVar1;
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar6;
  lVar4 = *(longlong *)((longlong)param_2 + 8);
  lVar5 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  if (lVar4 != 0) {
    FUN_1431d4410(lVar5 + 0xc0);
  }
  AK::MemoryMgr::Free(DAT_1467be440,param_2);
  return;
}



// FUNCTION 1431cd700 EnsureFileIsOpen body=100 status=ok
// SIG undefined EnsureFileIsOpen(void)

int AK::StreamMgr::CAkStmTask::EnsureFileIsOpen(longlong *param_1)

{
  int iVar1;
  
  if ((param_1[4] != 0) && ((char)param_1[0xf] == '\0')) {
    iVar1 = AkDeferredOpenData::Execute(param_1[4],param_1[5]);
    if (iVar1 == 1) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    if (param_1[4] != 0) {
      AkDeferredOpenData::Destroy();
      param_1[4] = 0;
    }
    return iVar1;
  }
  return 1;
}



// FUNCTION 1431cd770 ExecuteCachedTransfer body=101 status=ok
// SIG undefined ExecuteCachedTransfer(void)

undefined1 AK::StreamMgr::CAkDeviceBase::ExecuteCachedTransfer(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2,local_res18,local_res10,local_res8,1);
  uVar1 = (**(code **)(*param_2 + 0x28))(param_2,uVar2,1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return uVar1;
}



// FUNCTION 1431cd7e0 ExecuteOp body=598 status=ok
// SIG undefined ExecuteOp(void)

char AK::StreamMgr::CAkStdStmBase::ExecuteOp
               (longlong *param_1,char param_2,longlong param_3,uint param_4,char param_5,
               byte param_6,float param_7,uint *param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  
  *param_8 = 0;
  *(float *)((longlong)param_1 + 0xb4) = param_7;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(char *)((longlong)param_1 + 0x76) = param_2;
  *(byte *)((longlong)param_1 + 0x74) = param_6;
  param_1[0x12] = param_3;
  *(uint *)(param_1 + 0x14) = param_4;
  if (((param_3 == 0) || (100 < param_6)) || (param_7 < 0.0)) {
    return '\x1f';
  }
  if (((int)param_1[0x17] - 2U & 0xfffffffd) == 0) {
LAB_1431cda22:
    cVar4 = '\x02';
  }
  else {
    if (param_2 == '\0') {
      if (param_4 % *(uint *)(param_1 + 0xe) != 0) goto LAB_1431cda22;
      if (*(char *)((longlong)param_1 + 0x79) != '\0') {
        uVar1 = param_1[0x11];
        uVar2 = *(ulonglong *)param_1[5];
        uVar6 = (ulonglong)param_4;
        if ((uVar2 < uVar1 + param_4) && (uVar6 = 0, uVar1 < uVar2)) {
          uVar6 = (ulonglong)(uint)((int)uVar2 - (int)uVar1);
        }
        param_4 = (uint)uVar6;
        if ((*(char *)((longlong)param_1 + 0x7b) != '\0') &&
           (uVar5 = (**(code **)(*param_1 + 0x40))(param_1), (ulonglong)uVar5 < uVar6 + uVar1)) {
          param_4 = uVar5 - (int)uVar1;
        }
      }
    }
    if (param_4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
      *(undefined4 *)(param_1 + 0x17) = 1;
      if (((char)param_1[0xf] == '\0') ||
         (cVar4 = (**(code **)(*param_1 + 8))(param_1), cVar4 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
        if (*(char *)((longlong)param_1 + 0x7a) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
          CAkIOThread::StdSemDecr(param_1[0xc]);
        }
      }
      else if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
        CAkIOThread::StdSemIncr(param_1[0xc]);
      }
      *param_8 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
      cVar4 = '\x01';
    }
    else {
      QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0xb));
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
      if (param_5 == '\0') {
        *(undefined4 *)(param_1 + 0x17) = 2;
        if (((char)param_1[0xf] == '\0') ||
           (cVar4 = (**(code **)(*param_1 + 8))(param_1), cVar4 == '\0')) {
          *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
        }
        if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
          *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
          CAkIOThread::StdSemIncr(param_1[0xc]);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
        cVar4 = '\x01';
        *param_8 = param_4;
      }
      else {
        CAkClientThreadAware::SetBlockedStatus(param_1);
        *(undefined4 *)(param_1 + 0x17) = 2;
        if (((char)param_1[0xf] == '\0') ||
           (cVar4 = (**(code **)(*param_1 + 8))(param_1), cVar4 == '\0')) {
          *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
        }
        if (*(char *)((longlong)param_1 + 0x7a) == '\0') {
          *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
          CAkIOThread::StdSemIncr(param_1[0xc]);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
        CAkIOThread::WaitForIOCompletion(param_1[0xc],param_1);
        lVar3 = param_1[0x17];
        *param_8 = param_4;
        cVar4 = ((int)lVar3 != 1) + '\x01';
      }
    }
  }
  return cVar4;
}



// FUNCTION 1431cda40 FUN_1431cda40 body=342 status=ok
// SIG undefined FUN_1431cda40(void)

void FUN_1431cda40(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  (**(code **)(*param_1 + 0x70))();
  bVar1 = *(byte *)(param_1 + 0x1a);
  uVar9 = (ulonglong)bVar1;
  if ((uint)bVar1 < *(uint *)(param_1 + 0x17)) {
    plVar11 = (longlong *)param_1[0x19];
    plVar12 = (longlong *)0x0;
    if (bVar1 != 0) {
      do {
        plVar12 = plVar11;
        plVar11 = (longlong *)*plVar12;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    lVar4 = param_1[0xc];
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
    while (plVar11 != (longlong *)0x0) {
      plVar5 = (longlong *)*plVar11;
      if (plVar11 == (longlong *)param_1[0x19]) {
        param_1[0x19] = (longlong)plVar5;
      }
      else {
        *plVar12 = (longlong)plVar5;
      }
      if (plVar11 == (longlong *)param_1[0x18]) {
        param_1[0x18] = (longlong)plVar12;
      }
      *(int *)(param_1 + 0x17) = (int)param_1[0x17] + -1;
      plVar6 = (longlong *)plVar11[1];
      uVar2 = *(uint *)(plVar11 + 2);
      uVar3 = *(uint *)(param_1 + 0x14);
      lVar7 = *plVar6;
      if ((lVar7 + (ulonglong)uVar2 < (ulonglong)uVar3) &&
         ((ulonglong)uVar3 < (ulonglong)*(uint *)(plVar6 + 3) + lVar7)) {
        iVar10 = (uVar3 - uVar2) - (int)lVar7;
      }
      else {
        iVar10 = (int)plVar6[3] - uVar2;
      }
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] - iVar10;
      lVar7 = plVar11[1];
      lVar8 = param_1[0xc];
      plVar11[1] = 0;
      if (lVar7 != 0) {
        FUN_1431d4410(lVar8 + 0xc0);
      }
      AK::MemoryMgr::Free(DAT_1467be440,plVar11);
      plVar11 = plVar5;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
  }
  AK::StreamMgr::CAkAutoStmBase::UpdateSchedulingStatus(param_1);
  return;
}



// FUNCTION 1431cdba0 FlushCache body=56 status=ok
// SIG undefined FlushCache(void)

void AK::StreamMgr::CAkDeviceBase::FlushCache(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  CAkIOMemMgr::FlushCache(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x0001431cdbd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}


