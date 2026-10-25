// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14075eda0 FUN_14075eda0 body=72 status=ok
// SIG undefined FUN_14075eda0(void)

undefined8 FUN_14075eda0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    uVar3 = FWeakObjectPtr::Get(param_1);
    uVar2 = FUN_140758880(uVar3,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14075edf0 FUN_14075edf0 body=201 status=ok
// SIG undefined FUN_14075edf0(void)

undefined8 FUN_14075edf0(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x720))) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 8 + (longlong)param_2 * 0x20);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = AUGWeapon_Hook::GetPrivateStaticClass();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
      if (lVar3 != 0) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 8 + (longlong)param_2 * 0x20);
        if (plVar1 != (longlong *)0x0) {
          uVar2 = AUGWeapon_Hook::GetPrivateStaticClass();
          lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
          return *(undefined8 *)(lVar3 + 0x118);
        }
        return uRam0000000000000118;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 14075eec0 GetNumMaterials body=7 status=ok
// SIG undefined GetNumMaterials(void)

undefined4 UBaseDynamicMeshComponent::GetNumMaterials(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x720);
}



// FUNCTION 14075eed0 FUN_14075eed0 body=48 status=ok
// SIG undefined FUN_14075eed0(void)

undefined8 FUN_14075eed0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 local_res18 [16];
  undefined1 local_18 [24];
  
  if (param_3 == 0) {
    return 0;
  }
  FUN_14075e360(param_3,param_4,local_18,local_res18);
  return 1;
}



// FUNCTION 14075ef00 FUN_14075ef00 body=975 status=ok
// SIG undefined FUN_14075ef00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14075ef00(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  float local_110;
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar8 = 0;
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x118);
    }
  }
  else {
    plVar5 = *(longlong **)(lVar6 + 0x118);
  }
  if (plVar5 == (longlong *)0x0) {
LAB_14075f2a2:
    uVar8 = 0;
  }
  else {
    if (*(float *)(param_1 + 0x48) <= 0.0) {
      if ((lVar6 == 0) || (*(char *)(lVar6 + 0x6fd) == '\0')) {
        if (*(longlong *)(param_1 + 8) == 0) goto LAB_14075f2a2;
        cVar4 = *(char *)(*(longlong *)(param_1 + 8) + 0x1c9);
      }
      else {
        cVar4 = *(char *)(lVar6 + 0x6fc);
      }
      if (cVar4 == '\x01') {
LAB_14075f1c8:
        FUN_14222da00(plVar5,1,param_2,&local_118);
        if (((0.0001 < ABS((float)local_118)) || (0.0001 < ABS(local_118._4_4_))) ||
           (0.0001 < ABS(local_110))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14075f29e;
      }
      else if (cVar4 != '\x02') {
        if (cVar4 != '\x03') goto LAB_14075f2a2;
        local_118 = 0;
        if (((lVar6 == 0) || (uVar8 = *(undefined8 *)(lVar6 + 0x700), (int)uVar8 == 0)) &&
           (iVar9 = (int)uVar8, (int)((ulonglong)uVar8 >> 0x20) == 0)) {
          bVar3 = true;
        }
        else {
          iVar9 = (int)uVar8;
          bVar3 = false;
        }
        if ((bVar3) && (*(longlong *)(param_1 + 8) != 0)) {
          uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1d0);
          iVar9 = (int)uVar8;
        }
        if ((iVar9 == 0) && ((int)((ulonglong)uVar8 >> 0x20) == 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (!bVar3) {
          local_48 = (longlong *)0x0;
          local_40 = 0;
          FUN_140749cd0(plVar5,local_108,0);
          plVar10 = local_108;
          if (local_48 != (longlong *)0x0) {
            plVar10 = local_48;
          }
          plVar1 = plVar10 + (int)local_40;
          for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
            plVar2 = (longlong *)*plVar10;
            if ((plVar2 != (longlong *)0x0) &&
               (cVar4 = (**(code **)(*plVar2 + 0x440))(plVar2,uVar8), cVar4 != '\0')) {
              puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x428))(plVar2,&local_118,uVar8);
              *param_2 = *puVar7;
              *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar7 + 1);
              if (local_48 != (longlong *)0x0) {
                FMemory::Free();
                return 1;
              }
              goto LAB_14075f29e;
            }
          }
          if (local_48 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        goto LAB_14075f1c8;
      }
      lVar6 = FUN_1429d7ab0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14075f2a2;
      (**(code **)(*plVar5 + 0x610))(plVar5,param_2,&local_118);
    }
    else {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x34);
      if (plVar5 == (longlong *)0x0) {
        *param_2 = *(undefined8 *)(param_1 + 0x3c);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x44);
        return 1;
      }
      lVar6 = FUN_1429d7ab0();
      iVar9 = *(int *)(lVar6 + 0x90);
      if ((*(int *)(plVar5[2] + 0x90) < iVar9) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)iVar9 * 8) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        (**(code **)(*plVar5 + 0x610))(plVar5,param_2,&local_118);
        return 1;
      }
      FUN_14222da00(plVar5,CONCAT71((int7)(int3)((uint)iVar9 >> 8),1),param_2,&local_118);
      if (((0.0001 < ABS((float)local_118)) || (0.0001 < ABS(local_118._4_4_))) ||
         (0.0001 < ABS(local_110))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar6 = plVar5[0x2d];
        if (lVar6 == 0) {
          local_118 = _DAT_1468b5d90;
          local_110 = (float)DAT_1468b5d98;
        }
        else {
          local_118 = *(undefined8 *)(lVar6 + 0x220);
          local_110 = *(float *)(lVar6 + 0x228);
        }
        *param_2 = local_118;
        *(float *)(param_2 + 1) = local_110;
        return 1;
      }
    }
LAB_14075f29e:
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 14075f2d0 FUN_14075f2d0 body=19 status=ok
// SIG undefined FUN_14075f2d0(void)

int FUN_14075f2d0(void)

{
  int iVar1;
  
  iVar1 = FUN_1423ed7a0();
  return iVar1 + 0x4a0;
}



// FUNCTION 14075f2f0 GetMoveGoalOffset body=24 status=ok
// SIG undefined GetMoveGoalOffset(void)

undefined8 INavAgentInterface::GetMoveGoalOffset(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x28))();
  return param_2;
}



// FUNCTION 14075f350 GetNavAgentLocation body=119 status=ok
// SIG undefined GetNavAgentLocation(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * INavAgentInterface::GetNavAgentLocation(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavAgentInterface.h"
             ,0x22,L"Pure virtual not implemented (%s)",L"INavAgentInterface::GetNavAgentLocation");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavAgentInterface.h"
             ,0x22,L"Pure virtual not implemented (%s)",L"INavAgentInterface::GetNavAgentLocation");
  uVar1 = DAT_1468b5d98;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14075f3e0 FUN_14075f3e0 body=7 status=ok
// SIG undefined FUN_14075f3e0(void)

undefined4 FUN_14075f3e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x658);
}



// FUNCTION 14075f3f0 FUN_14075f3f0 body=110 status=ok
// SIG undefined FUN_14075f3f0(void)

int FUN_14075f3f0(int *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  if ((0.0 < (float)param_1[2]) && ((float)param_1[3] <= param_2)) {
    param_2 = param_2 / (float)param_1[2];
    if (0.0 <= param_2) {
      iVar1 = (int)ROUND((param_2 + param_2) - 0.5) >> 1;
    }
    else {
      iVar1 = -((int)ROUND(-0.5 - (param_2 + param_2)) >> 1);
    }
    iVar2 = (int)(float)iVar1 + 1;
    iVar1 = *param_1;
    if ((*param_1 <= iVar2) && (iVar1 = param_1[1], iVar2 < param_1[1])) {
      iVar1 = iVar2;
    }
    return iVar1;
  }
  return *param_1;
}



// FUNCTION 14075f460 FUN_14075f460 body=92 status=ok
// SIG undefined FUN_14075f460(void)

float FUN_14075f460(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    fVar4 = -1.0;
  }
  else {
    fVar4 = 1.0;
  }
  fVar1 = *(float *)(param_1 + 0x58);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xc0);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
  }
  fVar3 = 0.0;
  if ((0.0 <= fVar1) && (fVar3 = *(float *)(param_1 + 0x54), fVar1 <= *(float *)(param_1 + 0x54))) {
    fVar3 = fVar1;
  }
  return fVar3 * fVar4 + *(float *)(lVar2 + (longlong)*(int *)(param_1 + 0x68) * 0xc);
}



// FUNCTION 14075f4e0 GetPerceptionComponent body=5 status=ok
// SIG undefined GetPerceptionComponent(void)

undefined8 AAIController::GetPerceptionComponent(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// FUNCTION 14075f4f0 FUN_14075f4f0 body=48 status=ok
// SIG undefined FUN_14075f4f0(void)

undefined8 FUN_14075f4f0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 local_res18 [16];
  undefined1 local_18 [24];
  
  if (param_3 == 0) {
    return 0;
  }
  FUN_14075e360(param_3,local_18,param_4,local_res18);
  return 1;
}



// FUNCTION 14075f520 FUN_14075f520 body=26 status=ok
// SIG undefined FUN_14075f520(void)

undefined8 * FUN_14075f520(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14079d730();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 14075f540 FUN_14075f540 body=92 status=ok
// SIG undefined FUN_14075f540(void)

longlong * FUN_14075f540(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar2 = UGMapIconAnimatorComponent::GetPrivateStaticClass();
    for (lVar1 = *(longlong *)(param_1 + 0x50); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        *param_2 = *(longlong *)(param_1 + 0x50);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14075f5e0 FUN_14075f5e0 body=19 status=ok
// SIG undefined FUN_14075f5e0(void)

undefined8 FUN_14075f5e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x620) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x620) + 0x980);
}



// FUNCTION 14075f600 GetArmorComponent body=8 status=ok
// SIG undefined GetArmorComponent(void)

undefined8 AIndianaUI::GetArmorComponent(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x620);
}



// FUNCTION 14075f630 GetTeamAttitudeTowards body=122 status=ok
// SIG undefined GetTeamAttitudeTowards(void)

undefined8 IGenericTeamAgentInterface::GetTeamAttitudeTowards(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  if (param_2 != 0) {
    uVar2 = UGenericTeamAgentInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      puVar4 = (undefined1 *)(**(code **)(*plVar3 + 0x18))(plVar3,local_res10);
      uVar1 = *puVar4;
      puVar4 = (undefined1 *)(**(code **)(*param_1 + 0x18))(param_1,local_res18);
      if (PTR_FUN_146690ee0 != (undefined *)0x0) {
        uVar2 = (*(code *)PTR_FUN_146690ee0)(*puVar4,uVar1);
        return uVar2;
      }
    }
  }
  return 1;
}



// FUNCTION 14075f6b0 GetThumbnail body=5 status=ok
// SIG undefined GetThumbnail(void)

undefined8 UVariant::GetThumbnail(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// FUNCTION 14075f6c0 FUN_14075f6c0 body=109 status=ok
// SIG undefined FUN_14075f6c0(void)

longlong FUN_14075f6c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x620) != 0) && (lVar1 = FUN_1407cb5c0(), lVar1 != 0)) {
    uVar2 = UDamageableInterface::GetPrivateStaticClass();
    lVar1 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  lVar1 = FUN_14075eaf0(param_1);
  if (lVar1 != 0) {
    uVar2 = UDamageableInterface::GetPrivateStaticClass();
    lVar1 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14075f730 FUN_14075f730 body=48 status=ok
// SIG undefined FUN_14075f730(void)

undefined8 FUN_14075f730(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14075f6c0(param_1 + -0x5b0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014075f74f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    return uVar2;
  }
  return 0xbf800000;
}



// FUNCTION 14075f760 FUN_14075f760 body=211 status=ok
// SIG undefined FUN_14075f760(void)

float FUN_14075f760(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if (cVar1 == '\0') {
    return -1.0;
  }
  lVar3 = param_1[0x4fe];
  local_res8 = 3.4028235e+38;
  lVar2 = lVar3 + (longlong)(int)param_1[0x4ff] * 0x48;
  fVar6 = 3.4028235e+38;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x48) {
    fVar4 = *(float *)(lVar3 + 0x1c);
    fVar5 = fVar6;
    if ((0.0 <= fVar4) && (fVar5 = fVar4, local_res8 = fVar4, fVar6 <= fVar4)) {
      fVar5 = fVar6;
      local_res8 = fVar6;
    }
    fVar6 = fVar5;
  }
  if ((param_1[1] == 0) ||
     ((lVar2 = *(longlong *)(param_1[1] + 0x120), lVar2 == 0 &&
      (lVar2 = FUN_1423407b0(), fVar6 = local_res8, lVar2 == 0)))) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = *(float *)(lVar2 + 0x8c8);
  }
  if (fVar6 < 3.4028235e+38) {
    fVar4 = fVar4 - fVar6;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    return fVar4;
  }
  return -1.0;
}



// FUNCTION 14075f840 FUN_14075f840 body=110 status=ok
// SIG undefined FUN_14075f840(void)

void FUN_14075f840(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 local_res8;
  
  *param_2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(param_2 + 1) = 1;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0xbf800000;
  local_res8 = 0xffffffffffffffff;
  uVar1 = FUN_142de77e0(*(longlong *)(param_1 + 0x10) + 0x250,0,0,&local_res8);
  *(undefined4 *)(param_2 + 2) = uVar1;
  *(undefined1 *)((longlong)param_2 + 0x14) = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x30);
  *(undefined1 *)((longlong)param_2 + 0x15) = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x31);
  return;
}



// FUNCTION 14075f8b0 FUN_14075f8b0 body=97 status=ok
// SIG undefined FUN_14075f8b0(void)

undefined8 FUN_14075f8b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  lVar3 = lVar1;
  while( true ) {
    if (lVar3 == (longlong)*(int *)(param_1 + 0x498) * 0x80 + lVar1) {
      return 0;
    }
    if (*(longlong *)(lVar3 + 8) == param_2) break;
    lVar3 = lVar3 + 0x80;
  }
  iVar2 = (int)(lVar3 - lVar1 >> 7);
  if (iVar2 == -1) {
    return 0;
  }
  FUN_14075f840((longlong)iVar2 * 0x80 + lVar1,param_3);
  return 1;
}



// FUNCTION 14075f920 FUN_14075f920 body=111 status=ok
// SIG undefined FUN_14075f920(void)

undefined8 FUN_14075f920(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  if (*(char *)(param_1 + 0x70c) != '\0') {
    local_res8[0] = 0xffffffffffffffff;
    uVar1 = FUN_142de77e0(param_1 + 0x710,0,0,local_res8);
    return uVar1;
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    local_res8[0] = 0xffffffffffffffff;
    uVar1 = FUN_142de77e0(*(longlong *)(param_1 + 0x6f8) + 0xd8,0,0,local_res8);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14075f990 FUN_14075f990 body=72 status=ok
// SIG undefined FUN_14075f990(void)

void FUN_14075f990(longlong param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0xffffffffffffffff;
  if (*(char *)(param_1 + 0x710) != '\0') {
    FUN_142de77e0(param_1 + 0x718,0,0,local_res8);
    return;
  }
  FUN_142de77e0(*(longlong *)(param_1 + 0x6f8) + 0x40,0,0,local_res8);
  return;
}



// FUNCTION 14075f9e0 FUN_14075f9e0 body=75 status=ok
// SIG undefined FUN_14075f9e0(void)

void FUN_14075f9e0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x224);
    uVar3 = *(undefined4 *)(lVar1 + 0x228);
    *param_2 = *(undefined4 *)(lVar1 + 0x220);
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x728);
  }
  return;
}



// FUNCTION 14075fa30 FUN_14075fa30 body=326 status=ok
// SIG undefined FUN_14075fa30(void)

longlong FUN_14075fa30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 local_18;
  undefined4 local_10;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (((cVar2 != '\0') && (*(longlong *)(param_1 + 8) != 0)) &&
     (plVar3 = (longlong *)FUN_140771750(param_1), plVar3 != (longlong *)0x0)) {
    uVar4 = ALoreItem::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if (lVar5 != 0) {
      if (param_2 != 0) {
        plVar7 = *(longlong **)(lVar5 + 0x4a0);
        plVar3 = plVar7 + *(int *)(lVar5 + 0x4a8);
        for (; plVar7 != plVar3; plVar7 = plVar7 + 1) {
          if (*plVar7 == 0) {
            FUN_1407656b0(lVar5);
            break;
          }
        }
        plVar7 = *(longlong **)(lVar5 + 0x4a0);
        plVar3 = plVar7 + *(int *)(lVar5 + 0x4a8);
        for (; lVar8 = 0, plVar7 != plVar3; plVar7 = plVar7 + 1) {
          lVar8 = *plVar7;
          plVar6 = *(longlong **)(lVar8 + 0x738);
          plVar1 = plVar6 + *(int *)(lVar8 + 0x740);
          for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
            if (*plVar6 == param_2) goto LAB_14075fb2c;
          }
        }
LAB_14075fb2c:
        if (lVar8 != 0) {
          return lVar8;
        }
      }
      local_18 = *(undefined8 *)(param_1 + 0x20);
      local_10 = *(undefined4 *)(param_1 + 0x28);
      lVar5 = FUN_140758360(lVar5,*(undefined8 *)(param_1 + 8),&local_18,0);
      return lVar5;
    }
  }
  return 0;
}



// FUNCTION 14075fb80 FUN_14075fb80 body=151 status=ok
// SIG undefined FUN_14075fb80(void)

int FUN_14075fb80(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x268)) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x260);
      if (*(longlong *)(param_1 + 0x260) == 0) {
        lVar2 = param_1 + 0x20;
      }
      lVar2 = lVar2 + (longlong)iVar3 * 0x24;
      cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x14);
      if ((cVar1 != '\0') && (lVar2 = FWeakObjectPtr::Get(lVar2 + 0x14), lVar2 == param_2)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x268));
  }
  return -1;
}



// FUNCTION 14075fc20 FUN_14075fc20 body=462 status=ok
// SIG undefined FUN_14075fc20(void)

void FUN_14075fc20(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined1 local_res10 [8];
  
  if (param_2 != (longlong *)0x0) {
    iVar9 = *(int *)(param_4 + 0xa8);
    uVar3 = ALoreItem::GetPrivateStaticClass();
    lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
    if ((lVar4 != 0) && (lVar5 = FUN_14075bee0(param_1), lVar5 != 0)) {
      lVar6 = *(longlong *)(param_1 + 0x1d8);
      if (lVar6 == 0) {
        lVar6 = FUN_140765020(*(undefined8 *)(param_1 + 0x118));
        *(longlong *)(param_1 + 0x1d8) = lVar6;
      }
      FUN_140764e80(lVar4,lVar6,1,param_3,param_4);
      if (iVar9 < *(int *)(param_4 + 0xa8)) {
        do {
          cVar2 = FUN_140761410(param_1,param_2);
          if ((cVar2 == '\0') &&
             (plVar7 = (longlong *)FUN_142c71360(lVar5,local_res10), *plVar7 != 0)) {
            lVar6 = FUN_142e20fc0();
            for (lVar4 = *plVar7; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
              if (lVar4 == lVar6) {
                if (*plVar7 != 0) goto LAB_14075fdc5;
                break;
              }
            }
          }
          iVar1 = *(int *)(param_4 + 0xa8);
          iVar8 = (iVar1 - iVar9) + -1;
          if (0 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            lVar4 = *(longlong *)(param_4 + 0xa0);
            if (*(longlong *)(param_4 + 0xa0) == 0) {
              lVar4 = param_4;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar4 + (longlong)iVar9 * 8),
                       (void *)(lVar4 + (longlong)(iVar1 - iVar8) * 8),(longlong)iVar8 << 3);
            iVar1 = *(int *)(param_4 + 0xa8);
          }
          *(int *)(param_4 + 0xa8) = iVar1 + -1;
          FUN_1407417a0(param_4);
          iVar9 = iVar9 + -1;
LAB_14075fdc5:
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_4 + 0xa8));
      }
    }
  }
  return;
}



// FUNCTION 14075fdf0 FUN_14075fdf0 body=807 status=ok
// SIG undefined FUN_14075fdf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14075fdf0(longlong param_1,longlong param_2,longlong *param_3,float *param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *in_RAX;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined8 local_2c;
  float local_24;
  
  if (param_1 == 0) goto LAB_1407600fc;
  plVar4 = (longlong *)FUN_142bbd6b0(param_1,param_2 + 0x10);
  in_RAX = plVar4;
  if ((char)plVar4 == -1) goto LAB_1407600fc;
  in_RAX = (longlong *)FUN_142bbd7e0(param_1,local_res8,(ulonglong)plVar4 & 0xff);
  plVar2 = (longlong *)*in_RAX;
  if (plVar2 == (longlong *)0x0) goto LAB_1407600fc;
  lVar7 = plVar2[0x1f];
  if (lVar7 == 0) {
    in_RAX = (longlong *)(**(code **)(*plVar2 + 0x368))(plVar2);
    lVar7 = plVar2[0x1f];
    if (lVar7 == 0) goto LAB_1407600fc;
  }
  if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)((uint)plVar4 & 0xff))) {
    lVar10 = 0;
  }
  else {
    lVar10 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + ((ulonglong)plVar4 & 0xff) * 2)
             + *(longlong *)(param_1 + 0x188);
  }
  lVar5 = FUN_142dfd5b0();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar6 = FUN_1404d0e40(lVar7,lVar10);
    lVar7 = FUN_142dd0030(uVar6);
    *param_3 = lVar7;
    puVar8 = (undefined8 *)FUN_142dcd4d0(uVar6,&local_2c,0,0);
LAB_14076008c:
    *(undefined8 *)param_4 = *puVar8;
    in_RAX = (longlong *)(ulonglong)(uint)*(float *)(puVar8 + 1);
    param_4[2] = *(float *)(puVar8 + 1);
  }
  else {
    lVar5 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar7 = UBlackboardKeyType_Object::GetValue(lVar7,lVar10);
      if (lVar7 == 0) {
LAB_14075ff8d:
        lVar7 = 0;
      }
      else {
        lVar10 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14075ff8d;
      }
      *param_3 = lVar7;
      if (lVar7 == 0) {
        local_24 = DAT_14622e7f8;
        puVar8 = &local_2c;
        local_2c = CONCAT44(DAT_14622e7f0._4_4_,(float)DAT_14622e7f0);
      }
      else {
        lVar7 = *(longlong *)(lVar7 + 0x168);
        if (lVar7 == 0) {
          local_24 = (float)DAT_1468b5d98;
          puVar8 = &local_2c;
          local_2c = _DAT_1468b5d90;
        }
        else {
          local_24 = (float)*(undefined4 *)(lVar7 + 0x228);
          puVar8 = &local_2c;
          local_2c = *(undefined8 *)(lVar7 + 0x220);
        }
      }
      goto LAB_14076008c;
    }
    lVar5 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar5 + 0x90);
    uVar9 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < iVar1) ||
       (uVar9 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + 0x88),
       *(longlong *)(uVar9 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
      in_RAX = (longlong *)(uVar9 & 0xffffffffffffff00);
    }
    else {
      in_RAX = (longlong *)CONCAT71((int7)(uVar9 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      *param_3 = 0;
      puVar8 = (undefined8 *)UBlackboardKeyType_Rotator::GetValue(&local_2c,lVar7,lVar10);
      goto LAB_14076008c;
    }
  }
  if ((((-(float)DAT_14622e7f0 < *param_4) && (*param_4 < (float)DAT_14622e7f0)) &&
      (-DAT_14622e7f0._4_4_ < param_4[1])) &&
     (((param_4[1] < DAT_14622e7f0._4_4_ && (-DAT_14622e7f8 < param_4[2])) &&
      (param_4[2] < DAT_14622e7f8)))) {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
LAB_1407600fc:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140760120 FUN_140760120 body=23 status=ok
// SIG undefined FUN_140760120(void)

undefined8 FUN_140760120(undefined8 param_1,undefined8 param_2)

{
  FUN_140a34f80();
  return param_2;
}



// FUNCTION 140760140 FUN_140760140 body=30 status=ok
// SIG undefined FUN_140760140(void)

undefined8 FUN_140760140(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x640))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x638) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 140760160 FUN_140760160 body=61 status=ok
// SIG undefined FUN_140760160(void)

bool FUN_140760160(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  fVar2 = *(float *)(param_1 + 0x220) - *param_2;
  fVar1 = *(float *)(param_1 + 0x224) - param_2[1];
  param_3 = param_3 + *(float *)(param_1 + 0x704);
  return fVar2 * fVar2 + fVar1 * fVar1 <= param_3 * param_3;
}



// FUNCTION 1407601a0 FUN_1407601a0 body=288 status=ok
// SIG undefined FUN_1407601a0(void)

ulonglong FUN_1407601a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x4a0);
  plVar1 = plVar7 + *(int *)(param_1 + 0x4a8);
  do {
    if (plVar7 == plVar1) {
LAB_1407601e6:
      plVar7 = *(longlong **)(param_1 + 0x4a0);
      plVar5 = (longlong *)(longlong)*(int *)(param_1 + 0x4a8);
      plVar1 = plVar7 + (longlong)plVar5;
      do {
        if (plVar7 == plVar1) {
          return (ulonglong)plVar5 & 0xffffffffffffff00;
        }
        lVar3 = *plVar7;
        if ((lVar3 != 0) && (bVar4 = false, *(char *)(lVar3 + 0x6f0) != '\0')) {
          if (*(char *)(lVar3 + 0x72c) != '\0') {
            plVar5 = (longlong *)(ulonglong)*(uint *)(lVar3 + 0x730);
            bVar4 = (int)*(uint *)(lVar3 + 0x730) <= *(int *)(lVar3 + 0x740);
          }
          if (bVar4) {
            plVar6 = *(longlong **)(lVar3 + 0x738);
            plVar5 = (longlong *)(longlong)*(int *)(lVar3 + 0x740);
            plVar2 = plVar6 + (longlong)plVar5;
            for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
              if (*plVar6 == param_3) goto LAB_140760260;
            }
          }
          else {
LAB_140760260:
            if (param_2 != 0) {
              plVar5 = *(longlong **)(lVar3 + 0x708);
              plVar2 = plVar5 + *(int *)(lVar3 + 0x710);
              for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
                if (*plVar5 == param_2) {
                  return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
                }
              }
            }
          }
        }
        plVar7 = plVar7 + 1;
      } while( true );
    }
    if (*plVar7 == 0) {
      FUN_1407656b0();
      goto LAB_1407601e6;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 1407602c0 FUN_1407602c0 body=137 status=ok
// SIG undefined FUN_1407602c0(void)

undefined8 FUN_1407602c0(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar5 = *param_1;
  lVar1 = lVar5 + (longlong)(int)param_1[1] * 0x18;
  do {
    if (lVar5 == lVar1) {
      return 1;
    }
    puVar4 = *(undefined4 **)(lVar5 + 8);
    puVar2 = puVar4 + (longlong)*(int *)(lVar5 + 0x10) * 2;
    for (; puVar4 != puVar2; puVar4 = puVar4 + 2) {
      local_res8 = *puVar4;
      local_resc = puVar4[1];
      cVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if (cVar3 != '\0') {
        return 0;
      }
    }
    lVar5 = lVar5 + 0x18;
  } while( true );
}



// FUNCTION 140760350 FUN_140760350 body=108 status=ok
// SIG undefined FUN_140760350(void)

undefined1 FUN_140760350(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar1 = AUGWeapon_Hook::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
  if ((lVar2 != 0) && (0 < *(int *)(param_1 + 0x740))) {
    plVar3 = *(longlong **)(param_1 + 0x738);
    lVar4 = 0;
    do {
      if (*plVar3 == lVar2) {
        return 1;
      }
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x740));
  }
  return 0;
}



// FUNCTION 1407603c0 GetDisplayNameVisibility_Implementation body=20 status=ok
// SIG undefined GetDisplayNameVisibility_Implementation(void)

bool UKeyLabel::GetDisplayNameVisibility_Implementation(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140758880();
  return lVar1 != 0;
}



// FUNCTION 1407603e0 FUN_1407603e0 body=66 status=ok
// SIG undefined FUN_1407603e0(void)

ulonglong FUN_1407603e0(longlong param_1,longlong param_2)

{
  longlong *in_RAX;
  longlong lVar1;
  
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x720))) {
    lVar1 = 0;
    in_RAX = (longlong *)(*(longlong *)(param_1 + 0x718) + 8);
    do {
      if ((*in_RAX != 0) && (*in_RAX == param_2)) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      lVar1 = lVar1 + 1;
      in_RAX = in_RAX + 4;
    } while (lVar1 < *(int *)(param_1 + 0x720));
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140760430 FUN_140760430 body=180 status=ok
// SIG undefined FUN_140760430(void)

ulonglong FUN_140760430(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_res10;
  undefined4 local_res14;
  
  uVar2 = *(uint *)(param_2 + 1);
  uVar5 = (ulonglong)uVar2;
  if (*(int *)(param_1 + 0x10) < (int)uVar2) {
LAB_1407604cd:
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    iVar7 = 0;
    if (0 < (int)uVar2) {
      lVar9 = 0;
      lVar10 = 0;
      do {
        iVar8 = 0;
        lVar3 = *param_2;
        puVar6 = *(undefined4 **)(lVar9 + 8 + *(longlong *)(param_1 + 8));
        puVar1 = puVar6 + (longlong)*(int *)(lVar9 + 0x10 + *(longlong *)(param_1 + 8)) * 2;
        for (; puVar6 != puVar1; puVar6 = puVar6 + 2) {
          local_res14 = puVar6[1];
          local_res10 = *puVar6;
          cVar4 = FUN_140760f90(&local_res10);
          if (cVar4 != '\0') {
            iVar8 = iVar8 + 1;
          }
        }
        uVar5 = 0;
        if (iVar8 < (int)(uint)*(byte *)(lVar3 + 8 + lVar10)) goto LAB_1407604cd;
        iVar7 = iVar7 + 1;
        lVar10 = lVar10 + 0x130;
        lVar9 = lVar9 + 0x18;
      } while (iVar7 < (int)param_2[1]);
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  return uVar5;
}



// FUNCTION 1407604f0 FUN_1407604f0 body=24 status=ok
// SIG undefined FUN_1407604f0(void)

undefined8 FUN_1407604f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x5e8);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 0x7540));
  }
  return 0;
}



// FUNCTION 140760510 FUN_140760510 body=76 status=ok
// SIG undefined FUN_140760510(void)

void FUN_140760510(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(longlong *)(param_1 + 0x10) = param_2;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_2);
      if (lVar1 == 0) goto LAB_14076054e;
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar1 + 0x8c8);
    return;
  }
LAB_14076054e:
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 140760560 InitializeActorsForPlay body=83 status=ok
// SIG undefined InitializeActorsForPlay(void)

void UAISystemBase::InitializeActorsForPlay(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/AISystemBase.h",0x18,
             L"Pure virtual not implemented (%s)",L"UAISystemBase::InitializeActorsForPlay");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/AISystemBase.h",0x18,
             L"Pure virtual not implemented (%s)",L"UAISystemBase::InitializeActorsForPlay");
  return;
}



// FUNCTION 1407605c0 FUN_1407605c0 body=273 status=ok
// SIG undefined FUN_1407605c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407605c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *_Src;
  longlong lVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [192];
  undefined1 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_142340f20();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar3 = ALoreItem::GetPrivateStaticClass();
    uVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    *(undefined8 *)(param_1 + 0x180) = uVar3;
    local_28 = (undefined1 *)0x0;
    local_20 = 0;
    FUN_140749850(plVar1,local_e8,0);
    iVar2 = (int)local_20;
    lVar5 = (longlong)(int)local_20;
    if ((int)local_20 != 0) {
      iVar4 = *(int *)(param_1 + 400);
      if (*(int *)(param_1 + 0x194) < iVar4 + (int)local_20) {
        TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x188));
        iVar4 = *(int *)(param_1 + 400);
      }
      _Src = local_e8;
      if (local_28 != (undefined1 *)0x0) {
        _Src = local_28;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 8),_Src,lVar5 << 3);
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + iVar2;
    }
    if (local_28 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407606e0 FUN_1407606e0 body=47 status=ok
// SIG undefined FUN_1407606e0(void)

void FUN_1407606e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14407ef38;
    puVar1[1] = 0;
    return;
  }
  return;
}



// FUNCTION 140760710 FUN_140760710 body=140 status=ok
// SIG undefined FUN_140760710(void)

undefined1 * FUN_140760710(undefined1 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146859258) {
    _Init_thread_header(&DAT_146859258);
    if (DAT_146859258 == -1) {
      DAT_146859248 = 0xff;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
  }
  *param_1 = DAT_146859248;
  *(undefined8 *)(param_1 + 8) = DAT_146859250;
  return param_1;
}



// FUNCTION 1407607a0 Reset body=14 status=ok
// SIG undefined Reset(void)

void FItemComparisonDetails::Reset(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return;
}



// FUNCTION 1407607b0 FUN_1407607b0 body=1090 status=ok
// SIG undefined FUN_1407607b0(void)

undefined8
FUN_1407607b0(longlong param_1,longlong param_2,longlong param_3,float *param_4,float *param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float local_c0;
  float fStack_bc;
  float local_b8;
  
  if (*(char *)(param_1 + 0x6f9) == '\0') {
    return 0;
  }
  if (*(char *)(param_2 + 0x6f9) != '\0') {
    lVar1 = *(longlong *)(param_3 + 0x168);
    if (lVar1 == 0) {
      local_c0 = DAT_1468b5d90;
      fStack_bc = DAT_1468b5d94;
      local_b8 = DAT_1468b5d98;
    }
    else {
      local_c0 = *(float *)(lVar1 + 0x220);
      fStack_bc = *(float *)(lVar1 + 0x224);
      local_b8 = *(float *)(lVar1 + 0x228);
    }
    fVar2 = *(float *)(param_1 + 0x228);
    fVar8 = local_c0 - *(float *)(param_1 + 0x220);
    fVar15 = fStack_bc - *(float *)(param_1 + 0x224);
    fVar12 = local_b8 - fVar2;
    if ((20.0 <= ABS(fVar12)) ||
       (*(float *)(param_1 + 0x704) * *(float *)(param_1 + 0x704) <= fVar15 * fVar15 + fVar8 * fVar8
       )) {
      local_c0 = local_c0 - *(float *)(param_2 + 0x220);
      fStack_bc = fStack_bc - *(float *)(param_2 + 0x224);
      if ((20.0 <= ABS(local_b8 - *(float *)(param_2 + 0x228))) ||
         (*(float *)(param_2 + 0x704) * *(float *)(param_2 + 0x704) <=
          fStack_bc * fStack_bc + local_c0 * local_c0)) {
        fVar9 = *(float *)(param_2 + 0x220) - *(float *)(param_1 + 0x220);
        fVar5 = *(float *)(param_2 + 0x224) - *(float *)(param_1 + 0x224);
        fVar6 = *(float *)(param_2 + 0x228) - fVar2;
        fVar3 = SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar6 * fVar6);
        fVar4 = 1.0 / fVar3;
        fVar10 = DAT_1468b5d94;
        fVar11 = DAT_1468b5d98;
        fVar14 = DAT_1468b5d90;
        if (1e-08 < fVar3) {
          fVar10 = fVar4 * fVar5;
          fVar11 = fVar4 * fVar6;
          fVar14 = fVar4 * fVar9;
        }
        fVar3 = fVar15 * fVar10 + fVar8 * fVar14 + fVar12 * fVar11;
        fVar4 = fVar4 * fVar3;
        if ((0.0 <= fVar4) && (fVar4 <= 1.0)) {
          fVar16 = fVar11 * DAT_1464aa798._4_4_ - fVar10 * DAT_1464aa7a0;
          fVar9 = fVar10 * (float)DAT_1464aa798 - fVar14 * DAT_1464aa798._4_4_;
          fVar13 = fVar14 * DAT_1464aa7a0 - fVar11 * (float)DAT_1464aa798;
          fVar6 = fVar13 * fVar13 + fVar16 * fVar16 + fVar9 * fVar9;
          fVar10 = fVar9;
          fVar14 = fVar13;
          fVar5 = fVar16;
          if ((fVar6 != 1.0) &&
             (fVar10 = DAT_1468b5d98, fVar14 = DAT_1468b5d94, fVar5 = DAT_1468b5d90, 1e-08 <= fVar6)
             ) {
            auVar7 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
            fVar5 = auVar7._0_4_;
            fVar5 = fVar5 + fVar5 * (0.5 - fVar6 * 0.5 * fVar5 * fVar5);
            fVar5 = fVar5 + fVar5 * (0.5 - fVar6 * 0.5 * fVar5 * fVar5);
            fVar10 = fVar9 * fVar5;
            fVar14 = fVar13 * fVar5;
            fVar5 = fVar16 * fVar5;
          }
          fVar8 = ABS(fVar8 * fVar5 + fVar14 * fVar15 + fVar10 * fVar12);
          if ((ABS(local_b8 - (fVar11 * fVar3 + fVar2)) < 20.0) &&
             (fVar8 <= (*(float *)(param_2 + 0x704) - *(float *)(param_1 + 0x704)) * fVar4 +
                       *(float *)(param_1 + 0x704))) {
            *param_4 = fVar3;
            *param_5 = fVar8;
            return 1;
          }
        }
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140760c00 FUN_140760c00 body=333 status=ok
// SIG undefined FUN_140760c00(void)

undefined8 FUN_140760c00(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = (**(code **)(*param_1 + 0x668))();
  if (lVar3 != 0) {
    uVar4 = UDamageableInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140760c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
      return uVar4;
    }
  }
  lVar3 = FUN_1407b4160();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar3 = (**(code **)(*param_1 + 0x668))(param_1);
    if (lVar3 == 0) {
      return 0;
    }
    lVar6 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    lVar3 = *(longlong *)(lVar3 + 0x620);
    if (lVar3 == 0) {
      return 0;
    }
    lVar6 = FUN_1407b4660();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    param_1 = *(longlong **)(lVar3 + 0x990);
    if (param_1 == (longlong *)0x0) {
      return 0;
    }
  }
  cVar2 = (**(code **)(param_1[0xbf] + 0x18))();
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 140760d50 FUN_140760d50 body=574 status=ok
// SIG undefined FUN_140760d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140760d50(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  undefined8 local_res8;
  longlong local_res10;
  longlong *local_res18;
  float local_58;
  float fStack_54;
  undefined8 local_4c;
  float local_44;
  
  if ((param_1 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_res10 = param_2;
    local_res18 = param_3;
    FWeakObjectPtr::operator=(&local_res8,param_1);
    cVar5 = FUN_140760f90(&local_res8);
    if (cVar5 != '\0') {
      lVar11 = *param_4;
      lVar10 = (longlong)(int)param_4[1] * 0x38 + lVar11;
      for (; lVar11 != lVar10; lVar11 = lVar11 + 0x38) {
        lVar9 = *(longlong *)(lVar11 + 8);
        lVar1 = lVar9 + (longlong)*(int *)(lVar11 + 0x10) * 0x18;
        for (; lVar9 != lVar1; lVar9 = lVar9 + 0x18) {
          lVar8 = *(longlong *)(lVar9 + 8);
          lVar2 = lVar8 + (longlong)*(int *)(lVar9 + 0x10) * 8;
          for (; lVar8 != lVar2; lVar8 = lVar8 + 8) {
            cVar5 = FUN_14058c1e0(lVar8,param_1);
            if (cVar5 != '\0') {
              return false;
            }
          }
        }
        param_3 = local_res18;
        param_2 = local_res10;
      }
      if (param_1 == param_3) {
        bVar6 = true;
      }
      else {
        lVar10 = (**(code **)(*param_1 + 0x688))(param_1);
        lVar11 = (**(code **)(*param_3 + 0x688))(param_3);
        local_res8 = 0xffffffffffffffff;
        fVar12 = (float)FUN_142de77e0(param_2 + 0x10,0,0,&local_res8);
        lVar11 = *(longlong *)(lVar11 + 0x168);
        if (lVar11 == 0) {
          local_4c = _DAT_1468b5d90;
          local_44 = DAT_1468b5d98;
        }
        else {
          local_4c = *(undefined8 *)(lVar11 + 0x220);
          local_44 = *(float *)(lVar11 + 0x228);
        }
        fVar4 = local_44;
        uVar3 = local_4c;
        lVar11 = *(longlong *)(lVar10 + 0x168);
        if (lVar11 == 0) {
          local_4c = _DAT_1468b5d90;
          local_44 = DAT_1468b5d98;
        }
        else {
          local_4c = *(undefined8 *)(lVar11 + 0x220);
          local_44 = *(float *)(lVar11 + 0x228);
        }
        fStack_54 = (float)((ulonglong)uVar3 >> 0x20);
        fStack_54 = (float)((ulonglong)local_4c >> 0x20) - fStack_54;
        local_58 = (float)uVar3;
        local_58 = (float)local_4c - local_58;
        bVar6 = SQRT(fStack_54 * fStack_54 + local_58 * local_58 +
                     (local_44 - fVar4) * (local_44 - fVar4)) <= fVar12;
        if (!bVar6) {
          return bVar6;
        }
      }
      if (*(longlong *)(param_2 + 0x110) != 0) {
        if (param_1 == param_3) {
          param_3 = (longlong *)0x0;
        }
        uVar7 = FUN_142c48f60(*(longlong *)(param_2 + 0x110),param_1,param_3);
        return (bool)uVar7;
      }
      return bVar6;
    }
  }
  return false;
}



// FUNCTION 140760f90 FUN_140760f90 body=258 status=ok
// SIG undefined FUN_140760f90(void)

undefined8 FUN_140760f90(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if ((cVar2 != '\0') && (lVar4 = FWeakObjectPtr::Get(param_1), (*(byte *)(lVar4 + 0x94) & 2) == 0))
  {
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x688))(plVar5);
    if ((plVar5 != (longlong *)0x0) && ((*(byte *)((longlong)plVar5 + 0x94) & 2) == 0)) {
      iVar1 = *(int *)((longlong)plVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar7;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
        uVar6 = UScrollBox::GetPrivateStaticClass();
        lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
        if ((lVar4 == 0) || ((*(uint *)(lVar4 + 0x840) >> 3 & 1) == 0)) {
          lVar4 = FWeakObjectPtr::Get(param_1);
          if ((*(longlong *)(lVar4 + 0x608) != 0) &&
             (cVar2 = FUN_1407c3030(*(longlong *)(lVar4 + 0x608) + 0x430), cVar2 != '\0')) {
            return 0;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1407610a0 FUN_1407610a0 body=22 status=ok
// SIG undefined FUN_1407610a0(void)

bool FUN_1407610a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid(param_3);
  return cVar1 == '\0';
}



// FUNCTION 1407610c0 FUN_1407610c0 body=210 status=ok
// SIG undefined FUN_1407610c0(void)

undefined8 FUN_1407610c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float local_res8 [2];
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x5b0) + 0x148))(param_1 + -0x5b0);
  if (lVar2 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = *(float *)(lVar2 + 0x8c8);
  }
  plVar3 = (longlong *)FUN_14075f6c0(param_1 + -0x5b0);
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    if (cVar1 != '\0') {
      if (0.0 <= *(float *)(param_1 + 0xb0)) {
        fVar4 = *(float *)(param_1 + 0xb0);
      }
      *(float *)(param_1 + 0xb0) = fVar4;
      return 1;
    }
  }
  if (0.0 <= *(float *)(param_1 + 0xb0)) {
    local_res8[0] = fVar4 - *(float *)(param_1 + 0xb0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 200,local_res8);
    *(undefined4 *)(param_1 + 0xb0) = 0xbf800000;
  }
  return 0;
}



// FUNCTION 1407611a0 FUN_1407611a0 body=130 status=ok
// SIG undefined FUN_1407611a0(void)

undefined8 FUN_1407611a0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  cVar1 = *(char *)(param_1 + 0x2800);
  if (*(longlong *)(param_1 + 8) == 0) {
LAB_1407611dd:
    fVar3 = 0.0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
      if (lVar2 == 0) goto LAB_1407611dd;
    }
    fVar3 = *(float *)(lVar2 + 0x8c8);
  }
  if (fVar3 < *(float *)(param_1 + 0x2804)) {
    *(undefined1 *)(param_1 + 0x2800) = 1;
    return 1;
  }
  *(undefined1 *)(param_1 + 0x2800) = 0;
  if (cVar1 != '\0') {
    FUN_142c6a720(param_1 + 0x27f0);
  }
  return 0;
}



// FUNCTION 140761230 FUN_140761230 body=138 status=ok
// SIG undefined FUN_140761230(void)

undefined8 FUN_140761230(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  cVar2 = (**(code **)(*param_1 + 0x18))();
  if (cVar2 != '\0') {
    FWeakObjectPtr::operator=(local_res8,param_2);
    lVar3 = param_1[0x4fe];
    lVar1 = lVar3 + (longlong)(int)param_1[0x4ff] * 0x48;
    for (; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
      cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar3,local_res18);
      if ((cVar2 != '\0') && ((*(byte *)(lVar3 + 0x44) & 1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1407612c0 FUN_1407612c0 body=91 status=ok
// SIG undefined FUN_1407612c0(void)

void FUN_1407612c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14075f6c0(param_1 + -0x5b0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140761307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 140761320 FUN_140761320 body=232 status=ok
// SIG undefined FUN_140761320(void)

ulonglong FUN_140761320(longlong param_1,longlong param_2,ulonglong *param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  ulonglong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x18);
    in_RAX = 0;
    *param_3 = 0;
    *param_4 = 3.4028235e+38;
    lVar7 = *(longlong *)(param_1 + 0x27f0);
    lVar1 = lVar7 + (longlong)*(int *)(param_1 + 0x27f8) * 0x48;
    for (; lVar7 != lVar1; lVar7 = lVar7 + 0x48) {
      if (((*(longlong *)(lVar7 + 0x20) == lVar3) &&
          (fVar2 = *(float *)(lVar7 + 0x1c), 0.0 <= fVar2)) && (fVar2 < *param_4)) {
        *param_4 = fVar2;
        cVar4 = FWeakObjectPtr::IsValid(lVar7);
        uVar6 = in_RAX;
        if (cVar4 != '\0') {
          lVar5 = FWeakObjectPtr::Get(lVar7);
          uVar6 = *(ulonglong *)(lVar5 + 0x18);
        }
        *param_3 = uVar6;
      }
    }
    if (*param_3 != 0) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140761410 FUN_140761410 body=414 status=ok
// SIG undefined FUN_140761410(void)

undefined8 FUN_140761410(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  float fVar11;
  
  plVar1 = (longlong *)(param_1 + 0x2b0);
  plVar2 = (longlong *)*plVar1;
  iVar8 = *(int *)(param_1 + 0x2b8);
  plVar9 = plVar2;
  do {
    if (plVar9 == plVar2 + (longlong)iVar8 * 3) {
      return 0;
    }
    if (param_2 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x10);
    }
    if (*plVar9 != 0) {
      lVar4 = FUN_1428dfc70();
      lVar5 = *plVar9;
      for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) goto LAB_1407614a0;
      }
    }
    lVar5 = 0;
LAB_1407614a0:
    if ((lVar5 == lVar7) && (plVar9[1] == param_3)) {
      lVar7 = ((longlong)plVar9 - (longlong)plVar2) / 6 +
              ((longlong)plVar9 - (longlong)plVar2 >> 0x3f);
      iVar8 = (int)(lVar7 >> 2) - (int)(lVar7 >> 0x3f);
      if (iVar8 == -1) {
        return 0;
      }
      lVar7 = *plVar1 + (longlong)iVar8 * 0x18;
      if (lVar7 == 0) {
        return 0;
      }
      if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar5 = FUN_1423407b0(param_1), lVar5 == 0)) {
        fVar11 = -1.0;
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x120);
        if (lVar5 == 0) {
          lVar5 = FUN_1423407b0(param_1);
        }
        fVar11 = *(float *)(lVar5 + 0x790);
      }
      if (*(float *)(lVar7 + 0x10) <= fVar11) {
        iVar10 = *(int *)(param_1 + 0x2b8);
        iVar6 = (iVar10 - iVar8) + -1;
        if (0 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar8 * 0x18),
                     (void *)(*plVar1 + (longlong)(iVar10 - iVar6) * 0x18),(longlong)iVar6 * 0x18);
          iVar10 = *(int *)(param_1 + 0x2b8);
        }
        *(int *)(param_1 + 0x2b8) = iVar10 + -1;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
        return 0;
      }
      return 1;
    }
    plVar9 = plVar9 + 3;
  } while( true );
}



// FUNCTION 1407615b0 FUN_1407615b0 body=190 status=ok
// SIG undefined FUN_1407615b0(void)

bool FUN_1407615b0(longlong param_1,float *param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)(param_1 + 0x220);
  fVar5 = *(float *)(param_1 + 0x224);
  fVar3 = 0.0;
  cVar1 = *(char *)(param_1 + 0x701);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x6f8) == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x6f8) + 0x40);
    }
  }
  else {
    fVar4 = *(float *)(param_1 + 0x704);
  }
  if (fVar4 < ABS(*(float *)(param_1 + 0x228) - param_2[2])) {
    return false;
  }
  param_2[2] = 0.0;
  fVar5 = param_2[1] - fVar5;
  fVar2 = *param_2 - fVar2;
  fVar2 = fVar5 * fVar5 + fVar2 * fVar2;
  if (cVar1 != '\0') {
    return fVar2 <= *(float *)(param_1 + 0x708) * *(float *)(param_1 + 0x708);
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x6f8) + 0x44);
  }
  return fVar2 <= fVar3 * fVar3;
}



// FUNCTION 140761670 FUN_140761670 body=198 status=ok
// SIG undefined FUN_140761670(void)

longlong FUN_140761670(longlong param_1,float *param_2)

{
  uint7 uVar2;
  longlong lVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  float fStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x6f8);
  if (((lVar1 == 0) || (*(char *)(lVar1 + 0x30) != '\0')) || (*(char *)(lVar1 + 0xd0) == '\0')) {
    local_18 = *(undefined8 *)param_2;
    fStack_10 = param_2[2];
    lVar1 = FUN_1407615b0((int)local_18,&local_18);
    return lVar1;
  }
  if (*(char *)(param_1 + 0x701) == '\0') {
    fVar3 = *(float *)(lVar1 + 0x40);
  }
  else {
    fVar3 = *(float *)(param_1 + 0x704);
  }
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (fVar3 < ABS(*(float *)(param_1 + 0x228) - param_2[2])) {
    return (ulonglong)uVar2 << 8;
  }
  fVar3 = *(float *)(lVar1 + 0xd4);
  fVar5 = param_2[1] - *(float *)(param_1 + 0x224);
  fVar4 = *param_2 - *(float *)(param_1 + 0x220);
  param_2[2] = 0.0;
  return CONCAT71(uVar2,fVar5 * fVar5 + fVar4 * fVar4 <= fVar3 * fVar3);
}



// FUNCTION 140761740 FUN_140761740 body=109 status=ok
// SIG undefined FUN_140761740(void)

bool FUN_140761740(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (150.0 < ABS(*(float *)(param_1 + 0x228) - param_2[2])) {
    return false;
  }
  fVar3 = param_2[1] - *(float *)(param_1 + 0x224);
  fVar2 = *param_2 - *(float *)(param_1 + 0x220);
  fVar1 = *(float *)(param_1 + 0x70c);
  param_2[2] = 0.0;
  return fVar3 * fVar3 + fVar2 * fVar2 <= fVar1 * fVar1;
}



// FUNCTION 1407617b0 FUN_1407617b0 body=209 status=ok
// SIG undefined FUN_1407617b0(void)

ulonglong FUN_1407617b0(longlong param_1,undefined8 *param_2,char param_3,float param_4)

{
  float *pfVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  float local_28;
  float fStack_24;
  
  pcVar2 = *(char **)(param_1 + 0x688);
  pfVar1 = (float *)(longlong)*(int *)(param_1 + 0x690);
  pcVar3 = pcVar2 + (longlong)pfVar1 * 0x30;
  if (pcVar2 != pcVar3) {
    pfVar1 = (float *)(pcVar2 + 0xc);
    fStack_24 = (float)((ulonglong)*param_2 >> 0x20);
    local_28 = (float)*param_2;
    do {
      if (param_3 == '\0') {
LAB_14076181d:
        if (SQRT((fStack_24 - pfVar1[-1]) * (fStack_24 - pfVar1[-1]) +
                 (local_28 - pfVar1[-2]) * (local_28 - pfVar1[-2]) +
                 (*(float *)(param_2 + 1) - *pfVar1) * (*(float *)(param_2 + 1) - *pfVar1)) <=
            param_4 + pfVar1[1]) {
          return CONCAT71((int7)((ulonglong)pfVar1 >> 8),1);
        }
      }
      else {
        if (param_3 == '\x02') {
          bVar4 = *pcVar2 == '\x01';
        }
        else {
          bVar4 = param_3 == *pcVar2;
        }
        if (bVar4) goto LAB_14076181d;
      }
      pcVar2 = pcVar2 + 0x30;
      pfVar1 = pfVar1 + 0xc;
    } while (pcVar2 != pcVar3);
  }
  return (ulonglong)pfVar1 & 0xffffffffffffff00;
}



// FUNCTION 140761890 FUN_140761890 body=19 status=ok
// SIG undefined FUN_140761890(void)

void FUN_140761890(undefined8 param_1)

{
  undefined1 local_res10 [24];
  
  FUN_1407570c0(param_1,local_res10);
  return;
}



// FUNCTION 1407618b0 FUN_1407618b0 body=65 status=ok
// SIG undefined FUN_1407618b0(void)

ulonglong FUN_1407618b0(longlong param_1,longlong param_2,int param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_2 != 0) {
    in_RAX = *(ulonglong *)(param_1 + 0x10);
    uVar1 = (longlong)*(int *)(param_1 + 0x18) * 0x38 + in_RAX;
    for (; in_RAX != uVar1; in_RAX = in_RAX + 0x38) {
      if (*(int *)(in_RAX + 0x2c) == param_3) {
        if ((*(char *)(in_RAX + 0x28) != '\0') || (*(byte *)(in_RAX + 0x30) < 4)) {
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
        break;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140761900 FUN_140761900 body=58 status=ok
// SIG undefined FUN_140761900(void)

ulonglong FUN_140761900(longlong param_1,longlong param_2,int param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_2 != 0) {
    in_RAX = *(ulonglong *)(param_1 + 0x10);
    uVar1 = (longlong)*(int *)(param_1 + 0x18) * 0x38 + in_RAX;
    for (; in_RAX != uVar1; in_RAX = in_RAX + 0x38) {
      if (*(int *)(in_RAX + 0x2c) == param_3) {
        return CONCAT71((int7)(in_RAX >> 8),*(byte *)(in_RAX + 0x30) < 4);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140761940 FUN_140761940 body=255 status=ok
// SIG undefined FUN_140761940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140761940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  float fVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_18;
  undefined4 uStack_10;
  
  lVar1 = *(longlong *)(param_2 + 0x488);
  if (lVar1 != 0) {
    in_RAX = FUN_1407536a0();
    if ((char)in_RAX != '\0') {
      lVar1 = *(longlong *)(lVar1 + 0x168);
      if (lVar1 == 0) {
        local_18 = _DAT_1468b5d90;
        uStack_10 = DAT_1468b5d98;
      }
      else {
        local_18 = *(undefined8 *)(lVar1 + 0x220);
        uStack_10 = *(float *)(lVar1 + 0x228);
      }
      in_RAX = (ulonglong)(uint)uStack_10;
      fVar2 = ABS(*(float *)(param_1 + 0x228) - uStack_10);
      if ((fVar2 < *(float *)(param_1 + 0x708) || fVar2 == *(float *)(param_1 + 0x708)) &&
         (local_28 = (float)local_18, local_28 = local_28 - *(float *)(param_1 + 0x220),
         uStack_24 = (float)((ulonglong)local_18 >> 0x20),
         uStack_24 = uStack_24 - *(float *)(param_1 + 0x224),
         local_28 * local_28 + uStack_24 * uStack_24 <=
         *(float *)(param_1 + 0x704) * *(float *)(param_1 + 0x704))) {
        return CONCAT71((uint7)(uint3)((uint)uStack_10 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140761aa0 FUN_140761aa0 body=123 status=ok
// SIG undefined FUN_140761aa0(void)

undefined8 FUN_140761aa0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar3 = FUN_14075eaf0();
    if (lVar3 != 0) {
      lVar1 = param_1[1];
      lVar3 = FUN_140759520(lVar3 + 0x48,*param_1,lVar1,0);
      if (lVar3 != 0) {
        iVar2 = FUN_14075fb80(lVar3,lVar1);
        if (iVar2 != -1) {
          return 1;
        }
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    return 0;
  }
  return 0;
}



// FUNCTION 140761b20 FUN_140761b20 body=133 status=ok
// SIG undefined FUN_140761b20(void)

undefined8 FUN_140761b20(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char in_R9B;
  
  lVar2 = FUN_140759520();
  if ((lVar2 == 0) || (iVar1 = FUN_14075fb80(lVar2), iVar1 == -1)) {
    return 0;
  }
  if (in_R9B == '\0') {
    lVar3 = *(longlong *)(lVar2 + 0x260);
    if (*(longlong *)(lVar2 + 0x260) == 0) {
      lVar3 = lVar2 + 0x20;
    }
    if (*(char *)(lVar3 + 0x10 + (longlong)iVar1 * 0x24) != '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140761bb0 FUN_140761bb0 body=159 status=ok
// SIG undefined FUN_140761bb0(void)

ulonglong FUN_140761bb0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    lVar2 = ARemnantWeaponMod::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      lVar2 = FUN_14075eaf0(param_1);
      in_RAX = 0;
      if (lVar2 != 0) {
        uVar3 = FUN_140761b20(lVar2 + 0x48,param_2,param_1,param_3,0);
        return uVar3;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140761c50 Init body=20 status=ok
// SIG undefined Init(void)

undefined1 FSimulationThreadWorker::Init(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140761c70 FUN_140761c70 body=36 status=ok
// SIG undefined FUN_140761c70(void)

ulonglong FUN_140761c70(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_1 + 0x60);
  if ((uVar3 != 0) && (piVar1 = (int *)(uVar3 + 200), 0 < *piVar1)) {
    uVar2 = *(uint *)(param_1 + 0x68);
    uVar3 = (ulonglong)uVar2;
    if ((-1 < (int)uVar2) && ((int)uVar2 < *piVar1)) {
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140761ca0 IsValid body=47 status=ok
// SIG undefined IsValid(void)

undefined1 FSkeletonRemapping::IsValid(longlong param_1)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (cVar1 != '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140761cd0 FUN_140761cd0 body=47 status=ok
// SIG undefined FUN_140761cd0(void)

ulonglong FUN_140761cd0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FWeakObjectPtr::IsValid();
  if ((char)uVar1 != '\0') {
    uVar1 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      return 1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140761d00 FUN_140761d00 body=255 status=ok
// SIG undefined FUN_140761d00(void)

ulonglong FUN_140761d00(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x490);
  lVar5 = (longlong)*(int *)(param_1 + 0x498) * 0x80 + lVar4;
  if (lVar4 != lVar5) {
    do {
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x4a0);
        plVar1 = plVar6 + *(int *)(param_1 + 0x4a8);
        for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
          if (*plVar6 == 0) {
            FUN_1407656b0(param_1);
            break;
          }
        }
        plVar6 = *(longlong **)(param_1 + 0x4a0);
        plVar1 = plVar6 + *(int *)(param_1 + 0x4a8);
        in_RAX = (longlong)*(int *)(param_1 + 0x4a8);
        if (plVar6 != plVar1) {
          do {
            if (*(longlong *)(lVar4 + 8) != 0) {
              plVar3 = *(longlong **)(*plVar6 + 0x708);
              plVar2 = plVar3 + *(int *)(*plVar6 + 0x710);
              for (; plVar3 != plVar2; plVar3 = plVar3 + 1) {
                if (*plVar3 == *(longlong *)(lVar4 + 8)) {
                  return 1;
                }
              }
            }
            plVar6 = plVar6 + 1;
            in_RAX = 0;
          } while (plVar6 != plVar1);
        }
      }
      lVar4 = lVar4 + 0x80;
    } while (lVar4 != lVar5);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140761e00 FUN_140761e00 body=209 status=ok
// SIG undefined FUN_140761e00(void)

longlong * FUN_140761e00(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar4 = param_2[2];
    uVar1 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar1 < (int)DAT_1469e91c4) {
      uVar3 = uVar1 & 0xffff;
      if ((int)uVar1 < 0) {
        uVar1 = uVar1 + 0xffff;
        uVar3 = uVar3 - 0x10000;
      }
      lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)uVar3 * 0x18;
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) & 0x30000000) == 0) {
      lVar2 = *(longlong *)(lVar4 + 0x120);
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(lVar4);
      }
      if (lVar2 == param_1[1]) {
        if (*(longlong *)(lVar4 + 0x6f8) == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x6f8) + 0x30);
        }
        if (lVar4 == *(longlong *)(*(longlong *)*param_1 + 0x60)) {
          return param_2;
        }
      }
    }
    param_2 = (longlong *)*param_2;
    if (param_2 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 140761ee0 FUN_140761ee0 body=183 status=ok
// SIG undefined FUN_140761ee0(void)

longlong * FUN_140761ee0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar1 = param_2[2];
    uVar2 = *(uint *)(lVar1 + 0xc);
    if ((int)uVar2 < (int)DAT_1469e91c4) {
      uVar4 = uVar2 & 0xffff;
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 0xffff;
        uVar4 = uVar4 - 0x10000;
      }
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)uVar4 * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) {
      lVar3 = *(longlong *)(lVar1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(lVar1);
      }
      if ((lVar3 == *(longlong *)(param_1 + 8)) && (*(longlong *)(lVar1 + 0x6f8) != 0)) {
        return param_2;
      }
    }
    param_2 = (longlong *)*param_2;
    if (param_2 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 140761fa0 FUN_140761fa0 body=554 status=ok
// SIG undefined FUN_140761fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140761fa0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float local_res10 [2];
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined8 local_50;
  float local_48;
  undefined8 local_38;
  float local_30;
  
  if (param_2 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(param_2 + 0x118);
  }
  if ((plVar4 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar4 + 0x668))(), lVar2 != 0)) {
    lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
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
      lVar3 = *(longlong *)(lVar2 + 0x630);
      goto LAB_140762025;
    }
  }
  lVar3 = 0;
  lVar2 = 0;
LAB_140762025:
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar2 + 0x5c8);
    if (plVar4 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = plVar4[0x120];
    }
    if (lVar2 != 0) {
      if ((*(longlong *)(lVar3 + 0x1f0) == 0) || (*(longlong *)(lVar3 + 0x1f8) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (lVar3 = *(longlong *)(lVar3 + 0x1f8), lVar3 != 0)) &&
         (*(char *)(lVar3 + 0x6f3) != '\0')) {
        local_60 = *(undefined4 *)(lVar3 + 0x220);
        local_5c = *(undefined4 *)(lVar3 + 0x224);
        fVar5 = *(float *)(lVar3 + 0x228);
        local_58 = fVar5;
        if (*(char *)(param_1 + 0x30) != '\0') {
          fVar5 = (float)FUN_142fa2df0(plVar4,&local_60,0);
        }
        (**(code **)(*plVar4 + 0x578))(plVar4,local_68,local_res10);
        lVar3 = plVar4[0x2d];
        if (lVar3 == 0) {
          local_50 = _DAT_1468b5d90;
          local_48 = DAT_1468b5d98;
        }
        else {
          local_50 = *(undefined8 *)(lVar3 + 0x220);
          local_48 = *(float *)(lVar3 + 0x228);
        }
        local_48 = (fVar5 + local_res10[0]) - local_48;
        local_38 = 0;
        local_30 = local_48;
        FUN_142d85a00(lVar2 + 0x2428,&local_38,param_4,0,0,0);
      }
    }
  }
  return;
}



// FUNCTION 1407621d0 FUN_1407621d0 body=467 status=ok
// SIG undefined FUN_1407621d0(void)

void FUN_1407621d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x10);
  lVar11 = (longlong)*(int *)(param_1 + 0x18) * 0x38 + lVar8;
  do {
    if (lVar8 == lVar11) {
      return;
    }
    lVar10 = *(longlong *)(lVar8 + 8);
    lVar1 = lVar10 + (longlong)*(int *)(lVar8 + 0x10) * 0x18;
    for (; lVar10 != lVar1; lVar10 = lVar10 + 0x18) {
      iVar6 = 0;
      if (0 < *(int *)(lVar10 + 0x10)) {
        do {
          lVar9 = (longlong)iVar6;
          cVar3 = FUN_14058c1e0(*(longlong *)(lVar10 + 8) + lVar9 * 8,param_2);
          if (cVar3 != '\0') {
            FWeakObjectPtr::operator=(&local_res10,0);
            lVar11 = *(longlong *)(lVar10 + 8);
            *(undefined4 *)(lVar11 + lVar9 * 8) = local_res10;
            *(undefined4 *)(lVar11 + 4 + lVar9 * 8) = local_res14;
            if (*(byte *)(lVar8 + 0x30) == 5) {
              cVar3 = FUN_1407602c0(lVar8 + 8);
              if (cVar3 != '\0') {
                FUN_1407676f0(lVar8);
                return;
              }
              goto LAB_140762358;
            }
            if (3 < *(byte *)(lVar8 + 0x30)) goto LAB_140762358;
            puVar2 = *(undefined4 **)(lVar8 + 0x18);
            iVar6 = *(int *)(lVar8 + 0x20);
            puVar7 = puVar2;
            goto joined_r0x0001407622d4;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar10 + 0x10));
      }
    }
    lVar8 = lVar8 + 0x38;
  } while( true );
joined_r0x0001407622d4:
  if (puVar7 == puVar2 + (longlong)iVar6 * 2) {
LAB_140762358:
    lVar11 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar11 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(lVar11 + 0x8c8);
    }
    FUN_140770810(lVar8,uVar12);
    return;
  }
  local_res10 = *puVar7;
  local_res14 = puVar7[1];
  cVar3 = FUN_14058c1e0(&local_res10,param_2);
  if (cVar3 != '\0') {
    if ((puVar7 != puVar2 + (longlong)iVar6 * 2) &&
       (iVar6 = (int)((longlong)puVar7 - (longlong)puVar2 >> 3), -1 < iVar6)) {
      iVar5 = *(int *)(lVar8 + 0x20);
      iVar4 = (iVar5 - iVar6) + -1;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(lVar8 + 0x18) + (longlong)iVar6 * 8),
                   (void *)(*(longlong *)(lVar8 + 0x18) + (longlong)(iVar6 + 1) * 8),
                   (longlong)iVar4 << 3);
        iVar5 = *(int *)(lVar8 + 0x20);
      }
      *(int *)(lVar8 + 0x20) = iVar5 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar8 + 0x18);
    }
    goto LAB_140762358;
  }
  puVar7 = puVar7 + 2;
  goto joined_r0x0001407622d4;
}



// FUNCTION 1407623b0 FUN_1407623b0 body=158 status=ok
// SIG undefined FUN_1407623b0(void)

void FUN_1407623b0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_18;
  longlong local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  lVar4 = (longlong)*(int *)(param_1 + 0x498) * 0x80 + lVar1;
  lVar3 = lVar1;
  if (lVar1 != lVar4) {
    while (*(longlong *)(lVar3 + 8) != param_3) {
      lVar3 = lVar3 + 0x80;
      if (lVar3 == lVar4) {
        return;
      }
    }
    iVar2 = (int)(lVar3 - lVar1 >> 7);
    if (iVar2 != -1) {
      lVar3 = (longlong)iVar2 * 0x80;
      plVar5 = *(longlong **)(lVar3 + 0x20 + lVar1);
      plVar6 = plVar5 + (longlong)*(int *)(lVar3 + 0x28 + lVar1) * 2;
      for (; (plVar5 != plVar6 && (*plVar5 != param_4)); plVar5 = plVar5 + 2) {
      }
      local_18 = param_4;
      local_10 = param_3;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x1a8,&local_18);
    }
  }
  return;
}



// FUNCTION 140762450 FUN_140762450 body=428 status=ok
// SIG undefined FUN_140762450(void)

void FUN_140762450(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  float fVar11;
  int local_res18;
  longlong local_res20;
  undefined8 local_48;
  longlong local_40;
  
  local_res18 = 0;
  if (0 < *(int *)(param_1 + 0x2728)) {
    lVar8 = param_1 + 0x20;
    local_res20 = 0;
    local_40 = lVar8;
    do {
      lVar9 = *(longlong *)(lVar8 + 0x2700);
      if (*(longlong *)(lVar8 + 0x2700) == 0) {
        lVar9 = lVar8;
      }
      iVar7 = 0;
      plVar10 = (longlong *)(lVar9 + local_res20);
      if (0 < (int)plVar10[0x4d]) {
        plVar1 = plVar10 + 4;
        lVar9 = 0;
        do {
          puVar6 = (undefined8 *)*param_2;
          plVar4 = (longlong *)plVar10[0x4c];
          puVar2 = puVar6 + (int)param_2[1];
          if (puVar6 != puVar2) {
            if (plVar4 == (longlong *)0x0) {
              plVar4 = plVar1;
            }
            do {
              cVar3 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                                (*puVar6,(longlong)plVar4 + (longlong)iVar7 * 0x24 + 0x1c);
              if (cVar3 != '\0') goto LAB_140762582;
              puVar6 = puVar6 + 1;
            } while (puVar6 != puVar2);
            plVar4 = (longlong *)plVar10[0x4c];
          }
          local_48 = 0xffffffffffffffff;
          fVar11 = (float)FUN_142de77e0(*plVar10 + 0xb0,0,0,&local_48);
          if (plVar4 == (longlong *)0x0) {
            plVar4 = plVar1;
          }
          plVar5 = (longlong *)plVar10[0x4c];
          if ((longlong *)plVar10[0x4c] == (longlong *)0x0) {
            plVar5 = plVar1;
          }
          *(float *)((longlong)plVar5 + lVar9 + 8) =
               fVar11 + *(float *)((longlong)plVar4 + lVar9 + 4);
LAB_140762582:
          iVar7 = iVar7 + 1;
          lVar9 = lVar9 + 0x24;
          lVar8 = local_40;
        } while (iVar7 < (int)plVar10[0x4d]);
      }
      local_res18 = local_res18 + 1;
      local_res20 = local_res20 + 0x270;
    } while (local_res18 < *(int *)(param_1 + 0x2728));
  }
  return;
}



// FUNCTION 140762600 FUN_140762600 body=27 status=ok
// SIG undefined FUN_140762600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140762600(undefined8 param_1)

{
  FUN_142343790();
  _DAT_146858ed0 = param_1;
  return;
}



// FUNCTION 140762620 FUN_140762620 body=42 status=ok
// SIG undefined FUN_140762620(void)

void FUN_140762620(undefined8 param_1,undefined1 param_2)

{
  FUN_140752600();
  FUN_142393140(param_1,param_2);
  return;
}



// FUNCTION 140762650 FUN_140762650 body=212 status=ok
// SIG undefined FUN_140762650(void)

void FUN_140762650(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*param_1 + 0x668))();
    if (lVar2 != 0) {
      lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
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
        FUN_140751980(lVar2,param_2);
      }
    }
    uVar4 = UCircularThrobber::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
    uVar4 = UCircularThrobber::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (((lVar2 != 0) && (lVar3 != 0)) &&
       (*(longlong *)(lVar3 + 0x180) != *(longlong *)(lVar2 + 0x180))) {
      FUN_142df2ca0(lVar3);
    }
  }
  return;
}



// FUNCTION 140762730 FUN_140762730 body=249 status=ok
// SIG undefined FUN_140762730(void)

void FUN_140762730(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x100) == param_2) {
    if (param_3 != '\0') {
      return;
    }
  }
  else if ((param_3 != '\0') && (param_2 != 0)) {
    lVar4 = FUN_1407eff40();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar4 = param_2;
    if (bVar2) goto LAB_14076275d;
  }
  lVar4 = 0;
LAB_14076275d:
  *(longlong *)(param_1 + 0x100) = lVar4;
  lVar4 = *(longlong *)(param_2 + 0x3d8);
  if (lVar4 == 0) {
    uVar3 = FUN_1421f9b60();
    lVar4 = UObjectBaseUtility::GetTypedOuter(param_2,uVar3);
    if (lVar4 == 0) {
      lVar4 = UPhysicsConstraintComponent::GetPrivateStaticClass();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  local_res8 = *(undefined8 *)(lVar4 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    if (param_3 == '\0') {
      (**(code **)(*plVar1 + 0x448))(plVar1,&local_res8);
    }
    else {
      (**(code **)(*plVar1 + 0x440))(plVar1,&local_res8,1);
    }
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) && (param_3 != '\0')) {
    FUN_142f97b30();
  }
  return;
}



// FUNCTION 140762830 InitializeActorsForPlay body=83 status=ok
// SIG undefined InitializeActorsForPlay(void)

void UAISystemBase::InitializeActorsForPlay(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Public\\LevelSequence/GbxLevelSequenceControllableInterface.h"
             ,0x18,L"Pure virtual not implemented (%s)",
             L"IGbxLevelSequenceControllableInterface::OnLevelSequenceControlChanged");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Public\\LevelSequence/GbxLevelSequenceControllableInterface.h"
             ,0x18,L"Pure virtual not implemented (%s)",
             L"IGbxLevelSequenceControllableInterface::OnLevelSequenceControlChanged");
  return;
}



// FUNCTION 140762890 FUN_140762890 body=33 status=ok
// SIG undefined FUN_140762890(void)

void FUN_140762890(longlong param_1,longlong param_2)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *(undefined4 *)(param_2 + 0x2c);
  FUN_1407663a0(param_1 + 0x98,local_res8);
  return;
}



// FUNCTION 1407628c0 FUN_1407628c0 body=526 status=ok
// SIG undefined FUN_1407628c0(void)

void FUN_1407628c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  longlong *local_res18;
  
  iVar8 = *(int *)(param_2 + 0x2c);
  local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar8);
  TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
  Remove(param_1 + 0xb8,&local_res18);
  plVar5 = *(longlong **)(param_1 + 0xa8);
  plVar1 = plVar5 + (longlong)*(int *)(param_1 + 0xb0) * 3;
  local_res18 = plVar1;
  if (plVar5 != plVar1) {
    do {
      lVar3 = (longlong)(int)plVar5[1];
      if ((int)plVar5[1] != 0) {
        iVar10 = 0;
        lVar9 = 0;
        bVar12 = *(int *)*plVar5 != iVar8;
        iVar11 = 0;
        do {
          lVar9 = lVar9 + 1;
          iVar7 = iVar11 + 1;
          if (lVar9 < lVar3) {
            piVar4 = (int *)(*plVar5 + lVar9 * 4);
            do {
              if (bVar12 != (*piVar4 != iVar8)) break;
              iVar7 = iVar7 + 1;
              lVar9 = lVar9 + 1;
              piVar4 = piVar4 + 1;
            } while (lVar9 < lVar3);
          }
          if (bVar12 != false) {
            if (iVar10 != iVar11) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar5 + (longlong)iVar10 * 4),
                         (void *)(*plVar5 + (longlong)iVar11 * 4),(longlong)(iVar7 - iVar11) << 2);
            }
            iVar10 = iVar10 + (iVar7 - iVar11);
          }
          bVar12 = (bool)(bVar12 ^ 1);
          iVar11 = iVar7;
        } while (lVar9 < lVar3);
        *(int *)(plVar5 + 1) = iVar10;
        plVar1 = local_res18;
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar1);
  }
  lVar3 = FWeakObjectPtr::Get(param_2);
  if (lVar3 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(lVar3 + 0x118);
  }
  if (plVar5 != (longlong *)0x0) {
    uVar2 = FUN_142e79600();
    lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
    if (lVar3 != 0) {
      lVar9 = (longlong)*(int *)(param_1 + 0x110);
      if (*(int *)(param_1 + 0x110) != 0) {
        iVar11 = 0;
        bVar12 = **(longlong **)(param_1 + 0x108) != lVar3;
        lVar6 = 0;
        iVar8 = 0;
        do {
          lVar6 = lVar6 + 1;
          iVar10 = iVar8 + 1;
          if (lVar6 < lVar9) {
            plVar5 = (longlong *)(*(longlong *)(param_1 + 0x108) + lVar6 * 8);
            do {
              if (bVar12 != (*plVar5 != lVar3)) break;
              iVar10 = iVar10 + 1;
              lVar6 = lVar6 + 1;
              plVar5 = plVar5 + 1;
            } while (lVar6 < lVar9);
          }
          if (bVar12 != false) {
            if (iVar11 != iVar8) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar11 * 8),
                         (void *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar8 * 8),
                         (longlong)(iVar10 - iVar8) << 3);
            }
            iVar11 = iVar11 + (iVar10 - iVar8);
          }
          bVar12 = (bool)(bVar12 ^ 1);
          iVar8 = iVar10;
        } while (lVar6 < lVar9);
        *(int *)(param_1 + 0x110) = iVar11;
      }
    }
  }
  return;
}



// FUNCTION 140762ad0 FUN_140762ad0 body=61 status=ok
// SIG undefined FUN_140762ad0(void)

void FUN_140762ad0(longlong param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_2 + 0x2c);
  FUN_1407663a0(param_1 + 0x98,local_res8);
  FUN_1407631f0(param_1,param_2);
  return;
}



// FUNCTION 140762b10 SetContent body=42 status=ok
// SIG undefined SetContent(void)

void UContentWidget::SetContent(undefined8 param_1,undefined8 param_2)

{
  FUN_1407628c0();
  FUN_140763310(param_1,param_2);
  return;
}



// FUNCTION 140762b40 FUN_140762b40 body=879 status=ok
// SIG undefined FUN_140762b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140762b40(longlong *param_1,longlong param_2)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  float *pfVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  undefined8 local_res8;
  float local_98;
  float fStack_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c [68];
  
  FUN_140755160();
  if (((((longlong *)*param_1 != (longlong *)0x0) && (param_1[1] != 0)) && (param_2 != 0)) &&
     ((0 < *(int *)(param_2 + 8) &&
      (lVar3 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar3 != 0)))) {
    iVar10 = 0;
    fVar1 = *(float *)(lVar3 + 0x790);
    local_res8 = CONCAT44(local_res8._4_4_,*(int *)(param_2 + 8));
    if (0 < *(int *)(param_2 + 8)) {
      do {
        lVar3 = FUN_142be4ff0(param_2,iVar10);
        if (lVar3 == 0) {
          puVar4 = (undefined8 *)FUN_142be50e0(param_2,local_7c,iVar10);
        }
        else {
          puVar4 = &local_88;
          local_88 = _DAT_1468b5d90;
          local_80 = DAT_1468b5d98;
        }
        uVar2 = *puVar4;
        fVar14 = *(float *)(puVar4 + 1);
        plVar8 = (longlong *)param_1[0x16];
        if ((longlong *)param_1[0x16] == (longlong *)0x0) {
          plVar8 = param_1 + 10;
        }
        lVar7 = param_1[0x17];
        if (plVar8 == plVar8 + (longlong)(int)lVar7 * 3) {
LAB_140762d15:
          iVar12 = -1;
          goto LAB_140762d1f;
        }
        pfVar9 = (float *)(plVar8 + 2);
        plVar11 = plVar8;
        while( true ) {
          if (lVar3 == 0) {
            local_98 = (float)uVar2;
            if (((0.0001 < ABS(local_98 - pfVar9[-2])) ||
                (fStack_94 = (float)((ulonglong)uVar2 >> 0x20), 0.0001 < ABS(fStack_94 - pfVar9[-1])
                )) || (bVar13 = true, 0.0001 < ABS(fVar14 - *pfVar9))) {
              bVar13 = false;
            }
          }
          else {
            lVar5 = FWeakObjectPtr::Get(plVar11);
            bVar13 = lVar3 == lVar5;
          }
          if (bVar13) break;
          plVar11 = plVar11 + 3;
          pfVar9 = pfVar9 + 6;
          if (plVar11 == plVar8 + (longlong)(int)lVar7 * 3) goto LAB_140762d15;
        }
        lVar7 = ((longlong)plVar11 - (longlong)plVar8) / 6 +
                ((longlong)plVar11 - (longlong)plVar8 >> 0x3f);
        iVar12 = (int)(lVar7 >> 2) - (int)(lVar7 >> 0x3f);
        if (iVar12 < 0) goto LAB_140762d98;
        if ((int)param_1[0x17] <= iVar12) {
LAB_140762d1f:
          if ((-1 < iVar12) && (iVar12 < (int)param_1[0x17])) {
            iVar10 = (int)param_1[0x17];
            iVar6 = (iVar10 - iVar12) + -1;
            if (0 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              plVar8 = (longlong *)param_1[0x16];
              if ((longlong *)param_1[0x16] == (longlong *)0x0) {
                plVar8 = param_1 + 10;
              }
              _guard_xfg_dispatch_icall_nop
                        (plVar8 + (longlong)iVar12 * 3,plVar8 + (longlong)(iVar10 - iVar6) * 3,
                         (longlong)iVar6 * 0x18);
              iVar10 = (int)param_1[0x17];
            }
            *(int *)(param_1 + 0x17) = iVar10 + -1;
          }
LAB_140762d98:
          FWeakObjectPtr::operator=((longlong)param_1 + 0x34,lVar3);
          *(undefined8 *)((longlong)param_1 + 0x3c) = uVar2;
          *(float *)((longlong)param_1 + 0x44) = fVar14;
          local_res8 = *(undefined8 *)(*param_1 + 0x568);
          fVar14 = (float)FUN_142de77e0(param_1[1] + 600,*param_1,0,&local_res8);
          *(float *)(param_1 + 9) = fVar14 + fVar1;
          return;
        }
        plVar8 = (longlong *)param_1[0x16];
        if ((longlong *)param_1[0x16] == (longlong *)0x0) {
          plVar8 = param_1 + 10;
        }
        pfVar9 = (float *)((longlong)plVar8 + (longlong)iVar12 * 0x18 + 0x14);
        if (*pfVar9 <= fVar1 && fVar1 != *pfVar9) goto LAB_140762d1f;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)local_res8);
    }
  }
  return;
}



// FUNCTION 140762eb0 FUN_140762eb0 body=309 status=ok
// SIG undefined FUN_140762eb0(void)

void FUN_140762eb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  
  *(undefined4 *)(param_1 + 0x2c0) = 0xffffffff;
  lVar6 = *(longlong *)(param_1 + 0x1d8);
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  if ((lVar6 != 0) && (lVar4 = *(longlong *)(param_1 + 0x1f0), lVar4 != 0)) {
    local_res8 = *(undefined8 *)(lVar6 + 0x568);
    fVar7 = (float)FUN_142de77e0(lVar4 + 0x1d8,lVar6,0,&local_res8);
    if (fVar7 < 0.5) {
      FUN_140755160(param_1 + 0x1e8);
    }
    else {
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x148))();
      if (lVar6 != 0) {
        FUN_140762b40(param_1 + 0x1e8,*param_2);
        local_res10 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x568);
        fVar7 = (float)FUN_142de77e0(lVar4 + 0x358,*(longlong *)(param_1 + 0x1d8),0,&local_res10);
        *(float *)(param_1 + 0x2c4) = fVar7 + *(float *)(lVar6 + 0x790);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000140762fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140762ff0 FUN_140762ff0 body=510 status=ok
// SIG undefined FUN_140762ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140762ff0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_428 [32];
  undefined1 local_408;
  undefined1 local_407 [7];
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  if (((*(longlong *)(param_1 + 0x5c8) != 0) && (*(longlong *)(param_1 + 0x488) != 0)) &&
     (*(longlong *)(param_1 + 0x5e8) != 0)) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x5c8) + 0x168);
      if (lVar4 == 0) {
        local_400 = _DAT_1468b5d90;
        local_3f8 = DAT_1468b5d98;
      }
      else {
        local_400 = *(undefined8 *)(lVar4 + 0x220);
        local_3f8 = *(undefined4 *)(lVar4 + 0x228);
      }
      local_3e8 = local_3f8;
      local_3f8 = DAT_1468b5d98;
      local_3f0 = local_400;
      local_400 = _DAT_1468b5d90;
      FUN_142dc1ad0(local_3b8);
      cVar2 = FUN_142dcd6e0(*(undefined8 *)(param_1 + 0x5e8),local_3b8,0);
      if (cVar2 != '\0') {
        if ((param_2 != 0) && (cVar2 = FUN_142dd3e20(local_3b8,param_2), cVar2 != '\0')) {
          return;
        }
        local_407[0] = 0;
        local_408 = 0;
        puVar5 = (undefined8 *)FUN_142dcce50(local_3b8,&local_3d8,local_407,&local_408);
        local_400 = *puVar5;
        local_3f8 = *(undefined4 *)(puVar5 + 1);
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x5c8) + 0x798))
                          (*(longlong **)(param_1 + 0x5c8),&local_3d8);
        uVar6 = FRotator::Vector(uVar6,local_3c8);
        cVar2 = FUN_142c6af80(&local_3f0,&local_400,param_3,uVar6);
        if (cVar2 != '\0') {
          local_3d8 = local_3f0;
          local_3d0 = local_3e8;
          FUN_1407569c0(param_1,&local_3d8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1407631f0 FUN_1407631f0 body=275 status=ok
// SIG undefined FUN_1407631f0(void)

void FUN_1407631f0(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined4 local_res20;
  undefined1 local_res24;
  byte local_res25;
  undefined4 *local_28;
  undefined4 *local_20;
  
  cVar3 = FWeakObjectPtr::IsValid(param_2);
  if (cVar3 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_2);
    local_20 = *(undefined4 **)(param_1 + 0x50);
    local_28 = (undefined4 *)CONCAT71(local_28._1_7_,*(undefined1 *)(param_1 + 0x48));
    lVar5 = (**(code **)(*plVar4 + 0x400))(plVar4,&local_28);
    if (lVar5 != 0) {
      lVar6 = UAISenseConfig_Damage::StaticClass();
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
        local_res20 = *(undefined4 *)(lVar5 + 0x48);
        uVar1 = *(uint *)(lVar5 + 0x4c);
        local_res24 = *(undefined1 *)(param_2 + 0x24);
        local_res25 = ((byte)(uVar1 >> 1) & 1 | ((byte)uVar1 & 1) * '\x02') * '\x02' |
                      (byte)(uVar1 >> 2) & 1;
        local_res10[0] = *(undefined4 *)(param_2 + 0x2c);
        local_28 = local_res10;
        local_20 = &local_res20;
        FUN_140747fc0(param_1 + 0x98,local_res18,&local_28,0);
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140763310 FUN_140763310 body=706 status=ok
// SIG undefined FUN_140763310(void)

void FUN_140763310(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_res10;
  byte local_res11;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  undefined4 *local_38;
  undefined1 *local_30;
  
  cVar6 = FWeakObjectPtr::IsValid(param_2);
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(param_2);
    if (lVar8 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(lVar8 + 0x118);
    }
    if (plVar10 != (longlong *)0x0) {
      uVar9 = FUN_142e79600();
      lVar8 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar9);
      if (lVar8 != 0) {
        plVar10 = (longlong *)(param_1 + 0x108);
        plVar3 = (longlong *)*plVar10;
        iVar7 = *(int *)(param_1 + 0x110);
        for (plVar12 = plVar3; plVar12 != plVar3 + iVar7; plVar12 = plVar12 + 1) {
          if (*plVar12 == lVar8) {
            if ((int)((longlong)plVar12 - (longlong)plVar3 >> 3) != -1) goto LAB_1407633ce;
            break;
          }
        }
        *(int *)(param_1 + 0x110) = iVar7 + 1;
        if (*(int *)(param_1 + 0x114) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar7);
        }
        *(longlong *)(*plVar10 + (longlong)iVar7 * 8) = lVar8;
      }
    }
LAB_1407633ce:
    plVar10 = (longlong *)FWeakObjectPtr::Get(param_2);
    local_38 = (undefined4 *)CONCAT71(local_38._1_7_,*(undefined1 *)(param_1 + 0x48));
    local_30 = *(undefined1 **)(param_1 + 0x50);
    lVar8 = (**(code **)(*plVar10 + 0x400))(plVar10,&local_38);
    if (lVar8 != 0) {
      lVar11 = FUN_14079ce30();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        uVar1 = *(uint *)(lVar8 + 0x48);
        local_res10 = *(undefined1 *)(param_2 + 0x24);
        local_res11 = ((byte)(uVar1 >> 1) & 1 | ((byte)uVar1 & 1) * '\x02') * '\x02' |
                      (byte)(uVar1 >> 2) & 1;
        local_res18 = *(undefined4 *)(param_2 + 0x2c);
        local_38 = &local_res18;
        local_30 = &local_res10;
        FUN_140748240(param_1 + 0xb8,&local_res20,&local_38,0);
        lVar8 = FWeakObjectPtr::Get(param_2);
        if ((((lVar8 != 0) && (lVar8 = FUN_140765020(*(undefined8 *)(lVar8 + 0x20)), lVar8 != 0)) &&
            (lVar8 = *(longlong *)(lVar8 + 0x618), lVar8 != 0)) &&
           (*(char *)(lVar8 + 0x752) != '\0')) {
          FWeakObjectPtr::operator=(&local_res18);
          local_res20 = CONCAT44(uStackX_1c,local_res18);
          plVar10 = (longlong *)(param_1 + 0xa8);
          plVar12 = (longlong *)*plVar10;
          plVar3 = plVar12 + (longlong)*(int *)(param_1 + 0xb0) * 3;
          for (; plVar12 != plVar3; plVar12 = plVar12 + 3) {
            cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(plVar12 + 2);
            if (cVar6 != '\0') {
              if (plVar12 != (longlong *)0x0) goto LAB_14076358a;
              break;
            }
          }
          lVar11 = (longlong)*(int *)(param_1 + 0xb0);
          iVar7 = *(int *)(param_1 + 0xb0) + 1;
          *(int *)(param_1 + 0xb0) = iVar7;
          if (*(int *)(param_1 + 0xb4) < iVar7) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar10);
          }
          lVar4 = *plVar10;
          *(undefined8 *)(lVar4 + lVar11 * 0x18) = 0;
          *(undefined8 *)(lVar4 + 8 + lVar11 * 0x18) = 0;
          *(undefined8 *)(lVar4 + 0x10 + lVar11 * 0x18) = 0;
          plVar12 = (longlong *)(*plVar10 + lVar11 * 0x18);
          FWeakObjectPtr::operator=(plVar12 + 2,lVar8);
          if (plVar12 != (longlong *)0x0) {
LAB_14076358a:
            iVar7 = (int)plVar12[1];
            uVar2 = *(undefined4 *)(param_2 + 0x2c);
            *(int *)(plVar12 + 1) = iVar7 + 1;
            if (*(int *)((longlong)plVar12 + 0xc) < iVar7 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar12,iVar7);
            }
            *(undefined4 *)(*plVar12 + (longlong)iVar7 * 4) = uVar2;
          }
        }
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1407635e0 FUN_1407635e0 body=36 status=ok
// SIG undefined FUN_1407635e0(void)

void FUN_1407635e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x460,&local_18);
  return;
}



// FUNCTION 140763610 FUN_140763610 body=36 status=ok
// SIG undefined FUN_140763610(void)

void FUN_140763610(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x470,&local_18);
  return;
}



// FUNCTION 140763640 FUN_140763640 body=171 status=ok
// SIG undefined FUN_140763640(void)

void FUN_140763640(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x720)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + 8 + *(longlong *)(param_1 + 0x718));
      if (plVar1 != (longlong *)0x0) {
        uVar2 = AUGWeapon_Hook::GetPrivateStaticClass();
        lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
        if (lVar3 != 0) {
          FUN_140751f80(lVar3,param_1);
        }
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 0x20;
    } while (iVar5 < *(int *)(param_1 + 0x720));
  }
  if (*(float *)(param_1 + 0x704) <= 1.0 && *(float *)(param_1 + 0x704) != 1.0) {
    *(undefined4 *)(param_1 + 0x704) = 0x42c80000;
  }
  FUN_1423937b0(param_1);
  return;
}



// FUNCTION 1407636f0 FUN_1407636f0 body=27 status=ok
// SIG undefined FUN_1407636f0(void)

void FUN_1407636f0(undefined8 param_1)

{
  FUN_142343b00();
  FUN_14075bee0(param_1);
  return;
}



// FUNCTION 140763720 FUN_140763720 body=311 status=ok
// SIG undefined FUN_140763720(void)

void FUN_140763720(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x2830);
  if (iVar1 != 0) {
    iVar5 = 0;
    iVar7 = 0;
    lVar4 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2828));
    if ((lVar4 == 0) || (lVar4 == param_2)) {
      bVar6 = 0;
    }
    else {
      bVar6 = 1;
      iVar5 = 0;
      iVar7 = 0;
    }
    do {
      iVar2 = iVar5;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        lVar4 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2828) + (longlong)iVar2 * 0x48);
        if ((lVar4 == 0) || (lVar4 == param_2)) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
      } while (bVar6 == bVar3);
      if (bVar6 != 0) {
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x2828) + (longlong)iVar7 * 0x48),
                     (void *)(*(longlong *)(param_1 + 0x2828) + (longlong)iVar5 * 0x48),
                     (longlong)(iVar2 - iVar5) * 0x48);
        }
        iVar7 = iVar7 + (iVar2 - iVar5);
      }
      bVar6 = bVar6 ^ 1;
      iVar5 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(param_1 + 0x2830) = iVar7;
  }
  if (*(int *)(param_1 + 0x2830) == 0) {
    *(undefined4 *)(param_1 + 0x283c) = 0;
  }
  return;
}



// FUNCTION 140763860 FUN_140763860 body=118 status=ok
// SIG undefined FUN_140763860(void)

void FUN_140763860(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_142344780();
  if ((*(longlong *)(param_1 + 0x1d8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x568), lVar1 != 0)) {
    lVar2 = FUN_142bbbf70(lVar1);
    if (lVar2 != 0) {
      FUN_142bb5c30(lVar1,&DAT_146859130);
    }
  }
  FUN_140765e00(param_1 + 0x1e8,0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return;
}



// FUNCTION 1407638f0 thunk_FUN_14076d250 body=7 status=ok
// SIG undefined thunk_FUN_14076d250(void)

void thunk_FUN_14076d250(undefined8 param_1)

{
  FUN_14076d250(param_1,1);
  return;
}



// FUNCTION 140763900 FUN_140763900 body=188 status=ok
// SIG undefined FUN_140763900(void)

void FUN_140763900(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FUN_142b79640(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140763955;
  }
  lVar2 = 0;
LAB_140763955:
  lVar3 = *(longlong *)(param_1 + 0x868);
  lVar4 = lVar3;
  do {
    if (lVar4 == lVar3 + (longlong)*(int *)(param_1 + 0x870) * 0x28) {
      lVar2 = 0xffffffff;
LAB_140763987:
      FUN_140766d00(param_1,lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
      return;
    }
    if (*(longlong *)(lVar4 + 8) == lVar2) {
      lVar2 = (lVar4 - lVar3) / 0x28;
      goto LAB_140763987;
    }
    lVar4 = lVar4 + 0x28;
  } while( true );
}



// FUNCTION 1407639c0 FUN_1407639c0 body=105 status=ok
// SIG undefined FUN_1407639c0(void)

void FUN_1407639c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x8b0);
  if (lVar3 != 0) {
    lVar2 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140763a11;
  }
  lVar3 = 0;
LAB_140763a11:
  FUN_14076e180(param_1,lVar3,1);
  return;
}



// FUNCTION 140763a30 FUN_140763a30 body=176 status=ok
// SIG undefined FUN_140763a30(void)

void FUN_140763a30(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((*(longlong *)(param_1 + 0x1f0) != 0) && (*(longlong *)(param_1 + 0x1f8) != 0)) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x118);
    lVar2 = *(longlong *)(param_1 + 0x1d8);
    if (lVar2 == 0) {
      lVar2 = FUN_140765020(*(undefined8 *)(param_1 + 0x118));
      *(longlong *)(param_1 + 0x1d8) = lVar2;
    }
    local_28 = *(undefined8 *)(lVar2 + 0x488);
    local_18 = *(undefined8 *)(param_1 + 0x200);
    local_20 = uVar1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1a0,&local_28);
    *(undefined1 *)(param_1 + 0x218) = 3;
    FUN_140763ae0(*(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x1e8),param_2);
  }
  return;
}



// FUNCTION 140763ae0 FUN_140763ae0 body=1139 status=ok
// SIG undefined FUN_140763ae0(void)

undefined8 FUN_140763ae0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong local_248;
  longlong *local_240;
  undefined1 local_238 [8];
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  void *local_218;
  int local_210;
  int local_20c;
  undefined1 local_208;
  undefined1 local_207;
  undefined4 local_204;
  byte local_200;
  undefined1 local_1f8 [24];
  undefined1 local_1e0 [24];
  undefined1 local_1c8 [24];
  undefined1 local_1b0 [24];
  undefined1 local_198;
  undefined4 local_194;
  undefined1 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined **local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined1 local_137;
  undefined4 local_134;
  byte local_130;
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [64];
  
  lVar17 = *(longlong *)(param_1 + 0x490);
  lVar16 = lVar17;
  do {
    if (lVar16 == (longlong)*(int *)(param_1 + 0x498) * 0x80 + lVar17) {
      return 0;
    }
    plVar11 = *(longlong **)(lVar16 + 0x20);
    for (plVar9 = plVar11; plVar9 != plVar11 + (longlong)*(int *)(lVar16 + 0x28) * 2;
        plVar9 = plVar9 + 2) {
      if (*plVar9 == param_2) {
        iVar8 = (int)((longlong)plVar9 - (longlong)plVar11 >> 4);
        goto LAB_140763b58;
      }
    }
    iVar8 = -1;
LAB_140763b58:
    if (iVar8 != -1) {
      iVar15 = (int)(lVar16 - lVar17 >> 7);
      if (iVar15 == -1) {
        return 0;
      }
      lVar17 = (longlong)iVar15 * 0x80 + lVar17;
      lVar14 = (longlong)iVar8 * 0x10 + *(longlong *)(lVar17 + 0x20);
      *(undefined1 *)(lVar14 + 0xc) = 3;
      FUN_140753480(param_1,*(undefined8 *)(lVar17 + 8),param_2,2);
      local_260 = *(undefined8 *)(lVar17 + 8);
      local_268 = param_2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x198,&local_268);
      plVar11 = *(longlong **)(param_1 + 0x118);
      local_a0 = FUN_142e27720();
      lVar16 = (**(code **)(*plVar11 + 0x628))(plVar11,local_a0);
      if (lVar16 == 0) {
        return 1;
      }
      if (param_3 == 0) goto LAB_140763c41;
      lVar10 = FUN_142e20fc0();
      lVar13 = param_3;
      break;
    }
    lVar16 = lVar16 + 0x80;
  } while( true );
  while (lVar13 = *(longlong *)(lVar13 + 0x30), lVar13 != 0) {
    if (lVar13 == lVar10) goto LAB_140763c57;
  }
LAB_140763c41:
  plVar11 = (longlong *)FUN_142c71360(lVar16,local_98,*(undefined8 *)(lVar17 + 8));
  param_3 = *plVar11;
LAB_140763c57:
  if (param_3 != 0) {
    lVar10 = FUN_142e20fc0();
    lVar13 = param_3;
    do {
      if (lVar13 == lVar10) {
        FUN_142c62180(local_238);
        puVar12 = (undefined8 *)FUN_142c62590(local_78,&DAT_146b2fcb8,*(undefined4 *)(lVar14 + 8));
        iVar8 = local_210;
        lVar14 = (longlong)local_210;
        local_210 = local_210 + 1;
        if (local_20c < local_210) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_218,iVar8);
        }
        uVar7 = puVar12[1];
        lVar14 = lVar14 * 0x38;
        local_168 = &PTR_FUN_143ff6170;
        *(undefined8 *)(lVar14 + (longlong)local_218) = *puVar12;
        ((undefined8 *)(lVar14 + (longlong)local_218))[1] = uVar7;
        uVar7 = puVar12[3];
        puVar2 = (undefined8 *)(lVar14 + 0x10 + (longlong)local_218);
        *puVar2 = puVar12[2];
        puVar2[1] = uVar7;
        uVar4 = *(undefined4 *)((longlong)puVar12 + 0x24);
        uVar5 = *(undefined4 *)(puVar12 + 5);
        uVar6 = *(undefined4 *)((longlong)puVar12 + 0x2c);
        puVar3 = (undefined4 *)(lVar14 + 0x20 + (longlong)local_218);
        *puVar3 = *(undefined4 *)(puVar12 + 4);
        puVar3[1] = uVar4;
        puVar3[2] = uVar5;
        puVar3[3] = uVar6;
        *(undefined8 *)(lVar14 + 0x30 + (longlong)local_218) = puVar12[6];
        lVar14 = (longlong)local_210;
        local_160 = local_230;
        local_158 = local_228;
        local_150 = local_220;
        local_148 = (void *)0x0;
        local_140 = local_210;
        if (local_210 == 0) {
          local_13c = 0;
        }
        else {
          TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_148,local_210,0);
          _guard_xfg_dispatch_icall_nop(local_148,local_218,lVar14 * 0x38);
        }
        local_138 = local_208;
        local_137 = local_207;
        local_134 = local_204;
        local_130 = local_130 ^ (local_130 ^ local_200) & 7;
        FUN_1405e0d90(local_128,local_1f8);
        FUN_1405e0d90(local_110,local_1e0);
        FUN_1405e0d90(local_f8,local_1c8);
        FUN_1405e0d90(local_e0,local_1b0);
        local_c8 = local_198;
        local_c4 = local_194;
        local_c0 = local_190;
        local_b8 = local_188;
        local_b0 = local_180;
        local_bc = local_18c;
        local_a8 = local_178;
        if (local_178 != 0) {
          LOCK();
          *(int *)(local_178 + 0xc) = *(int *)(local_178 + 0xc) + 1;
          UNLOCK();
        }
        FUN_142c7bb40(lVar16,&local_248,param_3,&local_168,0);
        if (local_248 != 0) {
          lVar17 = *(longlong *)(lVar17 + 8);
          local_258 = FUN_1407623b0;
          uStack_250 = 0;
          plVar11 = (longlong *)FMemory::Realloc(0,0x40);
          local_88 = plVar11;
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = (longlong)&PTR_FUN_144089ab0;
            FWeakObjectPtr::operator=(plVar11 + 1,param_1);
            *(undefined4 *)(plVar11 + 2) = (undefined4)local_258;
            *(undefined4 *)((longlong)plVar11 + 0x14) = local_258._4_4_;
            *(undefined4 *)(plVar11 + 3) = uStack_250;
            *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_24c;
            plVar11[4] = lVar17;
            plVar11[5] = param_2;
            lVar17 = FDelegateHandle::GenerateNewID();
            plVar11[6] = lVar17;
            *plVar11 = (longlong)&PTR_FUN_144089af8;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_248 + 0x58,1);
            (**(code **)(*plVar11 + 0x20))(plVar11,local_90);
            iVar8 = *(int *)(local_248 + 0x60);
            *(int *)(local_248 + 0x60) = iVar8 + 1;
            if (*(int *)(local_248 + 100) < iVar8 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_248 + 0x58,iVar8);
            }
            puVar12 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(local_248 + 0x58));
            *puVar12 = plVar11;
            *(undefined4 *)(puVar12 + 1) = 4;
          }
        }
        if (local_240 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_240 + 1;
          lVar17 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*local_240)(local_240);
            LOCK();
            piVar1 = (int *)((longlong)local_240 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_240 + 8))(local_240,1);
            }
          }
        }
        FUN_142c63c50(local_238);
        return 1;
      }
      lVar13 = *(longlong *)(lVar13 + 0x30);
    } while (lVar13 != 0);
  }
  return 1;
}



// FUNCTION 140763f60 FUN_140763f60 body=77 status=ok
// SIG undefined FUN_140763f60(void)

void FUN_140763f60(longlong param_1)

{
  longlong *plVar1;
  
  thunk_FUN_1426a43a0();
  plVar1 = *(longlong **)(param_1 + 0x9a0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x450))(plVar1,*(undefined8 *)(param_1 + 0x168));
                    /* WARNING: Could not recover jumptable at 0x000140763fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x9a0) + 0x5a0))(*(longlong **)(param_1 + 0x9a0),2);
    return;
  }
  return;
}



// FUNCTION 140763fc0 FUN_140763fc0 body=884 status=ok
// SIG undefined FUN_140763fc0(void)

void FUN_140763fc0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  longlong *plVar10;
  undefined8 local_res8;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_142bc5de0();
  uVar4 = AGBlizzard::GetPrivateStaticClass();
  lVar5 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
  param_1[0xc1] = lVar5;
  if (lVar5 != 0) {
    param_1[0xaa] = lVar5;
    local_res8 = 0;
    lVar5 = FUN_14070cf70(lVar5);
    if (lVar5 != 0) {
      FUN_142bce650(param_1,lVar5,&local_res8);
      FUN_142bd8a10(param_1[0xc1],local_res8);
      piVar9 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar9 < DAT_146859220) && (_Init_thread_header(&DAT_146859220), DAT_146859220 == -1)) {
        FName::FName(&DAT_146859218,L"Territory",1);
        _Init_thread_footer(&DAT_146859220);
      }
      if ((*piVar9 < DAT_146859230) && (_Init_thread_header(&DAT_146859230), DAT_146859230 == -1)) {
        FName::FName(&DAT_146859228,L"SpawnLocation",1);
        _Init_thread_footer(&DAT_146859230);
      }
      lVar5 = param_1[0xad];
      lVar6 = param_1[0xc3];
      if (lVar5 != 0) {
        uVar3 = FUN_142bbd6b0(lVar5,&DAT_146859218);
        FUN_140725870(lVar5,uVar3,lVar6);
        lVar5 = param_1[0xad];
        if (lVar5 != 0) {
          lVar6 = param_1[0xba];
          lVar2 = param_1[0xbb];
          uVar3 = FUN_142bbd6b0(lVar5,&DAT_146859228);
          local_38 = (undefined1 *)lVar6;
          uStack_30 = (int)lVar2;
          FUN_14074b0b0(lVar5,uVar3,&local_38);
        }
      }
    }
  }
  uVar4 = UHomeWidget::GetPrivateStaticClass();
  lVar5 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
  param_1[0xab] = lVar5;
  uVar4 = FUN_142e79600();
  lVar6 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
  lVar5 = param_1[0xc5];
  param_1[0xbd] = lVar6;
  if (lVar5 != 0) {
    local_38 = &LAB_14074f820;
    uStack_30 = 0;
    plVar10 = (longlong *)(lVar5 + 0x790);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_30;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2c;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar6;
      *plVar7 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_res8);
      iVar1 = *(int *)(lVar5 + 0x798);
      *(int *)(lVar5 + 0x798) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x79c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar10);
      *puVar8 = plVar7;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    lVar5 = param_1[0xc5];
    local_38 = &LAB_14074f82c;
    uStack_30 = 0;
    plVar10 = (longlong *)(lVar5 + 0x7a8);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_30;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2c;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar6;
      *plVar7 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_res8);
      iVar1 = *(int *)(lVar5 + 0x7b0);
      *(int *)(lVar5 + 0x7b0) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x7b4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar10);
      *puVar8 = plVar7;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 140764340 FUN_140764340 body=162 status=ok
// SIG undefined FUN_140764340(void)

void FUN_140764340(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1422384a0();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468591f0) {
    _Init_thread_header(&DAT_1468591f0);
    if (DAT_1468591f0 == -1) {
      FName::FName(&DAT_1468591e8,L"NavComponent",1);
      _Init_thread_footer(&DAT_1468591f0);
    }
  }
  if ((*(longlong *)(param_1 + 0x628) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x628) + 0x18) == DAT_1468591e8)) {
    uVar1 = UObject::GetDefaultSubobjectByName(param_1,DAT_146859058);
    *(undefined8 *)(param_1 + 0x628) = uVar1;
  }
  return;
}



// FUNCTION 1407643f0 FUN_1407643f0 body=146 status=ok
// SIG undefined FUN_1407643f0(void)

void FUN_1407643f0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142349c80();
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if ((cVar2 == '\0') && (lVar3 = FUN_14178ca30(param_1), lVar3 != 0)) {
    lVar4 = ALoreItem::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(int *)(lVar3 + 0x498) != *(int *)(param_1 + 0x498))) {
      FUN_14074f040(param_1 + 0x490,lVar3 + 0x490);
    }
  }
  return;
}



// FUNCTION 140764490 FUN_140764490 body=404 status=ok
// SIG undefined FUN_140764490(void)

void FUN_140764490(longlong param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    lVar3 = UEnvQueryContext::GetPrivateStaticClass();
    lVar6 = *(longlong *)(param_1 + 0x1d8);
    for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar3) goto LAB_1407644f0;
    }
  }
  lVar6 = 0;
LAB_1407644f0:
  FUN_142bed6b0(param_2,lVar6,&local_18);
  iVar7 = (int)param_3[1];
  if (iVar7 < (int)local_10) {
    iVar8 = (int)local_10 - iVar7;
    iVar2 = iVar7 + iVar8;
    *(int *)(param_3 + 1) = iVar2;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_3 + (longlong)iVar7 * 8),0,(longlong)iVar8 << 3);
  }
  else {
    if ((iVar7 <= (int)local_10) || (iVar2 = iVar7 - (int)local_10, iVar2 == 0)) goto LAB_14076457d;
    iVar8 = (iVar7 - (int)local_10) - iVar2;
    if (iVar8 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_3 + (longlong)(int)local_10 * 8),
                 (void *)(*param_3 + (longlong)((int)local_10 + iVar2) * 8),(longlong)iVar8 << 3);
      iVar7 = (int)param_3[1];
    }
    *(int *)(param_3 + 1) = iVar7 - iVar2;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_3);
  }
LAB_14076457d:
  iVar7 = 0;
  if (0 < (int)local_10) {
    lVar6 = 0;
    do {
      if ((*(longlong **)(lVar6 + local_18) == (longlong *)0x0) ||
         (lVar4 = (**(code **)(**(longlong **)(lVar6 + local_18) + 0x668))(), lVar4 == 0)) {
LAB_1407645ea:
        uVar5 = 0;
      }
      else {
        lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_1407645ea;
        uVar5 = *(undefined8 *)(lVar4 + 0x628);
      }
      iVar7 = iVar7 + 1;
      *(undefined8 *)(lVar6 + *param_3) = uVar5;
      lVar6 = lVar6 + 8;
    } while (iVar7 < (int)local_10);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140764630 FUN_140764630 body=127 status=ok
// SIG undefined FUN_140764630(void)

void FUN_140764630(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[4] = 0;
  if (0x7fffffff < (uint)param_1[5]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  param_1[8] = 0;
  if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  param_1[0xc] = 0;
  if (((int)param_1[0xd] < 0) && (param_1[0xd] != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 10,0);
  }
  param_1[0x10] = 0;
  if (((int)param_1[0x11] < 0) && (param_1[0x11] != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xe,0);
  }
  return;
}



// FUNCTION 1407646b0 FUN_1407646b0 body=234 status=ok
// SIG undefined FUN_1407646b0(void)

void FUN_1407646b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    lVar2 = *(longlong *)(lVar2 + 0x490);
    if (lVar2 == 0) {
      return;
    }
    lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
  }
  FUN_142d484b0(param_3,*(undefined8 *)(lVar2 + 0x5e8));
  return;
}



// FUNCTION 1407647a0 FUN_1407647a0 body=589 status=ok
// SIG undefined FUN_1407647a0(void)

void FUN_1407647a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  lVar6 = FUN_1428dfc70();
  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar6 = (**(code **)(*plVar5 + 0x688))(plVar5);
  lVar7 = (**(code **)(*plVar5 + 0x668))(plVar5);
  if (lVar7 != 0) {
    lVar8 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14076486e;
  }
  lVar7 = 0;
LAB_14076486e:
  if ((((lVar6 != 0) && (lVar7 != 0)) && (*(longlong *)(lVar7 + 0x620) != 0)) &&
     ((lVar8 = FUN_1407cb5c0(), lVar8 != 0 &&
      (lVar8 = UCableComponent::GetAttachedActor(lVar8), lVar8 != 0)))) {
    lVar9 = *(longlong *)(lVar8 + 0x120);
    if (lVar9 == 0) {
      lVar9 = FUN_1423407b0(lVar8);
    }
    lVar9 = FUN_1407c74b0(lVar9);
    if (lVar9 != 0) {
      local_58 = 0;
      local_50 = 0;
      FUN_1407c0b50(lVar9,local_48,lVar8);
      FUN_1407e0180(local_48,local_38);
      FUN_1407e0240(local_48,local_20);
      cVar3 = FUN_1407be9c0(local_38,local_20);
      while (cVar3 != '\0') {
        plVar5 = (longlong *)FUN_1407beb00(local_38);
        if ((plVar5 != *(longlong **)(lVar7 + 0x488)) &&
           (cVar3 = (**(code **)(*plVar5 + 0x528))(plVar5,lVar6), cVar3 == '\0')) {
          FUN_140771210(&local_68,plVar5);
          uVar2 = local_50;
          lVar8 = (longlong)(int)local_50;
          iVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          if (local_50._4_4_ < iVar4) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_58,uVar2 & 0xffffffff);
          }
          *(undefined8 *)(local_58 + lVar8 * 0xc) = local_68;
          *(undefined4 *)(local_58 + lVar8 * 0xc + 8) = local_60;
        }
        FCorePlayerControllerIterator::operator++(local_38);
        cVar3 = FUN_1407be9c0(local_38,local_20);
      }
      UEnvQueryItemType_Point::SetContextHelper(param_3,&local_58);
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1407649f0 FUN_1407649f0 body=468 status=ok
// SIG undefined FUN_1407649f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407649f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [912];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  lVar6 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = ARemnantWeaponMod::GetPrivateStaticClass();
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
    lVar7 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    lVar6 = *(longlong *)(lVar6 + 0x490);
    if (lVar6 == 0) {
      return;
    }
    lVar7 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x5e8);
  if (lVar6 != 0) {
    FUN_142dc1ad0(local_3a8);
    cVar4 = FUN_142dcd6e0(lVar6,local_3a8,0);
    if (cVar4 != '\0') {
      *(undefined4 *)(param_3 + 1) = 1;
      uVar8 = FUN_142e107c0();
      plVar1 = param_3 + 2;
      *param_3 = uVar8;
      iVar5 = *(int *)(param_3 + 3);
      if (iVar5 < 0x390) {
        *(undefined4 *)(param_3 + 3) = 0x390;
        if (*(int *)((longlong)param_3 + 0x1c) < 0x390) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
        }
      }
      else if ((0x390 < iVar5) && (iVar2 = iVar5 + -0x390, iVar2 != 0)) {
        iVar9 = (iVar5 - iVar2) + -0x390;
        if (iVar9 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + 0x390),(void *)((longlong)iVar5 + *plVar1),(longlong)iVar9);
          iVar5 = *(int *)(param_3 + 3);
        }
        *(int *)(param_3 + 3) = iVar5 - iVar2;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      thunk_FUN_142cb3d70(*plVar1,local_3a8);
    }
  }
  return;
}



// FUNCTION 140764bd0 FUN_140764bd0 body=481 status=ok
// SIG undefined FUN_140764bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140764bd0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_3d8 [32];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [912];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  lVar6 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = ARemnantWeaponMod::GetPrivateStaticClass();
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
    lVar7 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    lVar6 = *(longlong *)(lVar6 + 0x490);
    if (lVar6 == 0) {
      return;
    }
    lVar7 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x5e8);
  if (lVar6 != 0) {
    FUN_142dc1ad0(local_3a8);
    cVar4 = FUN_142dcd6e0(lVar6,local_3a8,0);
    if (cVar4 != '\0') {
      *(undefined4 *)(param_3 + 1) = 1;
      uVar8 = FUN_142e10640();
      *param_3 = uVar8;
      plVar2 = param_3 + 2;
      *(undefined4 *)(param_3 + 1) = 1;
      iVar5 = *(int *)(param_3 + 3);
      if (iVar5 < 8) {
        *(undefined4 *)(param_3 + 3) = 8;
        if (*(int *)((longlong)param_3 + 0x1c) < 8) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar5);
        }
      }
      else if ((8 < iVar5) && (iVar1 = iVar5 + -8, iVar1 != 0)) {
        iVar9 = (iVar5 - iVar1) + -8;
        if (iVar9 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar2 + 8),(void *)((longlong)iVar5 + *plVar2),(longlong)iVar9);
          iVar5 = *(int *)(param_3 + 3);
        }
        *(int *)(param_3 + 3) = iVar5 - iVar1;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar2);
      }
      uVar8 = FUN_142dd0030(local_3a8);
      FWeakObjectPtr::operator=(local_3b8,uVar8);
      UEnvQueryItemType_Actor::SetValue(*plVar2,local_3b8);
    }
  }
  return;
}



// FUNCTION 140764dc0 Push body=189 status=ok
// SIG undefined Push(void)

void FGraphAStar<FDakMapGraphData,FDakMapAStarPolicy,FDakAStarSearchNode<FDakMapGraphData>_>::
     FOpenList::Push(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = (int)param_1[1];
  puVar5 = (undefined8 *)param_1[3];
  *(int *)(param_1 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar7 * 4) = *(undefined4 *)(param_2 + 0x18);
  lVar6 = *param_1;
  iVar7 = (int)param_1[1] + -1;
  if (iVar7 < 1) {
    *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) | 1;
  }
  else {
    do {
      lVar8 = (longlong)iVar7;
      iVar7 = (iVar7 + -1) / 2;
      iVar3 = *(int *)(lVar6 + lVar8 * 4);
      iVar4 = *(int *)(lVar6 + (longlong)iVar7 * 4);
      fVar2 = *(float *)(*(longlong *)*puVar5 + 0x14 + (longlong)iVar4 * 0x28);
      pfVar1 = (float *)(*(longlong *)*puVar5 + 0x14 + (longlong)iVar3 * 0x28);
      if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
      *(int *)(lVar6 + lVar8 * 4) = iVar4;
      *(int *)(lVar6 + (longlong)iVar7 * 4) = iVar3;
    } while (0 < iVar7);
    *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) | 1;
  }
  return;
}



// FUNCTION 140764e80 FUN_140764e80 body=402 status=ok
// SIG undefined FUN_140764e80(void)

void FUN_140764e80(longlong param_1,longlong param_2,char param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  
  if (param_2 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x490);
    lVar11 = (longlong)*(int *)(param_1 + 0x498) * 0x80 + lVar10;
    for (; lVar10 != lVar11; lVar10 = lVar10 + 0x80) {
      if (*(longlong *)(lVar10 + 0x10) != 0) {
        plVar2 = *(longlong **)(lVar10 + 0x20);
        for (plVar8 = plVar2; plVar8 != plVar2 + (longlong)*(int *)(lVar10 + 0x28) * 2;
            plVar8 = plVar8 + 2) {
          if (*plVar8 == param_2) {
            if ((int)((longlong)plVar8 - (longlong)plVar2 >> 4) != -1) goto LAB_140764fa5;
            break;
          }
        }
        plVar2 = *(longlong **)(param_1 + 0x118);
        if ((plVar2 == (longlong *)0x0) ||
           (lVar9 = (**(code **)(*plVar2 + 0x148))(plVar2), lVar9 == 0)) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(lVar9 + 0x790);
        }
        bVar3 = FUN_140753bf0(lVar10,uVar12,plVar2,param_2);
        bVar4 = FUN_1407601a0(param_1,*(undefined8 *)(lVar10 + 8),param_2);
        if (param_3 == '\0') {
          bVar5 = 1;
        }
        else {
          bVar5 = FUN_140754360(lVar10,param_2);
        }
        bVar6 = FUN_1407541b0(*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(param_1 + 0x118),
                              param_4);
        if ((byte)(bVar3 & bVar4 & bVar6 & bVar5) != 0) {
LAB_140764fa5:
          iVar1 = *(int *)(param_5 + 0xa8);
          iVar7 = iVar1 + 1;
          *(int *)(param_5 + 0xa8) = iVar7;
          if (*(int *)(param_5 + 0xac) < iVar7) {
            FUN_140741560(param_5);
          }
          lVar9 = *(longlong *)(param_5 + 0xa0);
          if (*(longlong *)(param_5 + 0xa0) == 0) {
            lVar9 = param_5;
          }
          *(undefined8 *)(lVar9 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar10 + 8);
        }
      }
    }
  }
  return;
}



// FUNCTION 140765020 FUN_140765020 body=328 status=ok
// SIG undefined FUN_140765020(void)

longlong FUN_140765020(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = ARemnantWeaponMod::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return param_1;
  }
  lVar2 = FUN_1429d7ab0();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar2 = *(longlong *)(param_1 + 0x490);
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(lVar3 + 0x90) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x90)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        == lVar3 + 0x88)) {
      bVar1 = true;
      goto LAB_1407650dc;
    }
  }
  else {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    lVar2 = FUN_142231800(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(lVar3 + 0x90) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x90)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        == lVar3 + 0x88)) {
      bVar1 = true;
      goto LAB_1407650dc;
    }
  }
  bVar1 = false;
LAB_1407650dc:
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 140765170 FUN_140765170 body=434 status=ok
// SIG undefined FUN_140765170(void)

longlong * FUN_140765170(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = USoUICheckbox::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return param_1;
    }
    lVar2 = FUN_1428e7a40();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_1 = (longlong *)param_1[0x23];
    }
    if (param_1 != (longlong *)0x0) {
      lVar2 = FUN_1428dfc70();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = FUN_1429d7ab0();
        if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
            != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          param_1 = (longlong *)param_1[0x92];
        }
        if (param_1 != (longlong *)0x0) {
          lVar2 = ARemnantWeaponMod::GetPrivateStaticClass();
          if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
              != lVar2 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return (longlong *)param_1[0xc6];
          }
          lVar2 = FUN_142c2de20();
          if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
              != lVar2 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar3 = USoUICheckbox::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x000140765313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar4 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar3);
            return plVar4;
          }
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140765330 FUN_140765330 body=62 status=ok
// SIG undefined FUN_140765330(void)

float FUN_140765330(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x58);
  if (fVar1 < 0.0) {
    return *(float *)(param_1 + 0x4c);
  }
  if (*(float *)(param_1 + 0x54) < fVar1) {
    return *(float *)(param_1 + 0x50);
  }
  return (fVar1 / *(float *)(param_1 + 0x54)) *
         (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x4c)) + *(float *)(param_1 + 0x4c);
}



// FUNCTION 140765370 Realloc body=232 status=ok
// SIG undefined Realloc(void)

void TBitArray<TInlineAllocator<2,FDefaultAllocator>_>::Realloc(void *param_1,int param_2)

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
  pvVar5 = *(void **)((longlong)param_1 + 8);
  iVar2 = *(int *)((longlong)param_1 + 0x14) + 0x1f;
  uVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  if (uVar3 < 3) {
    if (pvVar5 == (void *)0x0) goto LAB_14076541d;
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar5,lVar7 << 2);
    pvVar5 = *(void **)((longlong)param_1 + 8);
    if (pvVar5 == (void *)0x0) goto LAB_14076541d;
    lVar6 = 0;
  }
  else {
    if (pvVar5 == (void *)0x0) {
      if (uVar3 != 0) {
        _Dst = (void *)FMemory::Realloc(0,(longlong)(int)uVar3 << 2,0);
        *(void **)((longlong)param_1 + 8) = _Dst;
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,lVar7 << 2);
      goto LAB_14076541d;
    }
    lVar6 = (longlong)(int)uVar3 << 2;
  }
  uVar4 = FMemory::Realloc(pvVar5,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 8) = uVar4;
LAB_14076541d:
  if (uVar3 != 0) {
    pvVar5 = *(void **)((longlong)param_1 + 8);
    if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
      pvVar5 = param_1;
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)pvVar5 + lVar7 * 4),0,(longlong)(int)(uVar3 - iVar1) << 2);
  }
  return;
}



// FUNCTION 140765460 FUN_140765460 body=21 status=ok
// SIG undefined FUN_140765460(void)

void FUN_140765460(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14076cf90(param_2,param_3,param_1 + 0x28);
  return;
}



// FUNCTION 140765480 FUN_140765480 body=548 status=ok
// SIG undefined FUN_140765480(void)

void FUN_140765480(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  char cVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0x118) != 0)) &&
      (*(char *)(param_1 + 0x6f9) != '\0')) &&
     ((*(char *)(param_2 + 0x6f9) != '\0' && (lVar10 = FUN_140758880(), lVar10 != 0)))) {
    plVar1 = (longlong *)(lVar10 + 0x10);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    if (*(int *)(lVar10 + 0x1c) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1,0);
    }
    local_68 = *(longlong *)(param_1 + 0x120);
    if (local_68 == 0) {
      local_68 = FUN_1423407b0(param_1);
    }
    local_60 = &local_68;
    local_58 = FUN_14073d760(&local_68,DAT_1468591c8);
    plVar8 = local_60;
    local_50 = &local_68;
    local_48 = 0;
    puVar11 = (undefined8 *)FUN_14073d760(local_60,local_58);
    local_res20 = (undefined8 *)FUN_14073d760(local_50,local_48);
    if (puVar11 != local_res20) {
      do {
        lVar4 = puVar11[2];
        lVar5 = *(longlong *)(lVar4 + 0x118);
        if (lVar5 != 0) {
          lVar12 = FUN_14233ccd0(lVar4);
          lVar13 = FUN_14233ccd0(param_1);
          if (((lVar13 == lVar12) && (*(char *)(lVar4 + 0x1c8) != '\0')) &&
             ((cVar9 = FUN_140761d00(lVar4), cVar9 != '\0' &&
              (cVar9 = FUN_1407607b0(param_1,param_2,*(undefined8 *)(lVar4 + 0x118),local_res10,
                                     local_res18), uVar7 = local_res18[0], uVar6 = local_res10[0],
              cVar9 != '\0')))) {
            iVar3 = *(int *)(lVar10 + 0x18);
            *(int *)(lVar10 + 0x18) = iVar3 + 1;
            if (*(int *)(lVar10 + 0x1c) < iVar3 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
            }
            local_78 = (undefined4)lVar5;
            uStack_74 = (undefined4)((ulonglong)lVar5 >> 0x20);
            puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 0x10);
            *puVar2 = local_78;
            puVar2[1] = uStack_74;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
          }
        }
        puVar11 = (undefined8 *)FUN_14073d760(plVar8,*puVar11);
      } while (puVar11 != local_res20);
    }
  }
  return;
}



// FUNCTION 1407656b0 FUN_1407656b0 body=258 status=ok
// SIG undefined FUN_1407656b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407656b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *_Src;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [192];
  undefined1 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_20 = 0;
  local_28 = (undefined1 *)0x0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_140749850(*(longlong *)(param_1 + 0x118),local_e8,0);
  }
  plVar3 = (longlong *)(param_1 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  if (*(int *)(param_1 + 0x4ac) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar3,0);
  }
  iVar1 = (int)local_20;
  lVar4 = (longlong)(int)local_20;
  if ((int)local_20 != 0) {
    iVar2 = *(int *)(param_1 + 0x4a8);
    if (*(int *)(param_1 + 0x4ac) < iVar2 + (int)local_20) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar3);
      iVar2 = *(int *)(param_1 + 0x4a8);
    }
    _Src = local_e8;
    if (local_28 != (undefined1 *)0x0) {
      _Src = local_28;
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + (longlong)iVar2 * 8),_Src,lVar4 << 3);
    *(int *)(param_1 + 0x4a8) = *(int *)(param_1 + 0x4a8) + iVar1;
  }
  if (local_28 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407657c0 FUN_1407657c0 body=186 status=ok
// SIG undefined FUN_1407657c0(void)

void FUN_1407657c0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    FWeakObjectPtr::operator=(&local_res10);
    lVar3 = *param_1;
    lVar4 = param_1[1];
    for (lVar6 = lVar3; lVar6 != lVar3 + (longlong)(int)lVar4 * 8; lVar6 = lVar6 + 8) {
      cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,&local_res10);
      if (cVar5 != '\0') {
        if ((int)(lVar6 - lVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 8);
    *puVar1 = local_res10;
    puVar1[1] = local_res14;
  }
  return;
}



// FUNCTION 140765880 FUN_140765880 body=141 status=ok
// SIG undefined FUN_140765880(void)

void FUN_140765880(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)(param_1 + 0xe8);
  iVar2 = *(int *)(param_1 + 0xf0);
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 0xf0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xf4) < iVar2 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + lVar5 * 0xc) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar5 * 0xc) = 0;
  lVar3 = *plVar1;
  FWeakObjectPtr::operator=(lVar3 + 4 + lVar5 * 0xc,param_2);
  puVar4 = (undefined1 *)FGenericTeamId::GetTeamIdentifier(local_res8,param_2);
  *(undefined1 *)(lVar3 + lVar5 * 0xc) = *puVar4;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 140765910 FUN_140765910 body=141 status=ok
// SIG undefined FUN_140765910(void)

void FUN_140765910(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0xa0);
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 0xa0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xa4) < iVar2 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + lVar5 * 0xc) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar5 * 0xc) = 0;
  lVar3 = *plVar1;
  FWeakObjectPtr::operator=(lVar3 + 4 + lVar5 * 0xc,param_2);
  puVar4 = (undefined1 *)FGenericTeamId::GetTeamIdentifier(local_res8,param_2);
  *(undefined1 *)(lVar3 + lVar5 * 0xc) = *puVar4;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1407659a0 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_28;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_140765adf;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_140765adf:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x3c + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0xe] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0xd] = *(uint *)((longlong)plVar7 +
                                ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140765bb0 FUN_140765bb0 body=589 status=ok
// SIG undefined FUN_140765bb0(void)

void FUN_140765bb0(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
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
  
  lVar1 = param_1 + 0x630;
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x6b0),0,0);
    *(undefined8 *)(param_1 + 0x6b0) = uVar6;
  }
  puVar2 = (uint *)(param_1 + 0x6b8);
  uVar5 = *puVar2;
  if (uVar5 != 0) {
    FUN_140767b70(lVar1,0);
    if (0 < (int)uVar5) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*puVar2 - 1U & uVar11;
        lVar10 = *(longlong *)(param_1 + 0x6b0);
        if (*(longlong *)(param_1 + 0x6b0) == 0) {
          lVar10 = lVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar10 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0x610);
    local_58 = 0;
    iVar3 = *(int *)(param_1 + 0x620);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = *(uint **)(param_1 + 0x618);
      if (*(uint **)(param_1 + 0x618) == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar5 = *puVar13;
      local_58 = 0;
      iStack_40 = 0;
      while (uVar5 == 0) {
        lVar10 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_140765d0f;
        uVar5 = puVar13[lVar10 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_140765d0f:
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
        iVar3 = iStack_1c;
        lVar10 = *(longlong *)(param_1 + 0x600);
        if (*(longlong *)(param_1 + 0x600) == 0) {
          lVar10 = param_1;
        }
        lVar10 = lVar10 + (longlong)iStack_1c * 0x18;
        uVar5 = FCrc::MemCrc32(lVar10,0x10);
        uVar5 = *puVar2 - 1 & uVar5;
        *(uint *)(lVar10 + 0x14) = uVar5;
        lVar7 = *(longlong *)(param_1 + 0x6b0);
        if (*(longlong *)(param_1 + 0x6b0) == 0) {
          lVar7 = lVar1;
        }
        *(undefined4 *)(lVar10 + 0x10) =
             *(undefined4 *)(lVar7 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar5) * 4);
        lVar10 = *(longlong *)(param_1 + 0x6b0);
        if (*(longlong *)(param_1 + 0x6b0) == 0) {
          lVar10 = lVar1;
        }
        *(int *)(lVar10 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar5) * 4) = iVar3;
        local_20 = local_20 & ~uStack_2c;
        FUN_1406e9690(&local_30);
      } while (iStack_1c < (int)puStack_28[4]);
    }
  }
  return;
}



// FUNCTION 140765e00 FUN_140765e00 body=416 status=ok
// SIG undefined FUN_140765e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140765e00(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  
  lVar1 = param_1[2];
  uVar7 = 0;
  if (lVar1 != 0) {
    lVar2 = *param_1;
    lVar5 = (longlong)*(int *)(lVar1 + 0x740);
    if (*(int *)(lVar1 + 0x740) != 0) {
      bVar13 = **(longlong **)(lVar1 + 0x738) != lVar2;
      uVar10 = uVar7;
      uVar12 = uVar7;
      do {
        iVar9 = (int)uVar10;
        uVar7 = uVar7 + 1;
        uVar10 = (ulonglong)(iVar9 + 1);
        if ((longlong)uVar7 < lVar5) {
          plVar6 = (longlong *)(*(longlong *)(lVar1 + 0x738) + uVar7 * 8);
          do {
            if (bVar13 != (*plVar6 != lVar2)) break;
            uVar10 = (ulonglong)((int)uVar10 + 1);
            uVar7 = uVar7 + 1;
            plVar6 = plVar6 + 1;
          } while ((longlong)uVar7 < lVar5);
        }
        iVar8 = (int)uVar10 - iVar9;
        if (bVar13 != false) {
          iVar11 = (int)uVar12;
          if (iVar11 != iVar9) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar1 + 0x738) + (longlong)iVar11 * 8),
                       (void *)(*(longlong *)(lVar1 + 0x738) + (longlong)iVar9 * 8),
                       (longlong)iVar8 << 3);
          }
          uVar12 = (ulonglong)(uint)(iVar11 + iVar8);
        }
        bVar13 = (bool)(bVar13 ^ 1);
      } while ((longlong)uVar7 < lVar5);
      *(int *)(lVar1 + 0x740) = (int)uVar12;
    }
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    FUN_140765fa0(param_1[1],*param_1,param_2);
    param_1[1] = 0;
    if ((*param_1 != 0) && (lVar1 = *(longlong *)(*param_1 + 0x568), lVar1 != 0)) {
      FUN_142bb5c30(lVar1,&DAT_146859130);
    }
  }
  uVar4 = DAT_1468b5d98;
  uVar3 = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xbc)) {
    FUN_1407685d0(param_1 + 10,0);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 140765fa0 FUN_140765fa0 body=663 status=ok
// SIG undefined FUN_140765fa0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140765fa0(longlong param_1,undefined8 *******param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res8;
  int local_res10;
  undefined8 local_res20;
  undefined8 *******local_78;
  undefined8 *******local_70;
  undefined8 *******local_68;
  undefined8 *local_60;
  undefined1 local_58;
  
  lVar8 = *(longlong *)(param_1 + 0x490);
  lVar9 = (longlong)*(int *)(param_1 + 0x498) * 0x80 + lVar8;
  lVar7 = lVar8;
  if (lVar8 == lVar9) {
    return;
  }
  do {
    plVar1 = *(longlong **)(lVar7 + 0x20);
    for (plVar3 = plVar1; plVar3 != plVar1 + (longlong)*(int *)(lVar7 + 0x28) * 2;
        plVar3 = plVar3 + 2) {
      if ((undefined8 *******)*plVar3 == param_2) {
        local_res10 = (int)((longlong)plVar3 - (longlong)plVar1 >> 4);
        goto LAB_14076600a;
      }
    }
    local_res10 = -1;
LAB_14076600a:
    if (local_res10 != -1) {
      iVar5 = (int)(lVar7 - lVar8 >> 7);
      if (iVar5 == -1) {
        return;
      }
      lVar8 = (longlong)iVar5 * 0x80 + lVar8;
      uVar2 = *(undefined8 *)(lVar8 + 8);
      local_70 = param_2;
      if (*(char *)(*(longlong *)(lVar8 + 0x20) + 0xc + (longlong)local_res10 * 0x10) == '\x03') {
        if (param_3 == '\0') {
          FUN_140753480(param_1,uVar2,param_2,3);
          local_58 = 1;
        }
        else {
          FUN_140753480(param_1,uVar2,param_2,4);
          local_58 = 0;
        }
      }
      else {
        FUN_140753480(param_1,uVar2,param_2,1);
        local_58 = 2;
      }
      local_60 = *(undefined8 **)(lVar8 + 8);
      local_68 = param_2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x1b8,&local_68);
      if ((*(longlong **)(param_1 + 0x118) == (longlong *)0x0) ||
         (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))(), lVar7 == 0)) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = *(float *)(lVar7 + 0x790);
      }
      plVar1 = *(longlong **)(lVar8 + 0x20);
      plVar3 = plVar1;
      while( true ) {
        if (plVar3 == plVar1 + (longlong)*(int *)(lVar8 + 0x28) * 2) {
          return;
        }
        if ((undefined8 *******)*plVar3 == param_2) break;
        plVar3 = plVar3 + 2;
      }
      iVar5 = (int)((longlong)plVar3 - (longlong)plVar1 >> 4);
      if (iVar5 == -1) {
        return;
      }
      local_78 = param_2;
      if (*(char *)((longlong)plVar1 + (longlong)iVar5 * 0x10 + 0xc) == '\x03') {
        local_res8 = 0xffffffffffffffff;
        fVar10 = (float)FUN_142de77e0(*(longlong *)(lVar8 + 0x10) + 0x150,param_2,0,&local_res8);
        *(float *)(lVar8 + 0x1c) = fVar10 + fVar11;
        local_res20 = 0xffffffffffffffff;
        fVar10 = (float)FUN_142de77e0(*(longlong *)(lVar8 + 0x10) + 0x1d0,local_78,0,&local_res20);
        local_68 = &local_78;
        local_60 = &local_res8;
        local_res8 = CONCAT44(local_res8._4_4_,fVar10 + fVar11);
        TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
                  (lVar8 + 0x30,&local_res20,&local_68,0);
      }
      iVar4 = *(int *)(lVar8 + 0x28);
      iVar6 = (iVar4 - iVar5) + -1;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      if (iVar6 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(lVar8 + 0x20) + (longlong)iVar5 * 0x10),
                   (void *)((longlong)(iVar4 - iVar6) * 0x10 + *(longlong *)(lVar8 + 0x20)),
                   (longlong)iVar6 << 4);
        iVar4 = *(int *)(lVar8 + 0x28);
      }
      *(int *)(lVar8 + 0x28) = iVar4 + -1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(lVar8 + 0x20);
      return;
    }
    lVar7 = lVar7 + 0x80;
    if (lVar7 == lVar9) {
      return;
    }
  } while( true );
}



// FUNCTION 140766240 FUN_140766240 body=349 status=ok
// SIG undefined FUN_140766240(void)

undefined8 FUN_140766240(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar10 = (int)(param_2 >> 4);
  uVar8 = (longlong)(int)param_1[9] - 1;
  uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
  uVar6 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
  uVar11 = (iVar10 - uVar9) - uVar6 ^ uVar6 >> 0xc;
  uVar9 = (uVar9 - uVar11) - uVar6 ^ uVar11 << 0x10;
  uVar6 = (uVar6 - uVar9) - uVar11 ^ uVar9 >> 5;
  uVar11 = (uVar11 - uVar9) - uVar6 ^ uVar6 >> 3;
  uVar9 = (uVar9 - uVar11) - uVar6 ^ uVar11 << 10;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  iVar10 = *(int *)((longlong)plVar7 +
                   (((longlong)(int)((uVar6 - uVar9) - uVar11) ^ (ulonglong)(uVar9 >> 0xf)) & uVar8)
                   * 4);
  if (iVar10 != -1) {
    lVar4 = *param_1;
    do {
      lVar5 = (longlong)iVar10;
      if (*(ulonglong *)(lVar4 + lVar5 * 0x18) == param_2) {
        uVar8 = (longlong)*(int *)(lVar4 + 0x14 + lVar5 * 0x18) & uVar8;
        puVar2 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
        iVar3 = *(int *)((longlong)plVar7 + uVar8 * 4);
        goto joined_r0x00014076634e;
      }
      iVar10 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
    } while (iVar10 != -1);
  }
  return 0;
joined_r0x00014076634e:
  if (iVar3 == -1) {
LAB_140766374:
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar10,1);
    return 1;
  }
  if (iVar3 == iVar10) {
    *puVar2 = *(undefined4 *)(lVar4 + 0x10 + lVar5 * 0x18);
    goto LAB_140766374;
  }
  lVar1 = (longlong)iVar3 * 3 + 2;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x00014076634e;
}



// FUNCTION 1407663a0 FUN_1407663a0 body=227 status=ok
// SIG undefined FUN_1407663a0(void)

undefined8 FUN_1407663a0(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar3 = *(int *)((longlong)plVar6 + ((longlong)*param_2 & uVar7) * 4);
  if (iVar3 != -1) {
    lVar5 = *param_1;
    do {
      lVar8 = (longlong)iVar3;
      if (*(int *)(lVar5 + lVar8 * 0x14) == *param_2) {
        uVar7 = (longlong)*(int *)(lVar5 + 0x10 + lVar8 * 0x14) & uVar7;
        puVar1 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000140766432;
      }
      iVar3 = *(int *)(lVar5 + 0xc + lVar8 * 0x14);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x000140766432:
  if (iVar4 == -1) {
LAB_14076645a:
    TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar4 == iVar3) {
    *puVar1 = *(undefined4 *)(lVar5 + lVar8 * 0x14 + 0xc);
    goto LAB_14076645a;
  }
  lVar2 = (longlong)iVar4 * 5 + 3;
  iVar4 = *(int *)(lVar5 + lVar2 * 4);
  puVar1 = (undefined4 *)(lVar5 + lVar2 * 4);
  goto joined_r0x000140766432;
}



// FUNCTION 140766490 Remove body=327 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>::
Remove(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar9 = (longlong)(int)param_1[9] - 1;
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  iVar7 = *(int *)((longlong)plVar8 + ((longlong)*param_2 & uVar9) * 4);
  if (iVar7 != -1) {
    lVar2 = *param_1;
    do {
      lVar10 = (longlong)iVar7;
      if (*(int *)(lVar2 + lVar10 * 0x10) == *param_2) {
        uVar9 = (longlong)*(int *)(lVar2 + 0xc + lVar10 * 0x10) & uVar9;
        piVar6 = (int *)((longlong)plVar8 + uVar9 * 4);
        iVar4 = *(int *)((longlong)plVar8 + uVar9 * 4);
        if (iVar4 != -1) goto LAB_140766530;
        goto LAB_14076654f;
      }
      iVar7 = *(int *)(lVar2 + 8 + lVar10 * 0x10);
    } while (iVar7 != -1);
  }
  return 0;
  while( true ) {
    piVar6 = (int *)(lVar2 + 8 + (longlong)iVar4 * 0x10);
    iVar4 = *piVar6;
    if (iVar4 == -1) break;
LAB_140766530:
    if (iVar4 == iVar7) {
      *piVar6 = *(int *)(lVar2 + lVar10 * 0x10 + 8);
      break;
    }
  }
LAB_14076654f:
  bVar3 = (byte)iVar7 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar7;
  }
  lVar2 = *param_1;
  uVar5 = 0xffffffff;
  *(undefined4 *)(lVar2 + lVar10 * 0x10) = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + lVar10 * 0x10) = uVar5;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = iVar7;
  plVar8 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
  return 1;
}



// FUNCTION 1407665e0 FUN_1407665e0 body=241 status=ok
// SIG undefined FUN_1407665e0(void)

void FUN_1407665e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = (int)param_1[1] + -1;
  if (-1 < iVar4) {
    lVar6 = (longlong)iVar4 << 4;
    lVar7 = lVar6;
    do {
      lVar5 = *param_1 + lVar6;
      if ((((param_2 != 0) && (lVar3 = FWeakObjectPtr::Get(lVar5), param_2 == lVar3)) ||
          (*(longlong *)(lVar5 + 8) == 0)) || (lVar5 = FWeakObjectPtr::Get(lVar5,1), lVar5 == 0)) {
        iVar1 = (int)param_1[1];
        iVar2 = (iVar1 - iVar4) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_1 + lVar7),
                     (void *)((longlong)(iVar1 - iVar2) * 0x10 + *param_1),(longlong)iVar2 << 4);
          iVar1 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar1 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
      }
      lVar7 = lVar7 + -0x10;
      lVar6 = lVar6 + -0x10;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}



// FUNCTION 1407666e0 RemoveAtUninitialized body=176 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x14;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x14) = iVar9;
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
      lVar8 = lVar8 + 0x14;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140766790 FUN_140766790 body=808 status=ok
// SIG undefined FUN_140766790(void)

void FUN_140766790(undefined8 param_1,longlong *param_2,float param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  char *pcVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 local_res10;
  char *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  
  uVar15 = 0;
  iVar11 = (int)param_2[1];
  local_a8 = (char *)0x0;
  local_a0 = 0;
  if (0 < iVar11) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (&local_a8,iVar11);
    iVar11 = (int)param_2[1];
    uVar15 = local_a0 & 0xffffffff;
  }
  uVar14 = (uint)uVar15;
  pfVar12 = (float *)*param_2;
  pfVar1 = pfVar12 + (longlong)iVar11 * 6;
  pcVar19 = local_a8;
  if (pfVar12 != pfVar1) {
    do {
      fVar5 = *pfVar12;
      fVar6 = pfVar12[1];
      fVar7 = pfVar12[2];
      fVar8 = pfVar12[3];
      lVar18 = (longlong)(int)uVar15;
      uVar4 = *(undefined8 *)(pfVar12 + 4);
      local_98 = CONCAT31(local_98._1_3_,1);
      uVar14 = (int)uVar15 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,uVar14);
      iStack_94 = (int)((1.0 / param_3) * fVar5);
      iStack_90 = (int)((1.0 / param_3) * fVar6);
      if (local_a0._4_4_ < (int)uVar14) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_a8,uVar15);
        pcVar19 = local_a8;
        uVar14 = (uint)local_a0;
      }
      uVar15 = (ulonglong)uVar14;
      pfVar12 = pfVar12 + 6;
      pcVar10 = pcVar19 + lVar18 * 0x28;
      *(undefined4 *)pcVar10 = local_98;
      *(int *)(pcVar10 + 4) = iStack_94;
      *(int *)(pcVar10 + 8) = iStack_90;
      *(undefined4 *)(pcVar10 + 0xc) = uStack_8c;
      pfVar3 = (float *)(pcVar19 + lVar18 * 0x28 + 0x10);
      *pfVar3 = fVar5;
      pfVar3[1] = fVar6;
      pfVar3[2] = fVar7;
      pfVar3[3] = fVar8;
      *(undefined8 *)(pcVar19 + lVar18 * 0x28 + 0x20) = uVar4;
    } while (pfVar12 != pfVar1);
  }
  lVar18 = (longlong)(int)uVar14;
  FUN_14074a3e0(pcVar19,lVar18,local_res10);
  iVar11 = 0;
  if (0 < (int)uVar14) {
    lVar13 = 0;
    do {
      iVar11 = iVar11 + 1;
      lVar20 = lVar13 + 1;
      if ((int)uVar14 <= iVar11) break;
      piVar9 = (int *)(pcVar19 + lVar20 * 0x28 + 8);
      do {
        if (((*(int *)(pcVar19 + lVar13 * 0x28 + 4) != piVar9[-1]) ||
            (*(int *)(pcVar19 + lVar13 * 0x28 + 8) != *piVar9)) ||
           (param_3 <= ABS(*(float *)(pcVar19 + lVar13 * 0x28 + 0x18) - (float)piVar9[4]))) break;
        *(char *)(piVar9 + -2) = '\0';
        iVar11 = iVar11 + 1;
        piVar9 = piVar9 + 10;
        lVar20 = lVar20 + 1;
      } while (iVar11 < (int)uVar14);
      lVar13 = lVar20;
    } while (iVar11 < (int)uVar14);
  }
  iVar11 = 0;
  if (uVar14 != 0) {
    iVar11 = 0;
    bVar21 = *pcVar19 != '\0';
    lVar13 = 0;
    iVar16 = 0;
    do {
      lVar13 = lVar13 + 1;
      iVar17 = iVar16 + 1;
      if (lVar13 < lVar18) {
        pcVar10 = pcVar19 + lVar13 * 0x28;
        do {
          if (bVar21 != (*pcVar10 != '\0')) break;
          iVar17 = iVar17 + 1;
          lVar13 = lVar13 + 1;
          pcVar10 = pcVar10 + 0x28;
        } while (lVar13 < lVar18);
      }
      if (bVar21 != false) {
        if (iVar11 != iVar16) {
          _guard_xfg_dispatch_icall_nop
                    (pcVar19 + (longlong)iVar11 * 0x28,pcVar19 + (longlong)iVar16 * 0x28,
                     (longlong)(iVar17 - iVar16) * 0x28);
        }
        iVar11 = iVar11 + (iVar17 - iVar16);
      }
      bVar21 = (bool)(bVar21 ^ 1);
      iVar16 = iVar17;
    } while (lVar13 < lVar18);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar11) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,iVar11);
  }
  for (pcVar10 = pcVar19; pcVar10 != pcVar19 + (longlong)iVar11 * 0x28; pcVar10 = pcVar10 + 0x28) {
    iVar16 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar16);
    }
    uVar4 = *(undefined8 *)(pcVar10 + 0x18);
    lVar18 = *param_2;
    puVar2 = (undefined8 *)(lVar18 + (longlong)iVar16 * 0x18);
    *puVar2 = *(undefined8 *)(pcVar10 + 0x10);
    puVar2[1] = uVar4;
    *(undefined8 *)(lVar18 + 0x10 + (longlong)iVar16 * 0x18) = *(undefined8 *)(pcVar10 + 0x20);
  }
  if (pcVar19 != (char *)0x0) {
    FMemory::Free(pcVar19);
  }
  return;
}



// FUNCTION 140766ac0 FUN_140766ac0 body=465 status=ok
// SIG undefined FUN_140766ac0(void)

undefined8 FUN_140766ac0(longlong param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  int iVar12;
  undefined8 *puVar13;
  float *pfVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  int iVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  int iVar22;
  undefined8 *puVar18;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  puVar20 = *(undefined8 **)(param_1 + 0x260);
  if (*(undefined8 **)(param_1 + 0x260) == (undefined8 *)0x0) {
    puVar20 = puVar1;
  }
  puVar17 = (undefined8 *)((longlong)puVar20 + (longlong)*(int *)(param_1 + 0x268) * 0x24);
  puVar13 = puVar20;
  if (puVar20 != puVar17) {
    do {
      cVar3 = *(char *)(puVar13 + 2);
      puVar10 = puVar13;
      while (cVar3 == '\0') {
        puVar13 = (undefined8 *)((longlong)puVar10 + 0x24);
        if (puVar13 == puVar17) goto LAB_140766b57;
        cVar3 = *(char *)((longlong)puVar10 + 0x34);
        puVar10 = puVar13;
      }
      do {
        puVar18 = puVar17;
        puVar17 = (undefined8 *)((longlong)puVar18 - 0x24);
        puVar13 = puVar10;
        if (puVar10 == puVar17) goto LAB_140766b57;
      } while (*(char *)((longlong)puVar18 - 0x14) != '\0');
      uVar5 = *puVar10;
      uVar6 = puVar10[1];
      uVar4 = *(undefined4 *)(puVar10 + 4);
      uVar7 = puVar10[2];
      uVar8 = puVar10[3];
      uVar9 = *(undefined8 *)((longlong)puVar18 - 0x1c);
      *puVar10 = *puVar17;
      puVar10[1] = uVar9;
      uVar9 = *(undefined8 *)((longlong)puVar18 - 0xc);
      puVar10[2] = *(undefined8 *)((longlong)puVar18 - 0x14);
      puVar10[3] = uVar9;
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)((longlong)puVar18 - 4);
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x24);
      *puVar17 = uVar5;
      *(undefined8 *)((longlong)puVar18 - 0x1c) = uVar6;
      *(undefined8 *)((longlong)puVar18 - 0x14) = uVar7;
      *(undefined8 *)((longlong)puVar18 - 0xc) = uVar8;
      *(undefined4 *)((longlong)puVar18 - 4) = uVar4;
    } while (puVar13 != puVar17);
  }
LAB_140766b57:
  iVar12 = (int)(((longlong)puVar13 - (longlong)puVar20) / 0x24);
  if (iVar12 == *(int *)(param_1 + 0x268)) {
    return 0;
  }
  iVar22 = *(int *)(param_1 + 0x268);
  uVar16 = (ulonglong)(*(longlong *)(param_1 + 0x260) != 0) - 1;
  uVar21 = uVar16 & (ulonglong)puVar1 | *(ulonglong *)(param_1 + 0x260);
  pfVar14 = (float *)(uVar21 + (longlong)iVar12 * 0x24);
  pfVar2 = (float *)((longlong)iVar22 * 0x24 + uVar21);
  pfVar11 = pfVar14;
  if (pfVar14 != pfVar2) {
    while (pfVar11 = pfVar11 + 9, pfVar11 != pfVar2) {
      if (*pfVar11 < *pfVar14) {
        pfVar14 = pfVar11;
      }
    }
  }
  if (pfVar14 !=
      (float *)(((ulonglong)puVar1 & uVar16 | *(ulonglong *)(param_1 + 0x260)) +
               (longlong)iVar22 * 0x24)) {
    lVar15 = (longlong)((longlong)pfVar14 - uVar21) / 0x12 +
             ((longlong)((longlong)pfVar14 - uVar21) >> 0x3f);
    iVar19 = (int)(lVar15 >> 1) - (int)(lVar15 >> 0x3f);
    iVar12 = (iVar22 - iVar19) + -1;
    if (iVar12 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(uVar21 + (longlong)iVar19 * 0x24),
                 (void *)(uVar21 + (longlong)(iVar19 + 1) * 0x24),(longlong)iVar12 * 0x24);
      iVar22 = *(int *)(param_1 + 0x268);
    }
    *(int *)(param_1 + 0x268) = iVar22 + -1;
    FUN_1407681f0(puVar1);
  }
  return 1;
}



// FUNCTION 140766ca0 FUN_140766ca0 body=92 status=ok
// SIG undefined FUN_140766ca0(void)

void FUN_140766ca0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x868);
  lVar2 = lVar1;
  while( true ) {
    if (lVar2 == lVar1 + (longlong)*(int *)(param_1 + 0x870) * 0x28) {
      FUN_140766d00(param_1,0xffffffff);
      return;
    }
    if (*(longlong *)(lVar2 + 8) == param_2) break;
    lVar2 = lVar2 + 0x28;
  }
  FUN_140766d00(param_1,(lVar2 - lVar1) / 0x28);
  return;
}



// FUNCTION 140766d00 FUN_140766d00 body=497 status=ok
// SIG undefined FUN_140766d00(void)

void FUN_140766d00(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 local_58;
  longlong local_50 [5];
  
  lVar7 = (longlong)param_2;
  if (param_2 != -1) {
    plVar1 = (longlong *)(param_1 + 0x868);
    lVar3 = *plVar1;
    if (param_3 != '\0') {
      FUN_1404cb7e0(lVar7 * 0x28 + 0x18 + lVar3,param_1 + 0x6f0,
                    *(undefined8 *)(lVar3 + 8 + lVar7 * 0x28));
    }
    lVar4 = *(longlong *)(param_1 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    fVar2 = *(float *)(lVar4 + 0x790);
    if (*(char *)(param_1 + 0x790) == '\0') {
      if (*(longlong *)(param_1 + 0x6f8) == 0) {
        fVar8 = 0.0;
      }
      else {
        local_58 = 0xffffffffffffffff;
        fVar8 = (float)FUN_142de77e0(*(longlong *)(param_1 + 0x6f8) + 0x158,0,0,&local_58);
      }
    }
    else {
      local_res20 = 0xffffffffffffffff;
      fVar8 = (float)FUN_142de77e0(param_1 + 0x798,0,0,&local_res20);
    }
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x818,local_res10,*(undefined8 *)(lVar3 + 8 + lVar7 * 0x28));
    if ((local_res10[0] == -1) ||
       (lVar4 = *(longlong *)(param_1 + 0x818) + (longlong)local_res10[0] * 0x18, lVar4 == 0)) {
      local_50[0] = lVar3 + 8 + lVar7 * 0x28;
      TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(param_1 + 0x818,local_res10,local_50,0);
      lVar4 = *(longlong *)(param_1 + 0x818) + (longlong)local_res10[0] * 0x18;
    }
    *(float *)(lVar4 + 8) = fVar8 + fVar2;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(*plVar1 + 0x18 + lVar7 * 0x28);
    iVar5 = *(int *)(param_1 + 0x870);
    iVar6 = (iVar5 - param_2) + -1;
    if (0 < iVar6) {
      iVar6 = 1;
    }
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + lVar7 * 0x28),
                 (void *)(*plVar1 + (longlong)(iVar5 - iVar6) * 0x28),(longlong)iVar6 * 0x28);
      iVar5 = *(int *)(param_1 + 0x870);
    }
    *(int *)(param_1 + 0x870) = iVar5 + -1;
    TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  return;
}



// FUNCTION 140766f00 FUN_140766f00 body=353 status=ok
// SIG undefined FUN_140766f00(void)

bool FUN_140766f00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 != (longlong *)(param_1 + 0x27f0)) {
    lVar1 = *(longlong *)(param_1 + 0x27f0);
    iVar3 = *(int *)(param_1 + 0x27f8);
    *(int *)(param_2 + 1) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(param_2,iVar3);
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)*param_2;
        puVar5 = (undefined4 *)(lVar1 + 4);
        do {
          *puVar4 = puVar5[-1];
          puVar4[1] = *puVar5;
          puVar4[2] = puVar5[1];
          puVar4[3] = puVar5[2];
          puVar4[4] = puVar5[3];
          puVar4[5] = puVar5[4];
          puVar4[6] = puVar5[5];
          puVar4[7] = puVar5[6];
          *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar5 + 7);
          *(undefined1 *)(puVar4 + 10) = *(undefined1 *)(puVar5 + 9);
          *(undefined8 *)(puVar4 + 0xb) = *(undefined8 *)(puVar5 + 10);
          puVar4[0xd] = puVar5[0xc];
          *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(puVar5 + 0xd);
          puVar4[0x10] = puVar5[0xf];
          *(byte *)(puVar4 + 0x11) =
               *(byte *)(puVar4 + 0x11) ^ (*(byte *)(puVar5 + 0x10) ^ *(byte *)(puVar4 + 0x11)) & 1;
          bVar2 = (*(byte *)(puVar5 + 0x10) ^ *(byte *)(puVar4 + 0x11)) & 2 ^
                  *(byte *)(puVar4 + 0x11);
          *(byte *)(puVar4 + 0x11) = bVar2;
          bVar2 = (*(byte *)(puVar5 + 0x10) ^ bVar2) & 4 ^ bVar2;
          *(byte *)(puVar4 + 0x11) = bVar2;
          bVar2 = (*(byte *)(puVar5 + 0x10) ^ bVar2) & 8 ^ bVar2;
          *(byte *)(puVar4 + 0x11) = bVar2;
          bVar2 = (*(byte *)(puVar5 + 0x10) ^ bVar2) & 0x10 ^ bVar2;
          *(byte *)(puVar4 + 0x11) = bVar2;
          *(byte *)(puVar4 + 0x11) = (*(byte *)(puVar5 + 0x10) ^ bVar2) & 0x20 ^ bVar2;
          iVar3 = iVar3 + -1;
          puVar4 = puVar4 + 0x12;
          puVar5 = puVar5 + 0x12;
        } while (iVar3 != 0);
      }
    }
  }
  return 0 < (int)param_2[1];
}



// FUNCTION 140767070 FUN_140767070 body=70 status=ok
// SIG undefined FUN_140767070(void)

void FUN_140767070(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14075f6c0(param_1 + -0x5b0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001407670a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1407670c0 FUN_1407670c0 body=301 status=ok
// SIG undefined FUN_1407670c0(void)

ulonglong FUN_1407670c0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_142c6d1b0(param_2,(longlong *)(param_1 + 0x27f0));
    if ((int)uVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x27f0);
      lVar3 = (longlong)(int)uVar2;
      *param_3 = *(undefined4 *)(lVar1 + lVar3 * 0x48);
      param_3[1] = *(undefined4 *)(lVar1 + 4 + lVar3 * 0x48);
      param_3[2] = *(undefined4 *)(lVar1 + 8 + lVar3 * 0x48);
      param_3[3] = *(undefined4 *)(lVar1 + 0xc + lVar3 * 0x48);
      param_3[4] = *(undefined4 *)(lVar1 + 0x10 + lVar3 * 0x48);
      param_3[5] = *(undefined4 *)(lVar1 + 0x14 + lVar3 * 0x48);
      param_3[6] = *(undefined4 *)(lVar1 + 0x18 + lVar3 * 0x48);
      param_3[7] = *(undefined4 *)(lVar1 + 0x1c + lVar3 * 0x48);
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(lVar1 + 0x20 + lVar3 * 0x48);
      *(undefined1 *)(param_3 + 10) = *(undefined1 *)(lVar1 + 0x28 + lVar3 * 0x48);
      *(undefined8 *)(param_3 + 0xb) = *(undefined8 *)(lVar1 + 0x2c + lVar3 * 0x48);
      param_3[0xd] = *(undefined4 *)(lVar1 + 0x34 + lVar3 * 0x48);
      *(undefined8 *)(param_3 + 0xe) = *(undefined8 *)(lVar1 + 0x38 + lVar3 * 0x48);
      param_3[0x10] = *(undefined4 *)(lVar1 + 0x40 + lVar3 * 0x48);
      *(byte *)(param_3 + 0x11) =
           *(byte *)(param_3 + 0x11) ^
           (*(byte *)(param_3 + 0x11) ^ *(byte *)(lVar1 + 0x44 + lVar3 * 0x48)) & 1;
      bVar4 = (*(byte *)(lVar1 + 0x44 + lVar3 * 0x48) ^ *(byte *)(param_3 + 0x11)) & 2 ^
              *(byte *)(param_3 + 0x11);
      *(byte *)(param_3 + 0x11) = bVar4;
      bVar4 = (*(byte *)(lVar1 + 0x44 + lVar3 * 0x48) ^ bVar4) & 4 ^ bVar4;
      *(byte *)(param_3 + 0x11) = bVar4;
      bVar4 = (*(byte *)(lVar1 + 0x44 + lVar3 * 0x48) ^ bVar4) & 8 ^ bVar4;
      *(byte *)(param_3 + 0x11) = bVar4;
      bVar4 = (*(byte *)(lVar1 + 0x44 + lVar3 * 0x48) ^ bVar4) & 0x10 ^ bVar4;
      *(byte *)(param_3 + 0x11) = bVar4;
      *(byte *)(param_3 + 0x11) = (*(byte *)(lVar1 + 0x44 + lVar3 * 0x48) ^ bVar4) & 0x20 ^ bVar4;
      return 1;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1407671f0 FUN_1407671f0 body=86 status=ok
// SIG undefined FUN_1407671f0(void)

void FUN_1407671f0(undefined8 param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_2);
  FUN_140767250(param_1,uVar1,*(undefined8 *)(param_2 + 8),param_3,param_4);
  return;
}



// FUNCTION 140767250 FUN_140767250 body=697 status=ok
// SIG undefined FUN_140767250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140767250(longlong param_1,longlong *param_2,undefined8 param_3,char param_4,undefined1 param_5)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_res10;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  uVar4 = ALoreItem::GetPrivateStaticClass();
  lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
  if (lVar5 == 0) {
    return 0;
  }
  cVar3 = FUN_140753d10(param_1,param_2,param_3);
  if (cVar3 == '\0') {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x1f0) != 0) && (*(longlong *)(param_1 + 0x1f8) != 0)) {
    if (param_4 == '\0') {
      return 0;
    }
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x118);
    local_38 = *(undefined8 *)(param_1 + 0x1d8);
    local_28 = *(undefined8 *)(param_1 + 0x200);
    lVar6 = param_1 + 0x1b0;
    if (*(char *)(param_1 + 0x218) != '\x03') {
      lVar6 = param_1 + 400;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar6,&local_38);
    FUN_140755420(param_1,0);
  }
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  lVar6 = *(longlong *)(param_1 + 0x1d8);
  if (lVar6 == 0) {
    lVar6 = FUN_140765020(*(undefined8 *)(param_1 + 0x118));
    *(longlong *)(param_1 + 0x1d8) = lVar6;
    if (lVar6 == 0) goto LAB_1407674e3;
  }
  if (*(longlong *)(lVar6 + 0x488) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x488) + 0x168);
    if (lVar7 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar7 + 0x220);
      local_40 = *(undefined4 *)(lVar7 + 0x228);
    }
    local_38 = local_48;
    local_30 = CONCAT44(local_30._4_4_,local_40);
    lVar7 = FUN_140758360(lVar5,param_3,&local_38,0);
    if ((lVar7 != 0) &&
       (cVar3 = FUN_140767510(lVar5,lVar6,param_3,param_5,param_1 + 0x200), cVar3 != '\0')) {
      uVar4 = 0;
      bVar2 = false;
      local_res10 = lVar6;
      if (*(char *)(lVar7 + 0x6f0) != '\0') {
        if (*(char *)(lVar7 + 0x72c) != '\0') {
          bVar2 = *(int *)(lVar7 + 0x730) <= *(int *)(lVar7 + 0x740);
        }
        if (bVar2) {
          plVar8 = *(longlong **)(lVar7 + 0x738);
          plVar1 = plVar8 + *(int *)(lVar7 + 0x740);
          for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
            if (*plVar8 == lVar6) goto LAB_140767457;
          }
        }
        else {
LAB_140767457:
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar7 + 0x738,&local_res10);
        }
      }
      *(longlong *)(param_1 + 0x1f8) = lVar7;
      *(longlong *)(param_1 + 0x1f0) = lVar5;
      *(longlong *)(param_1 + 0x1e8) = lVar6;
      if (*(longlong *)(lVar6 + 0x568) != 0) {
        FUN_142bcad50(*(longlong *)(lVar6 + 0x568),&DAT_146859130,*(undefined8 *)(lVar5 + 0x118));
      }
      local_28 = *(undefined8 *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x1f0) != 0) {
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x118);
      }
      local_38 = *(undefined8 *)(param_1 + 0x1d8);
      local_30 = uVar4;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x180,&local_38);
      *(undefined1 *)(param_1 + 0x2a8) = 0;
      return 1;
    }
  }
LAB_1407674e3:
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  return 0;
}



// FUNCTION 140767510 FUN_140767510 body=468 status=ok
// SIG undefined FUN_140767510(void)

undefined8
FUN_140767510(longlong param_1,longlong param_2,longlong param_3,char param_4,longlong param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined8 local_res10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x490);
  lVar6 = lVar2;
  while( true ) {
    if (lVar6 == (longlong)*(int *)(param_1 + 0x498) * 0x80 + lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar6 + 8) == param_3) break;
    lVar6 = lVar6 + 0x80;
  }
  iVar4 = (int)(lVar6 - lVar2 >> 7);
  if (iVar4 == -1) {
    return 0;
  }
  pcVar8 = (char *)((longlong)iVar4 * 0x80 + lVar2);
  lVar2 = *(longlong *)(pcVar8 + 0x10);
  if (lVar2 == 0) {
    return 0;
  }
  if (*pcVar8 == '\0') {
    return 0;
  }
  if ((*(char *)(lVar2 + 0x148) != '\0') && (*(int *)(lVar2 + 0x14c) <= *(int *)(pcVar8 + 0x28))) {
    return 0;
  }
  uStack_48._0_5_ = CONCAT14(1,(undefined4)uStack_48);
  local_50 = param_2;
  if ((param_4 == '\0') && (*(char *)(lVar2 + 0xc0) != '\0')) {
    local_res10 = 0xffffffffffffffff;
    uVar9 = FUN_142de77e0(lVar2 + 200,param_2,0,&local_res10,param_3);
    uStack_48 = CONCAT44(uStack_48._4_4_,uVar9);
  }
  else {
    uVar9 = 0x7f7fffff;
    uStack_48 = CONCAT44(uStack_48._4_4_,0x7f7fffff);
  }
  plVar3 = *(longlong **)(pcVar8 + 0x20);
  iVar4 = *(int *)(pcVar8 + 0x28);
  plVar7 = plVar3;
  do {
    if (plVar7 == plVar3 + (longlong)iVar4 * 2) {
LAB_14076764c:
      *(int *)(pcVar8 + 0x28) = iVar4 + 1;
      if (*(int *)(pcVar8 + 0x2c) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pcVar8 + 0x20,iVar4);
      }
      puVar1 = (undefined4 *)(*(longlong *)(pcVar8 + 0x20) + (longlong)iVar4 * 0x10);
      *puVar1 = (undefined4)local_50;
      puVar1[1] = local_50._4_4_;
      puVar1[2] = (undefined4)uStack_48;
      puVar1[3] = uStack_48._4_4_;
      iVar5 = iVar4;
LAB_140767675:
      if (iVar5 == -1) {
        return 0;
      }
      FUN_14075f840(pcVar8,param_5);
      *(undefined4 *)(param_5 + 0xc) = uVar9;
      FUN_140753480(param_1,param_3,param_2,0);
      local_50 = param_2;
      uStack_48 = param_3;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x188,&local_50);
      return 1;
    }
    if (*plVar7 == param_2) {
      iVar5 = (int)((longlong)plVar7 - (longlong)plVar3 >> 4);
      if (iVar5 != -1) goto LAB_140767675;
      goto LAB_14076764c;
    }
    plVar7 = plVar7 + 2;
  } while( true );
}



// FUNCTION 1407676f0 FUN_1407676f0 body=194 status=ok
// SIG undefined FUN_1407676f0(void)

void FUN_1407676f0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  longlong lVar5;
  
  bVar2 = *(byte *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x30) = 0;
  cVar3 = '\0';
  if (1 < bVar2) {
    FUN_140754f20(param_1);
    cVar3 = *(char *)(param_1 + 0x30);
  }
  *(bool *)(param_1 + 0x28) = cVar3 == '\x04';
  *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  lVar5 = *(longlong *)(param_1 + 8);
  lVar1 = lVar5 + (longlong)*(int *)(param_1 + 0x10) * 0x18;
  if (lVar5 != lVar1) {
    piVar4 = (int *)(lVar5 + 0x14);
    do {
      piVar4[-1] = 0;
      if (*piVar4 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar4 + -3,0);
      }
      lVar5 = lVar5 + 0x18;
      piVar4 = piVar4 + 6;
    } while (lVar5 != lVar1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  *(int *)(param_1 + 0x2c) = DAT_146858ee0;
  DAT_146858ee0 = DAT_146858ee0 + 1;
  return;
}



// FUNCTION 1407677c0 FUN_1407677c0 body=231 status=ok
// SIG undefined FUN_1407677c0(void)

void FUN_1407677c0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x668))(), lVar3 != 0)) {
    lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
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
      plVar6 = *(longlong **)(lVar3 + 0x650);
      uVar7 = 0;
      uVar8 = (longlong)*(int *)(lVar3 + 0x658) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(lVar3 + 0x658) < plVar6) {
        uVar8 = uVar7;
      }
      if (uVar8 != 0) {
        do {
          plVar1 = (longlong *)*plVar6;
          if (plVar1 != (longlong *)0x0) {
            uVar5 = UCircularThrobber::GetPrivateStaticClass();
            lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
            if (lVar3 != 0) {
              FUN_142df3030(lVar3);
            }
          }
          plVar6 = plVar6 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar8);
      }
    }
  }
  return;
}



// FUNCTION 1407678b0 FUN_1407678b0 body=12 status=ok
// SIG undefined FUN_1407678b0(void)

void FUN_1407678b0(longlong param_1)

{
  FUN_14076c7a0(param_1,*(undefined8 *)(param_1 + 0x610));
  return;
}



// FUNCTION 1407678c0 ResizeAllocation body=163 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FDebrisCSGPoint>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x600);
  if (param_3 < 0x41) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0x600);
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
        *(void **)((longlong)param_1 + 0x600) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x600) = uVar2;
  return;
}



// FUNCTION 140767970 FUN_140767970 body=163 status=ok
// SIG undefined FUN_140767970(void)

void FUN_140767970(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x240);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x24);
    pvVar1 = *(void **)((longlong)param_1 + 0x240);
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
        *(void **)((longlong)param_1 + 0x240) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x24);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x240) = uVar2;
  return;
}



// FUNCTION 140767a20 FUN_140767a20 body=163 status=ok
// SIG undefined FUN_140767a20(void)

void FUN_140767a20(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xc0);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0xc);
    pvVar1 = *(void **)((longlong)param_1 + 0xc0);
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
        *(void **)((longlong)param_1 + 0xc0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0xc);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar2;
  return;
}



// FUNCTION 140767ad0 ResizeAllocation body=151 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<4,FDefaultAllocator>::ForElementType<FCompactPose>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x60);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0x60);
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
        *(void **)((longlong)param_1 + 0x60) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar2;
  return;
}



// FUNCTION 140767b70 FUN_140767b70 body=161 status=ok
// SIG undefined FUN_140767b70(void)

void FUN_140767b70(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x80);
  if (param_3 < 0x21) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 2);
    pvVar1 = *(void **)((longlong)param_1 + 0x80);
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
        *(void **)((longlong)param_1 + 0x80) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar2;
  return;
}



// FUNCTION 140767c20 FUN_140767c20 body=132 status=ok
// SIG undefined FUN_140767c20(void)

void FUN_140767c20(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar2 = 0x10;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x24,0);
      iVar2 = (int)(uVar1 / 0x24);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != param_3) {
    FUN_140767970(param_1,0,iVar2,0x24);
  }
  *(int *)(param_1 + 0x24c) = iVar2;
  return;
}



// FUNCTION 140767cb0 ResizeForCopy body=111 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

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
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 7,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 140767d20 FUN_140767d20 body=157 status=ok
// SIG undefined FUN_140767d20(void)

void FUN_140767d20(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x608);
  if (uVar1 < 0x41) {
    iVar4 = 0x40;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x60c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x18,0);
    iVar4 = (int)(uVar3 / 0x18);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x60c) = iVar4;
  TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FDebrisCSGPoint>::
  ResizeAllocation(param_1,param_2,iVar4,0x18);
  return;
}



// FUNCTION 140767dc0 FUN_140767dc0 body=303 status=ok
// SIG undefined FUN_140767dc0(void)

void FUN_140767dc0(void *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x2708);
  if (uVar1 < 0x11) {
    uVar6 = 0x10;
  }
  else {
    lVar7 = 4;
    if ((*(int *)((longlong)param_1 + 0x270c) != 0) || (4 < uVar1)) {
      lVar7 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar7 * 0x270,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    lVar7 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar2,8);
    uVar6 = (uint)((uVar3 - lVar7 >> 1) + lVar7 >> 9);
    if ((int)uVar6 < (int)uVar1) {
      uVar6 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x270c) = uVar6;
  pvVar4 = *(void **)((longlong)param_1 + 0x2700);
  if (uVar6 < 0x11) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 * 0x270);
    pvVar4 = *(void **)((longlong)param_1 + 0x2700);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar7 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar6 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar6 * 0x270,0);
        *(void **)((longlong)param_1 + 0x2700) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 * 0x270);
      return;
    }
    lVar7 = (longlong)(int)uVar6 * 0x270;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar7,0);
  *(undefined8 *)((longlong)param_1 + 0x2700) = uVar5;
  return;
}



// FUNCTION 140767ef0 FUN_140767ef0 body=157 status=ok
// SIG undefined FUN_140767ef0(void)

void FUN_140767ef0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x248);
  if (uVar1 < 0x11) {
    iVar4 = 0x10;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x24c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x24,0);
    iVar4 = (int)(uVar3 / 0x24);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x24c) = iVar4;
  FUN_140767970(param_1,param_2,iVar4,0x24);
  return;
}



// FUNCTION 140767f90 ResizeGrow body=145 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
     ResizeGrow(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x5c,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 6);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x5c,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 140768030 ResizeGrow body=157 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (uVar1 < 0x11) {
    iVar4 = 0x10;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xcc) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0xc,0);
    iVar4 = (int)(uVar3 / 0xc);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xcc) = iVar4;
  FUN_140767a20(param_1,param_2,iVar4,0xc);
  return;
}



// FUNCTION 1407680d0 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FCompactPose,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x6c) != 0) || (4 < uVar1)) {
      uVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar2 = FMemory::QuantizeSize(uVar3 * 0x18,0);
    uVar3 = uVar2 / 0x18 & 0xffffffff;
    if ((int)(uVar2 / 0x18) < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x6c) = (int)uVar3;
  TInlineAllocator<4,FDefaultAllocator>::ForElementType<FCompactPose>::ResizeAllocation
            (param_1,param_2,uVar3,0x18);
  return;
}



// FUNCTION 140768160 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0xf0,0);
  iVar4 = (int)(uVar3 / 0xf0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xf0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1407681f0 FUN_1407681f0 body=178 status=ok
// SIG undefined FUN_1407681f0(void)

void FUN_1407681f0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x248);
  uVar3 = *(uint *)(param_1 + 0x24c);
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
    goto LAB_140768275;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x24)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x24,0);
        uVar3 = *(uint *)(param_1 + 0x24c);
        uVar2 = (uint)(uVar1 / 0x24);
      }
      goto LAB_140768275;
    }
    if (uVar2 == 0) goto LAB_140768275;
  }
  uVar2 = uVar3;
LAB_140768275:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x24c) = uVar2;
    FUN_140767970(param_1,*(undefined4 *)(param_1 + 0x248),uVar2,0x24);
    return;
  }
  return;
}



// FUNCTION 1407682b0 FUN_1407682b0 body=162 status=ok
// SIG undefined FUN_1407682b0(void)

ulonglong FUN_1407682b0(ulonglong *param_1)

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
  if ((0x3fff < uVar2 * 0x5c) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0x5c,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 6);
      }
      goto LAB_140768324;
    }
    if (iVar5 == 0) goto LAB_140768324;
  }
  iVar5 = iVar6;
LAB_140768324:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x5c,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140768360 FUN_140768360 body=178 status=ok
// SIG undefined FUN_140768360(void)

void FUN_140768360(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 200);
  uVar3 = *(uint *)(param_1 + 0xcc);
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
    goto LAB_1407683e5;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0xc)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0xc,0);
        uVar3 = *(uint *)(param_1 + 0xcc);
        uVar2 = (uint)(uVar1 / 0xc);
      }
      goto LAB_1407683e5;
    }
    if (uVar2 == 0) goto LAB_1407683e5;
  }
  uVar2 = uVar3;
LAB_1407683e5:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0xcc) = uVar2;
    FUN_140767a20(param_1,*(undefined4 *)(param_1 + 200),uVar2,0xc);
    return;
  }
  return;
}



// FUNCTION 140768420 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FVector,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0xc) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0xc,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
        iVar4 = (int)(uVar3 / 0xc);
      }
      goto LAB_140768496;
    }
    if (iVar4 == 0) goto LAB_140768496;
  }
  iVar4 = iVar5;
LAB_140768496:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xc,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1407684d0 FUN_1407684d0 body=127 status=ok
// SIG undefined FUN_1407684d0(void)

void FUN_1407684d0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      iVar2 = 0x40;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x60c)) {
    *(int *)(param_1 + 0x60c) = iVar2;
    TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FDebrisCSGPoint>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x608),iVar2,0x18);
  }
  return;
}



// FUNCTION 140768550 FUN_140768550 body=127 status=ok
// SIG undefined FUN_140768550(void)

void FUN_140768550(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar2 = 0x10;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x24,0);
      iVar2 = (int)(uVar1 / 0x24);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x24c)) {
    *(int *)(param_1 + 0x24c) = iVar2;
    FUN_140767970(param_1,*(undefined4 *)(param_1 + 0x248),iVar2,0x24);
  }
  return;
}



// FUNCTION 1407685d0 FUN_1407685d0 body=118 status=ok
// SIG undefined FUN_1407685d0(void)

void FUN_1407685d0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar2 = 4;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x6c)) {
    *(int *)(param_1 + 0x6c) = iVar2;
    TInlineAllocator<4,FDefaultAllocator>::ForElementType<FCompactPose>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x68),iVar2,0x18);
  }
  return;
}



// FUNCTION 140768650 FUN_140768650 body=1002 status=ok
// SIG undefined FUN_140768650(void)

void FUN_140768650(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  longlong lVar13;
  undefined4 uVar14;
  float fVar15;
  LARGE_INTEGER local_res18 [2];
  longlong *local_a8;
  int local_a0;
  double local_98;
  undefined8 local_90;
  char local_87;
  byte local_86;
  
  plVar7 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar8 = (**(code **)(*plVar7 + 0x668))(plVar7), lVar8 != 0)) {
      lVar9 = ARemnantWeaponMod::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar9 = FUN_14075eaf0(lVar8), lVar9 != 0)) {
        FAIDataProviderValue::BindData(param_1 + 0x1e0,plVar7,*(undefined4 *)(param_2 + 0x30));
        uVar14 = FAIDataProviderFloatValue::GetValue(param_1 + 0x1e0);
        FAIDataProviderValue::BindData(param_1 + 0x60,plVar7,*(undefined4 *)(param_2 + 0x30));
        cVar4 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
        FUN_142bd2270(&local_a8,param_1,param_2,0xffffffff);
LAB_1407687d0:
        if ((int)local_a8[1] <= local_a0) goto LAB_14076881d;
        if ((*(byte *)((longlong)local_a8 + 0x156) & 1) != 0) goto LAB_14076881d;
        if ((0.0 <= local_98) &&
           (QueryPerformanceCounter(local_res18),
           local_98 <= (double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0))
        goto LAB_14076881d;
        bVar2 = true;
        do {
          if (!bVar2) {
            *(int *)(local_a8 + 0x27) = local_a0;
            return;
          }
          lVar10 = FUN_142be4fb0(param_1,param_2,local_a0);
          cVar12 = '\0';
          if (lVar10 != 0) {
            lVar11 = FUN_140759520(lVar9 + 0x48,*(undefined8 *)(param_1 + 0x1d8),lVar8,lVar10);
            if ((lVar11 == 0) || (iVar6 = FUN_14075fb80(lVar11,lVar8), iVar6 == -1)) {
LAB_140768899:
              bVar2 = false;
            }
            else {
              lVar13 = *(longlong *)(lVar11 + 0x260);
              if (*(longlong *)(lVar11 + 0x260) == 0) {
                lVar13 = lVar11 + 0x20;
              }
              if (*(char *)(lVar13 + 0x10 + (longlong)iVar6 * 0x24) != '\0') goto LAB_140768899;
              bVar2 = true;
            }
            if (bVar2) {
              cVar12 = '\x01';
            }
            else {
              cVar5 = FUN_140753a50(lVar9 + 0x48,*(undefined8 *)(param_1 + 0x1d8),lVar8,0,uVar14,
                                    lVar10);
              cVar12 = '\0';
              if (cVar5 != '\0') {
                cVar12 = '\x01';
              }
            }
          }
          if ((local_86 & 2) == 0) {
            cVar5 = *(char *)(param_1 + 0x5a);
            if ((((cVar5 == '\0') || (cVar5 == '\x01')) || (cVar5 == '\x02')) ||
               ((cVar5 != '\x03' || (cVar12 != cVar4)))) {
              if ((local_86 & 4) == 0) {
                fVar15 = 0.0;
                goto LAB_140768911;
              }
            }
            else {
              fVar15 = 1.0;
LAB_140768911:
              sVar3 = local_90._4_2_;
              if (local_87 == '\0') {
                local_90 = CONCAT44(local_90._4_4_,(float)local_90 + fVar15);
              }
              else if (local_87 == '\x01') {
                if ((sVar3 == 0) || (fVar15 < (float)local_90)) {
LAB_14076894c:
                  local_90 = CONCAT44(local_90._4_4_,fVar15);
                }
              }
              else if (local_87 == '\x02') {
                if (sVar3 == 0) goto LAB_14076894c;
                if ((float)local_90 < fVar15) {
                  local_90 = CONCAT44(local_90._4_4_,fVar15);
                }
              }
              local_90._0_6_ = CONCAT24(sVar3 + 1,(float)local_90);
            }
            local_90 = CONCAT26(local_90._6_2_ + 1,(undefined6)local_90);
          }
          FUN_142bf3280();
          if ((*(byte *)((longlong)local_a8 + 0x156) & 1) != 0) goto LAB_1407687d0;
          local_90 = 0;
          local_86 = local_86 & 0xfd | 1;
          local_a0 = local_a0 + 1;
          if (local_a0 < (int)local_a8[1]) goto LAB_1407689b0;
LAB_14076881d:
          bVar2 = false;
        } while( true );
      }
    }
  }
  return;
LAB_1407689b0:
  do {
    uVar1 = *(uint *)(*local_a8 + 4 + (longlong)local_a0 * 0xc);
    if (((uVar1 >> 0x1e & 1) == 0) && (-1 < (int)uVar1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  } while ((!bVar2) && (local_a0 = local_a0 + 1, local_a0 < (int)local_a8[1]));
  goto LAB_1407687d0;
}



// FUNCTION 140768a40 FUN_140768a40 body=2321 status=ok
// SIG undefined FUN_140768a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140768a40(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  short sVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  char local_res18;
  undefined1 local_res20 [8];
  char local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  longlong *local_180;
  int local_178;
  double local_170;
  float local_168;
  undefined4 local_164;
  char local_15f;
  byte local_15e;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  LARGE_INTEGER local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  float local_108;
  float fStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined1 local_f8 [12];
  undefined1 local_ec [180];
  
  lVar8 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar8 == 0) {
    return;
  }
  FAIDataProviderValue::BindData(param_1 + 0x90,lVar8,*(undefined4 *)(param_2 + 0x30));
  fVar19 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x90);
  FAIDataProviderValue::BindData(param_1 + 0xc0,lVar8,*(undefined4 *)(param_2 + 0x30));
  fVar20 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xc0);
  FAIDataProviderValue::BindData(param_1 + 0x1f8,lVar8,*(undefined4 *)(param_2 + 0x30));
  uVar21 = FAIDataProviderFloatValue::GetValue(param_1 + 0x1f8);
  FAIDataProviderValue::BindData(param_1 + 0x228,lVar8,*(undefined4 *)(param_2 + 0x30));
  uVar22 = FAIDataProviderFloatValue::GetValue(param_1 + 0x228);
  FAIDataProviderValue::BindData(param_1 + 0x278,lVar8,*(undefined4 *)(param_2 + 0x30));
  uVar23 = FAIDataProviderFloatValue::GetValue(param_1 + 0x278);
  local_158 = uVar23;
  FAIDataProviderValue::BindData(param_1 + 0x2a8,lVar8,*(undefined4 *)(param_2 + 0x30));
  uVar24 = FAIDataProviderFloatValue::GetValue(param_1 + 0x2a8);
  uVar2 = *(undefined8 *)(param_1 + 0x1e0);
  uVar16 = 0;
  uVar17 = 0;
  local_190 = 0;
  local_188 = 0;
  local_154 = uVar24;
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    local_res18 = UEnvQueryTest::IsContextPerItem(param_1,*(undefined8 *)(param_1 + 0x1e8));
    uVar17 = uVar16;
    if (local_res18 == '\0') {
LAB_140768c1d:
      FUN_140759a70(param_1,&local_190,param_2,*(undefined8 *)(param_1 + 0x1d8),
                    *(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8),
                    *(char *)(param_1 + 0x1f0) == '\x01',&DAT_1468b5d90,&DAT_1468b5da0);
      if ((int)local_188 == 0) goto LAB_1407692dd;
      FUN_14074f510(local_res20,&local_190,uVar21,uVar22);
      uVar17 = local_188 >> 0x20;
    }
  }
  else {
    cVar7 = UEnvQueryTest::IsContextPerItem(param_1,*(undefined8 *)(param_1 + 0x1d8));
    if ((cVar7 == '\0') && (cVar7 = UEnvQueryTest::IsContextPerItem(param_1,uVar2), cVar7 == '\0'))
    {
      local_res18 = '\0';
      goto LAB_140768c1d;
    }
    local_res18 = '\x01';
  }
  uVar2 = *(undefined8 *)(param_1 + 0x260);
  uVar15 = 0;
  iVar12 = 0;
  local_1a0 = 0;
  local_198 = 0;
  if (*(char *)(param_1 + 0x270) == '\x01') {
    local_1a8 = UEnvQueryTest::IsContextPerItem(param_1,*(undefined8 *)(param_1 + 0x268));
    iVar12 = 0;
    if (local_1a8 != '\0') goto LAB_140768d96;
  }
  else {
    cVar7 = UEnvQueryTest::IsContextPerItem(param_1,*(undefined8 *)(param_1 + 600));
    if ((cVar7 != '\0') || (cVar7 = UEnvQueryTest::IsContextPerItem(param_1,uVar2), cVar7 != '\0'))
    {
      local_1a8 = '\x01';
      goto LAB_140768d96;
    }
    local_1a8 = '\0';
  }
  FUN_140759a70(param_1,&local_1a0,param_2,*(undefined8 *)(param_1 + 600),
                *(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x268),
                *(char *)(param_1 + 0x270) == '\x01',&DAT_1468b5d90,&DAT_1468b5da0);
  uVar16 = local_1a0;
  if ((int)local_198 == 0) {
LAB_1407692d0:
    if (uVar16 != 0) {
      FMemory::Free(uVar16);
    }
LAB_1407692dd:
    if (local_190 != 0) {
      FMemory::Free(local_190);
    }
    return;
  }
  FUN_14074f510(local_res20,&local_1a0,uVar23,uVar24);
  uVar15 = local_198 & 0xffffffff;
  uVar16 = local_1a0;
  iVar12 = local_198._4_4_;
LAB_140768d96:
  FUN_142bd2270(&local_180,param_1,param_2,0xffffffff);
  do {
LAB_140768df0:
    if (((int)local_180[1] <= local_178) || ((*(byte *)((longlong)local_180 + 0x156) & 1) != 0)) {
LAB_1407692a6:
      *(int *)(local_180 + 0x27) = local_178;
      goto LAB_1407692d0;
    }
    sVar13 = (short)local_164;
    if (0.0 <= local_170) {
      QueryPerformanceCounter(&local_130);
      if (local_170 <= (double)local_130.QuadPart * DAT_1468b02f8 + 16777216.0) goto LAB_1407692a6;
      sVar13 = (short)local_164;
    }
    if ((local_res18 != '\0') || (local_1a8 != '\0')) {
      if ((*(char *)(param_1 + 0x1f0) == '\x01') && (*(char *)(param_1 + 0x270) == '\x01')) {
        local_120 = DAT_1468b5d98;
        local_128 = _DAT_1468b5d90;
        local_150 = _DAT_1468b5d90;
        local_148 = DAT_1468b5d98;
LAB_140768eec:
        puVar9 = (undefined8 *)FUN_142be5290(param_1,local_ec,param_2,local_178);
      }
      else {
        puVar9 = (undefined8 *)FUN_142be5200(param_1,local_f8,param_2,local_178);
        local_150 = *puVar9;
        local_148 = *(undefined4 *)(puVar9 + 1);
        if ((*(char *)(param_1 + 0x1f0) == '\x01') || (*(char *)(param_1 + 0x270) == '\x01'))
        goto LAB_140768eec;
        local_114 = DAT_1468b5da8;
        puVar9 = &local_11c;
        local_11c = DAT_1468b5da0;
      }
      local_140 = *puVar9;
      local_138 = *(undefined4 *)(puVar9 + 1);
      if (local_res18 != '\0') {
        local_188 = local_188 & 0xffffffff00000000;
        if (((int)uVar17 < 0) && ((int)uVar17 != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(&local_190,0);
        }
        FUN_140759a70(param_1,&local_190,param_2,*(undefined8 *)(param_1 + 0x1d8),
                      *(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8),
                      *(char *)(param_1 + 0x1f0) == '\x01',&local_150,&local_140);
        FUN_14074f510(local_res20,&local_190,uVar21,uVar22);
      }
      if (local_1a8 != '\0') {
        local_198 = local_198 & 0xffffffff00000000;
        if ((iVar12 < 0) && (iVar12 != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(&local_1a0,0);
        }
        FUN_140759a70(param_1,&local_1a0,param_2,*(undefined8 *)(param_1 + 600),
                      *(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x268),
                      *(char *)(param_1 + 0x270) == '\x01',&local_150,&local_140);
        FUN_14074f510(local_res20,&local_1a0,uVar23,uVar24);
        uVar15 = local_198 & 0xffffffff;
        uVar16 = local_1a0;
      }
      sVar13 = (short)local_164;
    }
    if (0 < (int)local_188) {
      uVar17 = local_188 & 0xffffffff;
      fVar3 = (float)DAT_146858f90;
      fVar4 = DAT_146858f90._4_4_;
      fVar5 = DAT_146858f90._8_4_;
      fVar6 = DAT_146858f90._12_4_;
      pfVar11 = (float *)(local_190 + 8);
      fVar30 = local_168;
      do {
        if (0 < (int)uVar15) {
          pfVar10 = (float *)(uVar16 + 8);
          uVar14 = uVar15;
          do {
            auVar25._4_4_ = pfVar10[-1] - pfVar11[-1];
            auVar25._0_4_ = pfVar10[-2] - pfVar11[-2];
            auVar25._8_4_ = *pfVar10 - *pfVar11;
            auVar25._12_4_ = 0;
            auVar25 = divps(auVar25,_DAT_146858f90);
            fVar26 = (pfVar10[-2] - pfVar11[-2]) - (float)(int)auVar25._0_4_ * fVar3;
            fVar27 = (pfVar10[-1] - pfVar11[-1]) - (float)(int)auVar25._4_4_ * fVar4;
            fVar28 = (*pfVar10 - *pfVar11) - (float)(int)auVar25._8_4_ * fVar5;
            fVar29 = 0.0 - (float)(int)auVar25._12_4_ * fVar6;
            local_108 = (float)(-(uint)(0.0 <= fVar26) & ((uint)(fVar26 + fVar3) ^ (uint)fVar26) ^
                               (uint)(fVar26 + fVar3));
            fStack_104 = (float)(-(uint)(0.0 <= fVar27) & ((uint)(fVar27 + fVar4) ^ (uint)fVar27) ^
                                (uint)(fVar27 + fVar4));
            fVar26 = (float)(-(uint)(0.0 <= fVar28) & ((uint)(fVar28 + fVar5) ^ (uint)fVar28) ^
                            (uint)(fVar28 + fVar5));
            fVar27 = (float)(-(uint)(0.0 <= fVar29) & ((uint)(fVar29 + fVar6) ^ (uint)fVar29) ^
                            (uint)(fVar29 + fVar6));
            local_108 = (float)(((uint)(local_108 - fVar3) ^ (uint)local_108) &
                                -(uint)(_DAT_146858f80 < local_108) ^ (uint)local_108);
            fStack_104 = (float)(((uint)(fStack_104 - fVar4) ^ (uint)fStack_104) &
                                 -(uint)(fRam0000000146858f84 < fStack_104) ^ (uint)fStack_104);
            uStack_100 = ((uint)(fVar26 - fVar5) ^ (uint)fVar26) &
                         -(uint)(fRam0000000146858f88 < fVar26) ^ (uint)fVar26;
            uStack_fc = ((uint)(fVar27 - fVar6) ^ (uint)fVar27) &
                        -(uint)(fRam0000000146858f8c < fVar27) ^ (uint)fVar27;
            fVar26 = 0.0;
            if (*(char *)(param_1 + 0x2d8) != '\0') {
              fVar26 = fStack_104 * fStack_104;
            }
            if (*(char *)(param_1 + 0x2d9) != '\0') {
              fVar26 = fVar26 + local_108 * local_108;
            }
            fVar26 = SQRT(fVar26);
            if ((local_15e >> 1 & 1) == 0) {
              if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_14076917f:
                if (local_15f == '\0') {
                  fVar30 = fVar30 + fVar26;
                  local_168 = fVar30;
                }
                else if (local_15f == '\x01') {
                  if ((sVar13 == 0) || (fVar26 < fVar30)) {
LAB_1407691b2:
                    fVar30 = fVar26;
                    local_168 = fVar26;
                  }
                }
                else if (local_15f == '\x02') {
                  if (sVar13 == 0) goto LAB_1407691b2;
                  if (fVar30 < fVar26) {
                    fVar30 = fVar26;
                    local_168 = fVar26;
                  }
                }
                sVar13 = sVar13 + 1;
                local_164 = CONCAT22(local_164._2_2_,sVar13);
              }
              else {
                cVar7 = *(char *)(param_1 + 0x5a);
                if (cVar7 == '\0') {
                  bVar18 = fVar26 < fVar19;
LAB_140769178:
                  if (!bVar18) goto LAB_14076917f;
                }
                else {
                  if (cVar7 == '\x01') {
                    bVar18 = fVar20 < fVar26;
                    goto LAB_140769178;
                  }
                  if (((cVar7 == '\x02') && (fVar19 <= fVar26)) && (fVar26 <= fVar20))
                  goto LAB_14076917f;
                }
              }
              local_164 = CONCAT22(local_164._2_2_ + 1,(short)local_164);
            }
            pfVar10 = pfVar10 + 3;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        pfVar11 = pfVar11 + 3;
        uVar17 = uVar17 - 1;
        uVar23 = local_158;
        uVar24 = local_154;
      } while (uVar17 != 0);
    }
    FUN_142bf3280(&local_180);
    uVar17 = (ulonglong)local_188._4_4_;
    iVar12 = local_198._4_4_;
  } while ((*(byte *)((longlong)local_180 + 0x156) & 1) != 0);
  local_178 = local_178 + 1;
  local_164 = 0;
  local_164._0_2_ = 0;
  local_168 = 0.0;
  local_15e = local_15e & 0xfd | 1;
  if ((int)local_180[1] <= local_178) goto LAB_1407692a6;
  do {
    uVar1 = *(uint *)(*local_180 + 4 + (longlong)local_178 * 0xc);
    if (((uVar1 >> 0x1e & 1) == 0) && (uVar17 = (ulonglong)local_188._4_4_, -1 < (int)uVar1))
    goto LAB_140768df0;
    local_178 = local_178 + 1;
  } while (local_178 < (int)local_180[1]);
  uVar17 = (ulonglong)local_188._4_4_;
  goto LAB_140768df0;
}



// FUNCTION 140769360 FUN_140769360 body=1552 status=ok
// SIG undefined FUN_140769360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140769360(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_248 [32];
  longlong *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_208;
  char local_200;
  undefined1 local_1f8;
  char local_1e8;
  char local_1e7 [7];
  longlong *local_1e0;
  int local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  char local_1bf;
  byte local_1be;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  float local_190;
  LARGE_INTEGER local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_160 [16];
  undefined1 local_150 [40];
  longlong local_128 [2];
  undefined1 local_118;
  longlong local_e0;
  longlong local_c0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  plVar7 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  FAIDataProviderValue::BindData(param_1 + 0x60,plVar7,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x208,plVar7,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x238,plVar7,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x268,plVar7,*(undefined4 *)(param_2 + 0x30));
  cVar5 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
  local_1e8 = FAIDataProviderBoolValue::GetValue(param_1 + 0x208);
  fVar20 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x238);
  fVar21 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x268);
  FAIDataProviderValue::BindData(param_1 + 0x2a0,plVar7,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x2d0,plVar7,*(undefined4 *)(param_2 + 0x30));
  uVar22 = FAIDataProviderFloatValue::GetValue(param_1 + 0x2a0);
  uVar23 = FAIDataProviderFloatValue::GetValue(param_1 + 0x2d0);
  FUN_1424b51e0(local_150);
  plVar15 = (longlong *)0x0;
  local_1b8 = (undefined8 *)0x0;
  local_1b0 = 0;
  plVar18 = plVar15;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    plVar8 = (longlong *)UEnvQueryContext::GetPrivateStaticClass();
    for (plVar11 = *(longlong **)(param_1 + 0x298);
        (plVar18 = plVar15, plVar11 != (longlong *)0x0 &&
        (plVar18 = *(longlong **)(param_1 + 0x298), plVar11 != plVar8));
        plVar11 = (longlong *)plVar11[6]) {
    }
  }
  cVar6 = FUN_142bedad0(param_2,plVar18,&local_1b8);
  if (cVar6 == '\0') {
LAB_1407698f0:
    if (local_1b8 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x204);
  puVar9 = (undefined8 *)FName::FName(&local_188,L"EnvQueryTrace",1);
  local_1e7[0] = local_1e8;
  local_228 = (longlong *)0x0;
  FUN_1422ffb20(local_128,*puVar9,local_1e7,bVar1 & 1);
  local_118 = 1;
  local_1a8 = 0;
  local_1a0 = 0;
  plVar18 = plVar15;
  if (plVar7 != (longlong *)0x0) {
    lVar10 = FUN_1428dfc70();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (plVar11 = (longlong *)(**(code **)(*plVar7 + 0x688))(plVar7), plVar18 = plVar7,
       plVar11 != (longlong *)0x0)) {
      plVar18 = plVar11;
    }
  }
  local_228 = &local_1a8;
  FUN_142c0d2a0(param_1,param_2,plVar18,*(undefined8 *)(param_1 + 0x298));
  if (0 < (int)local_1a0) {
    FCollisionQueryParams::AddIgnoredActors(local_128,&local_1a8);
  }
  plVar18 = plVar15;
  if (0 < (int)local_1b0) {
    do {
      uVar17 = (int)plVar18 + 1;
      *(float *)((longlong)(local_1b8 + 1) + (longlong)plVar15) =
           fVar21 + *(float *)((longlong)(local_1b8 + 1) + (longlong)plVar15);
      plVar15 = (longlong *)((longlong)plVar15 + 0xc);
      plVar18 = (longlong *)(ulonglong)uVar17;
    } while ((int)uVar17 < (int)local_1b0);
  }
  FUN_142bd2270(&local_1e0,param_1,param_2,0xffffffff);
LAB_140769645:
  if ((int)local_1e0[1] <= local_1d8) goto LAB_140769697;
  if ((*(byte *)((longlong)local_1e0 + 0x156) & 1) != 0) goto LAB_140769697;
  if ((0.0 <= local_1d0) &&
     (QueryPerformanceCounter(&local_188),
     local_1d0 <= (double)local_188.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_140769697;
  bVar3 = true;
  do {
    if (!bVar3) {
      *(int *)(local_1e0 + 0x27) = local_1d8;
      if (local_1a8 != 0) {
        FMemory::Free();
      }
      if (local_c0 != 0) {
        FMemory::Free();
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      goto LAB_1407698f0;
    }
    puVar12 = (undefined4 *)FUN_142be5200(param_1,local_160,param_2,local_1d8);
    local_198 = *puVar12;
    uStack_194 = puVar12[1];
    local_190 = fVar20 + (float)puVar12[2];
    uVar13 = FUN_142be4fb0(param_1,param_2,local_1d8);
    puVar9 = (undefined8 *)((longlong)local_1b8 + (longlong)(int)local_1b0 * 0xc);
    for (puVar19 = local_1b8; puVar19 != puVar9; puVar19 = (undefined8 *)((longlong)puVar19 + 0xc))
    {
      puVar16 = (undefined8 *)&local_198;
      if (local_1e8 != '\0') {
        puVar16 = puVar19;
      }
      local_168 = *(undefined4 *)(puVar16 + 1);
      puVar14 = (undefined8 *)&local_198;
      if (local_1e8 == '\0') {
        puVar14 = puVar19;
      }
      local_170 = *puVar16;
      local_180 = *puVar14;
      local_178 = *(undefined4 *)(puVar14 + 1);
      local_1f8 = *(undefined1 *)(param_2 + 0x130);
      local_218 = *(undefined8 *)(param_2 + 0x58);
      local_228 = local_128;
      local_220 = uVar13;
      local_210 = uVar22;
      local_208 = uVar23;
      local_200 = cVar5;
      cVar6 = FUN_14076d5a0(param_1,&local_1e0,&local_170,&local_180);
      if ((local_1be & 2) == 0) {
        cVar2 = *(char *)(param_1 + 0x5a);
        if ((((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) ||
           ((cVar2 != '\x03' || (cVar6 != cVar5)))) {
          if ((local_1be & 4) == 0) {
            fVar21 = 0.0;
            goto LAB_1407697c0;
          }
        }
        else {
          fVar21 = 1.0;
LAB_1407697c0:
          sVar4 = local_1c8._4_2_;
          if (local_1bf == '\0') {
            local_1c8 = CONCAT44(local_1c8._4_4_,(float)local_1c8 + fVar21);
          }
          else if (local_1bf == '\x01') {
            if ((sVar4 == 0) || (fVar21 < (float)local_1c8)) {
LAB_1407697fb:
              local_1c8 = CONCAT44(local_1c8._4_4_,fVar21);
            }
          }
          else if (local_1bf == '\x02') {
            if (sVar4 == 0) goto LAB_1407697fb;
            if ((float)local_1c8 < fVar21) {
              local_1c8 = CONCAT44(local_1c8._4_4_,fVar21);
            }
          }
          local_1c8._0_6_ = CONCAT24(sVar4 + 1,(float)local_1c8);
        }
        local_1c8 = CONCAT26(local_1c8._6_2_ + 1,(undefined6)local_1c8);
      }
    }
    FUN_142bf3280(&local_1e0);
    if ((*(byte *)((longlong)local_1e0 + 0x156) & 1) != 0) goto LAB_140769645;
    local_1d8 = local_1d8 + 1;
    local_1c8 = 0;
    local_1be = local_1be & 0xfd | 1;
    if (local_1d8 < (int)local_1e0[1]) break;
LAB_140769697:
    bVar3 = false;
  } while( true );
  do {
    uVar17 = *(uint *)(*local_1e0 + 4 + (longlong)local_1d8 * 0xc);
    if (((uVar17 >> 0x1e & 1) == 0) && (-1 < (int)uVar17)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  } while ((!bVar3) && (local_1d8 = local_1d8 + 1, local_1d8 < (int)local_1e0[1]));
  goto LAB_140769645;
}



// FUNCTION 140769970 FUN_140769970 body=1040 status=ok
// SIG undefined FUN_140769970(void)

void FUN_140769970(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  float fVar13;
  LARGE_INTEGER local_res10;
  longlong *local_138;
  int local_130;
  double local_128;
  undefined8 local_120;
  char local_117;
  byte local_116;
  float local_110;
  float local_10c;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_68 [64];
  
  plVar7 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar9 = (**(code **)(*plVar7 + 0x668))(plVar7);
      lVar8 = 0;
      if (lVar9 != 0) {
        lVar10 = ARemnantWeaponMod::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar8 = *(longlong *)(lVar9 + 0x628);
        }
      }
      if (lVar8 != 0) {
        FAIDataProviderValue::BindData(param_1 + 0x60,plVar7,*(undefined4 *)(param_2 + 0x30));
        FAIDataProviderValue::BindData(param_1 + 0x1d8,plVar7,*(undefined4 *)(param_2 + 0x30));
        cVar5 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
        FUN_142f88c90(&local_f8);
        local_e0 = *(undefined8 *)(lVar8 + 0x6e8);
        uStack_d8 = *(undefined8 *)(lVar8 + 0x6f0);
        local_d0 = *(undefined8 *)(lVar8 + 0x6f8);
        uStack_c8 = *(undefined8 *)(lVar8 + 0x700);
        local_c0 = *(undefined8 *)(lVar8 + 0x708);
        uStack_b8 = *(undefined8 *)(lVar8 + 0x710);
        local_b0 = *(undefined8 *)(lVar8 + 0x718);
        uStack_a8 = *(undefined8 *)(lVar8 + 0x720);
        local_a0 = *(undefined4 *)(lVar8 + 0x728);
        uStack_9c = *(undefined4 *)(lVar8 + 0x72c);
        uStack_98 = *(undefined4 *)(lVar8 + 0x730);
        uStack_94 = *(undefined4 *)(lVar8 + 0x734);
        local_90 = *(undefined4 *)(lVar8 + 0x738);
        uStack_8c = *(undefined4 *)(lVar8 + 0x73c);
        uStack_88 = *(undefined4 *)(lVar8 + 0x740);
        uStack_84 = *(undefined4 *)(lVar8 + 0x744);
        local_80 = *(undefined8 *)(lVar8 + 0x6b8);
        uVar12 = FAIDataProviderFloatValue::GetValue(param_1 + 0x1d8);
        local_e0 = CONCAT44(local_e0._4_4_,uVar12);
        FUN_142bd2270(&local_138,param_1,param_2,0xffffffff);
LAB_140769b50:
        if ((int)local_138[1] <= local_130) goto LAB_140769ba1;
        if ((*(byte *)((longlong)local_138 + 0x156) & 1) != 0) goto LAB_140769ba1;
        if ((0.0 <= local_128) &&
           (QueryPerformanceCounter(&local_res10),
           local_128 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0))
        goto LAB_140769ba1;
        bVar3 = true;
        do {
          if (!bVar3) {
            *(int *)(local_138 + 0x27) = local_130;
            return;
          }
          puVar11 = (undefined8 *)FUN_142be5200(param_1,local_68,param_2,local_130);
          local_f8 = *puVar11;
          local_f0 = *(undefined4 *)(puVar11 + 1);
          cVar6 = FUN_142f9b3a0(&local_f8,&local_110,0);
          if (cVar6 == '\0') {
LAB_140769c11:
            cVar6 = '\x01';
          }
          else {
            if (1.0 < (local_110 - (float)local_f8) * (local_110 - (float)local_f8) +
                      (local_10c - local_f8._4_4_) * (local_10c - local_f8._4_4_))
            goto LAB_140769c11;
            cVar6 = '\0';
          }
          if ((local_116 & 2) == 0) {
            cVar1 = *(char *)(param_1 + 0x5a);
            if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
               ((cVar1 != '\x03' || (cVar6 != cVar5)))) {
              if ((local_116 & 4) == 0) {
                fVar13 = 0.0;
                goto LAB_140769c52;
              }
            }
            else {
              fVar13 = 1.0;
LAB_140769c52:
              sVar4 = local_120._4_2_;
              if (local_117 == '\0') {
                local_120 = CONCAT44(local_120._4_4_,(float)local_120 + fVar13);
              }
              else if (local_117 == '\x01') {
                if ((sVar4 == 0) || (fVar13 < (float)local_120)) {
LAB_140769c92:
                  local_120 = CONCAT44(local_120._4_4_,fVar13);
                }
              }
              else if (local_117 == '\x02') {
                if (sVar4 == 0) goto LAB_140769c92;
                if ((float)local_120 < fVar13) {
                  local_120 = CONCAT44(local_120._4_4_,fVar13);
                }
              }
              local_120._0_6_ = CONCAT24(sVar4 + 1,(float)local_120);
            }
            local_120 = CONCAT26(local_120._6_2_ + 1,(undefined6)local_120);
          }
          FUN_142bf3280(&local_138);
          if ((*(byte *)((longlong)local_138 + 0x156) & 1) != 0) goto LAB_140769b50;
          local_130 = local_130 + 1;
          local_120 = 0;
          local_116 = local_116 & 0xfd | 1;
          if (local_130 < (int)local_138[1]) goto LAB_140769d00;
LAB_140769ba1:
          bVar3 = false;
        } while( true );
      }
    }
  }
  return;
LAB_140769d00:
  do {
    uVar2 = *(uint *)(*local_138 + 4 + (longlong)local_130 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  } while ((!bVar3) && (local_130 = local_130 + 1, local_130 < (int)local_138[1]));
  goto LAB_140769b50;
}



// FUNCTION 140769d80 FUN_140769d80 body=1340 status=ok
// SIG undefined FUN_140769d80(void)

void FUN_140769d80(longlong param_1,longlong param_2)

{
  float *pfVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  float *pfVar9;
  longlong *plVar10;
  longlong *plVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  LARGE_INTEGER local_res8;
  longlong *local_178;
  int local_170;
  double local_168;
  undefined8 local_160;
  char local_157;
  byte local_156;
  float *local_150;
  undefined8 local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined1 local_110 [8];
  float local_108;
  undefined8 local_f8;
  float local_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  
  plVar10 = (longlong *)0x0;
  local_150 = (float *)0x0;
  local_148 = 0;
  plVar11 = plVar10;
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    plVar6 = (longlong *)UEnvQueryContext::GetPrivateStaticClass();
    for (plVar7 = *(longlong **)(param_1 + 0x1d8);
        (plVar11 = plVar10, plVar7 != (longlong *)0x0 &&
        (plVar11 = *(longlong **)(param_1 + 0x1d8), plVar7 != plVar6));
        plVar7 = (longlong *)plVar7[6]) {
    }
  }
  cVar4 = FUN_142bedad0(param_2,plVar11,&local_150);
  if (cVar4 != '\0') {
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
    plVar11 = plVar10;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = FUN_1428dfc70();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((bVar14) &&
         (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x668))(plVar7), plVar7 != (longlong *)0x0)) {
        lVar8 = ARemnantWeaponMod::GetPrivateStaticClass();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        if (bVar14) {
          plVar10 = (longlong *)plVar7[0xc5];
          plVar11 = plVar7;
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      FAIDataProviderValue::BindData(param_1 + 0x60,plVar11,*(undefined4 *)(param_2 + 0x30));
      cVar4 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
      FUN_142bd2270(&local_178,param_1,param_2,0xffffffff);
LAB_140769f50:
      if ((int)local_178[1] <= local_170) goto LAB_140769fa8;
      if ((*(byte *)((longlong)local_178 + 0x156) & 1) != 0) goto LAB_140769fa8;
      if ((0.0 <= local_168) &&
         (QueryPerformanceCounter(&local_res8),
         local_168 <= (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_140769fa8;
      bVar14 = true;
      do {
        if (!bVar14) {
          *(int *)(local_178 + 0x27) = local_170;
          break;
        }
        cVar12 = '\x01';
        FUN_142be5200(param_1,&local_140,param_2,local_170);
        pfVar1 = local_150 + (longlong)(int)local_148 * 3;
        for (pfVar9 = local_150; pfVar9 != pfVar1; pfVar9 = pfVar9 + 3) {
          local_130 = *pfVar9 - local_140;
          local_12c = pfVar9[1] - local_13c;
          local_128 = pfVar9[2] - local_138;
          cVar5 = (**(code **)(*plVar10 + 0x450))(plVar10,&local_140,&local_130,1,&local_120);
          if (cVar5 != '\0') {
            FUN_142f89a30(&local_f8);
            local_f8 = *(undefined8 *)pfVar9;
            local_d8 = plVar10[0xdf];
            lStack_d0 = plVar10[0xe0];
            local_88 = plVar10[0xd7];
            local_e8 = plVar10[0xdd];
            lStack_e0 = plVar10[0xde];
            local_f0 = pfVar9[2];
            local_c8 = plVar10[0xe1];
            lStack_c0 = plVar10[0xe2];
            local_b8 = plVar10[0xe3];
            lStack_b0 = plVar10[0xe4];
            local_a8 = (undefined4)plVar10[0xe5];
            uStack_a4 = *(undefined4 *)((longlong)plVar10 + 0x72c);
            uStack_a0 = (undefined4)plVar10[0xe6];
            uStack_9c = *(undefined4 *)((longlong)plVar10 + 0x734);
            local_98 = (undefined4)plVar10[0xe7];
            uStack_94 = *(undefined4 *)((longlong)plVar10 + 0x73c);
            uStack_90 = (undefined4)plVar10[0xe8];
            uStack_8c = *(undefined4 *)((longlong)plVar10 + 0x744);
            cVar5 = FUN_142fae610(&local_f8,local_110,0);
            if (cVar5 != '\0') {
              bVar14 = ABS(local_108 - local_118) == 10.0;
              bVar13 = ABS(local_108 - local_118) < 10.0;
              goto LAB_14076a104;
            }
LAB_14076a115:
            cVar12 = '\0';
            break;
          }
          fVar15 = *(float *)(param_1 + 0x1e0) * *(float *)(param_1 + 0x1e0);
          fVar16 = (local_11c - pfVar9[1]) * (local_11c - pfVar9[1]) +
                   (local_120 - *pfVar9) * (local_120 - *pfVar9);
          bVar14 = fVar16 == fVar15;
          bVar13 = fVar16 < fVar15;
LAB_14076a104:
          if (!bVar13 && !bVar14) goto LAB_14076a115;
        }
        if ((local_156 & 2) == 0) {
          cVar5 = *(char *)(param_1 + 0x5a);
          if ((((cVar5 == '\0') || (cVar5 == '\x01')) || (cVar5 == '\x02')) ||
             ((cVar5 != '\x03' || (cVar12 != cVar4)))) {
            if ((local_156 & 4) == 0) {
              fVar15 = 0.0;
              goto LAB_14076a156;
            }
          }
          else {
            fVar15 = 1.0;
LAB_14076a156:
            sVar3 = local_160._4_2_;
            if (local_157 == '\0') {
              local_160 = CONCAT44(local_160._4_4_,(float)local_160 + fVar15);
            }
            else if (local_157 == '\x01') {
              if ((sVar3 == 0) || (fVar15 < (float)local_160)) {
LAB_14076a196:
                local_160 = CONCAT44(local_160._4_4_,fVar15);
              }
            }
            else if (local_157 == '\x02') {
              if (sVar3 == 0) goto LAB_14076a196;
              if ((float)local_160 < fVar15) {
                local_160 = CONCAT44(local_160._4_4_,fVar15);
              }
            }
            local_160._0_6_ = CONCAT24(sVar3 + 1,(float)local_160);
          }
          local_160 = CONCAT26(local_160._6_2_ + 1,(undefined6)local_160);
        }
        FUN_142bf3280(&local_178);
        if ((*(byte *)((longlong)local_178 + 0x156) & 1) != 0) goto LAB_140769f50;
        local_170 = local_170 + 1;
        local_160 = 0;
        local_156 = local_156 & 0xfd | 1;
        if (local_170 < (int)local_178[1]) goto LAB_14076a200;
LAB_140769fa8:
        bVar14 = false;
      } while( true );
    }
  }
  if (local_150 != (float *)0x0) {
    FMemory::Free();
  }
  return;
LAB_14076a200:
  do {
    uVar2 = *(uint *)(*local_178 + 4 + (longlong)local_170 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
  } while ((!bVar14) && (local_170 = local_170 + 1, local_170 < (int)local_178[1]));
  goto LAB_140769f50;
}



// FUNCTION 14076a2c0 FUN_14076a2c0 body=1429 status=ok
// SIG undefined FUN_14076a2c0(void)

void FUN_14076a2c0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  float fVar14;
  longlong *local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_1d8;
  int local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  char local_1b7;
  byte local_1b6;
  longlong *local_1b0;
  undefined8 local_1a8;
  LARGE_INTEGER local_1a0;
  undefined8 local_198;
  undefined1 local_190 [16];
  undefined8 local_180;
  undefined1 local_178 [8];
  undefined1 local_170 [24];
  undefined8 local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [120];
  
  local_1b0 = (longlong *)0x0;
  local_1a8 = 0;
  FUN_140764490(param_1,param_2,&local_1b0);
  uVar7 = FWeakObjectPtr::Get((longlong)param_2 + 0x34);
  FAIDataProviderValue::BindData(param_1 + 0x60,uVar7,(int)param_2[6]);
  FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
  local_res8 = (longlong *)param_2[0x2e];
  if (local_res8 != (longlong *)0x0) {
    lVar8 = UEnvQueryItemType_Point::GetPrivateStaticClass();
    if ((*(int *)(local_res8[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(local_res8[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14076a398;
  }
  local_res8 = (longlong *)0x0;
LAB_14076a398:
  FUN_142bd2270(&local_1d8,param_1,param_2,0xffffffff);
  plVar12 = local_1b0;
LAB_14076a3e3:
LAB_14076a3e7:
  uVar10 = (uint)local_1a8;
  if ((int)local_1d8[1] <= local_1d0) goto LAB_14076a43f;
  if ((*(byte *)((longlong)local_1d8 + 0x156) & 1) != 0) goto LAB_14076a43f;
  if (0.0 <= local_1c8) {
    QueryPerformanceCounter(&local_1a0);
    uVar10 = (uint)local_1a8;
    if (local_1c8 <= (double)local_1a0.QuadPart * DAT_1468b02f8 + 16777216.0) goto LAB_14076a43f;
  }
  bVar2 = true;
  do {
    if (!bVar2) {
LAB_14076a80b:
      *(int *)(local_1d8 + 0x27) = local_1d0;
      if (plVar12 != (longlong *)0x0) {
        FMemory::Free(plVar12);
      }
      return;
    }
    bVar2 = false;
    if (0 < (int)uVar10) {
      uVar13 = (ulonglong)uVar10;
      do {
        lVar8 = *plVar12;
        fVar14 = 3.4028235e+38;
        if (lVar8 == 0) {
LAB_14076a66f:
          if ((local_1b6 & 2) == 0) {
            if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_14076a6ce:
              uVar4 = local_1c0._4_4_;
              if (local_1b7 == '\0') {
                local_1c0 = CONCAT44(local_1c0._4_4_,(float)local_1c0 + fVar14);
              }
              else if (local_1b7 == '\x01') {
                if ((local_1c0._4_2_ == 0) || (fVar14 < (float)local_1c0)) {
LAB_14076a70f:
                  local_1c0 = CONCAT44(uVar4,fVar14);
                }
              }
              else if (local_1b7 == '\x02') {
                if (local_1c0._4_2_ == 0) goto LAB_14076a70f;
                if ((float)local_1c0 < fVar14) {
                  local_1c0 = CONCAT44(uVar4,fVar14);
                }
              }
              local_1c0._0_6_ = CONCAT24(local_1c0._4_2_ + 1,(float)local_1c0);
            }
            else {
              cVar5 = *(char *)(param_1 + 0x5a);
              if (cVar5 == '\0') {
                bVar1 = 0.0001 <= fVar14;
LAB_14076a6ca:
                if (bVar1) goto LAB_14076a6ce;
              }
              else {
                if (cVar5 == '\x01') {
                  bVar1 = fVar14 <= 1.0;
                  goto LAB_14076a6ca;
                }
                if (((cVar5 == '\x02') && (0.0001 <= fVar14)) && (fVar14 <= 1.0))
                goto LAB_14076a6ce;
              }
            }
            local_1c0 = CONCAT26(local_1c0._6_2_ + 1,(undefined6)local_1c0);
          }
        }
        else {
          FUN_142faaf90(lVar8 + 0x930);
          iVar3 = local_1d0;
          if (local_res8 == (longlong *)0x0) {
LAB_14076a53f:
            FUN_142f89a30(&local_148);
            local_d8 = *(undefined8 *)(lVar8 + 0x6b8);
            puVar9 = (undefined8 *)FUN_142be5200(param_1,local_c8,param_2,iVar3);
            local_128 = *(undefined8 *)(lVar8 + 0x6f8);
            uStack_120 = *(undefined8 *)(lVar8 + 0x700);
            local_148 = *puVar9;
            local_140 = *(undefined4 *)(puVar9 + 1);
            local_138 = *(undefined8 *)(lVar8 + 0x6e8);
            uStack_130 = *(undefined8 *)(lVar8 + 0x6f0);
            local_108 = *(undefined8 *)(lVar8 + 0x718);
            uStack_100 = *(undefined8 *)(lVar8 + 0x720);
            local_res18 = 0xffffffffffffffff;
            local_118 = *(undefined8 *)(lVar8 + 0x708);
            uStack_110 = *(undefined8 *)(lVar8 + 0x710);
            local_e8 = *(undefined4 *)(lVar8 + 0x738);
            uStack_e4 = *(undefined4 *)(lVar8 + 0x73c);
            uStack_e0 = *(undefined4 *)(lVar8 + 0x740);
            uStack_dc = *(undefined4 *)(lVar8 + 0x744);
            local_f8 = *(undefined4 *)(lVar8 + 0x728);
            uStack_f4 = *(undefined4 *)(lVar8 + 0x72c);
            uStack_f0 = *(undefined4 *)(lVar8 + 0x730);
            uStack_ec = *(undefined4 *)(lVar8 + 0x734);
            cVar5 = FUN_142fae610(&local_148,local_b8,&local_res18);
            if (cVar5 == '\0') {
              uVar7 = 0;
            }
            else {
              uVar7 = FUN_142fa4ed0(&local_res18);
            }
          }
          else {
            (**(code **)(*local_res8 + 0x2a8))
                      (local_res8,local_190,
                       ((longlong)(*(int *)(*param_2 + 4 + (longlong)local_1d0 * 0xc) * 2) >> 1) +
                       param_2[3]);
            cVar5 = FUN_142fa8c00(lVar8);
            if (cVar5 == '\0') {
              cVar5 = FUN_142fa8480(lVar8);
              if (cVar5 != '\0') {
                uVar7 = *(undefined8 *)(lVar8 + 0x6b8);
                puVar9 = (undefined8 *)FUN_142f88fd0(local_170,local_180);
                iVar6 = FUN_142fa37d0(uVar7,*puVar9);
                iVar11 = *(int *)(lVar8 + 0x6f8);
                goto LAB_14076a520;
              }
            }
            else {
              uVar7 = *(undefined8 *)(lVar8 + 0x6b8);
              puVar9 = (undefined8 *)FUN_142f89080(local_178,local_180);
              iVar6 = FUN_142fa3830(uVar7,*puVar9);
              iVar11 = *(int *)(lVar8 + 0x6f4);
LAB_14076a520:
              if (iVar6 != iVar11) goto LAB_14076a53f;
            }
            local_158 = local_180;
            uVar7 = local_180;
          }
          cVar5 = FUN_142fa8c00(lVar8);
          if (cVar5 == '\0') {
            cVar5 = FUN_142fa8480(lVar8);
            if (cVar5 != '\0') {
              FUN_142f88fd0(&local_198,uVar7);
              cVar5 = FUN_142f958b0(lVar8 + 0x9e8,local_198);
              if (cVar5 != '\x01') {
                fVar14 = 0.0;
                goto LAB_14076a6b0;
              }
              fVar14 = 1.0;
            }
            goto LAB_14076a66f;
          }
          FUN_142f89080(&local_res20,uVar7);
          cVar5 = FUN_142f95960(lVar8 + 0x9e8,local_res20);
          fVar14 = (float)FUN_142fa2180(lVar8 + 0x9e8,local_res20);
LAB_14076a6b0:
          if (cVar5 != '\x02') goto LAB_14076a66f;
          bVar2 = true;
        }
        plVar12 = plVar12 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      plVar12 = local_1b0;
      if (bVar2) {
        FUN_142bf1f40(param_2);
        plVar12 = local_1b0;
        goto LAB_14076a80b;
      }
    }
    FUN_142bf3280(&local_1d8);
    if ((*(byte *)((longlong)local_1d8 + 0x156) & 1) != 0) goto LAB_14076a3e7;
    local_1d0 = local_1d0 + 1;
    local_1c0 = 0;
    local_1b6 = local_1b6 & 0xfd | 1;
    uVar10 = (uint)local_1a8;
    if (local_1d0 < (int)local_1d8[1]) break;
LAB_14076a43f:
    bVar2 = false;
  } while( true );
LAB_14076a7b0:
  uVar10 = *(uint *)(*local_1d8 + 4 + (longlong)local_1d0 * 0xc);
  if (((uVar10 >> 0x1e & 1) == 0) && (-1 < (int)uVar10)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) goto LAB_14076a3e7;
  local_1d0 = local_1d0 + 1;
  if ((int)local_1d8[1] <= local_1d0) goto LAB_14076a3e3;
  goto LAB_14076a7b0;
}



// FUNCTION 14076a860 FUN_14076a860 body=563 status=ok
// SIG undefined FUN_14076a860(void)

ulonglong FUN_14076a860(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,
                       undefined4 *param_5)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_res20 [2];
  
  if ((param_4 < 0) || (*(int *)(param_1 + 200) <= param_4)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar10 = 0;
  if (bVar3) {
    iVar10 = param_4;
  }
  *param_5 = 0xffffffff;
  param_5[1] = 0;
  param_5[3] = 0;
  param_5[2] = 0xffffffff;
  *(undefined8 *)(param_5 + 4) = 0;
  *(undefined8 *)(param_5 + 6) = 0;
  *(undefined8 *)(param_5 + 0x16) = 0;
  *(undefined8 *)(param_5 + 0x18) = 0;
  *(undefined8 *)(param_5 + 8) = 0;
  *(undefined8 *)(param_5 + 10) = 0;
  param_5[0x1a] = 0xffffffff;
  *(undefined1 *)(param_5 + 0x1b) = 1;
  *(undefined8 *)(param_5 + 0xc) = 0;
  *(undefined8 *)(param_5 + 0xe) = 0;
  *(undefined8 *)(param_5 + 0x10) = 0;
  *(undefined8 *)(param_5 + 0x12) = 0;
  *(undefined8 *)(param_5 + 0x14) = 0;
  iVar9 = *(int *)(param_1 + 200) - iVar10;
  local_res20[0] = 0x7f7fffff;
  if (iVar9 <= iVar10) {
    iVar9 = iVar10;
  }
  if (0 < iVar9) {
    iVar7 = iVar10 + 1;
    iVar4 = iVar10;
    do {
      iVar8 = iVar4 + -1;
      if (((iVar7 < *(int *)(param_1 + 200)) &&
          (cVar5 = FUN_140753fd0(param_1,param_2,param_3,iVar7 + -1,iVar7,local_res20,param_5),
          cVar5 != '\0')) ||
         ((-1 < iVar8 &&
          (cVar5 = FUN_140753fd0(param_1,param_2,param_3,iVar8,iVar4,local_res20,param_5),
          cVar5 != '\0')))) break;
      iVar7 = iVar7 + 1;
      iVar4 = iVar8;
    } while (iVar7 - iVar10 <= iVar9);
  }
  uVar6 = *(ulonglong *)(param_5 + 0x18);
  if ((uVar6 != 0) && (piVar1 = (int *)(uVar6 + 200), 0 < *piVar1)) {
    uVar2 = param_5[0x1a];
    uVar6 = (ulonglong)uVar2;
    if ((-1 < (int)uVar2) && ((int)uVar2 < *piVar1)) {
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 14076aaa0 FUN_14076aaa0 body=304 status=ok
// SIG undefined FUN_14076aaa0(void)

undefined8 FUN_14076aaa0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  
  pfVar5 = *(float **)(param_1 + 0x718);
  pfVar6 = pfVar5 + (longlong)*(int *)(param_1 + 0x720) * 8;
  fVar7 = 0.0;
  for (; pfVar5 != pfVar6; pfVar5 = pfVar5 + 8) {
    plVar1 = *(longlong **)(pfVar5 + 2);
    if (plVar1 != (longlong *)0x0) {
      uVar3 = AUGWeapon_Hook::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x6f8) != '\0')) {
        fVar7 = fVar7 + *pfVar5;
      }
    }
  }
  if (0.0 < fVar7) {
    iVar2 = rand();
    pfVar5 = *(float **)(param_1 + 0x718);
    pfVar6 = pfVar5 + (longlong)*(int *)(param_1 + 0x720) * 8;
    fVar7 = (float)iVar2 * 3.051851e-05 * fVar7;
    for (; pfVar5 != pfVar6; pfVar5 = pfVar5 + 8) {
      plVar1 = *(longlong **)(pfVar5 + 2);
      if (plVar1 != (longlong *)0x0) {
        uVar3 = AUGWeapon_Hook::GetPrivateStaticClass();
        lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
        if (((lVar4 != 0) && (*(char *)(lVar4 + 0x6f8) != '\0')) &&
           (fVar7 = fVar7 - *pfVar5, fVar7 <= 0.0)) {
          return *(undefined8 *)(pfVar5 + 2);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14076abd0 FUN_14076abd0 body=383 status=ok
// SIG undefined FUN_14076abd0(void)

longlong FUN_14076abd0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  pfVar5 = *(float **)(param_1 + 0x718);
  pfVar6 = pfVar5 + (longlong)*(int *)(param_1 + 0x720) * 8;
  fVar8 = 0.0;
  for (; pfVar5 != pfVar6; pfVar5 = pfVar5 + 8) {
    plVar1 = *(longlong **)(pfVar5 + 2);
    if (plVar1 != (longlong *)0x0) {
      uVar3 = AUGWeapon_Hook::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
      if (((lVar4 != 0) && (*(char *)(lVar4 + 0x6f8) != '\0')) &&
         ((param_3 == '\0' || (*(char *)(lVar4 + 0x6f9) != '\0')))) {
        if (lVar4 == param_2) {
          fVar7 = pfVar5[1];
        }
        else {
          fVar7 = *pfVar5;
        }
        fVar8 = fVar8 + fVar7;
      }
    }
  }
  if (0.0 < fVar8) {
    iVar2 = rand();
    pfVar5 = *(float **)(param_1 + 0x718);
    pfVar6 = pfVar5 + (longlong)*(int *)(param_1 + 0x720) * 8;
    fVar8 = (float)iVar2 * 3.051851e-05 * fVar8;
    for (; pfVar5 != pfVar6; pfVar5 = pfVar5 + 8) {
      plVar1 = *(longlong **)(pfVar5 + 2);
      if (plVar1 != (longlong *)0x0) {
        uVar3 = AUGWeapon_Hook::GetPrivateStaticClass();
        lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
        if (((lVar4 != 0) && (*(char *)(lVar4 + 0x6f8) != '\0')) &&
           ((param_3 == '\0' || (*(char *)(lVar4 + 0x6f9) != '\0')))) {
          if (lVar4 == param_2) {
            fVar7 = pfVar5[1];
          }
          else {
            fVar7 = *pfVar5;
          }
          fVar8 = fVar8 - fVar7;
          if (fVar8 <= 0.0) {
            return lVar4;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14076ad50 FUN_14076ad50 body=365 status=ok
// SIG undefined FUN_14076ad50(void)

longlong FUN_14076ad50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  pfVar5 = *(float **)(param_1 + 0x718);
  pfVar6 = pfVar5 + (longlong)*(int *)(param_1 + 0x720) * 8;
  fVar8 = 0.0;
  for (; pfVar5 != pfVar6; pfVar5 = pfVar5 + 8) {
    plVar1 = *(longlong **)(pfVar5 + 2);
    if (plVar1 != (longlong *)0x0) {
      uVar3 = AUGWeapon_Hook::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
      if (((lVar4 != 0) && (*(char *)(lVar4 + 0x6f8) != '\0')) && (*(char *)(lVar4 + 0x6f9) != '\0')
         ) {
        if (lVar4 == param_2) {
          fVar7 = pfVar5[1];
        }
        else {
          fVar7 = *pfVar5;
        }
        fVar8 = fVar8 + fVar7;
      }
    }
  }
  if (0.0 < fVar8) {
    iVar2 = rand();
    pfVar5 = *(float **)(param_1 + 0x718);
    pfVar6 = pfVar5 + (longlong)*(int *)(param_1 + 0x720) * 8;
    fVar8 = (float)iVar2 * 3.051851e-05 * fVar8;
    for (; pfVar5 != pfVar6; pfVar5 = pfVar5 + 8) {
      plVar1 = *(longlong **)(pfVar5 + 2);
      if (plVar1 != (longlong *)0x0) {
        uVar3 = AUGWeapon_Hook::GetPrivateStaticClass();
        lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
        if (((lVar4 != 0) && (*(char *)(lVar4 + 0x6f8) != '\0')) &&
           (*(char *)(lVar4 + 0x6f9) != '\0')) {
          if (lVar4 == param_2) {
            fVar7 = pfVar5[1];
          }
          else {
            fVar7 = *pfVar5;
          }
          fVar8 = fVar8 - fVar7;
          if (fVar8 <= 0.0) {
            return lVar4;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14076aec0 FUN_14076aec0 body=133 status=ok
// SIG undefined FUN_14076aec0(void)

void FUN_14076aec0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  AActor::Serialize();
  FArchive::UsingCustomVersion(param_2,&DAT_14622e800);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar2 = FArchive::CustomVer(param_2,&DAT_14622e800);
    if (iVar2 < 1) {
      lVar1 = *(longlong *)(param_1 + 0x458);
      *(undefined4 *)(lVar1 + 0x750) = 0;
      if (*(int *)(lVar1 + 0x754) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar1 + 0x748,0);
      }
      lVar1 = *(longlong *)(param_1 + 0x458);
      *(undefined4 *)(lVar1 + 0x760) = 0;
      if (*(int *)(lVar1 + 0x764) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar1 + 0x758,0);
      }
    }
  }
  return;
}



// FUNCTION 14076af50 FUN_14076af50 body=69 status=ok
// SIG undefined FUN_14076af50(void)

void FUN_14076af50(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_142fc0410();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142fb3d20(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 14076afa0 FUN_14076afa0 body=69 status=ok
// SIG undefined FUN_14076afa0(void)

void FUN_14076afa0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_142fc0410();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_142fb4030(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 14076aff0 FUN_14076aff0 body=629 status=ok
// SIG undefined FUN_14076aff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14076aff0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined4 *local_120;
  longlong local_118;
  undefined1 auStack_110 [8];
  longlong local_108 [26];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (1 < *(byte *)(param_1 + 0x30)) {
    _guard_xfg_dispatch_icall_nop(local_108,0,200);
    lVar6 = *(longlong *)(param_1 + 8);
    iVar8 = -1;
    lVar4 = lVar6 + (longlong)*(int *)(param_1 + 0x10) * 0x18;
    if (lVar6 != lVar4) {
      puVar9 = auStack_110;
      do {
        if ((0 < *(int *)(lVar6 + 0x10)) &&
           (lVar3 = FWeakObjectPtr::Get(*(undefined8 *)(lVar6 + 8)), lVar3 != 0)) {
          iVar8 = iVar8 + 1;
          *(longlong *)(puVar9 + 8) = lVar3;
          puVar9 = puVar9 + 8;
        }
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != lVar4);
      if (-1 < iVar8) {
        local_128 = *(longlong *)(param_1 + 8);
        local_118 = local_128 + (longlong)*(int *)(param_1 + 0x10) * 0x18;
        if (local_128 != local_118) {
          do {
            puVar11 = *(undefined4 **)(local_128 + 8);
            puVar7 = puVar11 + (longlong)*(int *)(local_128 + 0x10) * 2;
            local_120 = puVar7;
            if (puVar11 != puVar7) {
              do {
                local_130 = *puVar11;
                local_12c = puVar11[1];
                cVar2 = FWeakObjectPtr::IsValid(&local_130);
                if (cVar2 != '\0') {
                  lVar4 = FWeakObjectPtr::Get(&local_130);
                  lVar4 = *(longlong *)(lVar4 + 0x568);
                  if (lVar4 != 0) {
                    iVar8 = 0;
                    plVar10 = local_108;
                    lVar6 = 0;
                    do {
                      plVar1 = (longlong *)*plVar10;
                      puVar7 = local_120;
                      if (plVar1 == (longlong *)0x0) break;
                      local_138 = *(undefined8 *)(lVar6 + *(longlong *)(param_1 + 8));
                      cVar2 = FUN_142bbfbf0(lVar4,&local_138);
                      if (cVar2 == '\0') {
                        plVar5 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
                        if (plVar5 == (longlong *)0x0) {
                          lVar3 = 0;
                        }
                        else {
                          lVar3 = plVar5[0x1f];
                          if (lVar3 == 0) {
                            (**(code **)(*plVar5 + 0x368))(plVar5);
                            lVar3 = plVar5[0x1f];
                          }
                        }
                        FUN_142bb3d50(lVar4,local_138,lVar3);
                      }
                      cVar2 = FUN_142bbfbf0(lVar4,&local_138);
                      if (cVar2 != '\0') {
                        (**(code **)(*plVar1 + 0x688))(plVar1);
                        FUN_142bcad50(lVar4,&local_138);
                      }
                      iVar8 = iVar8 + 1;
                      plVar10 = plVar10 + 1;
                      lVar6 = lVar6 + 0x18;
                      puVar7 = local_120;
                    } while (iVar8 < 0x19);
                  }
                }
                puVar11 = puVar11 + 2;
              } while (puVar11 != puVar7);
            }
            local_128 = local_128 + 0x18;
          } while (local_128 != local_118);
        }
      }
    }
  }
  return;
}



// FUNCTION 14076b270 FUN_14076b270 body=138 status=ok
// SIG undefined FUN_14076b270(void)

void FUN_14076b270(longlong param_1,byte param_2,undefined4 param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x30);
  *(byte *)(param_1 + 0x30) = param_2;
  if (bVar1 < 2) {
    if (param_2 < 2) goto LAB_14076b2b0;
  }
  else if (param_2 < 2) {
    FUN_140754f20();
    goto LAB_14076b2b0;
  }
  FUN_140754f20();
  FUN_14076aff0(param_1);
LAB_14076b2b0:
  *(bool *)(param_1 + 0x28) = *(char *)(param_1 + 0x30) == '\x04';
  if ((bVar1 < 2) && (*(char *)(param_1 + 0x30) == '\x02')) {
    *(undefined4 *)(param_1 + 0x34) = param_3;
    return;
  }
  *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  return;
}



// FUNCTION 14076b300 FUN_14076b300 body=22 status=ok
// SIG undefined FUN_14076b300(void)

void FUN_14076b300(longlong *param_1,longlong param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_1[0xc2] = param_2;
  pvVar1 = ThreadLocalStoragePointer;
  if (param_1[0xc3] == 0) {
    if (param_2 == 0) {
      param_2 = param_1[0xc2];
    }
    if (param_1[0xc3] != param_2) {
      param_1[0xc3] = param_2;
      if ((*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) <
           DAT_146859240) && (_Init_thread_header(&DAT_146859240), DAT_146859240 == -1)) {
        FName::FName(&DAT_146859238,L"Territory",1);
        _Init_thread_footer(&DAT_146859240);
      }
      lVar5 = param_1[0xad];
      lVar6 = param_1[0xc3];
      if (lVar5 != 0) {
        uVar2 = FUN_142bbd6b0(lVar5,&DAT_146859238);
        FUN_140725870(lVar5,uVar2,lVar6);
      }
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x668))(param_1);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = UHomeWidget::GetPrivateStaticClass();
        lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
        if (lVar5 != 0) {
          lVar6 = *(longlong *)(lVar5 + 0x120);
          if (lVar6 == 0) {
            lVar6 = FUN_1423407b0(lVar5);
          }
          lVar6 = FUN_142c1f5b0(lVar6);
          if (lVar6 != 0) {
            uVar4 = UGMapIconAnimatorComponent::GetPrivateStaticClass();
            FUN_142c2bc20(lVar6,lVar5,uVar4);
          }
        }
      }
    }
    return;
  }
  return;
}



// FUNCTION 14076b320 FUN_14076b320 body=320 status=ok
// SIG undefined FUN_14076b320(void)

undefined8 FUN_14076b320(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (*(char *)((longlong)param_1 + 0x6c) == param_2) {
    return 1;
  }
  cVar4 = FWeakObjectPtr::IsValid();
  if (cVar4 != '\0') {
    puVar1 = param_1 + 1;
    cVar4 = FWeakObjectPtr::IsValid(puVar1);
    if (cVar4 != '\0') {
      uVar6 = FWeakObjectPtr::Get(param_1);
      uVar7 = FWeakObjectPtr::Get(puVar1);
      lVar8 = FUN_140758880(uVar7,uVar6);
      if (lVar8 != 0) {
        if (param_1 != puVar1) {
          uVar6 = *param_1;
          *param_1 = *puVar1;
          *puVar1 = uVar6;
        }
        puVar1 = param_1 + 2;
        puVar2 = (undefined8 *)((longlong)param_1 + 0x1c);
        if (puVar1 != puVar2) {
          uVar6 = *puVar1;
          uVar3 = *(undefined4 *)(param_1 + 3);
          *puVar1 = *puVar2;
          *(undefined4 *)(param_1 + 3) = *(undefined4 *)((longlong)param_1 + 0x24);
          *puVar2 = uVar6;
          *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
        }
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) ^ 0x80000000;
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) ^ 0x80000000;
        *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) ^ 0x80000000;
        *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) ^ 0x80000000;
        *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) ^ 0x80000000;
        *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) ^ 0x80000000;
        iVar5 = -1;
        if (*(char *)((longlong)param_1 + 0x6c) != '\0') {
          iVar5 = 1;
        }
        *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + iVar5;
        *(uint *)((longlong)param_1 + 0x5c) = *(uint *)((longlong)param_1 + 0x5c) ^ 0x80000000;
        *(char *)((longlong)param_1 + 0x6c) = param_2;
        *(float *)(param_1 + 0xb) = *(float *)((longlong)param_1 + 0x54) - *(float *)(param_1 + 0xb)
        ;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14076b460 FUN_14076b460 body=667 status=ok
// SIG undefined FUN_14076b460(void)

void FUN_14076b460(char *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uStack_84;
  
  if ((*param_1 == '\0') || (param_2 != '\0')) {
    *param_1 = param_2;
    return;
  }
  plVar13 = *(longlong **)(param_1 + 0x20);
  plVar12 = plVar13 + (longlong)*(int *)(param_1 + 0x28) * 2;
  if (plVar13 == plVar12) {
    *param_1 = '\0';
  }
  else {
    do {
      lVar2 = *plVar13;
      uVar1 = *(uint *)(lVar2 + 0x2d8);
      iVar10 = 0;
      uStack_84 = 0;
      if (uVar1 != 0) {
        puVar11 = *(uint **)(lVar2 + 0x2d0);
        if (*(uint **)(lVar2 + 0x2d0) == (uint *)0x0) {
          puVar11 = (uint *)(lVar2 + 0x2c0);
        }
        uVar5 = *puVar11;
        iVar6 = 0;
        while (uVar5 == 0) {
          iVar10 = iVar10 + 0x20;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
          goto LAB_14076b56f;
          uVar5 = puVar11[(longlong)iVar6 + 1];
          iVar6 = iVar6 + 1;
        }
        uVar5 = -uVar5 & uVar5;
        iVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uVar5 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        uStack_84 = (iVar10 - iVar6) + 0x1f;
        if ((int)uVar1 < (int)uStack_84) {
LAB_14076b56f:
          uStack_84 = uVar1;
        }
      }
      uVar4 = uStack_84;
      uStack_84 = *(uint *)(lVar2 + 0x2d8);
      uVar5 = uStack_84 & 0xffffffe0;
      if (uStack_84 != uVar1) {
        puVar11 = *(uint **)(lVar2 + 0x2d0);
        if (*(uint **)(lVar2 + 0x2d0) == (uint *)0x0) {
          puVar11 = (uint *)(lVar2 + 0x2c0);
        }
        uVar9 = puVar11[(int)uStack_84 >> 5] & -1 << ((byte)uStack_84 & 0x1f);
        iVar10 = (int)uStack_84 >> 5;
        while (uVar9 == 0) {
          uVar5 = uVar5 + 0x20;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_14076b637;
          uVar9 = puVar11[(longlong)iVar10 + 1];
          iVar10 = iVar10 + 1;
        }
        uVar9 = -uVar9 & uVar9;
        iVar10 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uVar9 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_84 = (uVar5 - iVar10) + 0x1f;
        if ((int)uVar1 < (int)uStack_84) {
LAB_14076b637:
          uStack_84 = uVar1;
        }
      }
      while (uVar4 != uStack_84) {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x2b0) + (longlong)(int)uVar4 * 0x10);
        if (lVar3 != 0) {
          uVar7 = UPathFollowingAgentInterface::GetPrivateStaticClass();
          plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar7);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))();
            break;
          }
        }
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar12);
    *param_1 = '\0';
  }
  return;
}



// FUNCTION 14076b700 FUN_14076b700 body=53 status=ok
// SIG undefined FUN_14076b700(void)

void FUN_14076b700(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    uVar1 = FUN_142df36d0(*param_2);
    FUN_142df2ca0(*(undefined8 *)(param_1 + 0xe0),uVar1);
    return;
  }
  return;
}



// FUNCTION 14076b740 FUN_14076b740 body=192 status=ok
// SIG undefined FUN_14076b740(void)

void FUN_14076b740(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -0x5b0) + 0x148))(param_1 + -0x5b0);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar2 + 0x8c8);
  }
  plVar3 = (longlong *)FUN_14075f6c0(param_1 + -0x5b0);
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    if (*(float *)(param_1 + 0xb0) <= 0.0 && *(float *)(param_1 + 0xb0) != 0.0) {
      *(undefined4 *)(param_1 + 0xb0) = uVar4;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    if (cVar1 == '\0') {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xb8,0);
    }
  }
  return;
}



// FUNCTION 14076b800 FUN_14076b800 body=91 status=ok
// SIG undefined FUN_14076b800(void)

void FUN_14076b800(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
LAB_14076b83a:
    fVar2 = 0.0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
      if (lVar1 == 0) goto LAB_14076b83a;
    }
    fVar2 = *(float *)(lVar1 + 0x8c8);
  }
  *(undefined1 *)(param_1 + 0x2800) = 1;
  *(float *)(param_1 + 0x2804) = fVar2 + param_2;
  return;
}



// FUNCTION 14076b860 FUN_14076b860 body=95 status=ok
// SIG undefined FUN_14076b860(void)

void FUN_14076b860(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2[1] - *(float *)(param_1 + 0x14);
  fVar2 = *param_2 - *(float *)(param_1 + 0x10);
  fVar1 = param_2[2] - *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x58) =
       fVar3 * *(float *)(param_1 + 0x2c) + fVar2 * *(float *)(param_1 + 0x28) +
       fVar1 * *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x5c) =
       fVar3 * *(float *)(param_1 + 0x38) + fVar2 * *(float *)(param_1 + 0x34) +
       fVar1 * *(float *)(param_1 + 0x3c);
  return;
}



// FUNCTION 14076b8e0 FUN_14076b8e0 body=1604 status=ok
// SIG undefined FUN_14076b8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076b8e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong local_res8;
  longlong *local_res10;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146859200) && (_Init_thread_header(&DAT_146859200), DAT_146859200 == -1))
  {
    FName::FName(&DAT_1468591f8,L"SpawnLocation",1);
    _Init_thread_footer(&DAT_146859200);
  }
  plVar10 = (longlong *)param_1[0x91];
  local_res10 = plVar10;
  FUN_142bcaa30(param_1,param_2);
  plVar1 = param_1 + 199;
  param_1[0xbc] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)((longlong)param_1 + 0x644) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  lVar9 = 0;
  if (param_2 == (longlong *)0x0) {
LAB_14076b9c7:
    plVar13 = (longlong *)0x0;
  }
  else {
    lVar7 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    plVar13 = param_2;
    if (!bVar3) goto LAB_14076b9c7;
  }
  param_1[0xb9] = (longlong)plVar13;
  if (plVar13 == (longlong *)0x0) {
    if (param_2 == (longlong *)0x0) goto LAB_14076bcc7;
    uVar8 = FUN_142e39920();
    lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar8);
    param_1[0xbc] = lVar9;
    uVar8 = FUN_142e79d90();
    lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar8);
    param_1[0xbe] = lVar9;
    lVar9 = (**(code **)(*param_1 + 0x8e0))(param_1,param_2);
    param_1[0xbf] = lVar9;
    uVar8 = FUN_142e27720();
    lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar8);
    param_1[0xc9] = lVar9;
    uVar8 = UScrollBox::GetPrivateStaticClass();
    lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar8);
    local_res8 = lVar9;
    lVar7 = (**(code **)(*param_1 + 0x678))(param_1);
    if (lVar7 != 0) {
      uVar8 = APostProcessVolume::GetPrivateStaticClass();
      AActor::GetComponentsByClass(lVar7,&local_48,uVar8);
      plVar13 = local_48 + (int)uStack_40;
      for (plVar15 = local_48; plVar15 != plVar13; plVar15 = plVar15 + 1) {
        lVar9 = *plVar15;
        if (lVar9 == 0) {
LAB_14076bbde:
          lVar9 = 0;
        }
        else {
          lVar7 = APostProcessVolume::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14076bbde;
        }
        iVar2 = (int)param_1[200];
        *(int *)(param_1 + 200) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x644) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar9;
        plVar10 = local_res10;
      }
      goto LAB_14076bc13;
    }
  }
  else {
    param_1[0xbc] = plVar13[0x120];
    param_1[0xbe] = plVar13[0x121];
    param_1[0xbf] = plVar13[0x121];
    param_1[0xc9] = plVar13[0x124];
    local_res8 = plVar13[0x122];
    FUN_14076c930(param_1);
    uVar8 = APostProcessVolume::GetPrivateStaticClass();
    AActor::GetComponentsByClass(param_1[0xb9],&local_48,uVar8);
    plVar13 = local_48 + (int)uStack_40;
    for (plVar15 = local_48; plVar15 != plVar13; plVar15 = plVar15 + 1) {
      lVar9 = *plVar15;
      if (lVar9 == 0) {
LAB_14076ba9e:
        lVar9 = 0;
      }
      else {
        lVar7 = APostProcessVolume::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14076ba9e;
      }
      iVar2 = (int)param_1[200];
      *(int *)(param_1 + 200) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x644) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar9;
      plVar10 = local_res10;
    }
LAB_14076bc13:
    lVar9 = local_res8;
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
      lVar9 = local_res8;
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar7 = param_2[0x2d];
    if (lVar7 == 0) {
      local_58 = _DAT_1468b5d90;
      local_50 = DAT_1468b5d98;
    }
    else {
      local_58 = *(longlong **)(lVar7 + 0x220);
      local_50 = *(undefined4 *)(lVar7 + 0x228);
    }
    lVar7 = param_1[0xad];
    param_1[0xba] = (longlong)local_58;
    *(undefined4 *)(param_1 + 0xbb) = local_50;
    if (lVar7 != 0) {
      uVar6 = FUN_142bbd6b0(lVar7,&DAT_1468591f8);
      uStack_40 = (longlong *)CONCAT44(uStack_40._4_4_,local_50);
      local_48 = local_58;
      FUN_14074b0b0(lVar7,uVar6,&local_48);
    }
  }
LAB_14076bcc7:
  if (plVar10 != param_2) {
    if (lVar9 != 0) {
      uStack_40 = (longlong *)((ulonglong)uStack_40 & 0xffffffff00000000);
      local_48 = (longlong *)&LAB_14074f814;
      plVar1 = (longlong *)(lVar9 + 0x268);
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        *(undefined4 *)(plVar10 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar10 + 0x14) = local_48._4_4_;
        *(int *)(plVar10 + 3) = (int)uStack_40;
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_40._4_4_;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar7;
        *plVar10 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_res8);
        iVar2 = *(int *)(lVar9 + 0x270);
        *(int *)(lVar9 + 0x270) = iVar2 + 1;
        if (*(int *)(lVar9 + 0x274) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar11 = plVar10;
        *(undefined4 *)(puVar11 + 1) = 3;
      }
    }
    if (param_1[0xab] != 0) {
      FUN_142c266e0();
    }
  }
  lVar9 = param_1[0xab];
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 0x260) = 0;
    if (*(int *)(lVar9 + 0x264) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar9 + 600,0);
    }
    if ((param_2 != (longlong *)0x0) && (param_1[0xc9] != 0)) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGbxActionComponent::NotifyInterruptRequest",L"::")
      ;
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_res10,pwVar5 + 2,1);
      plVar1 = local_res10;
      lVar9 = param_1[0xab];
      lVar7 = param_1[0xc9];
      plVar10 = (longlong *)(lVar9 + 600);
      FWeakObjectPtr::operator=(&local_48,0);
      uStack_40 = (longlong *)0x0;
      FWeakObjectPtr::operator=(&local_48,lVar7);
      local_res8 = 0;
      uStack_40 = plVar1;
      if ((plVar1 != (longlong *)0x0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
        UObject::FindFunction(lVar7,uStack_40);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      iVar2 = *(int *)(lVar9 + 0x260);
      *(int *)(lVar9 + 0x260) = iVar2 + 1;
      if (*(int *)(lVar9 + 0x264) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
      }
      puVar14 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar10);
      *puVar14 = (undefined4)local_48;
      puVar14[1] = local_48._4_4_;
      *(longlong **)(puVar14 + 2) = uStack_40;
    }
  }
  return;
}



// FUNCTION 14076bf30 FUN_14076bf30 body=2100 status=ok
// SIG undefined FUN_14076bf30(void)

void FUN_14076bf30(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  byte local_38 [8];
  undefined8 local_30;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_142c1f5b0(uVar1);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_142df90a0();
      if (param_2 == '\0') {
        FUN_142c28cb0(lVar2,param_1,plVar3);
        uVar1 = FUN_142df95d0();
        FUN_142c28cb0(lVar2,param_1,uVar1);
        uVar1 = UGMapIconAnimatorComponent::GetPrivateStaticClass();
        FUN_142c28cb0(lVar2,param_1,uVar1);
        uVar1 = FUN_14079d730();
        FUN_142c28cb0(lVar2,param_1,uVar1);
        uVar1 = UGameplayTask_SpawnActor::GetPrivateStaticClass();
        FUN_142c28cb0(lVar2,param_1,uVar1);
        uVar1 = FUN_142df53d0();
        FUN_142c28cb0(lVar2,param_1,uVar1);
        iVar7 = (int)param_1[0x35];
        *(int *)(param_1 + 0x35) = iVar7 + 1;
        if (*(int *)((longlong)param_1 + 0x1ac) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x34,iVar7);
        }
        *(longlong *)(param_1[0x34] + (longlong)iVar7 * 8) = DAT_146859048;
      }
      else {
        lVar4 = plVar3[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 0x368))(plVar3);
          lVar4 = plVar3[0x1f];
        }
        bVar6 = *(byte *)(lVar4 + 0x48);
        uVar1 = *(undefined8 *)(lVar4 + 0x50);
        piVar9 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
        if ((*piVar9 < DAT_146859258) && (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1))
        {
          DAT_146859248 = 0xff;
          FName::FName(&DAT_146859250,L"Invalid",1);
          _Init_thread_footer(&DAT_146859258);
        }
        if (((bVar6 == DAT_146859248) || (*(int *)(lVar2 + 0xd8) <= (int)(uint)bVar6)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + (ulonglong)bVar6 * 8) == 0)) {
          uVar1 = FUN_142df90a0();
          FUN_142c23f40(lVar2,local_38,uVar1);
          plVar3 = (longlong *)FUN_142df90a0();
          lVar4 = plVar3[0x1f];
          if (lVar4 == 0) {
            (**(code **)(*plVar3 + 0x368))(plVar3);
            lVar4 = plVar3[0x1f];
          }
          uVar1 = *(undefined8 *)(lVar4 + 0x50);
          bVar6 = *(byte *)(lVar4 + 0x48);
        }
        local_38[0] = bVar6;
        local_30 = uVar1;
        FUN_142c243a0(lVar2,local_38,param_1);
        plVar3 = (longlong *)FUN_142df95d0();
        lVar4 = plVar3[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 0x368))(plVar3);
          lVar4 = plVar3[0x1f];
        }
        bVar6 = *(byte *)(lVar4 + 0x48);
        uVar1 = *(undefined8 *)(lVar4 + 0x50);
        if ((*piVar9 < DAT_146859258) && (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1))
        {
          DAT_146859248 = 0xff;
          FName::FName(&DAT_146859250,L"Invalid",1);
          _Init_thread_footer(&DAT_146859258);
        }
        if (((bVar6 == DAT_146859248) || (*(int *)(lVar2 + 0xd8) <= (int)(uint)bVar6)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + (ulonglong)bVar6 * 8) == 0)) {
          uVar1 = FUN_142df95d0();
          FUN_142c23f40(lVar2,local_38,uVar1);
          plVar3 = (longlong *)FUN_142df95d0();
          lVar4 = plVar3[0x1f];
          if (lVar4 == 0) {
            (**(code **)(*plVar3 + 0x368))(plVar3);
            lVar4 = plVar3[0x1f];
          }
          uVar1 = *(undefined8 *)(lVar4 + 0x50);
          bVar6 = *(byte *)(lVar4 + 0x48);
        }
        local_38[0] = bVar6;
        local_30 = uVar1;
        FUN_142c243a0(lVar2,local_38,param_1);
        plVar3 = (longlong *)UGMapIconAnimatorComponent::GetPrivateStaticClass();
        lVar4 = plVar3[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 0x368))(plVar3);
          lVar4 = plVar3[0x1f];
        }
        bVar6 = *(byte *)(lVar4 + 0x48);
        uVar1 = *(undefined8 *)(lVar4 + 0x50);
        if ((*piVar9 < DAT_146859258) && (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1))
        {
          DAT_146859248 = 0xff;
          FName::FName(&DAT_146859250,L"Invalid",1);
          _Init_thread_footer(&DAT_146859258);
        }
        if (((bVar6 == DAT_146859248) || (*(int *)(lVar2 + 0xd8) <= (int)(uint)bVar6)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + (ulonglong)bVar6 * 8) == 0)) {
          uVar1 = UGMapIconAnimatorComponent::GetPrivateStaticClass();
          FUN_142c23f40(lVar2,local_38,uVar1);
          plVar3 = (longlong *)UGMapIconAnimatorComponent::GetPrivateStaticClass();
          lVar4 = plVar3[0x1f];
          if (lVar4 == 0) {
            (**(code **)(*plVar3 + 0x368))(plVar3);
            lVar4 = plVar3[0x1f];
          }
          uVar1 = *(undefined8 *)(lVar4 + 0x50);
          bVar6 = *(byte *)(lVar4 + 0x48);
        }
        local_38[0] = bVar6;
        local_30 = uVar1;
        FUN_142c243a0(lVar2,local_38,param_1);
        plVar3 = (longlong *)FUN_14079d730();
        lVar4 = plVar3[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 0x368))(plVar3);
          lVar4 = plVar3[0x1f];
        }
        bVar6 = *(byte *)(lVar4 + 0x48);
        uVar1 = *(undefined8 *)(lVar4 + 0x50);
        if ((*piVar9 < DAT_146859258) && (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1))
        {
          DAT_146859248 = 0xff;
          FName::FName(&DAT_146859250,L"Invalid",1);
          _Init_thread_footer(&DAT_146859258);
        }
        if (((bVar6 == DAT_146859248) || (*(int *)(lVar2 + 0xd8) <= (int)(uint)bVar6)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + (ulonglong)bVar6 * 8) == 0)) {
          uVar1 = FUN_14079d730();
          FUN_142c23f40(lVar2,local_38,uVar1);
          plVar3 = (longlong *)FUN_14079d730();
          lVar4 = plVar3[0x1f];
          if (lVar4 == 0) {
            (**(code **)(*plVar3 + 0x368))(plVar3);
            lVar4 = plVar3[0x1f];
          }
          uVar1 = *(undefined8 *)(lVar4 + 0x50);
          bVar6 = *(byte *)(lVar4 + 0x48);
        }
        local_38[0] = bVar6;
        local_30 = uVar1;
        FUN_142c243a0(lVar2,local_38,param_1);
        plVar3 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
        lVar4 = plVar3[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 0x368))(plVar3);
          lVar4 = plVar3[0x1f];
        }
        bVar6 = *(byte *)(lVar4 + 0x48);
        uVar1 = *(undefined8 *)(lVar4 + 0x50);
        if ((*piVar9 < DAT_146859258) && (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1))
        {
          DAT_146859248 = 0xff;
          FName::FName(&DAT_146859250,L"Invalid",1);
          _Init_thread_footer(&DAT_146859258);
        }
        if (((bVar6 == DAT_146859248) || (*(int *)(lVar2 + 0xd8) <= (int)(uint)bVar6)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + (ulonglong)bVar6 * 8) == 0)) {
          uVar1 = UGameplayTask_SpawnActor::GetPrivateStaticClass();
          FUN_142c23f40(lVar2,local_38,uVar1);
          plVar3 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
          lVar4 = plVar3[0x1f];
          if (lVar4 == 0) {
            (**(code **)(*plVar3 + 0x368))(plVar3);
            lVar4 = plVar3[0x1f];
          }
          uVar1 = *(undefined8 *)(lVar4 + 0x50);
          bVar6 = *(byte *)(lVar4 + 0x48);
        }
        local_38[0] = bVar6;
        local_30 = uVar1;
        FUN_142c243a0(lVar2,local_38,param_1);
        plVar3 = (longlong *)FUN_142df53d0();
        lVar4 = plVar3[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*plVar3 + 0x368))(plVar3);
          lVar4 = plVar3[0x1f];
        }
        bVar6 = *(byte *)(lVar4 + 0x48);
        uVar1 = *(undefined8 *)(lVar4 + 0x50);
        if ((*piVar9 < DAT_146859258) && (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1))
        {
          DAT_146859248 = 0xff;
          FName::FName(&DAT_146859250,L"Invalid",1);
          _Init_thread_footer(&DAT_146859258);
        }
        if (((bVar6 == DAT_146859248) || (*(int *)(lVar2 + 0xd8) <= (int)(uint)bVar6)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + (ulonglong)bVar6 * 8) == 0)) {
          uVar1 = FUN_142df53d0();
          FUN_142c23f40(lVar2,local_38,uVar1);
          plVar3 = (longlong *)FUN_142df53d0();
          lVar4 = plVar3[0x1f];
          if (lVar4 == 0) {
            (**(code **)(*plVar3 + 0x368))(plVar3);
            lVar4 = plVar3[0x1f];
          }
          bVar6 = *(byte *)(lVar4 + 0x48);
          uVar1 = *(undefined8 *)(lVar4 + 0x50);
        }
        local_38[0] = bVar6;
        local_30 = uVar1;
        FUN_142c243a0(lVar2,local_38,param_1);
        lVar2 = (longlong)(int)param_1[0x35];
        if ((int)param_1[0x35] != 0) {
          iVar10 = 0;
          bVar11 = *(longlong *)param_1[0x34] != DAT_146859048;
          lVar5 = 0;
          lVar4 = DAT_146859048;
          iVar7 = 0;
          do {
            lVar5 = lVar5 + 1;
            iVar8 = iVar7 + 1;
            if (lVar5 < lVar2) {
              plVar3 = (longlong *)(param_1[0x34] + lVar5 * 8);
              do {
                if (bVar11 != (*plVar3 != lVar4)) break;
                iVar8 = iVar8 + 1;
                lVar5 = lVar5 + 1;
                plVar3 = plVar3 + 1;
              } while (lVar5 < lVar2);
            }
            if (bVar11 != false) {
              if (iVar10 != iVar7) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(param_1[0x34] + (longlong)iVar10 * 8),
                           (void *)(param_1[0x34] + (longlong)iVar7 * 8),
                           (longlong)(iVar8 - iVar7) << 3);
                lVar4 = DAT_146859048;
              }
              iVar10 = iVar10 + (iVar8 - iVar7);
            }
            bVar11 = (bool)(bVar11 ^ 1);
            iVar7 = iVar8;
          } while (lVar5 < lVar2);
          *(int *)(param_1 + 0x35) = iVar10;
        }
      }
    }
  }
  return;
}



// FUNCTION 14076c770 bpf__StartSelect__pf body=8 status=ok
// SIG undefined bpf__StartSelect__pf(void)

void ABP_BossTurret_C__pf3024885705::bpf__StartSelect__pf(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x620) = param_2;
  return;
}



// FUNCTION 14076c780 FUN_14076c780 body=17 status=ok
// SIG undefined FUN_14076c780(void)

void FUN_14076c780(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x5f8);
  if (lVar1 == 0) {
    return;
  }
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (*(longlong *)(lVar1 + 0x1b0) == 0)) {
    FUN_142df2e20(lVar1,param_2);
  }
  return;
}



// FUNCTION 14076c7a0 FUN_14076c7a0 body=327 status=ok
// SIG undefined FUN_14076c7a0(void)

void FUN_14076c7a0(longlong *param_1,longlong param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  pvVar1 = ThreadLocalStoragePointer;
  if (param_2 == 0) {
    param_2 = param_1[0xc2];
  }
  if (param_1[0xc3] != param_2) {
    param_1[0xc3] = param_2;
    if ((*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) <
         DAT_146859240) && (_Init_thread_header(&DAT_146859240), DAT_146859240 == -1)) {
      FName::FName(&DAT_146859238,L"Territory",1);
      _Init_thread_footer(&DAT_146859240);
    }
    lVar5 = param_1[0xad];
    lVar6 = param_1[0xc3];
    if (lVar5 != 0) {
      uVar2 = FUN_142bbd6b0(lVar5,&DAT_146859238);
      FUN_140725870(lVar5,uVar2,lVar6);
    }
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x668))(param_1);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = UHomeWidget::GetPrivateStaticClass();
      lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar5 + 0x120);
        if (lVar6 == 0) {
          lVar6 = FUN_1423407b0(lVar5);
        }
        lVar6 = FUN_142c1f5b0(lVar6);
        if (lVar6 != 0) {
          uVar4 = UGMapIconAnimatorComponent::GetPrivateStaticClass();
          FUN_142c2bc20(lVar6,lVar5,uVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 14076c8f0 FUN_14076c8f0 body=53 status=ok
// SIG undefined FUN_14076c8f0(void)

undefined8 FUN_14076c8f0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  uVar2 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_2 + 4) = uVar2;
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
  uVar1 = param_3[10];
  param_2[10] = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 14076c930 FUN_14076c930 body=499 status=ok
// SIG undefined FUN_14076c930(void)

void FUN_14076c930(longlong param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_res8;
  longlong local_res10;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  if ((((*(longlong *)(param_1 + 0x5c8) != 0) && (*(longlong *)(param_1 + 0x5e0) != 0)) &&
      (*(char *)(*(longlong *)(param_1 + 0x5c8) + 0xd70) != '\0')) &&
     (*(longlong *)(param_1 + 0x608) != 0)) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AGbxAIController::CheckPauseWhileFalling",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x5c8) + 0x5b0);
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x5c8) + 0x5b8) * 0x10 + lVar8;
    for (; lVar8 != lVar7; lVar8 = lVar8 + 0x10) {
      if ((*(longlong *)(lVar8 + 8) == local_res8) &&
         (lVar5 = FWeakObjectPtr::GetEvenIfUnreachable(lVar8), param_1 == lVar5)) {
        return;
      }
    }
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AGbxAIController::CheckPauseWhileFalling",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar8 = *(longlong *)(param_1 + 0x5c8);
    plVar9 = (longlong *)(lVar8 + 0x5b0);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_20);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
    iVar1 = *(int *)(lVar8 + 0x5b8);
    *(int *)(lVar8 + 0x5b8) = iVar1 + 1;
    if (*(int *)(lVar8 + 0x5bc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
    }
    puVar6 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar9);
    *puVar6 = local_28;
    puVar6[1] = local_24;
    *(longlong *)(puVar6 + 2) = local_20;
  }
  return;
}



// FUNCTION 14076cb30 FUN_14076cb30 body=50 status=ok
// SIG undefined FUN_14076cb30(void)

void FUN_14076cb30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14075f6c0(param_1 + -0x5b0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014076cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14076cb70 FUN_14076cb70 body=521 status=ok
// SIG undefined FUN_14076cb70(void)

void FUN_14076cb70(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  longlong local_res18;
  int local_28;
  int local_24;
  longlong local_20;
  
  lVar5 = FWeakObjectPtr::Get(param_2);
  if (lVar5 != 0) {
    plVar10 = (longlong *)(param_1 + 0x27f0);
    iVar4 = FUN_142c6d1b0(lVar5,plVar10);
    if (iVar4 != -1) {
      FUN_142c769d0(*plVar10 + (longlong)iVar4 * 0x48,param_2);
      return;
    }
    iVar4 = *(int *)(param_1 + 0x27f8);
    *(int *)(param_1 + 0x27f8) = iVar4 + 1;
    if (*(int *)(param_1 + 0x27fc) < iVar4 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar10,iVar4);
    }
    FUN_14074cac0(*plVar10 + (longlong)iVar4 * 0x48,param_2);
    lVar5 = FUN_142d29780(lVar5);
    if (lVar5 != 0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UAIGroupState::OnThreatActorDied",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar6, pwVar1 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res18,pwVar2 + 2,1);
      plVar10 = (longlong *)(lVar5 + 600);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1 + -0x38);
      local_20 = local_res18;
      if ((local_res18 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_20);
      }
      piVar8 = (int *)*plVar10;
      iVar4 = *(int *)(lVar5 + 0x260);
      for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar4 * 4; piVar9 = piVar9 + 4) {
        if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
            ((cVar3 = FWeakObjectPtr::IsValid(piVar9), cVar3 == '\0' &&
             (cVar3 = FWeakObjectPtr::IsValid(&local_28), cVar3 == '\0')))) &&
           (*(longlong *)(piVar9 + 2) == local_20)) {
          if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_14076cd5e;
          break;
        }
      }
      iVar4 = *(int *)(lVar5 + 0x260);
      *(int *)(lVar5 + 0x260) = iVar4 + 1;
      if (*(int *)(lVar5 + 0x264) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar4);
      }
      piVar8 = (int *)((longlong)iVar4 * 0x10 + *plVar10);
      *piVar8 = local_28;
      piVar8[1] = local_24;
      *(longlong *)(piVar8 + 2) = local_20;
LAB_14076cd5e:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    }
  }
  return;
}



// FUNCTION 14076cd80 FUN_14076cd80 body=78 status=ok
// SIG undefined FUN_14076cd80(void)

void FUN_14076cd80(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 5;
  FUN_140754f20();
  FUN_14076aff0(param_1);
  *(bool *)(param_1 + 0x28) = *(char *)(param_1 + 0x30) == '\x04';
  *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
    return;
  }
  return;
}



// FUNCTION 14076cdd0 FUN_14076cdd0 body=439 status=ok
// SIG undefined FUN_14076cdd0(void)

void FUN_14076cdd0(longlong param_1,longlong param_2,longlong param_3,float param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  
  lVar5 = 0;
  plVar1 = (longlong *)(param_1 + 0x2b0);
  plVar2 = (longlong *)*plVar1;
  iVar6 = *(int *)(param_1 + 0x2b8);
  plVar9 = plVar2;
  do {
    if (plVar9 == plVar2 + (longlong)iVar6 * 3) {
LAB_14076ceaa:
      iVar6 = *(int *)(param_1 + 0x2b8);
      lVar8 = (longlong)iVar6;
      *(int *)(param_1 + 0x2b8) = iVar6 + 1;
      if (*(int *)(param_1 + 700) < iVar6 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar6);
      }
      lVar7 = *plVar1;
      *(undefined8 *)(lVar7 + 0xc + lVar8 * 0x18) = 0;
      *(undefined4 *)(lVar7 + 0x14 + lVar8 * 0x18) = 0;
      *(undefined8 *)(lVar7 + lVar8 * 0x18) = 0;
      *(undefined8 *)(lVar7 + 8 + lVar8 * 0x18) = 0;
      lVar7 = *plVar1;
      if (param_2 != 0) {
        lVar5 = *(longlong *)(param_2 + 0x10);
      }
      *(longlong *)(lVar7 + lVar8 * 0x18) = lVar5;
      *(longlong *)(lVar7 + 8 + lVar8 * 0x18) = param_3;
      *(undefined4 *)(lVar7 + 0x10 + lVar8 * 0x18) = 0;
LAB_14076cf0a:
      lVar5 = *plVar1;
      if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar8 = FUN_1423407b0(param_1), lVar8 == 0)) {
        fVar10 = -1.0;
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x120);
        if (lVar8 == 0) {
          lVar8 = FUN_1423407b0(param_1);
        }
        fVar10 = *(float *)(lVar8 + 0x790);
      }
      *(float *)(lVar5 + 0x10 + (longlong)iVar6 * 0x18) = fVar10 + param_4;
      return;
    }
    lVar8 = lVar5;
    if (param_2 != 0) {
      lVar8 = *(longlong *)(param_2 + 0x10);
    }
    lVar7 = lVar5;
    if (*plVar9 != 0) {
      lVar4 = FUN_1428dfc70();
      for (lVar3 = *plVar9; (lVar7 = lVar5, lVar3 != 0 && (lVar7 = *plVar9, lVar3 != lVar4));
          lVar3 = *(longlong *)(lVar3 + 0x30)) {
      }
    }
    if ((lVar7 == lVar8) && (plVar9[1] == param_3)) {
      iVar6 = (int)(((longlong)plVar9 - (longlong)plVar2) / 0x18);
      if (iVar6 != -1) goto LAB_14076cf0a;
      goto LAB_14076ceaa;
    }
    plVar9 = plVar9 + 3;
  } while( true );
}



// FUNCTION 14076cf90 FUN_14076cf90 body=702 status=ok
// SIG undefined FUN_14076cf90(void)

void FUN_14076cf90(ulonglong *param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 local_res10;
  ulonglong local_68;
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined8 local_44;
  
  if ((param_2 != 0) && (iVar3 = (int)param_1[1], iVar3 != 0)) {
    plVar8 = (longlong *)*param_1;
    local_68 = 0;
    uVar9 = (longlong)iVar3 & 0x1fffffffffffffff;
    if (plVar8 + iVar3 < plVar8) {
      uVar9 = 0;
    }
    if (uVar9 != 0) {
      local_res10 = 0;
      do {
        local_58 = *plVar8;
        if (local_58 != 0) {
          if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
            plVar4 = (longlong *)param_3[8];
            if ((longlong *)param_3[8] == (longlong *)0x0) {
              plVar4 = param_3 + 7;
            }
            iVar3 = *(int *)((longlong)plVar4 +
                            ((longlong)((int)((ulonglong)local_58 >> 0x20) + (int)local_58) &
                            (longlong)(int)param_3[9] - 1U) * 4);
            if (iVar3 != -1) {
              do {
                lVar5 = *param_3 + (longlong)iVar3 * 0x28;
                if (*(longlong *)(*param_3 + (longlong)iVar3 * 0x28) == local_58) {
                  if ((iVar3 != -1) && (lVar5 != 0)) goto LAB_14076d0cb;
                  break;
                }
                iVar3 = *(int *)(lVar5 + 0x20);
              } while (iVar3 != -1);
            }
          }
          local_50 = &local_58;
          FUN_140747d00(param_3,&local_res10,&local_50,0);
          lVar5 = *param_3 + (longlong)(int)local_res10 * 0x28;
LAB_14076d0cb:
          lVar1 = *(longlong *)(lVar5 + 0x10);
          plVar4 = (longlong *)(lVar5 + 0x10);
          lVar7 = lVar1 + (longlong)*(int *)(lVar5 + 0x18) * 0xc;
          for (lVar6 = lVar1; lVar6 != lVar7; lVar6 = lVar6 + 0xc) {
            cVar2 = FUN_14058c1e0(lVar6,param_2);
            if (cVar2 != '\0') {
              if (lVar6 != lVar7) {
                iVar3 = (int)((lVar6 - lVar1) / 0xc);
                goto LAB_14076d10d;
              }
              break;
            }
          }
          iVar3 = -1;
LAB_14076d10d:
          if (iVar3 < 0) {
            local_48 = 0xffffffff;
            local_44 = 0;
            FWeakObjectPtr::operator=(&local_48,param_2);
            iVar3 = *(int *)(lVar5 + 0x18);
            lVar7 = (longlong)iVar3;
            local_44 = CONCAT44(param_4,(undefined4)local_44);
            *(int *)(lVar5 + 0x18) = iVar3 + 1;
            if (*(int *)(lVar5 + 0x1c) < iVar3 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar4,iVar3);
            }
            lVar5 = *plVar4;
            *(undefined4 *)(lVar5 + lVar7 * 0xc) = local_48;
            *(undefined4 *)(lVar5 + 4 + lVar7 * 0xc) = (undefined4)local_44;
            *(undefined4 *)(lVar5 + 8 + lVar7 * 0xc) = local_44._4_4_;
          }
          else {
            *(undefined4 *)(*plVar4 + 8 + (longlong)iVar3 * 0xc) = param_4;
          }
        }
        lVar5 = *(longlong *)(param_2 + 0x568);
        if (lVar5 != 0) {
          plVar4 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
          if (plVar4 == (longlong *)0x0) {
            lVar7 = 0;
          }
          else {
            lVar7 = plVar4[0x1f];
            if (lVar7 == 0) {
              (**(code **)(*plVar4 + 0x368))(plVar4);
              lVar7 = plVar4[0x1f];
            }
          }
          FUN_142bb3d50(lVar5,local_58,lVar7);
        }
        local_68 = local_68 + 1;
        plVar8 = plVar8 + 1;
      } while (local_68 != uVar9);
    }
  }
  return;
}



// FUNCTION 14076d250 FUN_14076d250 body=218 status=ok
// SIG undefined FUN_14076d250(void)

void FUN_14076d250(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x1f0);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    return;
  }
  local_18 = *(undefined8 *)(param_1 + 0x200);
  local_28 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(char *)(param_1 + 0x218) == '\x03') {
    local_20 = *(undefined8 *)(lVar1 + 0x118);
    if (param_2 != '\0') {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x1c0,&local_28);
      uVar2 = 0;
      if (*(longlong *)(param_1 + 0x1f0) != 0) {
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x118);
      }
      FUN_14076cdd0(param_1,uVar2,*(undefined8 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x210))
      ;
      goto LAB_14076d313;
    }
    lVar1 = param_1 + 0x1b0;
  }
  else {
    local_20 = *(undefined8 *)(lVar1 + 0x118);
    lVar1 = param_1 + 400;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar1,&local_28);
LAB_14076d313:
  FUN_140755420(param_1,param_2);
  return;
}



// FUNCTION 14076d330 FUN_14076d330 body=603 status=ok
// SIG undefined FUN_14076d330(void)

undefined8 FUN_14076d330(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return 0;
  }
  lVar1 = UBlackboardKeyType::GetPrivateStaticClass();
  lVar3 = *(longlong *)(param_2 + 0x18);
  lVar2 = lVar3;
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (lVar2 == lVar1) break;
    lVar2 = *(longlong *)(lVar2 + 0x30);
  }
  if (lVar3 == 0) {
    return 0;
  }
  if (lVar3 != 0) {
    lVar1 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar3 = *(longlong *)(param_2 + 0x18);
    for (lVar2 = lVar3; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) goto LAB_14076d3c7;
    }
  }
  lVar3 = 0;
LAB_14076d3c7:
  lVar2 = FUN_1407a2860();
  if (lVar3 == lVar2) {
    local_38 = *param_4;
    local_30 = param_4[2];
    uStack_2c = param_4[3];
    uStack_28 = param_4[4];
    uStack_24 = param_4[5];
    local_20 = param_4[6];
    uStack_1c = param_4[7];
    uStack_18 = param_4[8];
    uStack_14 = param_4[9];
    local_34 = param_4[1];
    local_10 = param_4[10];
    FUN_140725c40(param_3,*(undefined1 *)(param_2 + 0x20),&local_38);
    return 1;
  }
  lVar3 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x18) != 0) {
    lVar4 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_2 + 0x18);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) goto joined_r0x00014076d443;
    }
  }
  lVar1 = 0;
joined_r0x00014076d443:
  for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
    if (lVar1 == lVar3) {
      uVar5 = FWeakObjectPtr::Get(param_4);
      FUN_140725870(param_3,*(undefined1 *)(param_2 + 0x20),uVar5);
      return 1;
    }
  }
  lVar3 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x18) != 0) {
    lVar4 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_2 + 0x18);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) goto joined_r0x00014076d48a;
    }
  }
  lVar1 = 0;
joined_r0x00014076d48a:
  for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
    if (lVar1 == lVar3) {
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,local_48,param_4);
      local_58 = *puVar6;
      local_50 = *(undefined4 *)(puVar6 + 1);
      FUN_14074b0b0(param_3,*(undefined1 *)(param_2 + 0x20),&local_58);
      return 1;
    }
  }
  lVar3 = FUN_142c361d0();
  if (*(longlong *)(param_2 + 0x18) != 0) {
    lVar4 = UBlackboardKeyType::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_2 + 0x18);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) goto joined_r0x00014076d4d3;
    }
  }
  lVar1 = 0;
joined_r0x00014076d4d3:
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (lVar1 == lVar3) break;
    lVar1 = *(longlong *)(lVar1 + 0x30);
  }
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x2a0))(param_1,local_48,param_4);
  local_58 = *puVar6;
  local_50 = *(undefined4 *)(puVar6 + 1);
  FUN_14074ace0(param_3,*(undefined1 *)(param_2 + 0x20),&local_58);
  return 1;
}



// FUNCTION 14076d5a0 FUN_14076d5a0 body=641 status=ok
// SIG undefined FUN_14076d5a0(void)

ulonglong FUN_14076d5a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,longlong param_7,undefined4 param_8,
                       undefined4 param_9,undefined8 param_10,char param_11)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar9;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  longlong *local_68;
  int local_60;
  undefined1 local_58 [28];
  float local_3c;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if (param_7 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  cVar1 = *(char *)(param_1 + 0x202);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  if (cVar1 == '\0') {
    pcVar7 = UEnvQueryTest_Trace::RunLineTraceTo;
LAB_14076d63e:
    FUN_140747140(&local_68,param_1,pcVar7);
    if (((local_60 != 0) && (local_68 != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*local_68 + 0x18))(), cVar1 != '\0')) {
      local_98 = *(undefined4 *)(param_1 + 0x1f0);
      local_94 = *(undefined4 *)(param_1 + 500);
      local_90 = *(undefined4 *)(param_1 + 0x1f8);
      uVar2 = UEngineTypes::ConvertToCollisionChannel(*(undefined1 *)(param_1 + 0x200));
      uVar8 = FUN_1428cc5b0(param_7);
      FUN_1424c8560(local_58,param_3,param_4,uVar8,CONCAT44(uVar9,param_8),param_9);
      cVar1 = FUN_1424ca840(local_58);
      if (cVar1 != '\0') {
        iVar6 = 2;
        if (1 < *(int *)(param_1 + 0x300)) {
          iVar6 = *(int *)(param_1 + 0x300);
        }
        uVar4 = 0;
        iVar5 = 0;
        if (0 < iVar6) {
          do {
            FUN_1424be5e0(local_58,local_78,(float)iVar5 * (local_3c / (float)iVar6));
            iVar5 = iVar5 + 1;
            FUN_1424be5e0(local_58,local_88,(float)iVar5 * (local_3c / (float)iVar6));
            plVar3 = (longlong *)0x0;
            if (local_60 != 0) {
              plVar3 = local_68;
            }
            cVar1 = (**(code **)(*plVar3 + 0x38))
                              (plVar3,local_78,local_88,param_6,param_7,uVar2,param_5,&local_98);
          } while (((cVar1 == '\0') || (uVar4 = 1, param_11 != '\0')) && (iVar5 < iVar6));
        }
        goto LAB_14076d7b2;
      }
    }
  }
  else {
    if (cVar1 == '\x01') {
      pcVar7 = FUN_142c0fac0;
      goto LAB_14076d63e;
    }
    if (cVar1 == '\x02') {
      pcVar7 = FUN_142c104c0;
      goto LAB_14076d63e;
    }
    if (cVar1 == '\x03') {
      pcVar7 = FUN_142c0fe50;
      goto LAB_14076d63e;
    }
  }
  uVar4 = 0;
LAB_14076d7b2:
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) {
      return uVar4;
    }
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 14076d830 FUN_14076d830 body=52 status=ok
// SIG undefined FUN_14076d830(void)

bool FUN_14076d830(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_4 == 0) {
    uVar2 = FWeakObjectPtr::IsValid(param_3);
    return (bool)uVar2;
  }
  if (param_4 != 1) {
    return false;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_3);
  return cVar1 == '\0';
}



// FUNCTION 14076d870 FUN_14076d870 body=338 status=ok
// SIG undefined FUN_14076d870(void)

void FUN_14076d870(longlong *param_1)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  FUN_142bcc070();
  if (0 < (int)param_1[0xd2]) {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar6 == 0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = *(float *)(lVar6 + 0x8c8);
    }
    bVar4 = false;
    iVar7 = (int)param_1[0xd2] + -1;
    if (-1 < iVar7) {
      lVar8 = (longlong)iVar7 * 0x30;
      lVar9 = (longlong)(int)param_1[0xd2] * 0x30;
      lVar6 = lVar8;
      do {
        lVar3 = param_1[0xd1];
        fVar10 = fVar11 - *(float *)(lVar8 + 0x14 + lVar3);
        if ((fVar10 < 0.0) ||
           (pfVar1 = (float *)(lVar8 + 0x18 + lVar3), *pfVar1 <= fVar10 && fVar10 != *pfVar1)) {
          iVar2 = (int)param_1[0xd2];
          bVar4 = true;
          iVar5 = (iVar2 - iVar7) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar3 + lVar6),(void *)(lVar9 + lVar3),(longlong)iVar5 * 0x30);
            iVar2 = (int)param_1[0xd2];
          }
          *(int *)(param_1 + 0xd2) = iVar2 + -1;
          TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_1 + 0xd1);
        }
        lVar9 = lVar9 + -0x30;
        lVar6 = lVar6 + -0x30;
        lVar8 = lVar8 + -0x30;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      if (bVar4) {
        FUN_140757f80(param_1 + 0xd5,param_1);
      }
    }
  }
  return;
}



// FUNCTION 14076d9d0 FUN_14076d9d0 body=365 status=ok
// SIG undefined FUN_14076d9d0(void)

void FUN_14076d9d0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  FUN_14076eea0(param_1 + 0x20);
  FUN_14076e5b0(param_1 + 0x2738,param_2,*(undefined8 *)(param_1 + 0x18));
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120), lVar3 != 0 ||
      (lVar3 = FUN_1423407b0(), lVar3 != 0)))) {
    FUN_14076e9d0(param_1 + 0x2780,lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x2808);
  if (0 < iVar1) {
    iVar5 = 0;
    lVar3 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2800));
    bVar6 = lVar3 != 0;
    iVar4 = 0;
    do {
      iVar2 = iVar4;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        lVar3 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2800) + (longlong)iVar2 * 0x48);
      } while (bVar6 == (lVar3 != 0));
      if (bVar6 != false) {
        if (iVar5 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x2800) + (longlong)iVar5 * 0x48),
                     (void *)(*(longlong *)(param_1 + 0x2800) + (longlong)iVar4 * 0x48),
                     (longlong)(iVar2 - iVar4) * 0x48);
        }
        iVar5 = iVar5 + (iVar2 - iVar4);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar4 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(param_1 + 0x2808) = iVar5;
    if (iVar5 < 1) {
      *(undefined4 *)(param_1 + 0x2814) = 0;
    }
  }
  return;
}



// FUNCTION 14076db40 FUN_14076db40 body=65 status=ok
// SIG undefined FUN_14076db40(void)

void FUN_14076db40(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_142fb75f0();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    cVar1 = UWorld::IsGameWorld(lVar2);
    if (cVar1 != '\0') {
      return;
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)lVar2);
  return;
}



// FUNCTION 14076db90 FUN_14076db90 body=427 status=ok
// SIG undefined FUN_14076db90(void)

void FUN_14076db90(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  float fVar4;
  undefined8 local_res8;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  plVar1 = (longlong *)(param_1 + 0x1e8);
  if ((((0.0 < *(float *)(param_1 + 0x230)) && ((longlong *)*plVar1 != (longlong *)0x0)) &&
      (lVar3 = (**(code **)(*(longlong *)*plVar1 + 0x148))(), lVar3 != 0)) &&
     (*(float *)(param_1 + 0x230) <= *(float *)(lVar3 + 0x790) &&
      *(float *)(lVar3 + 0x790) != *(float *)(param_1 + 0x230))) {
    FUN_140755160(plVar1);
  }
  if ((((*(float *)(param_1 + 0x230) <= 0.0) && (*(char *)(param_1 + 0x218) == '\x03')) &&
      ((*(int *)(param_1 + 0x2c0) < 0 &&
       ((*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0 &&
        (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x148))(), lVar3 != 0)))))) &&
     ((*(float *)(param_1 + 0x2c4) < *(float *)(lVar3 + 0x790) &&
      (lVar3 = *(longlong *)(param_1 + 0x1f0), lVar3 != 0)))) {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x568);
    fVar4 = (float)FUN_142de77e0(lVar3 + 0x1d8,*(longlong *)(param_1 + 0x1d8),0,&local_res8);
    if (0.5 <= fVar4) {
      uVar2 = FUN_142d369f0(lVar3 + 0x3d8,*(undefined8 *)(param_1 + 0x1d8),param_1 + 0x2c8);
      *(undefined4 *)(param_1 + 0x2c0) = uVar2;
    }
  }
  if (((((*(longlong *)(param_1 + 0x1f0) != 0) && (*(longlong *)(param_1 + 0x1f8) != 0)) &&
       (*(longlong *)(*plVar1 + 0x5e8) != 0)) &&
      ((0 < *(int *)(*(longlong *)(*plVar1 + 0x5e8) + 0x7540) &&
       (*(char *)(param_1 + 0x214) != '\0')))) &&
     ((*(char *)(param_1 + 0x215) == '\0' && (*(longlong *)(param_1 + 0x1f8) != 0)))) {
    local_38 = *(undefined8 *)(param_1 + 0x1d8);
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x118);
    local_28 = *(undefined8 *)(param_1 + 0x200);
    lVar3 = param_1 + 0x1b0;
    if (*(char *)(param_1 + 0x218) != '\x03') {
      lVar3 = param_1 + 400;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar3,&local_38);
    FUN_140755420(param_1,0);
  }
  return;
}



// FUNCTION 14076dd40 FUN_14076dd40 body=233 status=ok
// SIG undefined FUN_14076dd40(void)

void FUN_14076dd40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint7 uVar4;
  longlong lVar3;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  uVar8 = uVar6;
  if (*(int *)(param_1 + 0x498) < 1) {
LAB_14076ddf2:
    if (param_2[2] != 0) {
      FMemory::Free();
    }
    if (*param_2 != 0) {
      FMemory::Free();
      return;
    }
    return;
  }
LAB_14076dd80:
  lVar7 = *(longlong *)(param_1 + 0x490) + uVar8;
  lVar3 = *(longlong *)(lVar7 + 8);
  uVar4 = (uint7)((ulonglong)lVar3 >> 8);
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_2;
    plVar1 = plVar2 + (int)param_2[1];
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == lVar3) goto LAB_14076de25;
    }
    plVar2 = (longlong *)param_2[2];
    plVar1 = plVar2 + (int)param_2[3];
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == lVar3) goto LAB_14076de25;
    }
  }
  lVar3 = (ulonglong)uVar4 << 8;
  goto LAB_14076ddd2;
LAB_14076de25:
  lVar3 = CONCAT71(uVar4,1);
LAB_14076ddd2:
  FUN_14076b460(lVar7,lVar3);
  uVar5 = (int)uVar6 + 1;
  uVar6 = (ulonglong)uVar5;
  uVar8 = uVar8 + 0x80;
  if (*(int *)(param_1 + 0x498) <= (int)uVar5) goto LAB_14076ddf2;
  goto LAB_14076dd80;
}



// FUNCTION 14076de30 FUN_14076de30 body=43 status=ok
// SIG undefined FUN_14076de30(void)

void FUN_14076de30(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)(param_1 + 0x118);
  local_10 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x748,&local_18);
  return;
}



// FUNCTION 14076de60 FUN_14076de60 body=43 status=ok
// SIG undefined FUN_14076de60(void)

void FUN_14076de60(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)(param_1 + 0x118);
  local_10 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x758,&local_18);
  return;
}



// FUNCTION 14076de90 FUN_14076de90 body=536 status=ok
// SIG undefined FUN_14076de90(void)

ulonglong FUN_14076de90(longlong param_1,longlong param_2,int param_3,float param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  ulonglong in_RAX;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if ((param_2 != 0) && (-1 < param_3)) {
    lVar8 = *(longlong *)(param_1 + 0x10);
    in_RAX = (ulonglong)*(int *)(param_1 + 0x18);
    lVar11 = in_RAX * 0x38 + lVar8;
    for (; lVar8 != lVar11; lVar8 = lVar8 + 0x38) {
      if (*(int *)(lVar8 + 0x2c) == param_3) {
        FUN_140770810(lVar8,param_4);
      }
      in_RAX = 0;
      if ((byte)(*(char *)(lVar8 + 0x30) - 2U) < 3) {
        lVar9 = *(longlong *)(lVar8 + 8);
        in_RAX = (ulonglong)*(int *)(lVar8 + 0x10);
        lVar6 = lVar9 + in_RAX * 0x18;
        for (; lVar9 != lVar6; lVar9 = lVar9 + 0x18) {
          lVar5 = *(longlong *)(lVar9 + 8);
          in_RAX = (ulonglong)*(int *)(lVar9 + 0x10);
          lVar1 = lVar5 + in_RAX * 8;
          for (; lVar5 != lVar1; lVar5 = lVar5 + 8) {
            in_RAX = FUN_14058c1e0(lVar5,param_2);
            if ((char)in_RAX != '\0') {
              FWeakObjectPtr::operator=(&local_res10,param_2);
              lVar11 = *(longlong *)(lVar8 + 0x18);
              iVar10 = *(int *)(lVar8 + 0x20);
              lVar6 = lVar11;
              goto joined_r0x00014076df8e;
            }
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
joined_r0x00014076df8e:
  if (lVar6 == lVar11 + (longlong)iVar10 * 8) {
LAB_14076dfb8:
    iVar10 = *(int *)(lVar8 + 0x20);
    *(int *)(lVar8 + 0x20) = iVar10 + 1;
    if (*(int *)(lVar8 + 0x24) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x18,iVar10);
    }
    lVar11 = *(longlong *)(lVar8 + 0x18);
    *(undefined4 *)(lVar11 + (longlong)iVar10 * 8) = local_res10;
    *(undefined4 *)(lVar11 + 4 + (longlong)iVar10 * 8) = local_res14;
LAB_14076dfe5:
    lVar6 = *(longlong *)(lVar8 + 8);
    iVar10 = 0;
    lVar11 = lVar6 + (longlong)*(int *)(lVar8 + 0x10) * 0x18;
    do {
      if (lVar6 == lVar11) {
        iVar3 = *(int *)(lVar8 + 0x20);
        if ((iVar10 <= iVar3) &&
           (((*(char *)(lVar8 + 0x30) != '\x02' || (*(float *)(lVar8 + 0x34) < 0.0)) ||
            (1.0 <= param_4 - *(float *)(lVar8 + 0x34))))) {
          *(undefined1 *)(lVar8 + 0x30) = 4;
          FUN_140754f20(lVar8);
          FUN_14076aff0(lVar8);
          *(undefined4 *)(lVar8 + 0x34) = 0xbf800000;
          *(bool *)(lVar8 + 0x28) = *(char *)(lVar8 + 0x30) == '\x04';
        }
        return (ulonglong)(iVar10 <= iVar3);
      }
      puVar7 = *(undefined4 **)(lVar6 + 8);
      puVar2 = puVar7 + (longlong)*(int *)(lVar6 + 0x10) * 2;
      for (; puVar7 != puVar2; puVar7 = puVar7 + 2) {
        local_res10 = *puVar7;
        local_res14 = puVar7[1];
        cVar4 = FWeakObjectPtr::IsValid(&local_res10);
        if (cVar4 == '\0') {
          return 0;
        }
        iVar10 = iVar10 + 1;
      }
      lVar6 = lVar6 + 0x18;
    } while( true );
  }
  cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,&local_res10);
  if (cVar4 != '\0') {
    if ((int)(lVar6 - lVar11 >> 3) != -1) goto LAB_14076dfe5;
    goto LAB_14076dfb8;
  }
  lVar6 = lVar6 + 8;
  goto joined_r0x00014076df8e;
}



// FUNCTION 14076e0b0 FUN_14076e0b0 body=195 status=ok
// SIG undefined FUN_14076e0b0(void)

void FUN_14076e0b0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x608) != 0) {
    FUN_14070a950();
  }
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x638);
  uVar2 = (longlong)*(int *)(param_1 + 0x640) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x640) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_140777630();
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  FWeakObjectPtr::operator=(param_1 + 0x698,0);
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x6a8,0);
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  FUN_142bccad0(param_1);
  return;
}



// FUNCTION 14076e180 FUN_14076e180 body=495 status=ok
// SIG undefined FUN_14076e180(void)

void FUN_14076e180(longlong param_1,longlong param_2,char param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 local_res8;
  longlong local_res10 [2];
  undefined8 local_res20;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(longlong *)(param_1 + 0x8b0) == param_2) {
    local_res10[0] = param_2;
    if (param_3 != '\0') {
      FUN_1404cb7e0(param_1 + 0x8c0);
    }
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    fVar1 = *(float *)(lVar2 + 0x790);
    if (*(char *)(param_1 + 0x798) == '\0') {
      puVar3 = &local_res20;
      lVar2 = *(longlong *)(param_1 + 0x6f8) + 0xc0;
      local_res20 = 0xffffffffffffffff;
    }
    else {
      local_res8 = 0xffffffffffffffff;
      lVar2 = param_1 + 0x7a0;
      puVar3 = &local_res8;
    }
    fVar4 = (float)FUN_142de77e0(lVar2,0,0,puVar3);
    lVar2 = *(longlong *)(param_1 + 0x120);
    *(float *)(param_1 + 0x8d0) = fVar4 + fVar1;
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    fVar1 = *(float *)(lVar2 + 0x790);
    if (*(char *)(param_1 + 0x820) == '\0') {
      puVar3 = &local_78;
      lVar2 = *(longlong *)(param_1 + 0x6f8) + 0x140;
      local_78 = 0xffffffffffffffff;
    }
    else {
      local_res20 = 0xffffffffffffffff;
      lVar2 = param_1 + 0x828;
      puVar3 = &local_res20;
    }
    fVar4 = (float)FUN_142de77e0(lVar2,0,0,puVar3);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x8d8,&local_res8,local_res10[0]);
    if (((int)local_res8 == -1) ||
       (lVar2 = *(longlong *)(param_1 + 0x8d8) + (longlong)(int)local_res8 * 0x18, lVar2 == 0)) {
      local_70 = local_res10;
      FUN_140747840(param_1 + 0x8d8,&local_res8,&local_70,0);
      lVar2 = *(longlong *)(param_1 + 0x8d8) + (longlong)(int)local_res8 * 0x18;
    }
    local_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
    local_50 = 0;
    *(float *)(lVar2 + 8) = fVar4 + fVar1;
    *(undefined8 *)(param_1 + 0x8b0) = 0;
    *(undefined8 *)(param_1 + 0x8a8) = 0;
    *(undefined1 *)(param_1 + 0x8b8) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x8c0,&local_50);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  }
  return;
}



// FUNCTION 14076e370 FUN_14076e370 body=280 status=ok
// SIG undefined FUN_14076e370(void)

void FUN_14076e370(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_res8;
  undefined8 local_res18;
  
  FWeakObjectPtr::operator=(&local_res18);
  iVar1 = *(int *)(param_1 + 0xf0);
  local_res8 = local_res18;
  if (iVar1 != 0) {
    iVar5 = 0;
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (*(longlong *)(param_1 + 0xe8) + 4,&local_res8);
    bVar6 = cVar3 == '\0';
    iVar4 = 0;
    do {
      iVar2 = iVar4;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(param_1 + 0xe8) + ((longlong)iVar2 * 3 + 1) * 4,&local_res8
                          );
      } while (bVar6 == (cVar3 == '\0'));
      if (bVar6 != false) {
        if (iVar5 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar5 * 0xc),
                     (void *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar4 * 0xc),
                     (longlong)(iVar2 - iVar4) * 0xc);
        }
        iVar5 = iVar5 + (iVar2 - iVar4);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar4 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(param_1 + 0xf0) = iVar5;
  }
  return;
}



// FUNCTION 14076e490 FUN_14076e490 body=280 status=ok
// SIG undefined FUN_14076e490(void)

void FUN_14076e490(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_res8;
  undefined8 local_res18;
  
  FWeakObjectPtr::operator=(&local_res18);
  iVar1 = *(int *)(param_1 + 0xa0);
  local_res8 = local_res18;
  if (iVar1 != 0) {
    iVar5 = 0;
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (*(longlong *)(param_1 + 0x98) + 4,&local_res8);
    bVar6 = cVar3 == '\0';
    iVar4 = 0;
    do {
      iVar2 = iVar4;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(param_1 + 0x98) + ((longlong)iVar2 * 3 + 1) * 4,&local_res8
                          );
      } while (bVar6 == (cVar3 == '\0'));
      if (bVar6 != false) {
        if (iVar5 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 0xc),
                     (void *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 0xc),
                     (longlong)(iVar2 - iVar4) * 0xc);
        }
        iVar5 = iVar5 + (iVar2 - iVar4);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar4 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(param_1 + 0xa0) = iVar5;
  }
  return;
}



// FUNCTION 14076e5b0 FUN_14076e5b0 body=1056 status=ok
// SIG undefined FUN_14076e5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076e5b0(float *param_1,float param_2,longlong param_3)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar15;
  float *pfVar17;
  float *pfVar18;
  ulonglong uVar19;
  undefined1 auStack_528 [32];
  undefined8 *local_508;
  undefined4 local_500;
  undefined8 local_4f8;
  int local_4e8;
  float *local_4e0;
  undefined8 local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  float *local_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 local_4b0;
  float *local_4a8;
  float *local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined1 local_468 [112];
  undefined1 local_3f8 [908];
  byte local_6c;
  ulonglong local_68;
  ulonglong uVar16;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_528;
  fVar2 = *param_1;
  *param_1 = fVar2 - param_2;
  if (fVar2 - param_2 <= 0.0) {
    pfVar18 = param_1 + 6;
    uVar19 = 0;
    pfVar1 = param_1 + 2;
    pfVar17 = param_1;
    local_4e0 = pfVar18;
    local_4c0 = param_1;
    if ((param_3 != 0) && (cVar6 = FUN_1407cd8e0(param_3), cVar6 != '\0')) {
      lVar7 = FUN_1407c9400(param_3);
      if (*(longlong *)(lVar7 + 0x18) != 0) {
        FUN_1407c7b00(*(longlong *)(lVar7 + 0x18),&DAT_146859090,1);
        uVar16 = (ulonglong)
                 ((longlong)(DAT_146859090 + DAT_146859098) + (7 - (longlong)DAT_146859090)) >> 3;
        if (DAT_146859090 + DAT_146859098 < DAT_146859090) {
          uVar16 = uVar19;
        }
        puVar12 = DAT_146859090;
        if (uVar16 != 0) {
          do {
            plVar11 = (longlong *)*puVar12;
            plVar8 = (longlong *)(**(code **)(*plVar11 + 0x668))(plVar11);
            if (plVar8 != (longlong *)0x0) {
              uVar9 = UHomeWidget::GetPrivateStaticClass();
              lVar7 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar9);
              pfVar18 = local_4e0;
              if ((lVar7 != 0) &&
                 (lVar10 = FUN_142ddddc0(plVar11), pfVar18 = local_4e0, lVar10 != 0)) {
                fVar2 = param_1[4];
                param_1[4] = (float)((int)fVar2 + 1);
                if ((int)param_1[5] < (int)fVar2 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(pfVar1,fVar2);
                }
                pfVar18 = local_4e0;
                *(longlong *)(*(longlong *)pfVar1 + (longlong)(int)fVar2 * 8) = lVar7;
                fVar2 = local_4e0[2];
                local_4e0[2] = (float)((int)fVar2 + 1);
                if ((int)local_4e0[3] < (int)fVar2 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_4e0,fVar2)
                  ;
                }
                *(longlong *)(*(longlong *)pfVar18 + (longlong)(int)fVar2 * 8) = lVar10;
              }
            }
            puVar12 = puVar12 + 1;
            uVar19 = uVar19 + 1;
            pfVar17 = local_4c0;
          } while (uVar19 != uVar16);
        }
        DAT_146859098 = 0;
        if ((DAT_14685909c < 0) && (DAT_14685909c != 0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146859090,0);
        }
      }
    }
    if (pfVar17[4] != 0.0) {
      pfVar13 = pfVar17 + 10;
      local_4a8 = pfVar13;
      FUN_140771030(pfVar18,pfVar13);
      if (pfVar17[0xc] != 0.0) {
        pfVar15 = pfVar17 + 0xe;
        local_4a0 = pfVar15;
        FUN_140771370(pfVar13,pfVar1,pfVar18,pfVar15);
        local_4e8 = 0;
        if (0 < (int)pfVar17[0xc]) {
          local_4c8 = 0;
          local_4d0 = 0;
          do {
            uVar16 = 0;
            lVar7 = *(longlong *)(local_4d0 + *(longlong *)pfVar13);
            uVar9 = *(undefined8 *)(local_4c8 + *(longlong *)pfVar15);
            local_4e0 = (float *)CONCAT44(local_4e0._4_4_,
                                          *(undefined4 *)(local_4c8 + 8 + *(longlong *)pfVar15));
            uVar19 = uVar16;
            if (0 < (int)param_1[4]) {
              do {
                uVar3 = *(undefined8 *)(uVar19 + *(longlong *)pfVar1);
                uVar4 = *(undefined8 *)(uVar19 + *(longlong *)pfVar18);
                FUN_142dc1ad0(local_3f8);
                cVar6 = FUN_142dd0170(uVar4,lVar7,local_3f8);
                if ((cVar6 == '\0') || ((local_6c & 4) == 0)) {
                  local_480 = local_4e0._0_4_;
                  local_488 = uVar9;
                  plVar11 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
                  lVar10 = plVar11[0x1f];
                  if (lVar10 == 0) {
                    (**(code **)(*plVar11 + 0x368))();
                    lVar10 = plVar11[0x1f];
                  }
                  if ((lVar7 != 0) && (lVar10 != 0)) {
                    lVar5 = *(longlong *)(lVar7 + 0x168);
                    if (lVar5 == 0) {
                      local_490 = DAT_1468b5d98;
                      puVar12 = &local_498;
                      local_498 = _DAT_1468b5d90;
                    }
                    else {
                      puVar12 = (undefined8 *)&local_4b8;
                      local_4b8 = *(undefined4 *)(lVar5 + 0x220);
                      local_4b0 = *(undefined4 *)(lVar5 + 0x228);
                      uStack_4b4 = *(undefined4 *)(lVar5 + 0x224);
                    }
                    local_478 = *puVar12;
                    local_470 = *(undefined4 *)(puVar12 + 1);
                    local_4f8 = 0;
                    local_500 = 0;
                    local_508 = &local_488;
                    local_4d8 = 0;
                    FUN_142c1a410(local_468,lVar10,0x3f800000,&local_478);
                    FUN_142c24770(uVar3,lVar7,local_468);
                  }
                }
                uVar14 = (int)uVar16 + 1;
                uVar16 = (ulonglong)uVar14;
                pfVar13 = local_4a8;
                uVar19 = uVar19 + 8;
              } while ((int)uVar14 < (int)param_1[4]);
            }
            local_4e8 = local_4e8 + 1;
            local_4d0 = local_4d0 + 8;
            local_4c8 = local_4c8 + 0xc;
            pfVar15 = local_4a0;
            pfVar17 = local_4c0;
          } while (local_4e8 < (int)pfVar13[2]);
        }
      }
    }
    FUN_140764630(pfVar17);
  }
  return;
}



// FUNCTION 14076e9d0 FUN_14076e9d0 body=1232 status=ok
// SIG undefined FUN_14076e9d0(void)

void FUN_14076e9d0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  undefined4 *puVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  char local_res10 [8];
  uint local_res18;
  uint local_res20;
  uint local_98;
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78 [8];
  
  if ((((param_2 != 0) && (uVar16 = *(uint *)(param_2 + 0x830), (uVar16 & 0x600) == 0)) &&
      ((uVar16 & 0x20) != 0)) && ((-1 < (char)uVar16 && (*(int *)(param_1 + 8) != 0)))) {
    fVar2 = *(float *)(param_2 + 0x8c8);
    FUN_140770cc0(param_1 + 0x28,fVar2);
    FUN_140751170(param_1 + 0x10,param_1,param_1 + 0x28,fVar2);
    lVar13 = DAT_1468590b0;
    local_98 = *(uint *)(param_1 + 0x18);
    if (local_98 != 0) {
      cVar5 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
        lVar8 = 4;
      }
      else {
        lVar8 = 0;
      }
      uVar16 = *(uint *)(lVar8 + lVar13);
      uVar10 = 0;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) % local_98;
      local_res20 = uVar16;
      if (uVar16 != 0) {
        while (0 < (int)local_98) {
          iVar14 = *(int *)(param_1 + 0x20);
          if (iVar14 < 0) {
            return;
          }
          if (*(int *)(param_1 + 0x18) <= iVar14) {
            return;
          }
          uVar11 = uVar10 + 1;
          lVar13 = (longlong)iVar14 * 0x38 + *(longlong *)(param_1 + 0x10);
          local_res18 = uVar11;
          cVar5 = FUN_140770810(lVar13,fVar2);
          if (cVar5 == '\0') {
            iVar14 = *(int *)(param_1 + 0x20);
            lVar13 = *(longlong *)(param_1 + 0x10);
            lVar8 = (longlong)iVar14 * 0x38;
            if (*(longlong *)(lVar8 + 0x18 + lVar13) != 0) {
              FMemory::Free();
            }
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>(lVar13 + 8 + lVar8);
            iVar9 = *(int *)(param_1 + 0x18);
            iVar7 = (iVar9 - iVar14) + -1;
            if (iVar7 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x10) + lVar8),
                         (void *)((longlong)(iVar14 + 1) * 0x38 + *(longlong *)(param_1 + 0x10)),
                         (longlong)iVar7 * 0x38);
              iVar9 = *(int *)(param_1 + 0x18);
            }
            *(int *)(param_1 + 0x18) = iVar9 + -1;
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeShrink(param_1 + 0x10);
            local_98 = local_98 - 1;
          }
          else {
            bVar3 = *(byte *)(lVar13 + 0x30);
            uVar10 = uVar11;
            if (bVar3 == 0) {
              cVar5 = FUN_140758680(lVar13,param_1 + 0x10,param_1 + 0x28,fVar2);
              if (cVar5 != '\0') {
                bVar3 = *(byte *)(lVar13 + 0x30);
                cVar5 = '\x01';
                *(undefined1 *)(lVar13 + 0x30) = 1;
                if (1 < bVar3) {
                  FUN_140754f20(lVar13);
                  cVar5 = *(char *)(lVar13 + 0x30);
                }
                *(undefined4 *)(lVar13 + 0x34) = 0xbf800000;
                *(bool *)(lVar13 + 0x28) = cVar5 == '\x04';
              }
            }
            else if (bVar3 < 3) {
              cVar5 = FWeakObjectPtr::IsValid(lVar13);
              if (((cVar5 != '\0') &&
                  (lVar8 = FWeakObjectPtr::Get(lVar13), 0 < *(int *)(lVar8 + 0xb8))) &&
                 (0 < *(int *)(*(longlong *)(lVar13 + 8) + 0x10))) {
                puVar4 = *(undefined4 **)(*(longlong *)(lVar13 + 8) + 8);
                local_90 = *puVar4;
                uStack_8c = puVar4[1];
                cVar5 = FWeakObjectPtr::IsValid(&local_90);
                if (cVar5 != '\0') {
                  local_78[0] = CONCAT44(uStack_8c,local_90);
                  cVar5 = FUN_140760f90(local_78);
                  if (cVar5 != '\0') {
                    local_94 = 0;
                    local_res10[0] = '\0';
                    cVar5 = FUN_140758fd0(lVar13,param_1 + 0x10,param_1 + 0x28,&local_94,local_res10
                                          ,fVar2);
                    if (cVar5 == '\0') {
                      if (local_res10[0] == '\0') {
                        if (*(char *)(lVar13 + 0x28) != '\0') goto LAB_14076ec9e;
                        goto LAB_14076ebde;
                      }
                    }
                    else if (local_res10[0] == '\0') goto LAB_14076ed1c;
                    FUN_14076b270(lVar13,(local_94 == 0) + '\x02',fVar2);
                    if (((*(char *)(lVar13 + 0x30) != '\x02') || (*(float *)(lVar13 + 0x34) < 0.0))
                       || (1.0 <= fVar2 - *(float *)(lVar13 + 0x34))) {
                      lVar8 = *(longlong *)(lVar13 + 8);
                      lVar13 = lVar8 + (longlong)*(int *)(lVar13 + 0x10) * 0x18;
                      for (; uVar10 = uVar11, lVar8 != lVar13; lVar8 = lVar8 + 0x18) {
                        puVar12 = *(undefined4 **)(lVar8 + 8);
                        puVar4 = puVar12 + (longlong)*(int *)(lVar8 + 0x10) * 2;
                        for (; puVar12 != puVar4; puVar12 = puVar12 + 2) {
                          local_88 = *puVar12;
                          local_84 = puVar12[1];
                          cVar5 = FWeakObjectPtr::IsValid(&local_88);
                          if (cVar5 != '\0') {
                            lVar15 = FWeakObjectPtr::Get(&local_88);
                            if (*(longlong *)(lVar15 + 0x608) != 0) {
                              pbVar1 = (byte *)(*(longlong *)(lVar15 + 0x608) + 0x218);
                              *pbVar1 = *pbVar1 | 1;
                            }
                          }
                        }
                        uVar11 = local_res18;
                      }
                    }
                    goto LAB_14076ed1c;
                  }
                }
              }
LAB_14076ebde:
              FUN_1407676f0(lVar13);
            }
            else if (bVar3 == 3) {
LAB_14076ec9e:
              if (*(char *)(lVar13 + 0x28) != '\0') {
                lVar15 = *(longlong *)(lVar13 + 8);
                iVar14 = 0;
                lVar8 = lVar15 + (longlong)*(int *)(lVar13 + 0x10) * 0x18;
                uVar16 = local_res20;
                if (lVar15 != lVar8) {
                  do {
                    puVar12 = *(undefined4 **)(lVar15 + 8);
                    puVar4 = puVar12 + (longlong)*(int *)(lVar15 + 0x10) * 2;
                    for (; puVar12 != puVar4; puVar12 = puVar12 + 2) {
                      local_7c = puVar12[1];
                      local_80 = *puVar12;
                      cVar5 = FUN_140760f90(&local_80);
                      if (cVar5 != '\0') {
                        iVar14 = iVar14 + 1;
                      }
                    }
                    lVar15 = lVar15 + 0x18;
                  } while (lVar15 != lVar8);
                  uVar16 = local_res20;
                  uVar10 = local_res18;
                  if (iVar14 == 1) {
                    FUN_14076cd80(lVar13);
                    uVar16 = local_res20;
                    uVar10 = local_res18;
                  }
                }
              }
            }
            else if ((bVar3 == 5) && (cVar5 = FUN_1407602c0(lVar13 + 8), cVar5 != '\0'))
            goto LAB_14076ebde;
LAB_14076ed1c:
            *(uint *)(param_1 + 0x20) = (*(int *)(param_1 + 0x20) + 1U) % local_98;
          }
          if (uVar16 <= uVar10) {
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14076eea0 FUN_14076eea0 body=603 status=ok
// SIG undefined FUN_14076eea0(void)

void FUN_14076eea0(float *param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  byte bVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float fVar16;
  
  *param_1 = param_2 + *param_1;
  pfVar6 = *(float **)(param_1 + 0x9c2);
  if (*(float **)(param_1 + 0x9c2) == (float *)0x0) {
    pfVar6 = param_1 + 2;
  }
  pfVar8 = pfVar6 + (longlong)(int)param_1[0x9c4] * 0x9c;
  if (pfVar6 != pfVar8) {
    pfVar15 = pfVar6 + 0x98;
    do {
      fVar3 = pfVar15[2];
      lVar9 = (longlong)(int)fVar3;
      fVar16 = *param_1;
      if (fVar3 != 0.0) {
        pfVar1 = pfVar15 + -0x90;
        fVar14 = 0.0;
        fVar12 = 0.0;
        lVar10 = 0;
        pfVar7 = *(float **)pfVar15;
        if (*(float **)pfVar15 == (float *)0x0) {
          pfVar7 = pfVar1;
        }
        if ((pfVar7[2] <= fVar16 && fVar16 != pfVar7[2]) ||
           (pfVar7[3] <= fVar16 && fVar16 != pfVar7[3])) {
          bVar11 = 0;
        }
        else {
          bVar11 = 1;
        }
        do {
          lVar10 = lVar10 + 1;
          fVar13 = (float)((int)fVar12 + 1);
          if (lVar10 < lVar9) {
            pfVar7 = *(float **)pfVar15;
            if (*(float **)pfVar15 == (float *)0x0) {
              pfVar7 = pfVar1;
            }
            lVar4 = lVar10 * 0x24;
            do {
              pfVar2 = (float *)(lVar4 + 8 + (longlong)pfVar7);
              if ((*pfVar2 <= fVar16 && fVar16 != *pfVar2) ||
                 (pfVar2 = (float *)(lVar4 + 0xc + (longlong)pfVar7),
                 *pfVar2 <= fVar16 && fVar16 != *pfVar2)) {
                bVar5 = 0;
              }
              else {
                bVar5 = 1;
              }
              if (bVar11 != bVar5) break;
              fVar13 = (float)((int)fVar13 + 1);
              lVar10 = lVar10 + 1;
              lVar4 = lVar4 + 0x24;
            } while (lVar10 < lVar9);
          }
          if (bVar11 != 0) {
            if (fVar14 != fVar12) {
              pfVar7 = *(float **)pfVar15;
              if (*(float **)pfVar15 == (float *)0x0) {
                pfVar7 = pfVar1;
              }
              _guard_xfg_dispatch_icall_nop
                        (pfVar7 + (longlong)(int)fVar14 * 9,pfVar7 + (longlong)(int)fVar12 * 9,
                         (longlong)((int)fVar13 - (int)fVar12) * 0x24);
            }
            fVar14 = (float)((int)fVar14 + ((int)fVar13 - (int)fVar12));
          }
          bVar11 = bVar11 ^ 1;
          fVar12 = fVar13;
        } while (lVar10 < lVar9);
        pfVar15[2] = fVar14;
        if (0 < (int)fVar3 - (int)fVar14) {
          pfVar15[-0x96] = 0.0;
          pfVar15[-0x95] = 0.0;
          pfVar7 = *(float **)pfVar15;
          if (*(float **)pfVar15 == (float *)0x0) {
            pfVar7 = pfVar1;
          }
          pfVar1 = pfVar7 + (longlong)(int)pfVar15[2] * 9;
          if (pfVar7 != pfVar1) {
            fVar16 = 0.0;
            do {
              fVar16 = fVar16 + *pfVar7;
              pfVar15[-0x95] = fVar16;
              if (*(char *)(pfVar7 + 4) == '\0') {
                pfVar15[-0x96] = *pfVar7 + pfVar15[-0x96];
              }
              pfVar7 = pfVar7 + 9;
            } while (pfVar7 != pfVar1);
          }
        }
      }
      pfVar6 = pfVar6 + 0x9c;
      pfVar15 = pfVar15 + 0x9c;
    } while (pfVar6 != pfVar8);
  }
  return;
}



// FUNCTION 14076f100 FUN_14076f100 body=1468 status=ok
// SIG undefined FUN_14076f100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14076f100(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  float fVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  undefined4 *puVar16;
  uint *puVar17;
  float *pfVar18;
  undefined1 *puVar19;
  int iVar20;
  bool bVar21;
  float local_res8 [2];
  float local_res10 [2];
  uint local_res18;
  undefined1 local_res20 [8];
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  float local_188;
  undefined8 local_178;
  int iStack_170;
  uint uStack_16c;
  undefined8 local_168;
  uint uStack_160;
  int iStack_15c;
  undefined1 local_158 [16];
  longlong *local_148;
  undefined2 local_140;
  undefined8 local_138;
  undefined4 *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined1 local_11c [4];
  longlong *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  uint *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined1 local_c8 [136];
  
  iVar4 = *(int *)(param_1 + 0xf0);
  iVar20 = 0;
  if (iVar4 != 0) {
    cVar7 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0xe8) + 4);
    bVar21 = cVar7 != '\0';
    iVar15 = iVar20;
    do {
      iVar6 = iVar15;
      do {
        iVar6 = iVar6 + 1;
        if (iVar4 <= iVar6) break;
        cVar7 = FWeakObjectPtr::IsValid
                          (*(longlong *)(param_1 + 0xe8) + ((longlong)iVar6 * 3 + 1) * 4);
      } while (bVar21 == (cVar7 != '\0'));
      if (bVar21 != false) {
        if (iVar20 != iVar15) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar20 * 0xc),
                     (void *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar15 * 0xc),
                     (longlong)(iVar6 - iVar15) * 0xc);
        }
        iVar20 = iVar20 + (iVar6 - iVar15);
      }
      bVar21 = (bool)(bVar21 ^ 1);
      iVar15 = iVar6;
    } while (iVar6 < iVar4);
    *(int *)(param_1 + 0xf0) = iVar20;
  }
  bVar1 = *(byte *)(param_1 + 0x48);
  local_148 = (longlong *)UAISense::GetListeners(param_1);
  iVar4 = (int)local_148[5];
  local_178._0_4_ = 0;
  local_178._4_4_ = 1;
  puStack_e8 = (uint *)(local_148 + 2);
  local_168._4_4_ = 0;
  uStack_160 = 0;
  if (iVar4 != 0) {
    puVar17 = (uint *)local_148[4];
    if ((uint *)local_148[4] == (uint *)0x0) {
      puVar17 = puStack_e8;
    }
    uVar5 = *puVar17;
    while (uVar5 == 0) {
      lVar13 = (longlong)(int)local_178;
      uStack_160 = uStack_160 + 0x20;
      iVar20 = (int)local_178 + 1;
      bVar21 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_178;
      local_178._0_4_ = iVar20;
      if (bVar21) goto LAB_14076f2b5;
      uVar5 = puVar17[lVar13 + 1];
    }
    local_178._4_4_ = uVar5 - 1 & uVar5 ^ uVar5;
    iVar20 = 0x1f;
    if (local_178._4_4_ != 0) {
      for (; local_178._4_4_ >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (local_178._4_4_ == 0) {
      iVar20 = 0x20;
    }
    else {
      iVar20 = 0x1f - iVar20;
    }
    local_168._4_4_ = (uStack_160 - iVar20) + 0x1f;
    if (iVar4 < local_168._4_4_) {
LAB_14076f2b5:
      local_168._4_4_ = iVar4;
    }
  }
  auStack_e0._4_4_ = local_168._4_4_;
  auStack_e0._0_4_ = 0xffffffff;
  auStack_e0._8_4_ = uStack_160;
  auStack_e0._12_4_ = iStack_15c;
  iStack_f0 = (int)local_178;
  uStack_ec = local_178._4_4_;
  local_140 = 0;
  local_d0._0_4_ = SUB84(local_148,0);
  local_d0._4_4_ = (undefined4)((ulonglong)local_148 >> 0x20);
  uStack_160 = 0xffffffff;
  iStack_15c = local_168._4_4_;
  iStack_170 = (int)local_178;
  uStack_16c = local_178._4_4_;
  local_158._8_4_ = (undefined4)local_d0;
  local_158._0_8_ = auStack_e0._8_8_;
  local_158._12_4_ = local_d0._4_4_;
  if (local_168._4_4_ < (int)local_148[5]) {
    local_res18 = (uint)bVar1;
    local_178 = local_148;
    local_f8 = local_148;
    local_d0 = local_148;
    local_168 = puStack_e8;
    do {
      puVar16 = (undefined4 *)(*local_178 + 4 + (longlong)iStack_15c * 0x3c);
      local_130 = puVar16;
      if (((uint)puVar16[2] >> (local_res18 & 0x1f) & 1) != 0) {
        puVar19 = *(undefined1 **)(param_1 + 0xe8);
        local_110 = puVar19 + (longlong)*(int *)(param_1 + 0xf0) * 0xc;
        if (puVar19 != local_110) {
          do {
            plVar10 = (longlong *)FWeakObjectPtr::Get(puVar19 + 4);
            if (plVar10 != (longlong *)0x0) {
              local_198 = *puVar16;
              local_194 = puVar16[1];
              cVar7 = FWeakObjectPtr::IsValid(&local_198);
              if (cVar7 != '\0') {
                uVar11 = FWeakObjectPtr::Get(&local_198);
                local_118 = (longlong *)FUN_142c1f500(uVar11);
                if ((local_118 != (longlong *)0x0) && (local_118 != plVar10)) {
                  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
                    lVar13 = *(longlong *)(param_1 + 0xd8);
                    if (*(longlong *)(param_1 + 0xd8) == 0) {
                      lVar13 = param_1 + 0xd0;
                    }
                    fVar9 = *(float *)(lVar13 + ((longlong)*(int *)(param_1 + 0xe0) - 1U &
                                                (longlong)(int)puVar16[0xb]) * 4);
                    if (fVar9 != -NAN) {
                      do {
                        pfVar14 = (float *)(*(longlong *)(param_1 + 0x98) +
                                           (longlong)(int)fVar9 * 0x14);
                        if (*(int *)(*(longlong *)(param_1 + 0x98) + (longlong)(int)fVar9 * 0x14) ==
                            puVar16[0xb]) {
                          if (fVar9 != -NAN) goto LAB_14076f463;
                          break;
                        }
                        fVar9 = pfVar14[3];
                      } while (fVar9 != -NAN);
                    }
                  }
                  pfVar14 = (float *)0x0;
LAB_14076f463:
                  uVar2 = *puVar19;
                  pfVar18 = pfVar14 + 1;
                  if (pfVar14 == (float *)0x0) {
                    pfVar18 = (float *)0x0;
                  }
                  bVar1 = *(byte *)((longlong)pfVar18 + 5);
                  uVar3 = *(undefined1 *)(pfVar18 + 1);
                  if (*(int *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x38) < DAT_1468591e4) {
                    _Init_thread_header(&DAT_1468591e4);
                    if (DAT_1468591e4 == -1) {
                      DAT_1468591e0 = 7;
                      _Init_thread_footer(&DAT_1468591e4);
                    }
                  }
                  if (bVar1 != DAT_1468591e0) {
                    if (PTR_FUN_146690ee0 == (undefined *)0x0) {
                      bVar8 = 1;
                    }
                    else {
                      bVar8 = (*(code *)PTR_FUN_146690ee0)(uVar3,uVar2);
                    }
                    puVar16 = local_130;
                    if ((bVar1 & (byte)(1 << (bVar8 & 0x1f))) == 0) goto LAB_14076f60e;
                  }
                  lVar13 = plVar10[0x2d];
                  if (lVar13 == 0) {
                    local_100 = DAT_1468b5d98;
                    puVar12 = &local_108;
                    local_108 = _DAT_1468b5d90;
                  }
                  else {
                    puVar12 = (undefined8 *)&local_128;
                    local_128 = *(undefined4 *)(lVar13 + 0x220);
                    local_120 = *(undefined4 *)(lVar13 + 0x228);
                    uStack_124 = *(undefined4 *)(lVar13 + 0x224);
                  }
                  local_190 = *puVar12;
                  local_188 = *(float *)(puVar12 + 1);
                  (**(code **)(*plVar10 + 0x578))(plVar10,local_res8,local_res20);
                  (**(code **)(*local_118 + 0x578))(local_118,local_res10,local_11c);
                  puVar16 = local_130;
                  if (SQRT((local_190._4_4_ - (float)local_130[4]) *
                           (local_190._4_4_ - (float)local_130[4]) +
                           ((float)local_190 - (float)local_130[3]) *
                           ((float)local_190 - (float)local_130[3]) +
                           (local_188 - (float)local_130[5]) * (local_188 - (float)local_130[5])) <
                      local_res8[0] + *pfVar18 + local_res10[0]) {
                    local_138 = 0;
                    FUN_142c1a410(local_c8,param_1,0x3f800000,&local_190,local_130 + 3,0,0);
                    FUN_142c24730(puVar16,plVar10,local_c8);
                  }
                }
              }
            }
LAB_14076f60e:
            puVar19 = puVar19 + 0xc;
          } while (puVar19 != local_110);
        }
      }
      uStack_160 = uStack_160 & ~uStack_16c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_170);
    } while (iStack_15c < (int)local_168[6]);
    if (((char)local_140 != '\0') && (local_140._1_1_ != '\0')) {
      TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_148,(int)local_148[1] - *(int *)((longlong)local_148 + 0x34),
                          CONCAT71((uint7)(uint3)(local_res18 >> 8),1));
    }
  }
  return *(undefined4 *)(param_1 + 0xf8);
}



// FUNCTION 14076f6c0 FUN_14076f6c0 body=2015 status=ok
// SIG undefined FUN_14076f6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14076f6c0(longlong param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 **ppuVar20;
  int *piVar21;
  undefined1 *puVar22;
  longlong lVar23;
  int iVar24;
  undefined8 *puVar25;
  int iVar26;
  uint uVar27;
  int *piVar28;
  bool bVar29;
  ulonglong local_res20;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined1 *local_128;
  undefined4 local_120;
  undefined8 *local_118;
  undefined1 *local_110;
  undefined4 local_108;
  int *local_100;
  undefined4 local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined1 local_c8 [136];
  
  iVar4 = *(int *)(param_1 + 0xa0);
  if (iVar4 != 0) {
    iVar26 = 0;
    cVar6 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0x98) + 4);
    bVar29 = cVar6 != '\0';
    iVar8 = 0;
    do {
      iVar5 = iVar8;
      do {
        iVar5 = iVar5 + 1;
        if (iVar4 <= iVar5) break;
        cVar6 = FWeakObjectPtr::IsValid
                          (*(longlong *)(param_1 + 0x98) + ((longlong)iVar5 * 3 + 1) * 4);
      } while (bVar29 == (cVar6 != '\0'));
      if (bVar29 != false) {
        if (iVar26 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar26 * 0xc),
                     (void *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar8 * 0xc),
                     (longlong)(iVar5 - iVar8) * 0xc);
        }
        iVar26 = iVar26 + (iVar5 - iVar8);
      }
      bVar29 = (bool)(bVar29 ^ 1);
      iVar8 = iVar5;
    } while (iVar5 < iVar4);
    *(int *)(param_1 + 0xa0) = iVar26;
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if (iVar4 != 0) {
    iVar26 = 0;
    cVar6 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0xa8) + 0x10);
    bVar29 = cVar6 != '\0';
    iVar8 = 0;
    do {
      iVar5 = iVar8;
      do {
        iVar5 = iVar5 + 1;
        if (iVar4 <= iVar5) break;
        cVar6 = FWeakObjectPtr::IsValid
                          (*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 0x18 + 0x10);
      } while (bVar29 == (cVar6 != '\0'));
      iVar24 = iVar5 - iVar8;
      if (bVar29 == false) {
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar8 * 0x18);
        for (; iVar24 != 0; iVar24 = iVar24 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 3;
        }
      }
      else {
        if (iVar26 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar26 * 0x18),
                     (void *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar8 * 0x18),
                     (longlong)iVar24 * 0x18);
        }
        iVar26 = iVar26 + iVar24;
      }
      bVar29 = (bool)(bVar29 ^ 1);
      iVar8 = iVar5;
    } while (iVar5 < iVar4);
    *(int *)(param_1 + 0xb0) = iVar26;
  }
  plVar9 = (longlong *)UAISense::GetListeners(param_1);
  puVar25 = *(undefined8 **)(param_1 + 0xa8);
  local_118 = puVar25 + (longlong)*(int *)(param_1 + 0xb0) * 3;
  if (puVar25 != local_118) {
    do {
      puVar10 = (undefined1 *)FWeakObjectPtr::Get(puVar25 + 2);
      puVar22 = *(undefined1 **)(param_1 + 0x98);
      local_e0 = puVar22 + (longlong)*(int *)(param_1 + 0xa0) * 0xc;
      local_f0 = puVar10;
      if (puVar22 != local_e0) {
        do {
          local_d0 = FWeakObjectPtr::Get(puVar22 + 4);
          lVar11 = *(longlong *)(local_d0 + 0x168);
          if (lVar11 == 0) {
            local_108 = DAT_1468b5d98;
            ppuVar20 = &local_110;
            local_110 = _DAT_1468b5d90;
          }
          else {
            ppuVar20 = (undefined1 **)&local_138;
            local_138 = *(undefined4 *)(lVar11 + 0x220);
            local_130 = *(undefined4 *)(lVar11 + 0x228);
            uStack_134 = *(undefined4 *)(lVar11 + 0x224);
          }
          local_128 = *ppuVar20;
          local_120 = *(undefined4 *)(ppuVar20 + 1);
          cVar6 = FUN_142df43c0(puVar10,1,&local_128);
          if (cVar6 != '\0') {
            piVar28 = (int *)*puVar25;
            local_100 = piVar28 + *(int *)(puVar25 + 1);
            if (piVar28 != local_100) {
              do {
                iVar4 = *piVar28;
                if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
                  lVar11 = *(longlong *)(param_1 + 0xf8);
                  if (*(longlong *)(param_1 + 0xf8) == 0) {
                    lVar11 = param_1 + 0xf0;
                  }
                  iVar8 = *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x100) - 1U &
                                            (longlong)iVar4) * 4);
                  if (iVar8 != -1) {
                    do {
                      piVar21 = (int *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0xb8));
                      if (*piVar21 == iVar4) {
                        if (iVar8 != -1) goto LAB_14076fa20;
                        break;
                      }
                      iVar8 = piVar21[2];
                    } while (iVar8 != -1);
                  }
                }
                piVar21 = (int *)0x0;
LAB_14076fa20:
                piVar12 = piVar21 + 1;
                if (piVar21 == (int *)0x0) {
                  piVar12 = (int *)0x0;
                }
                if (piVar12 != (int *)0x0) {
                  bVar2 = *(byte *)((longlong)piVar12 + 1);
                  iVar8 = *piVar12;
                  uVar3 = *puVar22;
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x38) < DAT_1468591e4) &&
                     (_Init_thread_header(&DAT_1468591e4), DAT_1468591e4 == -1)) {
                    DAT_1468591e0 = 7;
                    _Init_thread_footer(&DAT_1468591e4);
                  }
                  if (bVar2 != DAT_1468591e0) {
                    if (PTR_FUN_146690ee0 == (undefined *)0x0) {
                      bVar7 = 1;
                    }
                    else {
                      bVar7 = (*(code *)PTR_FUN_146690ee0)((char)iVar8,uVar3);
                    }
                    if ((bVar2 & (byte)(1 << (bVar7 & 0x1f))) == 0) goto LAB_14076fb60;
                  }
                  if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
                    plVar13 = (longlong *)plVar9[8];
                    if ((longlong *)plVar9[8] == (longlong *)0x0) {
                      plVar13 = plVar9 + 7;
                    }
                    iVar8 = *(int *)((longlong)plVar13 +
                                    ((longlong)(int)plVar9[9] - 1U & (longlong)iVar4) * 4);
                    if (iVar8 != -1) {
                      do {
                        piVar21 = (int *)((longlong)iVar8 * 0x3c + *plVar9);
                        if (*piVar21 == iVar4) {
                          if (iVar8 != -1) goto LAB_14076fb00;
                          break;
                        }
                        iVar8 = piVar21[0xd];
                      } while (iVar8 != -1);
                    }
                  }
                  piVar21 = (int *)0x0;
LAB_14076fb00:
                  piVar12 = piVar21 + 1;
                  if (piVar21 == (int *)0x0) {
                    piVar12 = (int *)0x0;
                  }
                  if (piVar12 != (int *)0x0) {
                    FUN_142c1a410(local_c8,param_1,0x3f800000,&local_128,piVar12 + 3,0,0);
                    FUN_142c24730(piVar12,local_d0,local_c8);
                  }
                }
LAB_14076fb60:
                piVar28 = piVar28 + 1;
                puVar10 = local_f0;
              } while (piVar28 != local_100);
            }
          }
          puVar22 = puVar22 + 0xc;
        } while (puVar22 != local_e0);
      }
      puVar25 = puVar25 + 3;
    } while (puVar25 != local_118);
  }
  plVar9 = *(longlong **)(param_1 + 0x108);
  local_res20 = 0;
  puVar25 = (undefined8 *)((longlong)*(int *)(param_1 + 0x110) & 0x1fffffffffffffff);
  if (plVar9 + *(int *)(param_1 + 0x110) < plVar9) {
    puVar25 = (undefined8 *)0;
  }
  local_118 = puVar25;
  if (puVar25 == (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x118);
  }
  else {
    do {
      lVar11 = *plVar9;
      if (lVar11 != 0) {
        uVar27 = 0;
        do {
          lVar14 = FUN_142dceb10(lVar11,uVar27 & 0xff);
          if (lVar14 != 0) {
            plVar13 = *(longlong **)(lVar11 + 0x118);
            if (plVar13 == (longlong *)0x0) {
              lVar17 = 0;
              plVar15 = (longlong *)0x0;
LAB_14076fc73:
              lVar18 = 0;
            }
            else {
              plVar15 = (longlong *)(**(code **)(*plVar13 + 0x688))(plVar13);
              uVar16 = UHomeWidget::GetPrivateStaticClass();
              lVar17 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar16);
              if (plVar15 == (longlong *)0x0) goto LAB_14076fc73;
              uVar16 = FUN_142e79d90();
              lVar18 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar16);
            }
            if ((((lVar17 != 0) && (lVar18 != 0)) && (*(char *)(lVar18 + 0x269) != '\0')) &&
               (cVar6 = FUN_1407c3030(lVar18 + 0x3a0), cVar6 == '\0')) {
              lVar23 = *(longlong *)(param_1 + 0x98);
              lVar18 = lVar23 + (longlong)*(int *)(param_1 + 0xa0) * 0xc;
              for (; lVar23 != lVar18; lVar23 = lVar23 + 0xc) {
                lVar19 = FWeakObjectPtr::Get(lVar23 + 4);
                if (lVar19 == lVar14) goto LAB_14076fceb;
              }
              lVar23 = 0;
LAB_14076fceb:
              if (lVar23 != 0) {
                lVar18 = plVar15[0x2d];
                if (lVar18 == 0) {
                  local_110 = _DAT_1468b5d90;
                  ppuVar20 = &local_110;
                  local_108 = DAT_1468b5d98;
                }
                else {
                  ppuVar20 = &local_128;
                  local_120 = *(undefined4 *)(lVar18 + 0x228);
                  local_128 = *(undefined1 **)(lVar18 + 0x220);
                }
                local_e8 = *(undefined4 *)(ppuVar20 + 1);
                lVar18 = *(longlong *)(lVar14 + 0x168);
                local_f0 = *ppuVar20;
                if (lVar18 == 0) {
                  local_e0 = _DAT_1468b5d90;
                  ppuVar20 = &local_e0;
                  local_d8 = DAT_1468b5d98;
                }
                else {
                  ppuVar20 = (undefined1 **)&local_138;
                  local_138 = *(undefined4 *)(lVar18 + 0x220);
                  local_130 = *(undefined4 *)(lVar18 + 0x228);
                  uStack_134 = *(undefined4 *)(lVar18 + 0x224);
                }
                local_100 = (int *)*ppuVar20;
                local_f8 = *(undefined4 *)(ppuVar20 + 1);
                FUN_142c1a410(local_c8,param_1,0x3f800000,&local_100,&local_f0,0,0);
                FUN_142c24770(lVar17,lVar14,local_c8);
              }
            }
          }
          uVar27 = uVar27 + 1;
          puVar25 = local_118;
        } while ((int)uVar27 < 2);
      }
      plVar9 = plVar9 + 1;
      local_res20 = local_res20 + 1;
    } while ((undefined8 *)local_res20 != puVar25);
    uVar1 = *(undefined4 *)(param_1 + 0x118);
  }
  return uVar1;
}



// FUNCTION 14076fea0 FUN_14076fea0 body=151 status=ok
// SIG undefined FUN_14076fea0(void)

void FUN_14076fea0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_68 [16];
  char local_58 [80];
  
  if (param_1[0xbc] != 0) {
    FUN_142ced5e0(param_1[0xbc],local_58,1);
    if (1 < (byte)(local_58[0] - 7U)) {
      lVar1 = *param_1;
      uVar2 = FUN_142ced280(param_1[0xbc],local_68,1);
      (**(code **)(lVar1 + 0x728))(param_1,uVar2,1);
      return;
    }
  }
  FUN_142bcdb30(param_1,param_2,0);
  return;
}



// FUNCTION 14076ff40 FUN_14076ff40 body=67 status=ok
// SIG undefined FUN_14076ff40(void)

void FUN_14076ff40(longlong param_1)

{
  if ((*(int *)(param_1 + 0x28) < 2) && (*(int *)(param_1 + 0xa0) == 0)) {
    FUN_140751e50(param_1 + 0x98,1);
    *(undefined4 *)(param_1 + 0x28) = 2;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 2;
  return;
}



// FUNCTION 14076ff90 FUN_14076ff90 body=49 status=ok
// SIG undefined FUN_14076ff90(void)

undefined1 * FUN_14076ff90(undefined8 param_1,undefined1 *param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  UAISense::UpdateSenseID();
  local_18[0] = *param_2;
  local_10 = *(undefined8 *)(param_2 + 8);
  FUN_142dd45d0(local_18);
  return param_2;
}



// FUNCTION 14076ffd0 FUN_14076ffd0 body=49 status=ok
// SIG undefined FUN_14076ffd0(void)

undefined1 * FUN_14076ffd0(undefined8 param_1,undefined1 *param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  UAISense::UpdateSenseID();
  local_18[0] = *param_2;
  local_10 = *(undefined8 *)(param_2 + 8);
  FUN_142dd45f0(local_18);
  return param_2;
}



// FUNCTION 140770010 FUN_140770010 body=109 status=ok
// SIG undefined FUN_140770010(void)

void FUN_140770010(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
  *(undefined8 *)(param_1 + 8) = 0;
  pfVar2 = *(float **)(param_1 + 0x260);
  if (*(float **)(param_1 + 0x260) == (float *)0x0) {
    pfVar2 = (float *)(param_1 + 0x20);
  }
  pfVar1 = pfVar2 + (longlong)*(int *)(param_1 + 0x268) * 9;
  if (pfVar2 != pfVar1) {
    fVar3 = 0.0;
    do {
      fVar3 = fVar3 + *pfVar2;
      *(float *)(param_1 + 0xc) = fVar3;
      if (*(char *)(pfVar2 + 4) == '\0') {
        *(float *)(param_1 + 8) = *pfVar2 + *(float *)(param_1 + 8);
      }
      pfVar2 = pfVar2 + 9;
    } while (pfVar2 != pfVar1);
  }
  return;
}



// FUNCTION 140770080 FUN_140770080 body=773 status=ok
// SIG undefined FUN_140770080(void)

ulonglong FUN_140770080(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined4 local_28;
  
  lVar10 = *(longlong *)(param_2 + 8);
  if (lVar10 == 0) {
LAB_140770366:
    return in_RAX & 0xffffffffffffff00;
  }
  lVar4 = FUN_142c2de20();
  iVar2 = *(int *)(lVar4 + 0x90);
  uVar5 = (longlong)iVar2;
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < iVar2) ||
     (uVar5 = *(ulonglong *)(*(longlong *)(lVar10 + 0x10) + 0x88),
     *(longlong *)(uVar5 + (longlong)iVar2 * 8) != lVar4 + 0x88)) {
    in_RAX = uVar5 & 0xffffffffffffff00;
  }
  else {
    in_RAX = CONCAT71((int7)(uVar5 >> 8),1);
  }
  if (((char)in_RAX == '\0') ||
     (in_RAX = (**(code **)(*param_1 + 0x10))(param_1,lVar10), (char)in_RAX == '\0'))
  goto LAB_140770366;
  in_RAX = (**(code **)(*param_1 + 0x10))(param_1,lVar10);
  if ((char)in_RAX == '\0') goto LAB_140770366;
  local_48 = 0;
  local_30 = 0;
  local_28 = 0;
  local_40 = lVar10;
  if ((((longlong *)(param_2 + 0x18) != &local_30) && (*(int *)(param_2 + 0x20) != 0)) &&
     (plVar9 = *(longlong **)(param_2 + 0x18), plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_30);
  }
  iVar2 = (int)param_1[0x30];
  *(int *)(param_1 + 0x30) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x184) < iVar2 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x2f,iVar2);
  }
  puVar1 = (undefined8 *)(param_1[0x2f] + (longlong)iVar2 * 0x28);
  *puVar1 = local_48;
  puVar1[1] = local_40;
  *(undefined1 *)(puVar1 + 2) = local_38;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar1 + 3,&local_30);
  in_RAX = TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
  if (iVar2 == -1) goto LAB_140770366;
  lVar4 = param_1[-0xdb];
  uVar6 = GetTransientPackage();
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = UBTTask_MoveTo::StaticClass();
  lVar8 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
  *(longlong *)(lVar8 + 0x30) = lVar4;
  UAITask::InitAITask(lVar8,lVar10,lVar10 + 0x510);
  cVar3 = FUN_14077c1a0(lVar8,param_1 + -0xde);
  if ((cVar3 == '\0') || (FUN_142b7b2b0(lVar8), *(char *)(lVar8 + 0x39) == '\x04')) {
    in_RAX = FUN_140766ca0(param_1 + -0xde,lVar10,0);
    goto LAB_140770366;
  }
  uStack_50 = 0;
  local_58 = FUN_140763900;
  plVar11 = (longlong *)(lVar8 + 0x70);
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_144089a20;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1 + -0xde);
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_58._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_50;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_4c;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar10;
    *plVar9 = (longlong)&PTR_FUN_144089a68;
  }
  if (&local_58 != plVar11) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar8 + 0x78) != 0) &&
         (plVar9 = (longlong *)*plVar11, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar11 != 0) {
          lVar10 = FMemory::Realloc(*plVar11,0,0);
          *plVar11 = lVar10;
        }
        *(undefined4 *)(lVar8 + 0x78) = 0;
        return CONCAT71((int7)((ulonglong)param_1[1] >> 8),
                        (*(char *)(param_1[1] + 0x30) == '\0') + '\x01');
      }
      goto LAB_140770307;
    }
    (**(code **)(*plVar9 + 0x30))(plVar9,plVar11);
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    lVar10 = FMemory::Realloc(plVar9,0,0);
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
LAB_140770307:
  return CONCAT71((int7)((ulonglong)param_1[1] >> 8),(*(char *)(param_1[1] + 0x30) == '\0') + '\x01'
                 );
}



// FUNCTION 140770390 FUN_140770390 body=603 status=ok
// SIG undefined FUN_140770390(void)

undefined8 FUN_140770390(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar3 = *(longlong *)(param_2 + 8);
  if (lVar3 == 0) {
    return 0;
  }
  lVar6 = FUN_142c2de20();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return 0;
  }
  cVar5 = (**(code **)(*param_1 + 0x10))(param_1,lVar3);
  if (cVar5 == '\0') {
    return 0;
  }
  plVar2 = param_1 + -0xde;
  cVar5 = FUN_1407536a0(plVar2,lVar3);
  if (cVar5 == '\0') {
    return 0;
  }
  param_1[0x38] = lVar3;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a,param_2 + 0x18);
  lVar6 = param_1[-0xdb];
  uVar7 = GetTransientPackage();
  FUN_1417846f0(uVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar8 = UBTTask_MoveTo::StaticClass();
  lVar9 = FUN_1417985e0(uVar8,uVar7,0,0,0,0,0,0,0);
  *(longlong *)(lVar9 + 0x30) = lVar6;
  UAITask::InitAITask(lVar9,lVar3,lVar3 + 0x510);
  cVar5 = FUN_14077c200(lVar9,plVar2);
  if (cVar5 == '\0') goto LAB_1407705c7;
  uStack_20 = 0;
  local_28 = FUN_1407639c0;
  plVar1 = (longlong *)(lVar9 + 0x70);
  plVar10 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_144089a20;
    FWeakObjectPtr::operator=(plVar10 + 1,plVar2);
    *(undefined4 *)(plVar10 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar10 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar10 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_1c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar10[5] = lVar6;
    *plVar10 = (longlong)&PTR_FUN_144089a68;
  }
  if (&local_28 == plVar1) {
LAB_14077053b:
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      lVar6 = FMemory::Realloc(plVar10,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
  else {
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))(plVar10,plVar1);
      goto LAB_14077053b;
    }
    if ((*(int *)(lVar9 + 0x78) != 0) && (plVar10 = (longlong *)*plVar1, plVar10 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      if (*plVar1 != 0) {
        lVar6 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar6;
      }
      *(undefined4 *)(lVar9 + 0x78) = 0;
    }
  }
  FUN_142b7b2b0(lVar9);
  if (*(char *)(lVar9 + 0x39) != '\x04') {
    return 2;
  }
LAB_1407705c7:
  FUN_14076e180(plVar2,lVar3,0);
  return 0;
}



// FUNCTION 1407705f0 FUN_1407705f0 body=423 status=ok
// SIG undefined FUN_1407705f0(void)

void FUN_1407705f0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res8 = 0;
  if ((*(longlong *)(param_1 + 0x608) != 0) && (lVar4 = FUN_14070cf70(), lVar4 != 0)) {
    FUN_142bce650(param_1,lVar4,&local_res8);
    FUN_142bd8a10(*(undefined8 *)(param_1 + 0x608),local_res8);
    piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if ((*piVar5 < DAT_146859220) && (_Init_thread_header(&DAT_146859220), DAT_146859220 == -1)) {
      FName::FName(&DAT_146859218,L"Territory",1);
      _Init_thread_footer(&DAT_146859220);
    }
    if ((*piVar5 < DAT_146859230) && (_Init_thread_header(&DAT_146859230), DAT_146859230 == -1)) {
      FName::FName(&DAT_146859228,L"SpawnLocation",1);
      _Init_thread_footer(&DAT_146859230);
    }
    lVar4 = *(longlong *)(param_1 + 0x568);
    uVar2 = *(undefined8 *)(param_1 + 0x618);
    lVar6 = 0;
    if (lVar4 != 0) {
      uVar3 = FUN_142bbd6b0(lVar4,&DAT_146859218);
      FUN_140725870(lVar4,uVar3,uVar2);
      lVar6 = *(longlong *)(param_1 + 0x568);
    }
    if (lVar6 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x5d0);
      uVar1 = *(undefined4 *)(param_1 + 0x5d8);
      uVar3 = FUN_142bbd6b0(lVar6,&DAT_146859228);
      local_18 = uVar2;
      local_10 = uVar1;
      FUN_14074b0b0(lVar6,uVar3,&local_18);
    }
  }
  return;
}



// FUNCTION 1407707a0 FUN_1407707a0 body=34 status=ok
// SIG undefined FUN_1407707a0(void)

undefined1 FUN_1407707a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14072ea50();
  if (lVar1 != 0) {
    FUN_142b7b2b0(lVar1);
    return 1;
  }
  return 0;
}



// FUNCTION 1407707d0 FUN_1407707d0 body=32 status=ok
// SIG undefined FUN_1407707d0(void)

void FUN_1407707d0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x550) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x550) + 0x178);
                    /* WARNING: Could not recover jumptable at 0x0001407707eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,4);
    return;
  }
  return;
}



// FUNCTION 1407707f0 FUN_1407707f0 body=32 status=ok
// SIG undefined FUN_1407707f0(void)

void FUN_1407707f0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x550) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x550) + 0x178);
                    /* WARNING: Could not recover jumptable at 0x00014077080b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,4);
    return;
  }
  return;
}



// FUNCTION 140770810 FUN_140770810 body=1198 status=ok
// SIG undefined FUN_140770810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_140770810(longlong param_1)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_res20;
  longlong local_d8;
  int local_d0;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  float local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  float local_48;
  
  cVar4 = FWeakObjectPtr::IsValid();
  if (cVar4 == '\0') {
    return 0;
  }
  iVar14 = *(int *)(param_1 + 0x10);
  lVar6 = FWeakObjectPtr::Get(param_1);
  if (iVar14 == *(int *)(lVar6 + 0xb8)) {
    bVar3 = false;
    local_d0 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      local_d8 = 0;
      local_a8 = 0;
      do {
        lVar10 = local_a8;
        lVar6 = *(longlong *)(param_1 + 8);
        local_70 = lVar6;
        lVar7 = FWeakObjectPtr::Get(param_1);
        uVar13 = 0;
        lVar7 = *(longlong *)(lVar7 + 0xb0);
        if (0 < *(int *)(lVar10 + 0x10 + lVar6)) {
          lVar6 = lVar10 + lVar6;
          local_res20 = 1;
          uVar15 = uVar13;
          do {
            plVar8 = (longlong *)0x0;
            iVar14 = (int)uVar13;
            local_c0 = *(undefined4 *)(uVar15 + *(longlong *)(lVar6 + 8));
            uStack_bc = *(undefined4 *)(uVar15 + 4 + *(longlong *)(lVar6 + 8));
            if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x10)) {
              plVar8 = (longlong *)
                       FWeakObjectPtr::Get(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
            }
            local_88 = CONCAT44(uStack_bc,local_c0);
            cVar4 = FUN_140760f90(&local_88);
            if (cVar4 == '\0') {
LAB_140770b28:
              iVar12 = *(int *)(lVar6 + 0x10);
              iVar5 = (iVar12 - iVar14) + -1;
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar6 + 8) + (longlong)iVar14 * 8),
                           (void *)(*(longlong *)(lVar6 + 8) + (longlong)local_res20 * 8),
                           (longlong)iVar5 << 3);
                iVar12 = *(int *)(lVar6 + 0x10);
              }
              *(int *)(lVar6 + 0x10) = iVar12 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar6 + 8);
              iVar14 = iVar14 + -1;
              local_res20 = local_res20 + -1;
              uVar15 = uVar15 - 8;
              cVar4 = *(char *)(local_d8 + 0x128 + lVar7);
              if (cVar4 == '\0') {
                *(undefined1 *)(param_1 + 0x30) = 5;
                FUN_140754f20(param_1);
                FUN_14076aff0(param_1);
                *(bool *)(param_1 + 0x28) = *(char *)(param_1 + 0x30) == '\x04';
                *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
                *(undefined4 *)(param_1 + 0x20) = 0;
                if (*(int *)(param_1 + 0x24) == 0) {
                  return 1;
                }
                TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
                return 1;
              }
              if (cVar4 == '\x01') {
                bVar2 = *(byte *)(param_1 + 0x30);
                cVar4 = '\x01';
                *(undefined1 *)(param_1 + 0x30) = 1;
                if (1 < bVar2) {
                  FUN_140754f20(param_1);
                  cVar4 = *(char *)(param_1 + 0x30);
                }
                *(bool *)(param_1 + 0x28) = cVar4 == '\x04';
                *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
                return 1;
              }
              FUN_140754f20(param_1);
              FUN_14076aff0(param_1);
            }
            else {
              plVar9 = (longlong *)FWeakObjectPtr::Get(&local_c0);
              if ((plVar9 != (longlong *)0x0) && (plVar8 != (longlong *)0x0)) {
                if (plVar9 != plVar8) {
                  local_78 = (**(code **)(*plVar9 + 0x688))(plVar9);
                  lVar10 = (**(code **)(*plVar8 + 0x688))(plVar8);
                  local_80 = 0xffffffffffffffff;
                  fVar16 = (float)FUN_142de77e0(local_d8 + lVar7 + 0x90,0,0,&local_80);
                  lVar10 = *(longlong *)(lVar10 + 0x168);
                  if (lVar10 == 0) {
                    local_68 = _DAT_1468b5d90;
                    puVar11 = &local_68;
                    local_60 = DAT_1468b5d98;
                  }
                  else {
                    puVar11 = (undefined8 *)&local_a0;
                    local_a0 = *(undefined4 *)(lVar10 + 0x220);
                    local_98 = *(undefined4 *)(lVar10 + 0x228);
                    uStack_9c = *(undefined4 *)(lVar10 + 0x224);
                  }
                  uVar1 = *puVar11;
                  local_b0 = *(float *)(puVar11 + 1);
                  lVar10 = *(longlong *)(local_78 + 0x168);
                  if (lVar10 == 0) {
                    local_5c = _DAT_1468b5d90;
                    puVar11 = &local_5c;
                    local_54 = DAT_1468b5d98;
                  }
                  else {
                    puVar11 = (undefined8 *)&local_94;
                    local_94 = *(undefined4 *)(lVar10 + 0x220);
                    local_8c = *(undefined4 *)(lVar10 + 0x228);
                    uStack_90 = *(undefined4 *)(lVar10 + 0x224);
                  }
                  local_48 = *(float *)(puVar11 + 1);
                  local_b8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                  fVar18 = (float)((ulonglong)*puVar11 >> 0x20) - local_b8._4_4_;
                  local_b8._0_4_ = (float)uVar1;
                  fVar17 = (float)*puVar11 - (float)local_b8;
                  local_b8 = uVar1;
                  if (fVar16 < SQRT(fVar18 * fVar18 + fVar17 * fVar17 +
                                    (local_48 - local_b0) * (local_48 - local_b0)))
                  goto LAB_140770b28;
                }
                cVar4 = '\x01';
                if ((*(char *)(local_d8 + 0x118 + lVar7) != '\0') &&
                   (lVar10 = *(longlong *)(local_d8 + 0x110 + lVar7), lVar10 != 0)) {
                  cVar4 = FUN_142c48f60(lVar10,plVar9);
                }
                if (cVar4 != '\0') {
                  lVar10 = *(longlong *)(local_d8 + 0x120 + lVar7);
                  if (lVar10 != 0) {
                    cVar4 = FUN_142c48f60(lVar10,plVar9);
                  }
                  if (cVar4 != '\0') goto LAB_140770b14;
                }
                goto LAB_140770b28;
              }
LAB_140770b14:
              bVar3 = true;
            }
            local_res20 = local_res20 + 1;
            uVar13 = (ulonglong)(iVar14 + 1U);
            uVar15 = uVar15 + 8;
            lVar10 = local_a8;
          } while ((int)(iVar14 + 1U) < *(int *)(local_a8 + 0x10 + local_70));
        }
        local_d0 = local_d0 + 1;
        local_a8 = lVar10 + 0x18;
        local_d8 = local_d8 + 0x130;
      } while (local_d0 < *(int *)(param_1 + 0x10));
      if (bVar3) {
        return 1;
      }
    }
    if ((byte)(*(char *)(param_1 + 0x30) - 1U) < 4) {
      FUN_14076cd80(param_1);
    }
  }
  else {
    FUN_1407676f0(param_1);
  }
  return 1;
}



// FUNCTION 140770cc0 FUN_140770cc0 body=719 status=ok
// SIG undefined FUN_140770cc0(void)

void FUN_140770cc0(longlong *param_1,float param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined4 local_res18;
  undefined4 local_res1c;
  int local_d8;
  uint uStack_d4;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b0;
  uint uStack_ac;
  uint *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint *puStack_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  
  uVar2 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  local_d8 = 0;
  uStack_d4 = 1;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar2 != 0) {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar3 = *puVar14;
    iStack_c0 = 0;
    local_d8 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar12 = local_d8 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar12;
      if (bVar5) goto LAB_140770d9d;
      uVar3 = puVar14[lVar8 + 1];
    }
    uStack_d4 = -uVar3 & uVar3;
    iVar12 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_c4 = (iStack_c0 - iVar12) + 0x1f;
    if ((int)uVar2 < (int)uStack_c4) {
LAB_140770d9d:
      uStack_c4 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 5);
  uStack_a0 = 0xffffffff;
  uStack_9c = uStack_c4;
  local_98 = CONCAT44(uStack_bc,iStack_c0);
  uStack_88 = CONCAT44(uStack_d4,local_d8);
  uVar13 = uVar3 & 0xffffffe0;
  iStack_b0 = local_d8;
  uStack_ac = uStack_d4;
  local_a8 = puVar1;
  local_90 = param_1;
  puStack_80 = puVar1;
  uStack_70 = local_98;
  uStack_78 = uStack_a0;
  uStack_74 = uStack_9c;
  uStack_c4 = uVar3;
  if (uVar3 != uVar2) {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar9 = puVar14[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar12 = (int)uVar3 >> 5;
    while (uVar9 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
      goto LAB_140770e60;
      uVar9 = puVar14[(longlong)iVar12 + 1];
      iVar12 = iVar12 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_c4 = (uVar13 - iVar12) + 0x1f;
    if ((int)uVar2 < (int)uStack_c4) {
LAB_140770e60:
      uStack_c4 = uVar2;
    }
  }
  do {
    if ((uStack_9c == uStack_c4) && (local_a8 == puVar1)) {
      return;
    }
    iVar12 = *(int *)(*param_1 + 0x18 + (longlong)(int)uStack_9c * 0x28);
    lVar8 = *param_1 + (longlong)(int)uStack_9c * 0x28;
    iVar10 = iVar12 + -1;
    if (-1 < iVar10) {
      lVar11 = (longlong)iVar10 * 0xc;
      lVar15 = (longlong)iVar12 * 0xc;
      lVar16 = lVar11;
      do {
        lVar4 = *(longlong *)(lVar8 + 0x10);
        fVar17 = param_2 - *(float *)(lVar11 + 8 + lVar4);
        if ((fVar17 < 0.0) || (10.0 <= fVar17)) {
LAB_140770f02:
          iVar12 = *(int *)(lVar8 + 0x18);
          iVar7 = (iVar12 - iVar10) + -1;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar8 + 0x10) + lVar16),
                       (void *)(*(longlong *)(lVar8 + 0x10) + lVar15),(longlong)iVar7 * 0xc);
            iVar12 = *(int *)(lVar8 + 0x18);
          }
          *(int *)(lVar8 + 0x18) = iVar12 + -1;
          TArray<FVector,FDefaultAllocator>::ResizeShrink(lVar8 + 0x10);
        }
        else {
          local_res18 = *(undefined4 *)(lVar11 + lVar4);
          local_res1c = *(undefined4 *)(lVar11 + 4 + lVar4);
          cVar6 = FUN_140760f90(&local_res18);
          if (cVar6 == '\0') goto LAB_140770f02;
        }
        lVar15 = lVar15 + -0xc;
        lVar16 = lVar16 + -0xc;
        lVar11 = lVar11 + -0xc;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
    }
    uStack_a0 = uStack_a0 & ~uStack_ac;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b0);
  } while( true );
}



// FUNCTION 140770f90 WorldOriginLocationChanged body=83 status=ok
// SIG undefined WorldOriginLocationChanged(void)

void UAISystemBase::WorldOriginLocationChanged(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/AISystemBase.h",0x20,
             L"Pure virtual not implemented (%s)",L"UAISystemBase::WorldOriginLocationChanged");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/AISystemBase.h",0x20,
             L"Pure virtual not implemented (%s)",L"UAISystemBase::WorldOriginLocationChanged");
  return;
}



// FUNCTION 140771010 FUN_140771010 body=15 status=ok
// SIG undefined FUN_140771010(void)

void FUN_140771010(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    FMemory::operator_delete(param_1,0x20);
    return;
  }
  return;
}



// FUNCTION 140771030 FUN_140771030 body=468 status=ok
// SIG undefined FUN_140771030(void)

void FUN_140771030(ulonglong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 local_res8;
  
  uVar7 = 0;
  puVar14 = (undefined8 *)*param_1;
  uVar11 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (puVar14 + (int)param_1[1] < puVar14) {
    uVar11 = uVar7;
  }
  uVar8 = uVar7;
  if (uVar11 != 0) {
    do {
      FUN_142dd0660(*puVar14,&DAT_146859090,1);
      iVar5 = DAT_146859098;
      lVar10 = (longlong)DAT_146859098;
      if (DAT_146859098 != 0) {
        iVar9 = (int)param_2[1];
        if (*(int *)((longlong)param_2 + 0xc) < iVar9 + DAT_146859098) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
          iVar9 = (int)param_2[1];
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 + (longlong)iVar9 * 8),DAT_146859090,lVar10 << 3);
        *(int *)(param_2 + 1) = (int)param_2[1] + iVar5;
      }
      DAT_146859098 = 0;
      if ((DAT_14685909c < 0) && (DAT_14685909c != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146859090,0);
      }
      puVar14 = puVar14 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar11);
  }
  FUN_14074b5e0(*param_2,*param_2 + (longlong)(int)param_2[1] * 8,(longlong)(int)param_2[1],
                local_res8);
  plVar4 = (longlong *)*param_2;
  plVar1 = plVar4 + (int)param_2[1];
  plVar13 = plVar1;
  if ((plVar4 != plVar1) && (plVar4 + 1 != plVar1)) {
    plVar6 = plVar4 + 1;
    lVar10 = *plVar4;
    do {
      plVar3 = plVar6;
      plVar6 = plVar3 + 1;
      if (lVar10 == *plVar3) {
        uVar11 = (ulonglong)((longlong)plVar1 + (7 - (longlong)plVar6)) >> 3;
        if (plVar1 < plVar6) {
          uVar11 = uVar7;
        }
        if (uVar11 != 0) {
          do {
            if (*plVar4 != *plVar6) {
              plVar4 = plVar4 + 1;
              *plVar4 = *plVar6;
            }
            plVar6 = plVar6 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar11);
        }
        plVar13 = plVar4 + 1;
        break;
      }
      plVar4 = plVar3;
      lVar10 = *plVar3;
    } while (plVar6 != plVar1);
  }
  iVar5 = (int)param_2[1];
  uVar11 = *param_2;
  if ((plVar13 != (longlong *)(uVar11 + (longlong)iVar5 * 8)) &&
     (iVar9 = (int)((longlong)plVar1 - (longlong)plVar13 >> 3), 0 < iVar9)) {
    iVar12 = (int)((longlong)((longlong)plVar13 - uVar11) >> 3);
    iVar2 = (iVar5 - iVar12) - iVar9;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(uVar11 + (longlong)iVar12 * 8),
                 (void *)(uVar11 + (longlong)(iVar12 + iVar9) * 8),(longlong)iVar2 << 3);
      iVar5 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar5 - iVar9;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2);
  }
  return;
}



// FUNCTION 140771210 FUN_140771210 body=348 status=ok
// SIG undefined FUN_140771210(void)

undefined8 * FUN_140771210(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18;
  longlong *local_10;
  
  FUN_142f9e160(&local_28);
  lVar8 = (**(code **)(*param_2 + 0x668))(param_2);
  if (lVar8 != 0) {
    lVar9 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar8 = *(longlong *)(lVar8 + 0x628);
      goto LAB_14077127b;
    }
  }
  lVar8 = 0;
LAB_14077127b:
  if ((lVar8 != 0) && (iVar6 = FUN_142eb7a00(lVar8), iVar6 == 3)) {
    lVar9 = *(longlong *)(lVar8 + 0x278);
    plVar2 = *(longlong **)(lVar8 + 0x280);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    local_18 = lVar9;
    local_10 = plVar2;
    if ((lVar9 != 0) ||
       (cVar5 = FUN_142fa58d0(0), uVar10 = local_28, uVar7 = local_20, cVar5 != '\0')) {
      local_28 = *(undefined8 *)(lVar9 + 0x20);
      local_20 = *(undefined4 *)(lVar9 + 0x28);
      uVar10 = *(undefined8 *)(lVar9 + 0x20);
      uVar7 = *(undefined4 *)(lVar9 + 0x28);
    }
    plVar4 = local_10;
    *param_1 = uVar10;
    *(undefined4 *)(param_1 + 1) = uVar7;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar2 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    return param_1;
  }
  *param_1 = local_28;
  *(undefined4 *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 140771370 FUN_140771370 body=992 status=ok
// SIG undefined FUN_140771370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140771370(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_548 [32];
  int local_528;
  float local_520;
  float fStack_51c;
  float local_518;
  undefined8 local_510;
  float local_508;
  longlong *local_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined8 local_4e8;
  float local_4e0;
  longlong *local_4d8;
  undefined8 local_4d0;
  float local_4c8;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined8 local_4ac;
  float local_4a4;
  undefined8 local_4a0;
  float local_498;
  undefined8 local_490;
  undefined1 local_488 [16];
  undefined4 local_478;
  uint local_474;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 local_464;
  float local_460;
  float local_45c;
  float local_458;
  undefined1 local_448 [912];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_548;
  iVar6 = (int)param_1[1] + (int)param_4[1];
  local_4d8 = param_1;
  *(int *)(param_4 + 1) = iVar6;
  local_500 = param_4;
  if (*(int *)((longlong)param_4 + 0xc) < iVar6) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4);
  }
  local_528 = 0;
  if (0 < (int)param_1[1]) {
    lVar11 = 0;
    lVar10 = 0;
    plVar9 = local_500;
    do {
      lVar2 = *(longlong *)(lVar10 + *param_1);
      lVar8 = *(longlong *)(lVar2 + 0x168);
      if (lVar8 == 0) {
        local_4c8 = DAT_1468b5d98;
        puVar7 = &local_4d0;
        local_4d0 = _DAT_1468b5d90;
      }
      else {
        puVar7 = (undefined8 *)&local_4f8;
        local_4f8 = *(undefined4 *)(lVar8 + 0x220);
        local_4f0 = *(undefined4 *)(lVar8 + 0x228);
        uStack_4f4 = *(undefined4 *)(lVar8 + 0x224);
      }
      local_4e8 = *puVar7;
      fVar13 = (float)local_4e8;
      iVar6 = 0;
      fVar14 = 999999.0;
      fVar1 = *(float *)(puVar7 + 1);
      local_4e0 = fVar1;
      uVar3 = local_4e8;
      local_4e8._4_4_ = (float)((ulonglong)local_4e8 >> 0x20);
      fVar4 = local_4e8._4_4_;
      fStack_51c = local_4e8._4_4_;
      local_520 = fVar13;
      local_518 = fVar1;
      if (0 < (int)param_3[1]) {
        lVar8 = 0;
        local_4e8 = uVar3;
        do {
          uVar3 = *(undefined8 *)(lVar8 + *param_3);
          FUN_142dc1ad0(local_448);
          cVar5 = FUN_142dd0170(uVar3,lVar2,local_448);
          local_4ac = CONCAT44(DAT_14622e7f0._4_4_,(float)DAT_14622e7f0);
          local_508 = DAT_1468b5d98;
          local_510 = _DAT_1468b5d90;
          local_4a4 = DAT_14622e7f8;
          local_498 = DAT_14622e7f8;
          local_4b8 = 0x7f7fffff;
          local_4b4 = 0x7f7fffff;
          local_4b0 = 0xbf800000;
          local_490 = 0;
          local_4a0 = local_4ac;
          FUN_140760710(local_488);
          local_474 = local_474 & 0xfffffc00;
          local_460 = (float)DAT_14622e7f0;
          local_458 = DAT_14622e7f8;
          local_45c = DAT_14622e7f0._4_4_;
          local_478 = 0;
          local_470 = 0;
          local_468 = 0;
          local_464 = 0xbf800000;
          if (((cVar5 != '\0') && (cVar5 = FUN_142dcecf0(local_448,&local_4b8), cVar5 != '\0')) &&
             (fVar12 = fVar4 - local_45c,
             fVar12 = SQRT(fVar12 * fVar12 + (fVar13 - local_460) * (fVar13 - local_460) +
                           (fVar1 - local_458) * (fVar1 - local_458)), fVar12 < fVar14)) {
            local_520 = (float)local_510;
            fStack_51c = local_510._4_4_;
            local_518 = local_508;
            fVar14 = fVar12;
            if (((ABS((float)local_510 - fVar13) <= 0.0001) &&
                (ABS(local_510._4_4_ - fVar4) <= 0.0001)) &&
               (param_1 = local_4d8, plVar9 = local_500, ABS(local_508 - fVar1) <= 0.0001)) break;
          }
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 8;
          param_1 = local_4d8;
          plVar9 = local_500;
        } while (iVar6 < (int)param_3[1]);
      }
      lVar2 = *plVar9;
      lVar10 = lVar10 + 8;
      *(ulonglong *)(lVar11 + lVar2) = CONCAT44(fStack_51c,local_520);
      *(float *)(lVar11 + 8 + lVar2) = local_518;
      lVar11 = lVar11 + 0xc;
      local_528 = local_528 + 1;
    } while (local_528 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 140771750 FUN_140771750 body=90 status=ok
// SIG undefined FUN_140771750(void)

longlong FUN_140771750(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get();
  if (lVar2 != 0) {
    lVar3 = FUN_1428dfc70();
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



// FUNCTION 140771860 FUN_140771860 body=106 status=ok
// SIG undefined FUN_140771860(void)

void FUN_140771860(undefined8 *param_1,void *param_2,int param_3,int param_4,int param_5)

{
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  _guard_xfg_dispatch_icall_nop((void *)*param_1,param_2,(longlong)param_3 * 0x38);
  return;
}



// FUNCTION 1407718d0 FUN_1407718d0 body=665 status=ok
// SIG undefined FUN_1407718d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1407718d0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64 [12];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [48];
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if (lVar6 != 0) {
    lVar14 = param_1[0x2d];
    if (lVar14 == 0) {
      uVar5 = (undefined4)DAT_1468b5da0;
      uVar16 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_74 = DAT_1468b5da8;
    }
    else {
      local_58 = *(float *)(lVar14 + 0x210);
      fStack_54 = *(float *)(lVar14 + 0x214);
      fStack_50 = *(float *)(lVar14 + 0x218);
      fStack_4c = *(float *)(lVar14 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)(lVar14 + 0x254) != fStack_54);
      auVar3._0_4_ = -(uint)(*(float *)(lVar14 + 0x250) != local_58);
      auVar3._8_4_ = -(uint)(*(float *)(lVar14 + 600) != fStack_50);
      auVar3._12_4_ = -(uint)(*(float *)(lVar14 + 0x25c) != fStack_4c);
      iVar4 = movmskps((int)lVar6,auVar3);
      lVar13 = lVar14;
      if (iVar4 != 0) {
        *(float *)(lVar14 + 0x250) = local_58;
        *(float *)(lVar14 + 0x254) = fStack_54;
        *(float *)(lVar14 + 600) = fStack_50;
        *(float *)(lVar14 + 0x25c) = fStack_4c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_58,local_64);
        *(undefined8 *)(lVar14 + 0x260) = *puVar7;
        *(undefined4 *)(lVar14 + 0x268) = *(undefined4 *)(puVar7 + 1);
        lVar13 = param_1[0x2d];
      }
      uVar5 = (undefined4)*(undefined8 *)(lVar14 + 0x260);
      uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x260) >> 0x20);
      puVar1 = (undefined4 *)(lVar14 + 0x268);
      lVar14 = lVar13;
      local_74 = *puVar1;
    }
    local_7c = CONCAT44(uVar16,uVar5);
    if (lVar14 == 0) {
      local_88 = _DAT_1468b5d90;
      local_80 = DAT_1468b5d98;
    }
    else {
      local_88 = *(undefined8 *)(lVar14 + 0x220);
      local_80 = *(undefined4 *)(lVar14 + 0x228);
    }
    local_70 = local_88;
    local_68 = local_80;
    uVar8 = FActorSpawnParameters::FActorSpawnParameters(local_48);
    uVar9 = FUN_1407b4160();
    plVar10 = (longlong *)UWorld::SpawnActor(lVar6,uVar9,&local_70,&local_7c,uVar8);
    if (plVar10 != (longlong *)0x0) {
      lVar6 = UCableComponent::GetAttachedActor(plVar10);
      if (lVar6 != 0) {
        uVar12 = 0;
        puVar7 = (undefined8 *)param_3[0x14];
        if ((undefined8 *)param_3[0x14] == (undefined8 *)0x0) {
          puVar7 = param_3;
        }
        uVar15 = (longlong)*(int *)(param_3 + 0x15) & 0x1fffffffffffffff;
        if (puVar7 + *(int *)(param_3 + 0x15) < puVar7) {
          uVar15 = uVar12;
        }
        if (uVar15 != 0) {
          do {
            FUN_1407c09f0(lVar6,*puVar7,0xffffffff);
            uVar12 = uVar12 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar12 != uVar15);
        }
      }
      uVar8 = FUN_142df3580(param_1);
      FUN_1407dad10(plVar10,uVar8);
      FUN_1407da230(plVar10,1);
      FUN_1407daa80(plVar10,param_2);
      FUN_1407da270(plVar10,1);
      (**(code **)(*plVar10 + 0x6e8))(plVar10);
      uVar8 = FUN_142dfdf30();
      plVar11 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar8);
      if ((plVar11 != (longlong *)0x0) &&
         (plVar2 = (longlong *)plVar10[0xc4], plVar2 != (longlong *)0x0)) {
        lVar6 = *plVar2;
        uVar5 = (**(code **)(*plVar11 + 0x400))(plVar11);
        (**(code **)(lVar6 + 0x3f8))(plVar2,uVar5);
        uVar5 = (**(code **)(*plVar11 + 0x408))(plVar11);
        FUN_142ccf590(plVar2,uVar5);
      }
      FUN_1407c3ac0(plVar10);
      return plVar10;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140771b70 FUN_140771b70 body=649 status=ok
// SIG undefined FUN_140771b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140771b70(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64 [12];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [48];
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if (lVar6 != 0) {
    lVar15 = param_1[0x2d];
    if (lVar15 == 0) {
      uVar5 = (undefined4)DAT_1468b5da0;
      uVar16 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_74 = DAT_1468b5da8;
    }
    else {
      local_58 = *(float *)(lVar15 + 0x210);
      fStack_54 = *(float *)(lVar15 + 0x214);
      fStack_50 = *(float *)(lVar15 + 0x218);
      fStack_4c = *(float *)(lVar15 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)(lVar15 + 0x254) != fStack_54);
      auVar3._0_4_ = -(uint)(*(float *)(lVar15 + 0x250) != local_58);
      auVar3._8_4_ = -(uint)(*(float *)(lVar15 + 600) != fStack_50);
      auVar3._12_4_ = -(uint)(*(float *)(lVar15 + 0x25c) != fStack_4c);
      iVar4 = movmskps((int)lVar6,auVar3);
      lVar14 = lVar15;
      if (iVar4 != 0) {
        *(float *)(lVar15 + 0x250) = local_58;
        *(float *)(lVar15 + 0x254) = fStack_54;
        *(float *)(lVar15 + 600) = fStack_50;
        *(float *)(lVar15 + 0x25c) = fStack_4c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_58,local_64);
        *(undefined8 *)(lVar15 + 0x260) = *puVar7;
        *(undefined4 *)(lVar15 + 0x268) = *(undefined4 *)(puVar7 + 1);
        lVar14 = param_1[0x2d];
      }
      uVar5 = (undefined4)*(undefined8 *)(lVar15 + 0x260);
      uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x260) >> 0x20);
      puVar1 = (undefined4 *)(lVar15 + 0x268);
      lVar15 = lVar14;
      local_74 = *puVar1;
    }
    local_7c = CONCAT44(uVar16,uVar5);
    if (lVar15 == 0) {
      local_88 = _DAT_1468b5d90;
      local_80 = DAT_1468b5d98;
    }
    else {
      local_88 = *(undefined8 *)(lVar15 + 0x220);
      local_80 = *(undefined4 *)(lVar15 + 0x228);
    }
    local_70 = local_88;
    local_68 = local_80;
    uVar8 = FActorSpawnParameters::FActorSpawnParameters(local_48);
    uVar9 = FUN_1407b4160();
    plVar10 = (longlong *)UWorld::SpawnActor(lVar6,uVar9,&local_70,&local_7c,uVar8);
    if (plVar10 != (longlong *)0x0) {
      lVar6 = UCableComponent::GetAttachedActor(plVar10);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)*param_3;
        uVar13 = 0;
        uVar12 = (longlong)(int)param_3[1] & 0x1fffffffffffffff;
        if (puVar7 + (int)param_3[1] < puVar7) {
          uVar12 = uVar13;
        }
        if (uVar12 != 0) {
          do {
            FUN_1407c09f0(lVar6,*puVar7,0xffffffff);
            uVar13 = uVar13 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar13 != uVar12);
        }
      }
      uVar8 = FUN_142df3580(param_1);
      FUN_1407dad10(plVar10,uVar8);
      FUN_1407da230(plVar10,1);
      FUN_1407daa80(plVar10,param_2);
      FUN_1407da270(plVar10,1);
      (**(code **)(*plVar10 + 0x6e8))(plVar10);
      uVar8 = FUN_142dfdf30();
      plVar11 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar8);
      if ((plVar11 != (longlong *)0x0) &&
         (plVar2 = (longlong *)plVar10[0xc4], plVar2 != (longlong *)0x0)) {
        lVar6 = *plVar2;
        uVar5 = (**(code **)(*plVar11 + 0x400))(plVar11);
        (**(code **)(lVar6 + 0x3f8))(plVar2,uVar5);
        uVar5 = (**(code **)(*plVar11 + 0x408))(plVar11);
        FUN_142ccf590(plVar2,uVar5);
      }
      FUN_1407c3ac0(plVar10);
      return plVar10;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140771e00 FUN_140771e00 body=69 status=ok
// SIG undefined FUN_140771e00(void)

ulonglong FUN_140771e00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_142e5c1e0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140771e50 FUN_140771e50 body=124 status=ok
// SIG undefined FUN_140771e50(void)

void FUN_140771e50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = FUN_142c1f5b0();
  if (lVar1 != 0) {
    plVar2 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    if (((int)(uint)*(byte *)(lVar3 + 0x48) < *(int *)(lVar1 + 0xd8)) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xd0) + (ulonglong)*(byte *)(lVar3 + 0x48) * 8),
       lVar1 != 0)) {
      FUN_142c23d50(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 140771ed0 FUN_140771ed0 body=166 status=ok
// SIG undefined FUN_140771ed0(void)

undefined8 * FUN_140771ed0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_1407bb450();
  param_1[0x98] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14408bdf8;
  param_1[0x8b] = &PTR_LAB_14408c4e8;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SpawnNodeComponent",1);
  uVar3 = *puVar1;
  uVar2 = AUGWeapon_Hook::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  local_res8 = 0;
  param_1[0x98] = uVar3;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  return param_1;
}


