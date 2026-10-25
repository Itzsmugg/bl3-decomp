// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d0e7d0 FUN_140d0e7d0 body=151 status=ok
// SIG undefined FUN_140d0e7d0(void)

void FUN_140d0e7d0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  AAISpawner::BPF_SetPhaseScenario();
  if (param_2 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_140c413b0(uVar2);
    if (lVar3 != 0) {
      FUN_140c4ded0(lVar3,param_1[0x8c]);
    }
    lVar3 = FUN_1422312c0(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_14141f270();
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
        FUN_140bd7d10(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140d0e880 FUN_140d0e880 body=213 status=ok
// SIG undefined FUN_140d0e880(void)

void FUN_140d0e880(longlong param_1,undefined4 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x848);
  if (lVar3 == 0) {
    return;
  }
  lVar2 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar3 = (**(code **)(*(longlong *)(lVar3 + 0xd80) + 0x18))();
  if (lVar3 == 0) {
    return;
  }
  if (param_3 != 0) {
    lVar2 = FUN_1430228e0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140d0e937;
  }
  param_3 = 0;
LAB_140d0e937:
  FUN_142fe44f0(lVar3,param_3,param_2);
  return;
}



// FUNCTION 140d0e960 FUN_140d0e960 body=263 status=ok
// SIG undefined FUN_140d0e960(void)

void FUN_140d0e960(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  lVar3 = param_1[0x109];
  if (lVar3 != 0) {
    lVar2 = FUN_1413f82e0();
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
      lVar3 = (**(code **)(*(longlong *)(lVar3 + 0xd80) + 0x18))();
      if ((lVar3 != 0) && (*param_2 != 0)) {
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar2 = FUN_143018fc0(param_2,uVar4,0);
        if (lVar2 != 0) {
          FUN_142fe3d60(lVar3,local_res8,*(undefined8 *)(*param_2 + 0x1d8),lVar2,1,0,0,1,0,0);
        }
      }
    }
  }
  if (param_2[9] != 0) {
    FMemory::Free();
  }
  if (param_2[7] != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_2 + 4);
  return;
}



// FUNCTION 140d0ea70 FUN_140d0ea70 body=54 status=ok
// SIG undefined FUN_140d0ea70(void)

undefined1 FUN_140d0ea70(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_2 + 0x20);
  return 1;
}



// FUNCTION 140d0eab0 FUN_140d0eab0 body=548 status=ok
// SIG undefined FUN_140d0eab0(void)

void FUN_140d0eab0(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_res10 [8];
  undefined1 local_b8 [8];
  longlong local_b0;
  longlong local_a8;
  longlong local_98;
  longlong local_88;
  longlong local_78;
  longlong local_68;
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(int *)(param_2 + 8) < 2) {
    return;
  }
  lVar7 = param_1[0x109];
  if (lVar7 != 0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140d0eb22;
  }
  lVar7 = 0;
LAB_140d0eb22:
  if (lVar7 != 0) {
    if (param_3 == '\0') {
      lVar7 = (**(code **)(*(longlong *)(lVar7 + 0xd80) + 0x18))();
    }
    else {
      lVar7 = FUN_140c430a0(lVar7);
    }
    if (lVar7 != 0) {
      FText::FText(local_28);
      _guard_xfg_dispatch_icall_nop(local_b8,0,0x68);
      FUN_142fde710(local_48,param_2);
      cVar5 = FUN_143001780(local_b8,local_48);
      if (local_40 != 0) {
        FMemory::Free();
      }
      if ((((cVar5 != '\0') && (local_b0 != 0)) && (local_a8 != 0)) &&
         (*(longlong *)(local_b0 + 0x1d8) != 0)) {
        uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar6 = FUN_143019ed0(uVar8,local_b8,1,0);
        if (lVar6 != 0) {
          FUN_142fe3d60(lVar7,local_res10,*(undefined8 *)(local_b0 + 0x1d8),lVar6,1,0,0,1,0,0);
        }
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
    }
  }
  return;
}



// FUNCTION 140d0ece0 FUN_140d0ece0 body=318 status=ok
// SIG undefined FUN_140d0ece0(void)

void FUN_140d0ece0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x990);
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x980) + 0x10))();
  if (lVar3 != 0) {
    lVar4 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140d0ed51;
  }
  lVar3 = 0;
LAB_140d0ed51:
  if (((lVar1 != 0) && (lVar3 != 0)) && (lVar3 = *(longlong *)(lVar3 + 0x1110), lVar3 != 0)) {
    if ((param_2 < 0) || (*(int *)(lVar3 + 0x38) <= param_2)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_48 = 0xffffffff;
      uStack_40 = 0xffffffff;
      local_20 = 0;
      local_30 = 0;
      uStack_28 = 0;
      local_50 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x78 + (longlong)param_2 * 0x90);
      local_38 = 0;
      local_34 = param_3;
      FWeakObjectPtr::operator=(&local_48,lVar1);
      FUN_142dc4b70(local_68,lVar1,&local_50);
      FUN_142dd3d30(local_68);
    }
  }
  return;
}



// FUNCTION 140d0ee20 FUN_140d0ee20 body=669 status=ok
// SIG undefined FUN_140d0ee20(void)

void FUN_140d0ee20(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  lVar1 = *(longlong *)(param_1 + 0x990);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0xe0);
  if (lVar2 != 0) {
    lVar6 = lVar2 + 0x120;
    lVar4 = FWeakObjectPtr::Get(lVar6);
    if (lVar4 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar2 + 0x128)) && (*(longlong *)(lVar2 + 0x130) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar6,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar2 + 0x128) = DAT_1464b56f4;
        }
        lVar4 = FWeakObjectPtr::Get(lVar6);
        if (lVar4 != 0) goto LAB_140d0ef02;
      }
    }
    else {
LAB_140d0ef02:
      lVar5 = FUN_1414d02a0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar4 = FWeakObjectPtr::Get(lVar6);
        if (lVar4 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar2 + 0x128)) && (*(longlong *)(lVar2 + 0x130) != 0)) {
            lVar4 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar6,lVar4);
            if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar2 + 0x128) = DAT_1464b56f4;
            }
            lVar4 = FWeakObjectPtr::Get(lVar6);
            if (lVar4 != 0) goto LAB_140d0efb1;
          }
        }
        else {
LAB_140d0efb1:
          lVar6 = FUN_1414d02a0();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) goto LAB_140d0efea;
        }
      }
    }
  }
  lVar4 = 0;
LAB_140d0efea:
  if (((lVar1 != 0) && (lVar2 != 0)) && (lVar4 != 0)) {
    if ((param_2 < 0) || (*(int *)(lVar4 + 0x38) <= param_2)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_58 = 0xffffffff;
      uStack_50 = 0xffffffff;
      local_30 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_60 = *(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 0x20 + (longlong)param_2 * 0x30);
      local_48 = 0;
      local_44 = param_3;
      FWeakObjectPtr::operator=(&local_58,lVar1);
      FUN_142dc4b70(local_78,lVar1,&local_60);
      FUN_142dd3d30(local_78);
    }
  }
  return;
}



// FUNCTION 140d0f0c0 FUN_140d0f0c0 body=669 status=ok
// SIG undefined FUN_140d0f0c0(void)

void FUN_140d0f0c0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  lVar1 = *(longlong *)(param_1 + 0x990);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0xe0);
  if (lVar2 != 0) {
    lVar6 = lVar2 + 0x120;
    lVar4 = FWeakObjectPtr::Get(lVar6);
    if (lVar4 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar2 + 0x128)) && (*(longlong *)(lVar2 + 0x130) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar6,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar2 + 0x128) = DAT_1464b56f4;
        }
        lVar4 = FWeakObjectPtr::Get(lVar6);
        if (lVar4 != 0) goto LAB_140d0f1a2;
      }
    }
    else {
LAB_140d0f1a2:
      lVar5 = FUN_1414d02a0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar4 = FWeakObjectPtr::Get(lVar6);
        if (lVar4 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar2 + 0x128)) && (*(longlong *)(lVar2 + 0x130) != 0)) {
            lVar4 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar6,lVar4);
            if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar2 + 0x128) = DAT_1464b56f4;
            }
            lVar4 = FWeakObjectPtr::Get(lVar6);
            if (lVar4 != 0) goto LAB_140d0f251;
          }
        }
        else {
LAB_140d0f251:
          lVar6 = FUN_1414d02a0();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) goto LAB_140d0f28a;
        }
      }
    }
  }
  lVar4 = 0;
LAB_140d0f28a:
  if (((lVar1 != 0) && (lVar2 != 0)) && (lVar4 != 0)) {
    if ((param_2 < 0) || (*(int *)(lVar4 + 0x48) <= param_2)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_58 = 0xffffffff;
      uStack_50 = 0xffffffff;
      local_30 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_60 = *(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x20 + (longlong)param_2 * 0x30);
      local_48 = 0;
      local_44 = param_3;
      FWeakObjectPtr::operator=(&local_58,lVar1);
      FUN_142dc4b70(local_78,lVar1,&local_60);
      FUN_142dd3d30(local_78);
    }
  }
  return;
}



// FUNCTION 140d0f360 FUN_140d0f360 body=91 status=ok
// SIG undefined FUN_140d0f360(void)

void FUN_140d0f360(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  
  if (((char)param_1[0x25] == '\x03') && (param_1[0x30a] != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x768))();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x1300))(param_1,0,param_2);
    }
    FUN_14145e450(param_1,0,param_2);
  }
  return;
}



// FUNCTION 140d0f3c0 FUN_140d0f3c0 body=696 status=ok
// SIG undefined FUN_140d0f3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d0f3c0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8;
  undefined8 *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 *local_2a8;
  undefined1 *puStack_2a0;
  undefined8 local_298;
  longlong *local_290;
  undefined1 local_280 [8];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [520];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar6 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(float *)(lVar6 + 0x558) < *(float *)((longlong)param_1 + 0x1914);
  }
  if (lVar3 == 0) {
    return;
  }
  if (!bVar1) {
    return;
  }
  if (param_3 != 0) {
    uVar4 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar4);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,param_3);
      goto LAB_140d0f485;
    }
  }
  plVar7 = *(longlong **)(lVar6 + 0x570);
  plVar5 = plVar7 + *(int *)(lVar6 + 0x578);
  for (; (lVar6 = 0, plVar7 != plVar5 &&
         ((lVar6 = *plVar7, lVar6 == 0 || (*(char *)(lVar6 + 0x30) != '\0')))); plVar7 = plVar7 + 1)
  {
  }
LAB_140d0f485:
  local_278 = (undefined8 *)CONCAT44(local_278._4_4_,(undefined4)local_278);
  uStack_270 = (undefined1 *)CONCAT44(uStack_270._4_4_,(undefined4)uStack_270);
  if ((lVar6 != 0) &&
     (local_278 = (undefined8 *)CONCAT44(local_278._4_4_,(undefined4)local_278),
     uStack_270 = (undefined1 *)CONCAT44(uStack_270._4_4_,(undefined4)uStack_270),
     *(longlong *)(lVar6 + 0x38) != 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0xd8) != 0) {
      local_298 = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0xd8) + 0x100);
      local_2a8 = &local_298;
      local_2b8 = 0;
      puStack_2a0 = local_280;
      local_2b0 = 0;
      local_290 = param_1;
      local_278 = local_2a8;
      uStack_270 = puStack_2a0;
      FUN_1405e1200(local_268,&local_278);
      local_2d0 = &local_2b8;
      local_2b8 = CONCAT44(0xffffffff,(undefined4)local_2b8);
      local_2c8 = 0;
      local_2d8 = 0;
      local_2b0 = 0;
      FUN_1405f8040(&local_2a8,lVar3,*(undefined8 *)(lVar6 + 0x38),local_268);
      if (local_60 != 0) {
        FMemory::Free();
      }
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar4,&local_2a8);
  iVar2 = (int)puStack_2a0;
  while( true ) {
    if ((iVar2 < 0) || (*(int *)(local_2a8 + 1) <= iVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    lVar3 = FWeakObjectPtr::Get();
    if (lVar3 != 0) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_2b8 = *param_4;
        local_2b0 = *(undefined4 *)(param_4 + 1);
        FUN_14145d8f0(lVar3,param_2,param_3,&local_2b8);
      }
    }
    iVar2 = (int)puStack_2a0 + 1;
    puStack_2a0 = (undefined1 *)CONCAT44(puStack_2a0._4_4_,iVar2);
  }
  *(undefined4 *)((longlong)param_1 + 0x1914) = 0;
  return;
}



// FUNCTION 140d0f680 FUN_140d0f680 body=531 status=ok
// SIG undefined FUN_140d0f680(void)

void FUN_140d0f680(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar8 = (longlong *)0x0;
  lVar6 = FUN_1422312c0();
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar7 = *(longlong *)(param_1 + 0x460);
      if (lVar7 == 0) {
        bVar5 = false;
        bVar4 = true;
        local_40 = (longlong *)0x0;
        plVar9 = plVar8;
      }
      else {
        plVar9 = *(longlong **)(lVar7 + 0x4b8);
        bVar5 = true;
        bVar4 = false;
        plVar8 = *(longlong **)(lVar7 + 0x4c0);
        local_30 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if ((bVar4) && (local_40 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if ((bVar5) && (local_30 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if (plVar9 != (longlong *)0x0) {
        local_58 = SUB84(plVar9,0);
        uStack_54 = (undefined4)((ulonglong)plVar9 >> 0x20);
        uStack_50 = SUB84(plVar8,0);
        uStack_4c = (undefined4)((ulonglong)plVar8 >> 0x20);
        local_28 = local_58;
        uStack_24 = uStack_54;
        uStack_20 = uStack_50;
        uStack_1c = uStack_4c;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        FUN_140bd83e0(lVar6,&local_28,param_2);
        plVar9 = (longlong *)CONCAT44(uStack_1c,uStack_20);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
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
    }
  }
  return;
}



// FUNCTION 140d0f8b0 FUN_140d0f8b0 body=123 status=ok
// SIG undefined FUN_140d0f8b0(void)

void FUN_140d0f8b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    if (*(longlong *)(param_1 + 0x528) != 0) {
      FUN_142fd5420();
    }
    plVar1 = *(longlong **)(param_1 + 0x848);
    if (plVar1 != (longlong *)0x0) {
      lVar3 = FUN_1413f82e0();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x000140d0f91e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0xc98))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d0f930 FUN_140d0f930 body=546 status=ok
// SIG undefined FUN_140d0f930(void)

void FUN_140d0f930(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 local_98 [8];
  longlong local_78;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  undefined1 local_28 [8];
  longlong local_20;
  
  if ((longlong *)param_2[4] != (longlong *)0x0) {
    cVar2 = (**(code **)(*(longlong *)param_2[4] + 0x20))();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_140d0f965;
    }
  }
  bVar1 = false;
LAB_140d0f965:
  if ((bVar1) && (1 < (int)param_2[1])) {
    FString::operator=(param_1 + 0x1d1,param_2);
    *(int *)(param_1 + 0x1d3) = (int)param_2[2];
    FUN_1404c0940(param_1 + 0x1d4);
    plVar7 = (longlong *)0x0;
    if (param_1[0x1d0] != 0) {
      FUN_142227350(param_1[0x1d0],0,1);
      param_1[0x1d0] = 0;
    }
    _guard_xfg_dispatch_icall_nop(local_98,0,0x68);
    FUN_142fde710(local_28,param_2);
    FUN_143001780(local_98,local_28);
    if (local_20 != 0) {
      FMemory::Free();
    }
    cVar2 = FUN_143003610(local_98);
    if (cVar2 != '\0') {
      lVar6 = param_1[0x109];
      if (lVar6 != 0) {
        lVar4 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          plVar7 = *(longlong **)(lVar6 + 0x2ad0);
        }
      }
      if (plVar7 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar7 + 0x408))(plVar7);
        local_98[0] = FUN_140b815b0(param_1,local_98,uVar3);
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar6 = FUN_143019ed0(uVar5,local_98,1,0);
        param_1[0x1d0] = lVar6;
        FUN_140b8ce10(lVar6,param_1);
      }
    }
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x1d9);
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
  }
  FUN_1404bf980(param_2 + 3);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d0fb60 FUN_140d0fb60 body=39 status=ok
// SIG undefined FUN_140d0fb60(void)

undefined1 FUN_140d0fb60(undefined8 param_1,longlong *param_2)

{
  FUN_1404bf980(param_2 + 3);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 140d0fb90 FUN_140d0fb90 body=155 status=ok
// SIG undefined FUN_140d0fb90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d0fb90(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x848) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x848) + 0x168);
    if (lVar1 == 0) {
      local_28 = _DAT_1468b5d90;
      local_20 = DAT_1468b5d98;
    }
    else {
      local_28 = *(undefined8 *)(lVar1 + 0x220);
      local_20 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_18 = local_28;
    local_10 = local_20;
  }
  local_28 = local_18;
  local_20 = local_10;
  FUN_1405f1750(local_18,param_1,0,&local_28);
  return;
}



// FUNCTION 140d0fc40 FUN_140d0fc40 body=92 status=ok
// SIG undefined FUN_140d0fc40(void)

void FUN_140d0fc40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 != 0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) &&
      (lVar1 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar1), lVar1 != 0)) &&
     (lVar1 = FUN_142d84360(lVar1), lVar1 != 0)) {
    FUN_142dd18b0(lVar1,param_1,param_2,1);
  }
  return;
}



// FUNCTION 140d0fca0 FUN_140d0fca0 body=190 status=ok
// SIG undefined FUN_140d0fca0(void)

void FUN_140d0fca0(longlong *param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar3 = FUN_1413c30f0();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  *(int *)(param_2 + 0xaa) = param_3;
  *(undefined4 *)((longlong)param_2 + 0x554) = param_4;
  if (((0 < param_3) && (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) &&
     (lVar3 = UWorld::GetGameState<APVPGameState>(lVar3), lVar3 != 0)) {
    cVar2 = FUN_140cb68f0(lVar3);
    uVar4 = 2;
    if (cVar2 == '\x01') goto LAB_140d0fd3d;
  }
  uVar4 = 4;
LAB_140d0fd3d:
  (**(code **)(*param_2 + 0x730))(param_2,uVar4);
  return;
}



// FUNCTION 140d0fd60 FUN_140d0fd60 body=89 status=ok
// SIG undefined FUN_140d0fd60(void)

void FUN_140d0fd60(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_142f40c20();
  if (((int)plVar2[1] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x18))();
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)FUN_142f40c20();
      if (*(int *)(puVar3 + 1) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)*puVar3;
      }
      lVar4 = (**(code **)(*plVar2 + 0x38))();
      if (lVar4 != 0) {
        FUN_142f42e90(lVar4,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d0fdc0 FUN_140d0fdc0 body=531 status=ok
// SIG undefined FUN_140d0fdc0(void)

void FUN_140d0fdc0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar8 = (longlong *)0x0;
  lVar6 = FUN_1422312c0();
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar7 = *(longlong *)(param_1 + 0x460);
      if (lVar7 == 0) {
        bVar5 = false;
        bVar4 = true;
        local_40 = (longlong *)0x0;
        plVar9 = plVar8;
      }
      else {
        plVar9 = *(longlong **)(lVar7 + 0x4b8);
        bVar5 = true;
        bVar4 = false;
        plVar8 = *(longlong **)(lVar7 + 0x4c0);
        local_30 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if ((bVar4) && (local_40 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if ((bVar5) && (local_30 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if (plVar9 != (longlong *)0x0) {
        local_58 = SUB84(plVar9,0);
        uStack_54 = (undefined4)((ulonglong)plVar9 >> 0x20);
        uStack_50 = SUB84(plVar8,0);
        uStack_4c = (undefined4)((ulonglong)plVar8 >> 0x20);
        local_28 = local_58;
        uStack_24 = uStack_54;
        uStack_20 = uStack_50;
        uStack_1c = uStack_4c;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        FUN_140bd8550(lVar6,&local_28,param_2);
        plVar9 = (longlong *)CONCAT44(uStack_1c,uStack_20);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
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
    }
  }
  return;
}



// FUNCTION 140d10010 FUN_140d10010 body=152 status=ok
// SIG undefined FUN_140d10010(void)

void FUN_140d10010(longlong *param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
  lVar3 = FUN_1405e8e00(uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_1414196e0();
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
      if (param_3 == '\0') {
        FUN_140aba0c0(lVar3,param_2,param_1);
      }
      else {
        FUN_140aa2870();
      }
    }
  }
  return;
}



// FUNCTION 140d100e0 FUN_140d100e0 body=334 status=ok
// SIG undefined FUN_140d100e0(void)

void FUN_140d100e0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
LAB_140d1013d:
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1413b9340();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = param_3;
    if (!bVar1) goto LAB_140d1013d;
  }
  if (param_3 == 0) {
LAB_140d1017a:
    param_3 = 0;
  }
  else {
    lVar3 = FUN_1412fc200();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140d1017a;
  }
  if (lVar2 == 0) {
    if (param_3 == 0) {
      return;
    }
    if (param_4 == 0) {
      return;
    }
    lVar2 = UARTrackedObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    FUN_140a56d10(param_3,param_4);
    return;
  }
  if (param_4 != 0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140d101be;
  }
  param_4 = 0;
LAB_140d101be:
  FUN_140a8fea0(lVar2,param_1,param_4);
  return;
}



// FUNCTION 140d10230 FUN_140d10230 body=472 status=ok
// SIG undefined FUN_140d10230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d10230(longlong *param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined4 local_270;
  longlong *local_268;
  undefined1 *puStack_260;
  longlong local_258;
  longlong *local_250;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 *puStack_230;
  undefined1 local_228 [520];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_250 = param_1;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x38) == 0)) {
    lVar3 = (**(code **)(param_1[0x130] + 0x10))();
    if (lVar3 == 0) {
      return;
    }
    lVar4 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    if (*(longlong *)(lVar3 + 0x1098) == 0) {
      return;
    }
    local_258 = *(longlong *)(lVar3 + 0x10a0);
    if (local_258 == 0) {
      return;
    }
    local_268 = &local_258;
    local_278 = 0;
    puStack_260 = local_240;
    local_270 = 0;
    local_238 = local_268;
    puStack_230 = puStack_260;
    FUN_1405e1200(local_228,&local_238);
    local_278 = CONCAT44(0xffffffff,(undefined4)local_278);
    local_270 = 0;
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar5 = *(undefined8 *)(lVar3 + 0x1098);
  }
  else {
    local_278 = 0;
    local_270 = 0;
    local_258 = *(longlong *)(param_2 + 0x40);
    local_268 = &local_258;
    puStack_260 = local_240;
    local_238 = local_268;
    puStack_230 = puStack_260;
    FUN_1405e1200(local_228,&local_238);
    local_278 = CONCAT44(0xffffffff,(undefined4)local_278);
    local_270 = 0;
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
  }
  local_288 = 0;
  local_290 = &local_278;
  local_298 = 0;
  FUN_1405f8040(&local_268,uVar2,uVar5,local_228);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d10410 FUN_140d10410 body=292 status=ok
// SIG undefined FUN_140d10410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d10410(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 *local_268;
  undefined1 *puStack_260;
  undefined8 local_258;
  longlong *local_250;
  undefined1 local_240 [8];
  undefined8 *local_238;
  undefined1 *puStack_230;
  undefined1 local_228 [520];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0xd8);
  if (lVar1 != 0) {
    local_278 = 0;
    local_270 = 0;
    local_258 = *(undefined8 *)(lVar1 + 0x100);
    local_268 = &local_258;
    puStack_260 = local_240;
    local_250 = param_1;
    local_238 = local_268;
    puStack_230 = puStack_260;
    FUN_1405e1200(local_228,&local_238);
    local_278 = CONCAT44(0xffffffff,(undefined4)local_278);
    local_270 = 0;
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    local_288 = 0;
    local_290 = &local_278;
    local_298 = 0;
    FUN_1405f8040(&local_268,uVar2,*(undefined8 *)(lVar1 + 0x140),local_228);
    if (local_20 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140d10560 FUN_140d10560 body=57 status=ok
// SIG undefined FUN_140d10560(void)

void FUN_140d10560(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_140c413b0(uVar1);
  if (lVar2 != 0) {
    FUN_140c4de30(lVar2,param_1[0x8c]);
    return;
  }
  return;
}



// FUNCTION 140d105a0 FUN_140d105a0 body=431 status=ok
// SIG undefined FUN_140d105a0(void)

void FUN_140d105a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  lVar8 = FUN_1422312c0();
  if (lVar8 != 0) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_140bbc150(lVar8,&local_38);
      puVar11 = local_38 + (longlong)(int)local_30 * 2;
      for (puVar12 = local_38; puVar12 != puVar11; puVar12 = puVar12 + 2) {
        cVar7 = (**(code **)**(undefined8 **)(param_2 + 8))(*(undefined8 **)(param_2 + 8),*puVar12);
        if (cVar7 == '\0') {
          local_28 = *puVar12;
          local_20 = (longlong *)puVar12[1];
          if (local_20 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_20 + 1) = (int)local_20[1] + 1;
            UNLOCK();
          }
          lVar9 = FUN_140bbb190(lVar8,&local_28);
          plVar6 = local_20;
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_20 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_20)(local_20);
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
          if (lVar9 != 0) {
            FUN_14145e200(lVar9,param_2);
          }
        }
      }
      FUN_140bd7ce0(lVar8,param_2);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_38);
    }
  }
  uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar8 = FUN_140c413b0(uVar10);
  if (lVar8 != 0) {
    FUN_140c4e140(lVar8,param_1[0x8c]);
    return;
  }
  return;
}



// FUNCTION 140d10750 FUN_140d10750 body=37 status=ok
// SIG undefined FUN_140d10750(void)

undefined8 FUN_140d10750(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d10780 FUN_140d10780 body=127 status=ok
// SIG undefined FUN_140d10780(void)

void FUN_140d10780(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_68 [96];
  
  uVar1 = FUN_1409f3dd0(local_68,param_3);
  cVar2 = FUN_140e900c0(param_1 + 0x1b10,param_2,uVar1);
  if (cVar2 == '\0') {
    FUN_14145ea40(param_1,param_2);
  }
  if (*(longlong *)(param_3 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_3 + 0x38) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_3 + 0x20);
  return;
}



// FUNCTION 140d10800 FUN_140d10800 body=54 status=ok
// SIG undefined FUN_140d10800(void)

undefined1 FUN_140d10800(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (*(longlong *)(param_3 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_3 + 0x38) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_3 + 0x20);
  return 1;
}



// FUNCTION 140d10850 FUN_140d10850 body=267 status=ok
// SIG undefined FUN_140d10850(void)

void FUN_140d10850(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_18;
  longlong lStack_10;
  
  lVar4 = *(longlong *)(param_1 + 0x848);
  if (lVar4 == 0) {
LAB_140d108a7:
    lVar4 = 0;
  }
  else {
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
    if (!bVar1) goto LAB_140d108a7;
  }
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x980) + 0x10))();
  if (lVar2 != 0) {
    lVar3 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140d108f2;
  }
  lVar2 = 0;
LAB_140d108f2:
  if (((lVar4 != 0) && (lVar2 != 0)) && (lVar2 = *(longlong *)(lVar2 + 0x1110), lVar2 != 0)) {
    if ((param_2 < 0) || (*(int *)(lVar2 + 0x38) <= param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_18 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x78 + (longlong)param_2 * 0x90);
      lStack_10 = lVar4;
      FUN_142dd9890(lVar4,&local_18);
    }
  }
  return;
}



// FUNCTION 140d10960 FUN_140d10960 body=606 status=ok
// SIG undefined FUN_140d10960(void)

void FUN_140d10960(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_28;
  longlong lStack_20;
  
  lVar6 = *(longlong *)(param_1 + 0x848);
  if (lVar6 == 0) {
LAB_140d109b7:
    lVar6 = 0;
  }
  else {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140d109b7;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0xe0);
  if (lVar2 != 0) {
    lVar5 = lVar2 + 0x120;
    lVar3 = FWeakObjectPtr::Get(lVar5);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar2 + 0x128)) && (*(longlong *)(lVar2 + 0x130) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar5,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar2 + 0x128) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar5);
        if (lVar3 != 0) goto LAB_140d10a6d;
      }
    }
    else {
LAB_140d10a6d:
      lVar4 = FUN_1414d02a0();
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
        lVar3 = FWeakObjectPtr::Get(lVar5);
        if (lVar3 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar2 + 0x128)) && (*(longlong *)(lVar2 + 0x130) != 0)) {
            lVar3 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar5,lVar3);
            if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar2 + 0x128) = DAT_1464b56f4;
            }
            lVar3 = FWeakObjectPtr::Get(lVar5);
            if (lVar3 != 0) goto LAB_140d10b19;
          }
        }
        else {
LAB_140d10b19:
          lVar5 = FUN_1414d02a0();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_140d10b52;
        }
      }
    }
  }
  lVar3 = 0;
LAB_140d10b52:
  if (((lVar6 != 0) && (lVar2 != 0)) && (lVar3 != 0)) {
    if ((param_2 < 0) || (*(int *)(lVar3 + 0x38) <= param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_28 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x20 + (longlong)param_2 * 0x30);
      lStack_20 = lVar6;
      FUN_142dd9890(lVar6,&local_28);
    }
  }
  return;
}



// FUNCTION 140d10bc0 FUN_140d10bc0 body=606 status=ok
// SIG undefined FUN_140d10bc0(void)

void FUN_140d10bc0(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_28;
  longlong lStack_20;
  
  lVar6 = *(longlong *)(param_1 + 0x848);
  if (lVar6 == 0) {
LAB_140d10c17:
    lVar6 = 0;
  }
  else {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140d10c17;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0xe0);
  if (lVar2 != 0) {
    lVar5 = lVar2 + 0x120;
    lVar3 = FWeakObjectPtr::Get(lVar5);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar2 + 0x128)) && (*(longlong *)(lVar2 + 0x130) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar5,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar2 + 0x128) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar5);
        if (lVar3 != 0) goto LAB_140d10ccd;
      }
    }
    else {
LAB_140d10ccd:
      lVar4 = FUN_1414d02a0();
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
        lVar3 = FWeakObjectPtr::Get(lVar5);
        if (lVar3 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar2 + 0x128)) && (*(longlong *)(lVar2 + 0x130) != 0)) {
            lVar3 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar5,lVar3);
            if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar2 + 0x128) = DAT_1464b56f4;
            }
            lVar3 = FWeakObjectPtr::Get(lVar5);
            if (lVar3 != 0) goto LAB_140d10d79;
          }
        }
        else {
LAB_140d10d79:
          lVar5 = FUN_1414d02a0();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_140d10db2;
        }
      }
    }
  }
  lVar3 = 0;
LAB_140d10db2:
  if (((lVar6 != 0) && (lVar2 != 0)) && (lVar3 != 0)) {
    if ((param_2 < 0) || (*(int *)(lVar3 + 0x48) <= param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_28 = *(undefined8 *)(*(longlong *)(lVar3 + 0x40) + 0x20 + (longlong)param_2 * 0x30);
      lStack_20 = lVar6;
      FUN_142dd9890(lVar6,&local_28);
    }
  }
  return;
}



// FUNCTION 140d10e20 FUN_140d10e20 body=234 status=ok
// SIG undefined FUN_140d10e20(void)

void FUN_140d10e20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      FUN_1412a00a0(param_1,param_2);
      return;
    }
    plVar1 = *(longlong **)(param_1 + 0x488);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2f8))(plVar1,param_1);
    }
    cVar3 = FUN_141242620(param_2,param_1);
    if ((cVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
      lVar4 = FUN_1413ffe00();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_141400aa0(plVar1);
      }
    }
  }
  return;
}



// FUNCTION 140d10f10 FUN_140d10f10 body=104 status=ok
// SIG undefined FUN_140d10f10(void)

void FUN_140d10f10(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar2 = UWorld::GetGameState<APVPGameState>(lVar1);
    if (lVar2 != 0) {
      FUN_140b75390(lVar2 + 0x670,lVar1,param_1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 140d10f80 FUN_140d10f80 body=91 status=ok
// SIG undefined FUN_140d10f80(void)

void FUN_140d10f80(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142cebba0(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_1414e0f70();
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
      FUN_14127c590(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140d10ff0 FUN_140d10ff0 body=420 status=ok
// SIG undefined FUN_140d10ff0(void)

void FUN_140d10ff0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)param_1[0x8c];
  if (plVar8 == (longlong *)0x0) {
LAB_140d11048:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140d11048;
  }
  if (param_2 == 0) {
    return;
  }
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 == 0) {
    return;
  }
  if ((*(longlong **)(param_2 + 0x4b8) == (longlong *)0x0) ||
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x4b8) + 0x20))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x4b8);
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar3 = FUN_142481360(uVar4,uVar7);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar5 = (**(code **)(*plVar8 + 0x670))(plVar8);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140d11147;
  }
  lVar5 = 0;
LAB_140d11147:
  cVar2 = FUN_140ceed60(lVar3);
  if (cVar2 == '\0') {
    if (lVar5 == 0) {
      return;
    }
    uVar7 = 0;
  }
  else {
    FUN_14145dac0(lVar3,plVar8);
    if (lVar5 == 0) {
      return;
    }
    uVar7 = 1;
  }
  FUN_14145db00(lVar5,uVar7,param_2);
  return;
}



// FUNCTION 140d111d0 FUN_140d111d0 body=129 status=ok
// SIG undefined FUN_140d111d0(void)

void FUN_140d111d0(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x848);
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
    if (bVar1) goto LAB_140d11233;
  }
  lVar3 = 0;
LAB_140d11233:
  FUN_140a57760(param_2,lVar3,param_3);
  return;
}



// FUNCTION 140d11270 FUN_140d11270 body=97 status=ok
// SIG undefined FUN_140d11270(void)

void FUN_140d11270(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x460);
  if (lVar1 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
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
      *(undefined1 *)(lVar1 + 0x5d4) = param_2;
    }
  }
  return;
}



// FUNCTION 140d11300 FUN_140d11300 body=286 status=ok
// SIG undefined FUN_140d11300(void)

void FUN_140d11300(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *local_18;
  int local_10;
  
  *(undefined4 *)(param_1 + 0x1de) = param_2;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((lVar4 != 0) && (lVar5 = FUN_1407c74b0(lVar4), lVar5 != 0)) {
    plVar6 = (longlong *)FUN_1407e52a0();
    lVar7 = plVar6[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar7 = plVar6[0x1f];
    }
    iVar3 = UWorld::GetNonDefaultPhysicsVolumeCount(lVar7);
    UWorld::GetPlayerControllerIterator(lVar4,&local_18);
    while( true ) {
      if ((local_10 < 0) || ((int)local_18[1] <= local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      lVar4 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (lVar4 != 0) {
        lVar7 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (((bVar2) && (iVar1 = *(int *)(lVar4 + 0xef0), 0 < iVar1)) && (iVar1 < iVar3)) {
          iVar3 = iVar1;
        }
      }
      local_10 = local_10 + 1;
    }
    if (iVar3 < 1000) {
      FAutomationTestFramework::SetRequestedTestFilter(lVar5,iVar3);
    }
  }
  return;
}



// FUNCTION 140d11430 FUN_140d11430 body=191 status=ok
// SIG undefined FUN_140d11430(void)

void FUN_140d11430(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_1 + 0x19d8) == 0) && (*(longlong *)(param_1 + 0xc58) != 0)) &&
     (plVar3 = *(longlong **)(param_1 + 0x508), plVar3 != (longlong *)0x0)) {
    lVar2 = FUN_1429c30a0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = (**(code **)(*plVar3 + 0x280))(plVar3);
      if (lVar2 != 0) {
        plVar3 = (longlong *)plVar3[0x32e];
      }
      lVar2 = FUN_1425b9f20(plVar3,7,1);
      *(longlong *)(param_1 + 0x19d8) = lVar2;
      if (lVar2 != 0) {
        FUN_142ccfdc0(lVar2,*(undefined8 *)(param_1 + 0xc58));
      }
    }
  }
  return;
}



// FUNCTION 140d11530 FUN_140d11530 body=83 status=ok
// SIG undefined FUN_140d11530(void)

void FUN_140d11530(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x149c) = param_2;
  if (((char)param_1[0x25] == '\x03') && (param_1[0xa5] != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x768))();
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1[0xa5] + 0x470) = param_2;
    }
  }
  return;
}



// FUNCTION 140d115b0 FUN_140d115b0 body=97 status=ok
// SIG undefined FUN_140d115b0(void)

void FUN_140d115b0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x460);
  if (lVar1 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
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
      *(undefined1 *)(lVar1 + 0x5d5) = param_2;
    }
  }
  return;
}



// FUNCTION 140d11620 FUN_140d11620 body=415 status=ok
// SIG undefined FUN_140d11620(void)

void FUN_140d11620(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  if (1 < *(int *)(param_2 + 8)) {
    _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
    FUN_142fde710(local_a8,param_2);
    cVar1 = FUN_143001780(local_78,local_a8);
    if (local_a0 != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      lVar2 = FUN_140b7d900(param_1,local_78,param_1,1,0);
      if (lVar2 != 0) {
        FUN_14223c850(lVar2,param_3,0,0,1);
        puVar3 = (undefined8 *)FVector::Rotation(param_3 + 0xc,local_88);
        local_b8 = *puVar3;
        local_b0 = *(undefined4 *)(puVar3 + 1);
        AActor::SetActorRotation(lVar2,&local_b8,1);
        FUN_143015760(lVar2,SQRT(*(float *)(param_3 + 0xc) * *(float *)(param_3 + 0xc) +
                                 *(float *)(param_3 + 0x10) * *(float *)(param_3 + 0x10) +
                                 *(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x14)));
        FUN_143015710(lVar2,param_3 + 0x1c);
        FUN_14145dd40(param_1,param_2);
      }
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140d117c0 FUN_140d117c0 body=448 status=ok
// SIG undefined FUN_140d117c0(void)

void FUN_140d117c0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 local_res10;
  code *local_38;
  undefined4 uStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [16];
  
  if (param_2 == 0) {
    lVar5 = FUN_1422312c0();
    if (lVar5 == 0) {
      return;
    }
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    if (*(int *)(lVar5 + 0xac0) < 1) {
      return;
    }
    param_2 = **(longlong **)(lVar5 + 0xab8);
    if (param_2 == 0) {
      return;
    }
  }
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar5 = UWorld::GetAuthGameMode<ABaseGameMode>(uVar7);
  if ((lVar5 != 0) && (cVar4 = FUN_140d01f30(param_1), cVar4 == '\0')) {
    if (param_1[0x91] != 0) {
      FUN_142227350(param_1[0x91],1);
    }
    param_1[0x109] = 0;
    local_res10 = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x118,&local_res10);
    param_1[0x14b] = param_2;
    FUN_14145de60(param_1,param_2);
    if ((char)param_1[0x25] == '\x03') {
      local_38 = FUN_140cefb60;
      uStack_30 = 0;
      uVar7 = TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
                        (local_18,param_1,&local_38);
      uVar8 = thunk_FUN_1422ca050();
      plVar9 = (longlong *)FUN_1409f97d0(uVar8,local_28,param_2,uVar7);
      if (param_1 + 0x14c != plVar9) {
        param_1[0x14c] = *plVar9;
        *plVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x14d,plVar9 + 1);
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_20 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140d11980 FUN_140d11980 body=570 status=ok
// SIG undefined FUN_140d11980(void)

void FUN_140d11980(longlong *param_1,undefined8 *param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined8 local_38;
  undefined4 local_30;
  
  if (param_1[0xa5] == 0) {
    return;
  }
  if ((*(byte *)(param_1[0xa5] + 0x2c40) & 0x80) == 0) {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && (cVar1 = UWorld::IsInSeamlessTravel(lVar2), cVar1 != '\0')) {
    return;
  }
  cVar1 = FUN_14270dfe0(param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (param_1[0x191] != 0) {
    pfVar3 = (float *)FUN_14307c4f0(param_1[0x191],&local_38);
    fVar4 = *pfVar3;
    fVar5 = (float)(int)(fVar4 * 0.0027777778) * 360.0;
    if (ABS(fVar4) < ABS(fVar5)) {
      fVar5 = fVar4;
    }
    fVar4 = fVar4 - fVar5;
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + 360.0;
    }
    if (fVar4 == 0.0) {
      fVar4 = pfVar3[1];
      fVar5 = (float)(int)(fVar4 * 0.0027777778) * 360.0;
      if (ABS(fVar4) < ABS(fVar5)) {
        fVar5 = fVar4;
      }
      fVar4 = fVar4 - fVar5;
      if (fVar4 < 0.0) {
        fVar4 = fVar4 + 360.0;
      }
      if (fVar4 == 0.0) {
        fVar4 = pfVar3[2];
        fVar5 = (float)(int)(fVar4 * 0.0027777778) * 360.0;
        if (ABS(fVar4) < ABS(fVar5)) {
          fVar5 = fVar4;
        }
        fVar4 = fVar4 - fVar5;
        if (fVar4 < 0.0) {
          fVar4 = fVar4 + 360.0;
        }
        if (fVar4 == 0.0) goto LAB_140d11b7f;
      }
    }
    pfVar3 = (float *)FUN_14307c4f0(param_1[0x191],&local_38);
    fVar4 = ((float)((int)param_3 >> 0x10 & 0xffff) * 0.005493164 + pfVar3[1]) * 182.04445;
    fVar5 = ((float)(param_3 & 0xffff) * 0.005493164 + *pfVar3) * 182.04445;
    param_3 = ((int)ROUND(fVar4 + fVar4 + 0.5) >> 1) << 0x10 |
              (int)ROUND(fVar5 + fVar5 + 0.5) >> 1 & 0xffffU;
  }
LAB_140d11b7f:
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  FUN_1427163e0(param_1,&local_38,param_3);
  return;
}



// FUNCTION 140d11bd0 FUN_140d11bd0 body=1198 status=ok
// SIG undefined FUN_140d11bd0(void)

void FUN_140d11bd0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res8 [8];
  longlong *local_a8;
  longlong *local_a0;
  
  cVar5 = (**(code **)(*param_1 + 0x768))();
  if ((cVar5 != '\0') && (cVar5 = APlayerController::IsPrimaryPlayer(param_1), cVar5 != '\0')) {
    lVar6 = FUN_1405c6c00();
    lVar7 = FUN_140cff230(param_1);
    if ((lVar7 != 0) && (lVar6 != 0)) {
      if (*(char *)(lVar7 + 0x69) == '\0') {
        uVar9 = 0x3f800000;
      }
      else {
        uVar9 = 0;
      }
      FApp::SetUnfocusedVolumeMultiplier(uVar9);
      fVar11 = *(float *)(lVar7 + 0x44);
      if (0.0 <= fVar11) {
        if (100.0 <= fVar11) {
          fVar11 = 100.0;
        }
      }
      else {
        fVar11 = 0.0;
      }
      if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
        FUN_1405aa790(DAT_1468536c8,fVar11 * 0.01);
      }
      fVar11 = *(float *)(lVar7 + 0x4c);
      if (0.0 <= fVar11) {
        if (100.0 <= fVar11) {
          fVar11 = 100.0;
        }
      }
      else {
        fVar11 = 0.0;
      }
      fVar12 = *(float *)(lVar7 + 0x50);
      if (0.0 <= fVar12) {
        if (100.0 <= fVar12) {
          fVar12 = 100.0;
        }
      }
      else {
        fVar12 = 0.0;
      }
      fVar14 = *(float *)(lVar7 + 0x48);
      if (0.0 <= fVar14) {
        if (100.0 <= fVar14) {
          fVar14 = 100.0;
        }
      }
      else {
        fVar14 = 0.0;
      }
      fVar15 = -96.0;
      fVar13 = fVar11 * fVar11 * 0.0001;
      fVar11 = fVar12 * fVar12 * 0.0001;
      if (fVar13 <= 0.0) {
        fVar12 = -96.0;
      }
      else {
        fVar12 = (float)FUN_140a37090(fVar13);
      }
      if (0.0 < fVar11) {
        fVar15 = (float)FUN_140a37090(fVar11);
      }
      fVar16 = fVar15;
      if (fVar15 <= fVar12) {
        fVar16 = fVar12;
      }
      fVar15 = _guard_xfg_dispatch_icall_nop(10.0,(fVar15 - fVar16) * 0.05);
      fVar10 = _guard_xfg_dispatch_icall_nop(10.0,fVar16 * 0.05);
      lVar7 = *(longlong *)(lVar6 + 0x70);
      if (lVar7 != 0) {
        fVar12 = _guard_xfg_dispatch_icall_nop(10.0,(fVar12 - fVar16) * 0.05);
        fVar12 = fVar12 * 100.0;
        if (0.0 <= fVar12) {
          if (100.0 <= fVar12) {
            fVar12 = 100.0;
          }
        }
        else {
          fVar12 = 0.0;
        }
        FUN_1405aa060(lVar7,fVar12,0,4);
      }
      if (*(longlong *)(lVar6 + 0x78) != 0) {
        fVar15 = fVar15 * 100.0;
        if (0.0 <= fVar15) {
          if (100.0 <= fVar15) {
            fVar15 = 100.0;
          }
        }
        else {
          fVar15 = 0.0;
        }
        FUN_1405aa060(*(longlong *)(lVar6 + 0x78),fVar15,0,4);
      }
      if (*(longlong *)(lVar6 + 0x80) != 0) {
        fVar10 = fVar10 * 100.0;
        if (0.0 <= fVar10) {
          if (100.0 <= fVar10) {
            fVar10 = 100.0;
          }
        }
        else {
          fVar10 = 0.0;
        }
        FUN_1405aa060(*(longlong *)(lVar6 + 0x80),fVar10,0,4);
      }
      if (*(longlong *)(lVar6 + 0x60) != 0) {
        fVar13 = fVar13 * 100.0;
        if (0.0 <= fVar13) {
          if (100.0 <= fVar13) {
            fVar13 = 100.0;
          }
        }
        else {
          fVar13 = 0.0;
        }
        FUN_1405aa060(*(longlong *)(lVar6 + 0x60),fVar13,0,4);
      }
      if (*(longlong *)(lVar6 + 0x68) != 0) {
        fVar11 = fVar11 * 100.0;
        if (0.0 <= fVar11) {
          if (100.0 <= fVar11) {
            fVar11 = 100.0;
          }
        }
        else {
          fVar11 = 0.0;
        }
        FUN_1405aa060(*(longlong *)(lVar6 + 0x68),fVar11,0,4);
      }
      if (*(longlong *)(lVar6 + 0x58) != 0) {
        if (0.0 <= fVar14) {
          if (100.0 <= fVar14) {
            fVar14 = 100.0;
          }
        }
        else {
          fVar14 = 0.0;
        }
        FUN_1405aa060(*(longlong *)(lVar6 + 0x58),fVar14,0,4);
      }
      if (*(longlong *)(lVar6 + 0x88) != 0) {
        FUN_1405aa060(*(longlong *)(lVar6 + 0x88),0,0,4);
      }
    }
    cVar5 = (**(code **)(*param_1 + 0x768))(param_1);
    if (((cVar5 != '\0') && (cVar5 = APlayerController::IsPrimaryPlayer(param_1), cVar5 != '\0')) &&
       (lVar6 = FUN_140cff230(param_1), lVar6 != 0)) {
      puVar8 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
      FUN_140bbd560(&local_a8,*puVar8);
      if (local_a8 != (longlong *)0x0) {
        fVar11 = *(float *)(lVar6 + 0x54);
        fVar12 = 0.0;
        if ((0.0 <= fVar11) && (fVar12 = fVar11, 100.0 <= fVar11)) {
          fVar12 = 100.0;
        }
        (**(code **)(*local_a8 + 0xb8))(local_a8,1,fVar12 * 0.01);
      }
      plVar4 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a0 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
    }
    cVar5 = (**(code **)(*param_1 + 0x768))(param_1);
    if ((cVar5 != '\0') && (cVar5 = APlayerController::IsPrimaryPlayer(param_1), cVar5 != '\0')) {
      lVar6 = FUN_140cff230();
      if ((DAT_1468536c6 != '\0') || (lVar7 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
        lVar7 = 0;
      }
      if ((lVar6 != 0) && (lVar7 != 0)) {
        FUN_1405aa050(lVar7,*(undefined1 *)(lVar6 + 0x6a));
      }
    }
  }
  return;
}



// FUNCTION 140d12080 FUN_140d12080 body=75 status=ok
// SIG undefined FUN_140d12080(void)

void FUN_140d12080(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140cff230();
  if (lVar2 != 0) {
    uVar1 = *(undefined1 *)(lVar2 + 0x184);
    FUN_140d120d0(param_1,uVar1);
    if (*(char *)(param_1 + 0x128) != '\x03') {
      FUN_141460ab0(param_1,uVar1);
    }
  }
  return;
}



// FUNCTION 140d120d0 FUN_140d120d0 body=157 status=ok
// SIG undefined FUN_140d120d0(void)

void FUN_140d120d0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      *(undefined8 *)(param_1 + 0x1c78) = 0;
    }
    else {
      if (param_2 == '\x01') {
        lVar1 = *(longlong *)(lVar1 + 0x340);
      }
      else if (param_2 == '\x02') {
        lVar1 = *(longlong *)(lVar1 + 0x348);
      }
      else if (param_2 == '\x03') {
        lVar1 = *(longlong *)(lVar1 + 0x350);
      }
      else {
        if (param_2 != '\x04') {
          return;
        }
        lVar1 = *(longlong *)(lVar1 + 0x358);
      }
      if (lVar1 != 0) {
        *(longlong *)(param_1 + 0x1c78) = lVar1;
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d12170 FUN_140d12170 body=329 status=ok
// SIG undefined FUN_140d12170(void)

void FUN_140d12170(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (param_2 != 0) {
    FUN_142dcf3a0(param_1,&local_28);
    if (local_28 != 0) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = FUN_140d3a420(uVar6);
      if (lVar7 != 0) {
        local_18 = local_28;
        plStack_10 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
          UNLOCK();
        }
        FUN_140d4c580(lVar7,&local_18,param_2);
        plVar3 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_10 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_10)(plStack_10);
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
        lVar7 = FUN_1422312c0(param_1);
        if (lVar7 != 0) {
          lVar8 = FUN_14141f270();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            FUN_140bce120(lVar7);
          }
        }
      }
    }
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d122c0 FUN_140d122c0 body=240 status=ok
// SIG undefined FUN_140d122c0(void)

void FUN_140d122c0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined2 *local_18;
  int local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686e1f8) {
    _Init_thread_header(&DAT_14686e1f8);
    if (DAT_14686e1f8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_14686e1f0 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BrightnessCalibration.Enable");
      _Init_thread_footer(&DAT_14686e1f8);
    }
  }
  plVar1 = DAT_14686e1f0;
  uVar3 = 0;
  if (param_2 == 1) {
    uVar3 = 2;
  }
  else if (param_2 == 2) {
    uVar3 = 1;
  }
  FString::PrintfImpl(&local_18,&DAT_143f3edc0,uVar3);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x2000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d123b0 FUN_140d123b0 body=336 status=ok
// SIG undefined FUN_140d123b0(void)

void FUN_140d123b0(longlong param_1,undefined1 param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  
  if ((DAT_146b17150 != 0) && (plVar2 = (longlong *)FUN_142874ac0(), plVar2 != (longlong *)0x0)) {
    lVar3 = FUN_141424dd0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14247c070(plVar2,param_2,1000);
      fVar4 = *(float *)(param_1 + 0x1220);
      if ((*(float *)(param_1 + 0x1220) <= param_3) &&
         (fVar4 = *(float *)(param_1 + 0x1224), param_3 <= *(float *)(param_1 + 0x1224))) {
        fVar4 = param_3;
      }
      FUN_140ccf5e0(plVar2,fVar4);
      fVar4 = *(float *)(param_1 + 0x1234);
      if ((*(float *)(param_1 + 0x1234) <= param_4) &&
         (fVar4 = *(float *)(param_1 + 0x1238), param_4 <= *(float *)(param_1 + 0x1238))) {
        fVar4 = param_4;
      }
      FUN_140ccd5a0(plVar2,fVar4);
      fVar4 = *(float *)(param_1 + 0x123c);
      if ((*(float *)(param_1 + 0x123c) <= param_5) &&
         (fVar4 = *(float *)(param_1 + 0x1240), param_5 <= *(float *)(param_1 + 0x1240))) {
        fVar4 = param_5;
      }
      FUN_140ccd4f0(plVar2,fVar4);
      fVar4 = *(float *)(param_1 + 0x1228);
      if ((*(float *)(param_1 + 0x1228) <= param_6) &&
         (fVar4 = *(float *)(param_1 + 0x122c), param_6 <= *(float *)(param_1 + 0x122c))) {
        fVar4 = param_6;
      }
      FUN_140ccf6c0(plVar2,fVar4);
      (**(code **)(*plVar2 + 0x2b0))(plVar2);
    }
  }
  return;
}



// FUNCTION 140d12500 FUN_140d12500 body=20 status=ok
// SIG undefined FUN_140d12500(void)

void FUN_140d12500(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x1060) != param_2) {
    *(char *)(param_1 + 0x1060) = param_2;
    FUN_140ce9370();
    return;
  }
  return;
}



// FUNCTION 140d12520 FUN_140d12520 body=158 status=ok
// SIG undefined FUN_140d12520(void)

void FUN_140d12520(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar2 = FUN_141651650();
  if ((((cVar2 == '\0') && (cVar2 = APlayerController::IsPrimaryPlayer(param_1), cVar2 != '\0')) &&
      (cVar2 = (**(code **)(*param_1 + 0x768))(param_1), cVar2 != '\0')) &&
     ((lVar3 = FUN_140cff230(param_1), lVar3 != 0 && (lVar4 = FUN_1422312c0(param_1), lVar4 != 0))))
  {
    lVar5 = FUN_142e4e4a0();
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
      *(undefined1 *)(lVar4 + 200) = *(undefined1 *)(lVar3 + 0x43);
    }
  }
  return;
}



// FUNCTION 140d125c0 FUN_140d125c0 body=1184 status=ok
// SIG undefined FUN_140d125c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d125c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  longlong local_158 [3];
  longlong *plStack_140;
  undefined4 local_138;
  longlong local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *plStack_110;
  code *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  lVar12 = 0;
  local_138 = 0;
  lVar8 = FUN_142b45e90();
  uVar11 = *(undefined8 *)(lVar8 + 0x18);
  FUN_142dcf3a0(param_1,&local_128);
  if (local_128 == 0) {
    plVar9 = local_158 + 2;
    local_158[2] = 0;
    plStack_140 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    local_118 = local_128;
    plStack_110 = plStack_120;
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)FUN_142b4a990(uVar11,local_f8,&local_118);
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    lVar12 = *plVar9;
  }
  plVar4 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_140;
  if (bVar5) {
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_140 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_140)(plStack_140);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_140 + 8))(plStack_140,1);
        }
      }
    }
  }
  if (bVar6) {
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_f0 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  plVar9 = plStack_110;
  if ((bVar7) && (plStack_110 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_110 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0x18) != '\0')) {
    plVar10 = (longlong *)FUN_142b4adb0(lVar12,local_e8);
    plVar9 = *(longlong **)(*plVar10 + 0x10);
    lVar12 = *(longlong *)(*plVar10 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_e0 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    if (lVar12 != 0) {
      local_158[0] = 0;
      local_158[1] = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
      FGenericPlatformString::Memcpy(local_158[0],L"FetchMailDelay",0x1e);
      local_168 = 0x44610000;
      uVar14 = FUN_142afb1f0(lVar12,local_158,0x42700000,0);
      *(undefined4 *)(param_1 + 0xe6c) = uVar14;
      if (local_158[0] != 0) {
        FMemory::Free();
      }
    }
    fVar3 = *(float *)(param_1 + 0xe6c);
    if (0.0 < fVar3) {
      uStack_100 = 0;
      local_108 = FUN_140ceffc0;
      uVar11 = AActor::GetWorldTimerManager(param_1);
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      local_d8 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        plVar10[2] = (longlong)local_108;
        plVar10[3] = CONCAT44(uStack_fc,uStack_100);
        lVar12 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar12;
        *plVar10 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_c8 = 0;
      local_c0 = 0;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x30))(plVar10,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_160 = 0xbf800000;
      local_168 = CONCAT31(local_168._1_3_,1);
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar11,param_1 + 0xe70,&local_c8,fVar3);
      if (local_68 != 0) {
        plVar13 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar13 = local_78;
        }
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        local_d8 = (longlong *)FMemory::Realloc(plVar10,0,0);
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free(local_d8);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar12 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_120 + 1;
    lVar12 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plStack_120 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_120 + 8))(plStack_120,1);
      }
    }
  }
  return;
}



// FUNCTION 140d12a60 FUN_140d12a60 body=71 status=ok
// SIG undefined FUN_140d12a60(void)

void FUN_140d12a60(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_142ddb1e0();
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = FUN_1405e8ff0(uVar1);
  if (lVar2 != 0) {
    FUN_1405e5010(lVar2,param_2 != '\0');
  }
  return;
}



// FUNCTION 140d12ab0 FUN_140d12ab0 body=65 status=ok
// SIG undefined FUN_140d12ab0(void)

void FUN_140d12ab0(longlong param_1,char param_2)

{
  char local_res10 [24];
  
  FUN_142716ff0();
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xba8,local_res10);
  if (param_2 == '\0') {
    FUN_140cfb650(param_1);
  }
  return;
}



// FUNCTION 140d12b00 FUN_140d12b00 body=65 status=ok
// SIG undefined FUN_140d12b00(void)

void FUN_140d12b00(longlong *param_1,undefined8 param_2,char param_3)

{
  FUN_1423df2a0();
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0x838))(param_1,param_2);
  }
  return;
}



// FUNCTION 140d12b50 FUN_140d12b50 body=254 status=ok
// SIG undefined FUN_140d12b50(void)

void FUN_140d12b50(longlong param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_140cff230();
  if (lVar4 != 0) {
    fVar1 = *(float *)(param_1 + 0x1454);
    fVar2 = *(float *)(param_1 + 0x1450);
    if (*(char *)(lVar4 + 0x40) == '\0') {
      lVar4 = FUN_14178ca30(param_1);
      if (lVar4 != 0) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          *(undefined8 *)(param_1 + 0x1450) = *(undefined8 *)(lVar4 + 0x1450);
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1450) = 0x3f000000;
      *(undefined4 *)(param_1 + 0x1454) = 0x3f000000;
    }
    if ((fVar2 == *(float *)(param_1 + 0x1450)) && (fVar1 == *(float *)(param_1 + 0x1454))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x8e0);
    }
    if (*(char *)(param_1 + 0x128) != '\x03') {
      FUN_141460d40(param_1,*(undefined8 *)(param_1 + 0x1450));
      return;
    }
  }
  return;
}



// FUNCTION 140d12c50 FUN_140d12c50 body=161 status=ok
// SIG undefined FUN_140d12c50(void)

void FUN_140d12c50(longlong *param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  bool bVar2;
  
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  if (param_2 == param_1[0x30a]) {
    return;
  }
  if (param_1[0x30a] == 0) {
    if (param_2 == 0) goto LAB_140d12cb2;
    if (param_1[0x132] == 0) {
      return;
    }
    if (2 < *(byte *)(param_1[0x132] + 0xec0)) {
      return;
    }
    bVar2 = param_1[0x109] == param_1[0x91];
  }
  else {
    bVar2 = param_2 == 0;
  }
  if (!bVar2) {
    return;
  }
LAB_140d12cb2:
  cVar1 = (**(code **)(*param_1 + 0x768))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x1300))(param_1,param_2,param_3);
  }
  FUN_14145e450(param_1,param_2,param_3);
  return;
}



// FUNCTION 140d12d00 FUN_140d12d00 body=124 status=ok
// SIG undefined FUN_140d12d00(void)

void FUN_140d12d00(longlong *param_1,uint param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  
  if (param_3 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x292) & ~param_2;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x292) | param_2;
  }
  *(uint *)(param_1 + 0x292) = uVar2;
  if (((param_2 >> 0x13 & 1) != 0) && ((char)param_1[0x25] == '\x03')) {
    if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0) &&
       (cVar1 = (**(code **)(*param_1 + 0x768))(param_1), cVar1 != '\0')) {
      return;
    }
    FUN_14145e4a0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140d12d80 FUN_140d12d80 body=143 status=ok
// SIG undefined FUN_140d12d80(void)

void FUN_140d12d80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((((char)param_1[0x299] == '\0') && (lVar1 = FUN_140cff230(), lVar1 != 0)) &&
      (param_1[0xa5] != 0)) &&
     (((lVar2 = (**(code **)(*param_1 + 0x148))(param_1), lVar2 != 0 &&
       (lVar2 = (**(code **)(*param_1 + 0x148))(param_1), (*(byte *)(lVar2 + 0x830) & 4) == 0)) &&
      (*(undefined4 *)(param_1[0xa5] + 0x470) = *(undefined4 *)(lVar1 + 0x6c),
      (char)param_1[0x25] != '\x03')))) {
    FUN_141460d80(param_1,*(undefined4 *)(param_1[0xa5] + 0x470));
  }
  return;
}



// FUNCTION 140d12e10 FUN_140d12e10 body=60 status=ok
// SIG undefined FUN_140d12e10(void)

void FUN_140d12e10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0xaa9) = *(undefined1 *)(lVar1 + 0x180);
    if (*(char *)(param_1 + 0x128) != '\x03') {
      FUN_141460b80(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140d12e50 FUN_140d12e50 body=45 status=ok
// SIG undefined FUN_140d12e50(void)

void FUN_140d12e50(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 != '\0') {
    FUN_142dafbc0();
    return;
  }
  FUN_142dbb5d0(param_1 + 0x1560,local_res18);
  return;
}



// FUNCTION 140d12e80 FUN_140d12e80 body=35 status=ok
// SIG undefined FUN_140d12e80(void)

void FUN_140d12e80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x6cc) = *(undefined1 *)(lVar1 + 0x32);
  }
  return;
}



// FUNCTION 140d12eb0 FUN_140d12eb0 body=350 status=ok
// SIG undefined FUN_140d12eb0(void)

void FUN_140d12eb0(longlong param_1,byte param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686e268) {
    _Init_thread_header(&DAT_14686e268);
    if (DAT_14686e268 == -1) {
      FName::FName(&DAT_14686e260,L"FastTravel",1);
      _Init_thread_footer(&DAT_14686e268);
    }
  }
  local_res8 = DAT_14686e260;
  if (param_2 == 0) {
    FUN_142dbb5d0(param_1 + 0xf30,&local_res8);
    FUN_140cfb650(param_1);
  }
  else {
    FUN_142dafbc0();
  }
  local_res8 = DAT_14686e260;
  if (param_2 == 0) {
    FUN_142dbb5d0(param_1 + 0x1560,&local_res8);
  }
  else {
    FUN_142dafbc0();
  }
  if ((*(char *)(param_1 + 0x128) == '\x03') && (lVar1 = *(longlong *)(param_1 + 0x848), lVar1 != 0)
     ) {
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
      if (param_2 == 0) {
        FUN_142d8f4f0(lVar1,DAT_14686e260);
      }
      else {
        FUN_142d8ec30();
      }
      FUN_142d8efe0(lVar1,DAT_14686e260,param_2 ^ 1);
    }
  }
  return;
}



// FUNCTION 140d13010 FUN_140d13010 body=82 status=ok
// SIG undefined FUN_140d13010(void)

void FUN_140d13010(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = UFGPoleDescriptor::GetPrivateStaticClass();
    uVar1 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    *(undefined8 *)(param_1 + 0x14c0) = uVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x14c0) = 0;
  return;
}



// FUNCTION 140d13070 FUN_140d13070 body=297 status=ok
// SIG undefined FUN_140d13070(void)

void FUN_140d13070(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_48;
  longlong *local_40;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  FUN_142dcf3a0(param_1,&local_48);
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar6 = FUN_140d3a420(uVar5);
  if ((local_48 != 0) && (lVar6 != 0)) {
    local_30 = local_48;
    local_28 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    local_20 = 0;
    local_18 = 0;
    local_38 = &PTR_FUN_143f740c8;
    FUN_140d4c9b0(lVar6,&local_38,param_2);
    local_38 = &PTR_FUN_143f740c8;
    if (local_20 != 0) {
      FMemory::Free();
    }
    plVar3 = local_28;
    local_38 = &PTR_FUN_143f73d18;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_28)(local_28);
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
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140d131a0 FUN_140d131a0 body=35 status=ok
// SIG undefined FUN_140d131a0(void)

void FUN_140d131a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x908) = *(undefined1 *)(lVar1 + 0x34);
  }
  return;
}



// FUNCTION 140d131d0 FUN_140d131d0 body=499 status=ok
// SIG undefined FUN_140d131d0(void)

void FUN_140d131d0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 local_res18;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar10 = (longlong *)0x0;
  lVar6 = FUN_140cff230();
  if (DAT_146b17150 != 0) {
    plVar7 = (longlong *)FUN_142874ac0();
    if (plVar7 != (longlong *)0x0) {
      lVar8 = FUN_141424dd0();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) goto LAB_140d1323b;
    }
  }
  plVar7 = plVar10;
LAB_140d1323b:
  if ((lVar6 != 0) && (plVar7 != (longlong *)0x0)) {
    cVar5 = *(char *)(lVar6 + 0x6b);
    FUN_14247c360(plVar7,cVar5 == '\0');
    local_res18 = 0;
    plVar7 = (longlong *)FUN_1404b0000(&local_res18);
    bVar11 = plVar7 != (longlong *)0x0;
    if (bVar11) {
      puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0xa0))(plVar7,local_28);
      plVar10 = (longlong *)*puVar9;
    }
    else {
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      puVar9 = &local_38;
    }
    plVar7 = (longlong *)puVar9[1];
    puVar9[1] = 0;
    *puVar9 = 0;
    if (bVar11) {
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
    plVar1 = plStack_30;
    if ((!bVar11) && (plStack_30 != (longlong *)0x0)) {
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x48))(plVar10,-(cVar5 != '\0') & 2);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  return;
}



// FUNCTION 140d133d0 FUN_140d133d0 body=233 status=ok
// SIG undefined FUN_140d133d0(void)

void FUN_140d133d0(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res8;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    if ((char)param_1[0x1cd] != param_2) {
      TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x1c8,param_2);
    }
    *(char *)(param_1 + 0x1cd) = param_2;
    if (param_2 == '\0') {
      local_res8 = param_1[0x1ce];
      uVar2 = AActor::GetWorldTimerManager(param_1);
      lVar1 = FTimerManager::FindTimer(uVar2,&local_res8,0);
      if ((lVar1 == 0) || (*(char *)(lVar1 + 1) == '\x02')) {
        FUN_140d125c0(param_1);
        return;
      }
    }
    local_res8 = param_1[0x1ce];
    if (local_res8 != 0) {
      uVar2 = AActor::GetWorldTimerManager(param_1);
      lVar1 = FTimerManager::FindTimer(uVar2,&local_res8,0);
      if ((lVar1 != 0) && (*(char *)(lVar1 + 1) != '\x02')) {
        uVar2 = AActor::GetWorldTimerManager(param_1);
        FUN_142880530(uVar2,param_1 + 0x1ce);
        param_1[0x1ce] = 0;
      }
    }
  }
  return;
}



// FUNCTION 140d134c0 FUN_140d134c0 body=59 status=ok
// SIG undefined FUN_140d134c0(void)

void FUN_140d134c0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 != '\0') {
    FUN_142dafbc0();
    return;
  }
  FUN_142dbb5d0(param_1 + 0xf30,local_res18);
  FUN_140cfb650(param_1);
  return;
}



// FUNCTION 140d13500 FUN_140d13500 body=17 status=ok
// SIG undefined FUN_140d13500(void)

void FUN_140d13500(longlong param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uStackX_18;
  
  plVar1 = *(longlong **)(param_1 + 0xc50);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  uStackX_18 = param_3;
  if ((longlong *)plVar1[0x3c] != (longlong *)0x0) {
    cVar2 = (**(code **)(*(longlong *)plVar1[0x3c] + 0x768))();
    if (cVar2 != '\0') {
      if (param_2 == '\0') {
        FUN_142dbb5d0(plVar1 + 0x75,&uStackX_18);
      }
      else {
        FUN_142dafbc0();
      }
    }
  }
  iVar4 = FUN_14233f450(plVar1);
  if (iVar4 == 3) {
    cVar2 = FUN_1407c3030(plVar1 + 0x88);
    if (param_2 == '\0') {
      FUN_142dbb5d0(plVar1 + 0x88,&uStackX_18);
    }
    else {
      FUN_142dafbc0();
    }
    cVar3 = FUN_1407c3030(plVar1 + 0x88);
    if ((cVar2 != cVar3) && (plVar1[0x23] != 0)) {
      (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x23] + 0x600))();
    }
  }
  return;
}



// FUNCTION 140d13520 FUN_140d13520 body=763 status=ok
// SIG undefined FUN_140d13520(void)

void FUN_140d13520(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_80;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  lVar9 = *(longlong *)(param_1 + 0x508);
  *(char *)(param_1 + 0xaa8) = param_2;
  if (lVar9 == 0) {
LAB_140d135c7:
    plVar10 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    local_80 = (longlong *)0x0;
    lVar9 = 0;
  }
  else {
    lVar8 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d135c7;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    lVar9 = FUN_142547b50(lVar9,local_48);
    plVar10 = *(longlong **)(lVar9 + 0x10);
    lVar9 = *(longlong *)(lVar9 + 8);
    local_70 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if ((bVar5) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_80 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if ((bVar6) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (bVar7) {
    local_48[0] = &PTR_FUN_143f740c8;
    if (local_30 != 0) {
      FMemory::Free();
    }
    local_48[0] = &PTR_FUN_143f73d18;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  }
  lVar8 = FUN_1422312c0(param_1);
  if (lVar8 != 0) {
    lVar11 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140d1371d;
  }
  lVar8 = 0;
LAB_140d1371d:
  if ((lVar9 != 0) && (lVar8 != 0)) {
    local_98 = (undefined4)lVar9;
    uStack_94 = (undefined4)((ulonglong)lVar9 >> 0x20);
    uStack_90 = SUB84(plVar10,0);
    uStack_8c = (undefined4)((ulonglong)plVar10 >> 0x20);
    if (param_2 != '\0') {
      local_68 = local_98;
      uStack_64 = uStack_94;
      uStack_60 = uStack_90;
      uStack_5c = uStack_8c;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      uVar12 = FUN_140bb7220(lVar8);
      FUN_140d6bec0(uVar12,&local_68);
      plVar4 = (longlong *)CONCAT44(uStack_5c,uStack_60);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
    local_58 = local_98;
    uStack_54 = uStack_94;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    uVar12 = FUN_140bb7440(lVar8);
    FUN_140d9f870(uVar12,&local_58,0xf);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 140d13830 FUN_140d13830 body=45 status=ok
// SIG undefined FUN_140d13830(void)

void FUN_140d13830(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 != '\0') {
    FUN_142dafbc0();
    return;
  }
  FUN_142dbb5d0(param_1 + 0xfc8,local_res18);
  return;
}



// FUNCTION 140d13860 FUN_140d13860 body=41 status=ok
// SIG undefined FUN_140d13860(void)

void FUN_140d13860(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x14a0) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x1814) = 1;
  *(undefined8 *)(param_1 + 0x1818) = *param_2;
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x8e0);
  return;
}



// FUNCTION 140d13890 FUN_140d13890 body=547 status=ok
// SIG undefined FUN_140d13890(void)

void FUN_140d13890(undefined8 param_1,longlong param_2,undefined1 param_3)

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
  
  AActor::SetTickableWhenPaused(param_2,param_3);
  uStack_84 = 1;
  plVar2 = (longlong *)(param_2 + 0x2b0);
  uVar3 = *(uint *)(param_2 + 0x2d8);
  puVar1 = (uint *)(param_2 + 0x2c0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_2 + 0x2d0);
    if (*(uint **)(param_2 + 0x2d0) == (uint *)0x0) {
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
      if (bVar5) goto LAB_140d1397d;
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
LAB_140d1397d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x2d8);
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
    puVar10 = *(uint **)(param_2 + 0x2d0);
    if (*(uint **)(param_2 + 0x2d0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140d13a43;
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
LAB_140d13a43:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar8 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar8 != 0) {
      UActorComponent::SetTickableWhenPaused(lVar8,param_3);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 140d13ac0 FUN_140d13ac0 body=1118 status=ok
// SIG undefined FUN_140d13ac0(void)

void FUN_140d13ac0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  uint uVar12;
  undefined8 local_res8;
  longlong local_38;
  longlong local_30;
  
  pwVar11 = (wchar_t *)0x0;
  lVar8 = param_1[0x132];
  lVar9 = param_1[0x91];
  if (lVar8 != 0) {
    plVar7 = param_1 + 0x1e1;
    local_res8 = 0;
    if (((param_1[0x1e2] != 0) && (lVar4 = FWeakObjectPtr::Get(plVar7), lVar4 != 0)) &&
       (lVar4 = UObject::FindFunction(lVar4,param_1[0x1e2]), lVar4 != 0)) {
      lVar4 = param_1[0x132];
      TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar4 + 0xf18,plVar7);
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0xf18);
      FWeakObjectPtr::operator=(plVar7,0);
      local_res8 = 0;
      param_1[0x1e2] = 0;
    }
    if (param_2 != lVar8) {
      if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
         (cVar3 = (**(code **)(*param_1 + 0x768))(param_1), cVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (param_1[0x132] != 0)) {
        lVar4 = FUN_140c430a0(param_1[0x132],0);
        if ((lVar4 != 0) && (param_1[0x29c] != 0)) {
          TBaseMulticastDelegate<void>::Remove(lVar4 + 0x2c0,param_1[0x29c]);
        }
        plVar7 = (longlong *)param_1[0x132];
        uVar5 = FUN_1414aa4c0();
        lVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar5);
        if (lVar4 != 0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AOakPlayerController::OnLevelChanged",L"::");
          pwVar10 = pwVar11;
          while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
            pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar10 = pwVar2;
          }
          FName::FName(&local_res8,pwVar10 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x1b0,param_1,local_res8);
        }
      }
      if (*(int *)((longlong)param_1 + 0x1444) != 0) {
        (**(code **)(*(longlong *)(param_1[0x132] + 0xd88) + 0x108))
                  ((longlong *)(param_1[0x132] + 0xd88),DAT_14686e018,
                   *(int *)((longlong)param_1 + 0x1444),0);
      }
      if (*(char *)((longlong)param_1 + 0x1441) != '\0') {
        FUN_140c5e130(param_1[0x132],0,DAT_14686e018);
      }
    }
    FUN_140d13890(param_1,param_1[0x132],0);
    param_1[0x132] = 0;
  }
  FUN_142ddbfe0(param_1,param_2);
  pwVar10 = (wchar_t *)param_1[0x91];
  if (pwVar10 == (wchar_t *)0x0) {
LAB_140d13d03:
    pwVar10 = pwVar11;
  }
  else {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140d13d03;
  }
  param_1[0x132] = (longlong)pwVar10;
  pwVar10 = (wchar_t *)param_1[0x126];
  if (pwVar10 != (wchar_t *)0x0) {
    lVar4 = UCheckBoxWidgetStyle::StaticClass();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140d13d52;
  }
  pwVar10 = pwVar11;
LAB_140d13d52:
  param_1[0x133] = (longlong)pwVar10;
  FUN_140ce9370(param_1);
  if (param_1[0x91] != lVar9) {
    *(undefined4 *)(param_1 + 0x294) = 0xbf800000;
    FUN_140cf6690(param_1);
    FUN_140d0cbb0(param_1,lVar9,param_1[0x91]);
    local_38 = param_1[0x91];
    local_30 = lVar9;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x167,&local_38);
    *(undefined1 *)((longlong)param_1 + 0x1149) = 1;
  }
  if (param_1[0x132] != 0) {
    plVar7 = (longlong *)FName::FName(&local_res8,L"OnCharacterDied",1);
    FWeakObjectPtr::operator=(param_1 + 0x1e1,param_1);
    param_1[0x1e2] = *plVar7;
    FUN_1406a5aa0(param_1[0x132] + 0xf18,param_1 + 0x1e1);
    if ((*(longlong *)(param_1[0x132] + 0x10c0) != 0) && (param_1[0x286] != 0)) {
      FUN_142fc8b90();
      lVar9 = param_1[0x132];
      pwVar10 = pwVar11;
      if (0 < *(int *)(lVar9 + 0x10d0)) {
        do {
          if (*(longlong *)((longlong)pwVar11 + *(longlong *)(lVar9 + 0x10c8)) != 0) {
            FUN_142fc8b90(param_1[0x286]);
            lVar9 = param_1[0x132];
          }
          uVar12 = (int)pwVar10 + 1;
          pwVar11 = pwVar11 + 4;
          pwVar10 = (wchar_t *)(ulonglong)uVar12;
        } while ((int)uVar12 < *(int *)(lVar9 + 0x10d0));
      }
    }
    if (param_2 != lVar8) {
      FUN_140d0ce40(param_1);
      if (*(int *)((longlong)param_1 + 0x1444) != 0) {
        (**(code **)(*(longlong *)(param_1[0x132] + 0xd88) + 0x100))
                  ((longlong *)(param_1[0x132] + 0xd88),DAT_14686e018,
                   *(int *)((longlong)param_1 + 0x1444),1,0,0);
      }
      if (*(char *)((longlong)param_1 + 0x1441) != '\0') {
        FUN_140c5e130(param_1[0x132],1,DAT_14686e018);
      }
    }
  }
  lVar8 = FUN_140cff230(param_1);
  if (lVar8 != 0) {
    *(undefined4 *)((longlong)param_1 + 0xaf4) = *(undefined4 *)(lVar8 + 0x2f0);
  }
  return;
}



// FUNCTION 140d13f20 FUN_140d13f20 body=45 status=ok
// SIG undefined FUN_140d13f20(void)

void FUN_140d13f20(longlong param_1,longlong *param_2)

{
  FString::operator=(param_1 + 0xa78);
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140d13f50 FUN_140d13f50 body=65 status=ok
// SIG undefined FUN_140d13f50(void)

void FUN_140d13f50(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140cff230();
  if (lVar2 != 0) {
    cVar1 = FUN_142d84470(lVar2);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xc08))(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140d13fa0 FUN_140d13fa0 body=36 status=ok
// SIG undefined FUN_140d13fa0(void)

void FUN_140d13fa0(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  undefined8 local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1c60,&local_18);
  return;
}



// FUNCTION 140d13fd0 FUN_140d13fd0 body=30 status=ok
// SIG undefined FUN_140d13fd0(void)

void FUN_140d13fd0(longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x13e8,local_res10);
  return;
}



// FUNCTION 140d13ff0 FUN_140d13ff0 body=265 status=ok
// SIG undefined FUN_140d13ff0(void)

void FUN_140d13ff0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x768))();
  if ((cVar1 != '\0') && (cVar1 = APlayerController::IsPrimaryPlayer(param_1), cVar1 != '\0')) {
    lVar2 = FUN_1405c6c00();
    lVar3 = FUN_140cff230();
    if ((DAT_1468536c6 != '\0') || (lVar4 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
      lVar4 = 0;
    }
    if (((lVar3 != 0) && (lVar2 != 0)) && (lVar4 != 0)) {
      cVar1 = *(char *)(lVar3 + 0x68);
      if (cVar1 != '\0') {
        if (cVar1 == '\x02') {
          FUN_1405aa900(lVar4,3);
          return;
        }
        if (cVar1 == '\x03') {
          FUN_1405aa900(lVar4,4);
          return;
        }
        if (cVar1 == '\x04') {
          FUN_1405aa900(lVar4,2);
          return;
        }
        if (cVar1 == '\x05') {
          FUN_1405aa900(lVar4,5);
          return;
        }
        FUN_1405aa900(lVar4,0);
        return;
      }
      FUN_1405aa900(lVar4,1);
    }
  }
  return;
}



// FUNCTION 140d14100 FUN_140d14100 body=45 status=ok
// SIG undefined FUN_140d14100(void)

void FUN_140d14100(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if (lVar1 != 0) {
    FUN_141460e10(param_1,*(undefined1 *)(lVar1 + 0x252));
    return;
  }
  return;
}



// FUNCTION 140d14130 FUN_140d14130 body=161 status=ok
// SIG undefined FUN_140d14130(void)

void FUN_140d14130(longlong param_1,float param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  
  if ((DAT_146b17150 != 0) && (plVar2 = (longlong *)FUN_142874ac0(), plVar2 != (longlong *)0x0)) {
    lVar3 = FUN_141424dd0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      fVar4 = *(float *)(param_1 + 0x1218);
      if ((*(float *)(param_1 + 0x1218) <= param_2) &&
         (fVar4 = *(float *)(param_1 + 0x121c), param_2 <= *(float *)(param_1 + 0x121c))) {
        fVar4 = param_2;
      }
      FUN_140cd09e0(plVar2,fVar4);
      (**(code **)(*plVar2 + 0x2b0))(plVar2);
    }
  }
  return;
}



// FUNCTION 140d141e0 FUN_140d141e0 body=148 status=ok
// SIG undefined FUN_140d141e0(void)

void FUN_140d141e0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  lVar2 = FUN_140cfcaa0();
  lVar3 = FUN_140cfbfb0(param_1);
  if (lVar3 != 0) {
    cVar1 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar3);
    if (cVar1 != '\0') {
      *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(lVar3 + 0x50);
      *(undefined4 *)(lVar2 + 0x54) = *(undefined4 *)(lVar3 + 0x54);
      *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(lVar3 + 0x58);
      local_28 = *(undefined8 *)(lVar3 + 0x60);
      FString::FString(local_20,lVar3 + 0x68);
      FSoftObjectPath::operator=(lVar2 + 0x60,&local_28);
      *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(lVar3 + 0x78);
      *(undefined1 *)(lVar2 + 0x7c) = *(undefined1 *)(lVar3 + 0x7c);
    }
  }
  FUN_140d12170(param_1,lVar2);
  return;
}



// FUNCTION 140d14280 FUN_140d14280 body=144 status=ok
// SIG undefined FUN_140d14280(void)

void FUN_140d14280(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142ddcdb0();
  if (*(longlong *)(param_1 + 0xa90) != 0) {
    FUN_142f0df30(*(longlong *)(param_1 + 0xa90),(*(char *)(param_1 + 0x958) == '\0') + '\x01');
  }
  lVar3 = UWidgetComponent::GetRenderTarget(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_142f27b90();
    iVar1 = *(int *)(lVar4 + 0x90);
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_142f0def0(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                                   (*(char *)(param_1 + 0x958) == '\0') + '\x01'));
    }
  }
  return;
}



// FUNCTION 140d14310 FUN_140d14310 body=609 status=ok
// SIG undefined FUN_140d14310(void)

void FUN_140d14310(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  uint local_3c;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_48 = *param_3;
  local_44 = *(undefined1 *)(param_3 + 1);
  local_40 = param_3[2];
  local_3c = local_3c ^ (param_3[3] ^ local_3c) & 1;
  FUN_142718530(local_40,param_2,&local_48);
  lVar6 = *(longlong *)(param_1 + 0x460);
  if (lVar6 == 0) {
    return;
  }
  lVar5 = UInputKeySelector::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  plVar9 = (longlong *)0x0;
  if (*(char *)(lVar6 + 0x599) == '\0') {
    *(undefined8 *)(param_1 + 0xae8) = 0;
    return;
  }
  if (param_2 == (longlong *)0x0) {
LAB_140d14402:
    plVar7 = plVar9;
  }
  else {
    lVar6 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    plVar7 = param_2;
    if (!bVar3) goto LAB_140d14402;
  }
  *(longlong **)(param_1 + 0xae8) = plVar7;
  if (plVar7 != (longlong *)0x0) goto LAB_140d144a9;
  if (param_2 == (longlong *)0x0) {
LAB_140d14496:
    plVar7 = plVar9;
  }
  else {
    lVar6 = FUN_1413ffe00();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) ||
       (plVar7 = (longlong *)(**(code **)(*param_2 + 0x680))(param_2), plVar7 == (longlong *)0x0))
    goto LAB_140d14496;
    lVar6 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140d14496;
  }
  *(longlong **)(param_1 + 0xae8) = plVar7;
  if (plVar7 == (longlong *)0x0) {
    return;
  }
LAB_140d144a9:
  uVar8 = FUN_14270d290(plVar7,local_38);
  FText::FromString(local_28,uVar8);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (((*(int *)(param_1 + 0xae0) == 0) || (*(longlong **)(param_1 + 0xad8) == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0xad8) + 0x18))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if (*(int *)(param_1 + 0xae0) != 0) {
      plVar9 = *(longlong **)(param_1 + 0xad8);
    }
    (**(code **)(*plVar9 + 0x40))(plVar9,local_28);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_20 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
  return;
}



// FUNCTION 140d14580 FUN_140d14580 body=436 status=ok
// SIG undefined FUN_140d14580(void)

void FUN_140d14580(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  uint local_1c;
  longlong local_18;
  int local_10;
  
  plVar7 = (longlong *)0x0;
  uVar4 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar4,&local_18);
  while( true ) {
    if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar5 = plVar7;
    if (!bVar2) break;
    plVar5 = (longlong *)FWeakObjectPtr::Get();
    if (plVar5 == (longlong *)0x0) {
LAB_140d14645:
      plVar5 = (longlong *)0x0;
LAB_140d14647:
      bVar2 = false;
    }
    else {
      lVar6 = FUN_14145f370();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d14645;
      if ((((plVar5 == param_1) || (plVar5[0x91] == 0)) || (cVar3 = FUN_140cfdb70(), cVar3 != '\0'))
         || (plVar5[0x8c] == 0)) goto LAB_140d14647;
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = (longlong *)plVar5[0x109], plVar1 != (longlong *)0x0)) {
      lVar6 = FUN_1413ffe00();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (plVar1 != (longlong *)param_1[0x91])) &&
         (cVar3 = (**(code **)(*plVar1 + 0x950))(), cVar3 == '\0')) {
        if (param_1[0x15d] == plVar5[0x8c]) break;
        if (plVar7 == (longlong *)0x0) {
          plVar7 = plVar5;
        }
      }
    }
    local_10 = local_10 + 1;
  }
  if (plVar5 != (longlong *)0x0) {
    local_1c = local_1c & 0xfffffffe;
    local_28 = 0;
    local_20 = 0x40000000;
    local_24 = 1;
    (**(code **)(*param_1 + 0xe18))(param_1,plVar5[0x109],&local_28);
    FWeakObjectPtr::operator=(param_1 + 0x1a8,plVar5);
  }
  return;
}



// FUNCTION 140d14740 FUN_140d14740 body=313 status=ok
// SIG undefined FUN_140d14740(void)

void FUN_140d14740(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_68;
  undefined4 uStack_60;
  byte local_58;
  byte local_57;
  undefined1 local_56;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 local_18;
  
  FUN_142ddcdd0();
  if ((*(byte *)(param_1 + 0xd24) & 1) != 0) {
    uStack_60 = 0;
    local_68 = FUN_140d0c030;
    puVar4 = (undefined8 *)FName::FName(local_res8,"OakPC_QuickSave",1);
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    local_57 = local_57 & 0xfe;
    local_58 = local_58 & 0xfd | 1;
    local_50 = *puVar4;
    local_56 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=(local_28,0);
    local_20 = 0;
    local_18 = 0;
    FInputActionUnifiedDelegate::BindDelegate<AFlarePlayerController>(&local_48,param_1,&local_68);
    FUN_142360eb0(uVar1,&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  }
  lVar2 = *(longlong *)(param_1 + 0x938);
  if (lVar2 != 0) {
    lVar5 = FUN_1413e5500();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(longlong *)(param_1 + 0x11f8) = lVar2;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x11f8) = 0;
  return;
}



// FUNCTION 140d14880 FUN_140d14880 body=941 status=ok
// SIG undefined FUN_140d14880(void)

void FUN_140d14880(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  longlong *local_a8;
  int local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  code *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong *local_48;
  
  lVar13 = 0;
  local_res8[0] = 0;
  lVar9 = FUN_142b45e90();
  uVar3 = *(undefined8 *)(lVar9 + 0x18);
  FUN_142dcf3a0(param_1,&local_88);
  if (local_88 == 0) {
    plVar10 = &local_98;
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    local_78 = local_88;
    plStack_70 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
    }
    plVar10 = (longlong *)FUN_142b4a990(uVar3,local_58,&local_78);
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    lVar13 = *plVar10;
  }
  plVar4 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_90;
  if ((bVar5) && (plStack_90 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_90 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_50 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  plVar10 = plStack_70;
  if ((bVar7) && (plStack_70 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_70 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (lVar13 != 0) {
    uStack_60 = 0;
    local_68 = FUN_140d06ff0;
    plVar10 = (longlong *)(lVar13 + 0xd8);
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    local_48 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      plVar11[2] = (longlong)local_68;
      plVar11[3] = CONCAT44(uStack_5c,uStack_60);
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar9;
      *plVar11 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      (**(code **)(*plVar11 + 0x20))(plVar11,local_res8);
      iVar2 = *(int *)(lVar13 + 0xe0);
      *(int *)(lVar13 + 0xe0) = iVar2 + 1;
      if (*(int *)(lVar13 + 0xe4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
      }
      puVar12 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar10);
      *puVar12 = plVar11;
      *(undefined4 *)(puVar12 + 1) = 3;
    }
  }
  if (((((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0) &&
       (cVar8 = (**(code **)(*param_1 + 0x768))(param_1), cVar8 != '\0')) && (param_1[0x347] == 0))
     && (plVar10 = (longlong *)FUN_140cfc850(), plVar10 != (longlong *)0x0)) {
    uStack_60 = 0;
    local_a8 = (longlong *)0x0;
    local_68 = (code *)&LAB_140d0cdb0;
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    local_a0 = 3;
    local_a8 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      plVar11[2] = (longlong)local_68;
      plVar11[3] = CONCAT44(uStack_5c,uStack_60);
      lVar13 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar13;
      *plVar11 = (longlong)&PTR_FUN_143f77bd0;
    }
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,local_res10,&local_a8);
    param_1[0x347] = *plVar10;
    if (local_a0 != 0) {
      if (local_a8 == (longlong *)0x0) goto LAB_140d14ba1;
      (**(code **)(*local_a8 + 0x28))(local_a8,0);
      if (local_a8 != (longlong *)0x0) {
        local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
      }
      local_a0 = 0;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
  }
LAB_140d14ba1:
  FUN_140aa8e90(param_1 + 0x348);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_80 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plStack_80 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  return;
}



// FUNCTION 140d14c30 FUN_140d14c30 body=614 status=ok
// SIG undefined FUN_140d14c30(void)

void FUN_140d14c30(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 8) = 0xaff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_140d14de7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_140d14de7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 140d14ea0 FUN_140d14ea0 body=116 status=ok
// SIG undefined FUN_140d14ea0(void)

undefined1 FUN_140d14ea0(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1[0x91] != 0) {
    if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0) &&
       (cVar1 = (**(code **)(*param_1 + 0x768))(), cVar1 != '\0')) {
      return 1;
    }
    if (*(char *)((longlong)param_1 + 0x1289) != '\0') {
      return 1;
    }
  }
  lVar2 = FUN_140d00370(param_1,param_2);
  if (lVar2 == 0) {
    return 0;
  }
  return *(undefined1 *)(lVar2 + 0x6c);
}



// FUNCTION 140d14f20 FUN_140d14f20 body=44 status=ok
// SIG undefined FUN_140d14f20(void)

undefined1 FUN_140d14f20(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x1850) != 0)) {
    cVar1 = FUN_140ae3ab0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d14f50 FUN_140d14f50 body=52 status=ok
// SIG undefined FUN_140d14f50(void)

undefined1 FUN_140d14f50(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142ddd050();
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x1060) == '\0')) {
    cVar1 = FUN_140cfdb70(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140d14f90 FUN_140d14f90 body=333 status=ok
// SIG undefined FUN_140d14f90(void)

ulonglong FUN_140d14f90(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char extraout_AL;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined7 uVar7;
  undefined7 extraout_var;
  longlong local_18;
  uint local_10;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  plVar6 = *(longlong **)(uVar3 + 0x140);
  if (plVar6 != (longlong *)0x0) {
    lVar4 = FUN_1414bb9f0();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(plVar6[2] + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(plVar6[2] + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)uVar3 != '\0') {
      uVar3 = (**(code **)(*plVar6 + 0xa38))(plVar6);
      if ((char)uVar3 != '\0') {
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        UWorld::GetPlayerControllerIterator(uVar5,&local_18);
        while( true ) {
          uVar3 = (ulonglong)local_10;
          if (((int)local_10 < 0) || (*(int *)(local_18 + 8) <= (int)local_10)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) break;
          plVar6 = (longlong *)FWeakObjectPtr::Get();
          uVar7 = 0;
          if (plVar6 == (longlong *)0x0) {
LAB_140d150ae:
            bVar2 = false;
          }
          else {
            lVar4 = FUN_14145f370();
            uVar7 = (undefined7)((ulonglong)(lVar4 + 0x88) >> 8);
            if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
                lVar4 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (((!bVar2) || (plVar6 == param_1)) || (plVar6[0x91] == 0)) goto LAB_140d150ae;
            FUN_140cfdb70();
            uVar7 = extraout_var;
            if ((extraout_AL != '\0') || (plVar6[0x8c] == 0)) goto LAB_140d150ae;
            bVar2 = true;
          }
          if (bVar2) {
            return CONCAT71(uVar7,1);
          }
          local_10 = local_10 + 1;
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140d150e0 FUN_140d150e0 body=72 status=ok
// SIG undefined FUN_140d150e0(void)

undefined8 FUN_140d150e0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((char)param_1[0x20c] != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      cVar1 = FUN_14254a160(uVar3);
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 140d15130 FUN_140d15130 body=77 status=ok
// SIG undefined FUN_140d15130(void)

ulonglong FUN_140d15130(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if ((char)param_1[0x20c] != '\0') {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar3 = FUN_14254a160(uVar2);
      if ((char)uVar3 != '\0') {
        return uVar3 & 0xffffffffffffff00;
      }
    }
  }
  uVar3 = FUN_142ddd080(param_1);
  return uVar3;
}



// FUNCTION 140d15180 FUN_140d15180 body=58 status=ok
// SIG undefined FUN_140d15180(void)

undefined1 FUN_140d15180(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x1844) & 6) != 0) {
    return 0;
  }
  if (((*(char *)(param_1 + 0x1a04) != '\0') && (*(longlong *)(param_1 + 0xa90) != 0)) &&
     (lVar1 = FUN_140cdda60(), lVar1 != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 140d151c0 FUN_140d151c0 body=2984 status=ok
// SIG undefined FUN_140d151c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d151c0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 auStack_378 [32];
  undefined4 local_358;
  longlong *local_350;
  undefined4 local_348;
  ulonglong local_338;
  longlong *local_330;
  longlong *local_328;
  longlong *plStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  longlong local_308 [2];
  undefined4 *local_2f8;
  undefined4 *puStack_2f0;
  longlong *local_2e0;
  longlong *local_2d0;
  longlong *local_2c0;
  longlong *local_2b0;
  undefined8 local_2a8;
  longlong *plStack_2a0;
  undefined8 local_298;
  longlong local_290;
  longlong *local_288;
  longlong *plStack_280;
  undefined8 local_278;
  longlong local_270;
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  undefined1 local_120 [24];
  undefined4 local_108 [4];
  undefined1 local_f8 [24];
  undefined1 local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong local_90 [2];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  longlong local_30;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  plVar17 = (longlong *)0x0;
  local_338 = local_338 & 0xffffffff00000000;
  local_330 = param_1;
  lVar8 = (**(code **)(*param_1 + 0x148))();
  plVar9 = plVar17;
  if (lVar8 != 0) {
    plVar9 = (longlong *)UWorld::GetGameState<APVPGameState>(lVar8);
  }
  lVar8 = FUN_1422312c0(param_1);
  if (lVar8 == 0) {
LAB_140d1526e:
    local_338 = 0;
  }
  else {
    local_338 = lVar8;
    lVar10 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140d1526e;
  }
  lVar8 = 2;
  if ((plVar9 != (longlong *)0x0) &&
     (plVar15 = (longlong *)plVar9[0xab], plVar15 != (longlong *)0x0)) {
    lVar10 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plStack_320 = (longlong *)plVar15[0x98];
      bVar5 = true;
      bVar4 = false;
      local_328 = (longlong *)plVar15[0x97];
      local_2d0 = plStack_320;
      if (plStack_320 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_320 + 1) = (int)plStack_320[1] + 1;
        UNLOCK();
      }
      goto LAB_140d15306;
    }
  }
  bVar5 = false;
  bVar4 = true;
  local_2e0 = (longlong *)0x0;
  plStack_320 = plVar17;
  local_328 = plVar17;
  plVar15 = plVar17;
LAB_140d15306:
  plVar2 = local_2e0;
  if (plStack_320 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_320 + 1) = (int)plStack_320[1] + 1;
    UNLOCK();
  }
  if ((bVar4) && (local_2e0 != (longlong *)0x0)) {
    LOCK();
    plVar14 = local_2e0 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_2e0)(local_2e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_2e0 + 8))(local_2e0,1);
      }
    }
  }
  plVar2 = local_2d0;
  if ((bVar5) && (local_2d0 != (longlong *)0x0)) {
    LOCK();
    plVar14 = local_2d0 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_2d0 + 8))(local_2d0,1);
      }
    }
  }
  uVar16 = local_338;
  if ((local_328 != (longlong *)0x0) && (local_338 != 0)) {
    puVar11 = (undefined8 *)(**(code **)(*local_328 + 8))(local_328,local_268);
    cVar6 = FUN_140bcac80(uVar16,*puVar11);
    plVar2 = plStack_320;
    if (cVar6 == '\0') {
      if (plVar15 == (longlong *)0x0) {
        local_2b0 = (longlong *)0x0;
        bVar5 = false;
        bVar4 = true;
        plVar14 = plVar17;
        plVar15 = plVar17;
      }
      else {
        local_2c0 = (longlong *)plVar15[0xa8];
        plVar15 = (longlong *)plVar15[0xa7];
        if (local_2c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
          UNLOCK();
        }
        bVar5 = true;
        bVar4 = false;
        plVar14 = local_2c0;
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_318._0_4_ = SUB84(plVar15,0);
      local_48 = (undefined4)local_318;
      local_318._4_4_ = (undefined4)((ulonglong)plVar15 >> 0x20);
      uStack_44 = local_318._4_4_;
      uStack_310._0_4_ = SUB84(plVar14,0);
      uStack_40 = (undefined4)uStack_310;
      uStack_310._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
      uStack_3c = uStack_310._4_4_;
      local_318 = local_328;
      uStack_310 = plStack_320;
      local_328 = plVar15;
      if (plStack_320 != (longlong *)0x0) {
        LOCK();
        plVar15 = plStack_320 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          puVar11 = (undefined8 *)*plStack_320;
          plStack_320 = plVar14;
          (*(code *)*puVar11)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = plStack_320;
          if (iVar3 == 1) {
            (**(code **)(*uStack_310 + 8))(uStack_310,1);
            plVar14 = plStack_320;
          }
        }
      }
      plStack_320 = plVar14;
      plVar15 = local_2b0;
      if ((bVar4) && (local_2b0 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_2b0 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_2b0)(local_2b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_2b0 + 8))(local_2b0,1);
          }
        }
      }
      plVar15 = local_2c0;
      uVar16 = local_338;
      if ((bVar5) && (local_2c0 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_2c0 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_2c0)(local_2c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          uVar16 = local_338;
          if (iVar3 == 1) {
            (**(code **)(*local_2c0 + 8))(local_2c0,1);
            uVar16 = local_338;
          }
        }
      }
    }
  }
  local_308[0] = 0;
  local_308[1] = 0;
  plVar15 = local_330;
  if ((plVar9 != (longlong *)0x0) && (uVar16 != 0)) {
    if ((*(char *)((longlong)plVar9 + 0x6c1) == '\0') &&
       (*(char *)((longlong)plVar9 + 0x6c2) != '\0')) {
      uVar7 = FUN_140cb6860(plVar9);
      plVar17 = (longlong *)(ulonglong)uVar7;
    }
    else {
      plVar17 = (longlong *)0xffffffff;
    }
    plVar15 = local_330;
    local_288 = local_328;
    plStack_280 = plStack_320;
    if (plStack_320 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_320 + 1) = (int)plStack_320[1] + 1;
      UNLOCK();
    }
    local_350 = local_308;
    local_348 = 0xbf800000;
    local_358 = CONCAT31(local_358._1_3_,1);
    FUN_140d7a1d0(*(undefined8 *)(uVar16 + 0x478),&local_288,local_330,0);
    plVar9 = plStack_280;
    if (plStack_280 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_280 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_280)(plStack_280);
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
  if (plVar15[0x285] != 0) {
    local_2a8 = 0;
    plStack_2a0 = (longlong *)0x0;
    lVar10 = FText::AsNumber(local_168,plVar17,0,&local_2a8);
    local_338 = lVar10;
    lVar12 = FText::FromString(local_150,local_308);
    local_330 = (longlong *)lVar12;
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_1d0,L"You joined {0}\'s level {1} game",L"GameJoinMessage",
                        L"GameJoinMsgSync");
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_178,uVar13);
    local_108[0] = 4;
    FText::FText(local_f8,lVar12);
    local_e0 = 1;
    local_d8 = 4;
    FText::FText(local_c8,lVar10);
    local_2f8 = local_108;
    local_b0 = 1;
    puStack_2f0 = local_a8;
    local_278 = *puVar11;
    local_270 = puVar11[1];
    if (local_270 != 0) {
      LOCK();
      *(int *)(local_270 + 8) = *(int *)(local_270 + 8) + 1;
      UNLOCK();
    }
    local_258 = local_2f8;
    uStack_250 = puStack_2f0;
    uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_248,&local_258);
    uVar13 = FText::Format(local_1e8,&local_278,uVar13);
    FText::FText(local_200,uVar13);
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1e0 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar1 = (int *)((longlong)local_1e0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_248);
    lVar10 = 2;
    plVar9 = local_90;
    do {
      lVar10 = lVar10 + -1;
      if ((char)plVar9[-4] != '\0') {
        *(undefined1 *)(plVar9 + -4) = 0;
        plVar17 = (longlong *)plVar9[-6];
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar17 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
      }
      plVar9 = plVar9 + -6;
    } while (lVar10 != 0);
    plVar9 = (longlong *)puVar11[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar9 + 1;
      lVar10 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    plVar9 = *(longlong **)((longlong)local_330 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar9 + 1;
      lVar10 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    plVar9 = *(longlong **)(local_338 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar9 + 1;
      lVar10 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1c8 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    plVar9 = plStack_2a0;
    if (plStack_2a0 != (longlong *)0x0) {
      LOCK();
      plVar17 = plStack_2a0 + 1;
      lVar10 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_2a0)(plStack_2a0);
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
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar10 + 0x38) < DAT_14686e218) {
      _Init_thread_header(&DAT_14686e218);
      if (DAT_14686e218 == -1) {
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (&DAT_14686e200,L"Enemies & loot scaled to your level",L"GameJoinMessage",
                   L"GameJoinSecondLine");
        atexit(FUN_143e51d70);
        _Init_thread_footer(&DAT_14686e218);
      }
    }
    if (*(int *)(lVar10 + 0x38) < DAT_14686e238) {
      _Init_thread_header(&DAT_14686e238);
      if (DAT_14686e238 == -1) {
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (&DAT_14686e220,L"Game Joined!",L"GameJoinMessage",L"GameJoinTitle");
        atexit(FUN_143e51940);
        _Init_thread_footer(&DAT_14686e238);
      }
    }
    plVar9 = (longlong *)FText::FText(local_138,&DAT_14686e200);
    local_330 = plVar9;
    lVar10 = FText::FText(local_120,local_200);
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_1a0,L"{0}\n{1}",L"GameJoinMessage",L"GameJoinDescriptionFormat");
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_188,uVar13);
    local_a8[0] = 4;
    FText::FText(local_98,lVar10);
    local_80 = 1;
    local_78 = 4;
    FText::FText(local_68,plVar9);
    local_2f8 = local_a8;
    local_50 = 1;
    puStack_2f0 = &local_48;
    local_298 = *puVar11;
    local_290 = puVar11[1];
    if (local_290 != 0) {
      LOCK();
      *(int *)(local_290 + 8) = *(int *)(local_290 + 8) + 1;
      UNLOCK();
    }
    local_238 = local_2f8;
    uStack_230 = puStack_2f0;
    uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_228,&local_238);
    uVar13 = FText::Format(local_1b8,&local_298,uVar13);
    FText::FText(local_218,uVar13);
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1b0 + 1;
      lVar12 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_228);
    plVar9 = &local_30;
    do {
      lVar8 = lVar8 + -1;
      if ((char)plVar9[-4] != '\0') {
        *(undefined1 *)(plVar9 + -4) = 0;
        plVar17 = (longlong *)plVar9[-6];
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar17 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
      }
      plVar9 = plVar9 + -6;
    } while (lVar8 != 0);
    plVar9 = (longlong *)puVar11[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar9 + 1;
      lVar8 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    plVar9 = *(longlong **)(lVar10 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar9 + 1;
      lVar8 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    plVar9 = (longlong *)local_330[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar9 + 1;
      lVar8 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_198 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar1 = (int *)((longlong)local_198 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
    local_358 = 0x40800000;
    plVar9 = (longlong *)FUN_1411db1a0(plVar15[0x285],local_260,&DAT_14686e220,local_218);
    plVar15[0x1e5] = *plVar9;
    *(undefined4 *)(plVar15 + 0x194) = 3;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_210 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)local_210 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1f8 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar1 = (int *)((longlong)local_1f8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1f8 + 8))(local_1f8,1);
        }
      }
    }
  }
  if (local_308[0] != 0) {
    FMemory::Free();
  }
  plVar9 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_320 + 1;
    lVar8 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_320)(plStack_320);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_320 + 8))(plStack_320,1);
      }
    }
  }
  return;
}



// FUNCTION 140d15d70 FUN_140d15d70 body=314 status=ok
// SIG undefined FUN_140d15d70(void)

void FUN_140d15d70(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (((*(char *)((longlong)param_1 + 0x1a04) != '\0') &&
      (cVar4 = (**(code **)(*param_1 + 0x768))(), cVar4 != '\0')) && (param_1[0x285] != 0)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_20,L"Loading Character",L"LateJoinLoadingMessages",L"LateJoinLoadingTitle");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_38,L"Please wait...",L"LateJoinLoadingMessages",L"LateJoinLoadingText");
    plVar5 = (longlong *)FUN_1411db4f0(param_1[0x285],local_res8,local_20,local_38,0x41f00000,0,2);
    param_1[0x342] = *plVar5;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_18 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar1 = (int *)((longlong)local_18 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d15eb0 FUN_140d15eb0 body=280 status=ok
// SIG undefined FUN_140d15eb0(void)

void FUN_140d15eb0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res18 [16];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if ((param_2 == '\0') && (*(longlong *)(param_1 + 0x1428) != 0)) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Trade completed successfully",L"TradeConfirmationMessage",
                       L"TradeSuccessfulDesc");
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Trade Successful",L"TradeConfirmationMessage",L"TradeSuccessful");
    FUN_1411db4f0(*(undefined8 *)(param_1 + 0x1428),local_res18,uVar6,uVar5,0x40a00000,0,2);
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
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d15fd0 FUN_140d15fd0 body=64 status=ok
// SIG undefined FUN_140d15fd0(void)

void FUN_140d15fd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x1428) != 0) {
    FUN_1411db4f0(*(longlong *)(param_1 + 0x1428),local_res8,param_2,param_3,0x40a00000,0,2);
  }
  return;
}



// FUNCTION 140d16010 FUN_140d16010 body=128 status=ok
// SIG undefined FUN_140d16010(void)

void FUN_140d16010(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if ((lVar1 != 0) && (param_3 != 0)) {
    FActorSpawnParameters::FActorSpawnParameters(local_38);
    local_28 = param_2;
    lVar1 = FUN_142550d00(lVar1,param_3,param_4,local_38);
    param_1[0x337] = lVar1;
  }
  return;
}



// FUNCTION 140d160b0 FUN_140d160b0 body=459 status=ok
// SIG undefined FUN_140d160b0(void)

void FUN_140d160b0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_142ddd1c0();
  lVar9 = param_1[0xa5];
  if (lVar9 != 0) {
    lVar5 = FUN_1414594e0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140d1610e;
  }
  lVar9 = 0;
LAB_140d1610e:
  param_1[0x286] = lVar9;
  if (lVar9 == 0) {
    return;
  }
  if (*(longlong *)(lVar9 + 0x2ca0) != 0) {
    *(bool *)(*(longlong *)(lVar9 + 0x2ca0) + 0x28) = (char)param_1[0x25] != '\x03';
    if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar4 = (**(code **)(*param_1 + 0x768))(param_1), cVar4 == '\0')) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    uStack_10 = 0;
    *(undefined1 *)(*(longlong *)(param_1[0x286] + 0x2ca0) + 0x29) = uVar8;
    lVar9 = *(longlong *)(param_1[0x286] + 0x2ca0);
    if ((char)param_1[0x25] == '\x03') {
      plVar1 = (longlong *)(lVar9 + 0x30);
      local_18 = (code *)&LAB_140d06ac0;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_18;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_18._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_10;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_c;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar5;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
        iVar2 = *(int *)(lVar9 + 0x38);
        *(int *)(lVar9 + 0x38) = iVar2 + 1;
        if (*(int *)(lVar9 + 0x3c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar7 = plVar6;
        *(undefined4 *)(puVar7 + 1) = 3;
        return;
      }
    }
    else {
      local_18 = FUN_140d041e0;
      uStack_10 = 0;
      TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                (lVar9 + 0x48,local_res8,param_1,&local_18);
    }
    return;
  }
  return;
}



// FUNCTION 140d16280 FUN_140d16280 body=355 status=ok
// SIG undefined FUN_140d16280(void)

void FUN_140d16280(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  ulonglong in_stack_ffffffffffffff98;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  longlong local_40 [3];
  
  if (*(longlong *)(param_1 + 0xc70) != 0) {
    cVar1 = FUN_1410cf140(param_3);
    if (cVar1 != '\0') {
      cVar1 = FUN_1410cf870(param_3);
      if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0xa90) != 0)) &&
         (*(int *)(*(longlong *)(param_1 + 0xa90) + 0x48) == 0)) {
        in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
        puVar2 = (undefined4 *)
                 FUN_1410caf30(param_3,local_res8,2,param_4 + 0x678,in_stack_ffffffffffffff98);
        in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
        puVar3 = (undefined4 *)
                 FUN_1410caf30(param_3,local_48,1,param_4 + 0x678,in_stack_ffffffffffffff98);
        puVar4 = (undefined4 *)
                 FUN_1410caf30(param_3,local_44,0,param_4 + 0x678,
                               in_stack_ffffffffffffff98 & 0xffffffffffffff00);
        uVar5 = FUN_1410cc700(param_3,local_40);
        uVar6 = FUN_1410cac90(param_3);
        FUN_141461150(param_1,param_2,uVar6,uVar5,param_4,*puVar4,*puVar3,*puVar2);
        if (local_40[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  FUN_140ac7ce0(param_3);
  return;
}



// FUNCTION 140d163f0 FUN_140d163f0 body=62 status=ok
// SIG undefined FUN_140d163f0(void)

void FUN_140d163f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc70) != 0) {
    FUN_140e927e0();
  }
  return;
}



// FUNCTION 140d16430 FUN_140d16430 body=225 status=ok
// SIG undefined FUN_140d16430(void)

longlong FUN_140d16430(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1422312c0();
  if (lVar3 == 0) {
LAB_140d16480:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140d16480;
  }
  if ((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) {
LAB_140d164a2:
    bVar1 = false;
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x768))(param_1);
    if (cVar2 == '\0') goto LAB_140d164a2;
    bVar1 = true;
  }
  if (bVar1) {
    if (lVar3 != 0) {
      cVar2 = FUN_140bca8a0(lVar3);
      if (cVar2 != '\0') goto LAB_140d164ff;
    }
    if (param_1[0x1aa] == 0) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
         (lVar3 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588), lVar3 != 0)) {
        lVar3 = FUN_1412d37f0(lVar3,param_1);
        param_1[0x1aa] = lVar3;
      }
    }
  }
LAB_140d164ff:
  return param_1[0x1aa];
}



// FUNCTION 140d16520 FUN_140d16520 body=896 status=ok
// SIG undefined FUN_140d16520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d16520(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar4 = param_1[0x8c];
  if (lVar4 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(lVar4 + 0x599) == '\0')) {
      *(undefined1 *)(lVar4 + 0x599) = 1;
      plVar5 = (longlong *)param_1[0x91];
      if (plVar5 != (longlong *)0x0) {
        lVar3 = FUN_1413ffe00();
        lVar4 = plVar5[2];
        if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_140c5e130(plVar5,CONCAT71((int7)((ulonglong)lVar4 >> 8),1),DAT_14686e050);
          (**(code **)(*plVar5 + 0x310))(plVar5,1);
          FUN_14223c460(plVar5,0);
          (**(code **)(plVar5[0x1b1] + 0x78))(plVar5 + 0x1b1,DAT_14686e050,1);
          lVar4 = FWeakObjectPtr::Get(param_1 + 0x8d);
          if (lVar4 != 0) {
            lVar4 = FWeakObjectPtr::Get(param_1 + 0x8d);
            lVar4 = *(longlong *)(lVar4 + 0x168);
            if (lVar4 == 0) {
              local_38 = _DAT_1468b5d90;
              local_30 = DAT_1468b5d98;
            }
            else {
              local_38 = *(code **)(lVar4 + 0x220);
              local_30 = *(undefined4 *)(lVar4 + 0x228);
            }
            local_28 = local_38;
            uStack_20 = local_30;
            FUN_14223c850(plVar5,&local_28,0,0,0);
          }
          FUN_140e36c20(plVar5,1);
        }
      }
      (**(code **)(*param_1 + 0x1780))(param_1);
      if (param_1[0x286] != 0) {
        FUN_142fccb00(param_1[0x286],param_1[0x1a7],0xbf800000,0);
        lVar4 = param_1[0x286];
        local_28 = FUN_140d03d80;
        uStack_20 = 0;
        plVar7 = (longlong *)(lVar4 + 0x2c80);
        plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)&PTR_FUN_144318a70;
          FWeakObjectPtr::operator=(plVar5 + 1,param_1);
          *(undefined4 *)(plVar5 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)plVar5 + 0x14) = local_28._4_4_;
          *(undefined4 *)(plVar5 + 3) = uStack_20;
          *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar5[5] = lVar3;
          *plVar5 = (longlong)&PTR_FUN_144318ab8;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
          (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
          iVar1 = *(int *)(lVar4 + 0x2c88);
          *(int *)(lVar4 + 0x2c88) = iVar1 + 1;
          if (*(int *)(lVar4 + 0x2c8c) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
          }
          lVar4 = *plVar7;
          *(longlong **)(lVar4 + (longlong)iVar1 * 0x10) = plVar5;
          *(undefined4 *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = 3;
        }
      }
      if ((char)param_1[0x25] == '\x03') {
        lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar4 != 0) {
          uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
          lVar4 = UWorld::GetGameState<APVPGameState>(uVar6);
          if ((lVar4 != 0) && (param_1[0x151] != 0)) {
            FUN_142ee4370(param_1);
            FUN_142f0e9c0(param_1[0x151],*(undefined8 *)(lVar4 + 0xa78));
            FUN_142f02570(param_1,*(undefined8 *)(lVar4 + 0xa80),0);
          }
        }
        if (*(longlong *)(param_1[0x132] + 0x10e0) != 0) {
          FUN_140ad0a50();
        }
      }
      FUN_140cee250(param_1);
      lVar4 = param_1[0x1a9];
      if (lVar4 != 0) {
        lVar3 = FUN_142956f50();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        lVar3 = 0;
        if (bVar2) {
          lVar3 = lVar4;
        }
        FUN_142713b70(param_1,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140d168a0 FUN_140d168a0 body=20 status=ok
// SIG undefined FUN_140d168a0(void)

void FUN_140d168a0(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_140e835d0(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 140d168c0 FUN_140d168c0 body=721 status=ok
// SIG undefined FUN_140d168c0(void)

void FUN_140d168c0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  wchar_t *_Source;
  undefined1 local_res10 [8];
  wchar_t *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [48];
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*param_2;
  }
  iVar10 = 0;
  if (iVar2 != 0) {
    iVar10 = iVar2 + -1;
  }
  local_88 = (wchar_t *)0x0;
  local_7c = 0;
  if (0x80 < iVar10) {
    iVar10 = 0x80;
  }
  local_80 = iVar10 + 1;
  if (iVar10 == 0) {
    local_80 = 0;
  }
  if ((0 < local_80) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0), pwVar5 = local_88, 0 < local_80))
  {
    wcsncpy(local_88,_Source,(longlong)iVar10);
    pwVar5[iVar10] = L'\0';
  }
  cVar6 = FUN_140ceea30(param_1,1);
  if ((cVar6 == '\0') || (cVar6 = FUN_140ce5980(param_1,&local_88), cVar6 == '\0'))
  goto LAB_140d16b52;
  lVar9 = *(longlong *)(param_1 + 0x508);
  if (lVar9 == 0) {
LAB_140d169c1:
    lVar9 = 0;
  }
  else {
    lVar7 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140d169c1;
  }
  puVar8 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
  FUN_140bbd560(&local_78,*puVar8);
  plVar11 = local_78;
  if ((lVar9 != 0) && (local_78 != (longlong *)0x0)) {
    lVar9 = FUN_142547b50(lVar9,local_48);
    plVar3 = *(longlong **)(lVar9 + 0x10);
    lVar9 = *(longlong *)(lVar9 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      plVar11 = local_78;
    }
    local_68 = lVar9;
    uStack_60 = plVar3;
    FUN_1404bf980(local_48);
    if (lVar9 != 0) {
      FString::ReplaceInline(&local_88,&DAT_1444dc7c4,L"&lt;",1);
      FString::ReplaceInline(&local_88,&DAT_1444dc80c,L"&gt;",1);
      local_58 = (undefined4)local_68;
      uStack_54 = local_68._4_4_;
      uStack_50 = (undefined4)uStack_60;
      uStack_4c = uStack_60._4_4_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        plVar11 = local_78;
      }
      (**(code **)(*plVar11 + 0xc0))(plVar11,&local_58,&local_88,DAT_1461fb7e0);
      plVar11 = (longlong *)CONCAT44(uStack_4c,uStack_50);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar11 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
    }
    plVar11 = uStack_60;
    if (uStack_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = uStack_60 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*uStack_60)(uStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*uStack_60 + 8))(uStack_60,1);
        }
      }
    }
  }
  plVar11 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
LAB_140d16b52:
  if (local_88 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d16ba0 FUN_140d16ba0 body=1184 status=ok
// SIG undefined FUN_140d16ba0(void)

void FUN_140d16ba0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_48;
  undefined8 local_40;
  
  fVar17 = (float)param_2;
  FUN_142dde9b0();
  if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
     (cVar3 = (**(code **)(*param_1 + 0x768))(param_1), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_140d16f11;
  lVar6 = FUN_140cff230(param_1);
  if (lVar6 == 0) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = *(char *)(lVar6 + 0x179);
  }
  bVar2 = false;
  iVar15 = 0;
  fVar18 = 0.0;
  if (cVar3 == '\0') {
    lVar6 = 0;
    if (param_1[0x132] != 0) {
      lVar6 = *(longlong *)(param_1[0x132] + 0xe68);
    }
    if ((lVar6 != 0) &&
       (fVar16 = (float)UCG2GameUserSettings::GetPhotoModeFilmGrain(lVar6),
       *(float *)(param_1 + 0x1a5) <= fVar16 && fVar16 != *(float *)(param_1 + 0x1a5))) {
      lVar12 = *(longlong *)(lVar6 + 0x2650);
      local_48._4_4_ = (float)((ulonglong)lVar12 >> 0x20);
      fVar16 = local_48._4_4_ * local_48._4_4_;
      local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(lVar6 + 0x2658));
      local_48 = lVar12;
      bVar2 = false;
      if (0.0 < (float)lVar12 * (float)lVar12 + fVar16) {
        bVar2 = true;
      }
    }
  }
  if ((char)param_1[0x1e4] == '\0') {
LAB_140d16ccb:
    if (bVar2) goto LAB_140d16cd0;
  }
  else {
    if (0.0 < *(float *)((longlong)param_1 + 0xd2c)) {
      lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar6 != 0) {
        lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        fVar18 = *(float *)(lVar6 + 0x790);
      }
      if (fVar18 < *(float *)((longlong)param_1 + 0xf24) + *(float *)((longlong)param_1 + 0xd2c))
      goto LAB_140d16ccb;
    }
LAB_140d16cd0:
    FUN_140d18e80(param_1,1);
  }
  FUN_140cf0490(param_1);
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((((*(char *)((longlong)param_1 + 0xa4c) != '\0') &&
       (((lVar6 == 0 || (0.5 <= *(float *)(lVar6 + 0x798) - *(float *)((longlong)param_1 + 0x1a2c)))
        && (*(char *)((longlong)param_1 + 0xa4d) == '\0')))) &&
      ((*(char *)((longlong)param_1 + 0xa4e) == '\0' && (param_1[0x91] != 0)))) &&
     ((2 < *(byte *)(param_1 + 0x25) ||
      (cVar3 = FUN_140e1cef0(param_1 + 0x137,param_1), cVar3 != '\0')))) {
    local_48 = 0;
    local_40 = 0;
    FUN_140d0dc60(param_1,&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
    *(undefined1 *)((longlong)param_1 + 0xa4c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xa51) != '\0') {
    FUN_140d1b4d0(param_1);
    *(undefined1 *)((longlong)param_1 + 0xa51) = 0;
  }
  iVar14 = (int)param_1[0x224] + -1;
  if (-1 < iVar14) {
    plVar1 = param_1 + 0x223;
    lVar13 = (longlong)iVar14 << 4;
    lVar12 = (longlong)(int)param_1[0x224] << 4;
    lVar6 = lVar13;
    do {
      lVar7 = *(longlong *)(*plVar1 + lVar13);
      if (lVar7 == 0) {
LAB_140d16e2e:
        lVar7 = *(longlong *)(*plVar1 + 8 + lVar13);
        if (lVar7 != 0) {
          FUN_142227350(lVar7,0,1);
        }
        iVar5 = (int)param_1[0x224];
        iVar9 = (iVar5 - iVar14) + -1;
        if (iVar9 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar6),(void *)(*plVar1 + lVar12),(longlong)iVar9 << 4);
          iVar5 = (int)param_1[0x224];
        }
        *(int *)(param_1 + 0x224) = iVar5 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
      }
      else {
        iVar5 = *(int *)(lVar7 + 0xc);
        lVar7 = 0;
        if (iVar5 < (int)DAT_1469e91c4) {
          uVar11 = iVar5 >> 0x1f & 0xffff;
          uVar4 = iVar5 + uVar11;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) goto LAB_140d16e2e;
      }
      lVar12 = lVar12 + -0x10;
      lVar6 = lVar6 + -0x10;
      lVar13 = lVar13 + -0x10;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  lVar6 = param_1[0x109];
  if (lVar6 != 0) {
    lVar12 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
        != lVar12 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_1[0x152] != 0) {
        iVar15 = *(int *)(param_1[0x152] + 0x48);
      }
      iVar14 = iVar15 + -1;
      if ((char)param_1[0x355] == '\0') {
        iVar14 = iVar15;
      }
      FUN_140e3b970(lVar6,iVar14);
    }
  }
LAB_140d16f11:
  if (param_1[0x152] != 0) {
    FUN_142f13950(param_1[0x152],param_2);
  }
  if (param_1[0x285] != 0) {
    FUN_1411fd950(param_1[0x285],param_2);
  }
  if ((char)param_1[0x25] == '\x03') {
    FUN_140d17d00(param_1,param_2);
  }
  FUN_140d17720(param_1);
  *(float *)((longlong)param_1 + 0x1914) = fVar17 + *(float *)((longlong)param_1 + 0x1914);
  *(float *)((longlong)param_1 + 0xeec) = fVar17 + *(float *)((longlong)param_1 + 0xeec);
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 400) != 0)) {
    uVar8 = UListView::OnItemSelectionChanged();
    thunk_FUN_140c29bc0(param_1 + 0x32f,uVar8,lVar6,fVar17);
  }
  if ((char)param_1[0x25] == '\x03') {
    FUN_140d00ec0(param_1,param_2);
  }
  lVar6 = FUN_14270bb10(param_1);
  if (((lVar6 != 0) &&
      (uVar10 = (ulonglong)(int)*(uint *)(lVar6 + 0x108), *(uint *)(lVar6 + 0x108) < 8)) &&
     ((&DAT_1468c2200)[uVar10] != '\0')) {
    if ((&DAT_1468c21f8)[uVar10] != '\0') {
      (**(code **)(*param_1 + 0xff8))(param_1,0);
      (**(code **)(*param_1 + 0xff8))(param_1,1);
    }
    if (7 < uVar10) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    (&DAT_1468c2200)[uVar10] = 0;
  }
  return;
}



// FUNCTION 140d17050 FUN_140d17050 body=1058 status=ok
// SIG undefined FUN_140d17050(void)

void FUN_140d17050(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined1 local_40 [40];
  
  FUN_142719be0();
  if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
     (cVar6 = (**(code **)(*param_1 + 0x768))(param_1), cVar6 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_140d173d3;
  if ((((char)param_1[0x158] != '\0') && (*(undefined1 *)(param_1 + 0x158) = 0, DAT_146299df0 != 0))
     && (lVar9 = FUN_1422312c0(param_1), lVar9 != 0)) {
    lVar10 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) && (cVar6 = FUN_140bc9f60(lVar9), cVar6 == '\0')) &&
       ((cVar6 = APlayerController::IsPrimaryPlayer(param_1), cVar6 != '\0' &&
        (lVar9 = FUN_1422312c0(param_1), lVar9 != 0)))) {
      lVar10 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (cVar6 = FUN_1411e7660(lVar9 + 0x7a0), cVar6 == '\0')) {
        FUN_140d00490(param_1);
      }
    }
  }
  lVar9 = 0;
  lVar10 = lVar9;
  if (param_1[0x132] != 0) {
    lVar10 = *(longlong *)(param_1[0x132] + 0x900);
  }
  if (lVar10 == 0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = FUN_142ccba90(lVar10 + 0x1950);
  }
  if (param_1[0x23f] == 0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = FUN_140e31d20();
  }
  if (param_1[0x18a] == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = FUN_142defe70();
  }
  if (((cVar6 == '\x01') || (cVar7 == '\x01')) || (cVar8 == '\x01')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (cVar6 == '\0') {
    lVar10 = lVar9;
  }
  param_1[0x221] = lVar10;
  lVar12 = lVar9;
  if (cVar7 != '\0') {
    lVar12 = param_1[0x23f];
  }
  param_1[0x220] = lVar12;
  if (cVar8 != '\0') {
    lVar9 = param_1[0x18a];
  }
  param_1[0x222] = lVar9;
  if ((bVar4) && (*(longlong *)(param_4 + 0x18) != 0)) {
    plVar11 = (longlong *)FUN_140cf7b20(local_40,0,2);
    lVar9 = *plVar11;
    FWeakObjectPtr::operator=(&local_50,param_1);
    *(undefined4 *)(lVar9 + 0x10) = local_50;
    *(undefined4 *)(lVar9 + 0x14) = local_4c;
    lVar9 = *plVar11;
    lVar5 = plVar11[2];
    lVar10 = plVar11[1];
    lVar12 = *(longlong *)(lVar9 + 0x20);
    piVar1 = (int *)(lVar12 + 0x48);
    if (lVar12 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140d14c30(lVar9,lVar10,(int)lVar5,1);
    if (lVar12 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    plVar11 = (longlong *)FTickFunction::GetCompletionHandle(param_4,&local_48);
    lVar9 = *plVar11;
    iVar3 = *(int *)(lVar9 + 0x40);
    *(int *)(lVar9 + 0x40) = iVar3 + 1;
    if (*(int *)(lVar9 + 0x44) < iVar3 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (lVar9 + 0x18,iVar3);
    }
    lVar10 = *(longlong *)(lVar9 + 0x38);
    if (*(longlong *)(lVar9 + 0x38) == 0) {
      lVar10 = lVar9 + 0x18;
    }
    plVar11 = (longlong *)(lVar10 + (longlong)iVar3 * 8);
    if (plVar11 == (longlong *)0x0) {
LAB_140d17313:
      if (lVar12 != 0) {
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle(lVar12);
        }
      }
    }
    else {
      *plVar11 = lVar12;
      if (lVar12 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        goto LAB_140d17313;
      }
    }
    if (local_48 != 0) {
      LOCK();
      piVar2 = (int *)(local_48 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (lVar12 != 0) {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle(lVar12);
      }
    }
  }
  else {
    if (lVar12 != 0) {
      thunk_FUN_140e1d340();
      lVar10 = param_1[0x221];
    }
    if (lVar10 != 0) {
      FUN_142cceb10(lVar10 + 0x1950);
    }
    if (param_1[0x222] != 0) {
      FUN_142df18e0();
    }
  }
  FUN_140d184a0(param_1,param_2);
  FUN_140d17480(param_1,param_2);
  FUN_140cf0770(param_1);
LAB_140d173d3:
  lVar9 = FUN_1422312c0(param_1);
  if (lVar9 != 0) {
    lVar10 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      cVar6 = FUN_140bc9f40(lVar9);
      if ((cVar6 != '\0') && (DAT_14686e16d == '\0')) {
        DAT_14686e16d = 1;
        *(undefined1 *)(param_1 + 0x105) = 0;
        return;
      }
      cVar6 = FUN_140bc9f40(lVar9);
      if ((cVar6 == '\0') && (DAT_14686e16d != '\0')) {
        DAT_14686e16c = 1;
        *(undefined1 *)(param_1 + 0x105) = 1;
      }
    }
  }
  return;
}



// FUNCTION 140d17480 FUN_140d17480 body=668 status=ok
// SIG undefined FUN_140d17480(void)

void FUN_140d17480(longlong *param_1,float param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_88;
  uint local_84;
  float local_78 [4];
  undefined1 local_68 [16];
  undefined1 local_58 [80];
  
  lVar3 = FUN_140cff230();
  if (((char)param_1[299] == '\0') || ((lVar3 != 0 && (*(char *)(lVar3 + 0x2eb) == '\0'))))
  goto LAB_140d176ed;
  (**(code **)(*param_1 + 0x7a8))(param_1,local_68,&local_88);
  plVar1 = (longlong *)param_1[0x91];
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (lVar3 = (**(code **)(*plVar1 + 0x6e8))(plVar1), lVar3 != 0)) &&
       (local_88 < 0.0)) {
      local_78[0] = 0.0;
      local_78[1] = 0.0;
      local_78[2] = 1.0;
      lVar3 = (**(code **)(*plVar1 + 0x6e8))(plVar1);
      pfVar4 = (float *)FVector::RotateAngleAxis
                                  (lVar3 + 0x18c,local_58,local_84 ^ 0x80000000,local_78);
      fVar7 = *pfVar4;
      fVar9 = SQRT(fVar7 * fVar7 + pfVar4[1] * pfVar4[1]);
      if ((0.0001 <= fVar9) && (*(float *)(param_1 + 0x357) <= fVar9)) {
        if (fVar7 < 0.0) {
          fVar7 = -fVar7;
        }
        fVar5 = _guard_xfg_dispatch_icall_nop(*(float *)((longlong)param_1 + 0x1aac) * 0.008722222);
        if (fVar7 / fVar9 < ABS(fVar5)) goto LAB_140d176ed;
        fVar7 = *(float *)(param_1 + 0x356);
        fVar9 = param_2 + *(float *)((longlong)param_1 + 0x1abc);
        *(float *)((longlong)param_1 + 0x1abc) = fVar9;
        if (fVar9 < fVar7) {
          return;
        }
        fVar5 = *(float *)((longlong)param_1 + 0x1ab4);
        fVar8 = fVar5 * *(float *)((longlong)param_1 + 0x1ac4);
        fVar6 = -local_88;
        local_78[0] = fVar5 * param_2;
        if (fVar6 <= fVar5 * param_2) {
          local_78[0] = fVar6;
        }
        if (fVar8 * 0.5 < fVar6) {
          if (*(float *)(param_1 + 0x358) + fVar7 <= fVar9) goto LAB_140d176bc;
          fVar5 = ((fVar9 - fVar7) / *(float *)(param_1 + 0x358)) * fVar5;
        }
        else {
          fVar5 = (-2.0 / fVar8) * local_88 * fVar5;
          if (fVar5 <= 1.0) {
            fVar5 = 1.0;
          }
        }
        local_78[0] = fVar5 * param_2;
LAB_140d176bc:
        local_78[1] = 0.0;
        local_78[2] = 0.0;
        FUN_142fc8fb0(param_1[0x286],local_78);
        return;
      }
      goto LAB_140d176ed;
    }
  }
  if (local_88 <= -0.0001) {
    return;
  }
LAB_140d176ed:
  *(undefined4 *)((longlong)param_1 + 0x1abc) = 0;
  return;
}



// FUNCTION 140d17720 FUN_140d17720 body=1490 status=ok
// SIG undefined FUN_140d17720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d17720(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *local_res10;
  int local_res18;
  undefined1 local_res20 [8];
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  float local_d4;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if (lVar6 != 0) {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = *(longlong *)(lVar6 + 0x148);
    if (lVar6 != 0) {
      lVar7 = FUN_141424d10();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar8 = (longlong *)FUN_140cb9b00(lVar6);
        local_res18 = (int)param_1[0x1c7];
        iVar16 = local_res18 + -1;
        if (-1 < iVar16) {
          plVar18 = param_1 + 0x1c6;
          lVar6 = (longlong)iVar16 * 8;
          lVar7 = lVar6;
          do {
            plVar12 = (longlong *)*plVar8;
            plVar1 = plVar12 + (int)plVar8[1];
            if (plVar12 != plVar1) {
              do {
                if (*plVar12 == *(longlong *)(lVar6 + *plVar18)) goto LAB_140d1789f;
                plVar12 = plVar12 + 1;
              } while (plVar12 != plVar1);
            }
            iVar13 = (int)param_1[0x1c7];
            iVar17 = (iVar13 - iVar16) + -1;
            if (0 < iVar17) {
              iVar17 = 1;
            }
            if (iVar17 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar18 + lVar7),
                         (void *)(*plVar18 + (longlong)(iVar13 - iVar17) * 8),(longlong)iVar17 << 3)
              ;
              iVar13 = (int)param_1[0x1c7];
            }
            *(int *)(param_1 + 0x1c7) = iVar13 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar18);
LAB_140d1789f:
            lVar7 = lVar7 + -8;
            lVar6 = lVar6 + -8;
            iVar16 = iVar16 + -1;
          } while (-1 < iVar16);
        }
        plVar18 = (longlong *)param_1[0x109];
        if (plVar18 == (longlong *)0x0) {
          puVar10 = &local_dc;
        }
        else {
          lVar6 = plVar18[0x2d];
          if (lVar6 == 0) {
            local_f8 = _DAT_1468b5d90;
            local_f0 = (float)DAT_1468b5d98;
          }
          else {
            local_f0 = (float)*(undefined4 *)(lVar6 + 0x228);
            local_f8 = *(undefined8 *)(lVar6 + 0x220);
          }
          local_e0 = local_f0;
          puVar10 = &local_e8;
          local_e8 = local_f8;
        }
        local_f8 = *puVar10;
        local_f0 = *(float *)(puVar10 + 1);
        if (plVar18 == (longlong *)0x0) {
          fVar21 = 0.0;
        }
        else {
          (**(code **)(*plVar18 + 0x578))(plVar18,&local_res10,local_res20);
          fVar21 = local_res10._0_4_;
        }
        fVar22 = 1.5;
        fVar23 = 500.0;
        lVar6 = (**(code **)(param_1[0x130] + 0x10))();
        if (lVar6 != 0) {
          lVar7 = FUN_1414d9130();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            fVar22 = *(float *)(lVar6 + 0xeb8);
            fVar23 = *(float *)(lVar6 + 0xebc);
          }
        }
        fVar5 = local_f0;
        plVar18 = (longlong *)*plVar8;
        plVar8 = plVar18 + (int)plVar8[1];
        local_res10 = plVar8;
        if (plVar18 != plVar8) {
          fVar4 = local_f8._4_4_;
          fVar3 = (float)local_f8;
          do {
            lVar6 = *plVar18;
            if (lVar6 != 0) {
              lVar7 = *(longlong *)(lVar6 + 0x118);
              if (lVar7 != 0) {
                lVar9 = FUN_1413ffe00();
                lVar7 = *(longlong *)(lVar7 + 0x10);
                if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                    lVar9 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (((bVar2) &&
                    (lVar7 = *(longlong *)(lVar6 + 0x118),
                    lVar9 = (**(code **)(*param_1 + 0x678))(param_1), lVar7 != lVar9)) &&
                   ((param_1[0x124] == 0 ||
                    (iVar16 = FUN_142dec940(param_1[0x124],lVar6), iVar16 != 2))))
                goto LAB_140d17c36;
              }
              lVar7 = *(longlong *)(lVar6 + 0x168);
              if (lVar7 == 0) {
                local_e0 = DAT_1468b5d98;
                puVar10 = &local_e8;
                local_e8 = _DAT_1468b5d90;
              }
              else {
                puVar10 = &local_f8;
                local_f0 = *(float *)(lVar7 + 0x228);
                local_f8 = *(undefined8 *)(lVar7 + 0x220);
              }
              plVar1 = param_1 + 0x1c6;
              local_d4 = *(float *)(puVar10 + 1);
              fVar20 = (float)*puVar10 - fVar3;
              fVar19 = (float)((ulonglong)*puVar10 >> 0x20) - fVar4;
              fVar19 = SQRT(fVar20 * fVar20 + fVar19 * fVar19 +
                            (local_d4 - fVar5) * (local_d4 - fVar5)) - fVar21;
              if (fVar19 <= 0.0) {
                fVar19 = 0.0;
              }
              fVar20 = (float)FUN_1409d4e20(lVar6);
              if (fVar20 <= fVar23) {
                fVar20 = fVar23;
              }
              if (fVar20 * fVar22 < fVar19) {
                iVar16 = (int)param_1[0x1c7];
                uVar14 = 0;
                uVar15 = 0;
                if (0 < iVar16) {
                  do {
                    iVar13 = (int)uVar14;
                    lVar7 = *plVar1;
                    if (*(longlong *)(uVar15 + lVar7) == lVar6) {
                      iVar17 = (iVar16 - iVar13) + -1;
                      if (0 < iVar17) {
                        iVar17 = 1;
                      }
                      if (iVar17 != 0) {
                        _guard_xfg_dispatch_icall_nop
                                  ((void *)(lVar7 + (longlong)iVar13 * 8),
                                   (void *)(lVar7 + (longlong)(iVar16 - iVar17) * 8),
                                   (longlong)iVar17 << 3);
                        iVar16 = (int)param_1[0x1c7];
                      }
                      *(int *)(param_1 + 0x1c7) = iVar16 + -1;
                      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
                      iVar13 = iVar13 + -1;
                      uVar15 = uVar15 - 8;
                    }
                    iVar16 = (int)param_1[0x1c7];
                    uVar14 = (ulonglong)(iVar13 + 1U);
                    plVar8 = local_res10;
                    uVar15 = uVar15 + 8;
                  } while ((int)(iVar13 + 1U) < iVar16);
                }
              }
              else {
                plVar12 = (longlong *)*plVar1;
                iVar16 = (int)param_1[0x1c7];
                for (plVar11 = plVar12; plVar11 != plVar12 + iVar16; plVar11 = plVar11 + 1) {
                  if (*plVar11 == lVar6) {
                    if ((int)((longlong)plVar11 - (longlong)plVar12 >> 3) != -1) goto LAB_140d17c36;
                    break;
                  }
                }
                *(int *)(param_1 + 0x1c7) = iVar16 + 1;
                if (*(int *)((longlong)param_1 + 0xe3c) < iVar16 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar16);
                }
                *(longlong *)(*plVar1 + (longlong)iVar16 * 8) = lVar6;
              }
            }
LAB_140d17c36:
            plVar18 = plVar18 + 1;
          } while (plVar18 != plVar8);
        }
        if ((local_res18 == 0) != ((int)param_1[0x1c7] == 0)) {
          plVar8 = param_1 + 0x179;
          if (local_res18 != 0) {
            plVar8 = param_1 + 0x17b;
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar8,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d17d00 FUN_140d17d00 body=1938 status=ok
// SIG undefined FUN_140d17d00(void)

void FUN_140d17d00(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong local_res8;
  int local_res10;
  longlong local_res18;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130 [2];
  longlong local_120 [2];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [72];
  
  param_2 = param_2 + *(float *)(param_1 + 0x1c3c);
  *(float *)(param_1 + 0x1c3c) = param_2;
  if (param_2 < *(float *)(param_1 + 0x1c38)) {
    return;
  }
  if (*(longlong *)(param_1 + 0x990) == 0) {
    return;
  }
  local_res18 = (**(code **)(*(longlong *)(param_1 + 0x980) + 0x10))();
  uVar11 = 0;
  if (local_res18 == 0) {
LAB_140d17db3:
    local_res18 = 0;
  }
  else {
    lVar6 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(local_res18 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res18 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d17db3;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 0xe0);
  if (lVar6 != 0) {
    lVar12 = lVar6 + 0x120;
    lVar7 = FWeakObjectPtr::Get(lVar12);
    if (lVar7 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar6 + 0x128)) && (*(longlong *)(lVar6 + 0x130) != 0)) {
        lVar7 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar12,lVar7);
        if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar6 + 0x128) = DAT_1464b56f4;
        }
        lVar7 = FWeakObjectPtr::Get(lVar12);
        if (lVar7 != 0) goto LAB_140d17e63;
      }
    }
    else {
LAB_140d17e63:
      lVar8 = FUN_1414d02a0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        uVar9 = FWeakObjectPtr::Get(lVar12);
        if (uVar9 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar6 + 0x128)) && (*(longlong *)(lVar6 + 0x130) != 0)) {
            lVar7 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar12,lVar7);
            if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar6 + 0x128) = DAT_1464b56f4;
            }
            uVar9 = FWeakObjectPtr::Get(lVar12);
            if (uVar9 != 0) goto LAB_140d17f0f;
          }
        }
        else {
LAB_140d17f0f:
          lVar6 = FUN_1414d02a0();
          if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) goto LAB_140d17f48;
        }
      }
    }
  }
  uVar9 = uVar11;
LAB_140d17f48:
  plVar3 = *(longlong **)(param_1 + 0x990);
  local_1a0 = FUN_141477fa0();
  lVar6 = (**(code **)(*plVar3 + 0x628))(plVar3,local_1a0);
  uVar13 = 0xffffffff;
  iVar20 = 0;
  if ((uVar9 != 0) && (lVar6 != 0)) {
    iVar18 = 0;
    iVar19 = 0;
    local_res10 = -1;
    local_res8 = 0xffffffff;
    uVar16 = uVar11;
    uVar17 = uVar11;
    if (0 < *(int *)(uVar9 + 0x38)) {
      do {
        lVar7 = *(longlong *)(uVar9 + 0x30);
        local_198 = *(undefined8 *)(uVar17 + lVar7);
        FText::FText(local_190,lVar7 + 8 + uVar17);
        local_1e8 = *(undefined8 *)(uVar17 + 0x20 + lVar7);
        local_1e0 = *(undefined8 *)(param_1 + 0x990);
        local_170 = *(undefined8 *)(uVar17 + 0x28 + lVar7);
        local_1d8 = 1;
        local_178 = local_1e8;
        piVar10 = (int *)FUN_142dd6f80(local_a8,local_1e0,&local_1e8);
        plVar3 = local_188;
        iVar2 = piVar10[2];
        iVar4 = piVar10[3];
        iVar14 = (int)uVar16;
        if (0 < *piVar10) {
          iVar18 = iVar4;
          iVar19 = iVar2;
          local_res10 = iVar14;
          if (local_188 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_188 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_188)(local_188);
              LOCK();
              piVar10 = (int *)((longlong)local_188 + 0xc);
              iVar2 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_188 + 8))(local_188,1);
              }
            }
          }
          break;
        }
        if (local_188 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_188 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_188)(local_188);
            LOCK();
            piVar10 = (int *)((longlong)plVar3 + 0xc);
            iVar2 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        uVar16 = (ulonglong)(iVar14 + 1U);
        uVar17 = uVar17 + 0x30;
      } while ((int)(iVar14 + 1U) < *(int *)(uVar9 + 0x38));
    }
    uVar16 = uVar11;
    uVar17 = uVar11;
    if (0 < *(int *)(uVar9 + 0x48)) {
      do {
        lVar7 = *(longlong *)(uVar9 + 0x40);
        local_168 = *(undefined8 *)(uVar17 + lVar7);
        FText::FText(local_160,lVar7 + 8 + uVar17);
        local_1d0 = *(undefined8 *)(uVar17 + 0x20 + lVar7);
        local_1c8 = *(undefined8 *)(param_1 + 0x990);
        local_140 = *(undefined8 *)(uVar17 + 0x28 + lVar7);
        local_1c0 = 1;
        local_148 = local_1d0;
        piVar10 = (int *)FUN_142dd6f80(local_98,local_1c8,&local_1d0);
        plVar3 = local_158;
        if (0 < *piVar10) {
          local_res8 = uVar16;
          if (local_158 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_158 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_158)(local_158);
              LOCK();
              piVar10 = (int *)((longlong)local_158 + 0xc);
              iVar2 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_158 + 8))(local_158,1);
              }
            }
          }
          break;
        }
        if (local_158 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_158 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_158)(local_158);
            LOCK();
            piVar10 = (int *)((longlong)plVar3 + 0xc);
            iVar2 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        uVar17 = uVar17 + 0x30;
      } while ((int)uVar15 < *(int *)(uVar9 + 0x48));
    }
    FUN_140ebf610(lVar6 + 0x490,(undefined1)local_res10);
    FUN_140ec03c0(lVar6 + 0x490,local_res8 & 0xff);
    FUN_140ec06e0(lVar6 + 0x490,iVar19);
    FUN_140ec0700(lVar6 + 0x490,iVar18);
  }
  lVar7 = *(longlong *)(local_res18 + 0x1110);
  if ((lVar7 != 0) && (lVar6 != 0)) {
    iVar18 = 0;
    uVar9 = uVar11;
    if (0 < *(int *)(lVar7 + 0x38)) {
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        local_138 = *(undefined8 *)(uVar9 + lVar7);
        FString::FString(local_130,lVar7 + 8 + uVar9);
        FString::FString(local_120,lVar7 + 0x18 + uVar9);
        FText::FText(local_110,lVar7 + 0x28 + uVar9);
        FText::FText(local_f8,lVar7 + 0x40 + uVar9);
        FText::FText(local_e0,lVar7 + 0x58 + uVar9);
        local_c8 = *(undefined4 *)(uVar9 + 0x70 + lVar7);
        local_1b0 = *(undefined8 *)(param_1 + 0x990);
        local_1b8 = *(undefined8 *)(uVar9 + 0x78 + lVar7);
        local_b8 = *(undefined4 *)(uVar9 + 0x80 + lVar7);
        local_b0 = *(undefined8 *)(uVar9 + 0x88 + lVar7);
        local_1a8 = 1;
        local_c0 = local_1b8;
        piVar10 = (int *)FUN_142dd6f80(local_88,local_1b0,&local_1b8);
        plVar3 = local_d8;
        iVar19 = piVar10[2];
        iVar2 = piVar10[3];
        if (0 < *piVar10) {
          FUN_140ce28e0(&local_138);
          uVar13 = uVar11;
          iVar18 = iVar19;
          iVar20 = iVar2;
          break;
        }
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d8 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar10 = (int *)((longlong)plVar3 + 0xc);
            iVar19 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        plVar3 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_f0 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar10 = (int *)((longlong)plVar3 + 0xc);
            iVar19 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        plVar3 = local_108;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_108 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar10 = (int *)((longlong)plVar3 + 0xc);
            iVar19 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (local_120[0] != 0) {
          FMemory::Free();
        }
        if (local_130[0] != 0) {
          FMemory::Free();
        }
        lVar7 = *(longlong *)(local_res18 + 0x1110);
        uVar15 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar15;
        uVar9 = uVar9 + 0x90;
      } while ((int)uVar15 < *(int *)(lVar7 + 0x38));
    }
    FUN_140ebf610(lVar6 + 0x478,uVar13 & 0xff);
    FUN_140ec06e0(lVar6 + 0x478,iVar18);
    FUN_140ec0700(lVar6 + 0x478,iVar20);
  }
  *(float *)(param_1 + 0x1c38) = *(float *)(param_1 + 0x1c3c) + 1.0;
  return;
}



// FUNCTION 140d184a0 FUN_140d184a0 body=1348 status=ok
// SIG undefined FUN_140d184a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d184a0(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_res8 [2];
  float local_res18 [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  undefined8 uStack_e0;
  float *local_d8;
  undefined8 *puStack_d0;
  int *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  if (param_1[0x12f] != 0) {
    fVar1 = *(float *)(param_1 + 0x340);
    cVar5 = (**(code **)(*param_1 + 0x820))();
    if ((cVar5 == '\0') || (param_1[0x133] == 0)) {
      if (0.0 < fVar1) {
        *(undefined4 *)(param_1 + 0x340) = 0;
      }
    }
    else {
      (**(code **)(*param_1 + 0x7a8))(param_1,local_b8,local_a8);
      local_e8 = local_b8;
      local_res18[0] = 0.0;
      uStack_e0 = local_a8;
      local_res8[0] = 0;
      local_d8 = local_res18;
      local_68 = 0;
      puStack_d0 = &local_f8;
      local_c8 = local_res8;
      local_f8 = _DAT_1464aa6e0;
      uStack_f0 = _DAT_1464aa6e8;
      local_58 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x30,local_88);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_143f4d098;
        puVar6[1] = local_e8;
        puVar6[2] = uStack_e0;
        puVar6[3] = local_d8;
        puVar6[4] = puStack_d0;
        puVar6[5] = local_c8;
      }
      local_98[0] = &LAB_140cee950;
      FUN_140a632f0(param_1[0x133],local_98);
      if (0 < local_res8[0]) {
        fVar7 = *(float *)((longlong)param_1 + 0x19f4);
        fVar8 = 1.0 / (float)local_res8[0];
        fVar9 = fVar8 * (float)local_f8;
        local_f8._4_4_ = fVar8 * local_f8._4_4_;
        fVar8 = fVar8 * (float)uStack_f0;
        local_f8 = CONCAT44(local_f8._4_4_,fVar9);
        uStack_f0 = CONCAT44(*(float *)(param_1 + 0x340),fVar8);
        if (((fVar7 != fVar9) || (local_f8._4_4_ != *(float *)(param_1 + 0x33f))) ||
           (fVar8 != *(float *)((longlong)param_1 + 0x19fc))) {
          if ((*(float *)(param_1 + 0x340) == 0.0) ||
             (fVar2 = *(float *)(param_1 + 0x33e), fVar2 <= 0.0)) {
            *(undefined8 *)((longlong)param_1 + 0x19f4) = local_f8;
            *(undefined8 *)((longlong)param_1 + 0x19fc) = uStack_f0;
          }
          else {
            if (fVar9 <= fVar7) {
              if (fVar9 < fVar7) {
                fVar7 = fVar7 - param_2 / fVar2;
                if (fVar7 <= fVar9) {
                  fVar7 = fVar9;
                }
                *(float *)((longlong)param_1 + 0x19f4) = fVar7;
              }
            }
            else {
              fVar7 = param_2 / fVar2 + fVar7;
              if (fVar9 <= fVar7) {
                fVar7 = fVar9;
              }
              *(float *)((longlong)param_1 + 0x19f4) = fVar7;
            }
            fVar7 = *(float *)(param_1 + 0x33f);
            if (local_f8._4_4_ <= fVar7) {
              if (local_f8._4_4_ < fVar7) {
                fVar7 = fVar7 - param_2 / fVar2;
                if (fVar7 <= local_f8._4_4_) {
                  fVar7 = local_f8._4_4_;
                }
                *(float *)(param_1 + 0x33f) = fVar7;
              }
            }
            else {
              fVar7 = param_2 / fVar2 + fVar7;
              if (local_f8._4_4_ <= fVar7) {
                fVar7 = local_f8._4_4_;
              }
              *(float *)(param_1 + 0x33f) = fVar7;
            }
            fVar7 = *(float *)((longlong)param_1 + 0x19fc);
            if (fVar8 <= fVar7) {
              if (fVar8 < fVar7) {
                fVar7 = fVar7 - param_2 / fVar2;
                if (fVar7 <= fVar8) {
                  fVar7 = fVar8;
                }
                *(float *)((longlong)param_1 + 0x19fc) = fVar7;
              }
            }
            else {
              fVar7 = param_2 / fVar2 + fVar7;
              if (fVar8 <= fVar7) {
                fVar7 = fVar8;
              }
              *(float *)((longlong)param_1 + 0x19fc) = fVar7;
            }
          }
        }
      }
      fVar7 = *(float *)(param_1 + 0x340);
      if (local_res18[0] <= fVar7) {
        if (local_res18[0] < fVar7) {
          if (*(float *)((longlong)param_1 + 0x19ec) <= 0.0) {
            *(float *)(param_1 + 0x340) = local_res18[0];
          }
          else {
            fVar7 = fVar7 - param_2 / *(float *)((longlong)param_1 + 0x19ec);
            if (fVar7 <= local_res18[0]) {
              fVar7 = local_res18[0];
            }
            *(float *)(param_1 + 0x340) = fVar7;
          }
        }
      }
      else if (*(float *)(param_1 + 0x33d) <= 0.0) {
        *(float *)(param_1 + 0x340) = local_res18[0];
      }
      else {
        fVar7 = param_2 / *(float *)(param_1 + 0x33d) + fVar7;
        if (local_res18[0] <= fVar7) {
          fVar7 = local_res18[0];
        }
        *(float *)(param_1 + 0x340) = fVar7;
      }
    }
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar3 + 0x38) < DAT_14686e288) &&
       (_Init_thread_header(&DAT_14686e288), DAT_14686e288 == -1)) {
      FName::FName(&DAT_14686e280,L"ScreenLiquidEffect",1);
      _Init_thread_footer(&DAT_14686e288);
    }
    if (*(float *)(param_1 + 0x340) <= 0.0) {
      if (0.0 < fVar1) {
        FUN_142e724b0(param_1[0x12f],param_1[0x33c],DAT_14686e280,0);
      }
    }
    else {
      if ((*(int *)(lVar3 + 0x38) < DAT_14686e298) &&
         (_Init_thread_header(&DAT_14686e298), DAT_14686e298 == -1)) {
        FName::FName(&DAT_14686e290,L"Color",1);
        _Init_thread_footer(&DAT_14686e298);
      }
      if ((*(int *)(lVar3 + 0x38) < DAT_14686e2a8) &&
         (_Init_thread_header(&DAT_14686e2a8), DAT_14686e2a8 == -1)) {
        FName::FName(&DAT_14686e2a0,L"Opacity",1);
        _Init_thread_footer(&DAT_14686e2a8);
      }
      local_e8 = (undefined1 *)param_1[0x33c];
      uVar4 = (ulonglong)uStack_e0 >> 8;
      uStack_e0 = (undefined1 *)CONCAT44(0x41800000,((uint)uVar4 & 0xfffffffe) << 8);
      local_c8 = (int *)DAT_14686e280;
      local_d8 = (float *)0x42c8000041100000;
      uStack_e0 = (undefined1 *)CONCAT71(uStack_e0._1_7_,0x4e);
      puStack_d0 = (undefined8 *)CONCAT71(puStack_d0._1_7_,4);
      local_c0 = 0;
      FUN_142db7ff0(param_1[0x12f],&local_e8);
      local_f8 = *(undefined8 *)((longlong)param_1 + 0x19f4);
      uStack_f0 = *(undefined8 *)((longlong)param_1 + 0x19fc);
      FUN_142e72500(param_1[0x12f],param_1[0x33c],DAT_14686e280,DAT_14686e290,&local_f8);
      FUN_142e72560(param_1[0x12f],param_1[0x33c],DAT_14686e280,DAT_14686e2a0,(int)param_1[0x340]);
    }
  }
  return;
}



// FUNCTION 140d189f0 FUN_140d189f0 body=15 status=ok
// SIG undefined FUN_140d189f0(void)

void FUN_140d189f0(longlong param_1)

{
  FUN_140d13520(param_1,*(char *)(param_1 + 0xaa8) == '\0');
  return;
}



// FUNCTION 140d18a00 FUN_140d18a00 body=189 status=ok
// SIG undefined FUN_140d18a00(void)

void FUN_140d18a00(longlong param_1,char param_2)

{
  char cVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686e2e8) {
    _Init_thread_header(&DAT_14686e2e8);
    if (DAT_14686e2e8 == -1) {
      FName::FName(&DAT_14686e2e0,L"QuickMenuUnavailable",1);
      _Init_thread_footer(&DAT_14686e2e8);
    }
  }
  cVar1 = FUN_142dafb10(param_1 + 0x15f8,&DAT_14686e2e0);
  if (param_2 != cVar1) {
    if (param_2 != '\0') {
      FUN_142dafbc0();
      return;
    }
    FUN_142dbb5d0(param_1 + 0x15f8,&DAT_14686e2e0);
  }
  return;
}



// FUNCTION 140d18ac0 FUN_140d18ac0 body=286 status=ok
// SIG undefined FUN_140d18ac0(void)

void FUN_140d18ac0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  
  lVar2 = FUN_140ce0f90(local_a8,param_4);
  lVar3 = FUN_140ce0f90(local_88,param_3);
  if ((*(int *)(param_1 + 0xb90) != 0) && (*(longlong **)(param_1 + 0xb88) != (longlong *)0x0)) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0xb88) + 0x18))();
    if (cVar6 != '\0') {
      if (*(int *)(param_1 + 0xb90) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0xb88);
      }
      lVar1 = *plVar7;
      uVar4 = FUN_140ce0f90(local_68,lVar2);
      uVar5 = FUN_140ce0f90(local_48,lVar3);
      (**(code **)(lVar1 + 0x40))(plVar7,param_2,uVar5,uVar4);
      FUN_140ce1790(lVar3 + 0x10);
      FUN_140ce1790(lVar2 + 0x10);
      goto LAB_140d18bb4;
    }
  }
  FUN_140ce1790(lVar3 + 0x10);
  FUN_140ce1790(lVar2 + 0x10);
LAB_140d18bb4:
  FUN_140ce1790(param_3 + 0x10);
  FUN_140ce1790(param_4 + 0x10);
  return;
}



// FUNCTION 140d18be0 FUN_140d18be0 body=91 status=ok
// SIG undefined FUN_140d18be0(void)

void FUN_140d18be0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x848);
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
      thunk_FUN_141400bf0(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140d18c40 FUN_140d18c40 body=565 status=ok
// SIG undefined FUN_140d18c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d18c40(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
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
  lVar3 = FUN_1422312c0();
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = FUN_140bca8a0(lVar3), cVar2 != '\0')) {
      return;
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar4 = FUN_142dcdcd0(lVar3);
  if (((param_1[0x193] == 0) || (lVar4 == 0)) || (param_1[0x109] == 0)) {
    if (lVar3 != 0) {
      local_98 = FUN_140d18c40;
      uStack_90 = 0;
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = (undefined4)local_98;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_98._4_4_;
        *(undefined4 *)(plVar5 + 3) = uStack_90;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_8c;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar3;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_88 = 0;
      local_80 = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_70 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      FUN_142880af0(uVar6,&local_88);
      if (local_28 != 0) {
        plVar7 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar7 = local_38;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar3 = FMemory::Realloc(plVar5,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
    }
  }
  else {
    FUN_142dd84a0();
  }
  return;
}



// FUNCTION 140d18e80 FUN_140d18e80 body=163 status=ok
// SIG undefined FUN_140d18e80(void)

void FUN_140d18e80(longlong *param_1,char param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  
  if (((param_1[0x132] != 0) && (lVar2 = *(longlong *)(param_1[0x132] + 0xe68), lVar2 != 0)) &&
     (cVar3 = FUN_142cbb8e0(lVar2 + 0x1950), cVar3 != '\0')) {
    if ((((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0) &&
        (cVar3 = (**(code **)(*param_1 + 0x768))(param_1), cVar3 != '\0')) &&
       (cVar3 = FUN_140cf8da0(param_1), cVar3 == '\0')) {
      return;
    }
    if ((param_2 != '\0') &&
       (cVar3 = FUN_142cbbb00(*(longlong *)(param_1[0x132] + 0xe68) + 0x1950), cVar3 == '\0')) {
      return;
    }
    pbVar1 = (byte *)(*(longlong *)(param_1[0x132] + 0xe68) + 0x1968);
    *pbVar1 = *pbVar1 | 8;
  }
  return;
}



// FUNCTION 140d18f30 FUN_140d18f30 body=215 status=ok
// SIG undefined FUN_140d18f30(void)

void FUN_140d18f30(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x768))();
  if (((cVar2 != '\0') && (param_1[0x18a] != 0)) && (lVar3 = FUN_142de95d0(), lVar3 != 0)) {
    lVar4 = FUN_1414c30e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong **)(lVar3 + 0x118) != (longlong *)0x0)) &&
       (lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x118) + 0x680))(), lVar3 != 0)) {
      lVar4 = UInputKeySelector::GetPrivateStaticClass();
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
        FUN_141460a30(param_1,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140d19010 FUN_140d19010 body=773 status=ok
// SIG undefined FUN_140d19010(void)

void FUN_140d19010(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  uVar13 = 0;
  lVar10 = FUN_142b45e90();
  uVar5 = *(undefined8 *)(lVar10 + 0x18);
  FUN_142dcf3a0(param_1,&local_68);
  if (local_68 == 0) {
    puVar11 = &local_78;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    bVar9 = false;
    bVar8 = false;
    bVar7 = true;
    uVar14 = uVar13;
  }
  else {
    local_58 = local_68;
    plStack_50 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    puVar11 = (ulonglong *)FUN_142b4a990(uVar5,local_38,&local_58);
    bVar9 = true;
    bVar8 = true;
    bVar7 = false;
    uVar14 = *puVar11;
  }
  plVar6 = (longlong *)puVar11[1];
  puVar11[1] = 0;
  *puVar11 = 0;
  plVar3 = plStack_70;
  if (bVar7) {
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
  }
  if (bVar8) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
  }
  plVar3 = plStack_50;
  if ((bVar9) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_50)(plStack_50);
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
  if (uVar14 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14686e2f8) {
      _Init_thread_header(&DAT_14686e2f8);
      if (DAT_14686e2f8 == -1) {
        FName::FName(&DAT_14686e2f0,L"DeveloperSkin",1);
        _Init_thread_footer(&DAT_14686e2f8);
      }
    }
    FUN_142b47a30(uVar14,&local_48,&DAT_14686e2f0);
    if (local_48 != 0) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      puVar12 = *(undefined8 **)(DAT_146b33f38 + 0x118);
      uVar14 = (longlong)*(int *)(DAT_146b33f38 + 0x120) & 0x1fffffffffffffff;
      if (puVar12 + *(int *)(DAT_146b33f38 + 0x120) < puVar12) {
        uVar14 = uVar13;
      }
      if (uVar14 != 0) {
        do {
          FUN_14145e850(param_1,*puVar12);
          uVar13 = uVar13 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar13 != uVar14);
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_60 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plStack_60 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  return;
}



// FUNCTION 140d19320 FUN_140d19320 body=330 status=ok
// SIG undefined FUN_140d19320(void)

ulonglong FUN_140d19320(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  uVar8 = (**(code **)(*param_1 + 0x768))();
  if (((char)uVar8 != '\0') &&
     (uVar8 = APlayerController::IsPrimaryPlayer(param_1), (char)uVar8 != '\0')) {
    lVar9 = FUN_140cff230(param_1);
    uVar8 = 0;
    if (lVar9 != 0) {
      puVar10 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
      uVar8 = FUN_140bbd560(&local_18,*puVar10);
      plVar5 = local_10;
      if (local_18 != (longlong *)0x0) {
        fVar3 = *(float *)(lVar9 + 0x54);
        fVar11 = 0.0;
        if ((0.0 <= fVar3) && (fVar11 = fVar3, 100.0 <= fVar3)) {
          fVar11 = 100.0;
        }
        bVar6 = (**(code **)(*local_18 + 0xb8))(local_18,1,fVar11 * 0.01);
        plVar5 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
        return (ulonglong)bVar6;
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        uVar7 = (int)lVar9 - 1;
        uVar8 = (ulonglong)uVar7;
        if (uVar7 == 0) {
          uVar8 = (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            uVar8 = (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 140d19470 FUN_140d19470 body=93 status=ok
// SIG undefined FUN_140d19470(void)

void FUN_140d19470(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_14271a610();
  lVar1 = *(longlong *)(param_1 + 0x460);
  if (lVar1 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
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
      *(undefined1 *)(lVar1 + 0x5d6) = 0;
    }
  }
  return;
}



// FUNCTION 140d194d0 FUN_140d194d0 body=45 status=ok
// SIG undefined FUN_140d194d0(void)

void FUN_140d194d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc70) != 0) {
    FUN_140e76570();
    FUN_14145e790(param_1);
    return;
  }
  return;
}



// FUNCTION 140d19500 FUN_140d19500 body=68 status=ok
// SIG undefined FUN_140d19500(void)

void FUN_140d19500(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x12b8))();
    cVar1 = (**(code **)(*param_1 + 0x768))(param_1);
    if (cVar1 == '\0') {
      FUN_14145e890(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140d19550 FUN_140d19550 body=256 status=ok
// SIG undefined FUN_140d19550(void)

void FUN_140d19550(longlong *param_1)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  
  if ((((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0) &&
      (cVar4 = (**(code **)(*param_1 + 0x768))(), cVar4 != '\0')) && (param_1[0x132] != 0)) {
    lVar5 = FUN_140c430a0(param_1[0x132],0);
    if ((lVar5 != 0) && (param_1[0x29c] != 0)) {
      TBaseMulticastDelegate<void>::Remove(lVar5 + 0x2c0,param_1[0x29c]);
    }
    plVar1 = (longlong *)param_1[0x132];
    uVar6 = FUN_1414aa4c0();
    lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
    if (lVar5 != 0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakPlayerController::OnLevelChanged",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar5 + 0x1b0,param_1,local_res8);
    }
  }
  return;
}



// FUNCTION 140d19650 FUN_140d19650 body=145 status=ok
// SIG undefined FUN_140d19650(void)

void FUN_140d19650(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x1200) = *(undefined8 *)(param_1 + 0x1208);
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0x6d0);
  if (lVar1 != 0) {
    lVar3 = FUN_1413e4fc0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar3 = 0;
    if (bVar2) {
      lVar3 = lVar1;
    }
    *(longlong *)(param_1 + 0x1200) = lVar3;
    return;
  }
  *(undefined8 *)(param_1 + 0x1200) = *(undefined8 *)(param_1 + 0x1208);
  return;
}



// FUNCTION 140d196f0 FUN_140d196f0 body=622 status=ok
// SIG undefined FUN_140d196f0(void)

void FUN_140d196f0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  void *pvVar12;
  void *pvVar13;
  void *local_38;
  ulonglong local_30;
  
  lVar11 = FUN_140cff230();
  if (lVar11 != 0) {
    pvVar12 = (void *)0x0;
    plVar1 = (longlong *)(param_1 + 0x1180);
    if (*(char *)(lVar11 + 0x108) == '\0') {
      uVar2 = *(undefined4 *)(lVar11 + 0xb0);
      lVar6 = *plVar1;
      local_38 = (void *)0x0;
      local_30 = 0;
      if (lVar6 != 0) {
        pvVar13 = pvVar12;
        if (&local_38 != (void **)(lVar6 + 0x48)) {
          uVar4 = *(uint *)(lVar6 + 0x50);
          pvVar5 = *(void **)(lVar6 + 0x48);
          local_30 = (ulonglong)uVar4;
          if (uVar4 != 0) {
            TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(&local_38,uVar4,0);
            pvVar13 = local_38;
            _guard_xfg_dispatch_icall_nop(local_38,pvVar5,(longlong)(int)uVar4 * 0x1c);
          }
        }
        FUN_140cfd910(plVar1,uVar2,&local_38,param_1 + 0x11a4);
        if (pvVar13 != (void *)0x0) {
          FMemory::Free(pvVar13);
        }
      }
    }
    else {
      uVar7 = *(undefined4 *)(lVar11 + 0x114);
      uVar8 = *(undefined4 *)(lVar11 + 0x118);
      uVar9 = *(undefined4 *)(lVar11 + 0x11c);
      uVar3 = *(undefined4 *)(lVar11 + 0x10c);
      uVar2 = *(undefined4 *)(lVar11 + 0x120);
      *(undefined4 *)(param_1 + 0x11ac) = *(undefined4 *)(lVar11 + 0x110);
      *(undefined4 *)(param_1 + 0x11b0) = uVar7;
      *(undefined4 *)(param_1 + 0x11b4) = uVar8;
      *(undefined4 *)(param_1 + 0x11b8) = uVar9;
      *(undefined4 *)(param_1 + 0x11a8) = uVar3;
      *(undefined4 *)(param_1 + 0x11bc) = uVar2;
    }
    if (*(char *)(lVar11 + 0x109) == '\0') {
      lVar6 = *plVar1;
      uVar2 = *(undefined4 *)(lVar11 + 0xb4);
      local_38 = (void *)0x0;
      local_30 = 0;
      if (lVar6 != 0) {
        pvVar13 = pvVar12;
        if (&local_38 != (void **)(lVar6 + 0x58)) {
          uVar4 = *(uint *)(lVar6 + 0x60);
          pvVar5 = *(void **)(lVar6 + 0x58);
          local_30 = (ulonglong)uVar4;
          if (uVar4 != 0) {
            TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(&local_38,uVar4,0);
            pvVar13 = local_38;
            _guard_xfg_dispatch_icall_nop(local_38,pvVar5,(longlong)(int)uVar4 * 0x1c);
          }
        }
        FUN_140cfd910(plVar1,uVar2,&local_38,param_1 + 0x11c0);
        if (pvVar13 != (void *)0x0) {
          FMemory::Free(pvVar13);
        }
      }
    }
    else {
      uVar7 = *(undefined4 *)(lVar11 + 300);
      uVar8 = *(undefined4 *)(lVar11 + 0x130);
      uVar9 = *(undefined4 *)(lVar11 + 0x134);
      uVar3 = *(undefined4 *)(lVar11 + 0x124);
      uVar2 = *(undefined4 *)(lVar11 + 0x138);
      *(undefined4 *)(param_1 + 0x11c8) = *(undefined4 *)(lVar11 + 0x128);
      *(undefined4 *)(param_1 + 0x11cc) = uVar7;
      *(undefined4 *)(param_1 + 0x11d0) = uVar8;
      *(undefined4 *)(param_1 + 0x11d4) = uVar9;
      *(undefined4 *)(param_1 + 0x11c4) = uVar3;
      *(undefined4 *)(param_1 + 0x11d8) = uVar2;
    }
    if (*(char *)(lVar11 + 0x10a) == '\0') {
      lVar6 = *plVar1;
      uVar2 = *(undefined4 *)(lVar11 + 0xb8);
      local_38 = (void *)0x0;
      local_30 = 0;
      if (lVar6 != 0) {
        if (&local_38 != (void **)(lVar6 + 0x68)) {
          uVar4 = *(uint *)(lVar6 + 0x70);
          pvVar13 = *(void **)(lVar6 + 0x68);
          local_30 = (ulonglong)uVar4;
          if (uVar4 != 0) {
            TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(&local_38,uVar4,0);
            pvVar12 = local_38;
            _guard_xfg_dispatch_icall_nop(local_38,pvVar13,(longlong)(int)uVar4 * 0x1c);
          }
        }
        FUN_140cfd910(plVar1,uVar2,&local_38,param_1 + 0x11dc);
        if (pvVar12 != (void *)0x0) {
          FMemory::Free(pvVar12);
        }
      }
    }
    else {
      uVar10 = *(undefined8 *)(lVar11 + 0x148);
      uVar3 = *(undefined4 *)(lVar11 + 0x13c);
      uVar2 = *(undefined4 *)(lVar11 + 0x150);
      *(undefined8 *)(param_1 + 0x11e4) = *(undefined8 *)(lVar11 + 0x140);
      *(undefined8 *)(param_1 + 0x11ec) = uVar10;
      *(undefined4 *)(param_1 + 0x11e0) = uVar3;
      *(undefined4 *)(param_1 + 0x11f4) = uVar2;
    }
  }
  return;
}



// FUNCTION 140d19960 FUN_140d19960 body=1014 status=ok
// SIG undefined FUN_140d19960(void)

void FUN_140d19960(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((int)param_1[0x26c] <= (int)(uint)param_2) {
    FUN_140ce4c30(param_1 + 0x263,((uint)param_2 - (int)param_1[0x26c]) + 1);
  }
  plVar1 = param_1 + 0x263;
  plVar5 = (longlong *)param_1[0x26b];
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar8 = (ulonglong)(uint)param_2;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = plVar1;
  }
  if (*(float *)(lVar4 + 0x790) == *(float *)((longlong)plVar5 + uVar8 * 0x14)) {
    return;
  }
  plVar5 = (longlong *)param_1[0x26b];
  if ((longlong *)param_1[0x26b] == (longlong *)0x0) {
    plVar5 = plVar1;
  }
  FUN_140d19d60(param_1,*(undefined4 *)((longlong)plVar5 + uVar8 * 0x14 + 4));
  plVar5 = (longlong *)param_1[0x26b];
  if ((longlong *)param_1[0x26b] == (longlong *)0x0) {
    plVar5 = plVar1;
  }
  *(undefined8 *)((longlong)plVar5 + uVar8 * 0x14 + 8) = DAT_1468b5da0;
  *(undefined4 *)((longlong)plVar5 + uVar8 * 0x14 + 0x10) = DAT_1468b5da8;
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar5 = (longlong *)param_1[0x26b];
  if ((longlong *)param_1[0x26b] == (longlong *)0x0) {
    plVar5 = plVar1;
  }
  *(undefined4 *)((longlong)plVar5 + uVar8 * 0x14) = *(undefined4 *)(lVar4 + 0x790);
  plVar5 = (longlong *)param_1[0x26b];
  if ((longlong *)param_1[0x26b] == (longlong *)0x0) {
    plVar5 = plVar1;
  }
  iVar2 = *(int *)((longlong)plVar5 + uVar8 * 0x14 + 4);
  plVar5 = (longlong *)param_1[0x261];
  if ((longlong *)param_1[0x261] == (longlong *)0x0) {
    plVar5 = param_1 + 0x252;
  }
  if (param_1[0x91] == 0) {
    return;
  }
  fVar10 = *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x10);
  fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
  if (ABS(fVar10) < ABS(fVar11)) {
    fVar11 = fVar10;
  }
  fVar10 = fVar10 - fVar11;
  if (fVar10 < 0.0) {
    fVar10 = fVar10 + 360.0;
  }
  if (fVar10 == 0.0) {
    fVar10 = *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x14);
    fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
    if (ABS(fVar10) < ABS(fVar11)) {
      fVar11 = fVar10;
    }
    fVar10 = fVar10 - fVar11;
    if (fVar10 < 0.0) {
      fVar10 = fVar10 + 360.0;
    }
    if (fVar10 == 0.0) {
      fVar10 = *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x18);
      fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
      if (ABS(fVar10) < ABS(fVar11)) {
        fVar11 = fVar10;
      }
      fVar10 = fVar10 - fVar11;
      if (fVar10 < 0.0) {
        fVar10 = fVar10 + 360.0;
      }
      if (fVar10 == 0.0) {
        return;
      }
    }
  }
  lVar4 = FUN_140d00370(param_1,param_2);
  if (lVar4 == 0) {
    return;
  }
  cVar3 = (**(code **)(*param_1 + 0x768))(param_1);
  if (((cVar3 != '\0') || (fVar10 = *(float *)((longlong)param_1 + 0x149c), fVar10 <= 0.0)) &&
     (lVar6 = FUN_140cff230(param_1), fVar10 = 90.0, lVar6 != 0)) {
    fVar10 = *(float *)(lVar6 + 0x6c);
  }
  if ((longlong *)param_1[0xa5] == (longlong *)0x0) {
    fVar11 = 1.0;
  }
  else {
    fVar11 = (float)(**(code **)(*(longlong *)param_1[0xa5] + 0x778))();
    fVar11 = fVar11 / fVar10;
  }
  fVar10 = *(float *)(lVar4 + 0x74);
  fVar12 = *(float *)(lVar4 + 0x70);
  fVar9 = (float)FUN_140e1b920(lVar4,fVar11);
  fVar11 = *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x38);
  fVar10 = fVar10 * fVar9;
  fVar12 = fVar12 * fVar9;
  if ((fVar11 < 0.0) || (fVar12 < fVar11)) {
    fVar11 = *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x1c);
    if (fVar12 < fVar11) {
      return;
    }
    plVar7 = (longlong *)param_1[0x26b];
    if (fVar11 <= fVar10) {
      if (plVar7 == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined8 *)((longlong)plVar7 + uVar8 * 0x14 + 8) =
           *(undefined8 *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x10);
      fVar11 = *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x18);
      goto LAB_140d19d21;
    }
    fVar12 = 1.0 - (fVar11 - fVar10) / (fVar12 - fVar10);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar11 = (fVar12 * fVar10) / fVar11;
    fVar10 = fVar11 * *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x10);
    fVar12 = fVar11 * *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x14);
    fVar11 = fVar11 * *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x18);
  }
  else {
    plVar7 = (longlong *)param_1[0x26b];
    if (fVar11 <= fVar10) {
      if (plVar7 == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined8 *)((longlong)plVar7 + uVar8 * 0x14 + 8) =
           *(undefined8 *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x2c);
      fVar11 = *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x34);
      goto LAB_140d19d21;
    }
    fVar12 = 1.0 - (fVar11 - fVar10) / (fVar12 - fVar10);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar11 = (fVar12 * fVar10) / fVar11;
    fVar10 = fVar11 * *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x2c);
    fVar12 = fVar11 * *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x30);
    fVar11 = fVar11 * *(float *)((longlong)plVar5 + (longlong)iVar2 * 0x3c + 0x34);
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = plVar1;
  }
  *(ulonglong *)((longlong)plVar7 + uVar8 * 0x14 + 8) = CONCAT44(fVar12,fVar10);
LAB_140d19d21:
  *(float *)((longlong)plVar7 + uVar8 * 0x14 + 0x10) = fVar11;
  return;
}



// FUNCTION 140d19d60 FUN_140d19d60 body=3977 status=ok
// SIG undefined FUN_140d19d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d19d60(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  float *pfVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar29;
  float fVar32;
  undefined1 in_XMM1 [16];
  undefined1 auVar27 [16];
  float fVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar28 [16];
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
  float fVar54;
  float fVar55;
  undefined1 auVar53 [12];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auStack_5d8 [32];
  undefined1 local_5b8;
  float local_5b0;
  int local_5a8;
  float local_5a0;
  float local_59c;
  float local_598;
  undefined8 local_590;
  float local_588;
  float local_580;
  float local_57c;
  float local_578;
  undefined8 local_570;
  float local_568;
  float local_560;
  float local_55c;
  float local_558;
  longlong local_550;
  undefined8 local_548;
  float local_540;
  float local_53c;
  float local_538;
  undefined8 local_530;
  undefined4 local_528;
  undefined8 local_518;
  float fStack_510;
  float fStack_50c;
  float local_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float *local_4c8;
  float *local_4c0;
  float *local_4b8;
  float *local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  float *pfStack_490;
  float *local_488;
  undefined8 *puStack_480;
  undefined1 local_478 [896];
  char local_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_5d8;
  if (((param_2 < 0) || ((int)param_1[0x262] <= param_2)) &&
     (*(int *)(param_1 + 0x262) = param_2 + 1, *(int *)((longlong)param_1 + 0x1314) < param_2 + 1))
  {
    FUN_140d0d590(param_1 + 0x252);
  }
  uVar17 = 0;
  plVar11 = (longlong *)param_1[0x261];
  if ((longlong *)param_1[0x261] == (longlong *)0x0) {
    plVar11 = param_1 + 0x252;
  }
  pfVar16 = (float *)((longlong)plVar11 + (longlong)param_2 * 0x3c);
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*pfVar16 == *(float *)(lVar9 + 0x790)) {
    return;
  }
  local_4c0 = pfVar16 + 4;
  *(ulonglong *)(pfVar16 + 1) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  pfVar16[3] = DAT_1468b5d98;
  *(ulonglong *)(pfVar16 + 8) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  pfVar16[10] = DAT_1468b5d98;
  *(undefined8 *)local_4c0 = DAT_1468b5da0;
  pfVar16[6] = DAT_1468b5da8;
  *(undefined8 *)(pfVar16 + 0xb) = DAT_1468b5da0;
  pfVar16[0xd] = DAT_1468b5da8;
  local_4c8 = pfVar16 + 7;
  local_4b0 = pfVar16 + 0xb;
  *local_4c8 = -1.0;
  local_4b8 = pfVar16 + 0xe;
  *local_4b8 = -1.0;
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  *pfVar16 = *(float *)(lVar9 + 0x790);
  lVar9 = param_1[0x91];
  lVar1 = param_1[0x122];
  if (lVar9 == 0) {
    return;
  }
  uVar10 = FUN_1430a8880();
  plVar11 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar10);
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_142dc1ad0(local_478);
  cVar6 = FUN_142dcd6e0(lVar1,local_478,0);
  if (cVar6 == '\0') {
    return;
  }
  local_590 = (longlong *)FUN_142dd0030(local_478);
  if (local_590 == (longlong *)0x0) {
    return;
  }
  if (local_f8 != '\x02') {
    return;
  }
  lVar9 = FUN_142dddd00(local_590);
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x47b) != '\0')) {
    return;
  }
  lVar9 = param_1[0x26e];
  iVar7 = (**(code **)(*plVar11 + 0xe8))(plVar11);
  iVar8 = (int)lVar9;
  if ((int)lVar9 <= iVar7) {
    iVar8 = iVar7;
  }
  uVar12 = uVar17;
  uVar19 = uVar17;
  uVar20 = uVar17;
  local_5a8 = iVar8;
  if (iVar8 < 1) {
    return;
  }
  do {
    cVar6 = FUN_140d14ea0(param_1,uVar12 & 0xff);
    iVar7 = (int)uVar12;
    if (cVar6 != '\0') {
      if ((-1 < iVar7) && (iVar7 < (int)param_1[0x26c])) {
        plVar11 = (longlong *)param_1[0x26b];
        if ((longlong *)param_1[0x26b] == (longlong *)0x0) {
          plVar11 = param_1 + 0x263;
        }
        if (*(int *)((longlong)plVar11 + uVar19 + 4) != param_2) goto LAB_140d19fe0;
      }
      uVar12 = FUN_140d00370(param_1,uVar12 & 0xff);
      if ((uVar12 != 0) &&
         ((uVar20 == 0 || (*(float *)(uVar20 + 0x70) < *(float *)(uVar12 + 0x70))))) {
        uVar20 = uVar12;
      }
    }
LAB_140d19fe0:
    plVar11 = local_590;
    uVar12 = (ulonglong)(iVar7 + 1U);
    uVar19 = uVar19 + 0x14;
  } while ((int)(iVar7 + 1U) < iVar8);
  if (uVar20 == 0) {
    return;
  }
  if (*(float *)(uVar20 + 0x70) <= 0.0) {
    return;
  }
  (**(code **)(*param_1 + 0x830))(param_1,&local_5a0,&local_530);
  if ((char)param_1[0x26f] != '\0') {
    return;
  }
  fVar21 = (float)(**(code **)(*param_1 + 0x6e0))(param_1);
  if ((0.0 < fVar21) && ((*(byte *)(plVar11 + 0x80) & 4) != 0)) {
    FUN_142231870(plVar11,&local_4a8,fVar21);
    lVar9 = plVar11[0x2d];
    if (lVar9 == 0) {
      fVar46 = 0.0;
      fVar48 = 0.0;
      fVar51 = 0.0;
      fVar30 = (float)((uint)_DAT_14686dab0 & _DAT_14686dac0);
      fVar33 = (float)((uint)fRam000000014686dab4 & uRam000000014686dac4);
      fVar34 = (float)((uint)fRam000000014686dab8 & uRam000000014686dac8);
      fVar36 = (float)((uint)fRam000000014686dabc & uRam000000014686dacc);
      fVar26 = 0.0;
      fVar31 = 0.0;
      fVar21 = 0.0;
      fVar43 = fRam000000014686dabc;
    }
    else {
      fVar26 = *(float *)(lVar9 + 0x210);
      fVar31 = *(float *)(lVar9 + 0x214);
      fVar21 = *(float *)(lVar9 + 0x218);
      fVar46 = *(float *)(lVar9 + 0x220);
      fVar48 = *(float *)(lVar9 + 0x224);
      fVar51 = *(float *)(lVar9 + 0x228);
      fVar30 = *(float *)(lVar9 + 0x230);
      fVar33 = *(float *)(lVar9 + 0x234);
      fVar34 = *(float *)(lVar9 + 0x238);
      fVar36 = *(float *)(lVar9 + 0x23c);
      fVar43 = *(float *)(lVar9 + 0x21c);
    }
    auVar27._8_8_ = puStack_480;
    auVar27._0_8_ = local_488;
    fVar44 = SUB84(local_488,0);
    fVar47 = (float)((ulonglong)local_488 >> 0x20);
    fVar49 = SUB84(puStack_480,0);
    fVar37 = (float)((ulonglong)puStack_480 >> 0x20);
    auVar22._4_4_ = -(uint)(fRam000000014686db94 < (float)((uint)fVar47 & uRam000000014686db54));
    auVar22._0_4_ = -(uint)(_DAT_14686db90 < (float)((uint)fVar44 & _DAT_14686db50));
    auVar22._8_4_ = -(uint)(fRam000000014686db98 < (float)((uint)fVar49 & uRam000000014686db58));
    auVar22._12_4_ = -(uint)(fRam000000014686db9c < (float)((uint)fVar37 & uRam000000014686db5c));
    iVar8 = movmskps((int)lVar9,auVar22);
    fVar56 = _DAT_1468b5b70;
    fVar57 = fRam00000001468b5b74;
    fVar59 = fRam00000001468b5b78;
    fVar61 = fRam00000001468b5b7c;
    fVar25 = _DAT_1468b5b90;
    fVar29 = fRam00000001468b5b94;
    fVar32 = fRam00000001468b5b98;
    fVar35 = fRam00000001468b5b9c;
    fVar52 = _DAT_1468b5b80;
    fVar54 = fRam00000001468b5b84;
    fVar55 = fRam00000001468b5b88;
    if (iVar8 != 0) {
      fVar56 = (float)local_4a8 * _DAT_14686dba0;
      fVar57 = local_4a8._4_4_ * fRam000000014686dba4;
      fVar59 = (float)uStack_4a0 * fRam000000014686dba8;
      fVar61 = uStack_4a0._4_4_ * fRam000000014686dbac;
      auVar27 = rcpps(in_XMM1,auVar27);
      fVar25 = auVar27._0_4_;
      fVar29 = auVar27._4_4_;
      fVar32 = auVar27._8_4_;
      fVar35 = auVar27._12_4_;
      fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar44;
      fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar47;
      fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar49;
      fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fVar37;
      fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar44;
      fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar47;
      fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar49;
      fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fVar37;
      fVar25 = (float)((-(uint)((float)((uint)fVar44 & _DAT_14686db50) <= _DAT_14686db90) &
                        (uint)fVar25 ^ (uint)fVar25) & _DAT_14686dac0);
      fVar29 = (float)((-(uint)((float)((uint)fVar47 & uRam000000014686db54) <= fRam000000014686db94
                               ) & (uint)fVar29 ^ (uint)fVar29) & uRam000000014686dac4);
      fVar32 = (float)((-(uint)((float)((uint)fVar49 & uRam000000014686db58) <= fRam000000014686db98
                               ) & (uint)fVar32 ^ (uint)fVar32) & uRam000000014686dac8);
      fVar52 = (float)local_498 * fVar25;
      fVar54 = local_498._4_4_ * fVar29;
      fVar55 = pfStack_490._0_4_ * fVar32;
      fVar44 = fVar55 * fVar57 - fVar54 * fVar59;
      fVar47 = fVar52 * fVar59 - fVar55 * fVar56;
      fVar49 = fVar54 * fVar56 - fVar52 * fVar57;
      fVar44 = fVar44 + fVar44;
      fVar47 = fVar47 + fVar47;
      fVar49 = fVar49 + fVar49;
      fVar35 = (float)((-(uint)((float)((uint)fVar37 & uRam000000014686db5c) <= fRam000000014686db9c
                               ) & (uint)fVar35 ^ (uint)fVar35) & uRam000000014686dacc);
      fVar52 = (float)((uint)(0.0 - ((fVar49 * fVar57 - fVar47 * fVar59) + fVar61 * fVar44 + fVar52)
                             ) & _DAT_14686dac0);
      fVar54 = (float)((uint)(0.0 - ((fVar44 * fVar59 - fVar49 * fVar56) + fVar61 * fVar47 + fVar54)
                             ) & uRam000000014686dac4);
      fVar55 = (float)((uint)(0.0 - ((fVar47 * fVar56 - fVar44 * fVar57) + fVar61 * fVar49 + fVar55)
                             ) & uRam000000014686dac8);
    }
    auVar23._4_4_ = fVar29;
    auVar23._0_4_ = fVar25;
    auVar23._8_4_ = fVar32;
    auVar23._12_4_ = fVar35;
    auVar3._4_4_ = fVar33;
    auVar3._0_4_ = fVar30;
    auVar3._8_4_ = fVar34;
    auVar3._12_4_ = fVar36;
    auVar27 = minps(auVar23,auVar3);
    fVar44 = fVar25 * fVar30;
    fVar47 = fVar29 * fVar33;
    fVar49 = fVar32 * fVar34;
    auVar24._4_4_ = -(uint)(auVar27._4_4_ < fRam000000014686db14);
    auVar24._0_4_ = -(uint)(auVar27._0_4_ < _DAT_14686db10);
    auVar24._8_4_ = -(uint)(auVar27._8_4_ < fRam000000014686db18);
    auVar24._12_4_ = -(uint)(auVar27._12_4_ < fRam000000014686db1c);
    iVar8 = movmskps(iVar8,auVar24);
    if (iVar8 == 0) {
      fVar52 = fVar52 * fVar30;
      fVar54 = fVar54 * fVar33;
      fVar55 = fVar55 * fVar34;
      fVar30 = fVar55 * fVar31 - fVar54 * fVar21;
      fVar33 = fVar52 * fVar21 - fVar55 * fVar26;
      fVar34 = fVar54 * fVar26 - fVar52 * fVar31;
      fVar30 = fVar30 + fVar30;
      fVar33 = fVar33 + fVar33;
      fVar34 = fVar34 + fVar34;
      auVar53._0_4_ = (fVar34 * fVar31 - fVar33 * fVar21) + fVar43 * fVar30 + fVar52 + fVar46;
      auVar53._4_4_ = (fVar30 * fVar21 - fVar34 * fVar26) + fVar43 * fVar33 + fVar54 + fVar48;
      auVar53._8_4_ = (fVar33 * fVar26 - fVar30 * fVar31) + fVar43 * fVar34 + fVar55 + fVar51;
      fVar46 = fVar61 * fVar26 * _DAT_14686daf0 + fVar56 * fVar43 + fVar59 * fVar31 * _DAT_14686dae0
               + fVar57 * fVar21 * _DAT_14686dad0;
      fVar48 = fVar59 * fVar26 * fRam000000014686daf4 + fVar57 * fVar43 +
               fVar61 * fVar31 * fRam000000014686dae4 + fVar56 * fVar21 * fRam000000014686dad4;
      fVar51 = fVar57 * fVar26 * fRam000000014686daf8 + fVar59 * fVar43 +
               fVar56 * fVar31 * fRam000000014686dae8 + fVar61 * fVar21 * fRam000000014686dad8;
      fVar21 = fVar56 * fVar26 * fRam000000014686dafc + fVar61 * fVar43 +
               fVar57 * fVar31 * fRam000000014686daec + fVar59 * fVar21 * fRam000000014686dadc;
    }
    else {
      fVar37 = fVar31 + fVar31;
      fVar40 = fVar21 + fVar21;
      fVar42 = (fVar26 + fVar26) * fVar26;
      fVar38 = (fVar26 + fVar26) * fVar43;
      fVar39 = fVar57 + fVar57;
      fVar41 = fVar59 + fVar59;
      fVar62 = (fVar40 * fVar43 + fVar37 * fVar26) * fVar30;
      fVar63 = (fVar38 + fVar40 * fVar31) * fVar33;
      fVar64 = (fVar37 * fVar43 + fVar40 * fVar26) * fVar34;
      fVar45 = fVar33 * (fVar37 * fVar26 - fVar40 * fVar43);
      fVar38 = fVar34 * (fVar40 * fVar31 - fVar38);
      fVar50 = fVar30 * (fVar40 * fVar26 - fVar37 * fVar43);
      fVar43 = (fVar56 + fVar56) * fVar56;
      fVar26 = (float)((uint)((_DAT_14686dab0 - (fVar40 * fVar21 + fVar37 * fVar31)) * fVar30) &
                      _DAT_14686dac0);
      fVar30 = (float)((uint)((fRam000000014686dab4 - (fVar40 * fVar21 + fVar42)) * fVar33) &
                      uRam000000014686dac4);
      fVar33 = (float)((uint)((fRam000000014686dab8 - (fVar37 * fVar31 + fVar42)) * fVar34) &
                      uRam000000014686dac8);
      fVar36 = (float)((uint)((fRam000000014686dabc - (fVar42 + fVar42)) * fVar36) &
                      uRam000000014686dacc);
      fVar21 = (fVar56 + fVar56) * fVar61;
      fVar42 = (fVar41 * fVar61 + fVar39 * fVar56) * fVar25;
      fVar58 = (fVar21 + fVar41 * fVar57) * fVar29;
      fVar60 = (fVar39 * fVar61 + fVar41 * fVar56) * fVar32;
      fVar37 = fVar29 * (fVar39 * fVar56 - fVar41 * fVar61);
      fVar40 = fVar32 * (fVar41 * fVar57 - fVar21);
      fVar56 = fVar25 * (fVar41 * fVar56 - fVar39 * fVar61);
      fVar21 = (float)((uint)((_DAT_14686dab0 - (fVar41 * fVar59 + fVar39 * fVar57)) * fVar25) &
                      _DAT_14686dac0);
      fVar31 = (float)((uint)((fRam000000014686dab4 - (fVar41 * fVar59 + fVar43)) * fVar29) &
                      uRam000000014686dac4);
      fVar34 = (float)((uint)((fRam000000014686dab8 - (fVar39 * fVar57 + fVar43)) * fVar32) &
                      uRam000000014686dac8);
      fVar43 = (float)((uint)((fRam000000014686dabc - (fVar43 + fVar43)) * fVar35) &
                      uRam000000014686dacc);
      local_508 = fVar42 * fVar45 + fVar21 * fVar26 + fVar56 * fVar64 + fVar43 * fVar46;
      fStack_504 = fVar42 * fVar30 + fVar21 * fVar62 + fVar56 * fVar38 + fVar43 * fVar48;
      fStack_500 = fVar42 * fVar63 + fVar21 * fVar50 + fVar56 * fVar33 + fVar43 * fVar51;
      fStack_4fc = fVar42 * fVar36 + fVar21 * fVar36 + fVar56 * fVar36 +
                   fVar43 * fRam000000014686dabc;
      local_4f8 = fVar31 * fVar45 + fVar37 * fVar26 + fVar58 * fVar64 + fVar43 * fVar46;
      fStack_4f4 = fVar31 * fVar30 + fVar37 * fVar62 + fVar58 * fVar38 + fVar43 * fVar48;
      fStack_4f0 = fVar31 * fVar63 + fVar37 * fVar50 + fVar58 * fVar33 + fVar43 * fVar51;
      fStack_4ec = fVar31 * fVar36 + fVar37 * fVar36 + fVar58 * fVar36 +
                   fVar43 * fRam000000014686dabc;
      local_4e8 = fVar40 * fVar45 + fVar60 * fVar26 + fVar34 * fVar64 + fVar43 * fVar46;
      fStack_4e4 = fVar40 * fVar30 + fVar60 * fVar62 + fVar34 * fVar38 + fVar43 * fVar48;
      fStack_4e0 = fVar40 * fVar63 + fVar60 * fVar50 + fVar34 * fVar33 + fVar43 * fVar51;
      fStack_4dc = fVar40 * fVar36 + fVar60 * fVar36 + fVar34 * fVar36 +
                   fVar43 * fRam000000014686dabc;
      local_4d8 = fVar54 * fVar45 + fVar52 * fVar26 + fVar55 * fVar64 +
                  fRam000000014686dabc * fVar46;
      fStack_4d4 = fVar54 * fVar30 + fVar52 * fVar62 + fVar55 * fVar38 +
                   fRam000000014686dabc * fVar48;
      fStack_4d0 = fVar54 * fVar63 + fVar52 * fVar50 + fVar55 * fVar33 +
                   fRam000000014686dabc * fVar51;
      fStack_4cc = fVar54 * fVar36 + fVar52 * fVar36 + fVar55 * fVar36 +
                   fRam000000014686dabc * fRam000000014686dabc;
      FMatrix::RemoveScaling(&local_508);
      fVar21 = (float)(-(uint)(_DAT_14686db10 <= fVar44) & (_DAT_14686db00 ^ (uint)_DAT_14686dab0) ^
                      _DAT_14686db00);
      fVar26 = (float)(-(uint)(fRam000000014686db14 <= fVar47) &
                       (uRam000000014686db04 ^ (uint)fRam000000014686dab4) ^ uRam000000014686db04);
      fVar31 = (float)(-(uint)(fRam000000014686db18 <= fVar49) &
                       (uRam000000014686db08 ^ (uint)fRam000000014686dab8) ^ uRam000000014686db08);
      local_508 = local_508 * fVar21;
      fStack_504 = fStack_504 * fVar21;
      fStack_500 = fStack_500 * fVar21;
      fStack_4f4 = fStack_4f4 * fVar26;
      fStack_4f0 = fStack_4f0 * fVar26;
      local_4f8 = local_4f8 * fVar26;
      fStack_4e4 = fStack_4e4 * fVar31;
      fStack_4e0 = fStack_4e0 * fVar31;
      local_4e8 = local_4e8 * fVar31;
      FQuat::FQuat(&local_518,&local_508);
      local_5a8 = 0x322bcc77;
      auVar28._0_4_ = (float)local_518 * (float)local_518 + fStack_510 * fStack_510;
      auVar28._4_4_ = local_518._4_4_ * local_518._4_4_ + fStack_50c * fStack_50c;
      auVar28._8_4_ = fStack_510 * fStack_510 + (float)local_518 * (float)local_518;
      auVar28._12_4_ = fStack_50c * fStack_50c + local_518._4_4_ * local_518._4_4_;
      fVar46 = auVar28._4_4_ + auVar28._0_4_;
      fVar48 = auVar28._8_4_ + auVar28._4_4_;
      fVar51 = auVar28._12_4_ + auVar28._8_4_;
      fVar33 = auVar28._0_4_ + auVar28._12_4_;
      auVar2._4_4_ = fVar48;
      auVar2._0_4_ = fVar46;
      auVar2._8_4_ = fVar51;
      auVar2._12_4_ = fVar33;
      auVar27 = rsqrtps(auVar28,auVar2);
      fVar21 = auVar27._0_4_;
      fVar26 = auVar27._4_4_;
      fVar31 = auVar27._8_4_;
      fVar30 = auVar27._12_4_;
      fVar21 = (_DAT_14686daa0 - fVar21 * fVar21 * fVar46 * _DAT_14686daa0) * fVar21 + fVar21;
      fVar26 = (fRam000000014686daa4 - fVar26 * fVar26 * fVar48 * fRam000000014686daa4) * fVar26 +
               fVar26;
      fVar31 = (fRam000000014686daa8 - fVar31 * fVar31 * fVar51 * fRam000000014686daa8) * fVar31 +
               fVar31;
      fVar30 = (fRam000000014686daac - fVar30 * fVar30 * fVar33 * fRam000000014686daac) * fVar30 +
               fVar30;
      auVar53._4_4_ = fStack_4d4;
      auVar53._0_4_ = local_4d8;
      auVar53._8_4_ = fStack_4d0;
      fVar46 = (float)(((uint)(((_DAT_14686daa0 - fVar21 * fVar21 * fVar46 * _DAT_14686daa0) *
                                fVar21 + fVar21) * (float)local_518) ^ _DAT_14686da90) &
                       -(uint)(1e-08 <= fVar46) ^ _DAT_14686da90);
      fVar48 = (float)(((uint)(((fRam000000014686daa4 -
                                fVar26 * fVar26 * fVar48 * fRam000000014686daa4) * fVar26 + fVar26)
                              * local_518._4_4_) ^ uRam000000014686da94) & -(uint)(1e-08 <= fVar48)
                      ^ uRam000000014686da94);
      fVar51 = (float)(((uint)(((fRam000000014686daa8 -
                                fVar31 * fVar31 * fVar51 * fRam000000014686daa8) * fVar31 + fVar31)
                              * fStack_510) ^ uRam000000014686da98) & -(uint)(1e-08 <= fVar51) ^
                      uRam000000014686da98);
      fVar21 = (float)(((uint)(((fRam000000014686daac -
                                fVar30 * fVar30 * fVar33 * fRam000000014686daac) * fVar30 + fVar30)
                              * fStack_50c) ^ uRam000000014686da9c) & -(uint)(1e-08 <= fVar33) ^
                      uRam000000014686da9c);
    }
    local_5a0 = local_5a0 * fVar44;
    local_59c = local_59c * fVar47;
    local_598 = local_598 * fVar49;
    fVar26 = local_598 * fVar48 - local_59c * fVar51;
    fVar31 = local_5a0 * fVar51 - local_598 * fVar46;
    fVar30 = local_59c * fVar46 - local_5a0 * fVar48;
    fVar26 = fVar26 + fVar26;
    fVar31 = fVar31 + fVar31;
    fVar30 = fVar30 + fVar30;
    local_5a0 = (fVar30 * fVar48 - fVar31 * fVar51) + fVar21 * fVar26 + local_5a0 + auVar53._0_4_;
    local_59c = (fVar26 * fVar51 - fVar30 * fVar46) + fVar21 * fVar31 + local_59c + auVar53._4_4_;
    local_598 = (fVar31 * fVar46 - fVar26 * fVar48) + fVar21 * fVar30 + local_598 + auVar53._8_4_;
    pfVar16 = (float *)FRotator::Vector(&local_530,&local_518);
    fVar44 = *pfVar16 * fVar44;
    fVar47 = pfVar16[1] * fVar47;
    fVar49 = pfVar16[2] * fVar49;
    fVar26 = fVar49 * fVar48 - fVar47 * fVar51;
    fVar31 = fVar44 * fVar51 - fVar49 * fVar46;
    fVar30 = fVar47 * fVar46 - fVar44 * fVar48;
    fVar26 = fVar26 + fVar26;
    fVar31 = fVar31 + fVar31;
    fVar30 = fVar30 + fVar30;
    local_588 = (fVar31 * fVar46 - fVar26 * fVar48) + fVar21 * fVar30 + fVar49;
    local_590 = (longlong *)
                CONCAT44((fVar26 * fVar51 - fVar30 * fVar46) + fVar21 * fVar31 + fVar47,
                         (fVar30 * fVar48 - fVar31 * fVar51) + fVar21 * fVar26 + fVar44);
    puVar13 = (undefined8 *)FVector::Rotation(&local_590,&local_570);
    local_530 = *puVar13;
    local_528 = *(undefined4 *)(puVar13 + 1);
  }
  FRotator::Vector(&local_530,&local_580);
  fVar21 = *(float *)(uVar20 + 0x54);
  lVar9 = plVar11[0x2d];
  local_560 = local_580 * fVar21 + local_5a0;
  local_55c = local_57c * fVar21 + local_59c;
  local_558 = local_578 * fVar21 + local_598;
  if (lVar9 == 0) {
    local_568 = DAT_1468b5d98;
    plVar14 = &local_570;
    local_570 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  else {
    plVar14 = &local_590;
    local_588 = *(float *)(lVar9 + 0x228);
    local_590 = *(longlong **)(lVar9 + 0x220);
  }
  local_518 = *plVar14;
  fStack_510 = (float)plVar14[1];
  FMath::ClosestPointOnSegment(&local_540,&local_518,&local_5a0,&local_560);
  fVar21 = SQRT((local_53c - local_59c) * (local_53c - local_59c) +
                (local_540 - local_5a0) * (local_540 - local_5a0) +
                (local_538 - local_598) * (local_538 - local_598));
  local_5b0 = _guard_xfg_dispatch_icall_nop(*(float *)(uVar20 + 0x70) * 0.008726646);
  bVar4 = false;
  local_5b0 = local_5b0 * (fVar21 + 100.0);
  if (*(float *)(uVar20 + 0x54) - fVar21 <= 0.0001) {
    FUN_14222da00(plVar11,1,&local_590,&local_570);
    fVar21 = (float)local_570;
    if ((float)local_570 <= local_570._4_4_) {
      fVar21 = local_570._4_4_;
    }
    if (fVar21 <= local_568) {
      fVar21 = local_568;
    }
    bVar4 = (fVar21 + local_5b0) * (fVar21 + local_5b0) <
            (local_590._4_4_ - local_55c) * (local_590._4_4_ - local_55c) +
            ((float)local_590 - local_560) * ((float)local_590 - local_560) +
            (local_588 - local_558) * (local_588 - local_558);
  }
  local_550 = 0;
  local_548 = 0;
  if (bVar4) {
    return;
  }
  local_5b8 = 1;
  cVar6 = FUN_142225d00(plVar11,&local_550,&local_540,0xf);
  if (cVar6 == '\0') goto LAB_140d1ac57;
  uVar12 = 0xffffffff;
  iVar8 = -1;
  local_5a8 = -1;
  uVar10 = FUN_142e64ca0();
  lVar9 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar10);
  if (lVar9 != 0) {
    uVar19 = uVar17;
    if ((int)local_548 < 1) goto LAB_140d1ac57;
    do {
      uVar15 = uVar19;
      lVar5 = local_550;
      lVar1 = local_550 + uVar17;
      uVar10 = FWeakObjectPtr::Get(local_550 + 0x10 + uVar17);
      FUN_142d3b4a0(lVar9,&local_518,uVar10,lVar1 + 0x18);
      iVar7 = (int)uVar12;
      iVar8 = (int)uVar15;
      if (local_518 == 0) {
        if (iVar7 == -1) {
          uVar12 = uVar15;
        }
      }
      else if (*(char *)(local_518 + 200) == '\0') {
        if (*(int *)(local_518 + 0xd8) == 0) {
LAB_140d1aa7a:
          if ((*(byte *)(local_518 + 0x48) & 2) == 0) {
            if (iVar7 == -1) {
              uVar12 = uVar15;
            }
          }
          else {
            fVar48 = *(float *)(lVar5 + uVar17) - local_5a0;
            fVar51 = *(float *)(lVar5 + 4 + uVar17) - local_59c;
            fVar30 = *(float *)(lVar5 + 8 + uVar17) - local_598;
            fVar46 = fVar51 * fVar51 + fVar48 * fVar48 + fVar30 * fVar30;
            fVar21 = fVar48;
            fVar26 = fVar51;
            fVar31 = fVar30;
            if ((fVar46 != 1.0) &&
               (fVar21 = DAT_1468b5d90, fVar26 = DAT_1468b5d94, fVar31 = DAT_1468b5d98,
               1e-08 <= fVar46)) {
              auVar27 = rsqrtss(ZEXT416((uint)fVar46),ZEXT416((uint)fVar46));
              fVar31 = auVar27._0_4_;
              fVar31 = fVar31 + fVar31 * (0.5 - fVar46 * 0.5 * fVar31 * fVar31);
              fVar31 = fVar31 + fVar31 * (0.5 - fVar46 * 0.5 * fVar31 * fVar31);
              local_590 = (longlong *)CONCAT44(local_590._4_4_,fVar31);
              fVar21 = fVar48 * fVar31;
              fVar26 = fVar51 * fVar31;
              fVar31 = fVar30 * fVar31;
            }
            fVar21 = fVar21 * local_580 + fVar26 * local_57c + fVar31 * local_578;
            if (-1.0 <= fVar21) {
              if (1.0 <= fVar21) {
                fVar21 = 1.0;
              }
            }
            else {
              fVar21 = -1.0;
            }
            fVar21 = _guard_xfg_dispatch_icall_nop(fVar21);
            fVar21 = fVar21 * 57.295776 + fVar21 * 57.295776;
            if (fVar21 < *(float *)(uVar20 + 0x70) || fVar21 == *(float *)(uVar20 + 0x70)) {
              uVar17 = uVar12;
              if (iVar7 != -1) goto LAB_140d1abd4;
              break;
            }
          }
        }
        else {
          plVar14 = *(longlong **)(local_518 + 0xd0);
          plVar11 = plVar14 + *(int *)(local_518 + 0xd8);
          if (plVar14 != plVar11) {
            do {
              if (*plVar14 == *(longlong *)(lVar1 + 0x18)) goto LAB_140d1aa7a;
              plVar14 = plVar14 + 1;
            } while (plVar14 != plVar11);
          }
        }
      }
      uVar15 = uVar12;
      uVar18 = iVar8 + 1;
      uVar17 = uVar17 + 0x20;
      uVar12 = uVar15;
      uVar19 = (ulonglong)uVar18;
      iVar8 = local_5a8;
    } while ((int)uVar18 < (int)local_548);
    uVar17 = uVar15;
    if ((int)uVar15 == -1) goto LAB_140d1ac57;
  }
LAB_140d1abd4:
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  local_590 = *(longlong **)(DAT_146b33f38 + 0x58);
  local_4a8 = &local_550;
  uStack_4a0 = &local_590;
  local_498 = &local_540;
  pfStack_490 = &local_5a0;
  local_488 = &local_580;
  puStack_480 = &local_530;
  FUN_140ce3450(&local_4a8,uVar17,local_4c0,local_4c8);
  if ((iVar8 != -1) && (iVar8 != (int)uVar17)) {
    FUN_140ce3450(&local_4a8,iVar8,local_4b0,local_4b8);
  }
LAB_140d1ac57:
  if (local_550 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d1acf0 FUN_140d1acf0 body=430 status=ok
// SIG undefined FUN_140d1acf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d1acf0(longlong *param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  if ((char)param_1[0x229] == '\0') {
    lVar3 = (**(code **)(*param_1 + 0x148))();
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = UWorld::GetWorldSettings(lVar3,0,1);
    }
    fVar6 = param_2 * *(float *)(param_1 + 0x1a);
    if (((lVar4 != 0) && (param_2 = *(float *)(lVar4 + 0x5f4), *(float *)(lVar4 + 0x5f4) <= fVar6))
       && (param_2 = *(float *)(lVar4 + 0x5f8), fVar6 <= *(float *)(lVar4 + 0x5f8))) {
      param_2 = fVar6;
    }
  }
  lVar4 = param_1[0x109];
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
    if (bVar1) {
      cVar2 = FUN_140cfdb70(param_1);
      if ((cVar2 != '\0') && (lVar3 = param_1[0xa5], lVar3 != 0)) {
        lVar5 = FUN_142fd5420();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong *)(lVar3 + 0x2ca0) != 0)) {
          lVar3 = FUN_1404b75e0();
          if (lVar3 != 0) {
            lVar5 = AGPoisonSplashProjectile::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar4 + 0x24c0);
              *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(lVar4 + 0x24c8);
            }
          }
        }
      }
      goto LAB_140d1ae5d;
    }
  }
  lVar4 = 0;
LAB_140d1ae5d:
  FUN_14271ab20(param_1,param_2);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x24c0) = _DAT_1468b5d90;
    *(undefined4 *)(lVar4 + 0x24c8) = DAT_1468b5d98;
  }
  return;
}



// FUNCTION 140d1aea0 FUN_140d1aea0 body=37 status=ok
// SIG undefined FUN_140d1aea0(void)

void FUN_140d1aea0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xaf4) = *(undefined4 *)(lVar1 + 0x2f0);
  }
  return;
}



// FUNCTION 140d1aed0 FUN_140d1aed0 body=710 status=ok
// SIG undefined FUN_140d1aed0(void)

void FUN_140d1aed0(longlong *param_1,float param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar8 = (**(code **)(*param_1 + 0x148))();
  if ((lVar8 != 0) && (lVar5 = *(longlong *)(lVar8 + 400), lVar5 != 0)) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar9 = *(longlong *)(DAT_146b33f38 + 0xd8);
      if ((lVar9 != 0) && (*(float *)(lVar9 + 0x138) != 0.0)) {
        lVar10 = (**(code **)(*param_1 + 0xfa8))(param_1);
        if ((param_3 == '\0') &&
           ((((cVar7 = UWorld::IsGameWorld(lVar8), cVar7 != '\0' &&
              (cVar7 = FUN_1428cfb10(lVar8), cVar7 == '\0')) &&
             (cVar7 = FUN_140bca6c0(lVar5), cVar7 == '\0')) &&
            ((cVar7 = FUN_140bca8a0(lVar5), cVar7 == '\0' && (param_1[0x12e] == 0)))))) {
          fVar3 = *(float *)(param_1 + 0x308);
          *(float *)(param_1 + 0x308) = param_2 + fVar3;
          bVar6 = *(float *)(lVar9 + 0x138) <= param_2 + fVar3;
          if (bVar6 != (bool)(char)param_1[0x14a]) {
            *(bool *)(param_1 + 0x14a) = bVar6;
            if (bVar6) {
              if ((lVar10 == 0) || (iVar4 = *(int *)(lVar10 + 0x48), iVar4 == 0)) {
                FUN_1414605a0(param_1);
              }
              else if ((iVar4 < 1) ||
                      (lVar8 = *(longlong *)
                                (*(longlong *)(lVar10 + 0x40) + -8 + (longlong)iVar4 * 8),
                      lVar8 == 0)) {
                FUN_1414605e0(param_1,0);
              }
              else {
                FUN_1414605e0(param_1,*(undefined8 *)(lVar8 + 0x38));
              }
            }
            plVar11 = (longlong *)FUN_142dcf3a0(param_1,local_48);
            lVar8 = *plVar11;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_40 + 1;
              lVar9 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_40)(local_40);
                LOCK();
                piVar1 = (int *)((longlong)local_40 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*local_40 + 8))(local_40,1);
                }
              }
            }
            if (lVar8 != 0) {
              puVar12 = (undefined8 *)FUN_142dcf3a0(param_1,local_38);
              local_58 = *puVar12;
              local_50 = (longlong *)puVar12[1];
              if (local_50 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_50 + 1) = (int)local_50[1] + 1;
                UNLOCK();
              }
              FUN_140beb560(lVar5,&local_58);
              plVar11 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_50 + 1;
                lVar8 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_50)(local_50);
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
              if (local_30 != (longlong *)0x0) {
                LOCK();
                plVar11 = local_30 + 1;
                lVar8 = *plVar11;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_30)(local_30);
                  LOCK();
                  piVar1 = (int *)((longlong)local_30 + 0xc);
                  iVar4 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*local_30 + 8))(local_30,1);
                  }
                }
              }
            }
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x308) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 140d1b1a0 FUN_140d1b1a0 body=194 status=ok
// SIG undefined FUN_140d1b1a0(void)

void FUN_140d1b1a0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  local_30 = (undefined4)param_1[0xd3];
  local_38 = param_1[0xd2];
  (**(code **)(*param_1 + 0x720))(local_38,local_28);
  plVar1 = (longlong *)param_1[0xa5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x800))(plVar1,param_2,local_28,&local_38);
  }
  (**(code **)(*param_1 + 0x728))(param_1,local_28,0);
  lVar2 = param_1[0x10a];
  if (lVar2 != 0) {
    lVar4 = AGTutorialStepVideo::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140a90fb0(lVar2);
    }
  }
  return;
}



// FUNCTION 140d1b270 FUN_140d1b270 body=291 status=ok
// SIG undefined FUN_140d1b270(void)

void FUN_140d1b270(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x488) != 0) {
    *(int *)(param_1 + 0xa40) = *(int *)(param_1 + 0xa40) + 1;
    if (*(uint *)(param_1 + 0xa40) == (*(uint *)(param_1 + 0xa40) / 600) * 600) {
      FUN_142dcf3a0(param_1,&local_28);
      if ((local_28 != 0) && (lVar5 = FUN_1422312c0(param_1), lVar5 != 0)) {
        lVar6 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_18 = local_28;
          plStack_10 = plStack_20;
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
            UNLOCK();
          }
          uVar7 = FUN_140bb7440(lVar5);
          FUN_140d9f870(uVar7,&local_18,0x1e);
        }
      }
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar2 = (int *)((longlong)plStack_20 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_20 + 8))(plStack_20,1);
          }
        }
      }
    }
    *(int *)(param_1 + 0xa48) = *(int *)(param_1 + 0xa48) + 1;
  }
  return;
}



// FUNCTION 140d1b3a0 FUN_140d1b3a0 body=224 status=ok
// SIG undefined FUN_140d1b3a0(void)

void FUN_140d1b3a0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    cVar2 = FUN_140d022f0();
    while (cVar2 == '\0') {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
        lVar4 = FUN_14203ca70();
        if (lVar4 != 0) {
          FUN_1420714f0(lVar4);
        }
      }
      else {
        FUN_142036de0();
      }
      cVar2 = FUN_140d022f0(param_1);
      if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x50);
        (**(code **)(*plVar1 + 0x20))(plVar1,5,0);
      }
      cVar2 = FUN_140d022f0(param_1);
    }
  }
  return;
}



// FUNCTION 140d1b480 FUN_140d1b480 body=71 status=ok
// SIG undefined FUN_140d1b480(void)

undefined1 FUN_140d1b480(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x1440) == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x1068);
    if (cVar1 != '\0') {
      return 1;
    }
    if ((*(longlong *)(param_1 + 0x1850) != 0) &&
       (cVar1 = AOCFarmedTile::IsHighlighted(), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d1b4d0 FUN_140d1b4d0 body=376 status=ok
// SIG undefined FUN_140d1b4d0(void)

void FUN_140d1b4d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_38;
  int local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  lVar6 = FUN_140cff230();
  if (lVar6 == 0) {
    return;
  }
  FUN_140d09060(param_1,lVar6);
  *(undefined4 *)(param_1 + 0x14a0) = 0xbf800000;
  FUN_140cf6690(param_1);
  cVar5 = FUN_140472310(lVar6);
  if (cVar5 == '\0') {
    return;
  }
  FUN_142dcf3a0(param_1,&local_28);
  if ((local_28 != 0) && (lVar6 = FUN_1422312c0(param_1), lVar6 != 0)) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      local_38 = (longlong *)0x0;
      local_30 = 0;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      FUN_140bea370(lVar6,&local_18,&local_38);
      if (local_30 != 0) {
        if (local_38 == (longlong *)0x0) goto LAB_140d1b605;
        (**(code **)(*local_38 + 0x28))(local_38,0);
        if (local_38 != (longlong *)0x0) {
          local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
        }
        local_30 = 0;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
LAB_140d1b605:
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plStack_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140d1b680 FUN_140d1b680 body=104 status=ok
// SIG undefined FUN_140d1b680(void)

undefined8 * FUN_140d1b680(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  *param_2 = &PTR_FUN_143f73d18;
  param_2[1] = *(undefined8 *)(lVar1 + 8);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  param_2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_2 = &PTR_FUN_143f740c8;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_140d22900(&local_18);
  return param_2;
}



// FUNCTION 140d1b6f0 FUN_140d1b6f0 body=138 status=ok
// SIG undefined FUN_140d1b6f0(void)

undefined8 * FUN_140d1b6f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 local_38 [32];
  longlong local_18;
  
  param_1 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)FUN_1424948e0(local_38);
  *param_2 = *param_1;
  param_2[1] = *puVar1;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar1 + 2);
  *(undefined1 *)((longlong)param_2 + 0x1c) = *(undefined1 *)((longlong)puVar1 + 0x14);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 3);
  param_2[5] = 0;
  param_2[5] = puVar1[4];
  puVar1[4] = 0;
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar1 + 5);
  *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)((longlong)puVar1 + 0x2c);
  puVar1[5] = 0;
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140d1b780 FUN_140d1b780 body=115 status=ok
// SIG undefined FUN_140d1b780(void)

uint FUN_140d1b780(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *_Buf1;
  ulonglong _Size;
  undefined8 *_Buf2;
  
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  _Buf1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Buf1 = (undefined8 *)*param_1;
  }
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  uVar3 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,_Size);
  if (uVar3 == 0) {
    if (uVar2 < uVar1) {
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3 >> 0x1f;
}



// FUNCTION 140d1b800 FUN_140d1b800 body=210 status=ok
// SIG undefined FUN_140d1b800(void)

undefined8 *
FUN_140d1b800(longlong *param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_143f77ac8;
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    plVar7[1] = param_3;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143f77b10;
  }
  *param_2 = 0;
  if (plVar7 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 140d1b8e0 FUN_140d1b8e0 body=210 status=ok
// SIG undefined FUN_140d1b8e0(void)

undefined8 *
FUN_140d1b8e0(longlong *param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_143fc2050;
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    plVar7[1] = param_3;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  *param_2 = 0;
  if (plVar7 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 140d1b9c0 FUN_140d1b9c0 body=418 status=ok
// SIG undefined FUN_140d1b9c0(void)

void FUN_140d1b9c0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  int local_res18;
  undefined8 local_58;
  undefined1 local_50 [24];
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  FUN_1409b8040(param_1,param_3 + param_5,param_4);
  puVar4 = (undefined1 *)*param_1;
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(puVar4 + 0x68);
    piVar5 = (int *)(param_2 + 0x10);
    local_res18 = param_3;
    do {
      *puVar4 = (char)piVar5[-4];
      *(undefined1 *)((longlong)puVar3 + -0x67) = *(undefined1 *)((longlong)piVar5 + -0xf);
      *(undefined1 *)((longlong)puVar3 + -0x66) = *(undefined1 *)((longlong)piVar5 + -0xe);
      puVar3[-0xc] = 0;
      iVar2 = *piVar5;
      _Src = *(void **)(piVar5 + -2);
      *(int *)(puVar3 + -0xb) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)puVar3 + -0x54) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar3 + -0xc,iVar2,0);
        _guard_xfg_dispatch_icall_nop((void *)puVar3[-0xc],_Src,(longlong)iVar2 << 2);
      }
      *(char *)(puVar3 + -10) = (char)piVar5[2];
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar3 + -9,piVar5 + 4);
      puVar3[-1] = 0;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + -4) = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + -0x1c) = 0;
      puVar3[-2] = 0;
      *(undefined4 *)puVar3 = 0;
      if (0x7fffffff < *(uint *)((longlong)puVar3 + 4)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3 + -1,0);
      }
      if ((undefined2 *)puVar3[-1] != (undefined2 *)0x0) {
        *(undefined2 *)puVar3[-1] = 0;
      }
      *(undefined4 *)(puVar3 + -3) = 0;
      *(int *)(puVar3 + -4) = piVar5[0xe];
      *(int *)((longlong)puVar3 + -0x1c) = piVar5[0xf];
      *(int *)(puVar3 + -3) = piVar5[0x10];
      local_58 = *(undefined8 *)(piVar5 + 0x12);
      FString::FString(local_50,piVar5 + 0x14);
      FSoftObjectPath::operator=(puVar3 + -2,&local_58);
      puVar4 = puVar4 + 0x78;
      *(int *)(puVar3 + 1) = piVar5[0x18];
      piVar1 = piVar5 + 0x19;
      piVar5 = piVar5 + 0x1e;
      *(char *)((longlong)puVar3 + 0xc) = (char)*piVar1;
      puVar3 = puVar3 + 0xf;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  return;
}



// FUNCTION 140d1bb70 CopyToEmpty<FCampaignTextureChange> body=321 status=ok
// SIG undefined CopyToEmpty<FCampaignTextureChange>(void)

void TArray<FCampaignTextureChange,FDefaultAllocator>::CopyToEmpty<FCampaignTextureChange>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 local_40 [24];
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy
            (param_1,param_5 + param_3,param_4);
  puVar2 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    puVar4 = (undefined4 *)(param_2 + 4);
    puVar3 = (undefined8 *)(puVar2 + 8);
    do {
      puVar3[-1] = 0;
      *puVar3 = 0;
      *puVar2 = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + -0x1c) = 0;
      puVar3[-2] = 0;
      *(undefined4 *)puVar3 = 0;
      if (0x7fffffff < *(uint *)((longlong)puVar3 + 4)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3 + -1,0);
      }
      if ((undefined2 *)puVar3[-1] != (undefined2 *)0x0) {
        *(undefined2 *)puVar3[-1] = 0;
      }
      *(undefined4 *)(puVar3 + -3) = 0;
      *puVar2 = puVar4[-1];
      *(undefined4 *)((longlong)puVar3 + -0x1c) = *puVar4;
      *(undefined4 *)(puVar3 + -3) = puVar4[1];
      FString::FString(local_40,puVar4 + 5);
      FSoftObjectPath::operator=(puVar3 + -2);
      puVar2 = puVar2 + 0xe;
      *(undefined4 *)(puVar3 + 1) = puVar4[9];
      *(undefined4 *)((longlong)puVar3 + 0xc) = puVar4[10];
      puVar1 = puVar4 + 0xb;
      puVar4 = puVar4 + 0xe;
      *(undefined4 *)(puVar3 + 2) = *puVar1;
      puVar3 = puVar3 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d1bcc0 FUN_140d1bcc0 body=231 status=ok
// SIG undefined FUN_140d1bcc0(void)

void FUN_140d1bcc0(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  lVar2 = *param_1;
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_2 + 0x10);
    do {
      FString::FString(lVar2,puVar3 + -2);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      iVar1 = *(int *)(puVar3 + 1);
      _Src = (void *)*puVar3;
      *(int *)(lVar2 + 0x18) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(lVar2 + 0x1c) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(lVar2 + 0x10,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar2 + 0x10),_Src,(longlong)iVar1 * 0x18);
      }
      lVar2 = lVar2 + 0x20;
      puVar3 = puVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d1bdb0 CopyToEmpty<FSBZLootValueArray,int> body=223 status=ok
// SIG undefined CopyToEmpty<FSBZLootValueArray,int>(void)

void TArray<FSBZLootValueArray,TSizedDefaultAllocator<32>_>::CopyToEmpty<FSBZLootValueArray,int>
               (longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  lVar2 = *param_1;
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_2 + 0x10);
    do {
      FString::FString(lVar2,puVar3 + -2);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      iVar1 = *(int *)(puVar3 + 1);
      _Src = (void *)*puVar3;
      *(int *)(lVar2 + 0x18) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(lVar2 + 0x1c) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(lVar2 + 0x10,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(lVar2 + 0x10),_Src,(longlong)iVar1 << 3);
      }
      lVar2 = lVar2 + 0x20;
      puVar3 = puVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d1be90 FUN_140d1be90 body=230 status=ok
// SIG undefined FUN_140d1be90(void)

void FUN_140d1be90(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5);
  puVar5 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    plVar4 = (longlong *)(param_2 + 0x38);
    puVar3 = puVar5 + 9;
    do {
      *puVar5 = &PTR_FUN_143f73d18;
      puVar3[-8] = plVar4[-6];
      lVar2 = plVar4[-5];
      puVar3[-7] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      *puVar5 = &PTR_FUN_143f740c8;
      puVar3[-6] = 0;
      puVar3[-5] = 0;
      puVar3[-4] = &PTR_FUN_143f73d18;
      puVar3[-3] = plVar4[-1];
      lVar2 = *plVar4;
      puVar3[-2] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar3[-4] = &PTR_FUN_143f740c8;
      puVar5 = puVar5 + 0xb;
      puVar3[-1] = 0;
      *puVar3 = 0;
      plVar1 = plVar4 + 3;
      plVar4 = plVar4 + 0xb;
      *(char *)(puVar3 + 1) = (char)*plVar1;
      puVar3 = puVar3 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d1bf80 FUN_140d1bf80 body=395 status=ok
// SIG undefined FUN_140d1bf80(void)

void FUN_140d1bf80(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  piVar5 = (int *)*param_1;
  if (param_3 != 0) {
    piVar4 = (int *)(param_2 + 0x40);
    piVar3 = piVar5 + 0xd;
    do {
      *piVar5 = piVar4[-0x10];
      *(undefined8 *)(piVar3 + -0xb) = *(undefined8 *)(piVar4 + -0xe);
      piVar3[-9] = piVar4[-0xc];
      piVar3[-8] = piVar4[-0xb];
      piVar3[-7] = piVar4[-10];
      piVar3[-6] = piVar4[-9];
      piVar3[-5] = piVar4[-8];
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      iVar1 = piVar4[-4];
      pvVar2 = *(void **)(piVar4 + -6);
      piVar3[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar3 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar3 + -3,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(piVar3 + -3),pvVar2,(longlong)iVar1 << 3);
      }
      piVar3[1] = 0;
      piVar3[2] = 0;
      iVar1 = *piVar4;
      pvVar2 = *(void **)(piVar4 + -2);
      piVar3[3] = iVar1;
      if (iVar1 == 0) {
        piVar3[4] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar3 + 1,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(piVar3 + 1),pvVar2,(longlong)iVar1 << 3);
      }
      piVar3[5] = 0;
      piVar3[6] = 0;
      iVar1 = piVar4[4];
      pvVar2 = *(void **)(piVar4 + 2);
      piVar3[7] = iVar1;
      if (iVar1 == 0) {
        piVar3[8] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar3 + 5,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(piVar3 + 5),pvVar2,(longlong)iVar1 << 3);
      }
      piVar5 = piVar5 + 0x16;
      piVar3 = piVar3 + 0x16;
      piVar4 = piVar4 + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d1c110 FUN_140d1c110 body=348 status=ok
// SIG undefined FUN_140d1c110(void)

undefined8 * FUN_140d1c110(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x50,local_18);
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
    *puVar10 = &PTR_GetPoolName_143f4d350;
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
    *puVar10 = &PTR_GetPoolName_143f4d398;
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



// FUNCTION 140d1c270 FUN_140d1c270 body=348 status=ok
// SIG undefined FUN_140d1c270(void)

undefined8 * FUN_140d1c270(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x50,local_18);
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



// FUNCTION 140d1c3d0 FUN_140d1c3d0 body=348 status=ok
// SIG undefined FUN_140d1c3d0(void)

undefined8 * FUN_140d1c3d0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x50,local_18);
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
    *puVar10 = &PTR_GetPoolName_143f4d3e0;
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
    *puVar10 = &PTR_GetPoolName_143f4d428;
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



// FUNCTION 140d1c530 FUN_140d1c530 body=57 status=ok
// SIG undefined FUN_140d1c530(void)

longlong FUN_140d1c530(longlong *param_1,undefined8 param_2)

{
  int local_res8 [2];
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_140d1c5b0(param_1,local_res8,local_res10,0);
  return *param_1 + (longlong)local_res8[0] * 0x10 + 4;
}



// FUNCTION 140d1c570 FUN_140d1c570 body=57 status=ok
// SIG undefined FUN_140d1c570(void)

longlong FUN_140d1c570(longlong *param_1,undefined8 param_2)

{
  int local_res8 [2];
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_140d1d100(param_1,local_res8,local_res10,0);
  return *param_1 + (longlong)local_res8[0] * 0x40 + 8;
}



// FUNCTION 140d1c5b0 FUN_140d1c5b0 body=386 status=ok
// SIG undefined FUN_140d1c5b0(void)

int * FUN_140d1c5b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (uint *)*param_3;
  bVar7 = false;
  *param_2 = local_38[0];
  *local_30 = *puVar1;
  *(undefined1 *)(local_30 + 1) = 0;
  local_30[2] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x10) == *local_30) goto LAB_140d1c66a;
          iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_140d1c66a:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x10 + *param_1),local_30,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_140d1c70a;
    }
  }
  cVar2 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[3] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[2] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_140d1c70a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 140d1c740 FUN_140d1c740 body=617 status=ok
// SIG undefined FUN_140d1c740(void)

int * FUN_140d1c740(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  char cVar10;
  void *_Src;
  bool bVar11;
  int local_res8 [2];
  
  iVar8 = 1;
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
  FUN_140d1b680(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x38) = 0xffffffff;
  bVar11 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140d2cd70(param_1,local_res8,_Src);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)local_res8[0] * 0x40 + *param_1);
      FUN_140d22900((longlong)_Dst + 0x28);
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140d1c980;
    }
  }
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar9) {
    uVar5 = (uVar9 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar10 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar8;
    }
    uVar5 = (uVar9 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar10 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar8 = *param_2;
    if ((*(longlong **)((longlong)_Src + 8) == (longlong *)0x0) ||
       (cVar10 = (**(code **)(**(longlong **)((longlong)_Src + 8) + 0x20))(), cVar10 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar9 = GetTypeHash(*(undefined8 *)((longlong)_Src + 8));
    }
    else {
      uVar9 = 0xffffffff;
    }
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)_Src + 0x3c) = uVar9;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x38) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) = iVar8
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_140d47e60(param_1);
  }
LAB_140d1c980:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 140d1c9b0 FUN_140d1c9b0 body=734 status=ok
// SIG undefined FUN_140d1c9b0(void)

int * FUN_140d1c9b0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  bool local_res8;
  
  iVar6 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar10 * 0x20 + *param_1);
  lVar2 = *(longlong *)*param_3;
  *plVar13 = lVar2;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *(undefined4 *)(plVar13 + 3) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)((longlong)iVar8 * 0x20 + *param_1) == lVar2) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x18);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar6;
      }
      puVar7 = (undefined4 *)((longlong)iVar6 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar7[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140d1cc65;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar14;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x1c) = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140d1cc65:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140d1cc90 FUN_140d1cc90 body=462 status=ok
// SIG undefined FUN_140d1cc90(void)

int * FUN_140d1cc90(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  void *_Dst;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  lVar2 = *param_3;
  plVar6 = local_30 + 1;
  *param_2 = local_38[0];
  *local_30 = &PTR_FUN_143f73d18;
  *plVar6 = *(longlong *)(lVar2 + 8);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  local_30[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *local_30 = &PTR_FUN_143f740c8;
  bVar7 = false;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  *(undefined4 *)(local_30 + 7) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140d2cd70(param_1,local_res8,local_30);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)local_res8[0] * 0x40 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140d1ce35;
    }
  }
  cVar4 = FUN_140d29bf0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 != '\0') goto LAB_140d1ce35;
  iVar1 = *param_2;
  if ((longlong *)*plVar6 == (longlong *)0x0) {
LAB_140d1cdca:
    bVar3 = false;
  }
  else {
    cVar4 = (**(code **)(*(longlong *)*plVar6 + 0x20))();
    if (cVar4 == '\0') goto LAB_140d1cdca;
    bVar3 = true;
  }
  if (bVar3) {
    uVar5 = GetTypeHash(*plVar6);
  }
  else {
    uVar5 = 0xffffffff;
  }
  uVar5 = (int)param_1[9] - 1U & uVar5;
  *(uint *)((longlong)local_30 + 0x3c) = uVar5;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  *(undefined4 *)(local_30 + 7) =
       *(undefined4 *)
        ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1;
LAB_140d1ce35:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 140d1ce60 FUN_140d1ce60 body=665 status=ok
// SIG undefined FUN_140d1ce60(void)

int * FUN_140d1ce60(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  void *_Dst;
  uint uVar10;
  char cVar11;
  undefined8 *_Src;
  bool bVar12;
  int local_res8 [2];
  
  iVar9 = 1;
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
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
  lVar4 = *param_3;
  _Src = (undefined8 *)((longlong)iVar7 * 0x40 + *param_1);
  *_Src = &PTR_FUN_143f73d18;
  _Src[1] = *(undefined8 *)(lVar4 + 8);
  lVar4 = *(longlong *)(lVar4 + 0x10);
  _Src[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  bVar12 = false;
  *_Src = &PTR_FUN_143f740c8;
  _Src[3] = 0;
  _Src[4] = 0;
  *(undefined4 *)(_Src + 5) = 0;
  *(undefined4 *)((longlong)_Src + 0x2c) = 0;
  *(undefined4 *)(_Src + 6) = 0;
  *(undefined4 *)((longlong)_Src + 0x34) = 0;
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140d2cd70(param_1,local_res8,_Src);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)local_res8[0] * 0x40 + *param_1);
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140d1d0d0;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar6 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar6 != 0) {
      iVar7 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = *param_2;
    if (((longlong *)_Src[1] == (longlong *)0x0) ||
       (cVar11 = (**(code **)(*(longlong *)_Src[1] + 0x20))(), cVar11 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar10 = GetTypeHash(_Src[1]);
    }
    else {
      uVar10 = 0xffffffff;
    }
    uVar10 = (int)param_1[9] - 1U & uVar10;
    *(uint *)((longlong)_Src + 0x3c) = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 7) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_140d47e60(param_1);
  }
LAB_140d1d0d0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 140d1d100 FUN_140d1d100 body=650 status=ok
// SIG undefined FUN_140d1d100(void)

int * FUN_140d1d100(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  void *_Dst;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  bool local_res8;
  
  uVar10 = 0xffffffff;
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar7 = *(int *)((longlong)iVar12 * 0x40 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar12 * 0x40 + *param_1);
  FUN_140d1b6f0(param_3,plVar13);
  *(undefined4 *)(plVar13 + 7) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar12 != 1) {
    lVar2 = *plVar13;
    iVar8 = iVar9;
    if (iVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x40 + *param_1) == lVar2) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x40 + 0x38 + *param_1);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x40 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x38);
      iVar9 = *param_2;
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar9;
      }
      puVar6 = (undefined4 *)((longlong)iVar9 * 0x40 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140d1d366;
    }
  }
  cVar4 = FUN_140d29d50(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar11 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x3c) = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 7) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_140d1d366:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140d1d390 FUN_140d1d390 body=585 status=ok
// SIG undefined FUN_140d1d390(void)

int * FUN_140d1d390(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  void *_Dst;
  bool bVar9;
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  lVar8 = *param_3;
  puVar1 = (undefined4 *)param_3[1];
  plVar7 = local_30 + 1;
  *param_2 = local_38[0];
  *local_30 = &PTR_FUN_143f73d18;
  *plVar7 = *(longlong *)(lVar8 + 8);
  lVar8 = *(longlong *)(lVar8 + 0x10);
  local_30[2] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *local_30 = &PTR_FUN_143f740c8;
  bVar9 = false;
  local_30[3] = 0;
  local_30[4] = 0;
  *(undefined4 *)(local_30 + 5) = *puVar1;
  *(undefined4 *)(local_30 + 6) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if (((longlong *)*plVar7 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*(longlong *)*plVar7 + 0x20))(), cVar3 == '\0')) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        iVar4 = GetTypeHash(*plVar7);
      }
      else {
        iVar4 = -1;
      }
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar4) * 4);
      if (iVar4 != -1) {
        lVar8 = *param_1;
        do {
          cVar3 = FUniqueNetIdWrapper::operator==(lVar8 + (longlong)iVar4 * 0x38,local_30);
          if (cVar3 != '\0') goto LAB_140d1d4c7;
          lVar8 = *param_1;
          iVar4 = *(int *)((longlong)iVar4 * 0x38 + 0x30 + lVar8);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_140d1d4c7:
    bVar9 = iVar4 != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)iVar4 * 0x38 + *param_1);
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_140d1d5ac;
    }
  }
  uVar5 = 0xffffffff;
  cVar3 = FUN_140d29ca0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar4 = *param_2;
    if (((longlong *)*plVar7 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*(longlong *)*plVar7 + 0x20))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar5 = GetTypeHash(*plVar7);
    }
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_30 + 0x34) = uVar5;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 6) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar4
    ;
  }
LAB_140d1d5ac:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 140d1d5e0 FUN_140d1d5e0 body=708 status=ok
// SIG undefined FUN_140d1d5e0(void)

int * FUN_140d1d5e0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  void *_Dst;
  undefined8 *_Src;
  bool bVar11;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar7 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  lVar10 = *param_3;
  _Src = (undefined8 *)((longlong)iVar7 * 0x38 + *param_1);
  puVar3 = (undefined8 *)param_3[1];
  *_Src = &PTR_FUN_143f73d18;
  _Src[1] = *(undefined8 *)(lVar10 + 8);
  lVar10 = *(longlong *)(lVar10 + 0x10);
  _Src[2] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  bVar11 = false;
  *_Src = &PTR_FUN_143f740c8;
  uVar8 = 0xffffffff;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = *puVar3;
  *(undefined4 *)(_Src + 6) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if ((longlong *)_Src[1] == (longlong *)0x0) {
LAB_140d1d729:
        bVar11 = false;
      }
      else {
        cVar5 = (**(code **)(*(longlong *)_Src[1] + 0x20))();
        if (cVar5 == '\0') goto LAB_140d1d729;
        bVar11 = true;
      }
      if (bVar11) {
        iVar7 = GetTypeHash(_Src[1]);
      }
      else {
        iVar7 = -1;
      }
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar7) * 4);
      if (iVar7 != -1) {
        lVar10 = *param_1;
        do {
          cVar5 = FUniqueNetIdWrapper::operator==(lVar10 + (longlong)iVar7 * 0x38,_Src);
          if (cVar5 != '\0') goto LAB_140d1d797;
          lVar10 = *param_1;
          iVar7 = *(int *)((longlong)iVar7 * 0x38 + 0x30 + lVar10);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_140d1d797:
    bVar11 = iVar7 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar7 * 0x38 + *param_1);
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_140d1d877;
    }
  }
  cVar5 = FUN_140d29ca0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 != '\0') goto LAB_140d1d877;
  iVar7 = *param_2;
  if ((longlong *)_Src[1] == (longlong *)0x0) {
LAB_140d1d80f:
    bVar4 = false;
  }
  else {
    cVar5 = (**(code **)(*(longlong *)_Src[1] + 0x20))();
    if (cVar5 == '\0') goto LAB_140d1d80f;
    bVar4 = true;
  }
  if (bVar4) {
    uVar8 = GetTypeHash(_Src[1]);
  }
  uVar8 = (int)param_1[9] - 1U & uVar8;
  *(uint *)((longlong)_Src + 0x34) = uVar8;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  *(undefined4 *)(_Src + 6) =
       *(undefined4 *)
        ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) = iVar7;
LAB_140d1d877:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 140d1d8b0 FUN_140d1d8b0 body=827 status=ok
// SIG undefined FUN_140d1d8b0(void)

int * FUN_140d1d8b0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  void *_Dst;
  uint uVar13;
  undefined8 *_Src;
  bool bVar14;
  
  iVar12 = 1;
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
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
  lVar10 = *param_3;
  _Src = (undefined8 *)((longlong)iVar7 * 0x40 + *param_1);
  puVar4 = (undefined8 *)param_3[1];
  *_Src = &PTR_FUN_143f73d18;
  _Src[1] = *(undefined8 *)(lVar10 + 8);
  lVar10 = *(longlong *)(lVar10 + 0x10);
  _Src[2] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  *_Src = &PTR_FUN_143f740c8;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = *puVar4;
  lVar10 = puVar4[1];
  _Src[6] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  bVar14 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if (((longlong *)_Src[1] == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*(longlong *)_Src[1] + 0x20))(), cVar6 == '\0')) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (bVar14) {
        iVar7 = GetTypeHash(_Src[1]);
      }
      else {
        iVar7 = -1;
      }
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar7) * 4);
      if (iVar7 != -1) {
        lVar10 = *param_1;
        do {
          cVar6 = FUniqueNetIdWrapper::operator==((longlong)iVar7 * 0x40 + lVar10,_Src);
          if (cVar6 != '\0') goto LAB_140d1da88;
          lVar10 = *param_1;
          iVar7 = *(int *)((longlong)iVar7 * 0x40 + 0x38 + lVar10);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_140d1da88:
    bVar14 = iVar7 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar7 * 0x40 + *param_1);
      FUN_140d23320(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_140d1dbbe;
    }
  }
  uVar9 = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar8 = (uVar13 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar6 = '\0';
    if (uVar8 != 0) {
      iVar7 = 0x1f - iVar12;
    }
    uVar8 = (uVar13 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar6 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar6 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = *param_2;
    if (((longlong *)_Src[1] == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*(longlong *)_Src[1] + 0x20))(), cVar6 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar9 = GetTypeHash(_Src[1]);
    }
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)_Src + 0x3c) = uVar9;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 7) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_140d47e60(param_1);
  }
LAB_140d1dbbe:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 140d1dbf0 FUN_140d1dbf0 body=467 status=ok
// SIG undefined FUN_140d1dbf0(void)

int * FUN_140d1dbf0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  void *_Dst;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  lVar2 = *param_3;
  lVar3 = param_3[1];
  plVar7 = local_30 + 1;
  *param_2 = local_38[0];
  *local_30 = &PTR_FUN_143f73d18;
  *plVar7 = *(longlong *)(lVar2 + 8);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  local_30[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *local_30 = &PTR_FUN_143f740c8;
  local_30[3] = 0;
  local_30[4] = 0;
  FString::FString(local_30 + 5,lVar3);
  *(undefined4 *)(local_30 + 7) = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140d2cd70(param_1,local_res8,local_30);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)local_res8[0] * 0x40 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140d1dd9a;
    }
  }
  cVar5 = FUN_140d29bf0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 != '\0') goto LAB_140d1dd9a;
  iVar1 = *param_2;
  if ((longlong *)*plVar7 == (longlong *)0x0) {
LAB_140d1dd2f:
    bVar4 = false;
  }
  else {
    cVar5 = (**(code **)(*(longlong *)*plVar7 + 0x20))();
    if (cVar5 == '\0') goto LAB_140d1dd2f;
    bVar4 = true;
  }
  if (bVar4) {
    uVar6 = GetTypeHash(*plVar7);
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar6 = (int)param_1[9] - 1U & uVar6;
  *(uint *)((longlong)local_30 + 0x3c) = uVar6;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  *(undefined4 *)(local_30 + 7) =
       *(undefined4 *)
        ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar1;
LAB_140d1dd9a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 140d1ddd0 FUN_140d1ddd0 body=57 status=ok
// SIG undefined FUN_140d1ddd0(void)

longlong FUN_140d1ddd0(longlong *param_1,undefined8 param_2)

{
  int local_res8 [2];
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_140d1c9b0(param_1,local_res8,local_res10,0);
  return *param_1 + (longlong)local_res8[0] * 0x20 + 8;
}



// FUNCTION 140d1de10 Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0>::Level> body=176 status=ok
// SIG undefined Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0>::Level>(void)

void rapidjson::internal::Stack<rapidjson::CrtAllocator>::
     Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0>::Level>
               (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  void *pvVar2;
  void *_Memory;
  ulonglong uVar3;
  ulonglong _NewSize;
  
  pvVar2 = (void *)0x0;
  _Memory = (void *)param_1[2];
  if (_Memory == (void *)0x0) {
    _Memory = pvVar2;
    if (*param_1 == 0) {
      lVar1 = operator_new(1);
      _Memory = (void *)param_1[2];
      *param_1 = lVar1;
      param_1[1] = lVar1;
    }
    uVar3 = param_1[5];
  }
  else {
    uVar3 = (param_1[4] - (longlong)_Memory) + ((param_1[4] - (longlong)_Memory) + 1U >> 1);
  }
  lVar1 = param_1[3];
  _NewSize = (param_2 * 0x10 - (longlong)_Memory) + lVar1;
  if (_NewSize <= uVar3) {
    _NewSize = uVar3;
  }
  if (_NewSize == 0) {
    free(_Memory);
  }
  else {
    pvVar2 = realloc(_Memory,_NewSize);
  }
  param_1[2] = (longlong)pvVar2;
  param_1[3] = (longlong)pvVar2 + (lVar1 - (longlong)_Memory);
  param_1[4] = _NewSize + (longlong)pvVar2;
  return;
}



// FUNCTION 140d1dec0 FUN_140d1dec0 body=137 status=ok
// SIG undefined FUN_140d1dec0(void)

longlong FUN_140d1dec0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar3 = *param_1;
  lVar2 = (longlong)(int)param_1[1] * 0x80 + lVar3;
  while( true ) {
    if (lVar3 == lVar2) {
      return 0;
    }
    FUN_142fde6b0(local_28,lVar3,1);
    cVar1 = FUN_1430190b0(param_2,local_28);
    if (local_20 != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') break;
    lVar3 = lVar3 + 0x80;
  }
  return lVar3;
}



// FUNCTION 140d1df50 FUN_140d1df50 body=69 status=ok
// SIG undefined FUN_140d1df50(void)

ulonglong FUN_140d1df50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1430228e0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140d1dfa0 FUN_140d1dfa0 body=69 status=ok
// SIG undefined FUN_140d1dfa0(void)

ulonglong FUN_140d1dfa0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_14142e810();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140d1dff0 LoadObject<UTexture2D> body=94 status=ok
// SIG undefined LoadObject<UTexture2D>(void)

void LoadObject<UTexture2D>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = UTexture2D::GetPrivateStaticClass();
  FUN_141799c90(uVar1,param_1,param_2,param_3,param_4,param_5,1);
  return;
}



// FUNCTION 140d1e050 FUN_140d1e050 body=170 status=ok
// SIG undefined FUN_140d1e050(void)

undefined8 * FUN_140d1e050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144510a70;
    _guard_xfg_dispatch_icall_nop(puVar1 + 3,0,0x78);
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 2;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 2;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 2;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 2;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140d1e100 NewObject<UTextPropertyTestObject> body=89 status=ok
// SIG undefined NewObject<UTextPropertyTestObject>(void)

void NewObject<UTextPropertyTestObject>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UTextPropertyTestObject::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140d1e160 FUN_140d1e160 body=18 status=ok
// SIG undefined FUN_140d1e160(void)

void FUN_140d1e160(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1439efb50(param_1,param_2,
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _Tidy_deallocate);
    return;
  }
  return;
}



// FUNCTION 140d1e180 FUN_140d1e180 body=18 status=ok
// SIG undefined FUN_140d1e180(void)

void FUN_140d1e180(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1439efb50(param_1,param_2,&LAB_140d1e6c0);
    return;
  }
  return;
}



// FUNCTION 140d1e1a0 FUN_140d1e1a0 body=161 status=ok
// SIG undefined FUN_140d1e1a0(void)

undefined8 *
FUN_140d1e1a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_140d58e00();
    *(undefined2 *)(puVar1 + 3) = 0;
    puVar1[4] = param_2[4];
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    uVar2 = FUN_140d1e1a0(param_1,*param_2,puVar1,param_4);
    *puVar1 = uVar2;
    uVar2 = FUN_140d1e1a0(param_1,param_2[2],puVar1,param_4);
    puVar1[2] = uVar2;
  }
  return puVar3;
}



// FUNCTION 140d1e250 FUN_140d1e250 body=655 status=ok
// SIG undefined FUN_140d1e250(void)

undefined8 *
FUN_140d1e250(longlong param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (0xfffffffffffffffd < *(ulonglong *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    std::_guard_xfg_dispatch_icall_nop("map/set<T> too long");
  }
  plVar6 = (longlong *)FUN_140d58e00();
  *(undefined2 *)(plVar6 + 3) = 0;
  plVar6[4] = *param_5;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  plVar6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*plVar1) {
    ((undefined8 *)*plVar1)[1] = plVar6;
    *(longlong **)*plVar1 = plVar6;
    lVar7 = *plVar1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = plVar6;
      if (param_4 == *(undefined8 **)*plVar1) {
        *(longlong **)*plVar1 = plVar6;
      }
      goto LAB_140d1e2e2;
    }
    param_4[2] = plVar6;
    lVar7 = *plVar1;
    if (param_4 != *(undefined8 **)(lVar7 + 0x10)) goto LAB_140d1e2e2;
  }
  *(longlong **)(lVar7 + 0x10) = plVar6;
LAB_140d1e2e2:
  cVar2 = *(char *)(plVar6[1] + 0x18);
  plVar11 = plVar6;
  do {
    if (cVar2 != '\0') {
      lVar7 = *(longlong *)(*plVar1 + 8);
      *param_2 = plVar6;
      *(undefined1 *)(lVar7 + 0x18) = 1;
      return param_2;
    }
    plVar3 = (longlong *)plVar11[1];
    plVar9 = plVar11 + 1;
    plVar10 = plVar3 + 1;
    lVar7 = *(longlong *)plVar3[1];
    if (plVar3 == (longlong *)lVar7) {
      lVar7 = ((longlong *)plVar3[1])[2];
      if (*(char *)(lVar7 + 0x18) != '\0') {
        plVar4 = (longlong *)plVar3[2];
        plVar8 = plVar3;
        if (plVar11 == plVar4) {
          plVar3[2] = *plVar4;
          if (*(char *)(*plVar4 + 0x19) == '\0') {
            *(longlong **)(*plVar4 + 8) = plVar3;
          }
          plVar4[1] = *plVar10;
          plVar8 = plVar4;
          plVar9 = plVar10;
          if (plVar3 == (longlong *)*(longlong *)(*plVar1 + 8)) {
            *(longlong **)(*plVar1 + 8) = plVar4;
            *plVar4 = (longlong)plVar3;
            *plVar10 = (longlong)plVar4;
            plVar11 = plVar3;
          }
          else {
            plVar11 = (longlong *)*plVar10;
            if (plVar3 == (longlong *)*plVar11) {
              *plVar11 = (longlong)plVar4;
              *plVar4 = (longlong)plVar3;
              *plVar10 = (longlong)plVar4;
              plVar11 = plVar3;
            }
            else {
              plVar11[2] = (longlong)plVar4;
              *plVar4 = (longlong)plVar3;
              *plVar10 = (longlong)plVar4;
              plVar11 = plVar3;
            }
          }
        }
        *(undefined1 *)(plVar8 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar9 + 8) + 0x18) = 0;
        plVar9 = *(longlong **)(*plVar9 + 8);
        plVar10 = (longlong *)*plVar9;
        *plVar9 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar9;
        }
        plVar10[1] = plVar9[1];
        if (plVar9 == *(longlong **)(*plVar1 + 8)) {
          *(longlong **)(*plVar1 + 8) = plVar10;
          plVar10[2] = (longlong)plVar9;
        }
        else {
          plVar3 = (longlong *)plVar9[1];
          if (plVar9 == (longlong *)plVar3[2]) {
            plVar3[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
          else {
            *plVar3 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
        }
        goto LAB_140d1e495;
      }
LAB_140d1e406:
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(lVar7 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar9 + 8) + 0x18) = 0;
      plVar11 = *(longlong **)(*plVar9 + 8);
    }
    else {
      if (*(char *)(lVar7 + 0x18) == '\0') goto LAB_140d1e406;
      if (plVar11 == (longlong *)*plVar3) {
        std::
        _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
        ::_Rrotate(plVar1,plVar3);
        plVar11 = plVar3;
      }
      *(undefined1 *)(plVar11[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar11[1] + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(plVar11[1] + 8);
      plVar10 = (longlong *)plVar9[2];
      plVar9[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(longlong **)(*plVar10 + 8) = plVar9;
      }
      plVar10[1] = plVar9[1];
      if (plVar9 == *(longlong **)(*plVar1 + 8)) {
        *(longlong **)(*plVar1 + 8) = plVar10;
      }
      else {
        puVar5 = (undefined8 *)plVar9[1];
        if (plVar9 == (longlong *)*puVar5) {
          *puVar5 = plVar10;
        }
        else {
          puVar5[2] = plVar10;
        }
      }
      *plVar10 = (longlong)plVar9;
LAB_140d1e495:
      plVar9[1] = (longlong)plVar10;
    }
    cVar2 = *(char *)(plVar11[1] + 0x18);
  } while( true );
}



// FUNCTION 140d1e4e0 _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64> body=376 status=ok
// SIG undefined _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
_Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
          (undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,size_t param_5)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Src;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *_Dst;
  
  _Size = param_1[2];
  if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    _Xlen();
  }
  uVar1 = param_1[3];
  uVar3 = _Size + param_2 | 0xf;
  uVar5 = 0x7fffffffffffffff;
  if (((uVar3 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
     (uVar4 = (uVar1 >> 1) + uVar1, uVar5 = uVar3, uVar3 < uVar4)) {
    uVar5 = uVar4;
  }
  uVar3 = uVar5 + 1;
  if (uVar3 < 0x1000) {
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)operator_new(uVar3);
    }
  }
  else {
    uVar4 = uVar5 + 0x28;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar2 = operator_new(uVar4);
    if (lVar2 == 0) goto LAB_140d1e60d;
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
  param_1[2] = _Size + param_2;
  pvVar6 = (void *)((longlong)_Dst + _Size);
  param_1[3] = uVar5;
  if (uVar1 < 0x10) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,_Size);
    ::_guard_xfg_dispatch_icall_nop(pvVar6,param_4,param_5);
    *(undefined1 *)((longlong)pvVar6 + param_5) = 0;
  }
  else {
    _Src = (void *)*param_1;
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
    ::_guard_xfg_dispatch_icall_nop(pvVar6,param_4,param_5);
    uVar5 = uVar1 + 1;
    *(undefined1 *)((longlong)pvVar6 + param_5) = 0;
    pvVar6 = _Src;
    if (0xfff < uVar5) {
      pvVar6 = *(void **)((longlong)_Src + -8);
      uVar5 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6))) {
LAB_140d1e60d:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pvVar6,uVar5);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 140d1e660 _Tidy_deallocate body=94 status=ok
// SIG undefined _Tidy_deallocate(void)

void std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
               (longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// FUNCTION 140d1e6d0 FUN_140d1e6d0 body=343 status=ok
// SIG undefined FUN_140d1e6d0(void)

undefined8 * FUN_140d1e6d0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  bVar6 = true;
  puVar5 = puVar3;
  if (*(char *)((longlong)puVar3[1] + 0x19) == '\0') {
    puVar4 = (undefined8 *)puVar3[1];
    do {
      puVar5 = puVar4;
      bVar6 = *(uint *)*param_3 < *(uint *)puVar5[4];
      if (bVar6) {
        puVar4 = (undefined8 *)*puVar5;
      }
      else {
        puVar4 = (undefined8 *)puVar5[2];
      }
    } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
  }
  puVar4 = puVar5;
  if (bVar6 != false) {
    if (puVar5 == (undefined8 *)*puVar3) {
      puVar3 = (undefined8 *)
               FUN_140d1e250(param_1,local_res8,CONCAT71((int7)((ulonglong)puVar5 >> 8),1),puVar5,
                             param_3);
      *(undefined1 *)(param_2 + 1) = 1;
      *param_2 = *puVar3;
      return param_2;
    }
    if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
      puVar4 = (undefined8 *)*puVar5;
      if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar4[2] + 0x19);
        puVar3 = (undefined8 *)puVar4[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar3[2] + 0x19);
          puVar4 = puVar3;
          puVar3 = (undefined8 *)puVar3[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar5[1] + 0x19);
        puVar2 = (undefined8 *)puVar5[1];
        puVar3 = puVar5;
        while ((puVar4 = puVar2, cVar1 == '\0' && (puVar3 == (undefined8 *)*puVar4))) {
          cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
          puVar2 = (undefined8 *)puVar4[1];
          puVar3 = puVar4;
        }
        if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
          puVar4 = puVar3;
        }
      }
    }
    else {
      puVar4 = (undefined8 *)puVar5[2];
    }
  }
  if (*(uint *)puVar4[4] < *(uint *)*param_3) {
    puVar3 = (undefined8 *)FUN_140d1e250(param_1,local_res8,bVar6,puVar5,param_3);
    *(undefined1 *)(param_2 + 1) = 1;
    *param_2 = *puVar3;
  }
  else {
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = puVar4;
  }
  return param_2;
}



// FUNCTION 140d1e830 FUN_140d1e830 body=243 status=ok
// SIG undefined FUN_140d1e830(void)

undefined8 * FUN_140d1e830(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_res8;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  cVar2 = '\x01';
  puVar6 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x19) == '\0') {
    uVar1 = *param_3;
    puVar5 = (undefined8 *)puVar4[1];
    do {
      puVar6 = puVar5;
      cVar2 = FUN_140d1b780(uVar1,puVar6[4]);
      if (cVar2 == '\0') {
        puVar5 = (undefined8 *)puVar6[2];
      }
      else {
        puVar5 = (undefined8 *)*puVar6;
      }
    } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
  }
  local_res8 = puVar6;
  if (cVar2 != '\0') {
    if (puVar6 == (undefined8 *)*puVar4) {
      cVar2 = '\x01';
      goto LAB_140d1e8b0;
    }
    FUN_140630f10(&local_res8);
  }
  puVar4 = local_res8;
  cVar3 = FUN_140d1b780(local_res8[4],*param_3);
  if (cVar3 == '\0') {
    *param_2 = puVar4;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_140d1e8b0:
  puVar4 = (undefined8 *)FUN_140d1e250(param_1,&local_res8,cVar2,puVar6,param_3,local_res8._0_1_);
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = *puVar4;
  return param_2;
}



// FUNCTION 140d1e930 basic_string<char,std::char_traits<char>,std::allocator<char>_> body=220 status=ok
// SIG undefined basic_string<char,std::char_traits<char>,std::allocator<char>_>(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  
  _Dst = (void *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar2 < 0x10) {
    uVar3 = param_2[1];
    uVar6 = 0xf;
    *param_1 = *param_2;
    param_1[1] = uVar3;
  }
  else {
    uVar6 = uVar2 | 0xf;
    if (0x7fffffffffffffff < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = uVar6 + 1;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        _Dst = (void *)operator_new(uVar1);
      }
    }
    else {
      uVar5 = uVar6 + 0x28;
      if (uVar5 <= uVar1) {
        uVar5 = 0xffffffffffffffff;
      }
      lVar4 = operator_new(uVar5);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
    }
    *param_1 = _Dst;
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_2,uVar2 + 1);
  }
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  return param_1;
}



// FUNCTION 140d1ea10 FUN_140d1ea10 body=599 status=ok
// SIG undefined FUN_140d1ea10(void)

undefined8 * FUN_140d1ea10(undefined8 *param_1)

{
  undefined8 local_res8;
  
  FUN_142494000();
  *param_1 = &PTR_FUN_1445102b8;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x524) = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  FName::FName(&local_res8,L"Wind_Strength",1);
  param_1[0x97] = local_res8;
  FName::FName(&local_res8,L"Wind_Speed",1);
  param_1[0x98] = local_res8;
  FName::FName(&local_res8,L"WindDirection",1);
  param_1[0x99] = local_res8;
  FName::FName(&local_res8,L"Wind_MinGustAmount",1);
  param_1[0x9a] = local_res8;
  FName::FName(&local_res8,L"Wind_MaxGustAmount",1);
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 6;
  param_1[0x9b] = local_res8;
  *(undefined4 *)(param_1 + 0x8c) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x42700000;
  FUN_142c4aa90(param_1 + 0x8d,0x40a00000,0x41f00000);
  FUN_142c4aa90(param_1 + 0x8e,0x40000000,0x40800000);
  FUN_142c4aa90(param_1 + 0x8f,0x3f800000,0x40000000);
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(undefined4 *)(param_1 + 0x90) = 0x3f28f5c3;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x91) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x93) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x92) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0x40400000;
  *(undefined4 *)(param_1 + 0x95) = 0x41000000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xef | 8;
  return param_1;
}



// FUNCTION 140d1ec70 FUN_140d1ec70 body=106 status=ok
// SIG undefined FUN_140d1ec70(void)

undefined1 * FUN_140d1ec70(undefined1 *param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140d1ece0 FPatchSource body=35 status=ok
// SIG undefined FPatchSource(void)

undefined4 * Audio::FPatchSource::FPatchSource(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FString::FString(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 140d1ed10 FUN_140d1ed10 body=20 status=ok
// SIG undefined FUN_140d1ed10(void)

undefined4 * FUN_140d1ed10(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0xffffffff;
  return param_1;
}



// FUNCTION 140d1ed30 FUN_140d1ed30 body=124 status=ok
// SIG undefined FUN_140d1ed30(void)

undefined8 * FUN_140d1ed30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1);
  }
  FUN_140a4f390(param_1 + 2,param_2 + 2);
  FString::FString(param_1 + 0xf,param_2 + 0xf);
  return param_1;
}



// FUNCTION 140d1edb0 FUN_140d1edb0 body=94 status=ok
// SIG undefined FUN_140d1edb0(void)

undefined8 * FUN_140d1edb0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 2,0,0x68);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 140d1ee10 FUN_140d1ee10 body=16 status=ok
// SIG undefined FUN_140d1ee10(void)

undefined1 * FUN_140d1ee10(undefined1 *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140d1ee20 FUN_140d1ee20 body=27 status=ok
// SIG undefined FUN_140d1ee20(void)

undefined8 * FUN_140d1ee20(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0x101;
  return param_1;
}



// FUNCTION 140d1ee40 FUN_140d1ee40 body=133 status=ok
// SIG undefined FUN_140d1ee40(void)

undefined8 * FUN_140d1ee40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 << 4);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 140d1eed0 PlayerLatencyPolicy body=17 status=ok
// SIG undefined PlayerLatencyPolicy(void)

undefined4 * Aws::GameLift::Model::PlayerLatencyPolicy::PlayerLatencyPolicy(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 140d1eef0 FUN_140d1eef0 body=175 status=ok
// SIG undefined FUN_140d1eef0(void)

undefined1 * FUN_140d1eef0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  local_38 = *(undefined8 *)(param_2 + 0x18);
  FString::FString(local_30,param_2 + 0x20);
  FSoftObjectPath::operator=(param_1 + 0x18,&local_38);
  return param_1;
}



// FUNCTION 140d1efa0 FUN_140d1efa0 body=243 status=ok
// SIG undefined FUN_140d1efa0(void)

undefined1 * FUN_140d1efa0(undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 local_38 [32];
  
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(int *)(param_1 + 0x2c) < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
    }
    if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_38,param_2);
    FSoftObjectPath::operator=(param_1 + 0x18,uVar1);
    FWeakObjectPtr::operator=(param_1 + 8,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x10) = DAT_1464b56f4;
  }
  return param_1;
}



// FUNCTION 140d1f0a0 FUN_140d1f0a0 body=106 status=ok
// SIG undefined FUN_140d1f0a0(void)

undefined1 * FUN_140d1f0a0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 140d1f110 FUN_140d1f110 body=478 status=ok
// SIG undefined FUN_140d1f110(void)

undefined4 *
FUN_140d1f110(undefined4 *param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  *(undefined1 *)(param_1 + 1) = param_5;
  *param_1 = param_4;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0xb]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 8) = 0;
  }
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x14] = 0;
  if (((int)param_1[0x15] < 0) && (param_1[0x15] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x12,0);
  }
  if (*(undefined2 **)(param_1 + 0x12) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x12) = 0;
  }
  param_1[0xe] = 0;
  if (param_2 == 0) {
    param_1[2] = 0xffffffff;
    param_1[3] = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[10] = 0;
    if (((int)param_1[0xb] < 0) && (param_1[0xb] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
    }
    if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 8) = 0;
    }
    param_1[4] = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_58,param_2);
    FSoftObjectPath::operator=(param_1 + 6,uVar1);
    FWeakObjectPtr::operator=(param_1 + 2,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[4] = DAT_1464b56f4;
  }
  if (param_3 == 0) {
    param_1[0xc] = 0xffffffff;
    param_1[0xd] = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1[0x14] = 0;
    if (((int)param_1[0x15] < 0) && (param_1[0x15] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x12,0);
    }
    if (*(undefined2 **)(param_1 + 0x12) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x12) = 0;
    }
    param_1[0xe] = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_40,param_3);
    FSoftObjectPath::operator=(param_1 + 0x10,uVar1);
    FWeakObjectPtr::operator=(param_1 + 0xc,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[0xe] = DAT_1464b56f4;
  }
  return param_1;
}



// FUNCTION 140d1f2f0 FUN_140d1f2f0 body=174 status=ok
// SIG undefined FUN_140d1f2f0(void)

undefined4 * FUN_140d1f2f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0xb]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 8) = 0;
  }
  param_1[4] = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  local_38 = *(undefined8 *)(param_2 + 6);
  FString::FString(local_30,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 6,&local_38);
  return param_1;
}



// FUNCTION 140d1f3a0 FUN_140d1f3a0 body=258 status=ok
// SIG undefined FUN_140d1f3a0(void)

undefined4 * FUN_140d1f3a0(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 local_38 [32];
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0xb]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 8) = 0;
  }
  param_1[4] = 0;
  if (param_2 == 0) {
    param_1[2] = 0xffffffff;
    param_1[3] = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[10] = 0;
    if (((int)param_1[0xb] < 0) && (param_1[0xb] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
    }
    if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 8) = 0;
    }
    param_1[4] = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_38,param_2);
    FSoftObjectPath::operator=(param_1 + 6,uVar1);
    FWeakObjectPtr::operator=(param_1 + 2,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[4] = DAT_1464b56f4;
  }
  *param_1 = param_3;
  return param_1;
}



// FUNCTION 140d1f4b0 FUN_140d1f4b0 body=105 status=ok
// SIG undefined FUN_140d1f4b0(void)

undefined4 * FUN_140d1f4b0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0xb]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 8) = 0;
  }
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 140d1f520 FUN_140d1f520 body=15 status=ok
// SIG undefined FUN_140d1f520(void)

undefined2 * FUN_140d1f520(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 140d1f530 FUN_140d1f530 body=109 status=ok
// SIG undefined FUN_140d1f530(void)

undefined4 * FUN_140d1f530(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0xb]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 8) = 0;
  }
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 140d1f5a0 FUN_140d1f5a0 body=112 status=ok
// SIG undefined FUN_140d1f5a0(void)

undefined8 * FUN_140d1f5a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 140d1f610 FUN_140d1f610 body=67 status=ok
// SIG undefined FUN_140d1f610(void)

undefined8 * FUN_140d1f610(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  FUN_140d1b9c0(param_1,*param_2,*(undefined4 *)(param_2 + 1),0,0);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 140d1f660 FUN_140d1f660 body=295 status=ok
// SIG undefined FUN_140d1f660(void)

undefined1 * FUN_140d1f660(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),_Src,(longlong)iVar1 << 2);
  }
  param_1[0x18] = param_2[0x18];
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x6c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
  }
  if (*(undefined2 **)(param_1 + 0x60) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x60) = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  local_38 = *(undefined8 *)(param_2 + 0x58);
  FString::FString(local_30,param_2 + 0x60);
  FSoftObjectPath::operator=(param_1 + 0x58,&local_38);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  param_1[0x74] = param_2[0x74];
  return param_1;
}



// FUNCTION 140d1f790 FUN_140d1f790 body=287 status=ok
// SIG undefined FUN_140d1f790(void)

undefined4 * FUN_140d1f790(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
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
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  local_38 = *(undefined8 *)(param_2 + 4);
  FString::FString(local_30,param_2 + 6);
  FSoftObjectPath::operator=(param_1 + 4,&local_38);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  param_1[0xc] = 0;
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  local_38 = *(undefined8 *)(param_2 + 0xe);
  FString::FString(local_30,param_2 + 0x10);
  FSoftObjectPath::operator=(param_1 + 0xe,&local_38);
  return param_1;
}



// FUNCTION 140d1f8b0 FUN_140d1f8b0 body=491 status=ok
// SIG undefined FUN_140d1f8b0(void)

undefined4 * FUN_140d1f8b0(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
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
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  param_1[0xc] = 0;
  lVar4 = 0;
  if (*param_3 != 0) {
    lVar2 = FUN_14144bcb0();
    for (lVar1 = *param_3; (lVar4 = 0, lVar1 != 0 && (lVar4 = *param_3, lVar1 != lVar2));
        lVar1 = *(longlong *)(lVar1 + 0x30)) {
    }
  }
  if (lVar4 == 0) {
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
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_58,lVar4);
    FSoftObjectPath::operator=(param_1 + 4,uVar3);
    FWeakObjectPtr::operator=(param_1,lVar4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[2] = DAT_1464b56f4;
  }
  if (param_2 == 0) {
    param_1[10] = 0xffffffff;
    param_1[0xb] = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    param_1[0x12] = 0;
    if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
    }
    if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x10) = 0;
    }
    param_1[0xc] = 0;
  }
  else {
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_40,param_2);
    FSoftObjectPath::operator=(param_1 + 0xe,uVar3);
    FWeakObjectPtr::operator=(param_1 + 10,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[0xc] = DAT_1464b56f4;
  }
  return param_1;
}



// FUNCTION 140d1faa0 FSpawnGenerator body=170 status=ok
// SIG undefined FSpawnGenerator(void)

undefined4 * FSpawnGenerator::FSpawnGenerator(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
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
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 140d1fb50 FUN_140d1fb50 body=188 status=ok
// SIG undefined FUN_140d1fb50(void)

undefined4 * FUN_140d1fb50(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
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
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  local_38 = *(undefined8 *)(param_2 + 4);
  FString::FString(local_30,param_2 + 6);
  FSoftObjectPath::operator=(param_1 + 4,&local_38);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  return param_1;
}



// FUNCTION 140d1fc10 FUN_140d1fc10 body=277 status=ok
// SIG undefined FUN_140d1fc10(void)

undefined4 *
FUN_140d1fc10(undefined4 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_48 [32];
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
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
  param_1[10] = param_3;
  param_1[0xc] = param_4;
  if (param_2 == 0) {
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
    param_1[0xb] = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_48,param_2);
    FSoftObjectPath::operator=(param_1 + 4,uVar2);
    FWeakObjectPtr::operator=(param_1,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[2] = DAT_1464b56f4;
    uVar1 = FUN_1409aa830(param_2);
    param_1[0xb] = uVar1;
  }
  return param_1;
}



// FUNCTION 140d1fd30 FUN_140d1fd30 body=113 status=ok
// SIG undefined FUN_140d1fd30(void)

undefined4 * FUN_140d1fd30(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
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
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0xffffffff;
  return param_1;
}



// FUNCTION 140d1fdb0 FUN_140d1fdb0 body=74 status=ok
// SIG undefined FUN_140d1fdb0(void)

longlong FUN_140d1fdb0(longlong param_1,longlong param_2)

{
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>();
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x28,param_2 + 0x28);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x50,param_2 + 0x50);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 140d1fe00 FUN_140d1fe00 body=1038 status=ok
// SIG undefined FUN_140d1fe00(void)

undefined4 *
FUN_140d1fe00(undefined4 *param_1,longlong *param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
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
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  if (((int)param_1[0x1d] < 0) && (param_1[0x1d] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a,0);
  }
  if (*(undefined2 **)(param_1 + 0x1a) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x1a) = 0;
  }
  param_1[0x16] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[0x26] = 0;
  if (((int)param_1[0x27] < 0) && (param_1[0x27] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x24,0);
  }
  if (*(undefined2 **)(param_1 + 0x24) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x24) = 0;
  }
  param_1[0x20] = 0;
  if (*param_2 != 0) {
    lVar2 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar4 = *param_2;
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_140d1ffb6;
    }
  }
  lVar4 = 0;
LAB_140d1ffb6:
  if (lVar4 == 0) {
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
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_98,lVar4);
    FSoftObjectPath::operator=(param_1 + 4,uVar3);
    FWeakObjectPtr::operator=(param_1,lVar4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[2] = DAT_1464b56f4;
  }
  if (param_4 == 0) {
    param_1[0x14] = 0xffffffff;
    param_1[0x15] = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    param_1[0x1c] = 0;
    if (((int)param_1[0x1d] < 0) && (param_1[0x1d] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a,0);
    }
    if (*(undefined2 **)(param_1 + 0x1a) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x1a) = 0;
    }
    param_1[0x16] = 0;
  }
  else {
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_80,param_4);
    FSoftObjectPath::operator=(param_1 + 0x18,uVar3);
    FWeakObjectPtr::operator=(param_1 + 0x14,param_4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[0x16] = DAT_1464b56f4;
  }
  if (param_5 == 0) {
    param_1[0x1e] = 0xffffffff;
    param_1[0x1f] = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    param_1[0x26] = 0;
    if (((int)param_1[0x27] < 0) && (param_1[0x27] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x24,0);
    }
    if (*(undefined2 **)(param_1 + 0x24) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x24) = 0;
    }
    param_1[0x20] = 0;
  }
  else {
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_68,param_5);
    FSoftObjectPath::operator=(param_1 + 0x22,uVar3);
    FWeakObjectPtr::operator=(param_1 + 0x1e,param_5);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[0x20] = DAT_1464b56f4;
  }
  if (param_3 == 0) {
    param_1[10] = 0xffffffff;
    param_1[0xb] = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    param_1[0x12] = 0;
    if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
    }
    if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x10) = 0;
    }
    param_1[0xc] = 0;
  }
  else {
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_50,param_3);
    FSoftObjectPath::operator=(param_1 + 0xe,uVar3);
    FWeakObjectPtr::operator=(param_1 + 10,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[0xc] = DAT_1464b56f4;
  }
  return param_1;
}



// FUNCTION 140d20210 FUN_140d20210 body=330 status=ok
// SIG undefined FUN_140d20210(void)

undefined4 * FUN_140d20210(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
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
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  if (((int)param_1[0x1d] < 0) && (param_1[0x1d] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a,0);
  }
  if (*(undefined2 **)(param_1 + 0x1a) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x1a) = 0;
  }
  param_1[0x16] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[0x26] = 0;
  if (((int)param_1[0x27] < 0) && (param_1[0x27] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x24,0);
  }
  if (*(undefined2 **)(param_1 + 0x24) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x24) = 0;
  }
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 140d20360 FUN_140d20360 body=803 status=ok
// SIG undefined FUN_140d20360(void)

undefined4 * FUN_140d20360(undefined4 *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [32];
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
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
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  if (((int)param_1[0x1d] < 0) && (param_1[0x1d] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a,0);
  }
  if (*(undefined2 **)(param_1 + 0x1a) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x1a) = 0;
  }
  param_1[0x16] = 0;
  if (*param_2 != 0) {
    lVar2 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar4 = *param_2;
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_140d204b6;
    }
  }
  lVar4 = 0;
LAB_140d204b6:
  if (lVar4 == 0) {
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
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_78,lVar4);
    FSoftObjectPath::operator=(param_1 + 4,uVar3);
    FWeakObjectPtr::operator=(param_1,lVar4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[2] = DAT_1464b56f4;
  }
  if (param_3 == 0) {
    param_1[10] = 0xffffffff;
    param_1[0xb] = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    param_1[0x12] = 0;
    if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
    }
    if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x10) = 0;
    }
    param_1[0xc] = 0;
  }
  else {
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_60,param_3);
    FSoftObjectPath::operator=(param_1 + 0xe,uVar3);
    FWeakObjectPtr::operator=(param_1 + 10,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[0xc] = DAT_1464b56f4;
  }
  if (param_4 == 0) {
    param_1[0x14] = 0xffffffff;
    param_1[0x15] = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    param_1[0x1c] = 0;
    if (((int)param_1[0x1d] < 0) && (param_1[0x1d] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a,0);
    }
    if (*(undefined2 **)(param_1 + 0x1a) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x1a) = 0;
    }
    param_1[0x16] = 0;
  }
  else {
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_48,param_4);
    FSoftObjectPath::operator=(param_1 + 0x18,uVar3);
    FWeakObjectPtr::operator=(param_1 + 0x14,param_4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[0x16] = DAT_1464b56f4;
  }
  return param_1;
}



// FUNCTION 140d20690 FUN_140d20690 body=238 status=ok
// SIG undefined FUN_140d20690(void)

undefined4 * FUN_140d20690(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
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
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  if (((int)param_1[0x1d] < 0) && (param_1[0x1d] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a,0);
  }
  if (*(undefined2 **)(param_1 + 0x1a) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x1a) = 0;
  }
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 140d20780 FUN_140d20780 body=200 status=ok
// SIG undefined FUN_140d20780(void)

longlong FUN_140d20780(longlong param_1,longlong param_2)

{
  FString::FString();
  FString::FString(param_1 + 0x10,param_2 + 0x10);
  FString::FString(param_1 + 0x20,param_2 + 0x20);
  FString::FString(param_1 + 0x30,param_2 + 0x30);
  FString::FString(param_1 + 0x40,param_2 + 0x40);
  FString::FString(param_1 + 0x50,param_2 + 0x50);
  FString::FString(param_1 + 0x60,param_2 + 0x60);
  FString::FString(param_1 + 0x70,param_2 + 0x70);
  FString::FString(param_1 + 0x80,param_2 + 0x80);
  FString::FString(param_1 + 0x90,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 140d20850 FUN_140d20850 body=358 status=ok
// SIG undefined FUN_140d20850(void)

undefined4 * FUN_140d20850(undefined4 *param_1,undefined4 *param_2)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)((longlong)param_2 + 5);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = 0;
  iVar2 = param_2[6];
  lVar3 = *(longlong *)(param_2 + 4);
  param_1[6] = iVar2;
  if (iVar2 == 0) {
    param_1[7] = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar2,0);
    lVar1 = *(longlong *)(param_1 + 4);
    do {
      FUN_140e135e0(lVar1,lVar3);
      lVar1 = lVar1 + 0x30;
      lVar3 = lVar3 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar2 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar2;
  if (iVar2 == 0) {
    param_1[0xb] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar2,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),_Src,(longlong)iVar2);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x14] = 0;
  if (0x7fffffff < (uint)param_1[0x15]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x12,0);
  }
  if (*(undefined2 **)(param_1 + 0x12) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x12) = 0;
  }
  param_1[0xe] = 0;
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  local_38 = *(undefined8 *)(param_2 + 0x10);
  FString::FString(local_30,param_2 + 0x12);
  FSoftObjectPath::operator=(param_1 + 0x10,&local_38);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  return param_1;
}



// FUNCTION 140d209c0 FUN_140d209c0 body=103 status=ok
// SIG undefined FUN_140d209c0(void)

longlong FUN_140d209c0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 140d20a30 FUN_140d20a30 body=341 status=ok
// SIG undefined FUN_140d20a30(void)

undefined4 * FUN_140d20a30(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = 0;
  TArray<FCampaignTextureChange,FDefaultAllocator>::CopyToEmpty<FCampaignTextureChange>
            (param_1 + 2,*(undefined8 *)(param_2 + 2),param_2[4],0,0);
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_140998750(param_1 + 6,*(undefined8 *)(param_2 + 6),param_2[8],0,0);
  *(undefined8 *)(param_1 + 10) = 0;
  iVar2 = param_2[0xc];
  lVar1 = *(longlong *)(param_2 + 10);
  param_1[0xc] = iVar2;
  if (iVar2 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1409b8040(param_1 + 10,iVar2,0);
    lVar3 = *(longlong *)(param_1 + 10);
    lVar1 = lVar1 + 0x50;
    do {
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar3,lVar1 + -0x50);
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar3 + 0x28,lVar1 + -0x28);
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar3 + 0x50,lVar1);
      lVar3 = lVar3 + 0x78;
      lVar1 = lVar1 + 0x78;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar2 = param_2[0x10];
  lVar1 = *(longlong *)(param_2 + 0xe);
  param_1[0x10] = iVar2;
  if (iVar2 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_1406bbfe0(param_1 + 0xe,iVar2,0);
    lVar3 = *(longlong *)(param_1 + 0xe);
    lVar1 = lVar1 + 0x50;
    do {
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar3,lVar1 + -0x50);
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar3 + 0x28,lVar1 + -0x28);
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar3 + 0x50,lVar1);
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar3 + 0x78,lVar1 + 0x28);
      lVar3 = lVar3 + 0xa0;
      lVar1 = lVar1 + 0xa0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}



// FUNCTION 140d20b90 FUN_140d20b90 body=453 status=ok
// SIG undefined FUN_140d20b90(void)

undefined4 * FUN_140d20b90(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
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
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  param_1[0xc] = 0;
  if (param_2 == 0) {
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
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_58,param_2);
    FSoftObjectPath::operator=(param_1 + 4,uVar1);
    FWeakObjectPtr::operator=(param_1,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[2] = DAT_1464b56f4;
  }
  if (param_3 == 0) {
    param_1[10] = 0xffffffff;
    param_1[0xb] = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    param_1[0x12] = 0;
    if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
    }
    if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x10) = 0;
    }
    param_1[0xc] = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_40,param_3);
    FSoftObjectPath::operator=(param_1 + 0xe,uVar1);
    FWeakObjectPtr::operator=(param_1 + 10,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[0xc] = DAT_1464b56f4;
  }
  return param_1;
}



// FUNCTION 140d20d60 FUN_140d20d60 body=3358 status=ok
// SIG undefined FUN_140d20d60(void)

undefined8 * FUN_140d20d60(undefined8 *param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *local_res18;
  undefined1 local_res20 [8];
  undefined4 uStack_13c;
  longlong *local_138;
  int local_130;
  longlong *local_128;
  int local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  int local_100;
  longlong local_f8;
  int local_f0;
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  FUN_142d79c30();
  FGCObject::FGCObject(param_1 + 10);
  plVar12 = (longlong *)0x0;
  *param_1 = &PTR_FUN_14450f8e0;
  pplVar2 = (longlong **)(param_1 + 0x45);
  param_1[10] = &PTR_LAB_14450fae8;
  param_1[0xc] = &PTR_LAB_14450fb00;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 2;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 2;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 2;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 2;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 2;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 2;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 2;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *pplVar2 = (longlong *)0x0;
  param_1[0x46] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x47,0);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  lVar5 = FUN_140d1e050();
  lVar11 = lVar5 + 0x10;
  param_1[0xb9] = lVar11;
  param_1[0xba] = lVar5;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0xb9,lVar11,lVar11);
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 2;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 2;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 2;
  plVar6 = (longlong *)operator_new(0x90);
  plVar10 = plVar12;
  if (plVar6 != (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop(plVar6,0,0x90);
    plVar6[3] = 0;
    plVar6[4] = 2;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[9] = 0;
    plVar6[10] = 0;
    *(undefined4 *)(plVar6 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)plVar6 + 0x5c) = 0;
    plVar6[0xd] = 0;
    *(undefined4 *)(plVar6 + 0xe) = 0;
    plVar6[0xf] = 0;
    plVar6[0x10] = 0;
    plVar6[0x11] = 0;
    plVar10 = plVar6;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar6 = plVar12;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_144510d70;
    plVar7[2] = (longlong)plVar10;
    plVar6 = plVar7;
  }
  local_118 = plVar10;
  local_110 = plVar6;
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
      if (0 < iVar4) goto LAB_140d213e8;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar10 = (longlong)plVar10;
    plVar7 = (longlong *)plVar10[1];
    if (plVar6 != plVar7) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar10[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar10[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
LAB_140d213e8:
  if (pplVar2 != &local_118) {
    *pplVar2 = plVar10;
    local_118 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x46,&local_110);
  }
  plVar10 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_110 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  FUN_1404cf2e0(&local_88,0);
  if (local_88 == (longlong *)0x0) goto LAB_140d215bf;
  local_138 = (longlong *)0x0;
  local_130 = 0;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  puVar8 = (undefined8 *)operator_new(0x30,&local_e8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &PTR_GetPoolName_143fc2050;
    *(undefined4 *)(puVar8 + 2) = 0x40d3ffb0;
    *(undefined4 *)((longlong)puVar8 + 0x14) = 1;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_13c;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[5] = uVar9;
    *puVar8 = &PTR_GetPoolName_143fc2098;
  }
  iVar4 = local_e0;
  plVar10 = local_e8;
  if ((local_e0 == 0) || (local_e8 == (longlong *)0x0)) {
    if ((local_130 != 0) &&
       ((local_138 != (longlong *)0x0 &&
        ((**(code **)(*local_138 + 0x28))(local_138,0), local_138 != (longlong *)0x0)))) {
      local_138 = (longlong *)FMemory::Realloc(local_138,0,0);
    }
  }
  else {
    (**(code **)(*local_e8 + 0x30))(local_e8,&local_138);
  }
  if (iVar4 == 0) {
LAB_140d21544:
    if (plVar10 != (longlong *)0x0) {
      FMemory::Free(plVar10);
    }
  }
  else if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    plVar10 = (longlong *)FMemory::Realloc(plVar10,0,0);
    local_e8 = plVar10;
    goto LAB_140d21544;
  }
  puVar8 = (undefined8 *)(**(code **)(*local_88 + 0xd8))(local_88,local_res20,&local_138);
  param_1[0x7a] = *puVar8;
  if (local_130 != 0) {
    if (local_138 == (longlong *)0x0) goto LAB_140d215bf;
    (**(code **)(*local_138 + 0x28))(local_138,0);
    if (local_138 != (longlong *)0x0) {
      local_138 = (longlong *)FMemory::Realloc(local_138,0,0);
    }
    local_130 = 0;
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
LAB_140d215bf:
  FUN_1404cf890(&local_98,0);
  if (local_98 != (longlong *)0x0) {
    local_128 = (longlong *)0x0;
    local_120 = 0;
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    puVar8 = (undefined8 *)operator_new(0x30,&local_d8);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_GetPoolName_143f77ac8;
      *(undefined4 *)(puVar8 + 2) = 0x40d401b0;
      *(undefined4 *)((longlong)puVar8 + 0x14) = 1;
      *(undefined4 *)(puVar8 + 3) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_13c;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[5] = uVar9;
      *puVar8 = &PTR_GetPoolName_143f77b10;
    }
    if ((local_d0 == 0) || (local_d8 == (longlong *)0x0)) {
      if ((local_120 != 0) &&
         ((local_128 != (longlong *)0x0 &&
          ((**(code **)(*local_128 + 0x28))(local_128,0), local_128 != (longlong *)0x0)))) {
        local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
      }
    }
    else {
      (**(code **)(*local_d8 + 0x30))(local_d8,&local_128);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
    puVar8 = (undefined8 *)(**(code **)(*local_98 + 0xd0))(local_98,local_68,&local_128);
    local_c8 = 0;
    local_c0 = 0;
    param_1[0x4a] = *puVar8;
    puVar8 = (undefined8 *)operator_new(0x30,&local_c8);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_GetPoolName_143fc1ab0;
      *(undefined4 *)(puVar8 + 2) = 0x40d41aa0;
      *(undefined4 *)((longlong)puVar8 + 0x14) = 1;
      *(undefined4 *)(puVar8 + 3) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_13c;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[5] = uVar9;
      *puVar8 = &PTR_GetPoolName_143fc1af8;
    }
    puVar8 = (undefined8 *)(**(code **)(*local_98 + 0x120))(local_98,local_60,&local_c8);
    param_1[0x4b] = *puVar8;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_128);
  }
  lVar11 = FUN_142b45e90();
  local_f8 = 0;
  local_f0 = 0;
  lVar11 = *(longlong *)(lVar11 + 0x18);
  puVar8 = (undefined8 *)operator_new(0x30,&local_f8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &PTR_GetPoolName_143fc1ab0;
    *(undefined4 *)(puVar8 + 2) = 0x40d438a0;
    *(undefined4 *)((longlong)puVar8 + 0x14) = 1;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_13c;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[5] = uVar9;
    *puVar8 = &PTR_GetPoolName_143fc1af8;
  }
  plVar10 = plVar12;
  if ((local_f0 != 0) && (local_f8 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(lVar11 + 0x58,&local_res18,&local_f8);
    plVar10 = local_res18;
  }
  param_1[0xbb] = plVar10;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f8);
  FUN_142b4b220(lVar11,&local_78);
  if (local_78 != 0) {
    local_b8 = 0;
    local_b0 = 0;
    puVar8 = (undefined8 *)operator_new(0x30,&local_b8);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_GetPoolName_143f77ac8;
      *(undefined4 *)(puVar8 + 2) = 0x40d43e10;
      *(undefined4 *)((longlong)puVar8 + 0x14) = 1;
      *(undefined4 *)(puVar8 + 3) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_13c;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[5] = uVar9;
      *puVar8 = &PTR_GetPoolName_143f77b10;
    }
    TBaseDelegate<FSlateBrush_const_*>::operator=(local_78 + 0x28,&local_b8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
  }
  local_a8 = 0;
  local_a0 = 0;
  puVar8 = (undefined8 *)operator_new(0x30,&local_a8);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &PTR_GetPoolName_143f77ac8;
    *(undefined4 *)(puVar8 + 2) = 0x40d2c3e0;
    *(undefined4 *)((longlong)puVar8 + 0x14) = 1;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_13c;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[5] = uVar9;
    *puVar8 = &PTR_GetPoolName_143f77b10;
  }
  lVar11 = FUN_14244d3d0();
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0xb8,&local_a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  puVar8 = (undefined8 *)operator_new(0x30,&local_108);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &PTR_GetPoolName_143fc2050;
    *(undefined4 *)(puVar8 + 2) = 0x40d2beb0;
    *(undefined4 *)((longlong)puVar8 + 0x14) = 1;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_13c;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[5] = uVar9;
    *puVar8 = &PTR_GetPoolName_143fc2098;
  }
  iVar4 = local_100;
  plVar10 = local_108;
  if ((local_100 != 0) && (local_108 != (longlong *)0x0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
    puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x20))(plVar10,local_58);
    iVar3 = DAT_1464b57d8;
    lVar11 = (longlong)DAT_1464b57d8;
    plVar12 = (longlong *)*puVar8;
    DAT_1464b57d8 = DAT_1464b57d8 + 1;
    if (DAT_1464b57dc < DAT_1464b57d8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar3);
    }
    local_108 = (longlong *)0x0;
    puVar8 = (undefined8 *)(lVar11 * 0x10 + DAT_1464b57d0);
    local_100 = 0;
    *puVar8 = plVar10;
    *(int *)(puVar8 + 1) = iVar4;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108);
  param_1[0xbc] = plVar12;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_70 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  plVar12 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_90 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar12 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_80 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140d21a80 FUN_140d21a80 body=153 status=ok
// SIG undefined FUN_140d21a80(void)

undefined8 * FUN_140d21a80(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 140d21b20 FUN_140d21b20 body=14 status=ok
// SIG undefined FUN_140d21b20(void)

longlong FUN_140d21b20(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 140d21b30 FUN_140d21b30 body=308 status=ok
// SIG undefined FUN_140d21b30(void)

undefined8 *
FUN_140d21b30(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_48 [32];
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < 0) && (*(int *)((longlong)param_1 + 0x2c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
    }
    if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[4] = 0;
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_48,param_2);
    FSoftObjectPath::operator=(param_1 + 3,uVar2);
    FWeakObjectPtr::operator=(param_1 + 1,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 2) = DAT_1464b56f4;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x30), lVar1 != 0)) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar1 + 0x30);
  }
  *(undefined4 *)param_1 = param_3;
  *(undefined4 *)((longlong)param_1 + 4) = param_4;
  return param_1;
}



// FUNCTION 140d21c70 FUN_140d21c70 body=491 status=ok
// SIG undefined FUN_140d21c70(void)

longlong FUN_140d21c70(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FString::FString();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FString::FString(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  FText::FText(param_1 + 0x50,param_2 + 0x50);
  FText::FText(param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  FString::FString(param_1 + 0x88,param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  FString::FString(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)(param_2 + 0xc1);
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  uVar4 = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined8 *)(param_1 + 0xcc) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xdc);
  *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_2 + 0xd4);
  *(undefined8 *)(param_1 + 0xdc) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0xf4) = *(undefined1 *)(param_2 + 0xf4);
  *(undefined1 *)(param_1 + 0xf5) = *(undefined1 *)(param_2 + 0xf5);
  *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(param_2 + 0xf6);
  uVar4 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x11c);
  uVar2 = *(undefined4 *)(param_2 + 0x120);
  uVar3 = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  FUN_140d20a30(param_1 + 0x128,param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_140998750((undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_2 + 0x170),
                *(undefined4 *)(param_2 + 0x178),0,0);
  uVar4 = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = uVar4;
  return param_1;
}



// FUNCTION 140d21e60 FUN_140d21e60 body=370 status=ok
// SIG undefined FUN_140d21e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140d21e60(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FString::FString();
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1 + 0x50,uVar2);
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1 + 0x68,uVar2);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)(param_1 + 0xc4) = _DAT_1464aa6e0;
  *(undefined8 *)(param_1 + 0xcc) = uVar2;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)(param_1 + 0xd4) = _DAT_1464aa6e0;
  *(undefined8 *)(param_1 + 0xdc) = uVar2;
  uVar1 = _DAT_1464aa6e8;
  uVar2 = _DAT_1464aa6e0;
  *(undefined2 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  *(undefined8 *)(param_1 + 0xe4) = uVar2;
  *(undefined8 *)(param_1 + 0xec) = uVar1;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)(param_1 + 0xf8) = _DAT_1464aa6e0;
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)(param_1 + 0x108) = _DAT_1464aa6e0;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)(param_1 + 0x118) = _DAT_1464aa6e0;
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  return param_1;
}



// FUNCTION 140d21fe0 FUN_140d21fe0 body=109 status=ok
// SIG undefined FUN_140d21fe0(void)

undefined8 * FUN_140d21fe0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)FString::FString(local_18);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (undefined4)plVar1[1];
  local_1c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(param_1,&local_28);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140d22050 FUN_140d22050 body=277 status=ok
// SIG undefined FUN_140d22050(void)

undefined4 * FUN_140d22050(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 10,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  pvVar2 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if (iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0xe,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0xe),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar2 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if (iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x12,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x12),pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 140d22170 FUN_140d22170 body=51 status=ok
// SIG undefined FUN_140d22170(void)

undefined4 * FUN_140d22170(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 140d221b0 FUN_140d221b0 body=1491 status=ok
// SIG undefined FUN_140d221b0(void)

undefined8 * FUN_140d221b0(undefined8 *param_1)

{
  FUN_142d7aa40();
  *(undefined4 *)(param_1 + 0x16) = 5;
  *param_1 = &PTR__scalar_deleting_destructor__14450fc98;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 5;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x17) = 5;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x19) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1a) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1b) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1c) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1d) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1e) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1f) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f000000;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x22) = 0x43b40000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x42700000;
  *(undefined4 *)(param_1 + 0x23) = 0x42700000;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x25) = 0x43b40000;
  *(undefined4 *)((longlong)param_1 + 300) = 0x42700000;
  *(undefined4 *)(param_1 + 0x26) = 0x42700000;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x28) = 0x43b40000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x42700000;
  *(undefined4 *)(param_1 + 0x29) = 0x42700000;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x154) = 1;
  *(undefined4 *)(param_1 + 0x2d) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x40800000;
  *(undefined4 *)(param_1 + 0x2f) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x31) = 1;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ba) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x39) = 0x42480000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e2) = 0x101;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x10100;
  *(undefined2 *)((longlong)param_1 + 0x1fc) = 0x101;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x204) = 0x101;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20c) = 1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0x300;
  *(undefined4 *)((longlong)param_1 + 0x254) = 300;
  *(undefined4 *)(param_1 + 0x4b) = 100;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2ec) = 0x301;
  *(undefined1 *)((longlong)param_1 + 0x2ee) = 2;
  *(undefined4 *)(param_1 + 0x5e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x18;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0xf;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0xffffffff;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 2;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 2;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 2;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 2;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined1 *)(param_1 + 0xa6) = 1;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined1 *)(param_1 + 0x3c) = DAT_146297e38;
  *(undefined1 *)((longlong)param_1 + 0x1e1) = DAT_146297e39;
  *(undefined1 *)(param_1 + 5) = 1;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"FFriendEventSystem",L"MaxCachedFriendEvents",
             (undefined4 *)((longlong)param_1 + 0x254),&DAT_1468e2410);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"FFriendStatusCache",L"MaxCachedFriendStatuses",param_1 + 0x4b,
             &DAT_1468e2410);
  return param_1;
}



// FUNCTION 140d22790 FUN_140d22790 body=47 status=ok
// SIG undefined FUN_140d22790(void)

undefined8 * FUN_140d22790(undefined8 *param_1)

{
  FUN_142d7ab30();
  *param_1 = &PTR_FUN_14450ff78;
  param_1[0x26] = &PTR_FUN_144510220;
  return param_1;
}



// FUNCTION 140d227c0 ~TArray<FCrowdBoostManagerGGP::PollInfo,FDefaultAllocator> body=86 status=ok
// SIG undefined ~TArray<FCrowdBoostManagerGGP::PollInfo,FDefaultAllocator>(void)

void TArray<FCrowdBoostManagerGGP::PollInfo,FDefaultAllocator>::
     ~TArray<FCrowdBoostManagerGGP::PollInfo,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140d22820 FUN_140d22820 body=95 status=ok
// SIG undefined FUN_140d22820(void)

void FUN_140d22820(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      FUN_1404bf980(plVar1 + 3);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140d22880 FUN_140d22880 body=123 status=ok
// SIG undefined FUN_140d22880(void)

void FUN_140d22880(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x38);
    do {
      if (plVar2[5] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-6] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xf;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140d22900 FUN_140d22900 body=349 status=ok
// SIG undefined FUN_140d22900(void)

void FUN_140d22900(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  plVar6 = (longlong *)*param_1;
  iVar7 = *(int *)(param_1 + 1);
  if (iVar7 != 0) {
    do {
      TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
                (plVar6 + 0x2e);
      FUN_14099a9b0(plVar6 + 0x2c);
      FUN_14099aa40(plVar6 + 0x2a);
      TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
                (plVar6 + 0x28);
      FUN_14099a950(plVar6 + 0x26);
      if (plVar6[0x14] != 0) {
        FMemory::Free();
      }
      if (plVar6[0x11] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar6[0xe];
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
      plVar4 = (longlong *)plVar6[0xb];
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
      if (plVar6[3] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 0x34;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar6 = (longlong *)*param_1;
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar6);
  return;
}



// FUNCTION 140d22a60 FUN_140d22a60 body=319 status=ok
// SIG undefined FUN_140d22a60(void)

void FUN_140d22a60(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    puVar9 = (undefined8 *)(lVar5 + 0x20);
    do {
      iVar7 = *(int *)(puVar9 + 1);
      plVar8 = (longlong *)*puVar9;
      if (iVar7 != 0) {
        do {
          plVar4 = (longlong *)plVar8[7];
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
          if (plVar8[2] != 0) {
            FMemory::Free();
          }
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 8;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        plVar8 = (longlong *)*puVar9;
      }
      if (plVar8 != (longlong *)0x0) {
        FMemory::Free(plVar8);
      }
      plVar8 = (longlong *)puVar9[-3];
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
      puVar9 = puVar9 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140d22ba0 ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_140d22c61;
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
LAB_140d22c61:
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
      FUN_1404bf980((longlong)iStack_1c * 0x38 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
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



// FUNCTION 140d22d30 FUN_140d22d30 body=388 status=ok
// SIG undefined FUN_140d22d30(void)

void FUN_140d22d30(longlong *param_1)

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
      if (bVar4) goto LAB_140d22df1;
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
LAB_140d22df1:
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
      FUN_1404bf980((longlong)iStack_1c * 0x38 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
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



// FUNCTION 140d22ec0 FUN_140d22ec0 body=192 status=ok
// SIG undefined FUN_140d22ec0(void)

void FUN_140d22ec0(longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_1404bf980((longlong)local_1c * 0x40 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
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



// FUNCTION 140d22f80 FUN_140d22f80 body=443 status=ok
// SIG undefined FUN_140d22f80(void)

void FUN_140d22f80(longlong *param_1)

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
  local_58 = 0;
  uStack_54 = 1;
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
      if (bVar4) goto LAB_140d23041;
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
LAB_140d23041:
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
      lVar5 = (longlong)iStack_1c * 0x40 + *param_1;
      FUN_140d22900(lVar5 + 0x28);
      FUN_1404bf980(lVar5);
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
    return;
  }
  return;
}



// FUNCTION 140d23140 FUN_140d23140 body=388 status=ok
// SIG undefined FUN_140d23140(void)

void FUN_140d23140(longlong *param_1)

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
      if (bVar4) goto LAB_140d23201;
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
LAB_140d23201:
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
      FUN_140d23320((longlong)iStack_1c * 0x40 + *param_1);
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



// FUNCTION 140d232d0 FUN_140d232d0 body=17 status=ok
// SIG undefined FUN_140d232d0(void)

void FUN_140d232d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
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



// FUNCTION 140d232f0 FUN_140d232f0 body=17 status=ok
// SIG undefined FUN_140d232f0(void)

void FUN_140d232f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
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



// FUNCTION 140d23310 FUN_140d23310 body=14 status=ok
// SIG undefined FUN_140d23310(void)

void FUN_140d23310(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
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



// FUNCTION 140d23320 FUN_140d23320 body=96 status=ok
// SIG undefined FUN_140d23320(void)

void FUN_140d23320(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  FUN_1404bf980(param_1);
  return;
}



// FUNCTION 140d23380 FUN_140d23380 body=14 status=ok
// SIG undefined FUN_140d23380(void)

void FUN_140d23380(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
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



// FUNCTION 140d23390 FUN_140d23390 body=103 status=ok
// SIG undefined FUN_140d23390(void)

void FUN_140d23390(longlong *param_1)

{
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140d23400 FUN_140d23400 body=339 status=ok
// SIG undefined FUN_140d23400(void)

void FUN_140d23400(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  *param_1 = &PTR_FUN_14450f810;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  plVar7 = (longlong *)param_1[6];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  iVar6 = *(int *)(param_1 + 4);
  lVar5 = param_1[3];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = param_1[3];
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 2);
  lVar5 = param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = param_1[1];
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140d23560 FUN_140d23560 body=172 status=ok
// SIG undefined FUN_140d23560(void)

void FUN_140d23560(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14450fba8;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x11);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe);
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
  plVar4 = (longlong *)param_1[0xb];
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
  *param_1 = &PTR__scalar_deleting_destructor__14450fb40;
  FTickerObjectBase::~FTickerObjectBase(param_1);
  return;
}


