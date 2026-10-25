// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142f507e0 FUN_142f507e0 body=185 status=ok
// SIG undefined FUN_142f507e0(void)

longlong FUN_142f507e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FMemory::Free();
  }
  FUN_140bff340(param_1 + 0x318);
  TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>::
  ~TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>(param_1 + 0x300);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x2e8);
  *(undefined ***)(param_1 + 0x2e0) = &PTR_FUN_144a92d00;
  *(undefined ***)(param_1 + 0x2d8) = &PTR_FUN_144a92ca0;
  *(undefined ***)(param_1 + 0x2d0) = &PTR_FUN_1441b3948;
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b0);
  }
  return param_1;
}



// FUNCTION 142f508a0 FUN_142f508a0 body=52 status=ok
// SIG undefined FUN_142f508a0(void)

undefined8 FUN_142f508a0(undefined8 param_1,ulonglong param_2)

{
  FUN_142f4fab0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142f508e0 FUN_142f508e0 body=146 status=ok
// SIG undefined FUN_142f508e0(void)

longlong FUN_142f508e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x708) = &PTR_FUN_144a92d00;
  *(undefined ***)(param_1 + 0x700) = &PTR_FUN_144a92ca0;
  *(undefined ***)(param_1 + 0x6f8) = &PTR_FUN_144a93390;
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_1441b3948;
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7b0);
  }
  return param_1;
}



// FUNCTION 142f50980 FUN_142f50980 body=373 status=ok
// SIG undefined FUN_142f50980(void)

void FUN_142f50980(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  plVar4 = (longlong *)FUN_142f6c9f0(lVar3);
  if (plVar4 != (longlong *)0x0) {
    lVar9 = *(longlong *)(param_1 + 0x2e8);
    lVar3 = lVar9 + (longlong)*(int *)(param_1 + 0x2f0) * 0x28;
    for (; lVar9 != lVar3; lVar9 = lVar9 + 0x28) {
      lVar5 = FUN_1405ec200(lVar9);
      if (lVar5 != 0) {
        lVar6 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar7 = FUN_142f71d80();
          lVar6 = lVar5;
          do {
            if (lVar6 == lVar7) goto LAB_142f50a40;
            lVar6 = *(longlong *)(lVar6 + 0x30);
          } while (lVar6 != 0);
        }
      }
      lVar5 = 0;
LAB_142f50a40:
      cVar2 = (**(code **)(*plVar4 + 0x728))(plVar4,lVar5);
      if (cVar2 != '\0') {
        uVar8 = 0;
        goto LAB_142f50ad0;
      }
    }
    lVar9 = *(longlong *)(param_1 + 0x300);
    lVar3 = lVar9 + (longlong)*(int *)(param_1 + 0x308) * 0x48;
    for (; lVar9 != lVar3; lVar9 = lVar9 + 0x48) {
      cVar2 = FUN_142f638e0(lVar9,param_1);
      if (cVar2 != '\0') {
        FUN_142f5af50(lVar9,&local_res8);
        lVar5 = local_res8;
        cVar2 = (**(code **)(*plVar4 + 0x728))(plVar4,local_res8);
        if (cVar2 != '\0') {
          uVar8 = FWeakObjectPtr::Get(lVar9 + 0x40);
LAB_142f50ad0:
          FUN_142f50b00(plVar4,lVar5,uVar8,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142f50b00 FUN_142f50b00 body=543 status=ok
// SIG undefined FUN_142f50b00(void)

void FUN_142f50b00(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((char)param_1[0x25] == '\x03') && (param_2 != 0)) {
    lVar2 = FUN_142f71d80();
    lVar4 = param_2;
    while (lVar4 != lVar2) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        return;
      }
    }
    if (((((char)param_1[0x92] != '\0') &&
         (plVar3 = (longlong *)FUN_142f5c680(param_1,param_2), plVar3 != (longlong *)0x0)) &&
        (cVar1 = (**(code **)(*param_1 + 0x770))(param_1,plVar3), cVar1 != '\0')) &&
       (cVar1 = FUN_142f64900(param_1,param_2), cVar1 != '\0')) {
      *(undefined1 *)(plVar3 + 2) = 1;
      FUN_142f66de0(param_1,param_2,1);
      FUN_142f515a0(param_1,*plVar3);
      if (param_1[0x8d] != 0) {
        lVar2 = FUN_142f71d80();
        for (lVar4 = param_1[0x8d]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar2) {
            if ((param_1[0x8d] != 0) && (param_4 == '\0')) goto LAB_142f50c0b;
            break;
          }
        }
      }
      FUN_142f6c3d0(param_1,param_2);
LAB_142f50c0b:
      if (param_3 == 0) {
        FUN_142f67c10(param_1,plVar3[1]);
      }
      FUN_142f71f10(*plVar3);
      FUN_142f65c80(param_1,param_2,3);
      FUN_142f663a0(param_1,param_2,3);
      lVar4 = *plVar3;
      if ((0 < *(int *)(lVar4 + 0x17c)) || (*(char *)(lVar4 + 0x180) == '\0')) {
        FUN_142f624a0(param_1,param_2,*(int *)(lVar4 + 0x17c),*(undefined1 *)(lVar4 + 0x180));
      }
      if (plVar3[5] == 0) {
        if (param_3 == 0) {
          lVar4 = *plVar3;
          if ((*(char *)(lVar4 + 0x173) != '\0') && (*(char *)(lVar4 + 0x172) == '\0')) {
            if (*(char *)(lVar4 + 0x174) == '\0') {
              return;
            }
            lVar4 = FUN_142f5ef60(param_1,param_2);
            if ((lVar4 != 0) && (lVar2 = (**(code **)(*param_1 + 0x148))(param_1), lVar2 != 0)) {
              lVar2 = UObjectBaseUtility::GetOutermost(lVar2);
              if (lVar2 == 0) {
                lVar2 = 0;
              }
              else {
                lVar2 = *(longlong *)(lVar2 + 0x18);
              }
              if (lVar2 == *(longlong *)(lVar4 + 0x30)) {
                return;
              }
            }
          }
          if (*(int *)(*plVar3 + 0x208) < 1) {
            return;
          }
          param_3 = **(longlong **)(*plVar3 + 0x200);
          if (param_3 == 0) {
            return;
          }
        }
        FUN_142f526d0(param_1,param_2,param_3,0,1);
      }
    }
  }
  return;
}



// FUNCTION 142f50d20 FUN_142f50d20 body=83 status=ok
// SIG undefined FUN_142f50d20(void)

void FUN_142f50d20(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
    if (lVar1 != 0) {
      FUN_142f50b00(lVar1,*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142f50d80 FUN_142f50d80 body=549 status=ok
// SIG undefined FUN_142f50d80(void)

void FUN_142f50d80(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  plVar4 = (longlong *)FUN_142f6c9f0(lVar3);
  if ((plVar4 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*plVar4 + 0x728))(plVar4,param_2), cVar2 != '\0')) {
    lVar11 = *(longlong *)(param_1 + 0x2e8);
    lVar3 = lVar11 + (longlong)*(int *)(param_1 + 0x2f0) * 0x28;
    if (lVar11 != lVar3) {
LAB_142f50e00:
      lVar5 = FUN_1405ec200(lVar11);
      if (lVar5 != 0) {
        lVar6 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar7 = FUN_142f71d80();
          lVar6 = lVar5;
          do {
            if (lVar6 == lVar7) {
              lVar7 = FUN_142f71d80();
              lVar6 = lVar5;
              goto LAB_142f50f38;
            }
            lVar6 = *(longlong *)(lVar6 + 0x30);
          } while (lVar6 != 0);
        }
      }
      lVar10 = 0;
      goto LAB_142f50e64;
    }
LAB_142f50e9d:
    lVar11 = *(longlong *)(param_1 + 0x300);
    lVar3 = lVar11 + (longlong)*(int *)(param_1 + 0x308) * 0x48;
    for (; lVar11 != lVar3; lVar11 = lVar11 + 0x48) {
      FUN_142f5af50(lVar11,&local_res8);
      cVar2 = FUN_142f638e0(lVar11,param_1);
      lVar10 = local_res8;
      if (cVar2 != '\0') {
        if (local_res8 != 0) {
          lVar6 = FUN_142f71d80();
          lVar5 = lVar10;
          do {
            lVar7 = lVar10;
            if (lVar5 == lVar6) goto LAB_142f50f00;
            lVar5 = *(longlong *)(lVar5 + 0x30);
          } while (lVar5 != 0);
        }
        lVar7 = 0;
LAB_142f50f00:
        if (param_2 != 0) {
          lVar6 = FUN_142f71d80();
          lVar5 = param_2;
          do {
            lVar8 = param_2;
            if (lVar5 == lVar6) goto LAB_142f50f20;
            lVar5 = *(longlong *)(lVar5 + 0x30);
          } while (lVar5 != 0);
        }
        lVar8 = 0;
LAB_142f50f20:
        if (lVar7 == lVar8) {
          uVar9 = FWeakObjectPtr::Get(lVar11 + 0x40);
LAB_142f50f7c:
          FUN_142f50b00(plVar4,lVar10,uVar9,0);
          return;
        }
      }
    }
  }
  return;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_142f50f38:
    lVar10 = lVar5;
    if (lVar6 == lVar7) goto LAB_142f50e66;
  }
LAB_142f50e64:
  lVar5 = 0;
LAB_142f50e66:
  if (param_2 != 0) {
    lVar7 = FUN_142f71d80();
    lVar6 = param_2;
    do {
      lVar8 = param_2;
      if (lVar6 == lVar7) goto LAB_142f50e87;
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  lVar8 = 0;
LAB_142f50e87:
  if (lVar5 == lVar8) {
    uVar9 = 0;
    goto LAB_142f50f7c;
  }
  lVar11 = lVar11 + 0x28;
  if (lVar11 == lVar3) goto LAB_142f50e9d;
  goto LAB_142f50e00;
}



// FUNCTION 142f50fb0 FUN_142f50fb0 body=112 status=ok
// SIG undefined FUN_142f50fb0(void)

void FUN_142f50fb0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    lVar1 = FUN_142f71d80();
    lVar3 = param_2;
    while (lVar3 != lVar1) {
      lVar3 = *(longlong *)(lVar3 + 0x30);
      if (lVar3 == 0) {
        return;
      }
    }
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_142f6c9f0(uVar2);
    if (lVar3 != 0) {
      FUN_142f50b00(lVar3,param_2,0,0);
    }
  }
  return;
}



// FUNCTION 142f51020 FUN_142f51020 body=153 status=ok
// SIG undefined FUN_142f51020(void)

void FUN_142f51020(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  if ((param_1 != (longlong *)0x0) && (cVar1 = FUN_142f638e0(param_2,param_1), cVar1 != '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_142f6c9f0(uVar2);
    if (lVar3 != 0) {
      uVar2 = FWeakObjectPtr::Get(param_2 + 0x40);
      puVar4 = (undefined8 *)FUN_142f5af50(param_2,local_res8);
      FUN_142f50b00(lVar3,*puVar4,uVar2,0);
    }
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142f510c0 FUN_142f510c0 body=802 status=ok
// SIG undefined FUN_142f510c0(void)

void FUN_142f510c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_res20;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined8 local_64;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  if (param_2[0xe] == 0) {
    lVar5 = *param_2;
    local_50 = 0;
    local_48 = 0;
    local_58 = 0;
    local_68 = *(undefined4 *)(lVar5 + 0x338);
    local_64 = *(undefined8 *)(lVar5 + 0x33c);
    local_80 = *(undefined8 *)(lVar5 + 0x348);
    FString::FString(local_78,lVar5 + 0x350);
    FSoftObjectPath::operator=(&local_58,&local_80);
    lVar5 = FWeakObjectPtr::Get(&local_68);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != local_64._4_4_) && (local_58 != 0)) {
        lVar5 = FUN_141796df0(&local_58);
        FWeakObjectPtr::operator=(&local_68,lVar5);
        if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          local_64 = CONCAT44(DAT_1464b56f4,(undefined4)local_64);
        }
        lVar5 = FWeakObjectPtr::Get(&local_68);
        if (lVar5 != 0) goto LAB_142f51255;
      }
LAB_142f5128b:
      lVar5 = 0;
    }
    else {
LAB_142f51255:
      lVar6 = FUN_140600840();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_142f5128b;
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
LAB_142f51144:
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar6 = FUN_1405e8e00(uVar7);
      if (lVar6 != 0) {
        FUN_1405f0e70(param_2 + 0xb,lVar6,lVar5);
      }
      goto LAB_142f5116c;
    }
    FUN_142f68510(param_1,param_2);
  }
  else if ((*(char *)(param_2[0xe] + 0x10) != '\0') &&
          (lVar5 = FStreamableHandle::GetLoadedAsset(), lVar5 != 0)) {
    lVar6 = FUN_140600840();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142f51144;
  }
  if (param_2[0xe] != 0) {
    FWeakObjectPtr::operator=(&local_res18,param_1);
    plVar9 = (longlong *)param_2[0xf];
    local_94 = local_res1c;
    local_res20 = param_2[0xe];
    local_98 = local_res18;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_a8 = 0;
    local_a0 = 0;
    local_90 = local_res20;
    local_88 = plVar9;
    puVar8 = (undefined8 *)operator_new(0x30,&local_a8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_GetPoolName_1459ec0f0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = local_res1c;
      *(undefined4 *)(puVar8 + 1) = local_res18;
      puVar8[2] = local_res20;
      puVar8[3] = local_88;
      local_88 = (longlong *)0x0;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar8[5] = uVar7;
      plVar9 = (longlong *)0x0;
      *puVar8 = &PTR_GetPoolName_1459ec138;
    }
    FStreamableHandle::BindCompleteDelegate(param_2[0xe],&local_a8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_88)();
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    return;
  }
LAB_142f5116c:
  *(undefined1 *)(param_2 + 10) = 0;
  return;
}



// FUNCTION 142f513f0 FUN_142f513f0 body=247 status=ok
// SIG undefined FUN_142f513f0(void)

void FUN_142f513f0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
  lVar3 = UObjectBaseUtility::GetOutermost(uVar2);
  plVar5 = (longlong *)param_1[0x8b];
  plVar6 = plVar5 + (longlong)(int)param_1[0x8c] * 0x10;
  if (plVar5 != plVar6) {
    plVar7 = plVar5 + 1;
    do {
      if ((char)plVar7[9] != '\0') {
        cVar1 = FUN_142f654f0(param_1,*plVar7);
        if (cVar1 != '\0') {
          FUN_142f68510(param_1,plVar5);
        }
        if (((char)plVar7[9] != '\0') && (cVar1 = FUN_142f64900(param_1,*plVar7), cVar1 != '\0')) {
          lVar4 = FUN_142f5ef60(param_1,*plVar7);
          if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x30) != *(longlong *)(lVar3 + 0x58))) &&
             ((*plVar5 == 0 || (*(char *)(*plVar5 + 0x330) == '\0')))) {
            FUN_142f68510(param_1,plVar5);
          }
          else {
            FUN_142f510c0(param_1,plVar5);
          }
        }
      }
      plVar5 = plVar5 + 0x10;
      plVar7 = plVar7 + 0x10;
    } while (plVar5 != plVar6);
  }
  return;
}



// FUNCTION 142f514f0 FUN_142f514f0 body=169 status=ok
// SIG undefined FUN_142f514f0(void)

void FUN_142f514f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong *local_res10 [3];
  
  if (param_2 != (longlong *)0x0) {
    local_res10[0] = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,param_1,0);
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x40000000;
    if ((int)param_2[5] < 1) {
      *(undefined4 *)(param_2 + 5) = 1;
    }
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x68,local_res10);
    FUN_142f4dbe0(*(undefined8 *)(param_1 + 0x68),(longlong)*(int *)(param_1 + 0x70),
                  (ulonglong)local_res10[0] & 0xff,local_res10);
  }
  return;
}



// FUNCTION 142f515a0 FUN_142f515a0 body=234 status=ok
// SIG undefined FUN_142f515a0(void)

void FUN_142f515a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((*(char *)(param_2 + 0x177) != '\0') &&
     ((*(char *)(param_2 + 0x260) != '\0' || (0 < *(int *)(param_2 + 0x270))))) {
    plVar1 = param_1 + 0xb1;
    plVar7 = (longlong *)*plVar1;
    iVar3 = (int)param_1[0xb2];
    plVar2 = plVar7 + iVar3;
    for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0xb2) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x594) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(longlong *)((longlong)iVar3 * 8 + *plVar1) = param_2;
    if (param_1[0x8d] != 0) {
      lVar6 = FUN_142f71d80();
      for (lVar4 = param_1[0x8d]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar6) {
          if (param_1[0x8d] == 0) {
            return;
          }
          cVar5 = (**(code **)(*param_1 + 0x720))(param_1);
          if (cVar5 == '\0') {
            return;
          }
          FUN_142f6c3d0(param_1,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142f51690 FUN_142f51690 body=443 status=ok
// SIG undefined FUN_142f51690(void)

void FUN_142f51690(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar5 = FUN_142f71d80();
    lVar6 = param_3;
    do {
      if (lVar6 == lVar5) {
        lVar6 = FUN_142f5c680(param_1,param_3);
        if (lVar6 == 0) {
          return;
        }
        if (*(char *)(lVar6 + 0x10) != '\x01') {
          return;
        }
        uVar7 = UScrollBox::GetPrivateStaticClass();
        lVar6 = AGameStateBase::OnRep_GameModeClass(param_2,uVar7);
        if (lVar6 == 0) {
          return;
        }
        lVar5 = UScrollBox::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return;
        }
        local_20 = 0xffffffff;
        local_38 = 0;
        local_30 = 0;
        uStack_28 = 0;
        local_1c = 0;
        local_18 = 0;
        local_40 = &DAT_1441d2800;
        FMemFileOut::seekp(&local_40,param_3);
        FWeakObjectPtr::operator=(&local_20,param_4);
        if (param_4 == 0) {
          (**(code **)(local_40 + 0x10))(&local_40);
        }
        else {
          local_30 = *(undefined8 *)(param_4 + 200);
          uStack_28 = *(undefined8 *)(param_4 + 0xd0);
          local_38 = *(undefined8 *)(param_4 + 0x18);
        }
        cVar4 = FUN_142f63720(param_1,&local_40,param_1);
        if (cVar4 != '\0') {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x560);
        *(int *)(param_1 + 0x560) = iVar2 + 1;
        if (*(int *)(param_1 + 0x564) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x558,iVar2);
        }
        lVar5 = *(longlong *)(param_1 + 0x558);
        local_58 = (undefined4)param_3;
        uStack_54 = (undefined4)((ulonglong)param_3 >> 0x20);
        uStack_50 = (undefined4)param_4;
        uStack_4c = (undefined4)((ulonglong)param_4 >> 0x20);
        puVar1 = (undefined4 *)(lVar5 + (longlong)iVar2 * 0x18);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
        *(longlong *)(lVar5 + 0x10 + (longlong)iVar2 * 0x18) = lVar6;
        FUN_142f6be10(param_1);
        return;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 142f51850 FUN_142f51850 body=520 status=ok
// SIG undefined FUN_142f51850(void)

void FUN_142f51850(longlong *param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  plVar5 = (longlong *)param_3[6];
  plVar6 = plVar5 + *(int *)(param_3 + 7);
  for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
    if (*plVar5 == param_2) {
      return;
    }
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_142f59550(param_3,&local_48,1);
  plVar6 = local_48;
  do {
    if (plVar6 == local_48 + (int)local_40) {
LAB_142f51a32:
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
      return;
    }
    if (*plVar6 == param_2) {
      iVar1 = *(int *)(param_3 + 7);
      *(int *)(param_3 + 7) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0x3c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3 + 6,iVar1);
      }
      *(longlong *)(param_3[6] + (longlong)iVar1 * 8) = param_2;
      cVar4 = (**(code **)(*param_1 + 0x700))(param_1);
      if (cVar4 != '\0') {
        if (param_4 == '\0') {
          uVar2 = param_3[1];
          local_38 = (undefined8 *)0x0;
          local_30 = 0;
          FUN_142f5e530(param_1,&local_38);
          puVar3 = local_38;
          uVar8 = 0;
          uVar7 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
          if (local_38 + (int)local_30 < local_38) {
            uVar7 = uVar8;
          }
          puVar9 = local_38;
          if (uVar7 != 0) {
            do {
              FUN_142f7b280(*puVar9,uVar2,param_2);
              uVar8 = uVar8 + 1;
              puVar9 = puVar9 + 1;
            } while (uVar8 != uVar7);
          }
          if (puVar3 != (undefined8 *)0x0) {
            FMemory::Free(puVar3);
          }
        }
        FUN_142f6b400(*param_3,param_2,6,0);
        FUN_142f6b5e0(*param_3,param_3[5],4);
        FUN_142f65f00(param_1,param_3[1],param_2,6);
        FUN_142f66680(param_1,param_3[1],param_2,6,0);
        FUN_142f66120(param_1,param_3[1],param_3[5],4);
        FUN_142f668e0(param_1,param_3[1],param_3[5],4);
      }
      goto LAB_142f51a32;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 142f51a60 FUN_142f51a60 body=558 status=ok
// SIG undefined FUN_142f51a60(void)

void FUN_142f51a60(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_38;
  undefined2 *local_30;
  undefined8 local_28;
  
  if (param_2 != 0) {
    lVar5 = FUN_142f71d80();
    lVar8 = param_2;
    while (lVar8 != lVar5) {
      lVar8 = *(longlong *)(lVar8 + 0x30);
      if (lVar8 == 0) {
        return;
      }
    }
    local_30 = (undefined2 *)0x0;
    local_38 = 0;
    local_28 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    lVar6 = FUN_142f71d80();
    lVar5 = local_28;
    lVar8 = param_2;
    do {
      if (lVar8 == lVar6) {
        uVar7 = FSoftObjectPath::FSoftObjectPath(local_60,param_2);
        FSoftObjectPath::operator=(&local_38,uVar7);
        FWeakObjectPtr::operator=(&local_48,param_2);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_44 = CONCAT44(DAT_1464b56f4,(undefined4)local_44);
        goto LAB_142f51b61;
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
    local_48 = 0xffffffff;
    local_38 = 0;
    uVar3 = local_28._4_4_;
    local_44 = local_44 & 0xffffffff00000000;
    local_28 = (ulonglong)local_28._4_4_ << 0x20;
    if ((lVar5 < 0) && (uVar3 != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_30,0);
    }
    if (local_30 != (undefined2 *)0x0) {
      *local_30 = 0;
    }
    local_44 = local_44 & 0xffffffff;
LAB_142f51b61:
    plVar9 = (longlong *)(param_1 + 0x2e8);
    lVar8 = *plVar9;
    iVar2 = *(int *)(param_1 + 0x2f0);
    for (lVar5 = lVar8; lVar5 != lVar8 + (longlong)iVar2 * 0x28; lVar5 = lVar5 + 0x28) {
      cVar4 = FSoftObjectPath::operator==(lVar5 + 0x10,&local_38);
      if (cVar4 != '\0') {
        if ((int)((lVar5 - lVar8) / 0x28) != -1) goto LAB_142f51c5d;
        break;
      }
    }
    iVar2 = *(int *)(param_1 + 0x2f0);
    *(int *)(param_1 + 0x2f0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2f4) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar9 + (longlong)iVar2 * 0x28);
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
    if (0x7fffffff < (uint)puVar1[9]) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 6,0);
    }
    if (*(undefined2 **)(puVar1 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(puVar1 + 6) = 0;
    }
    puVar1[2] = 0;
    *puVar1 = local_48;
    puVar1[1] = (undefined4)local_44;
    puVar1[2] = local_44._4_4_;
    local_78 = local_38;
    FString::FString(local_70,&local_30);
    FSoftObjectPath::operator=(puVar1 + 4,&local_78);
LAB_142f51c5d:
    if (local_30 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142f51c90 FUN_142f51c90 body=329 status=ok
// SIG undefined FUN_142f51c90(void)

void FUN_142f51c90(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 local_38;
  undefined8 uStack_30;
  
  bVar4 = false;
  uVar8 = 0;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  FUN_142f59e30(param_2,param_3,&local_38);
  plVar5 = local_38;
  uVar7 = (ulonglong)((longlong)(local_38 + (int)uStack_30) + (7 - (longlong)local_38)) >> 3;
  if (local_38 + (int)uStack_30 < local_38) {
    uVar7 = uVar8;
  }
  plVar9 = local_38;
  if (uVar7 != 0) {
    do {
      lVar3 = *plVar9;
      if ((lVar3 != 0) && ((*(char *)(lVar3 + 0xb2) != '\0' || (*(char *)(lVar3 + 0xb3) != '\0'))))
      {
        local_38 = *(longlong **)(param_2 + 0x10);
        plVar1 = param_1 + 0x9e;
        uStack_30 = lVar3;
        iVar6 = FUN_142f58800(plVar1,&local_38);
        if (iVar6 == -1) {
          iVar6 = (int)param_1[0x9f];
          *(int *)(param_1 + 0x9f) = iVar6 + 1;
          if (*(int *)((longlong)param_1 + 0x4fc) < iVar6 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar6);
          }
          puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar6 * 0x10);
          *puVar2 = (undefined4)local_38;
          puVar2[1] = local_38._4_4_;
          puVar2[2] = (int)uStack_30;
          puVar2[3] = uStack_30._4_4_;
        }
        bVar4 = true;
      }
      uVar8 = uVar8 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar8 != uVar7);
    if (bVar4) {
      (**(code **)(*param_1 + 0x748))(param_1,0);
    }
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar5);
  return;
}



// FUNCTION 142f51de0 FUN_142f51de0 body=508 status=ok
// SIG undefined FUN_142f51de0(void)

void FUN_142f51de0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined **local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_90 = (longlong *)0x0;
  local_88 = 0;
  FUN_142f59e30(param_2,param_3,&local_90);
  uVar7 = 0;
  uVar8 = (ulonglong)((longlong)(local_90 + (int)local_88) + (7 - (longlong)local_90)) >> 3;
  if (local_90 + (int)local_88 < local_90) {
    uVar8 = uVar7;
  }
  plVar6 = local_90;
  if (uVar8 != 0) {
    do {
      lVar1 = *plVar6;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
        local_70 = &DAT_1441d2800;
        local_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0xffffffff;
        local_4c = 0;
        local_48 = 0;
        FMemFileOut::seekp(&local_70,*(undefined8 *)(param_2 + 0x10));
        FWeakObjectPtr::operator=(&local_50,lVar1);
        local_60 = *(undefined8 *)(lVar1 + 200);
        uStack_58 = *(undefined8 *)(lVar1 + 0xd0);
        local_68 = *(undefined8 *)(lVar1 + 0x18);
        cVar2 = FUN_142f63b20(&local_70,param_1);
        if (cVar2 != '\0') {
          uVar3 = FWeakObjectPtr::Get(&local_50);
          puVar4 = (undefined8 *)(**(code **)(local_70 + 0x18))(&local_70,local_98);
          lVar5 = FUN_142f5c680(param_1,*puVar4);
          if (((lVar5 != 0) && ((byte)(*(char *)(lVar5 + 0x10) - 1U) < 2)) &&
             (cVar2 = FUN_142f636b0(uVar3,lVar5), cVar2 != '\0')) goto LAB_142f51f80;
        }
        lVar5 = FUN_142f58f20(param_1 + 0x610,*(undefined8 *)(lVar1 + 0x30),&local_70);
        if (lVar5 == 0) {
          local_78 = &local_70;
          local_80 = (undefined8 *)(lVar1 + 0x30);
          FUN_142f4d180(param_1 + 0x610,local_res20,&local_80,0);
        }
      }
LAB_142f51f80:
      uVar7 = uVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (uVar7 != uVar8);
  }
  if (local_90 != (longlong *)0x0) {
    FMemory::Free(local_90);
  }
  return;
}



// FUNCTION 142f51fe0 FUN_142f51fe0 body=329 status=ok
// SIG undefined FUN_142f51fe0(void)

void FUN_142f51fe0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 local_38;
  undefined8 uStack_30;
  
  bVar4 = false;
  uVar8 = 0;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  FUN_142f59e30(param_2,param_3,&local_38);
  plVar5 = local_38;
  uVar7 = (ulonglong)((longlong)(local_38 + (int)uStack_30) + (7 - (longlong)local_38)) >> 3;
  if (local_38 + (int)uStack_30 < local_38) {
    uVar7 = uVar8;
  }
  plVar9 = local_38;
  if (uVar7 != 0) {
    do {
      lVar3 = *plVar9;
      if ((lVar3 != 0) && ((*(char *)(lVar3 + 0xb4) != '\0' || (*(char *)(lVar3 + 0xb5) != '\0'))))
      {
        local_38 = *(longlong **)(param_2 + 0x10);
        plVar1 = param_1 + 0xa0;
        uStack_30 = lVar3;
        iVar6 = FUN_142f58800(plVar1,&local_38);
        if (iVar6 == -1) {
          iVar6 = (int)param_1[0xa1];
          *(int *)(param_1 + 0xa1) = iVar6 + 1;
          if (*(int *)((longlong)param_1 + 0x50c) < iVar6 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar6);
          }
          puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar6 * 0x10);
          *puVar2 = (undefined4)local_38;
          puVar2[1] = local_38._4_4_;
          puVar2[2] = (int)uStack_30;
          puVar2[3] = uStack_30._4_4_;
        }
        bVar4 = true;
      }
      uVar8 = uVar8 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar8 != uVar7);
    if (bVar4) {
      (**(code **)(*param_1 + 0x750))(param_1,0);
    }
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar5);
  return;
}



// FUNCTION 142f52130 FUN_142f52130 body=444 status=ok
// SIG undefined FUN_142f52130(void)

void FUN_142f52130(longlong param_1,ulonglong param_2,float param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 *local_38;
  undefined8 local_30;
  
  puVar8 = *(ulonglong **)(param_1 + 0x548);
  puVar1 = puVar8 + (longlong)*(int *)(param_1 + 0x550) * 3;
  if (puVar8 != puVar1) {
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      if (*puVar8 != 0) {
        uVar3 = FUN_142f71d80();
        for (uVar5 = *puVar8; (uVar6 = uVar7, uVar5 != 0 && (uVar6 = *puVar8, uVar5 != uVar3));
            uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
        }
      }
      uVar5 = uVar7;
      if (param_2 != 0) {
        uVar4 = FUN_142f71d80();
        uVar3 = param_2;
        do {
          uVar5 = param_2;
          if (uVar3 == uVar4) break;
          uVar3 = *(ulonglong *)(uVar3 + 0x30);
          uVar5 = uVar7;
        } while (uVar3 != 0);
      }
      if (uVar6 == uVar5) {
        fVar10 = param_3 + *(float *)(puVar8 + 1);
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        *(float *)(puVar8 + 1) = fVar10;
        if (0.0 < fVar10) {
          *(undefined1 *)((longlong)puVar8 + 0x12) = 0;
        }
        if (*(float *)((longlong)puVar8 + 0xc) <= fVar10 &&
            fVar10 != *(float *)((longlong)puVar8 + 0xc)) {
          *(float *)((longlong)puVar8 + 0xc) = fVar10;
        }
        if (*(char *)(param_1 + 0x128) == '\x03') {
          local_38 = (undefined8 *)0x0;
          local_30 = 0;
          FUN_142f5e530(param_1,&local_38);
          puVar2 = local_38;
          uVar6 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
          if (local_38 + (int)local_30 < local_38) {
            uVar6 = uVar7;
          }
          puVar9 = local_38;
          if (uVar6 != 0) {
            do {
              FUN_142f7b360(*puVar9,param_2,param_3);
              uVar7 = uVar7 + 1;
              puVar9 = puVar9 + 1;
            } while (uVar7 != uVar6);
          }
          if (puVar2 != (undefined8 *)0x0) {
            FMemory::Free(puVar2);
          }
        }
        FUN_142f65da0(param_1,param_2,2,(int)puVar8[1],*(undefined4 *)((longlong)puVar8 + 0xc));
        FUN_142f664f0(param_1,param_2,2,(int)puVar8[1],*(undefined4 *)((longlong)puVar8 + 0xc));
        return;
      }
      puVar8 = puVar8 + 3;
    } while (puVar8 != puVar1);
  }
  return;
}



// FUNCTION 142f522f0 FUN_142f522f0 body=68 status=ok
// SIG undefined FUN_142f522f0(void)

void FUN_142f522f0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
    if (lVar1 != 0) {
      FUN_142f52130(lVar1,*(undefined8 *)(param_1 + 0x10));
    }
  }
  return;
}



// FUNCTION 142f52340 FUN_142f52340 body=329 status=ok
// SIG undefined FUN_142f52340(void)

void FUN_142f52340(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 local_38;
  undefined8 uStack_30;
  
  bVar4 = false;
  uVar8 = 0;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  FUN_142f59e30(param_2,param_3,&local_38);
  plVar5 = local_38;
  uVar7 = (ulonglong)((longlong)(local_38 + (int)uStack_30) + (7 - (longlong)local_38)) >> 3;
  if (local_38 + (int)uStack_30 < local_38) {
    uVar7 = uVar8;
  }
  plVar9 = local_38;
  if (uVar7 != 0) {
    do {
      lVar3 = *plVar9;
      if ((lVar3 != 0) && ((*(char *)(lVar3 + 0xb0) != '\0' || (*(char *)(lVar3 + 0xb1) != '\0'))))
      {
        local_38 = *(longlong **)(param_2 + 0x10);
        plVar1 = param_1 + 0x9c;
        uStack_30 = lVar3;
        iVar6 = FUN_142f58800(plVar1,&local_38);
        if (iVar6 == -1) {
          iVar6 = (int)param_1[0x9d];
          *(int *)(param_1 + 0x9d) = iVar6 + 1;
          if (*(int *)((longlong)param_1 + 0x4ec) < iVar6 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar6);
          }
          puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar6 * 0x10);
          *puVar2 = (undefined4)local_38;
          puVar2[1] = local_38._4_4_;
          puVar2[2] = (int)uStack_30;
          puVar2[3] = uStack_30._4_4_;
        }
        bVar4 = true;
      }
      uVar8 = uVar8 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar8 != uVar7);
    if (bVar4) {
      (**(code **)(*param_1 + 0x740))(param_1,0);
    }
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar5);
  return;
}



// FUNCTION 142f52490 FUN_142f52490 body=389 status=ok
// SIG undefined FUN_142f52490(void)

void FUN_142f52490(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar8 = 0;
  bVar5 = false;
  bVar4 = false;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_142f59e30(param_2,param_3,&local_48);
  uVar9 = (ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48)) >> 3;
  if (local_48 + (int)local_40 < local_48) {
    uVar9 = uVar8;
  }
  plVar10 = local_48;
  if (uVar9 != 0) {
    do {
      lVar3 = *plVar10;
      if ((lVar3 != 0) &&
         (((*(char *)(lVar3 + 0xad) != '\0' || (*(char *)(lVar3 + 0xae) != '\0')) ||
          (*(char *)(lVar3 + 0xaf) != '\0')))) {
        local_38 = *(undefined8 *)(param_2 + 0x10);
        lVar6 = param_1[0x9b];
        plVar1 = param_1 + 0x9a;
        uStack_30 = lVar3;
        iVar7 = FUN_142f58800(plVar1,&local_38);
        if (iVar7 == -1) {
          iVar7 = (int)param_1[0x9b];
          *(int *)(param_1 + 0x9b) = iVar7 + 1;
          if (*(int *)((longlong)param_1 + 0x4dc) < iVar7 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar7);
          }
          puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar7 * 0x10);
          *puVar2 = (undefined4)local_38;
          puVar2[1] = local_38._4_4_;
          puVar2[2] = (undefined4)uStack_30;
          puVar2[3] = uStack_30._4_4_;
        }
        bVar4 = bVar5;
        if ((int)lVar6 < (int)param_1[0x9b]) {
          bVar5 = true;
          bVar4 = true;
        }
      }
      uVar8 = uVar8 + 1;
      plVar10 = plVar10 + 1;
    } while (uVar8 != uVar9);
    if (bVar4) {
      (**(code **)(*param_1 + 0x738))(param_1,0);
    }
  }
  if (local_48 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142f52620 FUN_142f52620 body=161 status=ok
// SIG undefined FUN_142f52620(void)

void FUN_142f52620(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x148))();
    lVar3 = FUN_142f6c9f0(uVar2);
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x128) == '\x03')) &&
       (cVar1 = FUN_142f6f290(lVar3,param_2), cVar1 != '\0')) {
      uVar2 = FWeakObjectPtr::Get(param_2 + 0x40);
      puVar4 = (undefined8 *)FUN_142f5af50(param_2,local_res8);
      FUN_142f526d0(lVar3,*puVar4,uVar2,0,0);
    }
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142f526d0 FUN_142f526d0 body=2420 status=ok
// SIG undefined FUN_142f526d0(void)

void FUN_142f526d0(longlong *param_1,longlong *param_2,longlong *param_3,longlong **param_4,
                  char param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong **pplVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  int local_c8;
  longlong *local_c0;
  int local_b8;
  int local_b4;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong **local_90;
  longlong *local_88;
  undefined8 *local_80;
  int local_78;
  int local_74;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  if (param_3 == (longlong *)0x0) {
    return;
  }
  local_88 = param_2;
  cVar3 = (**(code **)(*param_1 + 0x700))();
  if (cVar3 == '\0') {
    return;
  }
  plVar9 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  pplVar12 = &local_48;
  if (param_4 != (longlong **)0x0) {
    pplVar12 = param_4;
  }
  local_90 = pplVar12;
  plVar5 = (longlong *)FUN_142f5c680(param_1,param_2);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  if ((char)plVar5[2] != '\x01') {
    return;
  }
  lVar6 = plVar5[5];
  local_a8 = plVar5;
  if (lVar6 == 0) {
    plVar13 = plVar9;
    if (0 < *(int *)(*plVar5 + 0x208)) {
      plVar13 = (longlong *)**(undefined8 **)(*plVar5 + 0x200);
    }
    if (plVar13 == param_3) goto LAB_142f5285a;
LAB_142f527b0:
    if (param_5 == '\0') {
      return;
    }
  }
  else if (*(longlong **)(lVar6 + 0x70) != param_3) goto LAB_142f527b0;
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x7b) != '\0')) {
    local_b8 = *(int *)(lVar6 + 0x30);
    lVar17 = (longlong)local_b8;
    pvVar1 = *(void **)(lVar6 + 0x28);
    local_c0 = (longlong *)0x0;
    plVar13 = plVar9;
    if (local_b8 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_c0,local_b8,0);
      plVar13 = local_c0;
      _guard_xfg_dispatch_icall_nop(local_c0,pvVar1,lVar17 << 3);
    }
    lVar6 = (longlong)local_b8;
    for (plVar20 = plVar13; plVar20 != plVar13 + lVar6; plVar20 = plVar20 + 1) {
      if ((*(char *)(*plVar20 + 0xb9) != '\0') &&
         (cVar3 = FUN_142f636b0(*plVar20,plVar5), cVar3 == '\0')) goto joined_r0x000142f52a95;
    }
    pplVar12 = local_90;
    if (plVar13 != (longlong *)0x0) {
      FMemory::Free(plVar13);
      pplVar12 = local_90;
    }
  }
LAB_142f5285a:
  local_70 = (longlong *)0x0;
  local_68 = 0;
  FUN_142f59550(plVar5,&local_70,1);
  iVar11 = (int)local_68;
  lVar6 = (longlong)(int)local_68;
  if ((int)local_68 != 0) {
    iVar4 = *(int *)(pplVar12 + 1);
    if (*(int *)((longlong)pplVar12 + 0xc) < (int)local_68 + iVar4) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(pplVar12);
      iVar4 = *(int *)(pplVar12 + 1);
    }
    _guard_xfg_dispatch_icall_nop(*pplVar12 + iVar4,local_70,lVar6 << 3);
    *(int *)(pplVar12 + 1) = *(int *)(pplVar12 + 1) + iVar11;
  }
  local_60 = plVar5[5];
  plVar5[5] = (longlong)param_3;
  plVar13 = plVar9;
  if (param_2 != (longlong *)0x0) {
    plVar7 = (longlong *)FUN_142f71d80();
    plVar20 = param_2;
    do {
      plVar13 = param_2;
      if (plVar20 == plVar7) break;
      plVar20 = (longlong *)plVar20[6];
      plVar13 = plVar9;
    } while (plVar20 != (longlong *)0x0);
  }
  plVar20 = plVar9;
  if (param_1[0x8d] != 0) {
    plVar8 = (longlong *)FUN_142f71d80();
    for (plVar7 = (longlong *)param_1[0x8d];
        (plVar20 = plVar9, plVar7 != (longlong *)0x0 &&
        (plVar20 = (longlong *)param_1[0x8d], plVar7 != plVar8)); plVar7 = (longlong *)plVar7[6]) {
    }
  }
  if (plVar13 == plVar20) {
    FUN_142f6be10(param_1);
  }
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  FUN_142f59550(plVar5,&local_a0,1);
  plVar9 = local_a0;
  iVar11 = (int)plVar5[9] + -1;
  plVar13 = plVar5;
  if (-1 < iVar11) {
    plVar20 = plVar5 + 8;
    plVar7 = local_a0 + (int)local_98;
    lVar6 = (longlong)iVar11 * 8;
    lVar16 = (longlong)(int)plVar5[9] << 3;
    lVar17 = lVar6;
    do {
      if (plVar9 != plVar7) {
        plVar13 = plVar9;
        do {
          if (*plVar13 == *(longlong *)(lVar17 + *plVar20)) goto LAB_142f529b4;
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar7);
      }
      iVar4 = (int)plVar5[9];
      iVar10 = (iVar4 - iVar11) + -1;
      if (iVar10 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar20 + lVar6),(void *)(*plVar20 + lVar16),(longlong)iVar10 << 3);
        iVar4 = (int)plVar5[9];
      }
      *(int *)(plVar5 + 9) = iVar4 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar20);
LAB_142f529b4:
      lVar16 = lVar16 + -8;
      lVar6 = lVar6 + -8;
      lVar17 = lVar17 + -8;
      iVar11 = iVar11 + -1;
      param_2 = local_88;
      plVar13 = local_a8;
    } while (-1 < iVar11);
  }
  lVar6 = local_60;
  uVar19 = 0;
  local_80 = (undefined8 *)0x0;
  local_c8 = 0;
  local_74 = 0;
  if (local_60 != 0) {
    FUN_142f6a700(param_1,*plVar13,local_60);
    FUN_142f6ae20(param_1,*plVar13,lVar6);
    FUN_142f6ac10(param_1,*plVar13,lVar6);
    FUN_142f6a4f0(param_1,*plVar13,lVar6);
    FUN_142f6aa00(param_1,*plVar13,lVar6);
  }
  FUN_142f51de0(param_1,*plVar13,param_3);
  FUN_142f52490(param_1,*plVar13,param_3);
  FUN_142f52340(param_1,*plVar13,param_3);
  FUN_142f51c90(param_1,*plVar13,param_3);
  FUN_142f51fe0(param_1,*plVar13,param_3);
  local_b8 = (int)plVar13[7];
  lVar6 = (longlong)local_b8;
  pvVar1 = (void *)plVar13[6];
  local_c0 = (longlong *)0x0;
  if (local_b8 == 0) {
    local_b4 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_c0,local_b8,0);
    _guard_xfg_dispatch_icall_nop(local_c0,pvVar1,lVar6 << 3);
  }
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_142f5e530(param_1,&local_58);
  plVar9 = local_58;
  uVar15 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3;
  if (local_58 + (int)local_50 < local_58) {
    uVar15 = uVar19;
  }
  plVar5 = local_58;
  uVar14 = uVar19;
  if (uVar15 != 0) {
    do {
      FUN_142f7b560(*plVar5,param_2,param_3,&local_c0);
      uVar14 = uVar14 + 1;
      plVar5 = plVar5 + 1;
    } while (uVar14 != uVar15);
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  if (local_c0 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142f513f0(param_1);
  if (local_60 != 0) {
    FUN_142f66120(param_1,param_2,local_60,6);
    uVar15 = (ulonglong)((longlong)(local_70 + (int)local_68) + (7 - (longlong)local_70)) >> 3;
    if (local_70 + (int)local_68 < local_70) {
      uVar15 = uVar19;
    }
    plVar9 = local_70;
    iVar11 = local_74;
    if (uVar15 != 0) {
      do {
        lVar6 = *plVar9;
        if (lVar6 != 0) {
          for (plVar5 = local_a0; plVar5 != local_a0 + (int)local_98; plVar5 = plVar5 + 1) {
            if (*plVar5 == lVar6) goto LAB_142f52c5c;
          }
          lVar17 = FUN_142f5c680(param_1,param_2);
          if (((lVar17 == 0) || (1 < (byte)(*(char *)(lVar17 + 0x10) - 1U))) ||
             (cVar3 = FUN_142f636b0(lVar6,lVar17), cVar3 == '\0')) {
            lVar17 = (longlong)local_c8;
            local_78 = local_c8 + 1;
            if (iVar11 < local_78) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80,local_c8);
              iVar11 = local_74;
            }
            local_c8 = local_78;
            local_80[lVar17] = lVar6;
            FUN_142f65f00(param_1,param_2,lVar6,5);
          }
        }
LAB_142f52c5c:
        uVar19 = uVar19 + 1;
        plVar9 = plVar9 + 1;
      } while (uVar19 != uVar15);
    }
  }
  plVar5 = (longlong *)0x0;
  FUN_142f66120(param_1,param_2,param_3,3);
  local_c0 = (longlong *)0x0;
  iVar11 = 0;
  local_b4 = 0;
  local_58 = local_a0 + (int)local_98;
  plVar9 = (longlong *)((ulonglong)((longlong)local_58 + (7 - (longlong)local_a0)) >> 3);
  if (local_58 < local_a0) {
    plVar9 = plVar5;
  }
  plVar13 = local_a0;
  plVar20 = plVar5;
  local_b0 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    do {
      lVar6 = *plVar13;
      if (lVar6 != 0) {
        plVar8 = *local_90;
        plVar7 = plVar8 + *(int *)(local_90 + 1);
        for (; plVar9 = local_b0, plVar8 != plVar7; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar6) goto LAB_142f52dbc;
        }
        plVar8 = (longlong *)local_a8[6];
        plVar7 = plVar8 + (int)local_a8[7];
        for (; plVar8 != plVar7; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar6) goto LAB_142f52dbc;
        }
        FUN_142f65f00(param_1,param_2,lVar6,4);
        plVar9 = local_b0;
        if (((*(char *)(lVar6 + 0xa3) != '\0') &&
            (lVar17 = FUN_142f5ef60(param_1,param_2), plVar9 = local_b0, lVar17 != 0)) &&
           (lVar16 = (**(code **)(*param_1 + 0x148))(param_1), plVar9 = local_b0, lVar16 != 0)) {
          lVar16 = UObjectBaseUtility::GetOutermost(lVar16);
          if (lVar16 == 0) {
            local_88 = (longlong *)0x0;
            lVar16 = 0;
          }
          else {
            lVar16 = *(longlong *)(lVar16 + 0x18);
          }
          plVar9 = local_b0;
          if (lVar16 == *(longlong *)(lVar17 + 0x30)) {
            local_b8 = iVar11 + 1;
            if (local_b4 < local_b8) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c0,iVar11);
            }
            local_c0[iVar11] = lVar6;
            plVar9 = local_b0;
            iVar11 = local_b8;
          }
        }
      }
LAB_142f52dbc:
      plVar20 = (longlong *)((longlong)plVar20 + 1);
      plVar13 = plVar13 + 1;
    } while (plVar20 != plVar9);
  }
  lVar6 = local_60;
  if (local_60 != 0) {
    FUN_142f6b5e0(*local_a8,local_60,6);
    FUN_142f668e0(param_1,param_2,lVar6,6);
    plVar9 = (longlong *)
             ((ulonglong)((longlong)(local_80 + local_c8) + (7 - (longlong)local_80)) >> 3);
    if (local_80 + local_c8 < local_80) {
      plVar9 = plVar5;
    }
    plVar13 = plVar5;
    puVar18 = local_80;
    if (plVar9 != (longlong *)0x0) {
      do {
        uVar2 = *puVar18;
        FUN_142f66680(param_1,param_2,uVar2,5,0);
        FUN_142f6b400(*local_a8,uVar2,5,0);
        plVar13 = (longlong *)((longlong)plVar13 + 1);
        puVar18 = puVar18 + 1;
      } while (plVar13 != plVar9);
    }
  }
  FUN_142f6b5e0(*local_a8,param_3,3);
  FUN_142f668e0(param_1,param_2,param_3,3);
  plVar9 = (longlong *)((ulonglong)((longlong)local_58 + (7 - (longlong)local_a0)) >> 3);
  if (local_58 < local_a0) {
    plVar9 = plVar5;
  }
  plVar13 = local_a0;
  plVar20 = plVar5;
  if (plVar9 != (longlong *)0x0) {
    do {
      lVar6 = *plVar13;
      if (lVar6 != 0) {
        plVar8 = *local_90;
        plVar7 = plVar8 + *(int *)(local_90 + 1);
        for (; plVar8 != plVar7; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar6) goto LAB_142f52f0a;
        }
        FUN_142f66680(param_1,param_2,lVar6,4,0);
        FUN_142f6b400(*local_a8,lVar6,4,0);
      }
LAB_142f52f0a:
      plVar13 = plVar13 + 1;
      plVar20 = (longlong *)((longlong)plVar20 + 1);
    } while (plVar20 != plVar9);
  }
  plVar9 = plVar5;
  if (param_2 != (longlong *)0x0) {
    plVar20 = (longlong *)FUN_142f71d80();
    plVar13 = param_2;
    do {
      plVar9 = param_2;
      if (plVar13 == plVar20) break;
      plVar13 = (longlong *)plVar13[6];
      plVar9 = plVar5;
    } while (plVar13 != (longlong *)0x0);
  }
  plVar13 = plVar5;
  if (param_1[0x8d] != 0) {
    plVar7 = (longlong *)FUN_142f71d80();
    for (plVar20 = (longlong *)param_1[0x8d];
        (plVar13 = plVar5, plVar20 != (longlong *)0x0 &&
        (plVar13 = (longlong *)param_1[0x8d], plVar20 != plVar7)); plVar20 = (longlong *)plVar20[6])
    {
    }
  }
  if (plVar9 == plVar13) {
    FUN_142f6e310(param_1);
  }
  plVar9 = local_c0;
  plVar13 = (longlong *)((ulonglong)((longlong)(local_c0 + iVar11) + (7 - (longlong)local_c0)) >> 3)
  ;
  if (local_c0 + iVar11 < local_c0) {
    plVar13 = plVar5;
  }
  plVar20 = local_c0;
  if (plVar13 != (longlong *)0x0) {
    do {
      FUN_142f6e820(param_1,param_2,*plVar20,0,1,param_1);
      plVar5 = (longlong *)((longlong)plVar5 + 1);
      plVar20 = plVar20 + 1;
    } while (plVar5 != plVar13);
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  if (local_80 != (undefined8 *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_a0 != (longlong *)0x0) {
    FMemory::Free(local_a0);
  }
  plVar13 = local_48;
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
    plVar13 = local_48;
  }
joined_r0x000142f52a95:
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 142f53050 FUN_142f53050 body=73 status=ok
// SIG undefined FUN_142f53050(void)

void FUN_142f53050(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
    if (lVar1 != 0) {
      FUN_142f526d0(lVar1,*(undefined8 *)(param_1 + 0x10),param_2,0,0);
    }
  }
  return;
}



// FUNCTION 142f530a0 FUN_142f530a0 body=323 status=ok
// SIG undefined FUN_142f530a0(void)

void FUN_142f530a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    return;
  }
  lVar3 = FUN_142f71d80();
  lVar4 = param_2;
  while (lVar4 != lVar3) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 == 0) {
      return;
    }
  }
  if (param_3 == 0) {
    return;
  }
  lVar4 = FUN_142f5c680(param_1,param_2);
  if (lVar4 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar4 + 0x28);
  if (lVar3 == 0) {
    return;
  }
  if ((*(char *)(param_3 + 0xa5) == '\0') && (param_3 != *(longlong *)(lVar3 + 0x60))) {
    return;
  }
  plVar5 = *(longlong **)(lVar3 + 0x28);
  plVar1 = plVar5 + *(int *)(lVar3 + 0x30);
  while( true ) {
    if (plVar5 == plVar1) {
      return;
    }
    if (*plVar5 == param_3) break;
    plVar5 = plVar5 + 1;
  }
  cVar2 = FUN_142f636b0(param_3,lVar4);
  if (cVar2 != '\0') {
    return;
  }
  plVar5 = *(longlong **)(lVar3 + 0x28);
  plVar1 = plVar5 + *(int *)(lVar3 + 0x30);
  if (plVar5 == plVar1) {
    return;
  }
  do {
    lVar3 = *plVar5;
    if (lVar3 == param_3) {
      return;
    }
    if ((*(char *)(lVar3 + 0xa5) != '\0') && (cVar2 = FUN_142f636b0(lVar3,lVar4), cVar2 == '\0')) {
      FUN_142f6e820(param_1,param_2,lVar3,0,1,param_4);
    }
    plVar5 = plVar5 + 1;
  } while (plVar5 != plVar1);
  return;
}



// FUNCTION 142f531f0 FUN_142f531f0 body=207 status=ok
// SIG undefined FUN_142f531f0(void)

void FUN_142f531f0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == (longlong *)0x0) {
    *param_2 = &PTR_FUN_1441d26b8;
    return;
  }
  cVar1 = FUN_142f63b20(param_2,param_1);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_142f6c9f0(uVar2);
    if (lVar3 != 0) {
      uVar2 = param_2[5];
      uVar4 = FWeakObjectPtr::Get(param_2 + 4);
      FUN_142f530a0(lVar3,uVar2,uVar4,param_1);
      *param_2 = &PTR_FUN_1441d26b8;
      return;
    }
    *param_2 = &PTR_FUN_1441d26b8;
    return;
  }
  *param_2 = &PTR_FUN_1441d26b8;
  return;
}



// FUNCTION 142f532c0 FUN_142f532c0 body=453 status=ok
// SIG undefined FUN_142f532c0(void)

void FUN_142f532c0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_14589a790;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_14589a7d8;
  }
  lVar6 = 0;
  lVar3 = lVar6;
  if (plVar2 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_146533138;
    lVar7 = (longlong)DAT_146533138;
    lVar3 = *plVar4;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar1);
    }
    puVar5 = (undefined8 *)(lVar7 * 0x10 + DAT_146533130);
    *puVar5 = plVar2;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  param_1[0xd1] = lVar3;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)FUN_142f681d0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f4d2d8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
    plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_1464b57d8;
    lVar3 = (longlong)DAT_1464b57d8;
    lVar6 = *plVar4;
    DAT_1464b57d8 = DAT_1464b57d8 + 1;
    if (DAT_1464b57dc < DAT_1464b57d8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar1);
    }
    puVar5 = (undefined8 *)(lVar3 * 0x10 + DAT_1464b57d0);
    *puVar5 = plVar2;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  param_1[0xcf] = lVar6;
  FUN_142223710(param_1);
  if ((char)param_1[0x25] != '\x03') {
    (**(code **)(*param_1 + 0x6f8))(param_1);
  }
  FUN_142f69460(param_1);
  return;
}



// FUNCTION 142f53490 FUN_142f53490 body=47 status=ok
// SIG undefined FUN_142f53490(void)

void FUN_142f53490(longlong *param_1)

{
  FUN_142223710();
  if ((char)param_1[0x25] != '\x03') {
                    /* WARNING: Could not recover jumptable at 0x000142f534b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6f8))(param_1);
    return;
  }
  return;
}



// FUNCTION 142f534c0 FUN_142f534c0 body=348 status=ok
// SIG undefined FUN_142f534c0(void)

void FUN_142f534c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
  FUN_142330a70();
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  plVar6 = (longlong *)FUN_142f6c9f0(lVar5);
  if (plVar6 != (longlong *)0x0) {
    uVar7 = FUN_142f768a0();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar7);
    if ((*(uint *)(param_1 + 8) >> 0xf & 1) == 0) {
      plVar1 = plVar6 + 0xbd;
      plVar3 = (longlong *)*plVar1;
      iVar2 = (int)plVar6[0xbe];
      lVar5 = (longlong)iVar2;
      for (plVar10 = plVar3; plVar10 != plVar3 + lVar5 * 2; plVar10 = plVar10 + 2) {
        if (*plVar10 == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)plVar10[1];
        }
        if ((plVar9 == plVar8) && (*plVar10 == param_1)) {
          if ((int)((longlong)plVar10 - (longlong)plVar3 >> 4) != -1) goto LAB_142f535a4;
          break;
        }
      }
      *(int *)(plVar6 + 0xbe) = iVar2 + 1;
      if (*(int *)((longlong)plVar6 + 0x5f4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      lVar11 = *plVar1;
      *(longlong *)(lVar11 + lVar5 * 0x10) = param_1;
      *(longlong **)(lVar11 + 8 + lVar5 * 0x10) = plVar8;
LAB_142f535a4:
      cVar4 = (**(code **)(*plVar6 + 0x700))(plVar6);
      if (cVar4 != '\0') {
        lVar5 = plVar6[0x8b];
        lVar11 = (longlong)(int)plVar6[0x8c] * 0x80 + lVar5;
        if (lVar5 != lVar11) {
          puVar12 = (undefined8 *)(lVar5 + 8);
          do {
            (**(code **)(*plVar8 + 0x38))(plVar8,plVar6,*puVar12);
            lVar5 = lVar5 + 0x80;
            puVar12 = puVar12 + 0x10;
          } while (lVar5 != lVar11);
        }
      }
    }
  }
  return;
}



// FUNCTION 142f53620 FUN_142f53620 body=879 status=ok
// SIG undefined FUN_142f53620(void)

void FUN_142f53620(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_142385110();
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 != 3) {
    return;
  }
  if ((*(char *)(param_1 + 0x798) != '\0') && ((*(byte *)(param_1 + 0xb8) & 8) == 0)) {
    FUN_142350b20(param_1,1);
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    uVar4 = UScrollBox::GetPrivateStaticClass();
    lVar5 = AGameStateBase::OnRep_GameModeClass(lVar5,uVar4);
    if (lVar5 != 0) {
      lVar6 = UScrollBox::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uStack_10 = uStack_10 & 0xffffffff00000000;
        local_18 = &DAT_142f679b0;
        plVar8 = (longlong *)(lVar5 + 0x268);
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143fcfec0;
          FWeakObjectPtr::operator=(plVar7 + 1,param_1);
          *(undefined4 *)(plVar7 + 2) = (undefined4)local_18;
          *(undefined4 *)((longlong)plVar7 + 0x14) = local_18._4_4_;
          *(int *)(plVar7 + 3) = (int)uStack_10;
          *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_10._4_4_;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar7[5] = lVar6;
          *plVar7 = (longlong)&PTR_FUN_143fcff08;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
          (**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
          iVar3 = *(int *)(lVar5 + 0x270);
          lVar6 = (longlong)iVar3;
          *(int *)(lVar5 + 0x270) = iVar3 + 1;
          if (*(int *)(lVar5 + 0x274) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar3);
          }
          lVar5 = *plVar8;
          *(undefined8 *)(lVar5 + lVar6 * 0x10) = 0;
          *(longlong **)(lVar5 + lVar6 * 0x10) = plVar7;
          *(undefined4 *)(lVar5 + 8 + lVar6 * 0x10) = 3;
        }
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b42c10) &&
       (_Init_thread_header(&DAT_146b42c10), DAT_146b42c10 == -1)) {
      FName::FName(&DAT_146b42c08,L"Waypoint",1);
      _Init_thread_footer(&DAT_146b42c10);
    }
    if ((*(char *)(param_1 + 0x771) != '\0') && (lVar5 = *(longlong *)(param_1 + 0x118), lVar5 != 0)
       ) {
      uVar4 = FUN_142a07000();
      plVar8 = (longlong *)AGameStateBase::OnRep_GameModeClass(lVar5,uVar4);
      if (plVar8 != (longlong *)0x0) {
        lVar6 = FUN_142a07000();
        if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (cVar2 = (**(code **)(*plVar8 + 0x440))(plVar8,DAT_146b42c08), cVar2 != '\0')
           ) {
          puVar9 = (undefined8 *)FName::FName(local_res10,L"Waypoint",1);
          FUN_142382f60(param_1,plVar8,&DAT_146532184,*puVar9);
          goto LAB_142f538dd;
        }
      }
      uVar4 = USoundSourceBus::GetPrivateStaticClass();
      AActor::GetComponentsByClass(lVar5,&local_18,uVar4);
      if (local_18 != local_18 + (int)uStack_10) {
        plVar8 = (longlong *)*local_18;
        cVar2 = (**(code **)(*plVar8 + 0x440))(plVar8,DAT_146b42c08);
        if (cVar2 != '\0') {
          puVar9 = (undefined8 *)FName::FName(local_res10,L"Waypoint",1);
          FUN_142382f60(param_1,plVar8,&DAT_146532184,*puVar9);
        }
      }
      if (local_18 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
  }
LAB_142f538dd:
  if ((*(longlong *)(param_1 + 0x710) != 0) && (cVar2 = FUN_142f56410(param_1), cVar2 == '\0')) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    lVar5 = FUN_142f6c9f0(lVar5);
    if (lVar5 != 0) {
      local_18 = (undefined8 *)param_1;
      uVar4 = FUN_142f768a0();
      uStack_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      FUN_142f690f0(lVar5,&local_18,0);
    }
  }
  return;
}



// FUNCTION 142f53990 FUN_142f53990 body=128 status=ok
// SIG undefined FUN_142f53990(void)

void FUN_142f53990(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142330a70();
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  lVar2 = FUN_142f6c9f0(lVar2);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 400);
    local_18 = param_1;
    uVar3 = FUN_142f768a0();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
    FUN_142f690f0(lVar2,&local_18,iVar1 == 0);
  }
  return;
}



// FUNCTION 142f53a10 FUN_142f53a10 body=112 status=ok
// SIG undefined FUN_142f53a10(void)

void FUN_142f53a10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res10 [3];
  
  FUN_142330a70();
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x120);
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
      uVar3 = FUN_142f6c9f0(lVar2);
      *(undefined8 *)(param_1 + 0x198) = uVar3;
    }
    if (*(longlong *)(param_1 + 0x198) != 0) {
      local_res10[0] = param_1;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                (*(longlong *)(param_1 + 0x198) + 0x538,local_res10);
    }
  }
  return;
}



// FUNCTION 142f53a80 FUN_142f53a80 body=98 status=ok
// SIG undefined FUN_142f53a80(void)

void FUN_142f53a80(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  
  local_40 = param_2[1];
  local_48 = &DAT_1441d2800;
  local_28 = *(undefined4 *)(param_2 + 4);
  local_38 = *(undefined4 *)(param_2 + 2);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_30 = *(undefined4 *)(param_2 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  local_20 = param_2[5];
  local_18 = param_3;
  local_14 = param_4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(local_38,&local_48);
  *param_2 = &PTR_FUN_1441d26b8;
  return;
}



// FUNCTION 142f53af0 FUN_142f53af0 body=1203 status=ok
// SIG undefined FUN_142f53af0(void)

undefined8 * FUN_142f53af0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  short sVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  longlong lVar16;
  short *psVar17;
  bool bVar18;
  short *local_b8;
  int local_b0;
  int local_ac;
  short *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  
  psVar17 = (short *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b42bf4) && (_Init_thread_header(&DAT_146b42bf4), DAT_146b42bf4 == -1))
  {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146761c48,0);
    FGenericPlatformString::Memcpy
              (DAT_146761c48,L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",0x7e)
    ;
    atexit((_func_5014 *)&LAB_143ec2320);
    _Init_thread_footer(&DAT_146b42bf4);
  }
  uVar4 = FUN_142dea370(param_1 + 0x38,local_68);
  puVar5 = (undefined8 *)FText::ToString(uVar4);
  local_a8 = (short *)0x0;
  local_a0 = *(int *)(puVar5 + 1);
  lVar16 = (longlong)local_a0;
  pvVar3 = (void *)*puVar5;
  psVar10 = psVar17;
  if (local_a0 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
    psVar10 = local_a8;
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar16 * 2);
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar16 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  iVar12 = local_a0;
  if (local_a0 < 2) {
    *param_2 = 0;
    param_2[1] = 0;
    if (psVar10 != (short *)0x0) {
      FMemory::Free(psVar10);
    }
  }
  else {
    iVar9 = 0;
    local_b8 = (short *)0x0;
    local_ac = 0;
    lVar16 = FUN_142f5a280(param_1);
    bVar18 = lVar16 == 0;
    if (bVar18) {
      local_98 = 0;
      local_90 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      FGenericPlatformString::Memcpy(local_98,L"Base",10);
      plVar6 = &local_98;
    }
    else {
      plVar6 = (longlong *)FUN_1404ce260(lVar16,local_78);
    }
    psVar10 = (short *)*plVar6;
    *plVar6 = 0;
    lVar16 = plVar6[1];
    plVar6[1] = 0;
    if ((bVar18) && (local_98 != 0)) {
      FMemory::Free();
    }
    if ((!bVar18) && (local_78[0] != 0)) {
      FMemory::Free();
    }
    psVar14 = psVar10;
    psVar13 = DAT_146761c48;
    iVar8 = local_ac;
    psVar15 = psVar10 + (int)lVar16 + -1;
    if ((int)lVar16 == 0) {
      psVar15 = psVar10 + (int)lVar16;
    }
    for (; psVar14 != psVar15; psVar14 = psVar14 + 1) {
      sVar2 = *psVar14;
      for (psVar7 = psVar13; psVar7 != psVar13 + DAT_146761c50; psVar7 = psVar7 + 1) {
        if (*psVar7 == sVar2) {
          if ((int)((longlong)psVar7 - (longlong)psVar13 >> 1) != -1) {
            if (sVar2 != 0) {
              iVar11 = iVar9 + -1;
              if (iVar9 < 1) {
                iVar11 = 0;
              }
              local_b0 = (iVar9 < 1) + 1 + iVar9;
              if (iVar8 < local_b0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
                psVar17 = local_b8;
                iVar8 = local_ac;
              }
              psVar17[iVar11] = sVar2;
              psVar17[(longlong)iVar11 + 1] = 0;
              psVar13 = DAT_146761c48;
              iVar9 = local_b0;
            }
            if ((iVar9 != 0) && (3 < iVar9 + -1)) goto LAB_142f53d7e;
          }
          break;
        }
      }
    }
LAB_142f53d7e:
    uVar4 = 0x53;
    if (*(char *)(param_1 + 0x177) != '\0') {
      uVar4 = 0x50;
    }
    FString::PrintfImpl(&local_88,L"_%c_",uVar4);
    pvVar3 = local_88;
    if (local_80 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = local_80 + -1;
    }
    iVar11 = iVar9;
    if (iVar8 != 0) {
      local_b0 = iVar9 + (uint)(iVar9 == 0) + iVar8;
      if (local_ac < local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar9);
        psVar17 = local_b8;
      }
      iVar11 = local_b0;
      _guard_xfg_dispatch_icall_nop
                (psVar17 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),pvVar3,(longlong)iVar8 * 2);
      (psVar17 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[iVar8] = 0;
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    psVar14 = DAT_146761c48;
    psVar13 = local_a8;
    psVar15 = local_a8 + iVar12 + -1;
    if (iVar12 == 0) {
      psVar15 = local_a8 + iVar12;
    }
    for (; psVar13 != psVar15; psVar13 = psVar13 + 1) {
      sVar2 = *psVar13;
      for (psVar7 = psVar14; psVar7 != psVar14 + DAT_146761c50; psVar7 = psVar7 + 1) {
        if (*psVar7 == sVar2) {
          if ((int)((longlong)psVar7 - (longlong)psVar14 >> 1) != -1) {
            if (sVar2 != 0) {
              iVar12 = iVar11 + -1;
              if (iVar11 < 1) {
                iVar12 = 0;
              }
              local_b0 = (iVar11 < 1) + 1 + iVar11;
              if (local_ac < local_b0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
                psVar17 = local_b8;
              }
              psVar17[iVar12] = sVar2;
              psVar17[(longlong)iVar12 + 1] = 0;
              psVar14 = DAT_146761c48;
              iVar11 = local_b0;
            }
            if ((iVar11 != 0) && (0x1f < iVar11 + -1)) goto LAB_142f53efd;
          }
          break;
        }
      }
    }
LAB_142f53efd:
    psVar14 = local_a8;
    *param_2 = psVar17;
    *(int *)(param_2 + 1) = iVar11;
    *(int *)((longlong)param_2 + 0xc) = local_ac;
    if (psVar10 != (short *)0x0) {
      FMemory::Free();
    }
    if (psVar14 != (short *)0x0) {
      FMemory::Free(psVar14);
    }
  }
  return param_2;
}



// FUNCTION 142f53fb0 FUN_142f53fb0 body=33 status=ok
// SIG undefined FUN_142f53fb0(void)

undefined1 FUN_142f53fb0(longlong param_1)

{
  if (((*(char *)(param_1 + 0x490) != '\0') && (*(char *)(param_1 + 0x578) != '\0')) &&
     (*(char *)(param_1 + 0x579) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142f53fe0 FUN_142f53fe0 body=123 status=ok
// SIG undefined FUN_142f53fe0(void)

undefined8 FUN_142f53fe0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res8 [4];
  
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    lVar1 = FUN_142f71d80();
    for (lVar3 = *(longlong *)(param_1 + 0x4c8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar1) {
        if (*(longlong *)(param_1 + 0x4c8) != 0) {
          return 0;
        }
        break;
      }
    }
  }
  local_res8[0] = *(undefined8 *)(param_1 + 0x698);
  uVar2 = AActor::GetWorldTimerManager(param_1);
  lVar3 = FTimerManager::FindTimer(uVar2,local_res8,0);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 1) != '\x02')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142f54060 FUN_142f54060 body=574 status=ok
// SIG undefined FUN_142f54060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f54060(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    lVar2 = FUN_142f71d80();
    for (lVar5 = *(longlong *)(param_1 + 0x4c8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar2) {
        if (*(longlong *)(param_1 + 0x4c8) == 0) {
          return;
        }
        plVar3 = (longlong *)FUN_142f5c680(param_1);
        lVar5 = *plVar3;
        local_98 = *(undefined4 *)(lVar5 + 0x288);
        local_94 = *(undefined4 *)(lVar5 + 0x28c);
        local_90 = *(undefined4 *)(lVar5 + 0x290);
        cVar1 = FUN_1405e9040(&local_98);
        if ((cVar1 != '\x01') && (cVar1 != '\x03')) {
          FUN_142f56570(param_1,*(undefined8 *)(param_1 + 0x4c8));
          return;
        }
        uVar4 = AActor::GetWorldTimerManager(param_1);
        plVar3 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar3 + 1,param_1);
          plVar3[2] = (longlong)FUN_142f54060;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar3[4] = lVar5;
          *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_88 = 0;
        local_80 = 0;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
        }
        FWeakObjectPtr::operator=(local_78,0);
        local_a0 = 0xbf800000;
        local_a8 = 0;
        local_70 = 0;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar4,param_1 + 0x6a0,&local_88,0x3f800000);
        if (local_28 != 0) {
          plVar6 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar6 = local_38;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar5 = FMemory::Realloc(plVar3,0,0);
        if (lVar5 == 0) {
          return;
        }
        FMemory::Free(lVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142f542a0 FUN_142f542a0 body=761 status=ok
// SIG undefined FUN_142f542a0(void)

void FUN_142f542a0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  iVar4 = FUN_14233f450();
  if (iVar4 != 3) {
    return;
  }
  if (*(int *)(param_1 + 0x79c) != 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  lVar5 = FUN_142f6c9f0(lVar5);
  if (lVar5 == 0) {
    return;
  }
  lVar1 = *(longlong *)(lVar5 + 0x468);
  cVar3 = '\0';
  local_48 = (longlong *)0x0;
  local_40 = 0;
  (**(code **)(*(longlong *)(param_1 + 0x700) + 0x40))((longlong *)(param_1 + 0x700),&local_48);
  plVar12 = local_48 + (int)local_40;
  plVar13 = local_48;
  if (local_48 != plVar12) {
LAB_142f54360:
    lVar11 = *plVar13;
    if (lVar11 != 0) {
      lVar6 = FUN_142f71d80();
      lVar7 = lVar11;
      do {
        if (lVar7 == lVar6) {
          if (lVar1 == 0) goto LAB_142f5439e;
          lVar6 = FUN_142f71d80();
          lVar7 = lVar1;
          goto LAB_142f54390;
        }
        lVar7 = *(longlong *)(lVar7 + 0x30);
      } while (lVar7 != 0);
    }
    goto LAB_142f543bd;
  }
LAB_142f5455b:
  FUN_142f56470(param_1,cVar3);
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
  while (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0) {
LAB_142f54390:
    lVar9 = lVar1;
    if (lVar7 == lVar6) goto LAB_142f543a0;
  }
LAB_142f5439e:
  lVar9 = 0;
LAB_142f543a0:
  lVar6 = FUN_142f71d80();
  lVar7 = lVar11;
  do {
    if (lVar7 == lVar6) goto LAB_142f543b8;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  } while (lVar7 != 0);
  lVar11 = 0;
LAB_142f543b8:
  if (lVar9 == lVar11) {
    if ((*(longlong *)(param_1 + 0x710) != 0) &&
       (cVar3 = FUN_142c48f90(*(longlong *)(param_1 + 0x710),param_1,0), cVar3 != '\0')) {
      lVar7 = FUN_142f6f900();
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x710) + 0x10);
      if ((*(int *)(lVar11 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar11 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar11 = 0;
        local_58 = (longlong *)0x0;
        local_50 = 0;
        cVar3 = '\0';
        FUN_142f78f60(param_1,&local_58);
        plVar13 = local_58 + (longlong)(int)local_50 * 6;
        plVar12 = local_58;
        goto joined_r0x000142f5446a;
      }
    }
    goto LAB_142f5455b;
  }
LAB_142f543bd:
  plVar13 = plVar13 + 1;
  if (plVar13 == plVar12) goto LAB_142f5455b;
  goto LAB_142f54360;
joined_r0x000142f5446a:
  if (plVar12 == plVar13) goto LAB_142f54524;
  plVar8 = (longlong *)(**(code **)(*plVar12 + 0x18))(plVar12,local_res10);
  lVar7 = lVar11;
  if (*plVar8 != 0) {
    lVar9 = FUN_142f71d80();
    for (lVar6 = *plVar8; (lVar7 = lVar11, lVar6 != 0 && (lVar7 = *plVar8, lVar6 != lVar9));
        lVar6 = *(longlong *)(lVar6 + 0x30)) {
    }
  }
  lVar6 = lVar11;
  if (lVar1 != 0) {
    lVar10 = FUN_142f71d80();
    lVar9 = lVar1;
    do {
      lVar6 = lVar1;
      if (lVar9 == lVar10) break;
      lVar9 = *(longlong *)(lVar9 + 0x30);
      lVar6 = lVar11;
    } while (lVar9 != 0);
  }
  if (lVar7 == lVar6) {
    if (*(char *)(lVar5 + 0x490) == '\0') {
      (**(code **)(*plVar12 + 0x18))(plVar12,local_res18);
    }
    else {
      iVar4 = FUN_142f5de40(lVar5,plVar12,0,param_1);
      if (iVar4 == 1) {
        cVar3 = '\x01';
        goto LAB_142f54524;
      }
    }
  }
  plVar12 = plVar12 + 6;
  goto joined_r0x000142f5446a;
LAB_142f54524:
  plVar12 = local_58;
  for (iVar4 = (int)local_50; iVar4 != 0; iVar4 = iVar4 + -1) {
    *plVar12 = (longlong)&PTR_FUN_1441d26b8;
    plVar12 = plVar12 + 6;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  goto LAB_142f5455b;
}



// FUNCTION 142f545a0 FUN_142f545a0 body=263 status=ok
// SIG undefined FUN_142f545a0(void)

void FUN_142f545a0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_18 [16];
  
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  lVar2 = FUN_142f6c9f0(lVar2);
  if (lVar2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0x548))(param_1);
    *(char *)(param_1 + 0x5f) = cVar1;
    if ((cVar1 != '\0') && (cVar1 = FUN_142f62c20(param_1), cVar1 != '\0')) {
      cVar1 = (**(code **)(*param_1 + 0x460))(param_1);
      if (cVar1 != '\0') {
        return;
      }
      uVar3 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>(local_18,param_1);
      FUN_142f64d20(lVar2,uVar3);
      FUN_142398ec0(param_1,1);
      if ((int)param_1[0x71] < 1) {
        return;
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x70,0);
      return;
    }
    cVar1 = (**(code **)(*param_1 + 0x460))(param_1);
    if (cVar1 != '\0') {
      uVar3 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>(local_18,param_1);
      FUN_142f65080(lVar2,uVar3);
      FUN_142398ec0(param_1,0,1);
      if (0 < (int)param_1[0x73]) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x72,0);
      }
    }
  }
  return;
}



// FUNCTION 142f546b0 FUN_142f546b0 body=546 status=ok
// SIG undefined FUN_142f546b0(void)

bool FUN_142f546b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  
  iVar4 = *(int *)(param_1 + 0x478) + -1;
  lVar13 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar11 = lVar13 * 0x30;
    do {
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x470) + lVar11);
      cVar2 = FUN_142f64900(param_1);
      if (cVar2 != '\0') {
        if (*plVar12 != 0) {
          plVar5 = (longlong *)FUN_142f71d80();
          plVar10 = (longlong *)*plVar12;
          for (plVar1 = plVar10; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
            if (plVar1 == plVar5) goto LAB_142f54743;
          }
        }
        plVar10 = (longlong *)0x0;
LAB_142f54743:
        lVar9 = plVar10[0x1f];
        if (lVar9 == 0) {
          (**(code **)(*plVar10 + 0x368))(plVar10);
          lVar9 = plVar10[0x1f];
          if (lVar9 != 0) goto LAB_142f54767;
LAB_142f5479d:
          lVar9 = 0;
        }
        else {
LAB_142f54767:
          lVar6 = FUN_142f71d80();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_142f5479d;
        }
        plVar10 = (longlong *)(param_1 + 0x480);
        if (*(char *)(lVar9 + 0x177) == '\0') {
          iVar4 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                            (plVar10,plVar12);
          if (iVar4 == -1) {
            iVar4 = *(int *)(param_1 + 0x488);
            *(int *)(param_1 + 0x488) = iVar4 + 1;
            if (*(int *)(param_1 + 0x48c) < iVar4 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar4);
            }
            *(longlong *)(*plVar10 + (longlong)iVar4 * 8) = *plVar12;
          }
        }
        else {
          plVar5 = (longlong *)*plVar10;
          iVar4 = *(int *)(param_1 + 0x488);
          plVar1 = plVar5 + iVar4;
          if (plVar5 != plVar1) {
            do {
              if (*plVar5 != 0) {
                lVar7 = FUN_142f71d80();
                lVar9 = *plVar5;
                for (lVar6 = lVar9; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
                  if (lVar6 == lVar7) goto LAB_142f54826;
                }
              }
              lVar9 = 0;
LAB_142f54826:
              if (*plVar12 != 0) {
                lVar8 = FUN_142f71d80();
                lVar6 = *plVar12;
                for (lVar7 = lVar6; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
                  if (lVar7 == lVar8) goto LAB_142f54850;
                }
              }
              lVar6 = 0;
LAB_142f54850:
              if (lVar9 == lVar6) goto LAB_142f54892;
              plVar5 = plVar5 + 1;
            } while (plVar5 != plVar1);
            iVar4 = *(int *)(param_1 + 0x488);
          }
          *(int *)(param_1 + 0x488) = iVar4 + 1;
          if (*(int *)(param_1 + 0x48c) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar4);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar10 + 8),(void *)*plVar10,(longlong)iVar4 << 3);
          *(longlong *)*plVar10 = *plVar12;
        }
      }
LAB_142f54892:
      lVar11 = lVar11 + -0x30;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  return 0 < *(int *)(param_1 + 0x488);
}



// FUNCTION 142f548e0 FUN_142f548e0 body=230 status=ok
// SIG undefined FUN_142f548e0(void)

char FUN_142f548e0(longlong param_1)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_28;
  int local_20;
  
  local_20 = *(int *)(param_1 + -8);
  lVar6 = (longlong)local_20;
  plVar5 = (longlong *)0x0;
  _Src = *(void **)(param_1 + -0x10);
  cVar3 = '\0';
  local_28 = (longlong *)0x0;
  plVar8 = plVar5;
  if (local_20 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,local_20,0);
    plVar8 = local_28;
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar6 << 3);
  }
  plVar4 = (longlong *)((ulonglong)((longlong)(plVar8 + local_20) + (7 - (longlong)plVar8)) >> 3);
  if (plVar8 + local_20 < plVar8) {
    plVar4 = plVar5;
  }
  plVar7 = plVar8;
  if (plVar4 != (longlong *)0x0) {
    do {
      lVar6 = *plVar7;
      if (lVar6 != 0) {
        uVar2 = UNativeUserListEntry::GetPrivateStaticClass();
        cVar1 = UClass::ImplementsInterface(*(undefined8 *)(lVar6 + 0x10),uVar2);
        if (cVar1 != '\0') {
          cVar1 = FUN_142f78db0(lVar6);
          if ((cVar1 != '\0') || (cVar3 != '\0')) {
            cVar3 = '\x01';
          }
        }
      }
      plVar7 = plVar7 + 1;
      plVar5 = (longlong *)((longlong)plVar5 + 1);
    } while (plVar5 != plVar4);
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  return cVar3;
}



// FUNCTION 142f549d0 FUN_142f549d0 body=30 status=ok
// SIG undefined FUN_142f549d0(void)

bool FUN_142f549d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142f63b20(param_1 + 0x18,param_1 + -0x88);
  return cVar1 == '\0';
}



// FUNCTION 142f549f0 FUN_142f549f0 body=317 status=ok
// SIG undefined FUN_142f549f0(void)

undefined1 FUN_142f549f0(longlong param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  FUN_140c498b0(param_1 + 0x18);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x20)) || (*(longlong *)(param_1 + 0x28) == 0))
    goto LAB_142f54ad1;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_1 + 0x18,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x20) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_142f54ad1;
  }
  lVar4 = FUN_14171bfe0();
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
    lVar4 = FUN_142f71d80();
    do {
      if (lVar3 == lVar4) break;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_142f54ad1:
  local_20 = 0;
  local_28 = 0;
  local_18 = 0;
  uVar2 = FSoftObjectPath::operator==(param_1 + 0x28,&local_28);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142f54b30 FUN_142f54b30 body=30 status=ok
// SIG undefined FUN_142f54b30(void)

bool FUN_142f54b30(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142f638e0(param_1 + 0x18,param_1 + -0x88);
  return cVar1 == '\0';
}



// FUNCTION 142f54b50 FUN_142f54b50 body=163 status=ok
// SIG undefined FUN_142f54b50(void)

void FUN_142f54b50(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar2 = *(int *)(param_1 + 0x2f4);
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  iVar3 = *(int *)(param_1 + 0x2f0);
  if (-1 < iVar2) {
    if (iVar3 != 0) {
      plVar4 = (longlong *)(lVar1 + 0x18);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 5;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    return;
  }
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = *(int *)(param_1 + 0x2f4);
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if (iVar2 != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              ((longlong *)(param_1 + 0x2e8),0);
  }
  return;
}



// FUNCTION 142f54c00 FUN_142f54c00 body=461 status=ok
// SIG undefined FUN_142f54c00(void)

void FUN_142f54c00(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 local_res10;
  longlong *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  if (((((char)param_1[0x25] == '\x03') && (param_3 != 0)) &&
      (local_res10 = param_2, cVar1 = (**(code **)(*param_1 + 0x700))(), cVar1 != '\0')) &&
     (puVar3 = (undefined8 *)FUN_142f5c680(param_1,param_2), puVar3 != (undefined8 *)0x0)) {
    uVar6 = 0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_142f59550(puVar3,&local_48,1);
    for (plVar4 = local_48; plVar4 != local_48 + (int)local_40; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_3) {
        iVar2 = FUN_142f5d020(&local_res10,param_3);
        if ((-1 < iVar2) && (iVar2 < *(int *)(puVar3 + 4))) {
          local_38 = (undefined8 *)0x0;
          *(undefined4 *)(puVar3[3] + (longlong)iVar2 * 4) = 0;
          local_30 = 0;
          FUN_142f5e530(param_1,&local_38);
          uVar5 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
          if (local_38 + (int)local_30 < local_38) {
            uVar5 = uVar6;
          }
          puVar7 = local_38;
          if (uVar5 != 0) {
            do {
              FUN_142f7b480(*puVar7,param_2,param_3);
              uVar6 = uVar6 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar6 != uVar5);
          }
          if (local_38 != (undefined8 *)0x0) {
            FMemory::Free(local_38);
          }
          FUN_142f65f00(param_1,param_2,param_3,7);
          FUN_142f6b400(*puVar3,param_3,7,0);
          FUN_142f66680(param_1,param_2,param_3,7,0);
        }
        break;
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}



// FUNCTION 142f54dd0 FUN_142f54dd0 body=65 status=ok
// SIG undefined FUN_142f54dd0(void)

void FUN_142f54dd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
    if (lVar1 != 0) {
      FUN_142f54c00(lVar1,*(undefined8 *)(param_1 + 0x10),param_2);
    }
  }
  return;
}



// FUNCTION 142f54e20 FUN_142f54e20 body=8 status=ok
// SIG undefined FUN_142f54e20(void)

void FUN_142f54e20(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 142f54e30 FUN_142f54e30 body=34 status=ok
// SIG undefined FUN_142f54e30(void)

void FUN_142f54e30(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 142f54e80 FUN_142f54e80 body=122 status=ok
// SIG undefined FUN_142f54e80(void)

void FUN_142f54e80(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x4c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  if (*(undefined2 **)(param_1 + 0x40) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 142f54f00 FUN_142f54f00 body=376 status=ok
// SIG undefined FUN_142f54f00(void)

void FUN_142f54f00(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  if ((param_2 != (longlong *)0x0) && (*(char *)(*param_2 + 0x178) != '\0')) {
    uVar5 = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    param_2[5] = 0;
    uVar2 = uVar5;
    uVar7 = uVar5;
    if (0 < (int)param_2[4]) {
      do {
        uVar4 = (int)uVar7 + 1;
        *(undefined4 *)(uVar2 + param_2[3]) = 0;
        uVar2 = uVar2 + 4;
        uVar7 = (ulonglong)uVar4;
      } while ((int)uVar4 < (int)param_2[4]);
    }
    FUN_142f72090(*param_2);
    lVar3 = *param_2;
    puVar6 = *(undefined8 **)(lVar3 + 0x210);
    uVar2 = (longlong)*(int *)(lVar3 + 0x218) & 0x1fffffffffffffff;
    if (puVar6 + *(int *)(lVar3 + 0x218) < puVar6) {
      uVar2 = uVar5;
    }
    uVar7 = uVar5;
    if (uVar2 != 0) {
      do {
        uVar1 = *puVar6;
        FUN_142f6b400(*param_2,uVar1,0,0);
        FUN_142f66680(param_1,param_2[1],uVar1,0,0);
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 != uVar2);
      lVar3 = *param_2;
    }
    puVar6 = *(undefined8 **)(lVar3 + 0x200);
    uVar2 = (longlong)*(int *)(lVar3 + 0x208) & 0x1fffffffffffffff;
    if (puVar6 + *(int *)(lVar3 + 0x208) < puVar6) {
      uVar2 = uVar5;
    }
    if (uVar2 != 0) {
      do {
        uVar1 = *puVar6;
        FUN_142f6b5e0(*param_2,uVar1,0);
        FUN_142f668e0(param_1,param_2[1],uVar1,0);
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != uVar2);
    }
    FUN_142f65c80(param_1,param_2[1],0);
    FUN_142f663a0(param_1,param_2[1],0);
  }
  return;
}



// FUNCTION 142f55080 FUN_142f55080 body=127 status=ok
// SIG undefined FUN_142f55080(void)

void FUN_142f55080(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x198);
  if (lVar1 != 0) {
    lVar3 = FUN_142f5c680(lVar1,param_2);
    if (lVar3 != 0) {
      FUN_142f51850(lVar1,param_3,lVar3,1);
    }
  }
  return;
}



// FUNCTION 142f55100 FUN_142f55100 body=142 status=ok
// SIG undefined FUN_142f55100(void)

void FUN_142f55100(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x198);
  if (lVar1 != 0) {
    lVar3 = FUN_142f5c680(lVar1,param_2);
    if (lVar3 != 0) {
      FUN_142f6a260(lVar1,param_3,lVar3,param_4);
    }
  }
  return;
}



// FUNCTION 142f55190 FUN_142f55190 body=241 status=ok
// SIG undefined FUN_142f55190(void)

void FUN_142f55190(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0();
    }
    uVar5 = FUN_142f6c9f0(lVar4);
    *(undefined8 *)(param_1 + 0x198) = uVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x198);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x128) != '\x03')) {
    plVar1 = (longlong *)(lVar4 + 0x458);
    iVar3 = *(int *)(lVar4 + 0x460);
    iVar2 = iVar3 + 1;
    *(int *)(lVar4 + 0x460) = iVar2;
    if (*(int *)(lVar4 + 0x464) < iVar2) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    lVar6 = (longlong)iVar3 * 0x80;
    _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + lVar6),0,0x80);
    lVar6 = lVar6 + *plVar1;
    *(undefined8 *)(lVar6 + 8) = param_2;
    *(undefined1 *)(lVar6 + 0x10) = 0;
    iVar3 = FUN_142f5cd30(lVar6 + 8);
    if (0 < iVar3) {
      TArray<int,FDefaultAllocator>::SetNum(lVar6 + 0x18,iVar3,1);
    }
    if (*(int *)(lVar6 + 0x24) != *(int *)(lVar6 + 0x20)) {
      TArray<float,FDefaultAllocator>::ResizeTo();
    }
    FUN_142f61c10(lVar4,param_2);
  }
  return;
}



// FUNCTION 142f55290 FUN_142f55290 body=105 status=ok
// SIG undefined FUN_142f55290(void)

void FUN_142f55290(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_142f52130(*(longlong *)(param_1 + 0x198),param_2,param_3);
  }
  return;
}



// FUNCTION 142f55300 FUN_142f55300 body=89 status=ok
// SIG undefined FUN_142f55300(void)

void FUN_142f55300(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_142f6c830(*(longlong *)(param_1 + 0x198),param_2);
  }
  return;
}



// FUNCTION 142f55360 FUN_142f55360 body=89 status=ok
// SIG undefined FUN_142f55360(void)

void FUN_142f55360(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_142f6cbf0(*(longlong *)(param_1 + 0x198),param_2);
  }
  return;
}



// FUNCTION 142f553c0 FUN_142f553c0 body=105 status=ok
// SIG undefined FUN_142f553c0(void)

void FUN_142f553c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_142f6dbf0(*(longlong *)(param_1 + 0x198),param_2,param_3);
  }
  return;
}



// FUNCTION 142f55430 FUN_142f55430 body=290 status=ok
// SIG undefined FUN_142f55430(void)

void FUN_142f55430(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_res8;
  longlong *local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
    }
    uVar3 = FUN_142f6c9f0(lVar2);
    *(undefined8 *)(param_1 + 0x198) = uVar3;
  }
  lVar2 = *(longlong *)(param_1 + 0x198);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x128) != '\x03')) {
    local_res8 = param_2;
    lVar4 = FUN_142f5c680(lVar2,param_2);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_142f59550(lVar4,&local_28,1);
    for (plVar5 = local_28; plVar5 != local_28 + (int)local_20; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_3) {
        iVar1 = FUN_142f5d020(&local_res8,param_3);
        if ((-1 < iVar1) && (iVar1 < *(int *)(lVar4 + 0x20))) {
          *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar1 * 4) = 0;
          FUN_142f65f00(lVar2,param_2,param_3,7);
          FUN_142f66680(lVar2,param_2,param_3,7,0);
        }
        break;
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 142f55560 FUN_142f55560 body=137 status=ok
// SIG undefined FUN_142f55560(void)

void FUN_142f55560(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x198);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x128) != '\x03')) {
    FUN_142f66120(lVar1,param_2,param_3,5);
    FUN_142f668e0(lVar1,param_2,param_3,5);
  }
  return;
}



// FUNCTION 142f555f0 FUN_142f555f0 body=130 status=ok
// SIG undefined FUN_142f555f0(void)

void FUN_142f555f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_142f69820(*(longlong *)(param_1 + 0x198),param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 142f55680 FUN_142f55680 body=230 status=ok
// SIG undefined FUN_142f55680(void)

void FUN_142f55680(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x198);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x128) != '\x03')) {
    lVar6 = 0;
    lVar5 = lVar6;
    if (*(longlong *)(lVar1 + 0x468) != 0) {
      lVar3 = FUN_142f71d80();
      for (lVar7 = *(longlong *)(lVar1 + 0x468);
          (lVar5 = lVar6, lVar7 != 0 && (lVar5 = *(longlong *)(lVar1 + 0x468), lVar7 != lVar3));
          lVar7 = *(longlong *)(lVar7 + 0x30)) {
      }
    }
    lVar7 = lVar6;
    if (param_2 != 0) {
      lVar4 = FUN_142f71d80();
      lVar3 = param_2;
      do {
        lVar7 = param_2;
        if (lVar3 == lVar4) break;
        lVar3 = *(longlong *)(lVar3 + 0x30);
        lVar7 = lVar6;
      } while (lVar3 != 0);
    }
    if (lVar5 != lVar7) {
      uVar2 = *(undefined8 *)(lVar1 + 0x468);
      *(longlong *)(lVar1 + 0x468) = param_2;
      FUN_142f66a90(lVar1,param_2,uVar2);
    }
  }
  return;
}



// FUNCTION 142f55770 FUN_142f55770 body=197 status=ok
// SIG undefined FUN_142f55770(void)

void FUN_142f55770(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  void *_Src;
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x198);
  if (lVar1 != 0) {
    local_20 = *(int *)(param_4 + 1);
    lVar3 = (longlong)local_20;
    _Src = (void *)*param_4;
    local_28 = (void *)0x0;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,local_20,0);
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar3 << 3);
    }
    FUN_142f69d40(lVar1,param_2,param_3,&local_28);
  }
  return;
}



// FUNCTION 142f55840 FUN_142f55840 body=409 status=ok
// SIG undefined FUN_142f55840(void)

void FUN_142f55840(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
    }
    uVar3 = FUN_142f6c9f0(lVar2);
    *(undefined8 *)(param_1 + 0x198) = uVar3;
  }
  lVar2 = *(longlong *)(param_1 + 0x198);
  if ((((lVar2 != 0) && (*(char *)(lVar2 + 0x128) != '\x03')) &&
      (plVar4 = (longlong *)FUN_142f5c680(lVar2,param_2), plVar4 != (longlong *)0x0)) &&
     (*(byte *)(plVar4 + 2) != param_3)) {
    uVar3 = 3;
    *(char *)(plVar4 + 2) = (char)param_3;
    if (param_3 == 1) {
      FUN_142f515a0(lVar2,*plVar4);
      lVar1 = *plVar4;
      if ((0 < *(int *)(lVar1 + 0x17c)) || (*(char *)(lVar1 + 0x180) == '\0')) {
        FUN_142f624a0(lVar2,param_2,*(int *)(lVar1 + 0x17c),*(undefined1 *)(lVar1 + 0x180));
      }
    }
    else if (param_3 == 2) {
      TArray<FName,FDefaultAllocator>::Remove(lVar2 + 0x588,plVar4);
      FUN_142f55ef0(lVar2,param_2);
      uVar3 = 4;
    }
    else if (param_3 == 3) {
      uVar6 = 0;
      uVar7 = uVar6;
      if (0 < (int)plVar4[4]) {
        do {
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          *(undefined4 *)(uVar7 + plVar4[3]) = 0;
          uVar7 = uVar7 + 4;
        } while ((int)uVar5 < (int)plVar4[4]);
      }
      *(undefined1 *)((longlong)plVar4 + 0x69) = 1;
      TArray<FName,FDefaultAllocator>::Remove(lVar2 + 0x588,plVar4);
      FUN_142f55ef0(lVar2,param_2);
      uVar3 = 5;
    }
    FUN_142f65c80(lVar2,param_2,uVar3);
    FUN_142f663a0(lVar2,param_2,uVar3);
    if ((param_3 == 2) && (*(char *)(*plVar4 + 0x178) != '\0')) {
      FUN_142f54f00(lVar2,plVar4);
    }
  }
  return;
}



// FUNCTION 142f559e0 FUN_142f559e0 body=672 status=ok
// SIG undefined FUN_142f559e0(void)

ulonglong FUN_142f559e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return in_RAX & 0xffffffffffffff00;
  }
  bVar10 = 0;
  plVar3 = (longlong *)FUN_142f5c680();
  if ((((plVar3 != (longlong *)0x0) && ((char)plVar3[2] == '\x01')) &&
      (lVar4 = plVar3[5], lVar4 != 0)) &&
     (((*(char *)(lVar4 + 0x78) != '\0' || (*(longlong *)(lVar4 + 0x70) == 0)) &&
      ((int)plVar3[9] == 0)))) {
    bVar10 = 1;
    if (*(char *)(*plVar3 + 0x178) == '\0') {
      FUN_142f55e10(param_1,plVar3);
    }
    *(undefined1 *)(plVar3 + 2) = 2;
    FUN_142f66de0(param_1,param_2,2);
    FUN_142f513f0(param_1);
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x588,plVar3);
    FUN_142f55ef0(param_1,param_2);
    FUN_142f6a100(param_1,param_2);
    FUN_142f6a700(param_1,*plVar3,plVar3[5]);
    FUN_142f6ae20(param_1,*plVar3,plVar3[5]);
    FUN_142f6ac10(param_1,*plVar3,plVar3[5]);
    FUN_142f6a4f0(param_1,*plVar3,plVar3[5]);
    FUN_142f6aa00(param_1,*plVar3,plVar3[5]);
    FUN_142f71f90(*plVar3);
    FUN_142f65c80(param_1,param_2,4);
    FUN_142f663a0(param_1,param_2,4);
    lVar4 = FUN_140c498b0(*plVar3 + 0x3a0);
    if (lVar4 != 0) {
      lVar5 = FUN_142f71d80();
      lVar6 = lVar4;
      do {
        if (lVar6 == lVar5) {
          FUN_142f50b00(param_1,lVar4,0,0);
          break;
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
    plVar11 = (longlong *)0x0;
    plVar12 = plVar11;
    if (*(longlong *)(param_1 + 0x468) != 0) {
      plVar7 = (longlong *)FUN_142f71d80();
      for (plVar9 = *(longlong **)(param_1 + 0x468);
          (plVar12 = plVar11, plVar9 != (longlong *)0x0 &&
          (plVar12 = *(longlong **)(param_1 + 0x468), plVar9 != plVar7));
          plVar9 = (longlong *)plVar9[6]) {
      }
    }
    plVar9 = plVar11;
    if (param_2 != (longlong *)0x0) {
      plVar8 = (longlong *)FUN_142f71d80();
      plVar7 = param_2;
      do {
        plVar9 = param_2;
        if (plVar7 == plVar8) break;
        plVar7 = (longlong *)plVar7[6];
        plVar9 = plVar11;
      } while (plVar7 != (longlong *)0x0);
    }
    if (plVar12 == plVar9) {
      FUN_142f6c3d0(param_1,lVar4);
    }
    if (*(char *)(*plVar3 + 0x178) != '\0') {
      FUN_142f54f00(param_1,plVar3);
    }
    cVar1 = FUN_142f546b0(param_1);
    if (cVar1 != '\0') {
      plVar3 = plVar11;
      if (DAT_146b19a68 != 0) {
        plVar3 = *(longlong **)(DAT_146b19a68 + 0x140);
      }
      if ((((plVar3 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x760))(), iVar2 == 1))
          && (*(int *)(param_1 + 0x530) != 0)) &&
         ((*(longlong **)(param_1 + 0x528) != (longlong *)0x0 &&
          (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x528) + 0x18))(), cVar1 != '\0')))) {
        if (*(int *)(param_1 + 0x530) != 0) {
          plVar11 = *(longlong **)(param_1 + 0x528);
        }
        (**(code **)(*plVar11 + 0x38))(plVar11);
      }
    }
  }
  return (ulonglong)bVar10;
}



// FUNCTION 142f55c80 FUN_142f55c80 body=60 status=ok
// SIG undefined FUN_142f55c80(void)

void FUN_142f55c80(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142f55caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x778))(plVar1,*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 142f55cc0 FUN_142f55cc0 body=111 status=ok
// SIG undefined FUN_142f55cc0(void)

void FUN_142f55cc0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    lVar1 = FUN_142f71d80();
    lVar4 = param_2;
    while (lVar4 != lVar1) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        return;
      }
    }
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar3 = (longlong *)FUN_142f6c9f0(uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x778))(plVar3,param_2);
    }
  }
  return;
}



// FUNCTION 142f55d30 FUN_142f55d30 body=100 status=ok
// SIG undefined FUN_142f55d30(void)

void FUN_142f55d30(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1459ec0f0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_1459ec138;
  }
  return;
}



// FUNCTION 142f55da0 FUN_142f55da0 body=108 status=ok
// SIG undefined FUN_142f55da0(void)

undefined8 FUN_142f55da0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    lVar1 = FUN_142f71d80();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar1) {
        uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar3 = FUN_142f6c9f0(uVar2);
        if (lVar3 == 0) {
          return 0;
        }
        uVar2 = FUN_142f5c820(lVar3,param_2);
        return uVar2;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 142f55e10 FUN_142f55e10 body=213 status=ok
// SIG undefined FUN_142f55e10(void)

void FUN_142f55e10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(local_18,0);
    local_10 = 0;
    FUN_1405f0e70(local_18,0,0);
    uVar6 = FWeakObjectPtr::Get(local_18);
    FUN_1405f0e70(param_2 + 0x58,uVar6,local_10);
    FUN_1405f0e70(local_18,0,0);
    local_20 = (longlong *)0x0;
    if ((undefined8 *)(param_2 + 0x70) != &local_28) {
      *(undefined8 *)(param_2 + 0x70) = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x78,&local_20);
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
  }
  return;
}



// FUNCTION 142f55ef0 FUN_142f55ef0 body=252 status=ok
// SIG undefined FUN_142f55ef0(void)

void FUN_142f55ef0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x550)) {
    lVar9 = 0;
    plVar1 = (longlong *)(param_1 + 0x548);
    do {
      lVar8 = *plVar1;
      if (*(longlong *)(lVar8 + lVar9) != 0) {
        lVar3 = FUN_142f71d80();
        lVar8 = *(longlong *)(lVar8 + lVar9);
        for (lVar6 = lVar8; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
          if (lVar6 == lVar3) goto LAB_142f55f50;
        }
      }
      lVar8 = 0;
LAB_142f55f50:
      if (param_2 != 0) {
        lVar3 = FUN_142f71d80();
        lVar6 = param_2;
        do {
          lVar4 = param_2;
          if (lVar6 == lVar3) goto LAB_142f55f70;
          lVar6 = *(longlong *)(lVar6 + 0x30);
        } while (lVar6 != 0);
      }
      lVar4 = 0;
LAB_142f55f70:
      if (lVar8 == lVar4) {
        iVar5 = *(int *)(param_1 + 0x550);
        iVar2 = (iVar5 - iVar7) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar7 * 0x18),
                     (void *)(*plVar1 + (longlong)(iVar7 + 1) * 0x18),(longlong)iVar2 * 0x18);
          iVar5 = *(int *)(param_1 + 0x550);
        }
        *(int *)(param_1 + 0x550) = iVar5 + -1;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
        return;
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 0x18;
    } while (iVar7 < *(int *)(param_1 + 0x550));
  }
  return;
}



// FUNCTION 142f55ff0 FUN_142f55ff0 body=132 status=ok
// SIG undefined FUN_142f55ff0(void)

void FUN_142f55ff0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined8 local_res10;
  
  FName::FName(&local_res10,"EditorStyle",1);
  *param_3 = local_res10;
  if (param_2 == 0) {
    pcVar1 = "LevelEditor.MissionNone";
  }
  else {
    pcVar1 = "LevelEditor.MissionPlot";
    if (*(char *)(param_2 + 0x177) == '\0') {
      pcVar1 = "LevelEditor.MissionSecondary";
    }
  }
  FName::FName(&local_res10,pcVar1,1);
  *param_4 = local_res10;
  return;
}



// FUNCTION 142f56080 FUN_142f56080 body=108 status=ok
// SIG undefined FUN_142f56080(void)

void FUN_142f56080(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  
  if ((wchar_t *)*param_3 != L"Mission Reference") {
    iVar1 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0x12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,0x12);
      iVar1 = (int)param_3[1];
    }
    *(int *)(param_3 + 1) = iVar1 + 0x12;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 0x12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
    }
    builtin_wcsncpy((wchar_t *)*param_3,L"Mission Reference",0x12);
  }
  return;
}



// FUNCTION 142f560f0 FUN_142f560f0 body=791 status=ok
// SIG undefined FUN_142f560f0(void)

bool FUN_142f560f0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 local_res18;
  undefined8 local_res20;
  
  iVar12 = 0;
  lVar11 = 0;
  do {
    if ((lVar11 < 0) || ((int)param_1[1] <= iVar12)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return false;
    }
    if ((lVar11 < 0) || ((int)param_2[1] <= iVar12)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return true;
    }
    lVar10 = *param_1;
    if (*(longlong *)(lVar10 + lVar11 * 8) != 0) {
      lVar6 = FUN_142f71d80();
      lVar10 = *(longlong *)(lVar10 + lVar11 * 8);
      for (lVar9 = lVar10; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
        if (lVar9 == lVar6) goto LAB_142f56176;
      }
    }
    lVar10 = 0;
LAB_142f56176:
    lVar9 = *param_2;
    if (*(longlong *)(lVar9 + lVar11 * 8) != 0) {
      lVar7 = FUN_142f71d80();
      lVar9 = *(longlong *)(lVar9 + lVar11 * 8);
      for (lVar6 = lVar9; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar7) goto LAB_142f561a5;
      }
    }
    lVar9 = 0;
LAB_142f561a5:
    if (lVar10 != lVar9) break;
    iVar12 = iVar12 + 1;
    lVar11 = lVar11 + 1;
  } while( true );
  lVar10 = *param_1;
  lVar6 = (longlong)iVar12;
  lVar11 = lVar6 * 8;
  lVar9 = *(longlong *)(lVar11 + lVar10);
  uVar2 = *(undefined8 *)(lVar11 + *param_2);
  if (lVar9 != 0) {
    plVar8 = (longlong *)FUN_142f71d80();
    plVar13 = *(longlong **)(lVar11 + lVar10);
    for (plVar3 = plVar13; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
      if (plVar3 == plVar8) goto LAB_142f56200;
    }
  }
  plVar13 = (longlong *)0x0;
LAB_142f56200:
  lVar10 = plVar13[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar13 + 0x368))(plVar13);
    lVar10 = plVar13[0x1f];
    if (lVar10 != 0) goto LAB_142f56224;
LAB_142f5625a:
    lVar10 = 0;
  }
  else {
LAB_142f56224:
    lVar7 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142f5625a;
  }
  lVar7 = *param_2;
  if (*(longlong *)(lVar7 + lVar6 * 8) != 0) {
    plVar8 = (longlong *)FUN_142f71d80();
    plVar13 = *(longlong **)(lVar7 + lVar6 * 8);
    for (plVar3 = plVar13; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
      if (plVar3 == plVar8) goto LAB_142f56291;
    }
  }
  plVar13 = (longlong *)0x0;
LAB_142f56291:
  lVar6 = plVar13[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar13 + 0x368))(plVar13);
    lVar6 = plVar13[0x1f];
  }
  if (lVar6 == 0) {
LAB_142f562f0:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142f562f0;
  }
  if ((*(char *)(lVar10 + 0x191) != '\0') && ((int)param_1[1] == 1)) {
    return false;
  }
  if ((*(char *)(lVar6 + 0x191) != '\0') && ((int)param_2[1] == 1)) {
    return true;
  }
  cVar1 = *(char *)(lVar10 + 0x177);
  if (cVar1 == '\0') {
LAB_142f5634e:
    if (*(char *)(lVar6 + 0x177) != '\0') {
      if ((int)param_2[1] != 1) {
        return false;
      }
      return true;
    }
    if (cVar1 == '\0') goto LAB_142f5637d;
  }
  else {
    if (*(char *)(lVar6 + 0x177) == '\0') {
      if ((int)param_1[1] != 1) {
        return true;
      }
      return false;
    }
    if (cVar1 == '\0') goto LAB_142f5634e;
  }
  if (*(char *)(lVar6 + 0x177) != '\0') {
    uVar5 = FUN_142f62f70(lVar9,uVar2);
    return (bool)uVar5;
  }
LAB_142f5637d:
  lVar10 = *param_2;
  if (*(longlong *)(lVar10 + lVar11) != 0) {
    lVar6 = FUN_142f71d80();
    lVar10 = *(longlong *)(lVar10 + lVar11);
    for (lVar9 = lVar10; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar6) goto LAB_142f563b0;
    }
  }
  lVar10 = 0;
LAB_142f563b0:
  lVar9 = *param_1;
  local_res18 = *(undefined8 *)(lVar10 + 0x18);
  if (*(longlong *)(lVar9 + lVar11) != 0) {
    lVar6 = FUN_142f71d80();
    lVar11 = *(longlong *)(lVar9 + lVar11);
    for (lVar10 = lVar11; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
      if (lVar10 == lVar6) goto LAB_142f563e5;
    }
  }
  lVar11 = 0;
LAB_142f563e5:
  local_res20 = *(undefined8 *)(lVar11 + 0x18);
  iVar12 = FName::Compare(&local_res20,&local_res18);
  return 0 < iVar12;
}



// FUNCTION 142f56410 FUN_142f56410 body=84 status=ok
// SIG undefined FUN_142f56410(void)

undefined1 FUN_142f56410(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  
  if (*(longlong *)(param_1 + 0x710) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x10);
    uVar2 = UNativeUserListEntry::GetPrivateStaticClass();
    cVar3 = UClass::ImplementsInterface(uVar1,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_142f78db0(*(undefined8 *)(param_1 + 0x710));
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 142f56470 FUN_142f56470 body=249 status=ok
// SIG undefined FUN_142f56470(void)

void FUN_142f56470(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  longlong local_18;
  undefined8 local_10;
  
  if (param_2 == *(char *)(param_1 + 0x798)) {
    return;
  }
  if ((*(byte *)(param_1 + 0xb8) & 8) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x600))();
    FUN_142350b20(param_1,1);
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  *(char *)(param_1 + 0x798) = param_2;
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  lVar2 = FUN_142f6c9f0(lVar2);
  if (lVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x798);
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    local_18 = param_1;
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
    if (cVar1 == '\0') {
      FUN_142f65080(lVar2,&local_18);
    }
    else {
      FUN_142f64d20();
    }
  }
  if (*(char *)(param_1 + 0x798) == '\0') {
    if (*(int *)(param_1 + 0x790) < 1) goto LAB_142f56556;
    lVar2 = param_1 + 0x788;
  }
  else {
    if (*(int *)(param_1 + 0x780) < 1) goto LAB_142f56556;
    lVar2 = param_1 + 0x778;
  }
  local_res8 = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2,&local_res8);
LAB_142f56556:
  FUN_142f6cdb0(param_1);
  return;
}



// FUNCTION 142f56570 FUN_142f56570 body=205 status=ok
// SIG undefined FUN_142f56570(void)

void FUN_142f56570(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    lVar1 = FUN_142f71d80();
    lVar4 = *(longlong *)(param_1 + 0x4c8);
    for (lVar3 = lVar4; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar1) goto LAB_142f565b3;
    }
  }
  lVar4 = 0;
LAB_142f565b3:
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar1) goto LAB_142f565d0;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  param_2 = 0;
LAB_142f565d0:
  if (lVar4 == param_2) {
    plVar2 = (longlong *)FUN_142f5c680(param_1,*(undefined8 *)(param_1 + 0x4c8));
    if ((((plVar2 != (longlong *)0x0) && (plVar2[5] == 0)) && (0 < *(int *)(*plVar2 + 0x208))) &&
       (lVar4 = **(longlong **)(*plVar2 + 0x200), lVar4 != 0)) {
      FUN_142f526d0(param_1,*(undefined8 *)(param_1 + 0x4c8),lVar4,0,0);
    }
    *(undefined8 *)(param_1 + 0x4c8) = 0;
  }
  return;
}



// FUNCTION 142f56640 FUN_142f56640 body=55 status=ok
// SIG undefined FUN_142f56640(void)

void FUN_142f56640(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
    if (lVar1 != 0) {
      FUN_142f56570(lVar1,*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 142f56680 FUN_142f56680 body=620 status=ok
// SIG undefined FUN_142f56680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f56680(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  FUN_14222a250();
  uVar7 = 0;
  lVar3 = *(longlong *)(param_1 + 0x688);
  uVar6 = uVar7;
  uVar10 = uVar7;
  iVar4 = DAT_146533138;
  if (0 < DAT_146533138) {
    do {
      plVar9 = (longlong *)(DAT_146533130 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_146533138, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_146533138;
        }
        break;
      }
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar8 < iVar4);
  }
  if (DAT_146533144 < 1) {
    uVar6 = uVar7;
    uVar10 = uVar7;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar10 + 8 + DAT_146533130) == 0) ||
            (*(longlong **)(uVar10 + DAT_146533130) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar10 + DAT_146533130) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146533130,uVar6,1,1);
        }
        else {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar10 = uVar10 + 0x10;
        }
        iVar5 = DAT_146533138;
      } while ((int)uVar6 < DAT_146533138);
    }
    _DAT_146533140 = iVar5 * 2;
    if (_DAT_146533140 < 3) {
      _DAT_146533140 = 2;
    }
    if ((_DAT_146533140 < iVar4) && (DAT_14653313c != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146533130);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x678);
  uVar6 = uVar7;
  uVar10 = uVar7;
  iVar4 = DAT_1464b57d8;
  if (0 < DAT_1464b57d8) {
    do {
      plVar9 = (longlong *)(DAT_1464b57d0 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_1464b57d8, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_1464b57d8;
        }
        break;
      }
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar8 < iVar4);
  }
  if (DAT_1464b57e4 < 1) {
    uVar6 = uVar7;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar7 + 8 + DAT_1464b57d0) == 0) ||
            (*(longlong **)(uVar7 + DAT_1464b57d0) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar7 + DAT_1464b57d0) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464b57d0,uVar6,1,1);
        }
        else {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar7 = uVar7 + 0x10;
        }
        iVar5 = DAT_1464b57d8;
      } while ((int)uVar6 < DAT_1464b57d8);
    }
    _DAT_1464b57e0 = iVar5 * 2;
    if (_DAT_1464b57e0 < 3) {
      _DAT_1464b57e0 = 2;
    }
    if ((_DAT_1464b57e0 < iVar4) && (DAT_1464b57dc != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464b57d0);
    }
  }
  return;
}



// FUNCTION 142f568f0 FUN_142f568f0 body=143 status=ok
// SIG undefined FUN_142f568f0(void)

void FUN_142f568f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  FUN_14233a670();
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  lVar1 = FUN_142f6c9f0(lVar1);
  if (lVar1 != 0) {
    local_18 = param_1;
    uVar2 = FUN_142f768a0();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    FUN_142f6e000(lVar1,&local_18);
    local_18 = param_1;
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    FUN_142f65080(lVar1,&local_18);
  }
  return;
}



// FUNCTION 142f56980 FUN_142f56980 body=251 status=ok
// SIG undefined FUN_142f56980(void)

void FUN_142f56980(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_18;
  undefined8 local_10;
  
  FUN_14233a670();
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 == 3) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    lVar3 = FUN_142f6c9f0(lVar3);
    if (lVar3 != 0) {
      if (*(char *)(param_1 + 0x798) != '\0') {
        uVar4 = TScriptInterface<IBlendableInterface>::
                TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_18,param_1);
        FUN_142f65080(lVar3,uVar4);
      }
      local_18 = param_1;
      uVar4 = FUN_142f768a0();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      FUN_142f6e000(lVar3,&local_18);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    uVar4 = UScrollBox::GetPrivateStaticClass();
    lVar3 = AGameStateBase::OnRep_GameModeClass(lVar3,uVar4);
    if (lVar3 != 0) {
      lVar5 = UScrollBox::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140483870(lVar3 + 0x268,param_1);
      }
    }
  }
  return;
}



// FUNCTION 142f56a80 FUN_142f56a80 body=104 status=ok
// SIG undefined FUN_142f56a80(void)

void FUN_142f56a80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  FUN_14233a670();
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  lVar1 = FUN_142f6c9f0(lVar1);
  if (lVar1 != 0) {
    local_18 = param_1;
    uVar2 = FUN_142f768a0();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    FUN_142f6e000(lVar1,&local_18);
  }
  return;
}



// FUNCTION 142f56af0 FUN_142f56af0 body=340 status=ok
// SIG undefined FUN_142f56af0(void)

void FUN_142f56af0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  FUN_14233a670();
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x120);
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
      uVar3 = FUN_142f6c9f0(lVar2);
      *(undefined8 *)(param_1 + 0x198) = uVar3;
    }
    lVar2 = *(longlong *)(param_1 + 0x198);
    if ((lVar2 != 0) && (lVar4 = (longlong)*(int *)(lVar2 + 0x540), *(int *)(lVar2 + 0x540) != 0)) {
      iVar8 = 0;
      bVar9 = **(longlong **)(lVar2 + 0x538) != param_1;
      lVar6 = 0;
      iVar1 = 0;
      do {
        lVar6 = lVar6 + 1;
        iVar7 = iVar1 + 1;
        if (lVar6 < lVar4) {
          plVar5 = (longlong *)(*(longlong *)(lVar2 + 0x538) + lVar6 * 8);
          do {
            if (bVar9 != (*plVar5 != param_1)) break;
            iVar7 = iVar7 + 1;
            lVar6 = lVar6 + 1;
            plVar5 = plVar5 + 1;
          } while (lVar6 < lVar4);
        }
        if (bVar9 != false) {
          if (iVar8 != iVar1) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar2 + 0x538) + (longlong)iVar8 * 8),
                       (void *)(*(longlong *)(lVar2 + 0x538) + (longlong)iVar1 * 8),
                       (longlong)(iVar7 - iVar1) << 3);
          }
          iVar8 = iVar8 + (iVar7 - iVar1);
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar1 = iVar7;
      } while (lVar6 < lVar4);
      *(int *)(lVar2 + 0x540) = iVar8;
    }
  }
  return;
}



// FUNCTION 142f56c50 FUN_142f56c50 body=92 status=ok
// SIG undefined FUN_142f56c50(void)

ulonglong FUN_142f56c50(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_142f5f6a0();
  if ((char)uVar2 != '\0') {
    uVar1 = *(uint *)(param_1 + 2) ^ *(uint *)(param_2 + 2);
    uVar2 = (ulonglong)uVar1;
    if (((*(int *)((longlong)param_1 + 0x1c) == *(int *)((longlong)param_2 + 0x1c) &&
         *(int *)(param_1 + 3) == *(int *)(param_2 + 3)) &&
        *(int *)((longlong)param_1 + 0x14) == *(int *)((longlong)param_2 + 0x14)) && uVar1 == 0) {
      uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      goto LAB_142f56c94;
    }
  }
  uVar2 = uVar2 & 0xffffffffffffff00;
LAB_142f56c94:
  *param_1 = &PTR_FUN_1441d26b8;
  *param_2 = &PTR_FUN_1441d26b8;
  return uVar2;
}



// FUNCTION 142f56cb0 FUN_142f56cb0 body=245 status=ok
// SIG undefined FUN_142f56cb0(void)

undefined8 FUN_142f56cb0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_res8 [16];
  
  cVar1 = FUN_142f5f710();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_142f5af50(param_1,local_res8);
    if (*plVar2 != 0) {
      lVar3 = FUN_142f71d80();
      lVar7 = *plVar2;
      for (lVar5 = lVar7; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar3) goto LAB_142f56d10;
      }
    }
    lVar7 = 0;
LAB_142f56d10:
    plVar2 = (longlong *)FUN_142f5af50(param_2);
    if (*plVar2 != 0) {
      lVar4 = FUN_142f71d80();
      lVar5 = *plVar2;
      for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) goto LAB_142f56d46;
      }
    }
    lVar5 = 0;
LAB_142f56d46:
    if ((lVar7 == lVar5) &&
       (((*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c) &&
         *(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38)) &&
        *(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34)) &&
        *(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x30))) {
      uVar6 = 1;
      goto LAB_142f56d76;
    }
  }
  uVar6 = 0;
LAB_142f56d76:
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 142f56db0 FUN_142f56db0 body=308 status=ok
// SIG undefined FUN_142f56db0(void)

ulonglong FUN_142f56db0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_2 == (longlong *)0x0) {
LAB_142f56e99:
    return in_RAX & 0xffffffffffffff00;
  }
  lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
  in_RAX = 0;
  if (lVar2 == 0) goto LAB_142f56e99;
  lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
  if (lVar2 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b42c60) {
      _Init_thread_header(&DAT_146b42c60);
      if (DAT_146b42c60 == -1) {
        FName::FName(&DAT_146b42c58,L"MissionTracker",1);
        _Init_thread_footer(&DAT_146b42c60);
      }
    }
    plVar3 = (longlong *)FUN_140c2d5e0(*(undefined8 *)(lVar2 + 0x10),DAT_146b42c58);
    if (plVar3 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar3 + 0x378))(plVar3,*(int *)((longlong)plVar3 + 0x44) + lVar2);
      if (lVar2 != 0) {
        lVar4 = FUN_142f76500();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto LAB_142f56e7f;
      }
    }
  }
  lVar2 = 0;
LAB_142f56e7f:
                    /* WARNING: Could not recover jumptable at 0x000142f56e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*param_1 + 0x288))(param_1,lVar2);
  return uVar5;
}



// FUNCTION 142f56ef0 FUN_142f56ef0 body=279 status=ok
// SIG undefined FUN_142f56ef0(void)

undefined1 FUN_142f56ef0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_res10;
  
  if (param_2 != 0) {
    plVar7 = (longlong *)(param_1 + 0xa0);
    cVar1 = FUN_142f63b20(plVar7,param_1);
    if ((cVar1 != '\0') &&
       (lVar5 = FWeakObjectPtr::Get(param_1 + 0xc0), *(char *)(lVar5 + 0xa7) != '\0')) {
      uVar3 = FUN_142f5cdc0(lVar5,param_1);
      if (*(char *)(param_2 + 0x490) == '\0') {
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_res10);
      }
      else {
        iVar4 = FUN_142f5de40(param_2,plVar7,uVar3,param_1);
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_res10);
          lVar6 = FUN_142f594f0(param_2,local_res10);
          if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x60) == lVar5)) &&
             (iVar4 = *(int *)(lVar6 + 0x30) + -1, -1 < iVar4)) {
            lVar5 = (longlong)iVar4;
            plVar7 = (longlong *)(*(longlong *)(lVar6 + 0x28) + lVar5 * 8);
            do {
              if (*(char *)(*plVar7 + 0xa5) != '\0') {
                uVar2 = FUN_142f637d0(param_2,*plVar7,local_res10);
                return uVar2;
              }
              plVar7 = plVar7 + -1;
              lVar5 = lVar5 + -1;
            } while (-1 < lVar5);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142f57010 FUN_142f57010 body=593 status=ok
// SIG undefined FUN_142f57010(void)

bool FUN_142f57010(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1 + 0xa0;
  FUN_140c498b0(lVar6);
  if (param_2 == 0) {
    return false;
  }
  lVar2 = FUN_142f79140();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return false;
  }
  lVar2 = FWeakObjectPtr::Get(lVar6);
  lVar7 = 0;
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0xa8)) {
      return false;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      return false;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xa8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar6);
    if (lVar2 == 0) {
      return false;
    }
  }
  lVar3 = FUN_14171bfe0();
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
    return false;
  }
  lVar3 = FUN_142f71d80();
  while (lVar2 != lVar3) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
    if (lVar2 == 0) {
      return false;
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x4c8);
  lVar3 = lVar7;
  if (lVar2 != 0) {
    lVar4 = FUN_142f71d80();
    lVar5 = lVar2;
    do {
      lVar3 = lVar2;
      if (lVar5 == lVar4) break;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar3 = lVar7;
    } while (lVar5 != 0);
  }
  lVar5 = FWeakObjectPtr::Get(lVar6);
  lVar2 = lVar7;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0xa8)) || (*(longlong *)(param_1 + 0xb0) == 0))
    goto LAB_142f57241;
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xa8) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(lVar6);
    if (lVar5 == 0) goto LAB_142f57241;
  }
  lVar6 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar4 = FUN_142f71d80();
    lVar6 = lVar5;
    do {
      lVar2 = lVar5;
      if (lVar6 == lVar4) break;
      lVar6 = *(longlong *)(lVar6 + 0x30);
      lVar2 = lVar7;
    } while (lVar6 != 0);
  }
LAB_142f57241:
  return lVar3 == lVar2;
}



// FUNCTION 142f57270 FUN_142f57270 body=550 status=ok
// SIG undefined FUN_142f57270(void)

bool FUN_142f57270(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  
  lVar4 = param_1 + 0xa0;
  FUN_140c498b0(lVar4);
  if (param_2 == 0) {
    return false;
  }
  lVar2 = FWeakObjectPtr::Get(lVar4);
  lVar7 = 0;
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0xa8)) {
      return false;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      return false;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xa8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) {
      return false;
    }
  }
  lVar3 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = FUN_142f71d80();
    do {
      if (lVar2 == lVar3) {
        lVar3 = FWeakObjectPtr::Get(lVar4);
        lVar2 = lVar7;
        if (lVar3 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == *(int *)(param_1 + 0xa8)) || (*(longlong *)(param_1 + 0xb0) == 0))
          goto LAB_142f57451;
          lVar3 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar4,lVar3);
          if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0xa8) = DAT_1464b56f4;
          }
          lVar3 = FWeakObjectPtr::Get(lVar4);
          if (lVar3 == 0) goto LAB_142f57451;
        }
        lVar4 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_142f57451;
        lVar5 = FUN_142f71d80();
        lVar4 = lVar3;
        goto LAB_142f57440;
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  return false;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar2 = lVar7, lVar4 != 0) {
LAB_142f57440:
    lVar2 = lVar3;
    if (lVar4 == lVar5) break;
  }
LAB_142f57451:
  cVar6 = '\x04';
  lVar4 = FUN_142f5c680(param_2,lVar2);
  if (lVar4 != 0) {
    cVar6 = *(char *)(lVar4 + 0x10);
  }
  return cVar6 == *(char *)(param_1 + 200);
}



// FUNCTION 142f574a0 FUN_142f574a0 body=565 status=ok
// SIG undefined FUN_142f574a0(void)

bool FUN_142f574a0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_2 == (longlong *)0x0) {
    return false;
  }
  uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
  plVar4 = (longlong *)FUN_142f6c9f0(uVar3);
  lVar8 = param_1 + 0xa0;
  FUN_140c498b0(lVar8);
  if (plVar4 == (longlong *)0x0) {
    return false;
  }
  lVar5 = FWeakObjectPtr::Get(lVar8);
  lVar9 = 0;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0xa8)) {
      return false;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      return false;
    }
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar8,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xa8) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(lVar8);
    if (lVar5 == 0) {
      return false;
    }
  }
  lVar6 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar6 = FUN_142f71d80();
    do {
      if (lVar5 == lVar6) {
        lVar6 = FWeakObjectPtr::Get(lVar8);
        lVar5 = lVar9;
        if (lVar6 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == *(int *)(param_1 + 0xa8)) || (*(longlong *)(param_1 + 0xb0) == 0))
          goto LAB_142f57695;
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar8,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0xa8) = DAT_1464b56f4;
          }
          lVar6 = FWeakObjectPtr::Get(lVar8);
          if (lVar6 == 0) goto LAB_142f57695;
        }
        lVar8 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_142f57695;
        lVar7 = FUN_142f71d80();
        lVar8 = lVar6;
        goto LAB_142f57684;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  return false;
  while (lVar8 = *(longlong *)(lVar8 + 0x30), lVar5 = lVar9, lVar8 != 0) {
LAB_142f57684:
    lVar5 = lVar6;
    if (lVar8 == lVar7) break;
  }
LAB_142f57695:
  cVar2 = (**(code **)(*plVar4 + 0x728))(plVar4,lVar5);
  return cVar2 != '\0';
}



// FUNCTION 142f576e0 FUN_142f576e0 body=228 status=ok
// SIG undefined FUN_142f576e0(void)

undefined8 FUN_142f576e0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    cVar1 = FUN_142f63b20(param_1 + 0xa0,param_1);
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      if (*(char *)(param_1 + 0xf1) == '\0') {
        uVar4 = FWeakObjectPtr::Get(param_1 + 0xc0);
        uVar2 = FUN_142f5cdc0(uVar4,param_1);
      }
      else {
        uVar2 = 0;
      }
      if (*(char *)(param_2 + 0x490) == '\0') {
        (**(code **)(*(longlong *)(param_1 + 0xa0) + 0x18))(param_1 + 0xa0,local_res10);
        uVar3 = 4;
      }
      else {
        uVar3 = FUN_142f5de40(param_2,param_1 + 0xa0,uVar2,param_1);
      }
      uVar4 = 0;
      if (uVar3 == *(byte *)(param_1 + 0xf0)) {
        uVar4 = 1;
      }
    }
    return uVar4;
  }
  return 0;
}



// FUNCTION 142f577d0 FUN_142f577d0 body=318 status=ok
// SIG undefined FUN_142f577d0(void)

bool FUN_142f577d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xa0);
    cVar4 = FUN_142f63b20(plVar1,param_1);
    if (cVar4 != '\0') {
      if (*(char *)(param_1 + 0xf8) == '\0') {
LAB_142f5787c:
        iVar5 = FUN_142f5cf70(param_2,plVar1,param_1);
        switch(*(undefined1 *)(param_1 + 0xf0)) {
        case 0:
          return iVar5 == *(int *)(param_1 + 0xf4);
        case 1:
          return iVar5 != *(int *)(param_1 + 0xf4);
        case 2:
          return iVar5 < *(int *)(param_1 + 0xf4);
        case 3:
          return iVar5 <= *(int *)(param_1 + 0xf4);
        case 4:
          return *(int *)(param_1 + 0xf4) < iVar5;
        case 5:
          return *(int *)(param_1 + 0xf4) <= iVar5;
        default:
          return *(int *)(param_1 + 0xf4) == iVar5;
        }
      }
      cVar4 = FUN_142f63b20(plVar1,param_1);
      if (cVar4 != '\0') {
        uVar2 = FWeakObjectPtr::Get(param_1 + 0xc0);
        puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x18))(plVar1,local_res10);
        lVar6 = FUN_142f5c680(param_2,*puVar3);
        if ((((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) &&
            (*(char *)(lVar6 + 0x10) == '\x01')) &&
           (cVar4 = FUN_142f63460(uVar2,lVar6), cVar4 != '\0')) goto LAB_142f5787c;
      }
    }
  }
  return false;
}



// FUNCTION 142f57930 FUN_142f57930 body=424 status=ok
// SIG undefined FUN_142f57930(void)

undefined8 FUN_142f57930(longlong param_1,longlong param_2)

{
  byte bVar1;
  void *_Src;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 local_res10;
  undefined8 *local_38;
  int local_30;
  
  if (param_2 == 0) {
    return 0;
  }
  cVar4 = FUN_142f638e0(param_1 + 0xa0,param_1);
  if (cVar4 == '\0') {
    return 0;
  }
  cVar4 = *(char *)(param_1 + 0xe9);
  bVar10 = true;
  if (cVar4 != '\x02') {
    bVar1 = *(byte *)(param_1 + 0xe8);
    uVar5 = FUN_142f5dcc0(param_2,param_1 + 0xa0,param_1);
    bVar10 = uVar5 == bVar1;
    cVar4 = *(char *)(param_1 + 0xe9);
  }
  bVar3 = true;
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0xe0);
    FUN_142f5af50(param_1 + 0xa0,&local_res10);
    local_30 = *(int *)(lVar6 + 0x30);
    lVar7 = (longlong)local_30;
    puVar9 = (undefined8 *)0x0;
    _Src = *(void **)(lVar6 + 0x28);
    local_38 = (undefined8 *)0x0;
    if (local_30 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,local_30,0);
      puVar9 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar7 << 3);
    }
    lVar6 = (longlong)local_30;
    for (puVar8 = puVar9; puVar8 != puVar9 + lVar6; puVar8 = puVar8 + 1) {
      uVar2 = *puVar8;
      lVar7 = FUN_142f5c680(param_2,local_res10);
      if (((lVar7 == 0) || (1 < (byte)(*(char *)(lVar7 + 0x10) - 1U))) ||
         (cVar4 = FUN_142f636b0(uVar2,lVar7), cVar4 == '\0')) {
        bVar3 = false;
        break;
      }
    }
    if (puVar9 != (undefined8 *)0x0) {
      FMemory::Free(puVar9);
    }
  }
  if ((bVar10) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142f57ae0 FUN_142f57ae0 body=260 status=ok
// SIG undefined FUN_142f57ae0(void)

void FUN_142f57ae0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = param_1 + 8;
  cVar2 = FWeakObjectPtr::IsValid(lVar7);
  if (cVar2 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  lVar3 = FWeakObjectPtr::Get(lVar7);
  lVar8 = *(longlong *)(lVar3 + 0x458);
  lVar3 = (longlong)*(int *)(lVar3 + 0x460) * 0x80 + lVar8;
  if (lVar8 == lVar3) {
    return;
  }
  while (*(longlong *)(lVar8 + 0x70) != *(longlong *)(param_1 + 0x10)) {
    lVar8 = lVar8 + 0x80;
    if (lVar8 == lVar3) {
      return;
    }
  }
  lVar3 = FStreamableHandle::GetLoadedAsset();
  if (lVar3 != 0) {
    lVar4 = FUN_140600840();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142f57b9b;
  }
  lVar3 = 0;
LAB_142f57b9b:
  plVar5 = (longlong *)FWeakObjectPtr::Get(lVar7);
  uVar6 = (**(code **)(*plVar5 + 0x148))(plVar5);
  lVar7 = FUN_1405e8e00(uVar6);
  if ((lVar7 != 0) && (lVar3 != 0)) {
    FUN_1405f0e70(lVar8 + 0x58,lVar7,lVar3);
  }
  *(undefined1 *)(lVar8 + 0x50) = 0;
  return;
}



// FUNCTION 142f57bf0 FUN_142f57bf0 body=268 status=ok
// SIG undefined FUN_142f57bf0(void)

undefined8 FUN_142f57bf0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = param_1 + 8;
  cVar2 = FWeakObjectPtr::IsValid(lVar7);
  if ((cVar2 == '\0') || (*(longlong *)(param_1 + 0x10) == 0)) {
    return 1;
  }
  lVar3 = FWeakObjectPtr::Get(lVar7);
  lVar8 = *(longlong *)(lVar3 + 0x458);
  lVar3 = (longlong)*(int *)(lVar3 + 0x460) * 0x80 + lVar8;
  if (lVar8 != lVar3) {
    do {
      if (*(longlong *)(lVar8 + 0x70) == *(longlong *)(param_1 + 0x10)) {
        lVar3 = FStreamableHandle::GetLoadedAsset();
        if (lVar3 != 0) {
          lVar4 = FUN_140600840();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_142f57ca9;
        }
        lVar3 = 0;
LAB_142f57ca9:
        plVar5 = (longlong *)FWeakObjectPtr::Get(lVar7);
        uVar6 = (**(code **)(*plVar5 + 0x148))(plVar5);
        lVar7 = FUN_1405e8e00(uVar6);
        if ((lVar7 != 0) && (lVar3 != 0)) {
          FUN_1405f0e70(lVar8 + 0x58,lVar7,lVar3);
        }
        *(undefined1 *)(lVar8 + 0x50) = 0;
        return 1;
      }
      lVar8 = lVar8 + 0x80;
    } while (lVar8 != lVar3);
  }
  return 1;
}



// FUNCTION 142f57d00 FUN_142f57d00 body=412 status=ok
// SIG undefined FUN_142f57d00(void)

ulonglong FUN_142f57d00(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong param_5,undefined8 param_6)

{
  undefined2 *puVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  
  uVar3 = param_5;
  if ((param_5 >> 0x1c & 1) != 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar5 = (undefined8 *)FName::FName(&param_5,L"Mission",1);
  uVar6 = FUN_142f722a0();
  plVar7 = (longlong *)FUN_142510cf0(uVar6,*puVar5);
  uVar6 = param_6;
  (**(code **)(*plVar7 + 0x2d8))(plVar7,param_2,param_1,0,param_4,uVar3,param_6);
  iVar2 = (int)param_2[1];
  iVar4 = (2 - (uint)(iVar2 != 0)) + iVar2;
  *(int *)(param_2 + 1) = iVar4;
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
  *puVar1 = 0x2c;
  puVar1[1] = 0;
  puVar5 = (undefined8 *)FName::FName(&param_5,L"EventName",1);
  uVar8 = FUN_142f722a0();
  plVar7 = (longlong *)FUN_142510d80(uVar8,*puVar5);
  (**(code **)(*plVar7 + 0x2d8))(plVar7,param_2,param_1 + 8,0,param_4,uVar3,uVar6);
  iVar2 = (int)param_2[1];
  iVar4 = (2 - (uint)(iVar2 != 0)) + iVar2;
  *(int *)(param_2 + 1) = iVar4;
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
  *puVar1 = 0x2c;
  puVar1[1] = 0;
  return 1;
}



// FUNCTION 142f57ea0 FUN_142f57ea0 body=634 status=ok
// SIG undefined FUN_142f57ea0(void)

undefined8
FUN_142f57ea0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,undefined8 param_6)

{
  undefined2 *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  uVar3 = param_5;
  if ((param_5 >> 0x1c & 1) == 0) {
    uVar6 = FUN_142f79a30();
    FName::FName(&param_5,L"Mission",0);
    plVar7 = (longlong *)FUN_142510cf0(uVar6,param_5);
    uVar6 = param_6;
    (**(code **)(*plVar7 + 0x2d8))(plVar7,param_2,param_1 + 0x28,0,param_4,uVar3,param_6);
    iVar2 = (int)param_2[1];
    iVar5 = (2 - (uint)(iVar2 != 0)) + iVar2;
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    *puVar1 = 0x2c;
    puVar1[1] = 0;
    uVar8 = FUN_142f79a30();
    FName::FName(&param_5,L"ObjectiveName",0);
    plVar7 = (longlong *)FUN_142510d80(uVar8,param_5);
    (**(code **)(*plVar7 + 0x2d8))(plVar7,param_2,param_1 + 8,0,param_4,uVar3,uVar6);
    iVar2 = (int)param_2[1];
    iVar5 = (2 - (uint)(iVar2 != 0)) + iVar2;
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    *puVar1 = 0x2c;
    puVar1[1] = 0;
    lVar9 = FUN_142f79a30();
    FName::FName(&param_5,L"ObjectiveGuid",0);
    uVar4 = param_5;
    if (((int)param_5 != 0) || (plVar7 = (longlong *)0x0, (int)(param_5 >> 0x20) != 0)) {
      if (lVar9 == 0) {
        local_40 = (longlong *)0x0;
      }
      else {
        local_40 = *(longlong **)(lVar9 + 0x38);
      }
      local_38 = 0xffffffff;
      local_34 = 0x101;
      local_32 = 0;
      local_48 = lVar9;
      FUN_14067b390(&local_48);
      while ((plVar7 = (longlong *)0x0, local_40 != (longlong *)0x0 &&
             (plVar7 = local_40, local_40[3] != uVar4))) {
        local_40 = (longlong *)local_40[5];
        FUN_14067b390(&local_48);
      }
    }
    (**(code **)(*plVar7 + 0x2d8))(plVar7,param_2,param_1 + 0x10,0,param_4,uVar3,uVar6);
    return 1;
  }
  return 0;
}



// FUNCTION 142f58120 FUN_142f58120 body=712 status=ok
// SIG undefined FUN_142f58120(void)

undefined8
FUN_142f58120(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,undefined8 param_6)

{
  undefined2 *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  uVar3 = param_5;
  if ((param_5 >> 0x1c & 1) != 0) {
    return 0;
  }
  lVar7 = FUN_142f79b50();
  FName::FName(&param_5,L"Mission",0);
  uVar4 = param_5;
  if (((int)param_5 != 0) || ((int)(param_5 >> 0x20) != 0)) {
    if (lVar7 == 0) {
      local_40 = (longlong *)0x0;
    }
    else {
      local_40 = *(longlong **)(lVar7 + 0x38);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = lVar7;
    FUN_14252ca00(&local_48);
    plVar9 = local_40;
    while (local_40 = plVar9, plVar9 != (longlong *)0x0) {
      if (plVar9[3] == uVar4) goto LAB_142f58203;
      local_40 = (longlong *)plVar9[5];
      FUN_14252ca00(&local_48);
      plVar9 = local_40;
    }
  }
  plVar9 = (longlong *)0x0;
LAB_142f58203:
  uVar5 = param_6;
  (**(code **)(*plVar9 + 0x2d8))(plVar9,param_2,param_1,0,param_4,uVar3,param_6);
  iVar2 = (int)param_2[1];
  iVar6 = (2 - (uint)(iVar2 != 0)) + iVar2;
  *(int *)(param_2 + 1) = iVar6;
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
  *puVar1 = 0x2c;
  puVar1[1] = 0;
  uVar8 = FUN_142f79b50();
  FName::FName(&param_5,L"ObjectiveSetName",0);
  plVar9 = (longlong *)FUN_142510d80(uVar8,param_5);
  (**(code **)(*plVar9 + 0x2d8))(plVar9,param_2,param_1 + 0x28,0,param_4,uVar3,uVar5);
  iVar2 = (int)param_2[1];
  iVar6 = (2 - (uint)(iVar2 != 0)) + iVar2;
  *(int *)(param_2 + 1) = iVar6;
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
  *puVar1 = 0x2c;
  puVar1[1] = 0;
  lVar7 = FUN_142f79b50();
  FName::FName(&param_5,L"ObjectiveSetGuid",0);
  uVar4 = param_5;
  if (((int)param_5 != 0) || (plVar9 = (longlong *)0x0, (int)(param_5 >> 0x20) != 0)) {
    if (lVar7 == 0) {
      local_40 = (longlong *)0x0;
    }
    else {
      local_40 = *(longlong **)(lVar7 + 0x38);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = lVar7;
    FUN_14067b390(&local_48);
    while ((plVar9 = (longlong *)0x0, local_40 != (longlong *)0x0 &&
           (plVar9 = local_40, local_40[3] != uVar4))) {
      local_40 = (longlong *)local_40[5];
      FUN_14067b390(&local_48);
    }
  }
  (**(code **)(*plVar9 + 0x2d8))(plVar9,param_2,param_1 + 0x30,0,param_4,uVar3,uVar5);
  return 1;
}



// FUNCTION 142f583f0 FUN_142f583f0 body=288 status=ok
// SIG undefined FUN_142f583f0(void)

void FUN_142f583f0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (((*(char *)(param_1 + 0x128) == '\x03') &&
      (puVar1 = (undefined8 *)FUN_142f5c680(), puVar1 != (undefined8 *)0x0)) &&
     (*(char *)(puVar1 + 2) == '\x01')) {
    *(undefined1 *)(puVar1 + 2) = 3;
    *(undefined1 *)((longlong)puVar1 + 0x69) = 1;
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x588,puVar1);
    FUN_142f6a700(param_1,*puVar1,puVar1[5]);
    FUN_142f6ae20(param_1,*puVar1,puVar1[5]);
    FUN_142f6ac10(param_1,*puVar1,puVar1[5]);
    FUN_142f6a4f0(param_1,*puVar1,puVar1[5]);
    FUN_142f6aa00(param_1,*puVar1);
    uVar2 = 0;
    puVar1[5] = 0;
    uVar4 = uVar2;
    if (0 < *(int *)(puVar1 + 4)) {
      do {
        uVar3 = (int)uVar4 + 1;
        *(undefined4 *)(uVar2 + puVar1[3]) = 0;
        uVar2 = uVar2 + 4;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < *(int *)(puVar1 + 4));
    }
    FUN_142f55ef0(param_1,param_2);
    FUN_142f6a100(param_1,param_2);
    FUN_142f66de0(param_1,param_2,3);
    FUN_142f72010(*puVar1);
    FUN_142f65c80(param_1,param_2,5);
    FUN_142f663a0(param_1,param_2,5);
  }
  return;
}



// FUNCTION 142f58510 FUN_142f58510 body=55 status=ok
// SIG undefined FUN_142f58510(void)

void FUN_142f58510(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
    if (lVar1 != 0) {
      FUN_142f583f0(lVar1,*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 142f58550 FUN_142f58550 body=97 status=ok
// SIG undefined FUN_142f58550(void)

void FUN_142f58550(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) {
        *param_1 = param_2;
        param_1[1] = param_3;
        return;
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  *param_1 = 0;
  return;
}



// FUNCTION 142f585c0 thunk_FUN_142f585d0 body=5 status=ok
// SIG undefined thunk_FUN_142f585d0(void)

void thunk_FUN_142f585d0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lStack_18;
  longlong lStack_10;
  
  (**(code **)(*param_1 + 0x20))();
  param_1[1] = param_3;
  if (param_2 != (longlong *)0x0) {
    lVar2 = param_2[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar2 = param_2[0x1f];
      if (lVar2 == 0) {
        return;
      }
    }
    plVar3 = *(longlong **)(lVar2 + 0x210);
    plVar1 = plVar3 + *(int *)(lVar2 + 0x218);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) == param_3)) {
        lStack_18 = *(longlong *)(lVar2 + 200);
        lStack_10 = *(longlong *)(lVar2 + 0xd0);
        goto LAB_142f5865c;
      }
    }
    lStack_18 = 0;
    lStack_10 = 0;
LAB_142f5865c:
    param_1[2] = lStack_18;
    param_1[3] = lStack_10;
  }
  return;
}



// FUNCTION 142f585d0 FUN_142f585d0 body=182 status=ok
// SIG undefined FUN_142f585d0(void)

void FUN_142f585d0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_18;
  longlong lStack_10;
  
  (**(code **)(*param_1 + 0x20))();
  param_1[1] = param_3;
  if (param_2 != (longlong *)0x0) {
    lVar2 = param_2[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar2 = param_2[0x1f];
      if (lVar2 == 0) {
        return;
      }
    }
    plVar3 = *(longlong **)(lVar2 + 0x210);
    plVar1 = plVar3 + *(int *)(lVar2 + 0x218);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) == param_3)) {
        local_18 = *(longlong *)(lVar2 + 200);
        lStack_10 = *(longlong *)(lVar2 + 0xd0);
        goto LAB_142f5865c;
      }
    }
    local_18 = 0;
    lStack_10 = 0;
LAB_142f5865c:
    param_1[2] = local_18;
    param_1[3] = lStack_10;
  }
  return;
}



// FUNCTION 142f58690 FUN_142f58690 body=355 status=ok
// SIG undefined FUN_142f58690(void)

void FUN_142f58690(undefined4 *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [32];
  
  plVar6 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)FUN_142f71d80();
    plVar5 = param_2;
    do {
      plVar6 = param_2;
      if (plVar5 == plVar1) break;
      plVar5 = (longlong *)plVar5[6];
      plVar6 = (longlong *)0x0;
    } while (plVar5 != (longlong *)0x0);
  }
  if (plVar6 == (longlong *)0x0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[8] = 0;
    if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
    }
    if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 6) = 0;
    }
    param_1[2] = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_38,plVar6);
    FSoftObjectPath::operator=(param_1 + 4,uVar2);
    FWeakObjectPtr::operator=(param_1,plVar6);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[2] = DAT_1464b56f4;
  }
  *(longlong *)(param_1 + 10) = param_3;
  if (param_2 != (longlong *)0x0) {
    lVar3 = param_2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar3 = param_2[0x1f];
      if (lVar3 == 0) {
        return;
      }
    }
    plVar5 = *(longlong **)(lVar3 + 0x200);
    plVar6 = plVar5 + *(int *)(lVar3 + 0x208);
    for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
      lVar3 = *plVar5;
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) == param_3)) {
        puVar4 = &local_48;
        local_48 = *(undefined8 *)(lVar3 + 0x150);
        uStack_40 = *(undefined8 *)(lVar3 + 0x158);
        goto LAB_142f587bf;
      }
    }
    local_58 = 0;
    puVar4 = &local_58;
    uStack_50 = 0;
LAB_142f587bf:
    uVar2 = puVar4[1];
    *(undefined8 *)(param_1 + 0xc) = *puVar4;
    *(undefined8 *)(param_1 + 0xe) = uVar2;
  }
  return;
}



// FUNCTION 142f58800 FUN_142f58800 body=211 status=ok
// SIG undefined FUN_142f58800(void)

ulonglong FUN_142f58800(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  plVar6 = plVar1;
  do {
    if (plVar6 == plVar1 + (longlong)(int)lVar2 * 2) {
      return 0xffffffff;
    }
    if (*plVar6 != 0) {
      lVar3 = FUN_142f71d80();
      lVar7 = *plVar6;
      for (lVar5 = lVar7; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar3) goto LAB_142f58860;
      }
    }
    lVar7 = 0;
LAB_142f58860:
    if (*param_2 != 0) {
      lVar4 = FUN_142f71d80();
      lVar5 = *param_2;
      for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) goto LAB_142f58890;
      }
    }
    lVar5 = 0;
LAB_142f58890:
    if ((lVar7 == lVar5) && (plVar6[1] == param_2[1])) {
      return (longlong)plVar6 - (longlong)plVar1 >> 4 & 0xffffffff;
    }
    plVar6 = plVar6 + 2;
  } while( true );
}



// FUNCTION 142f588e0 FUN_142f588e0 body=358 status=ok
// SIG undefined FUN_142f588e0(void)

longlong FUN_142f588e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_res8;
  longlong local_res18;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  if (plVar1 != plVar1 + (longlong)(int)lVar2 * 6) {
    plVar8 = plVar1 + 3;
    plVar9 = plVar1;
    do {
      cVar3 = FWeakObjectPtr::IsValid(plVar8 + 1);
      if ((cVar3 == '\0') || (cVar3 = FWeakObjectPtr::IsValid(param_2 + 4), cVar3 == '\0')) {
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_res8);
        (**(code **)(*param_2 + 0x18))(param_2);
        if (local_res8 != 0) {
          lVar5 = FUN_142f71d80();
          for (lVar4 = local_res8; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            lVar7 = local_res8;
            if (lVar4 == lVar5) goto LAB_142f589a0;
          }
        }
        lVar7 = 0;
LAB_142f589a0:
        if (local_res18 != 0) {
          lVar5 = FUN_142f71d80();
          for (lVar4 = local_res18; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            lVar6 = local_res18;
            if (lVar4 == lVar5) goto LAB_142f589d0;
          }
        }
        lVar6 = 0;
LAB_142f589d0:
        if (lVar7 == lVar6) {
          bVar10 = ((*(int *)((longlong)plVar8 + 4) == *(int *)((longlong)param_2 + 0x1c) &&
                    *(int *)((longlong)plVar8 + -4) == *(int *)((longlong)param_2 + 0x14)) &&
                   (int)param_2[3] == (int)*plVar8) && (int)plVar8[-1] == (int)param_2[2];
          goto LAB_142f589f7;
        }
      }
      else {
        lVar4 = FWeakObjectPtr::Get(plVar8 + 1);
        lVar5 = FWeakObjectPtr::Get(param_2 + 4);
        bVar10 = lVar4 == lVar5;
LAB_142f589f7:
        if (bVar10) {
          return ((longlong)plVar9 - (longlong)plVar1) / 0x30;
        }
      }
      plVar9 = plVar9 + 6;
      plVar8 = plVar8 + 6;
    } while (plVar9 != plVar1 + (longlong)(int)lVar2 * 6);
  }
  return 0xffffffff;
}



// FUNCTION 142f58a50 FUN_142f58a50 body=216 status=ok
// SIG undefined FUN_142f58a50(void)

longlong FUN_142f58a50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  lVar1 = lVar2 + (longlong)(int)param_1[1] * 0x48;
  if (lVar2 != lVar1) {
    piVar6 = (int *)(lVar2 + 0x38);
    lVar7 = lVar2;
    do {
      cVar3 = FWeakObjectPtr::IsValid(piVar6 + 2);
      if (cVar3 == '\0') {
        cVar3 = FSoftObjectPath::operator==(piVar6 + -10,param_2 + 0x10);
        if (cVar3 != '\0') {
          bVar8 = ((piVar6[1] == *(int *)(param_2 + 0x3c) && piVar6[-1] == *(int *)(param_2 + 0x34))
                  && piVar6[-2] == *(int *)(param_2 + 0x30)) && *(int *)(param_2 + 0x38) == *piVar6;
          goto LAB_142f58adb;
        }
      }
      else {
        lVar4 = FWeakObjectPtr::Get(piVar6 + 2);
        lVar5 = FWeakObjectPtr::Get(param_2 + 0x40);
        bVar8 = lVar4 == lVar5;
LAB_142f58adb:
        if (bVar8) {
          return (lVar7 - lVar2) / 0x48;
        }
      }
      lVar7 = lVar7 + 0x48;
      piVar6 = piVar6 + 0x12;
    } while (lVar7 != lVar1);
  }
  return 0xffffffff;
}



// FUNCTION 142f58b30 FUN_142f58b30 body=460 status=ok
// SIG undefined FUN_142f58b30(void)

void FUN_142f58b30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_38;
  undefined8 local_30;
  
  plVar9 = *(longlong **)(param_1 + 0x458);
  plVar11 = plVar9 + (longlong)*(int *)(param_1 + 0x460) * 0x10;
  if (plVar9 != plVar11) {
    do {
      if (((*plVar9 != 0) && ((char)plVar9[2] == '\x01')) && (plVar9[5] != 0)) {
        local_38 = (longlong *)0x0;
        local_30 = 0;
        FUN_142f59e30(*plVar9,plVar9[5],&local_38);
        plVar5 = local_38;
        plVar1 = local_38 + (int)local_30;
        for (plVar10 = local_38; plVar10 != plVar1; plVar10 = plVar10 + 1) {
          lVar3 = *plVar10;
          iVar7 = FUN_142f5d020(plVar9 + 1,lVar3);
          if ((iVar7 < 0) || ((int)plVar9[4] <= iVar7)) goto LAB_142f58cbf;
          uVar8 = *(uint *)(plVar9[3] + (longlong)iVar7 * 4);
          uVar4 = uVar8;
          uVar6 = 0;
          if (*(char *)(lVar3 + 0xa0) != '\0') {
            for (; uVar8 = uVar6, uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
              uVar6 = uVar8 + 1;
            }
          }
          if ((byte)uVar8 < *(byte *)(lVar3 + 0x28)) goto LAB_142f58cbf;
        }
        iVar7 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        puVar2 = (undefined4 *)(*param_2 + (longlong)iVar7 * 0x48);
        *(undefined8 *)(puVar2 + 6) = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        *puVar2 = 0xffffffff;
        puVar2[1] = 0;
        *(undefined8 *)(puVar2 + 4) = 0;
        puVar2[8] = 0;
        if (0x7fffffff < (uint)puVar2[9]) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2 + 6,0);
        }
        if (*(undefined2 **)(puVar2 + 6) != (undefined2 *)0x0) {
          **(undefined2 **)(puVar2 + 6) = 0;
        }
        puVar2[2] = 0;
        *(undefined8 *)(puVar2 + 10) = 0;
        *(undefined8 *)(puVar2 + 0xc) = 0;
        *(undefined8 *)(puVar2 + 0xe) = 0;
        puVar2[0x10] = 0xffffffff;
        puVar2[0x11] = 0;
        FUN_142f60520(puVar2,*(undefined8 *)(*plVar9 + 0x10),plVar9[5]);
LAB_142f58cbf:
        if (plVar5 != (longlong *)0x0) {
          FMemory::Free(plVar5);
        }
      }
      plVar9 = plVar9 + 0x10;
    } while (plVar9 != plVar11);
  }
  return;
}



// FUNCTION 142f58d00 FUN_142f58d00 body=369 status=ok
// SIG undefined FUN_142f58d00(void)

int * FUN_142f58d00(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar10 = (int)(*param_3 >> 4);
    uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar5 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
    uVar11 = (iVar10 - uVar9) - uVar5 ^ uVar5 >> 0xc;
    uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 0x10;
    uVar5 = (uVar5 - uVar9) - uVar11 ^ uVar9 >> 5;
    uVar11 = (uVar11 - uVar9) - uVar5 ^ uVar5 >> 3;
    uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar10 = *(int *)((longlong)plVar1 +
                     (((longlong)(int)((uVar5 - uVar9) - uVar11) ^ (ulonglong)(uVar9 >> 0xf)) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar10 != -1) {
      lVar2 = *param_1;
      do {
        lVar8 = (longlong)iVar10 * 0x20;
        if (*(longlong *)(lVar8 + lVar2) != 0) {
          uVar3 = FUN_142f71d80();
          uVar7 = *(ulonglong *)(lVar8 + lVar2);
          for (uVar6 = uVar7; uVar6 != 0; uVar6 = *(ulonglong *)(uVar6 + 0x30)) {
            if (uVar6 == uVar3) goto LAB_142f58e12;
          }
        }
        uVar7 = 0;
LAB_142f58e12:
        if (*param_3 != 0) {
          uVar4 = FUN_142f71d80();
          uVar6 = *param_3;
          for (uVar3 = uVar6; uVar3 != 0; uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
            if (uVar3 == uVar4) goto LAB_142f58e38;
          }
        }
        uVar6 = 0;
LAB_142f58e38:
        if (uVar7 == uVar6) {
          *param_2 = iVar10;
          return param_2;
        }
        lVar2 = *param_1;
        iVar10 = *(int *)(lVar8 + 0x18 + lVar2);
      } while (iVar10 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142f58e80 FUN_142f58e80 body=147 status=ok
// SIG undefined FUN_142f58e80(void)

int FUN_142f58e80(longlong param_1,uint param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x460);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = iVar1 + -1;
      if (-1 < param_3) {
        iVar3 = param_3;
      }
      param_3 = 0;
      if (iVar3 < iVar1) {
        param_3 = iVar3;
      }
      if (*(byte *)((longlong)param_3 * 0x80 + 0x10 + *(longlong *)(param_1 + 0x458)) == param_2) {
        return param_3;
      }
      iVar2 = iVar2 + 1;
      param_3 = (param_4 ^ 1) * 2 + -1 + param_3;
    } while (iVar2 < iVar1);
  }
  return -1;
}



// FUNCTION 142f58f20 FUN_142f58f20 body=397 status=ok
// SIG undefined FUN_142f58f20(void)

longlong FUN_142f58f20(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    iVar6 = (int)(param_2 >> 4);
    uVar5 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar4 = -(uVar5 + iVar6) ^ uVar5 >> 0xd;
    uVar7 = (iVar6 - uVar5) - uVar4 ^ uVar4 >> 0xc;
    uVar5 = (uVar5 - uVar7) - uVar4 ^ uVar7 << 0x10;
    uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar5 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar4 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar4 ^ uVar7 << 10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar4 - uVar5) - uVar7) ^ (ulonglong)(uVar5 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      do {
        iVar1 = *(int *)((longlong)iVar6 * 0x40 + 0x38 + *param_1);
        if (*(ulonglong *)((longlong)iVar6 * 0x40 + *param_1) == param_2) break;
        iVar6 = iVar1;
      } while (iVar1 != -1);
joined_r0x000142f5902f:
      if (iVar6 != -1) {
        cVar2 = FUN_142f4ff30(*param_1 + 8 + (longlong)iVar6 * 0x40,param_3);
        if (cVar2 != '\0') {
          return *param_1 + 8 + (longlong)iVar6 * 0x40;
        }
        if (iVar1 == -1) {
          return 0;
        }
        iVar6 = iVar1;
        do {
          iVar1 = *(int *)((longlong)iVar6 * 0x40 + 0x38 + *param_1);
          if (*(ulonglong *)((longlong)iVar6 * 0x40 + *param_1) == param_2) break;
          iVar6 = iVar1;
        } while (iVar1 != -1);
        goto joined_r0x000142f5902f;
      }
    }
  }
  return 0;
}



// FUNCTION 142f590b0 FUN_142f590b0 body=790 status=ok
// SIG undefined FUN_142f590b0(void)

longlong FUN_142f590b0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = FWeakObjectPtr::Get(param_2 + 0x48);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_2 + 0x50)) {
      return param_2;
    }
    if (*(longlong *)(param_2 + 0x58) == 0) {
      return param_2;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_2 + 0x48,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_2 + 0x50) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(param_2 + 0x48);
    if (lVar3 == 0) {
      return param_2;
    }
  }
  lVar4 = FUN_142f47520();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return param_2;
  }
  lVar4 = FUN_142f590b0(param_1,lVar3);
  if (lVar4 != lVar3) {
    return lVar4;
  }
  cVar2 = FUN_142f43380(param_2,param_1,0);
  if (cVar2 == '\0') {
    return lVar4;
  }
  lVar3 = FUN_142f478b0();
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
    return param_2;
  }
  lVar3 = param_2 + 0xf0;
  lVar5 = FWeakObjectPtr::Get(lVar3);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_2 + 0xf8)) {
      return lVar4;
    }
    if (*(longlong *)(param_2 + 0x100) == 0) {
      return lVar4;
    }
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar3,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_2 + 0xf8) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(lVar3);
    if (lVar5 == 0) {
      return lVar4;
    }
  }
  lVar3 = FUN_142f47520();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return lVar4;
  }
  lVar3 = FUN_142f478b0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return lVar4;
  }
  lVar3 = lVar5 + 0xf0;
  lVar6 = FWeakObjectPtr::Get(lVar3);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar5 + 0xf8)) && (*(longlong *)(lVar5 + 0x100) != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar5 + 0xf8) = DAT_1464b56f4;
      }
      lVar6 = FWeakObjectPtr::Get(lVar3);
      if (lVar6 != 0) goto LAB_142f59369;
    }
  }
  else {
LAB_142f59369:
    lVar3 = FUN_142f47520();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142f593a2;
  }
  lVar6 = 0;
LAB_142f593a2:
  if (lVar6 == param_2) {
    return param_2;
  }
  return lVar4;
}



// FUNCTION 142f593d0 FUN_142f593d0 body=278 status=ok
// SIG undefined FUN_142f593d0(void)

longlong * FUN_142f593d0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == (longlong *)0x0) {
    return param_1;
  }
  uVar4 = (**(code **)(*param_2 + 0x148))(param_2);
  lVar5 = FUN_142f6c9f0(uVar4);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x128) == '\x03')) {
    puVar7 = *(undefined8 **)(lVar5 + 0x458);
    puVar8 = puVar7 + (longlong)*(int *)(lVar5 + 0x460) * 0x10;
    if (puVar7 != puVar8) {
      puVar6 = puVar7 + 1;
      do {
        if (((*(char *)(puVar6 + 1) == '\x01') &&
            (plVar2 = *(longlong **)(lVar5 + 0x498), plVar2 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar2 + 0x278))(plVar2,*puVar6,0), cVar3 != '\0')) {
          iVar1 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *puVar7;
        }
        puVar7 = puVar7 + 0x10;
        puVar6 = puVar6 + 0x10;
      } while (puVar7 != puVar8);
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 142f594f0 FUN_142f594f0 body=90 status=ok
// SIG undefined FUN_142f594f0(void)

undefined8 FUN_142f594f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) {
        lVar2 = FUN_142f5c680(param_1,param_2);
        if (lVar2 == 0) {
          return 0;
        }
        return *(undefined8 *)(lVar2 + 0x28);
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 142f59550 FUN_142f59550 body=457 status=ok
// SIG undefined FUN_142f59550(void)

void FUN_142f59550(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (((param_1 != (longlong *)0x0) && ((char)param_1[2] == '\x01')) &&
     (lVar8 = param_1[5], lVar8 != 0)) {
    uVar10 = 0;
    plVar11 = *(longlong **)(lVar8 + 0x28);
    uVar12 = (longlong)*(int *)(lVar8 + 0x30) & 0x1fffffffffffffff;
    if (plVar11 + *(int *)(lVar8 + 0x30) < plVar11) {
      uVar12 = uVar10;
    }
    if (uVar12 != 0) {
      do {
        lVar8 = *plVar11;
        lVar2 = *param_1;
        iVar3 = FUN_142f5ced0(lVar2,lVar8);
        if (iVar3 != -1) {
          plVar4 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar2 + 0x220));
          plVar9 = (longlong *)*plVar4;
          plVar4 = plVar9 + (int)plVar4[1];
          if (plVar9 != plVar4) {
            while( true ) {
              lVar8 = *plVar9;
              iVar3 = FUN_142f5d020(param_1 + 1,lVar8);
              if ((iVar3 < 0) || ((int)param_1[4] <= iVar3)) break;
              uVar7 = *(uint *)(param_1[3] + (longlong)iVar3 * 4);
              if (*(char *)(lVar8 + 0xa0) != '\0') {
                uVar6 = uVar7;
                uVar7 = 0;
                for (; uVar6 != 0; uVar6 = uVar6 & uVar6 - 1) {
                  uVar7 = uVar7 + 1;
                }
              }
              if ((byte)uVar7 < *(byte *)(lVar8 + 0x28)) break;
              plVar5 = (longlong *)param_1[8];
              plVar1 = plVar5 + (int)param_1[9];
              for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
                if (*plVar5 == lVar8) goto LAB_142f59683;
              }
              plVar9 = plVar9 + 1;
              if (plVar9 == plVar4) break;
            }
          }
        }
LAB_142f59683:
        if (lVar8 != 0) {
          plVar9 = (longlong *)param_1[6];
          plVar4 = plVar9 + (int)param_1[7];
          for (; plVar9 != plVar4; plVar9 = plVar9 + 1) {
            if (*plVar9 == lVar8) goto LAB_142f596e7;
          }
          if (((*(char *)(lVar8 + 0xa4) == '\0') && (*(char *)(lVar8 + 0xa5) == '\0')) ||
             (param_3 != '\0')) {
            iVar3 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar3 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
            }
            *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar8;
          }
        }
LAB_142f596e7:
        plVar11 = plVar11 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar12);
    }
  }
  return;
}



// FUNCTION 142f59720 FUN_142f59720 body=111 status=ok
// SIG undefined FUN_142f59720(void)

void FUN_142f59720(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar1) {
        uVar2 = FUN_142f5c680(param_1,param_2);
        FUN_142f59550(uVar2,param_3,param_4);
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 142f59790 FUN_142f59790 body=62 status=ok
// SIG undefined FUN_142f59790(void)

longlong FUN_142f59790(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x458);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x460) * 0x10;
  while( true ) {
    if (plVar2 == plVar3) {
      return 0;
    }
    if ((((char)plVar2[2] == '\x01') && (lVar1 = *plVar2, lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x177) != '\0')) break;
    plVar2 = plVar2 + 0x10;
  }
  return lVar1;
}



// FUNCTION 142f597d0 FUN_142f597d0 body=134 status=ok
// SIG undefined FUN_142f597d0(void)

undefined8 * FUN_142f597d0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    lVar2 = FUN_142f6c9f0(uVar1);
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar2 + 0x458);
      plVar4 = plVar3 + (longlong)*(int *)(lVar2 + 0x460) * 0x10;
      if (plVar3 != plVar4) {
        while ((((char)plVar3[2] != '\x01' || (lVar2 = *plVar3, lVar2 == 0)) ||
               (*(char *)(lVar2 + 0x177) == '\0'))) {
          plVar3 = plVar3 + 0x10;
          if (plVar3 == plVar4) {
            return param_1;
          }
        }
        if (lVar2 != 0) {
          *param_1 = *(undefined8 *)(lVar2 + 0x10);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 142f59860 FUN_142f59860 body=873 status=ok
// SIG undefined FUN_142f59860(void)

undefined8 FUN_142f59860(longlong param_1,undefined8 param_2)

{
  wchar_t **ppwVar1;
  char cVar2;
  int iVar3;
  wchar_t **ppwVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  int iVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int local_res8;
  wchar_t *local_res18;
  wchar_t *local_res20;
  wchar_t *local_78;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  int local_60;
  int local_5c;
  longlong local_58 [3];
  
  if (*(char *)(param_1 + 0x400) != '\0') goto LAB_142f59bab;
  ppwVar1 = (wchar_t **)(param_1 + 0x3f0);
  if (*(int *)(param_1 + 0x3f8) < 2) {
    ppwVar4 = (wchar_t **)FUN_142f53af0(param_1,&local_68);
    pwVar10 = local_68;
    if (ppwVar1 != ppwVar4) {
      if (*ppwVar1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *ppwVar1 = *ppwVar4;
      *ppwVar4 = (wchar_t *)0x0;
      *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(ppwVar4 + 1);
      *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)((longlong)ppwVar4 + 0xc);
      ppwVar4[1] = (wchar_t *)0x0;
      pwVar10 = local_68;
    }
joined_r0x000142f59b8b:
    if (pwVar10 != (wchar_t *)0x0) {
      FMemory::Free(pwVar10);
    }
  }
  else {
    cVar2 = FString::StartsWith(ppwVar1,L"Unkn",1);
    if ((cVar2 != '\0') && (lVar5 = FUN_142f5a280(param_1), lVar5 != 0)) {
      iVar8 = *(int *)(param_1 + 0x3f8);
      lVar9 = -1;
      local_78 = L"";
      if (iVar8 == 0) {
        pwVar12 = L"";
        iVar7 = -1;
      }
      else {
        pwVar12 = *ppwVar1;
        iVar7 = iVar8 + -1;
      }
      pwVar10 = (wchar_t *)0x0;
      iVar11 = 0;
      if (iVar8 == 0) {
        iVar7 = iVar11;
      }
      iVar3 = iVar7 + -4;
      iVar8 = iVar11;
      if ((-1 < iVar3) && (iVar8 = iVar7, iVar3 < iVar7)) {
        iVar8 = iVar3;
      }
      local_res8 = 0;
      local_5c = 0;
      local_res18 = (wchar_t *)0x0;
      local_68 = (wchar_t *)0x0;
      pwVar12 = pwVar12 + ((longlong)iVar7 - (longlong)iVar8);
      iVar8 = 0;
      if ((pwVar12 != (wchar_t *)0x0) && (iVar8 = 0, *pwVar12 != L'\0')) {
        do {
          lVar9 = lVar9 + 1;
        } while (pwVar12[lVar9] != L'\0');
        iVar7 = (int)lVar9 + 1;
        local_60 = iVar7;
        if (0 < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        }
        local_res8 = local_5c;
        iVar8 = local_60;
        local_res18 = local_68;
        FGenericPlatformString::Memcpy(local_68,pwVar12,(longlong)iVar7 * 2);
      }
      puVar6 = (undefined8 *)FUN_1404ce260(lVar5,local_58);
      iVar7 = *(int *)(puVar6 + 1);
      if (iVar7 != 0) {
        local_78 = (wchar_t *)*puVar6;
      }
      local_res20 = (wchar_t *)0x0;
      local_68 = (wchar_t *)0x0;
      local_5c = 0;
      iVar3 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar3 = iVar11;
      }
      if (4 < iVar3) {
        iVar3 = 4;
      }
      iVar7 = iVar3 + 1;
      if (iVar3 == 0) {
        iVar7 = 0;
      }
      local_60 = iVar7;
      if (0 < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        iVar7 = local_60;
        pwVar12 = local_68;
        local_res20 = local_68;
        if (0 < local_60) {
          wcsncpy(local_68,local_78,(longlong)iVar3);
          pwVar12[iVar3] = L'\0';
        }
      }
      pwVar12 = local_res20;
      pwVar13 = local_res18;
      if (1 < iVar7) {
        iVar3 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar3 = iVar11;
        }
        if ((iVar7 != 0) || (iVar8 = 1, iVar3 == 0)) {
          iVar8 = iVar11;
        }
        local_res20 = (wchar_t *)0x0;
        local_6c = local_5c;
        local_78 = pwVar12;
        local_70 = iVar7;
        if (local_5c < iVar8 + iVar7 + iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
        }
        iVar7 = local_70;
        pwVar10 = local_res18;
        pwVar13 = local_78;
        iVar8 = local_70;
        local_res8 = local_6c;
        if (iVar3 != 0) {
          lVar5 = (longlong)local_70;
          local_70 = local_70 + (uint)(local_70 == 0) + iVar3;
          if (local_6c < local_70) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar7);
          }
          local_res8 = local_6c;
          iVar8 = local_70;
          pwVar13 = local_78;
          pwVar12 = local_78 + (lVar5 - (ulonglong)(iVar7 != 0));
          _guard_xfg_dispatch_icall_nop(pwVar12,local_res18,(longlong)iVar3 * 2);
          pwVar12[iVar3] = L'\0';
        }
      }
      if (ppwVar1 == &local_68) {
        if (pwVar13 != (wchar_t *)0x0) {
          FMemory::Free(pwVar13);
        }
      }
      else {
        if (*ppwVar1 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *ppwVar1 = pwVar13;
        *(int *)(param_1 + 0x3f8) = iVar8;
        *(int *)(param_1 + 0x3fc) = local_res8;
      }
      if (local_res20 != (wchar_t *)0x0) {
        FMemory::Free(local_res20);
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      goto joined_r0x000142f59b8b;
    }
  }
  *(undefined1 *)(param_1 + 0x400) = 1;
LAB_142f59bab:
  FString::FString(param_2,param_1 + 0x3f0);
  return param_2;
}



// FUNCTION 142f59bd0 FUN_142f59bd0 body=331 status=ok
// SIG undefined FUN_142f59bd0(void)

undefined8 * FUN_142f59bd0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  bool bVar10;
  longlong local_58 [2];
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  
  puVar8 = (undefined2 *)0x0;
  bVar10 = param_3 == 0;
  if (bVar10) {
    local_58[1] = 0;
    plVar5 = local_58;
  }
  else {
    plVar5 = (longlong *)FUN_142f59860(param_3,local_38);
    puVar8 = (undefined2 *)*plVar5;
  }
  *plVar5 = 0;
  iVar1 = (int)plVar5[1];
  uVar2 = *(undefined4 *)((longlong)plVar5 + 0xc);
  plVar5[1] = 0;
  if (bVar10) {
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar10) && (local_38[0] != 0)) {
    FMemory::Free();
  }
  if (iVar1 < 2) {
    *param_2 = puVar8;
    *(int *)(param_2 + 1) = iVar1;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  }
  else {
    FString::PrintfImpl(local_58 + 2,L"_Pt%d",*(undefined4 *)(param_1 + 0x38));
    iVar7 = local_40 + -1;
    if (local_40 == 0) {
      iVar7 = 0;
    }
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    iVar3 = 0x20 - iVar7;
    if (iVar4 <= 0x20 - iVar7) {
      iVar3 = iVar4;
    }
    puVar6 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar6 = local_48;
    }
    puVar9 = &DAT_143f3eda8;
    if (iVar1 != 0) {
      puVar9 = puVar8;
    }
    FString::PrintfImpl(param_2,L"%.*s%s",iVar3,puVar9,puVar6);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
  }
  return param_2;
}



// FUNCTION 142f59d20 FUN_142f59d20 body=258 status=ok
// SIG undefined FUN_142f59d20(void)

void FUN_142f59d20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x2e8);
  lVar1 = lVar7 + (longlong)*(int *)(param_1 + 0x2f0) * 0x28;
joined_r0x000142f59d4c:
  if (lVar7 == lVar1) {
    return;
  }
  lVar4 = FUN_1405ec200(lVar7);
  if (lVar4 != 0) {
    lVar5 = FUN_14171bfe0();
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
      lVar6 = FUN_142f71d80();
      lVar5 = lVar4;
      do {
        if (lVar5 == lVar6) {
          lVar6 = FUN_142f71d80();
          lVar5 = lVar4;
          goto LAB_142f59dc8;
        }
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
  }
  goto LAB_142f59dfa;
  while (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0) {
LAB_142f59dc8:
    if (lVar5 == lVar6) {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      break;
    }
  }
LAB_142f59dfa:
  lVar7 = lVar7 + 0x28;
  goto joined_r0x000142f59d4c;
}



// FUNCTION 142f59e30 FUN_142f59e30 body=314 status=ok
// SIG undefined FUN_142f59e30(void)

void FUN_142f59e30(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x200);
  plVar5 = plVar7 + *(int *)(param_1 + 0x208);
  if (plVar7 != plVar5) {
    while (*plVar7 != param_2) {
      plVar7 = plVar7 + 1;
      if (plVar7 == plVar5) {
        return;
      }
    }
    puVar8 = *(undefined8 **)(param_2 + 0x28);
    puVar1 = puVar8 + *(int *)(param_2 + 0x30);
    for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      uVar3 = *puVar8;
      iVar4 = FUN_142f5ced0(param_1,uVar3);
      if (iVar4 == -1) {
        iVar4 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar4 * 8) = uVar3;
      }
      else {
        plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x220));
        puVar6 = (undefined8 *)*plVar5;
        puVar2 = puVar6 + (int)plVar5[1];
        for (; puVar6 != puVar2; puVar6 = puVar6 + 1) {
          iVar4 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar4 * 8) = *puVar6;
        }
      }
    }
  }
  return;
}



// FUNCTION 142f59f70 FUN_142f59f70 body=241 status=ok
// SIG undefined FUN_142f59f70(void)

void FUN_142f59f70(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    iVar3 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
      iVar3 = (int)param_2[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_2 + (longlong)iVar3 * 8),*(void **)(param_1 + 0x50),
               (longlong)iVar1 << 3);
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
  }
  if (param_3 == '\0') {
    plVar5 = *(longlong **)(param_1 + 0x68);
    uVar4 = 0;
    uVar6 = (longlong)*(int *)(param_1 + 0x70) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_1 + 0x70) < plVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        lVar2 = *plVar5;
        iVar1 = *(int *)(lVar2 + 0x58);
        if (iVar1 != 0) {
          iVar3 = (int)param_2[1];
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + iVar1) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
            iVar3 = (int)param_2[1];
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)iVar3 * 8),*(void **)(lVar2 + 0x50),
                     (longlong)iVar1 << 3);
          *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
        }
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
  }
  return;
}



// FUNCTION 142f5a070 FUN_142f5a070 body=96 status=ok
// SIG undefined FUN_142f5a070(void)

void FUN_142f5a070(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    iVar2 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
      iVar2 = (int)param_2[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_2 + (longlong)iVar2 * 8),*(void **)(param_1 + 0x50),
               (longlong)iVar1 << 3);
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
  }
  return;
}



// FUNCTION 142f5a0d0 FUN_142f5a0d0 body=33 status=ok
// SIG undefined FUN_142f5a0d0(void)

undefined8 * FUN_142f5a0d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f647e0(param_1 + 0x3c8);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142f5a100 FUN_142f5a100 body=298 status=ok
// SIG undefined FUN_142f5a100(void)

longlong * FUN_142f5a100(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong local_res18;
  
  plVar11 = *(longlong **)(param_1 + 0x588);
  iVar2 = *(int *)(param_1 + 0x590);
  *param_2 = 0;
  plVar1 = plVar11 + iVar2;
  local_res18 = param_3;
  if (plVar11 == plVar1) {
    return param_2;
  }
  do {
    lVar3 = *plVar11;
    lVar4 = *(longlong *)(lVar3 + 0x10);
    if (lVar4 != 0) {
      lVar6 = FUN_142f71d80();
      lVar8 = lVar4;
      do {
        lVar9 = lVar4;
        if (lVar8 == lVar6) goto LAB_142f5a174;
        lVar8 = *(longlong *)(lVar8 + 0x30);
      } while (lVar8 != 0);
    }
    lVar9 = 0;
LAB_142f5a174:
    if (param_3 != 0) {
      lVar6 = FUN_142f71d80();
      lVar8 = param_3;
      do {
        lVar7 = param_3;
        if (lVar8 == lVar6) goto LAB_142f5a191;
        lVar8 = *(longlong *)(lVar8 + 0x30);
      } while (lVar8 != 0);
    }
    lVar7 = 0;
LAB_142f5a191:
    if (lVar9 != lVar7) {
      uVar10 = 0;
      if (lVar4 != 0) {
        lVar6 = FUN_142f71d80();
        lVar8 = lVar4;
        do {
          if (lVar8 == lVar6) {
            lVar8 = FUN_142f5c680(param_1,lVar4);
            if (lVar8 != 0) {
              uVar10 = *(undefined8 *)(lVar8 + 0x28);
            }
            break;
          }
          lVar8 = *(longlong *)(lVar8 + 0x30);
        } while (lVar8 != 0);
      }
      cVar5 = FUN_142f62c70(lVar3,&local_res18,uVar10);
      if (cVar5 != '\0') {
        *param_2 = lVar4;
        return param_2;
      }
    }
    plVar11 = plVar11 + 1;
    if (plVar11 == plVar1) {
      return param_2;
    }
  } while( true );
}



// FUNCTION 142f5a230 FUN_142f5a230 body=74 status=ok
// SIG undefined FUN_142f5a230(void)

undefined8 * FUN_142f5a230(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    lVar2 = FUN_142f6c9f0(uVar1);
    if (lVar2 != 0) {
      *param_1 = *(undefined8 *)(lVar2 + 0x468);
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 142f5a280 FUN_142f5a280 body=126 status=ok
// SIG undefined FUN_142f5a280(void)

undefined8 FUN_142f5a280(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)FUN_142f647e0(param_1 + 0x3c8);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_142f791f0();
    plVar4 = plVar1;
    do {
      if (plVar4 == plVar2) {
        plVar2 = (longlong *)FUN_142f791f0();
        plVar4 = plVar1;
        goto LAB_142f5a2c0;
      }
      plVar4 = (longlong *)plVar4[6];
    } while (plVar4 != (longlong *)0x0);
  }
  return 0;
  while (plVar4 = (longlong *)plVar4[6], plVar4 != (longlong *)0x0) {
LAB_142f5a2c0:
    if (plVar4 == plVar2) goto LAB_142f5a2d0;
  }
  plVar1 = (longlong *)0x0;
LAB_142f5a2d0:
  lVar3 = plVar1[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar3 = plVar1[0x1f];
    if (lVar3 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(lVar3 + 0x60);
}



// FUNCTION 142f5a300 FUN_142f5a300 body=844 status=ok
// SIG undefined FUN_142f5a300(void)

void FUN_142f5a300(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  void *_Src;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 *local_98;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  plVar7 = (longlong *)FUN_142f71d80();
  plVar11 = param_1;
  while (plVar11 != plVar7) {
    plVar11 = (longlong *)plVar11[6];
    if (plVar11 == (longlong *)0x0) {
      return;
    }
  }
  plVar7 = (longlong *)FUN_142f71d80();
  plVar11 = param_1;
  do {
    plVar13 = (longlong *)0x0;
    plVar12 = param_1;
    if (plVar11 == plVar7) break;
    plVar11 = (longlong *)plVar11[6];
    plVar12 = plVar13;
  } while (plVar11 != (longlong *)0x0);
  plVar11 = (longlong *)plVar12[0x1f];
  if (plVar11 == (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x368))(plVar12);
    plVar11 = (longlong *)plVar12[0x1f];
    if (plVar11 != (longlong *)0x0) goto LAB_142f5a39d;
  }
  else {
LAB_142f5a39d:
    lVar8 = FUN_142f71d80();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142f5a3d6;
  }
  plVar11 = plVar13;
LAB_142f5a3d6:
  if (*(char *)((longlong)plVar11 + 0x177) == '\0') {
    lVar8 = plVar11[0x34];
    puVar3 = (undefined4 *)plVar11[0x33];
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    if (puVar3 != puVar3 + (longlong)(int)lVar8 * 10) {
      puVar14 = puVar3 + 1;
LAB_142f5a430:
      local_60 = puVar14[-1];
      local_5c = *puVar14;
      local_58 = puVar14[1];
      local_78 = *(undefined8 *)(puVar14 + 3);
      local_48 = 0;
      local_40 = 0;
      local_50 = 0;
      FString::FString(local_70,puVar14 + 5);
      FSoftObjectPath::operator=(&local_50,&local_78);
      plVar7 = (longlong *)FUN_1405ec200(&local_60);
      plVar11 = plVar13;
      if (plVar7 != (longlong *)0x0) {
        lVar9 = FUN_14171bfe0();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          plVar10 = (longlong *)FUN_142f71d80();
          plVar12 = plVar7;
          do {
            if (plVar12 == plVar10) {
              plVar10 = (longlong *)FUN_142f71d80();
              plVar12 = plVar7;
              goto LAB_142f5a523;
            }
            plVar12 = (longlong *)plVar12[6];
          } while (plVar12 != (longlong *)0x0);
        }
      }
      goto LAB_142f5a4d7;
    }
LAB_142f5a58b:
    plVar11 = (longlong *)
              ((ulonglong)((longlong)(local_98 + (int)local_90) + (7 - (longlong)local_98)) >> 3);
    if (local_98 + (int)local_90 < local_98) {
      plVar11 = plVar13;
    }
    puVar15 = local_98;
    if (plVar11 != (longlong *)0x0) {
      do {
        iVar2 = (int)param_2[1];
        uVar4 = *puVar15;
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar15 = puVar15 + 1;
        plVar13 = (longlong *)((longlong)plVar13 + 1);
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
      } while (plVar13 != plVar11);
    }
    if (local_98 != (undefined8 *)0x0) {
      FMemory::Free(local_98);
    }
  }
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  *(longlong **)(*param_2 + (longlong)iVar2 * 8) = param_1;
  return;
  while (plVar12 = (longlong *)plVar12[6], plVar12 != (longlong *)0x0) {
LAB_142f5a523:
    plVar11 = plVar7;
    if (plVar12 == plVar10) break;
  }
LAB_142f5a4d7:
  local_88 = (void *)0x0;
  local_80 = 0;
  FUN_142f5a300(plVar11,&local_88);
  cVar6 = FUN_142f560f0(&local_88,&local_98);
  _Src = local_88;
  if (cVar6 != '\0') {
    lVar9 = (longlong)(int)local_80;
    local_90 = CONCAT44(local_90._4_4_,(int)local_80);
    if (((int)local_80 == 0) && (local_90._4_4_ == 0)) {
      local_90 = local_80 & 0xffffffff;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (&local_98,local_80 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(local_98,_Src,lVar9 << 3);
    }
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  puVar1 = puVar14 + 9;
  puVar14 = puVar14 + 10;
  if (puVar1 == puVar3 + (longlong)(int)lVar8 * 10) goto LAB_142f5a58b;
  goto LAB_142f5a430;
}



// FUNCTION 142f5a650 FUN_142f5a650 body=305 status=ok
// SIG undefined FUN_142f5a650(void)

void FUN_142f5a650(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (param_1 != 0) {
    lVar3 = FUN_142f71d80();
    lVar4 = param_1;
    while (lVar4 != lVar3) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        return;
      }
    }
    lVar3 = FUN_142f71d80();
    lVar4 = param_1;
    do {
      if (lVar4 == lVar3) goto LAB_142f5a6a7;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
    param_1 = 0;
LAB_142f5a6a7:
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x100;
    local_12 = 0;
    local_28 = param_1;
    FUN_140cbbd90(&local_28);
    lVar4 = local_20;
    while (local_20 = lVar4, lVar4 != 0) {
      if (((((*(uint *)(lVar4 + 0x88) & 0x1c0400) == 0) &&
           ((*(uint *)(lVar4 + 0x88) >> 0x1a & 1) != 0)) && (*(int *)(lVar4 + 0x40) != 1)) &&
         (*(char *)(lVar4 + 0x8c) == '\x01')) {
        iVar1 = (int)param_2[1];
        uVar2 = *(undefined8 *)(lVar4 + 0x18);
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      }
      local_20 = *(longlong *)(lVar4 + 0x28);
      FUN_140cbbd90(&local_28);
      lVar4 = local_20;
    }
    AlgoImpl::IntroSortInternal<FName,FIdentityFunctor,TDereferenceWrapper<FName,TLess<FName>_>_>
              (*param_2,(longlong)(int)param_2[1],local_res8[0],local_res8);
  }
  return;
}



// FUNCTION 142f5a790 FUN_142f5a790 body=19 status=ok
// SIG undefined FUN_142f5a790(void)

longlong FUN_142f5a790(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x498);
  if (lVar3 == 0) {
    return 0;
  }
  plVar6 = *(longlong **)(lVar3 + 0x50);
  plVar1 = plVar6 + *(int *)(lVar3 + 0x58);
joined_r0x000142f5a7ce:
  if (plVar6 == plVar1) {
    return 0;
  }
  plVar5 = (longlong *)*plVar6;
  if (plVar5 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_142f71d80();
    plVar4 = plVar5;
    do {
      if (plVar4 == plVar2) {
        plVar2 = (longlong *)FUN_142f71d80();
        plVar4 = plVar5;
        goto LAB_142f5a7f8;
      }
      plVar4 = (longlong *)plVar4[6];
    } while (plVar4 != (longlong *)0x0);
  }
  goto LAB_142f5a835;
  while (plVar4 = (longlong *)plVar4[6], plVar4 != (longlong *)0x0) {
LAB_142f5a7f8:
    if (plVar4 == plVar2) goto LAB_142f5a808;
  }
  plVar5 = (longlong *)0x0;
LAB_142f5a808:
  lVar3 = plVar5[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar3 = plVar5[0x1f];
    if (lVar3 == 0) goto LAB_142f5a835;
  }
  if (*(char *)(lVar3 + 0x191) != '\0') {
    return lVar3;
  }
LAB_142f5a835:
  plVar6 = plVar6 + 1;
  goto joined_r0x000142f5a7ce;
}



// FUNCTION 142f5a7b0 FUN_142f5a7b0 body=160 status=ok
// SIG undefined FUN_142f5a7b0(void)

longlong FUN_142f5a7b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x50);
  plVar1 = plVar6 + *(int *)(param_1 + 0x58);
joined_r0x000142f5a7ce:
  if (plVar6 == plVar1) {
    return 0;
  }
  plVar5 = (longlong *)*plVar6;
  if (plVar5 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_142f71d80();
    plVar4 = plVar5;
    do {
      if (plVar4 == plVar2) {
        plVar2 = (longlong *)FUN_142f71d80();
        plVar4 = plVar5;
        goto LAB_142f5a7f8;
      }
      plVar4 = (longlong *)plVar4[6];
    } while (plVar4 != (longlong *)0x0);
  }
  goto LAB_142f5a835;
  while (plVar4 = (longlong *)plVar4[6], plVar4 != (longlong *)0x0) {
LAB_142f5a7f8:
    if (plVar4 == plVar2) goto LAB_142f5a808;
  }
  plVar5 = (longlong *)0x0;
LAB_142f5a808:
  lVar3 = plVar5[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar3 = plVar5[0x1f];
    if (lVar3 == 0) goto LAB_142f5a835;
  }
  if (*(char *)(lVar3 + 0x191) != '\0') {
    return lVar3;
  }
LAB_142f5a835:
  plVar6 = plVar6 + 1;
  goto joined_r0x000142f5a7ce;
}



// FUNCTION 142f5a870 FUN_142f5a870 body=219 status=ok
// SIG undefined FUN_142f5a870(void)

int FUN_142f5a870(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x458);
  iVar5 = -1;
  plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0x460) * 0x10;
  do {
    if (plVar4 == plVar6) {
LAB_142f5a8c4:
      iVar3 = -1;
LAB_142f5a8c6:
      plVar4 = *(longlong **)(param_1 + 0x458);
      plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0x460) * 0x10;
      for (; plVar4 != plVar6; plVar4 = plVar4 + 0x10) {
        if ((((*plVar4 != 0) && (*(char *)(*plVar4 + 0x177) != '\0')) &&
            (((char)plVar4[2] == '\x02' && (iVar2 = FUN_142f5e2e0(param_1), iVar5 < iVar2)))) &&
           ((iVar3 == -1 || (iVar2 < iVar3)))) {
          iVar5 = iVar2;
        }
      }
      return iVar5;
    }
    if ((((char)plVar4[2] == '\x01') && (lVar1 = *plVar4, lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x177) != '\0')) {
      if (lVar1 != 0) {
        iVar3 = FUN_142f5e2e0();
        goto LAB_142f5a8c6;
      }
      goto LAB_142f5a8c4;
    }
    plVar4 = plVar4 + 0x10;
  } while( true );
}



// FUNCTION 142f5a990 FUN_142f5a990 body=23 status=ok
// SIG undefined FUN_142f5a990(void)

undefined8 FUN_142f5a990(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x208)) {
    return **(undefined8 **)(param_1 + 0x200);
  }
  return 0;
}



// FUNCTION 142f5a9b0 FUN_142f5a9b0 body=609 status=ok
// SIG undefined FUN_142f5a9b0(void)

void FUN_142f5a9b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b42c20) && (_Init_thread_header(&DAT_146b42c20), DAT_146b42c20 == -1)) {
    uVar1 = FUN_142f79140();
    FUN_142f79140();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ActiveIcons",1);
    DAT_146b42c18 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b42c20);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b42c18 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b42c18 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b42c18 + 0x30));
  }
  if ((*piVar5 < DAT_146b42c30) && (_Init_thread_header(&DAT_146b42c30), DAT_146b42c30 == -1)) {
    uVar1 = FUN_142f79140();
    FUN_142f79140();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DefendTarget",1);
    DAT_146b42c28 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b42c30);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b42c28 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b42c28 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b42c28 + 0x30));
  }
  if ((*piVar5 < DAT_146b42c40) && (_Init_thread_header(&DAT_146b42c40), DAT_146b42c40 == -1)) {
    uVar1 = FUN_142f79140();
    FUN_142f79140();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bLevelLoadEventsIssued",1);
    DAT_146b42c38 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b42c40);
  }
  if (0 < *(int *)(DAT_146b42c38 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b42c38 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b42c38 + 0x30));
  }
  return;
}



// FUNCTION 142f5ac20 FUN_142f5ac20 body=232 status=ok
// SIG undefined FUN_142f5ac20(void)

void FUN_142f5ac20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14238b980();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b42c00) && (_Init_thread_header(&DAT_146b42c00), DAT_146b42c00 == -1))
  {
    uVar1 = AArchVisCharacter::StaticClass();
    AArchVisCharacter::StaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bEnabled",1);
    DAT_146b42bf8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b42c00);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b42bf8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b42bf8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b42bf8 + 0x30));
  }
  return;
}



// FUNCTION 142f5ad10 FUN_142f5ad10 body=107 status=ok
// SIG undefined FUN_142f5ad10(void)

undefined8 FUN_142f5ad10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    lVar1 = FUN_142f71d80();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar1) {
        uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar3 = FUN_142f6c9f0(uVar2);
        if (lVar3 == 0) {
          return 0;
        }
        uVar2 = FUN_142f5c820(lVar3,param_2);
        return uVar2;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 142f5ad80 FUN_142f5ad80 body=459 status=ok
// SIG undefined FUN_142f5ad80(void)

longlong * FUN_142f5ad80(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x28;
  FUN_140c498b0(lVar4);
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x30)) || (*(longlong *)(param_1 + 0x38) == 0))
    goto LAB_142f5ae61;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x30) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) goto LAB_142f5ae61;
  }
  lVar3 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = FUN_142f71d80();
    do {
      if (lVar2 == lVar3) {
        lVar2 = FWeakObjectPtr::Get(lVar4);
        if (lVar2 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == *(int *)(param_1 + 0x30)) || (*(longlong *)(param_1 + 0x38) == 0))
          break;
          lVar2 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar4,lVar2);
          if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x30) = DAT_1464b56f4;
          }
          lVar2 = FWeakObjectPtr::Get(lVar4);
          if (lVar2 == 0) break;
        }
        lVar4 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar3 = FUN_142f71d80();
          lVar4 = lVar2;
          do {
            if (lVar4 == lVar3) {
              *param_2 = lVar2;
              return param_2;
            }
            lVar4 = *(longlong *)(lVar4 + 0x30);
          } while (lVar4 != 0);
        }
        break;
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_142f5ae61:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142f5af50 FUN_142f5af50 body=731 status=ok
// SIG undefined FUN_142f5af50(void)

longlong * FUN_142f5af50(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FWeakObjectPtr::Get();
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 8)) && (*(longlong *)(param_1 + 0x10) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(param_1);
      if (lVar2 != 0) goto LAB_142f5afdc;
    }
  }
  else {
LAB_142f5afdc:
    lVar3 = FUN_14171bfe0();
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
      lVar3 = FUN_142f71d80();
      do {
        if (lVar2 == lVar3) goto LAB_142f5b07e;
        lVar2 = *(longlong *)(lVar2 + 0x30);
      } while (lVar2 != 0);
    }
  }
  lVar2 = FUN_1405ec200(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_14171bfe0();
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
      lVar3 = FUN_142f71d80();
      do {
        if (lVar2 == lVar3) break;
        lVar2 = *(longlong *)(lVar2 + 0x30);
      } while (lVar2 != 0);
    }
  }
LAB_142f5b07e:
  lVar2 = FWeakObjectPtr::Get(param_1);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 8)) || (*(longlong *)(param_1 + 0x10) == 0))
    goto LAB_142f5b13e;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_1,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(param_1);
    if (lVar2 == 0) goto LAB_142f5b13e;
  }
  lVar3 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = FUN_142f71d80();
    do {
      if (lVar2 == lVar3) {
        lVar2 = FWeakObjectPtr::Get(param_1);
        if (lVar2 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == *(int *)(param_1 + 8)) || (*(longlong *)(param_1 + 0x10) == 0))
          break;
          lVar2 = FUN_141796df0();
          FWeakObjectPtr::operator=(param_1,lVar2);
          if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 8) = DAT_1464b56f4;
          }
          lVar2 = FWeakObjectPtr::Get(param_1);
          if (lVar2 == 0) break;
        }
        lVar3 = FUN_14171bfe0();
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
          lVar4 = FUN_142f71d80();
          lVar3 = lVar2;
          do {
            if (lVar3 == lVar4) {
              *param_2 = lVar2;
              return param_2;
            }
            lVar3 = *(longlong *)(lVar3 + 0x30);
          } while (lVar3 != 0);
        }
        break;
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_142f5b13e:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142f5b230 FUN_142f5b230 body=21 status=ok
// SIG undefined FUN_142f5b230(void)

undefined8 * FUN_142f5b230(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = param_2[5];
  *param_2 = &PTR_FUN_1441d26b8;
  return param_1;
}



// FUNCTION 142f5b250 FUN_142f5b250 body=75 status=ok
// SIG undefined FUN_142f5b250(void)

undefined8 FUN_142f5b250(undefined8 param_1,undefined8 *param_2)

{
  FUN_142f5ad80(param_2,param_1);
  *param_2 = &PTR_FUN_144278ac0;
  if (param_2[8] != 0) {
    FMemory::Free();
  }
  *param_2 = &PTR_FUN_1441d26b8;
  return param_1;
}



// FUNCTION 142f5b2a0 FUN_142f5b2a0 body=440 status=ok
// SIG undefined FUN_142f5b2a0(void)

void FUN_142f5b2a0(longlong param_1,longlong *param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  undefined8 *local_58;
  undefined8 local_50;
  longlong *local_48;
  int local_40;
  
  plVar7 = (longlong *)0x0;
  local_40 = *(int *)(param_1 + -8);
  lVar4 = (longlong)local_40;
  _Src = *(void **)(param_1 + -0x10);
  local_48 = (longlong *)0x0;
  if (local_40 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_40,0);
    plVar7 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar4 << 3);
  }
  plVar5 = plVar7 + local_40;
  plVar8 = plVar7;
  if (plVar7 != plVar5) {
    do {
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        uVar3 = UNativeUserListEntry::GetPrivateStaticClass();
        cVar1 = UClass::ImplementsInterface(*(undefined8 *)(lVar4 + 0x10),uVar3);
        if (cVar1 != '\0') {
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_142f78e20(lVar4,&local_58);
          uVar10 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3
          ;
          if (local_58 + (int)local_50 < local_58) {
            uVar10 = 0;
          }
          puVar6 = local_58;
          uVar9 = 0;
          if (uVar10 != 0) {
            do {
              uVar3 = *puVar6;
              local_res8 = uVar3;
              iVar2 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                                (param_2,&local_res8);
              if (iVar2 == -1) {
                iVar2 = (int)param_2[1];
                *(int *)(param_2 + 1) = iVar2 + 1;
                if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
                }
                *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar3;
              }
              uVar9 = uVar9 + 1;
              puVar6 = puVar6 + 1;
            } while (uVar9 != uVar10);
          }
          if (local_58 != (undefined8 *)0x0) {
            FMemory::Free(local_58);
          }
        }
      }
      plVar7 = plVar7 + 1;
      plVar8 = local_48;
    } while (plVar7 != plVar5);
  }
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar8);
  return;
}



// FUNCTION 142f5b460 FUN_142f5b460 body=376 status=ok
// SIG undefined FUN_142f5b460(void)

void FUN_142f5b460(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_res8;
  
  lVar9 = *(longlong *)(param_1 + 8);
  lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x10) * 0x28;
  do {
    if (lVar9 == lVar1) {
      lVar9 = *(longlong *)(param_1 + 0x20);
      lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x28) * 0x48;
      for (; lVar9 != lVar1; lVar9 = lVar9 + 0x48) {
        cVar3 = FUN_142f638e0(lVar9,param_1 + -0x2e0);
        if (cVar3 != '\0') {
          puVar8 = (undefined8 *)FUN_142f5af50(lVar9,&local_res8);
          iVar4 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = *puVar8;
        }
      }
      return;
    }
    lVar5 = FUN_1405ec200(lVar9);
    if (lVar5 != 0) {
      lVar6 = FUN_14171bfe0();
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
        lVar7 = FUN_142f71d80();
        lVar6 = lVar5;
        do {
          if (lVar6 == lVar7) goto LAB_142f5b4f5;
          lVar6 = *(longlong *)(lVar6 + 0x30);
        } while (lVar6 != 0);
      }
    }
    lVar5 = 0;
LAB_142f5b4f5:
    local_res8 = lVar5;
    if (lVar5 != 0) {
      lVar7 = FUN_142f71d80();
      lVar6 = lVar5;
      do {
        if (lVar6 == lVar7) {
          iVar4 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                            (param_2,&local_res8);
          if (iVar4 == -1) {
            iVar4 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar4 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar5;
          }
          break;
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
    lVar9 = lVar9 + 0x28;
  } while( true );
}



// FUNCTION 142f5b5e0 FUN_142f5b5e0 body=104 status=ok
// SIG undefined FUN_142f5b5e0(void)

void FUN_142f5b5e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,local_res8);
  iVar1 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find(param_2,puVar2);
  if (iVar1 == -1) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *puVar2;
  }
  return;
}



// FUNCTION 142f5b650 FUN_142f5b650 body=293 status=ok
// SIG undefined FUN_142f5b650(void)

void FUN_142f5b650(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res18 [2];
  
  lVar4 = param_1 + 0x18;
  FUN_140c498b0(lVar4);
  lVar3 = FWeakObjectPtr::Get(lVar4);
  lVar7 = 0;
  lVar6 = lVar7;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x20)) || (*(longlong *)(param_1 + 0x28) == 0))
    goto LAB_142f5b731;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x20) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar4);
    if (lVar3 == 0) goto LAB_142f5b731;
  }
  lVar4 = FUN_14171bfe0();
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
    lVar5 = FUN_142f71d80();
    lVar4 = lVar3;
    do {
      lVar6 = lVar3;
      if (lVar4 == lVar5) break;
      lVar4 = *(longlong *)(lVar4 + 0x30);
      lVar6 = lVar7;
    } while (lVar4 != 0);
  }
LAB_142f5b731:
  local_res18[0] = lVar6;
  iVar2 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                    (param_2,local_res18);
  if (iVar2 == -1) {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar6;
  }
  return;
}



// FUNCTION 142f5b780 FUN_142f5b780 body=102 status=ok
// SIG undefined FUN_142f5b780(void)

void FUN_142f5b780(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  puVar2 = (undefined8 *)FUN_142f5af50(param_1 + 0x18,local_res8);
  iVar1 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find(param_2,puVar2);
  if (iVar1 == -1) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *puVar2;
  }
  return;
}



// FUNCTION 142f5b7f0 FUN_142f5b7f0 body=71 status=ok
// SIG undefined FUN_142f5b7f0(void)

void FUN_142f5b7f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = UNativeUserListEntry::GetPrivateStaticClass();
    cVar2 = UClass::ImplementsInterface(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),uVar1);
    if (cVar2 != '\0') {
      FUN_142f78e20(*(undefined8 *)(param_1 + 8),param_2);
    }
  }
  return;
}



// FUNCTION 142f5b840 FUN_142f5b840 body=129 status=ok
// SIG undefined FUN_142f5b840(void)

void FUN_142f5b840(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar3 + *(int *)(param_1 + 0x10);
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    iVar2 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                      (param_2,puVar3);
    if (iVar2 == -1) {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *puVar3;
    }
  }
  return;
}



// FUNCTION 142f5b8e0 FUN_142f5b8e0 body=145 status=ok
// SIG undefined FUN_142f5b8e0(void)

void FUN_142f5b8e0(longlong param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  lVar3 = (longlong)*(int *)(param_1 + 0x460) * 0x80 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x80) {
    if (*(byte *)(lVar2 + 0x10) == param_3) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 8);
    }
  }
  return;
}



// FUNCTION 142f5b980 FUN_142f5b980 body=280 status=ok
// SIG undefined FUN_142f5b980(void)

void FUN_142f5b980(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar4 = param_2;
    while (lVar4 != lVar1) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        return;
      }
    }
    plVar3 = (longlong *)FUN_142f5c680(param_1,param_2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = 0;
      if (((byte)((char)plVar3[2] - 1U) < 2) && (0 < *(int *)(*plVar3 + 0x208))) {
        for (lVar1 = **(longlong **)(*plVar3 + 0x200); lVar1 != 0;
            lVar1 = *(longlong *)(lVar1 + 0x70)) {
          cVar2 = FText::IsEmpty(lVar1 + 0x80);
          if (cVar2 == '\0') {
            lVar4 = lVar1;
          }
          if (lVar1 == plVar3[5]) break;
        }
      }
      if (lVar4 == 0) {
        lVar4 = *plVar3;
        FText::operator=(param_3,lVar4 + 0x2a0);
        lVar4 = lVar4 + 0x2b8;
      }
      else {
        FText::operator=(param_3,lVar4 + 0x80);
        lVar4 = lVar4 + 0x98;
      }
      TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>
      ::operator=(param_3 + 0x18,lVar4);
    }
  }
  return;
}



// FUNCTION 142f5baa0 FUN_142f5baa0 body=69 status=ok
// SIG undefined FUN_142f5baa0(void)

undefined8 FUN_142f5baa0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    plVar2 = (longlong *)FUN_142f6c9f0(uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142f5bad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x780))(plVar2,param_1[2]);
      return uVar1;
    }
  }
  return 0xffffffff;
}



// FUNCTION 142f5bb00 FUN_142f5bb00 body=71 status=ok
// SIG undefined FUN_142f5bb00(void)

void FUN_142f5bb00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = UNativeUserListEntry::GetPrivateStaticClass();
    cVar2 = UClass::ImplementsInterface(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10),uVar1)
    ;
    if (cVar2 != '\0') {
      FUN_142f78e20(*(undefined8 *)(param_1 + 0x20),param_2);
    }
  }
  return;
}



// FUNCTION 142f5bb60 FUN_142f5bb60 body=89 status=ok
// SIG undefined FUN_142f5bb60(void)

longlong FUN_142f5bb60(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    plVar2 = (longlong *)FUN_142f71d80();
    param_1 = (longlong *)*param_1;
    for (plVar1 = param_1; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
      if (plVar1 == plVar2) goto LAB_142f5bb90;
    }
  }
  param_1 = (longlong *)0x0;
LAB_142f5bb90:
  lVar3 = param_1[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*param_1 + 0x368))(param_1);
    lVar3 = param_1[0x1f];
  }
  return lVar3 + 0x38;
}



// FUNCTION 142f5bbc0 FUN_142f5bbc0 body=215 status=ok
// SIG undefined FUN_142f5bbc0(void)

int FUN_142f5bbc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x460) < 1) {
    return -1;
  }
  lVar4 = 0;
  do {
    lVar6 = *(longlong *)(param_1 + 0x458);
    if (*(longlong *)(lVar6 + 8 + lVar4) != 0) {
      lVar1 = FUN_142f71d80();
      lVar6 = *(longlong *)(lVar6 + 8 + lVar4);
      for (lVar2 = lVar6; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar1) goto LAB_142f5bc24;
      }
    }
    lVar6 = 0;
LAB_142f5bc24:
    if (param_2 != 0) {
      lVar1 = FUN_142f71d80();
      lVar2 = param_2;
      do {
        lVar3 = param_2;
        if (lVar2 == lVar1) goto LAB_142f5bc44;
        lVar2 = *(longlong *)(lVar2 + 0x30);
      } while (lVar2 != 0);
    }
    lVar3 = 0;
LAB_142f5bc44:
    if (lVar6 == lVar3) {
      return iVar5;
    }
    iVar5 = iVar5 + 1;
    lVar4 = lVar4 + 0x80;
    if (*(int *)(param_1 + 0x460) <= iVar5) {
      return -1;
    }
  } while( true );
}



// FUNCTION 142f5bca0 FUN_142f5bca0 body=98 status=ok
// SIG undefined FUN_142f5bca0(void)

longlong FUN_142f5bca0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x210);
  plVar1 = plVar3 + *(int *)(param_1 + 0x218);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    if ((lVar2 != 0) &&
       (((*(int *)(lVar2 + 0xd0) == param_2[2] && *(int *)(lVar2 + 0xd4) == param_2[3]) &&
        *(int *)(lVar2 + 0xcc) == param_2[1]) && *(int *)(lVar2 + 200) == *param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 142f5bd10 FUN_142f5bd10 body=165 status=ok
// SIG undefined FUN_142f5bd10(void)

void FUN_142f5bd10(longlong *param_1,undefined8 *param_2,undefined4 *param_3,uint *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == (longlong *)0x0) {
    *param_2 = &PTR_FUN_1441d26b8;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x148))();
    lVar4 = FUN_142f6c9f0(uVar3);
    if (lVar4 != 0) {
      cVar1 = FUN_142f63b20(param_2,param_1);
      if (cVar1 != '\0') {
        lVar5 = FWeakObjectPtr::Get(param_2 + 4);
        *param_4 = (uint)*(byte *)(lVar5 + 0x28);
        uVar2 = FUN_142f5cf70(lVar4,param_2,param_1);
        *param_3 = uVar2;
      }
    }
    *param_2 = &PTR_FUN_1441d26b8;
  }
  return;
}



// FUNCTION 142f5bdc0 FUN_142f5bdc0 body=363 status=ok
// SIG undefined FUN_142f5bdc0(void)

void FUN_142f5bdc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_38;
  ulonglong local_30;
  
  iVar1 = *(int *)(param_1 + -0x10);
  _Src = *(void **)(param_1 + -0x18);
  plVar11 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = CONCAT44(local_30._4_4_,iVar1);
  iVar7 = 0;
  if (iVar1 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,iVar1,0);
    plVar11 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar1 << 3);
    iVar7 = (int)local_30;
  }
  for (plVar9 = plVar11; plVar9 != plVar11 + iVar7; plVar9 = plVar9 + 1) {
    lVar2 = *plVar9;
    if (lVar2 != 0) {
      uVar4 = UUserObjectListEntry::GetPrivateStaticClass();
      cVar3 = UClass::ImplementsInterface(*(undefined8 *)(lVar2 + 0x10),uVar4);
      if (cVar3 != '\0') {
        local_38 = (longlong *)0x0;
        local_30 = 0;
        FUN_142f78f60(lVar2,&local_38);
        uVar6 = (ulonglong)(int)local_30;
        plVar10 = local_38 + uVar6 * 6;
        plVar8 = local_38;
        if (local_38 != plVar10) {
          do {
            FUN_142f4cda0(param_2,plVar8);
            plVar8 = plVar8 + 6;
          } while (plVar8 != plVar10);
          uVar6 = local_30 & 0xffffffff;
        }
        uVar5 = (uint)uVar6;
        plVar8 = local_38;
        while (uVar5 != 0) {
          *plVar8 = (longlong)&PTR_FUN_1441d26b8;
          plVar8 = plVar8 + 6;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free(local_38);
        }
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
    return;
  }
  return;
}



// FUNCTION 142f5bf30 FUN_142f5bf30 body=241 status=ok
// SIG undefined FUN_142f5bf30(void)

void FUN_142f5bf30(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_14 = 0;
  local_18 = 0xffffffff;
  local_10 = 0;
  local_38 = &DAT_1441d2800;
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))
                     ((longlong *)(param_1 + 0x10),local_res8);
  local_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  local_10 = *puVar2;
  local_30 = *(undefined8 *)(param_1 + 0x18);
  local_18 = *(undefined4 *)(param_1 + 0x30);
  local_14 = *(undefined4 *)(param_1 + 0x34);
  iVar1 = FUN_142f588e0(param_2,&local_38);
  if (iVar1 == -1) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x30 + *param_2);
    *puVar2 = &PTR_FUN_1441d26b8;
    puVar2[1] = local_30;
    puVar2[2] = local_28;
    puVar2[3] = uStack_20;
    *(undefined4 *)(puVar2 + 4) = local_18;
    *(undefined4 *)((longlong)puVar2 + 0x24) = local_14;
    *puVar2 = &DAT_1441d2800;
    puVar2[5] = local_10;
  }
  return;
}



// FUNCTION 142f5c030 FUN_142f5c030 body=71 status=ok
// SIG undefined FUN_142f5c030(void)

void FUN_142f5c030(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = UUserObjectListEntry::GetPrivateStaticClass();
    cVar2 = UClass::ImplementsInterface(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),uVar1)
    ;
    if (cVar2 != '\0') {
      FUN_142f78f60(*(undefined8 *)(param_1 + 0x18),param_2);
    }
  }
  return;
}



// FUNCTION 142f5c080 FUN_142f5c080 body=98 status=ok
// SIG undefined FUN_142f5c080(void)

longlong FUN_142f5c080(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x200);
  plVar1 = plVar3 + *(int *)(param_1 + 0x208);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    if ((lVar2 != 0) &&
       (((*(int *)(lVar2 + 0x158) == param_2[2] && *(int *)(lVar2 + 0x15c) == param_2[3]) &&
        *(int *)(lVar2 + 0x154) == param_2[1]) && *(int *)(lVar2 + 0x150) == *param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 142f5c0f0 FUN_142f5c0f0 body=392 status=ok
// SIG undefined FUN_142f5c0f0(void)

void FUN_142f5c0f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *local_38;
  ulonglong local_30;
  
  iVar1 = *(int *)(param_1 + -0x18);
  plVar8 = (longlong *)0x0;
  _Src = *(void **)(param_1 + -0x20);
  local_38 = (longlong *)0x0;
  local_30 = CONCAT44(local_30._4_4_,iVar1);
  iVar5 = 0;
  if (iVar1 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,iVar1,0);
    plVar8 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar1 << 3);
    iVar5 = (int)local_30;
  }
  for (plVar11 = plVar8; plVar11 != plVar8 + iVar5; plVar11 = plVar11 + 1) {
    lVar2 = *plVar11;
    if (lVar2 != 0) {
      uVar4 = UUserObjectListEntry::GetPrivateStaticClass();
      cVar3 = UClass::ImplementsInterface(*(undefined8 *)(lVar2 + 0x10),uVar4);
      if (cVar3 != '\0') {
        local_38 = (longlong *)0x0;
        local_30 = 0;
        FUN_142f79030(lVar2,&local_38);
        uVar10 = (ulonglong)(int)local_30;
        plVar7 = local_38 + uVar10 * 9;
        plVar6 = local_38;
        if (local_38 != plVar7) {
          do {
            cVar3 = FUN_142f638e0(plVar6,lVar2);
            if (cVar3 != '\0') {
              FUN_142f4ce30(param_2,plVar6);
            }
            plVar6 = plVar6 + 9;
          } while (plVar6 != plVar7);
          uVar10 = local_30 & 0xffffffff;
        }
        if ((int)uVar10 != 0) {
          plVar7 = local_38 + 3;
          do {
            if (*plVar7 != 0) {
              FMemory::Free();
            }
            plVar7 = plVar7 + 9;
            uVar9 = (int)uVar10 - 1;
            uVar10 = (ulonglong)uVar9;
          } while (uVar9 != 0);
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free(local_38);
        }
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
    return;
  }
  return;
}



// FUNCTION 142f5c290 FUN_142f5c290 body=101 status=ok
// SIG undefined FUN_142f5c290(void)

undefined4 FUN_142f5c290(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = 2;
  if (param_1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x148))();
    lVar3 = FUN_142f6c9f0(uVar2);
    if (lVar3 != 0) {
      uVar1 = FUN_142f5dcc0(lVar3,param_2,param_1);
    }
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 142f5c300 FUN_142f5c300 body=183 status=ok
// SIG undefined FUN_142f5c300(void)

undefined4 FUN_142f5c300(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  uVar3 = 4;
  if (param_3 != (longlong *)0x0) {
    param_1 = param_3;
  }
  if ((param_1 != (longlong *)0x0) && (cVar1 = FUN_142f63b20(param_2,param_1), cVar1 != '\0')) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = FUN_142f6c9f0(uVar4);
    if (lVar5 != 0) {
      uVar4 = FWeakObjectPtr::Get(param_2 + 4);
      uVar2 = FUN_142f5cdc0(uVar4,param_1);
      if (*(char *)(lVar5 + 0x490) == '\0') {
        (**(code **)(*param_2 + 0x18))(param_2,local_res8);
      }
      else {
        uVar3 = FUN_142f5de40(lVar5,param_2,uVar2,param_1);
      }
    }
  }
  *param_2 = (longlong)&PTR_FUN_1441d26b8;
  return uVar3;
}



// FUNCTION 142f5c3c0 FUN_142f5c3c0 body=465 status=ok
// SIG undefined FUN_142f5c3c0(void)

void FUN_142f5c3c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong *local_38;
  ulonglong local_30;
  
  lVar5 = *(longlong *)(param_1 + -0x5e0);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1 + -0x700);
  }
  lVar5 = FUN_142f6c9f0(lVar5);
  if (lVar5 != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_142f78f60(param_1 + -0x700,&local_38);
    uVar9 = (ulonglong)(int)local_30;
    plVar11 = local_38 + uVar9 * 6;
    plVar10 = local_38;
    if (local_38 != plVar11) {
      do {
        cVar2 = FUN_142f63b20(plVar10,param_1 + -0x700);
        if (cVar2 != '\0') {
          lVar6 = FWeakObjectPtr::Get(plVar10 + 4);
          if ((*(char *)(lVar6 + 0xa0) != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
            UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
          }
          if ((*(char *)(lVar6 + 0xa4) == '\0') || (*(char *)(lVar6 + 0xa5) != '\0')) {
            uVar3 = FUN_142f5cdc0(lVar6,*(undefined8 *)(param_1 + -0x5e8));
            if (*(char *)(lVar5 + 0x490) == '\0') {
              (**(code **)(*plVar10 + 0x18))(plVar10,local_res8);
            }
            else {
              iVar4 = FUN_142f5de40(lVar5,plVar10,uVar3,param_1 + -0x700);
              if (iVar4 == 1) {
                plVar1 = (longlong *)*param_2;
                iVar4 = (int)param_2[1];
                for (plVar7 = plVar1; plVar7 != plVar1 + iVar4; plVar7 = plVar7 + 1) {
                  if (*plVar7 == lVar6) {
                    if ((int)((longlong)plVar7 - (longlong)plVar1 >> 3) != -1) goto LAB_142f5c532;
                    break;
                  }
                }
                *(int *)(param_2 + 1) = iVar4 + 1;
                if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
                }
                *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar6;
              }
            }
          }
        }
LAB_142f5c532:
        plVar10 = plVar10 + 6;
      } while (plVar10 != plVar11);
      uVar9 = local_30 & 0xffffffff;
    }
    uVar8 = (uint)uVar9;
    plVar10 = local_38;
    while (uVar8 != 0) {
      *plVar10 = (longlong)&PTR_FUN_1441d26b8;
      plVar10 = plVar10 + 6;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar8;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return;
}



// FUNCTION 142f5c5a0 FUN_142f5c5a0 body=208 status=ok
// SIG undefined FUN_142f5c5a0(void)

void FUN_142f5c5a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = param_2;
  FUN_142f58d00((longlong *)(param_1 + 0x598),local_res8,&local_res10);
  plVar4 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x598));
  }
  plVar2 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  if ((plVar2 != (longlong *)0x0) && (param_3 != plVar2)) {
    iVar6 = (int)plVar2[1];
    lVar1 = *plVar2;
    *(int *)(param_3 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_3,iVar6);
    if (iVar6 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 8);
      puVar5 = (undefined4 *)*param_3;
      do {
        *puVar5 = *(undefined4 *)(puVar3 + -1);
        puVar5[1] = *(undefined4 *)((longlong)puVar3 + -4);
        *(undefined8 *)(puVar5 + 2) = *puVar3;
        iVar6 = iVar6 + -1;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 4;
      } while (iVar6 != 0);
    }
  }
  return;
}



// FUNCTION 142f5c670 thunk_FUN_142f5c680 body=5 status=ok
// SIG undefined thunk_FUN_142f5c680(void)

longlong thunk_FUN_142f5c680(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar6 = param_2;
    do {
      if (lVar6 == lVar1) {
        lVar6 = *(longlong *)(param_1 + 0x458);
        lVar1 = (longlong)*(int *)(param_1 + 0x460) * 0x80 + lVar6;
        do {
          if (lVar6 == lVar1) {
            return 0;
          }
          if (*(longlong *)(lVar6 + 8) != 0) {
            lVar2 = FUN_142f71d80();
            lVar5 = *(longlong *)(lVar6 + 8);
            for (lVar4 = lVar5; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
              if (lVar4 == lVar2) goto LAB_142f5c710;
            }
          }
          lVar5 = 0;
LAB_142f5c710:
          lVar2 = FUN_142f71d80();
          lVar4 = param_2;
          do {
            lVar3 = param_2;
            if (lVar4 == lVar2) goto LAB_142f5c72d;
            lVar4 = *(longlong *)(lVar4 + 0x30);
          } while (lVar4 != 0);
          lVar3 = 0;
LAB_142f5c72d:
          if (lVar5 == lVar3) {
            return lVar6;
          }
          lVar6 = lVar6 + 0x80;
        } while( true );
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  return 0;
}



// FUNCTION 142f5c680 FUN_142f5c680 body=200 status=ok
// SIG undefined FUN_142f5c680(void)

longlong FUN_142f5c680(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar6 = param_2;
    do {
      if (lVar6 == lVar1) {
        lVar6 = *(longlong *)(param_1 + 0x458);
        lVar1 = (longlong)*(int *)(param_1 + 0x460) * 0x80 + lVar6;
        do {
          if (lVar6 == lVar1) {
            return 0;
          }
          if (*(longlong *)(lVar6 + 8) != 0) {
            lVar2 = FUN_142f71d80();
            lVar5 = *(longlong *)(lVar6 + 8);
            for (lVar4 = lVar5; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
              if (lVar4 == lVar2) goto LAB_142f5c710;
            }
          }
          lVar5 = 0;
LAB_142f5c710:
          lVar2 = FUN_142f71d80();
          lVar4 = param_2;
          do {
            lVar3 = param_2;
            if (lVar4 == lVar2) goto LAB_142f5c72d;
            lVar4 = *(longlong *)(lVar4 + 0x30);
          } while (lVar4 != 0);
          lVar3 = 0;
LAB_142f5c72d:
          if (lVar5 == lVar3) {
            return lVar6;
          }
          lVar6 = lVar6 + 0x80;
        } while( true );
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  return 0;
}



// FUNCTION 142f5c750 FUN_142f5c750 body=193 status=ok
// SIG undefined FUN_142f5c750(void)

int FUN_142f5c750(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x460)) {
    lVar4 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x458);
      if (*(longlong *)(lVar6 + 8 + lVar4) != 0) {
        lVar1 = FUN_142f71d80();
        lVar6 = *(longlong *)(lVar6 + 8 + lVar4);
        for (lVar2 = lVar6; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar1) goto LAB_142f5c7b4;
        }
      }
      lVar6 = 0;
LAB_142f5c7b4:
      if (param_2 != 0) {
        lVar1 = FUN_142f71d80();
        lVar2 = param_2;
        do {
          lVar3 = param_2;
          if (lVar2 == lVar1) goto LAB_142f5c7d4;
          lVar2 = *(longlong *)(lVar2 + 0x30);
        } while (lVar2 != 0);
      }
      lVar3 = 0;
LAB_142f5c7d4:
      if (lVar6 == lVar3) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 0x80;
    } while (iVar5 < *(int *)(param_1 + 0x460));
  }
  return -1;
}



// FUNCTION 142f5c820 FUN_142f5c820 body=89 status=ok
// SIG undefined FUN_142f5c820(void)

undefined8 FUN_142f5c820(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar1) {
        puVar2 = (undefined8 *)FUN_142f5c680(param_1,param_2);
        if (puVar2 == (undefined8 *)0x0) {
          return 0;
        }
        return *puVar2;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 142f5c880 FUN_142f5c880 body=326 status=ok
// SIG undefined FUN_142f5c880(void)

longlong FUN_142f5c880(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if ((*(longlong **)(param_1 + 0x28) == (longlong *)0x0) ||
     (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))(), lVar4 == 0)) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar8 = *(longlong **)(lVar4 + 0x548);
  plVar1 = plVar8 + (longlong)*(int *)(lVar4 + 0x550) * 3;
  if (plVar8 == plVar1) {
    return 0;
  }
  do {
    if (*plVar8 != 0) {
      lVar5 = FUN_142f71d80();
      lVar4 = *plVar8;
      for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) goto LAB_142f5c910;
      }
    }
    lVar4 = 0;
LAB_142f5c910:
    if (lVar3 != 0) {
      lVar5 = FUN_142f71d80();
      lVar6 = lVar3;
      do {
        lVar7 = lVar3;
        if (lVar6 == lVar5) goto LAB_142f5c930;
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
    lVar7 = 0;
LAB_142f5c930:
    if (lVar4 == lVar7) {
      fVar2 = *(float *)(plVar8 + 1);
      if (fVar2 < 0.0) {
        return (longlong)(float)((int)ROUND((fVar2 + fVar2) - 0.5) >> 1);
      }
      return (longlong)(float)-((int)ROUND(-0.5 - (fVar2 + fVar2)) >> 1);
    }
    plVar8 = plVar8 + 3;
    if (plVar8 == plVar1) {
      return 0;
    }
  } while( true );
}



// FUNCTION 142f5c9d0 FUN_142f5c9d0 body=33 status=ok
// SIG undefined FUN_142f5c9d0(void)

undefined1 FUN_142f5c9d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142f5c680();
  if (lVar1 != 0) {
    return *(undefined1 *)(lVar1 + 0x10);
  }
  return 4;
}



// FUNCTION 142f5ca00 FUN_142f5ca00 body=127 status=ok
// SIG undefined FUN_142f5ca00(void)

undefined1 FUN_142f5ca00(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    lVar1 = FUN_142f71d80();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar1) {
        uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar3 = FUN_142f6c9f0(uVar2);
        if (lVar3 == 0) {
          return 4;
        }
        uVar4 = 4;
        lVar3 = FUN_142f5c680(lVar3,param_2);
        if (lVar3 != 0) {
          uVar4 = *(undefined1 *)(lVar3 + 0x10);
        }
        return uVar4;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 4;
}



// FUNCTION 142f5ca80 FUN_142f5ca80 body=184 status=ok
// SIG undefined FUN_142f5ca80(void)

undefined1 FUN_142f5ca80(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (*(int *)(param_2 + 8) != 0) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = param_2 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x458);
      plVar6 = plVar3 + (longlong)*(int *)(param_1 + 0x460) * 0x10;
      for (; plVar3 != plVar6; plVar3 = plVar3 + 0x10) {
        lVar1 = *plVar3;
        if (lVar1 != 0) {
          if (*(int *)(param_2 + 8) == 0) {
LAB_142f5cafb:
            uVar4 = 0;
          }
          else {
            plVar5 = (longlong *)param_2[6];
            if ((longlong *)param_2[6] == (longlong *)0x0) {
              plVar5 = param_2 + 2;
            }
            if (plVar5 == (longlong *)0x0) goto LAB_142f5cafb;
            uVar4 = (**(code **)(*plVar5 + 8))();
          }
          cVar2 = (*(code *)*param_2)(uVar4,lVar1);
          if (cVar2 != '\0') {
            return (char)plVar3[2];
          }
        }
      }
    }
  }
  return 4;
}



// FUNCTION 142f5cb40 FUN_142f5cb40 body=70 status=ok
// SIG undefined FUN_142f5cb40(void)

undefined8 FUN_142f5cb40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
    return uVar2;
  }
  return *(undefined8 *)(param_1 + 0x198);
}



// FUNCTION 142f5cb90 FUN_142f5cb90 body=357 status=ok
// SIG undefined FUN_142f5cb90(void)

longlong * FUN_142f5cb90(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  plVar4 = (longlong *)FUN_142f6c9f0(lVar3);
  if (plVar4 != (longlong *)0x0) {
    lVar8 = *(longlong *)(param_1 + 0x2e8);
    lVar3 = lVar8 + (longlong)*(int *)(param_1 + 0x2f0) * 0x28;
    for (; lVar8 != lVar3; lVar8 = lVar8 + 0x28) {
      lVar5 = FUN_1405ec200(lVar8);
      if (lVar5 != 0) {
        lVar6 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar7 = FUN_142f71d80();
          lVar6 = lVar5;
          do {
            if (lVar6 == lVar7) goto LAB_142f5cc50;
            lVar6 = *(longlong *)(lVar6 + 0x30);
          } while (lVar6 != 0);
        }
      }
      lVar5 = 0;
LAB_142f5cc50:
      cVar2 = (**(code **)(*plVar4 + 0x728))(plVar4,lVar5);
      if (cVar2 != '\0') goto LAB_142f5ccf0;
    }
    lVar8 = *(longlong *)(param_1 + 0x300);
    lVar3 = lVar8 + (longlong)*(int *)(param_1 + 0x308) * 0x48;
    for (; lVar8 != lVar3; lVar8 = lVar8 + 0x48) {
      cVar2 = FUN_142f638e0(lVar8,param_1);
      if (cVar2 != '\0') {
        FUN_142f5af50(lVar8,&local_res8);
        lVar5 = local_res8;
        cVar2 = (**(code **)(*plVar4 + 0x728))(plVar4,local_res8);
        if (cVar2 != '\0') {
LAB_142f5ccf0:
          *param_2 = lVar5;
          return param_2;
        }
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142f5cd00 FUN_142f5cd00 body=33 status=ok
// SIG undefined FUN_142f5cd00(void)

undefined8 * FUN_142f5cd00(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140c498b0(param_1 + 0x3a0);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142f5cd30 FUN_142f5cd30 body=144 status=ok
// SIG undefined FUN_142f5cd30(void)

undefined4 FUN_142f5cd30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar2 = FUN_142f71d80();
    for (lVar4 = *param_1; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar2) {
        if (*param_1 == 0) {
          return 0xffffffff;
        }
        plVar3 = (longlong *)FUN_142f71d80();
        param_1 = (longlong *)*param_1;
        plVar1 = param_1;
        goto joined_r0x000142f5cd7c;
      }
    }
  }
  return 0xffffffff;
joined_r0x000142f5cd7c:
  if (plVar1 == (longlong *)0x0) {
    param_1 = (longlong *)0x0;
LAB_142f5cd90:
    lVar4 = param_1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*param_1 + 0x368))(param_1);
      lVar4 = param_1[0x1f];
      if (lVar4 == 0) {
        return 0xffffffff;
      }
    }
    return *(undefined4 *)(lVar4 + 0x218);
  }
  if (plVar1 == plVar3) goto LAB_142f5cd90;
  plVar1 = (longlong *)plVar1[6];
  goto joined_r0x000142f5cd7c;
}



// FUNCTION 142f5cdc0 FUN_142f5cdc0 body=261 status=ok
// SIG undefined FUN_142f5cdc0(void)

undefined4 FUN_142f5cdc0(longlong param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 0xa0) == '\0')) {
    return 0;
  }
  if (param_2 != 0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      uVar4 = FUN_1428dfc70();
      param_2 = UObjectBaseUtility::GetTypedOuter(param_2,uVar4);
      if (param_2 == 0) {
        return 0;
      }
    }
    uVar4 = UBlindWidget::GetPrivateStaticClass();
    lVar3 = AGameStateBase::OnRep_GameModeClass(param_2,uVar4);
    if (lVar3 != 0) {
      lVar5 = UBlindWidget::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(char *)(lVar3 + 0x1a0) != '\0')) {
        uVar2 = (**(code **)(*(longlong *)(lVar3 + 0x178) + 0x50))();
        if (1 < uVar2) {
          return 0;
        }
        return *(undefined4 *)(lVar3 + 0x198);
      }
    }
  }
  return 0;
}



// FUNCTION 142f5ced0 FUN_142f5ced0 body=145 status=ok
// SIG undefined FUN_142f5ced0(void)

ulonglong FUN_142f5ced0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0xb8) != '\0')) {
    uVar4 = 0;
    if (0 < *(int *)(param_1 + 0x228)) {
      plVar3 = *(longlong **)(param_1 + 0x220);
      uVar5 = uVar4;
      do {
        plVar2 = (longlong *)*plVar3;
        plVar1 = plVar2 + (int)plVar3[1];
        for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
          if (*plVar2 == param_2) {
            return uVar5;
          }
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 2;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x228));
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}



// FUNCTION 142f5cf70 FUN_142f5cf70 body=169 status=ok
// SIG undefined FUN_142f5cf70(void)

uint FUN_142f5cf70(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res20 [8];
  
  cVar1 = FUN_142f63b20(param_2,param_3);
  if (cVar1 != '\0') {
    puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,local_res20);
    lVar5 = FUN_142f5c680(param_1,*puVar4);
    if (lVar5 != 0) {
      lVar6 = FWeakObjectPtr::Get(param_2 + 4);
      iVar2 = FUN_142f5d020(lVar5 + 8,lVar6);
      if ((-1 < iVar2) && (iVar2 < *(int *)(lVar5 + 0x20))) {
        uVar7 = *(uint *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar2 * 4);
        if (*(char *)(lVar6 + 0xa0) != '\0') {
          uVar3 = uVar7;
          uVar7 = 0;
          for (; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
            uVar7 = uVar7 + 1;
          }
        }
        return uVar7 & 0xff;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 142f5d020 FUN_142f5d020 body=231 status=ok
// SIG undefined FUN_142f5d020(void)

longlong * FUN_142f5d020(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*param_1 != 0) {
    lVar3 = FUN_142f71d80();
    lVar5 = *param_1;
    for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (lVar5 == 0) {
          return (longlong *)0xffffffff;
        }
        plVar7 = (longlong *)0x0;
        plVar8 = plVar7;
        if (lVar5 != 0) {
          plVar4 = (longlong *)FUN_142f71d80();
          for (plVar2 = (longlong *)*param_1;
              (plVar8 = plVar7, plVar2 != (longlong *)0x0 &&
              (plVar8 = (longlong *)*param_1, plVar2 != plVar4)); plVar2 = (longlong *)plVar2[6]) {
          }
        }
        lVar5 = plVar8[0x1f];
        if (lVar5 == 0) {
          (**(code **)(*plVar8 + 0x368))(plVar8);
          lVar5 = plVar8[0x1f];
          if (lVar5 == 0) {
            return (longlong *)0xffffffff;
          }
        }
        while ((iVar6 = (int)plVar7, -1 < iVar6 && (iVar6 < *(int *)(lVar5 + 0x218)))) {
          if (param_2 == *(longlong *)(*(longlong *)(lVar5 + 0x210) + (longlong)iVar6 * 8)) {
            return plVar7;
          }
          plVar7 = (longlong *)(ulonglong)(iVar6 + 1);
        }
        return (longlong *)0xffffffff;
      }
    }
  }
  return (longlong *)0xffffffff;
}



// FUNCTION 142f5d110 FUN_142f5d110 body=323 status=ok
// SIG undefined FUN_142f5d110(void)

void FUN_142f5d110(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (param_1 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_142f71d80();
    plVar6 = param_1;
    while (plVar6 != plVar4) {
      plVar6 = (longlong *)plVar6[6];
      if (plVar6 == (longlong *)0x0) {
        return;
      }
    }
    plVar4 = (longlong *)FUN_142f71d80();
    plVar6 = param_1;
    do {
      plVar9 = (longlong *)0x0;
      plVar7 = param_1;
      if (plVar6 == plVar4) break;
      plVar6 = (longlong *)plVar6[6];
      plVar7 = plVar9;
    } while (plVar6 != (longlong *)0x0);
    lVar8 = plVar7[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar8 = plVar7[0x1f];
      if (lVar8 == 0) {
        return;
      }
    }
    lVar5 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar6 = *(longlong **)(lVar8 + 0x210);
      plVar4 = (longlong *)((longlong)*(int *)(lVar8 + 0x218) & 0x1fffffffffffffff);
      if (plVar6 + *(int *)(lVar8 + 0x218) < plVar6) {
        plVar4 = plVar9;
      }
      if (plVar4 != (longlong *)0x0) {
        do {
          if (*plVar6 != 0) {
            iVar1 = (int)param_2[1];
            uVar2 = *(undefined8 *)(*plVar6 + 0x18);
            *(int *)(param_2 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
          }
          plVar6 = plVar6 + 1;
          plVar9 = (longlong *)((longlong)plVar9 + 1);
        } while (plVar9 != plVar4);
      }
    }
  }
  return;
}



// FUNCTION 142f5d260 FUN_142f5d260 body=1047 status=ok
// SIG undefined FUN_142f5d260(void)

void FUN_142f5d260(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  lVar4 = FWeakObjectPtr::Get();
  plVar10 = (longlong *)0x0;
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 8)) && (*(longlong *)(param_1 + 0x10) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(param_1);
      if (lVar4 != 0) goto LAB_142f5d2f0;
    }
  }
  else {
LAB_142f5d2f0:
    lVar5 = FUN_14171bfe0();
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
      lVar5 = FUN_142f71d80();
      do {
        if (lVar4 == lVar5) goto LAB_142f5d393;
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
  }
  lVar4 = FUN_1405ec200(param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_14171bfe0();
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
      lVar5 = FUN_142f71d80();
      do {
        if (lVar4 == lVar5) break;
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
  }
LAB_142f5d393:
  lVar4 = FWeakObjectPtr::Get(param_1);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 8)) || (*(longlong *)(param_1 + 0x10) == 0))
    goto LAB_142f5d64c;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_1,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 8) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(param_1);
    if (lVar4 == 0) goto LAB_142f5d64c;
  }
  lVar5 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar5 = FUN_142f71d80();
    do {
      if (lVar4 == lVar5) {
        plVar6 = (longlong *)FWeakObjectPtr::Get(param_1);
        if (plVar6 == (longlong *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == *(int *)(param_1 + 8)) || (*(longlong *)(param_1 + 0x10) == 0))
          break;
          lVar4 = FUN_141796df0();
          FWeakObjectPtr::operator=(param_1,lVar4);
          if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 8) = DAT_1464b56f4;
          }
          plVar6 = (longlong *)FWeakObjectPtr::Get(param_1);
          if (plVar6 == (longlong *)0x0) break;
        }
        lVar4 = FUN_14171bfe0();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          plVar7 = (longlong *)FUN_142f71d80();
          plVar8 = plVar6;
          goto LAB_142f5d520;
        }
        break;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  goto LAB_142f5d64c;
  while (plVar8 = (longlong *)plVar8[6], plVar8 != (longlong *)0x0) {
LAB_142f5d520:
    if (plVar8 == plVar7) {
      plVar7 = (longlong *)FUN_142f71d80();
      plVar8 = plVar6;
      goto LAB_142f5d540;
    }
  }
  goto LAB_142f5d64c;
  while (plVar8 = (longlong *)plVar8[6], plVar8 != (longlong *)0x0) {
LAB_142f5d540:
    if (plVar8 == plVar7) {
      plVar7 = (longlong *)FUN_142f71d80();
      plVar8 = plVar6;
      goto LAB_142f5d560;
    }
  }
  goto LAB_142f5d64c;
  while (plVar8 = (longlong *)plVar8[6], plVar9 = plVar10, plVar8 != (longlong *)0x0) {
LAB_142f5d560:
    plVar9 = plVar6;
    if (plVar8 == plVar7) break;
  }
  lVar4 = plVar9[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar4 = plVar9[0x1f];
    if (lVar4 == 0) goto LAB_142f5d64c;
  }
  lVar5 = FUN_142f71d80();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    plVar6 = *(longlong **)(lVar4 + 0x210);
    plVar8 = (longlong *)((longlong)*(int *)(lVar4 + 0x218) & 0x1fffffffffffffff);
    if (plVar6 + *(int *)(lVar4 + 0x218) < plVar6) {
      plVar8 = plVar10;
    }
    if (plVar8 != (longlong *)0x0) {
      do {
        if (*plVar6 != 0) {
          iVar1 = (int)param_2[1];
          uVar2 = *(undefined8 *)(*plVar6 + 0x18);
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
        }
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)((longlong)plVar10 + 1);
      } while (plVar10 != plVar8);
    }
  }
LAB_142f5d64c:
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142f5d680 FUN_142f5d680 body=204 status=ok
// SIG undefined FUN_142f5d680(void)

void FUN_142f5d680(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_142f71d80();
    plVar4 = param_1;
    while (plVar4 != plVar2) {
      plVar4 = (longlong *)plVar4[6];
      if (plVar4 == (longlong *)0x0) {
        return;
      }
    }
    plVar2 = (longlong *)FUN_142f71d80();
    plVar4 = param_1;
    do {
      if (plVar4 == plVar2) goto LAB_142f5d6d7;
      plVar4 = (longlong *)plVar4[6];
    } while (plVar4 != (longlong *)0x0);
    param_1 = (longlong *)0x0;
LAB_142f5d6d7:
    lVar5 = param_1[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*param_1 + 0x368))(param_1);
      lVar5 = param_1[0x1f];
      if (lVar5 == 0) {
        return;
      }
    }
    lVar3 = FUN_142f71d80();
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
      FUN_142f5dd80(lVar5,param_2);
    }
  }
  return;
}



// FUNCTION 142f5d750 FUN_142f5d750 body=323 status=ok
// SIG undefined FUN_142f5d750(void)

void FUN_142f5d750(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (param_1 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_142f71d80();
    plVar6 = param_1;
    while (plVar6 != plVar4) {
      plVar6 = (longlong *)plVar6[6];
      if (plVar6 == (longlong *)0x0) {
        return;
      }
    }
    plVar4 = (longlong *)FUN_142f71d80();
    plVar6 = param_1;
    do {
      plVar9 = (longlong *)0x0;
      plVar7 = param_1;
      if (plVar6 == plVar4) break;
      plVar6 = (longlong *)plVar6[6];
      plVar7 = plVar9;
    } while (plVar6 != (longlong *)0x0);
    lVar8 = plVar7[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar8 = plVar7[0x1f];
      if (lVar8 == 0) {
        return;
      }
    }
    lVar5 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar6 = *(longlong **)(lVar8 + 0x200);
      plVar4 = (longlong *)((longlong)*(int *)(lVar8 + 0x208) & 0x1fffffffffffffff);
      if (plVar6 + *(int *)(lVar8 + 0x208) < plVar6) {
        plVar4 = plVar9;
      }
      if (plVar4 != (longlong *)0x0) {
        do {
          if (*plVar6 != 0) {
            iVar1 = (int)param_2[1];
            uVar2 = *(undefined8 *)(*plVar6 + 0x18);
            *(int *)(param_2 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
          }
          plVar6 = plVar6 + 1;
          plVar9 = (longlong *)((longlong)plVar9 + 1);
        } while (plVar9 != plVar4);
      }
    }
  }
  return;
}



// FUNCTION 142f5d8a0 FUN_142f5d8a0 body=1047 status=ok
// SIG undefined FUN_142f5d8a0(void)

void FUN_142f5d8a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  lVar4 = FWeakObjectPtr::Get();
  plVar10 = (longlong *)0x0;
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 8)) && (*(longlong *)(param_1 + 0x10) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(param_1);
      if (lVar4 != 0) goto LAB_142f5d930;
    }
  }
  else {
LAB_142f5d930:
    lVar5 = FUN_14171bfe0();
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
      lVar5 = FUN_142f71d80();
      do {
        if (lVar4 == lVar5) goto LAB_142f5d9d3;
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
  }
  lVar4 = FUN_1405ec200(param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_14171bfe0();
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
      lVar5 = FUN_142f71d80();
      do {
        if (lVar4 == lVar5) break;
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
  }
LAB_142f5d9d3:
  lVar4 = FWeakObjectPtr::Get(param_1);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 8)) || (*(longlong *)(param_1 + 0x10) == 0))
    goto LAB_142f5dc8c;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_1,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 8) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(param_1);
    if (lVar4 == 0) goto LAB_142f5dc8c;
  }
  lVar5 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar5 = FUN_142f71d80();
    do {
      if (lVar4 == lVar5) {
        plVar6 = (longlong *)FWeakObjectPtr::Get(param_1);
        if (plVar6 == (longlong *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == *(int *)(param_1 + 8)) || (*(longlong *)(param_1 + 0x10) == 0))
          break;
          lVar4 = FUN_141796df0();
          FWeakObjectPtr::operator=(param_1,lVar4);
          if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 8) = DAT_1464b56f4;
          }
          plVar6 = (longlong *)FWeakObjectPtr::Get(param_1);
          if (plVar6 == (longlong *)0x0) break;
        }
        lVar4 = FUN_14171bfe0();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          plVar7 = (longlong *)FUN_142f71d80();
          plVar8 = plVar6;
          goto LAB_142f5db60;
        }
        break;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  goto LAB_142f5dc8c;
  while (plVar8 = (longlong *)plVar8[6], plVar8 != (longlong *)0x0) {
LAB_142f5db60:
    if (plVar8 == plVar7) {
      plVar7 = (longlong *)FUN_142f71d80();
      plVar8 = plVar6;
      goto LAB_142f5db80;
    }
  }
  goto LAB_142f5dc8c;
  while (plVar8 = (longlong *)plVar8[6], plVar8 != (longlong *)0x0) {
LAB_142f5db80:
    if (plVar8 == plVar7) {
      plVar7 = (longlong *)FUN_142f71d80();
      plVar8 = plVar6;
      goto LAB_142f5dba0;
    }
  }
  goto LAB_142f5dc8c;
  while (plVar8 = (longlong *)plVar8[6], plVar9 = plVar10, plVar8 != (longlong *)0x0) {
LAB_142f5dba0:
    plVar9 = plVar6;
    if (plVar8 == plVar7) break;
  }
  lVar4 = plVar9[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar4 = plVar9[0x1f];
    if (lVar4 == 0) goto LAB_142f5dc8c;
  }
  lVar5 = FUN_142f71d80();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    plVar6 = *(longlong **)(lVar4 + 0x200);
    plVar8 = (longlong *)((longlong)*(int *)(lVar4 + 0x208) & 0x1fffffffffffffff);
    if (plVar6 + *(int *)(lVar4 + 0x208) < plVar6) {
      plVar8 = plVar10;
    }
    if (plVar8 != (longlong *)0x0) {
      do {
        if (*plVar6 != 0) {
          iVar1 = (int)param_2[1];
          uVar2 = *(undefined8 *)(*plVar6 + 0x18);
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
        }
        plVar6 = plVar6 + 1;
        plVar10 = (longlong *)((longlong)plVar10 + 1);
      } while (plVar10 != plVar8);
    }
  }
LAB_142f5dc8c:
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142f5dcc0 FUN_142f5dcc0 body=181 status=ok
// SIG undefined FUN_142f5dcc0(void)

bool FUN_142f5dcc0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  
  if (*(char *)(param_1 + 0x490) == '\0') {
    FUN_142f5af50(param_2,&local_res8);
    return false;
  }
  FUN_142f5af50(param_2,&local_res8);
  if (local_res8 != 0) {
    lVar2 = FUN_142f71d80();
    lVar3 = local_res8;
    do {
      if (lVar3 == lVar2) {
        cVar1 = FUN_142f638e0(param_2,param_3);
        if (cVar1 == '\0') {
          return (bool)2;
        }
        lVar3 = FUN_142f5c680(param_1,local_res8);
        if (lVar3 == 0) {
          return (bool)2;
        }
        lVar2 = FWeakObjectPtr::Get(param_2 + 0x40);
        return *(longlong *)(lVar3 + 0x28) == lVar2;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return false;
}



// FUNCTION 142f5dd80 FUN_142f5dd80 body=117 status=ok
// SIG undefined FUN_142f5dd80(void)

void FUN_142f5dd80(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_2 != (undefined8 *)(param_1 + 0x200)) {
    _Src = *(void **)(param_1 + 0x200);
    iVar1 = *(int *)(param_1 + 0x208);
    *(int *)(param_2 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return;
}



// FUNCTION 142f5de00 FUN_142f5de00 body=49 status=ok
// SIG undefined FUN_142f5de00(void)

undefined8 FUN_142f5de00(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  if (*(char *)(param_1 + 0x490) == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2,local_res8);
    return 4;
  }
  uVar1 = FUN_142f5de40();
  return uVar1;
}



// FUNCTION 142f5de40 FUN_142f5de40 body=381 status=ok
// SIG undefined FUN_142f5de40(void)

undefined1 FUN_142f5de40(undefined8 param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  byte bVar10;
  undefined1 local_res10 [8];
  
  plVar4 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,local_res10);
  if (*plVar4 != 0) {
    lVar5 = FUN_142f71d80();
    for (lVar7 = *plVar4; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar5) {
        if (*plVar4 == 0) {
          return 4;
        }
        cVar2 = FUN_142f63b20(param_2,param_4);
        if (cVar2 == '\0') {
          return 4;
        }
        puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,local_res10);
        lVar7 = FUN_142f5c680(param_1,*puVar6);
        if (lVar7 == 0) {
          return 4;
        }
        bVar10 = *(byte *)(lVar7 + 0x10);
        if (bVar10 != 0) {
          if (bVar10 < 3) {
            lVar5 = FWeakObjectPtr::Get(param_2 + 4);
            iVar3 = FUN_142f5d020(lVar7 + 8,lVar5);
            if (iVar3 < 0) {
              return 4;
            }
            if (*(int *)(lVar7 + 0x20) <= iVar3) {
              return 4;
            }
            uVar1 = *(uint *)(*(longlong *)(lVar7 + 0x18) + (longlong)iVar3 * 4);
            bVar10 = (byte)uVar1;
            if (*(char *)(lVar5 + 0xa0) != '\0') {
              bVar10 = 0;
              for (uVar8 = uVar1; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
                bVar10 = bVar10 + 1;
              }
            }
            if ((*(byte *)(lVar5 + 0x28) <= bVar10) ||
               ((*(char *)(lVar5 + 0xa0) != '\0' && ((param_3 & uVar1) != 0)))) {
              return 3;
            }
            cVar2 = FUN_142f63460(lVar5,lVar7);
            if (cVar2 != '\0') {
              return 1;
            }
            plVar9 = *(longlong **)(lVar7 + 0x30);
            plVar4 = plVar9 + *(int *)(lVar7 + 0x38);
            if (plVar9 == plVar4) {
              return 0;
            }
            do {
              if (*plVar9 == lVar5) {
                return 2;
              }
              plVar9 = plVar9 + 1;
            } while (plVar9 != plVar4);
            return 0;
          }
          if (bVar10 != 3) {
            return 4;
          }
        }
        return 0;
      }
    }
  }
  return 4;
}



// FUNCTION 142f5dfc0 FUN_142f5dfc0 body=18 status=ok
// SIG undefined FUN_142f5dfc0(void)

void FUN_142f5dfc0(longlong param_1,undefined8 param_2)

{
  TArray<FName,FDefaultAllocator>::operator=(param_2,param_1 + 0x210);
  return;
}



// FUNCTION 142f5dfe0 FUN_142f5dfe0 body=521 status=ok
// SIG undefined FUN_142f5dfe0(void)

void FUN_142f5dfe0(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    lVar2 = FUN_142f5a7b0();
joined_r0x000142f5e014:
    if (lVar2 != 0) {
LAB_142f5e030:
      iVar8 = (int)param_2[1];
      uVar1 = *(undefined8 *)(lVar2 + 0x10);
      *(int *)(param_2 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar8 * 8) = uVar1;
      plVar3 = (longlong *)FUN_142f647e0(lVar2 + 0x3c8);
      if (plVar3 != (longlong *)0x0) {
        plVar4 = (longlong *)FUN_142f791f0();
        plVar7 = plVar3;
        do {
          if (plVar7 == plVar4) {
            plVar4 = (longlong *)FUN_142f791f0();
            plVar7 = plVar3;
            goto LAB_142f5e167;
          }
          plVar7 = (longlong *)plVar7[6];
        } while (plVar7 != (longlong *)0x0);
      }
      lVar9 = 0;
      goto LAB_142f5e089;
    }
  }
  return;
  while (plVar7 = (longlong *)plVar7[6], plVar7 != (longlong *)0x0) {
LAB_142f5e167:
    if (plVar7 == plVar4) goto LAB_142f5e177;
  }
  plVar3 = (longlong *)0x0;
LAB_142f5e177:
  lVar9 = plVar3[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar9 = plVar3[0x1f];
  }
LAB_142f5e089:
  lVar2 = FUN_140c498b0(lVar2 + 0x3a0);
  if (lVar2 != 0) {
    lVar5 = FUN_142f71d80();
    lVar6 = lVar2;
    do {
      if (lVar6 == lVar5) {
        plVar3 = (longlong *)FUN_142f5c680(param_1,lVar2);
        if (plVar3 != (longlong *)0x0) {
          lVar2 = *plVar3;
          goto LAB_142f5e0c4;
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  lVar2 = 0;
LAB_142f5e0c4:
  if ((param_3 == '\0') || (lVar6 = *(longlong *)(param_1 + 0x498), *(int *)(lVar6 + 0x70) < 1))
  goto joined_r0x000142f5e014;
  if (lVar2 == 0) {
    if (lVar9 == 0) {
      return;
    }
    plVar3 = *(longlong **)(lVar6 + 0x68);
    for (plVar7 = plVar3; plVar7 != plVar3 + *(int *)(lVar6 + 0x70); plVar7 = plVar7 + 1) {
      if (*plVar7 == lVar9) {
        iVar8 = (int)((longlong)plVar7 - (longlong)plVar3 >> 3);
        goto LAB_142f5e11b;
      }
    }
    iVar8 = -1;
LAB_142f5e11b:
    iVar8 = iVar8 + 1;
    lVar9 = (longlong)iVar8 * 8;
    do {
      lVar2 = FUN_142f5a7b0(*(undefined8 *)(lVar9 + *(longlong *)(lVar6 + 0x68)));
      lVar6 = *(longlong *)(param_1 + 0x498);
      lVar9 = lVar9 + 8;
      iVar8 = iVar8 + 1;
      if (*(int *)(lVar6 + 0x70) <= iVar8) goto joined_r0x000142f5e014;
    } while (lVar2 == 0);
  }
  goto LAB_142f5e030;
}



// FUNCTION 142f5e1f0 FUN_142f5e1f0 body=231 status=ok
// SIG undefined FUN_142f5e1f0(void)

void FUN_142f5e1f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  puVar5 = *(ulonglong **)(param_1 + 0x220);
  puVar6 = puVar5 + (longlong)*(int *)(param_1 + 0x228) * 2;
  for (; puVar5 != puVar6; puVar5 = puVar5 + 2) {
    uVar3 = 0;
    plVar4 = (longlong *)*puVar5;
    uVar7 = (longlong)(int)puVar5[1] & 0x1fffffffffffffff;
    if (plVar4 + (int)puVar5[1] < plVar4) {
      uVar7 = uVar3;
    }
    if (uVar7 != 0) {
      do {
        lVar2 = *plVar4;
        if (*(char *)(lVar2 + 0xa9) != '\0') {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
        }
        plVar4 = plVar4 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar7);
    }
  }
  return;
}



// FUNCTION 142f5e2e0 FUN_142f5e2e0 body=212 status=ok
// SIG undefined FUN_142f5e2e0(void)

int FUN_142f5e2e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_18;
  undefined8 local_10;
  
  if ((param_2 == 0) || (*(char *)(param_2 + 0x177) == '\0')) {
    return -1;
  }
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_142f5dfe0(param_1,&local_18,0);
  iVar2 = (int)local_10;
  iVar5 = 0;
  plVar6 = local_18;
  if (0 < (int)local_10) {
    do {
      if (*plVar6 != 0) {
        lVar3 = FUN_142f71d80();
        lVar4 = *plVar6;
        for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar3) goto LAB_142f5e366;
        }
      }
      lVar4 = 0;
LAB_142f5e366:
      if (lVar4 == *(longlong *)(param_2 + 0x10)) goto LAB_142f5e37b;
      iVar5 = iVar5 + 1;
      plVar6 = plVar6 + 1;
    } while (iVar5 < iVar2);
  }
  iVar5 = -1;
LAB_142f5e37b:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return iVar5;
}



// FUNCTION 142f5e3c0 FUN_142f5e3c0 body=63 status=ok
// SIG undefined FUN_142f5e3c0(void)

undefined8 FUN_142f5e3c0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_142f6c9f0(uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_142f5e2e0(lVar2,param_1);
      return uVar1;
    }
  }
  return 0xffffffff;
}



// FUNCTION 142f5e400 FUN_142f5e400 body=292 status=ok
// SIG undefined FUN_142f5e400(void)

longlong * FUN_142f5e400(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *local_28;
  undefined8 local_20;
  
  lVar3 = param_1[-0xbc];
  lVar9 = 0;
  *param_2 = 0;
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1 + -0xe0);
  }
  lVar3 = FUN_142f6c9f0(lVar3);
  if (lVar3 == 0) {
    return param_2;
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  (**(code **)(*param_1 + 0x40))(param_1,&local_28);
  plVar1 = local_28 + (int)local_20;
  plVar8 = local_28;
  do {
    if (plVar8 == plVar1) {
LAB_142f5e4e9:
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
      return param_2;
    }
    lVar5 = *(longlong *)(lVar3 + 0x468);
    lVar2 = *plVar8;
    lVar7 = lVar9;
    if (lVar5 != 0) {
      lVar4 = FUN_142f71d80();
      lVar6 = lVar5;
      do {
        lVar7 = lVar5;
        if (lVar6 == lVar4) break;
        lVar6 = *(longlong *)(lVar6 + 0x30);
        lVar7 = lVar9;
      } while (lVar6 != 0);
    }
    lVar5 = lVar9;
    if (lVar2 != 0) {
      lVar4 = FUN_142f71d80();
      lVar6 = lVar2;
      do {
        lVar5 = lVar2;
        if (lVar6 == lVar4) break;
        lVar6 = *(longlong *)(lVar6 + 0x30);
        lVar5 = lVar9;
      } while (lVar6 != 0);
    }
    if (lVar7 == lVar5) {
      *param_2 = lVar2;
      goto LAB_142f5e4e9;
    }
    plVar8 = plVar8 + 1;
  } while( true );
}



// FUNCTION 142f5e530 FUN_142f5e530 body=353 status=ok
// SIG undefined FUN_142f5e530(void)

void FUN_142f5e530(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar8 = *(int *)(param_1 + 0x540) + -1;
  if (-1 < iVar8) {
    lVar10 = (longlong)iVar8 * 8;
    lVar9 = (longlong)*(int *)(param_1 + 0x540) << 3;
    lVar11 = lVar10;
    do {
      lVar7 = *(longlong *)(param_1 + 0x538);
      lVar2 = *(longlong *)(lVar11 + lVar7);
      if (lVar2 == 0) {
        iVar1 = *(int *)(param_1 + 0x540);
        iVar6 = (iVar1 - iVar8) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar7 + lVar10),(void *)(lVar9 + lVar7),(longlong)iVar6 << 3);
          iVar1 = *(int *)(param_1 + 0x540);
        }
        *(int *)(param_1 + 0x540) = iVar1 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x538));
      }
      else {
        plVar3 = *(longlong **)(lVar2 + 0x118);
        if (plVar3 != (longlong *)0x0) {
          lVar7 = FUN_1429e18b0();
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (((bVar4) && (cVar5 = (**(code **)(*plVar3 + 0x768))(plVar3), cVar5 == '\0')) &&
             (cVar5 = APlayerController::IsPrimaryPlayer(plVar3), cVar5 != '\0')) {
            iVar1 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
            }
            *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
          }
        }
      }
      lVar9 = lVar9 + -8;
      lVar10 = lVar10 + -8;
      lVar11 = lVar11 + -8;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 142f5e6a0 GetDisplayName body=27 status=ok
// SIG undefined GetDisplayName(void)

undefined8 ULiveLinkTimeSynchronizationSource::GetDisplayName(longlong param_1,undefined8 param_2)

{
  FUN_142dea370(param_1 + 0x38);
  return param_2;
}



// FUNCTION 142f5e6c0 FUN_142f5e6c0 body=269 status=ok
// SIG undefined FUN_142f5e6c0(void)

ulonglong FUN_142f5e6c0(longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  ulonglong *puVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  puVar8 = *(ulonglong **)(param_1 + 0x548);
  uVar4 = (ulonglong)*(int *)(param_1 + 0x550);
  puVar1 = puVar8 + uVar4 * 3;
  do {
    if (puVar8 == puVar1) {
      return uVar4 & 0xffffffffffffff00;
    }
    if (*puVar8 != 0) {
      uVar5 = FUN_142f71d80();
      uVar7 = *puVar8;
      for (uVar4 = uVar7; uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
        if (uVar4 == uVar5) goto LAB_142f5e730;
      }
    }
    uVar7 = 0;
LAB_142f5e730:
    if (param_2 != 0) {
      uVar6 = FUN_142f71d80();
      uVar5 = param_2;
      do {
        uVar4 = param_2;
        if (uVar5 == uVar6) goto LAB_142f5e750;
        uVar5 = *(ulonglong *)(uVar5 + 0x30);
      } while (uVar5 != 0);
    }
    uVar4 = 0;
LAB_142f5e750:
    if (uVar7 == uVar4) {
      fVar2 = *(float *)(puVar8 + 1);
      if (0.0 <= fVar2) {
        iVar3 = -((int)ROUND(-0.5 - (fVar2 + fVar2)) >> 1);
      }
      else {
        iVar3 = (int)ROUND((fVar2 + fVar2) - 0.5) >> 1;
      }
      *param_3 = (int)(longlong)(float)iVar3;
      return (ulonglong)(byte)puVar8[2];
    }
    puVar8 = puVar8 + 3;
  } while( true );
}



// FUNCTION 142f5e7d0 FUN_142f5e7d0 body=945 status=ok
// SIG undefined FUN_142f5e7d0(void)

void FUN_142f5e7d0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_88;
  longlong local_80 [2];
  longlong *local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  
  lVar4 = FUN_140c498b0();
  if (lVar4 == 0) goto LAB_142f5eb5a;
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
  plVar11 = (longlong *)0x0;
  plVar10 = plVar11;
  if (plVar5 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 8)) && (*(longlong *)(param_1 + 0x10) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 8) = DAT_1464b56f4;
      }
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
      if (plVar5 != (longlong *)0x0) goto LAB_142f5e891;
    }
  }
  else {
LAB_142f5e891:
    lVar4 = FUN_14171bfe0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar6 = (longlong *)FUN_142f71d80();
      plVar9 = plVar5;
      do {
        plVar10 = plVar5;
        if (plVar9 == plVar6) break;
        plVar9 = (longlong *)plVar9[6];
        plVar10 = plVar11;
      } while (plVar9 != (longlong *)0x0);
    }
  }
  lVar4 = plVar10[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar4 = plVar10[0x1f];
    if (lVar4 == 0) goto LAB_142f5eb5a;
  }
  lVar7 = FUN_142f71d80();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    local_9c = 0;
    plVar10 = plVar11;
    if (&local_a8 != (longlong **)(lVar4 + 0x200)) {
      local_a0 = *(int *)(lVar4 + 0x208);
      lVar7 = (longlong)local_a0;
      plVar5 = *(longlong **)(lVar4 + 0x200);
      if (local_a0 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_a8,local_a0,0);
        plVar10 = local_a8;
        _guard_xfg_dispatch_icall_nop(local_a8,plVar5,lVar7 << 3);
      }
    }
    local_70 = (longlong *)
               ((ulonglong)((longlong)(plVar10 + local_a0) + (7 - (longlong)plVar10)) >> 3);
    if (plVar10 + local_a0 < plVar10) {
      local_70 = plVar11;
    }
    plVar5 = plVar10;
    if (local_70 != (longlong *)0x0) {
      do {
        lVar4 = *plVar10;
        local_80[0] = 0;
        local_80[1] = 0;
        local_98 = 0xffffffff;
        local_94 = 0;
        local_88 = 0;
        if (lVar4 == 0) {
          local_88 = 0;
        }
        else {
          uVar8 = FSoftObjectPath::FSoftObjectPath(local_50,lVar4);
          FSoftObjectPath::operator=(&local_88,uVar8);
          FWeakObjectPtr::operator=(&local_98,lVar4);
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          local_94 = CONCAT44(DAT_1464b56f4,(undefined4)local_94);
        }
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 0x28);
        *(undefined8 *)(puVar1 + 6) = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        *puVar1 = 0xffffffff;
        puVar1[1] = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
        if (0x7fffffff < (uint)puVar1[9]) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 6,0);
        }
        if (*(undefined2 **)(puVar1 + 6) != (undefined2 *)0x0) {
          **(undefined2 **)(puVar1 + 6) = 0;
        }
        puVar1[2] = 0;
        *puVar1 = local_98;
        puVar1[1] = (undefined4)local_94;
        puVar1[2] = local_94._4_4_;
        local_68 = local_88;
        FString::FString(local_60,local_80);
        FSoftObjectPath::operator=(puVar1 + 4);
        if (local_80[0] != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 1;
        plVar11 = (longlong *)((longlong)plVar11 + 1);
        plVar5 = local_a8;
      } while (plVar11 != local_70);
    }
    if (plVar5 != (longlong *)0x0) {
      FMemory::Free(plVar5);
    }
  }
LAB_142f5eb5a:
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f5eb90 FUN_142f5eb90 body=269 status=ok
// SIG undefined FUN_142f5eb90(void)

ulonglong FUN_142f5eb90(longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  ulonglong *puVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  puVar8 = *(ulonglong **)(param_1 + 0x548);
  uVar4 = (ulonglong)*(int *)(param_1 + 0x550);
  puVar1 = puVar8 + uVar4 * 3;
  do {
    if (puVar8 == puVar1) {
      return uVar4 & 0xffffffffffffff00;
    }
    if (*puVar8 != 0) {
      uVar5 = FUN_142f71d80();
      uVar7 = *puVar8;
      for (uVar4 = uVar7; uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
        if (uVar4 == uVar5) goto LAB_142f5ec00;
      }
    }
    uVar7 = 0;
LAB_142f5ec00:
    if (param_2 != 0) {
      uVar6 = FUN_142f71d80();
      uVar5 = param_2;
      do {
        uVar4 = param_2;
        if (uVar5 == uVar6) goto LAB_142f5ec20;
        uVar5 = *(ulonglong *)(uVar5 + 0x30);
      } while (uVar5 != 0);
    }
    uVar4 = 0;
LAB_142f5ec20:
    if (uVar7 == uVar4) {
      fVar2 = *(float *)((longlong)puVar8 + 0xc);
      if (0.0 <= fVar2) {
        iVar3 = -((int)ROUND(-0.5 - (fVar2 + fVar2)) >> 1);
      }
      else {
        iVar3 = (int)ROUND((fVar2 + fVar2) - 0.5) >> 1;
      }
      *param_3 = (int)(longlong)(float)iVar3;
      return (ulonglong)(byte)puVar8[2];
    }
    puVar8 = puVar8 + 3;
  } while( true );
}



// FUNCTION 142f5eca0 FUN_142f5eca0 body=187 status=ok
// SIG undefined FUN_142f5eca0(void)

longlong FUN_142f5eca0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_1405ec200(param_1 + 0x38);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = FUN_142f47470();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = (**(code **)(*plVar2 + 0x280))(plVar2,param_2);
    if (lVar3 != 0) {
      lVar4 = FUN_142f47520();
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
        return lVar3;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 142f5ed60 FUN_142f5ed60 body=14 status=ok
// SIG undefined FUN_142f5ed60(void)

undefined8 * FUN_142f5ed60(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x468);
  return param_2;
}



// FUNCTION 142f5ed70 FUN_142f5ed70 body=290 status=ok
// SIG undefined FUN_142f5ed70(void)

longlong FUN_142f5ed70(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = *(int *)(param_1 + 0x60) + -1;
  if (-1 < iVar5) {
    lVar6 = (longlong)iVar5 * 0x30;
    do {
      if ((*(longlong *)(lVar6 + 0x28 + *(longlong *)(param_1 + 0x58)) != 0) &&
         (lVar3 = FUN_1405ec200((longlong)iVar5 * 0x30 + *(longlong *)(param_1 + 0x58)), lVar3 != 0)
         ) {
        lVar4 = FUN_142f47520();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) &&
           (cVar2 = FUN_142c48f90(*(undefined8 *)(lVar6 + 0x28 + *(longlong *)(param_1 + 0x58)),
                                  param_2,0), cVar2 != '\0')) {
          return lVar3;
        }
      }
      lVar6 = lVar6 + -0x30;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  lVar6 = FUN_1405ec200(param_1 + 0x30);
  if (lVar6 != 0) {
    lVar3 = FUN_142f47520();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar6;
    }
  }
  return 0;
}



// FUNCTION 142f5eea0 FUN_142f5eea0 body=190 status=ok
// SIG undefined FUN_142f5eea0(void)

longlong FUN_142f5eea0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_1405ec200(param_1 + 0x308);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = FUN_142f47470();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = (**(code **)(*plVar2 + 0x280))(plVar2,*(undefined8 *)(param_1 + 0x28));
    if (lVar3 != 0) {
      lVar4 = FUN_142f47520();
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
        return lVar3;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 142f5ef60 FUN_142f5ef60 body=495 status=ok
// SIG undefined FUN_142f5ef60(void)

longlong FUN_142f5ef60(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar2 = (longlong *)FUN_142f5c680();
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  lVar5 = *plVar2;
  if (lVar5 == 0) {
    return 0;
  }
  plVar3 = (longlong *)FUN_1405ec200(lVar5 + 0x308);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_142f47470();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (lVar5 = (**(code **)(*plVar3 + 0x280))(plVar3,*(undefined8 *)(lVar5 + 0x28)), lVar5 != 0)) {
      lVar4 = FUN_142f47520();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_142f5f033;
    }
  }
  lVar5 = 0;
LAB_142f5f033:
  if (plVar2[5] != 0) {
    for (lVar4 = **(longlong **)(*plVar2 + 0x200); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x70))
    {
      plVar3 = (longlong *)FUN_1405ec200(lVar4 + 0x38);
      if (plVar3 != (longlong *)0x0) {
        lVar6 = FUN_142f47470();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar6 = (**(code **)(*plVar3 + 0x280))(plVar3,param_1), lVar6 != 0)) {
          lVar7 = FUN_142f47520();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar5 = lVar6;
          }
        }
      }
      if (lVar4 == plVar2[5]) {
        return lVar5;
      }
    }
  }
  return lVar5;
}



// FUNCTION 142f5f150 FUN_142f5f150 body=733 status=ok
// SIG undefined FUN_142f5f150(void)

undefined4
FUN_142f5f150(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
             ulonglong *param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_48;
  uint local_40;
  uint local_3c;
  
  uVar3 = 0;
  local_48 = 0;
  local_3c = 0;
  uVar5 = uVar3;
  uVar6 = uVar3;
  uVar7 = uVar3;
  while( true ) {
    iVar1 = (int)uVar3;
    iVar4 = (int)uVar5;
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x1b0) <= iVar1)) break;
    lVar2 = FWeakObjectPtr::Get((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x1a8));
    if (lVar2 != 0) {
      local_40 = iVar4 + 1;
      if ((int)uVar7 < (int)local_40) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,uVar5);
        uVar7 = (ulonglong)local_3c;
        uVar6 = local_48;
      }
      uVar5 = (ulonglong)local_40;
      *(longlong *)(uVar6 + (longlong)iVar4 * 8) = lVar2;
    }
    uVar3 = (ulonglong)(iVar1 + 1);
  }
  if (param_2 == &local_48) {
    if (uVar6 != 0) {
      FMemory::Free(uVar6);
    }
  }
  else {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = uVar6;
    *(int *)(param_2 + 1) = iVar4;
    *(uint *)((longlong)param_2 + 0xc) = local_3c;
  }
  uVar3 = 0;
  local_48 = 0;
  local_3c = 0;
  uVar5 = uVar3;
  uVar6 = uVar3;
  uVar7 = uVar3;
  while( true ) {
    iVar1 = (int)uVar3;
    iVar4 = (int)uVar5;
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x1b0) <= iVar1)) break;
    lVar2 = FWeakObjectPtr::Get((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x1a8));
    if (lVar2 != 0) {
      local_40 = iVar4 + 1;
      if ((int)uVar7 < (int)local_40) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,uVar5);
        uVar7 = (ulonglong)local_3c;
        uVar6 = local_48;
      }
      uVar5 = (ulonglong)local_40;
      *(longlong *)(uVar6 + (longlong)iVar4 * 8) = lVar2;
    }
    uVar3 = (ulonglong)(iVar1 + 1);
  }
  if (param_3 == &local_48) {
    if (uVar6 != 0) {
      FMemory::Free(uVar6);
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = uVar6;
    *(int *)(param_3 + 1) = iVar4;
    *(uint *)((longlong)param_3 + 0xc) = local_3c;
  }
  uVar3 = 0;
  local_48 = 0;
  local_3c = 0;
  uVar5 = uVar3;
  uVar6 = uVar3;
  uVar7 = uVar3;
  while( true ) {
    iVar1 = (int)uVar3;
    iVar4 = (int)uVar5;
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x1c0) <= iVar1)) break;
    lVar2 = FWeakObjectPtr::Get((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x1b8));
    if (lVar2 != 0) {
      local_40 = iVar4 + 1;
      if ((int)uVar7 < (int)local_40) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,uVar5);
        uVar7 = (ulonglong)local_3c;
        uVar6 = local_48;
      }
      uVar5 = (ulonglong)local_40;
      *(longlong *)(uVar6 + (longlong)iVar4 * 8) = lVar2;
    }
    uVar3 = (ulonglong)(iVar1 + 1);
  }
  if (param_4 == &local_48) {
    if (uVar6 != 0) {
      FMemory::Free(uVar6);
    }
  }
  else {
    if (*param_4 != 0) {
      FMemory::Free();
    }
    *param_4 = uVar6;
    *(int *)(param_4 + 1) = iVar4;
    *(uint *)((longlong)param_4 + 0xc) = local_3c;
  }
  uVar3 = 0;
  local_48 = 0;
  local_3c = 0;
  uVar5 = uVar3;
  uVar6 = uVar3;
  uVar7 = uVar3;
  while( true ) {
    iVar1 = (int)uVar3;
    iVar4 = (int)uVar5;
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x1d0) <= iVar1)) break;
    lVar2 = FWeakObjectPtr::Get((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x1c8));
    if (lVar2 != 0) {
      local_40 = iVar4 + 1;
      if ((int)uVar6 < (int)local_40) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,uVar5);
        uVar6 = (ulonglong)local_3c;
        uVar7 = local_48;
      }
      uVar5 = (ulonglong)local_40;
      *(longlong *)(uVar7 + (longlong)iVar4 * 8) = lVar2;
    }
    uVar3 = (ulonglong)(iVar1 + 1);
  }
  if (param_5 == &local_48) {
    if (uVar7 != 0) {
      FMemory::Free(uVar7);
    }
  }
  else {
    if (*param_5 != 0) {
      FMemory::Free();
    }
    *param_5 = uVar7;
    *(int *)(param_5 + 1) = iVar4;
    *(int *)((longlong)param_5 + 0xc) = (int)uVar6;
  }
  iVar1 = (int)param_2[1] + (int)param_3[1] + (int)param_4[1] + (int)param_5[1];
  return CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
}



// FUNCTION 142f5f430 FUN_142f5f430 body=86 status=ok
// SIG undefined FUN_142f5f430(void)

longlong * FUN_142f5f430(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = FUN_142f71d80();
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return param_2;
}



// FUNCTION 142f5f490 FUN_142f5f490 body=9 status=ok
// SIG undefined FUN_142f5f490(void)

void FUN_142f5f490(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 0x20);
  return;
}



// FUNCTION 142f5f4a0 StopStream body=9 status=ok
// SIG undefined StopStream(void)

void CAkSrcBaseEx::StopStream(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 0x40);
  return;
}



// FUNCTION 142f5f4b0 FUN_142f5f4b0 body=167 status=ok
// SIG undefined FUN_142f5f4b0(void)

float * FUN_142f5f4b0(longlong param_1,float *param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined1 *)(param_2 + 2) = 0xff;
  if (param_3 != 0) {
    lVar3 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong **)(param_3 + 0x28) != (longlong *)0x0)) {
      plVar4 = (longlong *)(**(code **)(**(longlong **)(param_3 + 0x28) + 0x6e8))();
      if ((plVar4 != (longlong *)0x0) && (*(char *)(param_1 + 0x28) == '\0')) {
        iVar2 = (**(code **)(*plVar4 + 0x780))(plVar4,*(undefined8 *)(param_3 + 0x10));
        *param_2 = (float)iVar2;
        *(undefined1 *)(param_2 + 2) = 0;
      }
    }
  }
  return param_2;
}



// FUNCTION 142f5f560 FUN_142f5f560 body=312 status=ok
// SIG undefined FUN_142f5f560(void)

int FUN_142f5f560(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong *local_28;
  undefined8 local_20;
  
  plVar11 = (longlong *)0x0;
  iVar12 = -1;
  plVar8 = plVar11;
  if (*(longlong *)(param_1 + 0x468) != 0) {
    plVar2 = (longlong *)FUN_142f71d80();
    for (plVar7 = *(longlong **)(param_1 + 0x468);
        (plVar8 = plVar11, plVar7 != (longlong *)0x0 &&
        (plVar8 = *(longlong **)(param_1 + 0x468), plVar7 != plVar2));
        plVar7 = (longlong *)plVar7[6]) {
    }
  }
  plVar7 = plVar11;
  if (param_2 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_142f71d80();
    plVar2 = param_2;
    do {
      plVar7 = param_2;
      if (plVar2 == plVar3) break;
      plVar2 = (longlong *)plVar2[6];
      plVar7 = plVar11;
    } while (plVar2 != (longlong *)0x0);
  }
  iVar13 = iVar12;
  if (plVar8 == plVar7) {
    lVar1 = *(longlong *)(param_1 + 0x468);
    iVar9 = 0;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    plVar8 = plVar11;
    if (lVar1 != 0) {
      lVar4 = FUN_142f71d80();
      lVar5 = lVar1;
      do {
        if (lVar5 == lVar4) {
          uVar6 = FUN_142f5c680(param_1,lVar1);
          FUN_142f59550(uVar6,&local_28,0);
          plVar8 = local_28;
          iVar9 = (int)local_20;
          break;
        }
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    plVar7 = plVar8;
    if (0 < iVar9) {
      do {
        iVar13 = (int)plVar11;
        if (*plVar7 == param_3) break;
        uVar10 = (int)plVar11 + 1;
        plVar11 = (longlong *)(ulonglong)uVar10;
        plVar7 = plVar7 + 1;
        iVar13 = iVar12;
      } while ((int)uVar10 < iVar9);
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
  }
  return iVar13;
}



// FUNCTION 142f5f6a0 FUN_142f5f6a0 body=108 status=ok
// SIG undefined FUN_142f5f6a0(void)

ulonglong FUN_142f5f6a0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,local_res8);
  plVar4 = plVar3;
  if (*plVar3 != 0) {
    plVar4 = (longlong *)FUN_142f71d80();
    for (plVar1 = (longlong *)*plVar3; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
      if (plVar1 == plVar4) {
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          uVar2 = *(uint *)((longlong)param_1 + 0x1c) | *(uint *)(param_1 + 3) |
                  *(uint *)((longlong)param_1 + 0x14) | *(uint *)(param_1 + 2);
          plVar4 = (longlong *)(ulonglong)uVar2;
          if (uVar2 != 0) {
            return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
          }
        }
        break;
      }
    }
  }
  return (ulonglong)plVar4 & 0xffffffffffffff00;
}



// FUNCTION 142f5f710 FUN_142f5f710 body=104 status=ok
// SIG undefined FUN_142f5f710(void)

undefined8 FUN_142f5f710(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = 0;
  local_28 = 0;
  cVar1 = FSoftObjectPath::operator==(param_1 + 0x10,&local_28,param_3,param_4,0xffffffff);
  if ((cVar1 == '\0') &&
     (((*(int *)(param_1 + 0x3c) != 0 || *(int *)(param_1 + 0x38) != 0) ||
      *(int *)(param_1 + 0x34) != 0) || *(int *)(param_1 + 0x30) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142f5f780 FUN_142f5f780 body=820 status=ok
// SIG undefined FUN_142f5f780(void)

undefined8 FUN_142f5f780(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  short *psVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  uVar12 = 0;
  psVar1 = (short *)*param_2;
  local_48 = 0;
  local_40 = 0;
  local_res18 = param_3;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (psVar1[lVar11] != 0);
    uVar10 = (int)lVar11 + 1;
    local_40 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar1,(longlong)(int)uVar10 * 2);
  }
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_141594550(&local_48,&local_58,&DAT_1459dbe34,0);
  if ((int)local_50 == 3) {
    puVar6 = (undefined8 *)FName::FName(local_res10,L"Mission",1);
    uVar7 = FUN_142f722a0();
    uVar7 = FUN_142510cf0(uVar7,*puVar6);
    puVar14 = &DAT_143f3eda8;
    if ((int)local_58[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*local_58;
    }
    FUN_141759d00(uVar7,puVar9,param_1,param_3,param_4,DAT_1468b6160);
    if (*param_1 != 0) {
      lVar8 = FUN_142f71d80();
      for (lVar11 = *param_1; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
        if (lVar11 == lVar8) {
          if (*param_1 != 0) goto LAB_142f5f9d9;
          break;
        }
      }
    }
    if (param_4 != 0) {
      lVar11 = FUN_142928be0();
      if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (uVar13 = uVar12, 0 < *(int *)(param_4 + 0x30))) {
        do {
          lVar11 = *(longlong *)(uVar12 + *(longlong *)(param_4 + 0x28));
          cVar4 = FWeakObjectPtr::IsValid(lVar11 + 0x48);
          if (cVar4 != '\0') {
            uVar7 = FUN_142f722a0();
            cVar4 = FUN_14058c1e0(lVar11 + 0x48,uVar7);
            if (cVar4 != '\0') {
              if (*(int *)(lVar11 + 0xa0) == 0) {
                puVar9 = &DAT_143f3eda8;
              }
              else {
                puVar9 = *(undefined2 **)(lVar11 + 0x98);
              }
              iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,*param_2);
              if ((iVar5 == 0) && (lVar11 = *(longlong *)(lVar11 + 0xb8), lVar11 != 0)) {
                lVar8 = FUN_14171bfe0();
                if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (!bVar2) {
                  lVar11 = 0;
                }
                *param_1 = lVar11;
                param_3 = local_res18;
                break;
              }
            }
          }
          uVar10 = (int)uVar13 + 1;
          uVar12 = uVar12 + 8;
          param_3 = local_res18;
          uVar13 = (ulonglong)uVar10;
        } while ((int)uVar10 < *(int *)(param_4 + 0x30));
      }
    }
LAB_142f5f9d9:
    puVar6 = (undefined8 *)FName::FName(local_res10,L"EventName",1);
    uVar7 = FUN_142f722a0();
    uVar7 = FUN_142510d80(uVar7,*puVar6);
    if ((int)local_58[3] != 0) {
      puVar14 = (undefined2 *)local_58[2];
    }
    FUN_141759d00(uVar7,puVar14,param_1 + 1,param_3,param_4,DAT_1468b6160);
    uVar7 = 1;
    iVar5 = (int)local_50;
    plVar3 = local_58;
  }
  else {
    uVar7 = 0;
    iVar5 = (int)local_50;
    plVar3 = local_58;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142f5fac0 FUN_142f5fac0 body=1014 status=ok
// SIG undefined FUN_142f5fac0(void)

undefined8 FUN_142f5fac0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  short *psVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  undefined8 *local_res10;
  undefined8 local_res18;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  
  psVar1 = (short *)*param_2;
  uVar16 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (psVar1[lVar11] != 0);
    uVar10 = (int)lVar11 + 1;
    local_58 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    }
    FGenericPlatformString::Memcpy(local_60,psVar1,(longlong)(int)uVar10 * 2);
  }
  local_70 = (longlong *)0x0;
  local_68 = 0;
  FUN_141594550(&local_60,&local_70,&DAT_1459dcc2c,0);
  if ((int)local_68 == 3) {
    uVar7 = FUN_142f79a30();
    FName::FName(&local_78,L"Mission",0);
    uVar7 = FUN_142510cf0(uVar7,local_78);
    puVar15 = &DAT_143f3eda8;
    if ((int)local_70[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*local_70;
    }
    FUN_141759d00(uVar7,puVar9,param_1 + 0x28,param_3,param_4,DAT_1468b6160);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar8 = FUN_142f71d80();
      for (lVar11 = *(longlong *)(param_1 + 0x28); lVar11 != 0;
          lVar11 = *(longlong *)(lVar11 + 0x30)) {
        if (lVar11 == lVar8) {
          if (*(longlong *)(param_1 + 0x28) != 0) goto LAB_142f5fcd3;
          break;
        }
      }
    }
    if (param_4 != 0) {
      lVar11 = FUN_142928be0();
      if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (uVar13 = uVar16, uVar14 = uVar16, 0 < *(int *)(param_4 + 0x30))) {
        do {
          lVar11 = *(longlong *)(uVar13 + *(longlong *)(param_4 + 0x28));
          cVar5 = FWeakObjectPtr::IsValid(lVar11 + 0x48);
          if (cVar5 != '\0') {
            uVar7 = FUN_142f79a30();
            cVar5 = FUN_14058c1e0(lVar11 + 0x48,uVar7);
            if (cVar5 != '\0') {
              if (*(int *)(lVar11 + 0xa0) == 0) {
                puVar9 = &DAT_143f3eda8;
              }
              else {
                puVar9 = *(undefined2 **)(lVar11 + 0x98);
              }
              iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,*local_res10);
              if ((iVar6 == 0) && (uVar12 = *(ulonglong *)(lVar11 + 0xb8), uVar12 != 0)) {
                lVar11 = FUN_14171bfe0();
                if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (!bVar2) {
                  uVar12 = uVar16;
                }
                *(ulonglong *)(param_1 + 0x28) = uVar12;
                param_3 = local_res18;
                break;
              }
            }
          }
          uVar10 = (int)uVar14 + 1;
          param_3 = local_res18;
          uVar13 = uVar13 + 8;
          uVar14 = (ulonglong)uVar10;
        } while ((int)uVar10 < *(int *)(param_4 + 0x30));
      }
    }
LAB_142f5fcd3:
    uVar7 = FUN_142f79a30();
    FName::FName(&local_res10,L"ObjectiveName",0);
    uVar7 = FUN_142510d80(uVar7,local_res10);
    if ((int)local_70[3] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)local_70[2];
    }
    FUN_141759d00(uVar7,puVar9,param_1 + 8,param_3,param_4,DAT_1468b6160);
    lVar11 = FUN_142f79a30();
    FName::FName(&local_res10,L"ObjectiveGuid",0);
    puVar4 = local_res10;
    if (((int)local_res10 == 0) && ((int)((ulonglong)local_res10 >> 0x20) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    uVar13 = uVar16;
    if (!bVar2) {
      if (lVar11 == 0) {
        local_48 = 0;
      }
      else {
        local_48 = *(ulonglong *)(lVar11 + 0x38);
      }
      local_40 = 0xffffffff;
      local_3c = 0x101;
      local_3a = 0;
      local_50 = lVar11;
      FUN_14067b390(&local_50);
      while ((uVar13 = uVar16, local_48 != 0 &&
             (uVar13 = local_48, *(undefined8 **)(local_48 + 0x18) != puVar4))) {
        local_48 = *(ulonglong *)(local_48 + 0x28);
        FUN_14067b390(&local_50);
      }
    }
    if ((int)local_70[5] != 0) {
      puVar15 = (undefined2 *)local_70[4];
    }
    FUN_141759d00(uVar13,puVar15,param_1 + 0x10,param_3,param_4,DAT_1468b6160);
    uVar7 = 1;
    iVar6 = (int)local_68;
    plVar3 = local_70;
  }
  else {
    uVar7 = 0;
    iVar6 = (int)local_68;
    plVar3 = local_70;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142f5fec0 FUN_142f5fec0 body=1432 status=ok
// SIG undefined FUN_142f5fec0(void)

ulonglong FUN_142f5fec0(undefined4 *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  short *psVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  longlong local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [32];
  
  uVar15 = 0;
  psVar9 = (short *)*param_2;
  local_b8 = 0;
  local_b0 = 0;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (psVar9[lVar14] != 0);
    uVar13 = (int)lVar14 + 1;
    local_b0 = (ulonglong)uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    }
    FGenericPlatformString::Memcpy(local_b8,psVar9,(longlong)(int)uVar13 * 2);
  }
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  FUN_141594550(&local_b8,&local_c8,&DAT_1459dcd84,0);
  iVar4 = (int)local_c0;
  plVar5 = local_c8;
  if ((int)local_c0 != 3) goto joined_r0x000142f60403;
  lVar14 = FUN_142f79b50();
  FName::FName(&local_70,L"Mission",0);
  if (((int)local_70 == 0) && ((int)((ulonglong)local_70 >> 0x20) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar10 = uVar15;
  if (!bVar3) {
    if (lVar14 == 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = *(ulonglong *)(lVar14 + 0x38);
    }
    local_98 = 0xffffffff;
    local_94 = 0x101;
    local_92 = 0;
    local_a8 = lVar14;
    FUN_14252ca00(&local_a8);
    while ((uVar10 = uVar15, local_a0 != 0 &&
           (uVar10 = local_a0, *(longlong *)(local_a0 + 0x18) != local_70))) {
      local_a0 = *(ulonglong *)(local_a0 + 0x28);
      FUN_14252ca00(&local_a8);
    }
  }
  if ((int)local_c8[1] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*local_c8;
  }
  FUN_141759d00(uVar10,puVar11,param_1,param_3,param_4,DAT_1468b6160);
  lVar14 = FWeakObjectPtr::Get(param_1);
  if (lVar14 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != param_1[2]) && (local_78 = 0, *(longlong *)(param_1 + 4) != 0)) {
      lVar14 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1,lVar14);
      if ((lVar14 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        param_1[2] = DAT_1464b56f4;
      }
      lVar14 = FWeakObjectPtr::Get(param_1);
      if (lVar14 != 0) goto LAB_142f600c3;
    }
  }
  else {
LAB_142f600c3:
    lVar7 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar7 = FUN_142f71d80();
      do {
        if (lVar14 == lVar7) goto LAB_142f602b4;
        lVar14 = *(longlong *)(lVar14 + 0x30);
      } while (lVar14 != 0);
    }
  }
  if (param_4 != 0) {
    lVar14 = FUN_142928be0();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (uVar10 = uVar15, uVar16 = uVar15, 0 < *(int *)(param_4 + 0x30))) {
      do {
        lVar14 = *(longlong *)(uVar16 + *(longlong *)(param_4 + 0x28));
        cVar6 = FWeakObjectPtr::IsValid(lVar14 + 0x48);
        if (cVar6 != '\0') {
          uVar8 = FUN_142f79b50();
          cVar6 = FUN_14058c1e0(lVar14 + 0x48,uVar8);
          if (cVar6 != '\0') {
            if (*(int *)(lVar14 + 0xa0) == 0) {
              psVar9 = &DAT_143f3eda8;
            }
            else {
              psVar9 = *(short **)(lVar14 + 0x98);
            }
            lVar7 = *param_2 - (longlong)psVar9;
            do {
              sVar1 = *psVar9;
              sVar2 = *(short *)((longlong)psVar9 + lVar7);
              if (sVar1 != sVar2) break;
              psVar9 = psVar9 + 1;
            } while (sVar2 != 0);
            if ((sVar1 == sVar2) && (lVar14 = *(longlong *)(lVar14 + 0xb8), lVar14 != 0)) {
              lVar7 = FUN_14171bfe0();
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                uVar8 = FSoftObjectPath::FSoftObjectPath(local_58,lVar14);
                FSoftObjectPath::operator=(param_1 + 4,uVar8);
                FWeakObjectPtr::operator=(param_1,lVar14);
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                param_1[2] = DAT_1464b56f4;
              }
              else {
                *param_1 = 0xffffffff;
                param_1[1] = 0;
                *(undefined8 *)(param_1 + 4) = 0;
                param_1[8] = 0;
                if (0x7fffffff < (uint)param_1[9]) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
                }
                if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
                  **(undefined2 **)(param_1 + 6) = 0;
                }
                param_1[2] = 0;
              }
              break;
            }
          }
        }
        uVar13 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar13;
        uVar16 = uVar16 + 8;
      } while ((int)uVar13 < *(int *)(param_4 + 0x30));
    }
  }
LAB_142f602b4:
  puVar11 = &DAT_143f3eda8;
  uVar8 = FUN_142f79b50();
  FName::FName(&local_68,L"ObjectiveSetName",0);
  uVar8 = FUN_142510d80(uVar8,local_68);
  if ((int)local_c8[3] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)local_c8[2];
  }
  FUN_141759d00(uVar8,puVar12,param_1 + 10,param_3,param_4,DAT_1468b6160);
  lVar14 = FUN_142f79b50();
  FName::FName(&local_60,L"ObjectiveSetGuid",0);
  if (((int)local_60 == 0) && ((int)((ulonglong)local_60 >> 0x20) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar10 = uVar15;
  if (!bVar3) {
    if (lVar14 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = *(ulonglong *)(lVar14 + 0x38);
    }
    local_80 = 0xffffffff;
    local_7c = 0x101;
    local_7a = 0;
    local_90 = lVar14;
    FUN_14067b390(&local_90);
    while ((uVar10 = uVar15, local_88 != 0 &&
           (uVar10 = local_88, *(longlong *)(local_88 + 0x18) != local_60))) {
      local_88 = *(ulonglong *)(local_88 + 0x28);
      FUN_14067b390(&local_90);
    }
  }
  if ((int)local_c8[5] != 0) {
    puVar11 = (undefined2 *)local_c8[4];
  }
  FUN_141759d00(uVar10,puVar11,param_1 + 0xc,param_3,param_4,DAT_1468b6160);
  uVar15 = 1;
  iVar4 = (int)local_c0;
  plVar5 = local_c8;
joined_r0x000142f60403:
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  return uVar15;
}



// FUNCTION 142f60460 FUN_142f60460 body=93 status=ok
// SIG undefined FUN_142f60460(void)

void FUN_142f60460(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x20))(param_1,*(undefined8 *)(param_2 + 0x10));
  FWeakObjectPtr::operator=(param_1 + 4,param_3);
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_3 + 0xd0);
    param_1[2] = *(longlong *)(param_3 + 200);
    param_1[3] = lVar1;
    param_1[1] = *(longlong *)(param_3 + 0x18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142f604b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



// FUNCTION 142f604c0 FUN_142f604c0 body=89 status=ok
// SIG undefined FUN_142f604c0(void)

void FUN_142f604c0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x20))();
  FWeakObjectPtr::operator=(param_1 + 4,param_3);
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_3 + 0xd0);
    param_1[2] = *(longlong *)(param_3 + 200);
    param_1[3] = lVar1;
    param_1[1] = *(longlong *)(param_3 + 0x18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142f60515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



// FUNCTION 142f60520 FUN_142f60520 body=339 status=ok
// SIG undefined FUN_142f60520(void)

void FUN_142f60520(undefined4 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_38 [32];
  
  lVar3 = 0;
  lVar5 = lVar3;
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar4 = param_2;
    do {
      lVar5 = param_2;
      if (lVar4 == lVar1) break;
      lVar4 = *(longlong *)(lVar4 + 0x30);
      lVar5 = lVar3;
    } while (lVar4 != 0);
  }
  if (lVar5 == 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[8] = 0;
    if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
    }
    if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 6) = 0;
    }
    param_1[2] = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_38,lVar5);
    FSoftObjectPath::operator=(param_1 + 4,uVar2);
    FWeakObjectPtr::operator=(param_1,lVar5);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[2] = DAT_1464b56f4;
  }
  FWeakObjectPtr::operator=(param_1 + 0x10,param_3);
  if (param_3 == 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[8] = 0;
    if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
    }
    if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 6) = 0;
    }
    param_1[2] = 0;
    param_1[0x10] = 0xffffffff;
    param_1[0x11] = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x158);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 0x150);
    *(undefined8 *)(param_1 + 0xe) = uVar2;
    lVar3 = *(longlong *)(param_3 + 0x18);
  }
  *(longlong *)(param_1 + 10) = lVar3;
  return;
}



// FUNCTION 142f60680 FUN_142f60680 body=92 status=ok
// SIG undefined FUN_142f60680(void)

void FUN_142f60680(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0xd8)) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xd0,0);
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (*(int *)(param_1 + 0xdc) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xd0,0);
    }
  }
  FUN_142f545a0(param_1 + -0x2d0);
  return;
}



// FUNCTION 142f60700 FUN_142f60700 body=2678 status=ok
// SIG undefined FUN_142f60700(void)

void FUN_142f60700(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong local_res8;
  longlong *local_res18;
  longlong *local_res20;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_68;
  ulonglong local_60;
  undefined1 local_58 [24];
  
  plVar12 = (longlong *)0x0;
  local_res18 = param_3;
  if (0 < (int)param_1[0xd]) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xc,0);
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (*(int *)((longlong)param_1 + 0x6c) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xc,0);
    }
  }
  puVar7 = (undefined8 *)param_1[0x10];
  puVar15 = puVar7 + (longlong)(int)param_1[0x11] * 4;
  for (; puVar7 != puVar15; puVar7 = puVar7 + 4) {
    local_d8 = (longlong *)*puVar7;
    local_d0 = (longlong *)puVar7[1];
    TMulticastScriptDelegate<FWeakObjectPtr>::TMulticastScriptDelegate<FWeakObjectPtr>
              (&local_c8,puVar7 + 2);
    if (0 < local_c0) {
      if ((local_d0 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*local_d0 + 0x288))(local_d0,param_2), cVar2 != '\0')) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(&local_c8,0);
      }
      local_c0 = 0;
      if (local_bc != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_c8,0);
      }
    }
    if (local_c8 != 0) {
      FMemory::Free();
    }
  }
  plVar11 = plVar12;
  if (param_3 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_142f71d80();
    plVar8 = param_3;
    do {
      plVar11 = param_3;
      if (plVar8 == plVar4) break;
      plVar8 = (longlong *)plVar8[6];
      plVar11 = plVar12;
    } while (plVar8 != (longlong *)0x0);
  }
  local_res8 = plVar11[0x1f];
  if (local_res8 == 0) {
    (**(code **)(*plVar11 + 0x368))(plVar11);
    local_res8 = plVar11[0x1f];
  }
  if (local_res8 != 0) {
    lVar5 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142f60874;
  }
  local_res8 = 0;
LAB_142f60874:
  lVar5 = FUN_142f5c680(param_2,param_3);
  if ((lVar5 != 0) && (local_res8 != 0)) {
    cVar2 = *(char *)(lVar5 + 0x10);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x10))(param_1,param_3,0);
      uVar18 = 0;
      plVar12 = *(longlong **)(local_res8 + 0x210);
      uVar13 = (longlong)*(int *)(local_res8 + 0x218) & 0x1fffffffffffffff;
      if (plVar12 + *(int *)(local_res8 + 0x218) < plVar12) {
        uVar13 = uVar18;
      }
      uVar19 = uVar18;
      if (uVar13 != 0) {
        do {
          lVar5 = *plVar12;
          uStack_120 = 0;
          uStack_11c = 0;
          local_118 = 0;
          lStack_110 = 0;
          local_108 = 0xffffffff;
          local_128 = 0x441d2800;
          uStack_124 = 1;
          local_100 = 0;
          FMemFileOut::seekp(&local_128,param_3);
          FWeakObjectPtr::operator=(&local_108,lVar5);
          if (lVar5 == 0) {
            (**(code **)(CONCAT44(uStack_124,local_128) + 0x10))(&local_128);
          }
          else {
            local_118 = *(undefined8 *)(lVar5 + 200);
            lStack_110 = *(longlong *)(lVar5 + 0xd0);
            uStack_120 = (undefined4)*(undefined8 *)(lVar5 + 0x18);
            uStack_11c = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x18) >> 0x20);
          }
          (**(code **)(*param_1 + 0x18))(param_1,&local_128,0,0,0,0);
          plVar12 = plVar12 + 1;
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar13);
      }
      puVar7 = *(undefined8 **)(local_res8 + 0x200);
      uVar13 = (longlong)*(int *)(local_res8 + 0x208) & 0x1fffffffffffffff;
      if (puVar7 + *(int *)(local_res8 + 0x208) < puVar7) {
        uVar13 = uVar18;
      }
      if (uVar13 != 0) {
        local_res18 = (longlong *)0x0;
        do {
          local_a0 = 0;
          local_98 = 0;
          local_b8 = 0xffffffff;
          local_b4 = 0;
          local_a8 = 0;
          local_90 = 0;
          local_88 = 0;
          local_80 = 0;
          local_78 = 0xffffffff;
          local_74 = 0;
          FUN_142f60520(&local_b8,param_3,*puVar7);
          (**(code **)(*param_1 + 0x20))(param_1,&local_b8,0);
          if (local_a0 != 0) {
            FMemory::Free();
          }
          puVar7 = puVar7 + 1;
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar13);
      }
    }
    else if (cVar2 == '\x01') {
      (**(code **)(*param_1 + 0x10))(param_1,param_3,1);
      local_d8 = (longlong *)0x0;
      local_d0 = (longlong *)0x0;
      if (param_3 != (longlong *)0x0) {
        plVar8 = (longlong *)FUN_142f71d80();
        plVar11 = param_3;
        do {
          if (plVar11 == plVar8) {
            uVar6 = FUN_142f5c680(param_2,param_3);
            FUN_142f59550(uVar6,&local_d8,1);
            plVar12 = local_d8;
            break;
          }
          plVar11 = (longlong *)plVar11[6];
        } while (plVar11 != (longlong *)0x0);
      }
      local_res20 = *(longlong **)(local_res8 + 0x210);
      local_68 = 0;
      local_60 = (longlong)*(int *)(local_res8 + 0x218) & 0x1fffffffffffffff;
      if (local_res20 + *(int *)(local_res8 + 0x218) < local_res20) {
        local_60 = 0;
      }
      if (local_60 != 0) {
LAB_142f60ba2:
        uVar17 = 0;
        lVar16 = *local_res20;
        uStack_120 = 0;
        uStack_11c = 0;
        local_118 = 0;
        lStack_110 = 0;
        local_108 = 0xffffffff;
        local_128 = 0x441d2800;
        uStack_124 = 1;
        local_100 = 0;
        FMemFileOut::seekp(&local_128,param_3);
        FWeakObjectPtr::operator=(&local_108,lVar16);
        if (lVar16 == 0) {
          (**(code **)(CONCAT44(uStack_124,local_128) + 0x10))(&local_128);
        }
        else {
          local_118 = *(undefined8 *)(lVar16 + 200);
          lStack_110 = *(longlong *)(lVar16 + 0xd0);
          uStack_120 = (undefined4)*(undefined8 *)(lVar16 + 0x18);
          uStack_11c = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x18) >> 0x20);
        }
        iVar3 = FUN_142f5d020(&local_res18,lVar16);
        if ((iVar3 < 0) || (*(int *)(lVar5 + 0x20) <= iVar3)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        uVar14 = 0;
        if ((bVar1) &&
           (uVar17 = *(uint *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar3 * 4), uVar14 = uVar17,
           *(char *)(lVar16 + 0xa0) != '\0')) {
          uVar14 = 0;
          for (uVar10 = uVar17; uVar10 != 0; uVar10 = uVar10 & uVar10 - 1) {
            uVar14 = uVar14 + 1;
          }
        }
        cVar2 = FUN_142f63b20(&local_128,param_1 + -0x2f);
        if (cVar2 == '\0') {
LAB_142f60cf5:
          for (plVar11 = plVar12; plVar11 != plVar12 + (int)local_d0; plVar11 = plVar11 + 1) {
            if (*plVar11 == lVar16) {
              plVar8 = *(longlong **)(lVar5 + 0x30);
              plVar11 = plVar8 + *(int *)(lVar5 + 0x38);
              goto joined_r0x000142f60e56;
            }
          }
          uVar6 = 0;
          goto LAB_142f60d1a;
        }
        uVar6 = FWeakObjectPtr::Get(&local_108);
        puVar7 = (undefined8 *)
                 (**(code **)(CONCAT44(uStack_124,local_128) + 0x18))(&local_128,local_58);
        lVar9 = FUN_142f5c680(param_2,*puVar7);
        plVar12 = local_d8;
        if (((lVar9 == 0) || (1 < *(byte *)(lVar9 + 0x10) - 1)) ||
           (cVar2 = FUN_142f636b0(uVar6,lVar9), plVar12 = local_d8, cVar2 == '\0'))
        goto LAB_142f60cf5;
        (**(code **)(*param_1 + 0x18))(param_1,&local_128,3,uVar14 & 0xff,uVar17,0);
        plVar12 = local_d8;
        goto LAB_142f60d39;
      }
LAB_142f60d6b:
      if ((0 < *(int *)(local_res8 + 0x208)) &&
         (lVar16 = **(longlong **)(local_res8 + 0x200), lVar16 != 0)) {
        if (*(longlong *)(lVar5 + 0x28) == 0) {
LAB_142f60f14:
          if (lVar16 != 0) {
            local_res18 = (longlong *)0x0;
            do {
              local_a0 = 0;
              local_98 = 0;
              local_b8 = 0xffffffff;
              local_b4 = 0;
              local_a8 = 0;
              local_90 = 0;
              local_88 = 0;
              local_80 = 0;
              local_78 = 0xffffffff;
              local_74 = 0;
              FUN_142f60520(&local_b8,param_3,lVar16);
              (**(code **)(*param_1 + 0x20))(param_1,&local_b8,0);
              if (local_a0 != 0) {
                FMemory::Free();
              }
              lVar16 = *(longlong *)(lVar16 + 0x70);
            } while (lVar16 != 0);
          }
        }
        else {
          do {
            if (lVar16 == *(longlong *)(lVar5 + 0x28)) {
              if (lVar16 != 0) {
                if (lVar16 == *(longlong *)(lVar5 + 0x28)) {
                  local_res18 = (longlong *)0x0;
                  local_118 = 0;
                  lStack_110 = 0;
                  local_108 = 0;
                  local_128 = 0xffffffff;
                  uStack_124 = 0;
                  uStack_120 = 0;
                  local_100 = 0;
                  local_f8 = 0;
                  local_f0 = 0;
                  local_e8 = 0xffffffff;
                  local_e4 = 0;
                  FUN_142f60520(&local_128,param_3,lVar16);
                  (**(code **)(*param_1 + 0x20))(param_1,&local_128,1);
                  lVar16 = *(longlong *)(lVar16 + 0x70);
                  if (lStack_110 != 0) {
                    FMemory::Free();
                  }
                }
                goto LAB_142f60f14;
              }
              break;
            }
            local_res18 = (longlong *)0x0;
            local_118 = 0;
            lStack_110 = 0;
            local_108 = 0;
            local_128 = 0xffffffff;
            uStack_124 = 0;
            uStack_120 = 0;
            local_100 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_e8 = 0xffffffff;
            local_e4 = 0;
            FUN_142f60520(&local_128,param_3,lVar16);
            (**(code **)(*param_1 + 0x20))(param_1,&local_128,2);
            if (lStack_110 != 0) {
              FMemory::Free();
            }
            lVar16 = *(longlong *)(lVar16 + 0x70);
          } while (lVar16 != 0);
        }
      }
      if (plVar12 != (longlong *)0x0) {
        FMemory::Free(plVar12);
      }
    }
    else if (cVar2 == '\x02') {
      (**(code **)(*param_1 + 0x10))(param_1,param_3,2);
      uVar18 = 0;
      plVar12 = *(longlong **)(local_res8 + 0x210);
      uVar13 = (longlong)*(int *)(local_res8 + 0x218) & 0x1fffffffffffffff;
      if (plVar12 + *(int *)(local_res8 + 0x218) < plVar12) {
        uVar13 = uVar18;
      }
      if (uVar13 != 0) {
        do {
          lVar5 = *plVar12;
          local_100 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          local_118 = 0;
          lStack_110 = 0;
          local_108 = 0xffffffff;
          local_128 = 0x441d2800;
          uStack_124 = 1;
          FMemFileOut::seekp(&local_128,param_3);
          FWeakObjectPtr::operator=(&local_108,lVar5);
          if (lVar5 == 0) {
            (**(code **)(CONCAT44(uStack_124,local_128) + 0x10))(&local_128);
          }
          else {
            local_118 = *(undefined8 *)(lVar5 + 200);
            lStack_110 = *(longlong *)(lVar5 + 0xd0);
            uStack_120 = (undefined4)*(undefined8 *)(lVar5 + 0x18);
            uStack_11c = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x18) >> 0x20);
          }
          FUN_142f5d020(&local_res18,lVar5);
          cVar2 = FUN_142f63b20(&local_128,param_1 + -0x2f);
          if (cVar2 == '\0') {
LAB_142f609e7:
            uVar6 = 0;
          }
          else {
            uVar6 = FWeakObjectPtr::Get(&local_108);
            puVar7 = (undefined8 *)
                     (**(code **)(CONCAT44(uStack_124,local_128) + 0x18))(&local_128,&local_res20);
            lVar5 = FUN_142f5c680(param_2,*puVar7);
            if (((lVar5 == 0) || (1 < *(byte *)(lVar5 + 0x10) - 1)) ||
               (cVar2 = FUN_142f636b0(uVar6,lVar5), cVar2 == '\0')) goto LAB_142f609e7;
            uVar6 = 3;
          }
          (**(code **)(*param_1 + 0x18))(param_1,&local_128,uVar6,0,0,0);
          plVar12 = plVar12 + 1;
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar13);
      }
      uVar18 = 0;
      puVar7 = *(undefined8 **)(local_res8 + 0x200);
      uVar13 = (longlong)*(int *)(local_res8 + 0x208) & 0x1fffffffffffffff;
      if (puVar7 + *(int *)(local_res8 + 0x208) < puVar7) {
        uVar13 = uVar18;
      }
      if (uVar13 != 0) {
        local_res18 = (longlong *)0x0;
        do {
          lStack_110 = 0;
          local_e4 = 0;
          local_108 = 0;
          local_128 = 0xffffffff;
          uStack_124 = 0;
          uStack_120 = 0;
          local_118 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_e8 = 0xffffffff;
          FUN_142f60520(&local_128,param_3,*puVar7);
          (**(code **)(*param_1 + 0x20))(param_1,&local_128,2);
          if (lStack_110 != 0) {
            FMemory::Free();
          }
          puVar7 = puVar7 + 1;
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar13);
      }
    }
  }
  FUN_142f6f200(param_1 + -0x2f);
  return;
joined_r0x000142f60e56:
  if (plVar8 == plVar11) goto LAB_142f60e66;
  if (*plVar8 == lVar16) {
    uVar6 = 2;
    goto LAB_142f60d1a;
  }
  plVar8 = plVar8 + 1;
  goto joined_r0x000142f60e56;
LAB_142f60e66:
  uVar6 = 1;
LAB_142f60d1a:
  (**(code **)(*param_1 + 0x18))(param_1,&local_128,uVar6,uVar14 & 0xff,uVar17,0);
LAB_142f60d39:
  local_res20 = local_res20 + 1;
  local_68 = local_68 + 1;
  if (local_68 == local_60) goto LAB_142f60d6b;
  goto LAB_142f60ba2;
}



// FUNCTION 142f61180 FUN_142f61180 body=76 status=ok
// SIG undefined FUN_142f61180(void)

void FUN_142f61180(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,local_res8);
  *(undefined8 *)(param_1 + 0x28) = *puVar2;
  *(longlong *)(param_1 + 8) = param_2[1];
  lVar1 = param_2[3];
  *(longlong *)(param_1 + 0x10) = param_2[2];
  *(longlong *)(param_1 + 0x18) = lVar1;
  *(int *)(param_1 + 0x20) = (int)param_2[4];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  return;
}



// FUNCTION 142f611f0 FUN_142f611f0 body=251 status=ok
// SIG undefined FUN_142f611f0(void)

void FUN_142f611f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  undefined1 local_48 [32];
  
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,local_res10);
  lVar5 = 0;
  if (*plVar2 != 0) {
    lVar3 = FUN_142f71d80();
    for (lVar1 = *plVar2; (lVar5 = 0, lVar1 != 0 && (lVar5 = *plVar2, lVar1 != lVar3));
        lVar1 = *(longlong *)(lVar1 + 0x30)) {
    }
  }
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if ((*(int *)(param_1 + 0x4c) < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
    }
    if (*(undefined2 **)(param_1 + 0x40) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar4 = FSoftObjectPath::FSoftObjectPath(local_48,lVar5);
    FSoftObjectPath::operator=(param_1 + 0x38,uVar4);
    FWeakObjectPtr::operator=(param_1 + 0x28,lVar5);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x30) = DAT_1464b56f4;
  }
  *(longlong *)(param_1 + 8) = param_2[1];
  lVar5 = param_2[3];
  *(longlong *)(param_1 + 0x10) = param_2[2];
  *(longlong *)(param_1 + 0x18) = lVar5;
  *(int *)(param_1 + 0x20) = (int)param_2[4];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  return;
}



// FUNCTION 142f612f0 FUN_142f612f0 body=1007 status=ok
// SIG undefined FUN_142f612f0(void)

void FUN_142f612f0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *local_28;
  int local_20;
  
  if (param_2 != (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
    plVar9 = plVar11;
    if (param_2[1] != 0) {
      plVar4 = (longlong *)FUN_142f71d80();
      for (plVar8 = (longlong *)param_2[1];
          (plVar9 = plVar11, plVar8 != (longlong *)0x0 &&
          (plVar9 = (longlong *)param_2[1], plVar8 != plVar4)); plVar8 = (longlong *)plVar8[6]) {
      }
    }
    plVar8 = plVar11;
    if (*param_3 != 0) {
      plVar5 = (longlong *)FUN_142f71d80();
      for (plVar4 = (longlong *)*param_3;
          (plVar8 = plVar11, plVar4 != (longlong *)0x0 &&
          (plVar8 = (longlong *)*param_3, plVar4 != plVar5)); plVar4 = (longlong *)plVar4[6]) {
      }
    }
    if (plVar9 == plVar8) {
      if ((((char)param_3[1] == '\x02') && ((char)param_2[2] != '\x02')) &&
         ((char)param_2[10] == '\0')) {
        FUN_142f55e10(param_1,param_2);
      }
      plVar9 = plVar11;
      if (param_2[1] != 0) {
        plVar4 = (longlong *)FUN_142f71d80();
        for (plVar8 = (longlong *)param_2[1];
            (plVar9 = plVar11, plVar8 != (longlong *)0x0 &&
            (plVar9 = (longlong *)param_2[1], plVar8 != plVar4)); plVar8 = (longlong *)plVar8[6]) {
        }
      }
      plVar8 = plVar11;
      if (*param_3 != 0) {
        plVar5 = (longlong *)FUN_142f71d80();
        for (plVar4 = (longlong *)*param_3;
            (plVar8 = plVar11, plVar4 != (longlong *)0x0 &&
            (plVar8 = (longlong *)*param_3, plVar4 != plVar5)); plVar4 = (longlong *)plVar4[6]) {
        }
      }
      if (plVar9 == plVar8) {
        plVar9 = param_2 + 3;
        *(char *)(param_2 + 2) = (char)param_3[1];
        if (plVar9 != param_3 + 2) {
          pvVar1 = (void *)param_3[2];
          iVar3 = (int)param_3[3];
          *(int *)(param_2 + 4) = iVar3;
          if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
            *(undefined4 *)((longlong)param_2 + 0x24) = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(plVar9,iVar3);
            _guard_xfg_dispatch_icall_nop((void *)*plVar9,pvVar1,(longlong)iVar3 << 2);
          }
        }
        param_2[5] = param_3[4];
        *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)((longlong)param_3 + 0x29);
      }
      if ((char)param_2[2] == '\x02') {
        *(undefined1 *)(param_2 + 10) = 0;
      }
      else if ((char)param_2[2] == '\x01') {
        lVar10 = *param_2;
        if ((*(char *)(lVar10 + 0x248) == '\0') ||
           (cVar2 = FUN_142f62f10(lVar10,param_2[5]), cVar2 == '\0')) {
          if (param_2[5] == 0) {
            if ((char)param_2[0xd] == '\0') {
              FUN_142f68510(param_1,param_2);
              FUN_142f510c0(param_1,param_2);
              FUN_142f67c10(param_1,param_2[1]);
            }
            else if ((0 < *(int *)(lVar10 + 0x208)) && (**(longlong **)(lVar10 + 0x200) != 0)) {
              param_2[5] = **(longlong **)(lVar10 + 0x200);
            }
          }
          else {
            FUN_142f51de0(param_1,lVar10);
            FUN_142f52490(param_1,*param_2,param_2[5]);
            FUN_142f52340(param_1,*param_2,param_2[5]);
            FUN_142f51c90(param_1,*param_2,param_2[5]);
            FUN_142f51fe0(param_1,*param_2,param_2[5]);
            local_28 = (longlong *)0x0;
            local_20 = *(int *)(param_2[5] + 0x30);
            lVar10 = (longlong)local_20;
            pvVar1 = *(void **)(param_2[5] + 0x28);
            plVar9 = plVar11;
            if (local_20 != 0) {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (&local_28,local_20,0);
              plVar9 = local_28;
              _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar10 << 3);
            }
            plVar8 = (longlong *)
                     ((ulonglong)((longlong)(plVar9 + local_20) + (7 - (longlong)plVar9)) >> 3);
            if (plVar9 + local_20 < plVar9) {
              plVar8 = plVar11;
            }
            plVar4 = plVar9;
            if (plVar8 != (longlong *)0x0) {
              do {
                lVar10 = *plVar4;
                if (((((((*(char *)(lVar10 + 0xad) != '\0') || (*(char *)(lVar10 + 0xae) != '\0'))
                       || (*(char *)(lVar10 + 0xaf) != '\0')) ||
                      ((*(char *)(lVar10 + 0xb0) != '\0' || (*(char *)(lVar10 + 0xb1) != '\0')))) ||
                     ((*(char *)(lVar10 + 0xb2) != '\0' ||
                      ((*(char *)(lVar10 + 0xb3) != '\0' || (*(char *)(lVar10 + 0xb4) != '\0'))))))
                    || (*(char *)(lVar10 + 0xb5) != '\0')) && (*(char *)(lVar10 + 0xb6) != '\0')) {
                  plVar5 = *(longlong **)(*param_2 + 0x210);
                  for (plVar6 = plVar5; plVar6 != plVar5 + *(int *)(*param_2 + 0x218);
                      plVar6 = plVar6 + 1) {
                    if (*plVar6 == lVar10) {
                      iVar3 = (int)((longlong)plVar6 - (longlong)plVar5 >> 3);
                      if ((-1 < iVar3) && (iVar3 < (int)param_2[4])) {
                        *(undefined4 *)(param_2[3] + (longlong)iVar3 * 4) = 0;
                      }
                      break;
                    }
                  }
                }
                plVar4 = plVar4 + 1;
                plVar11 = (longlong *)((longlong)plVar11 + 1);
              } while (plVar11 != plVar8);
            }
            if (plVar9 != (longlong *)0x0) {
              FMemory::Free(plVar9);
            }
          }
          lVar10 = *param_2;
          if ((0 < *(int *)(lVar10 + 0x17c)) || (*(char *)(lVar10 + 0x180) == '\0')) {
            FUN_142f624a0(param_1,param_2[1],*(int *)(lVar10 + 0x17c),
                          *(undefined1 *)(lVar10 + 0x180));
            lVar10 = *param_2;
          }
          FUN_142f515a0(param_1,lVar10);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 3;
          *(undefined1 *)((longlong)param_2 + 0x69) = 1;
          param_2[5] = 0;
          plVar9 = plVar11;
          if (0 < (int)param_2[4]) {
            do {
              uVar7 = (int)plVar9 + 1;
              *(undefined4 *)((longlong)plVar11 + param_2[3]) = 0;
              plVar11 = (longlong *)((longlong)plVar11 + 4);
              plVar9 = (longlong *)(ulonglong)uVar7;
            } while ((int)uVar7 < (int)param_2[4]);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142f616e0 FUN_142f616e0 body=244 status=ok
// SIG undefined FUN_142f616e0(void)

void FUN_142f616e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 8) != 0) {
      lVar3 = FUN_142f71d80();
      lVar6 = *(longlong *)(param_2 + 8);
      for (lVar5 = lVar6; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar3) goto LAB_142f61726;
      }
    }
    lVar6 = 0;
LAB_142f61726:
    if (*param_3 != 0) {
      lVar4 = FUN_142f71d80();
      lVar5 = *param_3;
      for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) goto LAB_142f61750;
      }
    }
    lVar5 = 0;
LAB_142f61750:
    if (lVar6 == lVar5) {
      plVar1 = (longlong *)(param_2 + 0x18);
      *(char *)(param_2 + 0x10) = (char)param_3[1];
      if (plVar1 != param_3 + 2) {
        iVar2 = (int)param_3[3];
        _Src = (void *)param_3[2];
        *(int *)(param_2 + 0x20) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(plVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2 << 2);
        }
      }
      *(longlong *)(param_2 + 0x28) = param_3[4];
      *(undefined1 *)(param_2 + 0x68) = *(undefined1 *)((longlong)param_3 + 0x29);
    }
  }
  return;
}



// FUNCTION 142f617e0 FUN_142f617e0 body=1072 status=ok
// SIG undefined FUN_142f617e0(void)

void FUN_142f617e0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_78;
  uint local_70;
  int local_6c;
  longlong *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  if (*(char *)((longlong)param_1 + 0x491) == '\0') {
    uVar14 = 0;
    local_68 = (longlong *)0x0;
    local_60 = 0;
    local_res8 = param_1;
    uVar5 = FUN_142f791f0();
    FUN_1417a5100(uVar5,&local_68,1);
    iVar13 = 0;
    local_78 = (longlong *)0x0;
    local_6c = 0;
    plVar9 = local_68 + (int)local_60;
    uVar12 = uVar14;
    plVar15 = local_68;
    local_res10 = plVar9;
    if (local_68 != plVar9) {
      do {
        plVar1 = (longlong *)*plVar15;
        local_res18 = (longlong *)plVar1[3];
        FName::ToString(&local_res18,local_48);
        cVar3 = FString::StartsWith(local_48,L"SKEL_",1);
        if (((cVar3 == '\0') && (cVar3 = FString::StartsWith(local_48,L"REINST_",1), cVar3 == '\0'))
           && (cVar3 = FString::EndsWith(local_48,&DAT_1459deb84,1), cVar3 != '\0')) {
          uVar11 = plVar1[0x1f];
          if (uVar11 == 0) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
            uVar11 = plVar1[0x1f];
            if (uVar11 != 0) goto LAB_142f61906;
LAB_142f6193c:
            uVar11 = uVar14;
          }
          else {
LAB_142f61906:
            lVar6 = FUN_142f71cd0();
            if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_142f6193c;
          }
          uVar7 = plVar1[0x1f];
          if (uVar7 == 0) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
            uVar7 = plVar1[0x1f];
            if (uVar7 != 0) goto LAB_142f61963;
LAB_142f61999:
            uVar7 = uVar14;
          }
          else {
LAB_142f61963:
            lVar6 = FUN_142f791f0();
            if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_142f61999;
          }
          plVar9 = local_res10;
          if (uVar11 == 0) {
            if (uVar7 != 0) {
              iVar13 = (int)uVar12;
              local_70 = iVar13 + 1;
              if (local_6c < (int)local_70) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,uVar12);
              }
              uVar12 = (ulonglong)local_70;
              local_78[iVar13] = uVar7;
              plVar9 = local_res10;
            }
          }
          else {
            param_1[0x93] = uVar11;
          }
        }
        iVar13 = (int)uVar12;
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar9);
    }
    plVar9 = local_res8;
    if (param_1[0x93] == 0) {
      if (local_78 != (longlong *)0x0) {
        FMemory::Free(local_78);
      }
    }
    else {
      *(undefined4 *)(param_1[0x93] + 0x28) = 0;
      uVar12 = (ulonglong)((longlong)(local_78 + iVar13) + (7 - (longlong)local_78)) >> 3;
      if (local_78 + iVar13 < local_78) {
        uVar12 = uVar14;
      }
      uVar11 = uVar14;
      plVar15 = local_78;
      if (uVar12 != 0) {
        do {
          plVar1 = (longlong *)*plVar15;
          lVar6 = param_1[0x93];
          local_res18 = plVar1;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x38))(plVar1,lVar6,0);
            uVar4 = *(uint *)((longlong)plVar1 + 0xc);
            uVar7 = uVar14;
            if ((int)uVar4 < (int)DAT_1469e91c4) {
              uVar8 = uVar4 & 0xffff;
              if ((int)uVar4 < 0) {
                uVar4 = uVar4 + 0xffff;
                uVar8 = uVar8 - 0x10000;
              }
              uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                      (longlong)(int)uVar8 * 0x18;
            }
            *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) | 0x40000000;
            if ((int)plVar1[5] < 1) {
              *(undefined4 *)(plVar1 + 5) = 1;
            }
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar6 + 0x68,&local_res18);
            FUN_142f4dbe0(*(undefined8 *)(lVar6 + 0x68),(longlong)*(int *)(lVar6 + 0x70),
                          (ulonglong)plVar9 & 0xff,&local_res10);
          }
          uVar11 = uVar11 + 1;
          param_1 = local_res8;
          plVar15 = plVar15 + 1;
        } while (uVar11 != uVar12);
      }
      (**(code **)(*param_1 + 0x708))(param_1);
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      uVar5 = FUN_142f71d80();
      FUN_1417a5100(uVar5,&local_58,1);
      FUN_142f4e870(&local_58,&local_res8);
      uVar12 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3;
      if (local_58 + (int)local_50 < local_58) {
        uVar12 = uVar14;
      }
      puVar10 = local_58;
      if (uVar12 != 0) {
        do {
          (**(code **)(*param_1 + 0x718))(param_1,*puVar10);
          uVar14 = uVar14 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar14 != uVar12);
      }
      local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffffffffff00);
      AlgoImpl::
      IntroSortInternal<FObjectExport,FIdentityFunctor,TDereferenceWrapper<FObjectExport,FObjectExportSortHelper>_>
                (param_1[0x8b],(longlong)(int)param_1[0x8c],0,&local_res8);
      *(undefined1 *)((longlong)param_1 + 0x491) = 1;
      if (local_58 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free(local_78);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  return;
}



// FUNCTION 142f61c10 FUN_142f61c10 body=467 status=ok
// SIG undefined FUN_142f61c10(void)

void FUN_142f61c10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  int local_res8 [2];
  undefined8 local_res10;
  longlong *local_38;
  int local_30;
  
  local_res10 = param_2;
  FUN_142f58d00(param_1 + 0x598,local_res8,&local_res10);
  plVar7 = (longlong *)0x0;
  plVar3 = plVar7;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x598));
  }
  plVar2 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = plVar7;
  }
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    lVar4 = *plVar2;
    local_38 = (longlong *)0x0;
    local_30 = iVar6;
    if (iVar6 != 0) {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,iVar6,0);
      lVar4 = lVar4 - (longlong)local_38;
      plVar3 = local_38 + 1;
      do {
        *(undefined4 *)(plVar3 + -1) = *(undefined4 *)(lVar4 + -8 + (longlong)plVar3);
        *(undefined4 *)((longlong)plVar3 + -4) = *(undefined4 *)(lVar4 + -4 + (longlong)plVar3);
        *plVar3 = *(longlong *)(lVar4 + (longlong)plVar3);
        plVar3 = plVar3 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    plVar2 = local_38;
    plVar5 = local_38 + (longlong)local_30 * 2;
    for (plVar3 = local_38; plVar3 != plVar5; plVar3 = plVar3 + 2) {
      if ((plVar3[1] != 0) && (cVar1 = FWeakObjectPtr::IsValid(plVar3), cVar1 != '\0')) {
        (**(code **)(*(longlong *)plVar3[1] + 0x38))((longlong *)plVar3[1],param_1,param_2);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x5f0);
  lVar4 = *(longlong *)(param_1 + 0x5e8);
  local_38 = (longlong *)0x0;
  local_30 = iVar6;
  if (iVar6 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,iVar6,0);
    lVar4 = lVar4 - (longlong)local_38;
    plVar3 = local_38 + 1;
    do {
      plVar3[-1] = 0;
      *plVar3 = 0;
      plVar3[-1] = *(longlong *)(lVar4 + -8 + (longlong)plVar3);
      plVar2 = plVar7;
      if (*(longlong *)(lVar4 + -8 + (longlong)plVar3) != 0) {
        plVar2 = *(longlong **)(lVar4 + (longlong)plVar3);
      }
      *plVar3 = (longlong)plVar2;
      plVar3 = plVar3 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  plVar7 = local_38;
  plVar2 = local_38 + (longlong)local_30 * 2;
  for (plVar3 = local_38; plVar3 != plVar2; plVar3 = plVar3 + 2) {
    if ((*plVar3 != 0) && (plVar5 = (longlong *)plVar3[1], plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x38))(plVar5,param_1,param_2);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  return;
}



// FUNCTION 142f61df0 FUN_142f61df0 body=1705 status=ok
// SIG undefined FUN_142f61df0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142f61df0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  bool bVar22;
  char local_res10;
  
  if ((int)param_1[0x91] == 0) {
    return;
  }
  plVar20 = (longlong *)0x0;
  local_res10 = param_2;
  do {
    plVar12 = plVar20;
    if (DAT_146b19a68 != 0) {
      plVar12 = *(longlong **)(DAT_146b19a68 + 0x140);
    }
    if (plVar12 == (longlong *)0x0) {
      return;
    }
    iVar3 = (**(code **)(*plVar12 + 0x760))();
    if (iVar3 != 1) {
      return;
    }
    plVar11 = (longlong *)param_1[0x90];
    plVar12 = plVar11 + (int)param_1[0x91];
    cVar2 = local_res10;
    if (plVar11 != plVar12) {
LAB_142f61e90:
      if (0 < (int)param_1[0x8f]) {
        plVar13 = param_1 + 0x8e;
        plVar14 = plVar20;
        plVar16 = plVar20;
        plVar21 = plVar20;
        do {
          plVar19 = plVar20;
          if (*plVar11 != 0) {
            plVar5 = (longlong *)FUN_142f71d80();
            for (plVar17 = (longlong *)*plVar11;
                (plVar19 = plVar20, plVar17 != (longlong *)0x0 &&
                (plVar19 = (longlong *)*plVar11, plVar17 != plVar5));
                plVar17 = (longlong *)plVar17[6]) {
            }
          }
          lVar9 = *plVar13;
          plVar17 = plVar20;
          if (*(longlong *)(lVar9 + (longlong)plVar16) != 0) {
            plVar6 = (longlong *)FUN_142f71d80();
            plVar5 = *(longlong **)(lVar9 + (longlong)plVar16);
            for (plVar1 = plVar5;
                (plVar17 = plVar20, plVar1 != (longlong *)0x0 &&
                (plVar17 = plVar5, plVar1 != plVar6)); plVar1 = (longlong *)plVar1[6]) {
            }
          }
          iVar3 = (int)plVar14;
          if (plVar19 == plVar17) {
            puVar18 = (undefined8 *)((longlong)plVar21 * 0x30 + *plVar13);
            plVar14 = (longlong *)FUN_142f5c680(param_1,*puVar18);
            if (plVar14 == (longlong *)0x0) goto LAB_142f61fb4;
            cVar2 = (char)plVar14[2];
            if (cVar2 == '\0') goto LAB_142f61f89;
            if (cVar2 != '\x01') {
              if (cVar2 == '\x02') {
                bVar22 = *(char *)(puVar18 + 1) == '\x02';
              }
              else {
                if (cVar2 != '\x03') goto LAB_142f61fb4;
                bVar22 = *(char *)(puVar18 + 1) != '\0';
              }
              if (!bVar22) goto LAB_142f61fb4;
              goto LAB_142f61f89;
            }
            if (*(char *)(puVar18 + 1) == '\x02') goto LAB_142f61f89;
            if (*(char *)(puVar18 + 1) != '\x01') goto LAB_142f61fb4;
            plVar16 = plVar20;
            if (0 < *(int *)(*plVar14 + 0x208)) {
              plVar16 = (longlong *)**(undefined8 **)(*plVar14 + 0x200);
            }
            plVar21 = (longlong *)puVar18[4];
            if ((plVar21 == (longlong *)0x0) ||
               (plVar14 = (longlong *)plVar14[5], plVar21 == plVar14)) goto LAB_142f61fb4;
            if (plVar14 == (longlong *)0x0) goto LAB_142f61f89;
            goto joined_r0x000142f620d5;
          }
          plVar14 = (longlong *)(ulonglong)(iVar3 + 1U);
          plVar21 = (longlong *)((longlong)plVar21 + 1);
          plVar16 = plVar16 + 6;
          cVar2 = local_res10;
        } while ((int)(iVar3 + 1U) < (int)param_1[0x8f]);
      }
      goto LAB_142f6202b;
    }
LAB_142f6203f:
    if (cVar2 == '\0') {
      return;
    }
    *(undefined4 *)(param_1 + 0x91) = 0;
    if (*(int *)((longlong)param_1 + 0x48c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x90,0);
    }
    cVar2 = FUN_142f546b0(param_1);
    if (cVar2 == '\0') {
      if (param_1[0x8d] == 0) goto LAB_142f62148;
      lVar7 = FUN_142f71d80();
      lVar9 = param_1[0x8d];
      goto joined_r0x000142f6211b;
    }
    local_res10 = '\x01';
    if ((int)param_1[0x91] == 0) {
      return;
    }
  } while( true );
joined_r0x000142f620d5:
  if ((plVar16 == (longlong *)0x0) || (plVar16 == plVar21)) goto LAB_142f61fb4;
  if (plVar16 == plVar14) goto LAB_142f61f89;
  plVar16 = (longlong *)plVar16[0xe];
  goto joined_r0x000142f620d5;
LAB_142f61f89:
  uVar8 = FUN_142f5c680(param_1,*plVar11);
  (**(code **)(*param_1 + 0x710))(param_1,uVar8,(longlong)iVar3 * 0x30 + *plVar13);
LAB_142f61fb4:
  if (*(longlong *)((longlong)iVar3 * 0x30 + 0x10 + *plVar13) != 0) {
    FMemory::Free();
  }
  iVar15 = (int)param_1[0x8f];
  iVar4 = (iVar15 - iVar3) + -1;
  if (iVar4 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar3 * 0x30 + *plVar13),
               (void *)((longlong)(iVar3 + 1) * 0x30 + *plVar13),(longlong)iVar4 * 0x30);
    iVar15 = (int)param_1[0x8f];
  }
  *(int *)(param_1 + 0x8f) = iVar15 + -1;
  TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar13);
  local_res10 = '\x01';
  cVar2 = local_res10;
LAB_142f6202b:
  plVar11 = plVar11 + 1;
  if (plVar11 == plVar12) goto LAB_142f6203f;
  goto LAB_142f61e90;
joined_r0x000142f6211b:
  if (lVar9 == 0) goto LAB_142f62148;
  if (lVar9 == lVar7) {
    if (((param_1[0x8d] != 0) && (lVar9 = FUN_142f5c680(param_1), lVar9 != 0)) &&
       (*(char *)(lVar9 + 0x10) == '\x01')) goto LAB_142f6215b;
    goto LAB_142f62148;
  }
  lVar9 = *(longlong *)(lVar9 + 0x30);
  goto joined_r0x000142f6211b;
LAB_142f62148:
  FUN_142f6c3d0(param_1,0);
LAB_142f6215b:
  FUN_142f513f0(param_1);
  plVar12 = plVar20;
  if (param_1[0x8d] != 0) {
    lVar7 = FUN_142f71d80();
    for (lVar9 = param_1[0x8d]; plVar12 = (longlong *)0x0, lVar9 != 0;
        lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar7) {
        plVar12 = (longlong *)0x0;
        if ((param_1[0x8d] != 0) &&
           (plVar12 = (longlong *)FUN_142f5ef60(param_1), plVar12 != (longlong *)0x0))
        goto LAB_142f62257;
        break;
      }
    }
  }
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar9 = FUN_142f429c0(uVar8);
  if ((lVar9 == 0) || (lVar7 = FUN_142f41de0(lVar9), lVar7 == 0)) goto LAB_142f6244d;
  uVar8 = FUN_142f46fc0();
  uVar10 = FUN_142f41de0(lVar9);
  plVar11 = (longlong *)AGameStateBase::OnRep_GameModeClass(uVar10,uVar8);
  if (plVar11 == (longlong *)0x0) goto LAB_142f6244d;
  lVar9 = FUN_142f46fc0();
  if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  if ((!bVar22) ||
     (plVar12 = (longlong *)(**(code **)(*plVar11 + 0x8e8))(plVar11), plVar12 == (longlong *)0x0))
  goto LAB_142f6244d;
LAB_142f62257:
  lVar9 = FUN_142f478b0();
  if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  if (!bVar22) goto LAB_142f6244d;
  plVar11 = plVar12 + 0x1e;
  plVar13 = (longlong *)FWeakObjectPtr::Get(plVar11);
  if (plVar13 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)plVar12[0x1f]) || (plVar12[0x20] == 0)) goto LAB_142f6244d;
    lVar9 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar11,lVar9);
    if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(plVar12 + 0x1f) = DAT_1464b56f4;
    }
    plVar13 = (longlong *)FWeakObjectPtr::Get(plVar11);
    if (plVar13 == (longlong *)0x0) goto LAB_142f6244d;
  }
  lVar9 = FUN_142f47520();
  if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  if (!bVar22) goto LAB_142f6244d;
  lVar9 = FUN_142f478b0();
  if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  if (!bVar22) goto LAB_142f6244d;
  plVar11 = plVar13 + 0x1e;
  plVar14 = (longlong *)FWeakObjectPtr::Get(plVar11);
  if (plVar14 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)plVar13[0x1f]) && (plVar13[0x20] != 0)) {
      lVar9 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar11,lVar9);
      if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(plVar13 + 0x1f) = DAT_1464b56f4;
      }
      plVar14 = (longlong *)FWeakObjectPtr::Get(plVar11);
      if (plVar14 != (longlong *)0x0) goto LAB_142f62405;
    }
LAB_142f6243b:
    plVar14 = plVar20;
  }
  else {
LAB_142f62405:
    lVar9 = FUN_142f47520();
    if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if (!bVar22) goto LAB_142f6243b;
  }
  if (plVar14 == plVar12) {
    plVar12 = plVar13;
  }
LAB_142f6244d:
  uVar8 = FUN_142f590b0(param_1,plVar12);
  if (plVar12 != (longlong *)0x0) {
    FUN_142f45ed0(param_1,uVar8,1,0,1);
  }
  return;
}



// FUNCTION 142f624a0 FUN_142f624a0 body=152 status=ok
// SIG undefined FUN_142f624a0(void)

void FUN_142f624a0(longlong param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x548);
  iVar2 = *(int *)(param_1 + 0x550);
  lVar4 = (longlong)iVar2;
  *(int *)(param_1 + 0x550) = iVar2 + 1;
  if (*(int *)(param_1 + 0x554) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + lVar4 * 0x18) = 0;
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + lVar4 * 0x18) = param_2;
  *(undefined1 *)(lVar3 + 0x11 + lVar4 * 0x18) = param_4;
  *(float *)(lVar3 + 8 + lVar4 * 0x18) = (float)param_3;
  *(float *)(lVar3 + 0xc + lVar4 * 0x18) = (float)param_3;
  *(undefined1 *)(lVar3 + 0x10 + lVar4 * 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x12 + lVar4 * 0x18) = 0;
  return;
}



// FUNCTION 142f62540 FUN_142f62540 body=249 status=ok
// SIG undefined FUN_142f62540(void)

void FUN_142f62540(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x700))();
  if (cVar1 == '\0') {
    FUN_142f62640(param_1,param_2,param_3);
  }
  param_1[0x8d] = 0;
  cVar1 = (**(code **)(*param_1 + 0x730))(param_1);
  if (cVar1 == '\0') {
    param_1[0xb0] = param_3;
    return;
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xa2);
  FUN_142f63c80(param_1);
  lVar2 = FUN_142f5c680(param_1,param_3);
  if ((lVar2 == 0) || ((*(char *)(lVar2 + 0x10) - 1U & 0xfd) != 0)) {
    param_3 = 0;
  }
  FUN_142f6c3d0(param_1,param_3);
  lVar2 = param_1[0x8b];
  lVar3 = (longlong)(int)param_1[0x8c] * 0x80 + lVar2;
  if (lVar2 != lVar3) {
    puVar4 = (undefined8 *)(lVar2 + 8);
    do {
      FUN_142f61c10(param_1,*puVar4);
      lVar2 = lVar2 + 0x80;
      puVar4 = puVar4 + 0x10;
    } while (lVar2 != lVar3);
  }
  return;
}



// FUNCTION 142f62640 FUN_142f62640 body=1037 status=ok
// SIG undefined FUN_142f62640(void)

char FUN_142f62640(longlong *param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  char local_res8;
  longlong *local_58;
  uint local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  
  lVar13 = param_1[0x8b];
  plVar11 = (longlong *)0x0;
  lVar14 = (longlong)(int)param_1[0x8c] * 0x80 + lVar13;
  for (; lVar13 != lVar14; lVar13 = lVar13 + 0x80) {
    if (*(char *)(lVar13 + 0x10) != '\0') {
      *(undefined1 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x28) = 0;
      plVar4 = plVar11;
      plVar16 = plVar11;
      if (0 < *(int *)(lVar13 + 0x20)) {
        do {
          uVar7 = (int)plVar16 + 1;
          *(undefined4 *)((longlong)plVar4 + *(longlong *)(lVar13 + 0x18)) = 0;
          plVar4 = (longlong *)((longlong)plVar4 + 4);
          plVar16 = (longlong *)(ulonglong)uVar7;
        } while ((int)uVar7 < *(int *)(lVar13 + 0x20));
      }
    }
  }
  plVar4 = (longlong *)*param_2;
  local_res8 = '\x01';
  plVar16 = plVar4 + (longlong)(int)param_2[1] * 6;
  do {
    if (plVar4 == plVar16) {
      cVar2 = '\x01';
LAB_142f627be:
      plVar4 = param_1 + 0x8e;
      iVar8 = (int)param_1[0x8f];
      if (iVar8 != 0) {
        plVar16 = (longlong *)(*plVar4 + 0x10);
        do {
          if (*plVar16 != 0) {
            FMemory::Free();
          }
          plVar16 = plVar16 + 6;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      *(undefined4 *)(param_1 + 0x8f) = 0;
      if (*(int *)((longlong)param_1 + 0x47c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(plVar4);
      }
      if (cVar2 != '\0') {
        local_58 = (longlong *)0x0;
        local_4c = 0;
        uVar7 = *(uint *)(param_2 + 1);
        if ((int)uVar7 < 1) {
          plVar16 = plVar11;
          uVar9 = 0;
          if (((int)uVar7 < 0) && (uVar7 != 0)) {
            local_50 = uVar7;
            TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_58);
            plVar16 = local_58;
            uVar9 = local_50;
          }
        }
        else {
          local_50 = uVar7;
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58);
          plVar16 = local_58;
          _guard_xfg_dispatch_icall_nop(local_58,0,(longlong)(int)uVar7 << 2);
          uVar9 = local_50;
        }
        if (0 < (int)uVar9) {
          if (0xf < uVar9) {
            uVar7 = uVar9 & 0x8000000f;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
            }
            plVar5 = plVar16 + 4;
            iVar8 = 8;
            do {
              iVar10 = (int)plVar11;
              *(int *)(plVar5 + -4) = iVar10;
              *(int *)((longlong)plVar5 + -0x1c) = iVar10 + 1;
              *(int *)(plVar5 + -3) = iVar10 + 2;
              *(int *)((longlong)plVar5 + -0x14) = iVar10 + 3;
              plVar11 = (longlong *)(ulonglong)(iVar10 + 0x10U);
              *(int *)(plVar5 + -2) = iVar8 + -4;
              *(int *)((longlong)plVar5 + -0xc) = iVar8 + -3;
              *(int *)(plVar5 + -1) = iVar8 + -2;
              *(int *)((longlong)plVar5 + -4) = iVar8 + -1;
              *(int *)plVar5 = iVar8;
              *(int *)((longlong)plVar5 + 4) = iVar8 + 1;
              *(int *)(plVar5 + 1) = iVar8 + 2;
              *(int *)((longlong)plVar5 + 0xc) = iVar8 + 3;
              *(int *)(plVar5 + 2) = iVar8 + 4;
              *(int *)((longlong)plVar5 + 0x14) = iVar8 + 5;
              *(int *)(plVar5 + 3) = iVar8 + 6;
              *(int *)((longlong)plVar5 + 0x1c) = iVar8 + 7;
              plVar5 = plVar5 + 8;
              iVar8 = iVar8 + 0x10;
            } while ((int)(iVar10 + 0x10U) < (int)(uVar9 - uVar7));
          }
          if ((int)plVar11 < (int)uVar9) {
            piVar6 = (int *)((longlong)plVar16 + (longlong)(int)plVar11 * 4);
            do {
              *piVar6 = (int)plVar11;
              piVar6 = piVar6 + 1;
              uVar7 = (int)plVar11 + 1;
              plVar11 = (longlong *)(ulonglong)uVar7;
            } while ((int)uVar7 < (int)uVar9);
          }
        }
        local_48 = param_1;
        local_40 = param_2;
        FUN_142f4d930(plVar16,(longlong)(int)uVar9,(ulonglong)param_2 & 0xff,&local_48);
        plVar11 = plVar16;
        if (0 < (int)uVar9) {
          uVar17 = (ulonglong)uVar9;
          do {
            puVar12 = (undefined8 *)((longlong)(int)*plVar16 * 0x30 + *param_2);
            lVar13 = FUN_142f5c680(param_1,*puVar12);
            if (lVar13 != 0) {
              cVar2 = FUN_142f64900(param_1,*(undefined8 *)(lVar13 + 8));
              if (cVar2 == '\0') {
                iVar8 = (int)param_1[0x8f];
                *(int *)(param_1 + 0x8f) = iVar8 + 1;
                if (*(int *)((longlong)param_1 + 0x47c) < iVar8 + 1) {
                  TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar4,iVar8);
                }
                FUN_142f4eb20((longlong)iVar8 * 0x30 + *plVar4,puVar12);
              }
              else {
                (**(code **)(*param_1 + 0x710))(param_1,lVar13,puVar12);
              }
            }
            plVar16 = (longlong *)((longlong)plVar16 + 4);
            uVar17 = uVar17 - 1;
            plVar11 = local_58;
            cVar2 = local_res8;
          } while (uVar17 != 0);
        }
        if (plVar11 != (longlong *)0x0) {
          FMemory::Free(plVar11);
        }
      }
      param_1[0x8d] = (longlong)param_3;
      *(undefined1 *)(param_1 + 0x92) = 1;
      return cVar2;
    }
    if (*plVar4 == 0) {
LAB_142f626fe:
      cVar2 = '\0';
      local_res8 = '\0';
      param_3 = plVar11;
      goto LAB_142f627be;
    }
    lVar14 = FUN_142f71d80();
    lVar13 = *plVar4;
    while( true ) {
      if (lVar13 == 0) goto LAB_142f626fe;
      if (lVar13 == lVar14) break;
      lVar13 = *(longlong *)(lVar13 + 0x30);
    }
    if (*plVar4 == 0) goto LAB_142f626fe;
    plVar3 = (longlong *)FUN_142f71d80();
    for (plVar5 = (longlong *)*plVar4;
        (plVar15 = plVar11, plVar5 != (longlong *)0x0 &&
        (plVar15 = (longlong *)*plVar4, plVar5 != plVar3)); plVar5 = (longlong *)plVar5[6]) {
    }
    plVar5 = (longlong *)plVar15[0x1f];
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x368))(plVar15);
      plVar5 = (longlong *)plVar15[0x1f];
      if (plVar5 != (longlong *)0x0) goto LAB_142f62765;
LAB_142f6279b:
      plVar5 = plVar11;
    }
    else {
LAB_142f62765:
      lVar13 = FUN_142f71d80();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
          lVar13 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_142f6279b;
    }
    if ((int)plVar5[0x43] != (int)plVar4[3]) goto LAB_142f626fe;
    plVar4 = plVar4 + 6;
  } while( true );
}



// FUNCTION 142f62a50 FUN_142f62a50 body=353 status=ok
// SIG undefined FUN_142f62a50(void)

void FUN_142f62a50(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  lVar4 = FUN_142f6c9f0(lVar4);
  if (lVar4 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x2e8);
    lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x2f0) * 0x28;
    for (; lVar9 != lVar1; lVar9 = lVar9 + 0x28) {
      lVar5 = FUN_1405ec200(lVar9);
      if (lVar5 != 0) {
        lVar6 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar7 = FUN_142f71d80();
          lVar6 = lVar5;
          do {
            if (lVar6 == lVar7) goto LAB_142f62b11;
            lVar6 = *(longlong *)(lVar6 + 0x30);
          } while (lVar6 != 0);
        }
      }
      lVar5 = 0;
LAB_142f62b11:
      lVar5 = FUN_142f5c680(lVar4,lVar5);
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) == '\x01')) goto LAB_142f62bab;
    }
    lVar9 = *(longlong *)(param_1 + 0x300);
    lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x308) * 0x48;
    for (; lVar9 != lVar1; lVar9 = lVar9 + 0x48) {
      cVar3 = FUN_142f638e0(lVar9,param_1);
      if (cVar3 != '\0') {
        puVar8 = (undefined8 *)FUN_142f5af50(lVar9,local_res8);
        lVar5 = FUN_142f5c680(lVar4,*puVar8);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) == '\x01')) {
LAB_142f62bab:
          *param_2 = 0;
          return;
        }
      }
    }
  }
  *param_2 = 1;
  return;
}



// FUNCTION 142f62bc0 FUN_142f62bc0 body=84 status=ok
// SIG undefined FUN_142f62bc0(void)

void FUN_142f62bc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res10 [24];
  
  plVar3 = (longlong *)FUN_142f5cb90(param_1,local_res10);
  if (*plVar3 != 0) {
    lVar2 = FUN_142f71d80();
    lVar4 = *plVar3;
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_142f62c01;
    }
  }
  lVar4 = 0;
LAB_142f62c01:
  *(bool *)param_2 = lVar4 == 0;
  return;
}



// FUNCTION 142f62c20 FUN_142f62c20 body=76 status=ok
// SIG undefined FUN_142f62c20(void)

bool FUN_142f62c20(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res10 [24];
  
  plVar3 = (longlong *)FUN_142f5cb90(param_1,local_res10);
  if (*plVar3 != 0) {
    lVar2 = FUN_142f71d80();
    lVar4 = *plVar3;
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_142f62c60;
    }
  }
  lVar4 = 0;
LAB_142f62c60:
  return lVar4 != 0;
}



// FUNCTION 142f62c70 FUN_142f62c70 body=612 status=ok
// SIG undefined FUN_142f62c70(void)

bool FUN_142f62c70(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  
  if (*(char *)(param_1 + 0x177) == '\0') {
    return false;
  }
  lVar13 = 0;
  if (*(char *)(param_1 + 0x260) == '\0') {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar4 = FUN_142f71d80();
      lVar9 = lVar1;
      do {
        if (lVar9 == lVar4) {
          lVar4 = *(longlong *)(param_1 + 0x268);
          lVar9 = lVar4 + (longlong)*(int *)(param_1 + 0x270) * 0x28;
          goto joined_r0x000142f62d17;
        }
        lVar9 = *(longlong *)(lVar9 + 0x30);
      } while (lVar9 != 0);
    }
  }
  else {
LAB_142f62dbd:
    iVar12 = 0;
    iVar10 = iVar12;
    if (*(longlong *)(param_1 + 0x278) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x200);
      for (plVar11 = plVar2; plVar11 != plVar2 + *(int *)(param_1 + 0x208); plVar11 = plVar11 + 1) {
        if (*plVar11 == *(longlong *)(param_1 + 0x278)) {
          iVar10 = (int)((longlong)plVar11 - (longlong)plVar2 >> 3);
          goto LAB_142f62dfc;
        }
      }
      iVar10 = -1;
LAB_142f62dfc:
      if (iVar10 == -1) {
        iVar10 = iVar12;
      }
    }
    iVar8 = *(int *)(param_1 + 0x208);
    iVar15 = iVar8;
    if (*(longlong *)(param_1 + 0x280) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x200);
      for (plVar11 = plVar2; plVar11 != plVar2 + iVar8; plVar11 = plVar11 + 1) {
        if (*plVar11 == *(longlong *)(param_1 + 0x280)) {
          iVar15 = (int)((longlong)plVar11 - (longlong)plVar2 >> 3);
          goto LAB_142f62e43;
        }
      }
      iVar15 = -1;
LAB_142f62e43:
      if (iVar15 == -1) {
        iVar15 = iVar8;
      }
    }
    iVar8 = 0;
    if (param_3 != 0) {
      plVar2 = *(longlong **)(param_1 + 0x200);
      for (plVar11 = plVar2; plVar11 != plVar2 + *(int *)(param_1 + 0x208); plVar11 = plVar11 + 1) {
        if (*plVar11 == param_3) {
          iVar8 = (int)((longlong)plVar11 - (longlong)plVar2 >> 3);
          goto LAB_142f62e83;
        }
      }
      iVar8 = -1;
LAB_142f62e83:
      if (iVar8 == -1) {
        iVar8 = iVar12;
      }
    }
    if (iVar10 <= iVar8) {
      return iVar8 < iVar15;
    }
  }
  return false;
joined_r0x000142f62d17:
  if (lVar4 == lVar9) {
    return false;
  }
  lVar5 = FUN_1405ec200(lVar4);
  lVar14 = lVar13;
  if (lVar5 != 0) {
    lVar6 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar7 = FUN_142f71d80();
      lVar6 = lVar5;
      do {
        lVar14 = lVar5;
        if (lVar6 == lVar7) break;
        lVar6 = *(longlong *)(lVar6 + 0x30);
        lVar14 = lVar13;
      } while (lVar6 != 0);
    }
  }
  lVar6 = FUN_142f71d80();
  lVar5 = lVar1;
  do {
    lVar7 = lVar1;
    if (lVar5 == lVar6) break;
    lVar5 = *(longlong *)(lVar5 + 0x30);
    lVar7 = lVar13;
  } while (lVar5 != 0);
  if (lVar14 == lVar7) goto LAB_142f62dbd;
  lVar4 = lVar4 + 0x28;
  goto joined_r0x000142f62d17;
}



// FUNCTION 142f62ee0 FUN_142f62ee0 body=18 status=ok
// SIG undefined FUN_142f62ee0(void)

void FUN_142f62ee0(longlong param_1)

{
  FUN_142c48f90(*(undefined8 *)(param_1 + 0x310),param_1,0);
  return;
}



// FUNCTION 142f62f00 FUN_142f62f00 body=8 status=ok
// SIG undefined FUN_142f62f00(void)

undefined1 FUN_142f62f00(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x798);
}



// FUNCTION 142f62f10 FUN_142f62f10 body=83 status=ok
// SIG undefined FUN_142f62f10(void)

ulonglong FUN_142f62f10(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x250);
  if ((uVar1 == 0) && (*(longlong *)(param_1 + 600) == 0)) {
LAB_142f62f60:
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  if (param_2 != 0) {
    if (uVar1 != 0) goto LAB_142f62f46;
    if (0 < *(int *)(param_1 + 0x208)) {
      for (uVar1 = **(ulonglong **)(param_1 + 0x200); uVar1 != 0;
          uVar1 = *(ulonglong *)(uVar1 + 0x70)) {
LAB_142f62f46:
        if (uVar1 == param_2) goto LAB_142f62f60;
        if (uVar1 == *(ulonglong *)(param_1 + 600)) break;
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142f62f70 FUN_142f62f70 body=899 status=ok
// SIG undefined FUN_142f62f70(void)

undefined8 FUN_142f62f70(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  undefined8 local_res8;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  plVar5 = (longlong *)FUN_142f71d80();
  plVar12 = param_1;
  while (plVar12 != plVar5) {
    plVar12 = (longlong *)plVar12[6];
    if (plVar12 == (longlong *)0x0) {
      return 0;
    }
  }
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  plVar5 = (longlong *)FUN_142f71d80();
  plVar12 = param_2;
  while (plVar12 != plVar5) {
    plVar12 = (longlong *)plVar12[6];
    if (plVar12 == (longlong *)0x0) {
      return 0;
    }
  }
  plVar5 = (longlong *)FUN_142f71d80();
  plVar12 = param_1;
  do {
    plVar15 = (longlong *)0x0;
    plVar7 = param_1;
    if (plVar12 == plVar5) break;
    plVar12 = (longlong *)plVar12[6];
    plVar7 = plVar15;
  } while (plVar12 != (longlong *)0x0);
  plVar12 = (longlong *)plVar7[0x1f];
  if (plVar12 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    plVar12 = (longlong *)plVar7[0x1f];
    if (plVar12 != (longlong *)0x0) goto LAB_142f63025;
LAB_142f6305b:
    plVar12 = plVar15;
  }
  else {
LAB_142f63025:
    lVar6 = FUN_142f71d80();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142f6305b;
  }
  plVar7 = (longlong *)FUN_142f71d80();
  plVar5 = param_2;
  do {
    plVar9 = param_2;
    if (plVar5 == plVar7) break;
    plVar5 = (longlong *)plVar5[6];
    plVar9 = plVar15;
  } while (plVar5 != (longlong *)0x0);
  plVar5 = (longlong *)plVar9[0x1f];
  if (plVar5 == (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    plVar5 = (longlong *)plVar9[0x1f];
    if (plVar5 != (longlong *)0x0) goto LAB_142f630a0;
  }
  else {
LAB_142f630a0:
    lVar6 = FUN_142f71d80();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142f630d9;
  }
  plVar5 = plVar15;
LAB_142f630d9:
  if ((*(char *)((longlong)plVar12 + 0x177) == '\0') ||
     (*(char *)((longlong)plVar5 + 0x177) != '\0')) {
    lVar6 = plVar12[0x34];
    puVar2 = (undefined4 *)plVar12[0x33];
    if (puVar2 != puVar2 + (longlong)(int)lVar6 * 10) {
      local_res8 = 0;
      puVar14 = puVar2 + 1;
LAB_142f63130:
      local_60 = puVar14[-1];
      local_5c = *puVar14;
      local_58 = puVar14[1];
      local_78 = *(undefined8 *)(puVar14 + 3);
      local_48 = 0;
      local_40 = 0;
      local_50 = 0;
      FString::FString(local_70,puVar14 + 5);
      FSoftObjectPath::operator=(&local_50,&local_78);
      plVar5 = (longlong *)FUN_1405ec200(&local_60);
      if (plVar5 != (longlong *)0x0) {
        lVar8 = FUN_14171bfe0();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          plVar9 = (longlong *)FUN_142f71d80();
          plVar7 = plVar5;
          do {
            if (plVar7 == plVar9) {
              plVar9 = (longlong *)FUN_142f71d80();
              plVar7 = plVar5;
              goto LAB_142f631f0;
            }
            plVar7 = (longlong *)plVar7[6];
          } while (plVar7 != (longlong *)0x0);
        }
      }
      goto LAB_142f63250;
    }
LAB_142f63276:
    plVar7 = (longlong *)FUN_142f71d80();
    plVar5 = param_1;
    do {
      plVar9 = param_1;
      if (plVar5 == plVar7) break;
      plVar5 = (longlong *)plVar5[6];
      plVar9 = plVar15;
    } while (plVar5 != (longlong *)0x0);
    cVar4 = FUN_142f63b20(plVar12 + 0x35,plVar9);
    if (cVar4 != '\0') {
      puVar11 = (undefined8 *)(**(code **)(plVar12[0x35] + 0x18))(plVar12 + 0x35,&local_res8);
      cVar4 = FUN_142f62f70(*puVar11,param_2);
      if (cVar4 != '\0') {
        return 1;
      }
    }
  }
  return 0;
  while (plVar7 = (longlong *)plVar7[6], plVar7 != (longlong *)0x0) {
LAB_142f631f0:
    if (plVar7 == plVar9) {
      plVar9 = (longlong *)FUN_142f71d80();
      plVar7 = plVar5;
      goto LAB_142f63208;
    }
  }
  goto LAB_142f63250;
  while (plVar7 = (longlong *)plVar7[6], plVar13 = plVar15, plVar7 != (longlong *)0x0) {
LAB_142f63208:
    plVar13 = plVar5;
    if (plVar7 == plVar9) break;
  }
  plVar9 = (longlong *)FUN_142f71d80();
  plVar7 = param_2;
  do {
    plVar10 = param_2;
    if (plVar7 == plVar9) break;
    plVar7 = (longlong *)plVar7[6];
    plVar10 = plVar15;
  } while (plVar7 != (longlong *)0x0);
  if ((plVar13 == plVar10) || (cVar4 = FUN_142f62f70(plVar5,param_2), cVar4 != '\0')) {
    if (local_48 == 0) {
      return 1;
    }
    FMemory::Free();
    return 1;
  }
LAB_142f63250:
  if (local_48 != 0) {
    FMemory::Free();
  }
  puVar1 = puVar14 + 9;
  puVar14 = puVar14 + 10;
  if (puVar1 == puVar2 + (longlong)(int)lVar6 * 10) goto LAB_142f63276;
  goto LAB_142f63130;
}



// FUNCTION 142f63300 FUN_142f63300 body=288 status=ok
// SIG undefined FUN_142f63300(void)

bool FUN_142f63300(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_res8;
  
  plVar10 = *(longlong **)(param_1 + 0x588);
  plVar1 = plVar10 + *(int *)(param_1 + 0x590);
  local_res8 = param_2;
  for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
    lVar6 = *plVar10;
    lVar9 = *(longlong *)(lVar6 + 0x10);
    if (lVar9 != 0) {
      lVar3 = FUN_142f71d80();
      lVar5 = lVar9;
      do {
        lVar7 = lVar9;
        if (lVar5 == lVar3) goto LAB_142f63364;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    lVar7 = 0;
LAB_142f63364:
    if (param_2 != 0) {
      lVar3 = FUN_142f71d80();
      lVar5 = param_2;
      do {
        lVar4 = param_2;
        if (lVar5 == lVar3) goto LAB_142f63381;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    lVar4 = 0;
LAB_142f63381:
    if (lVar7 != lVar4) {
      uVar8 = 0;
      if (lVar9 != 0) {
        lVar3 = FUN_142f71d80();
        lVar5 = lVar9;
        do {
          if (lVar5 == lVar3) {
            lVar5 = FUN_142f5c680(param_1,lVar9);
            if (lVar5 != 0) {
              uVar8 = *(undefined8 *)(lVar5 + 0x28);
            }
            break;
          }
          lVar5 = *(longlong *)(lVar5 + 0x30);
        } while (lVar5 != 0);
      }
      cVar2 = FUN_142f62c70(lVar6,&local_res8,uVar8);
      if (cVar2 != '\0') {
        if (lVar9 != 0) {
          lVar5 = FUN_142f71d80();
          lVar6 = lVar9;
          goto LAB_142f633f3;
        }
        break;
      }
    }
  }
  goto LAB_142f63401;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_142f633f3:
    if (lVar6 == lVar5) goto LAB_142f63403;
  }
LAB_142f63401:
  lVar9 = 0;
LAB_142f63403:
  return lVar9 != 0;
}



// FUNCTION 142f63460 FUN_142f63460 body=351 status=ok
// SIG undefined FUN_142f63460(void)

undefined8 FUN_142f63460(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *local_28;
  undefined8 local_20;
  
  uVar10 = 0;
  if (*(longlong *)(param_2 + 0x28) == 0) {
    return 0;
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_142f59550(param_2,&local_28,1);
  plVar3 = local_28;
  plVar1 = local_28 + (int)local_20;
  plVar7 = local_28;
  while( true ) {
    if (plVar7 == plVar1) goto LAB_142f6358b;
    if (param_1 == *plVar7) break;
    plVar7 = plVar7 + 1;
  }
  iVar5 = FUN_142f5d020(param_2 + 8,param_1);
  if ((iVar5 < 0) || (*(int *)(param_2 + 0x20) <= iVar5)) goto LAB_142f63515;
  uVar9 = *(uint *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar5 * 4);
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar6 = uVar9;
    uVar9 = 0;
    for (; uVar6 != 0; uVar6 = uVar6 & uVar6 - 1) {
      uVar9 = uVar9 + 1;
    }
  }
  if ((byte)uVar9 < *(byte *)(param_1 + 0x28)) goto LAB_142f63515;
  goto LAB_142f63588;
LAB_142f63515:
  plVar8 = *(longlong **)(param_2 + 0x30);
  plVar7 = plVar8 + *(int *)(param_2 + 0x38);
  for (; plVar8 != plVar7; plVar8 = plVar8 + 1) {
    if (*plVar8 == param_1) goto LAB_142f63588;
  }
  uVar10 = 1;
  if (*(char *)(param_1 + 0xa5) == '\0') goto LAB_142f6358b;
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x60);
  plVar7 = plVar3;
  if ((lVar2 == 0) || (cVar4 = FUN_142f636b0(lVar2,param_2), cVar4 == '\0')) {
    while( true ) {
      if ((plVar7 == plVar1) || (lVar2 = *plVar7, param_1 == lVar2)) goto LAB_142f6358b;
      if ((*(char *)(lVar2 + 0xa5) != '\0') && (cVar4 = FUN_142f636b0(lVar2,param_2), cVar4 == '\0')
         ) break;
      plVar7 = plVar7 + 1;
    }
  }
LAB_142f63588:
  uVar10 = 0;
LAB_142f6358b:
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return uVar10;
}



// FUNCTION 142f635c0 FUN_142f635c0 body=163 status=ok
// SIG undefined FUN_142f635c0(void)

ulonglong FUN_142f635c0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_res20 [8];
  
  uVar1 = FUN_142f63b20(param_2,param_3);
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffffffffffff00;
  }
  uVar2 = FWeakObjectPtr::Get(param_2 + 4);
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,local_res20);
  lVar4 = FUN_142f5c680(param_1,*puVar3);
  if (((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) && (*(char *)(lVar4 + 0x10) == '\x01')) {
    uVar1 = FUN_142f63460(uVar2,lVar4);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142f63670 FUN_142f63670 body=62 status=ok
// SIG undefined FUN_142f63670(void)

undefined1 FUN_142f63670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142f5c680(param_1,param_3);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x10) != '\0')) && (*(char *)(lVar2 + 0x10) == '\x01')) {
    uVar1 = FUN_142f63460(param_2,lVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142f636b0 FUN_142f636b0 body=104 status=ok
// SIG undefined FUN_142f636b0(void)

ulonglong FUN_142f636b0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = FUN_142f5d020(param_2 + 8,param_1);
  iVar2 = (int)uVar4;
  if ((-1 < iVar2) && (iVar2 < *(int *)(param_2 + 0x20))) {
    uVar4 = *(ulonglong *)(param_2 + 0x18);
    uVar5 = *(uint *)(uVar4 + (longlong)iVar2 * 4);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      uVar1 = 0;
      for (uVar3 = uVar5; uVar5 = uVar1, uVar4 = (ulonglong)uVar3, uVar3 != 0;
          uVar3 = uVar3 & uVar3 - 1) {
        uVar1 = uVar5 + 1;
      }
    }
    return CONCAT71((int7)(uVar4 >> 8),*(byte *)(param_1 + 0x28) <= (byte)uVar5);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142f63720 FUN_142f63720 body=163 status=ok
// SIG undefined FUN_142f63720(void)

ulonglong FUN_142f63720(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_res20 [8];
  
  uVar1 = FUN_142f63b20(param_2,param_3);
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffffffffffff00;
  }
  uVar2 = FWeakObjectPtr::Get(param_2 + 4);
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,local_res20);
  lVar4 = FUN_142f5c680(param_1,*puVar3);
  if (((lVar4 != 0) && (*(byte *)(lVar4 + 0x10) != 0)) && (*(byte *)(lVar4 + 0x10) < 3)) {
    uVar1 = FUN_142f636b0(uVar2,lVar4);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142f637d0 FUN_142f637d0 body=59 status=ok
// SIG undefined FUN_142f637d0(void)

undefined1 FUN_142f637d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142f5c680(param_1,param_3);
  if (((lVar2 != 0) && (*(byte *)(lVar2 + 0x10) != 0)) && (*(byte *)(lVar2 + 0x10) < 3)) {
    uVar1 = FUN_142f636b0(param_2,lVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142f63810 FUN_142f63810 body=168 status=ok
// SIG undefined FUN_142f63810(void)

byte FUN_142f63810(longlong param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 local_res8;
  
  local_res8 = param_2;
  bVar1 = FUN_140bf9840(param_1 + 0x50,&local_res8);
  if (param_3 == '\0') {
    puVar4 = *(undefined8 **)(param_1 + 0x68);
    uVar3 = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x70) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x70) < puVar4) {
      uVar5 = uVar3;
    }
    if (uVar5 != 0) {
      do {
        bVar2 = (**(code **)(*(longlong *)*puVar4 + 0x278))((longlong *)*puVar4,param_2,0);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
        bVar1 = bVar1 | bVar2;
      } while (uVar3 != uVar5);
    }
    return bVar1;
  }
  return bVar1;
}


