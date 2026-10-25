// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a66a80 FUN_140a66a80 body=369 status=ok
// SIG undefined FUN_140a66a80(void)

void FUN_140a66a80(longlong *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined1 *local_28;
  longlong *local_20;
  
  if (1 < (byte)(*(char *)((longlong)param_1 + 0xec1) - 3U)) {
    FUN_141400260(param_1,3);
    return;
  }
  local_res8[0] = 1;
  if ((char)param_1[0x48e] == '\0') {
    lVar3 = (**(code **)(*param_1 + 0x670))();
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)param_1[0x27d];
      puVar1 = puVar7 + (int)param_1[0x27e];
      for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
        lVar4 = FUN_140c46a10(param_1,*puVar7);
        if (lVar4 != 0) {
          uVar5 = FUN_1430bdfe0();
          lVar4 = AGameStateBase::OnRep_GameModeClass(lVar4,uVar5);
          if (lVar4 != 0) {
            lVar6 = FUN_1430bdfe0();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_142d49f50(*(undefined8 *)(lVar4 + 0x418),lVar3);
              FUN_142d49f50(*(undefined8 *)(lVar4 + 0x428),lVar3);
            }
          }
        }
      }
    }
    local_28 = local_res8;
    local_20 = param_1;
    FUN_140a52260(&local_28,param_1[0x481]);
    if (param_1[0x474] != 0) {
      FUN_140a52260(&local_28,*(undefined8 *)(param_1[0x474] + 0x4d8));
      return;
    }
    FUN_140a52260(&local_28);
    return;
  }
  return;
}



// FUNCTION 140a66c00 FUN_140a66c00 body=333 status=ok
// SIG undefined FUN_140a66c00(void)

void FUN_140a66c00(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res8;
  int local_res20 [2];
  longlong *local_18 [2];
  
  if (((param_1 != 0) && (param_2 != 0)) && (lVar4 = *(longlong *)(param_2 + 0x118), lVar4 != 0)) {
    local_res8 = param_1;
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong *)(lVar4 + 0x4d0) == param_2)) &&
       (*(longlong *)(lVar4 + 0xea8) != 0)) {
      plVar5 = (longlong *)(*(longlong *)(lVar4 + 0xea8) + 0x1f8);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar5,local_res20,local_res8);
      if (param_3 != '\0') {
        if ((local_res20[0] == -1) ||
           (lVar4 = *plVar5 + (longlong)local_res20[0] * 0x18, lVar4 == 0)) {
          local_18[0] = &local_res8;
          FUN_140a4c260(plVar5,local_res20,local_18,0);
          lVar4 = *plVar5 + (longlong)local_res20[0] * 0x18;
        }
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        return;
      }
      if ((((local_res20[0] != -1) &&
           (lVar4 = *plVar5 + (longlong)local_res20[0] * 0x18, lVar4 != 0)) &&
          (piVar3 = (int *)(lVar4 + 8), piVar3 != (int *)0x0)) &&
         (*piVar3 = *piVar3 + -1, *piVar3 < 1)) {
        TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
        ::Remove(plVar5,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 140a66d50 FUN_140a66d50 body=49 status=ok
// SIG undefined FUN_140a66d50(void)

void FUN_140a66d50(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0x4f0))(param_1,*param_2);
  FUN_142cf1180(param_1,param_2);
  return;
}



// FUNCTION 140a66d90 FUN_140a66d90 body=12 status=ok
// SIG undefined FUN_140a66d90(void)

bool FUN_140a66d90(longlong param_1)

{
  return *(longlong *)(param_1 + 12000) != 0;
}



// FUNCTION 140a66da0 HasPredictionData_Client body=85 status=ok
// SIG undefined HasPredictionData_Client(void)

undefined1 INetworkPredictionInterface::HasPredictionData_Client(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x35,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::HasPredictionData_Client");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x35,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::HasPredictionData_Client");
  return 0;
}



// FUNCTION 140a66e00 HasPredictionData_Server body=85 status=ok
// SIG undefined HasPredictionData_Server(void)

undefined1 INetworkPredictionInterface::HasPredictionData_Server(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x38,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::HasPredictionData_Server");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x38,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::HasPredictionData_Server");
  return 0;
}



// FUNCTION 140a66e60 FUN_140a66e60 body=110 status=ok
// SIG undefined FUN_140a66e60(void)

undefined8 FUN_140a66e60(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(longlong *)(param_1 + 0x2b78) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x2b78) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      cVar2 = FUN_142cf1480(param_1);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140a66ed0 FUN_140a66ed0 body=107 status=ok
// SIG undefined FUN_140a66ed0(void)

void FUN_140a66ed0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  param_1[6] = (longlong)param_2;
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_142e27720();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    param_1[7] = lVar2;
    if (*param_1 != 0) {
      cVar3 = *(char *)((longlong)param_1 + 0x11);
      if ((*(char *)(param_1[6] + 0x128) != '\x03') && ((char)param_1[10] != -1)) {
        cVar3 = (char)param_1[10];
      }
      FUN_140a71ab0(param_1,cVar3);
    }
  }
  return;
}



// FUNCTION 140a66f40 FUN_140a66f40 body=124 status=ok
// SIG undefined FUN_140a66f40(void)

void FUN_140a66f40(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142cf1d20();
  lVar1 = *(longlong *)(param_1 + 0xfe8);
  if (lVar1 != 0) {
    lVar3 = FUN_141405840();
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
      *(longlong *)(param_1 + 0x2b98) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x2b98) = 0;
  return;
}



// FUNCTION 140a66fc0 FUN_140a66fc0 body=164 status=ok
// SIG undefined FUN_140a66fc0(void)

void FUN_140a66fc0(longlong param_1,float param_2,float param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  FUN_142cc6580();
  lVar1 = *(longlong *)(param_1 + 0x118);
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
    if (bVar2) {
      if (*(char *)(lVar1 + 0x1141) == '\0') {
        fVar4 = *(float *)(lVar1 + 0x568);
      }
      else {
        fVar4 = *(float *)(lVar1 + 0x1144);
      }
      *(float *)(param_1 + 0x558) = (fVar4 + param_2) - param_3;
    }
  }
  return;
}



// FUNCTION 140a67070 FUN_140a67070 body=1758 status=ok
// SIG undefined FUN_140a67070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a67070(byte *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if ((param_1[0x18] & 1) != 0) {
    return;
  }
  lVar5 = 0;
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))();
  }
  lVar5 = FUN_140b5b810(lVar5);
  if (lVar5 != 0) {
    FUN_140b6f0e0(lVar5,*(undefined8 *)(param_1 + 0x10));
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))(), lVar5 == 0))
  goto LAB_140a6759b;
  *(undefined4 *)(param_1 + 0x1c) = DAT_146295330;
  lVar8 = DAT_146866bd0;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar6 = 4;
    if (DVar4 == DAT_1468c21c0) goto LAB_140a67189;
  }
  else {
LAB_140a67189:
    lVar6 = 0;
  }
  fVar12 = DAT_146295344;
  fVar11 = DAT_146295334;
  if (*(int *)(lVar6 + lVar8) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = DAT_146295340;
    fVar11 = fVar12;
  }
  uVar1 = DAT_146295338;
  fVar12 = fVar11;
  if (((*param_1 & 4) != 0) && (fVar12 = *(float *)(param_1 + 4), fVar11 <= *(float *)(param_1 + 4))
     ) {
    fVar12 = fVar11;
  }
  uStack_e0 = 0;
  local_e8 = FUN_140a60500;
  if (*(longlong *)(lVar5 + 400) == 0) {
    uVar9 = *(undefined8 *)(lVar5 + 0x3f8);
  }
  else {
    uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar7 + 1,uVar2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_e8;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_e8._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_e0;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_dc;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_d8 = 0;
  local_d0 = 0;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_f0 = 0xbf800000;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_f8 = 0;
  FUN_142880850(uVar9,param_1 + 0xb8,&local_d8,uVar1);
  if (local_78 != 0) {
    plVar10 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar10 = local_88;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar8 = FMemory::Realloc(plVar7,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  if ((*param_1 & 2) != 0) {
    uStack_e0 = 0;
    local_e8 = FUN_140a5e540;
    if (*(longlong *)(lVar5 + 400) == 0) {
      uVar9 = *(undefined8 *)(lVar5 + 0x3f8);
    }
    else {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar7 + 1,uVar2);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_e8;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_e0;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_dc;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_d8 = 0;
    local_d0 = 0;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_d8);
    }
    FWeakObjectPtr::operator=(local_c8,0);
    local_f0 = 0xbf800000;
    local_c0 = 0;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_f8 = 1;
    FUN_142880850(uVar9,param_1 + 0xc0,&local_d8,0x3f800000);
    if (local_78 != 0) {
      plVar10 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar10 = local_88;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      lVar8 = FMemory::Realloc(plVar7,0,0);
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
    }
  }
  uStack_e0 = 0;
  local_e8 = FUN_140a5ebf0;
  if (*(longlong *)(lVar5 + 400) == 0) {
    uVar9 = *(undefined8 *)(lVar5 + 0x3f8);
  }
  else {
    uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar7 + 1,uVar2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_e8;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_e8._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_e0;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_dc;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar5;
    *plVar7 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_d8 = 0;
  local_d0 = 0;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_f0 = 0xbf800000;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_f8 = 0;
  FUN_142880850(uVar9,param_1 + 200,&local_d8,fVar12);
  if (local_78 != 0) {
    plVar10 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar10 = local_88;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar5 = FMemory::Realloc(plVar7,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
LAB_140a6759b:
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))(), lVar5 != 0)) {
    uStack_e0 = 0;
    local_e8 = (code *)&LAB_140c3bd40;
    if (*(longlong *)(lVar5 + 400) == 0) {
      uVar9 = *(undefined8 *)(lVar5 + 0x3f8);
    }
    else {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
    }
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar7 + 1,uVar2);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_e8;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_e0;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_dc;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar5;
      *plVar7 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_d8 = 0;
    local_d0 = 0;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_d8);
    }
    FWeakObjectPtr::operator=(local_c8,0);
    local_f0 = 0xbf800000;
    local_c0 = 0;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_f8 = 0;
    FUN_142880850(uVar9,param_1 + 0xe0,&local_d8,uVar1);
    if (local_78 != 0) {
      plVar10 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar10 = local_88;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      lVar5 = FMemory::Realloc(plVar7,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 140a67750 FUN_140a67750 body=58 status=ok
// SIG undefined FUN_140a67750(void)

void FUN_140a67750(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    if (*(int *)(param_1 + 0x21f8) == -1) {
      iVar1 = rand();
      *(int *)(param_1 + 0x21f8) = iVar1;
    }
    FUN_140a56c50(param_1);
    return;
  }
  return;
}



// FUNCTION 140a67790 FUN_140a67790 body=260 status=ok
// SIG undefined FUN_140a67790(void)

void FUN_140a67790(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_res8;
  
  if (param_3 == 0) {
    lVar6 = 0;
    lVar4 = lVar6;
    if (param_2 != 0) {
      lVar4 = *(longlong *)(param_2 + 0x2c70);
    }
    lVar5 = lVar6;
    if ((lVar4 != 0) && (lVar1 = param_1[0x9e], lVar1 != 0)) {
      plVar2 = *(longlong **)(lVar1 + 0x40);
      plVar3 = plVar2 + (longlong)*(int *)(lVar1 + 0x48) * 2;
      for (; plVar2 != plVar3; plVar2 = plVar2 + 2) {
        if (*plVar2 == *(longlong *)(lVar4 + 0xa58)) {
          lVar5 = plVar2[1];
          break;
        }
      }
    }
    if (lVar5 == 0) {
      (**(code **)(*param_1 + 0x6e8))(param_1);
    }
    else {
      (**(code **)(*param_1 + 0x6f0))();
      if (param_1[0xa1] != 0) {
        lVar6 = *(longlong *)(param_1[0xa1] + 0x2c70);
      }
      if (lVar6 != 0) {
        FUN_140a6de60(param_1,lVar6 + 0x1918);
      }
    }
  }
  else {
    FUN_1430f3d20(param_1,param_3);
  }
  param_1[0xa1] = param_2;
  local_res8 = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xa4,&local_res8);
  local_res8 = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xa6,&local_res8);
  return;
}



// FUNCTION 140a678a0 FUN_140a678a0 body=10 status=ok
// SIG undefined FUN_140a678a0(void)

void FUN_140a678a0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140a678a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x558))();
  return;
}



// FUNCTION 140a678b0 FUN_140a678b0 body=59 status=ok
// SIG undefined FUN_140a678b0(void)

undefined8 FUN_140a678b0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x570))();
  if (cVar1 == '\0') {
    cVar1 = FUN_142cf3960(param_1);
    if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x221c) != '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140a678f0 FUN_140a678f0 body=59 status=ok
// SIG undefined FUN_140a678f0(void)

undefined8 FUN_140a678f0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x560))();
  if (cVar1 == '\0') {
    cVar1 = FUN_142cf3960(param_1);
    if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x221c) == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140a67930 FUN_140a67930 body=87 status=ok
// SIG undefined FUN_140a67930(void)

undefined1 FUN_140a67930(longlong param_1)

{
  if ((*(float *)(param_1 + 0x194) <= 0.0 && *(float *)(param_1 + 0x194) != 0.0) &&
     (*(float *)(param_1 + 0x2908) * *(float *)(param_1 + 0x2908) * 0.98 <=
      *(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0x18c) +
      *(float *)(param_1 + 400) * *(float *)(param_1 + 400) +
      *(float *)(param_1 + 0x194) * *(float *)(param_1 + 0x194))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140a67990 FUN_140a67990 body=90 status=ok
// SIG undefined FUN_140a67990(void)

ulonglong FUN_140a67990(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *in_RAX;
  ulonglong uVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x2298);
    in_RAX = plVar2 + (longlong)*(int *)(param_1 + 0x22a0) * 4;
    for (; plVar2 != in_RAX; plVar2 = plVar2 + 4) {
      if (*plVar2 == param_2) {
        if (((plVar2 != (longlong *)0x0) && (param_3 != 0)) &&
           (*(longlong *)(param_1 + 0x2380) != 0)) {
          uVar1 = FUN_1409ae680(*(longlong *)(param_1 + 0x2380),param_3,plVar2[1]);
          return uVar1;
        }
        break;
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a679f0 FUN_140a679f0 body=115 status=ok
// SIG undefined FUN_140a679f0(void)

undefined1 FUN_140a679f0(undefined8 param_1,float param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  float fVar2;
  
  if (((param_3 != 0) && (param_4 != 0)) && (*(longlong *)(param_3 + 0x908) != 0)) {
    fVar2 = (float)FUN_142230c20(param_3,param_4);
    if (fVar2 <= param_2) {
      cVar1 = FUN_142dee910(*(undefined8 *)(param_3 + 0x908),param_4);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140a67a70 FUN_140a67a70 body=40 status=ok
// SIG undefined FUN_140a67a70(void)

ulonglong FUN_140a67a70(longlong param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = *(char **)(param_1 + 0x23a8);
  pcVar2 = pcVar1 + *(int *)(param_1 + 0x23b0);
  while( true ) {
    if (pcVar1 == pcVar2) {
      return (ulonglong)pcVar1 & 0xffffffffffffff00;
    }
    if (*pcVar1 == param_2) break;
    pcVar1 = pcVar1 + 1;
  }
  return CONCAT71((int7)((ulonglong)pcVar1 >> 8),1);
}



// FUNCTION 140a67ab0 FUN_140a67ab0 body=42 status=ok
// SIG undefined FUN_140a67ab0(void)

bool FUN_140a67ab0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x1c0) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x280))();
    return cVar1 == '\0';
  }
  return false;
}



// FUNCTION 140a67ae0 FUN_140a67ae0 body=122 status=ok
// SIG undefined FUN_140a67ae0(void)

undefined1 FUN_140a67ae0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_142cf33f0();
  if (cVar2 == '\0') {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x620) & 8) == 0) {
    lVar1 = FUN_142dccd00(param_2);
    if (param_2 == 0) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x488) != lVar1) {
      return 0;
    }
  }
  if ((*(uint *)(param_1 + 0x620) & 0x4000) != 0) {
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x488);
    }
    cVar2 = FUN_140a6ca90(param_1,uVar3);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140a67bc0 FUN_140a67bc0 body=115 status=ok
// SIG undefined FUN_140a67bc0(void)

ulonglong FUN_140a67bc0(longlong param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  uint7 uVar3;
  
  if (*(longlong *)(param_1 + 0x2b78) != 0) {
    lVar1 = FUN_142ceefa0();
    in_RAX = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_1414e0f70();
      uVar3 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        in_RAX = (ulonglong)uVar3 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar3,1);
      }
      if ((((char)in_RAX != '\0') && (*(char *)(lVar1 + 0x770) != '\0')) &&
         (*(char *)(lVar1 + 0x418) == '\x02')) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a67c40 FUN_140a67c40 body=14 status=ok
// SIG undefined FUN_140a67c40(void)

void FUN_140a67c40(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140a67c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x660) + 0x10))();
  return;
}



// FUNCTION 140a67c60 FUN_140a67c60 body=126 status=ok
// SIG undefined FUN_140a67c60(void)

longlong FUN_140a67c60(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  uint7 uVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x848), lVar4 != 0)) {
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
    if (bVar1) goto LAB_140a67cb7;
  }
  lVar4 = 0;
LAB_140a67cb7:
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = (uint7)((ulonglong)lVar2 >> 8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x508) != lVar4)) {
    return (ulonglong)uVar3 << 8;
  }
  return CONCAT71(uVar3,1);
}



// FUNCTION 140a67ce0 FUN_140a67ce0 body=126 status=ok
// SIG undefined FUN_140a67ce0(void)

longlong FUN_140a67ce0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  uint7 uVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x848), lVar4 != 0)) {
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
    if (bVar1) goto LAB_140a67d37;
  }
  lVar4 = 0;
LAB_140a67d37:
  lVar2 = *(longlong *)(param_1 + 8);
  uVar3 = (uint7)((ulonglong)lVar2 >> 8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x508) != lVar4)) {
    return (ulonglong)uVar3 << 8;
  }
  return CONCAT71(uVar3,1);
}



// FUNCTION 140a67d60 FUN_140a67d60 body=126 status=ok
// SIG undefined FUN_140a67d60(void)

longlong FUN_140a67d60(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  uint7 uVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x848), lVar4 != 0)) {
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
    if (bVar1) goto LAB_140a67db7;
  }
  lVar4 = 0;
LAB_140a67db7:
  lVar2 = *(longlong *)(param_1 + 0x38);
  uVar3 = (uint7)((ulonglong)lVar2 >> 8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x508) == lVar4)) {
    return CONCAT71(uVar3,1);
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 140a67de0 FUN_140a67de0 body=37 status=ok
// SIG undefined FUN_140a67de0(void)

undefined1 FUN_140a67de0(longlong param_1)

{
  char cVar1;
  
  if ((*(uint *)(param_1 + 0x620) & 0x4000) != 0) {
    cVar1 = FUN_140a6ca90();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140a67e10 FUN_140a67e10 body=11 status=ok
// SIG undefined FUN_140a67e10(void)

bool FUN_140a67e10(longlong param_1)

{
  return *(int *)(param_1 + 0x2ac4) != -1;
}



// FUNCTION 140a67e20 FUN_140a67e20 body=190 status=ok
// SIG undefined FUN_140a67e20(void)

ulonglong FUN_140a67e20(longlong param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  uint7 uVar3;
  
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x670))();
    in_RAX = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_14145f370();
      uVar3 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        in_RAX = (ulonglong)uVar3 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar3,1);
      }
      if (((char)in_RAX != '\0') && ((*(byte *)(lVar1 + 0x640) & 2) != 0)) {
        lVar1 = ATTLCharacterCommon::GetCurrentSupportWeapon(lVar1);
        in_RAX = 0;
        if (lVar1 != 0) {
          lVar2 = FUN_141410f00();
          uVar3 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
            in_RAX = (ulonglong)uVar3 << 8;
          }
          else {
            in_RAX = CONCAT71(uVar3,1);
          }
          if (((char)in_RAX != '\0') && (*(char *)(lVar1 + 0x61) != '\0')) {
            return CONCAT71((int7)(in_RAX >> 8),1);
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a67ee0 FUN_140a67ee0 body=11 status=ok
// SIG undefined FUN_140a67ee0(void)

bool FUN_140a67ee0(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x11f8);
}



// FUNCTION 140a67ef0 FUN_140a67ef0 body=136 status=ok
// SIG undefined FUN_140a67ef0(void)

ulonglong FUN_140a67ef0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar3 = FWeakObjectPtr::Get(param_2 + 0x6c);
  if (lVar3 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar5 = uVar5 & 0xffffffffffffff00;
      bVar2 = false;
    }
    else {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      bVar2 = true;
    }
    if (bVar2) {
      return uVar5 & 0xffffffffffffff00;
    }
  }
  uVar5 = FUN_142341540(param_1,param_2);
  return uVar5;
}



// FUNCTION 140a67f80 FUN_140a67f80 body=88 status=ok
// SIG undefined FUN_140a67f80(void)

void FUN_140a67f80(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x778))();
  if (((cVar1 != '\0') && ((char)param_1[0x48a] != '\0')) &&
     (*(float *)((longlong)param_1 + 0x2454) <= 0.0)) {
    *(int *)((longlong)param_1 + 0x2454) = (int)param_1[0x45f];
    *(undefined1 *)(param_1 + 0x48a) = 0;
    FUN_1413fff60(param_1);
    return;
  }
  FUN_140c49440(param_1);
  return;
}



// FUNCTION 140a67fe0 FUN_140a67fe0 body=284 status=ok
// SIG undefined FUN_140a67fe0(void)

void FUN_140a67fe0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FUN_142341770();
  if (param_2 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140a68035;
  }
  param_2 = 0;
LAB_140a68035:
  if ((*(longlong *)(param_1 + 0x2b78) != 0) && (param_2 != 0)) {
    FWeakObjectPtr::operator=(&local_res8,param_2);
    fVar1 = *(float *)(param_1 + 0x318);
    fVar2 = *(float *)(param_1 + 0x194);
    local_38 = 0;
    local_28 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_58);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144213c48;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar5 + 0x14) = local_resc;
      *(float *)(puVar5 + 3) = fVar1 * fVar2;
    }
    local_68[0] = FUN_140a5a570;
    FUN_14234b4d0(param_1,local_68);
  }
  return;
}



// FUNCTION 140a68100 FUN_140a68100 body=84 status=ok
// SIG undefined FUN_140a68100(void)

void FUN_140a68100(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_142cc77b0();
  cVar1 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar1 != '\0') {
    pcVar2 = (char *)param_1[0x475];
    pcVar3 = pcVar2 + (int)param_1[0x476];
    if (pcVar2 != pcVar3) {
      while (*pcVar2 != '\x01') {
        pcVar2 = pcVar2 + 1;
        if (pcVar2 == pcVar3) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 0x48a) = 0;
    }
  }
  return;
}



// FUNCTION 140a68160 FUN_140a68160 body=65 status=ok
// SIG undefined FUN_140a68160(void)

void FUN_140a68160(longlong param_1,undefined8 param_2)

{
  FUN_140c40820(*(undefined8 *)(param_1 + 0x2b78),1);
  FUN_140c40810(*(undefined8 *)(param_1 + 0x2b78),1);
  FUN_142cf3ed0(param_1,param_2);
  return;
}



// FUNCTION 140a681b0 FUN_140a681b0 body=524 status=ok
// SIG undefined FUN_140a681b0(void)

void FUN_140a681b0(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  longlong local_28 [2];
  
  plVar1 = (longlong *)(param_2 + 0xc);
  if ((param_2[0xe] != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*plVar1 + 0x18))();
    if (cVar4 != '\0') goto LAB_140a682be;
  }
  uVar2 = *param_2;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_144213c60;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)FUN_140a6b6a0;
    *(undefined4 *)(plVar5 + 3) = uVar2;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_144213ca8;
  }
  if (local_28 != plVar1) {
    if (plVar5 == (longlong *)0x0) {
      if ((param_2[0xe] != 0) && (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*plVar1 != 0) {
          lVar6 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar6;
        }
        param_2[0xe] = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar1);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar6 = FMemory::Realloc(plVar5,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
LAB_140a682be:
  pfVar7 = (float *)(**(code **)(*(longlong *)param_1[0x90] + 0x428))
                              ((longlong *)param_1[0x90],&local_48,*(undefined8 *)(param_2 + 8));
  pfVar8 = (float *)(**(code **)(*(longlong *)param_1[0x90] + 0x428))
                              ((longlong *)param_1[0x90],local_28,*(undefined8 *)(param_2 + 6));
  local_30 = (pfVar7[2] + pfVar8[2]) * 0.5;
  local_48 = (*pfVar8 + *pfVar7) * 0.5;
  local_44 = (pfVar8[1] + pfVar7[1]) * 0.5;
  local_40 = local_30 - (float)param_2[0xb];
  local_38 = local_48;
  local_34 = local_44;
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_142330140(uVar9,local_res8,1,&local_38,&local_48,(longlong)param_1 + 0x4dc,param_1 + 0x9d,
                plVar1,0);
  return;
}



// FUNCTION 140a683c0 FUN_140a683c0 body=1179 status=ok
// SIG undefined FUN_140a683c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140a683c0(longlong *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_238 [32];
  undefined4 *local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 *local_200;
  undefined *local_1f8;
  undefined8 local_1e8;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  float local_1c0;
  undefined1 *local_1b8 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined1 local_168 [12];
  float local_15c;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  uVar4 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  if ((((*(int *)((longlong)param_1 + 0x2ac4) != -1) ||
       (local_58 = uVar4, uVar4 = FUN_140a5abf0(), (char)uVar4 == '\0')) ||
      (uVar4 = FUN_142cf3980(param_1), (char)uVar4 == '\0')) || (param_1[0x56f] == 0)) {
LAB_140a68840:
    return uVar4 & 0xffffffffffffff00;
  }
  if (param_1[0x24] == 0) {
    lVar5 = FUN_1423407b0(param_1);
    uVar4 = 0;
    if (lVar5 == 0) goto LAB_140a68840;
  }
  lVar5 = param_1[0x52f];
  uVar4 = 0;
  if (lVar5 == 0) goto LAB_140a68840;
  pfVar9 = *(float **)(lVar5 + 0x30);
  pfVar6 = pfVar9 + (longlong)*(int *)(lVar5 + 0x38) * 10;
  fVar10 = 0.0;
  while (fVar13 = fVar10, pfVar9 != pfVar6) {
    fVar10 = *pfVar9;
    pfVar9 = pfVar9 + 10;
    if (fVar10 <= fVar13) {
      fVar10 = fVar13;
    }
  }
  lVar5 = param_1[0x2f];
  fVar13 = fVar13 + 1.0;
  if (lVar5 == 0) {
    local_1e8._0_4_ = 0x7f7fffff;
    local_1e8._4_4_ = 0x7f7fffff;
    fStack_1e0 = 3.4028235e+38;
  }
  else {
    local_1e8._0_4_ = *(undefined4 *)(lVar5 + 0x220);
    local_1e8._4_4_ = *(undefined4 *)(lVar5 + 0x224);
    fStack_1e0 = *(float *)(lVar5 + 0x228);
  }
  fVar8 = 0.0;
  local_1c0 = fStack_1e0;
  local_1d4 = local_1e8._4_4_;
  local_1d0 = fStack_1e0 - fVar13;
  local_1d8 = (undefined4)local_1e8;
  local_1c8 = (undefined4)local_1e8;
  uStack_1c4 = local_1e8._4_4_;
  local_d0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_c8 = 0x10000;
  local_c0 = 0;
  local_1e8 = (longlong *)0x0;
  local_d8 = 0;
  local_c4 = 0;
  local_b4 = 0x101;
  local_bc = 0;
  local_c2 = 0;
  local_b8 = 0;
  FCollisionQueryParams::AddIgnoredActor(&local_d8);
  _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
  lVar5 = param_1[0x24];
  fVar10 = *(float *)((longlong)param_1 + 0x2984);
  local_15c = 1.0;
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  local_208 = FUN_14233f510(param_1,&local_1e8,0,0);
  fVar11 = 2.8026e-45;
  local_1f8 = &DAT_146aefe68;
  local_200 = &local_d8;
  local_210 = 2;
  local_218 = &DAT_1464aa810;
  cVar2 = UWorld::SweepSingleByChannel(lVar5,local_168,&local_1c8,&local_1d8);
  if (cVar2 == '\0') {
LAB_140a68692:
    if (0.0001 < fVar10) {
      fVar13 = fVar13 / fVar10;
    }
    lVar5 = param_1[0x52f];
    fVar10 = -NAN;
    fVar12 = -1.0;
    iVar3 = *(int *)(lVar5 + 0x38);
    if (3 < iVar3) {
      pfVar6 = (float *)(*(longlong *)(lVar5 + 0x30) + 0x50);
      do {
        fVar1 = pfVar6[-0x14];
        if ((fVar1 <= fVar13) && (fVar12 < fVar1)) {
          fVar12 = fVar1;
          fVar10 = fVar8;
        }
        fVar1 = pfVar6[-10];
        if ((fVar1 <= fVar13) && (fVar12 < fVar1)) {
          fVar10 = (float)((int)fVar11 + -1);
          fVar12 = fVar1;
        }
        fVar1 = *pfVar6;
        if ((fVar1 <= fVar13) && (fVar12 < fVar1)) {
          fVar12 = fVar1;
          fVar10 = fVar11;
        }
        fVar1 = pfVar6[10];
        if ((fVar1 <= fVar13) && (fVar12 < fVar1)) {
          fVar10 = (float)((int)fVar11 + 1);
          fVar12 = fVar1;
        }
        pfVar6 = pfVar6 + 0x28;
        fVar8 = (float)((int)fVar8 + 4);
        fVar11 = (float)((int)fVar11 + 4);
      } while ((int)fVar8 < iVar3 + -3);
    }
    if ((int)fVar8 < iVar3) {
      pfVar6 = (float *)(*(longlong *)(lVar5 + 0x30) + (longlong)(int)fVar8 * 0x28);
      do {
        fVar11 = *pfVar6;
        if ((fVar11 <= fVar13) && (fVar12 < fVar11)) {
          fVar12 = fVar11;
          fVar10 = fVar8;
        }
        pfVar6 = pfVar6 + 10;
        fVar8 = (float)((int)fVar8 + 1);
      } while ((int)fVar8 < iVar3);
    }
    if (((-1 < (int)fVar10) && ((int)fVar10 < iVar3)) &&
       (cVar2 = FUN_140a580c0(param_1,fVar10), cVar2 != '\0')) {
      iVar3 = FUN_14233f450(param_1);
      if (iVar3 < 3) {
        (**(code **)(*param_1 + 0xa98))(param_1);
        local_188 = 0;
        local_178 = 0;
        local_1e8 = param_1;
        fStack_1e0 = fVar10;
        puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_1a8);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar7 + 1) = (undefined4)local_1e8;
          *(undefined4 *)((longlong)puVar7 + 0xc) = local_1e8._4_4_;
          *(float *)(puVar7 + 2) = fStack_1e0;
          *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_1dc;
        }
        local_1b8[0] = &LAB_140a5a460;
        FUN_14234b4d0(param_1,local_1b8);
      }
      uVar4 = 1;
      goto LAB_140a687e8;
    }
  }
  else {
    fVar13 = local_15c * fVar13;
    pfVar9 = *(float **)(param_1[0x52f] + 0x30);
    pfVar6 = pfVar9 + (longlong)*(int *)(param_1[0x52f] + 0x38) * 10;
    fVar12 = 3.4028235e+38;
    while (fVar1 = fVar12, pfVar9 != pfVar6) {
      fVar12 = *pfVar9;
      pfVar9 = pfVar9 + 10;
      if (fVar1 <= fVar12) {
        fVar12 = fVar1;
      }
    }
    if (fVar1 * fVar10 <= fVar13) goto LAB_140a68692;
  }
  uVar4 = 0;
LAB_140a687e8:
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 == 0) {
    return uVar4;
  }
  FMemory::Free();
  return uVar4;
}



// FUNCTION 140a68860 FUN_140a68860 body=155 status=ok
// SIG undefined FUN_140a68860(void)

void FUN_140a68860(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 0x4d8);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x2f80) = 0;
  }
  else {
    if (((lVar1 == *(longlong *)(param_1 + 0x2f80)) && (*(int *)(param_1 + 0x2f88) != 2)) &&
       (*(char *)(lVar1 + 0x24e) == '\x02')) {
      FUN_142311f90(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x220) + 0x4e0),param_1 + 0x24c,
                    param_1 + 0x260);
    }
    *(longlong *)(param_1 + 0x2f80) = lVar1;
    *(uint *)(param_1 + 0x2f88) = (uint)*(byte *)(lVar1 + 0x24e);
  }
  FUN_142342620(param_1,param_2);
  return;
}



// FUNCTION 140a68900 FUN_140a68900 body=110 status=ok
// SIG undefined FUN_140a68900(void)

ulonglong FUN_140a68900(longlong param_1)

{
  float *pfVar1;
  ulonglong in_RAX;
  
  if ((*(longlong *)(param_1 + 12000) != 0) && (*(char *)(param_1 + 0x248) == '\x01')) {
    in_RAX = FUN_1407c3030(param_1 + 0x2ee8);
    if (((char)in_RAX == '\0') && (*(longlong *)(param_1 + 0x2928) != 0)) {
      in_RAX = 0;
      if ((((byte)*(undefined4 *)(param_1 + 0x410) & 3) == 3) &&
         (pfVar1 = (float *)(*(longlong *)(param_1 + 0x2928) + 0x1084),
         *(float *)(param_1 + 0x460) < *pfVar1 || *(float *)(param_1 + 0x460) == *pfVar1)) {
        return 1;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a68970 FUN_140a68970 body=340 status=ok
// SIG undefined FUN_140a68970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a68970(longlong *param_1,float param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x5c0))();
  if ((((cVar2 != '\0') && (plVar1 = (longlong *)param_1[0x44], (char)plVar1[0x25] == '\x03')) &&
      (*(char *)((longlong)plVar1 + 0x95) == '\x02')) &&
     (cVar2 = (**(code **)(*plVar1 + 0x778))(), cVar2 == '\0')) {
    lVar3 = param_1[0xc3];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(param_1[0x43] + 0x30))();
    }
    if (((*(int *)(lVar3 + 0xb8) != 0) && (0.0 < *(float *)(lVar3 + 0xb4))) &&
       (*(float *)(lVar3 + 0xb4) <= param_2)) {
      param_1[0x5d6] = *(longlong *)(lVar3 + 0xa8);
      *(undefined4 *)(param_1 + 0x5d7) = *(undefined4 *)(lVar3 + 0xb0);
      lVar4 = FWeakObjectPtr::Get(lVar3 + 0xbc);
      param_1[0x5d9] = lVar4;
      FUN_140a5f8d0(param_1);
      FUN_141405330(param_1,param_2,*(undefined4 *)(lVar3 + 0xb8));
      *(undefined8 *)(lVar3 + 0xa8) = _DAT_1468b5d90;
      *(undefined4 *)(lVar3 + 0xb0) = DAT_1468b5d98;
      *(undefined8 *)(lVar3 + 0xb4) = 0;
      *(undefined4 *)(lVar3 + 0xbc) = 0xffffffff;
      *(undefined4 *)(lVar3 + 0xc0) = 0;
    }
  }
  FUN_142cf40a0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a68ad0 FUN_140a68ad0 body=563 status=ok
// SIG undefined FUN_140a68ad0(void)

void FUN_140a68ad0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  FUN_142398ec0(param_1,0,1);
  if (*(char *)(param_1 + 0x808) == param_2) {
    return;
  }
  if (param_2 == '\x01') {
    if (*(longlong *)(param_1 + 0x820) != 0) {
      FUN_142e724b0(*(longlong *)(param_1 + 0x820),*(undefined8 *)(param_1 + 0x7f0),DAT_146866c00,0)
      ;
    }
    if (*(longlong *)(param_1 + 0x800) != 0) {
      FUN_142aa72a0();
    }
    *(undefined4 *)(param_1 + 0x838) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x83c) = 0;
  }
  else if (param_2 == '\x02') {
    lVar1 = 0;
    if (*(longlong *)(param_1 + 0x820) != 0) {
      FUN_142d9e0d0(*(longlong *)(param_1 + 0x820),*(undefined8 *)(param_1 + 0x7f0),0,
                    0x4110000041800000,*(undefined4 *)(param_1 + 0x7cc),6,1,1,DAT_146866c00,0,0,1,0)
      ;
      FUN_140a77220(param_1);
      lVar1 = *(longlong *)(param_1 + 0x820);
    }
    *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_1 + 0x7c8);
    if (lVar1 != 0) {
      FUN_142e72560(0,*(undefined8 *)(param_1 + 0x7f0),DAT_146866c00,
                    *(undefined8 *)(param_1 + 0x7b8),0);
    }
  }
  else {
    if (param_2 == '\x03') {
      lVar1 = 0;
      if (*(longlong *)(param_1 + 0x820) != 0) {
        FUN_142d9e0d0(*(longlong *)(param_1 + 0x820),*(undefined8 *)(param_1 + 0x7f0),0,
                      0x4110000041800000,*(undefined4 *)(param_1 + 0x7cc),6,1,1,DAT_146866c00,0,0,1,
                      0);
        FUN_140a77220(param_1);
        lVar1 = *(longlong *)(param_1 + 0x820);
      }
      *(undefined4 *)(param_1 + 0x80c) = 0;
    }
    else {
      if (param_2 != '\x04') goto LAB_140a68cee;
      lVar1 = *(longlong *)(param_1 + 0x820);
      *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_1 + 0x7c8);
    }
    if (lVar1 != 0) {
      FUN_142e72560(0x3f800000,*(undefined8 *)(param_1 + 0x7f0),DAT_146866c00,
                    *(undefined8 *)(param_1 + 0x7b8),0x3f800000);
    }
  }
LAB_140a68cee:
  *(char *)(param_1 + 0x808) = param_2;
  return;
}



// FUNCTION 140a68d10 FUN_140a68d10 body=124 status=ok
// SIG undefined FUN_140a68d10(void)

void FUN_140a68d10(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142279500();
  lVar2 = FUN_142269f40(param_1);
  if (lVar2 != 0) {
    lVar3 = USoUIInputKeySelector::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0xb20) = lVar2;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0xb20) = 0;
  return;
}



// FUNCTION 140a68d90 FUN_140a68d90 body=197 status=ok
// SIG undefined FUN_140a68d90(void)

void FUN_140a68d90(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 *local_18;
  int *local_10;
  
  FWeakObjectPtr::operator=(&local_res18);
  local_res20 = local_res18;
  TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x560,local_res8);
  piVar2 = (int *)0x0;
  if (local_res8[0] != -1) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x560) + (longlong)local_res8[0] * 0x14);
  }
  piVar1 = piVar2 + 2;
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  if (piVar1 == (int *)0x0) {
    local_res8[0] = 1;
    FWeakObjectPtr::operator=(&local_res20,param_2);
    local_18 = &local_res20;
    local_10 = local_res8;
    FUN_140a4c790(param_1 + 0x560,&local_res18,&local_18,0);
    return;
  }
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 140a68e60 thunk_FUN_140a66c00 body=8 status=ok
// SIG undefined thunk_FUN_140a66c00(void)

void thunk_FUN_140a66c00(undefined8 param_1,undefined8 param_2)

{
  FUN_140a66c00(param_1,param_2,1);
  return;
}



// FUNCTION 140a68e70 FUN_140a68e70 body=419 status=ok
// SIG undefined FUN_140a68e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a68e70(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  longlong local_f0 [24];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x22f0) != '\0') {
    uVar8 = 0;
    local_30 = (longlong *)0x0;
    local_28 = 0;
    FUN_140a4cee0(param_1,local_f0,0);
    plVar5 = local_f0;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    uVar9 = (longlong)(int)local_28 & 0x1fffffffffffffff;
    if (plVar5 + (int)local_28 < plVar5) {
      uVar9 = uVar8;
    }
    if (uVar9 != 0) {
      do {
        plVar1 = (longlong *)*plVar5;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x830))(plVar1,2);
        }
        plVar5 = plVar5 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar9);
    }
    if (local_30 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x900) != 0) {
    FName::FName(local_f8,L"ExitingIronBear",1);
    FUN_142dafbc0(*(longlong *)(param_1 + 0x900) + 0x14f0,local_f8);
  }
  lVar6 = *(longlong *)(param_1 + 0x2298);
  lVar7 = (longlong)*(int *)(param_1 + 0x22a0) * 0x20 + lVar6;
  for (; lVar6 != lVar7; lVar6 = lVar6 + 0x20) {
    lVar3 = FUN_140c46a10(param_1,*(undefined8 *)(lVar6 + 0x10));
    if (lVar3 != 0) {
      lVar4 = FUN_141499e60();
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
        FUN_14149b3b0(lVar3);
      }
    }
  }
  FUN_141400820(param_1);
  return;
}



// FUNCTION 140a69020 FUN_140a69020 body=158 status=ok
// SIG undefined FUN_140a69020(void)

void FUN_140a69020(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  FWeakObjectPtr::operator=(&local_res18);
  local_res20 = local_res18;
  TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x560,local_res8);
  piVar2 = (int *)0x0;
  if (local_res8[0] != -1) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x560) + (longlong)local_res8[0] * 0x14);
  }
  piVar1 = piVar2 + 2;
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FWeakObjectPtr::operator=(local_res8,param_2);
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x560,&local_res18);
  }
  return;
}



// FUNCTION 140a690c0 FUN_140a690c0 body=8 status=ok
// SIG undefined FUN_140a690c0(void)

void FUN_140a690c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140a66c00(param_1,param_2,0);
  return;
}



// FUNCTION 140a69100 FUN_140a69100 body=193 status=ok
// SIG undefined FUN_140a69100(void)

void FUN_140a69100(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x2b78) == 0) {
    return;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2b78) + 0x490);
  if (lVar4 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a69161;
  }
  lVar4 = 0;
LAB_140a69161:
  if (DAT_14686b358 == '\0') {
    FUN_140c18430(&DAT_14686b350);
  }
  FUN_140c291f0(DAT_14686b350,lVar4);
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x2b78) + 0xd88);
  (**(code **)(*plVar3 + 0x100))(plVar3,DAT_146866be8,0xff,1,0,0);
  return;
}



// FUNCTION 140a691d0 FUN_140a691d0 body=159 status=ok
// SIG undefined FUN_140a691d0(void)

void FUN_140a691d0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  FUN_142cc84b0();
  if (((*(char *)(param_1 + 0x40) != '\0') && ((*(byte *)(param_1 + 0x38) & 2) == 0)) &&
     (lVar3 = FUN_142cebba0(param_2), lVar3 != 0)) {
    lVar4 = FUN_141448000();
    iVar1 = *(int *)(lVar4 + 0x90);
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (lVar4 = FUN_142ceeb40(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1)), lVar4 == param_2))
    {
      if (*(char *)(lVar3 + 0x418) == '\x01') {
        uVar5 = 2;
      }
      else {
        if (*(char *)(lVar3 + 0x418) != '\x03') {
          return;
        }
        uVar5 = 0;
      }
      FUN_140a56940(lVar3,param_2,uVar5);
    }
  }
  return;
}



// FUNCTION 140a69270 FUN_140a69270 body=91 status=ok
// SIG undefined FUN_140a69270(void)

void FUN_140a69270(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_140a5a440;
  uVar2 = FUN_14247f500();
  FUN_14247d5a0(uVar2,param_1,local_58);
  return;
}



// FUNCTION 140a692d0 FUN_140a692d0 body=91 status=ok
// SIG undefined FUN_140a692d0(void)

void FUN_140a692d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_140a5a550;
  uVar2 = FUN_14247f500();
  FUN_14247d5a0(uVar2,param_1,local_58);
  return;
}



// FUNCTION 140a69330 FUN_140a69330 body=181 status=ok
// SIG undefined FUN_140a69330(void)

void FUN_140a69330(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong local_res10;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (*(char *)(param_1 + 0x6b0) != '\0') {
        cVar3 = (**(code **)(*(longlong *)(param_1 + 0x660) + 0x10))
                          ((longlong *)(param_1 + 0x660),lVar1);
        if (cVar3 == '\0') {
          local_res10 = lVar1;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x6a0,&local_res10);
          return;
        }
      }
      FUN_140adcc00(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140a693f0 FUN_140a693f0 body=42 status=ok
// SIG undefined FUN_140a693f0(void)

void FUN_140a693f0(longlong param_1)

{
  FUN_140c4b830();
  if (*(longlong *)(param_1 + 0x1600) != 0) {
    FUN_140e26460();
    return;
  }
  return;
}



// FUNCTION 140a69440 FUN_140a69440 body=2915 status=ok
// SIG undefined FUN_140a69440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a69440(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  float *pfVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
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
  undefined1 auStack_3a8 [32];
  undefined1 local_388;
  undefined8 local_378;
  float local_370;
  float local_368;
  float fStack_364;
  float local_360;
  float local_358;
  undefined8 local_350;
  float local_348;
  undefined8 local_340;
  float local_338;
  float local_334;
  float local_330;
  longlong *local_328;
  float local_320;
  float fStack_31c;
  undefined4 local_318;
  longlong *local_310;
  float local_308;
  float fStack_304;
  float fStack_300;
  undefined4 uStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined1 local_2e8 [268];
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  float local_1c8;
  longlong local_198 [4];
  longlong *local_178;
  int local_168;
  longlong local_148;
  undefined1 local_134;
  undefined1 local_12c;
  undefined1 local_120;
  longlong local_108;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  local_310 = param_3;
  local_328 = (longlong *)FUN_14238b320();
  if (local_328 == (longlong *)0x0) {
    return;
  }
  if (param_3 == (longlong *)0x0) {
    return;
  }
  plVar2 = (longlong *)(**(code **)(*param_3 + 0x688))(param_3);
  plVar5 = (longlong *)0x0;
  if (plVar2 == (longlong *)0x0) {
LAB_140a694f8:
    plVar7 = plVar5;
  }
  else {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    plVar7 = plVar2;
    if (!bVar18) goto LAB_140a694f8;
  }
  if (plVar2 == (longlong *)0x0) {
LAB_140a69541:
    plVar12 = plVar5;
  }
  else {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    plVar12 = plVar2;
    if (!bVar18) goto LAB_140a69541;
  }
  lVar3 = FUN_1430e5840();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  plVar15 = param_3;
  if ((!bVar18) && (plVar15 = plVar5, plVar7 == (longlong *)0x0)) {
    return;
  }
  if (plVar2 == (longlong *)0x0) {
LAB_140a695c4:
    lVar3 = 0x7b0;
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
    lVar3 = 0x7a4;
    if (cVar1 == '\0') goto LAB_140a695c4;
  }
  pfVar4 = (float *)(**(code **)(*local_328 + 0x308))(local_328,&local_378);
  plVar2 = local_328;
  local_320 = *pfVar4;
  fStack_31c = pfVar4[1];
  fVar31 = SQRT(fStack_31c * fStack_31c + local_320 * local_320);
  if (fVar31 < 1e-08) {
    return;
  }
  local_308 = *(float *)(param_4 + 0x220);
  fVar20 = *(float *)(param_4 + 0x224);
  fStack_300 = *(float *)(param_4 + 0x228);
  uStack_2fc = *(undefined4 *)(param_4 + 0x22c);
  fVar21 = *(float *)(param_1 + 0x228);
  local_318 = 0;
  local_320 = local_320 * (1.0 / fVar31);
  fVar25 = local_308 - *(float *)(param_1 + 0x220);
  fStack_31c = fStack_31c * (1.0 / fVar31);
  fVar29 = fVar20 - *(float *)(param_1 + 0x224);
  uVar6 = CONCAT44(fVar21,fVar21);
  fVar21 = fStack_300 - fVar21;
  fVar19 = fVar29 * fVar29 + fVar25 * fVar25;
  fVar30 = fVar25;
  fVar27 = fVar29;
  if ((fVar19 != 1.0) && (fVar30 = DAT_1468b5d90, fVar27 = DAT_1468b5d94, 1e-08 <= fVar19)) {
    auVar24 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
    fVar21 = fVar19 * 0.5;
    fVar27 = auVar24._0_4_;
    fVar19 = 0.5 - fVar21 * fVar27 * fVar27;
    fVar27 = fVar27 + fVar27 * fVar19;
    uVar6 = CONCAT44(auVar24._4_4_,fVar27 * fVar27);
    fVar21 = fVar21 * fVar27 * fVar27;
    fVar27 = fVar27 + fVar27 * (0.5 - fVar21);
    local_340 = (longlong *)CONCAT44(local_340._4_4_,fVar27);
    fVar30 = fVar25 * fVar27;
    fVar27 = fVar29 * fVar27;
  }
  fVar30 = fVar27 * fStack_31c + fVar30 * local_320;
  if (-0.70710677 <= fVar30) {
    if (fVar30 <= 0.70710677) {
      fVar27 = *(float *)(lVar3 + 4 + param_1);
    }
    else {
      fVar27 = *(float *)(lVar3 + param_1);
    }
  }
  else {
    fVar27 = *(float *)(lVar3 + 8 + param_1);
  }
  local_358 = fVar27;
  fStack_304 = fVar20;
  local_2f8 = fStack_300;
  fStack_2f4 = fStack_300;
  fStack_2f0 = fStack_300;
  fStack_2ec = fStack_300;
  if ((plVar12 != (longlong *)0x0) && (fVar27 < 0.0)) {
    (**(code **)(*plVar12 + 0xbc8))(plVar12,3);
    return;
  }
  local_340 = (longlong *)(CONCAT44(local_340._4_4_,fVar27) & 0xffffffff7fffffff);
  if (ABS(fVar27) <= 1e-08) {
    return;
  }
  fVar26 = fVar30 * 0.5;
  fVar25 = local_320 * fVar30;
  fVar29 = fStack_31c * fVar30;
  local_368 = fVar25;
  fStack_364 = fVar29;
  local_360 = fVar26;
  lVar3 = FUN_14222e2a0(local_328,uVar6,fVar19,fVar21);
  plVar5 = plVar2;
  while (lVar3 != 0) {
    plVar5 = (longlong *)FUN_14222e2a0(plVar5);
    lVar3 = FUN_14222e2a0(plVar5);
  }
  fVar21 = ABS(fVar27);
  if (plVar5 != (longlong *)0x0) {
    pfVar4 = (float *)(**(code **)(*plVar5 + 0x308))(plVar5,&local_378);
    fVar21 = pfVar4[1];
    fVar27 = *pfVar4;
    fVar19 = fVar27 * fVar27 + fVar21 * fVar21;
    if (fVar19 == 1.0) {
      if (pfVar4[2] == 0.0) {
        local_350._0_4_ = (float)*(undefined8 *)pfVar4;
        fVar23 = (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20);
        fVar22 = pfVar4[2];
        fVar28 = (float)local_350;
      }
      else {
LAB_140a6993b:
        fVar23 = fVar21;
        fVar22 = 0.0;
        fVar28 = fVar27;
      }
    }
    else {
      fVar23 = DAT_1468b5d94;
      fVar22 = DAT_1468b5d98;
      fVar28 = DAT_1468b5d90;
      if (1e-08 <= fVar19) {
        auVar24 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
        fVar23 = auVar24._0_4_;
        fVar23 = fVar23 + fVar23 * (0.5 - fVar19 * 0.5 * fVar23 * fVar23);
        fVar23 = fVar23 + fVar23 * (0.5 - fVar19 * 0.5 * fVar23 * fVar23);
        fVar27 = fVar27 * fVar23;
        fVar21 = fVar21 * fVar23;
        goto LAB_140a6993b;
      }
    }
    lVar3 = plVar5[0x2d];
    local_338 = fVar23 * DAT_1464aa7a0;
    local_330 = local_338 - fVar22 * DAT_1464aa798._4_4_;
    local_334 = fVar22 * (float)DAT_1464aa798 - fVar28 * DAT_1464aa7a0;
    local_348 = fVar28 * DAT_1464aa798._4_4_ - fVar23 * (float)DAT_1464aa798;
    local_350 = CONCAT44(local_334,local_330);
    if (lVar3 == 0) {
      local_378 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_370 = DAT_1468b5d98;
    }
    else {
      local_378 = *(ulonglong *)(lVar3 + 0x220);
      local_370 = *(float *)(lVar3 + 0x228);
    }
    if ((fVar20 - (float)(local_378 >> 0x20)) * local_334 +
        (local_308 - (float)local_378) * local_330 + (local_2f8 - local_370) * local_348 <= 0.0) {
      fVar21 = fVar28 * DAT_1464aa7a0 - fVar22 * (float)DAT_1464aa798;
      fVar20 = fVar23 * (float)DAT_1464aa798 - fVar28 * DAT_1464aa798._4_4_;
      uVar13 = (ulonglong)(uint)(fVar22 * DAT_1464aa798._4_4_ - local_338);
    }
    else {
      local_378 = local_350;
      uVar13 = local_350;
      fVar20 = local_348;
      fVar21 = local_334;
      local_370 = local_348;
    }
    fVar25 = fVar25 + (float)uVar13 * 0.5;
    fVar29 = fVar29 + fVar21 * 0.5;
    fVar26 = fVar26 + fVar20 * 0.5;
    fVar27 = local_358;
    fVar21 = (float)local_340;
    local_368 = fVar25;
    fStack_364 = fVar29;
    local_360 = fVar26;
  }
  fVar20 = fVar29 * fVar29 + fVar25 * fVar25 + fVar26 * fVar26;
  if (1e-08 < fVar20) {
    auVar24 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
    fVar19 = auVar24._0_4_;
    fVar19 = fVar19 + fVar19 * (0.5 - fVar20 * 0.5 * fVar19 * fVar19);
    fVar19 = fVar19 + fVar19 * (0.5 - fVar20 * 0.5 * fVar19 * fVar19);
    fVar25 = fVar25 * fVar19;
    fVar29 = fVar29 * fVar19;
    fVar26 = fVar26 * fVar19;
    local_340 = (longlong *)CONCAT44(local_340._4_4_,fVar19);
    local_368 = fVar25;
    fStack_364 = fVar29;
    local_360 = fVar26;
  }
  if (*(char *)(param_1 + 0x7d4) != '\0') {
    fVar25 = fVar25 * fVar31;
    fVar29 = fVar29 * fVar31;
    fVar26 = fVar26 * fVar31;
    local_368 = fVar25;
    fStack_364 = fVar29;
    local_360 = fVar26;
    if ((plVar15 == (longlong *)0x0) || (lVar3 = FUN_1430d7810(plVar15), lVar3 == 0)) {
      if (plVar7 != (longlong *)0x0) {
        fVar31 = *(float *)(param_1 + 0x79c);
        local_370 = fVar31 * fVar26;
        local_378 = CONCAT44(fVar31 * fVar29,fVar31 * fVar25);
        local_348 = local_370;
        (**(code **)(*plVar7 + 0x8a0))(plVar7,&local_378,1);
      }
    }
    else {
      fVar31 = *(float *)(param_1 + 0x798);
      local_370 = fVar31 * fVar26;
      local_378 = CONCAT44(fVar31 * fVar29,fVar25 * fVar31);
      FUN_1426a9420(lVar3,&local_378,0);
    }
  }
  local_388 = 0;
  FUN_140a7aa40(local_2e8,param_3,plVar2,0);
  local_1dc = CONCAT44(fStack_31c,local_320);
  local_1d4 = local_318;
  local_1c8 = local_360;
  lVar3 = *(longlong *)(param_1 + 0x120);
  local_1d0 = CONCAT44(fStack_364,local_368);
  local_340 = param_3;
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  fVar31 = *(float *)(lVar3 + 0x790);
  if (fVar31 != *(float *)(param_1 + 2000)) {
    *(float *)(param_1 + 2000) = fVar31;
    lVar3 = (longlong)*(int *)(param_1 + 0x7c8);
    fVar31 = fVar31 - *(float *)(param_1 + 0x7a0);
    if (*(int *)(param_1 + 0x7c8) != 0) {
      uVar10 = 0;
      pfVar4 = (float *)(*(longlong *)(param_1 + 0x7c0) + 8);
      bVar18 = fVar31 < *pfVar4 || fVar31 == *pfVar4;
      uVar13 = uVar10;
      uVar17 = uVar10;
      do {
        iVar11 = (int)uVar13;
        uVar10 = uVar10 + 1;
        uVar13 = (ulonglong)(iVar11 + 1);
        if ((longlong)uVar10 < lVar3) {
          pfVar4 = (float *)(*(longlong *)(param_1 + 0x7c0) + 8 + uVar10 * 0x10);
          do {
            if (bVar18 != (fVar31 < *pfVar4 || fVar31 == *pfVar4)) break;
            uVar13 = (ulonglong)((int)uVar13 + 1);
            uVar10 = uVar10 + 1;
            pfVar4 = pfVar4 + 4;
          } while ((longlong)uVar10 < lVar3);
        }
        iVar14 = (int)uVar13 - iVar11;
        if (bVar18 != false) {
          iVar16 = (int)uVar17;
          if (iVar16 != iVar11) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar16 * 0x10 + *(longlong *)(param_1 + 0x7c0)),
                       (void *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0x7c0)),
                       (longlong)iVar14 << 4);
          }
          uVar17 = (ulonglong)(uint)(iVar16 + iVar14);
        }
        bVar18 = (bool)(bVar18 ^ 1);
      } while ((longlong)uVar10 < lVar3);
      *(int *)(param_1 + 0x7c8) = (int)uVar17;
      plVar2 = local_328;
      param_3 = local_310;
    }
  }
  plVar5 = (longlong *)(param_1 + 0x7c0);
  puVar8 = (undefined8 *)*plVar5;
  puVar9 = puVar8 + (longlong)*(int *)(param_1 + 0x7c8) * 2;
  for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
    if ((longlong *)*puVar8 == local_340) goto LAB_140a69e92;
  }
  if (fVar27 <= 0.0) {
    uVar6 = UScrollBox::GetPrivateStaticClass();
    plVar7 = (longlong *)(**(code **)(*param_3 + 0x628))(param_3,uVar6);
    if (plVar7 != (longlong *)0x0) {
      fVar21 = (float)(**(code **)(*plVar7 + 0x408))(plVar7);
      fVar21 = fVar21 * 100.0;
      goto LAB_140a69e39;
    }
  }
  fVar31 = (float)FUN_142c98860(param_1 + 0x760,plVar2);
  fVar21 = fVar31 * fVar30 * fVar21;
LAB_140a69e39:
  FUN_142d32ae0(local_2e8,fVar21,0);
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  iVar11 = *(int *)(param_1 + 0x7c8);
  *(int *)(param_1 + 0x7c8) = iVar11 + 1;
  if (*(int *)(param_1 + 0x7cc) < iVar11 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar11);
  }
  puVar8 = (undefined8 *)((longlong)iVar11 * 0x10 + *plVar5);
  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(lVar3 + 0x790);
  *puVar8 = param_3;
LAB_140a69e92:
  if (local_108 != 0) {
    FMemory::Free();
  }
  local_120 = 0;
  local_12c = 0;
  local_134 = 0;
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (local_168 != 0) {
    plVar2 = local_198;
    if (local_178 != (longlong *)0x0) {
      plVar2 = local_178;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a69fb0 FUN_140a69fb0 body=62 status=ok
// SIG undefined FUN_140a69fb0(void)

void FUN_140a69fb0(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    cVar1 = FUN_1414004c0();
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x2411) != '\0')) {
      *(undefined1 *)(param_1 + 0x2411) = 0;
      FUN_1414006e0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140a69ff0 thunk_FUN_140a770f0 body=7 status=ok
// SIG undefined thunk_FUN_140a770f0(void)

void thunk_FUN_140a770f0(undefined8 param_1)

{
  FUN_140a770f0(param_1,1);
  return;
}



// FUNCTION 140a6a000 FUN_140a6a000 body=181 status=ok
// SIG undefined FUN_140a6a000(void)

void FUN_140a6a000(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  bool bVar1;
  longlong lVar2;
  longlong local_res18 [2];
  
  FUN_142cf4ae0();
  if (param_3 != 0) {
    lVar2 = FUN_1412f5c90();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res18[0] = param_3;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                (param_1 + 0x2ed0,local_res18,lVar2 + 0x88,param_4,param_5,param_6,param_7);
      if (*(longlong *)(param_1 + 12000) == 0) {
        *(longlong *)(param_1 + 12000) = param_3;
      }
      if (*(longlong **)(param_1 + 0x2b78) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x2b78) + 3000))();
      }
    }
  }
  return;
}



// FUNCTION 140a6a0c0 FUN_140a6a0c0 body=389 status=ok
// SIG undefined FUN_140a6a0c0(void)

void FUN_140a6a0c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  uint local_res18;
  
  FUN_142cf4ba0();
  if (param_3 != 0) {
    lVar1 = FUN_1412f5c90();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      lVar1 = (longlong)*(int *)(param_1 + 0x2ed8);
      uVar9 = 0;
      if (*(int *)(param_1 + 0x2ed8) != 0) {
        bVar10 = **(longlong **)(param_1 + 0x2ed0) != param_3;
        local_res18 = 0;
        uVar3 = uVar9;
        uVar6 = uVar9;
        uVar8 = uVar9;
        do {
          uVar7 = (uint)uVar8;
          uVar5 = (uint)uVar6;
          uVar3 = uVar3 + 1;
          uVar6 = (ulonglong)(uVar5 + 1);
          if ((longlong)uVar3 < lVar1) {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x2ed0) + uVar3 * 8);
            do {
              if (bVar10 != (*plVar2 != param_3)) break;
              uVar6 = (ulonglong)((int)uVar6 + 1);
              uVar3 = uVar3 + 1;
              plVar2 = plVar2 + 1;
            } while ((longlong)uVar3 < lVar1);
          }
          iVar4 = (int)uVar6 - uVar5;
          if (bVar10 != false) {
            if (uVar7 != uVar5) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x2ed0) + (longlong)(int)uVar7 * 8),
                         (void *)(*(longlong *)(param_1 + 0x2ed0) + (longlong)(int)uVar5 * 8),
                         (longlong)iVar4 << 3);
              uVar7 = local_res18;
            }
            local_res18 = uVar7 + iVar4;
            uVar8 = (ulonglong)local_res18;
          }
          bVar10 = (bool)(bVar10 ^ 1);
        } while ((longlong)uVar3 < lVar1);
        *(int *)(param_1 + 0x2ed8) = (int)uVar8;
      }
      if (*(longlong *)(param_1 + 12000) == param_3) {
        if (0 < *(int *)(param_1 + 0x2ed8)) {
          uVar9 = **(ulonglong **)(param_1 + 0x2ed0);
        }
        *(ulonglong *)(param_1 + 12000) = uVar9;
      }
    }
  }
  return;
}



// FUNCTION 140a6a250 FUN_140a6a250 body=91 status=ok
// SIG undefined FUN_140a6a250(void)

void FUN_140a6a250(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_142cf4c30();
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    lVar2 = *(longlong *)(param_1 + 0x618);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*(longlong *)(param_1 + 0x218) + 0x30))();
    }
    if (*(int *)(lVar2 + 0xb8) != 0) {
      *(float *)(lVar2 + 0xb4) = *(float *)(lVar2 + 0xb4) - *(float *)(param_1 + 0x620);
    }
  }
  return;
}



// FUNCTION 140a6a2b0 FUN_140a6a2b0 body=333 status=ok
// SIG undefined FUN_140a6a2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a6a2b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x4c8);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + 0x168) == 0) {
      local_40 = DAT_1464aa7b0;
      puVar2 = &local_48;
      local_48 = DAT_1464aa7a8;
      lVar3 = 0;
    }
    else {
      puVar2 = (undefined8 *)FUN_142369f10(*(longlong *)(param_1 + 0x168),&local_18);
      lVar3 = *(longlong *)(param_1 + 0x168);
      lVar4 = *(longlong *)(param_1 + 0x4c8);
    }
    local_38 = *puVar2;
    local_30 = *(undefined4 *)(puVar2 + 1);
    lVar1 = *(longlong *)(param_3 + 0x168);
    if (lVar1 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar1 + 0x220);
      local_40 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_20 = local_40;
    local_28 = local_48;
    if (lVar3 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar3 + 0x220);
      local_40 = *(undefined4 *)(lVar3 + 0x228);
    }
    local_18 = local_48;
    local_10 = local_40;
    FUN_140a33c80(lVar4,param_3,&local_18,&local_28,&local_38,*(undefined4 *)(param_1 + 0x498));
  }
  return;
}



// FUNCTION 140a6a400 FUN_140a6a400 body=71 status=ok
// SIG undefined FUN_140a6a400(void)

void FUN_140a6a400(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_142e75af0();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0x454] = lVar2;
  uVar1 = FUN_140604cc0();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0x455] = lVar2;
  return;
}



// FUNCTION 140a6a460 FUN_140a6a460 body=417 status=ok
// SIG undefined FUN_140a6a460(void)

void FUN_140a6a460(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  if (*(char *)(*(longlong *)(param_1 + 0x6f8) + 0x10) == '\0') {
    return;
  }
  plVar2 = (longlong *)FUN_141796df0(*(longlong *)(param_1 + 0x6c8) + 0x90);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1412faf40();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a6a4d2;
  }
  plVar2 = (longlong *)0x0;
LAB_140a6a4d2:
  *(longlong **)(param_1 + 0x6f0) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x290))(plVar2,local_res8);
    if (*plVar2 != 0) {
      lVar4 = AAIControllerGunfire::GetPrivateStaticClass();
      for (lVar3 = *plVar2; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) {
          if (*plVar2 != 0) {
            lVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2a0))
                              (*(longlong **)(param_1 + 0x6f0),param_1);
            if (lVar3 == 0) {
              return;
            }
            plVar2 = *(longlong **)(param_1 + 0x6d8);
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x3b0))(plVar2,1);
              *(undefined8 *)(param_1 + 0x6d8) = 0;
            }
            if (*(longlong *)(param_1 + 0x6e0) != 0) {
              FUN_140a6f840(*(longlong *)(param_1 + 0x6e0),param_1);
              (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x6d0))
                        (*(longlong **)(param_1 + 0x6e0),0);
            }
            *(longlong *)(param_1 + 0x6e0) = lVar3;
            FUN_140a54060(lVar3,param_1);
            return;
          }
          break;
        }
      }
    }
    if (*(longlong *)(param_1 + 0x6e0) != 0) {
      FUN_140a6f840(*(longlong *)(param_1 + 0x6e0),param_1);
      (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x6d0))(*(longlong **)(param_1 + 0x6e0),0);
      *(undefined8 *)(param_1 + 0x6e0) = 0;
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x298))
                      (*(longlong **)(param_1 + 0x6f0),param_1);
    *(undefined8 *)(param_1 + 0x6d8) = uVar5;
    FUN_140a72e00(param_1);
  }
  return;
}



// FUNCTION 140a6a630 FUN_140a6a630 body=284 status=ok
// SIG undefined FUN_140a6a630(void)

void FUN_140a6a630(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  if (param_2 != 0) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a6a68a;
  }
  param_2 = 0;
LAB_140a6a68a:
  param_1[0x471] = param_2;
  if (param_2 != 0) {
    FUN_140c3bd20(param_2,param_1);
    FUN_140e16190(param_1[0x471],param_1,2);
  }
  FUN_1414007a0(param_1);
  *(undefined1 *)((longlong)param_1 + 0x2461) = 1;
  if (param_1[0x470] != 0) {
    uVar3 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar3);
    if ((lVar2 != 0) && (lVar2 = FUN_1430ec580(lVar2,param_1[0x462]), lVar2 != 0)) {
      FUN_1430ec760(lVar2);
    }
    lVar2 = FUN_140a66090(param_1);
    if (lVar2 != 0) {
      FUN_1409a6d70(lVar2);
    }
    if (param_1[0x470] != 0) {
      FUN_1409b7bb0();
    }
  }
  FUN_1409a6b40(param_1[0x471],param_1);
  FUN_140a770f0(param_1,1);
  return;
}



// FUNCTION 140a6a750 FUN_140a6a750 body=323 status=ok
// SIG undefined FUN_140a6a750(void)

void FUN_140a6a750(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    pcVar1 = *(char **)(param_1 + 0x23a8);
    pcVar2 = pcVar1 + *(int *)(param_1 + 0x23b0);
    for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 1) {
      if (*pcVar1 == '\x04') goto LAB_140a6a7d6;
    }
    if (*(longlong *)(param_1 + 0x908) != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146866d58) &&
         (_Init_thread_header(&DAT_146866d58), DAT_146866d58 == -1)) {
        FName::FName(&DAT_146866d50,L"IronBear",1);
        _Init_thread_footer(&DAT_146866d58);
      }
      FUN_142ddcd30(*(undefined8 *)(param_1 + 0x908),1,DAT_146866d50);
    }
LAB_140a6a7d6:
    if (*(char *)(param_1 + 0x2413) != '\0') {
      FUN_141400860(param_1,param_3);
    }
    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x2388) != 0) {
      FUN_140c3bd20(*(longlong *)(param_1 + 0x2388),0);
      FUN_140e33f60(*(undefined8 *)(param_1 + 0x2388),param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x2388);
    }
    FUN_1409a6b70(uVar3,param_1);
    *(undefined8 *)(param_1 + 0x2388) = 0;
    if ((*(char *)(param_1 + 0x2413) == '\0') && (*(longlong *)(param_1 + 0x2380) != 0)) {
      thunk_FUN_1409add40();
    }
    *(undefined8 *)(param_1 + 0x2380) = 0;
  }
  return;
}



// FUNCTION 140a6a8a0 FUN_140a6a8a0 body=141 status=ok
// SIG undefined FUN_140a6a8a0(void)

void FUN_140a6a8a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return;
  }
  if (*(char *)(param_3 + 0x30) != '\x02') {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
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
    if (bVar1) {
      lVar3 = *(longlong *)(lVar3 + 0x2c70);
      goto LAB_140a6a90a;
    }
  }
  lVar3 = 0;
LAB_140a6a90a:
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xaf0) != '\0')) {
    FUN_140a68ad0(param_1,4);
  }
  return;
}



// FUNCTION 140a6a930 FUN_140a6a930 body=657 status=ok
// SIG undefined FUN_140a6a930(void)

void FUN_140a6a930(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res8 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 == 0) {
LAB_140a6a999:
    lVar4 = 0;
  }
  else {
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
    if (!bVar2) goto LAB_140a6a999;
    lVar4 = *(longlong *)(lVar4 + 0x2c70);
  }
  if (lVar4 != 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar4 + 0x980) + 0x10))();
    if (lVar3 != 0) {
      FUN_1414d9130();
    }
    if (*(char *)(lVar4 + 0xaf0) == '\0') {
      return;
    }
  }
  if (param_3 == 0) {
    return;
  }
  if (*(char *)(param_3 + 0x30) != '\x02') {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_1 + 0x800) == 0) && (*(longlong *)(param_1 + 0x7f8) != 0)) &&
     ((*(longlong *)(param_1 + 0x120) != 0 || (lVar4 = FUN_1423407b0(param_1), lVar4 != 0)))) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    lVar4 = FUN_1428cc4e0(lVar4);
    if (lVar4 != 0) {
      uVar5 = FUN_142d7ea80(lVar4,*(undefined8 *)(param_1 + 0x7f8));
      *(undefined8 *)(param_1 + 0x800) = uVar5;
    }
  }
  if (param_6 == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + 0x828);
  }
  else {
    if (param_6 != '\x02') {
      *(undefined4 *)(param_1 + 0x838) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x83c) = 0;
      goto LAB_140a6aa88;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x830);
  }
  FWeakObjectPtr::operator=(param_1 + 0x838,uVar5);
LAB_140a6aa88:
  if (*(longlong *)(param_1 + 0x820) != 0) {
    FUN_142d9e0d0(*(longlong *)(param_1 + 0x820),*(undefined8 *)(param_1 + 0x7f0),0,
                  0x4110000041800000,*(undefined4 *)(param_1 + 0x7cc),6,1,1,DAT_146866c00,0,0,1,0);
    FUN_140a77220(param_1);
  }
  TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
  ::FindId(param_2 + 0x50,local_res8,param_5);
  if ((((local_res8[0] == -1) ||
       (lVar4 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x50), lVar4 == 0)) ||
      (plVar1 = (longlong *)(lVar4 + 0x10), plVar1 == (longlong *)0x0)) ||
     ((*plVar1 == 0 || (*(longlong *)(param_1 + 0x800) == 0)))) {
    if (*(longlong *)(param_1 + 0x820) != 0) {
      FUN_142e724b0(*(longlong *)(param_1 + 0x820),*(undefined8 *)(param_1 + 0x7f0),DAT_146866c00,0)
      ;
    }
  }
  else {
    FUN_140a68ad0(param_1,2);
    FUN_142aab3c0(*(undefined8 *)(param_1 + 0x800),*plVar1);
    FUN_142aac680(*(undefined8 *)(param_1 + 0x800),*(int *)(param_2 + 0xa0) == 1);
    FUN_142aab520(*(undefined8 *)(param_1 + 0x800));
  }
  return;
}



// FUNCTION 140a6abd0 FUN_140a6abd0 body=162 status=ok
// SIG undefined FUN_140a6abd0(void)

void FUN_140a6abd0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x2470) == '\0')) &&
     (*(longlong *)(param_1 + 0x2380) != 0)) {
    uVar4 = FUN_1414002a0(param_1);
    lVar1 = *(longlong *)(param_1 + 0x2380);
    local_38 = *(undefined4 *)(lVar1 + 0x1c0);
    uStack_34 = *(undefined4 *)(lVar1 + 0x1c4);
    uStack_30 = *(undefined4 *)(lVar1 + 0x1c8);
    uStack_2c = *(undefined4 *)(lVar1 + 0x1cc);
    local_28 = *(undefined8 *)(lVar1 + 0x1d0);
    thunk_FUN_1409add40();
    cVar3 = FUN_142d52a00(&local_38);
    if (cVar3 != '\0') {
      uVar2 = FUN_142d52a20(&local_38);
      uVar2 = FArchive::operator<<(uVar2);
      FUN_142d6c750(uVar2,uVar4,0x3f800000);
    }
  }
  return;
}



// FUNCTION 140a6ac90 thunk_FUN_140a6aca0 body=5 status=ok
// SIG undefined thunk_FUN_140a6aca0(void)

void thunk_FUN_140a6aca0(longlong param_1)

{
  char cVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x910) == 0) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = (float)FUN_142d199e0();
  }
  cVar1 = *(char *)(param_1 + 0x2410);
  if (fVar2 <= 0.7) {
    if (fVar2 <= 0.5) {
      if (fVar2 <= 0.3) {
        if (cVar1 == '\x03') goto LAB_140a6ad28;
        *(undefined1 *)(param_1 + 0x2410) = 3;
      }
      else {
        if (cVar1 == '\x02') goto LAB_140a6ad28;
        *(undefined1 *)(param_1 + 0x2410) = 2;
      }
    }
    else {
      if (cVar1 == '\x01') goto LAB_140a6ad28;
      *(undefined1 *)(param_1 + 0x2410) = 1;
    }
  }
  else {
    if (cVar1 == '\0') goto LAB_140a6ad28;
    *(undefined1 *)(param_1 + 0x2410) = 0;
  }
  FUN_141400760(param_1);
LAB_140a6ad28:
  if (fVar2 == 0.0) {
    FUN_141400260(param_1,3);
  }
  return;
}



// FUNCTION 140a6aca0 FUN_140a6aca0 body=165 status=ok
// SIG undefined FUN_140a6aca0(void)

void FUN_140a6aca0(longlong param_1)

{
  char cVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x910) == 0) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = (float)FUN_142d199e0();
  }
  cVar1 = *(char *)(param_1 + 0x2410);
  if (fVar2 <= 0.7) {
    if (fVar2 <= 0.5) {
      if (fVar2 <= 0.3) {
        if (cVar1 == '\x03') goto LAB_140a6ad28;
        *(undefined1 *)(param_1 + 0x2410) = 3;
      }
      else {
        if (cVar1 == '\x02') goto LAB_140a6ad28;
        *(undefined1 *)(param_1 + 0x2410) = 2;
      }
    }
    else {
      if (cVar1 == '\x01') goto LAB_140a6ad28;
      *(undefined1 *)(param_1 + 0x2410) = 1;
    }
  }
  else {
    if (cVar1 == '\0') goto LAB_140a6ad28;
    *(undefined1 *)(param_1 + 0x2410) = 0;
  }
  FUN_141400760(param_1);
LAB_140a6ad28:
  if (fVar2 == 0.0) {
    FUN_141400260(param_1,3);
  }
  return;
}



// FUNCTION 140a6ad50 FUN_140a6ad50 body=332 status=ok
// SIG undefined FUN_140a6ad50(void)

void FUN_140a6ad50(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 local_res10;
  code *local_18;
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    lVar4 = FUN_1413b9340();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_2 + 0x568) == 0)) {
      uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
      local_18 = FUN_140a70530;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ACrewQuartersGunRack::SaveSlot",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      FUN_1407260e0(param_2 + 0x728,param_1,&local_18,local_res10);
      return;
    }
  }
  if (param_3 != 0) {
    lVar4 = FUN_1413b9490();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a6ae82;
  }
  param_3 = 0;
LAB_140a6ae82:
  FUN_140a70530(param_1,param_3);
  return;
}



// FUNCTION 140a6aea0 FUN_140a6aea0 body=84 status=ok
// SIG undefined FUN_140a6aea0(void)

void FUN_140a6aea0(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_142cc8d60();
  cVar1 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar1 != '\0') {
    pcVar2 = (char *)param_1[0x475];
    pcVar3 = pcVar2 + (int)param_1[0x476];
    if (pcVar2 != pcVar3) {
      while (*pcVar2 != '\x01') {
        pcVar2 = pcVar2 + 1;
        if (pcVar2 == pcVar3) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 0x48a) = 1;
    }
  }
  return;
}



// FUNCTION 140a6af00 FUN_140a6af00 body=214 status=ok
// SIG undefined FUN_140a6af00(void)

void FUN_140a6af00(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  
  FUN_142fab9d0();
  bVar1 = *(byte *)(param_1 + 0x49);
  if (bVar1 != 3) {
    (**(code **)(*param_1 + 0x260))(param_1);
    bVar1 = *(byte *)(param_1 + 0x49);
    *(undefined1 *)(param_1 + 0x578) = 0;
    *(undefined1 *)(param_1 + 0x579) = 0;
  }
  if (1 < bVar1) {
    if (bVar1 == 3) {
      iVar2 = FUN_14233f450(param_1);
      if (iVar2 < 2) {
        return;
      }
      if (0.0 < *(float *)((longlong)param_1 + 0x2ba4)) {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x2894) == '\0') {
        return;
      }
      if ((char)param_1[0x575] != '\x01') {
        (**(code **)(*param_1 + 0x260))(param_1);
      }
      *(undefined1 *)(param_1 + 0x575) = 1;
      FUN_140a775d0(param_1);
      return;
    }
    if (bVar1 < 4) {
      return;
    }
    if (6 < bVar1) {
      return;
    }
  }
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 < 2) {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x2baa) = 0;
  if ((char)param_1[0x575] != '\0') {
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  *(undefined1 *)(param_1 + 0x575) = 0;
  FUN_140a775d0(param_1);
  return;
}



// FUNCTION 140a6afe0 FUN_140a6afe0 body=171 status=ok
// SIG undefined FUN_140a6afe0(void)

void FUN_140a6afe0(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0xe78);
  if (lVar6 != 0) {
    lVar5 = *(longlong *)(lVar6 + 0x678);
    lVar6 = (longlong)*(int *)(lVar6 + 0x680) * 0x78 + lVar5;
    if (lVar5 != lVar6) {
      lVar7 = lVar5 + 0x60;
      do {
        cVar2 = FUN_142d52a00(lVar7);
        if (cVar2 != '\0') {
          uVar3 = FUN_142d52a20(lVar7);
          lVar4 = FArchive::operator<<(uVar3);
          uVar1 = *(undefined4 *)(lVar4 + 0x20);
          uVar3 = FUN_142d52a20(lVar7);
          uVar3 = FArchive::operator<<(uVar3);
          FUN_142d6f560(uVar3,uVar1,1);
        }
        lVar5 = lVar5 + 0x78;
        lVar7 = lVar7 + 0x78;
      } while (lVar5 != lVar6);
    }
  }
  return;
}



// FUNCTION 140a6b090 FUN_140a6b090 body=88 status=ok
// SIG undefined FUN_140a6b090(void)

undefined8 FUN_140a6b090(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = 0;
  if (local_18 != 0) {
    local_10 = param_2[1];
  }
  cVar1 = FUN_142cc9470(param_1,&local_18);
  if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x68) != 0)) &&
     (*(longlong *)(param_1 + 0x70) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))(*(longlong **)(param_1 + 0x70),param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 140a6b0f0 BeginDestroy body=35 status=ok
// SIG undefined BeginDestroy(void)

void UPawnAction_Move::BeginDestroy(undefined8 param_1)

{
  FUN_140c4e300();
  FUN_140a66930(param_1);
  FUN_140a76810(param_1);
  return;
}



// FUNCTION 140a6b130 FUN_140a6b130 body=73 status=ok
// SIG undefined FUN_140a6b130(void)

void FUN_140a6b130(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140a57a50();
  lVar1 = *(longlong *)(param_1 + 0x698);
  if (lVar1 != 0) {
    lVar2 = 0;
    if (*(longlong *)(lVar1 + 0x508) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x508) + 0x2c70);
    }
    if (lVar2 != 0) {
      FUN_140a6de60(lVar1,lVar2 + 0x1918);
      return;
    }
  }
  return;
}



// FUNCTION 140a6b1a0 FUN_140a6b1a0 body=468 status=ok
// SIG undefined FUN_140a6b1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a6b1a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  if (((*(byte *)((longlong)param_1 + 0x94) & 0x18) == 0x10) &&
     (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) {
    local_98 = FUN_140a57650;
    uStack_90 = 0;
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_70 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    FUN_142880af0(uVar3,&local_88);
    if (local_28 != 0) {
      plVar4 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar4 = local_38;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 140a6b380 FUN_140a6b380 body=75 status=ok
// SIG undefined FUN_140a6b380(void)

void FUN_140a6b380(longlong param_1)

{
  FUN_140c4e390();
  if ((*(char *)(param_1 + 0x2470) == '\0') && (*(longlong *)(param_1 + 0x150) != 0)) {
    FUN_14269dad0(*(longlong *)(param_1 + 0x150),param_1);
    FUN_14269dad0(param_1,*(undefined8 *)(param_1 + 0x150));
  }
  FUN_142d2ad60(*(undefined8 *)(param_1 + 0x2438));
  return;
}



// FUNCTION 140a6b3d0 FUN_140a6b3d0 body=173 status=ok
// SIG undefined FUN_140a6b3d0(void)

void FUN_140a6b3d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_140c4e390();
  if ((*(char *)(param_1 + 0x2470) == '\0') && (*(longlong *)(param_1 + 0x150) != 0)) {
    FUN_14269dad0(*(longlong *)(param_1 + 0x150),param_1);
    FUN_14269dad0(param_1,*(undefined8 *)(param_1 + 0x150));
  }
  FUN_142d2ad60(*(undefined8 *)(param_1 + 0x2438));
  lVar1 = *(longlong *)(param_1 + 0x150);
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
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar1 + 0x2c50,param_1);
    }
  }
  FUN_140a72970(param_1);
  return;
}



// FUNCTION 140a6b480 FUN_140a6b480 body=134 status=ok
// SIG undefined FUN_140a6b480(void)

void FUN_140a6b480(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar3 != 0)) {
    lVar2 = FUN_1412fa9e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a6b4e2;
  }
  lVar3 = 0;
LAB_140a6b4e2:
  if (lVar3 != *(longlong *)(param_1 + 0x460)) {
    (**(code **)(*(longlong *)(param_1 + 0x458) + 0x18))((longlong *)(param_1 + 0x458),lVar3);
  }
  return;
}



// FUNCTION 140a6b510 FUN_140a6b510 body=31 status=ok
// SIG undefined FUN_140a6b510(void)

void FUN_140a6b510(longlong param_1)

{
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x520,local_res8);
  return;
}



// FUNCTION 140a6b530 FUN_140a6b530 body=138 status=ok
// SIG undefined FUN_140a6b530(void)

void FUN_140a6b530(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x698);
  if (lVar2 != 0) {
    plVar5 = (longlong *)(lVar2 + 0x510);
    plVar3 = (longlong *)*plVar5;
    iVar1 = *(int *)(lVar2 + 0x518);
    for (plVar4 = plVar3; plVar4 != plVar3 + iVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_1) {
        if ((int)((longlong)plVar4 - (longlong)plVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(lVar2 + 0x518) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x51c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
    }
    *(longlong *)((longlong)iVar1 * 8 + *plVar5) = param_1;
  }
  return;
}



// FUNCTION 140a6b5c0 FUN_140a6b5c0 body=43 status=ok
// SIG undefined FUN_140a6b5c0(void)

void FUN_140a6b5c0(longlong param_1)

{
  float local_res8 [8];
  
  local_res8[0] = (float)*(int *)(param_1 + 0x558);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x540,local_res8);
  return;
}



// FUNCTION 140a6b6a0 FUN_140a6b6a0 body=430 status=ok
// SIG undefined FUN_140a6b6a0(void)

void FUN_140a6b6a0(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  undefined1 local_28 [12];
  undefined1 local_1c [20];
  
  piVar8 = *(int **)(param_1 + 0x560);
  piVar2 = piVar8 + (longlong)*(int *)(param_1 + 0x568) * 0x10;
  if (piVar8 != piVar2) {
    while (*piVar8 != param_4) {
      piVar8 = piVar8 + 0x10;
      if (piVar8 == piVar2) {
        return;
      }
    }
    if ((piVar8[0xe] != 0) && (plVar1 = *(longlong **)(piVar8 + 0xc), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(piVar8 + 0xc) != 0) {
        uVar3 = FMemory::Realloc(*(longlong *)(piVar8 + 0xc),0,0);
        *(undefined8 *)(piVar8 + 0xc) = uVar3;
      }
      piVar8[0xe] = 0;
    }
    pbVar7 = *(byte **)(param_3 + 0x100);
    pbVar6 = pbVar7 + (longlong)*(int *)(param_3 + 0x108) * 0x90;
    for (; pbVar7 != pbVar6; pbVar7 = pbVar7 + 0x90) {
      if (((*pbVar7 & 1) != 0) && ((*pbVar7 & 2) == 0)) {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x428))
                          (*(longlong **)(param_1 + 0x480),local_28,*(undefined8 *)(piVar8 + 8));
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x428))
                          (*(longlong **)(param_1 + 0x480),local_1c,*(undefined8 *)(piVar8 + 6));
        fVar9 = (((*(float *)(lVar4 + 8) + *(float *)(lVar5 + 8)) * 0.5 - *(float *)(pbVar7 + 0x1c))
                - *(float *)(param_1 + 0x4ac)) / *(float *)(param_1 + 0x4b0);
        if (-1.0 <= fVar9) {
          if (1.0 <= fVar9) {
            fVar9 = 1.0;
          }
          fVar10 = -1.0;
          if (fVar9 < -1.0) goto LAB_140a6b7f3;
        }
        else {
          fVar9 = -1.0;
        }
        fVar10 = fVar9;
        if (1.0 <= fVar9) {
          fVar10 = 1.0;
        }
LAB_140a6b7f3:
        fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
        fVar10 = fVar10 * 57.295776;
        fVar9 = *(float *)(param_1 + 0x458);
        if ((*(float *)(param_1 + 0x458) <= fVar10) &&
           (fVar9 = *(float *)(param_1 + 0x45c), fVar10 <= *(float *)(param_1 + 0x45c))) {
          fVar9 = fVar10;
        }
        if (*piVar8 != 0) {
          fVar9 = -fVar9;
        }
        *(float *)(*(longlong *)(param_1 + 0x4b8) + (longlong)*piVar8 * 4) = fVar9;
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a6b850 HandleOnValueChangedY body=32 status=ok
// SIG undefined HandleOnValueChangedY(void)

void USynth2DSlider::HandleOnValueChangedY(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x460,local_res10);
  return;
}



// FUNCTION 140a6b870 FUN_140a6b870 body=631 status=ok
// SIG undefined FUN_140a6b870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a6b870(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  float local_c8 [2];
  longlong local_c0;
  undefined8 local_b8;
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
  iVar1 = (int)((float)(int)param_1[0xab] - *(float *)(param_1 + 0xa0));
  *(int *)(param_1 + 0xab) = iVar1;
  if (0.0001 < (float)iVar1) {
    local_c0 = 0;
    local_b8 = 0;
    (**(code **)(*param_1 + 0x708))(param_1,&local_c0);
    if ((int)local_b8 < 1) {
      if (((char)param_1[0x25] == '\x03') && (param_1[0xa1] == param_1[0xac])) {
        FUN_140a67790(param_1,param_1[0xac],param_1[0xad]);
      }
    }
    else {
      local_c8[0] = (float)(int)param_1[0xab];
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0xa8,local_c8);
      lVar5 = param_1[0xa0];
      uVar2 = AActor::GetWorldTimerManager(param_1);
      plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        plVar3[2] = (longlong)FUN_140a6b870;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[4] = lVar4;
        *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_d0 = 0xbf800000;
      local_d8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar2,param_1 + 0xaa,&local_a8,(int)lVar5);
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
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar5 = FMemory::Realloc(plVar3,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
    }
    if (local_c0 != 0) {
      FMemory::Free();
    }
  }
  else if (((char)param_1[0x25] == '\x03') && (param_1[0xa1] == param_1[0xac])) {
    FUN_140a67790(param_1,param_1[0xac],param_1[0xad]);
  }
  return;
}



// FUNCTION 140a6baf0 HandleOnBeginSliderMovement body=14 status=ok
// SIG undefined HandleOnBeginSliderMovement(void)

void USpinBox::HandleOnBeginSliderMovement(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x470,0);
  return;
}



// FUNCTION 140a6bb00 FUN_140a6bb00 body=226 status=ok
// SIG undefined FUN_140a6bb00(void)

void FUN_140a6bb00(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res10;
  code *local_18;
  ulonglong uStack_10;
  
  if (param_2 != 0) {
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_140a6bb00;
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&UOakCharacterMovementComponent::OnSlidingImpactParticleSystemFinished",
                        L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    FUN_140a4d850(param_2 + 0x8a8,param_1,&local_18,local_res10);
    FUN_140a6f6f0(param_1 + 0x2bd0,param_2);
    FUN_140a6f6f0(param_1 + 0x2cb8,param_2);
    FUN_140a6f6f0(param_1 + 0x2da0,param_2);
  }
  return;
}



// FUNCTION 140a6bbf0 FUN_140a6bbf0 body=624 status=ok
// SIG undefined FUN_140a6bbf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a6bbf0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  (**(code **)(*param_1 + 0x260))(param_1);
  lVar10 = param_1[0x525];
  *(undefined1 *)(param_1 + 0x578) = 0;
  *(undefined1 *)(param_1 + 0x579) = 0;
  if (lVar10 != 0) {
    if (*(longlong *)(lVar10 + 0x38) != 0) {
      lVar3 = FUN_142e07420();
      lVar10 = *(longlong *)(lVar10 + 0x38);
      for (lVar7 = lVar10; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar3) goto LAB_140a6bc60;
      }
    }
    lVar10 = 0;
LAB_140a6bc60:
    if (param_2 != 0) {
      lVar3 = FUN_142e07420();
      lVar7 = param_2;
      do {
        lVar4 = param_2;
        if (lVar7 == lVar3) goto LAB_140a6bc84;
        lVar7 = *(longlong *)(lVar7 + 0x30);
      } while (lVar7 != 0);
    }
    lVar4 = 0;
LAB_140a6bc84:
    if (lVar10 == lVar4) {
      local_38 = *(undefined8 *)((longlong)param_1 + 0x2934);
      local_30 = *(undefined4 *)((longlong)param_1 + 0x293c);
      FUN_142cffac0(param_1,1,&local_38);
      param_1[0x5d1] = _DAT_1468b5d90;
      *(undefined4 *)(param_1 + 0x5d2) = DAT_1468b5d98;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x560,0)
      ;
      if ((longlong *)param_1[0x56f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x56f] + 0xba8))();
      }
    }
  }
  lVar10 = param_1[0x52f];
  if (lVar10 == 0) {
    return;
  }
  iVar11 = -1;
  iVar9 = iVar11;
  if (param_2 != 0) {
    lVar3 = FUN_142e07420();
    lVar7 = param_2;
    do {
      if (lVar7 == lVar3) {
        iVar8 = 0;
        if (0 < *(int *)(lVar10 + 0x38)) {
          lVar7 = 0;
          goto LAB_140a6bd52;
        }
        break;
      }
      lVar7 = *(longlong *)(lVar7 + 0x30);
    } while (lVar7 != 0);
  }
  goto LAB_140a6bdb1;
  while( true ) {
    iVar8 = iVar8 + 1;
    lVar7 = lVar7 + 0x28;
    iVar9 = iVar11;
    if (*(int *)(lVar10 + 0x38) <= iVar8) break;
LAB_140a6bd52:
    lVar3 = *(longlong *)(lVar10 + 0x30);
    if (*(longlong *)(lVar3 + 8 + lVar7) != 0) {
      lVar5 = FUN_142e07420();
      lVar3 = *(longlong *)(lVar3 + 8 + lVar7);
      for (lVar4 = lVar3; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar5) goto LAB_140a6bd80;
      }
    }
    lVar3 = 0;
LAB_140a6bd80:
    lVar5 = FUN_142e07420();
    lVar4 = param_2;
    do {
      lVar6 = param_2;
      if (lVar4 == lVar5) goto LAB_140a6bd9d;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
    lVar6 = 0;
LAB_140a6bd9d:
    iVar9 = iVar8;
    if (lVar3 == lVar6) break;
  }
LAB_140a6bdb1:
  *(int *)((longlong)param_1 + 0x2ac4) = iVar9;
  if (((-1 < iVar9) && (iVar9 < *(int *)(param_1[0x52f] + 0x38))) &&
     (lVar10 = *(longlong *)(param_1[0x52f] + 0x30) + (longlong)iVar9 * 0x28, lVar10 != 0)) {
    FUN_142d07370(param_1);
    *(undefined1 *)(param_1 + 0x559) = 0;
    FUN_142cfaa20(param_1,local_28,*(undefined8 *)(lVar10 + 0x10));
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x564,0);
  }
  return;
}



// FUNCTION 140a6be60 FUN_140a6be60 body=379 status=ok
// SIG undefined FUN_140a6be60(void)

void FUN_140a6be60(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong local_18;
  undefined8 local_10;
  
  if (param_1[0x21c] != 0) {
    if (((char)param_1[0x25] == '\x03') && (lVar3 = param_1[0x138], lVar3 != 0)) {
      lVar2 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar2 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          FUN_140d12c50(lVar3,0,CONCAT71((int7)((ulonglong)(lVar2 + 0x88) >> 8),1));
        }
      }
    }
    bVar5 = false;
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x140), lVar3 != 0)) {
      lVar2 = FUN_141425c60();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(char *)(lVar3 + 0x5e8) != '\0')) {
        local_18 = 0;
        local_10 = 0;
        uVar4 = FUN_1414ba840();
        AActor::GetOverlappingActors(param_1,&local_18,uVar4);
        bVar5 = 0 < (int)local_10;
        if (local_18 != 0) {
          FMemory::Free();
        }
      }
    }
    FUN_140ad0d20(param_1[0x21c],bVar5);
  }
  return;
}



// FUNCTION 140a6bfe0 FUN_140a6bfe0 body=74 status=ok
// SIG undefined FUN_140a6bfe0(void)

void FUN_140a6bfe0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_142cf6d90();
  if (*(longlong *)(param_1 + 0x2b78) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2b78) + 0xd88);
    (**(code **)(*plVar1 + 0x100))(plVar1,DAT_146866bf0,0xffffffff,1,0,0);
  }
  return;
}



// FUNCTION 140a6c030 FUN_140a6c030 body=597 status=ok
// SIG undefined FUN_140a6c030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a6c030(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 local_res8 [4];
  undefined4 uStackX_c;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar7 = param_1[0x525];
  lVar8 = 0;
  if (lVar7 != 0) {
    lVar6 = lVar8;
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      lVar3 = FUN_142e07420();
      for (lVar5 = *(longlong *)(lVar7 + 0x38);
          (lVar6 = lVar8, lVar5 != 0 && (lVar6 = *(longlong *)(lVar7 + 0x38), lVar5 != lVar3));
          lVar5 = *(longlong *)(lVar5 + 0x30)) {
      }
    }
    lVar7 = lVar8;
    if (param_2 != 0) {
      lVar3 = FUN_142e07420();
      lVar5 = param_2;
      do {
        lVar7 = param_2;
        if (lVar5 == lVar3) break;
        lVar5 = *(longlong *)(lVar5 + 0x30);
        lVar7 = lVar8;
      } while (lVar5 != 0);
    }
    if (lVar6 == lVar7) {
      local_a8 = _DAT_1468b5d90;
      uStack_a0 = DAT_1468b5d98;
      FUN_142cffac0(param_1,0,&local_a8);
      *(undefined1 *)((longlong)param_1 + 0x2e94) = 0;
      cVar1 = FUN_142cf3980(param_1);
      if (cVar1 != '\0') {
        *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) & 0xfffffff7;
        iVar2 = FUN_14233f450(param_1);
        if (((iVar2 == 2) && (*(longlong *)(param_3 + 8) == 0)) &&
           (*(char *)((longlong)param_1 + 0x2baa) == '\0')) {
          (**(code **)(*param_1 + 0xa98))(param_1);
          local_38 = 0;
          local_28 = 0;
          puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_58);
          if (puVar4 != (undefined8 *)0x0) {
            puVar4[1] = param_1;
            *puVar4 = &PTR_FUN_143f77b70;
          }
          local_68[0] = &LAB_140a5a510;
          FUN_14234b4d0(param_1,local_68);
        }
      }
      FUN_140a6f9c0(param_1 + 0x57a);
      FUN_140a6f9c0(param_1 + 0x597);
      if (param_3[1] == '\0') {
        local_a8 = 0;
      }
      else {
        local_a8 = *(undefined8 *)(param_3 + 8);
      }
      local_98 = *(undefined4 *)(param_3 + 0x18);
      uStack_80 = (undefined4)*(undefined8 *)(param_3 + 0x10);
      uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
      local_78 = CONCAT44(uStack_94,local_98);
      local_88 = (undefined4)local_a8;
      uStack_84 = local_a8._4_4_;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x562,&local_88);
      if ((longlong *)param_1[0x56f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x56f] + 0xbb0))();
      }
    }
  }
  if (*(int *)((longlong)param_1 + 0x2ac4) != -1) {
    if ((param_1[0x52f] != 0) && ((char)param_1[0x559] == '\0')) {
      FUN_140a73100(param_1);
    }
    _local_res8 = CONCAT71(stack0x00000009,*param_3);
    iVar2 = FUN_14233f450(param_1);
    if (iVar2 < 2) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((longlong)param_1 + 0x2acc);
    }
    _local_res8 = CONCAT44(uVar9,local_res8);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x566,local_res8);
    *(undefined4 *)((longlong)param_1 + 0x2ac4) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x2acc) = 0;
  }
  return;
}



// FUNCTION 140a6c290 FUN_140a6c290 body=117 status=ok
// SIG undefined FUN_140a6c290(void)

void FUN_140a6c290(longlong param_1)

{
  longlong *plVar1;
  
  FUN_142cf70c0();
  *(uint *)(param_1 + 0x2ac0) = *(uint *)(param_1 + 0x2ac0) & 0xffffffef;
  *(undefined1 *)(param_1 + 0x2ba0) = 0;
  if (*(longlong *)(param_1 + 0x2b78) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2b78) + 0xd88);
    (**(code **)(*plVar1 + 0x108))(plVar1,DAT_146866bf0,0xff,0);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2b78) + 0xd88);
                    /* WARNING: Could not recover jumptable at 0x000140a6c2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x80))(plVar1,DAT_146866bf0,0);
    return;
  }
  return;
}



// FUNCTION 140a6c310 FUN_140a6c310 body=55 status=ok
// SIG undefined FUN_140a6c310(void)

void FUN_140a6c310(longlong param_1)

{
  FUN_142cf71f0();
  FUN_140a6f9c0(param_1 + 0x2bd0);
  FUN_140a6f9c0(param_1 + 0x2cb8);
  FUN_140a6f9c0(param_1 + 0x2da0);
  return;
}



// FUNCTION 140a6c350 FUN_140a6c350 body=215 status=ok
// SIG undefined FUN_140a6c350(void)

void FUN_140a6c350(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if ((char)param_2[2] == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x6e0);
    if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x558))) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2 + 0x550,0);
    }
    if (*(longlong **)(param_1 + 0x6f0) != (longlong *)0x0) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b0))();
      if (lVar2 != 0) {
        *(longlong *)(param_1 + 0x6d0) = lVar2;
        FUN_140a568c0(param_1,0);
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x280))();
        FUN_140a72e40(param_1,uVar4);
      }
    }
    lVar2 = *param_2;
    if (lVar2 != 0) {
      lVar3 = FUN_14145f370();
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
        FUN_1412fc870(param_1,lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140a6c430 FUN_140a6c430 body=125 status=ok
// SIG undefined FUN_140a6c430(void)

void FUN_140a6c430(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x568))) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar1 + 0x560,0);
  }
  if (*(longlong **)(param_1 + 0x6f0) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b8))();
    if (lVar1 != 0) {
      *(longlong *)(param_1 + 0x6d0) = lVar1;
      FUN_140a568c0(param_1,0);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x280))();
      FUN_140a72e40(param_1,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140a6c4b0 FUN_140a6c4b0 body=415 status=ok
// SIG undefined FUN_140a6c4b0(void)

void FUN_140a6c4b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar9;
  
  lVar5 = FUN_142ceeb40(param_1,0);
  if ((lVar5 != 0) && (plVar6 = (longlong *)FUN_142ceefb0(param_1,lVar5), plVar6 != (longlong *)0x0)
     ) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (cVar3 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar3 != '\0')) &&
       (lVar7 = plVar6[0xa5], lVar7 != 0)) {
      lVar8 = FUN_142fd5420();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        piVar10 = (int *)(param_1 + 0x678);
        uVar11 = 0;
        uVar9 = uVar11;
        do {
          if (*piVar10 == *(int *)(lVar5 + 0xc)) {
            cVar3 = *(char *)(param_1 + 0x67c + uVar9 * 8);
            if (cVar3 != '\0') {
              plVar6[0x287] = 0;
              if (cVar3 == '\x01') {
                uVar11 = param_2[2];
              }
              else if (cVar3 == '\x02') {
                plVar6[0x287] = param_2[3];
                uVar11 = param_2[3];
              }
              else if (cVar3 == '\x03') {
                uVar11 = param_2[4];
              }
              if (uVar11 != 0) {
                FUN_142fcd410(lVar7,uVar11,0xbf800000,1,1);
              }
            }
            break;
          }
          uVar4 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar4;
          piVar10 = piVar10 + 2;
        } while (uVar4 < 2);
      }
    }
  }
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x628) = *param_2;
  *(undefined8 *)(param_1 + 0x630) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x638) = param_2[2];
  *(undefined8 *)(param_1 + 0x640) = uVar1;
  *(undefined8 *)(param_1 + 0x648) = param_2[4];
  return;
}



// FUNCTION 140a6c650 FUN_140a6c650 body=195 status=ok
// SIG undefined FUN_140a6c650(void)

void FUN_140a6c650(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_142cf72a0();
  FUN_140a56940(param_1,param_2,2);
  FUN_140a56d70(param_1,param_2,2);
  if ((*(byte *)(param_1 + 0x620) & 1) != 0) {
    FUN_140a70f70(param_1,0,param_2);
  }
  if (param_2 != 0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a6c6d4;
  }
  param_2 = 0;
LAB_140a6c6d4:
  if ((*(uint *)(param_1 + 0x620) & 0x1000) != 0) {
    if (param_2 == 0) {
      return;
    }
    (**(code **)(*(longlong *)(param_2 + 0xd88) + 0x60))
              ((longlong *)(param_2 + 0xd88),0,*(undefined8 *)(param_1 + 0x18));
  }
  if (param_2 != 0) {
    FUN_140c520b0(param_2,param_1);
  }
  return;
}



// FUNCTION 140a6c720 FUN_140a6c720 body=342 status=ok
// SIG undefined FUN_140a6c720(void)

void FUN_140a6c720(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_142cf7310();
  if (param_2 != 0) {
    uVar2 = FUN_1430a8880();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0xf8))(plVar3,0xffffffff,1);
    }
  }
  if ((*(char *)(param_1 + 0x658) != '\0') && (lVar4 = FUN_142ceefb0(param_1,param_2), lVar4 != 0))
  {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140d13860(lVar4,param_1 + 0x65c);
    }
  }
  FUN_140a56940(param_1,param_2,1);
  FUN_140a56d70(param_1,param_2,1);
  if ((*(byte *)(param_1 + 0x620) & 1) != 0) {
    FUN_140a70f70(param_1,1,param_2);
  }
  if (param_2 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a6c83c;
  }
  param_2 = 0;
LAB_140a6c83c:
  if ((*(uint *)(param_1 + 0x620) & 0x2000) != 0) {
    if (param_2 == 0) {
      return;
    }
    FUN_140c58370(param_2,1,*(undefined8 *)(param_1 + 0x18));
  }
  if (param_2 != 0) {
    FUN_140c520b0(param_2,param_1);
  }
  return;
}



// FUNCTION 140a6c880 FUN_140a6c880 body=27 status=ok
// SIG undefined FUN_140a6c880(void)

void FUN_140a6c880(undefined8 param_1)

{
  FUN_142cc9a80();
  FUN_140a76810(param_1);
  return;
}



// FUNCTION 140a6c8a0 FUN_140a6c8a0 body=228 status=ok
// SIG undefined FUN_140a6c8a0(void)

void FUN_140a6c8a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_142cf7490();
  FUN_140a56940(param_1,param_2,0);
  FUN_140a56d70(param_1,param_2,0);
  if ((*(byte *)(param_1 + 0x620) & 2) != 0) {
    FUN_140a70f70(param_1,0,param_2);
  }
  if (param_2 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a6c924;
  }
  param_2 = 0;
LAB_140a6c924:
  uVar2 = *(uint *)(param_1 + 0x620);
  if ((uVar2 & 0x3000) != 0) {
    if (param_2 == 0) {
      return;
    }
    if ((uVar2 >> 0xc & 1) != 0) {
      (**(code **)(*(longlong *)(param_2 + 0xd88) + 0x68))
                ((longlong *)(param_2 + 0xd88),0,*(undefined8 *)(param_1 + 0x18));
      uVar2 = *(uint *)(param_1 + 0x620);
    }
    if ((uVar2 >> 0xd & 1) != 0) {
      FUN_140c58370(param_2,0,*(undefined8 *)(param_1 + 0x18));
    }
  }
  if (param_2 != 0) {
    FUN_140c520b0(param_2,param_1);
  }
  return;
}



// FUNCTION 140a6c990 FUN_140a6c990 body=248 status=ok
// SIG undefined FUN_140a6c990(void)

void FUN_140a6c990(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142cf7530();
  if ((*(char *)(param_1 + 0x658) != '\0') && (lVar2 = FUN_142ceefb0(param_1,param_2), lVar2 != 0))
  {
    lVar3 = FUN_14145f370();
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
      FUN_140d0d1e0(lVar2);
    }
  }
  FUN_140a56940(param_1,param_2,3);
  FUN_140a56d70(param_1,param_2,3);
  if ((*(byte *)(param_1 + 0x620) & 2) != 0) {
    FUN_140a70f70(param_1,1,param_2);
  }
  if (param_2 != 0) {
    lVar2 = FUN_1413f82e0();
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
      FUN_140c520b0(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 140a6ca90 FUN_140a6ca90 body=341 status=ok
// SIG undefined FUN_140a6ca90(void)

undefined1 FUN_140a6ca90(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar3 = FUN_1413ffe00();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 1;
  }
  cVar2 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(param_2);
  if (cVar2 == '\0') {
    return 1;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x118);
  uVar8 = 0;
  if (uVar4 != 0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar5 = uVar4;
    if (bVar1) goto LAB_140a6cb49;
  }
  uVar5 = uVar8;
LAB_140a6cb49:
  uVar6 = uVar5;
  if (uVar4 != 0) {
    while( true ) {
      iVar7 = (int)uVar8;
      lVar3 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      uVar6 = uVar4;
      if (bVar1) break;
      uVar4 = *(ulonglong *)(uVar4 + 0x150);
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar6 = uVar5;
      if ((2 < iVar7) || (uVar4 == 0)) break;
    }
  }
  if ((uVar6 != 0) && (cVar2 = FUN_140e279c0(uVar6,param_2), cVar2 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140a6cbf0 FUN_140a6cbf0 body=851 status=ok
// SIG undefined FUN_140a6cbf0(void)

void FUN_140a6cbf0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  cVar1 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar1 == '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x2e99) = 0;
  if ((((char)param_1[0x5d8] != '\0') && (param_1[0x44] != 0)) &&
     ((*(byte *)(param_1[0x44] + 0x56c) & 8) == 0)) {
    *(undefined1 *)(param_1 + 0x5d8) = 0;
    cVar1 = FUN_142cf3980(param_1);
    if (cVar1 != '\0') {
      FUN_140a5f8d0(param_1);
    }
  }
  uVar6 = *(uint *)(param_1 + 0x558);
  if ((uVar6 & 1) == 0) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = FUN_140a5a890(param_1);
    uVar6 = *(uint *)(param_1 + 0x558);
  }
  if ((((uVar6 & 1) != 0) && (cVar1 == '\x02')) && (cVar2 = FUN_142cf3980(param_1), cVar2 != '\0'))
  {
    *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) & 0xfffffffe;
  }
  uVar6 = *(uint *)(param_1 + 0x558);
  if (((uVar6 & 1) == 0) || (uVar3 = 4, cVar1 != '\0')) {
    uVar3 = 0;
  }
  uVar7 = uVar6 >> 2 & 1;
  uVar6 = uVar6 & 0xfffffffb | uVar3;
  *(uint *)(param_1 + 0x558) = uVar6;
  if (uVar3 >> 2 != uVar7) {
    (**(code **)(*param_1 + 0x260))(param_1);
    uVar6 = *(uint *)(param_1 + 0x558);
  }
  if (((uVar6 & 4) != 0) && (cVar1 = FUN_142cf3980(param_1), cVar1 != '\0')) {
    *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) & 0xfffffffd;
  }
  if (((param_1[0x44] != 0) && ((*(byte *)(param_1[0x44] + 0x56c) & 8) == 0)) &&
     (uVar6 = *(uint *)(param_1 + 0x558) >> 2 & 1, uVar6 != uVar7)) {
    if (uVar6 == 0) {
      FUN_140a692d0(param_1);
    }
    else {
      FUN_140a69270();
    }
  }
  uVar6 = *(uint *)(param_1 + 0x558);
  if (((uVar6 & 4) != 0) && ((*(byte *)((longlong)param_1 + 0x2904) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x76) = 0x3f800000;
  }
  if ((((uVar6 & 0x10) == 0) || ((char)param_1[0x49] != '\x06')) ||
     ((*(char *)((longlong)param_1 + 0x249) != '\0' ||
      ((param_1[0x2f] == 0 || (uVar3 = 0x20, (char)param_1[0x575] == '\x04')))))) {
    uVar3 = 0;
  }
  uVar7 = uVar6 >> 5 & 1;
  uVar6 = uVar6 & 0xffffffdf | uVar3;
  *(uint *)(param_1 + 0x558) = uVar6;
  if (uVar3 >> 5 != uVar7) {
    (**(code **)(*param_1 + 0x260))(param_1);
    uVar6 = *(uint *)(param_1 + 0x558);
  }
  uVar6 = uVar6 >> 5 & 1;
  if (uVar6 != 0) {
    *(undefined4 *)(param_1 + 0x76) = 0x3f800000;
  }
  if (uVar7 != uVar6) {
    if (uVar6 == 0) {
      *(undefined1 *)(param_1 + 0x574) = 1;
      if (param_1[0x56f] == 0) goto LAB_140a6ce8b;
      local_38 = 0;
      local_28 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = param_1;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      local_68[0] = &LAB_140a5a470;
    }
    else {
      if (param_1[0x56f] == 0) goto LAB_140a6ce8b;
      local_38 = 0;
      local_28 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = param_1;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      local_68[0] = &LAB_140a5a420;
    }
    uVar5 = FUN_14247f500();
    FUN_14247d5a0(uVar5,param_1,local_68);
  }
LAB_140a6ce8b:
  FUN_142cf7600(param_1,param_2);
  if ((((char)param_1[0x574] != '\0') &&
      (((((*(byte *)(param_1 + 0x558) & 0x20) == 0 || ((char)param_1[0x49] != '\x06')) ||
        (*(char *)((longlong)param_1 + 0x249) != '\0')) || (param_1[0x2f] == 0)))) &&
     (((*(float *)(param_1 + 0x6a) != 0.0 || (*(float *)((longlong)param_1 + 0x354) != 0.0)) ||
      ((*(float *)(param_1 + 0x6b) != 0.0 ||
       (((ABS(*(float *)((longlong)param_1 + 0x18c)) <= 0.0001 &&
         (ABS(*(float *)(param_1 + 0x32)) <= 0.0001)) &&
        (ABS(*(float *)((longlong)param_1 + 0x194)) <= 0.0001)))))))) {
    *(undefined1 *)(param_1 + 0x574) = 0;
  }
  return;
}



// FUNCTION 140a6cf80 FUN_140a6cf80 body=93 status=ok
// SIG undefined FUN_140a6cf80(void)

void FUN_140a6cf80(longlong *param_1,float param_2)

{
  FUN_142345ab0();
  if ((char)param_1[0x578] != '\0') {
    param_2 = param_2 + *(float *)((longlong)param_1 + 0x2bc4);
    *(float *)((longlong)param_1 + 0x2bc4) = param_2;
    if (*(float *)((longlong)param_1 + 0x28bc) <= param_2 &&
        param_2 != *(float *)((longlong)param_1 + 0x28bc)) {
      (**(code **)(*param_1 + 0x260))(param_1);
      *(undefined1 *)(param_1 + 0x578) = 0;
      *(undefined1 *)(param_1 + 0x579) = 0;
    }
  }
  return;
}



// FUNCTION 140a6cfe0 FUN_140a6cfe0 body=221 status=ok
// SIG undefined FUN_140a6cfe0(void)

void FUN_140a6cfe0(longlong *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_142cfa380();
  cVar1 = FUN_142cf39d0(param_1);
  if (cVar1 != '\0') {
    if ((((ABS(param_2 * *(float *)((longlong)param_1 + 0x18c)) <= 0.0001) &&
         (ABS(param_2 * *(float *)(param_1 + 0x32)) <= 0.0001)) &&
        (ABS(param_2 * *(float *)((longlong)param_1 + 0x194)) <= 0.0001)) && (DAT_146295348 != 0)) {
      FUN_140a76e30(param_1);
    }
  }
  if (((param_1[0x525] != 0) && (0.0 < *(float *)(param_1[0x525] + 0x1054))) &&
     ((char)param_1[0x49] == '\x01')) {
    cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (cVar1 != '\0') {
      iVar2 = FUN_14233f450(param_1);
      if ((1 < iVar2) && (((byte)(int)param_1[0x82] & 3) == 3)) {
        FUN_140a5b410(param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140a6d0c0 FUN_140a6d0c0 body=562 status=ok
// SIG undefined FUN_140a6d0c0(void)

void FUN_140a6d0c0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [96];
  
  if (((param_1[0x525] == 0) || (cVar3 = (**(code **)(*param_1 + 0x5c0))(), cVar3 == '\0')) ||
     (uVar4 = (**(code **)(*param_1 + 0xbf0))(param_1), (char)uVar4 == '\0')) {
    FUN_142cfa390(param_1,param_2);
  }
  else {
    lVar1 = param_1[0x2f];
    fVar9 = *(float *)(lVar1 + 0x210);
    local_88 = *(undefined8 *)(lVar1 + 0x210);
    fStack_80 = *(float *)(lVar1 + 0x218);
    fStack_7c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar9);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_80);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_7c);
    iVar5 = movmskps(uVar4,auVar2);
    if (iVar5 != 0) {
      *(float *)(lVar1 + 0x250) = fVar9;
      *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
      *(float *)(lVar1 + 600) = fStack_80;
      *(float *)(lVar1 + 0x25c) = fStack_7c;
      puVar6 = (undefined8 *)FQuat::Rotator(&local_88,&local_b8);
      *(undefined8 *)(lVar1 + 0x260) = *puVar6;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
    }
    local_98 = *(undefined8 *)(lVar1 + 0x260);
    local_90 = *(undefined4 *)(lVar1 + 0x268);
    uVar7 = FUN_142ced5e0(param_1,local_68,2);
    FUN_142ce6bb0(param_1,&local_b8,uVar7);
    fVar8 = local_98._4_4_ - local_b8._4_4_;
    fVar9 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
    if (ABS(fVar8) < ABS(fVar9)) {
      fVar9 = fVar8;
    }
    fVar8 = fVar8 - fVar9;
    if (fVar8 < 0.0) {
      fVar8 = fVar8 + 360.0;
    }
    if (180.0 < fVar8) {
      fVar8 = fVar8 - 360.0;
    }
    local_a4 = *(float *)(param_1[0x525] + 0x104c);
    if (local_a4 <= ABS(fVar8)) {
      local_a8 = (undefined4)DAT_1468b5da0;
      local_a0 = DAT_1468b5da8;
      if (0.0 <= fVar8) {
        local_a4 = local_a4 + local_b8._4_4_;
      }
      else {
        local_a4 = local_b8._4_4_ - local_a4;
      }
      FMath::RInterpTo(&local_78,&local_98,&local_a8);
      local_88 = 0x43b4000043b40000;
      fStack_80 = 360.0;
      local_b8 = local_78;
      local_b0 = local_70;
      FUN_142d069f0(param_1,&local_b8,&local_88);
    }
  }
  return;
}



// FUNCTION 140a6d300 FUN_140a6d300 body=1059 status=ok
// SIG undefined FUN_140a6d300(void)

undefined8 FUN_140a6d300(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  longlong *local_res8;
  ulonglong uVar13;
  code *local_118;
  ulonglong uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [32];
  longlong local_c8;
  longlong local_b8;
  longlong local_a8;
  longlong local_98;
  undefined1 local_78 [40];
  undefined1 local_50;
  
  plVar1 = (longlong *)param_1[0x2d];
  FUN_14301f8f0();
  lVar6 = (**(code **)(*param_4 + 0x628))(param_4);
  if (lVar6 == 0) {
    return 0;
  }
  _guard_xfg_dispatch_icall_nop(local_e8,0,0x68);
  FUN_142ff3000(lVar6,local_e8);
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar8 = (longlong *)FUN_143019ed0(uVar7,local_e8,1,0);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x428))(plVar1,local_f8,*(undefined8 *)(param_2[0xea] + 0x30));
    (**(code **)(*plVar1 + 0x430))(plVar1,local_108,*(undefined8 *)(param_2[0xea] + 0x30));
    FRotator::Quaternion(local_108,&local_118);
    FActorSpawnParameters::FActorSpawnParameters(local_78);
    pwVar12 = (wchar_t *)0x0;
    local_50 = 1;
    if (param_1[0x8f] != 0) {
      plVar9 = (longlong *)FUN_143025260();
      local_res8 = (longlong *)param_1[0x8f];
      for (plVar2 = local_res8; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
        if (plVar2 == plVar9) goto LAB_140a6d435;
      }
    }
    local_res8 = (longlong *)0x0;
LAB_140a6d435:
    lVar6 = param_2[0xea];
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar13 = *(ulonglong *)(lVar6 + 0x70);
    pwVar10 = (wchar_t *)
              FUN_142ff1380(uVar7,local_res8,1,plVar8,uVar13,0,&DAT_1468b5d90,local_f8,local_108,0,0
                           );
    if (pwVar10 != (wchar_t *)0x0) {
      lVar6 = FUN_1413b9340();
      if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
          != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uStack_110 = uStack_110 & 0xffffffff00000000;
        local_118 = FUN_140a5de70;
        pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ACrewQuartersGunRack::CreateEmptyPickup",L"::");
        while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar12 = pwVar4;
        }
        FName::FName(&local_res8,pwVar12 + 2,1);
        FUN_1407260e0(pwVar10 + 0x39c,param_1,&local_118,local_res8);
        *(longlong *)(pwVar10 + 0x3a8) = param_2[0xea];
        *(char *)(pwVar10 + 0x3a4) = (char)param_2[0xe9];
        pwVar12 = pwVar10;
      }
      (**(code **)(*(longlong *)pwVar10 + 0x3a0))(pwVar10,0);
      (**(code **)(*(longlong *)pwVar10 + 0x448))(pwVar10,param_1);
      (**(code **)(*(longlong *)pwVar10 + 0x818))
                (pwVar10,plVar1,*(undefined8 *)(param_2[0xea] + 0x30),2);
      FUN_140e7b7b0(param_1 + 0x94,param_2[0xea],pwVar10,1,uVar13 & 0xffffffffffffff00);
      if ((pwVar12 != (wchar_t *)0x0) && ((char)pwVar12[0x3ac] == '\0')) {
        uVar7 = FUN_140c428a0(param_3);
        lVar6 = FUN_140e81f30(uVar7,param_4);
        if (lVar6 != 0) {
          uVar7 = FUN_140c46b40(param_3);
          cVar5 = FUN_140e85c60(*(longlong *)(pwVar12 + 0x3a8),uVar7);
          if (cVar5 != '\0') {
            FUN_140c40030(param_3,1);
          }
          uVar7 = FUN_140c428a0(param_3);
          FUN_140e948e0(uVar7,lVar6,1,0);
        }
        lVar6 = (**(code **)(*(longlong *)(param_3 + 0xd80) + 0x18))();
        if (lVar6 != 0) {
          FUN_142ffa6f0(lVar6,&local_res8,param_4);
          if ((int)local_res8 != -1) {
            FUN_143011bf0(lVar6,&local_res8,1);
            (**(code **)(*param_4 + 0x6d0))(param_4,0);
          }
        }
      }
      (**(code **)(*param_2 + 0x6d0))(param_2,0);
      uVar7 = 1;
      goto LAB_140a6d4b5;
    }
    (**(code **)(*plVar8 + 0x6d0))(plVar8,0);
  }
  uVar7 = 0;
LAB_140a6d4b5:
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 140a6d730 FUN_140a6d730 body=529 status=ok
// SIG undefined FUN_140a6d730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140a6d730(longlong *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  undefined4 local_2a0;
  int *local_298;
  int local_288 [2];
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined1 local_260 [520];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  if ((param_1[0x455] != 0) && (lVar3 = param_1[0x456], lVar3 != 0)) {
    uVar4 = 0;
    local_260[0] = 0;
    local_58 = 0;
    local_50 = 0;
    plVar9 = *(longlong **)(lVar3 + 0x40);
    uVar8 = (longlong)*(int *)(lVar3 + 0x48) & 0x1fffffffffffffff;
    if (plVar9 + *(int *)(lVar3 + 0x48) < plVar9) {
      uVar8 = uVar4;
    }
    uVar5 = uVar4;
    if (uVar8 != 0) {
      do {
        lVar3 = *plVar9;
        TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x457,local_288,lVar3);
        uVar2 = uVar4;
        if (local_288[0] != -1) {
          uVar2 = param_1[0x457] + (longlong)local_288[0] * 0x48;
        }
        uVar6 = uVar2 + 8;
        if (uVar2 == 0) {
          uVar6 = uVar4;
        }
        if (uVar6 == 0) {
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0x48) == '\x01')) {
            local_2a8 = (undefined8 *)((ulonglong)local_2a8._1_7_ << 8);
            uVar10 = 0;
            plVar7 = param_1;
            goto LAB_140a6d840;
          }
        }
        else {
          uVar10 = *(undefined4 *)(uVar6 + 0x30);
          local_2a8 = (undefined8 *)CONCAT71(local_2a8._1_7_,*(undefined1 *)(uVar6 + 0x35));
          plVar7 = *(longlong **)(uVar6 + 0x18);
LAB_140a6d840:
          FUN_1405f1370(local_260,lVar3,plVar7,uVar10);
        }
        plVar9 = plVar9 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar8);
      lVar3 = param_1[0x456];
    }
    local_278 = 0;
    local_270 = 0;
    local_280 = 0xffffffff00000000;
    local_288[1] = 0;
    local_26c = 0xffffffff;
    local_268 = 0;
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    local_298 = local_288 + 1;
    local_2a8 = &local_280;
    local_2a0 = 0;
    FUN_1405e8890(uVar1,lVar3,local_260,&local_270);
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  if (param_1[0x461] != 0) {
    FUN_1405cfc80(param_1);
  }
  return;
}



// FUNCTION 140a6d950 FUN_140a6d950 body=151 status=ok
// SIG undefined FUN_140a6d950(void)

void FUN_140a6d950(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_28 [32];
  
  cVar1 = FUN_14059ee90(param_2 + 0x18);
  if (cVar1 == '\0') {
    lVar2 = FUN_140a63bf0(param_1,param_2,param_3,param_4);
    if (lVar2 != 0) {
      lVar2 = FUN_1405a3150(lVar2,local_28,*(undefined8 *)(param_1 + 8),0);
      FUN_1405913a0(param_2 + 0x18,lVar2);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(lVar2 + 0x10);
      FUN_140591060(local_28);
    }
  }
  return;
}



// FUNCTION 140a6d9f0 FUN_140a6d9f0 body=1122 status=ok
// SIG undefined FUN_140a6d9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140a6d9f0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  float fVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined1 auStack_248 [32];
  longlong *local_228;
  undefined1 local_220;
  undefined8 local_218;
  float local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  uint uStack_1f0;
  int iStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  uint *puStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined1 local_1a8 [12];
  undefined4 local_19c;
  undefined8 local_194;
  float local_18c;
  undefined8 local_188;
  float local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined1 local_144 [8];
  undefined1 local_13c [36];
  longlong local_118 [5];
  byte local_f0;
  byte local_ef;
  code *local_e8;
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  if (param_2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x118);
    if (lVar3 == 0) {
      uVar9 = 0;
    }
    else {
      fVar13 = *(float *)(param_3 + 1);
      uVar9 = *param_3;
      if ((*(longlong *)(param_1 + 0x1d0) == 0) ||
         (fVar1 = *(float *)(param_1 + 0x1f0), fVar1 < *(float *)(param_3 + 1))) {
        if (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x22c)) {
          local_1d8 = (longlong *)(param_1 + 0x1f8);
          iVar2 = *(int *)(param_1 + 0x220);
          puStack_1c8 = (uint *)(param_1 + 0x208);
          local_208 = (longlong *)0x100000000;
          local_1f8._4_4_ = 0;
          uStack_1f0 = 0;
          if (iVar2 != 0) {
            puVar15 = *(uint **)(param_1 + 0x218);
            if (*(uint **)(param_1 + 0x218) == (uint *)0x0) {
              puVar15 = puStack_1c8;
            }
            uVar7 = *puVar15;
            iVar8 = 0;
            uStack_1f0 = 0;
            while (uVar7 == 0) {
              uStack_1f0 = uStack_1f0 + 0x20;
              uVar5 = (ulonglong)local_208 >> 0x20;
              local_208 = (longlong *)CONCAT44((int)uVar5,iVar8 + 1);
              if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 <= iVar8)
              goto LAB_140a6dd55;
              uVar7 = puVar15[(longlong)iVar8 + 1];
              iVar8 = iVar8 + 1;
            }
            uVar7 = -uVar7 & uVar7;
            iVar8 = 0x1f;
            if (uVar7 != 0) {
              for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
              }
            }
            local_208 = (longlong *)CONCAT44(uVar7,SUB84(local_208,0));
            if (uVar7 == 0) {
              iVar8 = 0x20;
            }
            else {
              iVar8 = 0x1f - iVar8;
            }
            local_1f8._4_4_ = (uStack_1f0 - iVar8) + 0x1f;
            if (iVar2 < local_1f8._4_4_) {
LAB_140a6dd55:
              local_1f8._4_4_ = iVar2;
            }
          }
          auStack_1c0._4_4_ = local_1f8._4_4_;
          auStack_1c0._0_4_ = 0xffffffff;
          auStack_1c0._8_4_ = uStack_1f0;
          auStack_1c0._12_4_ = iStack_1ec;
          uStack_1d0 = local_208;
          uStack_200 = local_208;
          local_1e8 = auStack_1c0._8_8_;
          uStack_1f0 = 0xffffffff;
          iStack_1ec = local_1f8._4_4_;
          bVar4 = local_1f8._4_4_ < iVar2;
          local_208 = local_1d8;
          local_1f8 = puStack_1c8;
          if (bVar4) {
            do {
              plVar6 = local_208;
              lVar10 = (longlong)iStack_1ec;
              plVar14 = *(longlong **)(*local_208 + lVar10 * 0x18);
              if ((plVar14 != (longlong *)0x0) && (0 < *(int *)(*local_208 + 8 + lVar10 * 0x18))) {
                local_1e0 = 0;
                lVar11 = (**(code **)(*plVar14 + 0x6d0))(plVar14,0,1);
                if (lVar11 != 0) {
                  local_218 = 0;
                  plVar14 = *(longlong **)(*plVar6 + lVar10 * 0x18);
                  uVar12 = (**(code **)(*plVar14 + 0x6d0))(plVar14,0,1);
                  lVar10 = FUN_142698570(uVar12);
                  if (lVar10 != 0) goto LAB_140a6daa2;
                }
              }
              uStack_1f0 = uStack_1f0 & ~uStack_200._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_200);
            } while (iStack_1ec < (int)local_1f8[6]);
          }
        }
        uVar9 = 0;
      }
      else {
        lVar10 = *(longlong *)(DAT_146b17150 + 0x6c8);
        fVar13 = fVar1;
        local_210 = fVar1;
        local_1f8 = (uint *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
        if (*(longlong *)(param_1 + 0x1e8) != 0) {
          lVar10 = *(longlong *)(param_1 + 0x1e8);
          local_1f8 = (uint *)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
        }
LAB_140a6daa2:
        _guard_xfg_dispatch_icall_nop(local_1a8,0,0x90);
        local_19c = 0x3f800000;
        FWeakObjectPtr::operator=(local_13c,lVar3);
        local_210 = -1.0;
        local_17c = 0;
        local_174 = 0xbf800000;
        local_194 = uVar9;
        local_18c = fVar13;
        local_188 = uVar9;
        local_180 = fVar13;
        FWeakObjectPtr::operator=(local_144,lVar10);
        local_ef = local_ef & 0xfe;
        local_f0 = 0;
        local_e8 = AK::MemoryMgr::StartProfileThreadUsage;
        if (*(char *)(param_4 + 10) == '\0') {
          local_f0 = 2;
        }
        local_118[0] = 0;
        local_f0 = (*(char *)(param_4 + 8) == '\0') + 0x40U | local_f0;
        local_118[1] = 0;
        local_228 = (longlong *)CONCAT44(local_228._4_4_,*(undefined4 *)(param_4 + 0xac));
        local_118[2] = 0;
        local_118[3] = 0;
        local_118[4] = 0;
        local_b8 = (longlong *)0x0;
        local_a8 = 0;
        local_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0x3f800000;
        local_88 = 0x3f800000;
        local_84 = 0x3f800000;
        local_80 = 0;
        local_78 = 0;
        local_74 = 0x3f800000;
        FUN_1405cd7d0(lVar3,*(undefined4 *)(param_4 + 0xa4),*(undefined4 *)(param_4 + 0xa8),
                      *(undefined8 *)(param_4 + 0xb0));
        local_228 = local_118;
        local_220 = 0;
        FUN_142d68ea0(param_2,lVar3,local_1a8,0);
        FUN_1405c53e0(lVar3);
        if (local_a8 != 0) {
          plVar14 = local_d8;
          if (local_b8 != (longlong *)0x0) {
            plVar14 = local_b8;
          }
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x10))(plVar14,0);
          }
        }
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_118[2] != 0) {
          FMemory::Free();
        }
        if (local_118[0] != 0) {
          FMemory::Free();
        }
        uVar9 = 1;
      }
    }
  }
  return uVar9;
}



// FUNCTION 140a6de60 FUN_140a6de60 body=408 status=ok
// SIG undefined FUN_140a6de60(void)

void FUN_140a6de60(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong local_20;
  
  uVar4 = FSoftObjectPath::FSoftObjectPath(local_28,*(undefined8 *)(param_1 + 0x4b0));
  plVar5 = (longlong *)FSoftObjectPath::ToString(uVar4,local_38);
  plVar1 = (longlong *)(param_2 + 6);
  if (plVar1 != plVar5) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar5;
    *plVar5 = 0;
    param_2[8] = (int)plVar5[1];
    param_2[9] = *(undefined4 *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)(param_2 + 2);
  *param_2 = *(undefined4 *)(param_1 + 0x4f8);
  iVar8 = param_2[4];
  if (iVar8 != 0) {
    plVar5 = (longlong *)(*plVar1 + 8);
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  param_2[4] = 0;
  if (param_2[5] != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  plVar7 = *(longlong **)(param_1 + 0x510);
  plVar5 = plVar7 + *(int *)(param_1 + 0x518);
  for (; plVar7 != plVar5; plVar7 = plVar7 + 1) {
    lVar2 = *plVar7;
    if (lVar2 != 0) {
      lVar6 = FUN_1412fc200();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar8 = param_2[4];
        param_2[4] = iVar8 + 1;
        if ((int)param_2[5] < iVar8 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar8);
        }
        FUN_140a4efe0(*plVar1 + (longlong)iVar8 * 0x18,*(undefined4 *)(lVar2 + 0x6c0),
                      *(undefined8 *)(lVar2 + 0x6c8));
      }
    }
  }
  return;
}



// FUNCTION 140a6e000 FUN_140a6e000 body=126 status=ok
// SIG undefined FUN_140a6e000(void)

void FUN_140a6e000(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4c8);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x2464) = *(undefined8 *)(lVar1 + 0x18c);
    *(undefined4 *)(param_1 + 0x246c) = *(undefined4 *)(lVar1 + 0x194);
  }
  FUN_140c4fe60();
  if (*(longlong **)(param_1 + 0xe70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xe70) + 0x260))();
  }
  FUN_140a66930(param_1);
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0x4cc) >> 1 & 1) == 0)) {
    FUN_140a5d5a0(param_1);
  }
  return;
}



// FUNCTION 140a6e080 FUN_140a6e080 body=82 status=ok
// SIG undefined FUN_140a6e080(void)

void FUN_140a6e080(longlong *param_1)

{
  if ((((char)param_1[0x575] == '\x04') && (param_1[0x56e] != 0)) &&
     (*(float *)((longlong)param_1 + 0x194) <= *(float *)(param_1[0x56e] + 0x24c))) {
    (**(code **)(*param_1 + 0x260))();
    *(undefined1 *)(param_1 + 0x575) = 0;
    FUN_140a775d0(param_1);
    return;
  }
  return;
}



// FUNCTION 140a6e0e0 FUN_140a6e0e0 body=27 status=ok
// SIG undefined FUN_140a6e0e0(void)

void FUN_140a6e0e0(longlong param_1)

{
  FUN_142349c40();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x80000000;
  return;
}



// FUNCTION 140a6e100 FUN_140a6e100 body=755 status=ok
// SIG undefined FUN_140a6e100(void)

void FUN_140a6e100(longlong param_1)

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
  int local_38;
  int local_34;
  longlong local_30;
  
  thunk_FUN_142238430();
  plVar10 = *(longlong **)(param_1 + 0x5e0);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x290))(plVar10,1,0);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ACrewQuartersDecoration::OnUsedBy",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar7 = local_res10;
    lVar2 = *(longlong *)(param_1 + 0x5e0);
    plVar10 = (longlong *)(lVar2 + 0x318);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = lVar7;
    if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_30);
    }
    piVar8 = (int *)*plVar10;
    iVar1 = *(int *)(lVar2 + 800);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_30)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140a6e284;
        break;
      }
    }
    iVar1 = *(int *)(lVar2 + 800);
    *(int *)(lVar2 + 800) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x324) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
    *piVar8 = local_38;
    piVar8[1] = local_34;
    *(longlong *)(piVar8 + 2) = local_30;
LAB_140a6e284:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ACrewQuartersDecoration::OnUsedSecondaryBy",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x5e0);
    plVar10 = (longlong *)(lVar2 + 0x348);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_30);
    }
    piVar8 = (int *)*plVar10;
    iVar1 = *(int *)(lVar2 + 0x350);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_30)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140a6e3cf;
        break;
      }
    }
    iVar1 = *(int *)(lVar2 + 0x350);
    *(int *)(lVar2 + 0x350) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x354) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
    *piVar8 = local_38;
    piVar8[1] = local_34;
    *(longlong *)(piVar8 + 2) = local_30;
LAB_140a6e3cf:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
  }
  return;
}



// FUNCTION 140a6e400 thunk_FUN_142238430 body=5 status=ok
// SIG undefined thunk_FUN_142238430(void)

void thunk_FUN_142238430(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
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
    *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 8;
    FUN_142251cc0(param_1);
    FUN_142240ef0(param_1);
    return;
  }
  return;
}



// FUNCTION 140a6e410 FUN_140a6e410 body=48 status=ok
// SIG undefined FUN_140a6e410(void)

void FUN_140a6e410(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_142238430();
  uVar1 = UUGHitTextureButton::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0xae] = lVar2;
  return;
}



// FUNCTION 140a6e440 FUN_140a6e440 body=379 status=ok
// SIG undefined FUN_140a6e440(void)

void FUN_140a6e440(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 uStack_1c;
  
  FUN_140c4ff50();
  lVar6 = param_1[0x122];
  if (lVar6 != 0) {
    plVar7 = (longlong *)(lVar6 + 0x268);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = 0x40a6a450;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_res8);
      iVar1 = *(int *)(lVar6 + 0x270);
      *(int *)(lVar6 + 0x270) = iVar1 + 1;
      if (*(int *)(lVar6 + 0x274) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
      *puVar4 = plVar2;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
  }
  if (param_1[0x1d1] == 0) {
    local_res8 = 0;
    uVar5 = UUGLoadoutBarUW::GetPrivateStaticClass();
    local_res10 = 0;
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar6 = FUN_1417985e0(uVar5,param_1,0,0,0,0,0,0,0);
    param_1[0x1d1] = lVar6;
    (**(code **)(*param_1 + 0x630))(param_1,lVar6);
    FUN_14234b150(param_1[0x1d1]);
  }
  return;
}



// FUNCTION 140a6e5c0 FUN_140a6e5c0 body=94 status=ok
// SIG undefined FUN_140a6e5c0(void)

void FUN_140a6e5c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar1 = UWorld::IsGameWorld(uVar3);
    if ((((cVar1 != '\0') && ((char)param_1[0x25] == '\x03')) &&
        ((longlong *)param_1[0x2a] != (longlong *)0x0)) && ((longlong *)param_1[0x2a] != param_1)) {
      FUN_140a72930(param_1);
    }
  }
  FUN_140c4ff50(param_1);
  return;
}



// FUNCTION 140a6e630 FUN_140a6e630 body=124 status=ok
// SIG undefined FUN_140a6e630(void)

void FUN_140a6e630(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142fadc60();
  lVar1 = *(longlong *)(param_1 + 0x208);
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
    if (bVar2) {
      *(longlong *)(param_1 + 0x2b78) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x2b78) = 0;
  return;
}



// FUNCTION 140a6e6b0 FUN_140a6e6b0 body=49 status=ok
// SIG undefined FUN_140a6e6b0(void)

void FUN_140a6e6b0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x544) & 1) != 0) {
    FUN_140a5e210();
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x7fffffff;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x7fffffff;
  return;
}



// FUNCTION 140a6e6f0 FUN_140a6e6f0 body=334 status=ok
// SIG undefined FUN_140a6e6f0(void)

void FUN_140a6e6f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x4d0);
  if (lVar2 != 0) {
    lVar5 = FUN_1429a0270();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar9 = 0;
      plVar10 = *(longlong **)(lVar2 + 0xa0);
      uVar11 = (longlong)*(int *)(lVar2 + 0xa8) & 0x1fffffffffffffff;
      if (plVar10 + *(int *)(lVar2 + 0xa8) < plVar10) {
        uVar11 = uVar9;
      }
      if (uVar11 != 0) {
        do {
          lVar2 = *plVar10;
          if (lVar2 != 0) {
            uVar6 = UGameplayTagAssetInterface::GetPrivateStaticClass();
            plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar6);
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x18))(plVar7,param_1);
              plVar7 = (longlong *)(param_1 + 0x510);
              plVar3 = (longlong *)*plVar7;
              iVar1 = *(int *)(param_1 + 0x518);
              for (plVar8 = plVar3; plVar8 != plVar3 + iVar1; plVar8 = plVar8 + 1) {
                if (*plVar8 == lVar2) {
                  if ((int)((longlong)plVar8 - (longlong)plVar3 >> 3) != -1) goto LAB_140a6e80d;
                  break;
                }
              }
              *(int *)(param_1 + 0x518) = iVar1 + 1;
              if (*(int *)(param_1 + 0x51c) < iVar1 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7);
              }
              *(longlong *)(*plVar7 + (longlong)iVar1 * 8) = lVar2;
            }
          }
LAB_140a6e80d:
          plVar10 = plVar10 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar11);
      }
    }
  }
  return;
}



// FUNCTION 140a6e840 FUN_140a6e840 body=145 status=ok
// SIG undefined FUN_140a6e840(void)

void FUN_140a6e840(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  
  FUN_142cfb870();
  lVar1 = *(longlong *)(param_2 + 0xe68);
  if (param_3 == 0) {
    if (((*(byte *)(param_1 + 0x388) & 1) == 0) ||
       ((cVar2 = FUN_140c491e0(param_2), cVar2 == '\0' && (*(char *)(lVar1 + 0x2ba8) != '\x02')))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
    }
    uVar3 = *(uint *)(param_1 + 0x388) & 0xfffffffd | uVar3;
    *(uint *)(param_1 + 0x388) = uVar3;
    *(uint *)(param_1 + 0x388) = ((uint)*(byte *)(lVar1 + 0x2bc0) << 4 ^ uVar3) & 0x10 ^ uVar3;
    return;
  }
  return;
}



// FUNCTION 140a6e8e0 FUN_140a6e8e0 body=343 status=ok
// SIG undefined FUN_140a6e8e0(void)

void FUN_140a6e8e0(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  if ((((0.0 < *(float *)(param_1 + 0x519)) && (param_1[0x44] != 0)) &&
      (uVar1 = *(uint *)(param_1[0x44] + 0x56c), (uVar1 & 4) == 0)) &&
     ((((uVar1 & 8) == 0 && (cVar2 = FUN_142cf3980(param_1), cVar2 != '\0')) &&
      ((param_1[0x24] != 0 || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)))))) {
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    if ((0.0 < *(float *)((longlong)param_1 + 0x28c4)) &&
       (fVar4 = *(float *)((longlong)param_1 + 0x28c4) + *(float *)(param_1 + 0x519),
       *(float *)(lVar3 + 0x790) <= fVar4 && fVar4 != *(float *)(lVar3 + 0x790))) {
      *(uint *)(param_1[0x44] + 0x56c) = *(uint *)(param_1[0x44] + 0x56c) | 4;
    }
    cVar2 = (**(code **)(*param_1 + 0x558))(param_1);
    if ((cVar2 == '\0') || ((char)param_1[0x578] != '\0')) {
      *(undefined4 *)(param_1 + 0x519) = 0xbf800000;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x2baa) = 0;
  cVar2 = (**(code **)(*param_1 + 0xbf0))(param_1);
  if (((cVar2 != '\0') && (param_1[0x44] != 0)) &&
     (uVar1 = *(uint *)(param_1[0x44] + 0x56c), (uVar1 & 8) == 0)) {
    if ((uVar1 & 4) != 0) {
      *(undefined1 *)((longlong)param_1 + 0x2baa) = 1;
      FUN_140a736c0();
      return;
    }
    cVar2 = FUN_142cf3980(param_1);
    if (cVar2 != '\0') {
      cVar2 = FUN_140a5a830(param_1);
      if (cVar2 != '\0') {
        if ((*(byte *)(param_1 + 0x558) & 8) != 0) {
          return;
        }
        cVar2 = FUN_140a68900(param_1);
        if (cVar2 != '\0') {
          return;
        }
      }
      FUN_140a736c0(param_1);
    }
  }
  return;
}



// FUNCTION 140a6ea40 FUN_140a6ea40 body=170 status=ok
// SIG undefined FUN_140a6ea40(void)

void FUN_140a6ea40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar4 = *(longlong **)(param_1 + 0x510);
    uVar5 = 0;
    uVar6 = (longlong)*(int *)(param_1 + 0x518) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_1 + 0x518) < plVar4) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        lVar1 = *plVar4;
        if (lVar1 != 0) {
          uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
          plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x20))(plVar3);
          }
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
    FUN_140a5c230(param_1);
  }
  return;
}



// FUNCTION 140a6eaf0 FUN_140a6eaf0 body=65 status=ok
// SIG undefined FUN_140a6eaf0(void)

void FUN_140a6eaf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((*(byte *)(param_1 + 0x8a0) & 2) != 0) {
    FUN_140a768c0(param_2,param_3);
  }
  return;
}



// FUNCTION 140a6eb40 FUN_140a6eb40 body=261 status=ok
// SIG undefined FUN_140a6eb40(void)

void FUN_140a6eb40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float *pfVar2;
  undefined1 local_18 [16];
  
  FUN_14227b130();
  if (((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0xb20), plVar1 != (longlong *)0x0)) &&
     (0 < (int)plVar1[0x9f])) {
    *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(plVar1[0x9e] + 0xc);
    *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(plVar1[0x9e] + 0x10);
    *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(plVar1[0x9e] + 0x14);
    *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(plVar1[0x9e] + 0x18);
    *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)plVar1[0x9e];
    *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(plVar1[0x9e] + 4);
    *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(plVar1[0x9e] + 8);
    *(int *)(param_1 + 0x6d4) = (int)plVar1[0x9b];
    pfVar2 = (float *)(**(code **)(*plVar1 + 0x308))(plVar1,local_18);
    *(float *)(param_1 + 0x6d8) =
         SQRT(*pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2]);
  }
  return;
}



// FUNCTION 140a6ec50 FUN_140a6ec50 body=144 status=ok
// SIG undefined FUN_140a6ec50(void)

void FUN_140a6ec50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[4];
  if (lVar1 == param_1[3]) {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
    return;
  }
  if (*(ulonglong *)(lVar1 + -0x10) != 0) {
    lVar2 = *param_1;
    if (*(char *)(lVar1 + -8) != '\0') {
      puVar3 = *(undefined1 **)(lVar2 + 0x18);
      if (*(undefined1 **)(lVar2 + 0x20) < puVar3 + 1) {
        rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar2,1);
        puVar3 = *(undefined1 **)(lVar2 + 0x18);
      }
      *(undefined1 **)(lVar2 + 0x18) = puVar3 + 1;
      *puVar3 = 0x2c;
      *(longlong *)(lVar1 + -0x10) = *(longlong *)(lVar1 + -0x10) + 1;
      return;
    }
    uVar4 = 0x3a;
    if ((*(ulonglong *)(lVar1 + -0x10) & 1) == 0) {
      uVar4 = 0x2c;
    }
    FUN_140a6edb0(lVar2,uVar4);
  }
  *(longlong *)(lVar1 + -0x10) = *(longlong *)(lVar1 + -0x10) + 1;
  return;
}



// FUNCTION 140a6ece0 FUN_140a6ece0 body=154 status=ok
// SIG undefined FUN_140a6ece0(void)

void FUN_140a6ece0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + -0x968);
    if (lVar2 != 0) {
      lVar4 = FUN_142e5c1e0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_142cac780(lVar2,*(undefined4 *)(lVar1 + 0x10));
      }
    }
    *(undefined4 *)(param_1 + 0x13d0) = *(undefined4 *)(lVar1 + 0x14);
    FUN_140a51e70(param_1 + 0x13d8,lVar1 + 0x98);
    *(undefined1 *)(param_1 + 0x13f0) = 1;
  }
  return;
}



// FUNCTION 140a6edb0 FUN_140a6edb0 body=69 status=ok
// SIG undefined FUN_140a6edb0(void)

void FUN_140a6edb0(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  if (*(undefined1 **)(param_1 + 0x20) < puVar1 + 1) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(param_1,1);
    puVar1 = *(undefined1 **)(param_1 + 0x18);
  }
  *(undefined1 **)(param_1 + 0x18) = puVar1 + 1;
  *puVar1 = param_2;
  return;
}



// FUNCTION 140a6ee00 FUN_140a6ee00 body=59 status=ok
// SIG undefined FUN_140a6ee00(void)

void FUN_140a6ee00(longlong param_1)

{
  FUN_141400920(param_1 + -0x2298);
  if (*(char *)(param_1 + 0x78) != '\0') {
    FUN_142227350(param_1 + -0x2298,0,1);
  }
  return;
}



// FUNCTION 140a6ee40 FUN_140a6ee40 body=98 status=ok
// SIG undefined FUN_140a6ee40(void)

void FUN_140a6ee40(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2 != 0) {
    lVar2 = FUN_14145f370();
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
      *(longlong *)(param_1 + 0x2398) = param_2;
    }
  }
  return;
}



// FUNCTION 140a6eeb0 FUN_140a6eeb0 body=927 status=ok
// SIG undefined FUN_140a6eeb0(void)

void FUN_140a6eeb0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  undefined1 local_res20 [8];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  puVar4 = (undefined8 *)FName::FName(local_res20,L"AssetRegistry",1);
  uVar9 = *puVar4;
  uVar5 = FUN_14168dc80();
  plVar6 = (longlong *)FUN_141690010(uVar5,uVar9);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  plVar7 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
  lVar8 = FUN_1414a12b0();
  (**(code **)(*plVar7 + 0x28))(plVar7,*(undefined8 *)(lVar8 + 0x18),&local_68,1);
  plVar12 = local_68 + (longlong)(int)local_60 * 0xb;
  for (plVar7 = local_68; plVar7 != plVar12; plVar7 = plVar7 + 0xb) {
    if (*plVar7 != 0) {
      puVar4 = (undefined8 *)FName::ToString(plVar7,local_58);
      if (*(int *)(puVar4 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar4;
      }
      uVar9 = UObject::GetPrivateStaticClass();
      lVar8 = FUN_141799410(uVar9,0,puVar11,0);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)FName::ToString(plVar7,local_48);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar4;
        }
        uVar9 = UObject::GetPrivateStaticClass();
        lVar8 = FUN_141799c90(uVar9,0,puVar11,0,0,0,1);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (lVar8 == 0) goto LAB_140a6f07e;
      }
      lVar10 = FUN_1414a12b0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        iVar1 = *(int *)(lVar8 + 0x300);
        if (iVar1 != 0) {
          iVar3 = *(int *)(param_1 + 0x68);
          if (*(int *)(param_1 + 0x6c) < iVar3 + iVar1) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x60);
            iVar3 = *(int *)(param_1 + 0x68);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 8),
                     *(void **)(lVar8 + 0x2f8),(longlong)iVar1 << 3);
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar1;
        }
      }
    }
LAB_140a6f07e:
  }
  local_78 = (longlong *)0x0;
  local_70 = 0;
  plVar7 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
  lVar8 = FUN_141304350();
  (**(code **)(*plVar7 + 0x28))(plVar7,*(undefined8 *)(lVar8 + 0x18),&local_78,1);
  plVar6 = local_78 + (longlong)(int)local_70 * 0xb;
  plVar7 = local_78;
  do {
    if (plVar7 == plVar6) {
      FUN_1404be960(&local_78);
      FUN_1404be960(&local_68);
      return;
    }
    if (*plVar7 != 0) {
      puVar4 = (undefined8 *)FName::ToString(plVar7,local_48);
      if (*(int *)(puVar4 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar4;
      }
      uVar9 = UObject::GetPrivateStaticClass();
      lVar8 = FUN_141799410(uVar9,0,puVar11,0);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)FName::ToString(plVar7,local_58);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar4;
        }
        uVar9 = UObject::GetPrivateStaticClass();
        lVar8 = FUN_141799c90(uVar9,0,puVar11,0,0,0,1);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (lVar8 == 0) goto LAB_140a6f215;
      }
      lVar10 = FUN_141304350();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        iVar1 = *(int *)(lVar8 + 0x208);
        if (iVar1 != 0) {
          iVar3 = *(int *)(param_1 + 0x68);
          if (*(int *)(param_1 + 0x6c) < iVar3 + iVar1) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x60);
            iVar3 = *(int *)(param_1 + 0x68);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 8),
                     *(void **)(lVar8 + 0x200),(longlong)iVar1 << 3);
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar1;
        }
      }
    }
LAB_140a6f215:
    plVar7 = plVar7 + 0xb;
  } while( true );
}



// FUNCTION 140a6f250 SetOwnerAsset body=5 status=ok
// SIG undefined SetOwnerAsset(void)

void FStringTable::SetOwnerAsset(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 140a6f260 FUN_140a6f260 body=218 status=ok
// SIG undefined FUN_140a6f260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a6f260(longlong param_1)

{
  char cVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if ((*(byte *)(param_1 + 0x478) & 1) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x488);
    uStack_30 = *(undefined8 *)(param_1 + 0x490);
    local_28 = *(undefined4 *)(param_1 + 0x498);
    uStack_24 = *(undefined4 *)(param_1 + 0x49c);
    uStack_20 = *(undefined4 *)(param_1 + 0x4a0);
    uStack_1c = *(undefined4 *)(param_1 + 0x4a4);
    local_18 = *(undefined8 *)(param_1 + 0x4a8);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x468,&local_38);
    *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x478) & 0xfffffffe;
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x490) = 0;
    *(undefined8 *)(param_1 + 0x498) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x4a0) = DAT_1468b5d98;
    *(undefined8 *)(param_1 + 0x4a4) = DAT_1468b5da0;
    *(undefined4 *)(param_1 + 0x4ac) = DAT_1468b5da8;
    if ((*(char *)(param_1 + 0x47c) == '\0') && (*(longlong **)(param_1 + 0x168) != (longlong *)0x0)
       ) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x460))();
      if (cVar1 != '\0') {
        FUN_142398ec0(*(undefined8 *)(param_1 + 0x168),0,2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a6f340 Remove body=358 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar9 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  piVar1 = (int *)((longlong)plVar7 + lVar9 * 4);
  iVar3 = *(int *)((longlong)plVar7 + lVar9 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    lVar8 = (longlong)iVar3;
    lVar5 = *param_1;
    local_res1c = *(undefined4 *)(lVar5 + 4 + lVar8 * 0x14);
    lVar9 = lVar5 + lVar8 * 0x14;
    local_res18 = *(undefined4 *)(lVar5 + lVar8 * 0x14);
    local_res8 = *param_2;
    local_resc = param_2[1];
    cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar6 != '\0') break;
    iVar3 = *(int *)(lVar9 + 0xc);
    piVar1 = (int *)(lVar9 + 0xc);
  }
  iVar3 = *piVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar9 = lVar5 + (longlong)iVar3 * 0x14;
    lVar8 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar9 + 0x10));
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar7 + lVar8 * 4);
    iVar4 = *(int *)((longlong)plVar7 + lVar8 * 4);
    while (iVar4 != -1) {
      if (iVar4 == iVar3) {
        *puVar2 = *(undefined4 *)(lVar9 + 0xc);
        break;
      }
      lVar8 = (longlong)iVar4 * 5 + 3;
      puVar2 = (undefined4 *)(lVar5 + lVar8 * 4);
      iVar4 = *(int *)(lVar5 + lVar8 * 4);
    }
  }
  TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,(longlong)iVar3,1);
  return 1;
}



// FUNCTION 140a6f4b0 FUN_140a6f4b0 body=300 status=ok
// SIG undefined FUN_140a6f4b0(void)

undefined8 FUN_140a6f4b0(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar9 = (longlong)(int)param_1[9] - 1;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  iVar10 = *(int *)((longlong)plVar7 +
                   ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar9) * 4);
  if (iVar10 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar10 * 0x20;
      if (*(longlong *)(lVar6 + lVar3) == param_2) {
        lVar6 = (longlong)iVar10 * 0x20;
        piVar8 = (int *)((longlong)plVar7 + ((longlong)*(int *)(lVar6 + 0x1c + lVar3) & uVar9) * 4);
        iVar2 = *piVar8;
        goto joined_r0x000140a6f53d;
      }
      iVar10 = *(int *)(lVar6 + 0x18 + lVar3);
    } while (iVar10 != -1);
  }
  return 0;
joined_r0x000140a6f53d:
  if (iVar2 == -1) {
LAB_140a6f560:
    bVar4 = (byte)iVar10 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar10;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar6) = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar10;
    plVar7 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar7 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar7 +
                     (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar10) {
    *piVar8 = *(int *)(lVar6 + lVar3 + 0x18);
    goto LAB_140a6f560;
  }
  piVar8 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
  iVar2 = *piVar8;
  goto joined_r0x000140a6f53d;
}



// FUNCTION 140a6f5e0 FUN_140a6f5e0 body=264 status=ok
// SIG undefined FUN_140a6f5e0(void)

void FUN_140a6f5e0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x88);
    iVar3 = param_3;
    do {
      if (plVar2[0xf] != 0) {
        FMemory::Free();
      }
      if (plVar2[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar2[10] != 0) {
        FMemory::Free();
      }
      if (plVar2[8] != 0) {
        FMemory::Free();
      }
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x11;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x88),
                 (void *)((longlong)(param_2 + param_3) * 0x88 + *param_1),(longlong)iVar1 * 0x88);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      FUN_140a700c0(param_1);
    }
  }
  return;
}



// FUNCTION 140a6f6f0 FUN_140a6f6f0 body=237 status=ok
// SIG undefined FUN_140a6f6f0(void)

void FUN_140a6f6f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    uVar5 = 0;
    if (0 < *(int *)(param_1 + 0xc0)) {
      plVar1 = (longlong *)(param_1 + 0xb8);
      plVar2 = (longlong *)*plVar1;
      uVar6 = uVar5;
      while (iVar4 = (int)uVar6, *plVar2 != param_2) {
        uVar6 = (ulonglong)(iVar4 + 1);
        uVar5 = uVar5 + 1;
        plVar2 = plVar2 + 6;
        if ((longlong)*(int *)(param_1 + 0xc0) <= (longlong)uVar5) {
          return;
        }
      }
      lVar7 = (longlong)iVar4 * 0x30;
      FUN_140a73700(param_1,(longlong *)*plVar1 + (longlong)iVar4 * 6);
      FUN_140591060(*plVar1 + 0x18 + lVar7);
      iVar3 = *(int *)(param_1 + 0xc0);
      iVar4 = (iVar3 - iVar4) + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + lVar7),(void *)((longlong)(iVar3 - iVar4) * 0x30 + *plVar1),
                   (longlong)iVar4 * 0x30);
        iVar3 = *(int *)(param_1 + 0xc0);
      }
      *(int *)(param_1 + 0xc0) = iVar3 + -1;
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
    }
  }
  return;
}



// FUNCTION 140a6f7e0 FUN_140a6f7e0 body=83 status=ok
// SIG undefined FUN_140a6f7e0(void)

void FUN_140a6f7e0(longlong param_1)

{
  char cVar1;
  
  FUN_140a6f4b0(param_1 + 0x468);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x45c);
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x470) - *(int *)(param_1 + 0x49c) < 1)) {
    AActor::SetActorTickEnabled(param_1,0);
    return;
  }
  AActor::SetActorTickEnabled(param_1,1);
  return;
}



// FUNCTION 140a6f840 FUN_140a6f840 body=380 status=ok
// SIG undefined FUN_140a6f840(void)

void FUN_140a6f840(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if ((*(char *)(param_1 + 0x570) != '\0') && (param_2 != (longlong *)0x0)) {
    uVar5 = FUN_142e80f20();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
    if (lVar6 != 0) {
      bVar4 = *(byte *)(param_1 + 0x578);
      if ((bVar4 & 1) != 0) {
        *(byte *)(lVar6 + 0x1e8) =
             *(byte *)(lVar6 + 0x1e8) ^ (*(byte *)(param_1 + 0x598) ^ *(byte *)(lVar6 + 0x1e8)) & 1;
        *(undefined8 *)(lVar6 + 0x1f0) = *(undefined8 *)(param_1 + 0x5a0);
        bVar4 = *(byte *)(param_1 + 0x578);
      }
      if ((bVar4 & 2) != 0) {
        plVar1 = (longlong *)(lVar6 + 0x1f8);
        *(byte *)(lVar6 + 0x1e8) =
             *(byte *)(lVar6 + 0x1e8) ^ (*(byte *)(param_1 + 0x598) ^ *(byte *)(lVar6 + 0x1e8)) & 2;
        *(undefined4 *)(lVar6 + 0x200) = 0;
        if (*(int *)(lVar6 + 0x204) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1,0);
        }
        puVar8 = *(undefined8 **)(param_1 + 0x5a8);
        puVar9 = puVar8 + (longlong)*(int *)(param_1 + 0x5b0) * 2;
        for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
          iVar2 = *(int *)(lVar6 + 0x200);
          lVar7 = (longlong)iVar2;
          *(int *)(lVar6 + 0x200) = iVar2 + 1;
          if (*(int *)(lVar6 + 0x204) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          lVar3 = *plVar1;
          *(undefined8 *)(lVar3 + lVar7 * 0x10) = 0;
          *(undefined8 *)(lVar3 + 8 + lVar7 * 0x10) = 0;
          if ((-1 < iVar2) && (iVar2 < *(int *)(lVar6 + 0x200))) {
            *(undefined8 *)(*plVar1 + lVar7 * 0x10) = *puVar8;
            *(undefined8 *)(*plVar1 + 8 + lVar7 * 0x10) = puVar8[1];
          }
        }
        *(undefined4 *)(param_1 + 0x5b0) = 0;
        if (*(int *)(param_1 + 0x5b4) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x5a8),0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a6f9c0 FUN_140a6f9c0 body=530 status=ok
// SIG undefined FUN_140a6f9c0(void)

void FUN_140a6f9c0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 local_res8;
  uint uStack_3c;
  code *local_38;
  longlong lStack_30;
  
  if (*param_1 != 0) {
    plVar1 = param_1 + 0x17;
    plVar12 = (longlong *)*plVar1;
    plVar11 = plVar12 + (longlong)(int)param_1[0x18] * 6;
    for (; plVar12 != plVar11; plVar12 = plVar12 + 6) {
      lVar13 = *plVar12;
      if (lVar13 != 0) {
        iVar5 = *(int *)(lVar13 + 0xc);
        pwVar6 = (wchar_t *)0x0;
        if (iVar5 < (int)DAT_1469e91c4) {
          uVar9 = iVar5 >> 0x1f & 0xffff;
          uVar4 = iVar5 + uVar9;
          pwVar6 = (wchar_t *)
                   (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                   (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18);
        }
        if ((*(uint *)(pwVar6 + 4) >> 0x1d & 1) == 0) {
          lVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lStack_30 = (ulonglong)uStack_3c << 0x20;
            local_38 = FUN_140a6bb00;
            pwVar8 = _guard_xfg_dispatch_icall_nop
                               (L"&UOakCharacterMovementComponent::OnSlidingImpactParticleSystemFinished"
                                ,L"::");
            pwVar6 = (wchar_t *)0x0;
            while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
              pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
              pwVar6 = pwVar3;
            }
            FName::FName(&local_res8,pwVar6 + 2,1);
            FUN_140a4d850(lVar13 + 0x8a8,*param_1,&local_38,local_res8);
            FUN_142600fa0(lVar13);
          }
        }
      }
      FUN_140a73700(param_1,plVar12);
    }
    iVar5 = *(int *)((longlong)param_1 + 0xc4);
    iVar10 = (int)param_1[0x18];
    if (iVar5 < 0) {
      if (iVar10 != 0) {
        lVar13 = *plVar1 + 0x18;
        do {
          FUN_140591060(lVar13);
          lVar13 = lVar13 + 0x30;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar5 = *(int *)((longlong)param_1 + 0xc4);
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (iVar5 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(plVar1,0);
      }
    }
    else {
      if (iVar10 != 0) {
        lVar13 = *plVar1 + 0x18;
        do {
          FUN_140591060(lVar13);
          lVar13 = lVar13 + 0x30;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}



// FUNCTION 140a6fbe0 ResetPredictionData_Client body=83 status=ok
// SIG undefined ResetPredictionData_Client(void)

void INetworkPredictionInterface::ResetPredictionData_Client(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x3b,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::ResetPredictionData_Client");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x3b,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::ResetPredictionData_Client");
  return;
}



// FUNCTION 140a6fc40 ResetPredictionData_Server body=83 status=ok
// SIG undefined ResetPredictionData_Server(void)

void INetworkPredictionInterface::ResetPredictionData_Server(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x3e,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::ResetPredictionData_Server");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x3e,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::ResetPredictionData_Server");
  return;
}



// FUNCTION 140a6fca0 FUN_140a6fca0 body=184 status=ok
// SIG undefined FUN_140a6fca0(void)

void FUN_140a6fca0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1429bed90();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = (**(code **)(*plVar1 + 0x560))(plVar1,param_2);
      if (lVar3 != 0) {
        lVar4 = FUN_1429ba110();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_142589050(lVar3,DAT_146866c08);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a6fd60 FUN_140a6fd60 body=161 status=ok
// SIG undefined FUN_140a6fd60(void)

void FUN_140a6fd60(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x80);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 5);
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
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 5);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar2;
  return;
}



// FUNCTION 140a6fe10 FUN_140a6fe10 body=127 status=ok
// SIG undefined FUN_140a6fe10(void)

void FUN_140a6fe10(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      uVar2 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2,0);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (uVar2 < 5) {
      if (lVar1 == 0) goto LAB_140a6fe7c;
      lVar4 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_140a6fe7c;
      lVar4 = (longlong)(int)uVar2;
    }
    uVar3 = FMemory::Realloc(lVar1,lVar4,0);
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
LAB_140a6fe7c:
  *(uint *)(param_1 + 0x14) = uVar2;
  return;
}



// FUNCTION 140a6fe90 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FOverlapInfo,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x8c,0);
  iVar4 = (int)(uVar3 / 0x8c);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x8c,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140a6ff20 ResizeGrow body=257 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationPtrs>,TInlineAllocator<8,FDefaultAllocator>_>
     ::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x108);
  if (uVar1 < 9) {
    uVar2 = 8;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x10c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 5,0);
    uVar2 = (uint)(uVar3 >> 5);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x10c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x100);
  if (uVar2 < 9) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 5);
    pvVar4 = *(void **)((longlong)param_1 + 0x100);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 5,0);
        *(void **)((longlong)param_1 + 0x100) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 5);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 5;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar5;
  return;
}



// FUNCTION 140a70030 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar2 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x8c) != 0) || (4 < uVar1)) {
      uVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(uVar2 << 5,0);
    uVar2 = uVar3 >> 5 & 0xffffffff;
    if ((int)(uVar3 >> 5) < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x8c) = (int)uVar2;
  FUN_140a6fd60(param_1,param_2,uVar2,0x20);
  return;
}



// FUNCTION 140a700c0 FUN_140a700c0 body=165 status=ok
// SIG undefined FUN_140a700c0(void)

ulonglong FUN_140a700c0(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x88) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x88,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xf0f0f0f0f0f0f0f1) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x88);
      }
      goto LAB_140a70134;
    }
    if (iVar4 == 0) goto LAB_140a70134;
  }
  iVar4 = iVar5;
LAB_140a70134:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x88,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140a70170 FUN_140a70170 body=110 status=ok
// SIG undefined FUN_140a70170(void)

void FUN_140a70170(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = iVar1;
    FUN_140a6fd60(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x20);
  }
  return;
}



// FUNCTION 140a701e0 FUN_140a701e0 body=207 status=ok
// SIG undefined FUN_140a701e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140a701e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_142caa590(param_1,&local_48);
  plVar5 = &local_48;
  if (local_40 != (longlong *)0x0) {
    plVar5 = local_40;
  }
  plVar1 = plVar5 + local_38;
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      lVar4 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_142cb6180(param_2,*(undefined8 *)(lVar2 + 0x1d18));
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140a702b0 FUN_140a702b0 body=127 status=ok
// SIG undefined FUN_140a702b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a702b0(longlong param_1)

{
  longlong lVar1;
  
  FUN_140c54b90();
  if (((*(char *)(param_1 + 0x128) == '\x03') &&
      (((*(float *)(param_1 + 0x2464) != 0.0 || (*(float *)(param_1 + 0x2468) != 0.0)) ||
       (*(float *)(param_1 + 0x246c) != 0.0)))) &&
     (lVar1 = *(longlong *)(param_1 + 0x4c8), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x18c) = *(undefined8 *)(param_1 + 0x2464);
    *(undefined4 *)(lVar1 + 0x194) = *(undefined4 *)(param_1 + 0x246c);
    *(undefined8 *)(param_1 + 0x2464) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x246c) = DAT_1468b5d98;
  }
  return;
}



// FUNCTION 140a70330 FUN_140a70330 body=398 status=ok
// SIG undefined FUN_140a70330(void)

void FUN_140a70330(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  bool bVar9;
  int local_48 [2];
  longlong local_40 [3];
  
  if (param_2 != 0) {
    piVar8 = *(int **)(param_1 + 8);
    piVar1 = piVar8 + (longlong)*(int *)(param_1 + 0x10) * 6;
    for (; piVar8 != piVar1; piVar8 = piVar8 + 6) {
      local_48[0] = *piVar8;
      FString::FString(local_40,piVar8 + 2);
      lVar5 = FUN_140a64130(local_48);
      iVar4 = local_48[0];
      if (lVar5 != 0) {
        plVar7 = *(longlong **)(param_2 + 0x510);
        plVar2 = plVar7 + *(int *)(param_2 + 0x518);
        for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
          lVar3 = *plVar7;
          if (lVar3 == 0) {
LAB_140a7041b:
            bVar9 = false;
          }
          else {
            lVar6 = FUN_1412fc200();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (!bVar9) goto LAB_140a7041b;
            bVar9 = *(int *)(lVar3 + 0x6c0) == iVar4;
          }
          if (bVar9) {
            lVar3 = *plVar7;
            if (lVar3 != 0) {
              lVar6 = FUN_1412fc200();
              if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                FUN_140a70e40(lVar3,lVar5);
              }
            }
            break;
          }
        }
      }
      if (local_40[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140a704f0 FUN_140a704f0 body=49 status=ok
// SIG undefined FUN_140a704f0(void)

void FUN_140a704f0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x950))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140a70517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[0x1b7] + 0x10))(param_1 + 0x1b7,0);
    return;
  }
  return;
}



// FUNCTION 140a70530 FUN_140a70530 body=181 status=ok
// SIG undefined FUN_140a70530(void)

void FUN_140a70530(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x460) == 0) ||
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x460) + 0x508), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x2c70);
  }
  if (param_2 == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  lVar3 = FUN_140e7fd70(param_1 + 0x4a0);
  if (lVar3 != 0) {
    lVar4 = FUN_1413b9340();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = FUN_140a8f2b0(lVar3), cVar2 == '\0')) goto LAB_140a705c3;
  }
  lVar3 = 0;
LAB_140a705c3:
  FUN_140a705f0(lVar5 + 0x1940,param_2,lVar3);
  return;
}



// FUNCTION 140a705f0 FUN_140a705f0 body=417 status=ok
// SIG undefined FUN_140a705f0(void)

void FUN_140a705f0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong local_a8 [6];
  longlong local_78;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_30;
  
  uVar5 = 0;
  if (0 < (int)param_1[1]) {
    do {
      iVar4 = (int)uVar5;
      lVar1 = FUN_140a66460((longlong)iVar4 * 0x88 + *param_1);
      if (lVar1 == param_2) {
        if (iVar4 != -1) goto LAB_140a706bb;
        break;
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while ((int)(iVar4 + 1U) < (int)param_1[1]);
  }
  if (param_3 != 0) {
    iVar4 = (int)param_1[1];
    uVar5 = (ulonglong)iVar4;
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1);
    }
    puVar3 = (undefined8 *)(uVar5 * 0x88 + *param_1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    _guard_xfg_dispatch_icall_nop(puVar3 + 2,0,0x68);
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    if (iVar4 != -1) {
LAB_140a706bb:
      if (param_3 == 0) {
        FUN_140a6f5e0(param_1,uVar5 & 0xffffffff,1,1);
      }
      else {
        lVar1 = *param_1;
        lVar2 = FUN_140a4f090(local_a8,param_3,param_2);
        lVar1 = (longlong)(int)uVar5 * 0x88 + lVar1;
        TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(lVar1,lVar2);
        FString::operator=(lVar1 + 0x78,lVar2 + 0x78);
        if (local_30 != 0) {
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
        if (local_78 != 0) {
          FMemory::Free();
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 140a707a0 FUN_140a707a0 body=46 status=ok
// SIG undefined FUN_140a707a0(void)

undefined8 FUN_140a707a0(undefined8 param_1,undefined8 param_2)

{
  UCharacterMovementComponent::ScaleInputAcceleration();
  FUN_140a54380(param_1,param_2);
  return param_2;
}



// FUNCTION 140a707d0 FUN_140a707d0 body=282 status=ok
// SIG undefined FUN_140a707d0(void)

void FUN_140a707d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (((*(longlong *)(param_1 + 0x698) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x4f0), lVar2 != 0)) &&
     (lVar3 = FUN_140a63ea0(lVar2), 0 < *(int *)(lVar3 + 8))) {
    uVar9 = 0;
    uVar7 = 0;
    lVar3 = FUN_140a63ea0(lVar2);
    uVar6 = uVar9;
    uVar8 = uVar9;
    if (0 < *(int *)(lVar3 + 8)) {
      do {
        uVar7 = (uint)uVar8;
        plVar4 = (longlong *)FUN_140a63ea0(lVar2);
        if (*(longlong *)(uVar6 + *plVar4) == *(longlong *)(param_1 + 0x6c8)) break;
        uVar7 = uVar7 + 1;
        lVar3 = FUN_140a63ea0(lVar2);
        uVar6 = uVar6 + 8;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(lVar3 + 8));
    }
    lVar3 = FUN_140a63ea0(lVar2);
    iVar1 = *(int *)(lVar3 + 8);
    plVar4 = (longlong *)FUN_140a63ea0(lVar2);
    if (*(char *)(param_1 + 0x128) == '\x03') {
      iVar5 = uVar7 + 1;
      if (iVar1 + -1 <= (int)uVar7) {
        iVar5 = 0;
      }
      *(undefined8 *)(param_1 + 0x6c8) = *(undefined8 *)(*plVar4 + (longlong)iVar5 * 8);
      FUN_140a57a50(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x698);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x508) != 0) {
        uVar9 = *(ulonglong *)(*(longlong *)(lVar2 + 0x508) + 0x2c70);
      }
      if (uVar9 != 0) {
        FUN_140a6de60(lVar2,uVar9 + 0x1918);
      }
    }
  }
  return;
}



// FUNCTION 140a708f0 SendClientAdjustment body=83 status=ok
// SIG undefined SendClientAdjustment(void)

void INetworkPredictionInterface::SendClientAdjustment(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x1e,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::SendClientAdjustment");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x1e,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::SendClientAdjustment");
  return;
}



// FUNCTION 140a70950 RemoveMasterSubmixEffect body=103 status=ok
// SIG undefined RemoveMasterSubmixEffect(void)

void Audio::FMixerDevice::RemoveMasterSubmixEffect(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
  }
  local_58[0] = &LAB_140a5a500;
  FUN_142339040(param_1,local_58);
  return;
}



// FUNCTION 140a709c0 FUN_140a709c0 body=83 status=ok
// SIG undefined FUN_140a709c0(void)

void FUN_140a709c0(undefined8 param_1)

{
  undefined8 *puVar1;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = FUN_140a5a490;
  FUN_142339040(param_1,local_58);
  return;
}



// FUNCTION 140a70a20 FUN_140a70a20 body=83 status=ok
// SIG undefined FUN_140a70a20(void)

void FUN_140a70a20(undefined8 param_1)

{
  undefined8 *puVar1;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = FUN_140a5a5d0;
  FUN_142339040(param_1,local_58);
  return;
}



// FUNCTION 140a70a80 FUN_140a70a80 body=212 status=ok
// SIG undefined FUN_140a70a80(void)

void FUN_140a70a80(longlong *param_1,longlong *param_2,float param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar2 != '\0') {
    lVar3 = param_1[0xc3];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(param_1[0x43] + 0x30))();
    }
    lVar1 = param_2[1];
    if (*(float *)(lVar3 + 0x58) <= param_3 && param_3 != *(float *)(lVar3 + 0x58)) {
      *(longlong *)(lVar3 + 0xa8) = *param_2;
      *(int *)(lVar3 + 0xb0) = (int)lVar1;
      *(float *)(lVar3 + 0xb4) = param_3;
      *(undefined4 *)(lVar3 + 0xb8) = param_4;
      FWeakObjectPtr::operator=(lVar3 + 0xbc,param_5);
    }
    else {
      param_1[0x5d6] = *param_2;
      *(int *)(param_1 + 0x5d7) = (int)lVar1;
      param_1[0x5d9] = param_5;
      *(undefined4 *)((longlong)param_1 + 0x2ebc) = param_4;
      FUN_140a5f8d0(param_1);
      FUN_141405330(param_1,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 140a70b60 FUN_140a70b60 body=84 status=ok
// SIG undefined FUN_140a70b60(void)

void FUN_140a70b60(longlong *param_1,byte param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != param_2) {
    FUN_14223c560();
    uVar1 = FUN_1430a79b0();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_14305b430(lVar2,~*(byte *)(param_1 + 0x10) & 1);
      return;
    }
  }
  return;
}



// FUNCTION 140a70bc0 FUN_140a70bc0 body=70 status=ok
// SIG undefined FUN_140a70bc0(void)

void FUN_140a70bc0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_140c57010();
  plVar1 = *(longlong **)(param_1 + 0x23a0);
  if ((plVar1 != (longlong *)0x0) &&
     ((*(byte *)(plVar1 + 0x10) & 1) != (*(byte *)(param_1 + 0x80) & 1))) {
                    /* WARNING: Could not recover jumptable at 0x000140a70bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x310))();
    return;
  }
  return;
}



// FUNCTION 140a70c10 FUN_140a70c10 body=141 status=ok
// SIG undefined FUN_140a70c10(void)

void FUN_140a70c10(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(param_2 + 0x720) != '\0')) {
      return;
    }
  }
  FUN_14231cfe0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a70ca0 FUN_140a70ca0 body=245 status=ok
// SIG undefined FUN_140a70ca0(void)

void FUN_140a70ca0(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x2b78);
  if (lVar4 == 0) {
    FUN_14234fb00();
  }
  else {
    if ((((param_2 != *(longlong *)(lVar4 + 0x4d8)) && (param_2 == 0)) &&
        (lVar3 = FUN_140afb350(), lVar3 != 0)) &&
       ((*(char *)(lVar3 + 0x580) != '\0' &&
        (cVar1 = FUN_140b12ae0(lVar3,*(undefined8 *)(param_1 + 0x2b78)), cVar1 != '\0')))) {
      return;
    }
    lVar3 = *(longlong *)(lVar4 + 0x4d8);
    FUN_14234fb00(param_1,param_2,param_3,param_4);
    if (lVar3 != *(longlong *)(lVar4 + 0x4d8)) {
      lVar4 = FUN_140afb350(*(undefined8 *)(*(longlong *)(param_1 + 0x2b78) + 0x4d8));
      if (((lVar4 == 0) || (*(char *)(lVar4 + 0x580) == '\0')) || (*(char *)(lVar4 + 0x582) == '\0')
         ) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x4000;
      }
      *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) & 0xffffbfff;
      *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) | uVar2;
    }
  }
  return;
}



// FUNCTION 140a70da0 FUN_140a70da0 body=120 status=ok
// SIG undefined FUN_140a70da0(void)

void FUN_140a70da0(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res18 [2];
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_res18[0] = param_3;
    if (param_2 == '\0') {
      FUN_142dbb5d0(param_1 + 0x20,local_res18);
    }
    else {
      FUN_142dafbc0();
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar1 + 0x910);
    }
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x840) >> 3 & 1) != 0)) {
      if (lVar1 != 0) {
        iVar2 = FUN_142235230();
        if (iVar2 != 3) {
          FUN_140a76ae0(param_1);
        }
      }
      FUN_140a5af40(param_1);
    }
  }
  return;
}



// FUNCTION 140a70e20 FUN_140a70e20 body=22 status=ok
// SIG undefined FUN_140a70e20(void)

void FUN_140a70e20(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    *(undefined8 *)(param_1 + 0x6c8) = param_2;
    FUN_140a57a50();
    return;
  }
  return;
}



// FUNCTION 140a70e40 FUN_140a70e40 body=177 status=ok
// SIG undefined FUN_140a70e40(void)

void FUN_140a70e40(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0x698) == 0) {
      return;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x4f0);
    if (lVar2 == 0) {
      return;
    }
    lVar5 = FUN_140a63ea0(lVar2);
    if (*(int *)(lVar5 + 8) < 1) {
      return;
    }
    lVar5 = FUN_140a63ea0(lVar2);
    iVar1 = *(int *)(lVar5 + 8);
    if (iVar1 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = rand();
      iVar4 = (int)((float)iVar3 * 3.051851e-05 * (float)iVar1);
      iVar3 = iVar1 + -1;
      if (iVar4 <= iVar1 + -1) {
        iVar3 = iVar4;
      }
    }
    plVar6 = (longlong *)FUN_140a63ea0(lVar2);
    param_2 = *(longlong *)(*plVar6 + (longlong)iVar3 * 8);
    if (param_2 == 0) {
      return;
    }
  }
  *(longlong *)(param_1 + 0x6b8) = param_2;
  return;
}



// FUNCTION 140a70f00 FUN_140a70f00 body=97 status=ok
// SIG undefined FUN_140a70f00(void)

void FUN_140a70f00(longlong param_1,longlong param_2)

{
  FUN_142cff370();
  *(uint *)(param_1 + 0x388) =
       *(uint *)(param_1 + 0x388) ^
       ((uint)*(byte *)(*(longlong *)(param_2 + 0xe68) + 0x2bc0) << 3 ^ *(uint *)(param_1 + 0x388))
       & 8;
  if ((*(byte *)(param_1 + 0x388) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(*(longlong *)(param_2 + 0xe68) + 0x2bc4);
  }
  return;
}



// FUNCTION 140a70f70 FUN_140a70f70 body=109 status=ok
// SIG undefined FUN_140a70f70(void)

void FUN_140a70f70(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142ceefb0(param_1,param_3);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
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
      FUN_140d134c0(lVar2,param_2,DAT_146b31760);
    }
  }
  return;
}



// FUNCTION 140a70fe0 FUN_140a70fe0 body=111 status=ok
// SIG undefined FUN_140a70fe0(void)

void FUN_140a70fe0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_142cff6b0();
  lVar1 = *(longlong *)(param_2 + 0xe68);
  *(uint *)(param_1 + 0x388) =
       *(uint *)(param_1 + 0x388) ^ (*(uint *)(param_1 + 0x388) ^ *(uint *)(lVar1 + 0x2ac0)) & 1;
  *(uint *)(param_1 + 0x388) =
       (*(uint *)(lVar1 + 0x2ac0) >> 2 ^ *(uint *)(param_1 + 0x388)) & 4 ^
       *(uint *)(param_1 + 0x388);
  if (0 < *(int *)(lVar1 + 0x2bb8)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
  }
  return;
}



// FUNCTION 140a71050 FUN_140a71050 body=178 status=ok
// SIG undefined FUN_140a71050(void)

void FUN_140a71050(longlong param_1,int param_2,undefined1 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0x2e98) != '\0') && (iVar2 = FUN_14233f450(), 1 < iVar2)) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x220);
  if (lVar4 != 0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a710c4;
  }
  lVar4 = 0;
LAB_140a710c4:
  if ((((param_2 == 0) || (lVar4 == 0)) || (*(char *)(lVar4 + 0x128) != '\x03')) ||
     (*(char *)(lVar4 + 0x24d0) == '\0')) {
    FUN_142cff700(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140a71110 FUN_140a71110 body=86 status=ok
// SIG undefined FUN_140a71110(void)

void FUN_140a71110(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,float param_6)

{
  if (((param_2 == *(longlong *)(param_1 + 0x1d0)) && (param_3 == *(int *)(param_1 + 0x1d8))) &&
     (param_6 == *(float *)(param_1 + 0x1f0))) {
    return;
  }
  *(longlong *)(param_1 + 0x1d0) = param_2;
  *(undefined8 *)(param_1 + 0x1e8) = param_5;
  *(float *)(param_1 + 0x1f0) = param_6;
  *(int *)(param_1 + 0x1d8) = param_3;
  *(undefined8 *)(param_1 + 0x1e0) = param_4;
  FUN_14288e3d0(param_1 + 0x30,1);
  return;
}



// FUNCTION 140a71170 FUN_140a71170 body=923 status=ok
// SIG undefined FUN_140a71170(void)

void FUN_140a71170(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  longlong local_res10;
  int local_48;
  int local_44;
  longlong local_40;
  
  *(longlong *)(param_1 + 0x28) = param_2;
  if (param_2 != 0) {
    plVar14 = (longlong *)(param_2 + 0x510);
    plVar3 = (longlong *)*plVar14;
    plVar1 = (longlong *)(param_1 + -0x458);
    iVar2 = *(int *)(param_2 + 0x518);
    for (plVar11 = plVar3; plVar11 != plVar3 + iVar2; plVar11 = plVar11 + 1) {
      if ((longlong *)*plVar11 == plVar1) {
        if ((int)((longlong)plVar11 - (longlong)plVar3 >> 3) != -1) goto LAB_140a71208;
        break;
      }
    }
    *(int *)(param_2 + 0x518) = iVar2 + 1;
    if (*(int *)(param_2 + 0x51c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar2);
    }
    *(longlong **)((longlong)iVar2 * 8 + *plVar14) = plVar1;
LAB_140a71208:
    pwVar15 = (wchar_t *)0x0;
    pwVar7 = _guard_xfg_dispatch_icall_nop
                       (L"&ACrewQuartersCountdownActor::OnRoomChangeCountdown",L"::");
    pwVar5 = pwVar15;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar8 = local_res10;
    lVar10 = *(longlong *)(param_1 + 0x28);
    plVar14 = (longlong *)(lVar10 + 0x540);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,plVar1);
    local_40 = lVar8;
    if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_40);
    }
    piVar12 = (int *)*plVar14;
    iVar2 = *(int *)(lVar10 + 0x548);
    for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar2 * 4; piVar13 = piVar13 + 4) {
      if ((((*piVar13 == local_48) && (piVar13[1] == local_44)) ||
          ((cVar6 = FWeakObjectPtr::IsValid(piVar13), cVar6 == '\0' &&
           (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) &&
         (*(longlong *)(piVar13 + 2) == local_40)) {
        if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140a71341;
        break;
      }
    }
    iVar2 = *(int *)(lVar10 + 0x548);
    *(int *)(lVar10 + 0x548) = iVar2 + 1;
    if (*(int *)(lVar10 + 0x54c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar2);
    }
    piVar12 = (int *)((longlong)iVar2 * 0x10 + *plVar14);
    *piVar12 = local_48;
    piVar12[1] = local_44;
    *(longlong *)(piVar12 + 2) = local_40;
LAB_140a71341:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ACrewQuartersCountdownActor::OnRoomChanging",L"::");
    pwVar5 = pwVar15;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar10 = *(longlong *)(param_1 + 0x28);
    plVar14 = (longlong *)(lVar10 + 0x530);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,plVar1);
    local_40 = local_res10;
    if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_40);
    }
    piVar12 = (int *)*plVar14;
    iVar2 = *(int *)(lVar10 + 0x538);
    for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar2 * 4; piVar13 = piVar13 + 4) {
      if ((((*piVar13 == local_48) && (piVar13[1] == local_44)) ||
          ((cVar6 = FWeakObjectPtr::IsValid(piVar13), cVar6 == '\0' &&
           (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) &&
         (*(longlong *)(piVar13 + 2) == local_40)) {
        if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140a71481;
        break;
      }
    }
    iVar2 = *(int *)(lVar10 + 0x538);
    *(int *)(lVar10 + 0x538) = iVar2 + 1;
    if (*(int *)(lVar10 + 0x53c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar2);
    }
    piVar12 = (int *)((longlong)iVar2 * 0x10 + *plVar14);
    *piVar12 = local_48;
    piVar12[1] = local_44;
    *(longlong *)(piVar12 + 2) = local_40;
LAB_140a71481:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
    uVar9 = FUN_141437710();
    lVar10 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar9);
    if (lVar10 != 0) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x508);
      if (lVar8 != 0) {
        pwVar15 = *(wchar_t **)(lVar8 + 0x2c70);
      }
      FWeakObjectPtr::operator=(lVar10 + 600,pwVar15);
      *(undefined8 *)(lVar10 + 0x268) = *(undefined8 *)(lVar10 + 0x180);
      *(undefined1 *)(lVar10 + 0x260) = 1;
    }
  }
  return;
}



// FUNCTION 140a71510 FUN_140a71510 body=553 status=ok
// SIG undefined FUN_140a71510(void)

void FUN_140a71510(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int *piVar12;
  longlong lVar13;
  int local_28 [2];
  longlong local_20 [3];
  
  plVar1 = (longlong *)(param_1 + -0x660);
  *(undefined8 *)(param_1 + 0x38) = param_2;
  (**(code **)(*plVar1 + 0x260))(plVar1);
  lVar9 = *(longlong *)(param_1 + 0x38);
  lVar13 = 0;
  if (lVar9 != 0) {
    plVar11 = (longlong *)(lVar9 + 0x510);
    puVar4 = (undefined8 *)*plVar11;
    iVar3 = *(int *)(lVar9 + 0x518);
    for (puVar7 = puVar4; puVar7 != puVar4 + iVar3; puVar7 = puVar7 + 1) {
      if ((longlong *)*puVar7 == plVar1) {
        if ((int)((longlong)puVar7 - (longlong)puVar4 >> 3) != -1) goto LAB_140a715a6;
        break;
      }
    }
    *(int *)(lVar9 + 0x518) = iVar3 + 1;
    if (*(int *)(lVar9 + 0x51c) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11);
    }
    *(longlong **)(*plVar11 + (longlong)iVar3 * 8) = plVar1;
LAB_140a715a6:
    uVar8 = FUN_141437710();
    lVar9 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar8);
    if (lVar9 != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x508);
      lVar10 = lVar13;
      if (lVar5 != 0) {
        lVar10 = *(longlong *)(lVar5 + 0x2c70);
      }
      FWeakObjectPtr::operator=(lVar9 + 600,lVar10);
      *(undefined8 *)(lVar9 + 0x268) = *(undefined8 *)(lVar9 + 0x180);
      *(undefined1 *)(lVar9 + 0x260) = 1;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x38);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x128) == '\x03') {
      if (*(longlong *)(lVar9 + 0x508) != 0) {
        lVar13 = *(longlong *)(*(longlong *)(lVar9 + 0x508) + 0x2c70);
      }
      if (lVar13 != 0) {
        if (plVar1 == (longlong *)0x0) {
          FUN_140a70330(lVar13 + 0x1918);
        }
        else {
          lVar9 = FUN_1412fc200();
          if ((*(int *)(*(longlong *)(param_1 + -0x650) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + -0x650) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            piVar12 = *(int **)(lVar13 + 0x1920);
            piVar2 = piVar12 + (longlong)*(int *)(lVar13 + 0x1928) * 6;
            for (; piVar12 != piVar2; piVar12 = piVar12 + 6) {
              local_28[0] = *piVar12;
              FString::FString(local_20,piVar12 + 2);
              lVar9 = FUN_140a64130(local_28);
              if ((lVar9 != 0) && (*(int *)(param_1 + 0x60) == local_28[0])) {
                FUN_140a70e40(plVar1,lVar9);
              }
              if (local_20[0] != 0) {
                FMemory::Free();
              }
            }
          }
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x58) != *(longlong *)(param_1 + 0x68)) &&
       (*(char *)(param_1 + -0x538) == '\x03')) {
      *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x58);
      FUN_140a57a50(plVar1);
    }
  }
  return;
}



// FUNCTION 140a71740 FUN_140a71740 body=268 status=ok
// SIG undefined FUN_140a71740(void)

void FUN_140a71740(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *(longlong *)(param_1 + 8) = param_2;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + -0x458);
    plVar2 = (longlong *)(param_2 + 0x510);
    plVar4 = (longlong *)*plVar2;
    iVar3 = *(int *)(param_2 + 0x518);
    for (plVar8 = plVar4; plVar8 != plVar4 + iVar3; plVar8 = plVar8 + 1) {
      if ((longlong *)*plVar8 == plVar1) {
        if ((int)((longlong)plVar8 - (longlong)plVar4 >> 3) != -1) goto LAB_140a717c8;
        break;
      }
    }
    *(int *)(param_2 + 0x518) = iVar3 + 1;
    if (*(int *)(param_2 + 0x51c) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar3);
    }
    *(longlong **)((longlong)iVar3 * 8 + *plVar2) = plVar1;
LAB_140a717c8:
    uVar6 = FUN_141437710();
    lVar7 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
    if (lVar7 != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x508);
      uVar6 = 0;
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(lVar5 + 0x2c70);
      }
      FWeakObjectPtr::operator=(lVar7 + 600,uVar6);
      *(undefined8 *)(lVar7 + 0x268) = *(undefined8 *)(lVar7 + 0x180);
      *(undefined1 *)(lVar7 + 0x260) = 1;
    }
  }
  if (*(char *)(param_1 + -0x330) == '\x03') {
    FUN_140a57200(param_1 + -0x458);
    return;
  }
  return;
}



// FUNCTION 140a71850 FUN_140a71850 body=258 status=ok
// SIG undefined FUN_140a71850(void)

void FUN_140a71850(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  
  plVar1 = (longlong *)(param_1 + -0x660);
  *(undefined8 *)(param_1 + 0x38) = param_2;
  (**(code **)(*plVar1 + 0x260))(plVar1);
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 != 0) {
    plVar8 = (longlong *)(lVar6 + 0x510);
    puVar3 = (undefined8 *)*plVar8;
    iVar2 = *(int *)(lVar6 + 0x518);
    for (puVar7 = puVar3; puVar7 != puVar3 + iVar2; puVar7 = puVar7 + 1) {
      if ((longlong *)*puVar7 == plVar1) {
        if ((int)((longlong)puVar7 - (longlong)puVar3 >> 3) != -1) goto LAB_140a718e8;
        break;
      }
    }
    *(int *)(lVar6 + 0x518) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x51c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar2);
    }
    *(longlong **)((longlong)iVar2 * 8 + *plVar8) = plVar1;
LAB_140a718e8:
    uVar5 = FUN_141437710();
    lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    if (lVar6 != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x508);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(lVar4 + 0x2c70);
      }
      FWeakObjectPtr::operator=(lVar6 + 600,uVar5);
      *(undefined8 *)(lVar6 + 0x268) = *(undefined8 *)(lVar6 + 0x180);
      *(undefined1 *)(lVar6 + 0x260) = 1;
    }
  }
  return;
}



// FUNCTION 140a71960 FUN_140a71960 body=168 status=ok
// SIG undefined FUN_140a71960(void)

void FUN_140a71960(longlong param_1,undefined1 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1429bed90();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = (**(code **)(*plVar1 + 0x5a8))(plVar1,param_2,0,0);
      if (lVar3 != 0) {
        local_18 = *param_3;
        uStack_14 = param_3[1];
        uStack_10 = param_3[2];
        uStack_c = param_3[3];
        FUN_1425a2be0(lVar3,DAT_146866c08,&local_18);
      }
    }
  }
  return;
}



// FUNCTION 140a71a10 FUN_140a71a10 body=45 status=ok
// SIG undefined FUN_140a71a10(void)

void FUN_140a71a10(longlong *param_1,char param_2)

{
  if ((((*param_1 != 0) && (param_1[6] != 0)) && (param_1[7] != 0)) &&
     ((param_2 != (char)param_1[5] && (*(char *)(param_1[6] + 0x128) == '\x03')))) {
    *(char *)(param_1 + 10) = param_2;
    FUN_140a71ab0();
    return;
  }
  return;
}



// FUNCTION 140a71a40 FUN_140a71a40 body=97 status=ok
// SIG undefined FUN_140a71a40(void)

void FUN_140a71a40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = param_1[3];
  lVar3 = lVar1;
  do {
    if (lVar3 == (longlong)(int)param_1[4] * 0x20 + lVar1) {
      cVar2 = -1;
LAB_140a71a68:
      if ((((*param_1 != 0) && (param_1[6] != 0)) && (param_1[7] != 0)) &&
         ((cVar2 != (char)param_1[5] && (*(char *)(param_1[6] + 0x128) == '\x03')))) {
        *(char *)(param_1 + 10) = cVar2;
        FUN_140a71ab0(param_1,cVar2);
        return;
      }
      return;
    }
    if (*(longlong *)(lVar3 + 0x10) == param_2) {
      cVar2 = (char)(lVar3 - lVar1 >> 5);
      goto LAB_140a71a68;
    }
    lVar3 = lVar3 + 0x20;
  } while( true );
}



// FUNCTION 140a71ab0 FUN_140a71ab0 body=800 status=ok
// SIG undefined FUN_140a71ab0(void)

void FUN_140a71ab0(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  ulonglong local_218;
  longlong *local_210;
  ulonglong local_208;
  longlong *plStack_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  ulonglong local_1d8 [2];
  undefined1 local_1c8 [49];
  undefined1 local_197;
  undefined1 local_f8 [208];
  
  uVar15 = 0;
  if (param_2 == *(byte *)(param_1 + 0x28)) {
    return;
  }
  if (*(int *)(param_1 + 0x20) <= (int)(uint)param_2) {
    return;
  }
  puVar1 = (ulonglong *)(param_1 + 0x40);
  lVar16 = (ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 0x18);
  *(byte *)(param_1 + 0x28) = param_2;
  if ((*puVar1 != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x48) + 8);
    LOCK();
    iVar8 = *piVar2;
    if (iVar8 == 0) {
      *piVar2 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      local_210 = *(longlong **)(param_1 + 0x48);
      local_218 = 0;
      if (local_210 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_210 + 1);
        bVar17 = uVar3 == 0;
        if (bVar17) {
          *(uint *)(local_210 + 1) = 0;
          uVar9 = uVar15;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar17) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar17 = iVar8 == (int)local_210[1];
          if (bVar17) {
            *(int *)(local_210 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar17) {
            local_218 = *puVar1;
            puVar13 = &local_218;
            bVar6 = true;
            bVar17 = false;
            local_1f8 = local_218;
            goto LAB_140a71b9a;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_210 + 1);
          bVar17 = uVar3 == 0;
          if (bVar17) {
            *(uint *)(local_210 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_210 = (longlong *)0x0;
      }
      puVar13 = &local_218;
      bVar6 = true;
      bVar17 = false;
      local_1f8 = 0;
      goto LAB_140a71b9a;
    }
  }
  puVar13 = &local_208;
  local_208 = 0;
  plStack_200 = (longlong *)0x0;
  bVar6 = false;
  bVar17 = true;
  local_1f8 = uVar15;
LAB_140a71b9a:
  local_1f0 = puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  FUN_142c84750(*(undefined8 *)(param_1 + 0x38),&local_1f8);
  plVar4 = plStack_200;
  if ((bVar17) && (plStack_200 != (longlong *)0x0)) {
    LOCK();
    plVar14 = plStack_200 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_200)(plStack_200);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_200 + 8))(plStack_200,1);
      }
    }
  }
  plVar4 = local_210;
  if ((bVar6) && (local_210 != (longlong *)0x0)) {
    LOCK();
    plVar14 = local_210 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_210 + 8))(local_210,1);
      }
    }
  }
  if (puVar1 != local_1d8) {
    *puVar1 = 0;
    plVar4 = *(longlong **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (*(longlong *)(lVar16 + 0x18) != 0) {
    lVar10 = FUN_1413d5810();
    for (lVar7 = *(longlong *)(lVar16 + 0x18); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar10) {
        if (*(longlong *)(lVar16 + 0x18) == 0) {
          return;
        }
        FUN_142c62180(local_1c8);
        local_197 = 2;
        uVar9 = uVar15;
        if (*(longlong *)(lVar16 + 0x18) != 0) {
          uVar11 = FUN_1413d5810();
          for (uVar5 = *(ulonglong *)(lVar16 + 0x18);
              (uVar9 = uVar15, uVar5 != 0 &&
              (uVar9 = *(ulonglong *)(lVar16 + 0x18), uVar5 != uVar11));
              uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
          }
        }
        uVar12 = FUN_1405e0fd0(local_f8,local_1c8);
        puVar13 = (ulonglong *)
                  FUN_142c7bb40(*(undefined8 *)(param_1 + 0x38),local_1e8,uVar9,uVar12,0);
        *puVar1 = *puVar13;
        plVar4 = (longlong *)puVar13[1];
        plVar14 = *(longlong **)(param_1 + 0x48);
        if (plVar4 != plVar14) {
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
            UNLOCK();
            plVar14 = *(longlong **)(param_1 + 0x48);
          }
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
          *(longlong **)(param_1 + 0x48) = plVar4;
        }
        if (local_1e0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_1e0 + 1;
          lVar16 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_1e0)(local_1e0);
            LOCK();
            piVar2 = (int *)((longlong)local_1e0 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_1e0 + 8))(local_1e0,1);
            }
          }
        }
        FUN_142c63c50(local_1c8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a71dd0 FUN_140a71dd0 body=23 status=ok
// SIG undefined FUN_140a71dd0(void)

void FUN_140a71dd0(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x6ba) = param_2 >> 1 & 1;
  *(byte *)(param_1 + 0x6a8) = param_2 & 1;
  return;
}



// FUNCTION 140a71df0 FUN_140a71df0 body=350 status=ok
// SIG undefined FUN_140a71df0(void)

void FUN_140a71df0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_142cffbc0();
  lVar5 = *(longlong *)(param_1 + 0x208);
  if (lVar5 != 0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a71e46;
  }
  lVar5 = 0;
LAB_140a71e46:
  lVar2 = *(longlong *)(param_1 + 0x2928);
  *(longlong *)(param_1 + 0x2b78) = lVar5;
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x1028);
    uVar3 = *(undefined8 *)(lVar2 + 0x1020);
  }
  *(undefined8 *)(param_1 + 0x2bd8) = uVar3;
  *(undefined4 *)(param_1 + 0x2c80) = 0xc47a0000;
  *(longlong *)(param_1 + 0x2bd0) = param_1;
  *(undefined8 *)(param_1 + 0x2be0) = uVar4;
  *(undefined1 *)(param_1 + 0x2be8) = 0;
  *(undefined1 *)(param_1 + 0x2ca0) = 1;
  *(undefined4 *)(param_1 + 0x2d68) = 0xc47a0000;
  *(longlong *)(param_1 + 0x2cb8) = param_1;
  *(undefined8 *)(param_1 + 0x2cc0) = 0;
  *(undefined8 *)(param_1 + 0x2cc8) = 0;
  *(undefined1 *)(param_1 + 0x2cd0) = 0;
  *(undefined1 *)(param_1 + 0x2d88) = 0;
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x2c98) = *(undefined8 *)(lVar2 + 0x1038);
    *(undefined8 *)(param_1 + 0x2d80) = *(undefined8 *)(lVar2 + 0x1038);
  }
  *(undefined8 *)(param_1 + 0x2da8) = *(undefined8 *)(param_1 + 0x2948);
  *(undefined8 *)(param_1 + 0x2db0) = *(undefined8 *)(param_1 + 0x2950);
  *(undefined4 *)(param_1 + 0x2e50) = 0xc47a0000;
  *(longlong *)(param_1 + 0x2da0) = param_1;
  *(undefined1 *)(param_1 + 0x2db8) = 1;
  *(undefined1 *)(param_1 + 0x2e70) = 0;
  *(undefined8 *)(param_1 + 0x2e68) = *(undefined8 *)(param_1 + 0x2970);
  return;
}



// FUNCTION 140a71f50 FUN_140a71f50 body=72 status=ok
// SIG undefined FUN_140a71f50(void)

void FUN_140a71f50(longlong param_1,char param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x168) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x460))();
    if (cVar1 != param_2) {
      FUN_142398ec0(*(undefined8 *)(param_1 + 0x168),param_2,2);
    }
  }
  return;
}



// FUNCTION 140a71fa0 FUN_140a71fa0 body=970 status=ok
// SIG undefined FUN_140a71fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a71fa0(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  char local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  longlong *local_a0;
  ushort local_86;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar2 = (**(code **)(*param_1 + 0x148))();
  lVar3 = FUN_1409ab5c0(param_1[0x470],*param_2);
  lVar11 = 0;
  if (lVar3 == 0) {
LAB_140a72027:
    lVar3 = lVar11;
  }
  else {
    lVar4 = FUN_1413e04a0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a72027;
  }
  lVar4 = FUN_1409ab5c0(param_1[0x470],param_2[1]);
  if (lVar4 != 0) {
    lVar5 = FUN_1413e04a0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a7207b;
  }
  lVar4 = lVar11;
LAB_140a7207b:
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x110) == '\a') {
      puVar9 = (undefined8 *)param_1[0x453];
      local_e8 = (*(char *)(param_2 + 3) == '\x01') + '\x01';
      puVar6 = puVar9 + (longlong)(int)param_1[0x454] * 4;
      for (; puVar9 != puVar6; puVar9 = puVar9 + 4) {
        if (*(char *)(puVar9 + 3) == local_e8) {
          if (puVar9 == (undefined8 *)0x0) {
            return;
          }
          lVar3 = FUN_1409ab5c0(param_1[0x470],*puVar9);
          if (lVar3 == 0) {
LAB_140a72129:
            lVar3 = lVar11;
          }
          else {
            lVar4 = FUN_1413e04a0();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_140a72129;
          }
          lVar4 = FUN_1409ab5c0(param_1[0x470],puVar9[1]);
          if (lVar4 != 0) {
            lVar5 = FUN_1413e04a0();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) goto LAB_140a7217d;
          }
          lVar4 = lVar11;
          goto LAB_140a7217d;
        }
      }
    }
    else {
LAB_140a7217d:
      if ((lVar3 != 0) && (lVar2 != 0)) {
        if ((lVar4 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x118), lVar5 != 0)) {
          lVar7 = FUN_141499e60();
          lVar8 = lVar5;
          do {
            if (lVar8 == lVar7) goto LAB_140a721c5;
            lVar8 = *(longlong *)(lVar8 + 0x30);
          } while (lVar8 != 0);
        }
        lVar5 = *(longlong *)(lVar3 + 0x108);
LAB_140a721c5:
        if (lVar5 != 0) {
          lVar8 = FUN_141499e60();
          lVar3 = lVar5;
          do {
            if (lVar3 == lVar8) {
              FActorSpawnParameters::FActorSpawnParameters(local_b0);
              local_86 = local_86 | 2;
              if (param_1[0x2d] == 0) {
                puVar9 = (undefined8 *)&DAT_1468b5b70;
              }
              else {
                puVar9 = (undefined8 *)(param_1[0x2d] + 0x210);
              }
              local_78 = *puVar9;
              uStack_70 = puVar9[1];
              local_68 = *(undefined4 *)(puVar9 + 2);
              uStack_64 = *(undefined4 *)((longlong)puVar9 + 0x14);
              uStack_60 = *(undefined4 *)(puVar9 + 3);
              uStack_5c = *(undefined4 *)((longlong)puVar9 + 0x1c);
              local_58 = *(undefined4 *)(puVar9 + 4);
              uStack_54 = *(undefined4 *)((longlong)puVar9 + 0x24);
              uStack_50 = *(undefined4 *)(puVar9 + 5);
              uStack_4c = *(undefined4 *)((longlong)puVar9 + 0x2c);
              local_a0 = param_1;
              lVar8 = FUN_141499e60();
              lVar3 = lVar5;
              goto LAB_140a72235;
            }
            lVar3 = *(longlong *)(lVar3 + 0x30);
          } while (lVar3 != 0);
        }
      }
    }
  }
  return;
  while (lVar3 = *(longlong *)(lVar3 + 0x30), lVar7 = lVar11, lVar3 != 0) {
LAB_140a72235:
    lVar7 = lVar5;
    if (lVar3 == lVar8) break;
  }
  uVar10 = FUN_142550d00(lVar2,lVar7,&local_78,local_b0);
  local_f8 = 0;
  FUN_140c57820(param_1,uVar10,param_2[2],0);
  FUN_1412726b0(uVar10,param_1,param_2,lVar4);
  FWeakObjectPtr::operator=(&local_d0,0);
  local_c8 = 0;
  puVar9 = (undefined8 *)FName::FName(&local_e0,L"OnHardPointUseStateChanged",1);
  FWeakObjectPtr::operator=(&local_d0,param_1);
  local_d8 = *puVar9;
  local_e0 = local_d0;
  local_dc = local_cc;
  local_c8 = local_d8;
  FUN_143088a40(uVar10,&local_e0,0,0);
  FWeakObjectPtr::operator=(&local_c0,0);
  local_b8 = 0;
  puVar9 = (undefined8 *)FName::FName(&local_e0,L"OnHardPointUseStateChanged",1);
  FWeakObjectPtr::operator=(&local_c0,param_1);
  local_d8 = *puVar9;
  local_e0 = local_c0;
  local_dc = local_bc;
  local_b8 = local_d8;
  FUN_143088a40(uVar10,&local_e0,2,0);
  return;
}



// FUNCTION 140a72370 FUN_140a72370 body=73 status=ok
// SIG undefined FUN_140a72370(void)

void FUN_140a72370(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = UAnimMontage::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if ((lVar2 != 0) && (param_2 != 0)) {
    FUN_1412d09a0(lVar2,*(undefined8 *)(param_2 + 0x2ad0));
  }
  return;
}



// FUNCTION 140a723c0 FUN_140a723c0 body=103 status=ok
// SIG undefined FUN_140a723c0(void)

void FUN_140a723c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NoCollisionPhysics",1);
  (**(code **)(lVar1 + 0x640))(param_1,*puVar2);
  (**(code **)(*param_1 + 0x830))(param_1,2,2);
                    /* WARNING: Could not recover jumptable at 0x000140a72420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x830))(param_1,6,2);
  return;
}



// FUNCTION 140a72430 FUN_140a72430 body=837 status=ok
// SIG undefined FUN_140a72430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a72430(longlong *param_1,longlong param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_98 [2];
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80 [16];
  longlong *local_70;
  longlong local_68;
  undefined1 local_58;
  ushort local_56;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
    cVar11 = '\0';
  }
  else {
    cVar11 = *(char *)(param_2 + 0x110);
  }
  if (cVar11 == '\x02') {
    puVar12 = (undefined8 *)param_1[0x453];
    puVar9 = puVar12 + (longlong)(int)param_1[0x454] * 4;
    local_90 = 1;
    for (puVar13 = puVar12;
        (puVar10 = (undefined8 *)0x0, puVar13 != puVar9 &&
        (puVar10 = puVar13, *(char *)(puVar13 + 3) != '\x01')); puVar13 = puVar13 + 4) {
    }
    local_88 = 2;
    for (; (puVar13 = (undefined8 *)0x0, puVar12 != puVar9 &&
           (puVar13 = puVar12, *(char *)(puVar12 + 3) != '\x02')); puVar12 = puVar12 + 4) {
    }
    if (puVar10 == (undefined8 *)0x0) {
      return;
    }
    if (puVar13 == (undefined8 *)0x0) {
      return;
    }
    if (param_1[0x470] == 0) {
      return;
    }
    lVar4 = FUN_1409ab5c0(param_1[0x470],*puVar10);
    lVar3 = FUN_1409ab5c0(param_1[0x470],*puVar13);
    if (lVar4 != lVar3) {
      return;
    }
  }
  else if ((cVar11 == '\x03') && (param_1[0x460] != 0)) {
    lVar3 = FUN_1414bbb50();
    for (lVar4 = param_1[0x460]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar3) {
        if (((param_1[0x460] != 0) && (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)
            ) && ((char)param_1[0x48e] == '\0')) {
          FActorSpawnParameters::FActorSpawnParameters(local_80);
          local_56 = local_56 | 6;
          local_68 = param_1[0x2a];
          local_58 = 1;
          local_70 = param_1;
          if (param_1[0x460] == 0) goto LAB_140a72540;
          lVar5 = FUN_1414bbb50();
          lVar4 = param_1[0x460];
          lVar3 = lVar4;
          goto joined_r0x000140a72530;
        }
        break;
      }
    }
  }
  goto LAB_140a726f3;
joined_r0x000140a72530:
  if (lVar3 == 0) goto LAB_140a72540;
  if (lVar3 == lVar5) goto LAB_140a72542;
  lVar3 = *(longlong *)(lVar3 + 0x30);
  goto joined_r0x000140a72530;
LAB_140a72540:
  lVar4 = 0;
LAB_140a72542:
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  local_a8 = local_80;
  plVar7 = (longlong *)UWorld::SpawnActor(uVar6,lVar4,0,0);
  param_1[0x474] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    uVar6 = UAnimMontage::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
    if ((lVar4 != 0) && (plVar7 = (longlong *)param_1[0x2a], plVar7 != (longlong *)0x0)) {
      uVar6 = FUN_142dfdf30();
      uVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
      FUN_1412d09a0(lVar4,uVar6);
    }
    lVar4 = param_1[0x2d];
    if (lVar4 == 0) {
      local_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      local_28 = _DAT_146866760 & _DAT_146866770;
      uStack_24 = uRam0000000146866764 & uRam0000000146866774;
      uStack_20 = uRam0000000146866768 & uRam0000000146866778;
      uStack_1c = uRam000000014686676c & uRam000000014686677c;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = uRam000000014686676c;
    }
    else {
      local_48 = *(undefined4 *)(lVar4 + 0x210);
      uStack_44 = *(undefined4 *)(lVar4 + 0x214);
      uStack_40 = *(undefined4 *)(lVar4 + 0x218);
      local_38 = *(undefined4 *)(lVar4 + 0x220);
      uStack_34 = *(undefined4 *)(lVar4 + 0x224);
      uStack_30 = *(undefined4 *)(lVar4 + 0x228);
      uStack_2c = *(undefined4 *)(lVar4 + 0x22c);
      local_28 = *(uint *)(lVar4 + 0x230);
      uStack_24 = *(uint *)(lVar4 + 0x234);
      uStack_20 = *(uint *)(lVar4 + 0x238);
      uStack_1c = *(uint *)(lVar4 + 0x23c);
      uStack_3c = *(uint *)(lVar4 + 0x21c);
    }
    FUN_14222b9f0(param_1[0x474],&local_48,0,0);
    local_98[0] = 0x20202;
    FUN_1422232e0(param_1[0x474],param_1[0x98],local_98,param_1[0x461]);
  }
LAB_140a726f3:
  plVar7 = param_1 + 0x475;
  pcVar2 = (char *)*plVar7;
  iVar1 = (int)param_1[0x476];
  pcVar8 = pcVar2;
  do {
    if (pcVar8 == pcVar2 + iVar1) {
LAB_140a72726:
      *(int *)(param_1 + 0x476) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x23b4) < iVar1 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar7,iVar1);
      }
      *(char *)((longlong)iVar1 + *plVar7) = cVar11;
      return;
    }
    if (*pcVar8 == cVar11) {
      if ((int)pcVar8 - (int)pcVar2 != -1) {
        return;
      }
      goto LAB_140a72726;
    }
    pcVar8 = pcVar8 + 1;
  } while( true );
}



// FUNCTION 140a72780 FUN_140a72780 body=165 status=ok
// SIG undefined FUN_140a72780(void)

void FUN_140a72780(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  lVar3 = FUN_140a66090();
  if (lVar3 != 0) {
    uVar4 = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x22e0);
    uVar6 = (longlong)*(int *)(param_1 + 0x22e8) & 0x1fffffffffffffff;
    if (puVar5 + *(int *)(param_1 + 0x22e8) < puVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        uVar1 = *puVar5;
        cVar2 = FUN_1409a1e90(lVar3,uVar1);
        if (cVar2 != '\0') {
          FUN_140a72430(param_1,uVar1);
        }
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
  }
  return;
}



// FUNCTION 140a72830 FUN_140a72830 body=84 status=ok
// SIG undefined FUN_140a72830(void)

void FUN_140a72830(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2298);
  lVar2 = (longlong)*(int *)(param_1 + 0x22a0) * 0x20 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    FUN_140a71fa0(param_1,lVar1);
  }
  return;
}



// FUNCTION 140a72890 FUN_140a72890 body=157 status=ok
// SIG undefined FUN_140a72890(void)

void FUN_140a72890(longlong param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    *(longlong *)(param_1 + 0x2388) = param_3;
    *(longlong *)(param_1 + 0x2380) = param_2;
    FUN_140a72780();
    FUN_140a72830(param_1);
    FUN_140a5d5a0(param_1);
    FUN_140a733f0(param_1);
    FUN_141400d30(param_1);
    FUN_140a72970(param_1);
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_3 + 0x2c50,param_1);
    if (*(longlong *)(param_1 + 0x2380) != 0) {
      FUN_1409b7bb0();
    }
    FUN_140a770f0(param_1,1);
    return;
  }
  FUN_142227350(param_1,0,1);
  return;
}



// FUNCTION 140a72930 FUN_140a72930 body=64 status=ok
// SIG undefined FUN_140a72930(void)

void FUN_140a72930(longlong param_1)

{
  if ((*(char *)(param_1 + 0x2470) == '\0') && (*(longlong *)(param_1 + 0x150) != 0)) {
    FUN_14269dad0(*(longlong *)(param_1 + 0x150),param_1);
    FUN_14269dad0(param_1,*(undefined8 *)(param_1 + 0x150));
    return;
  }
  return;
}



// FUNCTION 140a72970 FUN_140a72970 body=708 status=ok
// SIG undefined FUN_140a72970(void)

void FUN_140a72970(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  byte bVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(char *)(param_1 + 0x2530) != '\0') {
    lVar6 = FUN_140a63ba0();
    plVar13 = (longlong *)0x0;
    if (lVar6 != 0) {
      lVar7 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        plVar13 = *(longlong **)(lVar6 + 0x2c70);
      }
    }
    if ((plVar13 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar13 + 0x768))(plVar13), cVar5 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar8 = FUN_1429bed90();
    AActor::GetComponentsByClass(param_1,&local_48,uVar8);
    bVar11 = 0;
    do {
      lVar6 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))(param_1 + 0xd88,bVar11);
      if (lVar6 != 0) {
        uVar8 = FUN_1429bed90();
        puVar9 = (undefined8 *)AActor::GetComponentsByClass(lVar6,&local_38,uVar8);
        iVar2 = *(int *)(puVar9 + 1);
        if (iVar2 != 0) {
          if (local_3c < iVar2 + local_40) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_48);
          }
          _guard_xfg_dispatch_icall_nop(local_48 + local_40,(void *)*puVar9,(longlong)iVar2 << 3);
          *(undefined4 *)(puVar9 + 1) = 0;
          local_40 = local_40 + iVar2;
        }
        if (CONCAT44(uStack_34,local_38) != 0) {
          FMemory::Free();
        }
      }
      bVar11 = bVar11 + 1;
    } while (bVar11 < 2);
    plVar1 = local_48 + local_40;
    for (plVar12 = local_48; plVar12 != plVar1; plVar12 = plVar12 + 1) {
      lVar6 = *plVar12;
      if (lVar6 != 0) {
        lVar10 = FUN_1429bed90();
        lVar7 = *(longlong *)(lVar6 + 0x10);
        if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
            lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_142398820(lVar6,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
          FUN_142397420(lVar6,*(undefined4 *)(param_1 + 0x2554));
          local_38 = *(undefined4 *)(param_1 + 0x2544);
          uStack_34 = *(undefined4 *)(param_1 + 0x2548);
          uStack_30 = *(undefined4 *)(param_1 + 0x254c);
          uStack_2c = *(undefined4 *)(param_1 + 0x2550);
          FUN_1423972b0(lVar6,0,&local_38);
          local_38 = *(undefined4 *)(param_1 + 0x2544);
          uStack_34 = *(undefined4 *)(param_1 + 0x2548);
          uStack_30 = *(undefined4 *)(param_1 + 0x254c);
          uStack_2c = *(undefined4 *)(param_1 + 0x2550);
          FUN_1423972b0(lVar6,1,&local_38);
          local_38 = *(undefined4 *)(param_1 + 0x2544);
          uStack_34 = *(undefined4 *)(param_1 + 0x2548);
          uStack_30 = *(undefined4 *)(param_1 + 0x254c);
          uStack_2c = *(undefined4 *)(param_1 + 0x2550);
          FUN_1423972b0(lVar6,2,&local_38);
          local_38 = *(undefined4 *)(param_1 + 0x2544);
          uStack_34 = *(undefined4 *)(param_1 + 0x2548);
          uStack_30 = *(undefined4 *)(param_1 + 0x254c);
          uStack_2c = *(undefined4 *)(param_1 + 0x2550);
          FUN_1423972b0(lVar6,3,&local_38);
          if (bVar3) {
            local_38 = *(undefined4 *)(param_1 + 0x2534);
            uStack_34 = *(undefined4 *)(param_1 + 0x2538);
            uStack_30 = *(undefined4 *)(param_1 + 0x253c);
            uStack_2c = *(undefined4 *)(param_1 + 0x2540);
            bVar11 = 3;
            if (*(byte *)((longlong)plVar13 + 0x644) < 3) {
              bVar11 = *(byte *)((longlong)plVar13 + 0x644);
            }
            FUN_1423972b0(lVar6,bVar11,&local_38);
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}



// FUNCTION 140a72c40 FUN_140a72c40 body=50 status=ok
// SIG undefined FUN_140a72c40(void)

undefined8 FUN_140a72c40(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xbf0))();
  if (cVar1 != '\0') {
    cVar1 = FUN_140a68900(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140a72c80 FUN_140a72c80 body=59 status=ok
// SIG undefined FUN_140a72c80(void)

undefined1 FUN_140a72c80(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x11f8) != 0) {
    uVar1 = UProgressBar::GetPrivateStaticClass();
    cVar2 = FUN_142c736c0(*(undefined8 *)(param_1 + 0x11f8),uVar1);
    if (cVar2 != '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140a72cc0 FUN_140a72cc0 body=154 status=ok
// SIG undefined FUN_140a72cc0(void)

undefined8 FUN_140a72cc0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x2298);
  lVar5 = (longlong)*(int *)(param_1 + 0x22a0) * 0x20 + lVar4;
  do {
    if (lVar4 == lVar5) {
      return 0;
    }
    lVar2 = FUN_140c46a10(param_1,*(undefined8 *)(lVar4 + 0x10));
    if ((lVar2 != 0) && (cVar1 = FUN_14307ecd0(lVar2), cVar1 != '\0')) {
      plVar3 = (longlong *)0x0;
      if (*(longlong *)(lVar2 + 0x470) != 0) {
        plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x470) + 0x200);
      }
      if ((plVar3 == (longlong *)0x0) || (cVar1 = (**(code **)(*plVar3 + 0x400))(), cVar1 == '\0'))
      {
        return 1;
      }
    }
    lVar4 = lVar4 + 0x20;
  } while( true );
}



// FUNCTION 140a72d60 FUN_140a72d60 body=60 status=ok
// SIG undefined FUN_140a72d60(void)

undefined1 FUN_140a72d60(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_140a67e20();
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_1423528f0(param_1,param_2);
  return uVar2;
}



// FUNCTION 140a72da0 SmoothCorrection body=82 status=ok
// SIG undefined SmoothCorrection(void)

void INetworkPredictionInterface::SmoothCorrection(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x28,L"Pure virtual not implemented (%s)",
             L"INetworkPredictionInterface::SmoothCorrection");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces/NetworkPredictionInterface.h"
             ,0x28,L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 140a72e00 FUN_140a72e00 body=63 status=ok
// SIG undefined FUN_140a72e00(void)

void FUN_140a72e00(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x6f0) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2a8))();
    if (lVar1 != 0) {
      *(longlong *)(param_1 + 0x6d0) = lVar1;
      FUN_140a568c0(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140a72e40 FUN_140a72e40 body=526 status=ok
// SIG undefined FUN_140a72e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a72e40(longlong *param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
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
  if (param_2 <= 0.0) {
    if (((longlong *)param_1[0xde] != (longlong *)0x0) &&
       (lVar1 = (**(code **)(*(longlong *)param_1[0xde] + 0x2a8))(), lVar1 != 0)) {
      param_1[0xda] = lVar1;
      FUN_140a568c0(param_1,1);
    }
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uStack_b0 = 0;
      local_b8 = FUN_140a72e00;
      uVar2 = AActor::GetWorldTimerManager(param_1);
      plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_b0;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_ac;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar1;
        *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar2,param_1 + 0xe3,&local_a8,param_2);
      if (local_48 != 0) {
        plVar4 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar4 = local_58;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar1 = FMemory::Realloc(plVar3,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a73050 FUN_140a73050 body=171 status=ok
// SIG undefined FUN_140a73050(void)

void FUN_140a73050(longlong *param_1)

{
  char cVar1;
  
  FUN_1423561d0();
  if ((char)param_1[0x49] == '\x03') {
    if (*(char *)((longlong)param_1 + 0x2e94) != '\0') {
      cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_142cf3980(param_1);
        if (cVar1 != '\0') {
          FUN_140a736c0(param_1);
        }
      }
    }
    if (0.0 < *(float *)((longlong)param_1 + 0x28bc)) {
      cVar1 = FUN_142cf3a00(param_1);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0x260))(param_1);
        *(undefined1 *)(param_1 + 0x578) = 1;
        *(byte *)((longlong)param_1 + 0x2bc1) = (byte)(*(uint *)(param_1 + 0x558) >> 2) & 1;
        *(undefined1 *)(param_1 + 0x579) = 1;
        *(undefined4 *)((longlong)param_1 + 0x2bc4) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140a73100 FUN_140a73100 body=493 status=ok
// SIG undefined FUN_140a73100(void)

void FUN_140a73100(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  
  iVar2 = *(int *)(param_1 + 0x2ac4);
  if ((((-1 < iVar2) && (iVar2 < *(int *)(*(longlong *)(param_1 + 0x2978) + 0x38))) &&
      (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x2978) + 0x30) + (longlong)iVar2 * 0x28,
      lVar7 != 0)) && (*(longlong *)(lVar7 + 0x20) != 0)) {
    lVar4 = FUN_142e20fc0();
    lVar3 = *(longlong *)(lVar7 + 0x20);
    lVar5 = lVar3;
    if (lVar3 != 0) {
      while (lVar5 != lVar4) {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        if (lVar5 == 0) {
          return;
        }
      }
      if (lVar3 != 0) {
        if ((*(longlong *)(param_1 + 0x11f8) != 0) && (*(longlong *)(lVar7 + 0x10) != 0)) {
          lVar5 = FUN_142e20fc0();
          for (lVar3 = *(longlong *)(lVar7 + 0x10); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30))
          {
            if (lVar3 == lVar5) {
              if (*(longlong *)(lVar7 + 0x10) != 0) {
                FUN_142c84570(*(undefined8 *)(param_1 + 0x11f8));
              }
              break;
            }
          }
        }
        *(undefined1 *)(param_1 + 0x2ac8) = 1;
        FUN_142cfaa20(param_1,&local_28,*(undefined8 *)(lVar7 + 0x20));
        if ((local_28 != 0) &&
           (plVar6 = (longlong *)FMemory::Realloc(0,0x30), local_18 = plVar6,
           plVar6 != (longlong *)0x0)) {
          *plVar6 = (longlong)&PTR_FUN_143fcff50;
          FWeakObjectPtr::operator=(plVar6 + 1,param_1);
          *(undefined4 *)(plVar6 + 2) = 0x40a6ac80;
          *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
          *(undefined4 *)(plVar6 + 3) = 0;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_2c;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar7;
          *plVar6 = (longlong)&PTR_FUN_143fcff98;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_28 + 0x58,1);
          (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
          iVar2 = *(int *)(local_28 + 0x60);
          *(int *)(local_28 + 0x60) = iVar2 + 1;
          if (*(int *)(local_28 + 100) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_28 + 0x58,iVar2);
          }
          puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(local_28 + 0x58));
          *puVar8 = plVar6;
          *(undefined4 *)(puVar8 + 1) = 3;
        }
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_20 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
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
      }
    }
  }
  return;
}



// FUNCTION 140a732f0 FUN_140a732f0 body=65 status=ok
// SIG undefined FUN_140a732f0(void)

void FUN_140a732f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x2458) == '\0') {
    *(undefined1 *)(param_1 + 0x2458) = 1;
    *(undefined4 *)(param_1 + 0x245c) = 0;
    FUN_141400550();
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x22a8,0);
    return;
  }
  return;
}



// FUNCTION 140a73340 FUN_140a73340 body=172 status=ok
// SIG undefined FUN_140a73340(void)

void FUN_140a73340(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x2928) == 0) {
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b78) + 0x490);
  if (lVar3 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a733a7;
  }
  lVar3 = 0;
LAB_140a733a7:
  if (DAT_14686b358 == '\0') {
    FUN_140c18430(&DAT_14686b350);
  }
  FUN_140c29250(DAT_14686b350,lVar3);
  FUN_142d00590(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x2928) + 0x38),0);
  return;
}



// FUNCTION 140a733f0 FUN_140a733f0 body=144 status=ok
// SIG undefined FUN_140a733f0(void)

void FUN_140a733f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18;
  undefined1 local_10;
  
  uVar3 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
  lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar3);
  if (param_1[0x462] != 0) {
    lVar5 = FUN_1430f1090();
    lVar1 = param_1[0x462];
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar5) {
        if ((lVar1 != 0) && (lVar4 != 0)) {
          local_10 = 2;
          local_18 = lVar1;
          FUN_1430ea410(lVar4,&local_18);
        }
        break;
      }
    }
  }
  if (param_1[0x1ce] != 0) {
    FUN_142d6c590();
  }
  return;
}



// FUNCTION 140a73490 FUN_140a73490 body=556 status=ok
// SIG undefined FUN_140a73490(void)

void FUN_140a73490(longlong *param_1,longlong param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_res8;
  uint uStack_3c;
  code *local_38;
  longlong lStack_30;
  
  if ((*param_1 != 0) && (iVar8 = (int)param_1[0x18] + -1, -1 < iVar8)) {
    lVar11 = (longlong)iVar8 * 0x30;
    lVar12 = lVar11;
    do {
      plVar10 = (longlong *)(param_1[0x17] + lVar12);
      lVar4 = FWeakObjectPtr::Get(param_2 + 0x6c);
      if (((lVar4 == 0) && (lVar4 = FWeakObjectPtr::Get(param_2 + 0x74), lVar4 == 0)) ||
         ((plVar10[1] != 0 && (lVar4 = FWeakObjectPtr::Get(param_2 + 100), plVar10[1] != lVar4)))) {
        lVar4 = *plVar10;
        if (lVar4 != 0) {
          lVar5 = AGFreezeCharacterCue::GetPrivateStaticClass();
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
            lStack_30 = (ulonglong)uStack_3c << 0x20;
            local_38 = FUN_140a6bb00;
            pwVar6 = _guard_xfg_dispatch_icall_nop
                               (L"&UOakCharacterMovementComponent::OnSlidingImpactParticleSystemFinished"
                                ,L"::");
            pwVar3 = (wchar_t *)0x0;
            while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
              pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar3 = pwVar2;
            }
            FName::FName(&local_res8,pwVar3 + 2,1);
            FUN_140a4d850(lVar4 + 0x8a8,*param_1,&local_38,local_res8);
            FUN_142600fa0(lVar4);
          }
        }
        FUN_140a73700(param_1,plVar10);
        FUN_140591060(param_1[0x17] + 0x18 + lVar11);
        iVar9 = (int)param_1[0x18];
        iVar7 = (iVar9 - iVar8) + -1;
        if (0 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[0x17] + lVar11),
                     (void *)((longlong)(iVar9 - iVar7) * 0x30 + param_1[0x17]),
                     (longlong)iVar7 * 0x30);
          iVar9 = (int)param_1[0x18];
        }
        *(int *)(param_1 + 0x18) = iVar9 + -1;
      }
      lVar11 = lVar11 + -0x30;
      lVar12 = lVar12 + -0x30;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 140a736c0 FUN_140a736c0 body=56 status=ok
// SIG undefined FUN_140a736c0(void)

void FUN_140a736c0(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0x525] != 0) {
    cVar1 = (**(code **)(*param_1 + 0xbf0))();
    if (cVar1 != '\0') {
      FUN_142d00f90(param_1,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 140a73700 FUN_140a73700 body=149 status=ok
// SIG undefined FUN_140a73700(void)

void FUN_140a73700(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  cVar1 = FUN_14059ee90();
  if (cVar1 != '\0') {
    if ((*param_1 == 0) || (param_1[2] == 0)) {
      FUN_1405ac8f0((undefined8 *)(param_2 + 0x18),200,0);
    }
    else {
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_1405a2d20(*(undefined8 *)(param_2 + 0x18),local_28,param_1[2],0,0,local_38);
      FUN_140591060(local_28);
      if (local_38[0] != 0) {
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a737a0 FUN_140a737a0 body=123 status=ok
// SIG undefined FUN_140a737a0(void)

ulonglong FUN_140a737a0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_142cf3980();
  if ((char)uVar2 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0xd08))(param_1,param_2);
    if ((char)uVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x5d8) = 1;
      param_1[0x5d6] = *param_2;
      lVar1 = param_2[1];
      *(int *)(param_1 + 0x5d7) = (int)lVar1;
      param_1[0x5d9] = param_3;
      return CONCAT71((uint7)(uint3)((uint)(int)lVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140a73820 FUN_140a73820 body=411 status=ok
// SIG undefined FUN_140a73820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a73820(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar3;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  FUN_1422406d0();
  if ((*(char *)(param_1 + 0x47c) == '\x01') && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)
     ) {
    lVar2 = *(longlong *)(lVar1 + 0x168);
    if (lVar2 == 0) {
      local_58 = _DAT_1468b5d90;
      local_50 = DAT_1468b5d98;
    }
    else {
      local_58 = *(undefined8 *)(lVar2 + 0x220);
      local_50 = *(undefined4 *)(lVar2 + 0x228);
    }
    local_40 = local_50;
    local_48 = local_58;
    local_68 = 0;
    local_60 = 0;
    FUN_140a5cbc0(param_1,&local_28,*(undefined1 *)(param_1 + 0x47d),lVar1,&local_48,
                  CONCAT44(uVar3,*(undefined4 *)(param_1 + 0x480)),&local_68);
    local_40 = local_60;
    local_48 = local_68;
    local_60 = 0;
    local_50 = 0;
    local_58 = 0;
    FUN_140a5d200(param_1,&local_38,*(undefined1 *)(param_1 + 0x484),lVar1,&local_58,&local_48);
    local_48 = local_38;
    local_40 = local_30;
    local_58 = local_28;
    local_50 = local_20;
    FUN_14223ca30(param_1,&local_58,&local_48,0,0,1);
  }
  return;
}



// FUNCTION 140a739c0 FUN_140a739c0 body=397 status=ok
// SIG undefined FUN_140a739c0(void)

void FUN_140a739c0(longlong *param_1,float param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  float fVar7;
  undefined8 local_28;
  undefined4 local_20;
  
  FUN_1422406d0();
  FUN_140a73d80(param_1,param_2);
  cVar3 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar3 != '\0') {
    if (((char)param_1[0x48b] != '\0') &&
       (fVar7 = param_2 + *(float *)((longlong)param_1 + 0x245c),
       *(float *)((longlong)param_1 + 0x245c) = fVar7,
       *(float *)((longlong)param_1 + 0x22f4) <= fVar7)) {
      *(undefined1 *)(param_1 + 0x48b) = 0;
      *(undefined4 *)((longlong)param_1 + 0x245c) = 0;
      FUN_141400510(param_1);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x457,0)
      ;
      FUN_141400260(param_1,2);
    }
    pcVar4 = (char *)param_1[0x475];
    pcVar6 = pcVar4 + (int)param_1[0x476];
    for (; pcVar4 != pcVar6; pcVar4 = pcVar4 + 1) {
      if (*pcVar4 == '\x01') {
        fVar7 = *(float *)((longlong)param_1 + 0x2454) - param_2;
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        *(float *)((longlong)param_1 + 0x2454) = fVar7;
        break;
      }
    }
  }
  if (*(byte *)(param_1 + 0x25) < 3) {
    FUN_140a75700(param_1,param_2);
  }
  plVar1 = (longlong *)param_1[0x2a];
  if (plVar1 != (longlong *)0x0) {
    lVar5 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x528))(plVar1,param_1), cVar3 != '\0')) &&
       (lVar5 = FUN_142ceefa0(plVar1), lVar5 == param_1[0x481])) {
      local_28 = DAT_1468b5da0;
      local_20 = DAT_1468b5da8;
      FUN_14223ccb0(plVar1,&local_28,0,0,0);
    }
  }
  return;
}



// FUNCTION 140a73b50 FUN_140a73b50 body=553 status=ok
// SIG undefined FUN_140a73b50(void)

void FUN_140a73b50(longlong param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  FUN_1422406d0();
  cVar4 = FWeakObjectPtr::IsValid();
  if (cVar4 == '\0') goto LAB_140a73bef;
  uVar5 = FWeakObjectPtr::Get(param_1 + 0x45c);
  if ((*(char *)(param_1 + 0x458) == '\0') && (*(char *)(param_1 + 0x459) == '\0')) {
    bVar3 = false;
LAB_140a73bb0:
    cVar4 = '\0';
    if (!bVar3) goto LAB_140a73bef;
  }
  else {
    bVar3 = true;
    if (*(char *)(param_1 + 0x459) == '\0') {
      if (*(char *)(param_1 + 0x458) == '\0') goto LAB_140a73bb0;
      cVar4 = '\x01';
    }
    else {
      cVar4 = '\x02';
    }
  }
  FUN_1423b8e90(uVar5,cVar4);
  if (cVar4 == '\x02') {
    FUN_1427da950();
  }
  else {
    FUN_1427da940();
  }
LAB_140a73bef:
  local_78 = 0;
  uStack_74 = 1;
  iVar1 = *(int *)(param_1 + 0x490);
  puStack_40 = (uint *)(param_1 + 0x478);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar9 = *(uint **)(param_1 + 0x488);
    if (*(uint **)(param_1 + 0x488) == (uint *)0x0) {
      puVar9 = puStack_40;
    }
    uVar2 = *puVar9;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar2 == 0) {
      lVar7 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar3) goto LAB_140a73c9f;
      uVar2 = puVar9[lVar7 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
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
    if (iVar1 < local_68._4_4_) {
LAB_140a73c9f:
      local_68._4_4_ = iVar1;
    }
  }
  iStack_48 = local_78;
  uStack_44 = uStack_74;
  uStack_38 = 0xffffffff;
  iStack_34 = local_68._4_4_;
  iStack_30 = uStack_60;
  uStack_2c = iStack_5c;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58 = uStack_60;
  uStack_54 = iStack_5c;
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  bVar3 = local_68._4_4_ < iVar1;
  local_50 = (longlong *)(param_1 + 0x468);
  local_68 = puStack_40;
  if (bVar3) {
    do {
      lVar8 = (longlong)iStack_5c;
      lVar7 = *(longlong *)(param_1 + 0x468);
      uVar5 = IStreamingManager::Get();
      IStreamingManager::AddViewSlaveLocation(uVar5,lVar8 * 0x20 + lVar7 + 8,0x3f800000,0,0);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  return;
}



// FUNCTION 140a73d80 FUN_140a73d80 body=488 status=ok
// SIG undefined FUN_140a73d80(void)

void FUN_140a73d80(longlong *param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 local_28 [32];
  
  lVar3 = FUN_14059b7e0(param_1,0);
  if (lVar3 != 0) {
    if ((param_1[0x481] == 0) || (cVar2 = FUN_142cf39b0(param_1[0x481],0), cVar2 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    FUN_140a77710(param_1,uVar5,param_1[0x463],param_1[0x465],param_1 + 0x478);
    if (param_1[0x46c] != 0) {
      pfVar4 = (float *)(**(code **)(*param_1 + 0x308))(param_1,local_28);
      FUN_1405aaad0(lVar3,param_1[0x46c],
                    SQRT(*pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1] + pfVar4[2] * pfVar4[2]),0,4);
    }
    cVar2 = (**(code **)(*param_1 + 0x778))(param_1);
    if (cVar2 != '\0') {
      FUN_140a77710(param_1,1,param_1[0x469],param_1[0x46a],param_1 + 0x47e);
      lVar6 = param_1[0x46b];
      if (lVar6 != 0) {
        if (param_1[0x470] == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_1409a8aa0();
          lVar6 = param_1[0x46b];
        }
        FUN_1405aaad0(lVar3,lVar6,uVar7,0,4);
      }
      FUN_140a77710(param_1,(char)param_1[0x48b],param_1[0x466],param_1[0x467],param_1 + 0x47b);
      if (param_1[0x468] != 0) {
        if (((char)param_1[0x48b] == '\0') ||
           (fVar1 = *(float *)((longlong)param_1 + 0x22f4), fVar1 <= 0.0)) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = *(float *)((longlong)param_1 + 0x245c) / fVar1;
          if (fVar1 <= fVar8) {
            fVar8 = fVar1;
          }
        }
        FUN_1405aaad0(lVar3,param_1[0x468],fVar8,0,4);
      }
    }
    if ((param_1[0x46d] != 0) && (param_1[0x122] != 0)) {
      uVar7 = FUN_142d199e0();
      FUN_1405aaad0(lVar3,param_1[0x46d],uVar7,0,4);
    }
    return;
  }
  return;
}



// FUNCTION 140a73f70 FUN_140a73f70 body=1495 status=ok
// SIG undefined FUN_140a73f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a73f70(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 in_EAX;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  longlong lStack_100;
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
  
  fVar9 = fRam00000001468667c8;
  fVar8 = fRam00000001468667c4;
  fVar21 = _DAT_1468667c0;
  fVar20 = fRam0000000146866768;
  fVar30 = fRam0000000146866764;
  fVar29 = _DAT_146866760;
  local_108 = param_1[0x44];
  lStack_100 = param_1[0x45];
  lVar1 = param_1[0xe4];
  auVar15 = *(undefined1 (*) [16])(lVar1 + 0x230);
  fVar43 = auVar15._0_4_;
  fVar45 = auVar15._4_4_;
  fVar27 = auVar15._8_4_;
  auVar14 = *(undefined1 (*) [16])(param_1 + 0xea);
  fVar44 = auVar14._0_4_;
  fVar22 = auVar14._4_4_;
  fVar28 = auVar14._8_4_;
  auVar11 = minps(auVar14,auVar15);
  auVar12._4_4_ = -(uint)(auVar11._4_4_ < fRam00000001468667c4);
  auVar12._0_4_ = -(uint)(auVar11._0_4_ < _DAT_1468667c0);
  auVar12._8_4_ = -(uint)(auVar11._8_4_ < fRam00000001468667c8);
  auVar12._12_4_ = -(uint)(auVar11._12_4_ < fRam00000001468667cc);
  iVar10 = movmskps(in_EAX,auVar12);
  if (iVar10 == 0) {
    fVar44 = *(float *)(lVar1 + 0x210);
    fVar22 = *(float *)(lVar1 + 0x214);
    fVar28 = *(float *)(lVar1 + 0x218);
    fVar29 = *(float *)(lVar1 + 0x21c);
    fVar30 = *(float *)(param_1 + 0xe6);
    fVar20 = *(float *)((longlong)param_1 + 0x734);
    fVar21 = *(float *)(param_1 + 0xe7);
    fVar8 = *(float *)((longlong)param_1 + 0x73c);
    fVar43 = *(float *)(param_1 + 0xe8) * fVar43;
    fVar45 = *(float *)((longlong)param_1 + 0x744) * fVar45;
    fVar27 = *(float *)(param_1 + 0xe9) * fVar27;
    local_f8 = fVar8 * fVar44 * _DAT_1468667a0 + fVar30 * fVar29 + fVar22 * fVar21 * _DAT_146866790
               + fVar28 * fVar20 * _DAT_146866780;
    fStack_f4 = fVar21 * fVar44 * fRam00000001468667a4 + fVar20 * fVar29 +
                fVar22 * fVar8 * fRam0000000146866794 + fVar28 * fVar30 * fRam0000000146866784;
    fStack_f0 = fVar20 * fVar44 * fRam00000001468667a8 + fVar21 * fVar29 +
                fVar22 * fVar30 * fRam0000000146866798 + fVar28 * fVar8 * fRam0000000146866788;
    fStack_ec = fVar30 * fVar44 * fRam00000001468667ac + fVar8 * fVar29 +
                fVar22 * fVar20 * fRam000000014686679c + fVar28 * fVar21 * fRam000000014686678c;
    fVar30 = fVar27 * fVar22 - fVar45 * fVar28;
    fVar20 = fVar43 * fVar28 - fVar27 * fVar44;
    fVar21 = fVar45 * fVar44 - fVar43 * fVar22;
    fVar30 = fVar30 + fVar30;
    fVar20 = fVar20 + fVar20;
    fVar21 = fVar21 + fVar21;
    local_118 = (fVar21 * fVar22 - fVar20 * fVar28) + fVar30 * fVar29 + fVar43 +
                *(float *)(lVar1 + 0x220);
    fStack_114 = (fVar30 * fVar28 - fVar21 * fVar44) + fVar20 * fVar29 + fVar45 +
                 *(float *)(lVar1 + 0x224);
    fStack_110 = (fVar20 * fVar44 - fVar30 * fVar22) + fVar21 * fVar29 + fVar27 +
                 *(float *)(lVar1 + 0x228);
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x210);
    fVar3 = *(float *)(lVar1 + 0x214);
    fVar4 = *(float *)(lVar1 + 0x218);
    fVar13 = *(float *)(lVar1 + 0x21c);
    fVar16 = fVar3 + fVar3;
    fVar17 = fVar4 + fVar4;
    fVar5 = *(float *)(lVar1 + 0x220);
    fVar6 = *(float *)(lVar1 + 0x224);
    fVar7 = *(float *)(lVar1 + 0x228);
    fVar25 = fVar2 * (fVar2 + fVar2);
    fVar23 = fVar13 * (fVar2 + fVar2);
    fVar40 = (fVar13 * fVar17 + fVar2 * fVar16) * fVar43;
    fVar41 = (fVar23 + fVar3 * fVar17) * fVar45;
    fVar42 = (fVar13 * fVar16 + fVar2 * fVar17) * fVar27;
    fVar31 = fVar45 * (fVar2 * fVar16 - fVar13 * fVar17);
    fVar33 = fVar27 * (fVar3 * fVar17 - fVar23);
    fVar35 = fVar43 * (fVar2 * fVar17 - fVar13 * fVar16);
    fVar23 = (float)((uint)((_DAT_146866760 - (fVar4 * fVar17 + fVar3 * fVar16)) * fVar43) &
                    _DAT_146866770);
    fVar17 = (float)((uint)((fRam0000000146866764 - (fVar4 * fVar17 + fVar25)) * fVar45) &
                    uRam0000000146866774);
    fVar18 = (float)((uint)((fRam0000000146866768 - (fVar3 * fVar16 + fVar25)) * fVar27) &
                    uRam0000000146866778);
    fVar19 = (float)((uint)((fRam000000014686676c - (fVar25 + fVar25)) * auVar15._12_4_) &
                    uRam000000014686677c);
    fVar2 = *(float *)(param_1 + 0xe6);
    fVar3 = *(float *)((longlong)param_1 + 0x734);
    fVar4 = *(float *)(param_1 + 0xe7);
    fVar13 = *(float *)((longlong)param_1 + 0x73c);
    fVar25 = fVar3 + fVar3;
    fVar24 = fVar4 + fVar4;
    fVar26 = fVar2 * (fVar2 + fVar2);
    fVar16 = (fVar2 + fVar2) * fVar13;
    fVar37 = (fVar24 * fVar13 + fVar25 * fVar2) * fVar44;
    fVar38 = (fVar16 + fVar24 * fVar3) * fVar22;
    fVar39 = (fVar25 * fVar13 + fVar24 * fVar2) * fVar28;
    fVar32 = fVar22 * (fVar25 * fVar2 - fVar24 * fVar13);
    fVar34 = fVar28 * (fVar24 * fVar3 - fVar16);
    fVar36 = fVar44 * (fVar24 * fVar2 - fVar25 * fVar13);
    fVar13 = (float)((uint)((_DAT_146866760 - (fVar4 * fVar24 + fVar3 * fVar25)) * fVar44) &
                    _DAT_146866770);
    fVar16 = (float)((uint)((fRam0000000146866764 - (fVar4 * fVar24 + fVar26)) * fVar22) &
                    uRam0000000146866774);
    fVar25 = (float)((uint)((fRam0000000146866768 - (fVar3 * fVar25 + fVar26)) * fVar28) &
                    uRam0000000146866778);
    fVar24 = (float)((uint)((fRam000000014686676c - (fVar26 + fVar26)) * auVar14._12_4_) &
                    uRam000000014686677c);
    fVar2 = *(float *)(param_1 + 0xe8);
    fVar3 = *(float *)((longlong)param_1 + 0x744);
    fVar4 = *(float *)(param_1 + 0xe9);
    local_e8 = fVar37 * fVar31 + fVar13 * fVar23 + fVar36 * fVar42 + fVar24 * fVar5;
    fStack_e4 = fVar37 * fVar17 + fVar13 * fVar40 + fVar36 * fVar33 + fVar24 * fVar6;
    fStack_e0 = fVar37 * fVar41 + fVar13 * fVar35 + fVar36 * fVar18 + fVar24 * fVar7;
    fStack_dc = fVar37 * fVar19 + fVar13 * fVar19 + fVar36 * fVar19 + fVar24 * fRam000000014686676c;
    local_d8 = fVar16 * fVar31 + fVar32 * fVar23 + fVar38 * fVar42 + fVar24 * fVar5;
    fStack_d4 = fVar16 * fVar17 + fVar32 * fVar40 + fVar38 * fVar33 + fVar24 * fVar6;
    fStack_d0 = fVar16 * fVar41 + fVar32 * fVar35 + fVar38 * fVar18 + fVar24 * fVar7;
    fStack_cc = fVar16 * fVar19 + fVar32 * fVar19 + fVar38 * fVar19 + fVar24 * fRam000000014686676c;
    local_c8 = fVar34 * fVar31 + fVar39 * fVar23 + fVar25 * fVar42 + fVar24 * fVar5;
    fStack_c4 = fVar34 * fVar17 + fVar39 * fVar40 + fVar25 * fVar33 + fVar24 * fVar6;
    fStack_c0 = fVar34 * fVar41 + fVar39 * fVar35 + fVar25 * fVar18 + fVar24 * fVar7;
    fStack_bc = fVar34 * fVar19 + fVar39 * fVar19 + fVar25 * fVar19 + fVar24 * fRam000000014686676c;
    local_b8 = fVar3 * fVar31 + fVar2 * fVar23 + fVar4 * fVar42 + fRam000000014686676c * fVar5;
    fStack_b4 = fVar3 * fVar17 + fVar2 * fVar40 + fVar4 * fVar33 + fRam000000014686676c * fVar6;
    fStack_b0 = fVar3 * fVar41 + fVar2 * fVar35 + fVar4 * fVar18 + fRam000000014686676c * fVar7;
    fStack_ac = fVar3 * fVar19 + fVar2 * fVar19 + fVar4 * fVar19 +
                fRam000000014686676c * fRam000000014686676c;
    FMatrix::RemoveScaling(&local_e8);
    fVar43 = (float)(-(uint)(fVar21 <= fVar44 * fVar43) & (_DAT_1468667b0 ^ (uint)fVar29) ^
                    _DAT_1468667b0);
    fVar44 = (float)(-(uint)(fVar8 <= fVar22 * fVar45) & (uRam00000001468667b4 ^ (uint)fVar30) ^
                    uRam00000001468667b4);
    fVar45 = (float)(-(uint)(fVar9 <= fVar28 * fVar27) & (uRam00000001468667b8 ^ (uint)fVar20) ^
                    uRam00000001468667b8);
    local_e8 = local_e8 * fVar43;
    fStack_e4 = fStack_e4 * fVar43;
    fStack_e0 = fStack_e0 * fVar43;
    fStack_d4 = fStack_d4 * fVar44;
    fStack_d0 = fStack_d0 * fVar44;
    local_d8 = local_d8 * fVar44;
    fStack_c4 = fStack_c4 * fVar45;
    fStack_c0 = fStack_c0 * fVar45;
    local_c8 = local_c8 * fVar45;
    FQuat::FQuat(&local_118,&local_e8);
    auVar14._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
    auVar14._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
    auVar14._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
    auVar14._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
    fVar27 = auVar14._4_4_ + auVar14._0_4_;
    fVar28 = auVar14._8_4_ + auVar14._4_4_;
    fVar29 = auVar14._12_4_ + auVar14._8_4_;
    fVar30 = auVar14._0_4_ + auVar14._12_4_;
    auVar15._4_4_ = fVar28;
    auVar15._0_4_ = fVar27;
    auVar15._8_4_ = fVar29;
    auVar15._12_4_ = fVar30;
    auVar15 = rsqrtps(auVar14,auVar15);
    fVar43 = auVar15._0_4_;
    fVar44 = auVar15._4_4_;
    fVar45 = auVar15._8_4_;
    fVar22 = auVar15._12_4_;
    fVar43 = (_DAT_146866720 - fVar43 * fVar43 * fVar27 * _DAT_146866720) * fVar43 + fVar43;
    fVar44 = (fRam0000000146866724 - fVar44 * fVar44 * fVar28 * fRam0000000146866724) * fVar44 +
             fVar44;
    fVar45 = (fRam0000000146866728 - fVar45 * fVar45 * fVar29 * fRam0000000146866728) * fVar45 +
             fVar45;
    fVar22 = (fRam000000014686672c - fVar22 * fVar22 * fVar30 * fRam000000014686672c) * fVar22 +
             fVar22;
    local_f8 = (float)(((uint)(((_DAT_146866720 - fVar43 * fVar43 * fVar27 * _DAT_146866720) *
                                fVar43 + fVar43) * local_118) ^ _DAT_146866710) &
                       -(uint)(1e-08 <= fVar27) ^ _DAT_146866710);
    fStack_f4 = (float)(((uint)(((fRam0000000146866724 -
                                 fVar44 * fVar44 * fVar28 * fRam0000000146866724) * fVar44 + fVar44)
                               * fStack_114) ^ uRam0000000146866714) & -(uint)(1e-08 <= fVar28) ^
                       uRam0000000146866714);
    fStack_f0 = (float)(((uint)(((fRam0000000146866728 -
                                 fVar45 * fVar45 * fVar29 * fRam0000000146866728) * fVar45 + fVar45)
                               * fStack_110) ^ uRam0000000146866718) & -(uint)(1e-08 <= fVar29) ^
                       uRam0000000146866718);
    fStack_ec = (float)(((uint)(((fRam000000014686672c -
                                 fVar22 * fVar22 * fVar30 * fRam000000014686672c) * fVar22 + fVar22)
                               * fStack_10c) ^ uRam000000014686671c) & -(uint)(1e-08 <= fVar30) ^
                       uRam000000014686671c);
    local_118 = local_b8;
    fStack_114 = fStack_b4;
    fStack_110 = fStack_b0;
  }
  fStack_114 = fStack_114 - local_108._4_4_;
  local_118 = local_118 - (float)local_108;
  fStack_110 = fStack_110 - (float)lStack_100;
  *(undefined1 *)((longlong)param_1 + 0x7d4) = 1;
  (**(code **)(*param_1 + 0x490))(param_1,&local_118,&local_f8,1,0,1,0);
  *(undefined1 *)((longlong)param_1 + 0x7d4) = 0;
  return;
}



// FUNCTION 140a74550 FUN_140a74550 body=455 status=ok
// SIG undefined FUN_140a74550(void)

void FUN_140a74550(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  float fVar8;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  plVar7 = *(longlong **)(param_1 + 0x118);
  if (plVar7 == (longlong *)0x0) {
LAB_140a7463a:
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a7463a;
    *(undefined4 *)(param_1 + 600) = 0;
    lVar4 = (**(code **)(*plVar7 + 0x670))(plVar7);
    if (lVar4 != 0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (cVar2 = FUN_140d01800(lVar4), cVar2 == '\0')) &&
         (cVar2 = (**(code **)(*plVar7 + 0xc28))(plVar7), cVar2 == '\0')) {
        *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x55c);
      }
    }
  }
  FUN_142cd5440(param_1,param_2,param_3,param_4);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  lVar4 = FUN_140c46a10(plVar7,0);
  if (lVar4 != 0) {
    lVar4 = FUN_14307d8d0(lVar4,*(undefined1 *)(lVar4 + 0x690));
    if (lVar4 != 0) {
      uVar3 = FUN_14309f7d0(lVar4,1);
      *(undefined1 *)(param_1 + 0x3a8) = uVar3;
      fVar8 = (float)FUN_14309ee20(lVar4);
      fVar8 = (*(float *)(lVar4 + 0x1a0) - 1.0) * fVar8 + 1.0;
      goto LAB_140a746d0;
    }
  }
  fVar8 = 1.0;
  *(undefined1 *)(param_1 + 0x3a8) = 0;
LAB_140a746d0:
  *(float *)(param_1 + 0x3ac) = fVar8;
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0xc30))(plVar7,local_28);
  local_38 = *puVar6;
  local_30 = *(undefined4 *)(puVar6 + 1);
  FUN_142ccf3e0(param_1,&local_38);
  return;
}



// FUNCTION 140a74720 FUN_140a74720 body=284 status=ok
// SIG undefined FUN_140a74720(void)

void FUN_140a74720(longlong param_1,float param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_142357eb0();
  if (*(float *)(param_1 + 0x80c) <= 1e-08) {
    return;
  }
  if ((*(char *)(param_1 + 0x808) == '\x02') &&
     (cVar1 = FUN_142aaac70(*(undefined8 *)(param_1 + 0x800)), cVar1 == '\0')) {
    return;
  }
  param_2 = *(float *)(param_1 + 0x80c) - param_2;
  *(float *)(param_1 + 0x80c) = param_2;
  if (*(char *)(param_1 + 0x808) == '\x02') {
    if (*(longlong *)(param_1 + 0x820) != 0) {
      FUN_142e72560(*(longlong *)(param_1 + 0x820),*(undefined8 *)(param_1 + 0x7f0),DAT_146866c00,
                    *(undefined8 *)(param_1 + 0x7b8),1.0 - param_2 / *(float *)(param_1 + 0x7c8));
      param_2 = *(float *)(param_1 + 0x80c);
    }
    if (1e-08 < param_2) {
      return;
    }
    uVar2 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x808) != '\x04') {
      return;
    }
    if (*(longlong *)(param_1 + 0x820) != 0) {
      FUN_142e72560(*(longlong *)(param_1 + 0x820),*(undefined8 *)(param_1 + 0x7f0),DAT_146866c00,
                    *(undefined8 *)(param_1 + 0x7b8),param_2 / *(float *)(param_1 + 0x7c8));
      param_2 = *(float *)(param_1 + 0x80c);
    }
    if (1e-08 < param_2) {
      return;
    }
    uVar2 = 1;
  }
  FUN_140a68ad0(param_1,uVar2);
  return;
}



// FUNCTION 140a74840 FUN_140a74840 body=1654 status=ok
// SIG undefined FUN_140a74840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a74840(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  float local_138;
  float local_134;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined1 local_c0 [8];
  undefined4 local_b8;
  
  FUN_142357eb0();
  iVar3 = UWorld::GetNumPlayerControllers(param_1);
  if (iVar3 < 1) {
    return;
  }
  plVar7 = *(longlong **)(param_1 + 0x118);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  local_158 = *(undefined8 *)(param_1 + 0x1f8);
  local_150 = *(float *)(param_1 + 0x200);
  uVar6 = *(undefined4 *)(param_1 + 500);
  uVar14 = (undefined4)*(undefined8 *)(param_1 + 0x1ec);
  uVar15 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1ec) >> 0x20);
  lVar4 = FUN_1429d7ab0();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) && ((longlong *)plVar7[0x2a] != (longlong *)0x0)) {
    plVar7 = (longlong *)plVar7[0x2a];
  }
  (**(code **)(*plVar7 + 0x648))(plVar7,local_c0,&local_118);
  cVar2 = *(char *)(param_1 + 0x2d0);
  if (cVar2 != '\0') {
    uVar14 = local_c0._0_4_;
    uVar15 = local_c0._4_4_;
    uVar6 = local_b8;
  }
  if (*(char *)(param_1 + 0x2d1) == '\0') goto LAB_140a74de5;
  fVar13 = (float)DAT_146866750;
  fVar10 = DAT_146866750._4_4_;
  fVar12 = DAT_146866750._8_4_;
  auVar8._4_4_ = local_114;
  auVar8._0_4_ = local_118;
  auVar8._8_4_ = local_110;
  auVar8._12_4_ = 0;
  auVar8 = divps(auVar8,_DAT_146866750);
  local_118 = local_118 - (float)(int)auVar8._0_4_ * fVar13;
  local_114 = local_114 - (float)(int)auVar8._4_4_ * fVar10;
  local_110 = local_110 - (float)(int)auVar8._8_4_ * fVar12;
  fVar9 = (float)(((uint)(local_118 + fVar13) ^ (uint)local_118) & -(uint)(0.0 <= local_118) ^
                 (uint)(local_118 + fVar13));
  fVar11 = (float)(((uint)(local_114 + fVar10) ^ (uint)local_114) & -(uint)(0.0 <= local_114) ^
                  (uint)(local_114 + fVar10));
  local_150 = (float)(((uint)(local_110 + fVar12) ^ (uint)local_110) & -(uint)(0.0 <= local_110) ^
                     (uint)(local_110 + fVar12));
  fVar9 = (float)(((uint)(fVar9 - fVar13) ^ (uint)fVar9) & -(uint)(_DAT_146866740 < fVar9) ^
                 (uint)fVar9);
  local_150 = (float)(((uint)(local_150 - fVar12) ^ (uint)local_150) &
                      -(uint)(fRam0000000146866748 < local_150) ^ (uint)local_150);
  local_158 = CONCAT44(((uint)(fVar11 - fVar10) ^ (uint)fVar11) &
                       -(uint)(fRam0000000146866744 < fVar11) ^ (uint)fVar11,fVar9);
  if (1e-08 < ABS(local_150)) {
    FRotator::Quaternion(&local_158,&local_128);
    fVar9 = (float)local_128 + (float)local_128;
    fVar10 = -local_120 + -local_120;
    fVar13 = fVar9 * local_128._4_4_ + fVar10 * local_11c;
    fVar12 = (fVar10 * local_120 - fVar9 * (float)local_128) + 1.0;
    local_f0 = fVar9 * local_11c - fVar10 * local_128._4_4_;
    fVar10 = fVar13 * fVar13 + fVar12 * fVar12;
    if (fVar10 == 1.0) {
      local_f4 = fVar12;
      local_f8 = fVar13;
      if (local_f0 != 0.0) {
LAB_140a74b84:
        local_f4 = fVar12;
        local_f0 = 0.0;
        local_f8 = fVar13;
      }
    }
    else {
      local_f4 = DAT_1468b5d94;
      local_f0 = DAT_1468b5d98;
      local_f8 = DAT_1468b5d90;
      if (1e-08 <= fVar10) {
        auVar8 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar9 = auVar8._0_4_;
        fVar9 = fVar9 + fVar9 * (0.5 - fVar10 * 0.5 * fVar9 * fVar9);
        fVar9 = fVar9 + fVar9 * (0.5 - fVar10 * 0.5 * fVar9 * fVar9);
        fVar13 = fVar9 * fVar13;
        fVar12 = fVar12 * fVar9;
        goto LAB_140a74b84;
      }
    }
    fVar13 = local_128._4_4_ + local_128._4_4_;
    fVar10 = -(float)local_128 + -(float)local_128;
    local_134 = local_11c * fVar13 - local_120 * fVar10;
    local_138 = local_120 * fVar13 + local_11c * fVar10;
    local_e0 = ((float)local_128 * fVar10 - fVar13 * local_128._4_4_) + 1.0;
    fVar10 = local_f4 * local_e0 - local_f0 * local_138;
    fVar12 = local_f0 * local_134 - local_f8 * local_e0;
    fVar9 = local_f8 * local_138 - local_f4 * local_134;
    fVar13 = fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9;
    local_108 = fVar10;
    local_104 = fVar12;
    local_100 = fVar9;
    if ((fVar13 != 1.0) &&
       (local_108 = DAT_1468b5d90, local_104 = DAT_1468b5d94, local_100 = DAT_1468b5d98,
       1e-08 <= fVar13)) {
      auVar8 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar11 = auVar8._0_4_;
      fVar11 = fVar11 + fVar11 * (0.5 - fVar13 * 0.5 * fVar11 * fVar11);
      fVar11 = fVar11 + fVar11 * (0.5 - fVar13 * 0.5 * fVar11 * fVar11);
      local_108 = fVar10 * fVar11;
      local_104 = fVar12 * fVar11;
      local_100 = fVar9 * fVar11;
    }
    local_d8 = DAT_1468b5d90;
    local_d4 = DAT_1468b5d94;
    local_d0 = DAT_1468b5d98;
    local_fc = 0;
    local_ec = 0;
    local_dc = 0;
    local_cc = 0x3f800000;
    local_e8 = local_134;
    local_e4 = local_138;
    puVar5 = (undefined8 *)FMatrix::Rotator(&local_108,&local_148);
    local_158 = *puVar5;
    local_150 = *(float *)(puVar5 + 1);
    cVar2 = *(char *)(param_1 + 0x2d0);
    fVar9 = (float)local_158;
  }
  local_158 = CONCAT44(local_158._4_4_,fVar9 * *(float *)(param_1 + 0x2d4));
LAB_140a74de5:
  if (cVar2 != '\0') {
    local_140 = (float)uVar6;
    if (*(char *)(param_1 + 0x2d1) != '\0') {
      local_128 = local_158;
      local_148 = CONCAT44(uVar15,uVar14);
      local_120 = local_150;
      FUN_142399680(param_1,&local_148,&local_128,0,0,1);
      return;
    }
    if (cVar2 != '\0') {
      local_148 = CONCAT44(uVar15,uVar14);
      FUN_1423990b0(param_1,&local_148,0,0,1);
      return;
    }
  }
  if (*(char *)(param_1 + 0x2d1) != '\0') {
    local_148 = local_158;
    local_140 = local_150;
    FUN_142399b90(param_1,&local_148,0,0,1);
  }
  return;
}



// FUNCTION 140a74ec0 FUN_140a74ec0 body=764 status=ok
// SIG undefined FUN_140a74ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a74ec0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_res8;
  uint in_stack_ffffffffffffff98;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_20;
  
  FUN_142357eb0();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    if ((*(longlong *)(param_1 + 0x1d0) == 0) ||
       (FUN_140ae8880(*(longlong *)(param_1 + 0x1d0),param_1), *(longlong *)(param_1 + 0x1d0) == 0))
    {
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        FUN_142600fa0();
        return;
      }
    }
    else {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x178,&local_res8,*(undefined8 *)(param_1 + 0x1e0));
      lVar7 = 0;
      if (((int)local_res8 != -1) &&
         (lVar4 = *(longlong *)(param_1 + 0x178) + (longlong)(int)local_res8 * 0x18, lVar4 != 0)) {
        lVar7 = *(longlong *)(lVar4 + 8);
      }
      if (*(char *)(param_1 + 500) != '\0') {
        lVar4 = AActor::GetWorldSettings(lVar1);
        lVar4 = *(longlong *)(lVar4 + 0x658);
        if (lVar4 != 0) {
          lVar5 = FUN_141437aa0();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(lVar4 + 0x68,&local_res8,*(undefined8 *)(param_1 + 0x1e8));
            if ((((int)local_res8 != -1) &&
                (lVar4 = *(longlong *)(lVar4 + 0x68) + (longlong)(int)local_res8 * 0x18, lVar4 != 0)
                ) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) {
              lVar7 = lVar4;
            }
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x1c8);
      if (lVar7 == 0) {
        if (lVar4 != 0) {
          FUN_142600fa0();
        }
      }
      else {
        if (lVar4 == 0) {
          FUN_1417846f0(lVar1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          local_res8 = 0;
          uVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
          in_stack_ffffffffffffff98 = 0;
          lVar5 = FUN_1417985e0(uVar6,lVar1,0,0,0,0,0,0,0);
          *(longlong *)(param_1 + 0x1c8) = lVar5;
          lVar4 = 0;
          if (lVar5 != 0) {
            FUN_14260f940(lVar5,lVar7);
            FUN_142397000(*(undefined8 *)(param_1 + 0x1c8),1,1);
            FUN_14234b150(*(undefined8 *)(param_1 + 0x1c8));
            lVar4 = *(longlong *)(param_1 + 0x1c8);
          }
          if (lVar4 == 0) {
            return;
          }
        }
        if (*(longlong *)(lVar4 + 0x6f0) != lVar7) {
          FUN_14260f940(lVar4,lVar7);
          lVar4 = *(longlong *)(param_1 + 0x1c8);
        }
        if (*(longlong *)(lVar1 + 0x168) == 0) {
          local_38 = _DAT_1468b5d90;
        }
        else {
          local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x168) + 0x220);
        }
        local_30 = *(undefined4 *)(param_1 + 0x1f0);
        local_20 = local_30;
        FUN_1423990b0(lVar4,&local_38,0,0,in_stack_ffffffffffffff98 & 0xffffff00);
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x2a0))();
        if (cVar3 == '\0') {
          FUN_1425fcab0(*(undefined8 *)(param_1 + 0x1c8),0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a751c0 FUN_140a751c0 body=1136 status=ok
// SIG undefined FUN_140a751c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a751c0(longlong *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  float local_130;
  undefined2 local_128;
  ushort uStack_126;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong lStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec [12];
  float local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined8 local_48;
  
  FUN_142fb7d70();
  if (((char)param_1[0x5d3] != '\0') &&
     (fVar1 = *(float *)(param_1 + 0x5d4), *(float *)(param_1 + 0x5d4) = param_2 + fVar1,
     *(float *)((longlong)param_1 + 0x2e9c) <= param_2 + fVar1)) {
    *(undefined1 *)(param_1 + 0x5d3) = 0;
    (**(code **)(*param_1 + 0x5a0))(param_1,3,0);
    uStack_120 = *(undefined4 *)((longlong)param_1 + 0x2eac);
    uVar13 = *(undefined8 *)((longlong)param_1 + 0x2ea4);
    uStack_114 = (undefined4)param_1[0x5d7];
    lStack_110 = param_1[0x5d9];
    local_128 = (undefined2)uVar13;
    uStack_126 = (ushort)((ulonglong)uVar13 >> 0x10);
    uStack_124 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uStack_11c = (undefined4)param_1[0x5d6];
    uStack_118 = (undefined4)((ulonglong)param_1[0x5d6] >> 0x20);
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x56b,&local_128);
    uStack_114 = DAT_1468b5d98;
    lStack_110 = _DAT_1468b5d90;
    uStack_11c = (undefined4)_DAT_1468b5d90;
    uStack_118 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    local_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    lVar10 = _DAT_1468b5d90 << 0x20;
    local_108 = DAT_1468b5d98;
    param_1[0x5d3] = (ulonglong)uStack_126 << 0x10;
    param_1[0x5d4] = lVar10;
    uStack_104 = 0;
    *(undefined4 *)(param_1 + 0x5d5) = uStack_118;
    *(undefined4 *)((longlong)param_1 + 0x2eac) = uStack_114;
    *(undefined4 *)(param_1 + 0x5d6) = uStack_11c;
    *(undefined4 *)((longlong)param_1 + 0x2eb4) = uStack_118;
    uStack_100 = uStack_100 & 0xffffff00;
    local_f8 = 0;
    *(undefined4 *)(param_1 + 0x5d7) = uStack_114;
    *(undefined4 *)((longlong)param_1 + 0x2ebc) = 0;
    *(uint *)(param_1 + 0x5d8) = uStack_100;
    *(undefined4 *)((longlong)param_1 + 0x2ec4) = uStack_fc;
    param_1[0x5d9] = 0;
  }
  FUN_140a76270();
  if (((char)param_1[0x559] == '\0') && (lVar10 = param_1[0x52f], lVar10 != 0)) {
    iVar14 = *(int *)((longlong)param_1 + 0x2ac4);
    if (iVar14 != -1) {
      if ((iVar14 < 0) || (*(int *)(lVar10 + 0x38) <= iVar14)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) && (lVar10 = *(longlong *)(lVar10 + 0x30) + (longlong)iVar14 * 0x28, lVar10 != 0)
          ) && ((*(byte *)(param_1 + 0x200) & 1) != 0)) {
        if (param_1[0x2f] == 0) {
          local_130 = 3.4028235e+38;
        }
        else {
          local_130 = *(float *)(param_1[0x2f] + 0x228);
        }
        local_e0 = local_130;
        if (local_130 - *(float *)((longlong)param_1 + 0x101c) < *(float *)(lVar10 + 0x18)) {
          FUN_140a73100(param_1);
        }
      }
    }
  }
  FUN_140a76470(param_1);
  if (((longlong *)param_1[0x23] != (longlong *)0x0) &&
     (lVar10 = (**(code **)(*(longlong *)param_1[0x23] + 0x670))(), lVar10 != 0)) {
    lVar11 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if (DAT_14686b358 == '\0') {
        FUN_140c18430(&DAT_14686b350);
      }
      puVar4 = DAT_14686b350;
      uVar13 = *DAT_14686b350;
      cVar6 = FUN_14218fd60(uVar13);
      if (cVar6 == '\0') {
        lVar11 = FUN_142191860();
      }
      else {
        uVar8 = FUN_14218de50(lVar10);
        FUN_14217c550(local_res8,uVar8);
        uVar12 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                           (local_res20,local_res8);
        lVar11 = FUN_14218b3a0(uVar13,uVar12);
        if (lVar11 == 0) {
          uVar12 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                             (local_f0,local_res8);
          icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_d8,uVar12);
          local_50 = (undefined1 *)0x0;
          local_48 = 0;
          FUN_14217e740(&local_128);
          FUN_142194380(&local_128,0x28,0,0,0);
          local_128 = (undefined2)lVar10;
          uStack_126 = (ushort)((ulonglong)lVar10 >> 0x10);
          uStack_124 = (undefined4)((ulonglong)lVar10 >> 0x20);
          iVar14 = local_48._4_4_;
          if (local_48._4_4_ < 1) {
            FUN_140a70170(local_d0,1);
            iVar14 = local_48._4_4_;
          }
          uVar5 = local_48;
          lVar10 = (longlong)(int)local_48;
          iVar9 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          if (iVar14 < iVar9) {
            TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_d0,uVar5 & 0xffffffff);
          }
          puVar15 = local_d0;
          if (local_50 != (undefined1 *)0x0) {
            puVar15 = local_50;
          }
          FUN_14217e5b0(puVar15 + lVar10 * 0x20,&local_128);
          FUN_14217f430(&local_128);
          lVar11 = FUN_1421912a0(uVar13,local_d8);
        }
      }
      uVar13 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_ec,lVar11);
      icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_res18,uVar13);
      cVar6 = FUN_1407ce070(local_res18);
      if (cVar6 != '\0') {
        uVar7 = 0;
        lVar10 = FUN_140c46a10(param_1[0x56f],0);
        if (lVar10 != 0) {
          uVar7 = FUN_14307ee20(lVar10,1);
        }
        uVar2 = *(uint *)(param_1 + 0x558);
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_res8,local_res18);
        lVar10 = FUN_140c41820(param_1[0x56f]);
        FUN_140c26350(puVar4,local_res8,(byte)(uVar2 >> 2) & 1,uVar7,lVar10 != 0);
      }
    }
  }
  return;
}



// FUNCTION 140a75630 FUN_140a75630 body=195 status=ok
// SIG undefined FUN_140a75630(void)

ulonglong FUN_140a75630(longlong *param_1,undefined4 param_2,int param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_3 == 3) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = param_1[0x44];
  if (((lVar1 != 0) && (1 < (byte)((char)param_1[0x49] - 1U))) &&
     (*(longlong *)(lVar1 + 0x4d8) != 0)) {
    (**(code **)(*param_1 + 0x6d8))(param_1,0,0,1);
    if ((*(longlong *)(lVar1 + 0x4d8) != 0) && ((*(byte *)(param_1 + 0x31) & 1) != 0)) {
      lVar1 = FUN_140afb350();
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x580) != '\0')) {
        *(uint *)(param_1 + 0x31) = *(uint *)(param_1 + 0x31) & 0xfffffffe;
      }
    }
  }
  uVar2 = FUN_142fb7e10(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 140a75700 FUN_140a75700 body=429 status=ok
// SIG undefined FUN_140a75700(void)

void FUN_140a75700(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  
  if ((*(byte *)(param_1 + 0x25) < 3) && ((char)param_1[0x48c] == '\0')) {
    puVar8 = (undefined8 *)param_1[0x453];
    puVar2 = puVar8 + (longlong)(int)param_1[0x454] * 4;
    plVar4 = (longlong *)0x0;
    for (; plVar3 = plVar4, puVar8 != puVar2; puVar8 = puVar8 + 4) {
      if (*(char *)(puVar8 + 3) == '\x01') {
        if (puVar8 != (undefined8 *)0x0) {
          plVar3 = (longlong *)FUN_140a64690(param_1,*puVar8);
        }
        break;
      }
    }
    puVar8 = (undefined8 *)param_1[0x453];
    puVar2 = puVar8 + (longlong)(int)param_1[0x454] * 4;
    for (; puVar8 != puVar2; puVar8 = puVar8 + 4) {
      if (*(char *)(puVar8 + 3) == '\x02') {
        if (puVar8 != (undefined8 *)0x0) {
          plVar4 = (longlong *)FUN_140a64690(param_1,*puVar8);
        }
        break;
      }
    }
    if ((plVar3 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) {
      pcVar5 = (char *)param_1[0x475];
      pcVar7 = pcVar5 + (int)param_1[0x476];
      for (; pcVar5 != pcVar7; pcVar5 = pcVar5 + 1) {
        if (*pcVar5 == '\x03') {
          if (param_1[0x474] == 0) {
            return;
          }
          break;
        }
      }
      (**(code **)(*param_1 + 0x310))(param_1,0);
      if (param_1[0x98] != 0) {
        FUN_1423970c0(param_1[0x98],1);
      }
      plVar1 = (longlong *)param_1[0x474];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x310))(plVar1,0);
        lVar6 = (**(code **)(*(longlong *)(param_1[0x474] + 0x4c8) + 0xb8))
                          ((longlong *)(param_1[0x474] + 0x4c8),0);
        if (lVar6 != 0) {
          FUN_1423970c0(lVar6,1);
        }
      }
      (**(code **)(*plVar3 + 0x310))(plVar3,0);
      (**(code **)(*plVar4 + 0x310))(plVar4,0);
      if ((param_1[0x481] != 0) && (*(byte *)(param_1[0x481] + 0x418) < 2)) {
        FUN_141400d30(param_1);
      }
      *(undefined1 *)(param_1 + 0x48c) = 1;
    }
  }
  return;
}



// FUNCTION 140a758b0 FUN_140a758b0 body=2486 status=ok
// SIG undefined FUN_140a758b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a758b0(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  float fVar16;
  undefined8 local_res20;
  undefined1 auStack_338 [32];
  undefined1 **local_318;
  uint local_310;
  undefined1 **local_308;
  longlong **local_300;
  longlong *local_2f8;
  undefined4 local_2f0;
  char local_2e8;
  undefined1 local_2e7 [7];
  longlong *local_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong *local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  float local_2b0;
  longlong *local_2a8;
  undefined1 *puStack_2a0;
  char *local_298;
  longlong **pplStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  longlong **local_278;
  undefined4 local_270;
  undefined4 local_26c;
  float local_268;
  undefined4 local_260;
  undefined4 local_25c;
  float local_258;
  byte local_248 [12];
  undefined4 local_23c;
  undefined1 local_1e4 [44];
  longlong local_1b8 [2];
  undefined1 *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined2 local_194;
  undefined1 local_192;
  undefined4 local_190;
  undefined1 local_18c;
  undefined4 local_188;
  undefined2 local_184;
  longlong *local_178;
  int local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_140;
  undefined8 local_138;
  undefined1 *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  byte local_100;
  byte local_ff;
  code *local_f8 [2];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  plVar15 = (longlong *)*param_1;
  if (plVar15 == (longlong *)0x0) {
    return;
  }
  lVar9 = plVar15[0x24];
  local_res20 = param_4;
  local_2d8 = param_2;
  local_2d0 = param_3;
  if (lVar9 == 0) {
    lVar9 = FUN_1423407b0(plVar15);
    plVar15 = (longlong *)*param_1;
  }
  local_2e0 = (longlong *)plVar15[0x56f];
  local_2c0 = (longlong *)0x0;
  if (local_2e0 != (longlong *)0x0) {
    local_2c0 = (longlong *)local_2e0[0x98];
  }
  if (lVar9 == 0) {
    return;
  }
  if (local_2e0 == (longlong *)0x0) {
    return;
  }
  if (local_2c0 == (longlong *)0x0) {
    return;
  }
  _guard_xfg_dispatch_icall_nop(local_248,0,0x90);
  local_23c = 0x3f800000;
  cVar8 = (**(code **)(*plVar15 + 0xc88))(plVar15);
  if (cVar8 != '\0') {
    fVar1 = *(float *)(lVar9 + 0x790);
    fVar16 = fVar1 - *(float *)(param_1 + 0x16);
    if (*(float *)(*param_1 + 0x2930) <= fVar16 && fVar16 != *(float *)(*param_1 + 0x2930)) {
      local_198 = 0x10000;
      local_1a0 = 0;
      local_160 = 0;
      local_158 = 0;
      local_140 = 0;
      local_138 = 0;
      local_190 = 0;
      local_2c8 = 0;
      local_1a8 = (undefined1 *)0x0;
      local_194 = 0;
      local_184 = 0x101;
      local_18c = 0;
      local_192 = 0;
      local_188 = 0;
      FCollisionQueryParams::AddIgnoredActor(&local_1a8,local_2e0);
      local_194 = CONCAT11(local_194._1_1_,1);
      (**(code **)(*local_2c0 + 0x428))(local_2c0,&local_2b8,local_res20);
      plVar15 = param_1 + 0x1b;
      local_258 = local_2b0 + *(float *)(*param_1 + 0x234);
      local_260 = local_2b8;
      local_25c = uStack_2b4;
      local_268 = local_2b0 - *(float *)(*param_1 + 0x234);
      local_270 = local_2b8;
      local_26c = uStack_2b4;
      if ((((int)param_1[0x1c] == 0) || ((longlong *)*plVar15 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*(longlong *)*plVar15 + 0x18))(), cVar8 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        FWeakObjectPtr::operator=(&local_2c8,*param_1);
        uVar6 = (undefined4)local_2c8;
        uVar7 = local_2c8._4_4_;
        plVar10 = (longlong *)FMemory::Realloc(0,0x40);
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = (longlong)&PTR_GetPoolName_144213cf0;
          plVar10[2] = CONCAT44(uStack_2b4,local_2b8);
          *(float *)(plVar10 + 3) = local_2b0;
          plVar10[1] = (longlong)param_1;
          *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar6;
          *(undefined4 *)(plVar10 + 4) = uVar7;
          lVar11 = FDelegateHandle::GenerateNewID();
          plVar10[6] = lVar11;
          *plVar10 = (longlong)&PTR_GetPoolName_144213d38;
        }
        if (local_1b8 != plVar15) {
          if (plVar10 == (longlong *)0x0) {
            param_3 = local_2d0;
            if (((int)param_1[0x1c] != 0) &&
               (plVar10 = (longlong *)*plVar15, plVar10 != (longlong *)0x0)) {
              (**(code **)(*plVar10 + 0x28))(plVar10,0);
              if (*plVar15 != 0) {
                lVar11 = FMemory::Realloc(*plVar15,0,0);
                *plVar15 = lVar11;
              }
              *(undefined4 *)(param_1 + 0x1c) = 0;
              param_3 = local_2d0;
            }
            goto LAB_140a75b90;
          }
          (**(code **)(*plVar10 + 0x30))(plVar10,plVar15);
        }
        param_3 = local_2d0;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10,0);
          lVar11 = FMemory::Realloc(plVar10,0,0);
          param_3 = local_2d0;
          if (lVar11 != 0) {
            FMemory::Free(lVar11);
            param_3 = local_2d0;
          }
        }
      }
LAB_140a75b90:
      FUN_1426d3dd0(&local_2a8);
      FUN_1426ea8d0(&local_2a8,2);
      FCollisionResponseContainer::SetResponse(&local_2a8,0x11);
      local_2f0 = 0;
      local_300 = &local_2a8;
      local_308 = &local_1a8;
      local_318 = (undefined1 **)&local_270;
      local_310 = 0xf;
      local_2f8 = plVar15;
      FUN_142330010(lVar9,&local_2c8,1);
      *(float *)(param_1 + 0x16) = fVar1;
      if (local_140 != 0) {
        FMemory::Free();
      }
      param_2 = local_2d8;
      if (local_160 != 0) {
        FMemory::Free();
        param_2 = local_2d8;
      }
    }
    FUN_140729f20(local_248,param_1 + 4);
  }
  if (0 < (int)param_1[0x18]) {
    FUN_140a73490(param_1,local_248);
  }
  if (((char)param_1[3] == '\0') &&
     (cVar8 = (**(code **)(*(longlong *)*param_1 + 0xbf0))(), cVar8 == '\0')) {
    return;
  }
  if (param_2 == (longlong *)0x0) goto LAB_140a7615e;
  if (((local_248[0] & 1) == 0) || ((local_248[0] & 2) != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_140a7615e;
  if ((param_3 == 0) || (cVar8 = (**(code **)(*local_2e0 + 0x778))(), cVar8 == '\0')) {
    bVar4 = false;
LAB_140a75d0b:
    local_2d8 = (longlong *)0x0;
  }
  else {
    bVar4 = true;
    lVar9 = FUN_142cc1670(local_2e0);
    if (lVar9 == 0) goto LAB_140a75d0b;
    lVar9 = FUN_142cc1670(local_2e0);
    local_2d8 = *(longlong **)(lVar9 + 0x188);
  }
  puVar12 = (undefined1 *)FWeakObjectPtr::Get(local_1e4);
  plVar15 = param_1 + 0x17;
  cVar8 = '\0';
  lVar9 = *plVar15;
  bVar5 = true;
  lVar11 = (longlong)(int)param_1[0x18] * 0x30 + lVar9;
  if (lVar9 != lVar11) {
    do {
      if (*(char *)(lVar9 + 0x10) == '\0') {
        if (*(undefined1 **)(lVar9 + 8) == (undefined1 *)0x0) {
          cVar8 = '\x01';
        }
        else if (puVar12 == *(undefined1 **)(lVar9 + 8)) {
          bVar5 = false;
        }
      }
      lVar9 = lVar9 + 0x30;
    } while (lVar9 != lVar11);
    if (!bVar5) goto LAB_140a7615e;
  }
  puStack_2a0 = local_2e7;
  local_ff = local_ff & 0xfe;
  local_298 = &local_2e8;
  local_100 = cVar8 << 4 | 8;
  pplStack_290 = &local_2e0;
  local_2e7[0] = 0;
  local_288 = &local_2d8;
  local_2e8 = '\0';
  uStack_280 = &local_res20;
  local_278 = &local_2c0;
  local_f8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_128 = (undefined1 *)0x0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_c8 = (longlong *)0x0;
  local_b8 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3f800000;
  local_98 = 0x3f800000;
  local_94 = 0x3f800000;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0x3f800000;
  local_178 = (longlong *)0x0;
  local_168 = 0;
  local_2a8 = param_1;
  puVar13 = (undefined8 *)FUN_140438ef0(0x40,&local_198);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_144213c30;
    puVar13[1] = local_2a8;
    puVar13[2] = puStack_2a0;
    puVar13[3] = local_298;
    puVar13[4] = pplStack_290;
    *(undefined4 *)(puVar13 + 5) = (undefined4)local_288;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = local_288._4_4_;
    *(undefined4 *)(puVar13 + 6) = (undefined4)uStack_280;
    *(undefined4 *)((longlong)puVar13 + 0x34) = uStack_280._4_4_;
    puVar13[7] = local_278;
  }
  local_1a8 = &LAB_140a5a640;
  FGenericPlatformMemory::MemswapGreaterThan8(&local_1a8,local_f8,0x50);
  if (local_168 != 0) {
    plVar10 = (longlong *)&local_198;
    if (local_178 != (longlong *)0x0) {
      plVar10 = local_178;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_318 = &local_128;
  local_ff = local_ff | 1;
  local_310 = local_310 & 0xffffff00;
  FUN_142d68ea0(param_2,local_2e0,local_248,0);
  lVar9 = local_2e0[0x39b];
  lVar11 = *(longlong *)(*param_1 + 0x2928);
  if (((((char)param_1[0x1a] != '\0') && (lVar9 != 0)) && (lVar11 != 0)) &&
     ((*(byte *)(lVar9 + 0x38) < 6 &&
      (lVar14 = (ulonglong)*(byte *)(lVar9 + 0x38) * 0x150 + 0x60 + lVar11, lVar14 != 0)))) {
    local_300 = (longlong **)((ulonglong)local_300 & 0xffffffffffffff00);
    local_308 = &local_128;
    local_310 = local_310 & 0xffffff00;
    local_318 = (undefined1 **)((ulonglong)local_318 & 0xffffffffffffff00);
    FUN_142d71a60(lVar14,lVar14 + 0x140,local_2e0,local_248);
  }
  if (bVar4) {
    local_318 = &local_128;
    local_310 = CONCAT31(local_310._1_3_,1);
    local_2e7[0] = 1;
    FUN_142d68ea0(param_3,local_2e0,local_248,0);
    if ((((char)param_1[0x1a] != '\0') && (lVar9 != 0)) &&
       ((lVar11 != 0 && (*(byte *)(lVar9 + 0x38) < 6)))) {
      lVar11 = (ulonglong)*(byte *)(lVar9 + 0x38) * 0x150 + lVar11;
      lVar9 = 0x840;
      if (*(longlong *)(lVar11 + 0x860) == 0) {
        lVar9 = 0x60;
      }
      lVar9 = lVar9 + lVar11;
      if (lVar9 != 0) {
        local_308 = &local_128;
        local_300 = (longlong **)CONCAT71(local_300._1_7_,1);
        local_310 = local_310 & 0xffffff00;
        local_318 = (undefined1 **)((ulonglong)local_318 & 0xffffffffffffff00);
        FUN_142d71a60(lVar9,lVar9 + 0x140,local_2e0,local_248);
      }
    }
  }
  if (local_2e8 == '\0') {
    local_2e8 = '\x01';
    local_2a8 = (longlong *)0x0;
    local_298 = (char *)((ulonglong)local_298 & 0xffffffffffffff00);
    puStack_2a0 = puVar12;
    FUN_140590080(&pplStack_290);
    plVar10 = local_2c0;
    if (local_2d8 != (longlong *)0x0) {
      plVar10 = local_2d8;
    }
    FUN_140a6d950(param_1,&local_2a8,plVar10,local_res20);
    iVar3 = (int)param_1[0x18];
    lVar9 = (longlong)iVar3;
    *(int *)(param_1 + 0x18) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xc4) < iVar3 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar15,iVar3);
    }
    lVar14 = *plVar15;
    *(longlong **)(lVar14 + lVar9 * 0x30) = local_2a8;
    lVar11 = lVar14 + lVar9 * 0x30;
    *(undefined1 **)(lVar14 + 8 + lVar9 * 0x30) = puStack_2a0;
    *(undefined1 *)(lVar14 + 0x10 + lVar9 * 0x30) = local_298._0_1_;
    FUN_14058f8f0(lVar11 + 0x18,&pplStack_290);
    *(undefined4 *)(lVar11 + 0x28) = (undefined4)uStack_280;
    FUN_140591060(&pplStack_290);
  }
  if (local_b8 != 0) {
    plVar15 = local_e8;
    if (local_c8 != (longlong *)0x0) {
      plVar15 = local_c8;
    }
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x10))(plVar15,0);
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_128 != (undefined1 *)0x0) {
    FMemory::Free();
  }
LAB_140a7615e:
  local_2d8 = (longlong *)0x0;
  if (param_1[0x19] != 0) {
    lVar9 = *param_1;
    plVar15 = (longlong *)param_1[0x17];
    fVar1 = *(float *)(lVar9 + 400);
    fVar16 = *(float *)(lVar9 + 0x18c);
    fVar2 = *(float *)(lVar9 + 0x194);
    plVar10 = plVar15 + (longlong)(int)param_1[0x18] * 6;
    for (; plVar15 != plVar10; plVar15 = plVar15 + 6) {
      lVar9 = *plVar15;
      if (lVar9 != 0) {
        lVar11 = AGFreezeCharacterCue::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_14260f0c0(lVar9,param_1[0x19],SQRT(fVar16 * fVar16 + fVar1 * fVar1 + fVar2 * fVar2));
        }
      }
    }
  }
  return;
}



// FUNCTION 140a76270 FUN_140a76270 body=501 status=ok
// SIG undefined FUN_140a76270(void)

void FUN_140a76270(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_28 [32];
  
  if ((param_1[0x525] != 0) && (cVar1 = (**(code **)(*param_1 + 0xbf0))(), cVar1 != '\0')) {
    lVar2 = param_1[0x525];
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      FUN_140a758b0(param_1 + 0x57a,*(longlong *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50),
                    *(undefined8 *)(lVar2 + 0x40));
      lVar2 = param_1[0x525];
    }
    if (*(longlong *)(lVar2 + 0x1040) != 0) {
      FUN_140a758b0(param_1 + 0x597,*(longlong *)(lVar2 + 0x1040),0,*(undefined8 *)(lVar2 + 0x1030))
      ;
    }
  }
  if ((((1.0 < ABS(*(float *)((longlong)param_1 + 0x18c))) ||
       (1.0 < ABS(*(float *)(param_1 + 0x32)))) ||
      (1.0 < ABS(*(float *)((longlong)param_1 + 0x194)))) &&
     (((longlong *)param_1[0x56f] != (longlong *)0x0 &&
      (cVar1 = (**(code **)(*(longlong *)param_1[0x56f] + 0x950))(), cVar1 == '\0')))) {
    if (((param_1[0x528] != 0) &&
        ((lVar2 = param_1[0x5cc], FUN_140a758b0(param_1 + 0x5b4,param_1[0x528],0,param_1[0x52d]),
         (int)lVar2 == 0 && ((int)param_1[0x5cc] != 0)))) &&
       ((param_1[0x52b] != 0 &&
        (((int)param_1[0x5cc] != 0 &&
         (puVar3 = (undefined8 *)((longlong)(int)param_1[0x5cc] * 0x30 + param_1[0x5cb] + -0x30),
         lVar2 = FUN_140a63bf0(param_1 + 0x5b4,puVar3,*puVar3,0), lVar2 != 0)))))) {
      FUN_1405a3150(lVar2,local_28,param_1[0x52b],0);
      FUN_140591060(local_28);
    }
    return;
  }
  if (((((int)param_1[0x5cc] != 0) && (param_1[0x52c] != 0)) && ((char)param_1[0x49] != '\x06')) &&
     (lVar2 = FUN_140a65f40(param_1 + 0x5b4), lVar2 != 0)) {
    FUN_1405a3150(lVar2,local_28,param_1[0x52c],0);
    FUN_140591060(local_28);
  }
  FUN_140a6f9c0(param_1 + 0x5b4);
  return;
}



// FUNCTION 140a76470 FUN_140a76470 body=924 status=ok
// SIG undefined FUN_140a76470(void)

void FUN_140a76470(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_e8;
  float fStack_e4;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  float local_a8 [4];
  float local_98 [4];
  undefined1 local_88 [128];
  
  if ((((*(longlong *)(param_1 + 0x2b78) != 0) && (cVar4 = FUN_142cf39d0(), cVar4 != '\0')) &&
      (lVar5 = FUN_140c41820(*(undefined8 *)(param_1 + 0x2b78)), lVar5 != 0)) &&
     (lVar6 = FUN_142ceefa0(*(undefined8 *)(param_1 + 0x2b78)), lVar6 != 0)) {
    lVar7 = FUN_1414e0f70();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (*(char *)(lVar6 + 0x6e8) != '\0')) &&
       (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2b78) + 0x490), plVar2 != (longlong *)0x0)
       ) {
      lVar7 = FUN_14145f370();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_141228640(lVar5,local_b8);
        local_c4 = local_b4;
        local_c0 = 0;
        local_c8 = 0.0;
        if (*(char *)(lVar6 + 0x6e8) == '\x02') {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x2b78) + 0x168);
          if (lVar6 == 0) {
            local_d0 = (float)DAT_1464aa7b0;
            puVar8 = &local_d8;
            local_d8 = DAT_1464aa7a8;
          }
          else {
            puVar8 = (undefined8 *)FUN_142369f10(lVar6,local_88);
          }
          fVar1 = *(float *)(puVar8 + 1);
          lVar5 = *(longlong *)(lVar5 + 0x168);
          if (lVar5 == 0) {
            fVar16 = 1.0;
            fVar13 = 0.0;
            fVar14 = 0.0;
            fVar15 = 0.0;
          }
          else {
            fVar13 = *(float *)(lVar5 + 0x210);
            fVar14 = *(float *)(lVar5 + 0x214);
            fVar15 = *(float *)(lVar5 + 0x218);
            fVar16 = *(float *)(lVar5 + 0x21c);
          }
          fStack_e4 = (float)((ulonglong)*puVar8 >> 0x20);
          fVar13 = -fVar13;
          local_e8 = (float)*puVar8;
          fVar14 = -fVar14;
          fVar15 = -fVar15;
          fVar12 = fVar1 * fVar14 - fStack_e4 * fVar15;
          fVar12 = fVar12 + fVar12;
          fVar11 = local_e8 * fVar15 - fVar1 * fVar13;
          fVar10 = fStack_e4 * fVar13 - local_e8 * fVar14;
          fVar11 = fVar11 + fVar11;
          fVar10 = fVar10 + fVar10;
          local_d0 = fVar1 + fVar10 * fVar16 + (fVar13 * fVar11 - fVar12 * fVar14);
          local_d8 = CONCAT44(fStack_e4 + fVar11 * fVar16 + (fVar12 * fVar15 - fVar13 * fVar10),
                              local_e8 + fVar12 * fVar16 + (fVar10 * fVar14 - fVar11 * fVar15));
          FVector::Rotation(&local_d8,local_98);
          uVar9 = FRotator::RotateVector(local_b8,local_88,&local_d8);
          FVector::Rotation(uVar9,local_a8);
          local_c8 = local_a8[0] - local_98[0];
        }
        (**(code **)(*plVar2 + 0x840))(plVar2,&local_c8);
      }
    }
  }
  return;
}



// FUNCTION 140a76810 FUN_140a76810 body=167 status=ok
// SIG undefined FUN_140a76810(void)

void FUN_140a76810(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x520), lVar1 != 0)) {
      lVar3 = FUN_14142a560();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar1 + 0x5f8,0)
        ;
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a768c0 FUN_140a768c0 body=307 status=ok
// SIG undefined FUN_140a768c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a768c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
      (lVar3 = param_1[0x120], lVar3 != 0)) && (*(longlong *)(lVar3 + 0x180) != 0)) {
    (**(code **)(*param_1 + 0x578))(param_1,local_res8,local_res18);
    lVar1 = param_1[0x2d];
    local_1c = local_res8[0];
    local_18 = local_res18[0];
    local_20 = 3;
    uVar4 = _DAT_1468b5d90;
    uVar5 = DAT_1468b5d98;
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x220);
      uVar5 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_2c = uVar4;
    local_24 = uVar5;
    uVar2 = (**(code **)(**(longlong **)(lVar3 + 0x180) + 0x4f8))();
    FUN_140b93a20(param_1,*(undefined8 *)(lVar3 + 0x180),uVar2,&local_20,&local_2c,param_2,uVar4,
                  uVar5);
  }
  return;
}



// FUNCTION 140a76a00 FUN_140a76a00 body=214 status=ok
// SIG undefined FUN_140a76a00(void)

undefined8 FUN_140a76a00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  
  if (((*(longlong *)(param_1 + 0x408) != 0) && ((*(byte *)(param_1 + 0x544) & 1) != 0)) &&
     (*(longlong *)(param_1 + 0x6c0) != 0)) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + 0x6b0) = param_2;
    uVar3 = (undefined7)((ulonglong)param_3 >> 8);
    uVar2 = *(undefined8 *)(param_1 + 0x408);
    uVar1 = *(undefined1 *)(param_1 + 0x6ba);
    FUN_142ce8a30(param_1,1);
    FUN_142ce1dc0(*(undefined8 *)(param_1 + 0x6c0),uVar2,CONCAT71(uVar3,1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x6c0) + 0x6a8) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x6c0) + 0x6ba) = uVar1;
    FUN_142ce8a30(*(undefined8 *)(param_1 + 0x6c0),0,0);
    *(undefined1 *)(param_1 + 0x6a8) = 1;
    return 1;
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + 0x6b0) = 0;
  }
  return 0;
}



// FUNCTION 140a76ae0 FUN_140a76ae0 body=606 status=ok
// SIG undefined FUN_140a76ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a76ae0(byte *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
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
  if ((((((*param_1 & 1) != 0) && ((*param_1 & 2) != 0)) && (*(longlong *)(param_1 + 0x10) != 0)) &&
      (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x90) & 0x20) == 0 && ((param_1[0x18] & 2) == 0))
      )) && (cVar3 = FUN_1407c3030(param_1 + 0x20), cVar3 == '\0')) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
    if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
       (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))(), uVar2 = DAT_14629533c,
       lVar4 != 0)) {
      local_b8 = FUN_140a5e4c0;
      uStack_b0 = 0;
      if (*(longlong *)(lVar4 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
      }
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,uVar1);
        *(undefined4 *)(plVar5 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(plVar5 + 3) = uStack_b0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_ac;
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
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,param_1 + 0xd8,&local_a8,uVar2);
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
        lVar4 = FMemory::Realloc(plVar5,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a76d40 FUN_140a76d40 body=225 status=ok
// SIG undefined FUN_140a76d40(void)

undefined8 FUN_140a76d40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res10 [24];
  
  DAT_14686e300 = 1;
  lVar2 = FUN_142cd7b30();
  if (lVar2 != 0) {
    lVar3 = FUN_1414707f0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a76d99;
  }
  lVar2 = 0;
LAB_140a76d99:
  DAT_14686e300 = 0;
  if ((lVar2 != 0) && (lVar3 = *(longlong *)(param_1 + 0x68), lVar3 != 0)) {
    lVar4 = FUN_14145f370();
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
      FUN_140ce7700(lVar3,lVar2,CONCAT71((int7)((ulonglong)(lVar4 + 0x88) >> 8),1));
      if (*(longlong *)(lVar3 + 0x990) != 0) {
        local_res10[0] = 1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (*(longlong *)(lVar3 + 0x990) + 0x10f0,local_res10);
      }
    }
  }
  return 0;
}



// FUNCTION 140a76e30 FUN_140a76e30 body=694 status=ok
// SIG undefined FUN_140a76e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a76e30(longlong *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined1 auStack_1b8 [32];
  float *local_198;
  undefined8 *local_190;
  undefined1 *local_188;
  undefined1 local_178 [8];
  undefined8 local_170;
  undefined4 local_168;
  byte *local_160;
  undefined8 local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar7 = param_1[0x30];
  local_118 = *(float *)(lVar7 + 0x210);
  fStack_114 = *(float *)(lVar7 + 0x214);
  fStack_110 = *(float *)(lVar7 + 0x218);
  fStack_10c = *(float *)(lVar7 + 0x21c);
  auVar1._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_114);
  auVar1._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_118);
  auVar1._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_110);
  auVar1._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_10c);
  iVar3 = movmskps((int)local_48,auVar1);
  if (iVar3 != 0) {
    *(float *)(lVar7 + 0x250) = local_118;
    *(float *)(lVar7 + 0x254) = fStack_114;
    *(float *)(lVar7 + 600) = fStack_110;
    *(float *)(lVar7 + 0x25c) = fStack_10c;
    puVar4 = (undefined8 *)FQuat::Rotator(&local_118,local_d8);
    *(undefined8 *)(lVar7 + 0x260) = *puVar4;
    *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar4 + 1);
  }
  local_170 = *(undefined8 *)(lVar7 + 0x260);
  local_168 = *(undefined4 *)(lVar7 + 0x268);
  FRotator::Vector(&local_170,&local_150);
  local_170 = 0;
  local_198 = (float *)0x0;
  FUN_1422ffb20(local_c8,0,local_178,0);
  FCollisionQueryParams::AddIgnoredActor(local_c8,param_1[0x23]);
  FUN_1426d3dd0(local_f8);
  FUN_1426ea8d0(local_f8,2,0);
  (**(code **)(*param_1 + 0x478))(param_1,local_c8,local_f8);
  lVar7 = param_1[0x30];
  lVar5 = param_1[0x24];
  local_108 = *(undefined8 *)(lVar7 + 0x210);
  uStack_100 = *(undefined8 *)(lVar7 + 0x218);
  local_130 = *(float *)(lVar7 + 0x220);
  local_12c = *(float *)(lVar7 + 0x224);
  local_128 = *(float *)(lVar7 + 0x228);
  local_140 = local_130 + local_150 * 0.1;
  local_13c = local_12c + local_14c * 0.1;
  local_138 = local_128 + local_148 * 0.1;
  local_160 = (byte *)0x0;
  local_158 = 0;
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
    lVar7 = param_1[0x30];
  }
  local_188 = local_c8;
  local_190 = &local_108;
  local_198 = &local_140;
  cVar2 = FUN_142335df0(lVar5,&local_160,lVar7,&local_130);
  if (cVar2 != '\0') {
    for (pbVar6 = local_160; pbVar6 != local_160 + (longlong)(int)local_158 * 0x90;
        pbVar6 = pbVar6 + 0x90) {
      if ((*pbVar6 & 1) != 0) {
        if ((*pbVar6 & 2) != 0) {
          (**(code **)(*param_1 + 0x490))(param_1,&local_170,pbVar6);
          lVar7 = param_1[0x30];
          local_118 = *(float *)(lVar7 + 0x210);
          fStack_114 = *(float *)(lVar7 + 0x214);
          fStack_110 = *(float *)(lVar7 + 0x218);
          fStack_10c = *(float *)(lVar7 + 0x21c);
          (**(code **)(*param_1 + 0x498))(param_1,&local_170,pbVar6,&local_118);
        }
        break;
      }
    }
  }
  if (local_160 != (byte *)0x0) {
    FMemory::Free(local_160);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a770f0 FUN_140a770f0 body=294 status=ok
// SIG undefined FUN_140a770f0(void)

void FUN_140a770f0(longlong param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  float fVar5;
  
  if (((*(char *)(param_1 + 0x128) == '\x03') && (cVar1 = FUN_1414004c0(), cVar1 != '\0')) &&
     (param_2 != *(char *)(param_1 + 0x2411))) {
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x2411) = 0;
      FUN_1414006e0(param_1);
    }
    else {
      cVar1 = FUN_1414004c0();
      if (cVar1 != '\0') {
        pcVar2 = *(char **)(param_1 + 0x23a8);
        pcVar4 = pcVar2 + *(int *)(param_1 + 0x23b0);
        for (; pcVar2 != pcVar4; pcVar2 = pcVar2 + 1) {
          if (*pcVar2 == '\x04') goto LAB_140a77184;
        }
        if ((*(longlong *)(param_1 + 0x2408) != 0) &&
           ((byte)(*(char *)(*(longlong *)(param_1 + 0x2408) + 0x418) - 1U) < 2)) {
LAB_140a77184:
          cVar1 = FUN_142d52a00(param_1 + 0x2418);
          if (cVar1 != '\0') {
            uVar3 = FUN_142d52a20(param_1 + 0x2418);
            uVar3 = FArchive::operator<<(uVar3);
            fVar5 = (float)FUN_142d5fed0(uVar3);
            if (fVar5 <= 0.0) {
              return;
            }
          }
          pcVar2 = *(char **)(param_1 + 0x23a8);
          pcVar4 = pcVar2 + *(int *)(param_1 + 0x23b0);
          for (; pcVar2 != pcVar4; pcVar2 = pcVar2 + 1) {
            if (*pcVar2 == '\x04') goto LAB_140a771e6;
          }
          if (*(char *)(param_1 + 0x2413) == '\0') {
LAB_140a771e6:
            *(undefined1 *)(param_1 + 0x2411) = 1;
            FUN_1414006e0(param_1);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140a77220 FUN_140a77220 body=159 status=ok
// SIG undefined FUN_140a77220(void)

void FUN_140a77220(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((((*(longlong *)(param_1 + 0x820) != 0) &&
       (plVar2 = (longlong *)
                 FUN_142da7d10(*(longlong *)(param_1 + 0x820),*(undefined8 *)(param_1 + 0x7f0),0),
       plVar2 != (longlong *)0x0)) &&
      (lVar3 = (**(code **)(*plVar2 + 0x9a8))(plVar2,*(undefined8 *)(param_1 + 0x7c0)), lVar3 == 0))
     && (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x838), cVar1 != '\0')) {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x838);
    FUN_142e725c0(*(undefined8 *)(param_1 + 0x820),*(undefined8 *)(param_1 + 0x7f0),DAT_146866c00,
                  *(undefined8 *)(param_1 + 0x7c0),uVar4);
  }
  return;
}



// FUNCTION 140a772c0 FUN_140a772c0 body=27 status=ok
// SIG undefined FUN_140a772c0(void)

void FUN_140a772c0(undefined8 param_1)

{
  FUN_140c5b4b0();
  FUN_140a66930(param_1);
  return;
}



// FUNCTION 140a772e0 FUN_140a772e0 body=399 status=ok
// SIG undefined FUN_140a772e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a772e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float fStack_44;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  undefined8 local_20;
  float local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    local_38 = _DAT_1468b5d90;
    local_30 = DAT_1468b5d98;
  }
  else {
    local_38 = *(undefined8 *)(lVar1 + 0x220);
    local_30 = *(float *)(lVar1 + 0x228);
  }
  local_20 = DAT_1464aa7b8;
  local_18 = DAT_1464aa7c0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
    if (lVar1 == 0) {
      local_24 = DAT_1464aa7b0;
      local_2c = DAT_1464aa7a8;
      local_20 = DAT_1464aa7a8;
      local_18 = DAT_1464aa7b0;
    }
    else {
      puVar2 = (undefined8 *)FUN_142369f10(lVar1,&local_2c);
      local_20 = *puVar2;
      local_18 = *(float *)(puVar2 + 1);
    }
  }
  fStack_44 = (float)((ulonglong)local_38 >> 0x20);
  local_48 = (float)local_38;
  fVar4 = (fStack_44 - *(float *)(param_1 + 0x4d4)) * (float)((ulonglong)local_20 >> 0x20) +
          (local_48 - *(float *)(param_1 + 0x4d0)) * (float)local_20 +
          (local_30 - *(float *)(param_1 + 0x4d8)) * local_18;
  *(undefined8 *)(param_1 + 0x4d0) = local_38;
  *(float *)(param_1 + 0x4d8) = local_30;
  if (0.0001 < ABS(fVar4)) {
    fVar3 = (-57.295776 / *(float *)(param_1 + 0x4ac)) * fVar4;
    *(float *)(param_1 + 0x488) = fVar3;
    *(float *)(param_1 + 0x48c) = -fVar3;
    FUN_140a77860(param_1,fVar4);
  }
  return;
}



// FUNCTION 140a77470 FUN_140a77470 body=150 status=ok
// SIG undefined FUN_140a77470(void)

void FUN_140a77470(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_140c5ba40();
  if (param_2 != 0) {
    lVar2 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (lVar2 = *(longlong *)(param_1 + 0x1610), lVar2 != 0)) &&
       (*(char *)(param_1 + 0x16f8) == '\0')) {
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar2 + 0x24c0);
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(lVar2 + 0x24c8);
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(*(longlong *)(param_1 + 0x1610) + 0x24cc);
    }
  }
  return;
}



// FUNCTION 140a77510 FUN_140a77510 body=171 status=ok
// SIG undefined FUN_140a77510(void)

void FUN_140a77510(longlong *param_1)

{
  char cVar1;
  
  FUN_142d07270();
  if ((param_1[0x56f] != 0) && ((*(byte *)(param_1[0x56f] + 0x56c) & 8) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_140a5a830(param_1);
      if (cVar1 == '\0') {
        FUN_140a736c0(param_1);
      }
    }
    if (*(int *)((longlong)param_1 + 0x2ac4) != -1) {
      cVar1 = FUN_140a5a7e0(param_1);
      if (((cVar1 == '\0') && (param_1[0x52f] != 0)) && (*(int *)((longlong)param_1 + 0x2ac4) != -1)
         ) {
        FUN_142d00f90(param_1,0,1);
      }
    }
    cVar1 = FUN_142cf39d0(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_142cf3980(param_1);
      if (cVar1 != '\0') {
        FUN_140a5b0e0(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a775d0 FUN_140a775d0 body=231 status=ok
// SIG undefined FUN_140a775d0(void)

void FUN_140a775d0(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 0x2ba4) = 0xbf800000;
  if ((*(char *)(param_1 + 0x2894) != '\0') &&
     (pfVar3 = (float *)FUN_140a64a80(param_1,*(undefined1 *)(param_1 + 0x2ba8)),
     pfVar3 != (float *)0x0)) {
    fVar6 = -1.0;
    plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))();
      lVar5 = plVar4[0x1f];
    }
    if (*(float *)(lVar5 + 0x38) < 0.0) {
      if ((((uint)pfVar3[2] & 1) == 0) || (*pfVar3 <= 0.0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uint)pfVar3[2] & 2) == 0) || (pfVar3[1] <= 0.0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar1) && (bVar2)) {
        fVar6 = ((-0.5 / pfVar3[1]) * *pfVar3 * *pfVar3) / *(float *)(lVar5 + 0x38);
      }
    }
    *(float *)(param_1 + 0x2ba4) = fVar6;
  }
  return;
}



// FUNCTION 140a776c0 FUN_140a776c0 body=66 status=ok
// SIG undefined FUN_140a776c0(void)

void FUN_140a776c0(longlong param_1,byte param_2)

{
  FUN_142d07570(param_1,param_2);
  *(uint *)(param_1 + 0x2ac0) = *(uint *)(param_1 + 0x2ac0) & 0xffffffee;
  *(uint *)(param_1 + 0x2ac0) =
       *(uint *)(param_1 + 0x2ac0) | (param_2 >> 3 & 4 | param_2 & 0x40) >> 2;
  return;
}



// FUNCTION 140a77710 FUN_140a77710 body=314 status=ok
// SIG undefined FUN_140a77710(void)

void FUN_140a77710(undefined8 param_1,char param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  if (param_3 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  cVar2 = FUN_14059ee90(param_5);
  if (cVar2 == '\0') {
    cVar2 = FUN_14059ee00(param_5);
    bVar1 = false;
    if (cVar2 == '\0') goto LAB_140a77768;
  }
  bVar1 = true;
LAB_140a77768:
  if (param_2 == '\0') {
    if ((bVar1) && (cVar2 = FUN_14059ee90(param_5), cVar2 != '\0')) {
      lVar3 = FUN_14059b7e0(param_1,1);
      if (lVar3 == 0) {
        FUN_1405ac8f0(param_5,0,4);
      }
      else {
        FUN_1405a3150(lVar3,local_28,param_4,0);
        FUN_140591060(local_28);
        lVar3 = FUN_140590080(local_28);
        FUN_1405913a0(param_5,lVar3);
        *(undefined4 *)(param_5 + 0x10) = *(undefined4 *)(lVar3 + 0x10);
        FUN_140591060(local_28);
      }
    }
  }
  else if ((!bVar1) && (lVar3 = FUN_14059b7e0(param_1,1), lVar3 != 0)) {
    lVar3 = FUN_1405a3150(lVar3,local_28,param_3,0);
    FUN_1405913a0(param_5,lVar3);
    *(undefined4 *)(param_5 + 0x10) = *(undefined4 *)(lVar3 + 0x10);
    FUN_140591060(local_28);
  }
  return;
}



// FUNCTION 140a77850 FUN_140a77850 body=10 status=ok
// SIG undefined FUN_140a77850(void)

void FUN_140a77850(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  byte bVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plStack_48;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x2530) != '\0') {
    lVar6 = FUN_140a63ba0();
    plVar13 = (longlong *)0x0;
    if (lVar6 != 0) {
      lVar7 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        plVar13 = *(longlong **)(lVar6 + 0x2c70);
      }
    }
    if ((plVar13 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar13 + 0x768))(plVar13), cVar5 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar8 = FUN_1429bed90();
    AActor::GetComponentsByClass(param_1,&plStack_48,uVar8);
    bVar11 = 0;
    do {
      lVar6 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))(param_1 + 0xd88,bVar11);
      if (lVar6 != 0) {
        uVar8 = FUN_1429bed90();
        puVar9 = (undefined8 *)AActor::GetComponentsByClass(lVar6,&uStack_38,uVar8);
        iVar2 = *(int *)(puVar9 + 1);
        if (iVar2 != 0) {
          if (iStack_3c < iVar2 + iStack_40) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&plStack_48);
          }
          _guard_xfg_dispatch_icall_nop(plStack_48 + iStack_40,(void *)*puVar9,(longlong)iVar2 << 3)
          ;
          *(undefined4 *)(puVar9 + 1) = 0;
          iStack_40 = iStack_40 + iVar2;
        }
        if (CONCAT44(uStack_34,uStack_38) != 0) {
          FMemory::Free();
        }
      }
      bVar11 = bVar11 + 1;
    } while (bVar11 < 2);
    plVar1 = plStack_48 + iStack_40;
    for (plVar12 = plStack_48; plVar12 != plVar1; plVar12 = plVar12 + 1) {
      lVar6 = *plVar12;
      if (lVar6 != 0) {
        lVar10 = FUN_1429bed90();
        lVar7 = *(longlong *)(lVar6 + 0x10);
        if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
            lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_142398820(lVar6,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
          FUN_142397420(lVar6,*(undefined4 *)(param_1 + 0x2554));
          uStack_38 = *(undefined4 *)(param_1 + 0x2544);
          uStack_34 = *(undefined4 *)(param_1 + 0x2548);
          uStack_30 = *(undefined4 *)(param_1 + 0x254c);
          uStack_2c = *(undefined4 *)(param_1 + 0x2550);
          FUN_1423972b0(lVar6,0,&uStack_38);
          uStack_38 = *(undefined4 *)(param_1 + 0x2544);
          uStack_34 = *(undefined4 *)(param_1 + 0x2548);
          uStack_30 = *(undefined4 *)(param_1 + 0x254c);
          uStack_2c = *(undefined4 *)(param_1 + 0x2550);
          FUN_1423972b0(lVar6,1,&uStack_38);
          uStack_38 = *(undefined4 *)(param_1 + 0x2544);
          uStack_34 = *(undefined4 *)(param_1 + 0x2548);
          uStack_30 = *(undefined4 *)(param_1 + 0x254c);
          uStack_2c = *(undefined4 *)(param_1 + 0x2550);
          FUN_1423972b0(lVar6,2,&uStack_38);
          uStack_38 = *(undefined4 *)(param_1 + 0x2544);
          uStack_34 = *(undefined4 *)(param_1 + 0x2548);
          uStack_30 = *(undefined4 *)(param_1 + 0x254c);
          uStack_2c = *(undefined4 *)(param_1 + 0x2550);
          FUN_1423972b0(lVar6,3,&uStack_38);
          if (bVar3) {
            uStack_38 = *(undefined4 *)(param_1 + 0x2534);
            uStack_34 = *(undefined4 *)(param_1 + 0x2538);
            uStack_30 = *(undefined4 *)(param_1 + 0x253c);
            uStack_2c = *(undefined4 *)(param_1 + 0x2540);
            bVar11 = 3;
            if (*(byte *)((longlong)plVar13 + 0x644) < 3) {
              bVar11 = *(byte *)((longlong)plVar13 + 0x644);
            }
            FUN_1423972b0(lVar6,bVar11,&uStack_38);
          }
        }
      }
    }
    if (plStack_48 != (longlong *)0x0) {
      FMemory::Free(plStack_48);
    }
  }
  return;
}



// FUNCTION 140a77860 FUN_140a77860 body=1058 status=ok
// SIG undefined FUN_140a77860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a77860(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 local_190;
  undefined8 local_188;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float fStack_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [64];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  fVar4 = (float)FUN_1423b1370(*(undefined8 *)(param_1 + 0x460));
  *(float *)(param_1 + 0x474) = fVar4;
  FUN_140a405f0(param_1 + 0x46c);
  fVar8 = fVar4 / (float)*(int *)(param_1 + 0x468);
  local_150 = fVar8;
  fVar5 = (float)FUN_140a32860(param_1 + 0x46c);
  FUN_1423aee90(*(undefined8 *)(param_1 + 0x460),&local_168,fVar5,1);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    local_180 = (float)DAT_1464aa7c0;
    puVar2 = &local_188;
    local_188 = DAT_1464aa7b8;
  }
  else {
    puVar2 = (undefined8 *)FUN_14238d380(*(longlong *)(param_1 + 0x168),&local_188);
  }
  local_188 = *puVar2;
  iVar3 = 0;
  local_180 = *(float *)(puVar2 + 1);
  local_154 = -(float)local_188;
  local_158 = -local_180;
  fVar12 = -(float)((ulonglong)local_188 >> 0x20);
  if (0 < *(int *)(param_1 + 0x468)) {
    do {
      fVar10 = local_160;
      fVar11 = fStack_164;
      fVar9 = local_168;
      fVar5 = fVar5 + fVar8;
      auVar1._4_4_ = fStack_164;
      auVar1._0_4_ = local_168;
      auVar1._8_4_ = local_160;
      if (fVar5 < fVar4) {
        if (fVar5 < 0.0) {
          fVar5 = fVar5 + fVar4;
        }
      }
      else {
        fVar5 = fVar5 - fVar4;
      }
      puVar2 = (undefined8 *)FUN_1423aee90(*(undefined8 *)(param_1 + 0x460),local_138,fVar5,1);
      local_168 = (float)*puVar2;
      fStack_164 = (float)((ulonglong)*puVar2 >> 0x20);
      fVar9 = local_168 - fVar9;
      local_160 = *(float *)(puVar2 + 1);
      fVar11 = fStack_164 - fVar11;
      fVar10 = local_160 - fVar10;
      fVar8 = fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10;
      local_178 = fVar9;
      local_170 = fVar10;
      local_174 = fVar11;
      if ((fVar8 != 1.0) &&
         (local_178 = DAT_1468b5d90, local_170 = DAT_1468b5d98, local_174 = DAT_1468b5d94,
         1e-08 <= fVar8)) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar8 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar8 * 0.5 * fVar6 * fVar6);
        local_178 = fVar9 * fVar6;
        local_170 = fVar10 * fVar6;
        local_174 = fVar11 * fVar6;
      }
      local_180 = local_178 * fVar12 - local_174 * local_154;
      local_188 = CONCAT44(local_170 * local_154 - local_178 * local_158,
                           local_174 * local_158 - local_170 * fVar12);
      FRotationMatrix::MakeFromXZ(local_128,&local_178,&local_188);
      FQuat::FQuat(&local_148,local_128);
      local_e8 = local_148;
      uStack_e0 = uStack_140;
      local_198 = iVar3 == *(int *)(param_1 + 0x468) + -1;
      auVar1._12_4_ = 0;
      local_c8._4_4_ = DAT_1464aa788._4_4_;
      local_c8._0_4_ = (undefined4)DAT_1464aa788;
      local_c8._8_4_ = DAT_1464aa790;
      local_c8._12_4_ = 0;
      local_190 = 1;
      local_d8 = auVar1;
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0x990))
                (*(longlong **)(param_1 + 0x490),iVar3,&local_e8,1);
      iVar3 = iVar3 + 1;
      fVar8 = local_150;
    } while (iVar3 < *(int *)(param_1 + 0x468));
  }
  return;
}



// FUNCTION 140a77c90 FUN_140a77c90 body=1868 status=ok
// SIG undefined FUN_140a77c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_140a77c90(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  longlong *plVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  longlong *plVar22;
  undefined8 uVar23;
  int iVar24;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined4 local_180;
  char local_178;
  longlong local_170;
  uint local_168;
  longlong *local_160;
  longlong *local_158;
  int local_150;
  longlong *local_148;
  int local_140;
  longlong *local_138;
  longlong local_130;
  longlong local_128;
  uint local_120 [2];
  longlong local_118;
  longlong local_110;
  int local_108;
  int local_100;
  char local_fc;
  int local_f8;
  longlong *local_f0;
  longlong local_e8;
  int local_e0;
  undefined8 local_d0;
  char local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  plVar18 = (longlong *)0x0;
  local_160 = (longlong *)0x0;
  if (param_2 == (longlong *)0x0) {
    if (param_1 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar11 = *param_1;
    plVar19 = param_1;
  }
  else {
    lVar11 = *param_2;
    plVar19 = param_2;
  }
  local_158 = param_2;
  local_150 = param_3;
  local_138 = param_1;
  lVar11 = (**(code **)(lVar11 + 0x148))(plVar19);
  if (lVar11 == 0) {
    return 0xffffffff;
  }
  local_170 = lVar11;
  iVar9 = FUN_1428cf800(lVar11);
  if (iVar9 == 3) {
    return 0xffffffff;
  }
  if (param_1 == (longlong *)0x0) {
LAB_140a77d56:
    local_138 = (longlong *)0x0;
    param_1 = plVar18;
  }
  else {
    lVar12 = FUN_1413ffe00();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
        lVar12 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140a77d56;
  }
  if (param_2 == (longlong *)0x0) {
LAB_140a77d99:
    local_158 = (longlong *)0x0;
    param_2 = plVar18;
  }
  else {
    lVar12 = FUN_1413ffe00();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
        lVar12 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140a77d99;
  }
  local_168 = 0;
  plVar19 = plVar18;
  uVar10 = local_168;
  if (param_2 != (longlong *)0x0) {
    UWorld::GetPlayerControllerIterator(lVar11,&local_148);
    while( true ) {
      if ((local_140 < 0) || ((int)local_148[1] <= local_140)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      uVar10 = (uint)plVar19;
      if (!bVar3) break;
      plVar13 = (longlong *)FWeakObjectPtr::Get(*local_148 + (longlong)local_140 * 8);
      if (plVar13 == (longlong *)0x0) {
LAB_140a77e27:
        plVar13 = plVar18;
      }
      else {
        lVar12 = FUN_1429e18b0();
        if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
            != lVar12 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_140a77e27;
      }
      plVar14 = (longlong *)(**(code **)(*param_2 + 0x670))();
      if (plVar14 == plVar13) break;
      plVar19 = (longlong *)(ulonglong)(uVar10 + 1);
      local_140 = local_140 + 1;
    }
  }
  local_168 = uVar10;
  plVar13 = (longlong *)FUN_140a62fa0(lVar11);
  if (param_2 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    plVar14 = (longlong *)param_2[0x58e];
  }
  local_148 = plVar13;
  if ((plVar14 == (longlong *)0x0) ||
     (cVar8 = APlayerController::IsPrimaryPlayer(plVar14), cVar8 == '\0')) {
LAB_140a77ec2:
    local_178 = '\0';
  }
  else {
    if (((*(uint *)((longlong)plVar14 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar8 = (**(code **)(*plVar14 + 0x768))(plVar14), cVar8 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140a77ec2;
    local_178 = '\x01';
    plVar14 = plVar13;
    plVar18 = plVar13;
    local_160 = plVar13;
    if (plVar13 != (longlong *)0x0) goto LAB_140a78198;
  }
  local_130 = FUN_1412fa9e0();
  if (local_130 != 0) {
    lVar15 = FUN_1412fa9e0();
    lVar12 = local_130;
    do {
      if (lVar12 == lVar15) goto LAB_140a77ef0;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  local_130 = 0;
LAB_140a77ef0:
  local_120[0] = 5;
  local_c8 = '\0';
  local_128 = lVar11;
  FUN_14044bc80(&local_118,&local_128,&local_130);
  FUN_14045a130(local_120);
  plVar14 = plVar18;
  if (local_fc == '\0') {
LAB_140a77f31:
    plVar6 = local_f0;
    lVar12 = local_118;
    plVar22 = plVar18;
    plVar7 = local_160;
    if ((local_f0 != (longlong *)0x0) && ((local_f0 != plVar13 || (local_178 != '\0')))) {
      plVar14 = plVar18;
      lVar11 = local_170;
      if ((param_2 != (longlong *)0x0) && ((longlong *)local_f0[0xa1] == param_2))
      goto LAB_140a78165;
      if ((param_1 != (longlong *)0x0) && ((longlong *)local_f0[0xa1] == param_1)) {
        if (param_2 == (longlong *)0x0) {
          (**(code **)(*local_f0 + 0x6f8))(local_f0);
          plVar6[0xa1] = 0;
          plVar14 = (longlong *)0x0;
          lVar11 = local_170;
        }
        else {
          local_f0[0xa1] = (longlong)param_2;
        }
        goto LAB_140a78165;
      }
      if (((local_f0[0xa1] == 0) &&
          (plVar22 = local_f0, plVar7 = local_f0, plVar18 != (longlong *)0x0)) &&
         ((plVar14 = local_f0, (int)local_f0[0x9f] == (int)plVar19 ||
          (plVar22 = plVar18, plVar7 = local_160, (int)local_f0[0x9f] == local_150))))
      goto LAB_140a78165;
    }
    local_160 = plVar7;
    iVar9 = local_100 + 1;
    if (iVar9 < local_e0 + local_108) {
      lVar11 = (longlong)iVar9 * 8;
      iVar24 = local_e0;
      iVar20 = local_108;
      do {
        if (iVar9 < iVar20) {
          plVar18 = *(longlong **)(local_110 + lVar11);
        }
        else {
          plVar18 = *(longlong **)(local_e8 + (longlong)(iVar9 - iVar20) * 8);
        }
        local_f8 = local_f8 + 1;
        if ((plVar18 != (longlong *)0x0) &&
           (lVar15 = AActor::GetLevel(plVar18), iVar24 = local_e0, iVar20 = local_108, lVar15 != 0))
        {
          if ((local_120[0] & 1) != 0) {
            iVar1 = *(int *)((longlong)plVar18 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar21 = iVar1 >> 0x1f & 0xffff;
              uVar10 = iVar1 + uVar21;
              lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                       (longlong)(int)((uVar10 & 0xffff) - uVar21) * 0x18;
            }
            else {
              lVar16 = 0;
            }
            if ((*(uint *)(lVar16 + 8) >> 0x1d & 1) != 0) goto LAB_140a78136;
          }
          if (((local_120[0] >> 1 & 1) == 0) ||
             (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(plVar18), iVar24 = local_e0,
             iVar20 = local_108, cVar8 != '\0')) {
            if ((local_120[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar15 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar15 + 0x205) & 0x10) == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              piVar2 = *(int **)(lVar15 + 600);
              if (((*(longlong *)(lVar15 + 0xc0) == 0) ||
                  (piVar17 = (int *)UWorld::GetActiveLevelCollection(), piVar17 == (int *)0x0)) ||
                 (piVar2 == piVar17)) {
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
              iVar24 = local_e0;
              iVar20 = local_108;
              if ((!bVar3) || (!bVar4)) goto LAB_140a78136;
            }
            lVar15 = ULevel::GetWorld(lVar15);
            iVar24 = local_e0;
            iVar20 = local_108;
            if (lVar15 == lVar12) {
              lVar15 = AActor::GetLevel(plVar18);
              if (lVar15 == *(longlong *)(lVar12 + 0x30)) goto LAB_140a781cc;
              lVar15 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                  lVar15 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              iVar24 = local_e0;
              iVar20 = local_108;
              if (!bVar3) goto LAB_140a781cc;
            }
          }
        }
LAB_140a78136:
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 8;
        plVar22 = local_160;
        if (iVar24 + iVar20 <= iVar9) break;
      } while( true );
    }
    local_f0 = (longlong *)0x0;
    local_fc = '\x01';
    plVar14 = plVar22;
    param_2 = local_158;
    lVar11 = local_170;
  }
LAB_140a78165:
  if (local_c8 != '\0') {
    local_c8 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_118,local_d0);
    if (local_e8 != 0) {
      FMemory::Free();
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
  }
LAB_140a78198:
  if ((param_2 != (longlong *)0x0) && (plVar14 != (longlong *)0x0)) {
    if (plVar14[0x9a] != 0) {
      (**(code **)(*plVar14 + 0x6f8))(plVar14);
      plVar14[0xa1] = 0;
    }
    lVar12 = 0;
    plVar14[0xac] = (longlong)param_2;
    if (param_2[0x58e] != 0) {
      lVar12 = FUN_140a64200(param_2[0x58e] + 0x1918);
    }
    plVar14[0xad] = lVar12;
    cVar8 = FUN_1428cdc10(lVar11);
    if (cVar8 != '\0') {
      if (*(longlong *)(lVar11 + 400) == 0) {
        uVar23 = *(undefined8 *)(lVar11 + 0x3f8);
      }
      else {
        uVar23 = *(undefined8 *)(*(longlong *)(lVar11 + 400) + 0x90);
      }
      plVar18 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar18 != (longlong *)0x0) {
        *plVar18 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar18 + 1,plVar14);
        plVar18[2] = (longlong)&LAB_140a6a610;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar18[4] = lVar11;
        *plVar18 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_b8 = 0;
      local_b0 = 0;
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x30))(plVar18,&local_b8);
      }
      FWeakObjectPtr::operator=(local_a8,0);
      local_180 = 0xbf800000;
      local_188 = 0;
      local_a0 = 0;
      local_68 = (longlong *)0x0;
      local_58 = 0;
      local_98 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar23,plVar14 + 0xaa,&local_b8,0x3dcccccd);
      if (local_58 != 0) {
        plVar19 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar19 = local_68;
        }
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x10))(plVar19,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x28))(plVar18,0);
        lVar11 = FMemory::Realloc(plVar18,0,0);
        if (lVar11 != 0) {
          FMemory::Free(lVar11);
        }
      }
    }
    return (int)plVar14[0x9f];
  }
  return 0xffffffff;
LAB_140a781cc:
  plVar14 = local_160;
  param_2 = local_158;
  lVar11 = local_170;
  local_100 = iVar9;
  local_f0 = plVar18;
  if (local_fc != '\0') goto LAB_140a78165;
  plVar19 = (longlong *)(ulonglong)local_168;
  plVar18 = local_160;
  param_1 = local_138;
  plVar13 = local_148;
  goto LAB_140a77f31;
}



// FUNCTION 140a783e0 FUN_140a783e0 body=1192 status=ok
// SIG undefined FUN_140a783e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a783e0(longlong param_1,longlong param_2,float *param_3,undefined8 *param_4,
                  longlong param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  if (param_2 == 0) {
    if (param_5 == 0) {
      if (((*param_3 == 0.0) && (param_3[1] == 0.0)) && (param_3[2] == 0.0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if ((*(byte *)(param_1 + 0x478) & 1) == 0) {
          return;
        }
        local_68 = *(undefined8 *)(param_1 + 0x488);
        uStack_60 = *(undefined8 *)(param_1 + 0x490);
        local_58 = *(undefined4 *)(param_1 + 0x498);
        uStack_54 = *(undefined4 *)(param_1 + 0x49c);
        uStack_50 = *(undefined4 *)(param_1 + 0x4a0);
        uStack_4c = *(undefined4 *)(param_1 + 0x4a4);
        local_48 = *(undefined8 *)(param_1 + 0x4a8);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x468,&local_68);
        *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x478) & 0xfffffffe;
        *(undefined8 *)(param_1 + 0x488) = 0;
        *(undefined8 *)(param_1 + 0x490) = 0;
        *(undefined8 *)(param_1 + 0x498) = _DAT_1468b5d90;
        *(undefined4 *)(param_1 + 0x4a0) = DAT_1468b5d98;
        *(undefined8 *)(param_1 + 0x4a4) = DAT_1468b5da0;
        *(undefined4 *)(param_1 + 0x4ac) = DAT_1468b5da8;
        if (*(char *)(param_1 + 0x47c) != '\0') {
          return;
        }
        if (*(longlong **)(param_1 + 0x168) == (longlong *)0x0) {
          return;
        }
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x460))();
        if (cVar4 == '\0') {
          return;
        }
        FUN_142398ec0(*(undefined8 *)(param_1 + 0x168),0,2);
        return;
      }
    }
  }
  else {
    lVar7 = FUN_142d29780(param_2);
    if (lVar7 == 0) {
      lVar7 = FUN_14062e7a0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((!bVar3) ||
         ((*(longlong **)(param_2 + 0x168) != (longlong *)0x0 &&
          (iVar5 = (**(code **)(**(longlong **)(param_2 + 0x168) + 0x4f8))(), iVar5 == 0)))) {
        param_2 = 0;
      }
    }
  }
  if (*(char *)(param_1 + 0x47c) == '\0') {
    local_98 = *(undefined8 *)param_3;
    local_90 = param_3[2];
    puVar8 = (undefined8 *)
             FUN_140a5cbc0(param_1,&local_88,*(undefined1 *)(param_1 + 0x47d),param_2,&local_98,
                           *(undefined4 *)(param_1 + 0x480),param_6);
    uVar1 = *(undefined1 *)(param_1 + 0x484);
    fVar9 = *(float *)(puVar8 + 1);
    *(undefined8 *)param_3 = *puVar8;
    local_98 = *param_6;
    param_3[2] = fVar9;
    local_90 = *(float *)(param_6 + 1);
    local_80 = *(float *)(param_4 + 1);
    local_88 = *param_4;
    puVar8 = (undefined8 *)FUN_140a5d200(param_1,local_78,uVar1,param_2,&local_88,&local_98);
    uVar2 = *(undefined4 *)(puVar8 + 1);
    *param_4 = *puVar8;
    *(undefined4 *)(param_4 + 1) = uVar2;
  }
  uVar6 = *(uint *)(param_1 + 0x478);
  if ((((uVar6 & 1) == 0) || (param_2 != *(longlong *)(param_1 + 0x488))) ||
     (param_5 != *(longlong *)(param_1 + 0x490))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  fVar11 = (float)*(undefined8 *)param_3;
  fVar10 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  fVar9 = param_3[2];
  if (param_5 != 0) {
    fVar11 = *param_3 - *(float *)(param_5 + 0x220);
    fVar10 = param_3[1] - *(float *)(param_5 + 0x224);
    fVar9 = param_3[2] - *(float *)(param_5 + 0x228);
    local_80 = fVar9;
  }
  if (((uVar6 & 1) != 0) && (bVar3)) {
    local_68 = *(undefined8 *)(param_1 + 0x488);
    uStack_60 = *(undefined8 *)(param_1 + 0x490);
    local_58 = *(undefined4 *)(param_1 + 0x498);
    uStack_54 = *(undefined4 *)(param_1 + 0x49c);
    uStack_50 = *(undefined4 *)(param_1 + 0x4a0);
    uStack_4c = *(undefined4 *)(param_1 + 0x4a4);
    local_48 = *(undefined8 *)(param_1 + 0x4a8);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x468,&local_68);
    uVar6 = *(uint *)(param_1 + 0x478);
  }
  *(ulonglong *)(param_1 + 0x498) = CONCAT44(fVar10,fVar11);
  *(uint *)(param_1 + 0x478) = uVar6 | 1;
  *(longlong *)(param_1 + 0x488) = param_2;
  *(longlong *)(param_1 + 0x490) = param_5;
  *(float *)(param_1 + 0x4a0) = fVar9;
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_1 + 0x4a4) = *param_4;
  *(undefined4 *)(param_1 + 0x4ac) = uVar2;
  if (bVar3) {
    local_68 = *(undefined8 *)(param_1 + 0x488);
    uStack_60 = *(undefined8 *)(param_1 + 0x490);
    local_58 = *(undefined4 *)(param_1 + 0x498);
    uStack_54 = *(undefined4 *)(param_1 + 0x49c);
    uStack_50 = *(undefined4 *)(param_1 + 0x4a0);
    uStack_4c = *(undefined4 *)(param_1 + 0x4a4);
    local_48 = *(undefined8 *)(param_1 + 0x4a8);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x458,&local_68);
  }
  if (*(char *)(param_1 + 0x47c) == '\0') {
    if ((*(longlong **)(param_1 + 0x168) != (longlong *)0x0) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x460))(), cVar4 != '\x01')) {
      FUN_142398ec0(*(undefined8 *)(param_1 + 0x168),1,2);
    }
    local_88 = *(undefined8 *)(param_1 + 0x4a4);
    local_80 = *(float *)(param_1 + 0x4ac);
    lVar7 = *(longlong *)(param_1 + 0x490);
    fVar9 = (float)*(undefined8 *)(param_1 + 0x498);
    fVar10 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x498) >> 0x20);
    local_90 = *(float *)(param_1 + 0x4a0);
    if (lVar7 != 0) {
      fVar9 = fVar9 + *(float *)(lVar7 + 0x220);
      fVar10 = fVar10 + *(float *)(lVar7 + 0x224);
      local_90 = local_90 + *(float *)(lVar7 + 0x228);
    }
    local_98 = CONCAT44(fVar10,fVar9);
    FUN_14223ca30(param_1,&local_98,&local_88,0,0,1);
  }
  return;
}



// FUNCTION 140a78890 FUN_140a78890 body=803 status=ok
// SIG undefined FUN_140a78890(void)

void FUN_140a78890(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  void *local_38;
  int local_30;
  int local_2c;
  
  if ((int)param_1[1] == 0) {
    *(undefined4 *)(param_1 + 1) = 1;
    if (*(int *)((longlong)param_1 + 0xc) < 1) {
      TArray<FOverlapInfo,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    uVar7 = *(undefined8 *)((longlong)param_1 + 0x104);
    puVar4 = (undefined8 *)*param_1;
    *puVar4 = *(undefined8 *)((longlong)param_1 + 0xfc);
    puVar4[1] = uVar7;
    uVar7 = *(undefined8 *)((longlong)param_1 + 0x114);
    puVar4[2] = *(undefined8 *)((longlong)param_1 + 0x10c);
    puVar4[3] = uVar7;
    uVar7 = *(undefined8 *)((longlong)param_1 + 0x124);
    puVar4[4] = *(undefined8 *)((longlong)param_1 + 0x11c);
    puVar4[5] = uVar7;
    uVar7 = *(undefined8 *)((longlong)param_1 + 0x134);
    puVar4[6] = *(undefined8 *)((longlong)param_1 + 300);
    puVar4[7] = uVar7;
    uVar7 = *(undefined8 *)((longlong)param_1 + 0x144);
    puVar4[8] = *(undefined8 *)((longlong)param_1 + 0x13c);
    puVar4[9] = uVar7;
    uVar7 = *(undefined8 *)((longlong)param_1 + 0x154);
    puVar4[10] = *(undefined8 *)((longlong)param_1 + 0x14c);
    puVar4[0xb] = uVar7;
    uVar7 = *(undefined8 *)((longlong)param_1 + 0x164);
    puVar4[0xc] = *(undefined8 *)((longlong)param_1 + 0x15c);
    puVar4[0xd] = uVar7;
    lVar8 = param_1[0x2e];
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x174);
    lVar10 = param_1[0x2f];
    *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)((longlong)param_1 + 0x16c);
    *(int *)((longlong)puVar4 + 0x74) = (int)lVar8;
    *(undefined4 *)(puVar4 + 0xf) = uVar5;
    *(int *)((longlong)puVar4 + 0x7c) = (int)lVar10;
    puVar4[0x10] = *(undefined8 *)((longlong)param_1 + 0x17c);
    *(undefined4 *)(puVar4 + 0x11) = *(undefined4 *)((longlong)param_1 + 0x184);
  }
  if ((int)param_1[0x17] == 0) {
    iVar3 = (int)param_1[0x17];
    lVar8 = (longlong)iVar3;
    *(int *)(param_1 + 0x17) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xbc) < iVar3 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,iVar3);
    }
    lVar9 = param_1[0x32];
    lVar10 = param_1[0x16];
    plVar1 = (longlong *)(lVar10 + lVar8 * 0x50);
    *plVar1 = param_1[0x31];
    plVar1[1] = lVar9;
    lVar9 = param_1[0x34];
    plVar1 = (longlong *)(lVar10 + 0x10 + lVar8 * 0x50);
    *plVar1 = param_1[0x33];
    plVar1[1] = lVar9;
    lVar9 = param_1[0x36];
    plVar1 = (longlong *)(lVar10 + 0x20 + lVar8 * 0x50);
    *plVar1 = param_1[0x35];
    plVar1[1] = lVar9;
    lVar9 = param_1[0x38];
    plVar1 = (longlong *)(lVar10 + 0x30 + lVar8 * 0x50);
    *plVar1 = param_1[0x37];
    plVar1[1] = lVar9;
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x1cc);
    lVar9 = param_1[0x3a];
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x1d4);
    puVar2 = (undefined4 *)(lVar10 + 0x40 + lVar8 * 0x50);
    *puVar2 = (int)param_1[0x39];
    puVar2[1] = uVar5;
    puVar2[2] = (int)lVar9;
    puVar2[3] = uVar6;
  }
  if (((int)param_1[0x1e] == 0) && (0 < (int)param_1[0x48])) {
    lVar8 = param_1[0x47];
    lVar10 = (longlong)(int)param_1[0x48] * 0x10 + lVar8;
    for (; lVar8 != lVar10; lVar8 = lVar8 + 0x10) {
      local_30 = (int)param_1[0x48];
      lVar9 = (longlong)local_30;
      _Src = (void *)param_1[0x47];
      local_38 = (void *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar9 << 4);
      }
      local_30 = 0;
      if (local_2c != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_38,0);
      }
      iVar3 = (int)param_1[0x1e];
      *(int *)(param_1 + 0x1e) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0xf4) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x1d,iVar3);
      }
      FUN_140a4f550((longlong)iVar3 * 0x70 + param_1[0x1d]);
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)((longlong)param_1 + 0x244) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x47,0);
    }
  }
  return;
}


