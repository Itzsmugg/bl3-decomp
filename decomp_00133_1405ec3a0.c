// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1405ec3a0 FUN_1405ec3a0 body=703 status=ok
// SIG undefined FUN_1405ec3a0(void)

void FUN_1405ec3a0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  void *_Src;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  void *pvVar13;
  int local_res8;
  longlong local_res20;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  
  local_50 = (int)param_1[1];
  lVar9 = (longlong)local_50;
  local_58 = (void *)0x0;
  local_4c = 0;
  if (0 < local_50) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58);
  }
  iVar1 = local_50;
  pvVar2 = local_58;
  _guard_xfg_dispatch_icall_nop(local_58,0,lVar9 << 2);
  pvVar13 = (void *)*param_2;
  iVar12 = 0;
  iVar8 = 0;
  local_res8 = 0;
  local_58 = (void *)((longlong)pvVar13 + (longlong)(int)param_2[1] * 0x28);
  iVar5 = 0;
  if (pvVar13 != local_58) {
    local_res20 = 0;
    lVar9 = 0;
    do {
      if (iVar8 < (int)param_1[1]) {
        puVar4 = (uint *)(*param_1 + lVar9 * 0x28 + 0x1c);
        do {
          if (*(uint *)((longlong)pvVar13 + 0x1c) <= *puVar4) break;
          iVar8 = iVar8 + 1;
          lVar9 = lVar9 + 1;
          puVar4 = puVar4 + 10;
        } while (lVar9 < (int)param_1[1]);
      }
      iVar5 = iVar8 - iVar12;
      if (local_res8 < iVar5) {
        lVar10 = (longlong)local_res8;
        iVar6 = iVar5 - local_res8;
        local_res8 = local_res8 + (int)(iVar5 - local_res20);
        local_res20 = local_res20 + (iVar5 - local_res20);
        piVar11 = (int *)(lVar10 * 4 + (longlong)pvVar2);
        for (lVar7 = (longlong)iVar6; lVar7 != 0; lVar7 = lVar7 + -1) {
          *piVar11 = iVar12;
          piVar11 = piVar11 + 1;
        }
      }
      if ((iVar8 < 0) || (iVar5 = (int)param_1[1], iVar5 <= iVar8)) {
        iVar5 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
        }
        FUN_1405e12a0(*param_1 + (longlong)iVar5 * 0x28,pvVar13);
        iVar12 = iVar12 + 1;
      }
      else {
        lVar7 = *param_1 + lVar9 * 0x28;
        cVar3 = FUN_1405e2700(lVar7,pvVar13);
        if (((cVar3 == '\0') || (*(char *)(lVar7 + 0x18) != *(char *)((longlong)pvVar13 + 0x18))) ||
           (*(int *)(lVar7 + 0x1c) != *(int *)((longlong)pvVar13 + 0x1c))) {
          *(int *)(param_1 + 1) = iVar5 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
          }
          _Src = (void *)(*param_1 + (longlong)iVar8 * 0x28);
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)_Src + 0x28),_Src,(longlong)(iVar5 - iVar8) * 0x28);
          FUN_1405e12a0(*param_1 + (longlong)iVar8 * 0x28,pvVar13);
          iVar12 = iVar12 + 1;
          *(int *)((longlong)pvVar2 + local_res20 * 4) = iVar12;
        }
      }
      pvVar13 = (void *)((longlong)pvVar13 + 0x28);
      iVar5 = local_res8;
    } while (pvVar13 != local_58);
  }
  if (iVar5 < iVar1) {
    piVar11 = (int *)((longlong)iVar5 * 4 + (longlong)pvVar2);
    for (lVar9 = (longlong)(iVar1 - iVar5); lVar9 != 0; lVar9 = lVar9 + -1) {
      *piVar11 = iVar12;
      piVar11 = piVar11 + 1;
    }
  }
  lVar9 = param_1[2];
  lVar7 = (longlong)(int)param_1[3] * 0x1c + lVar9;
  for (; lVar9 != lVar7; lVar9 = lVar9 + 0x1c) {
    iVar1 = *(int *)(lVar9 + 4);
    if (iVar1 == -1) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((longlong)pvVar2 + (longlong)iVar1 * 4);
    }
    *(int *)(lVar9 + 4) = iVar5 + iVar1;
  }
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}



// FUNCTION 1405ec660 FUN_1405ec660 body=23 status=ok
// SIG undefined FUN_1405ec660(void)

undefined1 * FUN_1405ec660(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  return param_1;
}



// FUNCTION 1405ec680 FUN_1405ec680 body=315 status=ok
// SIG undefined FUN_1405ec680(void)

int * FUN_1405ec680(int *param_1,longlong *param_2,longlong param_3,longlong param_4,float *param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8 [2];
  int local_28;
  int local_24;
  int local_20;
  
  lVar3 = 0;
  param_1[1] = -1;
  param_1[2] = 0;
  lVar2 = lVar3;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
  }
  if (*param_1 == 0) {
    DAT_14620d470 = DAT_14620d470 + -1;
    *param_1 = DAT_14620d470;
  }
  FWeakObjectPtr::operator=(param_1 + 1,lVar2);
  if (((*param_1 != 0) && (cVar1 = FUN_14044af00(param_1 + 1,0), cVar1 != '\0')) &&
     (((param_3 != 0 || (((param_4 != 0 || (*param_5 != 0.0)) || (param_5[1] != 0.0)))) ||
      (param_5[2] != 0.0)))) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 1);
    if (lVar2 != 0) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_14620d3f0,local_res8,lVar2);
      if ((local_res8[0] != -1) &&
         (lVar2 = DAT_14620d3f0 + (longlong)local_res8[0] * 0x18, lVar2 != 0)) {
        lVar3 = *(longlong *)(lVar2 + 8);
      }
    }
    if (lVar3 != 0) {
      local_28 = *param_1;
      local_24 = param_1[1];
      local_20 = param_1[2];
      FUN_1405f1960(lVar3,&local_28,param_3,param_4,param_5);
    }
  }
  return param_1;
}



// FUNCTION 1405ec7c0 FUN_1405ec7c0 body=598 status=ok
// SIG undefined FUN_1405ec7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405ec7c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_318 [32];
  undefined4 *local_2f8;
  longlong *local_2f0;
  int *local_2e8;
  code **local_2e0;
  int local_2d8 [2];
  longlong local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  code *local_2a8 [2];
  longlong local_298 [4];
  longlong *local_278;
  int local_268;
  undefined1 local_258 [520];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  plVar5 = (longlong *)0x0;
  plVar8 = plVar5;
  if (param_2 != 0) {
    plVar8 = *(longlong **)(param_2 + 0x118);
  }
  if ((plVar8 != (longlong *)0x0) && (lVar3 = *(longlong *)(param_1 + 0x38), lVar3 != 0)) {
    local_258[0] = 0;
    local_50 = 0;
    local_48 = 0;
    plVar4 = *(longlong **)(lVar3 + 0x40);
    plVar9 = (longlong *)((longlong)*(int *)(lVar3 + 0x48) & 0x1fffffffffffffff);
    if (plVar4 + *(int *)(lVar3 + 0x48) < plVar4) {
      plVar9 = plVar5;
    }
    if (plVar9 != (longlong *)0x0) {
      local_2d0 = param_1;
      do {
        lVar3 = *plVar4;
        TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(param_1 + 0x40),local_2d8,lVar3);
        lVar2 = 0;
        if (local_2d8[0] != -1) {
          lVar2 = *(longlong *)(param_1 + 0x40) + (longlong)local_2d8[0] * 0x48;
        }
        lVar6 = lVar2 + 8;
        if (lVar2 == 0) {
          lVar6 = 0;
        }
        if (lVar6 == 0) {
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0x48) == '\x01')) {
            local_2f8 = (undefined4 *)((ulonglong)local_2f8._1_7_ << 8);
            uVar10 = 0;
            plVar7 = plVar8;
            goto LAB_1405ec8e8;
          }
        }
        else {
          uVar10 = *(undefined4 *)(lVar6 + 0x30);
          local_2f8 = (undefined4 *)CONCAT71(local_2f8._1_7_,*(undefined1 *)(lVar6 + 0x35));
          plVar7 = *(longlong **)(lVar6 + 0x18);
LAB_1405ec8e8:
          FUN_1405f1130(local_258,lVar3,plVar7,uVar10);
        }
        plVar4 = plVar4 + 1;
        plVar5 = (longlong *)((longlong)plVar5 + 1);
      } while (plVar5 != plVar9);
      lVar3 = *(longlong *)(local_2d0 + 0x38);
    }
    local_2c8 = 0;
    local_2d0 = -0x100000000;
    local_2a8[0] = AK::MemoryMgr::StartProfileThreadUsage;
    local_2c0 = 0;
    local_2d8[0] = 0;
    local_278 = (longlong *)0x0;
    local_268 = 0;
    local_2bc = 0xffffffff;
    local_2b8 = 0;
    uVar1 = (**(code **)(*plVar8 + 0x148))(plVar8);
    local_2e0 = local_2a8;
    local_2e8 = local_2d8;
    local_2f0 = &local_2d0;
    local_2f8 = &local_2c0;
    FUN_1405f81f0(uVar1,lVar3,local_258,0);
    if (local_268 != 0) {
      plVar8 = local_298;
      if (local_278 != (longlong *)0x0) {
        plVar8 = local_278;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_278 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405eca20 FUN_1405eca20 body=99 status=ok
// SIG undefined FUN_1405eca20(void)

void FUN_1405eca20(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x2a0) != '\0') && (*(longlong *)(param_1 + 0x228) != 0)) {
    FUN_140607170(*(longlong *)(param_1 + 0x228),*(undefined4 *)(param_1 + 4),1);
    if ((*(char *)(param_1 + 0x2ad) != '\0') &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x118), lVar1 != 0)) {
      FUN_14223d380(lVar1,0);
    }
  }
  FUN_1405e84a0(*(undefined8 *)(param_1 + 0x2b8),param_1,0);
  return;
}



// FUNCTION 1405eca90 FUN_1405eca90 body=408 status=ok
// SIG undefined FUN_1405eca90(void)

void FUN_1405eca90(longlong *param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  float fVar9;
  
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  lVar3 = (**(code **)(*DAT_146b33f38 + 0x280))();
  if ((int)param_1[0x536] != *(int *)((longlong)param_1 + 0x29dc)) {
    plVar4 = (longlong *)param_1[0x53d];
    if ((longlong *)param_1[0x53d] == (longlong *)0x0) {
      plVar4 = param_1 + 0x53c;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[0x53e] - 1U & (longlong)param_2) * 4
                    );
    if (iVar2 != -1) {
      do {
        pdVar7 = (double *)((longlong)iVar2 * 0x30 + param_1[0x535]);
        if (*(int *)pdVar7 == param_2) {
          if (iVar2 != -1) goto LAB_1405ecb44;
          break;
        }
        iVar2 = *(int *)(pdVar7 + 5);
      } while (iVar2 != -1);
    }
  }
  pdVar7 = (double *)0x0;
LAB_1405ecb44:
  pdVar8 = pdVar7 + 1;
  if (pdVar7 == (double *)0x0) {
    pdVar8 = (double *)0x0;
  }
  if (pdVar8 != (double *)0x0) {
    if (lVar3 != 0) {
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      if ((param_3 == '\0') && (lVar5 != 0)) {
        fVar9 = *(float *)(lVar5 + 0x798) + *(float *)(lVar3 + 0x7c);
      }
      else {
        fVar9 = 0.0;
      }
      *pdVar8 = (double)fVar9;
    }
    if (param_1[0x1b] != 0) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      iVar2 = FUN_1428cf800(uVar6);
      if ((iVar2 == 3) &&
         (cVar1 = FWeakObjectPtr::IsValid((int *)((longlong)pdVar8 + 0x14)), cVar1 != '\0')) {
        lVar3 = FWeakObjectPtr::Get((int *)((longlong)pdVar8 + 0x14));
        if ((*(longlong *)(lVar3 + 0xb0) == 0) ||
           (*(char *)(*(longlong *)(lVar3 + 0xb0) + 0x60) == '\0')) {
          lVar3 = *(longlong *)(param_1[0x1b] + 0x30);
          lVar5 = (longlong)*(int *)(param_1[0x1b] + 0x38) * 0x2c0 + lVar3;
          for (; lVar3 != lVar5; lVar3 = lVar3 + 0x2c0) {
            if (*(int *)(lVar3 + 8) == param_2) {
              FUN_1405e80a0();
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1405ecc30 FUN_1405ecc30 body=322 status=ok
// SIG undefined FUN_1405ecc30(void)

void FUN_1405ecc30(longlong param_1,undefined8 param_2,int param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_18;
  ulonglong local_10;
  
  if (param_3 == 0) {
    lVar7 = 0;
    local_10 = 0;
    local_18 = 0;
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_4[lVar5] != '\0');
      uVar4 = (int)lVar5 + 1;
      local_10 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_18,uVar4,param_4,uVar4,0x3f);
    }
    iVar1 = FString::ToBool(&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
    lVar5 = *(longlong *)(param_1 + 0x1b8);
    if ((lVar5 != 0) && (iVar1 != 0)) {
      uVar2 = UCurveFloat::GetPrivateStaticClass();
      lVar5 = UObjectBaseUtility::GetTypedOuter(lVar5,uVar2);
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar5 + 0x48);
        lVar5 = (longlong)*(int *)(lVar5 + 0x50) * 0x40 + lVar6;
        for (; lVar6 != lVar5; lVar6 = lVar6 + 0x40) {
          lVar3 = FUN_1405e8b50(lVar6);
          if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x78) != 0)) &&
              (*(int *)(**(longlong **)(lVar3 + 0x70) + 0x70) != 0)) &&
             ((lVar3 = **(longlong **)(**(longlong **)(lVar3 + 0x70) + 0x68), lVar3 != 0 &&
              (*(int *)(lVar3 + 0x74) == iVar1)))) {
            lVar7 = lVar3;
          }
        }
        FUN_1405f1ba0(param_1,lVar7);
      }
    }
  }
  return;
}



// FUNCTION 1405ecd80 FUN_1405ecd80 body=170 status=ok
// SIG undefined FUN_1405ecd80(void)

void FUN_1405ecd80(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1[0x23] != 0) &&
      ((((*(byte *)(param_1[0x23] + 0x92) & 0x40) == 0 || (iVar1 = FUN_142340f30(), iVar1 != 3)) &&
       (param_1[0x35] == 0)))) && (0 < (int)param_1[0x30])) {
    (**(code **)(*param_1 + 0x260))();
    iVar1 = (int)param_1[0x30];
    if (iVar1 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = rand();
      iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar1);
      iVar2 = iVar1 + -1;
      if (iVar3 <= iVar1 + -1) {
        iVar2 = iVar3;
      }
    }
    param_1[0x35] = *(longlong *)(param_1[0x2f] + (longlong)iVar2 * 8);
  }
  return;
}



// FUNCTION 1405ece30 FUN_1405ece30 body=83 status=ok
// SIG undefined FUN_1405ece30(void)

void FUN_1405ece30(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_142343b00();
  if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
    FUN_1405edc30(param_1);
  }
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar1 = FUN_142232850();
    FUN_14247c340(param_1 + 0x140,uVar1);
    return;
  }
  return;
}



// FUNCTION 1405ece90 FUN_1405ece90 body=193 status=ok
// SIG undefined FUN_1405ece90(void)

void FUN_1405ece90(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  if ((((int)param_1[0x36] == 0) && ((int)param_1[0x42] == 0)) && ((int)param_1[0x56] != 0)) {
    if (param_1[0x57] == 0) {
      fVar3 = 0.0;
      lVar2 = 0;
    }
    else {
      fVar3 = (float)FUN_1405e9b40();
      lVar2 = param_1[0x57];
    }
    cVar1 = (**(code **)(*param_1 + 0x418))(param_1,lVar2);
    if ((cVar1 != '\0') && ((fVar3 == 0.0 || (1.0 < fVar3 - *(float *)(param_1 + 0x58))))) {
      (**(code **)(*param_1 + 0x400))
                (param_1,(int)param_1[0x56],*(undefined4 *)((longlong)param_1 + 0x2b4),param_1[0x57]
                );
      *(int *)(param_1 + 0x4c) = (int)param_1[0x58];
    }
  }
  return;
}



// FUNCTION 1405ecf60 FUN_1405ecf60 body=108 status=ok
// SIG undefined FUN_1405ecf60(void)

void FUN_1405ecf60(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x2b8);
  *param_1 = 3;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_58[0] = FUN_1405e4e10;
  FUN_1405e5910(uVar1,param_1,local_58);
  return;
}



// FUNCTION 1405ecfd0 FUN_1405ecfd0 body=27 status=ok
// SIG undefined FUN_1405ecfd0(void)

void FUN_1405ecfd0(undefined8 param_1)

{
  FUN_1405f9230();
  FUN_142344780(param_1);
  return;
}



// FUNCTION 1405ecff0 FUN_1405ecff0 body=61 status=ok
// SIG undefined FUN_1405ecff0(void)

void FUN_1405ecff0(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(&DAT_14620d350);
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(&DAT_14620d3a0,param_2);
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(&DAT_14620d3f0,param_2);
  }
  return;
}



// FUNCTION 1405ed030 FUN_1405ed030 body=841 status=ok
// SIG undefined FUN_1405ed030(void)

void FUN_1405ed030(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res10;
  undefined8 local_res20;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  longlong **local_28;
  
  if (param_2 == 0) {
    return;
  }
  local_res10 = param_2;
  cVar2 = UWorld::IsGameWorld(param_2);
  lVar4 = local_res10;
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_146af37f1 != '\0') {
    return;
  }
  local_40 = 0;
  local_48 = 0;
  local_38 = (longlong *)0x0;
  FUN_1417846f0(local_res10,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res20 = 0;
  uVar3 = FUN_1405fc000();
  local_40 = FUN_1417985e0(uVar3,lVar4,0,0,0,0,0,0,0);
  local_30 = &local_res10;
  local_28 = (longlong **)&local_40;
  FUN_1405c0510(&DAT_14620d350,&local_res20,&local_30,0);
  lVar4 = local_res10;
  FUN_1417846f0(local_res10,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res20 = 0;
  uVar3 = FUN_1405fbf60();
  local_48 = FUN_1417985e0(uVar3,lVar4,0,0,0,0,0,0,0);
  local_30 = &local_res10;
  local_28 = (longlong **)&local_48;
  FUN_1405c0510(&DAT_14620d3a0,&local_res20,&local_30,0);
  lVar4 = FUN_1405fb550();
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  lVar5 = (**(code **)(*DAT_146b33f38 + 0x280))();
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x40) != 0)) {
    lVar6 = FUN_1405fb550();
    for (lVar7 = *(longlong *)(lVar5 + 0x40); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar6) {
        if (*(longlong *)(lVar5 + 0x40) != 0) {
          lVar7 = FUN_1405fb550();
          lVar4 = *(longlong *)(lVar5 + 0x40);
          lVar5 = lVar4;
          goto joined_r0x0001405ed1e5;
        }
        break;
      }
    }
  }
LAB_1405ed1f8:
  lVar5 = local_res10;
  local_res20 = 0;
  local_30 = (longlong *)0x0;
  FUN_1417846f0(local_res10,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_38 = (longlong *)FUN_1417985e0(lVar4,lVar5,0,0,0,0,0,0,0);
  local_30 = &local_res10;
  local_28 = &local_38;
  FUN_1405c0510(&DAT_14620d3f0,&local_res20,&local_30,0);
  lVar4 = local_40;
  if ((local_40 == 0) || (local_48 == 0)) goto LAB_1405ed340;
  *(longlong **)(local_40 + 0x68) = local_38;
  *(longlong *)(local_40 + 0x60) = local_48;
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  uVar3 = (**(code **)(*DAT_146b33f38 + 0x280))();
  lVar5 = *(longlong *)(lVar4 + 0x20);
  *(undefined8 *)(lVar4 + 0x70) = uVar3;
  if (lVar5 == 0) {
LAB_1405ed2fa:
    lVar5 = 0;
  }
  else {
    lVar7 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1405ed2fa;
  }
  FWeakObjectPtr::operator=(lVar4 + 0x78,lVar5);
  if (((*(longlong *)(lVar4 + 0x60) != 0) && (*(longlong *)(lVar4 + 0x68) != 0)) &&
     (*(longlong *)(lVar4 + 0x70) != 0)) {
    FWeakObjectPtr::IsValid(lVar4 + 0x78);
  }
  *(longlong **)(local_48 + 0x30) = local_38;
  *(longlong *)(local_48 + 0x28) = local_40;
LAB_1405ed340:
  (**(code **)(*local_38 + 0x278))(local_38,local_40,local_48);
  return;
joined_r0x0001405ed1e5:
  if (lVar5 == 0) goto LAB_1405ed1f5;
  if (lVar5 == lVar7) goto LAB_1405ed1f8;
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x0001405ed1e5;
LAB_1405ed1f5:
  lVar4 = 0;
  goto LAB_1405ed1f8;
}



// FUNCTION 1405ed380 FUN_1405ed380 body=321 status=ok
// SIG undefined FUN_1405ed380(void)

void FUN_1405ed380(longlong *param_1,longlong param_2,longlong param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined8 uStack_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  if ((((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
      (param_3 != 0)) && ((param_2 != 0 && (lVar2 = FUN_1405e8ff0(lVar2), lVar2 != 0)))) {
    local_68 = 0xffffffff;
    uStack_5c = 0;
    uStack_50 = 0;
    uStack_60 = 0xffffffff;
    local_4c = 0;
    local_3c = 0;
    uStack_38._0_4_ = 0;
    uStack_38._4_4_ = 0;
    uStack_38 = 0.0;
    local_28 = 0;
    local_20 = 0;
    uStack_58 = (undefined4)param_3;
    uStack_54 = (undefined4)((ulonglong)param_3 >> 0x20);
    local_30 = param_2;
    if (0.0 < param_4) {
      uStack_38 = (double)FUN_1405e99a0(lVar2);
      uStack_38 = uStack_38 + (double)param_4;
    }
    iVar1 = *(int *)(lVar2 + 0x48);
    *(int *)(lVar2 + 0x48) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x4c) < iVar1 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(lVar2 + 0x40),iVar1);
    }
    FUN_1405e18d0((longlong)iVar1 * 0x50 + *(longlong *)(lVar2 + 0x40),&local_68);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405ed4d0 FUN_1405ed4d0 body=365 status=ok
// SIG undefined FUN_1405ed4d0(void)

void FUN_1405ed4d0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4,
                  longlong param_5,float param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 uStack_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  if ((((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
      (param_5 != 0)) && ((param_2 != 0 && (lVar2 = FUN_1405e8ff0(lVar2), lVar2 != 0)))) {
    local_78 = 0xffffffff;
    local_58 = *param_3;
    uStack_48._0_4_ = 0;
    uStack_6c = 0;
    uStack_60 = 0;
    uStack_48._4_4_ = 0;
    uStack_48 = 0.0;
    local_50 = *(undefined4 *)(param_3 + 1);
    uStack_70 = 0xffffffff;
    local_5c = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_68 = (undefined4)param_5;
    uStack_64 = (undefined4)((ulonglong)param_5 >> 0x20);
    local_4c = param_4;
    local_40 = param_2;
    if (0.0 < param_6) {
      uStack_48 = (double)FUN_1405e99a0(lVar2);
      uStack_48 = uStack_48 + (double)param_6;
    }
    iVar1 = *(int *)(lVar2 + 0x48);
    *(int *)(lVar2 + 0x48) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x4c) < iVar1 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(lVar2 + 0x40),iVar1);
    }
    FUN_1405e18d0((longlong)iVar1 * 0x50 + *(longlong *)(lVar2 + 0x40),&local_78);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405ed640 FUN_1405ed640 body=85 status=ok
// SIG undefined FUN_1405ed640(void)

void FUN_1405ed640(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar1 = DAT_1468536c8;
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    uVar2 = FUN_1405e8c30(param_1,local_28);
    FUN_1405a19b0(lVar1,uVar2);
    if (local_20 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405ed6a0 FUN_1405ed6a0 body=82 status=ok
// SIG undefined FUN_1405ed6a0(void)

void FUN_1405ed6a0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  UObject::PostLoad();
  uVar2 = 0;
  plVar1 = *(longlong **)(param_1 + 0x68);
  uVar3 = (longlong)*(int *)(param_1 + 0x70) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x70) < plVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      if (*plVar1 != 0) {
        *(undefined1 *)(*plVar1 + 0x58) = 1;
      }
      plVar1 = plVar1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 1405ed700 FUN_1405ed700 body=155 status=ok
// SIG undefined FUN_1405ed700(void)

void FUN_1405ed700(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if ((((*(byte *)(param_2 + 5) & 2) != 0) &&
      (local_res10[0] = 0, *(longlong *)(param_1 + 0x10) != 0)) &&
     (((*(int *)(param_1 + 0x34) != 0 || *(int *)(param_1 + 0x30) != 0) ||
      *(int *)(param_1 + 0x2c) != 0) || *(int *)(param_1 + 0x28) != 0)) {
    puVar2 = (undefined8 *)FUN_141682af0((int *)(param_1 + 0x28),local_18,2);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
    }
    FName::FName(local_res10,puVar4,1);
    lVar1 = *param_2;
    uVar3 = FUN_140601f40();
    (**(code **)(lVar1 + 0x108))(param_2,uVar3,local_res10);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405ed7a0 FUN_1405ed7a0 body=112 status=ok
// SIG undefined FUN_1405ed7a0(void)

longlong FUN_1405ed7a0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(int)((longlong *)param_1[1])[1] * 0x2c0 + *(longlong *)param_1[1];
  if (param_2 != lVar3) {
    do {
      lVar2 = param_2;
      param_2 = lVar2 + 0x2c0;
      if (param_2 == lVar3) {
        return param_2;
      }
    } while ((*(int *)(lVar2 + 0x50c) != *(int *)*param_1) ||
            (cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                               (lVar2 + 0x510,(int *)*param_1 + 1), cVar1 == '\0'));
  }
  return param_2;
}



// FUNCTION 1405ed810 FUN_1405ed810 body=103 status=ok
// SIG undefined FUN_1405ed810(void)

longlong FUN_1405ed810(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)param_1[1] + (longlong)(int)((longlong *)param_1[1])[1] * 0x28;
  if (param_2 != lVar1) {
    do {
      lVar3 = param_2;
      param_2 = lVar3 + 0x28;
      if (param_2 == lVar1) {
        return param_2;
      }
    } while ((*(int *)(lVar3 + 0x2c) != *(int *)*param_1) ||
            (cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                               (lVar3 + 0x30,(int *)*param_1 + 1), cVar2 == '\0'));
  }
  return param_2;
}



// FUNCTION 1405ed880 Realloc body=122 status=ok
// SIG undefined Realloc(void)

void TBitArray<FDefaultBitArrayAllocator>::Realloc(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = (int)(param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  iVar2 = *(int *)(param_1 + 0x1c) + 0x1f;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  TInlineAllocator<4,FDefaultAllocator>::ForElementType<unsigned_int>::ResizeAllocation
            (param_1,iVar1,iVar2,4);
  if (iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = param_1;
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(lVar3 + (longlong)iVar1 * 4),0,(longlong)(iVar2 - iVar1) << 2);
  }
  return;
}



// FUNCTION 1405ed900 FUN_1405ed900 body=206 status=ok
// SIG undefined FUN_1405ed900(void)

int FUN_1405ed900(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x18) <= param_2)) {
    return 0;
  }
  lVar4 = (longlong)param_2 * 0x1c + *(longlong *)(param_1 + 0x10);
  if (*(int *)(lVar4 + 4) != -1) {
    iVar1 = FUN_1405ed900(param_1,*(undefined4 *)(lVar4 + 0x10));
    iVar2 = FUN_1405ed900(param_1,*(undefined4 *)(lVar4 + 0xc));
    iVar3 = FUN_1405ed900(param_1,*(undefined4 *)(lVar4 + 8));
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(lVar4 + 0x18) = iVar1;
    return iVar1;
  }
  if (*(int *)(lVar4 + 0x14) != -1) {
    iVar1 = *(int *)(*(longlong *)
                      (*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(lVar4 + 0x14) * 0x10) + 8)
    ;
    *(int *)(lVar4 + 0x18) = iVar1;
    return iVar1;
  }
  *(undefined4 *)(lVar4 + 0x18) = 0;
  return 0;
}



// FUNCTION 1405ed9d0 FUN_1405ed9d0 body=607 status=ok
// SIG undefined FUN_1405ed9d0(void)

void FUN_1405ed9d0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int local_res8;
  int local_resc;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  uVar3 = (**(code **)(*param_2 + 0x410))(param_2);
  TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 6,&local_res8,uVar3);
  puVar6 = (undefined8 *)0x0;
  if (local_res8 != -1) {
    puVar6 = (undefined8 *)(param_1[6] + (longlong)local_res8 * 0x28);
  }
  puVar7 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 == (undefined8 *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar2 = FUN_1428cf800(uVar3);
    if (iVar2 == 3) {
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_res18 = (**(code **)(*param_2 + 0x410))(param_2);
      local_78 = &local_res18;
      local_48 = 0;
      local_70 = &local_50;
      local_40 = 0;
      FUN_1405de5d0(param_1 + 6,&local_res8,&local_78,0);
      puVar7 = (undefined8 *)(param_1[6] + ((longlong)local_res8 * 5 + 1) * 8);
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
    else {
      lVar4 = (**(code **)(*param_2 + 0x410))();
      if (((lVar4 != 0) && (FUN_1405f2730(param_1), param_1[0x52] != 0)) &&
         (plVar5 = (longlong *)FUN_1405e08c0(), plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x260))(plVar5);
        plVar5[0x35] = lVar4;
        (**(code **)(*plVar5 + 0x260))(plVar5);
        *(undefined1 *)((longlong)plVar5 + 0x2a9) = 1;
        (**(code **)(*(longlong *)param_1[0x52] + 0x630))((longlong *)param_1[0x52],plVar5);
        FUN_14234b150(plVar5);
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_res10 = (**(code **)(*param_2 + 0x410))(param_2);
        local_60 = 0;
        local_78 = &local_res10;
        local_58 = 0;
        local_70 = &local_68;
        FUN_1405de5d0(param_1 + 6,&local_res8,&local_78,0);
        puVar7 = (undefined8 *)(param_1[6] + ((longlong)local_res8 * 5 + 1) * 8);
        if (local_60 != 0) {
          FMemory::Free();
        }
        *puVar7 = plVar5;
      }
    }
  }
  if (puVar7 != (undefined8 *)0x0) {
    FWeakObjectPtr::operator=(&local_res8,param_2);
    iVar2 = *(int *)(puVar7 + 2);
    *(int *)(puVar7 + 2) = iVar2 + 1;
    if (*(int *)((longlong)puVar7 + 0x14) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar7 + 1,iVar2);
    }
    piVar1 = (int *)(puVar7[1] + (longlong)iVar2 * 8);
    *piVar1 = local_res8;
    piVar1[1] = local_resc;
  }
  return;
}



// FUNCTION 1405edc30 FUN_1405edc30 body=480 status=ok
// SIG undefined FUN_1405edc30(void)

void FUN_1405edc30(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int local_res8 [2];
  longlong *local_res10;
  longlong local_res18;
  longlong *local_48;
  longlong **local_40;
  
  lVar4 = param_1[0x24];
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  uVar6 = 0;
  uVar5 = uVar6;
  if (lVar4 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d3f0,local_res8,lVar4);
    if ((local_res8[0] != -1) &&
       (lVar4 = DAT_14620d3f0 + (longlong)local_res8[0] * 0x18, lVar4 != 0)) {
      uVar5 = *(ulonglong *)(lVar4 + 8);
    }
  }
  if (uVar5 != 0) {
    local_res10 = param_1;
    lVar4 = (**(code **)(*param_1 + 0x410))(param_1);
    if (((lVar4 == 0) ||
        (lVar4 = (**(code **)(*local_res10 + 0x410))(), *(char *)(lVar4 + 0x79) == '\0')) ||
       (*(char *)((longlong)local_res10 + 0x2a9) != '\0')) {
      local_res18 = local_res10[0x23];
      if (local_res18 != 0) {
        local_48 = &local_res18;
        local_40 = &local_res10;
        FUN_1405deec0(uVar5 + 0x240,local_res8,&local_48,0);
      }
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(uVar5 + 0xe0,&local_res10);
    }
    else {
      FUN_1405ed9d0(uVar5,local_res10);
    }
    plVar1 = param_1 + 0x4e;
    if (*(int *)((longlong)param_1 + 0x27c) < (int)param_1[0x32]) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
    }
    puVar7 = (undefined8 *)param_1[0x31];
    uVar8 = (longlong)(int)param_1[0x32] & 0x1fffffffffffffff;
    if (puVar7 + (int)param_1[0x32] < puVar7) {
      uVar8 = uVar6;
    }
    if (uVar8 != 0) {
      do {
        iVar2 = (int)param_1[0x4f];
        uVar3 = *puVar7;
        *(int *)(param_1 + 0x4f) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x27c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        lVar4 = (longlong)iVar2 * 0x10 + *plVar1;
        FWeakObjectPtr::operator=(lVar4,0);
        *(undefined8 *)(lVar4 + 8) = 0;
        FUN_1405f0e70(lVar4,uVar5,uVar3);
        puVar7 = puVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
  }
  return;
}



// FUNCTION 1405ede10 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<int,FIndividualOcclusionHistory>,TDefaultMapHashableKeyFuncs<int,FIndividualOcclusionHistory,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_1405edf4f;
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
LAB_1405edf4f:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x38 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0xd] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0xc] = *(uint *)((longlong)plVar7 +
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



// FUNCTION 1405ee020 Rehash body=520 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
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
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1405ee15f;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_1405ee15f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x30 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[0xb] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[10] = *(uint *)((longlong)plVar7 +
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



// FUNCTION 1405ee230 Rehash body=631 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_1405ee36f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
      if (iVar8 < iStack_44) {
LAB_1405ee36f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x40 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x3c) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 7) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405ee4b0 Rehash body=546 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar6;
      do {
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar6 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_1405ee5ef;
        uVar6 = puVar14[lVar7 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_1405ee5ef:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        iVar4 = iStack_1c;
        puVar3 = (undefined8 *)(*param_1 + (longlong)iStack_1c * 0x48);
        if (*(int *)(*param_1 + 8 + (longlong)iStack_1c * 0x48) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar3;
        }
        uVar6 = FCrc::StrCrc32<wchar_t>(puVar10);
        uVar6 = uVar6 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar3 + 0x44) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar3 + 8) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iVar4;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405ee6e0 FUN_1405ee6e0 body=592 status=ok
// SIG undefined FUN_1405ee6e0(void)

void FUN_1405ee6e0(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
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
  
  lVar1 = param_1 + 0xc38;
  if (*(longlong *)(param_1 + 0xd38) != 0) {
    uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0xd38),0,0);
    *(undefined8 *)(param_1 + 0xd38) = uVar6;
  }
  puVar2 = (uint *)(param_1 + 0xd40);
  uVar8 = *puVar2;
  if (uVar8 != 0) {
    TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation(lVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*puVar2 - 1U & uVar11;
        lVar10 = *(longlong *)(param_1 + 0xd38);
        if (*(longlong *)(param_1 + 0xd38) == 0) {
          lVar10 = lVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar10 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0xc10);
    local_58 = 0;
    iVar4 = *(int *)(param_1 + 0xc28);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar13 = *(uint **)(param_1 + 0xc20);
      if (*(uint **)(param_1 + 0xc20) == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar10 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar5) goto LAB_1405ee83f;
        uVar8 = puVar13[lVar10 + 1];
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
      if (iVar4 < iStack_44) {
LAB_1405ee83f:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        lVar10 = *(longlong *)(param_1 + 0xc00);
        if (*(longlong *)(param_1 + 0xc00) == 0) {
          lVar10 = param_1;
        }
        lVar3 = lVar10 + (longlong)iStack_1c * 0x18;
        uVar6 = *(undefined8 *)(lVar10 + (longlong)iStack_1c * 0x18);
        uVar8 = (int)((ulonglong)uVar6 >> 0x20) * 0x17 + (int)uVar6 & *puVar2 - 1;
        *(uint *)(lVar3 + 0x14) = uVar8;
        lVar10 = *(longlong *)(param_1 + 0xd38);
        if (*(longlong *)(param_1 + 0xd38) == 0) {
          lVar10 = lVar1;
        }
        *(undefined4 *)(lVar3 + 0x10) =
             *(undefined4 *)(lVar10 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4);
        lVar10 = *(longlong *)(param_1 + 0xd38);
        if (*(longlong *)(param_1 + 0xd38) == 0) {
          lVar10 = lVar1;
        }
        *(int *)(lVar10 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405ee930 Rehash body=537 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
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
  undefined8 *puVar13;
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
        if (bVar4) goto LAB_1405eea6f;
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
LAB_1405eea6f:
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
        puVar13 = (undefined8 *)((longlong)iStack_1c * 0x60 + *param_1);
        uVar8 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar13 + 0x5c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar13 + 0xb) =
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



// FUNCTION 1405eeb50 FUN_1405eeb50 body=595 status=ok
// SIG undefined FUN_1405eeb50(void)

void FUN_1405eeb50(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
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
  
  lVar1 = param_1 + 0x1838;
  if (*(longlong *)(param_1 + 0x1938) != 0) {
    uVar5 = FMemory::Realloc(*(longlong *)(param_1 + 0x1938),0,0);
    *(undefined8 *)(param_1 + 0x1938) = uVar5;
  }
  puVar2 = (uint *)(param_1 + 0x1940);
  uVar7 = *puVar2;
  if (uVar7 != 0) {
    TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation(lVar1,0)
    ;
    if (0 < (int)uVar7) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar7;
      do {
        uVar8 = (longlong)(int)*puVar2 - 1U & uVar10;
        lVar9 = *(longlong *)(param_1 + 0x1938);
        if (*(longlong *)(param_1 + 0x1938) == 0) {
          lVar9 = lVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)(lVar9 + uVar8 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0x1810);
    local_58 = 0;
    iVar3 = *(int *)(param_1 + 0x1828);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = *(uint **)(param_1 + 0x1820);
      if (*(uint **)(param_1 + 0x1820) == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar7 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        lVar9 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar6 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar6;
        if (bVar4) goto LAB_1405eecaf;
        uVar7 = puVar12[lVar9 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
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
      if (iVar3 < iStack_44) {
LAB_1405eecaf:
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
        lVar9 = *(longlong *)(param_1 + 0x1800);
        if (*(longlong *)(param_1 + 0x1800) == 0) {
          lVar9 = param_1;
        }
        puVar13 = (undefined8 *)(lVar9 + (longlong)iStack_1c * 0x30);
        uVar7 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13 & *puVar2 - 1;
        *(uint *)((longlong)puVar13 + 0x2c) = uVar7;
        lVar9 = *(longlong *)(param_1 + 0x1938);
        if (*(longlong *)(param_1 + 0x1938) == 0) {
          lVar9 = lVar1;
        }
        *(undefined4 *)(puVar13 + 5) =
             *(undefined4 *)(lVar9 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar7) * 4);
        lVar9 = *(longlong *)(param_1 + 0x1938);
        if (*(longlong *)(param_1 + 0x1938) == 0) {
          lVar9 = lVar1;
        }
        *(int *)(lVar9 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar7) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405eedb0 FUN_1405eedb0 body=287 status=ok
// SIG undefined FUN_1405eedb0(void)

undefined8 FUN_1405eedb0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x80;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x80;
        uVar7 = (longlong)*(int *)(lVar3 + 0x7c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001405eee4c;
      }
      iVar5 = *(int *)(lVar3 + 0x78 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001405eee4c:
  if (iVar1 == -1) {
LAB_1405eee70:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x70) = 0;
    if (*(longlong *)(lVar3 + 0x68) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 0x28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3 + 0x18);
    FUN_140483a60(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x78);
    goto LAB_1405eee70;
  }
  piVar4 = (int *)(lVar2 + 0x78 + (longlong)iVar1 * 0x80);
  iVar1 = *piVar4;
  goto joined_r0x0001405eee4c;
}



// FUNCTION 1405eeed0 FUN_1405eeed0 body=328 status=ok
// SIG undefined FUN_1405eeed0(void)

undefined8 FUN_1405eeed0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  iVar8 = *(int *)((longlong)plVar9 + ((longlong)param_2 & uVar10) * 4);
  if (iVar8 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar8 * 0x38;
      if (*(int *)(lVar6 + lVar3) == param_2) {
        lVar6 = (longlong)iVar8 * 0x38;
        uVar10 = (longlong)*(int *)(lVar6 + 0x34 + lVar3) & uVar10;
        piVar7 = (int *)((longlong)plVar9 + uVar10 * 4);
        iVar2 = *(int *)((longlong)plVar9 + uVar10 * 4);
        goto joined_r0x0001405eef67;
      }
      iVar8 = *(int *)(lVar6 + 0x30 + lVar3);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x0001405eef67:
  if (iVar2 == -1) {
LAB_1405eef90:
    bVar4 = (byte)iVar8 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar8;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    ((undefined4 *)(lVar3 + lVar6))[1] = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar8;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar8) {
    *piVar7 = *(int *)(lVar6 + lVar3 + 0x30);
    goto LAB_1405eef90;
  }
  piVar7 = (int *)((longlong)iVar2 * 0x38 + 0x30 + lVar3);
  iVar2 = *piVar7;
  goto joined_r0x0001405eef67;
}



// FUNCTION 1405ef020 Remove body=228 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<int,Audio::FSourceDecodeInit>,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  uVar6 = (longlong)(int)param_1[9] - 1;
  iVar1 = *(int *)((longlong)plVar5 + ((longlong)param_2 & uVar6) * 4);
  if (iVar1 != -1) {
    lVar3 = *param_1;
    do {
      lVar7 = (longlong)iVar1;
      if (*(int *)(lVar3 + lVar7 * 0x30) == param_2) {
        uVar6 = (longlong)*(int *)(lVar3 + 0x2c + lVar7 * 0x30) & uVar6;
        piVar4 = (int *)((longlong)plVar5 + uVar6 * 4);
        iVar2 = *(int *)((longlong)plVar5 + uVar6 * 4);
        goto joined_r0x0001405ef0b4;
      }
      iVar1 = *(int *)(lVar3 + 0x28 + lVar7 * 0x30);
    } while (iVar1 != -1);
  }
  return 0;
joined_r0x0001405ef0b4:
  if (iVar2 == -1) {
LAB_1405ef0db:
    TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar1,1);
    return 1;
  }
  if (iVar2 == iVar1) {
    *piVar4 = *(int *)(lVar3 + 0x28 + lVar7 * 0x30);
    goto LAB_1405ef0db;
  }
  piVar4 = (int *)((longlong)iVar2 * 0x30 + 0x28 + lVar3);
  iVar2 = *piVar4;
  goto joined_r0x0001405ef0b4;
}



// FUNCTION 1405ef110 Remove body=140 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)param_2 * 0x18;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 0x14));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
    iVar3 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar3 != -1) {
      if (iVar3 == param_2) {
        *puVar2 = *(undefined4 *)(lVar1 + 0x10);
        break;
      }
      lVar6 = (longlong)iVar3 * 3 + 2;
      puVar2 = (undefined4 *)(lVar4 + lVar6 * 8);
      iVar3 = *(int *)(lVar4 + lVar6 * 8);
    }
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1405ef1a0 Remove body=435 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

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
      lVar6 = (longlong)iVar12 * 0x20;
      if (*(ulonglong *)(lVar6 + lVar3) == param_2) {
        lVar6 = (longlong)iVar12 * 0x20;
        uVar9 = (longlong)*(int *)(lVar6 + 0x1c + lVar3) & uVar9;
        piVar7 = (int *)((longlong)plVar10 + uVar9 * 4);
        iVar2 = *(int *)((longlong)plVar10 + uVar9 * 4);
        goto joined_r0x0001405ef2b3;
      }
      iVar12 = *(int *)(lVar6 + 0x18 + lVar3);
    } while (iVar12 != -1);
  }
  return 0;
joined_r0x0001405ef2b3:
  if (iVar2 == -1) {
LAB_1405ef2d4:
    bVar4 = (byte)iVar12 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar12;
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
    *piVar7 = *(int *)(lVar6 + lVar3 + 0x18);
    goto LAB_1405ef2d4;
  }
  piVar7 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
  iVar2 = *piVar7;
  goto joined_r0x0001405ef2b3;
}



// FUNCTION 1405ef360 Remove body=386 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<UObject_*,FRadioactiveSource>,TDefaultMapHashableKeyFuncs<UObject_*,FRadioactiveSource,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar9 = (int)(param_2 >> 4);
  uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar7 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
  uVar10 = (iVar9 - uVar8) - uVar5 ^ uVar5 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 0x10;
  uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar8) - uVar5 ^ uVar5 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 10;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar11 +
                  (((longlong)(int)((uVar5 - uVar8) - uVar10) ^ (ulonglong)(uVar8 >> 0xf)) & uVar7)
                  * 4);
  if (iVar9 != -1) {
    lVar4 = *param_1;
    do {
      lVar6 = (longlong)iVar9;
      if (*(ulonglong *)(lVar4 + lVar6 * 0x28) == param_2) {
        lVar6 = lVar6 * 0x28;
        uVar7 = (longlong)*(int *)(lVar6 + 0x24 + lVar4) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar11 + uVar7 * 4);
        iVar3 = *(int *)((longlong)plVar11 + uVar7 * 4);
        goto joined_r0x0001405ef47c;
      }
      iVar9 = *(int *)(lVar4 + 0x20 + lVar6 * 0x28);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x0001405ef47c:
  if (iVar3 == -1) {
LAB_1405ef4a3:
    if (*(longlong *)(lVar6 + 0x10 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar9,1);
    return 1;
  }
  if (iVar3 == iVar9) {
    *puVar2 = *(undefined4 *)(lVar6 + lVar4 + 0x20);
    goto LAB_1405ef4a3;
  }
  lVar1 = (longlong)iVar3 * 5 + 4;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x0001405ef47c;
}



// FUNCTION 1405ef4f0 FUN_1405ef4f0 body=272 status=ok
// SIG undefined FUN_1405ef4f0(void)

undefined8 FUN_1405ef4f0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xc08) == *(int *)(param_1 + 0xc34)) {
    return 0;
  }
  uVar5 = (longlong)*(int *)(param_1 + 0xd40) - 1;
  lVar4 = *(longlong *)(param_1 + 0xd38);
  if (*(longlong *)(param_1 + 0xd38) == 0) {
    lVar4 = param_1 + 0xc38;
  }
  iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                           uVar5) * 4);
  if (iVar2 != -1) {
    lVar7 = *(longlong *)(param_1 + 0xc00);
    if (*(longlong *)(param_1 + 0xc00) == 0) {
      lVar7 = param_1;
    }
    do {
      lVar6 = (longlong)iVar2;
      if (*(longlong *)(lVar7 + lVar6 * 0x18) == param_2) {
        uVar5 = (longlong)*(int *)(lVar7 + 0x14 + lVar6 * 0x18) & uVar5;
        puVar1 = (undefined4 *)(lVar4 + uVar5 * 4);
        iVar3 = *(int *)(lVar4 + uVar5 * 4);
        goto joined_r0x0001405ef5b2;
      }
      iVar2 = *(int *)(lVar7 + 0x10 + lVar6 * 0x18);
    } while (iVar2 != -1);
  }
  return 0;
joined_r0x0001405ef5b2:
  if (iVar3 == -1) {
LAB_1405ef5d7:
    FUN_1405ef880(param_1,iVar2,1);
    return 1;
  }
  if (iVar3 == iVar2) {
    *puVar1 = *(undefined4 *)(lVar7 + lVar6 * 0x18 + 0x10);
    goto LAB_1405ef5d7;
  }
  lVar4 = (longlong)iVar3 * 3 + 2;
  iVar3 = *(int *)(lVar7 + lVar4 * 8);
  puVar1 = (undefined4 *)(lVar7 + lVar4 * 8);
  goto joined_r0x0001405ef5b2;
}



// FUNCTION 1405ef600 Remove body=292 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>,AkGameObjectIdKeyFuncs<TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar5 = *(int *)((longlong)plVar6 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) & uVar7) * 4)
  ;
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x60;
      if (*(longlong *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x60;
        uVar7 = (longlong)*(int *)(lVar3 + 0x5c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001405ef6ac;
      }
      iVar5 = *(int *)(lVar3 + 0x58 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001405ef6ac:
  if (iVar1 == -1) {
LAB_1405ef6d3:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 8);
    TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x58);
    goto LAB_1405ef6d3;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x60 + 0x58 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001405ef6ac;
}



// FUNCTION 1405ef730 FUN_1405ef730 body=334 status=ok
// SIG undefined FUN_1405ef730(void)

undefined8 FUN_1405ef730(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x1808) == *(int *)(param_1 + 0x1834)) {
    return 0;
  }
  uVar6 = (longlong)*(int *)(param_1 + 0x1940) - 1;
  lVar7 = *(longlong *)(param_1 + 0x1938);
  if (*(longlong *)(param_1 + 0x1938) == 0) {
    lVar7 = param_1 + 0x1838;
  }
  iVar5 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                           uVar6) * 4);
  if (iVar5 != -1) {
    lVar4 = *(longlong *)(param_1 + 0x1800);
    if (*(longlong *)(param_1 + 0x1800) == 0) {
      lVar4 = param_1;
    }
    do {
      lVar2 = (longlong)iVar5;
      if (*(longlong *)(lVar4 + lVar2 * 0x30) == param_2) {
        uVar6 = (longlong)*(int *)(lVar4 + 0x2c + lVar2 * 0x30) & uVar6;
        piVar3 = (int *)(lVar7 + uVar6 * 4);
        iVar1 = *(int *)(lVar7 + uVar6 * 4);
        goto joined_r0x0001405ef7fa;
      }
      iVar5 = *(int *)(lVar4 + 0x28 + lVar2 * 0x30);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001405ef7fa:
  if (iVar1 == -1) {
LAB_1405ef830:
    lVar7 = *(longlong *)(param_1 + 0x1800);
    if (*(longlong *)(param_1 + 0x1800) == 0) {
      lVar7 = param_1;
    }
    if (*(longlong *)(lVar7 + 0x18 + lVar2 * 0x30) != 0) {
      FMemory::Free();
    }
    FUN_1405efa30(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar3 = *(int *)(lVar4 + lVar2 * 0x30 + 0x28);
    goto LAB_1405ef830;
  }
  piVar3 = (int *)((longlong)iVar1 * 0x30 + 0x28 + lVar4);
  iVar1 = *piVar3;
  goto joined_r0x0001405ef7fa;
}



// FUNCTION 1405ef880 FUN_1405ef880 body=234 status=ok
// SIG undefined FUN_1405ef880(void)

void FUN_1405ef880(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar2 = (byte)param_2 & 0x1f;
    uVar10 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar9 * 0x18;
    do {
      iVar8 = (int)uVar9;
      if (*(int *)(param_1 + 0xc34) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xc00);
        if (*(longlong *)(param_1 + 0xc00) == 0) {
          lVar6 = param_1;
        }
        *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0xc30) * 0x18) = iVar8;
      }
      lVar6 = *(longlong *)(param_1 + 0xc00);
      if (*(longlong *)(param_1 + 0xc00) == 0) {
        lVar6 = param_1;
      }
      *(undefined4 *)(lVar6 + lVar7) = 0xffffffff;
      if (*(int *)(param_1 + 0xc34) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0xc30);
      }
      *(undefined4 *)(lVar6 + 4 + lVar7) = uVar3;
      *(int *)(param_1 + 0xc34) = *(int *)(param_1 + 0xc34) + 1;
      *(int *)(param_1 + 0xc30) = iVar8;
      lVar6 = *(longlong *)(param_1 + 0xc20);
      if (*(longlong *)(param_1 + 0xc20) == 0) {
        lVar6 = param_1 + 0xc10;
      }
      iVar4 = iVar8;
      if (iVar8 < 0) {
        iVar4 = iVar8 + 0x1f;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      lVar7 = lVar7 + 0x18;
      puVar1 = (uint *)(lVar6 + (longlong)(iVar4 >> 5) * 4);
      uVar5 = ~uVar10;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      *puVar1 = *puVar1 & uVar5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405ef970 RemoveAtUninitialized body=180 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x60;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x60 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x60;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405efa30 FUN_1405efa30 body=237 status=ok
// SIG undefined FUN_1405efa30(void)

void FUN_1405efa30(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar2 = (byte)param_2 & 0x1f;
    uVar10 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar9 * 0x30;
    do {
      iVar8 = (int)uVar9;
      if (*(int *)(param_1 + 0x1834) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x1800);
        if (*(longlong *)(param_1 + 0x1800) == 0) {
          lVar6 = param_1;
        }
        *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0x1830) * 0x30) = iVar8;
      }
      lVar6 = *(longlong *)(param_1 + 0x1800);
      if (*(longlong *)(param_1 + 0x1800) == 0) {
        lVar6 = param_1;
      }
      *(undefined4 *)(lVar6 + lVar7) = 0xffffffff;
      if (*(int *)(param_1 + 0x1834) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x1830);
      }
      *(undefined4 *)(lVar6 + 4 + lVar7) = uVar3;
      *(int *)(param_1 + 0x1834) = *(int *)(param_1 + 0x1834) + 1;
      *(int *)(param_1 + 0x1830) = iVar8;
      lVar6 = *(longlong *)(param_1 + 0x1820);
      if (*(longlong *)(param_1 + 0x1820) == 0) {
        lVar6 = param_1 + 0x1810;
      }
      iVar4 = iVar8;
      if (iVar8 < 0) {
        iVar4 = iVar8 + 0x1f;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      lVar7 = lVar7 + 0x30;
      puVar1 = (uint *)(lVar6 + (longlong)(iVar4 >> 5) * 4);
      uVar5 = ~uVar10;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      *puVar1 = *puVar1 & uVar5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405efb20 FUN_1405efb20 body=782 status=ok
// SIG undefined FUN_1405efb20(void)

void FUN_1405efb20(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_res18;
  int local_res20;
  longlong local_50;
  int *local_48;
  int local_40;
  undefined4 local_3c;
  
  local_40 = *(int *)(param_1 + 0x28);
  lVar2 = (longlong)local_40;
  local_48 = (int *)0x0;
  local_3c = 0;
  if (0 < local_40) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_48);
  }
  piVar6 = local_48;
  _guard_xfg_dispatch_icall_nop(local_48,0,lVar2 << 2);
  local_res18 = 0;
  local_res20 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    local_50 = 0;
    local_48 = piVar6;
    do {
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x20) + local_50);
      lVar2 = (longlong)(int)plVar7[1];
      iVar8 = 0;
      if ((int)plVar7[1] != 0) {
        iVar8 = 0;
        lVar3 = 0;
        bVar10 = *(int *)(*plVar7 + 0xc) != param_2;
        iVar9 = 0;
        do {
          lVar3 = lVar3 + 1;
          iVar5 = iVar9 + 1;
          if (lVar3 < lVar2) {
            piVar1 = (int *)(*plVar7 + 0xc + lVar3 * 0x10);
            do {
              if (bVar10 != (*piVar1 != param_2)) break;
              iVar5 = iVar5 + 1;
              lVar3 = lVar3 + 1;
              piVar1 = piVar1 + 4;
            } while (lVar3 < lVar2);
          }
          if (bVar10 != false) {
            if (iVar8 != iVar9) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar8 * 0x10 + *plVar7),
                         (void *)((longlong)iVar9 * 0x10 + *plVar7),(longlong)(iVar5 - iVar9) << 4);
            }
            iVar8 = iVar8 + (iVar5 - iVar9);
          }
          bVar10 = (bool)(bVar10 ^ 1);
          iVar9 = iVar5;
        } while (lVar3 < lVar2);
        *(int *)(plVar7 + 1) = iVar8;
      }
      iVar9 = local_res18;
      if (iVar8 == 0) {
        iVar9 = -1;
      }
      *local_48 = iVar9;
      if (iVar8 != 0) {
        local_res18 = local_res18 + 1;
      }
      local_res20 = local_res20 + 1;
      local_50 = local_50 + 0x10;
      local_48 = local_48 + 1;
    } while (local_res20 < *(int *)(param_1 + 0x28));
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar9 = 0;
    bVar10 = *(int *)(*(longlong *)(param_1 + 0x20) + 8) != 0;
    lVar3 = 0;
    iVar8 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar8 + 1;
      if (lVar3 < lVar2) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 8 + lVar3 * 0x10);
        do {
          if (bVar10 != (*piVar1 != 0)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          piVar1 = piVar1 + 4;
        } while (lVar3 < lVar2);
      }
      iVar4 = iVar5 - iVar8;
      if (bVar10 == false) {
        plVar7 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x20));
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 2;
        }
      }
      else {
        if (iVar9 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x20)),
                     (void *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x20)),
                     (longlong)iVar4 << 4);
        }
        iVar9 = iVar9 + iVar4;
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar8 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x28) = iVar9;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = (longlong)*(int *)(param_1 + 0x18) * 0x1c + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x1c) {
    if (*(int *)(lVar2 + 0x14) != -1) {
      *(int *)(lVar2 + 0x14) = piVar6[*(int *)(lVar2 + 0x14)];
    }
  }
  FUN_1405ed900(param_1,0);
  if (piVar6 == (int *)0x0) {
    return;
  }
  FMemory::Free(piVar6);
  return;
}



// FUNCTION 1405efe30 FUN_1405efe30 body=386 status=ok
// SIG undefined FUN_1405efe30(void)

undefined8 FUN_1405efe30(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    iVar6 = (int)(param_2 >> 4);
    uVar5 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar3 = -(uVar5 + iVar6) ^ uVar5 >> 0xd;
    uVar7 = (iVar6 - uVar5) - uVar3 ^ uVar3 >> 0xc;
    uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 << 0x10;
    uVar3 = (uVar3 - uVar5) - uVar7 ^ uVar5 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar3 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 << 10;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar2 +
                    (((longlong)(int)((uVar3 - uVar5) - uVar7) ^ (ulonglong)(uVar5 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    iVar4 = iVar6;
    if (iVar6 != -1) {
      do {
        iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x18) == param_2) break;
        iVar4 = iVar6;
      } while (iVar6 != -1);
    }
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        if (*(longlong *)(lVar1 + 8 + (longlong)iVar4 * 0x18) == param_3) {
          TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
          ::Remove(param_1);
          return 1;
        }
        iVar4 = iVar6;
        if (iVar6 == -1) {
          return 0;
        }
        do {
          iVar6 = *(int *)(lVar1 + 0x10 + (longlong)iVar4 * 0x18);
          if (*(ulonglong *)(lVar1 + (longlong)iVar4 * 0x18) == param_2) break;
          iVar4 = iVar6;
        } while (iVar6 != -1);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 1405effc0 FUN_1405effc0 body=376 status=ok
// SIG undefined FUN_1405effc0(void)

void FUN_1405effc0(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 << 4;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0x10;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar10 = (int)param_1[5];
        iVar6 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar10;
        if (iVar10 < 0) {
          iVar6 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 1405f0140 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1405f01f0 FUN_1405f01f0 body=176 status=ok
// SIG undefined FUN_1405f01f0(void)

void FUN_1405f01f0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
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



// FUNCTION 1405f02a0 FUN_1405f02a0 body=149 status=ok
// SIG undefined FUN_1405f02a0(void)

void FUN_1405f02a0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x50);
  if (param_3 < 0x15) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 2);
    pvVar1 = *(void **)((longlong)param_1 + 0x50);
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
        *(void **)((longlong)param_1 + 0x50) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar2;
  return;
}



// FUNCTION 1405f0340 FUN_1405f0340 body=161 status=ok
// SIG undefined FUN_1405f0340(void)

void FUN_1405f0340(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x200);
  if (param_3 < 0x41) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 0x200);
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
        *(void **)((longlong)param_1 + 0x200) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x200) = uVar2;
  return;
}



// FUNCTION 1405f03f0 ResizeAllocation body=166 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<128,TSizedDefaultAllocator<32>_>::
     ForElementType<UCompassWidget::FCompassEntry>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xc00);
  if (param_3 < 0x81) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0xc00);
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
        *(void **)((longlong)param_1 + 0xc00) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xc00) = uVar2;
  return;
}



// FUNCTION 1405f04a0 FUN_1405f04a0 body=166 status=ok
// SIG undefined FUN_1405f04a0(void)

void FUN_1405f04a0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x1800);
  if (param_3 < 0x81) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x30);
    pvVar1 = *(void **)((longlong)param_1 + 0x1800);
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
        *(void **)((longlong)param_1 + 0x1800) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x30);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x1800) = uVar2;
  return;
}



// FUNCTION 1405f0550 FUN_1405f0550 body=161 status=ok
// SIG undefined FUN_1405f0550(void)

void FUN_1405f0550(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x200);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 6);
    pvVar1 = *(void **)((longlong)param_1 + 0x200);
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
        *(void **)((longlong)param_1 + 0x200) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 6);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x200) = uVar2;
  return;
}



// FUNCTION 1405f0600 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x100);
  if (param_3 < 0x41) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 2);
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
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar2;
  return;
}



// FUNCTION 1405f06b0 FUN_1405f06b0 body=115 status=ok
// SIG undefined FUN_1405f06b0(void)

void FUN_1405f06b0(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 6,0);
      iVar1 = (int)(uVar2 >> 6);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    FUN_1405f0550(param_1,0,iVar1,0x40);
  }
  *(int *)(param_1 + 0x20c) = iVar1;
  return;
}



// FUNCTION 1405f0730 FUN_1405f0730 body=132 status=ok
// SIG undefined FUN_1405f0730(void)

void FUN_1405f0730(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (uVar1 < 0x15) {
    iVar2 = 0x14;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x5c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 4,0);
    iVar2 = (int)(uVar3 >> 2);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  FUN_1405f02a0(param_1,param_2,iVar2,4);
  return;
}



// FUNCTION 1405f07c0 ResizeGrow body=261 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FInventoryItem_*,TInlineAllocator<32,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x108);
  if (uVar1 < 0x21) {
    uVar2 = 0x20;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x10c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x10c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x100);
  if (uVar2 < 0x21) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
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
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x100) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar5;
  return;
}



// FUNCTION 1405f08d0 ResizeGrow body=141 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FChildZOrder,TInlineAllocator<64,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (uVar1 < 0x41) {
    iVar2 = 0x40;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x20c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x20c) = iVar2;
  FUN_1405f0340(param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 1405f0960 FUN_1405f0960 body=152 status=ok
// SIG undefined FUN_1405f0960(void)

void FUN_1405f0960(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc08);
  iVar4 = 0x80;
  if (0x80 < uVar1) {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xc0c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x18,0);
    iVar4 = (int)(uVar3 / 0x18);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xc0c) = iVar4;
  TInlineAllocator<128,TSizedDefaultAllocator<32>_>::ForElementType<UCompassWidget::FCompassEntry>::
  ResizeAllocation(param_1,param_2,iVar4,0x18);
  return;
}



// FUNCTION 1405f0a00 FUN_1405f0a00 body=152 status=ok
// SIG undefined FUN_1405f0a00(void)

void FUN_1405f0a00(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1808);
  iVar4 = 0x80;
  if (0x80 < uVar1) {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x180c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x30,0);
    iVar4 = (int)(uVar3 / 0x30);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x180c) = iVar4;
  FUN_1405f04a0(param_1,param_2,iVar4,0x30);
  return;
}



// FUNCTION 1405f0aa0 FUN_1405f0aa0 body=137 status=ok
// SIG undefined FUN_1405f0aa0(void)

void FUN_1405f0aa0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (uVar1 < 9) {
    iVar2 = 8;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x20c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 6,0);
    iVar2 = (int)(uVar3 >> 6);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x20c) = iVar2;
  FUN_1405f0550(param_1,param_2,iVar2,0x40);
  return;
}



// FUNCTION 1405f0b30 ResizeGrow body=145 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x1c,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 4);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x1c,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 1405f0bd0 FUN_1405f0bd0 body=138 status=ok
// SIG undefined FUN_1405f0bd0(void)

void FUN_1405f0bd0(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x2c0,0);
  iVar4 = (int)(uVar3 / 0x2c0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x2c0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1405f0c60 FUN_1405f0c60 body=165 status=ok
// SIG undefined FUN_1405f0c60(void)

ulonglong FUN_1405f0c60(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x2c0) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x2c0,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0x2e8ba2e8ba2e8ba3) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x2c0);
      }
      goto LAB_1405f0cd4;
    }
    if (iVar4 == 0) goto LAB_1405f0cd4;
  }
  iVar4 = iVar5;
LAB_1405f0cd4:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x2c0,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1405f0d10 FUN_1405f0d10 body=101 status=ok
// SIG undefined FUN_1405f0d10(void)

void FUN_1405f0d10(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x15) {
      iVar1 = 0x14;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x5c)) {
    *(int *)(param_1 + 0x5c) = iVar1;
    FUN_1405f02a0(param_1,*(undefined4 *)(param_1 + 0x58),iVar1,4);
  }
  return;
}



// FUNCTION 1405f0d80 FUN_1405f0d80 body=110 status=ok
// SIG undefined FUN_1405f0d80(void)

void FUN_1405f0d80(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x20c)) {
    *(int *)(param_1 + 0x20c) = iVar1;
    FUN_1405f0340(param_1,*(undefined4 *)(param_1 + 0x208),iVar1,8);
  }
  return;
}



// FUNCTION 1405f0df0 FUN_1405f0df0 body=110 status=ok
// SIG undefined FUN_1405f0df0(void)

void FUN_1405f0df0(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 6,0);
      iVar1 = (int)(uVar2 >> 6);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x20c)) {
    *(int *)(param_1 + 0x20c) = iVar1;
    FUN_1405f0550(param_1,*(undefined4 *)(param_1 + 0x208),iVar1,0x40);
  }
  return;
}



// FUNCTION 1405f0e60 FUN_1405f0e60 body=14 status=ok
// SIG undefined FUN_1405f0e60(void)

void FUN_1405f0e60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1405f0e70 FUN_1405f0e70 body=458 status=ok
// SIG undefined FUN_1405f0e70(void)

void FUN_1405f0e70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18 [2];
  undefined8 *local_48;
  int *local_40;
  
  cVar2 = FWeakObjectPtr::IsValid();
  piVar6 = (int *)0x0;
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 8) != 0)) {
    lVar3 = FWeakObjectPtr::Get(param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    if ((*(uint *)(lVar3 + 8) >> 0xf & 1) == 0) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x150,local_res8,uVar1);
      piVar5 = piVar6;
      if (local_res8[0] != -1) {
        piVar5 = (int *)(*(longlong *)(lVar3 + 0x150) + (longlong)local_res8[0] * 0x18);
      }
      piVar4 = piVar5 + 2;
      if (piVar5 == (int *)0x0) {
        piVar4 = piVar6;
      }
      if ((piVar4 != (int *)0x0) && (*piVar4 = *piVar4 + -1, *piVar4 == 0)) {
        FUN_1405e5e10(lVar3,uVar1);
        TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
        ::Remove(lVar3 + 0x150,uVar1);
      }
    }
  }
  FWeakObjectPtr::operator=(param_1,param_2);
  *(undefined8 *)(param_1 + 8) = param_3;
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 8) != 0)) {
    lVar3 = FWeakObjectPtr::Get(param_1);
    local_res18[0] = *(undefined8 *)(param_1 + 8);
    if ((*(uint *)(lVar3 + 8) >> 0xf & 1) == 0) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x150,local_res8);
      piVar5 = piVar6;
      if (local_res8[0] != -1) {
        piVar5 = (int *)(*(longlong *)(lVar3 + 0x150) + (longlong)local_res8[0] * 0x18);
      }
      piVar4 = piVar5 + 2;
      if (piVar5 == (int *)0x0) {
        piVar4 = piVar6;
      }
      if (piVar4 == (int *)0x0) {
        local_48 = local_res18;
        local_res8[0] = 0;
        local_40 = local_res8;
        TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
                  (lVar3 + 0x150,local_res10,&local_48,0);
        piVar4 = (int *)(*(longlong *)(lVar3 + 0x150) + (longlong)local_res10[0] * 0x18 + 8);
      }
      *piVar4 = *piVar4 + 1;
      if (*piVar4 == 1) {
        FUN_1405e31d0(lVar3,local_res18[0]);
      }
    }
  }
  return;
}



// FUNCTION 1405f1040 FUN_1405f1040 body=225 status=ok
// SIG undefined FUN_1405f1040(void)

void FUN_1405f1040(int *param_1,longlong param_2,longlong param_3,float *param_4)

{
  char cVar1;
  longlong lVar2;
  int local_res8 [2];
  int local_28;
  int local_24;
  int local_20;
  
  if (*param_1 == 0) {
    return;
  }
  cVar1 = FUN_14044af00(param_1 + 1,0);
  if (cVar1 == '\0') {
    return;
  }
  if ((((param_2 == 0) && (param_3 == 0)) && (*param_4 == 0.0)) &&
     ((param_4[1] == 0.0 && (param_4[2] == 0.0)))) {
    return;
  }
  lVar2 = FWeakObjectPtr::Get();
  if (lVar2 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d3f0,local_res8,lVar2);
    if ((local_res8[0] != -1) &&
       (lVar2 = DAT_14620d3f0 + (longlong)local_res8[0] * 0x18, lVar2 != 0)) {
      lVar2 = *(longlong *)(lVar2 + 8);
      goto LAB_1405f10e0;
    }
  }
  lVar2 = 0;
LAB_1405f10e0:
  if (lVar2 != 0) {
    local_28 = *param_1;
    local_24 = param_1[1];
    local_20 = param_1[2];
    FUN_1405f1960(lVar2,&local_28,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 1405f1130 FUN_1405f1130 body=576 status=ok
// SIG undefined FUN_1405f1130(void)

void FUN_1405f1130(longlong param_1,longlong param_2,longlong param_3,uint param_4,byte param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_res10;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  if (param_2 == 0) {
    return;
  }
  cVar1 = *(char *)(param_2 + 0x48);
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  lVar2 = *(longlong *)(param_2 + 0x48);
  lVar3 = *(longlong *)(param_2 + 0x50);
  local_res10 = param_2;
  lVar5 = param_3;
  if (cVar1 != '\0') {
    lVar5 = local_58;
    if (cVar1 == '\x01') {
      lStack_50 = param_3;
      local_48 = param_3;
      if (param_3 != 0) {
        lVar8 = FUN_1428e7a40();
        if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        local_48 = param_3;
        if ((bVar4) && (*(longlong *)(param_3 + 0x118) != 0)) {
          local_48 = *(longlong *)(param_3 + 0x118);
        }
        if (local_48 != 0) {
          lVar8 = FUN_1429d7ab0();
          if ((*(int *)(*(longlong *)(local_48 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(local_48 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (*(longlong *)(local_48 + 0x490) != 0)) {
            local_48 = *(longlong *)(local_48 + 0x490);
          }
        }
      }
    }
    else if (cVar1 == '\x02') {
      if (*(longlong *)(param_2 + 0x50) == 0) {
        return;
      }
      if ((param_3 == 0) ||
         (lVar8 = *(longlong *)(param_3 + 0x10), lVar6 = FUN_1405fb150(), lVar8 != lVar6)) {
        lStack_40 = 0;
        if (param_3 == 0) goto LAB_1405f12ec;
        uVar7 = UUserObjectListEntry::GetPrivateStaticClass();
        lVar8 = UObjectBaseUtility::GetInterfaceAddress(param_3,uVar7);
        if ((lVar8 == 0) ||
           (param_3 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                      ::GetBoundProgramCounterForTimerManager(lVar8,*(undefined8 *)(param_2 + 0x50))
           , lStack_40 = param_3, param_3 == 0)) goto LAB_1405f12ec;
      }
      lStack_40 = param_3;
      if (*(longlong *)(param_3 + 0x48) != *(longlong *)(param_2 + 0x50)) {
        return;
      }
    }
    else if (cVar1 == '\x03') {
      local_38 = (ulonglong)param_4;
    }
    else if (cVar1 == '\x04') {
      local_38 = (ulonglong)param_5 << 0x28;
    }
  }
LAB_1405f12ec:
  local_58 = lVar5;
  plVar10 = *(longlong **)(param_1 + 0x208);
  if (*(longlong **)(param_1 + 0x208) == (longlong *)0x0) {
    plVar10 = (longlong *)(param_1 + 8);
  }
  plVar9 = plVar10 + (longlong)*(int *)(param_1 + 0x210) * 8;
  do {
    if (plVar10 == plVar9) {
LAB_1405f1322:
      plVar10 = (longlong *)FUN_1405dd0f0((longlong *)(param_1 + 8),&local_res10);
LAB_1405f132f:
      *plVar10 = lVar2;
      plVar10[1] = lVar3;
      plVar10[2] = local_58;
      plVar10[3] = lStack_50;
      plVar10[4] = local_48;
      plVar10[5] = lStack_40;
      plVar10[6] = local_38;
      return;
    }
    if (*plVar10 == param_2) {
      if (plVar10 != (longlong *)0x0) {
        plVar10 = plVar10 + 1;
        goto LAB_1405f132f;
      }
      goto LAB_1405f1322;
    }
    plVar10 = plVar10 + 8;
  } while( true );
}



// FUNCTION 1405f1370 FUN_1405f1370 body=14 status=ok
// SIG undefined FUN_1405f1370(void)

void FUN_1405f1370(void)

{
  FUN_1405f1130();
  return;
}



// FUNCTION 1405f1380 FUN_1405f1380 body=115 status=ok
// SIG undefined FUN_1405f1380(void)

void FUN_1405f1380(longlong *param_1,longlong param_2,undefined1 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((param_1 != (longlong *)0x0) && (param_2 != 0)) &&
      (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) &&
     (lVar2 = FUN_1405e8e00(lVar1), lVar2 != 0)) {
    FUN_1405f1500(lVar2,param_2,lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 1405f1400 FUN_1405f1400 body=197 status=ok
// SIG undefined FUN_1405f1400(void)

void FUN_1405f1400(longlong *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d350,local_res8,lVar1);
    if ((local_res8[0] != -1) &&
       (lVar1 = DAT_14620d350 + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
      lVar1 = *(longlong *)(lVar1 + 8);
      goto LAB_1405f1468;
    }
  }
  lVar1 = 0;
LAB_1405f1468:
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x30);
    lVar1 = (longlong)*(int *)(lVar1 + 0x38) * 0x2c0 + lVar2;
    if (lVar2 != lVar1) {
      while (*(int *)(lVar2 + 600) != param_2) {
        lVar2 = lVar2 + 0x2c0;
        if (lVar2 == lVar1) {
          return;
        }
      }
      *(undefined8 *)(lVar2 + 0x240) = param_3;
      *(undefined4 *)(lVar2 + 0x248) = param_4;
    }
  }
  return;
}



// FUNCTION 1405f14d0 FUN_1405f14d0 body=43 status=ok
// SIG undefined FUN_1405f14d0(void)

void FUN_1405f14d0(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x260))();
  param_1[0x35] = param_2;
  return;
}



// FUNCTION 1405f1500 FUN_1405f1500 body=528 status=ok
// SIG undefined FUN_1405f1500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405f1500(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  float param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_res10 [3];
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  undefined8 local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_res10[0] = param_2;
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  lVar2 = (**(code **)(*DAT_146b33f38 + 0x280))();
  if ((((lVar2 != 0) && (local_res10[0] != 0)) && (*(longlong *)(local_res10[0] + 0x48) != 0)) &&
     (*(longlong *)(local_res10[0] + 0x48) == *(longlong *)(lVar2 + 0xf8))) {
    plVar5 = (longlong *)(param_1 + 0x1f0);
    if (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x224)) {
      lVar2 = *(longlong *)(param_1 + 0x230);
      if (*(longlong *)(param_1 + 0x230) == 0) {
        lVar2 = param_1 + 0x228;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3)
                               & (longlong)*(int *)(param_1 + 0x238) - 1U) * 4);
      if (iVar1 != -1) {
        do {
          plVar3 = (longlong *)((longlong)iVar1 * 0x60 + *plVar5);
          if (*plVar3 == param_3) {
            if (iVar1 != -1) goto LAB_1405f1605;
            break;
          }
          iVar1 = (int)plVar3[0xb];
        } while (iVar1 != -1);
      }
    }
    plVar3 = (longlong *)0x0;
LAB_1405f1605:
    plVar4 = plVar3 + 1;
    if (plVar3 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      local_c0 = &local_b0;
      local_60 = 0;
      local_b8 = &local_98;
      local_50 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      local_90 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_b0 = param_3;
      FUN_1405dec00(plVar5,local_c8,&local_c0,0);
      local_50 = local_50 & 0xffffffff00000000;
      plVar4 = (longlong *)(*plVar5 + (longlong)local_c8[0] * 0x60 + 8);
      if (local_58 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_98);
    }
    local_c0 = (longlong *)CONCAT44(param_5,(undefined4)local_c0);
    local_c0._0_2_ = CONCAT11(0.0 < param_5,param_4);
    FWeakObjectPtr::operator=(&local_b8,param_3);
    local_a8 = local_res10;
    local_a0 = &local_c0;
    FUN_1405df0b0(plVar4,local_c8,&local_a8,0);
  }
  return;
}



// FUNCTION 1405f1710 FUN_1405f1710 body=55 status=ok
// SIG undefined FUN_1405f1710(void)

void FUN_1405f1710(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_140600680();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    if (lVar2 != 0) {
      FWeakObjectPtr::operator=(&DAT_14620d440,param_1);
    }
  }
  return;
}



// FUNCTION 1405f1750 FUN_1405f1750 body=514 status=ok
// SIG undefined FUN_1405f1750(void)

void FUN_1405f1750(longlong *param_1,longlong *param_2,longlong param_3,float *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8;
  undefined4 local_resc;
  float fStack_14;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((lVar4 != 0) ||
     ((param_2 != (longlong *)0x0 && (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 != 0))
     )) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d3f0,&local_res8,lVar4);
    if ((local_res8 != -1) && (lVar4 = DAT_14620d3f0 + (longlong)local_res8 * 0x18, lVar4 != 0)) {
      lVar4 = *(longlong *)(lVar4 + 8);
      goto LAB_1405f17cb;
    }
  }
  lVar4 = 0;
LAB_1405f17cb:
  if (lVar4 != 0) {
    if (param_2 == (longlong *)0x0) {
      if (param_3 == 0) {
        if (((*param_4 != 0.0) || (param_4[1] != 0.0)) || (param_4[2] != 0.0)) {
          if ((((float)*(undefined8 *)param_4 != 0.0) ||
              (fStack_14 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20), fStack_14 != 0.0)) ||
             (param_4[2] != 0.0)) {
            FWeakObjectPtr::operator=(&local_res8,0);
            *(int *)(lVar4 + 0x2938) = local_res8;
            *(undefined4 *)(lVar4 + 0x293c) = local_resc;
            FWeakObjectPtr::operator=(&local_res8,0);
            uVar2 = *(undefined8 *)param_4;
            *(int *)(lVar4 + 0x2940) = local_res8;
            *(undefined4 *)(lVar4 + 0x2944) = local_resc;
            fVar3 = param_4[2];
            *(undefined8 *)(lVar4 + 0x2948) = uVar2;
            *(float *)(lVar4 + 0x2950) = fVar3;
          }
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 0xe0);
        plVar1 = plVar6 + *(int *)(lVar4 + 0xe8);
        for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
          lVar5 = *plVar6;
          if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1a8) == param_3)) {
            if (lVar5 == 0) {
              return;
            }
            if (*(char *)(lVar5 + 0x2a8) == '\0') {
              return;
            }
            param_2 = *(longlong **)(lVar5 + 0x118);
            if (param_2 == (longlong *)0x0) {
              return;
            }
            goto LAB_1405f1867;
          }
        }
      }
    }
    else {
      lVar5 = (**(code **)(*param_2 + 0x670))(param_2);
      if (lVar5 == 0) {
LAB_1405f1867:
        if (param_2 != (longlong *)0x0) {
          FWeakObjectPtr::operator=(&local_res8,0);
          *(int *)(lVar4 + 0x2938) = local_res8;
          *(undefined4 *)(lVar4 + 0x293c) = local_resc;
          FWeakObjectPtr::operator=(lVar4 + 0x2940,param_2);
        }
      }
      else {
        FWeakObjectPtr::operator=(lVar4 + 0x2938,lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1405f1960 FUN_1405f1960 body=571 status=ok
// SIG undefined FUN_1405f1960(void)

void FUN_1405f1960(longlong param_1,int *param_2,longlong *param_3,longlong param_4,float *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  int local_res10;
  int local_res14;
  undefined8 local_38;
  float local_30;
  
  if ((*param_2 != 0) && (cVar4 = FUN_14044af00(param_2 + 1,0), cVar4 != '\0')) {
    plVar1 = (longlong *)(param_1 + 0x2958);
    if (*(int *)(param_1 + 0x2960) != *(int *)(param_1 + 0x298c)) {
      lVar6 = *(longlong *)(param_1 + 0x2998);
      if (*(longlong *)(param_1 + 0x2998) == 0) {
        lVar6 = param_1 + 0x2990;
      }
      iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x29a0) - 1U & (longlong)*param_2) * 4)
      ;
      if (iVar5 != -1) {
        do {
          piVar8 = (int *)((longlong)iVar5 * 0x38 + *plVar1);
          if (*piVar8 == *param_2) {
            if ((iVar5 != -1) && (piVar8 != (int *)0x0)) goto LAB_1405f1a29;
            break;
          }
          iVar5 = piVar8[0xc];
        } while (iVar5 != -1);
      }
    }
    local_38 = param_2;
    FUN_1405ddcf0(plVar1,&local_res10,&local_38,0);
    piVar8 = (int *)((longlong)local_res10 * 0x38 + *plVar1);
LAB_1405f1a29:
    if (param_3 == (longlong *)0x0) {
      if (param_4 == 0) {
        if (((*param_5 != 0.0) || (param_5[1] != 0.0)) || (param_5[2] != 0.0)) {
          fVar3 = param_5[2];
          uVar2 = *(undefined8 *)param_5;
          if ((((float)uVar2 != 0.0) ||
              (local_38._4_4_ = (float)((ulonglong)uVar2 >> 0x20), local_38._4_4_ != 0.0)) ||
             (fVar3 != 0.0)) {
            local_38 = (int *)uVar2;
            local_30 = fVar3;
            FWeakObjectPtr::operator=(&local_res10,0);
            piVar8[4] = local_res10;
            piVar8[5] = local_res14;
            FWeakObjectPtr::operator=(&local_res10,0);
            piVar8[6] = local_res10;
            piVar8[7] = local_res14;
            *(undefined8 *)(piVar8 + 8) = uVar2;
            piVar8[10] = (int)fVar3;
          }
        }
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0xe0);
        plVar1 = plVar7 + *(int *)(param_1 + 0xe8);
        for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
          lVar6 = *plVar7;
          if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x1a8) == param_4)) {
            if (lVar6 == 0) {
              return;
            }
            if (*(char *)(lVar6 + 0x2a8) == '\0') {
              return;
            }
            param_3 = *(longlong **)(lVar6 + 0x118);
            if (param_3 == (longlong *)0x0) {
              return;
            }
            goto LAB_1405f1ac5;
          }
        }
      }
    }
    else {
      lVar6 = (**(code **)(*param_3 + 0x670))(param_3);
      if (lVar6 == 0) {
LAB_1405f1ac5:
        if (param_3 != (longlong *)0x0) {
          FWeakObjectPtr::operator=(&local_res10,0);
          piVar8[4] = local_res10;
          piVar8[5] = local_res14;
          FWeakObjectPtr::operator=(piVar8 + 6,param_3);
        }
      }
      else {
        FWeakObjectPtr::operator=(piVar8 + 4,lVar6);
      }
    }
  }
  return;
}



// FUNCTION 1405f1ba0 FUN_1405f1ba0 body=418 status=ok
// SIG undefined FUN_1405f1ba0(void)

void FUN_1405f1ba0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_48 [16];
  undefined4 local_38;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if ((((lVar1 != 0) || (lVar1 = FUN_1423407b0(), lVar1 != 0)) && (param_2 != 0)) &&
     (((*(longlong *)(param_2 + 0xb0) == 0 ||
       (*(char *)(*(longlong *)(param_2 + 0xb0) + 0x38) != '\0')) &&
      ((plVar2 = (longlong *)FUN_142d5ecc0(lVar1), plVar2 != (longlong *)0x0 &&
       (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x290))(plVar2), plVar2 != (longlong *)0x0))))))
  {
    if (*(longlong *)(param_1 + 0x208) != 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,*(longlong *)(param_1 + 0x208),1);
    }
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      FUN_1405ebb60();
    }
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      FUN_1405e9180(*(longlong *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x118),param_1);
    }
    FUN_14058f8f0(local_48,param_1 + 0x1c0);
    local_38 = *(undefined4 *)(param_1 + 0x1d0);
    lVar1 = *plVar2;
    FUN_1405e9b40(param_2);
    uVar3 = (**(code **)(lVar1 + 0x10))(plVar2);
    *(undefined8 *)(param_1 + 0x208) = uVar3;
  }
  return;
}



// FUNCTION 1405f1d60 FUN_1405f1d60 body=1437 status=ok
// SIG undefined FUN_1405f1d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1405f1d60(longlong param_1,longlong param_2,char param_3,undefined8 param_4,longlong param_5,
             longlong param_6,char param_7)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  float local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  float local_d0;
  longlong local_c8 [4];
  longlong *local_a8;
  longlong local_a0;
  longlong local_98 [4];
  longlong *local_78;
  longlong local_70;
  undefined1 local_68 [32];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    FUN_1423407b0();
  }
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  local_e8 = (**(code **)(*DAT_146b33f38 + 0x280))();
  if (local_e8 == 0) {
    return 0;
  }
  if (param_1 == param_5) {
    return 1;
  }
  if (*(char *)(param_6 + 0x30) == '\x02') {
    return 0;
  }
  bVar3 = false;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  if ((param_3 != '\0') && (param_7 != '\0')) {
    plVar5 = (longlong *)FUN_1405ea2f0(local_68,param_1);
    if (local_98 != plVar5) {
      if (plVar5[4] == 0) {
        _guard_xfg_dispatch_icall_nop(local_98,plVar5,0x20);
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_78 = (longlong *)plVar5[4];
      plVar5[4] = 0;
      local_70 = plVar5[5];
      plVar5[5] = 0;
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    bVar3 = true;
    plVar5 = (longlong *)FUN_1405ea2f0(local_68,param_5);
    if (local_c8 != plVar5) {
      if (plVar5[4] == 0) {
        _guard_xfg_dispatch_icall_nop(local_c8,plVar5,0x20);
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_a8 = (longlong *)plVar5[4];
      plVar5[4] = 0;
      local_a0 = plVar5[5];
      plVar5[5] = 0;
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    plVar5 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar5 = local_78;
    }
    plVar1 = plVar5 + (int)local_70;
    if (plVar5 != plVar1) {
      plVar10 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar10 = local_a8;
      }
      do {
        for (plVar6 = plVar10; plVar6 != plVar10 + (int)local_a0; plVar6 = plVar6 + 1) {
          if (*plVar6 == *plVar5) goto LAB_1405f22a6;
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
    }
  }
  if (*(char *)(param_2 + 0x30) == '\0') {
    lVar9 = local_e8;
    if ((param_3 != '\0') && (*(longlong *)(param_5 + 0x118) != 0)) {
      if (!bVar3) {
        plVar5 = (longlong *)FUN_1405ea2f0(local_68,param_1);
        if (local_98 != plVar5) {
          if (plVar5[4] == 0) {
            _guard_xfg_dispatch_icall_nop(local_98,plVar5,0x20);
          }
          if (local_78 != (longlong *)0x0) {
            FMemory::Free();
          }
          local_78 = (longlong *)plVar5[4];
          plVar5[4] = 0;
          local_70 = plVar5[5];
          plVar5[5] = 0;
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
      lVar9 = local_e8;
      local_e0 = local_98;
      if (local_78 != (longlong *)0x0) {
        local_e0 = local_78;
      }
      local_d8 = local_e0 + (int)local_70;
      uVar7 = FUN_1405ea480(param_5,&local_f8);
      cVar4 = FUN_1405ebbc0(&local_e0,uVar7,*(undefined4 *)(lVar9 + 0x88));
      if (cVar4 != '\0') {
        uVar7 = 1;
        goto LAB_1405f22ac;
      }
    }
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
      if (lVar2 == 0) {
        local_f8 = _DAT_1468b5d90;
        local_f0 = DAT_1468b5d98;
      }
      else {
        local_f8 = *(longlong **)(lVar2 + 0x220);
        local_f0 = *(float *)(lVar2 + 0x228);
      }
      local_e0 = local_f8;
      local_d8 = (longlong *)CONCAT44(local_d8._4_4_,local_f0);
      if (param_7 != '\0') {
        if (!bVar3) {
          plVar5 = (longlong *)FUN_1405ea2f0(local_68,param_5);
          if (local_c8 != plVar5) {
            if (plVar5[4] == 0) {
              _guard_xfg_dispatch_icall_nop(local_c8,plVar5,0x20);
            }
            if (local_a8 != (longlong *)0x0) {
              FMemory::Free();
            }
            local_a8 = (longlong *)plVar5[4];
            plVar5[4] = 0;
            local_a0 = plVar5[5];
            plVar5[5] = 0;
          }
          if (local_48 != 0) {
            FMemory::Free();
          }
        }
        plVar5 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar5 = local_a8;
        }
        plVar1 = plVar5 + (int)local_a0;
        local_d0 = *(float *)(local_e8 + 0x88);
        lVar9 = local_e8;
        if (plVar1 != plVar5) {
          do {
            pfVar8 = (float *)(**(code **)(*(longlong *)*plVar5 + 0xe40))
                                        ((longlong *)*plVar5,&local_f8);
            if ((pfVar8[1] - local_e0._4_4_) * (pfVar8[1] - local_e0._4_4_) +
                (*pfVar8 - (float)local_e0) * (*pfVar8 - (float)local_e0) +
                (pfVar8[2] - local_d8._0_4_) * (pfVar8[2] - local_d8._0_4_) < local_d0 * local_d0)
            break;
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
          lVar9 = local_e8;
          if (plVar1 != plVar5) {
            uVar7 = 1;
            goto LAB_1405f22ac;
          }
        }
      }
      if (*(longlong *)(param_5 + 0x118) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_5 + 0x118) + 0x168);
        if (lVar2 == 0) {
          local_f8 = _DAT_1468b5d90;
          local_f0 = DAT_1468b5d98;
        }
        else {
          local_f8 = *(longlong **)(lVar2 + 0x220);
          local_f0 = *(float *)(lVar2 + 0x228);
        }
        fVar11 = (float)local_e0 - SUB84(local_f8,0);
        fVar12 = local_e0._4_4_ - (float)((ulonglong)local_f8 >> 0x20);
        if (fVar12 * fVar12 + fVar11 * fVar11 +
            (local_d8._0_4_ - local_f0) * (local_d8._0_4_ - local_f0) <
            *(float *)(lVar9 + 0x88) * *(float *)(lVar9 + 0x88)) {
LAB_1405f22a6:
          uVar7 = 1;
          goto LAB_1405f22ac;
        }
      }
    }
  }
  uVar7 = 0;
LAB_1405f22ac:
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  return uVar7;
}



// FUNCTION 1405f2300 FUN_1405f2300 body=1068 status=ok
// SIG undefined FUN_1405f2300(void)

void FUN_1405f2300(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte bVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  int *local_48;
  int local_40;
  undefined4 local_3c;
  int *local_38;
  
  if ((int)param_1[3] != 0) {
    local_50 = (int)param_1[1];
    lVar20 = (longlong)local_50;
    uVar13 = 0;
    local_4c = 0;
    local_58 = (void *)0x0;
    if (0 < local_50) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58);
    }
    _guard_xfg_dispatch_icall_nop(local_58,0,lVar20 << 2);
    plVar1 = param_1 + 2;
    FUN_1405f8d10(plVar1,0,&local_58);
    local_40 = (int)param_1[1];
    lVar20 = (longlong)local_40;
    local_38 = (int *)0x0;
    local_48 = (int *)0x0;
    local_3c = 0;
    if (0 < local_40) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_48);
      local_38 = local_48;
    }
    piVar9 = local_38;
    local_48 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,0,lVar20 << 2);
    uVar11 = uVar13;
    piVar18 = piVar9;
    piVar17 = piVar9;
    uVar21 = uVar13;
    if (0 < local_50) {
      do {
        iVar19 = (int)uVar21;
        if (*(int *)(((longlong)piVar17 - (longlong)piVar9) + (longlong)local_58) == 0) {
          if (*(longlong *)((longlong)iVar19 * 0x28 + 8 + *param_1) != 0) {
            FMemory::Free();
          }
          iVar15 = (int)param_1[1];
          iVar8 = (iVar15 - iVar19) + -1;
          if (iVar8 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar19 * 0x28 + *param_1),
                       (void *)(*param_1 + (longlong)(iVar19 + 1) * 0x28),(longlong)iVar8 * 0x28);
            iVar15 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar15 + -1;
          TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
          iVar19 = -1;
        }
        else {
          uVar21 = (ulonglong)(iVar19 + 1);
        }
        *piVar17 = iVar19;
        uVar14 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar14;
        piVar18 = local_38;
        piVar17 = piVar17 + 1;
      } while ((int)uVar14 < local_50);
    }
    lVar20 = *plVar1;
    lVar22 = (longlong)(int)param_1[3] * 0x1c + lVar20;
    for (; lVar20 != lVar22; lVar20 = lVar20 + 0x1c) {
      if (*(int *)(lVar20 + 4) == -1) {
        iVar19 = -1;
      }
      else {
        iVar19 = piVar18[*(int *)(lVar20 + 4)];
      }
      *(int *)(lVar20 + 4) = iVar19;
    }
    iVar19 = (int)param_1[3] + 1;
    local_48 = (int *)0x0;
    local_3c = 0;
    local_40 = iVar19;
    if (0 < iVar19) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_48);
    }
    piVar18 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,0,(longlong)iVar19 << 2);
    *piVar18 = -1;
    iVar15 = -1;
    iVar19 = -1;
    uVar11 = uVar13;
    uVar21 = uVar13;
    uVar25 = uVar13;
    piVar9 = piVar18;
    if (0 < (int)param_1[3]) {
      do {
        piVar9 = piVar9 + 1;
        iVar8 = (int)uVar11;
        if ((*(int *)(uVar21 + 4 + *plVar1) == -1) && (*(int *)(uVar21 + 0x14 + *plVar1) == -1)) {
          *piVar9 = -1;
          lVar20 = *plVar1;
        }
        else {
          *piVar9 = (int)uVar25;
          uVar25 = (ulonglong)((int)uVar25 + 1);
          iVar7 = iVar8;
          if (iVar15 != -1) {
            iVar7 = iVar15;
          }
          iVar15 = iVar7;
          lVar20 = *plVar1;
          if (*(int *)(uVar21 + lVar20) == -1) {
            iVar19 = iVar8;
          }
        }
        uVar11 = (ulonglong)(iVar8 + 1U);
        uVar21 = uVar21 + 0x1c;
      } while ((int)(iVar8 + 1U) < (int)param_1[3]);
      if ((iVar19 != -1) && (iVar19 != iVar15)) {
        lVar22 = (longlong)iVar19;
        lVar24 = (longlong)iVar15;
        puVar12 = (undefined8 *)(lVar24 * 0x1c + lVar20);
        puVar23 = (undefined8 *)(lVar22 * 0x1c + lVar20);
        if (puVar12 != puVar23) {
          uVar4 = puVar23[1];
          uVar3 = *(undefined4 *)(puVar12 + 3);
          uVar5 = *puVar12;
          uVar6 = puVar12[1];
          uVar2 = puVar12[2];
          *puVar12 = *puVar23;
          puVar12[1] = uVar4;
          puVar12[2] = puVar23[2];
          *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar23 + 3);
          *puVar23 = uVar5;
          puVar23[1] = uVar6;
          puVar23[2] = uVar2;
          *(undefined4 *)(puVar23 + 3) = uVar3;
        }
        iVar19 = piVar18[lVar24 + 1];
        piVar18[lVar24 + 1] = piVar18[lVar22 + 1];
        piVar18[lVar22 + 1] = iVar19;
      }
    }
    lVar20 = (longlong)(int)param_1[3];
    iVar19 = 0;
    if ((int)param_1[3] != 0) {
      uVar11 = uVar13;
      if ((*(int *)(*plVar1 + 4) == -1) && (*(int *)(*plVar1 + 0x14) == -1)) {
        bVar16 = 0;
        uVar21 = uVar13;
      }
      else {
        bVar16 = 1;
        uVar21 = uVar13;
      }
      do {
        iVar19 = (int)uVar21;
        uVar13 = uVar13 + 1;
        uVar21 = (ulonglong)(iVar19 + 1);
        if ((longlong)uVar13 < lVar20) {
          piVar9 = (int *)(*plVar1 + 0x14 + uVar13 * 0x1c);
          do {
            if ((piVar9[-4] == -1) && (*piVar9 == -1)) {
              bVar10 = 0;
            }
            else {
              bVar10 = 1;
            }
            if (bVar16 != bVar10) break;
            uVar21 = (ulonglong)((int)uVar21 + 1);
            uVar13 = uVar13 + 1;
            piVar9 = piVar9 + 7;
          } while ((longlong)uVar13 < lVar20);
        }
        iVar15 = (int)uVar21 - iVar19;
        if (bVar16 != 0) {
          iVar8 = (int)uVar11;
          if (iVar8 != iVar19) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar8 * 0x1c + *plVar1),
                       (void *)((longlong)iVar19 * 0x1c + *plVar1),(longlong)iVar15 * 0x1c);
          }
          uVar11 = (ulonglong)(uint)(iVar8 + iVar15);
        }
        bVar16 = bVar16 ^ 1;
      } while ((longlong)uVar13 < lVar20);
      iVar19 = (int)uVar11;
      *(int *)(param_1 + 3) = iVar19;
    }
    piVar9 = (int *)*plVar1;
    piVar17 = piVar9 + (longlong)iVar19 * 7;
    for (; piVar9 != piVar17; piVar9 = piVar9 + 7) {
      *piVar9 = piVar18[(longlong)*piVar9 + 1];
      piVar9[2] = piVar18[(longlong)piVar9[2] + 1];
      piVar9[3] = piVar18[(longlong)piVar9[3] + 1];
      piVar9[4] = piVar18[(longlong)piVar9[4] + 1];
    }
    FMemory::Free(piVar18);
    if (local_38 != (int *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405f2730 FUN_1405f2730 body=374 status=ok
// SIG undefined FUN_1405f2730(void)

void FUN_1405f2730(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_38 [48];
  
  if (param_1[0x52] != 0) {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 == 0) {
    return;
  }
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  iVar2 = FUN_1428cf800(uVar4);
  if (iVar2 == 3) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = UWorld::GetWorldSettings(uVar4,0,1);
    param_1[0x52] = lVar3;
    return;
  }
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  lVar5 = (**(code **)(*DAT_146b33f38 + 0x280))();
  lVar3 = FUN_1428dfc70();
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x30) != 0)) {
    lVar6 = FUN_1428dfc70();
    lVar7 = *(longlong *)(lVar5 + 0x30);
    for (lVar1 = lVar7; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar6) {
        if (lVar7 != 0) {
          if (lVar7 == 0) goto LAB_1405f282e;
          lVar7 = FUN_1428dfc70();
          lVar3 = *(longlong *)(lVar5 + 0x30);
          lVar5 = lVar3;
          goto joined_r0x0001405f281a;
        }
        break;
      }
    }
  }
LAB_1405f2830:
  uVar4 = FActorSpawnParameters::FActorSpawnParameters(local_38);
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar3 = UWorld::SpawnActor(uVar8,lVar3,0,0,uVar4);
  param_1[0x52] = lVar3;
  if (lVar3 == 0) {
    return;
  }
  *(byte *)(lVar3 + 0x90) = *(byte *)(lVar3 + 0x90) | 8;
  *(undefined4 *)(param_1[0x52] + 0x138) = 0;
  FUN_14223ef90(param_1[0x52],1);
  return;
joined_r0x0001405f281a:
  if (lVar5 == 0) goto LAB_1405f282e;
  if (lVar5 == lVar7) goto LAB_1405f2830;
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x0001405f281a;
LAB_1405f282e:
  lVar3 = 0;
  goto LAB_1405f2830;
}



// FUNCTION 1405f28b0 FUN_1405f28b0 body=1393 status=ok
// SIG undefined FUN_1405f28b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1405f28b0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,int *param_6,int *param_7,int *param_8,undefined8 param_9,
                 longlong param_10,undefined8 param_11)

{
  double dVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int *piVar13;
  longlong *plVar14;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  int **local_130;
  char local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  undefined1 *local_110;
  int *local_108;
  int *local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 *puStack_d0;
  longlong *local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  undefined1 *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  lVar12 = param_10;
  piVar2 = param_7;
  piVar13 = param_6;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_100 = param_8;
  *param_7 = *param_6;
  param_7[1] = param_6[1];
  param_7[2] = param_6[2];
  if (((param_1 != 0) && (param_2 != 0)) && ((param_10 == 0 || (*(char *)(param_3 + 9) != '\0')))) {
    local_f0 = param_4;
    local_e8 = param_2;
    local_e0 = param_3;
    lVar7 = FUN_1405e8e00();
    FUN_1405eada0(param_4,param_1);
    local_f8 = FUN_1405ea520(param_1);
    puVar8 = (undefined1 *)FUN_1405e8ff0(param_1);
    if (((local_f8 != 0) && (puVar8 != (undefined1 *)0x0)) && (lVar7 != 0)) {
      *piVar2 = *piVar13;
      piVar2[1] = piVar13[1];
      piVar2[2] = piVar13[2];
      local_110 = puVar8;
      cVar4 = FUN_1405e2770(piVar2);
      local_128 = cVar4 == '\0';
      if (cVar4 == '\0') {
        if (*piVar2 == 0) {
          DAT_14620d470 = DAT_14620d470 + -1;
          *piVar2 = DAT_14620d470;
        }
        FWeakObjectPtr::operator=(piVar2 + 1,param_1);
        local_11c = piVar2[1];
        plVar14 = (longlong *)(lVar7 + 0x2958);
        local_120 = *piVar2;
        local_118 = piVar2[2];
        if (*(int *)(lVar7 + 0x2960) != *(int *)(lVar7 + 0x298c)) {
          lVar9 = *(longlong *)(lVar7 + 0x2998);
          if (*(longlong *)(lVar7 + 0x2998) == 0) {
            lVar9 = lVar7 + 0x2990;
          }
          iVar5 = *(int *)(lVar9 + ((longlong)*(int *)(lVar7 + 0x29a0) - 1U & (longlong)local_120) *
                                   4);
          if (iVar5 != -1) {
            do {
              piVar13 = (int *)((longlong)iVar5 * 0x38 + *plVar14);
              if (*piVar13 == local_120) {
                if ((iVar5 != -1) && (piVar13 != (int *)0x0)) goto LAB_1405f2a9e;
                break;
              }
              iVar5 = piVar13[0xc];
            } while (iVar5 != -1);
          }
        }
        local_108 = &local_120;
        FUN_1405ddcf0(plVar14,&local_124,&local_108,0);
        piVar13 = (int *)((longlong)local_124 * 0x38 + *plVar14);
LAB_1405f2a9e:
        cVar4 = FWeakObjectPtr::IsValid(lVar7 + 0x2938);
        if (cVar4 != '\0') {
          uVar10 = FWeakObjectPtr::Get(lVar7 + 0x2938);
          FWeakObjectPtr::operator=(piVar13 + 4,uVar10);
          *(undefined4 *)(lVar7 + 0x2938) = 0xffffffff;
          *(undefined4 *)(lVar7 + 0x293c) = 0;
        }
        cVar4 = FWeakObjectPtr::IsValid(lVar7 + 0x2940);
        if (cVar4 != '\0') {
          uVar10 = FWeakObjectPtr::Get(lVar7 + 0x2940);
          FWeakObjectPtr::operator=(piVar13 + 6,uVar10);
          *(undefined4 *)(lVar7 + 0x2940) = 0xffffffff;
          *(undefined4 *)(lVar7 + 0x2944) = 0;
        }
        puVar8 = local_110;
        if (((*(float *)(lVar7 + 0x2948) != 0.0) || (*(float *)(lVar7 + 0x294c) != 0.0)) ||
           (*(float *)(lVar7 + 0x2950) != 0.0)) {
          *(undefined8 *)(piVar13 + 8) = *(undefined8 *)(lVar7 + 0x2948);
          piVar13[10] = *(int *)(lVar7 + 0x2950);
          *(undefined8 *)(lVar7 + 0x2948) = _DAT_1468b5d90;
          *(undefined4 *)(lVar7 + 0x2950) = DAT_1468b5d98;
        }
      }
      iVar5 = piVar2[1];
      iVar6 = piVar2[2];
      *(int *)(lVar7 + 0x2928) = *piVar2;
      local_130 = &local_108;
      *(int *)(lVar7 + 0x292c) = iVar5;
      *(int *)(lVar7 + 0x2930) = iVar6;
      local_138 = &local_110;
      *(undefined1 *)(lVar7 + 0x2934) = 0;
      cVar4 = FUN_1405e7e60(local_f8,local_f0,local_e8 + 0x80,local_e0);
      piVar13 = local_108;
      *(undefined4 *)(lVar7 + 0x2928) = 0;
      *(undefined1 *)(lVar7 + 0x2934) = 0;
      if (cVar4 != '\0') {
        if (lVar12 != 0) {
          *(undefined1 *)(local_108 + 0xa6) = 1;
          *(longlong *)(local_108 + 0xa8) = lVar12;
        }
        local_d8 = local_f0;
        puStack_d0 = (undefined1 *)&param_5;
        local_78 = (longlong *)0x0;
        local_c8 = &local_e8;
        puStack_c0 = (undefined1 *)&param_9;
        local_b8 = param_11;
        local_68 = 0;
        puVar11 = (undefined8 *)FUN_140438ef0(0x30,local_98);
        piVar3 = local_100;
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &PTR_FUN_143f4d098;
          puVar11[1] = local_d8;
          puVar11[2] = puStack_d0;
          puVar11[3] = local_c8;
          puVar11[4] = puStack_c0;
          puVar11[5] = local_b8;
        }
        local_a8[0] = &LAB_1405e4db0;
        local_120 = *piVar2;
        local_11c = piVar2[1];
        local_118 = piVar2[2];
        local_130 = (int **)CONCAT44(local_130._4_4_,*local_100);
        local_138 = local_a8;
        iVar5 = FUN_1405e6810(puVar8,piVar13,local_110,&local_120);
        if (local_68 != 0) {
          plVar14 = local_98;
          if (local_78 != (longlong *)0x0) {
            plVar14 = local_78;
          }
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x10))(plVar14,0);
          }
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (iVar5 != 0) {
          iVar6 = FUN_1405eabe0(puVar8,iVar5);
          *piVar3 = iVar6;
          return iVar5;
        }
      }
      if (local_128 != '\0') {
        local_11c = piVar2[1];
        local_120 = *piVar2;
        local_118 = piVar2[2];
        if (*(longlong *)(lVar7 + 0xd8) != 0) {
          plVar14 = (longlong *)(lVar7 + 0x2958);
          if (*(int *)(lVar7 + 0x2960) != *(int *)(lVar7 + 0x298c)) {
            lVar12 = *(longlong *)(lVar7 + 0x2998);
            if (*(longlong *)(lVar7 + 0x2998) == 0) {
              lVar12 = lVar7 + 0x2990;
            }
            iVar5 = *(int *)(lVar12 + ((longlong)*(int *)(lVar7 + 0x29a0) - 1U & (longlong)local_120
                                      ) * 4);
            if (iVar5 != -1) {
              do {
                piVar13 = (int *)((longlong)iVar5 * 0x38 + *plVar14);
                if (*piVar13 == local_120) {
                  if ((iVar5 != -1) && (piVar13 != (int *)0x0)) goto LAB_1405f2dbe;
                  break;
                }
                iVar5 = piVar13[0xc];
              } while (iVar5 != -1);
            }
          }
          local_100 = &local_120;
          FUN_1405ddcf0(plVar14,&local_124,&local_100,0);
          piVar13 = (int *)((longlong)local_124 * 0x38 + *plVar14);
LAB_1405f2dbe:
          plVar14 = *(longlong **)(lVar7 + 0xd8);
          lVar12 = (**(code **)(*plVar14 + 0x148))(plVar14);
          if (lVar12 == 0) {
            dVar1 = 0.0;
          }
          else {
            lVar12 = (**(code **)(*plVar14 + 0x148))(plVar14);
            dVar1 = (double)*(float *)(lVar12 + 0x79c);
          }
          *(double *)(piVar13 + 2) = dVar1 + 1.0;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1405f2e30 FUN_1405f2e30 body=402 status=ok
// SIG undefined FUN_1405f2e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_1405f2e30(undefined4 *param_1,undefined8 param_2,longlong param_3,undefined1 *param_4,
             undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 *_Dst;
  undefined1 *_Src;
  longlong lVar2;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  undefined4 *local_2c0;
  undefined4 *local_2b8;
  undefined4 *local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_288 [2];
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined1 local_270 [8];
  undefined1 local_268 [512];
  undefined1 *local_68;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  uVar1 = FUN_1405e8b50(param_3);
  local_288[0] = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = *(int *)(param_4 + 0x210);
  lVar2 = (longlong)local_60;
  local_270[0] = *param_4;
  _Src = *(undefined1 **)(param_4 + 0x208);
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1405f06b0(local_268,local_60,0);
    if (_Src == (undefined1 *)0x0) {
      _Src = param_4 + 8;
    }
    _Dst = local_268;
    if (local_68 != (undefined1 *)0x0) {
      _Dst = local_68;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,lVar2 << 6);
  }
  local_280 = *param_5;
  local_27c = param_5[1];
  local_278 = param_5[2];
  local_298 = param_7;
  local_2b0 = local_288;
  local_2a0 = 0;
  local_2a8 = 0xbf800000;
  local_2c0 = &local_280;
  local_2c8 = 0;
  local_2b8 = param_1;
  FUN_1405f28b0(param_2,uVar1,param_6,local_270);
  if (local_68 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1405f2fd0 FUN_1405f2fd0 body=1825 status=ok
// SIG undefined FUN_1405f2fd0(void)

void FUN_1405f2fd0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  void **ppvVar14;
  longlong *plVar15;
  undefined1 uVar16;
  bool bVar17;
  uint local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  uint *local_res20;
  longlong local_118 [2];
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [2];
  undefined1 local_68 [16];
  undefined4 local_58;
  
  plVar15 = (longlong *)0x0;
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return;
  }
  FUN_1405e24e0(param_1 + 0x1b0,(undefined4 *)(param_1 + 0x210));
  if (*(float *)(param_1 + 0x200) <= 0.5 && *(float *)(param_1 + 0x200) != 0.5) {
    *(undefined4 *)(param_1 + 0x200) = 0;
  }
  lVar8 = *(longlong *)(param_1 + 0x120);
  if ((lVar8 != 0) || (lVar8 = FUN_1423407b0(param_1), lVar8 != 0)) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d3f0,&local_res10,lVar8);
    if (((int)local_res10 != -1) &&
       (lVar8 = DAT_14620d3f0 + (longlong)(int)local_res10 * 0x18, lVar8 != 0)) {
      plVar15 = *(longlong **)(lVar8 + 8);
    }
  }
  if (plVar15 != (longlong *)0x0) {
    local_res8[0] = *(uint *)(param_1 + 0x1b0);
    lVar8 = *(longlong *)(param_1 + 0x1b8);
    uVar2 = *(undefined4 *)(param_1 + 0x1b4);
    local_res20 = local_res8;
    FUN_1405dd7c0(plVar15 + 0x535,&local_res18,&local_res20,0);
    lVar12 = plVar15[0x535] + (longlong)(int)local_res18 * 0x30;
    *(undefined8 *)(lVar12 + 8) = 0xbff0000000000000;
    *(undefined4 *)(lVar12 + 0x10) = uVar2;
    FWeakObjectPtr::operator=(lVar12 + 0x14,param_1);
    FWeakObjectPtr::operator=(lVar12 + 0x1c,lVar8);
    if (plVar15[0x1b] != 0) {
      uVar9 = (**(code **)(*plVar15 + 0x148))(plVar15);
      iVar7 = FUN_1428cf800(uVar9);
      if ((iVar7 == 3) &&
         ((lVar8 = *(longlong *)(lVar8 + 0xb0), lVar8 == 0 || (*(char *)(lVar8 + 0x60) == '\0')))) {
        FUN_1405f4120(plVar15[0x1b],local_res8[0],lVar12 + 8);
      }
    }
  }
  local_f8 = 0;
  local_f0 = 0;
  FUN_140590080(local_e8);
  local_b8 = 0;
  local_d0 = 0;
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  local_a4 = 0;
  *(undefined4 *)(param_1 + 0x210) = (undefined4)local_f8;
  *(undefined4 *)(param_1 + 0x214) = local_f8._4_4_;
  *(undefined8 *)(param_1 + 0x218) = local_f0;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  local_a0 = 0;
  FUN_1405913a0(param_1 + 0x220,local_e8);
  *(undefined4 *)(param_1 + 0x230) = local_d8;
  *(undefined1 *)(param_1 + 0x238) = (undefined1)local_d0;
  bVar5 = true;
  bVar4 = false;
  if ((undefined8 *)(param_1 + 0x240) != &local_c8) {
    *(undefined8 *)(param_1 + 0x240) = local_c8;
    plVar15 = *(longlong **)(param_1 + 0x248);
    local_c8 = 0;
    *(longlong **)(param_1 + 0x248) = plStack_c0;
    plStack_c0 = (longlong *)0x0;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if ((undefined8 *)(param_1 + 0x250) != &local_b8) {
    *(undefined8 *)(param_1 + 0x250) = local_b8;
    plVar15 = *(longlong **)(param_1 + 600);
    local_b8 = 0;
    *(longlong **)(param_1 + 600) = local_b0;
    local_b0 = (longlong *)0x0;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x264) = (undefined1)local_a4;
  *(undefined1 *)(param_1 + 0x265) = local_a4._1_1_;
  *(undefined8 *)(param_1 + 0x268) = local_a0;
  *(undefined4 *)(param_1 + 0x260) = local_a8;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar7 == 1) && (local_b0 != (longlong *)0x0)) {
      (**(code **)(*local_b0 + 8))(local_b0,1);
    }
  }
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_c0 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar7 == 1) && (plStack_c0 != (longlong *)0x0)) {
      (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
    }
  }
  FUN_140591060(local_e8);
  FUN_1405f3700(param_1);
  plVar15 = (longlong *)(param_1 + 0x1c0);
  cVar6 = FUN_14059ee90(plVar15);
  if (cVar6 != '\0') {
    lVar8 = *plVar15;
    local_88 = FUN_1405ecc30;
    uStack_80 = 0;
    plVar13 = (longlong *)(lVar8 + 0x90);
    plVar10 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = (longlong)&PTR_FUN_143ff7778;
      FWeakObjectPtr::operator=(plVar10 + 1,param_1);
      *(undefined4 *)(plVar10 + 2) = (undefined4)local_88;
      *(undefined4 *)((longlong)plVar10 + 0x14) = local_88._4_4_;
      *(undefined4 *)(plVar10 + 3) = uStack_80;
      *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_7c;
      lVar12 = FDelegateHandle::GenerateNewID();
      plVar10[5] = lVar12;
      *plVar10 = (longlong)&PTR_FUN_143ff77c0;
    }
    if (&local_88 != plVar13) {
      if (plVar10 == (longlong *)0x0) {
        if ((*(int *)(lVar8 + 0x98) != 0) &&
           (plVar3 = (longlong *)*plVar13, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          if (*plVar13 != 0) {
            lVar12 = FMemory::Realloc(*plVar13,0,0);
            *plVar13 = lVar12;
          }
          *(undefined4 *)(lVar8 + 0x98) = 0;
        }
      }
      else {
        (**(code **)(*plVar10 + 0x30))(plVar10,plVar13);
      }
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      lVar8 = FMemory::Realloc(plVar10,0,0);
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
    }
  }
  cVar6 = FUN_14059ee90(plVar15);
  if ((cVar6 == '\0') || (cVar6 = FUN_14059ee00(plVar15), cVar6 == '\0')) {
    *(undefined1 *)(param_1 + 0x204) = 1;
    FUN_1405f1ba0(param_1,*(undefined8 *)(param_1 + 0x1b8));
    FUN_1405f85c0(param_1,0xbf800000,0);
  }
  lVar8 = *(longlong *)(param_1 + 0x1b8);
  uVar9 = UCurveFloat::GetPrivateStaticClass();
  lVar12 = UObjectBaseUtility::GetTypedOuter(lVar8,uVar9);
  if (lVar12 == 0) {
LAB_1405f342e:
    lVar12 = *(longlong *)(lVar8 + 0x60);
    if (((lVar12 == 0) && (lVar12 = *(longlong *)(lVar8 + 0x68), lVar12 == 0)) ||
       (*(char *)(lVar12 + 0x3c) == '\0')) goto LAB_1405f36a6;
  }
  else if (*(char *)(lVar12 + 0x58) != '\x02') {
    if (*(char *)(lVar12 + 0x58) == '\x01') goto LAB_1405f36a6;
    goto LAB_1405f342e;
  }
  if (*(char *)(param_1 + 0x205) != '\0') goto LAB_1405f36a6;
  lVar8 = *(longlong *)(param_1 + 0x120);
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  plVar10 = (longlong *)FUN_142d5ecc0(lVar8);
  if ((plVar10 == (longlong *)0x0) ||
     (local_res20 = (uint *)(**(code **)(*plVar10 + 0x288))(plVar10), local_res20 == (uint *)0x0))
  goto LAB_1405f36a6;
  uVar9 = *(undefined8 *)(param_1 + 0x1b8);
  local_res8[0] = local_res8[0] & 0xffffff00;
  uVar11 = UCurveFloat::GetPrivateStaticClass();
  lVar8 = UObjectBaseUtility::GetTypedOuter(uVar9,uVar11);
  if (lVar8 != 0) {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(char *)(lVar8 + 0x58) == '\x02');
  }
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    local_res18 = 0;
LAB_1405f3502:
    uVar16 = 0;
  }
  else {
    local_res18 = FUN_1405e9180(*(longlong *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x118),
                                param_1);
    if (*(longlong *)(param_1 + 0x1a8) == 0) goto LAB_1405f3502;
    uVar16 = *(undefined1 *)(*(longlong *)(param_1 + 0x1a8) + 0x58);
  }
  lVar8 = USimpleConstructionScript::GetOwnerClass(*(undefined8 *)(param_1 + 0x1b8));
  if (lVar8 == 0) {
    local_98 = (void *)0x0;
    ppvVar14 = &local_98;
    local_90 = 0;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    lVar8 = USimpleConstructionScript::GetOwnerClass(*(undefined8 *)(param_1 + 0x1b8));
    local_108 = (void *)0x0;
    local_100 = *(int *)(lVar8 + 0x80);
    lVar12 = (longlong)local_100;
    _Src = *(void **)(lVar8 + 0x78);
    if (local_100 == 0) {
      local_fc = 0;
      ppvVar14 = &local_108;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_100,0);
      _guard_xfg_dispatch_icall_nop(local_108,_Src,lVar12 * 2);
      ppvVar14 = &local_108;
    }
  }
  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x88);
  local_res10 = 0;
  bVar17 = *plVar10 == 0;
  if (bVar17) {
    local_118[0] = 0;
    local_118[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118,0);
    FGenericPlatformString::Memcpy(local_118[0],L"normal",0xe);
    plVar10 = local_118;
  }
  else {
    plVar10 = (longlong *)FName::ToString(plVar10,local_78);
  }
  FUN_14058f8f0(local_68,plVar15);
  local_58 = *(undefined4 *)(param_1 + 0x1d0);
  (**(code **)(*(longlong *)local_res20 + 0x10))
            (local_res20,param_1,local_res18,*(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0xd8),
             plVar10,ppvVar14,uVar16,local_68,*(undefined4 *)(param_1 + 0x1b0),
             (undefined1)local_res8[0]);
  if ((bVar17) && (local_118[0] != 0)) {
    FMemory::Free();
  }
  if ((!bVar17) && (local_78[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar4) && (local_98 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar5) && (local_108 != (void *)0x0)) {
    FMemory::Free();
  }
LAB_1405f36a6:
  if (0 < *(int *)(param_1 + 0x1a0)) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x198,0);
  }
  return;
}



// FUNCTION 1405f3700 FUN_1405f3700 body=2271 status=ok
// SIG undefined FUN_1405f3700(void)

ulonglong FUN_1405f3700(longlong param_1)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  ulonglong in_RAX;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong local_348;
  longlong local_340;
  undefined1 local_330 [8];
  longlong *local_328;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined8 local_310;
  longlong local_300 [2];
  undefined1 local_2f0 [24];
  undefined1 local_2d8 [32];
  undefined1 local_2b8 [49];
  undefined1 local_287;
  undefined1 local_1e8 [200];
  undefined1 local_120 [232];
  
  fVar2 = *(float *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  lVar8 = (**(code **)(*DAT_146b33f38 + 0x280))();
  if ((plVar3 == (longlong *)0x0) || (lVar8 == 0)) {
    bVar5 = 0;
    goto LAB_1405f3fb1;
  }
  lVar13 = *(longlong *)(param_1 + 0x1a8);
  if ((lVar13 != 0) &&
     (lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x88),
     *(int *)(lVar13 + 0xa0) != *(int *)(lVar13 + 0xcc))) {
    lVar10 = *(longlong *)(lVar13 + 0xd8);
    if (*(longlong *)(lVar13 + 0xd8) == 0) {
      lVar10 = lVar13 + 0xd0;
    }
    iVar7 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar16 >> 0x20) + (int)lVar16) &
                              (longlong)*(int *)(lVar13 + 0xe0) - 1U) * 4);
    if (iVar7 != -1) {
      do {
        lVar10 = *(longlong *)(lVar13 + 0x98) + (longlong)iVar7 * 0x18;
        if (*(longlong *)(*(longlong *)(lVar13 + 0x98) + (longlong)iVar7 * 0x18) == lVar16) {
          if ((iVar7 != -1) && (lVar10 != 0)) {
            plVar18 = (longlong *)(lVar10 + 8);
            goto LAB_1405f383f;
          }
          break;
        }
        iVar7 = *(int *)(lVar10 + 0x10);
      } while (iVar7 != -1);
    }
  }
  plVar18 = (longlong *)0x0;
LAB_1405f383f:
  if (plVar18 == (longlong *)0x0) {
    if (((lVar13 != 0) && (lVar13 = *(longlong *)(lVar13 + 0x90), lVar13 != 0)) &&
       (lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x88),
       *(int *)(lVar13 + 0x38) != *(int *)(lVar13 + 100))) {
      lVar10 = *(longlong *)(lVar13 + 0x70);
      if (*(longlong *)(lVar13 + 0x70) == 0) {
        lVar10 = lVar13 + 0x68;
      }
      iVar7 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar16 >> 0x20) + (int)lVar16) &
                                (longlong)*(int *)(lVar13 + 0x78) - 1U) * 4);
      if (iVar7 != -1) {
        do {
          lVar10 = *(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 0x18;
          if (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 0x18) == lVar16) {
            if (((iVar7 == -1) || (lVar10 == 0)) ||
               (plVar18 = (longlong *)(lVar10 + 8), plVar18 == (longlong *)0x0)) goto LAB_1405f3909;
            goto LAB_1405f390e;
          }
          iVar7 = *(int *)(lVar10 + 0x10);
        } while (iVar7 != -1);
        lVar13 = 0;
        goto LAB_1405f3911;
      }
    }
LAB_1405f3909:
    lVar13 = 0;
  }
  else {
LAB_1405f390e:
    lVar13 = *plVar18;
  }
LAB_1405f3911:
  lVar16 = *(longlong *)(param_1 + 0x1b8);
  if (*(longlong *)(lVar16 + 0x78) != 0) {
    lVar9 = FUN_142e20fc0();
    lVar16 = *(longlong *)(lVar16 + 0x78);
    for (lVar10 = lVar16; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
      if (lVar10 == lVar9) {
        if (lVar16 != 0) goto LAB_1405f3974;
        break;
      }
    }
  }
  if (lVar13 != 0) {
    lVar10 = FUN_142e20fc0();
    lVar16 = lVar13;
    do {
      if (lVar16 == lVar10) goto LAB_1405f3974;
      lVar16 = *(longlong *)(lVar16 + 0x30);
    } while (lVar16 != 0);
  }
LAB_1405f3c57:
  FUN_1405e8c30(*(undefined8 *)(param_1 + 0x1b8),&local_348);
  lVar13 = FInternationalization::Get();
  plVar18 = *(longlong **)(lVar13 + 0x30);
  local_310 = *(undefined8 *)(lVar13 + 0x28);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  uVar14 = FCulture::GetName(local_310);
  FUN_14059ddf0(local_300,uVar14);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar18 + 1;
    lVar13 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 0x1b8);
  uVar15 = FUN_140600840();
  lVar13 = UObjectBaseUtility::GetTypedOuter(uVar14,uVar15);
  lVar16 = FUN_1406119f0(plVar3);
  if (lVar16 == 0) {
LAB_1405f3e04:
    bVar5 = 0;
LAB_1405f3e11:
    if (local_348 != 0) {
      FUN_1405f9b30(param_1);
      if (*(char *)(param_1 + 0x2a9) == '\0') {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0xb0);
        if ((lVar13 == 0) || (plVar18 = *(longlong **)(lVar13 + 0x58), plVar18 == (longlong *)0x0))
        {
          lVar13 = FUN_14059b7e0(plVar3,1);
        }
        else {
          lVar13 = (**(code **)(*plVar18 + 0x278))(plVar18,plVar3);
        }
      }
      else {
        lVar13 = *(longlong *)(param_1 + 0x288);
      }
      if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x378) != 0)) {
        lVar13 = FUN_1405a27c0(*(longlong *)(lVar13 + 0x378),local_2d8,&local_348,2);
        FUN_1405913a0(param_1 + 0x1c0,lVar13);
        *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(lVar13 + 0x10);
        FUN_140591060(local_2d8);
        cVar6 = FUN_14059ee90(param_1 + 0x1c0);
        if ((cVar6 != '\0') && (fVar2 != 0.0)) {
          FUN_1405a94c0(param_1 + 0x1c0,(int)(fVar2 * 1000.0));
        }
      }
    }
  }
  else {
    if (local_348 != 0) {
      if (((lVar13 == 0) || (*(char *)(param_1 + 0x2a9) != '\0')) ||
         (lVar13 = *(longlong *)(lVar13 + 0xe0), lVar13 == 0)) {
        bVar5 = 0;
      }
      else {
        lVar10 = FUN_140618a40();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_1405f3e04;
        bVar5 = FUN_140614670(lVar16,&local_348,0,lVar13);
        lVar13 = FUN_1406117d0(lVar16,local_2f0);
        FUN_1405913a0(param_1 + 0x1c0,lVar13);
        *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(lVar13 + 0x10);
        FUN_140591060(local_2f0);
        cVar6 = FUN_14059ee90(param_1 + 0x1c0);
        if ((cVar6 != '\0') && (fVar2 != 0.0)) {
          FUN_140612f20(lVar16,fVar2,0,0,0,0,0);
        }
        if (bVar5 != 0) goto LAB_1405f3ee7;
      }
      goto LAB_1405f3e11;
    }
    bVar5 = 0;
  }
LAB_1405f3ee7:
  cVar6 = FUN_14059ee90(param_1 + 0x1c0);
  if (cVar6 != '\0') {
    lVar13 = *(longlong *)(param_1 + 0x1a8);
    if (*(longlong *)(lVar8 + 0x60) != 0) {
      FUN_1405aaa50(*(undefined8 *)(param_1 + 0x1c0));
      lVar13 = *(longlong *)(param_1 + 0x1a8);
    }
    if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x80) != 0)) {
      FUN_1405aaa50(*(undefined8 *)(param_1 + 0x1c0));
    }
  }
  if (local_300[0] != 0) {
    FMemory::Free();
  }
  if (local_340 != 0) {
    FMemory::Free();
  }
LAB_1405f3fb1:
  return (ulonglong)bVar5;
LAB_1405f3974:
  uVar14 = FUN_142e27720();
  lVar16 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar14);
  if (lVar16 != 0) {
    FUN_142c62180(local_2b8);
    lVar10 = *(longlong *)(param_1 + 0x1b8);
    local_287 = 2;
    if (*(longlong *)(lVar10 + 0x78) != 0) {
      lVar11 = FUN_142e20fc0();
      lVar10 = *(longlong *)(lVar10 + 0x78);
      for (lVar9 = lVar10; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
        if (lVar9 == lVar11) {
          if (lVar10 != 0) {
            uVar14 = FUN_1405e0fd0(local_1e8,local_2b8);
            puVar12 = (undefined8 *)
                      FUN_142c7bb40(lVar16,local_330,
                                    *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x78),uVar14,0)
            ;
            *(undefined8 *)(param_1 + 0x1e0) = *puVar12;
            plVar18 = (longlong *)puVar12[1];
            plVar17 = *(longlong **)(param_1 + 0x1e8);
            if (plVar18 != plVar17) {
              if (plVar18 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
                UNLOCK();
                plVar17 = *(longlong **)(param_1 + 0x1e8);
              }
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar17 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar7 == 1) && (plVar17 != (longlong *)0x0)) {
                  (**(code **)(*plVar17 + 8))(plVar17,1);
                }
              }
              *(longlong **)(param_1 + 0x1e8) = plVar18;
            }
            if (local_328 != (longlong *)0x0) {
              LOCK();
              plVar18 = local_328 + 1;
              lVar10 = *plVar18;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_328)(local_328);
                LOCK();
                piVar1 = (int *)((longlong)local_328 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*local_328 + 8))(local_328,1);
                }
              }
            }
          }
          break;
        }
      }
    }
    if (lVar13 != 0) {
      lVar9 = FUN_142e20fc0();
      lVar10 = lVar13;
      do {
        if (lVar10 == lVar9) {
          uVar14 = FUN_1405e0fd0(local_120,local_2b8);
          puVar12 = (undefined8 *)FUN_142c7bb40(lVar16,local_320,lVar13,uVar14,0);
          *(undefined8 *)(param_1 + 0x1f0) = *puVar12;
          plVar18 = (longlong *)puVar12[1];
          plVar17 = *(longlong **)(param_1 + 0x1f8);
          if (plVar18 != plVar17) {
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
              UNLOCK();
              plVar17 = *(longlong **)(param_1 + 0x1f8);
            }
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar7 == 1) && (plVar17 != (longlong *)0x0)) {
                (**(code **)(*plVar17 + 8))(plVar17,1);
              }
            }
            *(longlong **)(param_1 + 0x1f8) = plVar18;
          }
          if (local_318 != (longlong *)0x0) {
            LOCK();
            plVar18 = local_318 + 1;
            lVar13 = *plVar18;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*local_318)(local_318);
              LOCK();
              piVar1 = (int *)((longlong)local_318 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_318 + 8))(local_318,1);
              }
            }
          }
          break;
        }
        lVar10 = *(longlong *)(lVar10 + 0x30);
      } while (lVar10 != 0);
    }
    uVar14 = FUN_142e5c1e0();
    lVar13 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar14);
    if ((lVar13 != 0) && (lVar13 = FUN_1423ac7e0(lVar13), lVar13 != 0)) {
      lVar16 = UMonkeyAnim::StaticClass();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_142ccf4b0(lVar13,*(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0x90));
        *(undefined4 *)(lVar13 + 0x92c) = *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0x80);
        FUN_142c63c50(local_2b8);
        goto LAB_1405f3c57;
      }
    }
    FUN_142c63c50(local_2b8);
  }
  goto LAB_1405f3c57;
}



// FUNCTION 1405f3fe0 FUN_1405f3fe0 body=204 status=ok
// SIG undefined FUN_1405f3fe0(void)

void FUN_1405f3fe0(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  
  if (param_4 != 0) {
    iVar2 = FUN_142340f30();
    if (((iVar2 != 3) &&
        ((*(longlong *)(param_4 + 0xb0) == 0 ||
         (*(char *)(*(longlong *)(param_4 + 0xb0) + 0x60) == '\0')))) &&
       (((char)param_1[0x53] == '\0' ||
        (((longlong *)param_1[0x54] == (longlong *)0x0 ||
         (cVar1 = (**(code **)(*(longlong *)param_1[0x54] + 0x768))(), cVar1 == '\0')))))) {
      (**(code **)(*param_1 + 0x260))(param_1);
      *(undefined4 *)(param_1 + 0x56) = param_2;
      *(undefined4 *)((longlong)param_1 + 0x2b4) = param_3;
      param_1[0x57] = param_4;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    cVar1 = (**(code **)(*param_1 + 0x418))(param_1,param_4);
    if (cVar1 != '\0') {
      FUN_1405f40b0(param_1,param_2,param_3,param_4,0);
    }
  }
  return;
}



// FUNCTION 1405f40b0 FUN_1405f40b0 body=101 status=ok
// SIG undefined FUN_1405f40b0(void)

void FUN_1405f40b0(longlong *param_1,int param_2,undefined4 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  
  if (((int)param_1[0x42] != param_2) && ((int)param_1[0x36] != param_2)) {
    *(undefined1 *)((longlong)param_1 + 0x265) = param_5;
    *(int *)(param_1 + 0x42) = param_2;
    *(undefined4 *)((longlong)param_1 + 0x214) = param_3;
    param_1[0x43] = param_4;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    cVar1 = (**(code **)(*param_1 + 0x2a0))();
    if (cVar1 != '\0') {
      FUN_14288e3d0(param_1 + 6,1);
      return;
    }
  }
  return;
}



// FUNCTION 1405f4120 FUN_1405f4120 body=514 status=ok
// SIG undefined FUN_1405f4120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405f4120(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_368 [32];
  code *local_348 [2];
  undefined1 local_338 [32];
  undefined8 local_318;
  undefined4 local_308;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4 [25];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0;
  uStack_d0 = 0;
  local_cc = 0;
  uStack_c8 = 0;
  local_c4 = 0;
  uStack_c0 = 0;
  local_bc = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  local_a4[0] = 0;
  local_ac = 0xffffffff00000000;
  _guard_xfg_dispatch_icall_nop(local_a4,0,0x6c);
  local_2f8 = CONCAT71(local_2f8._1_7_,1);
  local_40 = param_1;
  lVar1 = FWeakObjectPtr::Get(param_3 + 0x14);
  if (*(longlong *)(lVar1 + 0xb0) != 0) {
    lVar1 = FWeakObjectPtr::Get(param_3 + 0x14);
    if ((*(longlong *)(lVar1 + 0xb0) != 0) &&
       (iVar4 = 2, *(char *)(*(longlong *)(lVar1 + 0xb0) + 0x60) != '\0')) goto LAB_1405f4203;
  }
  iVar4 = 3;
LAB_1405f4203:
  local_2f0 = CONCAT44(local_2f0._4_4_,param_2);
  DAT_146854f00 = (DAT_146854f00 & 0xfffffffe) + iVar4;
  local_2f8 = CONCAT44(DAT_146854f00,(undefined4)local_2f8);
  uVar2 = FWeakObjectPtr::Get(param_3 + 0xc);
  uStack_d0 = (undefined4)uVar2;
  local_cc = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar2 = FWeakObjectPtr::Get(param_3 + 0x14);
  uStack_c8 = (undefined4)uVar2;
  local_c4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_c0 = 0;
  local_bc = 0;
  FUN_1405eb670(param_1,&local_2f8);
  lVar1 = local_40;
  local_2f8 = CONCAT71(local_2f8._1_7_,3);
  local_318 = 0;
  local_308 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_338);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f77b70;
    puVar3[1] = &local_2f8;
  }
  local_348[0] = FUN_1405e4e10;
  FUN_1405e5910(lVar1,&local_2f8,local_348);
  iVar4 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar4 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar4 + 1) {
    FUN_1405f0bd0(param_1 + 0x30,iVar4);
  }
  FUN_1405e1350((longlong)iVar4 * 0x2c0 + *(longlong *)(param_1 + 0x30),&local_2f8);
  FUN_1405e3bd0(*(undefined8 *)(param_1 + 0x68),CONCAT44(local_c4,uStack_c8));
  if (local_e0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405f4330 FUN_1405f4330 body=7 status=ok
// SIG undefined FUN_1405f4330(void)

undefined4 FUN_1405f4330(void)

{
  return DAT_146854f00;
}



// FUNCTION 1405f4340 FUN_1405f4340 body=292 status=ok
// SIG undefined FUN_1405f4340(void)

void FUN_1405f4340(longlong param_1,undefined8 param_2,char param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar2 = FUN_1405e0180(param_2);
  *(undefined1 *)(lVar2 + 8) = 0;
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x40) == '\0') {
      cVar1 = FUN_14059ee90(lVar2 + 0x18);
      if (cVar1 != '\0') {
        FUN_1405ac8f0(lVar2 + 0x18,0,4);
      }
      plVar3 = (longlong *)(**(code **)(*param_4 + 0x70))(param_4);
      lVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
      if (lVar4 != 0) {
        plVar3 = (longlong *)FUN_142d5ecc0(lVar4);
        if (plVar3 != (longlong *)0x0) {
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x290))(plVar3);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(lVar2 + 0x30),param_3);
          }
        }
      }
    }
    else if (*(int *)(lVar2 + 0xc) != 0) {
      cVar1 = FUN_14044af00(lVar2 + 0x10,0);
      if (cVar1 != '\0') {
        uVar5 = FWeakObjectPtr::Get(lVar2 + 0x10);
        lVar4 = FUN_1405e8ff0(uVar5);
        if (lVar4 != 0) {
          local_18 = *(undefined8 *)(lVar2 + 0xc);
          local_10 = *(undefined4 *)(lVar2 + 0x14);
          FUN_1405f4d60(lVar4,&local_18);
        }
        *(undefined4 *)(lVar2 + 0xc) = 0;
        *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
        *(undefined4 *)(lVar2 + 0x14) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1405f4470 FUN_1405f4470 body=366 status=ok
// SIG undefined FUN_1405f4470(void)

void FUN_1405f4470(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_28;
  longlong local_20;
  
  plVar4 = *(longlong **)(param_1 + 0x118);
  if (plVar4 != (longlong *)0x0) {
    uVar7 = FUN_142e27720();
    lVar8 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar7);
    if (lVar8 != 0) {
      lVar5 = *param_2;
      if (lVar5 != 0) {
        lVar10 = *(longlong *)(lVar5 + 8);
        lVar9 = FUN_142e261f0();
        for (; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
          if (lVar10 == lVar9) {
            bVar6 = true;
            goto LAB_1405f44f0;
          }
        }
        bVar6 = false;
LAB_1405f44f0:
        lVar10 = 0;
        if (bVar6) {
          lVar10 = lVar5;
        }
        if ((lVar10 != 0) && (FUN_142c85270(), param_3 == '\0')) {
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
          return;
        }
      }
      lVar5 = *param_2;
      if (lVar5 != 0) {
        lVar10 = *(longlong *)(lVar5 + 8);
        lVar9 = FLobbyChatNode::StaticStruct();
        for (; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
          if (lVar10 == lVar9) {
            bVar6 = true;
            goto LAB_1405f4540;
          }
        }
        bVar6 = false;
LAB_1405f4540:
        lVar10 = 0;
        if (bVar6) {
          lVar10 = lVar5;
        }
        if (lVar10 != 0) {
          FUN_142c84e30(lVar10,0x3f800000,1);
          goto LAB_1405f458e;
        }
      }
      local_28 = *param_2;
      local_20 = param_2[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_142c84750(lVar8,&local_28);
    }
  }
LAB_1405f458e:
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
  return;
}



// FUNCTION 1405f45e0 FUN_1405f45e0 body=538 status=ok
// SIG undefined FUN_1405f45e0(void)

void FUN_1405f45e0(longlong *param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  int local_res8 [2];
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d350,local_res8,lVar2);
    if ((local_res8[0] != -1) &&
       (lVar2 = DAT_14620d350 + (longlong)local_res8[0] * 0x18, lVar2 != 0)) {
      lVar2 = *(longlong *)(lVar2 + 8);
      goto LAB_1405f4644;
    }
  }
  lVar2 = 0;
LAB_1405f4644:
  if (lVar2 != 0) {
    lVar3 = FUN_140604cc0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pcVar5 = *(char **)(lVar2 + 0x30);
      pcVar6 = pcVar5 + (longlong)*(int *)(lVar2 + 0x38) * 0x2c0;
      for (; pcVar5 != pcVar6; pcVar5 = pcVar5 + 0x2c0) {
        if (*(longlong **)(pcVar5 + 0x228) == param_1) {
          if (param_2 == '\0') {
            lVar2 = *(longlong *)(*(longlong *)(pcVar5 + 0x230) + 0xb0);
            if (lVar2 == 0) {
              plVar4 = (longlong *)FUN_140600120();
              lVar2 = plVar4[0x1f];
              if (lVar2 == 0) {
                (**(code **)(*plVar4 + 0x368))(plVar4);
                lVar2 = plVar4[0x1f];
              }
            }
            if (*(char *)(lVar2 + 0x44) != '\0') goto LAB_1405f470b;
          }
          if (*pcVar5 == '\x03') {
            FUN_1405eb4e0(pcVar5);
          }
        }
LAB_1405f470b:
      }
    }
    else {
      lVar3 = FUN_1428dfc70();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        pcVar5 = *(char **)(lVar2 + 0x30);
        pcVar6 = pcVar5 + (longlong)*(int *)(lVar2 + 0x38) * 0x2c0;
        for (; pcVar5 != pcVar6; pcVar5 = pcVar5 + 0x2c0) {
          if ((*(longlong *)(pcVar5 + 0x228) != 0) &&
             (*(longlong **)(*(longlong *)(pcVar5 + 0x228) + 0x118) == param_1)) {
            if (param_2 == '\0') {
              lVar2 = *(longlong *)(*(longlong *)(pcVar5 + 0x230) + 0xb0);
              if (lVar2 == 0) {
                plVar4 = (longlong *)FUN_140600120();
                lVar2 = plVar4[0x1f];
                if (lVar2 == 0) {
                  (**(code **)(*plVar4 + 0x368))(plVar4);
                  lVar2 = plVar4[0x1f];
                }
              }
              if (*(char *)(lVar2 + 0x44) != '\0') goto LAB_1405f47d7;
            }
            if (*pcVar5 == '\x03') {
              FUN_1405eb4e0(pcVar5);
            }
          }
LAB_1405f47d7:
        }
      }
    }
  }
  return;
}



// FUNCTION 1405f4800 FUN_1405f4800 body=1374 status=ok
// SIG undefined FUN_1405f4800(void)

void FUN_1405f4800(longlong *param_1,byte param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  int local_res10 [2];
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  lVar8 = 0;
  local_res10[0] = 0;
  lVar4 = param_1[0x24];
  if ((lVar4 != 0) || (lVar4 = FUN_1423407b0(), lVar4 != 0)) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d3f0,local_res10,lVar4);
    if ((local_res10[0] != -1) &&
       (lVar4 = DAT_14620d3f0 + (longlong)local_res10[0] * 0x18, lVar4 != 0)) {
      lVar8 = *(longlong *)(lVar4 + 8);
    }
  }
  if (lVar8 != 0) {
    FUN_1405eca90(lVar8,(int)param_1[0x36],param_2 ^ 1);
  }
  if (param_2 != 0) {
    FUN_1405f85c0(param_1,(int)param_1[0x40],0x3f800000);
  }
  lVar4 = param_1[0x23];
  if (lVar4 != 0) {
    if ((param_1[0x3c] == 0) || (param_1[0x3d] == 0)) {
LAB_1405f4960:
      plVar5 = &local_98;
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      bVar2 = false;
      bVar9 = true;
      local_78 = 0;
    }
    else {
      piVar1 = (int *)(param_1[0x3d] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (iVar3 < 1) goto LAB_1405f4960;
      local_b0 = (longlong *)param_1[0x3d];
      local_b8 = 0;
      if (local_b0 == (longlong *)0x0) {
LAB_1405f4950:
        plVar5 = &local_b8;
        bVar2 = true;
        bVar9 = false;
        local_78 = local_b8;
      }
      else {
        LOCK();
        iVar3 = (int)local_b0[1];
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(local_b0 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar3 == (int)local_b0[1];
          if (bVar9) {
            *(int *)(local_b0 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_b0 != (longlong *)0x0) {
              local_b8 = param_1[0x3c];
            }
            goto LAB_1405f4950;
          }
          LOCK();
          iVar3 = (int)local_b0[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(local_b0 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
        plVar5 = &local_b8;
        local_b0 = (longlong *)0x0;
        bVar2 = true;
        bVar9 = false;
        local_78 = 0;
      }
    }
    local_70 = plVar5[1];
    plVar5[1] = 0;
    *plVar5 = 0;
    FUN_1405f4470(param_1,&local_78,1);
    plVar5 = plStack_90;
    if ((bVar9) && (plStack_90 != (longlong *)0x0)) {
      LOCK();
      plVar6 = plStack_90 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_90 + 8))(plStack_90,1);
        }
      }
    }
    plVar5 = local_b0;
    if ((bVar2) && (local_b0 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_b0 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    if ((param_1[0x3e] == 0) || (param_1[0x3f] == 0)) {
LAB_1405f4ab2:
      plVar5 = &local_88;
      local_68 = 0;
      bVar2 = false;
      bVar9 = true;
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
    }
    else {
      piVar1 = (int *)(param_1[0x3f] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (iVar3 < 1) goto LAB_1405f4ab2;
      local_a0 = (longlong *)param_1[0x3f];
      local_a8 = 0;
      if (local_a0 == (longlong *)0x0) {
LAB_1405f4aa2:
        plVar5 = &local_a8;
        bVar2 = true;
        bVar9 = false;
        local_68 = local_a8;
      }
      else {
        LOCK();
        iVar3 = (int)local_a0[1];
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(local_a0 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar3 == (int)local_a0[1];
          if (bVar9) {
            *(int *)(local_a0 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_a0 != (longlong *)0x0) {
              local_a8 = param_1[0x3e];
            }
            goto LAB_1405f4aa2;
          }
          LOCK();
          iVar3 = (int)local_a0[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(local_a0 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
        plVar5 = &local_a8;
        local_a0 = (longlong *)0x0;
        bVar2 = true;
        bVar9 = false;
        local_68 = 0;
      }
    }
    local_60 = plVar5[1];
    plVar5[1] = 0;
    *plVar5 = 0;
    FUN_1405f4470(param_1,&local_68,0);
    plVar5 = plStack_80;
    if ((bVar9) && (plStack_80 != (longlong *)0x0)) {
      LOCK();
      plVar6 = plStack_80 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
    plVar5 = local_a0;
    if ((bVar2) && (local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_a0 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if ((param_2 == 0) && (lVar4 = FUN_1406119f0(lVar4), lVar4 != 0)) {
      FUN_140617080(lVar4);
    }
  }
  lVar4 = param_1[0x24];
  if (((lVar4 == 0) && (lVar4 = FUN_1423407b0(param_1), lVar4 == 0)) ||
     (plVar5 = (longlong *)FUN_142d5ecc0(lVar4), plVar5 == (longlong *)0x0)) goto LAB_1405f4c69;
  plVar6 = (longlong *)(**(code **)(*plVar5 + 0x290))(plVar5);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6,param_1[0x41],param_2 ^ 1);
  }
  lVar4 = param_1[0x37];
  uVar7 = UCurveFloat::GetPrivateStaticClass();
  lVar8 = UObjectBaseUtility::GetTypedOuter(lVar4,uVar7);
  if (lVar8 == 0) {
LAB_1405f4c20:
    lVar8 = *(longlong *)(lVar4 + 0x60);
    if (((lVar8 == 0) && (lVar8 = *(longlong *)(lVar4 + 0x68), lVar8 == 0)) ||
       (*(char *)(lVar8 + 0x3c) == '\0')) goto LAB_1405f4c69;
  }
  else if (*(char *)(lVar8 + 0x58) != '\x02') {
    if (*(char *)(lVar8 + 0x58) == '\x01') goto LAB_1405f4c69;
    goto LAB_1405f4c20;
  }
  if ((*(char *)((longlong)param_1 + 0x205) == '\0') &&
     (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2,(int)param_1[0x36]);
  }
LAB_1405f4c69:
  FUN_1405ac8f0(param_1 + 0x38,0,4);
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  if (param_1 + 0x3c != local_58) {
    param_1[0x3c] = 0;
    plVar5 = (longlong *)param_1[0x3d];
    param_1[0x3d] = 0;
    if (plVar5 != (longlong *)0x0) {
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
  if (param_1 + 0x3e != local_48) {
    param_1[0x3e] = 0;
    plVar5 = (longlong *)param_1[0x3f];
    param_1[0x3f] = 0;
    if (plVar5 != (longlong *)0x0) {
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
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x41] = 0;
  iVar3 = FUN_142340f30(param_1);
  if (iVar3 != 3) {
    (**(code **)(*param_1 + 0x260))(param_1);
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1405f4d60 FUN_1405f4d60 body=234 status=ok
// SIG undefined FUN_1405f4d60(void)

void FUN_1405f4d60(longlong param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = 0;
    do {
      pcVar2 = (char *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if ((*(int *)(pcVar2 + 0x24c) == *param_2) &&
         (cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            (pcVar2 + 0x250,param_2 + 1), cVar1 != '\0')) {
        if (*pcVar2 == '\x03') {
          FUN_1405eb4e0(pcVar2);
        }
        else {
          *pcVar2 = '\x02';
          if ((((pcVar2[0x2a0] != '\0') && (*(longlong *)(pcVar2 + 0x228) != 0)) &&
              (FUN_140607170(*(longlong *)(pcVar2 + 0x228),*(undefined4 *)(pcVar2 + 4),1),
              pcVar2[0x2ad] != '\0')) && (*(longlong *)(*(longlong *)(pcVar2 + 0x228) + 0x118) != 0)
             ) {
            FUN_14223d380(*(longlong *)(*(longlong *)(pcVar2 + 0x228) + 0x118),0);
          }
          FUN_1405e84a0(*(undefined8 *)(pcVar2 + 0x2b8),pcVar2,0);
        }
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x2c0;
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 1405f4e50 FUN_1405f4e50 body=122 status=ok
// SIG undefined FUN_1405f4e50(void)

void FUN_1405f4e50(longlong param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = 0;
    do {
      pcVar1 = (char *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (((*(longlong *)(pcVar1 + 0x228) != 0) && ((*pcVar1 - 1U & 0xfd) == 0)) &&
         (param_2 == *(int *)(pcVar1 + 600))) {
        FUN_1405eb4e0();
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x2c0;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 1405f4ef0 FUN_1405f4ef0 body=187 status=ok
// SIG undefined FUN_1405f4ef0(void)

undefined8 FUN_1405f4ef0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  do {
    if (DAT_146b33f38 == (longlong *)0x0) {
      FUN_142d7ebe0();
    }
    lVar2 = (**(code **)(*DAT_146b33f38 + 0x280))();
    if ((lVar2 != 0) && (param_2 == *(longlong *)(param_1 + 0x38))) {
      if ((param_3 == 0) || (*(char *)(param_3 + 0x58) == '\0')) {
        if (*(int *)(param_1 + 0x48) == 0) {
          return 1;
        }
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x40);
        plVar1 = plVar3 + *(int *)(param_1 + 0x48);
        for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
          if (*plVar3 == param_3) {
            return 1;
          }
        }
      }
    }
    param_1 = *(longlong *)(param_1 + 0x50);
  } while (param_1 != 0);
  return 0;
}



// FUNCTION 1405f4fb0 FUN_1405f4fb0 body=67 status=ok
// SIG undefined FUN_1405f4fb0(void)

undefined8 FUN_1405f4fb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
  plVar1 = plVar3 + *(int *)(param_1 + 0x48);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    if (*plVar3 == param_2) {
      return 1;
    }
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) && (cVar2 = FUN_1405f4fb0(), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1405f5000 FUN_1405f5000 body=42 status=ok
// SIG undefined FUN_1405f5000(void)

undefined1 FUN_1405f5000(longlong param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) && (cVar1 = FUN_1405f5000(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1405f5030 FUN_1405f5030 body=460 status=ok
// SIG undefined FUN_1405f5030(void)

float FUN_1405f5030(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  int local_48;
  int local_44;
  int local_40;
  int *local_38;
  longlong *local_30;
  
  local_44 = param_2[1];
  plVar1 = (longlong *)(param_1 + 0x30);
  local_48 = *param_2;
  iVar8 = 0;
  pfVar10 = (float *)0x0;
  local_40 = param_2[2];
  local_38 = &local_48;
  lVar6 = *plVar1;
  local_30 = plVar1;
  if ((lVar6 != (longlong)*(int *)(param_1 + 0x38) * 0x2c0 + lVar6) &&
     ((*(int *)(lVar6 + 0x24c) != local_48 ||
      (cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6 + 0x250,&local_44),
      cVar5 == '\0')))) {
    lVar6 = FUN_1405ed7a0(&local_38,lVar6);
  }
  lVar9 = (longlong)*(int *)(param_1 + 0x38) * 0x2c0 + *plVar1;
  pfVar11 = pfVar10;
  if (lVar6 != lVar9) {
    do {
      iVar4 = *(int *)(lVar6 + 4);
      pfVar11 = (float *)(lVar6 + 0x2a8);
      if (*(int *)(lVar6 + 4) <= iVar8) {
        iVar4 = iVar8;
        pfVar11 = pfVar10;
      }
      pfVar10 = pfVar11;
      iVar8 = iVar4;
      lVar6 = FUN_1405ed7a0(&local_38,lVar6);
    } while (lVar6 != lVar9);
    pfVar11 = pfVar10;
    if (pfVar10 != (float *)0x0) goto LAB_1405f51c2;
  }
  piVar7 = *(int **)(param_1 + 0x50);
  local_38 = &local_48;
  plVar1 = (longlong *)(param_1 + 0x50);
  local_30 = plVar1;
  if ((piVar7 != piVar7 + (longlong)*(int *)(param_1 + 0x58) * 10) &&
     ((piVar7[1] != local_48 ||
      (cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(piVar7 + 2,&local_44),
      cVar5 == '\0')))) {
    piVar7 = (int *)FUN_1405ed810(&local_38,piVar7);
  }
  piVar2 = (int *)(*plVar1 + (longlong)*(int *)(param_1 + 0x58) * 0x28);
  if (piVar7 == piVar2) {
    return 0.0;
  }
  do {
    iVar4 = *piVar7;
    pfVar10 = (float *)(piVar7 + 8);
    if (iVar4 <= iVar8) {
      pfVar10 = pfVar11;
    }
    piVar7 = (int *)FUN_1405ed810(&local_38,piVar7);
    if (iVar4 <= iVar8) {
      iVar4 = iVar8;
    }
    iVar8 = iVar4;
    pfVar11 = pfVar10;
  } while (piVar7 != piVar2);
  if (pfVar10 == (float *)0x0) {
    return 0.0;
  }
LAB_1405f51c2:
  fVar3 = *pfVar10;
  if (fVar3 <= 0.0) {
    return 0.0;
  }
  *pfVar10 = 0.0;
  return fVar3;
}



// FUNCTION 1405f5200 FUN_1405f5200 body=363 status=ok
// SIG undefined FUN_1405f5200(void)

void FUN_1405f5200(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int local_res10 [2];
  undefined8 local_18;
  undefined4 local_10;
  
  plVar2 = *(longlong **)(param_2 + 8);
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,local_res10,param_2 + 0x24);
  puVar7 = (undefined8 *)0x0;
  puVar5 = puVar7;
  if (local_res10[0] != -1) {
    puVar5 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *plVar2);
  }
  puVar6 = puVar5 + 2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar6 = puVar7;
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar6;
  }
  if ((puVar7 != (undefined8 *)0x0) && (*(char *)((longlong)param_3 + 0x349) != '\0')) {
    if (*(char *)((longlong)puVar7 + 9) == '\0') {
      cVar1 = FUN_14059ee90(puVar7 + 3);
      if (cVar1 != '\0') {
        FUN_1405ac8f0(puVar7 + 3,0,4);
      }
      plVar2 = (longlong *)(**(code **)(*param_3 + 0x70))(param_3);
      lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
      if ((lVar3 != 0) && (plVar2 = (longlong *)FUN_142d5ecc0(lVar3), plVar2 != (longlong *)0x0)) {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x290))(plVar2);
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001405f52f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x18))(plVar2,puVar7[6],1);
          return;
        }
      }
    }
    else if ((*(int *)((longlong)puVar7 + 0xc) != 0) &&
            (cVar1 = FUN_14044af00(puVar7 + 2,0), cVar1 != '\0')) {
      uVar4 = FWeakObjectPtr::Get(puVar7 + 2);
      lVar3 = FUN_1405e8ff0(uVar4);
      if (lVar3 != 0) {
        local_18 = *(undefined8 *)((longlong)puVar7 + 0xc);
        local_10 = *(undefined4 *)((longlong)puVar7 + 0x14);
        FUN_1405f4d60(lVar3,&local_18);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *(undefined4 *)(puVar7 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
    }
  }
  return;
}



// FUNCTION 1405f5370 FUN_1405f5370 body=32 status=ok
// SIG undefined FUN_1405f5370(void)

undefined1 FUN_1405f5370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res20 [8];
  
  local_res20[0] = 2;
  FUN_140601ca0(param_1,param_3,local_res20);
  return local_res20[0];
}



// FUNCTION 1405f5390 FUN_1405f5390 body=655 status=ok
// SIG undefined FUN_1405f5390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1405f5390(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float local_28;
  float fStack_24;
  undefined8 local_1c;
  float local_14;
  
  uVar5 = *(ulonglong *)(param_1 + 0x30);
  puVar8 = *(ulonglong **)(param_3 + 0x208);
  puVar9 = puVar8;
  if (puVar8 == (ulonglong *)0x0) {
    puVar9 = (ulonglong *)(param_3 + 8);
  }
  puVar7 = puVar9 + (longlong)*(int *)(param_3 + 0x210) * 8;
  for (; puVar9 != puVar7; puVar9 = puVar9 + 8) {
    if (*puVar9 == uVar5) {
      if ((puVar9 != (ulonglong *)0x0) && (puVar9 != (ulonglong *)0xfffffffffffffff8)) {
        plVar11 = (longlong *)puVar9[5];
        uVar5 = *(ulonglong *)(param_1 + 0x38);
        if (puVar8 == (ulonglong *)0x0) {
          puVar8 = (ulonglong *)(param_3 + 8);
        }
        puVar9 = puVar8 + (longlong)*(int *)(param_3 + 0x210) * 8;
        if (puVar8 != puVar9) goto LAB_1405f5424;
      }
      break;
    }
  }
  goto LAB_1405f53e1;
LAB_1405f5424:
  while (*puVar8 != uVar5) {
    puVar8 = puVar8 + 8;
    if (puVar8 == puVar9) {
      return CONCAT71((int7)(uVar5 >> 8),2);
    }
  }
  if ((puVar8 == (ulonglong *)0x0) || (puVar8 == (ulonglong *)0xfffffffffffffff8))
  goto LAB_1405f53e1;
  plVar10 = (longlong *)puVar8[5];
  if (plVar11 == (longlong *)0x0) {
LAB_1405f5491:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(plVar11[2] + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(plVar11[2] + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)uVar5 == '\0') goto LAB_1405f5491;
  }
  if (plVar10 == (longlong *)0x0) {
LAB_1405f54ce:
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(plVar10[2] + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(plVar10[2] + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)uVar5 == '\0') goto LAB_1405f54ce;
  }
  if ((plVar11 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
    plVar6 = (longlong *)(**(code **)(*plVar11 + 0x678))(plVar11);
    if (plVar6 != (longlong *)0x0) {
      plVar11 = plVar6;
    }
    plVar6 = (longlong *)(**(code **)(*plVar10 + 0x678))(plVar10);
    if (plVar6 != (longlong *)0x0) {
      plVar10 = plVar6;
    }
    if (*(char *)(param_1 + 0x40) == '\0') {
      fVar12 = 2000.0;
    }
    else {
      fVar12 = *(float *)(param_1 + 0x44);
    }
    lVar4 = plVar11[0x2d];
    if (lVar4 == 0) {
      local_1c = _DAT_1468b5d90;
      local_14 = DAT_1468b5d98;
    }
    else {
      local_1c = *(undefined8 *)(lVar4 + 0x220);
      local_14 = *(float *)(lVar4 + 0x228);
    }
    fVar3 = local_14;
    uVar2 = local_1c;
    lVar4 = plVar10[0x2d];
    if (lVar4 == 0) {
      local_1c = _DAT_1468b5d90;
      local_14 = DAT_1468b5d98;
    }
    else {
      local_1c = *(undefined8 *)(lVar4 + 0x220);
      local_14 = *(float *)(lVar4 + 0x228);
    }
    fStack_24 = (float)((ulonglong)uVar2 >> 0x20);
    fStack_24 = (float)((ulonglong)local_1c >> 0x20) - fStack_24;
    local_28 = (float)uVar2;
    local_28 = (float)local_1c - local_28;
    return (ulonglong)
           CONCAT31((int3)((uint)local_14 >> 8),
                    (bool)*(char *)(param_1 + 0x48) !=
                    fStack_24 * fStack_24 + local_28 * local_28 +
                    (local_14 - fVar3) * (local_14 - fVar3) < fVar12 * fVar12);
  }
LAB_1405f53e1:
  return CONCAT71((int7)(uVar5 >> 8),2);
}



// FUNCTION 1405f5620 FUN_1405f5620 body=737 status=ok
// SIG undefined FUN_1405f5620(void)

undefined1 FUN_1405f5620(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  
  plVar4 = (longlong *)(param_3 + 8);
  plVar7 = *(longlong **)(param_3 + 0x208);
  lVar10 = (longlong)*(int *)(param_3 + 0x210);
  plVar8 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    plVar8 = plVar4;
  }
  plVar6 = plVar8 + lVar10 * 8;
  while( true ) {
    if (plVar8 == plVar6) {
      return 2;
    }
    if (*plVar8 == *(longlong *)(param_1 + 0x30)) break;
    plVar8 = plVar8 + 8;
  }
  if (plVar8 == (longlong *)0x0) {
    return 2;
  }
  if (plVar8 == (longlong *)0xfffffffffffffff8) {
    return 2;
  }
  plVar8 = (longlong *)plVar8[5];
  plVar6 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar4;
  }
  plVar9 = plVar6 + lVar10 * 8;
  while( true ) {
    if (plVar6 == plVar9) {
      return 2;
    }
    if (*plVar6 == *(longlong *)(param_1 + 0x30)) break;
    plVar6 = plVar6 + 8;
  }
  if (plVar6 == (longlong *)0x0) {
    return 2;
  }
  if (plVar6 == (longlong *)0xfffffffffffffff8) {
    return 2;
  }
  lVar5 = plVar6[4];
  if (plVar7 == (longlong *)0x0) {
    plVar7 = plVar4;
  }
  plVar4 = plVar7 + lVar10 * 8;
  while( true ) {
    if (plVar7 == plVar4) {
      return 2;
    }
    if (*plVar7 == *(longlong *)(param_1 + 0x38)) break;
    plVar7 = plVar7 + 8;
  }
  if (plVar7 == (longlong *)0x0) {
    return 2;
  }
  if (plVar7 == (longlong *)0xfffffffffffffff8) {
    return 2;
  }
  lVar10 = plVar7[6];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146855238) && (_Init_thread_header(&DAT_146855238), DAT_146855238 == -1))
  {
    atexit((_func_5014 *)&LAB_143e40060);
    _Init_thread_footer(&DAT_146855238);
  }
  DAT_146855230 = 0;
  if ((DAT_146855234 < 0) && (DAT_146855234 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146855228,0);
  }
  if (lVar5 != 0) {
    lVar3 = FUN_140604cc0();
    iVar2 = DAT_146855230;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = (longlong)DAT_146855230;
      DAT_146855230 = DAT_146855230 + 1;
      if (DAT_146855234 < DAT_146855230) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146855228,iVar2);
      }
      DAT_146855228[lVar3] = lVar5;
      goto LAB_1405f5879;
    }
  }
  if (plVar8 != (longlong *)0x0) {
    lVar5 = FUN_1428dfc70();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar4 = (longlong *)(**(code **)(*plVar8 + 0x678))(plVar8);
      if (plVar4 != (longlong *)0x0) {
        plVar8 = plVar4;
      }
      TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
      ::MultiFind<FDefaultAllocator>
                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 0x240,plVar8,&DAT_146855228,0);
      if (DAT_146855230 == 0) {
        FUN_1405dfd80(plVar8,&DAT_146855228,0);
      }
    }
  }
LAB_1405f5879:
  plVar4 = DAT_146855228 + DAT_146855230;
  for (plVar7 = DAT_146855228; plVar7 != plVar4; plVar7 = plVar7 + 1) {
    if ((longlong *)*plVar7 != (longlong *)0x0) {
      for (lVar5 = (**(code **)(*(longlong *)*plVar7 + 0x410))(); lVar5 != 0;
          lVar5 = *(longlong *)(lVar5 + 0x50)) {
        if (*(longlong *)(lVar5 + 0x38) == lVar10) goto LAB_1405f58c0;
      }
    }
  }
  plVar7 = (longlong *)0x0;
LAB_1405f58c0:
  return plVar7 == (longlong *)0x0;
}



// FUNCTION 1405f5910 FUN_1405f5910 body=387 status=ok
// SIG undefined FUN_1405f5910(void)

undefined8 FUN_1405f5910(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  char cVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  if ((((lVar3 != 0) && (lVar4 = *(longlong *)(param_1 + 0x38), lVar4 != 0)) &&
      (cVar2 = *(char *)(lVar3 + 0x48), cVar2 == *(char *)(lVar4 + 0x48))) &&
     (*(longlong *)(lVar3 + 0x50) == *(longlong *)(lVar4 + 0x50))) {
    plVar8 = (longlong *)0x0;
    cVar10 = '\0';
    cVar9 = '\0';
    fVar11 = 0.0;
    fVar12 = 0.0;
    plVar6 = *(longlong **)(param_3 + 0x208);
    if (*(longlong **)(param_3 + 0x208) == (longlong *)0x0) {
      plVar6 = (longlong *)(param_3 + 8);
    }
    plVar1 = plVar6 + (longlong)*(int *)(param_3 + 0x210) * 8;
    for (plVar7 = plVar6; (plVar5 = plVar8, plVar7 != plVar1 && (plVar5 = plVar7, *plVar7 != lVar3))
        ; plVar7 = plVar7 + 8) {
    }
    plVar7 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar7 = plVar8;
    }
    if (plVar7 != (longlong *)0x0) {
      if (cVar2 == '\0') {
        plVar5 = (longlong *)plVar7[2];
      }
      else if (cVar2 == '\x01') {
        plVar5 = (longlong *)plVar7[4];
      }
      else if (cVar2 == '\x02') {
        plVar5 = (longlong *)plVar7[5];
      }
      else if (cVar2 == '\x03') {
        fVar11 = *(float *)(plVar7 + 6);
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = plVar8;
        if (cVar2 == '\x04') {
          cVar10 = *(char *)((longlong)plVar7 + 0x35);
          plVar5 = (longlong *)0x0;
        }
      }
      for (; (plVar7 = plVar8, plVar6 != plVar1 && (plVar7 = plVar6, *plVar6 != lVar4));
          plVar6 = plVar6 + 8) {
      }
      plVar6 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar6 = plVar8;
      }
      if (plVar6 != (longlong *)0x0) {
        cVar2 = *(char *)(lVar4 + 0x48);
        if (cVar2 == '\0') {
          plVar8 = (longlong *)plVar6[2];
        }
        else if (cVar2 == '\x01') {
          plVar8 = (longlong *)plVar6[4];
        }
        else if (cVar2 == '\x02') {
          plVar8 = (longlong *)plVar6[5];
        }
        else if (cVar2 == '\x03') {
          fVar12 = *(float *)(plVar6 + 6);
        }
        else if (cVar2 == '\x04') {
          cVar9 = *(char *)((longlong)plVar6 + 0x35);
        }
        if (((plVar5 == plVar8) && (fVar11 == fVar12)) && (cVar10 == cVar9)) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 1405f5aa0 FUN_1405f5aa0 body=592 status=ok
// SIG undefined FUN_1405f5aa0(void)

undefined1 FUN_1405f5aa0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  longlong *plVar10;
  int local_res8 [2];
  int *local_res20;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x208);
    if (*(longlong **)(param_3 + 0x208) == (longlong *)0x0) {
      plVar10 = (longlong *)(param_3 + 8);
    }
    plVar8 = plVar10 + (longlong)*(int *)(param_3 + 0x210) * 8;
    for (; plVar10 != plVar8; plVar10 = plVar10 + 8) {
      if (*plVar10 == *(longlong *)(param_1 + 0x30)) {
        if (plVar10 == (longlong *)0x0) {
          return 2;
        }
        if (plVar10 == (longlong *)0xfffffffffffffff8) {
          return 2;
        }
        plVar10 = (longlong *)plVar10[5];
        if (plVar10 == (longlong *)0x0) {
          return 2;
        }
        lVar6 = FUN_1428dfc70();
        if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
            != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          lVar6 = FUN_1428e7a40();
          if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            return 2;
          }
          plVar10 = (longlong *)plVar10[0x23];
          if (plVar10 == (longlong *)0x0) {
            return 2;
          }
        }
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
        lVar7 = (**(code **)(*plVar10 + 0x670))(plVar10);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
        if (lVar6 != 0) {
          piVar1 = (int *)(lVar2 + 0x2928);
          if ((*piVar1 == 0) || (cVar4 = FUN_14044af00(lVar2 + 0x292c,0), cVar4 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (*(char *)(lVar2 + 0x2934) == '\0') {
              lVar6 = FUN_1405f94d0(lVar2,lVar6);
              return lVar7 != lVar6;
            }
            plVar10 = (longlong *)(lVar2 + 0x2958);
            if (*(int *)(lVar2 + 0x2960) == *(int *)(lVar2 + 0x298c)) goto LAB_1405f5c93;
            lVar6 = *(longlong *)(lVar2 + 0x2998);
            if (*(longlong *)(lVar2 + 0x2998) == 0) {
              lVar6 = lVar2 + 0x2990;
            }
            iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(lVar2 + 0x29a0) - 1U & (longlong)*piVar1) *
                                     4);
            if (iVar5 == -1) goto LAB_1405f5c93;
            goto LAB_1405f5c70;
          }
        }
        return true;
      }
    }
  }
  return 2;
  while (iVar5 = piVar9[0xc], iVar5 != -1) {
LAB_1405f5c70:
    piVar9 = (int *)((longlong)iVar5 * 0x38 + *plVar10);
    if (*piVar9 == *piVar1) {
      if ((iVar5 != -1) && (piVar9 != (int *)0x0)) goto LAB_1405f5cb9;
      break;
    }
  }
LAB_1405f5c93:
  local_res20 = piVar1;
  FUN_1405ddcf0(plVar10,local_res8,&local_res20,0);
  piVar9 = (int *)((longlong)local_res8[0] * 0x38 + *plVar10);
LAB_1405f5cb9:
  lVar6 = FWeakObjectPtr::Get(piVar9 + 4);
  return lVar7 != lVar6;
}



// FUNCTION 1405f5cf0 FUN_1405f5cf0 body=279 status=ok
// SIG undefined FUN_1405f5cf0(void)

bool FUN_1405f5cf0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  int local_res8 [2];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (lVar2 != 0) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_14620d3f0,local_res8,lVar2);
      if (local_res8[0] != -1) {
        lVar2 = DAT_14620d3f0 + (longlong)local_res8[0] * 0x18;
        if (lVar2 != 0) {
          lVar2 = *(longlong *)(lVar2 + 8);
          goto LAB_1405f5d52;
        }
      }
    }
  }
  lVar2 = 0;
LAB_1405f5d52:
  if ((param_2 == 0) || (lVar2 == 0)) {
    return false;
  }
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  local_28 = (**(code **)(*DAT_146b33f38 + 0x280))();
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    *(undefined8 **)(*(longlong *)(param_2 + 0x58) + 0x28) = &local_28;
    local_20 = lVar2;
    cVar1 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x278))
                      (*(longlong **)(param_2 + 0x58),param_2,param_3);
    *(undefined8 *)(*(longlong *)(param_2 + 0x58) + 0x28) = 0;
    return cVar1 == '\0';
  }
  return false;
}



// FUNCTION 1405f5e10 FUN_1405f5e10 body=3446 status=ok
// SIG undefined FUN_1405f5e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405f5e10(longlong param_1,float param_2)

{
  uint *puVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  undefined4 uVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  longlong *plVar21;
  float fVar22;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  uint *puStack_180;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined8 uStack_160;
  uint *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 uStack_138;
  uint *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  undefined8 uStack_100;
  uint *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  longlong local_d0 [2];
  uint local_c0 [4];
  uint *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_90;
  undefined4 local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_110 = param_1;
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  lVar11 = (**(code **)(*DAT_146b33f38 + 0x280))();
  if (lVar11 == 0) {
    TSet<TTuple<FName,FActivatedReverb>,TDefaultMapHashableKeyFuncs<FName,FActivatedReverb,0>,FDefaultSetAllocator>
    ::Reset(param_1 + 0x2930);
    FUN_1405f01f0(param_1 + 0x2980);
  }
  else if ((*(longlong *)(param_1 + 0xb0) != 0) &&
          (lVar11 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28),
          lVar11 != 0)) {
    dVar6 = (double)FUN_1405e99a0(*(undefined8 *)(param_1 + 0xb0));
    lVar11 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
    fVar2 = *(float *)(lVar11 + 0x798);
    local_118 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(local_118 + 0x38) < DAT_146854f18) &&
       (_Init_thread_header(&DAT_146854f18), DAT_146854f18 == -1)) {
      atexit((_func_5014 *)&LAB_143e3ff60);
      _Init_thread_footer(&DAT_146854f18);
    }
    uVar20 = 0;
    DAT_146854f10 = 0;
    uVar13 = uVar20;
    if ((DAT_146854f14 < 0) && (uVar13 = 0, DAT_146854f14 != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146854f08,0);
      uVar13 = (ulonglong)DAT_146854f10;
    }
    plVar21 = (longlong *)(param_1 + 0x2930);
    uVar4 = *(uint *)(param_1 + 0x2958);
    puVar1 = (uint *)(param_1 + 0x2940);
    local_188._0_4_ = 0;
    local_188._4_4_ = 1;
    uStack_174 = 0;
    uStack_170 = 0;
    if (uVar4 != 0) {
      puVar19 = *(uint **)(param_1 + 0x2950);
      if (*(uint **)(param_1 + 0x2950) == (uint *)0x0) {
        puVar19 = puVar1;
      }
      uVar10 = *puVar19;
      uVar16 = uVar20;
      uVar17 = uVar20;
      while (uVar10 == 0) {
        iVar9 = (int)uVar16;
        uStack_170 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_170;
        local_188._0_4_ = iVar9 + 1;
        uVar16 = (ulonglong)(uint)local_188;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1405f6034;
        uVar10 = puVar19[(longlong)iVar9 + 1];
      }
      local_188._4_4_ = uVar10 - 1 & uVar10 ^ uVar10;
      iVar9 = 0x1f;
      if (local_188._4_4_ != 0) {
        for (; local_188._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (local_188._4_4_ == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_174 = (uStack_170 - iVar9) + 0x1f;
      if ((int)uVar4 < (int)uStack_174) {
LAB_1405f6034:
        uStack_174 = uVar4;
      }
    }
    uVar10 = *(uint *)(param_1 + 0x2958);
    uStack_150._0_4_ = 0xffffffff;
    uStack_150._4_4_ = uStack_174;
    local_148 = CONCAT44(uStack_16c,uStack_170);
    local_178 = -1 << ((byte)uVar10 & 0x1f);
    uStack_138._0_4_ = (uint)local_188;
    uStack_138._4_4_ = local_188._4_4_;
    uVar18 = uVar10 & 0xffffffe0;
    uStack_160._0_4_ = (uint)local_188;
    uStack_160._4_4_ = local_188._4_4_;
    puStack_180 = puVar1;
    uStack_174 = uVar10;
    local_168 = plVar21;
    local_158 = puVar1;
    local_140 = plVar21;
    puStack_130 = puVar1;
    uStack_120 = local_148;
    uStack_128._0_4_ = (uint)uStack_150;
    uStack_128._4_4_ = uStack_150._4_4_;
    if (uVar10 != uVar4) {
      puVar19 = *(uint **)(param_1 + 0x2950);
      if (*(uint **)(param_1 + 0x2950) == (uint *)0x0) {
        puVar19 = puVar1;
      }
      uVar14 = puVar19[(int)uVar10 >> 5] & local_178;
      iVar9 = (int)uVar10 >> 5;
      while (uVar14 == 0) {
        uVar18 = uVar18 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1405f6118;
        uVar14 = puVar19[(longlong)iVar9 + 1];
        local_178 = 0xffffffff;
        iVar9 = iVar9 + 1;
      }
      uVar14 = uVar14 - 1 & uVar14 ^ uVar14;
      iVar9 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar14 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_174 = (uVar18 - iVar9) + 0x1f;
      uVar10 = uStack_174;
      if ((int)uVar4 < (int)uStack_174) {
LAB_1405f6118:
        uStack_174 = uVar4;
        uVar10 = uVar4;
      }
    }
    while( true ) {
      iVar9 = (int)uVar13;
      if (((uStack_150._4_4_ == uVar10) && (local_158 == puVar1)) && (local_168 == plVar21)) break;
      puVar12 = (undefined4 *)((longlong)(int)uStack_150._4_4_ * 0x38 + *local_168);
      dVar3 = *(double *)(puVar12 + 2);
      uVar5 = *puVar12;
      if ((dVar3 != 0.0) && (dVar3 < dVar6)) {
        DAT_146854f10 = iVar9 + 1;
        if (DAT_146854f14 < (int)DAT_146854f10) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146854f08,uVar13);
        }
        DAT_146854f08[iVar9] = uVar5;
      }
      uStack_150._0_4_ = (uint)uStack_150 & ~uStack_160._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_160);
      uVar13 = (ulonglong)DAT_146854f10;
    }
    uVar13 = (longlong)iVar9 & 0x3fffffffffffffff;
    if (DAT_146854f08 + iVar9 < DAT_146854f08) {
      uVar13 = uVar20;
    }
    puVar12 = DAT_146854f08;
    uVar16 = uVar20;
    if (uVar13 != 0) {
      do {
        FUN_1405eeed0(plVar21,*puVar12);
        uVar16 = uVar16 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar16 != uVar13);
    }
    lVar11 = local_118;
    if ((*(int *)(local_118 + 0x38) < DAT_146854f30) &&
       (_Init_thread_header(&DAT_146854f30), DAT_146854f30 == -1)) {
      atexit((_func_5014 *)&LAB_143e3ff80);
      _Init_thread_footer(&DAT_146854f30);
    }
    DAT_146854f28 = 0;
    if ((DAT_146854f2c < 0) && (DAT_146854f2c != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146854f20,0);
    }
    plVar21 = (longlong *)(local_110 + 0x1c8);
    uVar4 = *(uint *)(local_110 + 0x1f0);
    puVar1 = (uint *)(local_110 + 0x1d8);
    local_188 = 0x100000000;
    uStack_174 = 0;
    uStack_170 = 0;
    if (uVar4 != 0) {
      puVar19 = *(uint **)(local_110 + 0x1e8);
      if (*(uint **)(local_110 + 0x1e8) == (uint *)0x0) {
        puVar19 = puVar1;
      }
      uVar10 = *puVar19;
      uVar13 = uVar20;
      uVar16 = uVar20;
      while (uVar10 == 0) {
        iVar9 = (int)uVar13;
        uStack_170 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_170;
        uVar13 = (ulonglong)(iVar9 + 1U);
        local_188._4_4_ = (uint)((ulonglong)local_188 >> 0x20);
        local_188 = CONCAT44(local_188._4_4_,iVar9 + 1U);
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1405f62f5;
        uVar10 = puVar19[(longlong)iVar9 + 1];
      }
      uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
      iVar9 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      local_188 = CONCAT44(uVar10,(uint)local_188);
      if (uVar10 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_174 = (uStack_170 - iVar9) + 0x1f;
      if ((int)uVar4 < (int)uStack_174) {
LAB_1405f62f5:
        uStack_174 = uVar4;
      }
    }
    local_178 = 0xffffffff;
    uVar10 = *(uint *)(local_110 + 0x1f0);
    uStack_150 = CONCAT44(uStack_174,0xffffffff);
    local_148 = CONCAT44(uStack_16c,uStack_170);
    uStack_160 = local_188;
    uVar18 = uVar10 & 0xffffffe0;
    uStack_138 = local_188;
    puStack_180 = puVar1;
    local_168 = plVar21;
    local_158 = puVar1;
    local_140 = plVar21;
    puStack_130 = puVar1;
    uStack_128 = uStack_150;
    uStack_120 = local_148;
    if (uVar10 != uVar4) {
      puVar19 = *(uint **)(local_110 + 0x1e8);
      if (*(uint **)(local_110 + 0x1e8) == (uint *)0x0) {
        puVar19 = puVar1;
      }
      uVar14 = puVar19[(int)uVar10 >> 5] & -1 << ((byte)uVar10 & 0x1f);
      iVar9 = (int)uVar10 >> 5;
      while (uVar14 == 0) {
        uVar18 = uVar18 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1405f63d1;
        uVar14 = puVar19[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar14 = uVar14 - 1 & uVar14 ^ uVar14;
      iVar9 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar14 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uVar10 = (uVar18 - iVar9) + 0x1f;
      if ((int)uVar4 < (int)uVar10) {
LAB_1405f63d1:
        uVar10 = uVar4;
      }
    }
    while( true ) {
      if (((uStack_128._4_4_ == uVar10) && (puStack_130 == puVar1)) && (local_140 == plVar21)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (!bVar7) break;
      puVar15 = (undefined8 *)((longlong)(int)uStack_128._4_4_ * 0x60 + *local_140);
      local_d8 = *puVar15;
      local_d0[0] = 0;
      local_d0[1] = 0;
      local_b0 = (uint *)0x0;
      local_a8 = 0;
      local_a0 = 0xffffffff;
      local_9c = 0;
      local_90 = 0;
      local_88 = 0;
      FUN_1405e22e0(local_d0,puVar15 + 1);
      if ((*(int *)(lVar11 + 0x38) < DAT_146854f48) &&
         (_Init_thread_header(&DAT_146854f48), DAT_146854f48 == -1)) {
        atexit((_func_5014 *)&LAB_143e3ffa0);
        _Init_thread_footer(&DAT_146854f48);
      }
      DAT_146854f40 = 0;
      if (DAT_146854f44 < 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146854f38,0);
      }
      uVar4 = (uint)local_a8;
      puStack_180 = local_c0;
      local_188 = 0x100000000;
      uStack_174 = 0;
      uStack_170 = 0;
      if ((uint)local_a8 != 0) {
        puVar19 = local_c0;
        if (local_b0 != (uint *)0x0) {
          puVar19 = local_b0;
        }
        uVar18 = *puVar19;
        uVar13 = uVar20;
        uVar16 = uVar20;
        while (uVar18 == 0) {
          iVar9 = (int)uVar13;
          uStack_170 = (int)uVar16 + 0x20;
          uVar16 = (ulonglong)uStack_170;
          uVar13 = (ulonglong)(iVar9 + 1U);
          local_188._4_4_ = (uint)((ulonglong)local_188 >> 0x20);
          local_188 = CONCAT44(local_188._4_4_,iVar9 + 1U);
          if ((int)(((uint)local_a8 - 1) + ((int)((uint)local_a8 - 1) >> 0x1f & 0x1fU)) >> 5 <=
              iVar9) {
            uStack_174 = (uint)local_a8;
            goto LAB_1405f654d;
          }
          uVar18 = puVar19[(longlong)iVar9 + 1];
        }
        uVar18 = -uVar18 & uVar18;
        iVar9 = 0x1f;
        if (uVar18 != 0) {
          for (; uVar18 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        local_188 = CONCAT44(uVar18,(uint)local_188);
        if (uVar18 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uStack_174 = (uStack_170 - iVar9) + 0x1f;
        if ((int)(uint)local_a8 < (int)uStack_174) {
          uStack_174 = (uint)local_a8;
        }
      }
LAB_1405f654d:
      uStack_150 = CONCAT44(uStack_174,0xffffffff);
      local_148 = CONCAT44(uStack_16c,uStack_170);
      local_168 = local_d0;
      uStack_174 = (uint)local_a8;
      uStack_100 = local_188;
      local_178 = -1 << ((byte)local_a8 & 0x1f);
      uStack_160 = local_188;
      uVar13 = uVar20;
      local_158 = puStack_180;
      local_108 = local_168;
      puStack_f8 = puStack_180;
      uStack_f0 = uStack_150;
      uStack_e8 = local_148;
      while( true ) {
        iVar9 = DAT_146854f28;
        if (((uStack_150._4_4_ == uVar4) && (local_158 == local_c0)) && (local_168 == local_d0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) break;
        puVar15 = (undefined8 *)((longlong)(int)uStack_150._4_4_ * 0x20 + *local_168);
        local_188 = *puVar15;
        puStack_180 = (uint *)CONCAT62(puStack_180._2_6_,*(undefined2 *)(puVar15 + 1));
        fVar22 = *(float *)((longlong)puVar15 + 0xc) - param_2;
        local_178 = *(uint *)(puVar15 + 2);
        uStack_174 = *(uint *)((longlong)puVar15 + 0x14);
        puStack_180 = (uint *)CONCAT44(fVar22,(int)puStack_180);
        if (((*(char *)((longlong)puVar15 + 9) != '\0') && (fVar22 <= 0.0)) ||
           (cVar8 = FWeakObjectPtr::IsValid(&local_178), cVar8 == '\0')) {
          iVar9 = DAT_146854f40;
          lVar11 = (longlong)DAT_146854f40;
          DAT_146854f40 = DAT_146854f40 + 1;
          if (DAT_146854f44 < DAT_146854f40) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146854f38,iVar9);
          }
          DAT_146854f38[lVar11] = local_188;
        }
        else {
          uVar13 = (ulonglong)((int)uVar13 + 1);
        }
        uStack_150 = CONCAT44(uStack_150._4_4_,(uint)uStack_150 & ~uStack_160._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_160);
      }
      if ((int)uVar13 == 0) {
        lVar11 = (longlong)DAT_146854f28;
        DAT_146854f28 = DAT_146854f28 + 1;
        if (DAT_146854f2c < DAT_146854f28) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146854f20,iVar9);
        }
        DAT_146854f20[lVar11] = local_d8;
      }
      uVar13 = (ulonglong)
               ((longlong)(DAT_146854f38 + DAT_146854f40) + (7 - (longlong)DAT_146854f38)) >> 3;
      if (DAT_146854f38 + DAT_146854f40 < DAT_146854f38) {
        uVar13 = uVar20;
      }
      puVar15 = DAT_146854f38;
      uVar16 = uVar20;
      if (uVar13 != 0) {
        do {
          TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
          ::Remove(local_d0,*puVar15);
          uVar16 = uVar16 + 1;
          puVar15 = puVar15 + 1;
        } while (uVar16 != uVar13);
      }
      local_88 = 0;
      if (local_90 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_d0);
      uStack_128 = CONCAT44(uStack_128._4_4_,(uint)uStack_128 & ~uStack_138._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_138);
      lVar11 = local_118;
    }
    uVar13 = (longlong)DAT_146854f28 & 0x1fffffffffffffff;
    if (DAT_146854f20 + DAT_146854f28 < DAT_146854f20) {
      uVar13 = uVar20;
    }
    puVar15 = DAT_146854f20;
    uVar16 = uVar20;
    if (uVar13 != 0) {
      do {
        TSet<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>,AkGameObjectIdKeyFuncs<TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::Remove(plVar21,*puVar15);
        uVar16 = uVar16 + 1;
        puVar15 = puVar15 + 1;
      } while (uVar16 != uVar13);
    }
    if ((*(int *)(local_118 + 0x38) < DAT_146854f60) &&
       (_Init_thread_header(&DAT_146854f60), DAT_146854f60 == -1)) {
      atexit((_func_5014 *)&LAB_143e3ffc0);
      _Init_thread_footer(&DAT_146854f60);
    }
    DAT_146854f58 = 0;
    uVar13 = uVar20;
    if ((DAT_146854f5c < 0) && (uVar13 = 0, DAT_146854f5c != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146854f50,0);
      uVar13 = (ulonglong)DAT_146854f58;
    }
    plVar21 = (longlong *)(local_110 + 0x2980);
    uVar4 = *(uint *)(local_110 + 0x29a8);
    puVar1 = (uint *)(local_110 + 0x2990);
    local_188._0_4_ = 0;
    local_188._4_4_ = 1;
    uStack_174 = 0;
    uStack_170 = 0;
    if (uVar4 != 0) {
      puVar19 = *(uint **)(local_110 + 0x29a0);
      if (*(uint **)(local_110 + 0x29a0) == (uint *)0x0) {
        puVar19 = puVar1;
      }
      uVar10 = *puVar19;
      uVar16 = uVar20;
      uVar17 = uVar20;
      while (uVar10 == 0) {
        iVar9 = (int)uVar16;
        uStack_170 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_170;
        local_188._0_4_ = iVar9 + 1;
        uVar16 = (ulonglong)(uint)local_188;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1405f68a3;
        uVar10 = puVar19[(longlong)iVar9 + 1];
      }
      local_188._4_4_ = -uVar10 & uVar10;
      iVar9 = 0x1f;
      if (local_188._4_4_ != 0) {
        for (; local_188._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (local_188._4_4_ == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_174 = (uStack_170 - iVar9) + 0x1f;
      if ((int)uVar4 < (int)uStack_174) {
LAB_1405f68a3:
        uStack_174 = uVar4;
      }
    }
    uVar10 = *(uint *)(local_110 + 0x29a8);
    uStack_128._0_4_ = 0xffffffff;
    uStack_128._4_4_ = uStack_174;
    uStack_120 = CONCAT44(uStack_16c,uStack_170);
    local_178 = -1 << ((byte)uVar10 & 0x1f);
    uStack_100._0_4_ = (uint)local_188;
    uStack_100._4_4_ = local_188._4_4_;
    uVar18 = uVar10 & 0xffffffe0;
    uStack_138 = CONCAT44(local_188._4_4_,(uint)local_188);
    puStack_180 = puVar1;
    uStack_174 = uVar10;
    local_140 = plVar21;
    puStack_130 = puVar1;
    local_108 = plVar21;
    puStack_f8 = puVar1;
    uStack_e8 = uStack_120;
    uStack_f0._0_4_ = (uint)uStack_128;
    uStack_f0._4_4_ = uStack_128._4_4_;
    if (uVar10 != uVar4) {
      puVar19 = *(uint **)(local_110 + 0x29a0);
      if (*(uint **)(local_110 + 0x29a0) == (uint *)0x0) {
        puVar19 = puVar1;
      }
      uVar14 = puVar19[(int)uVar10 >> 5] & local_178;
      iVar9 = (int)uVar10 >> 5;
      while (uVar14 == 0) {
        uVar18 = uVar18 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1405f6977;
        uVar14 = puVar19[(longlong)iVar9 + 1];
        local_178 = 0xffffffff;
        iVar9 = iVar9 + 1;
      }
      uVar14 = -uVar14 & uVar14;
      iVar9 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar14 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_174 = (uVar18 - iVar9) + 0x1f;
      uVar10 = uStack_174;
      if ((int)uVar4 < (int)uStack_174) {
LAB_1405f6977:
        uStack_174 = uVar4;
        uVar10 = uVar4;
      }
    }
    while( true ) {
      iVar9 = (int)uVar13;
      if (((uStack_128._4_4_ == uVar10) && (puStack_130 == puVar1)) && (local_140 == plVar21))
      break;
      puVar12 = (undefined4 *)((longlong)(int)uStack_128._4_4_ * 0x30 + *local_140);
      dVar6 = *(double *)(puVar12 + 2);
      uVar5 = *puVar12;
      if ((0.0 <= dVar6) && (dVar6 < (double)fVar2)) {
        DAT_146854f58 = iVar9 + 1;
        if (DAT_146854f5c < (int)DAT_146854f58) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146854f50,uVar13);
        }
        DAT_146854f50[iVar9] = uVar5;
      }
      uStack_128._0_4_ = (uint)uStack_128 & ~uStack_138._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_138);
      uVar13 = (ulonglong)DAT_146854f58;
    }
    uVar13 = (ulonglong)((longlong)(DAT_146854f50 + iVar9) + (3 - (longlong)DAT_146854f50)) >> 2;
    if (DAT_146854f50 + iVar9 < DAT_146854f50) {
      uVar13 = uVar20;
    }
    puVar12 = DAT_146854f50;
    if (uVar13 != 0) {
      do {
        TSet<TTuple<int,Audio::FSourceDecodeInit>,TDefaultMapHashableKeyFuncs<int,Audio::FSourceDecodeInit,0>,FDefaultSetAllocator>
        ::Remove(plVar21,*puVar12);
        uVar20 = uVar20 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar20 != uVar13);
    }
  }
  return;
}



// FUNCTION 1405f6b90 FUN_1405f6b90 body=3989 status=ok
// SIG undefined FUN_1405f6b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1405f6b90(longlong param_1,float param_2)

{
  double dVar1;
  byte bVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong **pplVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  int *piVar20;
  undefined1 *puVar21;
  int *piVar22;
  char *pcVar23;
  byte *pbVar24;
  char *pcVar25;
  byte *pbVar26;
  longlong *plVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  ulonglong uVar31;
  uint uVar32;
  byte *pbVar33;
  char *pcVar34;
  float fVar35;
  double dVar36;
  undefined1 auStack_238 [32];
  longlong **local_218;
  char local_208;
  longlong local_200;
  longlong *local_1f8;
  undefined4 local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0 [256];
  undefined1 *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_200 = param_1;
  lVar12 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
  uVar13 = 0;
  if ((lVar12 != 0) &&
     (((local_1d0 = lVar12, uVar13 = FUN_14254a160(lVar12), (char)uVar13 == '\0' && (param_2 != 0.0)
       ) || (*(char *)(param_1 + 0x58) != '\0')))) {
    lVar14 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
    dVar1 = 0.0;
    if (lVar14 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      lVar14 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
      plVar5 = (longlong *)(double)*(float *)(lVar14 + 0x79c);
    }
    lVar14 = FWeakObjectPtr::Get(&DAT_14620d440);
    if (lVar14 == 0) {
      local_1c0 = (longlong *)0x0;
    }
    else {
      uVar15 = FUN_140600680();
      local_1c0 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar14,uVar15);
    }
    if (*(char *)(param_1 + 0x58) != '\0') {
      fVar35 = *(float *)(lVar12 + 0x798);
      dVar1 = *(double *)(param_1 + 0x60);
      *(double *)(param_1 + 0x60) = (double)fVar35;
      dVar1 = (double)fVar35 - dVar1;
      lVar12 = *(longlong *)(param_1 + 8);
      lVar14 = (longlong)*(int *)(param_1 + 0x10) * 0x2c0 + lVar12;
      for (; lVar12 != lVar14; lVar12 = lVar12 + 0x2c0) {
        if ((*(char *)(lVar12 + 0x280) != '\0') && (0.0 < *(float *)(lVar12 + 0x278))) {
          *(float *)(lVar12 + 0x278) = (float)((double)*(float *)(lVar12 + 0x278) - dVar1);
        }
      }
    }
    local_1f8 = plVar5;
    FUN_1405e0920(param_1 + 0x18,&local_1f8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146855178) &&
       (_Init_thread_header(&DAT_146855178), DAT_146855178 == -1)) {
      atexit((_func_5014 *)&LAB_143e40040);
      _Init_thread_footer(&DAT_146855178);
    }
    DAT_146855170 = 0;
    if ((DAT_146855174 < 0) && (DAT_146855174 != 0)) {
      FUN_1405f0d80(&DAT_146854f68,0);
    }
    lVar12 = *(longlong *)(param_1 + 8);
    local_1e8 = (longlong *)(param_1 + 8);
    lVar14 = (longlong)*(int *)(param_1 + 0x10) * 0x2c0 + lVar12;
    iVar11 = DAT_146855170;
    for (; lVar12 != lVar14; lVar12 = lVar12 + 0x2c0) {
      DAT_146855170 = iVar11 + 1;
      if (DAT_146855174 < DAT_146855170) {
        TArray<FChildZOrder,TInlineAllocator<64,FDefaultAllocator>_>::ResizeGrow
                  (&DAT_146854f68,iVar11);
      }
      plVar19 = DAT_146855168;
      if (DAT_146855168 == (longlong *)0x0) {
        plVar19 = (longlong *)&DAT_146854f68;
      }
      plVar19[iVar11] = lVar12;
      iVar11 = DAT_146855170;
    }
    plVar19 = DAT_146855168;
    if (DAT_146855168 == (longlong *)0x0) {
      plVar19 = (longlong *)&DAT_146854f68;
    }
    DAT_146855170 = iVar11;
    AlgoImpl::
    IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
              (plVar19,(longlong)iVar11,local_208,&DAT_146854ec0);
    pcVar25 = *(char **)(param_1 + 8);
    pcVar34 = pcVar25 + (longlong)*(int *)(param_1 + 0x10) * 0x2c0;
    for (; pcVar25 != pcVar34; pcVar25 = pcVar25 + 0x2c0) {
      if ((*pcVar25 != '\x02') && (*(longlong *)(pcVar25 + 0x228) == 0)) {
        *pcVar25 = '\x02';
        lVar12 = *(longlong *)(*(longlong *)(pcVar25 + 0x2b8) + 0x40);
        lVar14 = (longlong)*(int *)(*(longlong *)(pcVar25 + 0x2b8) + 0x48) * 0x50 + lVar12;
        if (lVar12 != lVar14) {
          piVar22 = (int *)(lVar12 + 0x48);
          do {
            piVar3 = *(int **)(piVar22 + -2);
            iVar11 = *piVar22;
            if (piVar3 != piVar3 + iVar11) {
              piVar20 = piVar3;
              do {
                if (*piVar20 == *(int *)(pcVar25 + 4)) {
                  iVar17 = (int)((longlong)piVar20 - (longlong)piVar3 >> 2);
                  if (iVar17 != -1) {
                    iVar18 = (iVar11 - iVar17) + -1;
                    if (0 < iVar18) {
                      iVar18 = 1;
                    }
                    if (iVar18 != 0) {
                      _guard_xfg_dispatch_icall_nop
                                (piVar3 + iVar17,piVar3 + (iVar11 - iVar18),(longlong)iVar18 << 2);
                      iVar11 = *piVar22;
                    }
                    *piVar22 = iVar11 + -1;
                  }
                  break;
                }
                piVar20 = piVar20 + 1;
              } while (piVar20 != piVar3 + iVar11);
            }
            lVar12 = lVar12 + 0x50;
            piVar22 = piVar22 + 0x14;
          } while (lVar12 != lVar14);
        }
      }
    }
    local_1f8 = DAT_146855168;
    if (DAT_146855168 == (longlong *)0x0) {
      local_1f8 = (longlong *)&DAT_146854f68;
    }
    plVar19 = local_1f8 + DAT_146855170;
    local_1e0 = plVar19;
    if (local_1f8 != plVar19) {
      do {
        pcVar25 = (char *)*local_1f8;
        if (*pcVar25 == '\x01') {
          if ((*(int *)(pcVar25 + 0x24c) == 0) ||
             (cVar8 = FUN_14044af00(pcVar25 + 0x250,0), cVar8 == '\0')) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            plVar27 = DAT_146855168;
            if (DAT_146855168 == (longlong *)0x0) {
              plVar27 = (longlong *)&DAT_146854f68;
            }
            plVar4 = plVar27 + DAT_146855170;
            for (; plVar27 != plVar4; plVar27 = plVar27 + 1) {
              pcVar34 = (char *)*plVar27;
              if ((*(int *)(pcVar34 + 0x24c) == *(int *)(pcVar25 + 0x24c)) &&
                 (cVar8 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(pcVar34 + 0x250),
                 cVar8 != '\0')) {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
              if (((bVar6) && (*(int *)(pcVar34 + 4) < *(int *)(pcVar25 + 4))) &&
                 (*pcVar34 != '\x04')) goto LAB_1405f7402;
            }
          }
          pcVar25[0x288] = '\0';
          pcVar25[0x289] = '\0';
          pcVar25[0x28a] = '\0';
          pcVar25[0x28b] = '\0';
          pcVar25[0x28c] = '\0';
          pcVar25[0x28d] = '\0';
          pcVar25[0x28e] = '\0';
          pcVar25[0x28f] = '\0';
          local_a0 = (undefined1 *)0x0;
          local_98 = 0;
          lVar12 = *(longlong *)(*(longlong *)(pcVar25 + 0x230) + 0xb0);
          if (lVar12 == 0) {
            plVar19 = (longlong *)FUN_140600120();
            lVar12 = plVar19[0x1f];
            if (lVar12 == 0) {
              (**(code **)(*plVar19 + 0x368))(plVar19);
              lVar12 = plVar19[0x1f];
            }
          }
          lVar14 = local_1d0;
          cVar9 = '\x01';
          plVar19 = *(longlong **)(local_1d0 + 400);
          cVar8 = (double)plVar5 -
                  ((double)*(float *)(pcVar25 + 0x278) + *(double *)(pcVar25 + 0x260)) <=
                  (double)*(float *)(lVar12 + 0x3c);
          bVar6 = false;
          local_208 = cVar8;
          if (plVar19 != (longlong *)0x0) {
            lVar12 = FUN_142e4e4a0();
            if ((*(int *)(plVar19[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar19[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
                lVar12 + 0x88)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              cVar9 = (**(code **)(*plVar19 + 0x3c8))
                                (plVar19,lVar14,*(undefined8 *)(pcVar25 + 0x230));
            }
          }
          if (*(char *)(local_200 + 0x59) != '\0') {
            lVar12 = *(longlong *)(*(longlong *)(pcVar25 + 0x230) + 0xb0);
            if (lVar12 == 0) {
              plVar19 = (longlong *)FUN_140600120();
              lVar12 = plVar19[0x1f];
              if (lVar12 == 0) {
                (**(code **)(*plVar19 + 0x368))(plVar19);
                lVar12 = plVar19[0x1f];
              }
            }
            if (*(char *)(lVar12 + 0x47) == '\0') {
              cVar9 = '\0';
            }
          }
          plVar19 = DAT_146855168;
          if (DAT_146855168 == (longlong *)0x0) {
            plVar19 = (longlong *)&DAT_146854f68;
          }
          plVar27 = plVar19 + DAT_146855170;
          for (; plVar19 != plVar27; plVar19 = plVar19 + 1) {
            pcVar34 = (char *)*plVar19;
            if (pcVar34 == pcVar25) {
              bVar6 = true;
              if (cVar8 == '\0') break;
            }
            else if (((!bVar6) || ((byte)(*pcVar34 - 3U) < 2)) &&
                    ((cVar10 = FUN_1405e6470(pcVar25), uVar13 = local_98, cVar10 != '\0' &&
                     (*(int *)(pcVar25 + 0x27c) < *(int *)(pcVar34 + 4))))) {
              lVar12 = (longlong)(int)local_98;
              if ((byte)(*pcVar34 - 3U) < 2) {
                cVar9 = '\0';
              }
              iVar11 = (int)local_98 + 1;
              local_98 = CONCAT44(local_98._4_4_,iVar11);
              if (local_98._4_4_ < iVar11) {
                TArray<FInventoryItem_*,TInlineAllocator<32,FDefaultAllocator>_>::ResizeGrow
                          (local_1a0,uVar13 & 0xffffffff);
              }
              puVar21 = local_1a0;
              if (local_a0 != (undefined1 *)0x0) {
                puVar21 = local_a0;
              }
              *(char **)(puVar21 + lVar12 * 8) = pcVar34;
              cVar8 = local_208;
            }
          }
          fVar35 = (float)FUN_1405e9a80(pcVar25);
          plVar19 = (longlong *)((double)*(float *)(pcVar25 + 0x278) + *(double *)(pcVar25 + 0x260))
          ;
          if ((double)*(float *)(pcVar25 + 0x278) + *(double *)(pcVar25 + 0x260) <= (double)plVar5)
          {
            plVar19 = plVar5;
          }
          dVar36 = (double)FUN_1405e9ba0(local_1a0,(double)fVar35,plVar19);
          *(double *)(pcVar25 + 0x288) = dVar36;
          *(double *)(pcVar25 + 0x298) = (double)fVar35 + dVar36;
          if (cVar9 != '\0') {
            if (local_1c0 != (longlong *)0x0) {
              local_218 = (longlong **)CONCAT44(local_218._4_4_,*(undefined4 *)(pcVar25 + 0x248));
              cVar9 = (**(code **)(*local_1c0 + 0x10))
                                (local_1c0,*(undefined8 *)(pcVar25 + 0x228),
                                 *(undefined8 *)(pcVar25 + 0x230),*(undefined8 *)(pcVar25 + 0x240));
            }
            if ((cVar9 != '\0') &&
               (*(double *)(pcVar25 + 0x288) - (double)plVar5 < 9.99999993922529e-09)) {
              lVar12 = *(longlong *)(pcVar25 + 0x228);
              if (*(longlong *)(pcVar25 + 0x230) == 0) {
LAB_1405f7361:
                *pcVar25 = '\x02';
              }
              else {
                lVar14 = *(longlong *)(lVar12 + 0x118);
                if (lVar14 != 0) {
                  UUserObjectListEntry::GetPrivateStaticClass();
                  lVar14 = UObjectBaseUtility::GetInterfaceAddress(lVar14);
                  if ((lVar14 != 0) &&
                     (cVar8 = FUN_140601b50(*(undefined8 *)(lVar12 + 0x118)), cVar8 == '\0'))
                  goto LAB_1405f7361;
                }
                FUN_1405f8b20(pcVar25);
                if (*pcVar25 == '\x03') {
                  *(longlong **)(pcVar25 + 0x290) = plVar5;
                  fVar35 = (float)FUN_1405e9a80(pcVar25);
                  *(double *)(pcVar25 + 0x298) = (double)fVar35 + (double)plVar5;
                }
              }
            }
          }
          if (pcVar25[0x270] == '\0') {
            lVar12 = *(longlong *)(*(longlong *)(pcVar25 + 0x230) + 0xb0);
            if (lVar12 == 0) {
              plVar19 = (longlong *)FUN_140600120();
              lVar12 = plVar19[0x1f];
              if (lVar12 == 0) {
                (**(code **)(*plVar19 + 0x368))(plVar19);
                lVar12 = plVar19[0x1f];
              }
            }
            fVar35 = *(float *)(lVar12 + 0x40);
          }
          else {
            fVar35 = *(float *)(pcVar25 + 0x274);
          }
          if (((double)fVar35 <
               (double)plVar5 - ((double)*(float *)(pcVar25 + 0x278) + *(double *)(pcVar25 + 0x260))
              ) && (*pcVar25 == '\x01')) {
            *pcVar25 = '\x02';
          }
          plVar19 = local_1e0;
          if (local_a0 != (undefined1 *)0x0) {
            FMemory::Free();
            plVar19 = local_1e0;
          }
        }
LAB_1405f7402:
        local_1f8 = local_1f8 + 1;
        param_1 = local_200;
      } while (local_1f8 != plVar19);
    }
    pcVar25 = (char *)0x0;
    lVar14 = *(longlong *)(param_1 + 0x28);
    plVar19 = (longlong *)(param_1 + 0x28);
    uVar13 = (ulonglong)*(int *)(param_1 + 0x30);
    lVar12 = lVar14 + uVar13 * 0x28;
    if (lVar14 != lVar12) {
      do {
        *(float *)(lVar14 + 0x20) = *(float *)(lVar14 + 0x20) - param_2;
        lVar14 = lVar14 + 0x28;
      } while (lVar14 != lVar12);
      uVar13 = (ulonglong)*(uint *)(param_1 + 0x30);
    }
    pcVar34 = pcVar25;
    pcVar28 = pcVar25;
    if (0 < (int)uVar13) {
      do {
        lVar12 = *plVar19;
        if (((double)plVar5 - *(double *)(pcVar28 + lVar12 + 0x18) < 1.0) ||
           (0.0 < *(float *)(pcVar28 + lVar12 + 0x20))) {
          uVar13 = uVar13 & 0xffffffff;
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        iVar11 = (int)uVar13;
        iVar17 = (int)pcVar34;
        if (bVar6) {
          iVar18 = (iVar11 - iVar17) + -1;
          if (0 < iVar18) {
            iVar18 = 1;
          }
          if (iVar18 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar12 + (longlong)iVar17 * 0x28),
                       (void *)(lVar12 + (longlong)(iVar11 - iVar18) * 0x28),(longlong)iVar18 * 0x28
                      );
            iVar11 = *(int *)(param_1 + 0x30);
          }
          uVar13 = (ulonglong)(iVar11 - 1U);
          *(uint *)(param_1 + 0x30) = iVar11 - 1U;
        }
        else {
          pcVar34 = (char *)(ulonglong)(iVar17 + 1);
          pcVar28 = pcVar28 + 0x28;
        }
      } while ((int)pcVar34 < (int)uVar13);
    }
    iVar11 = *(int *)(local_200 + 0x10);
    lVar12 = local_200;
    plVar27 = local_1e8;
    pcVar34 = pcVar25;
    pcVar28 = pcVar25;
    if (0 < iVar11) {
      do {
        pcVar23 = pcVar28 + *plVar27;
        if (*pcVar23 == '\x03') {
          if ((*(char *)(lVar12 + 0x58) == '\0') || (dVar36 = dVar1, pcVar23[0x280] == '\0')) {
            dVar36 = (double)param_2;
          }
          if (*(int *)(pcVar23 + 8) == 0) {
            if (pcVar23[0x2a0] != '\0') {
              if ((*(longlong *)(*(longlong *)(pcVar23 + 0x2b8) + 0x68) != 0) &&
                 (*(longlong *)(*(longlong *)(pcVar23 + 0x228) + 0x118) != 0)) {
                lVar12 = *(longlong *)
                          (*(longlong *)(*(longlong *)(pcVar23 + 0x228) + 0x118) + 0x168);
                if (lVar12 == 0) {
                  local_1b8 = DAT_1468b5d98;
                  pplVar16 = &local_1c0;
                  local_1c0 = _DAT_1468b5d90;
                }
                else {
                  pplVar16 = &local_1f8;
                  local_1f0 = *(undefined4 *)(lVar12 + 0x228);
                  local_1f8 = *(longlong **)(lVar12 + 0x220);
                }
                local_1b0 = *pplVar16;
                local_1a8 = *(undefined4 *)(pplVar16 + 1);
                local_1e0 = *(longlong **)(pcVar23 + 0x24c);
                local_1d8 = *(undefined4 *)(pcVar23 + 0x254);
                local_218 = &local_1b0;
                FUN_1405f9350(*(longlong *)(*(longlong *)(pcVar23 + 0x2b8) + 0x68),&local_1e0,1);
              }
              if (pcVar23[0x2ae] == '\0') {
                lVar12 = *(longlong *)(pcVar23 + 0x228);
                iVar11 = *(int *)(pcVar23 + 4);
                if (*(int *)(lVar12 + 0x1b0) == iVar11) {
                  lVar14 = *(longlong *)(lVar12 + 0x1b8);
                  if ((lVar14 == 0) || (*(char *)(lVar14 + 0x94) == '\0')) {
LAB_1405f76dc:
                    if (*(int *)(lVar12 + 0x1b0) != iVar11) goto LAB_1405f76e4;
                    goto LAB_1405f76f0;
                  }
                  if (*(longlong *)(lVar14 + 0x60) == 0) {
                    if ((*(longlong *)(lVar14 + 0x68) == 0) ||
                       (fVar35 = *(float *)(lVar14 + 0x70), fVar35 <= 0.0)) {
                      lVar14 = FText::ToString(lVar14 + 0x40);
                      iVar17 = *(int *)(lVar14 + 8) + -1;
                      if (*(int *)(lVar14 + 8) == 0) {
                        iVar17 = 0;
                      }
                      lVar14 = *(longlong *)(lVar12 + 0x1b8);
                      fVar35 = (float)iVar17 * 0.08;
                    }
                  }
                  else {
                    fVar35 = *(float *)(*(longlong *)(lVar14 + 0x60) + 0x4c);
                  }
                  if (*(float *)(lVar12 + 0x200) <= fVar35 * *(float *)(lVar14 + 0x98))
                  goto LAB_1405f76dc;
                }
                else {
LAB_1405f76e4:
                  if (*(int *)(lVar12 + 0x210) == iVar11) {
LAB_1405f76f0:
                    bVar6 = true;
                    plVar27 = local_1e8;
                    goto LAB_1405f76f7;
                  }
                }
                bVar6 = false;
                plVar27 = local_1e8;
              }
              else {
                *(float *)(pcVar23 + 0x2b0) = (float)dVar36 + *(float *)(pcVar23 + 0x2b0);
                fVar35 = (float)FUN_1405e9a80(pcVar23);
                bVar6 = *(float *)(pcVar23 + 0x2b0) <= fVar35 &&
                        fVar35 != *(float *)(pcVar23 + 0x2b0);
              }
LAB_1405f76f7:
              lVar12 = local_200;
              if (bVar6) goto LAB_1405f7708;
            }
            FUN_1405e80a0(pcVar23);
            lVar12 = local_200;
          }
LAB_1405f7708:
          pcVar23 = (char *)*plVar27;
          if (pcVar28[(longlong)pcVar23] == '\x04') {
            local_1d0 = CONCAT44(*(undefined4 *)(pcVar28 + 0x250 + (longlong)pcVar23),
                                 *(undefined4 *)(pcVar28 + 0x24c + (longlong)pcVar23));
            local_1c8 = *(undefined4 *)(pcVar28 + 0x254 + (longlong)pcVar23);
            pcVar29 = pcVar23 + (longlong)*(int *)(lVar12 + 0x10) * 0x2c0;
            for (; pcVar23 != pcVar29; pcVar23 = pcVar23 + 0x2c0) {
              if (*pcVar23 == '\x01') {
                if ((*(int *)(pcVar23 + 0x24c) == (int)local_1d0) &&
                   (cVar8 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                      (pcVar23 + 0x250), cVar8 != '\0')) {
                  bVar6 = true;
                }
                else {
                  bVar6 = false;
                }
                if (bVar6) {
                  *(longlong **)(pcVar23 + 0x260) = plVar5;
                }
              }
              lVar12 = local_200;
            }
          }
        }
        iVar11 = *(int *)(lVar12 + 0x10);
        uVar32 = (int)pcVar34 + 1;
        pcVar34 = (char *)(ulonglong)uVar32;
        pcVar28 = pcVar28 + 0x2c0;
      } while ((int)uVar32 < iVar11);
    }
    pcVar34 = pcVar25;
    pcVar28 = pcVar25;
    if (0 < iVar11) {
      do {
        lVar14 = *plVar27;
        if (pcVar34[lVar14] == '\x04') {
          fVar35 = *(float *)(pcVar34 + lVar14 + 0x2a4);
          *(float *)(pcVar34 + lVar14 + 0x2a8) = *(float *)(pcVar34 + lVar14 + 0x2a8) - param_2;
          *(float *)(pcVar34 + lVar14 + 0x2a4) = fVar35 - param_2;
          if (0.0 < fVar35 - param_2) goto LAB_1405f7825;
          pcVar34[lVar14] = '\x06';
LAB_1405f782f:
          if (pcVar34[lVar14 + 0x2ac] == '\0') {
            pcVar23 = (char *)*plVar27;
            pcVar30 = pcVar23 + (longlong)(int)plVar27[1] * 0x2c0;
            pcVar29 = pcVar25;
            if (pcVar23 != pcVar30) {
              do {
                if ((*(int *)(pcVar23 + 600) == *(int *)(pcVar34 + lVar14 + 600)) &&
                   (((*(int *)(pcVar23 + 4) != *(int *)(pcVar34 + lVar14 + 4) &&
                     (pcVar23[0x2ac] == '\0')) || ((*pcVar23 - 1U & 0xfd) == 0)))) {
                  bVar6 = true;
                }
                else {
                  bVar6 = false;
                }
                pcVar29 = pcVar23;
              } while ((!bVar6) &&
                      (pcVar23 = pcVar23 + 0x2c0, pcVar29 = pcVar25, pcVar23 != pcVar30));
            }
            pcVar34[lVar14 + 0x2ac] = '\x01';
            lVar12 = local_200;
            if ((pcVar29 == (char *)0x0) &&
               ((*(longlong *)(pcVar34 + lVar14 + 0x2b8) != 0 &&
                (plVar4 = *(longlong **)(*(longlong *)(pcVar34 + lVar14 + 0x2b8) + 0x68),
                plVar4 != (longlong *)0x0)))) {
              (**(code **)(*plVar4 + 0x280))();
              lVar12 = local_200;
            }
          }
        }
        else {
LAB_1405f7825:
          if ((pcVar34[lVar14] - 1U & 0xfd) != 0) goto LAB_1405f782f;
        }
        uVar32 = (int)pcVar28 + 1;
        pcVar34 = pcVar34 + 0x2c0;
        pcVar28 = (char *)(ulonglong)uVar32;
      } while ((int)uVar32 < *(int *)(lVar12 + 0x10));
    }
    uVar13 = (ulonglong)(int)plVar27[1];
    pbVar24 = (byte *)*plVar27;
    pbVar33 = pbVar24 + uVar13 * 0x2c0;
    uVar31 = uVar13;
    if (pbVar24 != pbVar33) {
      pbVar26 = pbVar24 + 0x250;
      do {
        bVar2 = *pbVar24;
        uVar13 = (ulonglong)bVar2;
        if (bVar2 == 6) {
LAB_1405f7927:
          if (bVar2 != 2) {
            lVar12 = (longlong)*(int *)(param_1 + 0x30);
            iVar11 = *(int *)(param_1 + 0x30) + 1;
            *(int *)(param_1 + 0x30) = iVar11;
            if (*(int *)(param_1 + 0x34) < iVar11) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar19);
            }
            lVar14 = *plVar19;
            *(undefined8 *)(lVar14 + lVar12 * 0x28) = 0;
            *(undefined8 *)(lVar14 + 8 + lVar12 * 0x28) = 0;
            *(undefined8 *)(lVar14 + 0x10 + lVar12 * 0x28) = 0;
            *(undefined8 *)(lVar14 + 0x18 + lVar12 * 0x28) = 0;
            *(undefined8 *)(lVar14 + 0x20 + lVar12 * 0x28) = 0;
            *(undefined4 *)(*plVar19 + -0x28 + (longlong)*(int *)(param_1 + 0x30) * 0x28) =
                 *(undefined4 *)(pbVar26 + -0x24c);
            lVar14 = (longlong)*(int *)(param_1 + 0x30);
            lVar12 = *plVar19;
            *(undefined4 *)(lVar12 + -0x24 + lVar14 * 0x28) = *(undefined4 *)(pbVar26 + -4);
            *(undefined4 *)(lVar12 + -0x20 + lVar14 * 0x28) = *(undefined4 *)pbVar26;
            *(undefined4 *)(lVar12 + -0x1c + lVar14 * 0x28) = *(undefined4 *)(pbVar26 + 4);
            *(byte *)(*plVar19 + -0x18 + (longlong)*(int *)(param_1 + 0x30) * 0x28) = *pbVar24;
            *(longlong **)(*plVar19 + -0x10 + (longlong)*(int *)(param_1 + 0x30) * 0x28) = plVar5;
            uVar13 = (ulonglong)*(uint *)(pbVar26 + 0x58);
            *(uint *)(*plVar19 + -8 + (longlong)*(int *)(param_1 + 0x30) * 0x28) =
                 *(uint *)(pbVar26 + 0x58);
          }
LAB_1405f79d5:
          *pbVar24 = 2;
        }
        else {
          if (bVar2 == 2) goto LAB_1405f79d5;
          if (bVar2 == 5) goto LAB_1405f7927;
        }
        pbVar24 = pbVar24 + 0x2c0;
        pbVar26 = pbVar26 + 0x2c0;
      } while (pbVar24 != pbVar33);
      uVar31 = (ulonglong)*(uint *)(local_1e8 + 1);
      plVar27 = local_1e8;
    }
    pcVar34 = pcVar25;
    if (0 < (int)uVar31) {
      do {
        iVar11 = (int)uVar31;
        iVar17 = (int)pcVar34;
        if (pcVar25[*plVar27] == '\x02') {
          if (*(longlong *)((longlong)iVar17 * 0x2c0 + 0x218 + *plVar27) != 0) {
            FMemory::Free();
            iVar11 = (int)plVar27[1];
          }
          iVar18 = (iVar11 - iVar17) + -1;
          if (0 < iVar18) {
            iVar18 = 1;
          }
          if (iVar18 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar27 + (longlong)iVar17 * 0x2c0),
                       (void *)((longlong)(iVar11 - iVar18) * 0x2c0 + *plVar27),
                       (longlong)iVar18 * 0x2c0);
            iVar11 = (int)plVar27[1];
          }
          *(int *)(plVar27 + 1) = iVar11 + -1;
          uVar13 = FUN_1405f0c60(plVar27);
        }
        else {
          pcVar34 = (char *)(ulonglong)(iVar17 + 1);
          pcVar25 = pcVar25 + 0x2c0;
        }
        uVar31 = (ulonglong)*(uint *)(plVar27 + 1);
      } while ((int)pcVar34 < (int)*(uint *)(plVar27 + 1));
    }
  }
  return uVar13;
}



// FUNCTION 1405f7b30 FUN_1405f7b30 body=452 status=ok
// SIG undefined FUN_1405f7b30(void)

void FUN_1405f7b30(longlong *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_142357eb0();
  if (param_1[0x37] != 0) {
    if (*(char *)((longlong)param_1 + 0x204) == '\0') {
      cVar1 = FUN_14059ee00(param_1 + 0x38);
      if (cVar1 == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x204) = 1;
        FUN_1405f1ba0(param_1);
        FUN_1405f85c0(param_1,0xbf800000,0);
      }
    }
    if (*(char *)((longlong)param_1 + 0x204) != '\0') {
      *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + param_2;
      FUN_1405f85c0(param_1);
    }
    lVar3 = param_1[0x37];
    if ((*(longlong *)(lVar3 + 0x60) == 0) && (*(longlong *)(lVar3 + 0x68) == 0)) {
      lVar3 = FText::ToString(lVar3 + 0x40);
      iVar2 = *(int *)(lVar3 + 8) + -1;
      if (*(int *)(lVar3 + 8) == 0) {
        iVar2 = 0;
      }
      if ((float)iVar2 * 0.08 < *(float *)(param_1 + 0x40)) {
        FUN_1405f4800(param_1,1);
      }
    }
    else {
      cVar1 = FUN_14059ee90(param_1 + 0x38);
      if (cVar1 == '\0') {
        FUN_1405f4800(param_1,1);
      }
      else {
        FUN_1405f9b30(param_1);
      }
    }
    iVar2 = FUN_142340f30(param_1);
    if ((iVar2 != 3) && ((int)param_1[0x56] != 0)) {
      (**(code **)(*param_1 + 0x260))(param_1);
      *(int *)(param_1 + 0x58) = (int)param_1[0x40];
    }
  }
  if (param_1[0x37] == 0) {
    if (param_1[0x43] != 0) {
      FUN_1405f2fd0(param_1);
      if (param_1[0x37] != 0) goto LAB_1405f7c9f;
    }
    FUN_14288e3d0(param_1 + 6,0);
  }
LAB_1405f7c9f:
  if (((char)param_1[0x52] != '\0') && (param_1[0x37] == 0)) {
    iVar2 = FUN_142340f30(param_1);
    if (iVar2 != 3) {
      *(float *)((longlong)param_1 + 0x294) = param_2 + *(float *)((longlong)param_1 + 0x294);
      if (1.0 < param_2) {
        (**(code **)(*param_1 + 0x3b0))(param_1,0);
      }
    }
  }
  return;
}



// FUNCTION 1405f7d00 FUN_1405f7d00 body=824 status=ok
// SIG undefined FUN_1405f7d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1405f7d00(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4,int *param_5,
             undefined8 param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 local_res18 [2];
  undefined1 auStack_118 [32];
  code **local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  int local_e0;
  int iStack_dc;
  int local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined4 *puStack_a8;
  undefined1 *local_a0;
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_b8 = param_7;
  *param_5 = *param_4;
  param_5[1] = param_4[1];
  param_5[2] = param_4[2];
  local_res18[0] = param_3;
  FUN_1405eada0(param_2,param_1);
  if (param_1 == 0) {
LAB_1405f7da6:
    lVar5 = 0;
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d3a0,&local_e8,param_1);
    if (((int)local_e8 == -1) ||
       (lVar5 = DAT_14620d3a0 + (longlong)(int)local_e8 * 0x18, lVar5 == 0)) goto LAB_1405f7da6;
    lVar5 = *(longlong *)(lVar5 + 8);
  }
  if (param_1 == 0) {
LAB_1405f7df2:
    lVar6 = 0;
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d350,&local_e8,param_1);
    if (((int)local_e8 == -1) ||
       (lVar6 = DAT_14620d350 + (longlong)(int)local_e8 * 0x18, lVar6 == 0)) goto LAB_1405f7df2;
    lVar6 = *(longlong *)(lVar6 + 8);
  }
  if (param_1 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d3f0,&local_e8,param_1);
    if (((int)local_e8 != -1) &&
       (lVar7 = DAT_14620d3f0 + (longlong)(int)local_e8 * 0x18, lVar7 != 0)) {
      lVar7 = *(longlong *)(lVar7 + 8);
      goto LAB_1405f7e41;
    }
  }
  lVar7 = 0;
LAB_1405f7e41:
  if (((lVar5 != 0) && (lVar6 != 0)) && (lVar7 != 0)) {
    local_e0 = *param_4;
    local_e8 = 0;
    local_c0 = 0;
    iStack_dc = param_4[1];
    local_d8 = param_4[2];
    if (local_e0 == 0) {
      DAT_14620d470 = DAT_14620d470 + -1;
      local_e0 = DAT_14620d470;
    }
    FWeakObjectPtr::operator=(&iStack_dc,param_1);
    *(int *)(lVar7 + 0x2928) = local_e0;
    *(int *)(lVar7 + 0x292c) = iStack_dc;
    *(int *)(lVar7 + 0x2930) = local_d8;
    local_f0 = &local_c0;
    local_f8 = (code **)&local_e8;
    *(undefined1 *)(lVar7 + 0x2934) = 0;
    local_d0 = 0;
    local_c8 = (uint)local_c8._2_2_ << 0x10;
    cVar2 = FUN_1405e7e60(lVar5,param_2,lVar5 + 0x88,&local_d0);
    *(undefined4 *)(lVar7 + 0x2928) = 0;
    *(undefined1 *)(lVar7 + 0x2934) = 0;
    if (cVar2 != '\0') {
      puStack_a8 = local_res18;
      local_a0 = (undefined1 *)&param_6;
      local_68 = (longlong *)0x0;
      local_58 = 0;
      local_b0 = param_2;
      puVar8 = (undefined8 *)FUN_140438ef0(0x20,local_88);
      puVar1 = local_b8;
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[1] = local_b0;
        puVar8[2] = puStack_a8;
        *puVar8 = &PTR_FUN_143f4d0b0;
        puVar8[3] = local_a0;
      }
      local_d0 = CONCAT44(iStack_dc,local_e0);
      local_98[0] = FUN_1405e4dc0;
      local_c8 = local_d8;
      local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,*local_b8);
      local_f8 = local_98;
      iVar3 = FUN_1405e6810(lVar6,local_c0,local_e8,&local_d0);
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
      if (iVar3 != 0) {
        *param_5 = local_e0;
        param_5[1] = iStack_dc;
        param_5[2] = local_d8;
        uVar4 = FUN_1405eabe0(lVar6,iVar3);
        *puVar1 = uVar4;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1405f8040 FUN_1405f8040 body=424 status=ok
// SIG undefined FUN_1405f8040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_1405f8040(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined4 param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined1 *_Dst;
  undefined1 *_Src;
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_318 [32];
  undefined4 *local_2f8;
  undefined4 *local_2f0;
  undefined4 *local_2e8;
  code **local_2e0;
  undefined4 local_2d8 [2];
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  code *local_2b8 [2];
  longlong local_2a8 [4];
  longlong *local_288;
  int local_278;
  undefined1 local_268 [8];
  undefined1 local_260 [512];
  undefined1 *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  local_58 = *(int *)(param_4 + 0x210);
  lVar1 = (longlong)local_58;
  local_268[0] = *param_4;
  _Src = *(undefined1 **)(param_4 + 0x208);
  local_2d8[0] = 0;
  local_60 = (undefined1 *)0x0;
  if (local_58 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1405f06b0(local_260,local_58,0);
    if (_Src == (undefined1 *)0x0) {
      _Src = param_4 + 8;
    }
    _Dst = local_260;
    if (local_60 != (undefined1 *)0x0) {
      _Dst = local_60;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,lVar1 << 6);
  }
  local_2b8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_288 = (longlong *)0x0;
  local_278 = 0;
  local_2d0 = *param_6;
  local_2cc = param_6[1];
  local_2c8 = param_6[2];
  local_2e0 = local_2b8;
  local_2e8 = local_2d8;
  if (param_7 != (undefined4 *)0x0) {
    local_2e8 = param_7;
  }
  local_2f8 = &local_2d0;
  local_2f0 = param_1;
  FUN_1405f81f0(param_2,param_3,local_268,param_5);
  if (local_278 != 0) {
    plVar2 = local_2a8;
    if (local_288 != (longlong *)0x0) {
      plVar2 = local_288;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_288 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_60 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1405f81f0 FUN_1405f81f0 body=965 status=ok
// SIG undefined FUN_1405f81f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1405f81f0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,int *param_5,
             int *param_6,undefined4 *param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 local_res20 [2];
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  undefined8 *local_130;
  undefined4 *local_128;
  int local_118;
  int iStack_114;
  int local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  longlong local_f8;
  longlong local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 *puStack_c8;
  longlong *local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined1 *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_108 = param_7;
  *param_6 = *param_5;
  param_6[1] = param_5[1];
  param_6[2] = param_5[2];
  if ((param_1 != 0) && (param_2 != 0)) {
    local_res20[0] = param_4;
    local_f8 = param_2;
    local_d8 = param_3;
    if (DAT_146b33f38 == (longlong *)0x0) {
      FUN_142d7ebe0();
    }
    local_b0 = (**(code **)(*DAT_146b33f38 + 0x280))();
    if (((local_b0 != 0) && (*(longlong *)(local_b0 + 0xc0) != 0)) &&
       (*(char *)(*(longlong *)(local_b0 + 0xc0) + 0x48) == '\0')) {
      FUN_1405eada0(param_3,param_1);
      lVar4 = FUN_1405ea520(param_1);
      local_f0 = lVar4;
      lVar5 = FUN_1405e8ff0(param_1);
      lVar6 = FUN_1405e8e00(param_1);
      lVar12 = local_f8;
      puVar11 = local_108;
      if (((lVar4 != 0) && (lVar5 != 0)) && (lVar6 != 0)) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::FindId(lVar4 + 0x38,&local_100,local_f8);
        lVar9 = 0;
        if ((int)local_100 != -1) {
          lVar9 = (longlong)(int)local_100 * 0x40 + *(longlong *)(lVar4 + 0x38);
        }
        lVar4 = lVar9 + 8;
        if (lVar9 == 0) {
          lVar4 = 0;
        }
        puVar11 = local_108;
        if (lVar4 != 0) {
          iStack_114 = param_5[1];
          local_118 = *param_5;
          local_110 = param_5[2];
          local_100 = (undefined1 *)0x0;
          local_e0 = 0;
          if (local_118 == 0) {
            DAT_14620d470 = DAT_14620d470 + -1;
            local_118 = DAT_14620d470;
          }
          FWeakObjectPtr::operator=(&iStack_114,param_1);
          uVar8 = local_d8;
          *(int *)(lVar6 + 0x2928) = local_118;
          *(int *)(lVar6 + 0x292c) = iStack_114;
          *(int *)(lVar6 + 0x2930) = local_110;
          local_130 = &local_e0;
          local_138 = &local_100;
          *(undefined1 *)(lVar6 + 0x2934) = 0;
          local_d0 = 0;
          puStack_c8 = (undefined4 *)((ulonglong)puStack_c8 & 0xffffffffffff0000);
          cVar1 = FUN_1405e7e60(local_f0,local_d8,lVar4,&local_d0);
          *(undefined4 *)(lVar6 + 0x2928) = 0;
          *(undefined1 *)(lVar6 + 0x2934) = 0;
          puVar11 = local_108;
          lVar12 = local_f8;
          if (cVar1 != '\0') {
            puStack_c8 = local_res20;
            local_d0 = uVar8;
            local_c0 = &local_f8;
            local_78 = (longlong *)0x0;
            uStack_b8 = param_8;
            local_68 = 0;
            puVar7 = (undefined8 *)FUN_140438ef0(0x28,local_98);
            puVar11 = local_108;
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &PTR_FUN_143ff7760;
              puVar7[1] = local_d0;
              puVar7[2] = puStack_c8;
              puVar7[3] = local_c0;
              puVar7[4] = uStack_b8;
            }
            local_f0 = CONCAT44(iStack_114,local_118);
            local_a8[0] = &LAB_1405e4e60;
            local_e8 = local_110;
            local_130 = (undefined8 *)CONCAT44(local_130._4_4_,*local_108);
            local_138 = local_a8;
            iVar2 = FUN_1405e6810(lVar5,local_e0,local_100,&local_f0);
            if (local_68 != 0) {
              plVar10 = local_98;
              if (local_78 != (longlong *)0x0) {
                plVar10 = local_78;
              }
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x10))(plVar10,0);
              }
            }
            if (local_78 != (longlong *)0x0) {
              FMemory::Free();
            }
            lVar12 = local_f8;
            if (iVar2 != 0) {
              *param_6 = local_118;
              param_6[1] = iStack_114;
              param_6[2] = local_110;
              uVar3 = FUN_1405eabe0(lVar5,iVar2);
              *puVar11 = uVar3;
              return 1;
            }
          }
        }
      }
      local_138 = (undefined1 **)((ulonglong)local_138 & 0xffffffffffffff00);
      FUN_1405f1130(local_d8,*(undefined8 *)(local_b0 + 0xc0),lVar12,0);
      local_118 = *param_5;
      iStack_114 = param_5[1];
      local_110 = param_5[2];
      local_130 = (undefined8 *)local_f8;
      local_138 = (undefined1 **)param_6;
      local_128 = puVar11;
      uVar8 = FUN_1405f7d00(param_1,local_d8,local_res20[0],&local_118);
      return uVar8;
    }
  }
  return 0;
}



// FUNCTION 1405f85c0 FUN_1405f85c0 body=568 status=ok
// SIG undefined FUN_1405f85c0(void)

void FUN_1405f85c0(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  int local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  lVar8 = 0;
  lVar7 = lVar8;
  if (lVar3 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d350,local_res8,lVar3);
    if ((local_res8[0] != -1) &&
       (lVar3 = DAT_14620d350 + (longlong)local_res8[0] * 0x18, lVar3 != 0)) {
      lVar7 = *(longlong *)(lVar3 + 8);
    }
  }
  if (lVar7 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if ((lVar3 != 0) || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_14620d3f0,local_res8,lVar3);
      if ((local_res8[0] != -1) &&
         (lVar3 = DAT_14620d3f0 + (longlong)local_res8[0] * 0x18, lVar3 != 0)) {
        lVar8 = *(longlong *)(lVar3 + 8);
      }
    }
    if (lVar8 != 0) {
      lVar3 = *(longlong *)(lVar7 + 0x30);
      lVar7 = (longlong)*(int *)(lVar7 + 0x38) * 0x2c0 + lVar3;
      for (; lVar3 != lVar7; lVar3 = lVar3 + 0x2c0) {
        if (*(int *)(lVar3 + 4) == *(int *)(param_1 + 0x1b0)) {
          if (lVar3 == 0) {
            return;
          }
          iVar1 = *(int *)(lVar3 + 600);
          if (iVar1 == 0) {
            return;
          }
          pfVar4 = *(float **)(*(longlong *)(param_1 + 0x1b8) + 0xa0);
          pfVar5 = pfVar4 + (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xa8) * 4;
          if (pfVar4 == pfVar5) {
            return;
          }
          pfVar6 = pfVar4 + 2;
          do {
            lVar3 = *(longlong *)(param_1 + 0x1b8);
            if (*(longlong *)(lVar3 + 0x60) == 0) {
              if ((*(longlong *)(lVar3 + 0x68) == 0) ||
                 (fVar9 = *(float *)(lVar3 + 0x70), fVar9 <= 0.0)) {
                lVar3 = FText::ToString(lVar3 + 0x40);
                iVar2 = *(int *)(lVar3 + 8) + -1;
                if (*(int *)(lVar3 + 8) == 0) {
                  iVar2 = 0;
                }
                fVar9 = (float)iVar2 * 0.08;
              }
            }
            else {
              fVar9 = *(float *)(*(longlong *)(lVar3 + 0x60) + 0x4c);
            }
            fVar9 = fVar9 * *pfVar4;
            if ((param_2 < fVar9) &&
               (fVar9 < *(float *)(param_1 + 0x200) || fVar9 == *(float *)(param_1 + 0x200))) {
              FUN_1405f8800(lVar8,iVar1,*(undefined8 *)pfVar6);
            }
            pfVar4 = pfVar4 + 4;
            pfVar6 = pfVar6 + 4;
          } while (pfVar4 != pfVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1405f8800 FUN_1405f8800 body=359 status=ok
// SIG undefined FUN_1405f8800(void)

void FUN_1405f8800(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar3 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    lVar2 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar2 = param_1 + 0xb8;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x80));
        if ((int)*plVar5 == param_2) {
          if (iVar1 != -1) goto LAB_1405f8871;
          break;
        }
        iVar1 = (int)plVar5[0xf];
      } while (iVar1 != -1);
    }
  }
  plVar5 = plVar3;
LAB_1405f8871:
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar3;
  }
  if (plVar6 != (longlong *)0x0) {
    if ((int)plVar6[5] != *(int *)((longlong)plVar6 + 0x54)) {
      plVar5 = (longlong *)plVar6[0xc];
      if ((longlong *)plVar6[0xc] == (longlong *)0x0) {
        plVar5 = plVar6 + 0xb;
      }
      iVar1 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                      (longlong)(int)plVar6[0xd] - 1U) * 4);
      if (iVar1 != -1) {
        do {
          plVar5 = (longlong *)((longlong)iVar1 * 0x20 + plVar6[4]);
          if (*plVar5 == param_3) {
            if (iVar1 != -1) goto LAB_1405f88f1;
            break;
          }
          iVar1 = (int)plVar5[3];
        } while (iVar1 != -1);
      }
    }
    plVar5 = plVar3;
LAB_1405f88f1:
    plVar6 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar6 = plVar3;
    }
    if ((((plVar6 != (longlong *)0x0) && (plVar6[1] != 0)) &&
        (lVar2 = FWeakObjectPtr::Get(plVar6), lVar2 != 0)) &&
       (lVar2 = UObject::FindFunction(lVar2,plVar6[1]), lVar2 != 0)) {
      plVar3 = (longlong *)FWeakObjectPtr::Get(plVar6);
      uVar4 = FUN_14178ac60(plVar3,plVar6[1]);
      (**(code **)(*plVar3 + 0x208))(plVar3,uVar4,0);
    }
  }
  return;
}



// FUNCTION 1405f8970 FUN_1405f8970 body=432 status=ok
// SIG undefined FUN_1405f8970(void)

void FUN_1405f8970(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  int local_30;
  int local_28;
  int local_24;
  longlong local_20;
  
  plVar6 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    lVar3 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar3 = param_1 + 0xb8;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar2 * 0x80 + *(longlong *)(param_1 + 0x80));
        if ((int)*plVar7 == param_2) {
          if (iVar2 != -1) goto LAB_1405f89e0;
          break;
        }
        iVar2 = (int)plVar7[0xf];
      } while (iVar2 != -1);
    }
  }
  plVar7 = plVar6;
LAB_1405f89e0:
  plVar5 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  if (plVar5 != (longlong *)0x0) {
    local_28 = (int)*plVar5;
    local_24 = *(int *)((longlong)plVar5 + 4);
    local_20 = plVar5[1];
    local_38 = (longlong *)0x0;
    local_30 = 0;
    if ((((longlong **)(plVar5 + 2) != &local_38) && ((int)plVar5[3] != 0)) &&
       (plVar7 = (longlong *)plVar5[2], plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_38);
    }
    if (((local_20 != 0) && (lVar3 = FWeakObjectPtr::Get(&local_28), lVar3 != 0)) &&
       (lVar3 = UObject::FindFunction(lVar3,local_20), lVar3 != 0)) {
      plVar7 = (longlong *)FWeakObjectPtr::Get(&local_28);
      uVar4 = FUN_14178ac60(plVar7,local_20);
      (**(code **)(*plVar7 + 0x208))(plVar7,uVar4,0);
    }
    if (local_30 != 0) {
      if ((local_38 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*local_38 + 0x18))(), cVar1 != '\0')) {
        if (local_30 != 0) {
          plVar6 = local_38;
        }
        (**(code **)(*plVar6 + 0x40))();
      }
      if (local_30 != 0) {
        if (local_38 == (longlong *)0x0) goto LAB_1405f8b09;
        (**(code **)(*local_38 + 0x28))(local_38,0);
        if (local_38 != (longlong *)0x0) {
          local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
        }
        local_30 = 0;
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
LAB_1405f8b09:
  FUN_1405eedb0((longlong *)(param_1 + 0x80),param_2);
  return;
}



// FUNCTION 1405f8b20 FUN_1405f8b20 body=487 status=ok
// SIG undefined FUN_1405f8b20(void)

void FUN_1405f8b20(undefined1 *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = (double)FUN_1405ea970(*(undefined8 *)(param_1 + 0x2b8),param_1);
  plVar1 = *(longlong **)(param_1 + 0x2b8);
  lVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
  if (lVar4 == 0) {
    dVar7 = 0.0;
  }
  else {
    lVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
    dVar7 = (double)*(float *)(lVar4 + 0x79c);
  }
  if (dVar7 < dVar6) {
    cVar2 = FUN_1405e3a40(param_1);
    if (cVar2 != '\0') {
      return;
    }
LAB_1405f8cf4:
    *param_1 = 2;
    return;
  }
  FUN_1405eb670(*(undefined8 *)(param_1 + 0x2b8),param_1);
  cVar2 = FUN_1405ebae0(param_1);
  if ((cVar2 == '\0') && (*(longlong *)(*(longlong *)(param_1 + 0x228) + 0x118) == 0))
  goto LAB_1405f8cf4;
  cVar2 = FUN_1405ebae0(param_1);
  if ((cVar2 != '\0') &&
     ((lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x118), lVar4 != 0 &&
      ((*(byte *)(lVar4 + 0x90) & 8) == 0)))) {
    FUN_14223d380(lVar4,1);
    param_1[0x2ad] = 1;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x228) + 0x418))
                    (*(longlong **)(param_1 + 0x228),*(undefined8 *)(param_1 + 0x230));
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x230) + 0xb0);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x60) == '\0')) {
    FUN_140606a00(*(undefined8 *)(param_1 + 0x228),*(undefined4 *)(param_1 + 4),
                  *(undefined4 *)(param_1 + 600));
  }
  else if (cVar2 != '\0') {
    FUN_1405f40b0(*(undefined8 *)(param_1 + 0x228),*(undefined4 *)(param_1 + 4),
                  *(undefined4 *)(param_1 + 600),*(longlong *)(param_1 + 0x230),param_1[0x281]);
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x148))();
  if ((*(uint *)(lVar4 + 0x830) & 0x4000) != 0) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x148))();
    iVar3 = FUN_1428cf800(uVar5);
    if (((iVar3 != 1) && (cVar2 != '\0')) &&
       ((*(char *)(*(longlong *)(param_1 + 0x228) + 0x298) == '\0' ||
        ((plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 0x2a0), plVar1 != (longlong *)0x0
         && (cVar2 = (**(code **)(*plVar1 + 0x768))(), cVar2 != '\0')))))) goto LAB_1405f8cca;
  }
  param_1[0x2ae] = 1;
LAB_1405f8cca:
  param_1[0x2a0] = 1;
  FUN_1405ecf60(param_1);
  return;
}



// FUNCTION 1405f8d10 FUN_1405f8d10 body=279 status=ok
// SIG undefined FUN_1405f8d10(void)

ulonglong FUN_1405f8d10(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  int *piVar5;
  bool bVar6;
  
  lVar4 = (longlong)param_2;
  if (param_2 == -1) {
    return in_RAX & 0xffffffffffffff00;
  }
  piVar5 = (int *)(lVar4 * 0x1c + *param_1);
  if (piVar5[5] == -1) {
    cVar2 = FUN_1405f8d10(param_1,piVar5[2]);
    cVar3 = FUN_1405f8d10(param_1,piVar5[3],param_3);
    FUN_1405f8d10(param_1,piVar5[4],param_3);
    if (cVar3 == '\0' && cVar2 == '\0') {
      bVar6 = false;
      if (*piVar5 != -1) {
        iVar1 = piVar5[4];
        lVar4 = (longlong)*piVar5 * 0x1c + *param_1;
        if (*(int *)(lVar4 + 8) == param_2) {
          *(int *)(lVar4 + 8) = iVar1;
          bVar6 = piVar5[4] != -1;
        }
        else if (*(int *)(lVar4 + 0xc) == param_2) {
          *(int *)(lVar4 + 0xc) = iVar1;
          bVar6 = piVar5[4] != -1;
        }
        else {
          *(int *)(lVar4 + 0x10) = iVar1;
        }
      }
      if (piVar5[4] != -1) {
        *(int *)((longlong)piVar5[4] * 0x1c + *param_1) = *piVar5;
        piVar5[4] = -1;
      }
      piVar5[0] = -1;
      piVar5[1] = -1;
      return (ulonglong)bVar6;
    }
    lVar4 = *param_3;
    piVar5 = (int *)(lVar4 + (longlong)piVar5[1] * 4);
    *piVar5 = *piVar5 + 1;
  }
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 1405f8e30 FUN_1405f8e30 body=1015 status=ok
// SIG undefined FUN_1405f8e30(void)

void FUN_1405f8e30(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  byte bVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  byte bVar17;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  longlong *local_res20;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  uint uStack_88;
  int iStack_84;
  uint local_80;
  undefined4 uStack_7c;
  longlong *local_78;
  uint uStack_70;
  uint uStack_6c;
  uint *puStack_68;
  undefined4 uStack_60;
  int iStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  
  if (param_2 != (longlong *)0x0) {
    local_res20 = param_2;
    lVar2 = (**(code **)(*param_2 + 0x410))(param_2);
    if (((lVar2 == 0) ||
        (lVar2 = (**(code **)(*param_2 + 0x410))(param_2), *(char *)(lVar2 + 0x79) == '\0')) ||
       (*(char *)((longlong)param_2 + 0x2a9) != '\0')) {
      uVar8 = 0;
      plVar7 = (longlong *)(param_1 + 0x240);
      iVar9 = *(int *)(param_1 + 0x268);
      puStack_68 = (uint *)(param_1 + 0x250);
      local_a0 = 0;
      uStack_9c = 1;
      local_90._4_4_ = 0;
      uStack_88 = 0;
      if (iVar9 != 0) {
        puVar12 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar12 = puStack_68;
        }
        uVar6 = *puVar12;
        uVar4 = uVar8;
        uVar11 = uVar8;
        while (uVar6 == 0) {
          iVar14 = (int)uVar4;
          uStack_88 = (int)uVar11 + 0x20;
          uVar11 = (ulonglong)uStack_88;
          local_a0 = iVar14 + 1;
          uVar4 = (ulonglong)local_a0;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar14) goto LAB_1405f907f;
          uVar6 = puVar12[(longlong)iVar14 + 1];
        }
        uStack_9c = -uVar6 & uVar6;
        iVar14 = 0x1f;
        if (uStack_9c != 0) {
          for (; uStack_9c >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        if (uStack_9c == 0) {
          iVar14 = 0x20;
        }
        else {
          iVar14 = 0x1f - iVar14;
        }
        local_90._4_4_ = (uStack_88 - iVar14) + 0x1f;
        if (iVar9 < local_90._4_4_) {
LAB_1405f907f:
          local_90._4_4_ = iVar9;
        }
      }
      uStack_60 = 0xffffffff;
      iStack_5c = local_90._4_4_;
      uStack_58 = uStack_88;
      uStack_54 = iStack_84;
      uStack_70 = local_a0;
      uStack_6c = uStack_9c;
      uStack_98 = local_a0;
      uStack_94 = uStack_9c;
      local_80 = uStack_88;
      uStack_7c = iStack_84;
      uStack_88 = 0xffffffff;
      iStack_84 = local_90._4_4_;
      bVar16 = local_90._4_4_ < iVar9;
      local_78 = plVar7;
      local_90 = puStack_68;
      if (bVar16) {
        do {
          if (*(longlong **)(*plVar7 + 8 + (longlong)iStack_84 * 0x18) == param_2) {
            puVar5 = (undefined8 *)(*plVar7 + (longlong)iStack_84 * 0x18);
            if (puVar5 != (undefined8 *)0x0) {
              FUN_1405efe30(plVar7,*puVar5,param_2);
            }
            break;
          }
          uStack_88 = uStack_88 & ~uStack_94;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_98);
        } while (iStack_84 < (int)local_90[6]);
      }
      lVar2 = (longlong)*(int *)(param_1 + 0xe8);
      if (*(int *)(param_1 + 0xe8) != 0) {
        bVar17 = (longlong *)**(undefined8 **)(param_1 + 0xe0) != param_2;
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar17);
        uVar4 = uVar8;
        uVar11 = uVar8;
        do {
          iVar9 = (int)uVar4;
          uVar8 = uVar8 + 1;
          uVar4 = (ulonglong)(iVar9 + 1);
          if ((longlong)uVar8 < lVar2) {
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + uVar8 * 8);
            do {
              if ((bool)bVar17 != ((longlong *)*puVar5 != param_2)) break;
              uVar4 = (ulonglong)((int)uVar4 + 1);
              uVar8 = uVar8 + 1;
              puVar5 = puVar5 + 1;
            } while ((longlong)uVar8 < lVar2);
          }
          iVar14 = (int)uVar4 - iVar9;
          bVar10 = bVar17;
          if (bVar17 != 0) {
            iVar13 = (int)uVar11;
            if (iVar13 != iVar9) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar13 * 8),
                         (void *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar9 * 8),
                         (longlong)iVar14 << 3);
              bVar10 = (byte)local_res10[0];
            }
            uVar11 = (ulonglong)(uint)(iVar13 + iVar14);
          }
          bVar17 = bVar10 ^ 1;
          local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar10) ^ 1;
        } while ((longlong)uVar8 < lVar2);
        *(int *)(param_1 + 0xe8) = (int)uVar11;
      }
    }
    else {
      uVar3 = (**(code **)(*param_2 + 0x410))(param_2);
      plVar7 = (longlong *)(param_1 + 0x30);
      TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
      ::FindId(plVar7,local_res10,uVar3);
      uVar8 = 0;
      uVar4 = uVar8;
      if (local_res10[0] != 0xffffffff) {
        uVar4 = *plVar7 + (longlong)(int)local_res10[0] * 0x28;
      }
      uVar11 = uVar4 + 8;
      if (uVar4 == 0) {
        uVar11 = uVar8;
      }
      if (uVar11 != 0) {
        FWeakObjectPtr::operator=(local_res18,param_2);
        iVar9 = *(int *)(uVar11 + 0x10);
        if (iVar9 != 0) {
          cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            (*(undefined8 *)(uVar11 + 8),local_res18);
          bVar16 = cVar1 == '\0';
          uVar4 = uVar8;
          do {
            local_res10[0] = (uint)uVar8;
            uVar6 = local_res10[0];
            do {
              uVar6 = uVar6 + 1;
              uVar8 = (ulonglong)uVar6;
              if (iVar9 <= (int)uVar6) break;
              cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                (*(longlong *)(uVar11 + 8) + (longlong)(int)uVar6 * 8,local_res18);
            } while (bVar16 == (cVar1 == '\0'));
            iVar14 = uVar6 - local_res10[0];
            if (bVar16 != false) {
              uVar15 = (uint)uVar4;
              if (uVar15 != local_res10[0]) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(uVar11 + 8) + (longlong)(int)uVar15 * 8),
                           (void *)(*(longlong *)(uVar11 + 8) + (longlong)(int)local_res10[0] * 8),
                           (longlong)iVar14 << 3);
              }
              uVar4 = (ulonglong)(uVar15 + iVar14);
            }
            bVar16 = (bool)(bVar16 ^ 1);
          } while ((int)uVar6 < iVar9);
          *(int *)(uVar11 + 0x10) = (int)uVar4;
          param_2 = local_res20;
        }
        if (*(int *)(uVar11 + 0x10) == 0) {
          uVar3 = (**(code **)(*param_2 + 0x410))(param_2);
          TSet<TTuple<UObject_*,FRadioactiveSource>,TDefaultMapHashableKeyFuncs<UObject_*,FRadioactiveSource,0>,FDefaultSetAllocator>
          ::Remove(plVar7,uVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 1405f9230 FUN_1405f9230 body=287 status=ok
// SIG undefined FUN_1405f9230(void)

void FUN_1405f9230(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1405f4800(param_1,0);
  }
  if ((*(byte *)(param_1 + 0xba) & 4) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if ((lVar2 != 0) || (lVar2 = FUN_1423407b0(), lVar2 != 0)) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d3f0,local_res8,lVar2);
    if ((local_res8[0] != -1) &&
       (lVar2 = DAT_14620d3f0 + (longlong)local_res8[0] * 0x18, lVar2 != 0)) {
      lVar2 = *(longlong *)(lVar2 + 8);
      goto LAB_1405f92b4;
    }
  }
  lVar2 = 0;
LAB_1405f92b4:
  if (lVar2 != 0) {
    FUN_1405f8e30(lVar2,param_1);
  }
  iVar1 = *(int *)(param_1 + 0x27c);
  lVar2 = *(longlong *)(param_1 + 0x270);
  iVar3 = *(int *)(param_1 + 0x278);
  if (iVar1 < 0) {
    if (iVar3 != 0) {
      do {
        FUN_1405f0e70(lVar2,0,0);
        lVar2 = lVar2 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)(param_1 + 0x27c);
    }
    *(undefined4 *)(param_1 + 0x278) = 0;
    if (iVar1 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x270),0);
    }
    return;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_1405f0e70(lVar2,0,0);
    lVar2 = lVar2 + 0x10;
  }
  *(undefined4 *)(param_1 + 0x278) = 0;
  return;
}



// FUNCTION 1405f9350 FUN_1405f9350 body=372 status=ok
// SIG undefined FUN_1405f9350(void)

void FUN_1405f9350(longlong param_1,int *param_2,char param_3,undefined8 param_4,undefined8 *param_5
                  )

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  double dVar6;
  int local_res8 [2];
  int *local_res10;
  
  plVar1 = (longlong *)(param_1 + 0x2958);
  if (*(int *)(param_1 + 0x2960) != *(int *)(param_1 + 0x298c)) {
    lVar3 = *(longlong *)(param_1 + 0x2998);
    if (*(longlong *)(param_1 + 0x2998) == 0) {
      lVar3 = param_1 + 0x2990;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x29a0) - 1U & (longlong)*param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar2 * 0x38 + *plVar1);
        if (*piVar5 == *param_2) {
          if ((iVar2 != -1) && (piVar5 != (int *)0x0)) goto LAB_1405f93f8;
          break;
        }
        iVar2 = piVar5[0xc];
      } while (iVar2 != -1);
    }
  }
  local_res10 = param_2;
  FUN_1405ddcf0(plVar1,local_res8,&local_res10,0);
  piVar5 = (int *)((longlong)local_res8[0] * 0x38 + *plVar1);
LAB_1405f93f8:
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  lVar3 = (**(code **)(*DAT_146b33f38 + 0x280))();
  if (((lVar3 != 0) && (*(longlong *)(param_1 + 0xd8) != 0)) &&
     ((param_3 != '\0' ||
      ((((float)piVar5[8] == 0.0 && ((float)piVar5[9] == 0.0)) && ((float)piVar5[10] == 0.0)))))) {
    FWeakObjectPtr::operator=(piVar5 + 6,param_4);
    *(undefined8 *)(piVar5 + 8) = *param_5;
    piVar5[10] = *(int *)(param_5 + 1);
    plVar1 = *(longlong **)(param_1 + 0xd8);
    lVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if (lVar4 == 0) {
      dVar6 = 0.0;
    }
    else {
      lVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
      dVar6 = (double)*(float *)(lVar4 + 0x79c);
    }
    *(double *)(piVar5 + 2) = (double)*(float *)(lVar3 + 0x78) + dVar6;
  }
  return;
}



// FUNCTION 1405f94d0 FUN_1405f94d0 body=1623 status=ok
// SIG undefined FUN_1405f94d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1405f94d0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_res18 [2];
  longlong *local_res20;
  float local_b8;
  float fStack_b4;
  longlong local_a8;
  int local_a0;
  longlong local_9c;
  int local_94;
  longlong *local_90;
  float local_88;
  int local_84;
  longlong local_80;
  uint local_78;
  int iStack_74;
  longlong local_70;
  uint local_68;
  int iStack_64;
  
  plVar6 = param_1 + 0x52b;
  *(undefined1 *)((longlong)param_1 + 0x2934) = 1;
  local_res20 = param_1 + 0x525;
  plVar12 = (longlong *)0x0;
  if ((int)param_1[0x52c] != *(int *)((longlong)param_1 + 0x298c)) {
    plVar10 = (longlong *)param_1[0x533];
    if ((longlong *)param_1[0x533] == (longlong *)0x0) {
      plVar10 = param_1 + 0x532;
    }
    iVar3 = *(int *)((longlong)plVar10 +
                    ((longlong)(int)param_1[0x534] - 1U & (longlong)(int)*local_res20) * 4);
    if (iVar3 != -1) {
      do {
        plVar10 = (longlong *)((longlong)iVar3 * 0x38 + *plVar6);
        if ((int)*plVar10 == (int)*local_res20) {
          if (iVar3 != -1) goto LAB_1405f9561;
          break;
        }
        iVar3 = (int)plVar10[6];
      } while (iVar3 != -1);
    }
  }
  plVar10 = plVar12;
LAB_1405f9561:
  local_res18[0] = local_res18[0] & 0xffffff00;
  plVar14 = plVar10 + 1;
  if (plVar10 == (longlong *)0x0) {
    plVar14 = plVar12;
  }
  if (plVar14 == (longlong *)0x0) {
    FUN_1405ddcf0(plVar6,local_res18,&local_res20,0);
    lVar5 = (longlong)(int)local_res18[0];
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
    plVar14 = (longlong *)(*plVar6 + lVar5 * 0x38 + 8);
  }
  local_res20 = plVar14;
  plVar6 = (longlong *)FWeakObjectPtr::Get(plVar14 + 1);
  if (plVar6 == (longlong *)0x0) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x527);
    if (cVar2 == '\0') goto LAB_1405f9631;
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x527);
    *(undefined4 *)(param_1 + 0x527) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x293c) = 0;
    FWeakObjectPtr::operator=(plVar14 + 1,plVar6);
    if (plVar6 == (longlong *)0x0) goto LAB_1405f9631;
  }
  plVar10 = (longlong *)(**(code **)(*plVar6 + 0x678))(plVar6);
  if ((plVar10 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*plVar10 + 0x950))(plVar10), cVar2 == '\0')) {
    return plVar6;
  }
LAB_1405f9631:
  local_80 = 0;
  local_78 = 0;
  iStack_74 = 0;
  local_70 = 0;
  local_68 = 0;
  iStack_64 = 0;
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar7,&local_90);
  lVar5 = local_80;
  plVar6 = plVar12;
  iVar3 = iStack_74;
  iVar4 = iStack_64;
LAB_1405f9680:
  do {
    plVar10 = local_res20;
    iVar15 = (int)plVar12;
    if (((int)local_88 < 0) || ((int)local_90[1] <= (int)local_88)) {
      plVar6 = &local_80;
      if (iVar15 == 0) {
        plVar6 = &local_70;
      }
      plVar12 = (longlong *)0x0;
      local_90 = (longlong *)0x0;
      local_84 = 0;
      if ((char)local_res18[0] != '\0') {
        *(int *)(local_res20 + 2) = (int)param_1[0x528];
        *(int *)((longlong)local_res20 + 0x14) = *(int *)((longlong)param_1 + 0x2944);
        *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
        *(undefined4 *)((longlong)param_1 + 0x2944) = 0;
        local_res20[3] = param_1[0x529];
        *(int *)(local_res20 + 4) = (int)param_1[0x52a];
        param_1[0x529] = _DAT_1468b5d90;
        *(int *)(param_1 + 0x52a) = DAT_1468b5d98;
      }
      lVar5 = FWeakObjectPtr::Get(local_res20 + 2);
      if (lVar5 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x168);
        if (lVar5 == 0) {
          local_a8 = _DAT_1468b5d90;
          local_a0 = DAT_1468b5d98;
        }
        else {
          local_a8 = *(longlong *)(lVar5 + 0x220);
          local_a0 = *(int *)(lVar5 + 0x228);
        }
        plVar10[3] = local_a8;
        *(int *)(plVar10 + 4) = local_a0;
      }
      fVar18 = 0.0;
      if (((*(float *)(plVar10 + 3) != 0.0) || (*(float *)((longlong)plVar10 + 0x1c) != 0.0)) ||
         (plVar14 = (longlong *)0x0, fVar16 = 0.0, *(float *)(plVar10 + 4) != 0.0)) {
        local_88 = 1.4013e-45;
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_90,0);
        *local_90 = plVar10[3];
        *(int *)(local_90 + 1) = (int)plVar10[4];
        plVar14 = local_90;
        fVar16 = local_88;
      }
      plVar8 = plVar12;
      if (*(longlong **)(param_2 + 0x118) != (longlong *)0x0) {
        plVar8 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x118) + 0x678))();
      }
      if ((*(char *)(param_2 + 0x2a8) != '\0') &&
         ((plVar8 == (longlong *)0x0 || (lVar5 = (**(code **)(*plVar8 + 0x670))(), lVar5 == 0)))) {
        if (*(longlong *)(param_2 + 0x118) == 0) {
          local_a8 = 0;
          plVar8 = &local_a8;
          local_a0 = 0;
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x118) + 0x168);
          if (lVar5 == 0) {
            local_a8 = _DAT_1468b5d90;
            local_a0 = DAT_1468b5d98;
          }
          else {
            local_a8 = *(longlong *)(lVar5 + 0x220);
            local_a0 = *(int *)(lVar5 + 0x228);
          }
          plVar8 = &local_9c;
          local_9c = local_a8;
          local_94 = local_a0;
        }
        lVar5 = (longlong)(int)fVar16;
        local_88 = (float)((int)fVar16 + 1);
        if (local_84 < (int)local_88) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_90,fVar16);
          plVar14 = local_90;
        }
        fVar16 = local_88;
        _guard_xfg_dispatch_icall_nop((void *)((longlong)plVar14 + 0xc),plVar14,lVar5 * 0xc);
        lVar5 = plVar8[1];
        *plVar14 = *plVar8;
        *(int *)(plVar14 + 1) = (int)lVar5;
      }
      iVar3 = (int)plVar6[1];
      if (iVar3 != 0) {
        puVar13 = (undefined8 *)*plVar6;
        if (fVar16 == 0.0) {
          iVar4 = rand();
          plVar12 = (longlong *)puVar13[iVar4 % iVar3];
        }
        else {
          puVar1 = puVar13 + iVar3;
          if (puVar13 != puVar1) {
            plVar6 = (longlong *)((longlong)plVar14 + (longlong)(int)fVar16 * 0xc);
            do {
              plVar8 = (longlong *)*puVar13;
              lVar5 = (**(code **)(*plVar8 + 0x678))(plVar8);
              lVar5 = *(longlong *)(lVar5 + 0x168);
              if (lVar5 == 0) {
                local_94 = DAT_1468b5d98;
                plVar9 = &local_9c;
                local_9c = _DAT_1468b5d90;
              }
              else {
                plVar9 = &local_a8;
                local_a0 = *(int *)(lVar5 + 0x228);
                local_a8 = *(longlong *)(lVar5 + 0x220);
              }
              if (plVar14 != plVar6) {
                fStack_b4 = (float)((ulonglong)*plVar9 >> 0x20);
                local_b8 = (float)*plVar9;
                plVar11 = plVar14;
                do {
                  local_88 = *(float *)(plVar11 + 1);
                  fVar16 = (float)*plVar11 - local_b8;
                  fVar17 = (float)((ulonglong)*plVar11 >> 0x20) - fStack_b4;
                  fVar16 = fVar17 * fVar17 + fVar16 * fVar16 +
                           (local_88 - *(float *)(plVar9 + 1)) * (local_88 - *(float *)(plVar9 + 1))
                  ;
                  if ((plVar12 == (longlong *)0x0) || (fVar16 < fVar18)) {
                    plVar12 = plVar8;
                    fVar18 = fVar16;
                  }
                  plVar11 = (longlong *)((longlong)plVar11 + 0xc);
                } while (plVar11 != plVar6);
              }
              puVar13 = puVar13 + 1;
            } while (puVar13 != puVar1);
          }
        }
      }
      FWeakObjectPtr::operator=(plVar10 + 1,plVar12);
      if (plVar14 != (longlong *)0x0) {
        FMemory::Free(plVar14);
      }
      if (local_70 != 0) {
        FMemory::Free(local_70);
      }
      if (local_80 != 0) {
        FMemory::Free(local_80);
      }
      return plVar12;
    }
    plVar10 = (longlong *)FWeakObjectPtr::Get(*local_90 + (longlong)(int)local_88 * 8);
    if ((plVar10 != (longlong *)0x0) &&
       (plVar14 = (longlong *)(**(code **)(*plVar10 + 0x678))(plVar10), plVar14 != (longlong *)0x0))
    {
      cVar2 = (**(code **)(*plVar14 + 0x950))(plVar14);
      if (cVar2 != '\0') {
        iVar15 = (int)plVar6;
        local_68 = iVar15 + 1;
        if (iVar4 < (int)local_68) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70);
          iVar4 = iStack_64;
        }
        plVar6 = (longlong *)(ulonglong)local_68;
        *(longlong **)(local_70 + (longlong)iVar15 * 8) = plVar10;
        local_88 = (float)((int)local_88 + 1);
        goto LAB_1405f9680;
      }
      local_78 = iVar15 + 1;
      if (iVar3 < (int)local_78) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80);
        lVar5 = local_80;
        iVar3 = iStack_74;
      }
      plVar12 = (longlong *)(ulonglong)local_78;
      *(longlong **)(lVar5 + (longlong)iVar15 * 8) = plVar10;
    }
    local_88 = (float)((int)local_88 + 1);
  } while( true );
}



// FUNCTION 1405f9b30 FUN_1405f9b30 body=716 status=ok
// SIG undefined FUN_1405f9b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405f9b30(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  int local_res8;
  int local_resc;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [16];
  
  if (*(char *)(param_1 + 0x2a9) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0();
  }
  lVar7 = FUN_1405e8e00(lVar7);
  if (lVar7 == 0) {
    return;
  }
  TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(lVar7 + 0x30),&local_res8);
  lVar10 = 0;
  if (local_res8 != -1) {
    lVar10 = *(longlong *)(lVar7 + 0x30) + (longlong)local_res8 * 0x28;
  }
  lVar7 = lVar10 + 8;
  if (lVar10 == 0) {
    lVar7 = 0;
  }
  if (lVar7 == 0) {
    return;
  }
  piVar11 = *(int **)(lVar7 + 8);
  local_98 = 0;
  local_90 = 0;
  piVar1 = piVar11 + (longlong)*(int *)(lVar7 + 0x10) * 2;
  for (; piVar11 != piVar1; piVar11 = piVar11 + 2) {
    local_res8 = *piVar11;
    local_resc = piVar11[1];
    cVar5 = FWeakObjectPtr::IsValid(&local_res8);
    if (cVar5 != '\0') {
      lVar7 = FWeakObjectPtr::Get(&local_res8);
      if (*(longlong *)(lVar7 + 0x118) != 0) {
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x118) + 0x168);
        uStack_40 = 0x42480000;
        uStack_3c = 0x3f800000;
        if (lVar7 == 0) {
          local_74 = DAT_1468b5d98;
          puVar8 = &local_7c;
          local_7c = _DAT_1468b5d90;
        }
        else {
          puVar8 = (undefined8 *)&local_88;
          local_88 = *(undefined4 *)(lVar7 + 0x220);
          local_80 = *(undefined4 *)(lVar7 + 0x228);
          uStack_84 = *(undefined4 *)(lVar7 + 0x224);
        }
        local_58 = *puVar8;
        uStack_50 = *(undefined4 *)(puVar8 + 1);
        if (lVar7 == 0) {
          local_5c = DAT_1468b5da8;
          puVar8 = &local_64;
          local_64 = DAT_1468b5da0;
        }
        else {
          local_38 = *(float *)(lVar7 + 0x210);
          fStack_34 = *(float *)(lVar7 + 0x214);
          fStack_30 = *(float *)(lVar7 + 0x218);
          fStack_2c = *(float *)(lVar7 + 0x21c);
          auVar3._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_34);
          auVar3._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_38);
          auVar3._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_30);
          auVar3._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_2c);
          iVar6 = movmskps(uStack_50,auVar3);
          if (iVar6 != 0) {
            *(float *)(lVar7 + 0x250) = local_38;
            *(float *)(lVar7 + 0x254) = fStack_34;
            *(float *)(lVar7 + 600) = fStack_30;
            *(float *)(lVar7 + 0x25c) = fStack_2c;
            puVar8 = (undefined8 *)FQuat::Rotator(&local_38,local_28);
            *(undefined8 *)(lVar7 + 0x260) = *puVar8;
            *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar8 + 1);
          }
          local_68 = *(undefined4 *)(lVar7 + 0x268);
          puVar8 = &local_70;
          local_70 = *(undefined8 *)(lVar7 + 0x260);
        }
        uVar4 = local_90;
        lVar7 = (longlong)(int)local_90;
        uStack_44 = *(undefined4 *)(puVar8 + 1);
        uStack_4c = (undefined4)*puVar8;
        uStack_48 = (undefined4)((ulonglong)*puVar8 >> 0x20);
        iVar6 = (int)local_90 + 1;
        local_90 = CONCAT44(local_90._4_4_,iVar6);
        if (local_90._4_4_ < iVar6) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(&local_98,uVar4 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar7 * 0x20 + local_98);
        *puVar2 = (undefined4)local_58;
        puVar2[1] = local_58._4_4_;
        puVar2[2] = uStack_50;
        puVar2[3] = uStack_4c;
        puVar8 = (undefined8 *)(lVar7 * 0x20 + 0x10 + local_98);
        *puVar8 = CONCAT44(uStack_44,uStack_48);
        puVar8[1] = CONCAT44(uStack_3c,uStack_40);
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x288);
  if (lVar7 == 0) {
    uVar9 = FUN_14058e4d0(*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x288) = uVar9;
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x630))(*(longlong **)(param_1 + 0x118),uVar9);
    FUN_14234b150(*(undefined8 *)(param_1 + 0x288));
    lVar7 = *(longlong *)(param_1 + 0x288);
    if (lVar7 == 0) goto LAB_1405f9ddc;
  }
  FUN_1405aa7c0(lVar7,&local_98,2,0);
LAB_1405f9ddc:
  if (local_98 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405f9e00 FUN_1405f9e00 body=473 status=ok
// SIG undefined FUN_1405f9e00(void)

void FUN_1405f9e00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int local_res18 [2];
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uStack_54 = *(undefined4 *)(param_1 + 0xc);
  local_50 = *(undefined4 *)(param_1 + 0x10);
  lVar8 = FWeakObjectPtr::Get(&uStack_54);
  uVar12 = 0;
  uVar10 = uVar12;
  if (lVar8 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14620d350,local_res18,lVar8);
    if ((local_res18[0] != -1) &&
       (lVar8 = DAT_14620d350 + (longlong)local_res18[0] * 0x18, lVar8 != 0)) {
      uVar10 = *(ulonglong *)(lVar8 + 8);
    }
  }
  if (uVar10 != 0) {
    local_48 = CONCAT44(uStack_54,uVar1);
    bVar11 = 0;
    bVar6 = false;
    local_40 = local_50;
    if (0 < *(int *)(uVar10 + 0x38)) {
      uVar15 = uVar12;
      do {
        lVar8 = *(longlong *)(uVar10 + 0x30);
        if ((*(int *)(lVar8 + 0x24c + uVar15) == (int)local_48) &&
           (cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                              (uVar15 + 0x250 + lVar8,(longlong)&local_48 + 4), cVar7 != '\0')) {
          bVar9 = *(byte *)(lVar8 + uVar15);
          if (bVar9 == 3) {
            bVar6 = true;
            bVar11 = bVar9;
          }
          else if (bVar9 == 1) {
            if (!bVar6) {
              bVar6 = true;
              bVar11 = bVar9;
            }
          }
          else if (!bVar6) {
            if (bVar9 == 4) {
              bVar9 = 6;
            }
            if (bVar11 <= bVar9) {
              bVar11 = bVar9;
            }
          }
        }
        uVar14 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar14;
        uVar15 = uVar15 + 0x2c0;
      } while ((int)uVar14 < *(int *)(uVar10 + 0x38));
      if ((bVar11 - 1 & 0xfd) == 0) {
        cVar7 = '\0';
        goto LAB_1405f9f5e;
      }
    }
  }
  cVar7 = '\x01';
LAB_1405f9f5e:
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(char *)(param_2 + 0x70) = cVar7;
  if (cVar7 != '\0') {
    iVar4 = *(int *)(param_2 + 0x68);
    lVar8 = (longlong)iVar4;
    *(int *)(param_2 + 0x68) = iVar4 + 1;
    if (*(int *)(param_2 + 0x6c) < iVar4 + 1) {
      TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_2,iVar4);
    }
    lVar13 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar13 = param_2;
    }
    *(undefined8 *)(lVar13 + lVar8 * 0x18) = uVar5;
    *(undefined4 *)(lVar13 + 8 + lVar8 * 0x18) = uVar3;
    *(undefined4 *)(lVar13 + 0xc + lVar8 * 0x18) = uVar1;
    *(undefined4 *)(lVar13 + 0x10 + lVar8 * 0x18) = uVar2;
  }
  return;
}



// FUNCTION 1405f9fe0 FUN_1405f9fe0 body=1735 status=ok
// SIG undefined FUN_1405f9fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405f9fe0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *_Src;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_5d8 [32];
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 *local_5a8;
  ulonglong *local_5a0;
  uint local_598;
  undefined8 local_590;
  code **local_588;
  undefined8 local_578;
  undefined4 local_570;
  ulonglong local_568 [2];
  undefined4 local_558;
  int iStack_554;
  undefined4 uStack_550;
  int local_54c;
  undefined4 local_548;
  longlong local_538;
  undefined2 local_530;
  undefined6 uStack_52e;
  undefined1 local_520 [72];
  code *local_4d8 [2];
  longlong local_4c8 [4];
  longlong *local_4a8;
  int local_498;
  undefined1 local_488 [8];
  undefined1 local_480 [512];
  undefined1 *local_280;
  int local_278;
  undefined4 local_274;
  undefined1 local_270;
  undefined1 local_268 [512];
  undefined1 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_5d8;
  lVar6 = FUN_1405e0180(param_4);
  if (*(int *)(param_3 + 0x20) == 0) {
    FMovieSceneEvaluationRange::TimeRangeToNumberRange(&local_558,param_3);
    iVar2 = *(int *)(param_1 + 0x74);
    if ((((((char)local_558 != '\x02') && (iVar2 <= iStack_554)) &&
         ((iVar2 < iStack_554 || ((char)local_558 != '\x01')))) &&
        (((char)local_558 != '\x01' || (iVar2 != iStack_554)))) ||
       ((((char)uStack_550 != '\x02' &&
         ((local_54c <= iVar2 && ((local_54c < iVar2 || ((char)uStack_550 != '\x01')))))) &&
        (((char)uStack_550 != '\x01' || (iVar2 != local_54c)))))) goto LAB_1405fa07b;
    bVar3 = true;
  }
  else {
LAB_1405fa07b:
    bVar3 = false;
  }
  plVar7 = (longlong *)(**(code **)(*param_5 + 0x70))(param_5);
  lVar8 = (**(code **)(*plVar7 + 0x148))(plVar7);
  if (!bVar3) {
    if (*(char *)(lVar6 + 8) == '\0') {
      return;
    }
    lVar6 = FUN_1405e0180(param_4);
    *(undefined1 *)(lVar6 + 8) = 0;
    return;
  }
  uVar15 = 0;
  local_568[0] = 0;
  if (((*(longlong *)(param_1 + 0x10) == 0) ||
      (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
       *(int *)(param_1 + 0x2c) == 0) && *(int *)(param_1 + 0x28) == 0)) ||
     (*(char *)(lVar6 + 8) != '\0')) {
    if (*(char *)(param_1 + 0x41) == '\0') {
      return;
    }
    cVar4 = FText::IsEmptyOrWhitespace(param_1 + 0x48);
    if (cVar4 != '\0') {
      return;
    }
    if (*(float *)(param_1 + 0x60) <= 0.0) {
      return;
    }
    if (*(char *)(lVar6 + 8) != '\0') {
      return;
    }
    *(undefined1 *)(lVar6 + 8) = 1;
    if (lVar8 == 0) {
      return;
    }
    plVar7 = (longlong *)FUN_142d5ecc0(lVar8);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x290))(plVar7);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    lVar8 = *plVar7;
    local_5b8 = (undefined4 *)FUN_140590080(&local_538);
    local_598 = local_598 & 0xffffff00;
    local_5a0 = (ulonglong *)((ulonglong)local_5a0 & 0xffffffffffffff00);
    local_5a8 = (undefined8 *)0x0;
    local_5b0 = (undefined4 *)((ulonglong)local_5b0._4_4_ << 0x20);
    uVar10 = (**(code **)(lVar8 + 0x10))(plVar7);
    *(undefined8 *)(lVar6 + 0x30) = uVar10;
    return;
  }
  *(undefined2 *)(lVar6 + 8) = 1;
  if (*(char *)(param_1 + 0x40) != '\0') {
    local_4a8 = (longlong *)0x0;
    local_4d8[0] = AK::MemoryMgr::StartProfileThreadUsage;
    local_558 = 0;
    iStack_554 = 0;
    uStack_550 = 0;
    local_270 = 0;
    local_498 = 0;
    local_538 = 0;
    local_530 = 0;
    local_68 = (undefined1 *)0x0;
    local_60 = 0;
    lVar9 = FUN_1405e1510(local_520,param_1);
    local_570 = 0;
    local_578 = 0xffffffff00000000;
    uVar10 = FUN_1405e8b50(lVar9);
    puVar12 = local_68;
    lVar13 = (longlong)(int)local_60;
    local_488[0] = local_270;
    local_568[0] = local_568[0] & 0xffffffff00000000;
    local_280 = (undefined1 *)0x0;
    local_278 = (int)local_60;
    if ((int)local_60 == 0) {
      local_274 = 0;
    }
    else {
      FUN_1405f06b0(local_480,local_60 & 0xffffffff,0);
      _Src = local_268;
      if (puVar12 != (undefined1 *)0x0) {
        _Src = puVar12;
      }
      puVar12 = local_480;
      if (local_280 != (undefined1 *)0x0) {
        puVar12 = local_280;
      }
      _guard_xfg_dispatch_icall_nop(puVar12,_Src,lVar13 << 6);
    }
    iStack_554 = 0xffffffff;
    local_590 = 0;
    local_5a0 = local_568;
    local_598 = 0xbf800000;
    local_5a8 = &local_578;
    local_5b0 = &local_558;
    local_5b8 = (undefined4 *)((ulonglong)local_5b8._4_4_ << 0x20);
    uStack_550 = 0;
    local_588 = local_4d8;
    FUN_1405f28b0(lVar8,uVar10,&local_538,local_488);
    if (local_280 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar9 + 0x18) != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(lVar6 + 0xc) = (undefined4)local_578;
    *(undefined4 *)(lVar6 + 0x10) = local_578._4_4_;
    *(undefined4 *)(lVar6 + 0x14) = local_570;
    if (local_68 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_498 != 0) {
      plVar7 = local_4c8;
      if (local_4a8 != (longlong *)0x0) {
        plVar7 = local_4a8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_4a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)(lVar6 + 9) = 1;
    return;
  }
  lVar9 = FUN_1405e1510(local_520,param_1);
  lVar13 = FUN_1405e8b50(lVar9);
  uVar11 = uVar15;
  uVar14 = uVar15;
  if (((lVar13 == 0) || (*(int *)(lVar13 + 0x78) == 0)) ||
     (lVar13 = **(longlong **)(lVar13 + 0x70), lVar13 == 0)) {
    if (*(longlong *)(lVar9 + 0x18) != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*(int *)(lVar13 + 0x70) != 0) {
      uVar14 = **(ulonglong **)(lVar13 + 0x68);
    }
    if (*(longlong *)(lVar9 + 0x18) != 0) {
      FMemory::Free();
    }
    if (uVar14 != 0) {
      uVar11 = USimpleConstructionScript::GetOwnerClass(uVar14);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x68);
  if (uVar14 == 0) {
    return;
  }
  if (uVar11 == 0) {
    return;
  }
  local_568[0] = uVar11;
  FUN_1405e8c30(uVar14,&local_538);
  if ((local_538 == 0) || (*(char *)(param_1 + 0x41) != '\0')) goto LAB_1405fa483;
  lVar13 = FUN_1405e8e00(lVar8);
  if (lVar13 != 0) {
    plVar7 = *(longlong **)(lVar13 + 0xe0);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      plVar1 = plVar7 + *(int *)(lVar13 + 0xe8);
      for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
        lVar13 = *plVar7;
        if ((((lVar13 != 0) && (*(char *)(lVar13 + 0x280) == '\0')) &&
            (*(longlong *)(lVar13 + 0x1a8) != 0)) &&
           (cVar4 = FUN_1405f4ef0(*(longlong *)(lVar13 + 0x1a8),*(undefined8 *)(local_568[0] + 0x58)
                                  ,*(undefined8 *)(local_568[0] + 0x60)), cVar4 != '\0'))
        goto LAB_1405fa527;
      }
    }
    else {
      plVar1 = plVar7 + *(int *)(lVar13 + 0xe8);
      for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
        lVar13 = *plVar7;
        if (((lVar13 != 0) && (*(char *)(lVar13 + 0x280) == '\0')) &&
           (*(longlong *)(lVar13 + 0x1a8) == *(longlong *)(param_1 + 0x68))) goto LAB_1405fa527;
      }
    }
  }
LAB_1405fa3f7:
  local_558 = 0;
  iStack_554 = 0;
  uStack_550 = 0;
  local_578 = _DAT_1468b5d90;
  local_570 = DAT_1468b5d98;
  local_5b8 = (undefined4 *)CONCAT71(local_5b8._1_7_,1);
  lVar13 = FUN_1405ab680(lVar8,&local_578,0x42480000,&local_558);
  goto LAB_1405fa443;
LAB_1405fa527:
  if ((plVar7 == (longlong *)0x0) || (lVar13 = *plVar7, lVar13 == 0)) goto LAB_1405fa3f7;
  lVar9 = *(longlong *)(lVar13 + 0x1a8);
  if (*(longlong *)(lVar13 + 0x118) == 0) goto LAB_1405fa3f7;
  lVar13 = FUN_14059b7e0(*(longlong *)(lVar13 + 0x118),1);
LAB_1405fa443:
  if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x378) != 0)) {
    lVar13 = FUN_1405a27c0(*(longlong *)(lVar13 + 0x378),&local_558,&local_538,0);
    FUN_1405913a0(lVar6 + 0x18,lVar13);
    *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar13 + 0x10);
    FUN_140591060(&local_558);
  }
LAB_1405fa483:
  if (((lVar8 != 0) && (plVar7 = (longlong *)FUN_142d5ecc0(lVar8), plVar7 != (longlong *)0x0)) &&
     (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x290))(plVar7), plVar7 != (longlong *)0x0)) {
    if (lVar9 != 0) {
      uVar15 = *(ulonglong *)(lVar9 + 0x60);
    }
    FUN_14058f8f0(&local_558,lVar6 + 0x18);
    local_548 = *(undefined4 *)(lVar6 + 0x28);
    lVar8 = *plVar7;
    uVar5 = FUN_1405ebb60(uVar14);
    FUN_1405e9b40(uVar14);
    local_598 = CONCAT31(local_598._1_3_,uVar5);
    local_5b8 = &local_558;
    local_5a0 = (ulonglong *)((ulonglong)local_5a0 & 0xffffffffffffff00);
    local_5b0 = (undefined4 *)((ulonglong)local_5b0._4_4_ << 0x20);
    local_5a8 = (undefined8 *)uVar15;
    uVar10 = (**(code **)(lVar8 + 0x10))(plVar7);
    *(undefined8 *)(lVar6 + 0x30) = uVar10;
  }
  if (CONCAT62(uStack_52e,local_530) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405fa6b0 FUN_1405fa6b0 body=1474 status=ok
// SIG undefined FUN_1405fa6b0(void)

void FUN_1405fa6b0(longlong param_1,int *param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5,uint *param_6)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined4 local_res18 [2];
  undefined8 local_b8;
  uint *local_b0;
  undefined8 local_a8;
  uint local_a0;
  int local_98;
  int local_94;
  int local_90 [2];
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong *local_58;
  undefined4 *local_50;
  
  lVar19 = *param_3;
  lVar7 = lVar19 + (longlong)(int)param_3[1] * 0x28;
  for (; lVar19 != lVar7; lVar19 = lVar19 + 0x28) {
    if (*(char *)(lVar19 + 0x20) == '\0') {
      *(undefined1 *)(lVar19 + 0x21) = 0;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468551f8) && (_Init_thread_header(&DAT_1468551f8), DAT_1468551f8 == -1))
  {
    atexit((_func_5014 *)&LAB_143e40000);
    _Init_thread_footer(&DAT_1468551f8);
  }
  piVar15 = (int *)0x0;
  DAT_1468551f0 = 0;
  if ((DAT_1468551f4 < 0) && (DAT_1468551f4 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_1468551e8,0);
  }
  plVar2 = param_5;
  param_5 = (longlong *)CONCAT44(param_5._4_4_,*(undefined4 *)((longlong)param_5 + 0x14));
  if ((int)param_3[3] < 1) {
    iVar16 = -1;
  }
  else {
    FUN_1405e7160(param_1,param_3,0,param_4,&DAT_1468551e8,&param_5);
    iVar16 = (int)param_5;
  }
  param_5 = (longlong *)param_2;
  FUN_1405e0b60(&DAT_1468551e8,&param_5);
  if (DAT_1468551f0 == 0) {
    return;
  }
  if (*(int *)((longlong)plVar2 + 0x14) < iVar16) {
LAB_1405fa7d4:
    *(undefined4 *)(plVar2 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)plVar2 + 0xc)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (plVar2,0);
    }
    *(undefined1 *)(plVar2 + 3) = 0;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(int *)((longlong)plVar2 + 0x14) = iVar16;
    cVar3 = (char)param_2[0xa0];
    *(char *)(plVar2 + 3) = cVar3;
LAB_1405fa80a:
    if ((char)param_2[0xa0] == '\0') goto LAB_1405fa82a;
  }
  else {
    cVar3 = (char)plVar2[3];
    if (cVar3 == '\0') goto LAB_1405fa80a;
    if ((char)param_2[0xa0] == '\0') goto LAB_1405fa7d4;
  }
  if (((int)plVar2[1] != 0) && (cVar3 == '\0')) {
    return;
  }
  *(undefined1 *)(plVar2 + 3) = 1;
LAB_1405fa82a:
  local_60 = DAT_1468551e8 + DAT_1468551f0;
  puVar20 = DAT_1468551e8;
  if (DAT_1468551e8 != local_60) {
    do {
      local_68 = (longlong *)*puVar20;
      lVar7 = *(longlong *)(param_1 + 8);
      lVar11 = lVar7 + 0x298;
      lVar19 = *local_68;
      local_88 = puVar20;
      FUN_1405e7ce0(lVar11,&param_5,lVar19);
      piVar9 = piVar15;
      if ((int)param_5 != -1) {
        lVar12 = *(longlong *)(lVar7 + 0xe98);
        if (*(longlong *)(lVar7 + 0xe98) == 0) {
          lVar12 = lVar11;
        }
        piVar9 = (int *)(lVar12 + (longlong)(int)param_5 * 0x18);
      }
      piVar18 = piVar9 + 2;
      if (piVar9 == (int *)0x0) {
        piVar18 = piVar15;
      }
      if (piVar18 == (int *)0x0) {
        local_58 = &local_80;
        local_res18[0] = 0;
        local_50 = local_res18;
        local_80 = lVar19;
        FUN_1405de8b0(lVar11,&local_98,&local_58,0);
        lVar12 = *(longlong *)(lVar7 + 0xe98);
        if (*(longlong *)(lVar7 + 0xe98) == 0) {
          lVar12 = lVar11;
        }
        piVar18 = (int *)(lVar12 + ((longlong)local_98 * 3 + 1) * 8);
      }
      iVar16 = *(int *)(lVar19 + 0x70);
      if (iVar16 == 1) {
        uVar14 = **(ulonglong **)(lVar19 + 0x68);
LAB_1405fab53:
        if (uVar14 != 0) {
          if ((char)param_2[0xaa] == '\0') {
            uVar6 = UCurveFloat::GetPrivateStaticClass();
            lVar7 = UObjectBaseUtility::GetTypedOuter(uVar14,uVar6);
            if (lVar7 != 0) {
              if (*(char *)(lVar7 + 0x58) == '\x02') goto LAB_1405faba5;
              if (*(char *)(lVar7 + 0x58) == '\x01') goto LAB_1405fabfd;
            }
            lVar7 = *(longlong *)(uVar14 + 0x60);
            if (((lVar7 == 0) && (lVar7 = *(longlong *)(uVar14 + 0x68), lVar7 == 0)) ||
               (*(char *)(lVar7 + 0x3c) == '\0')) goto LAB_1405fabfd;
          }
LAB_1405faba5:
          local_b0 = param_6;
          local_b8 = param_2;
          if (param_6 != (uint *)0x0) {
            local_b8 = piVar15;
          }
          local_a0 = *(uint *)(*local_68 + 0x44);
          local_a8 = uVar14;
          FUN_1405dcc50(plVar2,&local_b8);
          *(float *)(plVar2 + 2) =
               *(float *)((longlong)(int)plVar2[1] * 0x20 + -8 + *plVar2) + *(float *)(plVar2 + 2);
        }
      }
      else if (1 < iVar16) {
        if (*(char *)(lVar19 + 0xe0) == '\0') {
          lVar7 = *(longlong *)(param_1 + 8);
          lVar11 = lVar7 + 0xfe0;
          local_78 = lVar19;
          FUN_1405e7da0(lVar11,&local_94,lVar19);
          if (local_94 == -1) {
LAB_1405fa993:
            local_70 = &local_78;
            FUN_1405dd450(lVar11,local_90,&local_70,0);
            iVar16 = *(int *)(lVar19 + 0x70);
            lVar12 = *(longlong *)(lVar7 + 0x27e0);
            if (*(longlong *)(lVar7 + 0x27e0) == 0) {
              lVar12 = lVar11;
            }
            lVar12 = lVar12 + (longlong)local_90[0] * 0x30;
          }
          else {
            lVar12 = *(longlong *)(lVar7 + 0x27e0);
            if (*(longlong *)(lVar7 + 0x27e0) == 0) {
              lVar12 = lVar11;
            }
            lVar12 = lVar12 + (longlong)local_94 * 0x30;
            if (lVar12 == 0) goto LAB_1405fa993;
          }
          puVar13 = (uint *)(lVar12 + 8);
          if (*(int *)(lVar12 + 0x20) != iVar16) {
            *(undefined4 *)(lVar12 + 0x20) = 0;
            iVar4 = (int)(iVar16 + 0x1f + (iVar16 + 0x1f >> 0x1f & 0x1fU)) >> 5;
            iVar8 = iVar4 << 5;
            if (*(int *)(lVar12 + 0x24) != iVar8) {
              *(int *)(lVar12 + 0x24) = iVar8;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar13,0);
            }
            if (iVar16 != 0) {
              *(int *)(lVar12 + 0x20) = iVar16;
              puVar10 = *(uint **)(lVar12 + 0x18);
              if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
                puVar10 = puVar13;
              }
              _guard_xfg_dispatch_icall_nop(puVar10,0xff,(longlong)iVar4 << 2);
            }
          }
          iVar16 = *(int *)(lVar19 + 0x70) - *piVar18;
          uVar17 = 0;
          if (0 < iVar16) {
            iVar4 = rand();
            uVar5 = (uint)((float)iVar4 * 3.051851e-05 * (float)iVar16);
            uVar17 = iVar16 - 1U;
            if ((int)uVar5 <= (int)(iVar16 - 1U)) {
              uVar17 = uVar5;
            }
          }
          uVar14 = local_a8;
          iVar4 = *(int *)(lVar12 + 0x20);
          uVar5 = 1;
          local_a8 = local_a8 & 0xffffffff;
          local_b8 = (int *)0x100000000;
          local_a0 = 0;
          iVar16 = 0;
          if (iVar4 != 0) {
            puVar10 = *(uint **)(lVar12 + 0x18);
            if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
              puVar10 = puVar13;
            }
            uVar1 = *puVar10;
            piVar9 = piVar15;
            piVar18 = piVar15;
            while (uVar1 == 0) {
              iVar16 = (int)piVar9;
              local_a0 = (int)piVar18 + 0x20;
              piVar18 = (int *)(ulonglong)local_a0;
              piVar9 = (int *)(ulonglong)(iVar16 + 1U);
              local_b8._4_4_ = (uint)((ulonglong)local_b8 >> 0x20);
              local_b8 = (int *)CONCAT44(local_b8._4_4_,iVar16 + 1U);
              if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar16)
              goto LAB_1405fab10;
              uVar1 = puVar10[(longlong)iVar16 + 1];
            }
            uVar5 = -uVar1 & uVar1;
            iVar16 = 0x1f;
            if (uVar5 != 0) {
              for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
              }
            }
            local_b8 = (int *)CONCAT44(uVar5,SUB84(local_b8,0));
            if (uVar5 == 0) {
              iVar16 = 0x20;
            }
            else {
              iVar16 = 0x1f - iVar16;
            }
            iVar16 = (local_a0 - iVar16) + 0x1f;
            local_a8._0_4_ = (uint)uVar14;
            local_a8 = CONCAT44(iVar16,(uint)local_a8);
            if (iVar4 < iVar16) {
LAB_1405fab10:
              local_a8 = CONCAT44(iVar4,(uint)local_a8);
              iVar16 = iVar4;
            }
          }
          puVar20 = local_88;
          local_b0 = puVar13;
          if (0 < (int)uVar17) {
            uVar14 = (ulonglong)uVar17;
            uVar17 = 0xffffffff;
            while( true ) {
              local_a8 = CONCAT44(local_a8._4_4_,uVar17 & ~uVar5);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) break;
              uVar5 = local_b8._4_4_;
              uVar17 = (uint)local_a8;
            }
            puVar20 = local_88;
            iVar16 = local_a8._4_4_;
          }
        }
        else {
          iVar16 = *piVar18 % iVar16;
        }
        uVar14 = *(ulonglong *)(*(longlong *)(lVar19 + 0x68) + (longlong)iVar16 * 8);
        goto LAB_1405fab53;
      }
LAB_1405fabfd:
      puVar20 = puVar20 + 1;
    } while (puVar20 != local_60);
  }
  return;
}



// FUNCTION 1405fac80 FUN_1405fac80 body=244 status=ok
// SIG undefined FUN_1405fac80(void)

void FUN_1405fac80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 1);
  if ((lVar6 != 0) ||
     ((*(longlong **)(param_2 + 4) != (longlong *)0x0 &&
      (lVar6 = (**(code **)(**(longlong **)(param_2 + 4) + 0x148))(), lVar6 != 0)))) {
    if (*(longlong *)(lVar6 + 400) == 0) {
      lVar6 = lVar6 + 0x400;
    }
    else {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 400) + 0x98);
    }
    lVar7 = FLatentActionManager::
            FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                      (lVar6,*(undefined8 *)(param_2 + 4),param_2[1],local_res8);
    if (lVar7 == 0) {
      puVar8 = (undefined8 *)operator_new(0x30);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        uVar1 = *param_1;
        uVar2 = param_1[1];
        uVar3 = param_1[2];
        *puVar8 = &PTR_FUN_143ff73f0;
        uVar4 = *(undefined8 *)(param_2 + 2);
        *(undefined4 *)(puVar8 + 1) = uVar1;
        *(undefined4 *)((longlong)puVar8 + 0xc) = uVar2;
        uVar5 = *(undefined8 *)(param_2 + 4);
        *(undefined4 *)(puVar8 + 2) = uVar3;
        puVar8[3] = uVar4;
        *(undefined4 *)(puVar8 + 4) = *param_2;
        FWeakObjectPtr::operator=((longlong)puVar8 + 0x24,uVar5);
      }
      FUN_142514cf0(lVar6,*(undefined8 *)(param_2 + 4),param_2[1],puVar8);
    }
  }
  return;
}



// FUNCTION 1405fada0 FUN_1405fada0 body=162 status=ok
// SIG undefined FUN_1405fada0(void)

longlong FUN_1405fada0(void)

{
  if (DAT_146855528 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogNameTagMoodData",&DAT_146855528,FUN_140447710,0x80,
                  0x10000000,0,L"Engine",InternalConstructor<ULocalizedOverlays>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146855528;
}



// FUNCTION 1405fae50 FUN_1405fae50 body=47 status=ok
// SIG undefined FUN_1405fae50(void)

longlong FUN_1405fae50(void)

{
  if (DAT_146855440 == 0) {
    FUN_141786440(&DAT_146855440,&PTR_FUN_143ff7ca0);
  }
  return DAT_146855440;
}



// FUNCTION 1405fae80 FUN_1405fae80 body=53 status=ok
// SIG undefined FUN_1405fae80(void)

void FUN_1405fae80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_143ffce90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405faec0 FUN_1405faec0 body=53 status=ok
// SIG undefined FUN_1405faec0(void)

void FUN_1405faec0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c0;
    *puVar1 = &PTR_FUN_143ffcfa8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405faf10 FUN_1405faf10 body=162 status=ok
// SIG undefined FUN_1405faf10(void)

longlong FUN_1405faf10(void)

{
  if (DAT_146855538 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogNameTag",&DAT_146855538,FUN_140447710,0xe8,0x10000000
                  ,0,L"Engine",&LAB_1405fca60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146855538;
}



// FUNCTION 1405fafe0 FUN_1405fafe0 body=162 status=ok
// SIG undefined FUN_1405fafe0(void)

longlong FUN_1405fafe0(void)

{
  if (DAT_146855478 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogEnumType",&DAT_146855478,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_1405fc870,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1406066e0,&LAB_140447700,0);
  }
  return DAT_146855478;
}



// FUNCTION 1405fb0a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUserObjectListEntry::GetPrivateStaticClass(void)

{
  if (DAT_1468554a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogEnumValueInterface",&DAT_1468554a0,
                  StaticRegisterNativesUUserObjectListEntry,0x28,0x10004001,0,L"Engine",
                  FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468554a0;
}



// FUNCTION 1405fb150 FUN_1405fb150 body=162 status=ok
// SIG undefined FUN_1405fb150(void)

longlong FUN_1405fb150(void)

{
  if (DAT_146855488 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogEnumValue",&DAT_146855488,FUN_140447710,0x60,
                  0x10000000,0,L"Engine",FUN_1405fc8a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1406066e0,&LAB_140447700,0);
  }
  return DAT_146855488;
}



// FUNCTION 1405fb220 FUN_1405fb220 body=47 status=ok
// SIG undefined FUN_1405fb220(void)

longlong FUN_1405fb220(void)

{
  if (DAT_146855498 == 0) {
    FUN_141786440(&DAT_146855498,&PTR_GetPrivateStaticClass_143ff8630);
  }
  return DAT_146855498;
}



// FUNCTION 1405fb250 FUN_1405fb250 body=47 status=ok
// SIG undefined FUN_1405fb250(void)

longlong FUN_1405fb250(void)

{
  if (DAT_146855490 == 0) {
    FUN_141786a30(&DAT_146855490,&PTR_FUN_14620f190);
  }
  return DAT_146855490;
}



// FUNCTION 1405fb280 FUN_1405fb280 body=162 status=ok
// SIG undefined FUN_1405fb280(void)

longlong FUN_1405fb280(void)

{
  if (DAT_1468554c0 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogEvent",&DAT_1468554c0,FUN_140447710,0x60,0x10000000,0
                  ,L"Engine",InternalConstructor<USoAchievementSettings>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1406066e0,&LAB_140447700,0);
  }
  return DAT_1468554c0;
}



// FUNCTION 1405fb330 FUN_1405fb330 body=53 status=ok
// SIG undefined FUN_1405fb330(void)

void FUN_1405fb330(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_143ffdea8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405fb380 FUN_1405fb380 body=53 status=ok
// SIG undefined FUN_1405fb380(void)

void FUN_1405fb380(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_143ffd5e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405fb3d0 FUN_1405fb3d0 body=162 status=ok
// SIG undefined FUN_1405fb3d0(void)

longlong FUN_1405fb3d0(void)

{
  if (DAT_1468554d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogEventList",&DAT_1468554d0,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_1405fc870,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1406066e0,&LAB_140447700,0);
  }
  return DAT_1468554d0;
}



// FUNCTION 1405fb4a0 FUN_1405fb4a0 body=162 status=ok
// SIG undefined FUN_1405fb4a0(void)

longlong FUN_1405fb4a0(void)

{
  if (DAT_1468552c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"AnimNotify_DialogEvent",&DAT_1468552c8,FUN_140447710,0x90,
                  0x10000000,0,L"Engine",FUN_1405fc6a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotify::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468552c8;
}



// FUNCTION 1405fb550 FUN_1405fb550 body=151 status=ok
// SIG undefined FUN_1405fb550(void)

longlong FUN_1405fb550(void)

{
  if (DAT_146855418 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogBlackboard",&DAT_146855418,FUN_140447710,0x29f8,
                  0x10000000,0,L"Engine",&LAB_1405fc830,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1405e3660,&LAB_140447700,
                  &LAB_140447700,0);
  }
  return DAT_146855418;
}



// FUNCTION 1405fb5f0 FUN_1405fb5f0 body=53 status=ok
// SIG undefined FUN_1405fb5f0(void)

void FUN_1405fb5f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_143ffc238;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405fb640 FUN_1405fb640 body=53 status=ok
// SIG undefined FUN_1405fb640(void)

void FUN_1405fb640(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_143ffc350;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405fb680 FUN_1405fb680 body=162 status=ok
// SIG undefined FUN_1405fb680(void)

longlong FUN_1405fb680(void)

{
  if (DAT_146855320 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"CharacterEchoDataBase",&DAT_146855320,FUN_140447710,0x40,
                  0x10000001,0,L"Engine",FUN_1405fc700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146855320;
}



// FUNCTION 1405fb730 FUN_1405fb730 body=53 status=ok
// SIG undefined FUN_1405fb730(void)

void FUN_1405fb730(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_143ffc468;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405fb780 FUN_1405fb780 body=162 status=ok
// SIG undefined FUN_1405fb780(void)

longlong FUN_1405fb780(void)

{
  if (DAT_146855338 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogActionBlueprintImplementation",&DAT_146855338,
                  FUN_140447710,0x30,0x10000000,0,L"Engine",FUN_1405fc740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146855338;
}



// FUNCTION 1405fb830 FUN_1405fb830 body=53 status=ok
// SIG undefined FUN_1405fb830(void)

void FUN_1405fb830(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_143ffc580;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405fb870 FUN_1405fb870 body=47 status=ok
// SIG undefined FUN_1405fb870(void)

longlong FUN_1405fb870(void)

{
  if (DAT_146855330 == 0) {
    FUN_141786440(&DAT_146855330,&PTR_FUN_143ff9890);
  }
  return DAT_146855330;
}



// FUNCTION 1405fb8a0 FUN_1405fb8a0 body=47 status=ok
// SIG undefined FUN_1405fb8a0(void)

longlong FUN_1405fb8a0(void)

{
  if (DAT_146855328 == 0) {
    FUN_141786a30(&DAT_146855328,&PTR_FUN_14620d6a0);
  }
  return DAT_146855328;
}



// FUNCTION 1405fb8d0 FUN_1405fb8d0 body=53 status=ok
// SIG undefined FUN_1405fb8d0(void)

void FUN_1405fb8d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_143ffc698;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405fb910 FUN_1405fb910 body=53 status=ok
// SIG undefined FUN_1405fb910(void)

void FUN_1405fb910(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_143ffc7b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405fb960 FUN_1405fb960 body=162 status=ok
// SIG undefined FUN_1405fb960(void)

longlong FUN_1405fb960(void)

{
  if (DAT_146855348 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogActionFunction",&DAT_146855348,FUN_140447710,0x58,
                  0x10000000,0,L"Engine",FUN_1405fc770,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1406066e0,&LAB_140447700,0);
  }
  return DAT_146855348;
}



// FUNCTION 1405fba10 FUN_1405fba10 body=53 status=ok
// SIG undefined FUN_1405fba10(void)

void FUN_1405fba10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_143ffc8c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405fba50 FUN_1405fba50 body=162 status=ok
// SIG undefined FUN_1405fba50(void)

longlong FUN_1405fba50(void)

{
  if (DAT_1468554e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogLineData",&DAT_1468554e0,FUN_140447710,0xe8,
                  0x10000000,0,L"Engine",FUN_1405fc920,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1406066e0,&LAB_140447700,0);
  }
  return DAT_1468554e0;
}



// FUNCTION 1405fbb00 FUN_1405fbb00 body=53 status=ok
// SIG undefined FUN_1405fbb00(void)

void FUN_1405fbb00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_143ffc9e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405fbb40 FUN_1405fbb40 body=53 status=ok
// SIG undefined FUN_1405fbb40(void)

void FUN_1405fbb40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_143ffcaf8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1405fbb90 FUN_1405fbb90 body=151 status=ok
// SIG undefined FUN_1405fbb90(void)

longlong FUN_1405fbb90(void)

{
  if (DAT_146855358 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogAudioComponentProvider",&DAT_146855358,FUN_140447710,
                  0x28,0x10000001,0,L"Engine",FUN_1405fc7b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146855358;
}



// FUNCTION 1405fbc30 FUN_1405fbc30 body=162 status=ok
// SIG undefined FUN_1405fbc30(void)

longlong FUN_1405fbc30(void)

{
  if (DAT_146855368 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogAudioComponentProvider_OcclusionResistant",
                  &DAT_146855368,FUN_140447710,0x38,0x10000000,0,L"Engine",FUN_1405fc7e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405fbb90,&LAB_140447700,0);
  }
  return DAT_146855368;
}



// FUNCTION 1405fbcf0 FUN_1405fbcf0 body=47 status=ok
// SIG undefined FUN_1405fbcf0(void)

longlong FUN_1405fbcf0(void)

{
  if (DAT_146855350 == 0) {
    FUN_141786440(&DAT_146855350,&PTR_FUN_143ffa360);
  }
  return DAT_146855350;
}



// FUNCTION 1405fbd30 FUN_1405fbd30 body=151 status=ok
// SIG undefined FUN_1405fbd30(void)

longlong FUN_1405fbd30(void)

{
  if (DAT_146855448 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"QuietTimePredicate",&DAT_146855448,FUN_140447710,0x28,
                  0x10000001,0,L"Engine",FUN_1405d48d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146855448;
}



// FUNCTION 1405fbdd0 FUN_1405fbdd0 body=162 status=ok
// SIG undefined FUN_1405fbdd0(void)

longlong FUN_1405fbdd0(void)

{
  if (DAT_146855458 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"QuietTimePredicate_BlockStuff",&DAT_146855458,FUN_140447710
                  ,0x60,0x10000000,0,L"Engine",FUN_1405fcad0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405fbd30,&LAB_140447700,0);
  }
  return DAT_146855458;
}



// FUNCTION 1405fbe90 FUN_1405fbe90 body=162 status=ok
// SIG undefined FUN_1405fbe90(void)

longlong FUN_1405fbe90(void)

{
  if (DAT_146855378 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogBehaviorPreset",&DAT_146855378,FUN_140447710,0x30,
                  0x10000000,0,L"Engine",FUN_1405fc740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146855378;
}



// FUNCTION 1405fbf60 FUN_1405fbf60 body=151 status=ok
// SIG undefined FUN_1405fbf60(void)

longlong FUN_1405fbf60(void)

{
  if (DAT_1468554f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogLookupSystem",&DAT_1468554f0,FUN_140447710,0x108,
                  0x10000000,0,L"Engine",FUN_1405fc9a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468554f0;
}



// FUNCTION 1405fc000 FUN_1405fc000 body=151 status=ok
// SIG undefined FUN_1405fc000(void)

longlong FUN_1405fc000(void)

{
  if (DAT_146855468 == 0) {
    FUN_14171ccd0(L"/Script/GbxDialog",L"DialogControlSystem",&DAT_146855468,FUN_140447710,0x90,
                  0x10000000,0,L"Engine",&LAB_1405fc850,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146855468;
}



// FUNCTION 1405fc0a0 FUN_1405fc0a0 body=861 status=ok
// SIG undefined FUN_1405fc0a0(void)

int * FUN_1405fc0a0(longlong *param_1,int *param_2,undefined4 *param_3,longlong param_4)

{
  ulonglong *_Src;
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  bool local_res8;
  
  iVar18 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar16 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar16;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x18) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  lVar8 = (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar17 = (uint *)((longlong)plVar10 + lVar8);
  *puVar17 = *puVar17 | 1 << ((byte)iVar12 & 0x1f);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  lVar9 = (longlong)iVar12;
  _Src = (ulonglong *)(*param_1 + lVar9 * 0x18);
  *(undefined4 *)_Src = *param_3;
  *(undefined4 *)((longlong)_Src + 4) = uVar3;
  *(undefined4 *)(_Src + 1) = uVar4;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar5;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar16 != 1) {
    iVar7 = iVar18;
    if (iVar16 != 0) {
      iVar14 = (int)(*_Src >> 4);
      uVar13 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
      uVar11 = -(uVar13 + iVar14) ^ uVar13 >> 0xd;
      uVar15 = (iVar14 - uVar13) - uVar11 ^ uVar11 >> 0xc;
      uVar13 = (uVar13 - uVar15) - uVar11 ^ uVar15 << 0x10;
      uVar11 = (uVar11 - uVar13) - uVar15 ^ uVar13 >> 5;
      uVar15 = (uVar15 - uVar13) - uVar11 ^ uVar11 >> 3;
      uVar13 = (uVar13 - uVar15) - uVar11 ^ uVar15 << 10;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar14 = *(int *)((longlong)plVar10 +
                       (((longlong)(int)((uVar11 - uVar13) - uVar15) ^ (ulonglong)(uVar13 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar14 != -1) {
        do {
          iVar7 = iVar14;
          if (*(ulonglong *)(*param_1 + (longlong)iVar14 * 0x18) == *_Src) break;
          iVar14 = *(int *)(*param_1 + 0x10 + (longlong)iVar14 * 0x18);
          iVar7 = iVar18;
        } while (iVar14 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar7 * 0x18),_Src,0x10);
      bVar2 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar12;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar1 + lVar9 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar9 * 0x18) = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar10 + lVar8);
      *puVar17 = *puVar17 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1405fc3ce;
    }
  }
  cVar6 = TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar16,0);
  if (cVar6 == '\0') {
    iVar18 = (int)(*_Src >> 4);
    uVar13 = 0x9e3779b9U - iVar18 ^ iVar18 << 8;
    uVar15 = -(uVar13 + iVar18) ^ uVar13 >> 0xd;
    uVar11 = (iVar18 - uVar13) - uVar15 ^ uVar15 >> 0xc;
    uVar13 = (uVar13 - uVar11) - uVar15 ^ uVar11 << 0x10;
    uVar15 = (uVar15 - uVar13) - uVar11 ^ uVar13 >> 5;
    uVar11 = (uVar11 - uVar13) - uVar15 ^ uVar15 >> 3;
    uVar13 = (uVar13 - uVar11) - uVar15 ^ uVar11 << 10;
    uVar11 = ((uVar15 - uVar13) - uVar11 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1405fc3ce:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1405fc400 FUN_1405fc400 body=657 status=ok
// SIG undefined FUN_1405fc400(void)

int * FUN_1405fc400(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  bool bVar15;
  
  iVar14 = -1;
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
    iVar8 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_1);
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar9;
  lVar4 = (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar13 + lVar4);
  *puVar10 = *puVar10 | 1 << ((byte)iVar9 & 0x1f);
  lVar6 = (longlong)iVar9 * 0x20;
  plVar13 = (longlong *)(*param_1 + lVar6);
  *plVar13 = *param_3;
  *(int *)(plVar13 + 1) = (int)param_3[1];
  *(undefined4 *)((longlong)plVar13 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  bVar15 = false;
  plVar13[2] = param_3[2];
  *(undefined4 *)(plVar13 + 3) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    lVar1 = *plVar13;
    iVar8 = iVar14;
    if (iVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x20 + *param_1) == lVar1) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar14;
        } while (iVar7 != -1);
      }
    }
    bVar15 = iVar8 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar8 * 0x20 + *param_1),plVar13,0x18);
      bVar2 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar9;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar6 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar6 + 4 + lVar1) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar10 = (uint *)((longlong)plVar13 + lVar4);
      *puVar10 = *puVar10 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1405fc667;
    }
  }
  cVar3 = FUN_1405fdf10(param_1,iVar12,0);
  if (cVar3 == '\0') {
    uVar11 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x1c) = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1405fc667:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 1405fc6a0 FUN_1405fc6a0 body=82 status=ok
// SIG undefined FUN_1405fc6a0(void)

void FUN_1405fc6a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAnimNotify::UAnimNotify(puVar1,param_1);
    *puVar1 = &PTR_FUN_143ffaff8;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
    puVar1[0x10] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0;
  }
  return;
}



// FUNCTION 1405fc700 FUN_1405fc700 body=51 status=ok
// SIG undefined FUN_1405fc700(void)

void FUN_1405fc700(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143ffb2d0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 1405fc740 FUN_1405fc740 body=41 status=ok
// SIG undefined FUN_1405fc740(void)

void FUN_1405fc740(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_143ffb550;
  }
  return;
}



// FUNCTION 1405fc770 FUN_1405fc770 body=55 status=ok
// SIG undefined FUN_1405fc770(void)

void FUN_1405fc770(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundNode::USoundNode(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143ffb7d0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
  }
  return;
}



// FUNCTION 1405fc7b0 FUN_1405fc7b0 body=41 status=ok
// SIG undefined FUN_1405fc7b0(void)

void FUN_1405fc7b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143ffba50;
  }
  return;
}



// FUNCTION 1405fc7e0 FUN_1405fc7e0 body=75 status=ok
// SIG undefined FUN_1405fc7e0(void)

void FUN_1405fc7e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 5) = 0x3ecccccd;
    *puVar1 = &PTR_FUN_143ffbcd0;
    FName::FName(puVar1 + 6,"OcclusionResistant",1);
    return;
  }
  return;
}



// FUNCTION 1405fc870 FUN_1405fc870 body=41 status=ok
// SIG undefined FUN_1405fc870(void)

void FUN_1405fc870(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundNode::USoundNode(puVar1,param_1);
    *puVar1 = &PTR_FUN_143ff16a8;
  }
  return;
}



// FUNCTION 1405fc8a0 FUN_1405fc8a0 body=52 status=ok
// SIG undefined FUN_1405fc8a0(void)

void FUN_1405fc8a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundNode::USoundNode(puVar1,param_1);
    *puVar1 = &PTR_FUN_143ffd0c0;
    puVar1[8] = &PTR_LAB_143ffd340;
  }
  return;
}



// FUNCTION 1405fc8e0 InternalConstructor<USoAchievementSettings> body=59 status=ok
// SIG undefined InternalConstructor<USoAchievementSettings>(void)

void InternalConstructor<USoAchievementSettings>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundNode::USoundNode(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143ffd368;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
  }
  return;
}



// FUNCTION 1405fc920 FUN_1405fc920 body=113 status=ok
// SIG undefined FUN_1405fc920(void)

void FUN_1405fc920(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    USoundNode::USoundNode(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
    *puVar1 = &PTR_FUN_143ffd700;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    FUN_1405e1750(puVar1 + 0x11);
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
  }
  return;
}



// FUNCTION 1405fc9a0 FUN_1405fc9a0 body=182 status=ok
// SIG undefined FUN_1405fc9a0(void)

void FUN_1405fc9a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143ffd980;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xec) = 0;
    puVar1[0x1f] = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1405fca80 InternalConstructor<ULocalizedOverlays> body=76 status=ok
// SIG undefined InternalConstructor<ULocalizedOverlays>(void)

void InternalConstructor<ULocalizedOverlays>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143ffdbf8;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
  }
  return;
}



// FUNCTION 1405fcad0 FUN_1405fcad0 body=67 status=ok
// SIG undefined FUN_1405fcad0(void)

void FUN_1405fcad0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143ffcc10;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
  }
  return;
}



// FUNCTION 1405fcb20 FUN_1405fcb20 body=815 status=ok
// SIG undefined FUN_1405fcb20(void)

undefined8 * FUN_1405fcb20(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141781840();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_143ffbf68;
  *puVar1 = &PTR_FUN_143ffc1f0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
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
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  *(undefined4 *)(param_1 + 0x1d9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xecc) = 0;
  param_1[0x1fa] = 0;
  *(undefined4 *)(param_1 + 0x1fb) = 0;
  param_1[0x4fc] = 0;
  param_1[0x4fd] = 0;
  param_1[0x500] = 0;
  param_1[0x501] = 0;
  *(undefined4 *)(param_1 + 0x502) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2814) = 0;
  param_1[0x523] = 0;
  *(undefined4 *)(param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0x526) = 0;
  *(undefined4 *)((longlong)param_1 + 0x292c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2934) = 0;
  *(undefined4 *)((longlong)param_1 + 0x293c) = 0;
  *(undefined4 *)(param_1 + 0x527) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2944) = 0;
  *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
  param_1[0x52b] = 0;
  param_1[0x52c] = 0;
  param_1[0x52f] = 0;
  param_1[0x530] = 0;
  *(undefined4 *)((longlong)param_1 + 0x298c) = 0;
  *(undefined4 *)(param_1 + 0x531) = 0xffffffff;
  param_1[0x533] = 0;
  *(undefined4 *)(param_1 + 0x534) = 0;
  param_1[0x535] = 0;
  param_1[0x536] = 0;
  param_1[0x539] = 0;
  param_1[0x53a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x29dc) = 0;
  *(undefined4 *)(param_1 + 0x53b) = 0xffffffff;
  param_1[0x53d] = 0;
  *(undefined4 *)(param_1 + 0x53e) = 0;
  return param_1;
}



// FUNCTION 1405fce50 FUN_1405fce50 body=155 status=ok
// SIG undefined FUN_1405fce50(void)

void FUN_1405fce50(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar4 = (longlong *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    do {
      iVar5 = (int)plVar4[1];
      lVar1 = *plVar4;
      if (iVar5 != 0) {
        plVar2 = (longlong *)(lVar1 + 8);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar1 = *plVar4;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar4);
  return;
}



// FUNCTION 1405fcef0 FUN_1405fcef0 body=100 status=ok
// SIG undefined FUN_1405fcef0(void)

void FUN_1405fcef0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 1405fcf60 FUN_1405fcf60 body=100 status=ok
// SIG undefined FUN_1405fcf60(void)

void FUN_1405fcf60(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 1405fcfd0 ~TSparseArray<TSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1405fd091;
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
LAB_1405fd091:
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
      FGraphActionListBuilderBase::ActionGroup::~ActionGroup
                ((longlong)iStack_1c * 0x40 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 1405fd160 ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=398 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1405fd221;
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
LAB_1405fd221:
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
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iStack_1c * 0x28) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 1405fd2f0 ~TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 1405fd360 FUN_1405fd360 body=122 status=ok
// SIG undefined FUN_1405fd360(void)

void FUN_1405fd360(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc08) = 0;
  if (*(int *)(param_1 + 0xc0c) != 0) {
    FUN_1405ff2c0(param_1,0);
  }
  *(undefined4 *)(param_1 + 0xc30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc34) = 0;
  *(undefined4 *)(param_1 + 0xc28) = 0;
  if (*(int *)(param_1 + 0xc2c) != 0) {
    *(undefined4 *)(param_1 + 0xc2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0xc10,0);
  }
  if (*(longlong *)(param_1 + 0xc20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc00) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405fd3e0 FUN_1405fd3e0 body=606 status=ok
// SIG undefined FUN_1405fd3e0(void)

void FUN_1405fd3e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x29f0) = 0;
  if (*(longlong *)(param_1 + 0x29e8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x29a8);
  *(undefined4 *)(param_1 + 0x29a0) = 0;
  if (*(longlong *)(param_1 + 0x2998) != 0) {
    FMemory::Free();
  }
  FUN_1405fcef0(param_1 + 0x2958);
  *(undefined4 *)(param_1 + 0x2920) = 0;
  if (*(longlong *)(param_1 + 0x2918) != 0) {
    FMemory::Free();
  }
  FUN_1405fefe0(param_1 + 0xfe0,0);
  if (*(longlong *)(param_1 + 0x2800) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x27e0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xfd8) = 0;
  if (*(longlong *)(param_1 + 0xfd0) != 0) {
    FMemory::Free();
  }
  FUN_1405fd360(param_1 + 0x298);
  *(undefined4 *)(param_1 + 0x288) = 0;
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1f0,0);
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1a0,0);
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x100);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  FUN_1405fea60(param_1 + 0x80,0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1405fd640 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1405fd79b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_1405fd79b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_1405fc0a0(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1405fd840 FUN_1405fd840 body=502 status=ok
// SIG undefined FUN_1405fd840(void)

longlong * FUN_1405fd840(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = FUN_1405fdf10(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1405fd99b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_1405fd99b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_1405fc400(param_1,local_res8,(longlong)iStack_4c * 0x20 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1405fda50 FUN_1405fda50 body=102 status=ok
// SIG undefined FUN_1405fda50(void)

longlong FUN_1405fda50(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1405fdac0 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMoviePlayerSettings::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x38);
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x30);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1405fdb40 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UOnGroundCondition::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1405fdb90 FUN_1405fdb90 body=52 status=ok
// SIG undefined FUN_1405fdb90(void)

undefined8 FUN_1405fdb90(undefined8 param_1,ulonglong param_2)

{
  FUN_1405fd3e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x29f8);
  }
  return param_1;
}



// FUNCTION 1405fdbd0 FUN_1405fdbd0 body=63 status=ok
// SIG undefined FUN_1405fdbd0(void)

longlong FUN_1405fdbd0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x40) = &PTR_GetPoolName_143ff6a70;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1405fdc10 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UImgMediaSource::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1405fdc70 FUN_1405fdc70 body=127 status=ok
// SIG undefined FUN_1405fdc70(void)

longlong FUN_1405fdc70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_1405fce50(param_1 + 0x48);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1405fdcf0 FUN_1405fdcf0 body=150 status=ok
// SIG undefined FUN_1405fdcf0(void)

longlong FUN_1405fdcf0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0xb8);
  FGraphActionListBuilderBase::ActionGroup::~ActionGroup(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FBufferVisualizationData::Record>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1405fdd90 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULocalizedOverlays::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1405fddf0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInterpTrackInstFloatMaterialParam::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1405fde60 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
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



// FUNCTION 1405fdf10 FUN_1405fdf10 body=161 status=ok
// SIG undefined FUN_1405fdf10(void)

undefined8 FUN_1405fdf10(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1405fdff0 FUN_1405fdff0 body=45 status=ok
// SIG undefined FUN_1405fdff0(void)

void FUN_1405fdff0(undefined8 param_1,longlong param_2)

{
  FWeakObjectPtr::operator=(param_2,0);
  *(undefined8 *)(param_2 + 8) = 0;
  FUN_1405f0e70(param_2,0,0);
  return;
}



// FUNCTION 1405fe020 FUN_1405fe020 body=85 status=ok
// SIG undefined FUN_1405fe020(void)

void FUN_1405fe020(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x70);
  FWeakObjectPtr::operator=(param_2,0);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined4 *)((longlong)param_2 + 0x68) = 0;
  return;
}



// FUNCTION 1405fe080 FUN_1405fe080 body=40 status=ok
// SIG undefined FUN_1405fe080(void)

void FUN_1405fe080(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FWeakObjectPtr::operator=(param_2,0);
  param_2[1] = 0;
  return;
}



// FUNCTION 1405fe0b0 FUN_1405fe0b0 body=95 status=ok
// SIG undefined FUN_1405fe0b0(void)

void FUN_1405fe0b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_2 + 0x11),0,0x23f);
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_2 + 0x254),0,0x6c);
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  *(undefined4 *)(param_2 + 0x4a) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x254) = 0;
  return;
}



// FUNCTION 1405fe1c0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FGizmoSelectData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
      ::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405fe260 FUN_1405fe260 body=71 status=ok
// SIG undefined FUN_1405fe260(void)

undefined1 FUN_1405fe260(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1405e22e0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405fe2b0 FUN_1405fe2b0 body=197 status=ok
// SIG undefined FUN_1405fe2b0(void)

undefined8 FUN_1405fe2b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_38;
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  if (param_4 != 0) {
    puVar1 = (undefined8 *)(param_3 + 8);
    do {
      local_28 = *(int *)(puVar1 + 1);
      lVar2 = (longlong)local_28;
      local_38 = puVar1[-1];
      _Src = (void *)*puVar1;
      local_30 = (void *)0x0;
      if (local_28 == 0) {
        local_24 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_28,0);
        _guard_xfg_dispatch_icall_nop(local_30,_Src,lVar2 * 2);
      }
      FSoftObjectPath::operator=(param_2,&local_38);
      puVar1 = puVar1 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x18;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405fe3b0 FUN_1405fe3b0 body=86 status=ok
// SIG undefined FUN_1405fe3b0(void)

undefined1 FUN_1405fe3b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_3 + 8);
    do {
      uVar1 = FWeakObjectPtr::Get(puVar2 + -1);
      FUN_1405f0e70((param_2 - param_3) + -8 + (longlong)puVar2,uVar1,*puVar2);
      puVar2 = puVar2 + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405fe410 FUN_1405fe410 body=230 status=ok
// SIG undefined FUN_1405fe410(void)

undefined8 FUN_1405fe410(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_3 + 4);
    do {
      *param_2 = puVar4[-1];
      plVar1 = (longlong *)(param_2 + 4);
      param_2[1] = *puVar4;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar4 + 1);
      if ((longlong *)(puVar4 + 3) != plVar1) {
        if ((puVar4[5] == 0) || (plVar2 = *(longlong **)(puVar4 + 3), plVar2 == (longlong *)0x0)) {
          if ((param_2[6] != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar1 != 0) {
              lVar3 = FMemory::Realloc(*plVar1,0,0);
              *plVar1 = lVar3;
            }
            param_2[6] = 0;
          }
        }
        else {
          (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
        }
      }
      FUN_1405fd840(param_2 + 8);
      puVar4 = puVar4 + 0x1c;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x1c;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405fe540 FUN_1405fe540 body=371 status=ok
// SIG undefined FUN_1405fe540(void)

undefined8 FUN_1405fe540(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x250);
    do {
      *(undefined1 *)(puVar1 + -0x94) = *(undefined1 *)(param_3 + -0x250 + (longlong)puVar1);
      puVar1[-0x93] = *(undefined4 *)(param_3 + -0x24c + (longlong)puVar1);
      puVar1[-0x92] = *(undefined4 *)(param_3 + -0x248 + (longlong)puVar1);
      FUN_1405e2650(puVar1 + -0x90,param_3 + -0x240 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -10) = *(undefined8 *)(param_3 + -0x28 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(param_3 + -0x20 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -6) = *(undefined8 *)(param_3 + -0x18 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -4) = *(undefined8 *)(param_3 + -0x10 + (longlong)puVar1);
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar1);
      puVar1[2] = *(undefined4 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 6) = *(undefined1 *)((longlong)puVar1 + param_3 + 0x18);
      puVar1[7] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x1c);
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)((longlong)puVar1 + param_3 + 0x20);
      puVar1[9] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x24);
      puVar1[10] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x28);
      puVar1[0xb] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x2c);
      *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(param_3 + 0x30 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + 0x31) = *(undefined1 *)(param_3 + 0x31 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(param_3 + 0x38 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(param_3 + 0x40 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(param_3 + 0x48 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(param_3 + 0x50 + (longlong)puVar1);
      puVar1[0x15] = *(undefined4 *)(param_3 + 0x54 + (longlong)puVar1);
      puVar1[0x16] = *(undefined4 *)(param_3 + 0x58 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 0x17) = *(undefined1 *)(param_3 + 0x5c + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + 0x5d) = *(undefined1 *)(param_3 + 0x5d + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + 0x5e) = *(undefined1 *)(param_3 + 0x5e + (longlong)puVar1);
      puVar1[0x18] = *(undefined4 *)(param_3 + 0x60 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 0x1a) = *(undefined8 *)(param_3 + 0x68 + (longlong)puVar1);
      puVar1 = puVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405fe6c0 Copy body=189 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FLevelWeatherInfo>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = param_2 + 1;
      *param_2 = puVar3[-1];
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(param_2 + 2) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar3 = puVar3 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405fe780 FUN_1405fe780 body=265 status=ok
// SIG undefined FUN_1405fe780(void)

undefined8 FUN_1405fe780(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  int *piVar3;
  
  if (param_4 != 0) {
    piVar3 = (int *)(param_3 + 0x48);
    do {
      *param_2 = piVar3[-0x12];
      piVar1 = param_2 + 0x10;
      param_2[1] = piVar3[-0x11];
      param_2[2] = piVar3[-0x10];
      param_2[3] = piVar3[-0xf];
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(piVar3 + -0xe);
      *(undefined8 *)(param_2 + 6) = *(undefined8 *)(piVar3 + -0xc);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(piVar3 + -10);
      param_2[10] = piVar3[-8];
      param_2[0xb] = piVar3[-7];
      *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(piVar3 + -6);
      *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(piVar3 + -4);
      if (piVar1 != piVar3 + -2) {
        iVar2 = *piVar3;
        _Src = *(void **)(piVar3 + -2);
        param_2[0x12] = iVar2;
        if ((iVar2 == 0) && (param_2[0x13] == 0)) {
          param_2[0x13] = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar2 << 2);
        }
      }
      piVar3 = piVar3 + 0x14;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x14;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405fe940 FUN_1405fe940 body=43 status=ok
// SIG undefined FUN_1405fe940(void)

void FUN_1405fe940(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2);
  return;
}



// FUNCTION 1405fe970 FUN_1405fe970 body=43 status=ok
// SIG undefined FUN_1405fe970(void)

void FUN_1405fe970(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2);
  return;
}



// FUNCTION 1405fe9b0 FUN_1405fe9b0 body=62 status=ok
// SIG undefined FUN_1405fe9b0(void)

void FUN_1405fe9b0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2 + 0x20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x10);
  return;
}



// FUNCTION 1405fea20 FUN_1405fea20 body=55 status=ok
// SIG undefined FUN_1405fea20(void)

void FUN_1405fea20(void)

{
  undefined8 uVar1;
  
  if (DAT_1468552b8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Niagara();
    DAT_1468552b8 = GetStaticEnum(FUN_1405ffd80,uVar1,L"EVoiceOfGodSpeaker");
  }
  return;
}



// FUNCTION 1405fea60 FUN_1405fea60 body=467 status=ok
// SIG undefined FUN_1405fea60(void)

void FUN_1405fea60(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1405feb31;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1405feb31:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x80 + *param_1;
      *(undefined4 *)(lVar5 + 0x70) = 0;
      if (*(longlong *)(lVar5 + 0x68) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 0x28);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5 + 0x18);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1405fec40 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1405fed11;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1405fed11:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1405fee10 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1405feee1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1405feee1:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1405fefe0 FUN_1405fefe0 body=438 status=ok
// SIG undefined FUN_1405fefe0(void)

void FUN_1405fefe0(longlong param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
  
  uStack_54 = 1;
  puVar1 = (uint *)(param_1 + 0x1810);
  local_58 = 0;
  iVar2 = *(int *)(param_1 + 0x1828);
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x1820);
    if (*(uint **)(param_1 + 0x1820) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_1405ff0b1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_1405ff0b1:
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
      lVar5 = *(longlong *)(param_1 + 0x1800);
      if (*(longlong *)(param_1 + 0x1800) == 0) {
        lVar5 = param_1;
      }
      if (*(longlong *)(lVar5 + 0x18 + (longlong)iStack_1c * 0x30) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 0x1808) = 0;
  if (*(int *)(param_1 + 0x180c) != param_2) {
    FUN_1405ff3e0(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x1830) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1834) = 0;
  *(undefined4 *)(param_1 + 0x1828) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x182c) != uVar4) {
    *(uint *)(param_1 + 0x182c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1405ff1a0 FUN_1405ff1a0 body=6 status=ok
// SIG undefined FUN_1405ff1a0(void)

undefined8 FUN_1405ff1a0(void)

{
  return 0xdb9f25b5;
}



// FUNCTION 1405ff1b0 FUN_1405ff1b0 body=6 status=ok
// SIG undefined FUN_1405ff1b0(void)

undefined8 FUN_1405ff1b0(void)

{
  return 0x4395d85f;
}



// FUNCTION 1405ff1c0 FUN_1405ff1c0 body=6 status=ok
// SIG undefined FUN_1405ff1c0(void)

undefined8 FUN_1405ff1c0(void)

{
  return 0xb25621ee;
}



// FUNCTION 1405ff1d0 FUN_1405ff1d0 body=6 status=ok
// SIG undefined FUN_1405ff1d0(void)

undefined8 FUN_1405ff1d0(void)

{
  return 0x8b24f311;
}



// FUNCTION 1405ff1e0 FUN_1405ff1e0 body=6 status=ok
// SIG undefined FUN_1405ff1e0(void)

undefined8 FUN_1405ff1e0(void)

{
  return 0x750e9e95;
}



// FUNCTION 1405ff1f0 FUN_1405ff1f0 body=6 status=ok
// SIG undefined FUN_1405ff1f0(void)

undefined8 FUN_1405ff1f0(void)

{
  return 0x8c366d1e;
}



// FUNCTION 1405ff200 FUN_1405ff200 body=6 status=ok
// SIG undefined FUN_1405ff200(void)

undefined8 FUN_1405ff200(void)

{
  return 0x45ca1662;
}



// FUNCTION 1405ff210 FUN_1405ff210 body=6 status=ok
// SIG undefined FUN_1405ff210(void)

undefined8 FUN_1405ff210(void)

{
  return 0xd79c20b5;
}



// FUNCTION 1405ff220 FUN_1405ff220 body=6 status=ok
// SIG undefined FUN_1405ff220(void)

undefined8 FUN_1405ff220(void)

{
  return 0xc187faa0;
}



// FUNCTION 1405ff230 FUN_1405ff230 body=6 status=ok
// SIG undefined FUN_1405ff230(void)

undefined8 FUN_1405ff230(void)

{
  return 0xee848d49;
}



// FUNCTION 1405ff240 FUN_1405ff240 body=6 status=ok
// SIG undefined FUN_1405ff240(void)

undefined8 FUN_1405ff240(void)

{
  return 0xd874a894;
}



// FUNCTION 1405ff250 FUN_1405ff250 body=6 status=ok
// SIG undefined FUN_1405ff250(void)

undefined8 FUN_1405ff250(void)

{
  return 0x3832e4e0;
}



// FUNCTION 1405ff260 FUN_1405ff260 body=6 status=ok
// SIG undefined FUN_1405ff260(void)

undefined8 FUN_1405ff260(void)

{
  return 0xffca85f2;
}



// FUNCTION 1405ff270 FUN_1405ff270 body=6 status=ok
// SIG undefined FUN_1405ff270(void)

undefined8 FUN_1405ff270(void)

{
  return 0xd8c40db3;
}



// FUNCTION 1405ff2c0 FUN_1405ff2c0 body=282 status=ok
// SIG undefined FUN_1405ff2c0(void)

void FUN_1405ff2c0(void *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x81) {
      uVar5 = 0x80;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      uVar5 = (uint)(uVar2 / 0x18);
      if ((int)uVar5 < (int)param_2) {
        uVar5 = 0x7fffffff;
      }
    }
  }
  if (uVar5 == *(uint *)((longlong)param_1 + 0xc0c)) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0xc08);
  *(uint *)((longlong)param_1 + 0xc0c) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0xc00);
  if (uVar5 < 0x81) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)iVar1 * 0x18);
    pvVar3 = *(void **)((longlong)param_1 + 0xc00);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x18,0);
        *(void **)((longlong)param_1 + 0xc00) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)iVar1 * 0x18);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x18;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0xc00) = uVar4;
  return;
}



// FUNCTION 1405ff3e0 FUN_1405ff3e0 body=282 status=ok
// SIG undefined FUN_1405ff3e0(void)

void FUN_1405ff3e0(void *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x81) {
      uVar5 = 0x80;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x30,0);
      uVar5 = (uint)(uVar2 / 0x30);
      if ((int)uVar5 < (int)param_2) {
        uVar5 = 0x7fffffff;
      }
    }
  }
  if (uVar5 == *(uint *)((longlong)param_1 + 0x180c)) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x1808);
  *(uint *)((longlong)param_1 + 0x180c) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x1800);
  if (uVar5 < 0x81) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)iVar1 * 0x30);
    pvVar3 = *(void **)((longlong)param_1 + 0x1800);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x30,0);
        *(void **)((longlong)param_1 + 0x1800) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)iVar1 * 0x30);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x30;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x1800) = uVar4;
  return;
}



// FUNCTION 1405ff500 thunk_FUN_1406066e0 body=5 status=ok
// SIG undefined thunk_FUN_1406066e0(void)

void thunk_FUN_1406066e0(void)

{
  FUN_1406066e0();
  return;
}



// FUNCTION 1405ff510 StaticRegisterNativesUUserObjectListEntry body=34 status=ok
// SIG undefined StaticRegisterNativesUUserObjectListEntry(void)

void UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetEnumValue_143ffd358,1);
  return;
}



// FUNCTION 1405ff540 FUN_1405ff540 body=82 status=ok
// SIG undefined FUN_1405ff540(void)

void FUN_1405ff540(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855500 == 0) {
    uVar1 = FUN_1405ff1a0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855500 = GetStaticStruct(FUN_1405ffdb0,uVar2,L"ConditionalEchoData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1405ff5a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FNiagaraEventGeneratorProperties::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468553e0 == 0) {
    uVar1 = FUN_1405ff1b0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_1468553e0 =
         GetStaticStruct(FUN_1405ffde0,uVar2,L"DialogBlackboardCounterValueMap",0x50,uVar1);
  }
  return;
}



// FUNCTION 1405ff600 FUN_1405ff600 body=82 status=ok
// SIG undefined FUN_1405ff600(void)

void FUN_1405ff600(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855400 == 0) {
    uVar1 = FUN_1405ff1d0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855400 = GetStaticStruct(FUN_1405ffe10,uVar2,L"DialogBlackboardFlagValue",0x10,uVar1);
  }
  return;
}



// FUNCTION 1405ff660 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FNiagaraEventGeneratorProperties::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468553f0 == 0) {
    uVar1 = FUN_1405ff1c0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_1468553f0 = GetStaticStruct(FUN_1405ffe40,uVar2,L"DialogBlackboardFlagValueMap",0x50,uVar1);
  }
  return;
}



// FUNCTION 1405ff6c0 FUN_1405ff6c0 body=82 status=ok
// SIG undefined FUN_1405ff6c0(void)

void FUN_1405ff6c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468554a8 == 0) {
    uVar1 = FUN_1405ff1e0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_1468554a8 = GetStaticStruct(FUN_1405ffe70,uVar2,L"DialogEventSubscription",0x18,uVar1);
  }
  return;
}



// FUNCTION 1405ff720 FUN_1405ff720 body=82 status=ok
// SIG undefined FUN_1405ff720(void)

void FUN_1405ff720(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146855510 == 0) {
    uVar1 = FUN_1405ff1f0();
    uVar2 = Z_Construct_UPackage__Script_Niagara();
    DAT_146855510 = GetStaticStruct(FUN_1405ffea0,uVar2,L"DialogMoodInfo",8,uVar1);
  }
  return;
}


