// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e56690 FUN_140e56690 body=71 status=ok
// SIG undefined FUN_140e56690(void)

void FUN_140e56690(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_140e3c160(*(longlong *)(param_1 + 0x250),param_2,DAT_146870870,1);
    local_res8[0] = DAT_146870870;
    FUN_142dbb5d0(param_1 + 0xd0,local_res8);
  }
  return;
}



// FUNCTION 140e566f0 FUN_140e566f0 body=64 status=ok
// SIG undefined FUN_140e566f0(void)

void FUN_140e566f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x250);
  if ((lVar1 != 0) && (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0)) {
    if ((*(byte *)(lVar1 + 0x80) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e56716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x310))(plVar2,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
      return;
    }
    if (*(char *)(param_1 + 0x30) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140e56728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x310))(plVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 140e56730 FUN_140e56730 body=202 status=ok
// SIG undefined FUN_140e56730(void)

void FUN_140e56730(undefined8 param_1,char param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *local_18;
  undefined4 local_10;
  
  if (param_5 != 0) {
    lVar1 = FUN_140e4c8c0();
    if (lVar1 != 0) {
      thunk_FUN_1414e6480(lVar1,param_2,param_5);
    }
  }
  local_10 = 1;
  local_18 = (longlong *)0x0;
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,1,0);
  uVar2 = 2;
  if (param_2 != '\x01') {
    uVar2 = 0;
  }
  *local_18 = param_5;
  FUN_140e56340(param_1,uVar2,param_3,param_4,&local_18);
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e56800 FUN_140e56800 body=145 status=ok
// SIG undefined FUN_140e56800(void)

void FUN_140e56800(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142343b00();
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e56856;
  }
  lVar4 = 0;
LAB_140e56856:
  *(longlong *)(param_1 + 0x1a8) = lVar4;
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar2 = FUN_142232850();
    FUN_14247c340(param_1 + 0x140,uVar2);
  }
  return;
}



// FUNCTION 140e568a0 FUN_140e568a0 body=47 status=ok
// SIG undefined FUN_140e568a0(void)

void FUN_140e568a0(longlong param_1,int param_2)

{
  int local_res8 [8];
  
  if (*(char *)(param_1 + 0x280) == '\0') {
    local_res8[0] = *(int *)(param_1 + 0x17c) - param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x220,local_res8);
  }
  return;
}



// FUNCTION 140e568e0 FUN_140e568e0 body=41 status=ok
// SIG undefined FUN_140e568e0(void)

void FUN_140e568e0(longlong param_1)

{
  undefined4 local_res8;
  undefined2 local_resc;
  
  local_res8 = 0;
  local_resc = 0;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x218,&local_res8);
  return;
}



// FUNCTION 140e56910 FUN_140e56910 body=53 status=ok
// SIG undefined FUN_140e56910(void)

void FUN_140e56910(longlong param_1,longlong param_2)

{
  int local_res8 [8];
  
  if ((*(char *)(param_1 + 0x280) == '\0') && (param_2 < *(longlong *)(param_1 + 0x180))) {
    local_res8[0] = (int)*(longlong *)(param_1 + 0x180) - (int)param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x230,local_res8);
  }
  return;
}



// FUNCTION 140e56950 FUN_140e56950 body=324 status=ok
// SIG undefined FUN_140e56950(void)

void FUN_140e56950(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(char *)(param_1 + 0x280) == '\0') {
    local_resc = *(undefined4 *)(param_1 + 0x178);
    local_res8 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x210,&local_res8);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x510);
      if (*plVar1 != 0) {
        plVar2 = *(longlong **)(param_1 + 0x1f0);
        plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x1f8) * 2;
        for (; plVar2 != plVar3; plVar2 = plVar2 + 2) {
          if (*plVar2 == *plVar1) {
            uVar6 = (undefined4)plVar2[1];
            break;
          }
        }
      }
      if (plVar1[1] != 0) {
        plVar2 = *(longlong **)(param_1 + 0x1f0);
        plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x1f8) * 2;
        for (; uVar5 = 0, plVar2 != plVar3; plVar2 = plVar2 + 2) {
          if (*plVar2 == plVar1[1]) {
            uVar5 = (undefined4)plVar2[1];
            break;
          }
        }
      }
      uVar4 = 0;
      if (plVar1[2] != 0) {
        plVar2 = *(longlong **)(param_1 + 0x1f0);
        plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x1f8) * 2;
        for (; plVar2 != plVar3; plVar2 = plVar2 + 2) {
          if (*plVar2 == plVar1[2]) {
            uVar4 = (undefined4)plVar2[1];
            break;
          }
        }
      }
    }
    FUN_140e45720(param_1,param_2,*(undefined4 *)(param_1 + 0x178),uVar6,uVar5,uVar4);
  }
  return;
}



// FUNCTION 140e56aa0 FUN_140e56aa0 body=92 status=ok
// SIG undefined FUN_140e56aa0(void)

void FUN_140e56aa0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x668))();
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
      FUN_140d04220(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140e56b00 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UFlowChart::BeginDestroy(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_140e66560(param_1);
  return;
}



// FUNCTION 140e56b20 FUN_140e56b20 body=27 status=ok
// SIG undefined FUN_140e56b20(void)

void FUN_140e56b20(undefined8 param_1)

{
  FUN_140e54e40();
  FUN_140e62940(param_1);
  return;
}



// FUNCTION 140e56b40 FUN_140e56b40 body=37 status=ok
// SIG undefined FUN_140e56b40(void)

void FUN_140e56b40(longlong param_1)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = *(undefined1 *)(param_1 + 0x598);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x608,local_res8);
  return;
}



// FUNCTION 140e56b90 FUN_140e56b90 body=50 status=ok
// SIG undefined FUN_140e56b90(void)

void FUN_140e56b90(longlong param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)(param_1 + 0x64c);
  local_10 = *(undefined4 *)(param_1 + 0x654);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x5f8,&local_18);
  return;
}



// FUNCTION 140e56bd0 FUN_140e56bd0 body=33 status=ok
// SIG undefined FUN_140e56bd0(void)

void FUN_140e56bd0(longlong param_1)

{
  FUN_1427114a0();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x638,0);
  return;
}



// FUNCTION 140e56c00 FUN_140e56c00 body=285 status=ok
// SIG undefined FUN_140e56c00(void)

void FUN_140e56c00(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  undefined8 local_28;
  undefined1 local_20;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c0)) {
    uVar4 = 1;
    lVar5 = 0;
    do {
      if (iVar3 < *(int *)(param_2 + 0x18)) {
        lVar2 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar2 = param_2;
        }
        iVar1 = iVar3;
        if (iVar3 < 0) {
          iVar1 = iVar3 + 0x1f;
        }
        bVar6 = (*(uint *)(lVar2 + (longlong)(iVar1 >> 5) * 4) & uVar4) != 0;
      }
      else {
        bVar6 = false;
      }
      if (iVar3 < *(int *)(param_1 + 0x1e0)) {
        lVar2 = *(longlong *)(param_1 + 0x1d8);
        if (*(longlong *)(param_1 + 0x1d8) == 0) {
          lVar2 = param_1 + 0x1c8;
        }
        iVar1 = iVar3;
        if (iVar3 < 0) {
          iVar1 = iVar3 + 0x1f;
        }
        bVar7 = (*(uint *)(lVar2 + (longlong)(iVar1 >> 5) * 4) & uVar4) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar6 != bVar7) {
        if (iVar3 < *(int *)(param_1 + 0x1e0)) {
          lVar2 = *(longlong *)(param_1 + 0x1d8);
          if (*(longlong *)(param_1 + 0x1d8) == 0) {
            lVar2 = param_1 + 0x1c8;
          }
          iVar1 = iVar3;
          if (iVar3 < 0) {
            iVar1 = iVar3 + 0x1f;
          }
          local_20 = (*(uint *)(lVar2 + (longlong)(iVar1 >> 5) * 4) & uVar4) != 0;
        }
        else {
          local_20 = false;
        }
        local_28 = *(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x1b8));
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x270,&local_28);
      }
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      lVar5 = lVar5 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 0x1c0));
  }
  return;
}



// FUNCTION 140e56d20 FUN_140e56d20 body=630 status=ok
// SIG undefined FUN_140e56d20(void)

void FUN_140e56d20(longlong param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  int *piVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar5 = FUN_140cff230(lVar5), lVar5 != 0)) {
      piVar11 = *(int **)(lVar5 + 0x418);
      piVar10 = piVar11 + (longlong)*(int *)(lVar5 + 0x420) * 0xc;
      for (; piVar11 != piVar10; piVar11 = piVar11 + 0xc) {
        lVar5 = FUN_1405ec200(piVar11 + 2);
        if (lVar5 != 0) {
          lVar4 = FUN_1413b8910();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            plVar12 = (longlong *)(param_1 + 0x188);
            iVar1 = *(int *)(param_1 + 400);
            plVar6 = (longlong *)*plVar12;
            plVar8 = plVar6 + (longlong)iVar1 * 4;
            for (; plVar6 != plVar8; plVar6 = plVar6 + 4) {
              if (*plVar6 == lVar5) {
                if ((int)plVar6[1] < *piVar11) {
                  *(int *)(plVar6 + 1) = *piVar11;
                }
                goto LAB_140e56e6e;
              }
            }
            *(int *)(param_1 + 400) = iVar1 + 1;
            if (*(int *)(param_1 + 0x194) < iVar1 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(plVar12);
            }
            iVar2 = *piVar11;
            plVar12 = (longlong *)((longlong)iVar1 * 0x20 + *plVar12);
            *plVar12 = lVar5;
            *(int *)(plVar12 + 1) = iVar2;
            plVar12[2] = 0;
            plVar12[3] = 0;
          }
        }
LAB_140e56e6e:
      }
    }
  }
  plVar12 = (longlong *)(param_1 + 0x1f0);
  lVar5 = *plVar12;
  lVar4 = (longlong)*(int *)(param_1 + 0x1f8) * 0x10 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x10) {
    *(undefined4 *)(lVar5 + 8) = 0;
  }
  plVar6 = *(longlong **)(param_1 + 0x188);
  plVar8 = plVar6 + (longlong)*(int *)(param_1 + 400) * 4;
  do {
    if (plVar6 == plVar8) {
      *(undefined4 *)(param_1 + 0x208) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x20c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x200,0);
      }
      FUN_140e65450(param_1);
      return;
    }
    lVar5 = *plVar6;
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x30) != 0)) {
      iVar1 = *(int *)(param_1 + 0x1f8);
      plVar9 = (longlong *)*plVar12;
      plVar7 = plVar9 + (longlong)iVar1 * 2;
      for (; plVar9 != plVar7; plVar9 = plVar9 + 2) {
        if (*plVar9 == *(longlong *)(lVar5 + 0x30)) {
          *(int *)(plVar9 + 1) = (int)plVar9[1] + (int)plVar6[1];
          goto LAB_140e56f2e;
        }
      }
      *(int *)(param_1 + 0x1f8) = iVar1 + 1;
      if (*(int *)(param_1 + 0x1fc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
      }
      lVar4 = plVar6[1];
      puVar13 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar12);
      *puVar13 = *(undefined8 *)(lVar5 + 0x30);
      *(int *)(puVar13 + 1) = (int)lVar4;
    }
LAB_140e56f2e:
    plVar6 = plVar6 + 4;
  } while( true );
}



// FUNCTION 140e56fa0 FUN_140e56fa0 body=285 status=ok
// SIG undefined FUN_140e56fa0(void)

void FUN_140e56fa0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  undefined8 local_28;
  undefined1 local_20;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 400)) {
    uVar4 = 1;
    lVar5 = 0;
    do {
      if (iVar3 < *(int *)(param_2 + 0x18)) {
        lVar2 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar2 = param_2;
        }
        iVar1 = iVar3;
        if (iVar3 < 0) {
          iVar1 = iVar3 + 0x1f;
        }
        bVar6 = (*(uint *)(lVar2 + (longlong)(iVar1 >> 5) * 4) & uVar4) != 0;
      }
      else {
        bVar6 = false;
      }
      if (iVar3 < *(int *)(param_1 + 0x1b0)) {
        lVar2 = *(longlong *)(param_1 + 0x1a8);
        if (*(longlong *)(param_1 + 0x1a8) == 0) {
          lVar2 = param_1 + 0x198;
        }
        iVar1 = iVar3;
        if (iVar3 < 0) {
          iVar1 = iVar3 + 0x1f;
        }
        bVar7 = (*(uint *)(lVar2 + (longlong)(iVar1 >> 5) * 4) & uVar4) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar6 != bVar7) {
        if (iVar3 < *(int *)(param_1 + 0x1b0)) {
          lVar2 = *(longlong *)(param_1 + 0x1a8);
          if (*(longlong *)(param_1 + 0x1a8) == 0) {
            lVar2 = param_1 + 0x198;
          }
          iVar1 = iVar3;
          if (iVar3 < 0) {
            iVar1 = iVar3 + 0x1f;
          }
          local_20 = (*(uint *)(lVar2 + (longlong)(iVar1 >> 5) * 4) & uVar4) != 0;
        }
        else {
          local_20 = false;
        }
        local_28 = *(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x188));
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x260,&local_28);
      }
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      lVar5 = lVar5 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 400));
  }
  return;
}



// FUNCTION 140e570c0 FUN_140e570c0 body=27 status=ok
// SIG undefined FUN_140e570c0(void)

void FUN_140e570c0(undefined8 param_1)

{
  FUN_140e55400();
  FUN_140e42500(param_1);
  return;
}



// FUNCTION 140e570e0 FUN_140e570e0 body=195 status=ok
// SIG undefined FUN_140e570e0(void)

void FUN_140e570e0(longlong param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
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
    if ((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x9c0), lVar1 != 0)) {
      lVar3 = FUN_14145f370();
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
        FUN_140d03be0(lVar1,*(int *)(param_1 + 0x1dc) - param_2,0,0);
      }
    }
  }
  return;
}



// FUNCTION 140e571b0 FUN_140e571b0 body=99 status=ok
// SIG undefined FUN_140e571b0(void)

void FUN_140e571b0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142711530();
  lVar2 = FUN_1422312c0(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140bce120(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140e57220 FUN_140e57220 body=198 status=ok
// SIG undefined FUN_140e57220(void)

void FUN_140e57220(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    uVar5 = 0;
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_140e4c4b0(param_2,&local_18);
    uVar2 = FUN_140e4c5a0(param_1,*(undefined8 *)(param_2 + 0x118));
    uVar4 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
    if (local_18 + (int)local_10 < local_18) {
      uVar4 = uVar5;
    }
    plVar3 = local_18;
    if (uVar4 != 0) {
      do {
        lVar1 = *plVar3;
        if (lVar1 != 0) {
          FUN_142398e60(lVar1,*(uint *)(lVar1 + 0x6b8) & 0xfff9e7ff | uVar2,0);
        }
        plVar3 = plVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar4);
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 140e572f0 FUN_140e572f0 body=251 status=ok
// SIG undefined FUN_140e572f0(void)

void FUN_140e572f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    uVar5 = 0;
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_140e4c4b0(param_2,&local_18);
    uVar4 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
    if (local_18 + (int)local_10 < local_18) {
      uVar4 = uVar5;
    }
    plVar3 = local_18;
    if (uVar4 != 0) {
      do {
        lVar1 = *plVar3;
        if (lVar1 != 0) {
          FUN_142398e60(lVar1,*(uint *)(lVar1 + 0x6b8) & 0xfff9e7ff,0);
        }
        plVar3 = plVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar4);
    }
    if (*(longlong *)(param_2 + 0x118) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x30);
      plVar3 = plVar2 + *(int *)(param_1 + 0x38);
      for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
        if (*plVar2 == *(longlong *)(param_2 + 0x118)) {
          FUN_140e59fd0(param_1);
          break;
        }
      }
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 140e573f0 FUN_140e573f0 body=329 status=ok
// SIG undefined FUN_140e573f0(void)

void FUN_140e573f0(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res18 [8];
  
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
    if ((bVar1) &&
       (cVar2 = (*(code *)**(undefined8 **)param_1[0xa7])((undefined8 *)param_1[0xa7],*param_2),
       cVar2 != '\0')) {
      lVar3 = *(longlong *)(lVar3 + 0x478);
      lVar4 = param_1[0xcf];
      iVar6 = 0;
      if (0 < *(int *)(lVar3 + 0x1e8)) {
        lVar8 = 0;
        do {
          plVar7 = (longlong *)(*(longlong *)(lVar3 + 0x1e0) + lVar8);
          if ((((int)plVar7[1] != 0) && (plVar5 = (longlong *)*plVar7, plVar5 != (longlong *)0x0))
             && (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res18),
                *plVar5 == lVar4)) {
            if (((int)plVar7[1] != 0) && (plVar5 = (longlong *)*plVar7, plVar5 != (longlong *)0x0))
            {
              (**(code **)(*plVar5 + 0x28))(plVar5,0);
              if (*plVar7 != 0) {
                lVar4 = FMemory::Realloc(*plVar7,0,0);
                *plVar7 = lVar4;
              }
              *(undefined4 *)(plVar7 + 1) = 0;
            }
            break;
          }
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 0x10;
        } while (iVar6 < *(int *)(lVar3 + 0x1e8));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x1e0,0);
      param_1[0xcf] = 0;
      (**(code **)(*param_1 + 0x7a8))(param_1);
    }
  }
  return;
}



// FUNCTION 140e57540 FUN_140e57540 body=161 status=ok
// SIG undefined FUN_140e57540(void)

void FUN_140e57540(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x1dc);
  iVar5 = *(int *)(param_1 + 0x1d0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x1c8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140e575a2:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,1);
        if (cVar4 == '\0') goto LAB_140e575a2;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1dc);
  }
  *(int *)(param_1 + 0x1dc) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1c8),0);
    return;
  }
  return;
}



// FUNCTION 140e575f0 FUN_140e575f0 body=23 status=ok
// SIG undefined FUN_140e575f0(void)

void FUN_140e575f0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x22a8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e575ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x22a8) + 0x430))();
    return;
  }
  return;
}



// FUNCTION 140e57610 FUN_140e57610 body=23 status=ok
// SIG undefined FUN_140e57610(void)

void FUN_140e57610(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x22a8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e5761f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x22a8) + 0x438))();
    return;
  }
  return;
}



// FUNCTION 140e57630 FUN_140e57630 body=98 status=ok
// SIG undefined FUN_140e57630(void)

void FUN_140e57630(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_140e89b90();
  if (param_2 != 0) {
    lVar2 = UXSkinAnimationProfile::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x300) = param_2;
    }
  }
  return;
}



// FUNCTION 140e576a0 FUN_140e576a0 body=17 status=ok
// SIG undefined FUN_140e576a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e576a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 uStack_b8;
  undefined4 uStack_b0;
  longlong *plStack_a8;
  int iStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  code *pcStack_68;
  longlong alStack_58 [4];
  longlong *plStack_38;
  int iStack_28;
  ulonglong uStack_18;
  
  lVar1 = *(longlong *)(param_1 + 0x22a8);
  if (lVar1 == 0) {
    return;
  }
  uStack_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (((*(char *)(lVar1 + 0x240) == '\0') && (*(longlong *)(lVar1 + 0x218) != 0)) &&
     (lVar3 = FUN_1422312c0(), lVar3 != 0)) {
    uStack_98 = &LAB_140e6e3b4;
    plStack_a8 = (longlong *)0x0;
    iStack_a0 = 0;
    uStack_90 = 0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar4 == (longlong *)0x0) {
      if (((iStack_a0 != 0) && (plStack_a8 != (longlong *)0x0)) &&
         ((**(code **)(*plStack_a8 + 0x28))(plStack_a8,0), plStack_a8 != (longlong *)0x0)) {
        plStack_a8 = (longlong *)FMemory::Realloc(plStack_a8,0,0);
      }
    }
    else {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,lVar1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)uStack_98;
      *(undefined4 *)((longlong)plVar4 + 0x14) = uStack_98._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_8c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar3;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      FUN_1404c8680(plVar4,&plStack_a8);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar3 = FMemory::Realloc(plVar4,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
    lVar3 = FUN_1422312c0(*(undefined8 *)(lVar1 + 0x218));
    uStack_88 = 0;
    uStack_80 = 0;
    uVar2 = *(undefined8 *)(lVar3 + 0xa0);
    if ((iStack_a0 != 0) && (plStack_a8 != (longlong *)0x0)) {
      (**(code **)(*plStack_a8 + 0x30))(plStack_a8,&uStack_88);
    }
    FWeakObjectPtr::operator=(auStack_78,0);
    uStack_b0 = 0xbf800000;
    uStack_b8 = 0;
    uStack_70 = 0;
    plStack_38 = (longlong *)0x0;
    iStack_28 = 0;
    pcStack_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,lVar1 + 0x210,&uStack_88,0x800000);
    if (iStack_28 != 0) {
      plVar4 = alStack_58;
      if (plStack_38 != (longlong *)0x0) {
        plVar4 = plStack_38;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (plStack_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_88);
    if (iStack_a0 != 0) {
      if (plStack_a8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plStack_a8 + 0x28))(plStack_a8,0);
      if (plStack_a8 != (longlong *)0x0) {
        plStack_a8 = (longlong *)FMemory::Realloc(plStack_a8,0,0);
      }
      iStack_a0 = 0;
    }
    if (plStack_a8 != (longlong *)0x0) {
      FMemory::Free(plStack_a8);
    }
  }
  return;
}



// FUNCTION 140e576c0 FUN_140e576c0 body=896 status=ok
// SIG undefined FUN_140e576c0(void)

void FUN_140e576c0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong local_res10;
  longlong local_res18 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar15 = 0;
  local_res10 = 0;
  local_res18[0] = 0;
  FUN_140e50da0(param_1,&local_res10,local_res18);
  lVar11 = local_res18[0];
  lVar10 = local_res10;
  lVar12 = lVar15;
  if (local_res10 != 0) {
    lVar7 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar12 = lVar10;
    do {
      if (lVar12 == lVar7) {
        if (lVar11 != 0) {
          lVar7 = UUGLoadoutBarUW::GetPrivateStaticClass();
          lVar12 = lVar11;
          goto LAB_140e57820;
        }
        break;
      }
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
LAB_140e57729:
    lVar8 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar7 = lVar10;
    do {
      lVar12 = lVar10;
      if (lVar7 == lVar8) break;
      lVar7 = *(longlong *)(lVar7 + 0x30);
      lVar12 = lVar15;
    } while (lVar7 != 0);
  }
  lVar7 = lVar15;
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    lVar9 = UUGLoadoutBarUW::GetPrivateStaticClass();
    for (lVar8 = *(longlong *)(param_1 + 0x2c0);
        (lVar7 = lVar15, lVar8 != 0 && (lVar7 = *(longlong *)(param_1 + 0x2c0), lVar8 != lVar9));
        lVar8 = *(longlong *)(lVar8 + 0x30)) {
    }
  }
  if (lVar12 != lVar7) {
    FUN_140e62280(param_1,param_1 + 0x2c0,lVar10,1);
  }
  lVar10 = lVar15;
  if (lVar11 != 0) {
    lVar7 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar12 = lVar11;
    do {
      lVar10 = lVar11;
      if (lVar12 == lVar7) break;
      lVar12 = *(longlong *)(lVar12 + 0x30);
      lVar10 = lVar15;
    } while (lVar12 != 0);
  }
  lVar12 = lVar15;
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    lVar8 = UUGLoadoutBarUW::GetPrivateStaticClass();
    for (lVar7 = *(longlong *)(param_1 + 0x2e0);
        (lVar12 = lVar15, lVar7 != 0 && (lVar12 = *(longlong *)(param_1 + 0x2e0), lVar7 != lVar8));
        lVar7 = *(longlong *)(lVar7 + 0x30)) {
    }
  }
  if (lVar10 != lVar12) {
    puVar14 = (undefined8 *)(param_1 + 0x2e0);
LAB_140e577f2:
    FUN_140e62280(param_1,puVar14,lVar11,1);
  }
  return;
LAB_140e57820:
  if (lVar12 != lVar7) goto code_r0x000140e57825;
  lVar12 = lVar15;
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    lVar8 = UUGLoadoutBarUW::GetPrivateStaticClass();
    for (lVar7 = *(longlong *)(param_1 + 0x2c0);
        (lVar12 = lVar15, lVar7 != 0 && (lVar12 = *(longlong *)(param_1 + 0x2c0), lVar7 != lVar8));
        lVar7 = *(longlong *)(lVar7 + 0x30)) {
    }
  }
  lVar8 = UUGLoadoutBarUW::GetPrivateStaticClass();
  lVar7 = lVar11;
  do {
    lVar9 = lVar11;
    if (lVar7 == lVar8) break;
    lVar7 = *(longlong *)(lVar7 + 0x30);
    lVar9 = lVar15;
  } while (lVar7 != 0);
  if (lVar12 != lVar9) goto LAB_140e57729;
  lVar12 = lVar15;
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    lVar8 = UUGLoadoutBarUW::GetPrivateStaticClass();
    for (lVar7 = *(longlong *)(param_1 + 0x2e0);
        (lVar12 = lVar15, lVar7 != 0 && (lVar12 = *(longlong *)(param_1 + 0x2e0), lVar7 != lVar8));
        lVar7 = *(longlong *)(lVar7 + 0x30)) {
    }
  }
  lVar8 = UUGLoadoutBarUW::GetPrivateStaticClass();
  lVar7 = lVar10;
  do {
    lVar9 = lVar10;
    if (lVar7 == lVar8) break;
    lVar7 = *(longlong *)(lVar7 + 0x30);
    lVar9 = lVar15;
  } while (lVar7 != 0);
  if (lVar12 != lVar9) goto LAB_140e57729;
  lVar12 = param_1 + 0x290;
  lVar8 = FWeakObjectPtr::Get(lVar12);
  lVar7 = lVar11;
  if (lVar8 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    lVar7 = local_res18[0];
    lVar10 = local_res10;
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x298)) &&
       (local_res18[1] = 0, *(longlong *)(param_1 + 0x2a0) != 0)) {
      lVar10 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar12,lVar10);
      if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x298) = DAT_1464b56f4;
      }
      lVar8 = FWeakObjectPtr::Get(lVar12);
      lVar7 = local_res18[0];
      lVar10 = local_res10;
      if (lVar8 != 0) goto LAB_140e57978;
    }
LAB_140e579bd:
    lVar8 = lVar15;
  }
  else {
LAB_140e57978:
    lVar11 = UXSkinAnimationProfile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140e579bd;
  }
  lVar12 = *(longlong *)(param_1 + 0x300);
  lVar11 = lVar10;
  if (lVar12 == lVar8) {
    lVar11 = lVar7;
  }
  lVar10 = 0x2c0;
  if (lVar12 != lVar8) {
    lVar10 = 0x2e0;
  }
  puVar13 = (undefined4 *)(lVar10 + param_1);
  uVar1 = 0x2e0;
  if (lVar12 != lVar8) {
    uVar1 = 0x2c0;
  }
  puVar14 = (undefined8 *)((ulonglong)uVar1 + param_1);
  uVar2 = *puVar14;
  uVar3 = puVar14[1];
  uVar5 = puVar14[2];
  uVar6 = puVar14[3];
  *puVar14 = 0;
  puVar14[1] = 0;
  *(undefined1 *)(puVar14 + 2) = 0;
  puVar14[3] = 0;
  FUN_140e48280(param_1,puVar13);
  local_48 = (undefined4)uVar2;
  uStack_44 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_40 = (undefined4)uVar3;
  uStack_3c = (undefined4)((ulonglong)uVar3 >> 0x20);
  *puVar13 = local_48;
  puVar13[1] = uStack_44;
  puVar13[2] = uStack_40;
  puVar13[3] = uStack_3c;
  *(undefined8 *)(puVar13 + 4) = uVar5;
  *(undefined8 *)(puVar13 + 6) = uVar6;
  goto LAB_140e577f2;
code_r0x000140e57825:
  lVar12 = *(longlong *)(lVar12 + 0x30);
  if (lVar12 == 0) goto LAB_140e57729;
  goto LAB_140e57820;
}



// FUNCTION 140e57a40 FUN_140e57a40 body=81 status=ok
// SIG undefined FUN_140e57a40(void)

void FUN_140e57a40(longlong param_1)

{
  undefined8 uVar1;
  longlong local_18;
  undefined8 local_10;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(char *)(param_1 + 0x8b0) != '\0') {
    local_10 = 0;
    local_18 = param_1;
    uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    FUN_140e93b10(*(undefined8 *)(param_1 + 0x898),&local_18);
  }
  return;
}



// FUNCTION 140e57aa0 FUN_140e57aa0 body=81 status=ok
// SIG undefined FUN_140e57aa0(void)

void FUN_140e57aa0(longlong param_1)

{
  undefined8 uVar1;
  longlong local_18;
  undefined8 local_10;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(char *)(param_1 + 0x8b0) != '\0') {
    local_10 = 0;
    local_18 = param_1;
    uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    FUN_140e93b80(*(undefined8 *)(param_1 + 0x898),&local_18);
  }
  return;
}



// FUNCTION 140e57b00 FUN_140e57b00 body=185 status=ok
// SIG undefined FUN_140e57b00(void)

void FUN_140e57b00(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x2358);
  if (lVar4 == 0) {
LAB_140e57b4f:
    lVar4 = 0;
  }
  else {
    lVar2 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e57b4f;
  }
  lVar2 = *(longlong *)(param_1 + 0x2370);
  if (lVar2 != 0) {
    lVar3 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e57b95;
  }
  lVar2 = 0;
LAB_140e57b95:
  if ((lVar4 != 0) && (lVar2 != 0)) {
    FUN_14127e590(lVar2,*(undefined8 *)(lVar4 + 0x930));
  }
  return;
}



// FUNCTION 140e57bc0 FUN_140e57bc0 body=31 status=ok
// SIG undefined FUN_140e57bc0(void)

void FUN_140e57bc0(longlong param_1)

{
  FUN_142344780();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  return;
}



// FUNCTION 140e57be0 FUN_140e57be0 body=211 status=ok
// SIG undefined FUN_140e57be0(void)

void FUN_140e57be0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  FUN_140cc1a50();
  if (*(longlong *)(param_1 + 0xaf8) != 0) {
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1430b3a80(param_2);
    }
    *(undefined4 *)(param_1 + 0xb44) = uVar4;
  }
  if (param_2 == 0) {
    return;
  }
  lVar2 = FUN_14149b100();
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
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x908);
  if (lVar2 != 0) {
    lVar3 = APlayerState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e57c9c;
  }
  lVar2 = 0;
LAB_140e57c9c:
  *(bool *)(param_1 + 0xc41) = lVar2 != 0;
  return;
}



// FUNCTION 140e57cc0 FUN_140e57cc0 body=88 status=ok
// SIG undefined FUN_140e57cc0(void)

void FUN_140e57cc0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_1 + 0xaf8) == 0) goto LAB_140e57d0b;
  if (*(longlong *)(param_1 + 0x950) == 0) {
LAB_140e57d00:
    uVar3 = 0;
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x950) + 0xd88);
    lVar1 = (**(code **)(*plVar2 + 0xf0))(plVar2,0);
    if (lVar1 == 0) goto LAB_140e57d00;
    uVar3 = FUN_1430b3a80(lVar1);
  }
  *(undefined4 *)(param_1 + 0xb44) = uVar3;
LAB_140e57d0b:
  thunk_FUN_141405c80(param_1);
  return;
}



// FUNCTION 140e57d70 FUN_140e57d70 body=457 status=ok
// SIG undefined FUN_140e57d70(void)

void FUN_140e57d70(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  lVar7 = *(longlong *)(param_1 + 0xaf8);
  if (lVar7 != 0) {
    fVar1 = *(float *)(lVar7 + 0x6c);
    fVar2 = *(float *)(lVar7 + 0x60);
    iVar8 = rand();
    fVar3 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x68);
    fVar4 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x5c);
    iVar9 = rand();
    fVar5 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 100);
    fVar6 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x58);
    iVar10 = rand();
    *(ulonglong *)(param_1 + 0xb50) =
         CONCAT44((float)iVar9 * 3.051851e-05 * (fVar3 - fVar4) + fVar4,
                  (float)iVar10 * 3.051851e-05 * (fVar5 - fVar6) + fVar6);
    *(float *)(param_1 + 0xb58) = (float)iVar8 * 3.051851e-05 * (fVar1 - fVar2) + fVar2;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x84);
    fVar2 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x78);
    iVar8 = rand();
    fVar3 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x80);
    fVar4 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x74);
    iVar9 = rand();
    fVar5 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x7c);
    fVar6 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x70);
    iVar10 = rand();
    *(ulonglong *)(param_1 + 0xb5c) =
         CONCAT44((float)iVar9 * 3.051851e-05 * (fVar3 - fVar4) + fVar4,
                  (float)iVar10 * 3.051851e-05 * (fVar5 - fVar6) + fVar6);
    *(float *)(param_1 + 0xb64) = (float)iVar8 * 3.051851e-05 * (fVar1 - fVar2) + fVar2;
  }
  return;
}



// FUNCTION 140e57f40 FUN_140e57f40 body=977 status=ok
// SIG undefined FUN_140e57f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e57f40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong **pplVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68 [2];
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*param_2 == 0) {
    plVar6 = (longlong *)param_2[1];
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar9 = plVar6 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    (**(code **)(*plVar6 + 8))(plVar6,1);
    return;
  }
  puVar5 = (undefined8 *)FName::FName(local_48,L"GbxShiftOverlay",1);
  plVar6 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar5);
  if ((plVar6 == (longlong *)0x0) || (lVar7 = FUN_1425476f0(param_1), lVar7 == 0))
  goto LAB_140e582a7;
  lVar8 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_140e582a7;
  plStack_80 = (longlong *)operator_new(0x20);
  if (plStack_80 != (longlong *)0x0) {
    *(undefined4 *)(plStack_80 + 1) = 1;
    *plStack_80 = (longlong)&PTR_FUN_144319530;
    *(undefined4 *)((longlong)plStack_80 + 0xc) = 1;
    plStack_80[2] = (longlong)&PTR_FUN_1443170a8;
    plStack_80[3] = lVar7;
  }
  local_88 = plStack_80 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
  local_98 = local_88;
  plStack_90 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  lVar7 = *param_2;
  pplVar10 = (longlong **)(lVar7 + 8);
  if (pplVar10 != &local_98) {
    *pplVar10 = local_88;
    local_98 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar7 + 0x10,&plStack_90);
  }
  plVar9 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_90 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  plVar9 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_80 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_80)(plStack_80);
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
  lVar7 = *param_2;
  local_78 = FUN_140e57540;
  uStack_70 = 0;
  pplVar10 = (longlong **)(lVar7 + 0x18);
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_68[0] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)local_78;
    plVar9[3] = CONCAT44(uStack_6c,uStack_70);
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar8;
    *plVar9 = (longlong)&PTR_FUN_143f77bd0;
  }
  if (local_68 == pplVar10) {
LAB_140e581d0:
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      local_68[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
      if (local_68[0] != (longlong *)0x0) {
        FMemory::Free(local_68[0]);
      }
    }
  }
  else {
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x30))(plVar9,pplVar10);
      goto LAB_140e581d0;
    }
    if ((*(int *)(lVar7 + 0x20) != 0) && (plVar9 = *pplVar10, plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      if (*pplVar10 != (longlong *)0x0) {
        plVar9 = (longlong *)FMemory::Realloc(*pplVar10,0,0);
        *pplVar10 = plVar9;
      }
      *(undefined4 *)(lVar7 + 0x20) = 0;
    }
  }
  plVar3 = (longlong *)param_2[1];
  plVar9 = (longlong *)(param_1 + 0x1e8);
  lVar7 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_a8 = lVar7;
  plStack_a0 = plVar3;
  if (&local_a8 != plVar9) {
    local_a8 = *plVar9;
    plStack_a0 = *(longlong **)(param_1 + 0x1f0);
    *plVar9 = lVar7;
    *(longlong **)(param_1 + 0x1f0) = plVar3;
    local_40 = lVar7;
    plStack_38 = plVar3;
  }
  plVar9 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_a0 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar6 + 0x80))(plVar6,param_1,&local_58);
LAB_140e582a7:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return;
}



// FUNCTION 140e58320 FUN_140e58320 body=87 status=ok
// SIG undefined FUN_140e58320(void)

void FUN_140e58320(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x28),0,1);
  }
  if ((*(longlong *)(param_1 + 0x250) != 0) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
    uVar1 = AActor::GetWorldTimerManager();
    FUN_142880530(uVar1,param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 140e58380 FUN_140e58380 body=14 status=ok
// SIG undefined FUN_140e58380(void)

void FUN_140e58380(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  FUN_140e2ff40(lVar1,*(undefined8 *)(lVar1 + 0xa38));
  return;
}



// FUNCTION 140e58390 FUN_140e58390 body=286 status=ok
// SIG undefined FUN_140e58390(void)

void FUN_140e58390(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [49];
  undefined1 local_a7;
  
  *(undefined1 *)(param_1 + 0x2320) = 0;
  if (param_2 != (longlong *)0x0) {
    cVar5 = (**(code **)(*param_2 + 0x290))(param_2,0);
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 0x2320) = 1;
    }
    else {
      FUN_142c62180(local_d8);
      local_a7 = 2;
      FUN_142d22270(param_2,local_e8,param_1,local_d8,0);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      FUN_142c63c50(local_d8);
    }
  }
  if (*(longlong **)(param_1 + 0x2318) != param_2) {
    if (*(longlong *)(param_1 + 0x2298) != 0) {
      if (*(longlong **)(param_1 + 0x2318) != (longlong *)0x0) {
        FUN_142d26ae0();
      }
      if (param_2 != (longlong *)0x0) {
        FUN_142d271f0(*(undefined8 *)(param_1 + 0x2298),param_2,0);
      }
    }
    *(longlong **)(param_1 + 0x2318) = param_2;
  }
  return;
}



// FUNCTION 140e584b0 FUN_140e584b0 body=194 status=ok
// SIG undefined FUN_140e584b0(void)

void FUN_140e584b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [49];
  undefined1 local_a7;
  
  if ((*(longlong *)(param_1 + 0x6f0) != 0) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x2318), plVar3 != (longlong *)0x0))
  {
    cVar5 = (**(code **)(*plVar3 + 0x290))(plVar3,0);
    if (cVar5 != '\0') {
      FUN_142c62180(local_d8);
      local_a7 = 2;
      FUN_142d22270(plVar3,local_e8,*(undefined8 *)(param_1 + 0x6f0),local_d8,0);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_e0 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      FUN_142c63c50(local_d8);
    }
  }
  return;
}



// FUNCTION 140e58580 FUN_140e58580 body=14 status=ok
// SIG undefined FUN_140e58580(void)

void FUN_140e58580(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  FUN_140e2ff40(lVar1,*(undefined8 *)(lVar1 + 0xa40));
  return;
}



// FUNCTION 140e58590 FUN_140e58590 body=251 status=ok
// SIG undefined FUN_140e58590(void)

void FUN_140e58590(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a8 [49];
  undefined1 local_177;
  undefined1 local_d8 [208];
  
  if (((*(longlong *)(param_1 + 0x6f0) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x920) != 0)) && (param_2 != 0)) {
    lVar5 = FUN_142e20fc0();
    lVar7 = param_2;
    while (lVar7 != lVar5) {
      lVar7 = *(longlong *)(lVar7 + 0x30);
      if (lVar7 == 0) {
        return;
      }
    }
    FUN_142c62180(local_1a8);
    local_177 = 2;
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x920);
    uVar6 = FUN_1405e0fd0(local_d8,local_1a8);
    FUN_142c7bb40(uVar4,local_1b8,param_2,uVar6,0);
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar2 = (int *)((longlong)local_1b0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
    FUN_142c63c50(local_1a8);
  }
  return;
}



// FUNCTION 140e58690 FUN_140e58690 body=1232 status=ok
// SIG undefined FUN_140e58690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e58690(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_348 [32];
  undefined1 local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined1 local_2e0 [8];
  longlong *local_2d8;
  undefined1 local_2c8 [32];
  longlong local_2a8;
  int local_2a0;
  int local_29c;
  undefined1 local_297;
  undefined1 local_1f8 [208];
  undefined1 *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  plVar9 = *(longlong **)(param_1 + 0x6f0);
  lVar12 = 0;
  if ((plVar9 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x738) & 0x40) == 0)) {
    (**(code **)(*plVar9 + 0x310))(plVar9,0);
    FUN_140e5d2a0(param_1,0);
    if (*(longlong *)(param_1 + 0x6e8) != 0) {
      lVar3 = USafeZone::GetPrivateStaticClass();
      for (lVar8 = *(longlong *)(param_1 + 0x6e8); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30))
      {
        if (lVar8 == lVar3) {
          if (*(longlong *)(param_1 + 0x6e8) != 0) {
            if (*(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x920) != 0) {
              FUN_142c62180(local_2c8);
              iVar2 = local_2a0;
              lVar8 = (longlong)local_2a0;
              local_297 = 2;
              local_2a0 = local_2a0 + 1;
              if (local_29c < local_2a0) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_2a8,iVar2);
              }
              FUN_142c62570(lVar8 * 0x38 + local_2a8,&DAT_146b31790,1);
              lVar8 = lVar12;
              if (*(longlong *)(param_1 + 0x6e8) != 0) {
                lVar4 = USafeZone::GetPrivateStaticClass();
                for (lVar3 = *(longlong *)(param_1 + 0x6e8);
                    (lVar8 = lVar12, lVar3 != 0 &&
                    (lVar8 = *(longlong *)(param_1 + 0x6e8), lVar3 != lVar4));
                    lVar3 = *(longlong *)(lVar3 + 0x30)) {
                }
              }
              uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x920);
              uVar5 = FUN_1405e0fd0(local_1f8,local_2c8);
              local_328 = 0;
              FUN_142c7bb40(uVar7,local_2e0,lVar8,uVar5);
              if (local_2d8 != (longlong *)0x0) {
                LOCK();
                plVar9 = local_2d8 + 1;
                lVar8 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_2d8)(local_2d8);
                  LOCK();
                  piVar1 = (int *)((longlong)local_2d8 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*local_2d8 + 8))(local_2d8,1);
                  }
                }
              }
              FUN_142c63c50(local_2c8);
            }
            plVar9 = *(longlong **)(param_1 + 0x6f8);
            plVar11 = plVar9 + (longlong)*(int *)(param_1 + 0x700) * 0xc;
            for (; plVar9 != plVar11; plVar9 = plVar9 + 0xc) {
              if ((*(char *)((longlong)plVar9 + 0x2d) != '\0') && (*plVar9 != 0)) {
                fVar13 = *(float *)(plVar9 + 6);
                if (*(char *)(param_1 + 0x73a) != '\x05') {
                  fVar13 = fVar13 + *(float *)(param_1 + 0x740) + *(float *)(param_1 + 0x73c);
                }
                FWeakObjectPtr::operator=(&local_300);
                lVar8 = lVar12;
                if (*(longlong *)(param_1 + 0x6e8) != 0) {
                  lVar4 = USafeZone::GetPrivateStaticClass();
                  for (lVar3 = *(longlong *)(param_1 + 0x6e8);
                      (lVar8 = lVar12, lVar3 != 0 &&
                      (lVar8 = *(longlong *)(param_1 + 0x6e8), lVar3 != lVar4));
                      lVar3 = *(longlong *)(lVar3 + 0x30)) {
                  }
                }
                FWeakObjectPtr::operator=(&local_2f8,lVar8);
                FWeakObjectPtr::operator=(&local_2f0,param_1);
                local_318 = local_300;
                local_314 = local_2fc;
                local_310 = local_2f8;
                local_30c = local_2f4;
                local_308 = local_2f0;
                local_304 = local_2ec;
                if (fVar13 <= 0.0) {
                  FUN_140e41660(&local_318);
                }
                else {
                  (**(code **)(*(longlong *)*plVar9 + 0x310))((longlong *)*plVar9,1);
                  local_2e8 = 0;
                  local_f8 = (longlong *)0x0;
                  local_e8 = 0;
                  puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_118);
                  if (puVar6 != (undefined8 *)0x0) {
                    *puVar6 = &PTR_FUN_1445b1a00;
                    *(undefined4 *)(puVar6 + 1) = local_318;
                    *(undefined4 *)((longlong)puVar6 + 0xc) = local_314;
                    *(undefined4 *)(puVar6 + 2) = local_310;
                    *(undefined4 *)((longlong)puVar6 + 0x14) = local_30c;
                    *(undefined4 *)(puVar6 + 3) = local_308;
                    *(undefined4 *)((longlong)puVar6 + 0x1c) = local_304;
                  }
                  local_128[0] = &LAB_140e45b90;
                  uVar7 = AActor::GetWorldTimerManager(param_1);
                  local_d8 = 0;
                  local_d0 = 0;
                  FWeakObjectPtr::operator=(local_c8,0);
                  local_c0 = 0;
                  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_128);
                  local_320 = 0xbf800000;
                  local_328 = 0;
                  FUN_142880850(uVar7,&local_2e8,&local_d8,fVar13);
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
                  if (local_e8 != 0) {
                    plVar10 = local_118;
                    if (local_f8 != (longlong *)0x0) {
                      plVar10 = local_f8;
                    }
                    if (plVar10 != (longlong *)0x0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10,0);
                    }
                  }
                  if (local_f8 != (longlong *)0x0) {
                    FMemory::Free();
                  }
                }
              }
            }
          }
          break;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  if (*(char *)(param_1 + 0x73a) != '\x05') {
    FUN_140e5fb70(param_1);
  }
  return;
}



// FUNCTION 140e58b60 FUN_140e58b60 body=1132 status=ok
// SIG undefined FUN_140e58b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e58b60(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_408 [32];
  undefined1 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined8 local_3b8;
  undefined1 local_3b0 [8];
  longlong *local_3a8;
  undefined1 local_398 [49];
  undefined1 local_367;
  undefined1 local_2c8 [208];
  undefined1 local_1f8 [208];
  undefined1 *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  FUN_140e5d2a0(param_1,0);
  if ((((*(char *)((longlong)param_1 + 0x73a) != '\x05') &&
       (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) &&
      ((*(byte *)(param_1 + 0xe7) & 0x40) == 0)) && (param_1[0x9c] != 0)) {
    plVar5 = (longlong *)FUN_140e81f70(param_1[0x9c],*(undefined1 *)((longlong)param_1 + 0x73a));
    lVar4 = *plVar5;
    if (((param_1[0xde] != 0) && (*(longlong *)(param_1[0xde] + 0x920) != 0)) && (lVar4 != 0)) {
      lVar6 = FUN_142e20fc0();
      lVar8 = lVar4;
      do {
        if (lVar8 == lVar6) {
          FUN_142c62180(local_398);
          local_367 = 2;
          uVar10 = *(undefined8 *)(param_1[0xde] + 0x920);
          uVar7 = FUN_1405e0fd0(local_1f8,local_398);
          local_3e8 = 0;
          FUN_142c7bb40(uVar10,local_3b0,lVar4,uVar7);
          if (local_3a8 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_3a8 + 1;
            lVar4 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_3a8)(local_3a8);
              LOCK();
              piVar1 = (int *)((longlong)local_3a8 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_3a8 + 8))(local_3a8,1);
              }
            }
          }
          FUN_142c63c50(local_398);
          break;
        }
        lVar8 = *(longlong *)(lVar8 + 0x30);
      } while (lVar8 != 0);
    }
    FUN_140e4b950(param_1[0xde]);
    if (0 < (int)param_1[0xe0]) {
      plVar11 = (longlong *)param_1[0xdf];
      plVar13 = plVar11 + (longlong)(int)param_1[0xe0] * 0xc;
      for (; plVar11 != plVar13; plVar11 = plVar11 + 0xc) {
        if (*plVar11 != 0) {
          FUN_142c62180(local_2c8);
          (**(code **)(*(longlong *)*plVar11 + 0x310))((longlong *)*plVar11,0);
          if (*(char *)((longlong)plVar11 + 0x2c) != '\0') {
            (**(code **)(*(longlong *)*plVar11 + 0x310))((longlong *)*plVar11,1);
            FWeakObjectPtr::operator=(&local_3c8,*plVar11);
            if (plVar5[1] != 0) {
              lVar8 = FUN_142e20fc0();
              for (lVar4 = plVar5[1]; (lVar4 != 0 && (lVar4 != lVar8));
                  lVar4 = *(longlong *)(lVar4 + 0x30)) {
              }
            }
            FWeakObjectPtr::operator=(&local_3c0);
            fVar3 = *(float *)(plVar11 + 6);
            local_3d8 = local_3c8;
            local_3d4 = local_3c4;
            local_3d0 = local_3c0;
            local_3cc = local_3bc;
            if (fVar3 <= 0.0) {
              FUN_140e415b0(&local_3d8);
            }
            else {
              local_3b8 = 0;
              local_f8 = (longlong *)0x0;
              local_e8 = 0;
              puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_118);
              if (puVar9 != (undefined8 *)0x0) {
                *puVar9 = &PTR_CopyToEmptyStorage_144266c58;
                *(undefined4 *)(puVar9 + 1) = local_3d8;
                *(undefined4 *)((longlong)puVar9 + 0xc) = local_3d4;
                *(undefined4 *)(puVar9 + 2) = local_3d0;
                *(undefined4 *)((longlong)puVar9 + 0x14) = local_3cc;
              }
              local_128[0] = &LAB_140e45b80;
              uVar10 = AActor::GetWorldTimerManager(param_1);
              local_d8 = 0;
              local_d0 = 0;
              FWeakObjectPtr::operator=(local_c8,0);
              local_c0 = 0;
              TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_128);
              local_3e0 = 0xbf800000;
              local_3e8 = 0;
              FUN_142880850(uVar10,&local_3b8,&local_d8,fVar3);
              if (local_78 != 0) {
                plVar12 = local_a8;
                if (local_88 != (longlong *)0x0) {
                  plVar12 = local_88;
                }
                if (plVar12 != (longlong *)0x0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
              if (local_88 != (longlong *)0x0) {
                FMemory::Free();
              }
              TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
              if (local_e8 != 0) {
                plVar12 = local_118;
                if (local_f8 != (longlong *)0x0) {
                  plVar12 = local_f8;
                }
                if (plVar12 != (longlong *)0x0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
              if (local_f8 != (longlong *)0x0) {
                FMemory::Free();
              }
            }
          }
          FUN_142c63c50(local_2c8);
        }
      }
    }
  }
  FUN_140e46e00(param_1);
  return;
}



// FUNCTION 140e58fd0 FUN_140e58fd0 body=163 status=ok
// SIG undefined FUN_140e58fd0(void)

undefined4 FUN_140e58fd0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_res10;
  
  uVar3 = 0;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  local_res10 = param_2;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar1 = FUN_140e306a0(*(longlong *)(param_1 + 0x28),&local_res10,param_1 + 0x19c,param_1 + 0x1a8
                         );
    if (cVar1 != '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x19c);
      uVar2 = local_res10;
      goto LAB_140e59040;
    }
  }
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
LAB_140e59040:
  *(undefined8 *)(param_1 + 400) = uVar2;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_140e34b30(*(longlong *)(param_1 + 0x250),uVar2);
  }
  return uVar3;
}



// FUNCTION 140e59080 FUN_140e59080 body=258 status=ok
// SIG undefined FUN_140e59080(void)

void FUN_140e59080(longlong *param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  
  FUN_140e46e00();
  if (((param_1[0x9c] != 0) && (lVar1 = (**(code **)(*param_1 + 0x148))(param_1), lVar1 != 0)) &&
     (plVar2 = (longlong *)FUN_140e81f70(param_1[0x9c],param_2), *plVar2 != 0)) {
    lVar3 = FUN_142e20fc0();
    for (lVar1 = *plVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (*plVar2 == 0) {
          return;
        }
        fVar4 = *(float *)(plVar2 + 2);
        if (fVar4 <= 1.1754944e-38) {
          fVar4 = 1.1754944e-38;
        }
        *(undefined4 *)(param_1 + 0xe8) = param_3;
        *(undefined1 *)((longlong)param_1 + 0x73a) = param_2;
        *(float *)((longlong)param_1 + 0x73c) = fVar4;
        if (param_1[0xdd] == 0) goto LAB_140e59165;
        lVar3 = USafeZone::GetPrivateStaticClass();
        lVar1 = param_1[0xdd];
        goto joined_r0x000140e59147;
      }
    }
  }
  return;
joined_r0x000140e59147:
  if (lVar1 == 0) {
LAB_140e59165:
    FUN_140e5fb70(param_1);
    return;
  }
  if (lVar1 == lVar3) {
    if (param_1[0xdd] != 0) {
      return;
    }
    goto LAB_140e59165;
  }
  lVar1 = *(longlong *)(lVar1 + 0x30);
  goto joined_r0x000140e59147;
}



// FUNCTION 140e59190 FUN_140e59190 body=64 status=ok
// SIG undefined FUN_140e59190(void)

void FUN_140e59190(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_res20 [8];
  
  ULocalPlayer::PlayerAdded();
  puVar1 = (undefined8 *)FName::FName(local_res20,L"GbxShiftOverlay",1);
  plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
  (**(code **)(*plVar2 + 0x70))(plVar2,param_1);
  return;
}



// FUNCTION 140e591d0 FUN_140e591d0 body=64 status=ok
// SIG undefined FUN_140e591d0(void)

void FUN_140e591d0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_res10 [24];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  puVar1 = (undefined8 *)FName::FName(local_res10,L"GbxShiftOverlay",1);
  plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
  (**(code **)(*plVar2 + 0x78))(plVar2,param_1);
  return;
}



// FUNCTION 140e59210 FUN_140e59210 body=25 status=ok
// SIG undefined FUN_140e59210(void)

void FUN_140e59210(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x2ce8)) {
    *(int *)(param_1 + 0x2ce8) = *(int *)(param_1 + 0x2ce8) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
    return;
  }
  return;
}



// FUNCTION 140e59230 FUN_140e59230 body=352 status=ok
// SIG undefined FUN_140e59230(void)

void FUN_140e59230(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if ((*(byte *)(param_1 + 200) & 0x40) == 0) {
    iVar7 = *(int *)(param_1 + 0xc);
    if (iVar7 < (int)DAT_1469e91c4) {
      uVar3 = iVar7 >> 0x1f & 0xffff;
      uVar1 = iVar7 + uVar3;
      lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)((uVar1 & 0xffff) - uVar3) * 0x18;
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x1d & 1) == 0) {
      *param_2 = *(undefined4 *)(param_1 + 0x17c);
      param_2[6] = *(undefined4 *)(param_1 + 0x178);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x180);
      iVar7 = param_2[4];
      if (iVar7 != 0) {
        plVar4 = (longlong *)(*(longlong *)(param_2 + 2) + 0x20);
        do {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 6;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      param_2[4] = 0;
      if (param_2[5] != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_2 + 2,0);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x188);
      puVar6 = puVar5 + (longlong)*(int *)(param_1 + 400) * 4;
      for (; puVar5 != puVar6; puVar5 = puVar5 + 4) {
        if (0 < *(int *)(puVar5 + 1)) {
          iVar7 = param_2[4];
          param_2[4] = iVar7 + 1;
          if ((int)param_2[5] < iVar7 + 1) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2 + 2,iVar7);
          }
          FUN_140d1f3a0((longlong)iVar7 * 0x30 + *(longlong *)(param_2 + 2),*puVar5,
                        *(undefined4 *)(puVar5 + 1));
        }
      }
      if (*(int *)(param_1 + 0x1e8) != -1) {
        param_2[10] = *(int *)(param_1 + 0x1e8);
      }
    }
  }
  return;
}



// FUNCTION 140e59390 FUN_140e59390 body=987 status=ok
// SIG undefined FUN_140e59390(void)

void FUN_140e59390(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  bool bVar14;
  uint local_res8;
  longlong local_res18;
  
  if ((*(byte *)(param_1 + 200) & 0x40) == 0) {
    iVar10 = *(int *)(param_1 + 0xc);
    if (iVar10 < (int)DAT_1469e91c4) {
      uVar9 = iVar10 >> 0x1f & 0xffff;
      uVar1 = iVar10 + uVar9;
      lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
               (longlong)(int)((uVar1 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar12 = 0;
    }
    if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) == 0) {
      iVar10 = 0;
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_1 + 600);
      local_res8 = 1;
      if (0 < *(int *)(param_1 + 400)) {
        uVar1 = 1;
        lVar12 = 0;
        do {
          if (0 < *(int *)(lVar12 + 8 + *(longlong *)(param_1 + 0x188))) {
            plVar4 = (longlong *)(param_2 + 0x18);
            puVar3 = (undefined4 *)
                     FUN_140e3df80(plVar4,(longlong)iVar10 * 0x20 + *(longlong *)(param_1 + 0x188));
            if (puVar3 == (undefined4 *)0x0) {
              if (iVar10 < *(int *)(param_1 + 0x1b0)) {
                lVar7 = *(longlong *)(param_1 + 0x1a8);
                if (*(longlong *)(param_1 + 0x1a8) == 0) {
                  lVar7 = param_1 + 0x198;
                }
                iVar2 = iVar10;
                if (iVar10 < 0) {
                  iVar2 = iVar10 + 0x1f;
                }
                bVar14 = (*(uint *)(lVar7 + (longlong)(iVar2 >> 5) * 4) & uVar1) != 0;
              }
              else {
                bVar14 = false;
              }
              iVar2 = *(int *)(param_2 + 0x20);
              lVar7 = *(longlong *)(param_1 + 0x188);
              *(int *)(param_2 + 0x20) = iVar2 + 1;
              if (*(int *)(param_2 + 0x24) < iVar2 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
              }
              FUN_140e3ff50((longlong)iVar2 * 0x30 + *plVar4,*(undefined8 *)(lVar12 + lVar7),
                            *(undefined4 *)(lVar12 + 8 + lVar7),bVar14);
            }
            else {
              *puVar3 = *(undefined4 *)(lVar12 + 8 + *(longlong *)(param_1 + 0x188));
              if (iVar10 < *(int *)(param_1 + 0x1b0)) {
                lVar7 = *(longlong *)(param_1 + 0x1a8);
                if (*(longlong *)(param_1 + 0x1a8) == 0) {
                  lVar7 = param_1 + 0x198;
                }
                iVar2 = iVar10;
                if (iVar10 < 0) {
                  iVar2 = iVar10 + 0x1f;
                }
                *(bool *)(puVar3 + 1) = (*(uint *)(lVar7 + (longlong)(iVar2 >> 5) * 4) & uVar1) != 0
                ;
              }
              else {
                *(undefined1 *)(puVar3 + 1) = 0;
              }
            }
          }
          iVar10 = iVar10 + 1;
          uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
          lVar12 = lVar12 + 0x20;
        } while (iVar10 < *(int *)(param_1 + 400));
      }
      iVar10 = 0;
      if (0 < *(int *)(param_1 + 0x1c0)) {
        local_res18 = 0;
        do {
          lVar12 = *(longlong *)(param_1 + 0x1b8);
          if (*(longlong *)(lVar12 + local_res18) != 0) {
            plVar4 = *(longlong **)(param_1 + 0x1f0);
            plVar8 = plVar4 + (longlong)*(int *)(param_1 + 0x1f8) * 2;
            if (plVar4 != plVar8) {
              do {
                if (*plVar4 == *(longlong *)(*(longlong *)(lVar12 + local_res18) + 0x30))
                goto LAB_140e595b0;
                plVar4 = plVar4 + 2;
              } while (plVar4 != plVar8);
            }
          }
          plVar4 = (longlong *)0x0;
LAB_140e595b0:
          if ((plVar4 != (longlong *)0x0) &&
             (*(int *)(*(longlong *)(lVar12 + local_res18) + 0xa0) <= (int)plVar4[1])) {
            puVar11 = *(undefined1 **)(param_2 + 0x28);
            puVar13 = puVar11 + (longlong)*(int *)(param_2 + 0x30) * 0x30;
            if (puVar11 != puVar13) {
              do {
                lVar7 = *(longlong *)(lVar12 + local_res18);
                lVar5 = FUN_1405ec200();
                if (lVar5 == 0) {
LAB_140e59637:
                  lVar5 = 0;
                }
                else {
                  lVar6 = FUN_1413b84c0();
                  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                    bVar14 = false;
                  }
                  else {
                    bVar14 = true;
                  }
                  if (!bVar14) goto LAB_140e59637;
                }
                if (lVar5 == lVar7) {
                  if (puVar11 != (undefined1 *)0x0) {
                    if (iVar10 < *(int *)(param_1 + 0x1e0)) {
                      lVar12 = *(longlong *)(param_1 + 0x1d8);
                      if (*(longlong *)(param_1 + 0x1d8) == 0) {
                        lVar12 = param_1 + 0x1c8;
                      }
                      iVar2 = iVar10;
                      if (iVar10 < 0) {
                        iVar2 = iVar10 + 0x1f;
                      }
                      *puVar11 = (*(uint *)(lVar12 + (longlong)(iVar2 >> 5) * 4) & local_res8) != 0;
                    }
                    else {
                      *puVar11 = 0;
                    }
                    goto LAB_140e59719;
                  }
                  break;
                }
                puVar11 = puVar11 + 0x30;
              } while (puVar11 != puVar13);
            }
            if (iVar10 < *(int *)(param_1 + 0x1e0)) {
              lVar12 = *(longlong *)(param_1 + 0x1d8);
              if (*(longlong *)(param_1 + 0x1d8) == 0) {
                lVar12 = param_1 + 0x1c8;
              }
              iVar2 = iVar10;
              if (iVar10 < 0) {
                iVar2 = iVar10 + 0x1f;
              }
              bVar14 = (*(uint *)(lVar12 + (longlong)(iVar2 >> 5) * 4) & local_res8) != 0;
            }
            else {
              bVar14 = false;
            }
            iVar2 = *(int *)(param_2 + 0x30);
            lVar12 = *(longlong *)(param_1 + 0x1b8);
            *(int *)(param_2 + 0x30) = iVar2 + 1;
            if (*(int *)(param_2 + 0x34) < iVar2 + 1) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow((longlong *)(param_2 + 0x28),iVar2);
            }
            FUN_140e3fd80((longlong)iVar2 * 0x30 + *(longlong *)(param_2 + 0x28),
                          *(undefined8 *)(lVar12 + local_res18),bVar14);
          }
LAB_140e59719:
          local_res18 = local_res18 + 0x18;
          iVar10 = iVar10 + 1;
          local_res8 = local_res8 << 1 | (uint)((int)local_res8 < 0);
        } while (iVar10 < *(int *)(param_1 + 0x1c0));
      }
    }
  }
  return;
}



// FUNCTION 140e59770 FUN_140e59770 body=255 status=ok
// SIG undefined FUN_140e59770(void)

void FUN_140e59770(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_2 + 0x2d8);
    iVar7 = *(int *)(param_2 + 0x2e0);
    if (iVar7 != 0) {
      plVar4 = (longlong *)(*plVar1 + 0x18);
      do {
        if (plVar4[5] != 0) {
          FMemory::Free();
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_2 + 0x2e0) = 0;
    if (*(int *)(param_2 + 0x2e4) != 0) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    lVar5 = *(longlong *)(param_1 + 600);
    lVar6 = (longlong)*(int *)(param_1 + 0x260) * 0x20 + lVar5;
    for (; lVar5 != lVar6; lVar5 = lVar5 + 0x20) {
      iVar7 = *(int *)(param_2 + 0x2e0);
      uVar2 = *(undefined8 *)(lVar5 + 0x18);
      uVar3 = *(undefined8 *)(lVar5 + 0x10);
      *(int *)(param_2 + 0x2e0) = iVar7 + 1;
      if (*(int *)(param_2 + 0x2e4) < iVar7 + 1) {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
      }
      FUN_140d20b90((longlong)iVar7 * 0x50 + *plVar1,uVar3,uVar2);
    }
  }
  return;
}



// FUNCTION 140e59870 FUN_140e59870 body=479 status=ok
// SIG undefined FUN_140e59870(void)

void FUN_140e59870(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 local_res8;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong local_60;
  longlong local_48 [2];
  
  lVar12 = *(longlong *)(param_1 + 0xb0);
  lVar13 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar12;
  do {
    if (lVar12 == lVar13) {
      return;
    }
    puVar9 = (undefined2 *)0x0;
    uVar1 = *(undefined4 *)(lVar12 + 0x18);
    if ((*(longlong *)(lVar12 + 0x10) != 0) &&
       (*(char *)(*(longlong *)(lVar12 + 0x10) + 0x50) == param_3)) {
      iVar8 = 0;
      local_res8 = 0;
      uVar4 = FSoftObjectPath::FSoftObjectPath(local_68);
      plVar5 = (longlong *)FSoftObjectPath::ToString(uVar4,local_78);
      if (local_48 != plVar5) {
        puVar9 = (undefined2 *)*plVar5;
        *plVar5 = 0;
        local_res8 = *(undefined4 *)((longlong)plVar5 + 0xc);
        iVar8 = (int)plVar5[1];
        plVar5[1] = 0;
      }
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
      lVar11 = *param_2;
      lVar2 = param_2[1];
      for (lVar10 = lVar11; lVar10 != lVar11 + (longlong)(int)lVar2 * 0x18; lVar10 = lVar10 + 0x18)
      {
        puVar7 = &DAT_143f3eda8;
        if (iVar8 != 0) {
          puVar7 = puVar9;
        }
        if (*(int *)(lVar10 + 0x10) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(lVar10 + 8);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
        if (iVar3 == 0) {
          if ((int)((lVar10 - lVar11) / 0x18) != -1) {
            if (puVar9 != (undefined2 *)0x0) {
              FMemory::Free(puVar9);
            }
            goto LAB_140e599e3;
          }
          break;
        }
      }
      iVar3 = (int)param_2[1];
      lVar11 = (longlong)iVar3;
      *(int *)(param_2 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar3);
      }
      lVar10 = *param_2;
      *(undefined4 *)(lVar10 + lVar11 * 0x18) = uVar1;
      *(undefined2 **)(lVar10 + 8 + lVar11 * 0x18) = puVar9;
      *(int *)(lVar10 + 0x10 + lVar11 * 0x18) = iVar8;
      *(undefined4 *)(lVar10 + 0x14 + lVar11 * 0x18) = local_res8;
    }
LAB_140e599e3:
    lVar12 = lVar12 + 0x20;
  } while( true );
}



// FUNCTION 140e59a50 FUN_140e59a50 body=49 status=ok
// SIG undefined FUN_140e59a50(void)

void FUN_140e59a50(longlong param_1)

{
  FUN_1417931d0();
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) == DAT_1468707d8)) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x1800;
  }
  return;
}



// FUNCTION 140e59a90 FUN_140e59a90 body=61 status=ok
// SIG undefined FUN_140e59a90(void)

void FUN_140e59a90(longlong param_1,longlong param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(longlong *)(param_2 + 0xc0) != 0) && (0 < *(int *)(param_2 + 0xd0))) {
    local_18 = *(undefined8 *)(param_1 + 0x10);
    local_10 = *(undefined4 *)(param_1 + 0x18);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_2 + 200,&local_18);
  }
  return;
}



// FUNCTION 140e59ad0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_140e559e0(param_2,param_1);
  return;
}



// FUNCTION 140e59ae0 FUN_140e59ae0 body=54 status=ok
// SIG undefined FUN_140e59ae0(void)

void FUN_140e59ae0(longlong param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  if ((*(longlong *)(param_2 + 0xc0) != 0) && (0 < *(int *)(param_2 + 0xe0))) {
    local_res10[0] = *(undefined8 *)(param_1 + 0x10);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_2 + 0xd8,local_res10);
  }
  return;
}



// FUNCTION 140e59b20 FUN_140e59b20 body=202 status=ok
// SIG undefined FUN_140e59b20(void)

void FUN_140e59b20(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) == DAT_1468707d8)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146870978) {
      _Init_thread_header(&DAT_146870978);
      if (DAT_146870978 == -1) {
        FWeakObjectPtr::operator=(&DAT_146870970,0);
        _Init_thread_footer(&DAT_146870978);
      }
    }
    cVar1 = FWeakObjectPtr::IsValid(&DAT_146870970);
    if (cVar1 == '\0') {
      uVar2 = FUN_14171bfe0();
      uVar2 = FUN_141799410(uVar2,0xffffffffffffffff,
                            L"/Game/PlayerCharacters/SirenBrawler/_Shared/_Design/Passives/BrawlTree/Overrun/Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C"
                           );
      FWeakObjectPtr::operator=(&DAT_146870970,uVar2);
    }
    uVar2 = FWeakObjectPtr::Get(&DAT_146870970);
    *(undefined8 *)(param_1 + 0x7b8) = uVar2;
  }
  return;
}



// FUNCTION 140e59bf0 FUN_140e59bf0 body=278 status=ok
// SIG undefined FUN_140e59bf0(void)

undefined8 FUN_140e59bf0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar4 = FUN_142defe80();
  if (cVar4 == '\0') {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x4f0) != 0) &&
     (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x4f0) + 0x148), lVar6 != 0)) {
    lVar5 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140e59c5a;
  }
  lVar6 = 0;
LAB_140e59c5a:
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) && (lVar6 != 0)) {
    *(longlong *)(param_1 + 0x5e8) = *(longlong *)(DAT_146b33f38 + 0x58);
    puVar1 = (undefined8 *)(param_1 + 0x5d8);
    if (puVar1 != (undefined8 *)(lVar6 + 0x9a0)) {
      iVar2 = *(int *)(lVar6 + 0x9a8);
      _Src = *(void **)(lVar6 + 0x9a0);
      *(int *)(param_1 + 0x5e0) = iVar2;
      if ((iVar2 == 0) && (*(int *)(param_1 + 0x5e4) == 0)) {
        *(undefined4 *)(param_1 + 0x5e4) = 0;
        return 2;
      }
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
    }
    return 2;
  }
  return 0;
}



// FUNCTION 140e59d10 FUN_140e59d10 body=401 status=ok
// SIG undefined FUN_140e59d10(void)

void FUN_140e59d10(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  longlong param_5,longlong param_6,char param_7,char param_8)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (((((*(char *)(param_1 + 0x280) == '\0') || (param_7 != '\0')) &&
       ((*(char *)(param_1 + 0x281) == '\0' || (param_8 != '\0')))) &&
      ((*(longlong *)(param_1 + 0x260) == 0 || (*(longlong *)(param_1 + 0x260) == param_5)))) &&
     ((*(longlong *)(param_1 + 0x268) == 0 || (*(longlong *)(param_1 + 0x268) == param_6)))) {
    if (*(int *)(param_1 + 0x278) == 0) {
LAB_140e59e56:
      if ((*(char *)(param_1 + 0x282) == '\0') &&
         (param_2 = param_3, *(char *)(param_1 + 0x283) != '\0')) {
        FUN_142dd1510(param_1);
      }
      else {
        FUN_142dd1540(param_1,param_2);
      }
    }
    else if (*param_4 != 0) {
      lVar2 = FUN_142e49950();
      for (lVar6 = *param_4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar2) {
          if (*param_4 == 0) {
            return;
          }
          plVar5 = *(longlong **)(param_1 + 0x270);
          plVar1 = plVar5 + *(int *)(param_1 + 0x278);
          goto joined_r0x000140e59df1;
        }
      }
    }
  }
  return;
joined_r0x000140e59df1:
  if (plVar5 == plVar1) {
    return;
  }
  if (*plVar5 != 0) {
    lVar3 = FUN_142e49950();
    lVar6 = *plVar5;
    for (lVar2 = lVar6; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) goto LAB_140e59e20;
    }
  }
  lVar6 = 0;
LAB_140e59e20:
  if (*param_4 != 0) {
    lVar4 = FUN_142e49950();
    lVar2 = *param_4;
    for (lVar3 = lVar2; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar4) goto LAB_140e59e46;
    }
  }
  lVar2 = 0;
LAB_140e59e46:
  if (lVar6 == lVar2) goto LAB_140e59e56;
  plVar5 = plVar5 + 1;
  goto joined_r0x000140e59df1;
}



// FUNCTION 140e59eb0 FUN_140e59eb0 body=78 status=ok
// SIG undefined FUN_140e59eb0(void)

void FUN_140e59eb0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x2ce8);
    *(int *)(param_1 + 0x2ce8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x2cec) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x2ce0),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x2ce0) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 140e59f00 FUN_140e59f00 body=200 status=ok
// SIG undefined FUN_140e59f00(void)

void FUN_140e59f00(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((*(char *)(param_1 + 0x4a8) == '\x01') && (*(int *)(param_1 + 0x708) != 0)) &&
     (uVar1 = 0, (*(byte *)(param_1 + 0x738) & 0x10) == 0)) {
    uVar1 = 1;
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146870b68) {
      _Init_thread_header(&DAT_146870b68);
      if (DAT_146870b68 == -1) {
        FName::FName(&DAT_146870b60,L"StandIn",1);
        _Init_thread_footer(&DAT_146870b68);
      }
    }
    FUN_140c582b0(*(undefined8 *)(param_1 + 0x6f0),uVar1,DAT_146870b60);
  }
  return;
}



// FUNCTION 140e59fd0 FUN_140e59fd0 body=194 status=ok
// SIG undefined FUN_140e59fd0(void)

void FUN_140e59fd0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    uVar5 = 0;
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_140e4c1e0(param_2,&local_18);
    uVar2 = FUN_140e4c5a0(param_1,param_2);
    uVar4 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
    if (local_18 + (int)local_10 < local_18) {
      uVar4 = uVar5;
    }
    plVar3 = local_18;
    if (uVar4 != 0) {
      do {
        lVar1 = *plVar3;
        if (lVar1 != 0) {
          FUN_142398e60(lVar1,*(uint *)(lVar1 + 0x6b8) & 0xfff9e7ff | uVar2,0);
        }
        plVar3 = plVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar4);
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 140e5a0a0 FUN_140e5a0a0 body=290 status=ok
// SIG undefined FUN_140e5a0a0(void)

void FUN_140e5a0a0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  longlong local_18;
  int local_10;
  
  uVar6 = 0;
  uVar7 = 0;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    while( true ) {
      bVar1 = true;
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      if (!bVar1) break;
      plVar4 = (longlong *)FWeakObjectPtr::Get();
      if (plVar4 != (longlong *)0x0) {
        lVar3 = FUN_14145f370();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && (cVar2 = (**(code **)(*plVar4 + 0x768))(), cVar2 != '\0')) &&
           (cVar2 = FUN_140d1b480(), uVar7 = uVar6, cVar2 != '\0')) {
          uVar6 = 1;
          uVar7 = 1;
        }
      }
      local_10 = local_10 + 1;
    }
  }
  plVar5 = (longlong *)param_1[6];
  plVar4 = plVar5 + (int)param_1[7];
  for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
    if (*plVar5 != 0) {
      FUN_140e59fd0(param_1);
    }
  }
  FUN_140e656b0(param_1,uVar7);
  return;
}



// FUNCTION 140e5a1d0 FUN_140e5a1d0 body=227 status=ok
// SIG undefined FUN_140e5a1d0(void)

void FUN_140e5a1d0(longlong param_1,char param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 local_res10 [2];
  
  if (param_2 != '\0') {
    FUN_140e4ff00(param_1,param_1 + 0x1e0,param_1 + 0x1e8);
  }
  lVar2 = FUN_140e500c0();
  lVar3 = 0;
  cVar4 = '\0';
  if (*(longlong *)(param_1 + 0x250) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x250) + 0x2c70);
  }
  if (lVar3 == 0) {
    if ((lVar2 == 0) || (*(char *)(lVar2 + 8) == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
      cVar4 = *(char *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80);
    }
    local_res10[0] = 0;
    if (cVar4 != '\0') {
      FUN_142710360(lVar3,local_res10);
    }
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_140e376b0(lVar2,cVar4,local_res10[0]);
    }
  }
  FUN_140e5e950(param_1,uVar1,param_2);
  return;
}



// FUNCTION 140e5a2c0 FUN_140e5a2c0 body=116 status=ok
// SIG undefined FUN_140e5a2c0(void)

void FUN_140e5a2c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140e442f0(param_1 + 0x4b0,*(undefined8 *)(param_1 + 0x6f0));
  puVar1 = *(undefined8 **)(param_1 + 0x6f8);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x700) * 0xc;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 0xc) {
    FUN_140e442f0(param_1 + 0x4b0,*puVar1);
  }
  return;
}



// FUNCTION 140e5a340 FUN_140e5a340 body=256 status=ok
// SIG undefined FUN_140e5a340(void)

void FUN_140e5a340(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar6 = iVar2 >> 0x1f & 0xffff;
      uVar3 = iVar2 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      plVar5 = *(longlong **)(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x38);
      plVar1 = plVar5 + iVar2;
      for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
        if (*plVar5 == param_2) {
          return;
        }
      }
      *(int *)(param_1 + 0x38) = iVar2 + 1;
      if (*(int *)(param_1 + 0x3c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x30);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 8) = param_2;
      FUN_14044b020(param_2 + 0x3b0,local_res10,param_1,FUN_140e57220);
      FUN_14044b020(param_2 + 0x3c8,local_res10,param_1,FUN_140e572f0);
      FUN_140e59fd0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140e5a440 FUN_140e5a440 body=328 status=ok
// SIG undefined FUN_140e5a440(void)

void FUN_140e5a440(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong local_10;
  
  FUN_142713e90();
  uVar7 = (**(code **)(*param_1 + 0x670))(param_1);
  FUN_142d7f5a0(uVar7,L"player_added");
  if (((longlong *)param_1[0x97] == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*(longlong *)param_1[0x97] + 0x20))(), cVar6 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    local_18 = param_1[0x97];
    local_10 = param_1[0x98];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    uVar7 = FUN_1422312c0(param_1);
    lVar8 = FUN_14244c070(uVar7,&local_18);
    if ((lVar8 == 0) && (lVar8 = FUN_1422312c0(param_1), lVar8 != 0)) {
      lVar9 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_28 = param_1[0x97];
        local_20 = (longlong *)param_1[0x98];
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        FUN_140be6ca0(lVar8,&local_28);
        plVar5 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_20)(local_20);
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
      }
    }
  }
  return;
}



// FUNCTION 140e5a590 FUN_140e5a590 body=314 status=ok
// SIG undefined FUN_140e5a590(void)

void FUN_140e5a590(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_28;
  undefined4 local_20;
  
  *(longlong *)(param_1 + 0xc0) = param_2;
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0xb8))) {
    iVar2 = FUN_142235230(param_2);
    lVar5 = *(longlong *)(param_1 + 0xb0);
    lVar7 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar5;
    for (; lVar5 != lVar7; lVar5 = lVar5 + 0x20) {
      lVar3 = *(longlong *)(lVar5 + 0x10);
      if (lVar3 != 0) {
        if ((iVar2 != 3) && (*(longlong *)(param_1 + 0xc0) != 0)) {
          lVar4 = *(longlong *)(param_1 + 0xb0);
          lVar6 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar4;
          if (lVar4 != lVar6) {
            do {
              lVar1 = *(longlong *)(lVar4 + 0x10);
              if (((lVar1 != 0) && (0 < *(int *)(lVar4 + 0x18))) &&
                 ((lVar3 == 0 || (lVar1 == lVar3)))) {
                FUN_140e434c0(lVar1,*(undefined8 *)(param_1 + 0xc0),param_1 + 0xe8);
              }
              lVar4 = lVar4 + 0x20;
            } while (lVar4 != lVar6);
            lVar3 = *(longlong *)(lVar5 + 0x10);
          }
        }
        local_20 = *(undefined4 *)(lVar5 + 0x18);
        local_28 = lVar3;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 200,&local_28);
      }
    }
  }
  return;
}



// FUNCTION 140e5a6d0 FUN_140e5a6d0 body=442 status=ok
// SIG undefined FUN_140e5a6d0(void)

undefined8 FUN_140e5a6d0(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  if (((*(longlong *)(param_1 + 2) == *(longlong *)(param_2 + 2)) &&
      (*(longlong *)(param_1 + 4) == *(longlong *)(param_2 + 4))) &&
     (*(longlong *)(param_1 + 6) == *(longlong *)(param_2 + 6))) {
    if (((char)param_1[0xe] == (char)param_2[0xe]) &&
       (((char)param_1[0xe] == '\0' ||
        ((((float)param_2[10] == (float)param_1[10] && ((float)param_2[0xb] == (float)param_1[0xb]))
         && (((float)param_2[0xc] == (float)param_1[0xc] &&
             ((float)param_2[0xd] == (float)param_1[0xd])))))))) {
      if (((char)param_1[0x13] == (char)param_2[0x13]) &&
         (((char)param_1[0x13] == '\0' ||
          ((((float)param_2[0xf] == (float)param_1[0xf] &&
            ((float)param_2[0x10] == (float)param_1[0x10])) &&
           (((float)param_2[0x11] == (float)param_1[0x11] &&
            ((float)param_2[0x12] == (float)param_1[0x12])))))))) {
        if (((char)param_1[0x18] == (char)param_2[0x18]) &&
           ((((char)param_1[0x18] == '\0' ||
             (((((float)param_2[0x14] == (float)param_1[0x14] &&
                ((float)param_2[0x15] == (float)param_1[0x15])) &&
               ((float)param_2[0x16] == (float)param_1[0x16])) &&
              ((float)param_2[0x17] == (float)param_1[0x17])))) && (*param_1 == *param_2)))) {
          puVar4 = &DAT_143f3eda8;
          if (param_2[0x2a] == 0) {
            puVar3 = &DAT_143f3eda8;
          }
          else {
            puVar3 = *(undefined2 **)(param_2 + 0x28);
          }
          if (param_1[0x2a] == 0) {
            puVar2 = &DAT_143f3eda8;
          }
          else {
            puVar2 = *(undefined2 **)(param_1 + 0x28);
          }
          iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
          if (iVar1 == 0) {
            if (param_2[0x30] == 0) {
              puVar3 = &DAT_143f3eda8;
            }
            else {
              puVar3 = *(undefined2 **)(param_2 + 0x2e);
            }
            if (param_1[0x30] != 0) {
              puVar4 = *(undefined2 **)(param_1 + 0x2e);
            }
            iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar3);
            if (iVar1 == 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140e5a890 FUN_140e5a890 body=86 status=ok
// SIG undefined FUN_140e5a890(void)

ulonglong FUN_140e5a890(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  if (((*param_1 == uVar1) && (param_1[3] != 0)) && ((undefined8 *)param_2[3] != (undefined8 *)0x0))
  {
    uVar1 = (*(code *)**(undefined8 **)param_2[3])();
    if (((char)uVar1 != '\0') &&
       (uVar1 = 0, *(char *)((longlong)param_1 + 0xb) == *(char *)((longlong)param_2 + 0xb))) {
      return 1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140e5a8f0 FUN_140e5a8f0 body=190 status=ok
// SIG undefined FUN_140e5a8f0(void)

void FUN_140e5a8f0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 600);
  piVar2 = piVar3 + (longlong)*(int *)(param_1 + 0x260) * 8;
  for (; piVar3 != piVar2; piVar3 = piVar3 + 8) {
    if (*(longlong *)(piVar3 + 6) != 0) {
      piVar3[6] = 0;
      piVar3[7] = 0;
      FUN_140e559e0(param_1 + 0x1a0,piVar3);
      if (*piVar3 == -1) {
        *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
        *piVar3 = *(int *)(param_1 + 0x1f0);
        iVar1 = *(int *)(param_1 + 0x1f0);
        if (iVar1 == -1) {
          iVar1 = 0;
        }
        *(int *)(param_1 + 0x1f0) = iVar1;
      }
      piVar3[1] = piVar3[1] + 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                (param_1 + 0x1a0);
      *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
      if (*(int *)(param_1 + 500) == -1) {
        *(undefined4 *)(param_1 + 500) = 0;
      }
      *(undefined8 *)(param_1 + 0x248) = 0xffffffffffffffff;
      if (*(longlong **)(param_1 + 0x250) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x250) + 0x260))();
      }
    }
  }
  return;
}



// FUNCTION 140e5a9b0 FUN_140e5a9b0 body=140 status=ok
// SIG undefined FUN_140e5a9b0(void)

void FUN_140e5a9b0(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x600,0);
  iVar4 = (int)(uVar3 / 0x600);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x600,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140e5aa40 FUN_140e5aa40 body=527 status=ok
// SIG undefined FUN_140e5aa40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e5aa40(longlong param_1,longlong *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_38;
  float local_30;
  
  lVar2 = FUN_142ffcb50(param_2);
  if (lVar2 == 0) {
    local_38 = (float)_DAT_1468b5d90;
    local_30 = DAT_1468b5d98;
  }
  else {
    local_38 = ((*(float *)(lVar2 + 0x1d0) + *(float *)(lVar2 + 0x1dc)) -
               (*(float *)(lVar2 + 0x1d0) - *(float *)(lVar2 + 0x1dc))) * 0.5;
    local_30 = ((*(float *)(lVar2 + 0x1d8) + *(float *)(lVar2 + 0x1e4)) -
               (*(float *)(lVar2 + 0x1d8) - *(float *)(lVar2 + 0x1e4))) * 0.5;
  }
  cVar1 = (**(code **)(*param_2 + 0x870))(param_2);
  if (cVar1 == '\0') {
    *param_5 = local_30;
    local_30 = 0.0;
    *param_4 = local_38;
  }
  else {
    *param_4 = param_3[1];
    fVar5 = param_3[2];
    lVar2 = ATrap::GetActivationShapeComponent(param_2);
    if (lVar2 == 0) {
      fVar4 = *param_5;
    }
    else if ((*(longlong *)(lVar2 + 0x210) == 0) ||
            (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x210) + 0xb8), lVar2 == 0)) {
      fVar4 = 0.0;
      *param_5 = 0.0;
    }
    else {
      fVar4 = *(float *)(lVar2 + 0xa0);
      *param_5 = fVar4;
    }
    fVar3 = *param_3;
    if (*param_3 <= fVar4) {
      fVar3 = fVar4;
    }
    *param_5 = fVar3;
    if (param_2 == *(longlong **)(param_1 + 0x5b0)) {
      *param_4 = param_3[3] * *param_4;
      *param_5 = param_3[4] * *param_5;
      lVar2 = FUN_14222e2a0(param_2);
      if (lVar2 != 0) {
        local_30 = local_30 * fVar5 * param_3[6];
        goto LAB_140e5ac26;
      }
      fVar5 = fVar5 * param_3[5];
    }
    local_30 = local_30 * fVar5;
  }
LAB_140e5ac26:
  *param_6 = local_30;
  return;
}



// FUNCTION 140e5ac50 FUN_140e5ac50 body=301 status=ok
// SIG undefined FUN_140e5ac50(void)

void FUN_140e5ac50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  plVar3 = *(longlong **)(param_1 + 0x250);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0xb88))(plVar3,DAT_146870860);
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x250) + 0xd88);
    (**(code **)(*plVar3 + 0x80))(plVar3,DAT_146870860,0);
    lVar4 = *(longlong *)(param_1 + 0x250);
    if (*(longlong *)(lVar4 + 0xe68) != 0) {
      FUN_142dbb5d0(*(longlong *)(lVar4 + 0xe68) + 0x2990,&DAT_146870860);
      lVar4 = *(longlong *)(param_1 + 0x250);
    }
    (**(code **)(*(longlong *)(lVar4 + 0xd88) + 0x108))
              ((longlong *)(lVar4 + 0xd88),DAT_146870860,0xffffffff,0);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_140e215b0(*(longlong *)(param_1 + 0x28),&local_28);
      if (local_28 != 0) {
        local_18 = local_28;
        plStack_10 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
          UNLOCK();
        }
        FUN_142c84750(*(undefined8 *)(*(longlong *)(param_1 + 0x250) + 0x920),&local_18);
      }
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_20 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar1 = (int *)((longlong)plStack_20 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_20 + 8))(plStack_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e5ad80 FUN_140e5ad80 body=1041 status=ok
// SIG undefined FUN_140e5ad80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e5ad80(longlong param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined8 *local_200;
  undefined *local_1f8;
  undefined8 local_1e8;
  float local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  float local_1c0;
  byte local_1a8 [12];
  undefined4 local_19c;
  undefined1 local_13c [8];
  undefined1 local_134 [28];
  undefined8 local_118 [9];
  longlong local_d0;
  longlong local_b0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  FUN_142df1920();
  local_1c0 = *(float *)(param_1 + 0x508);
  lVar5 = *(longlong *)(param_1 + 0x5e8);
  lVar7 = 0;
  local_1e0 = *(float *)(param_1 + 0x514);
  local_1c8 = *(undefined8 *)(param_1 + 0x500);
  uStack_1d0._0_4_ = *(undefined4 *)(param_1 + 0x508);
  local_200 = &local_1e8;
  local_1e8 = *(undefined8 *)(param_1 + 0x50c);
  local_208 = &local_1d8;
  auVar11._12_4_ = uStack_1d0._4_4_;
  auVar11._0_12_ = ZEXT812(0);
  *(undefined1 (*) [16])(param_1 + 0x5b8) = auVar11;
  local_1d8 = *(undefined8 *)(param_1 + 0x500);
  lVar3 = FUN_140e4acc0(param_1,param_1 + 0x5d8,lVar5 + 0x3c0,*(undefined8 *)(param_1 + 0x4f8));
  auVar11 = _local_1d8;
  if (lVar3 == 0) {
    return;
  }
  lVar6 = *(longlong *)(lVar3 + 0x168);
  if (lVar6 == 0) {
    local_1d8._4_4_ = DAT_1468b5d94;
    local_1d8._0_4_ = DAT_1468b5d90;
    uVar2 = local_1d8;
    uStack_1d0._4_4_ = auVar11._12_4_;
    local_1d8 = auVar11._0_8_;
    uStack_1d0._0_4_ = DAT_1468b5d98;
    puVar4 = &local_1d8;
    _local_1d8 = CONCAT88(uStack_1d0,uVar2);
  }
  else {
    puVar4 = &local_1e8;
    local_1e0 = (float)*(undefined4 *)(lVar6 + 0x228);
    local_1e8 = *(undefined8 *)(lVar6 + 0x220);
  }
  fVar16 = (float)*puVar4;
  fVar12 = fVar16 - (float)local_1c8;
  local_1e8._4_4_ = (float)((ulonglong)*puVar4 >> 0x20);
  fVar13 = local_1e8._4_4_ - local_1c8._4_4_;
  fVar15 = *(float *)(puVar4 + 1) - local_1c0;
  fVar9 = fVar13 * fVar13 + fVar12 * fVar12;
  fVar8 = SQRT(fVar9);
  fVar9 = fVar15 * fVar15 + fVar9;
  pfVar1 = (float *)(lVar5 + 0x3ec);
  if (fVar8 < *pfVar1 || fVar8 == *pfVar1) {
    *(longlong *)(param_1 + 0x5b8) = lVar3;
    *(float *)(param_1 + 0x5c0) = SQRT(fVar9);
    return;
  }
  fVar8 = fVar12;
  fVar14 = fVar13;
  fVar10 = fVar15;
  if ((fVar9 != 1.0) &&
     (fVar8 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, fVar10 = DAT_1468b5d98, 1e-08 <= fVar9)) {
    auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar10 = auVar11._0_4_;
    fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
    fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
    fVar8 = fVar12 * fVar10;
    fVar14 = fVar13 * fVar10;
    fVar10 = fVar15 * fVar10;
  }
  local_1e0 = *(float *)(puVar4 + 1) - fVar10 * 25.0;
  local_1e8 = CONCAT44(local_1e8._4_4_ - fVar14 * 25.0,fVar16 - fVar8 * 25.0);
  FUN_140e3fc20(local_118);
  local_118[0] = DAT_146870848;
  _guard_xfg_dispatch_icall_nop(local_1a8,0,0x90);
  local_1f8 = &DAT_146aefe68;
  local_200 = local_118;
  local_19c = 0x3f800000;
  local_208 = (undefined8 *)CONCAT44(local_208._4_4_,0x13);
  UWorld::LineTraceSingleByChannel(*(undefined8 *)(param_1 + 0x4f0),local_1a8,&local_1c8,&local_1e8)
  ;
  if ((local_1a8[0] & 1) != 0) {
    lVar5 = FWeakObjectPtr::Get(local_134);
    lVar6 = FWeakObjectPtr::Get(local_13c);
    if (*(longlong *)(lVar3 + 0x168) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x168) + 400);
    }
    if ((lVar6 != lVar3) && (lVar5 != lVar7)) goto LAB_140e5b0f9;
  }
  *(longlong *)(param_1 + 0x5b8) = lVar3;
  *(float *)(param_1 + 0x5c0) = SQRT(fVar9);
LAB_140e5b0f9:
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e5b1a0 FUN_140e5b1a0 body=784 status=ok
// SIG undefined FUN_140e5b1a0(void)

void FUN_140e5b1a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong local_res18;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar19;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar16 = 0;
  uVar17 = 0;
  lVar8 = FUN_140e50970();
  uVar18 = uVar16;
  if ((lVar8 != 0) && (lVar8 = (**(code **)(*(longlong *)(lVar8 + 0xd80) + 0x18))(), lVar8 != 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    uVar15 = uVar16;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      uVar15 = *(ulonglong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
    }
    lVar9 = FUN_140e50970(param_1);
    uVar10 = uVar16;
    if (lVar9 != 0) {
      uVar10 = (**(code **)(*(longlong *)(lVar9 + 0xd80) + 0x18))();
    }
    if (((param_2 != (longlong *)0x0) && (uVar18 = uVar17, uVar10 != 0)) && (uVar15 != 0)) {
      plVar1 = param_1 + 0x33;
      plVar13 = (longlong *)*plVar1;
      plVar2 = plVar13 + (int)param_1[0x34];
      for (; uVar18 = 0, plVar13 != plVar2; plVar13 = plVar13 + 1) {
        if (((longlong *)*plVar13 != (longlong *)0x0) && ((longlong *)*plVar13 == param_2)) {
          iVar4 = FUN_142ff7c90(uVar10,uVar15);
          iVar5 = FUN_140e4e4c0(param_1,param_2);
          uVar18 = uVar17;
          if ((iVar5 <= iVar4) && (cVar3 = FUN_140e46220(param_1,param_2), cVar3 != '\0')) {
            if (DAT_146b33f38 == 0) {
              FUN_142d7ebe0();
            }
            uVar15 = uVar16;
            if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
              uVar15 = *(ulonglong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
            }
            uVar11 = FUN_14301f8f0();
            lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar11);
            uVar10 = uVar16;
            if (lVar9 != 0) {
              uVar10 = *(ulonglong *)(lVar9 + 0x208);
            }
            uVar18 = uVar16;
            if ((uVar15 != 0) && (uVar18 = uVar17, uVar10 != 0)) {
              puVar14 = (undefined8 *)*plVar1;
              puVar12 = puVar14 + (int)param_1[0x34];
              goto joined_r0x000140e5b340;
            }
          }
          break;
        }
      }
    }
  }
  goto LAB_140e5b490;
joined_r0x000140e5b340:
  if (puVar14 == puVar12) goto LAB_140e5b490;
  if (((longlong *)*puVar14 != (longlong *)0x0) && ((longlong *)*puVar14 == param_2)) {
    uVar6 = FUN_140e4e4c0(param_1,param_2);
    uVar18 = (ulonglong)uVar6;
    FUN_140e54030(param_1,uVar15,-uVar6);
    FUN_142fe3d60(lVar8,&local_res18,*(undefined8 *)(uVar10 + 0x1d8),param_2,CONCAT44(uVar19,1),0,0,
                  1,0,0);
    iVar4 = FUN_14233f450(param_1);
    if ((iVar4 == 3) && (0 < (int)param_1[0x34])) {
      puVar12 = (undefined8 *)*plVar1;
      goto LAB_140e5b3e0;
    }
    goto LAB_140e5b490;
  }
  puVar14 = puVar14 + 1;
  goto joined_r0x000140e5b340;
  while( true ) {
    uVar16 = (ulonglong)(iVar4 + 1U);
    puVar12 = puVar12 + 1;
    if ((int)param_1[0x34] <= (int)(iVar4 + 1U)) break;
LAB_140e5b3e0:
    iVar4 = (int)uVar16;
    if (((longlong *)*puVar12 != (longlong *)0x0) && ((longlong *)*puVar12 == param_2)) {
      uVar11 = FUN_14142bde0();
      lVar8 = (**(code **)(*param_2 + 0x628))(param_2,uVar11);
      if (lVar8 != 0) {
        FUN_140b3fc60(lVar8);
      }
      iVar5 = (int)param_1[0x34];
      iVar7 = (iVar5 - iVar4) + -1;
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar4 * 8),
                   (void *)(*plVar1 + (longlong)(iVar4 + 1) * 8),(longlong)iVar7 << 3);
        iVar5 = (int)param_1[0x34];
      }
      *(int *)(param_1 + 0x34) = iVar5 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x2f);
      (**(code **)(*param_1 + 0x260))(param_1);
      break;
    }
  }
LAB_140e5b490:
  FUN_140e56730(param_1,1,0,uVar18,param_2);
  return;
}



// FUNCTION 140e5b4b0 FUN_140e5b4b0 body=88 status=ok
// SIG undefined FUN_140e5b4b0(void)

void FUN_140e5b4b0(longlong param_1,char param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 600) != param_2) && (*(char *)(param_1 + 0x259) == '\0')) {
    iVar1 = FUN_14233f450();
    if (iVar1 != 3) {
      FUN_1414b1e80();
      return;
    }
    *(char *)(param_1 + 600) = param_2;
    FUN_140e49040(param_1,param_2);
  }
  return;
}



// FUNCTION 140e5b510 FUN_140e5b510 body=758 status=ok
// SIG undefined FUN_140e5b510(void)

void FUN_140e5b510(longlong *param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  bool bVar11;
  
  if (((char)param_1[0x4b] == '\0') || (*(char *)((longlong)param_1 + 0x259) != '\0')) {
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      plVar2 = (longlong *)param_1[0x37];
      plVar9 = plVar2;
      if (plVar2 != plVar2 + (longlong)(int)param_1[0x38] * 3) {
        while (*plVar9 != param_2) {
          plVar9 = plVar9 + 3;
          if (plVar9 == plVar2 + (longlong)(int)param_1[0x38] * 3) {
            return;
          }
        }
        lVar4 = ((longlong)plVar9 - (longlong)plVar2) / 0x18;
        iVar1 = (int)lVar4;
        if ((-1 < iVar1) && (iVar1 < (int)param_1[0x38])) {
          FUN_140e5de10(param_1 + 0x39,lVar4,param_3);
                    /* WARNING: Could not recover jumptable at 0x000140e5b7ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x260))(param_1);
          return;
        }
      }
    }
  }
  else {
    plVar2 = (longlong *)FUN_140e505b0();
    if (plVar2 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      uVar3 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    }
    plVar9 = (longlong *)param_1[0x37];
    for (plVar7 = plVar9; plVar7 != plVar9 + (longlong)(int)param_1[0x38] * 3; plVar7 = plVar7 + 3)
    {
      if (*plVar7 == param_2) {
        lVar8 = ((longlong)plVar7 - (longlong)plVar9) / 6 +
                ((longlong)plVar7 - (longlong)plVar9 >> 0x3f);
        uVar10 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
        goto LAB_140e5b5a7;
      }
    }
    uVar10 = 0xffffffff;
LAB_140e5b5a7:
    if (((param_2 != 0) && (-1 < (int)uVar10)) && ((int)uVar10 < (int)param_1[0x38])) {
      if ((int)uVar10 < (int)param_1[0x3c]) {
        plVar9 = (longlong *)param_1[0x3b];
        if ((longlong *)param_1[0x3b] == (longlong *)0x0) {
          plVar9 = param_1 + 0x39;
        }
        bVar11 = (*(uint *)((longlong)plVar9 +
                           (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4) >>
                  (uVar10 & 0x1f) & 1) != 0;
      }
      else {
        bVar11 = false;
      }
      if ((bVar11 != (bool)param_3) && (lVar4 != 0)) {
        if (param_3 == '\0') {
          if (*(longlong *)(param_2 + 0x78) != 0) {
            lVar6 = FUN_1430f1090();
            for (lVar8 = *(longlong *)(param_2 + 0x78); lVar8 != 0;
                lVar8 = *(longlong *)(lVar8 + 0x30)) {
              if (lVar8 == lVar6) {
                if ((*(longlong *)(param_2 + 0x78) != 0) &&
                   (*(longlong *)(param_1[0x37] + 8 + (longlong)(int)uVar10 * 0x18) != 0)) {
                  FUN_1430ede10(lVar4);
                  *(undefined8 *)(param_1[0x37] + 8 + (longlong)(int)uVar10 * 0x18) = 0;
                }
                break;
              }
            }
          }
        }
        else {
          plVar9 = *(longlong **)(param_1[0x37] + (longlong)(int)uVar10 * 0x18);
          if (plVar9 != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[0x3e];
            plVar5 = plVar7 + (longlong)(int)param_1[0x3f] * 2;
            if (plVar7 != plVar5) {
              do {
                if (*plVar7 == plVar9[6]) goto LAB_140e5b693;
                plVar7 = plVar7 + 2;
              } while (plVar7 != plVar5);
            }
          }
          plVar7 = (longlong *)0x0;
LAB_140e5b693:
          if ((plVar7 != (longlong *)0x0) && (*(int *)(param_2 + 0xa0) <= (int)plVar7[1])) {
            (**(code **)(*plVar9 + 0x280))
                      (plVar9,plVar2,param_1[0x37] + (longlong)(int)uVar10 * 0x18 + 8);
          }
        }
        iVar1 = FUN_14233f450(param_1);
        if (iVar1 == 3) {
          FUN_140e5de10(param_1 + 0x39,uVar10,param_3);
          (**(code **)(*param_1 + 0x260))(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e5b810 FUN_140e5b810 body=617 status=ok
// SIG undefined FUN_140e5b810(void)

void FUN_140e5b810(longlong *param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (((char)param_1[0x4b] == '\0') || (*(char *)((longlong)param_1 + 0x259) != '\0')) {
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      plVar7 = (longlong *)param_1[0x31];
      plVar3 = plVar7;
      if (plVar7 != plVar7 + (longlong)(int)param_1[0x32] * 4) {
        while (*plVar3 != param_2) {
          plVar3 = plVar3 + 4;
          if (plVar3 == plVar7 + (longlong)(int)param_1[0x32] * 4) {
            return;
          }
        }
        uVar5 = (longlong)plVar3 - (longlong)plVar7 >> 5;
        iVar1 = (int)uVar5;
        if ((-1 < iVar1) && (iVar1 < (int)param_1[0x32])) {
          FUN_140e5de10(param_1 + 0x33,uVar5 & 0xffffffff,param_3);
                    /* WARNING: Could not recover jumptable at 0x000140e5ba72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x260))(param_1);
          return;
        }
      }
    }
  }
  else if (param_2 != 0) {
    plVar7 = (longlong *)param_1[0x31];
    plVar3 = plVar7;
    if (plVar7 != plVar7 + (longlong)(int)param_1[0x32] * 4) {
      while (*plVar3 != param_2) {
        plVar3 = plVar3 + 4;
        if (plVar3 == plVar7 + (longlong)(int)param_1[0x32] * 4) {
          return;
        }
      }
      uVar5 = (longlong)plVar3 - (longlong)plVar7 >> 5;
      uVar4 = (uint)uVar5;
      if ((-1 < (int)uVar4) && ((int)uVar4 < (int)param_1[0x32])) {
        if ((int)uVar4 < (int)param_1[0x36]) {
          plVar7 = (longlong *)param_1[0x35];
          if ((longlong *)param_1[0x35] == (longlong *)0x0) {
            plVar7 = param_1 + 0x33;
          }
          bVar10 = (*(uint *)((longlong)plVar7 +
                             (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
                    (uVar4 & 0x1f) & 1) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10 != (bool)param_3) {
          lVar2 = param_1[0x31];
          lVar9 = (longlong)(int)uVar4 * 0x20;
          lVar6 = *(longlong *)(lVar2 + 0x10 + lVar9);
          lVar8 = (longlong)*(int *)(lVar2 + 0x18 + lVar9) * 0x10 + lVar6;
          if (lVar6 != lVar8) {
            do {
              FUN_142ca4fb0(lVar6);
              lVar6 = lVar6 + 0x10;
            } while (lVar6 != lVar8);
            lVar2 = param_1[0x31];
          }
          TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
                    (lVar2 + 0x10 + lVar9,0);
          if ((param_3 != '\0') && (0 < *(int *)(param_2 + 0x40))) {
            local_38 = FUN_140e505b0(param_1);
            uStack_30 = 0;
            FUN_142c90ad0(param_2 + 0x38,param_1[0x31] + 0x10 + lVar9,param_1,&local_38,1,local_res8
                         );
          }
          iVar1 = FUN_14233f450(param_1);
          if (iVar1 == 3) {
            FUN_140e5de10(param_1 + 0x33,uVar5 & 0xffffffff,param_3);
            (**(code **)(*param_1 + 0x260))(param_1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e5ba80 DeleteCoopGroup body=52 status=ok
// SIG undefined DeleteCoopGroup(void)

void USocialManager::DeleteCoopGroup(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140e4c8c0();
  if (lVar1 != 0) {
    thunk_FUN_1414e6560(lVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 140e5bac0 FUN_140e5bac0 body=103 status=ok
// SIG undefined FUN_140e5bac0(void)

void FUN_140e5bac0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x1850), lVar1 != 0)) {
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
      FUN_1412fcda0(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140e5bb30 FUN_140e5bb30 body=114 status=ok
// SIG undefined FUN_140e5bb30(void)

void FUN_140e5bb30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x1850), lVar1 != 0)) {
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
      FUN_1412fcde0(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 140e5bbb0 FUN_140e5bbb0 body=568 status=ok
// SIG undefined FUN_140e5bbb0(void)

void FUN_140e5bbb0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_38;
  int local_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  if (((longlong *)param_1[0x97] == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*(longlong *)param_1[0x97] + 0x20))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar6,&local_38);
    while( true ) {
      if ((local_30 < 0) || (*(int *)(local_38 + 8) <= local_30)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) break;
      plVar7 = (longlong *)FWeakObjectPtr::Get();
      if (plVar7 != (longlong *)0x0) {
        lVar8 = FUN_14145f370();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (((bVar4) && (cVar5 = (**(code **)(*plVar7 + 0x768))(), cVar5 == '\0')) &&
           (cVar5 = APlayerController::IsPrimaryPlayer(), cVar5 != '\0')) {
          FUN_14145e0d0(plVar7,param_1);
        }
      }
      local_30 = local_30 + 1;
    }
    lVar8 = FUN_1422312c0(param_1);
    if (lVar8 != 0) {
      lVar9 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_28 = param_1[0x97];
        local_20 = (longlong *)param_1[0x98];
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        FUN_140bdaee0(lVar8,&local_28);
        plVar7 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        if (((longlong *)param_1[0xa7] == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*(longlong *)param_1[0xa7] + 0x20))(), cVar5 == '\0')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_18 = param_1[0xa7];
          local_10 = (longlong *)param_1[0xa8];
          if (local_10 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_10 + 1) = (int)local_10[1] + 1;
            UNLOCK();
          }
          FUN_140bdaee0(lVar8,&local_18);
          plVar7 = local_10;
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_10 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_10)(local_10);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e5bdf0 FUN_140e5bdf0 body=571 status=ok
// SIG undefined FUN_140e5bdf0(void)

void FUN_140e5bdf0(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  bVar2 = false;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar8 = 0;
  lVar7 = lVar8;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c8);
  }
  lVar5 = FUN_140e50970(param_1);
  lVar6 = lVar8;
  if (lVar5 != 0) {
    lVar6 = (**(code **)(*(longlong *)(lVar5 + 0xd80) + 0x18))();
  }
  if (((param_2 != 0) && (lVar6 != 0)) && (lVar7 != 0)) {
    iVar3 = FUN_142d1beb0(param_2);
    iVar4 = FUN_142ff7c90(lVar6,lVar7);
    bVar2 = false;
    if (iVar3 <= iVar4) {
      bVar2 = true;
      iVar3 = FUN_142d1beb0(param_2);
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar7 = lVar8;
      if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
        lVar7 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c8);
      }
      lVar5 = FUN_140e50970(param_1);
      lVar6 = lVar8;
      if (lVar5 != 0) {
        lVar6 = (**(code **)(*(longlong *)(lVar5 + 0xd80) + 0x18))();
      }
      if (((lVar7 != 0) && (-iVar3 != 0)) && (lVar6 != 0)) {
        FUN_142fe44f0(lVar6,lVar7,-iVar3);
      }
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        lVar7 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          thunk_FUN_14145e850(*(undefined8 *)(param_1 + 0x1a8),param_2);
        }
        else {
          lVar7 = FUN_14142e810();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            thunk_FUN_14145e8d0(*(undefined8 *)(param_1 + 0x1a8),param_2);
          }
          else {
            lVar7 = FUN_1412fb190();
            if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              thunk_FUN_14145e7d0(*(undefined8 *)(param_1 + 0x1a8),param_2);
            }
          }
        }
      }
    }
  }
  if (bVar2) {
    lVar8 = param_2;
  }
  FUN_140e56070(param_1,lVar8);
  return;
}



// FUNCTION 140e5c030 FUN_140e5c030 body=777 status=ok
// SIG undefined FUN_140e5c030(void)

void FUN_140e5c030(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_res10 [4];
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar13;
  longlong local_58;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_58 = 0;
  uVar12 = 0;
  bVar2 = false;
  bVar1 = false;
  lVar7 = FUN_140e50970();
  iVar5 = 0;
  if ((((lVar7 != 0) && (lVar7 = (**(code **)(*(longlong *)(lVar7 + 0xd80) + 0x18))(), lVar7 != 0))
      && (param_3 != 0)) && ((param_2 != (longlong *)0x0 && (*(longlong *)(param_1 + 0x1a8) != 0))))
  {
    lVar8 = FUN_140b2c3e0(param_3);
    lVar9 = FUN_140e50970(param_1);
    bVar1 = bVar2;
    if ((lVar9 != 0) &&
       ((local_res20 = (**(code **)(*(longlong *)(lVar9 + 0xd80) + 0x18))(), local_res20 != 0 &&
        (lVar8 != 0)))) {
      iVar5 = FUN_140b2c830(param_3,param_2,*(undefined8 *)(param_1 + 0x1a8));
      iVar6 = FUN_142ff7c90(local_res20,lVar8);
      if ((iVar5 <= iVar6) && (cVar3 = FUN_140e46220(param_1,param_2), cVar3 != '\0')) {
        local_58 = FUN_140b2c3e0(param_3);
        lVar8 = FUN_140e4e480(param_1,param_2);
        if ((local_58 != 0) && (lVar8 != 0)) {
          cVar3 = FUN_140b40e30(param_3,param_2);
          local_res10[0] = FUN_140b2c830(param_3,param_2,*(undefined8 *)(param_1 + 0x1a8));
          plVar10 = (longlong *)FUN_140b28fa0(param_3,*(undefined8 *)(param_1 + 0x1a8));
          if (param_2 == plVar10) {
            if (cVar3 != '\0') {
              FUN_140b3cea0(param_3,*(undefined8 *)(param_1 + 0x1a8));
            }
            uVar12 = 3;
          }
          else if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x1a8) + 0xe80)) {
            FUN_14145d730();
            FUN_140cf0f20(*(undefined8 *)(param_1 + 0x1a8));
            uVar12 = 2;
          }
          else {
            uVar11 = FUN_14142bde0();
            lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar11);
            iVar5 = local_res10[0];
            if ((lVar9 == 0) ||
               (cVar4 = FUN_140b240f0(lVar9,*(undefined8 *)(param_1 + 0x1a8)),
               iVar5 = local_res10[0], cVar4 == '\0')) goto LAB_140e5c30b;
            FUN_142ffa6f0(param_3,&local_res20,param_2);
            iVar5 = local_res10[0];
            if ((int)local_res20 == -1) goto LAB_140e5c30b;
            if (cVar3 != '\0') {
              FUN_143011bf0(param_3,&local_res20,1);
            }
            uVar12 = 0;
          }
          lVar9 = FUN_140e50970(param_1);
          iVar5 = local_res10[0];
          bVar1 = true;
          if (lVar9 != 0) {
            FUN_140e54030(param_1,local_58,-local_res10[0]);
            if (cVar3 == '\0') {
              (**(code **)(*(longlong *)(lVar9 + 0xd80) + 0x28))
                        ((longlong *)(lVar9 + 0xd80),param_2,1,1);
              bVar1 = true;
            }
            else {
              FUN_142fe3d60(lVar7,local_res10,*(undefined8 *)(lVar8 + 0x1d8),param_2,
                            CONCAT44(uVar13,1),0,0,1,0,0);
            }
          }
          goto LAB_140e5c30b;
        }
      }
      iVar5 = 0;
    }
  }
LAB_140e5c30b:
  plVar10 = (longlong *)0x0;
  if (bVar1) {
    plVar10 = param_2;
  }
  FUN_140e56730(param_1,uVar12,local_58,iVar5,plVar10);
  return;
}



// FUNCTION 140e5c340 FUN_140e5c340 body=979 status=ok
// SIG undefined FUN_140e5c340(void)

void FUN_140e5c340(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_res10 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_2 == 0) {
    return;
  }
  lVar11 = 0;
  plVar10 = param_1 + 0x3e;
  iVar3 = (int)param_1[0x3f];
  plVar9 = (longlong *)*plVar10;
  plVar5 = plVar9 + (longlong)iVar3 * 2;
  if (plVar9 != plVar5) {
    do {
      if (*plVar9 == *(longlong *)(param_2 + 0x30)) goto LAB_140e5c3e1;
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar5);
  }
  *(int *)(param_1 + 0x3f) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x1fc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar3);
  }
  lVar1 = *plVar10;
  lVar12 = (longlong)iVar3 * 0x10;
  *(undefined8 *)(lVar12 + lVar1) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(lVar12 + 8 + lVar1) = 0;
  if ((iVar3 == -1) || (plVar9 = (longlong *)(*plVar10 + lVar12), plVar9 == (longlong *)0x0))
  goto LAB_140e5c6e4;
LAB_140e5c3e1:
  plVar5 = param_1 + 0x31;
  iVar3 = (int)param_1[0x32];
  plVar6 = (longlong *)*plVar5;
  plVar8 = plVar6 + (longlong)iVar3 * 4;
  for (; plVar6 != plVar8; plVar6 = plVar6 + 4) {
    if (*plVar6 == param_2) {
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      goto LAB_140e5c451;
    }
  }
  *(int *)(param_1 + 0x32) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x194) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar5);
  }
  lVar1 = *plVar5;
  lVar12 = (longlong)iVar3 * 0x20;
  *(longlong *)(lVar12 + lVar1) = param_2;
  *(undefined4 *)(lVar12 + 8 + lVar1) = 1;
  *(undefined8 *)(lVar12 + 0x10 + lVar1) = 0;
  *(undefined8 *)(lVar12 + 0x18 + lVar1) = 0;
LAB_140e5c451:
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 == 3) {
    plVar9 = (longlong *)*plVar5;
    plVar6 = plVar9 + (longlong)(int)param_1[0x32] * 4;
    for (; plVar9 != plVar6; plVar9 = plVar9 + 4) {
      if (*plVar9 == param_2) {
        if (0 < (int)plVar9[1]) {
          if (0 < *(int *)(param_2 + 0x40)) {
            local_38 = FUN_140e505b0(param_1);
            uStack_30 = 0;
            if ((int)plVar9[3] < 1) {
              FUN_142c90ad0(param_2 + 0x38,plVar9 + 2,param_1,&local_38,1,local_res10);
            }
            else {
              FUN_142ca8da0();
            }
          }
          if (param_1[0x52] != 0) {
            FUN_1430ec760();
          }
          plVar5 = (longlong *)*plVar5;
          plVar9 = plVar5;
          goto joined_r0x000140e5c51b;
        }
        break;
      }
    }
  }
  goto LAB_140e5c550;
joined_r0x000140e5c51b:
  if (plVar9 == plVar5 + (longlong)(int)param_1[0x32] * 4) goto LAB_140e5c52e;
  if (*plVar9 == param_2) {
    uVar4 = (undefined4)((longlong)plVar9 - (longlong)plVar5 >> 5);
    goto LAB_140e5c533;
  }
  plVar9 = plVar9 + 4;
  goto joined_r0x000140e5c51b;
LAB_140e5c52e:
  uVar4 = 0xffffffff;
LAB_140e5c533:
  FUN_140e5de10(param_1 + 0x33,uVar4,1);
  (**(code **)(*param_1 + 0x260))(param_1);
LAB_140e5c550:
  lVar1 = *(longlong *)(param_2 + 0x30);
  iVar3 = FUN_14233f450(param_1);
  if ((iVar3 == 3) && (lVar1 != 0)) {
    plVar10 = (longlong *)*plVar10;
    plVar9 = plVar10 + (longlong)(int)param_1[0x3f] * 2;
    for (; plVar10 != plVar9; plVar10 = plVar10 + 2) {
      if (*plVar10 == lVar1) {
        lVar12 = param_1[0x23];
        if (lVar12 != 0) {
          lVar7 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar11 = *(longlong *)(lVar12 + 0x990);
          }
        }
        if (lVar11 != 0) {
          plVar5 = (longlong *)param_1[0x37];
          plVar9 = plVar5 + (longlong)(int)param_1[0x38] * 3;
          for (; plVar5 != plVar9; plVar5 = plVar5 + 3) {
            plVar6 = (longlong *)*plVar5;
            *(undefined1 *)((longlong)plVar5 + 0x11) = 0;
            if (plVar6[6] == lVar1) {
              if (((int)plVar10[1] + -1 < (int)plVar6[0x14]) &&
                 ((int)plVar6[0x14] <= (int)plVar10[1])) {
                (**(code **)(*plVar6 + 0x280))(plVar6,lVar11,plVar5 + 1);
                uVar4 = FUN_140e3ebd0(param_1 + 0x37,plVar5);
                FUN_140e5de10(param_1 + 0x39,uVar4,1);
                (**(code **)(*param_1 + 0x260))(param_1);
                *(undefined2 *)(plVar5 + 2) = 0x101;
              }
            }
          }
        }
        break;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x20c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x48);
  *(int *)((longlong)param_1 + 0x17c) = *(int *)((longlong)param_1 + 0x17c) + -1;
  (**(code **)(*param_1 + 0x260))(param_1);
  if ((char)param_1[0x50] == '\0') {
    local_res10[0] = *(undefined4 *)((longlong)param_1 + 0x17c);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x44,local_res10);
  }
LAB_140e5c6e4:
  iVar3 = rand();
  *(int *)(param_1 + 0x3d) = iVar3;
  return;
}



// FUNCTION 140e5c720 FUN_140e5c720 body=666 status=ok
// SIG undefined FUN_140e5c720(void)

void FUN_140e5c720(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  
  uVar12 = 0;
  iVar11 = 0;
  iVar10 = 0;
  iVar6 = iVar11;
  if (((*(longlong *)(param_1 + 0x1a8) == 0) || (iVar6 = iVar10, param_2 == 0)) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x848), lVar2 == 0))
  goto LAB_140e5c99d;
  lVar7 = FUN_1413ffe00();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_140e5c99d;
  lVar7 = *(longlong *)(lVar2 + 0x2a00);
  lVar9 = (longlong)*(int *)(lVar2 + 0x2a08) * 0x20 + lVar7;
  for (; lVar7 != lVar9; lVar7 = lVar7 + 0x20) {
    if (*(longlong *)(lVar7 + 0x10) == param_2) {
      iVar8 = *(int *)(lVar7 + 0x18);
      goto LAB_140e5c7d5;
    }
  }
  iVar8 = 0;
LAB_140e5c7d5:
  lVar7 = FUN_140e50b20(param_2,iVar8 + 1);
  iVar6 = iVar11;
  if ((lVar7 == 0) || (lVar9 = (**(code **)(*(longlong *)(lVar2 + 0xd80) + 0x18))(), lVar9 == 0))
  goto LAB_140e5c99d;
  iVar5 = FUN_142ff7c90(lVar9,*(undefined8 *)(lVar7 + 0x10));
  iVar1 = *(int *)(lVar7 + 8);
  iVar6 = iVar10;
  if (iVar5 < iVar1) goto LAB_140e5c99d;
  if (0 < iVar1) {
    FUN_142fe44f0(lVar9,*(undefined8 *)(lVar7 + 0x10),-iVar1);
  }
  if ((*(longlong *)(lVar2 + 0x2a10) != 0) && (iVar6 = FUN_142235230(), iVar6 != 3)) {
    lVar7 = *(longlong *)(lVar2 + 0x2a00);
    lVar9 = (longlong)*(int *)(lVar2 + 0x2a08) * 0x20 + lVar7;
    for (; lVar7 != lVar9; lVar7 = lVar7 + 0x20) {
      lVar3 = *(longlong *)(lVar7 + 0x10);
      if (lVar3 == param_2) {
        if (lVar3 == 0) goto LAB_140e5c985;
        lVar9 = *(longlong *)(lVar3 + 0x30);
        if (lVar9 != 0) {
          iVar11 = *(int *)(lVar9 + 0x38) - *(int *)(lVar9 + 100);
        }
        if (iVar11 <= *(int *)(lVar7 + 0x18)) goto LAB_140e5c985;
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        goto LAB_140e5c920;
      }
    }
    local_48 = 0xffffffffffffffff;
    local_40 = 0xffffffff;
    local_30 = 1;
    local_38 = param_2;
    FUN_140e3de40(lVar2 + 0x2a00,&local_48);
    lVar7 = *(longlong *)(lVar2 + 0x2a00);
    lVar9 = (longlong)*(int *)(lVar2 + 0x2a08) * 0x20 + lVar7;
    for (; lVar7 != lVar9; lVar7 = lVar7 + 0x20) {
      if (*(longlong *)(lVar7 + 0x10) == param_2) goto LAB_140e5c920;
    }
  }
  goto LAB_140e5c985;
LAB_140e5c920:
  if (lVar7 != 0) {
    FUN_140e435e0(lVar2 + 0x2950,*(undefined8 *)(lVar7 + 0x10),0);
    local_48 = *(undefined8 *)(lVar7 + 0x10);
    local_40 = *(undefined4 *)(lVar7 + 0x18);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar2 + 0x2a18,&local_48);
    if (*(longlong **)(lVar2 + 0x2a10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x2a10) + 0x600))();
      (**(code **)(**(longlong **)(lVar2 + 0x2a10) + 0x260))();
      FFastArraySerializer::MarkItemDirty(lVar2 + 0x2950,lVar7);
    }
  }
LAB_140e5c985:
  uVar12 = 1;
  iVar6 = iVar8 + 1;
LAB_140e5c99d:
  FUN_1414b13e0(param_1,param_2,uVar12,iVar6);
  return;
}



// FUNCTION 140e5c9c0 FUN_140e5c9c0 body=100 status=ok
// SIG undefined FUN_140e5c9c0(void)

void FUN_140e5c9c0(undefined8 param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140bd1210(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140e5ca30 FUN_140e5ca30 body=886 status=ok
// SIG undefined FUN_140e5ca30(void)

void FUN_140e5ca30(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  int local_res18;
  longlong *local_res20;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  
  plVar12 = (longlong *)0x0;
  local_88 = 0;
  iVar5 = 0;
  local_80 = 0;
  local_res18 = 0;
  lVar6 = FUN_140e50970();
  plVar7 = plVar12;
  if (lVar6 != 0) {
    plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar6 + 0xd80) + 0x18))();
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  local_res20 = plVar12;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    local_res20 = *(longlong **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
  }
  if ((plVar7 != (longlong *)0x0) && (local_res20 != (longlong *)0x0)) {
    lVar6 = plVar7[0x45];
    lVar15 = (longlong)(int)plVar7[0x46] * 0x40 + lVar6;
    local_78 = (longlong *)0x0;
    iVar5 = 0;
    local_6c = 0;
    plVar14 = plVar12;
    plVar11 = plVar12;
    for (; lVar6 != lVar15; lVar6 = lVar6 + 0x40) {
      if (((*(byte *)(lVar6 + 0x30) & 4) != 0) &&
         (plVar1 = *(longlong **)(lVar6 + 0x20), plVar1 != (longlong *)0x0)) {
        uVar8 = FUN_14301f8f0();
        lVar9 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar8);
        if ((lVar9 != 0) && (cVar3 = (**(code **)(*plVar7 + 0x480))(plVar7,lVar6), cVar3 != '\0')) {
          local_68 = *(undefined4 *)(lVar6 + 0xc);
          uStack_64 = FSceneViewport::GetMouseY(lVar9);
          plVar1 = *(longlong **)(lVar6 + 0x20);
          local_58 = plVar1;
          if (plVar1 == (longlong *)0x0) {
LAB_140e5cba0:
            uStack_60 = 1;
          }
          else {
            uVar8 = FUN_14301f8f0();
            lVar9 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar8);
            if (lVar9 == 0) goto LAB_140e5cba0;
            uStack_60 = *(undefined4 *)(lVar9 + 0x1fc);
          }
          iVar5 = (int)plVar12;
          local_70 = iVar5 + 1;
          if ((int)plVar11 < (int)local_70) {
            TArray<`anonymous_namespace'::FLogCategoryPtrs,FDefaultAllocator>::ResizeGrow
                      (&local_78,plVar12);
            plVar11 = (longlong *)(ulonglong)local_6c;
            plVar14 = local_78;
          }
          plVar12 = (longlong *)(ulonglong)local_70;
          plVar1 = plVar14 + (longlong)iVar5 * 3;
          *(undefined4 *)plVar1 = local_68;
          *(undefined4 *)((longlong)plVar1 + 4) = uStack_64;
          *(undefined4 *)(plVar1 + 1) = uStack_60;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_5c;
          plVar14[(longlong)iVar5 * 3 + 2] = (longlong)local_58;
        }
      }
      iVar5 = (int)plVar12;
    }
    lVar6 = 0;
    iVar13 = 0;
    local_res10[0] = 0;
    FUN_140e3eee0(plVar14,(longlong)iVar5,0,local_res10);
    plVar12 = plVar14 + (longlong)iVar5 * 3;
    plVar11 = plVar14;
    if (plVar14 != plVar12) {
      do {
        FUN_143011bf0(plVar7,plVar11,1);
        iVar13 = iVar13 + (int)plVar11[1];
        FUN_140e423c0(param_1,plVar11[2]);
        plVar11 = plVar11 + 3;
      } while (plVar11 != plVar12);
      local_res18 = iVar13;
      if (plVar14 != plVar12) {
        plVar7 = plVar14 + 2;
        do {
          uVar2 = local_80;
          if (*plVar7 != 0) {
            uVar4 = *(uint *)(*plVar7 + 0xc);
            lVar15 = lVar6;
            if ((int)uVar4 < (int)DAT_1469e91c4) {
              uVar10 = uVar4 & 0xffff;
              if ((int)uVar4 < 0) {
                uVar4 = uVar4 + 0xffff;
                uVar10 = uVar10 - 0x10000;
              }
              lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                       (longlong)(int)uVar10 * 0x18;
            }
            if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) == 0) {
              lVar15 = (longlong)(int)local_80;
              iVar5 = (int)local_80 + 1;
              local_80 = CONCAT44(local_80._4_4_,iVar5);
              if (local_80._4_4_ < iVar5) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_88,uVar2 & 0xffffffff);
              }
              *(longlong *)(local_88 + lVar15 * 8) = *plVar7;
            }
          }
          plVar11 = plVar7 + 1;
          plVar7 = plVar7 + 3;
        } while (plVar11 != plVar12);
      }
    }
    lVar15 = FUN_140e50970(param_1);
    if (lVar15 != 0) {
      lVar6 = (**(code **)(*(longlong *)(lVar15 + 0xd80) + 0x18))();
    }
    iVar5 = local_res18;
    if ((local_res18 != 0) && (lVar6 != 0)) {
      FUN_142fe44f0(lVar6,local_res20,local_res18);
    }
    if (plVar14 != (longlong *)0x0) {
      FMemory::Free(plVar14);
    }
  }
  FUN_140e56340(param_1,3,0,iVar5,&local_88);
  if (local_88 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e5cdb0 FUN_140e5cdb0 body=431 status=ok
// SIG undefined FUN_140e5cdb0(void)

void FUN_140e5cdb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_res10;
  undefined8 *local_68;
  undefined4 local_60;
  undefined1 local_58 [64];
  
  uVar2 = 0;
  lVar3 = FUN_140e50970();
  if ((lVar3 != 0) &&
     (plVar4 = (longlong *)(**(code **)(*(longlong *)(lVar3 + 0xd80) + 0x18))(),
     plVar4 != (longlong *)0x0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar3 = 0;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
    }
    if ((lVar3 != 0) && (FUN_142ffa6f0(plVar4,&local_res10,param_2), (int)local_res10 != -1)) {
      FUN_142fde510(local_58);
      cVar1 = FUN_142ffa4f0(plVar4,&local_res10,local_58);
      if ((cVar1 != '\0') &&
         (cVar1 = (**(code **)(*plVar4 + 0x480))(plVar4,local_58), uVar2 = 0, cVar1 != '\0')) {
        uVar2 = FUN_140e4e4c0(param_1,param_2);
        FUN_140e54030(param_1,lVar3,uVar2);
        FUN_143011bf0(plVar4,&local_res10,1);
        FUN_140e423c0(param_1,param_2);
      }
    }
  }
  local_68 = (undefined8 *)0x0;
  local_60 = 1;
  local_res10 = param_2;
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_68,1);
  *local_68 = local_res10;
  FUN_140e56340(param_1,1,0,uVar2,&local_68);
  if (local_68 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e5cf60 FUN_140e5cf60 body=41 status=ok
// SIG undefined FUN_140e5cf60(void)

void FUN_140e5cf60(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x260))();
  *(undefined4 *)((longlong)param_1 + 0x17c) = param_2;
  return;
}



// FUNCTION 140e5cf90 FUN_140e5cf90 body=67 status=ok
// SIG undefined FUN_140e5cf90(void)

void FUN_140e5cf90(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x5f4) != param_2) {
    *(char *)(param_1 + 0x5f4) = param_2;
    FUN_140e55090();
    if (*(byte *)(param_1 + 0x128) < 3) {
      FUN_14146d990(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140e5cfe0 FUN_140e5cfe0 body=121 status=ok
// SIG undefined FUN_140e5cfe0(void)

void FUN_140e5cfe0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0xae];
  if (lVar1 != param_2) {
    param_1[0xae] = param_2;
    FUN_140e54e40();
    FUN_140e62940(param_1);
    if (*(byte *)(param_1 + 0x25) < 3) {
      FUN_14146d9d0(param_1,param_2);
    }
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x668))(param_1);
      FUN_142d7f490(uVar2,L"player_class_change");
    }
  }
  return;
}



// FUNCTION 140e5d070 FUN_140e5d070 body=378 status=ok
// SIG undefined FUN_140e5d070(void)

void FUN_140e5d070(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 local_res8 [2];
  undefined8 local_18;
  undefined1 local_10;
  
  if ((int)param_1[0x2f] == 0) {
    (**(code **)(*param_1 + 0x260))();
    iVar2 = *(int *)((longlong)param_1 + 0x17c);
    *(undefined4 *)(param_1 + 0x2f) = 1;
    param_1[0x30] = 0;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    *(int *)((longlong)param_1 + 0x17c) = iVar2;
    iVar2 = FUN_142340f30(param_1);
    if ((iVar2 != 3) && (param_1[0x52] == 0)) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar8 = *(longlong *)(DAT_146b33f38 + 200);
      plVar3 = (longlong *)FUN_140e505b0(param_1);
      if (plVar3 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        uVar4 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
        lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
      }
      if ((((lVar8 != 0) && (plVar3 != (longlong *)0x0)) && (lVar5 != 0)) &&
         (plVar3 = (longlong *)FUN_140a32c90(lVar8,local_res8), *plVar3 != 0)) {
        lVar6 = FUN_1430f1090();
        for (lVar1 = *plVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar6) {
            if (*plVar3 != 0) {
              local_18 = 0;
              puVar7 = (undefined8 *)FUN_140a32c90(lVar8,local_res8);
              local_18 = *puVar7;
              local_10 = 1;
              lVar8 = FUN_1430ea410(lVar5,&local_18);
              param_1[0x52] = lVar8;
            }
            break;
          }
        }
      }
    }
    iVar2 = rand();
    local_res8[0] = 0;
    *(int *)(param_1 + 0x3d) = iVar2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x46,local_res8);
  }
  return;
}



// FUNCTION 140e5d1f0 SetEnabled body=21 status=ok
// SIG undefined SetEnabled(void)

void ALight::SetEnabled(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_142398ec0(*(longlong *)(param_1 + 0x2b8),param_2,1);
    return;
  }
  return;
}



// FUNCTION 140e5d210 FUN_140e5d210 body=134 status=ok
// SIG undefined FUN_140e5d210(void)

void FUN_140e5d210(int *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 6) != param_3) {
    *(longlong *)(param_1 + 6) = param_3;
    FUN_140e559e0(param_2,param_1);
    if (*param_1 == -1) {
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
      *param_1 = *(int *)(param_2 + 0x50);
      iVar1 = *(int *)(param_2 + 0x50);
      if (iVar1 == -1) {
        iVar1 = 0;
      }
      *(int *)(param_2 + 0x50) = iVar1;
    }
    param_1[1] = param_1[1] + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_2);
    *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + 1;
    if (*(int *)(param_2 + 0x54) == -1) {
      *(undefined4 *)(param_2 + 0x54) = 0;
    }
    *(undefined8 *)(param_2 + 0xa8) = 0xffffffffffffffff;
    if (*(longlong **)(param_2 + 0xb0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0xb0) + 0x260))();
    }
  }
  return;
}



// FUNCTION 140e5d2a0 FUN_140e5d2a0 body=178 status=ok
// SIG undefined FUN_140e5d2a0(void)

void FUN_140e5d2a0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((param_2 == '\0') && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    FUN_142880530(uVar3,param_1 + 0xea);
    param_1[0xea] = 0;
  }
  plVar4 = (longlong *)param_1[0xdf];
  plVar5 = plVar4 + (longlong)(int)param_1[0xe0] * 0xc;
  for (; plVar4 != plVar5; plVar4 = plVar4 + 0xc) {
    plVar1 = (longlong *)*plVar4;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x310))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 140e5d360 FUN_140e5d360 body=157 status=ok
// SIG undefined FUN_140e5d360(void)

void FUN_140e5d360(longlong param_1,byte param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  
  if (param_2 < 3) {
    *(char *)(param_1 + 0x1b0 + (ulonglong)param_2 * 8) = param_3;
    if ((param_3 == '\0') || (param_4 == '\0')) {
      uVar1 = 0xbf800000;
    }
    else if (*(longlong *)(param_1 + 0x28) == 0) {
      uVar1 = 0x3dcccccd;
    }
    else {
      uVar1 = USkeletalMeshComponent::GetTeleportDistanceThreshold();
    }
    *(undefined4 *)(param_1 + 0x1b4 + (ulonglong)param_2 * 8) = uVar1;
    if (param_3 != '\0') {
      if (param_2 != 0) {
        *(undefined1 *)(param_1 + 0x1b0) = 0;
      }
      if (param_2 != 1) {
        *(undefined1 *)(param_1 + 0x1b8) = 0;
      }
      if (param_2 != 2) {
        *(undefined1 *)(param_1 + 0x1c0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140e5d400 FUN_140e5d400 body=22 status=ok
// SIG undefined FUN_140e5d400(void)

void FUN_140e5d400(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x710) = param_2;
  *(undefined8 *)(param_1 + 0x718) = param_3;
  *(undefined8 *)(param_1 + 0x720) = param_4;
  return;
}



// FUNCTION 140e5d420 FUN_140e5d420 body=232 status=ok
// SIG undefined FUN_140e5d420(void)

void FUN_140e5d420(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *param_2;
  uVar5 = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1c8) = uVar2;
  if (-1.0 <= (float)uVar2) {
    if (1.0 <= (float)uVar2) {
      uVar2 = 0x3f800000;
    }
  }
  else {
    uVar2 = 0xbf800000;
  }
  fVar3 = *(float *)(param_1 + 0x1cc);
  *(int *)(param_1 + 0x1c8) = (int)uVar2;
  if (-1.0 <= fVar3) {
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = -1.0;
  }
  *(float *)(param_1 + 0x1cc) = fVar3;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  fVar1 = (float)USplineMeshComponent::GetStartRoll();
  fVar3 = *(float *)(param_1 + 0x1c8);
  if (ABS(fVar3) < fVar1) {
LAB_140e5d4c3:
    uVar4 = 0;
  }
  else if (fVar3 <= 0.0) {
    if (0.0 <= fVar3) goto LAB_140e5d4c3;
    uVar4 = 0xbf800000;
  }
  else {
    uVar4 = 0x3f800000;
  }
  fVar3 = *(float *)(param_1 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1c8) = uVar4;
  if (fVar1 <= ABS(fVar3)) {
    if (0.0 < fVar3) goto LAB_140e5d4f0;
    if (fVar3 < 0.0) {
      uVar5 = 0xbf800000;
      goto LAB_140e5d4f0;
    }
  }
  uVar5 = 0;
LAB_140e5d4f0:
  *(undefined4 *)(param_1 + 0x1cc) = uVar5;
  return;
}



// FUNCTION 140e5d510 FUN_140e5d510 body=407 status=ok
// SIG undefined FUN_140e5d510(void)

void FUN_140e5d510(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *_Str;
  byte bVar5;
  wchar_t *_Str_00;
  undefined4 uVar6;
  double dVar7;
  
  if (param_2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = *(longlong *)(param_2 + 0x848), lVar3 != 0)) {
      lVar4 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (1 < (int)param_1[1])) {
        _Str_00 = L"";
        if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)*param_1;
        }
        iVar2 = _wtoi(_Str);
        bVar5 = (char)iVar2 - 1;
        if (*(int *)(*param_1 + 0x18) != 0) {
          _Str_00 = *(wchar_t **)(*param_1 + 0x10);
        }
        dVar7 = _wtof(_Str_00);
        bVar1 = (float)dVar7 != 0.0;
        if (bVar5 < 3) {
          *(bool *)(lVar3 + 0x28a0 + (ulonglong)bVar5 * 8) = bVar1;
          if (bVar1) {
            if (*(longlong *)(lVar3 + 0x2718) == 0) {
              uVar6 = 0x3dcccccd;
            }
            else {
              uVar6 = USkeletalMeshComponent::GetTeleportDistanceThreshold();
            }
          }
          else {
            uVar6 = 0xbf800000;
          }
          *(undefined4 *)(lVar3 + 0x28a4 + (ulonglong)bVar5 * 8) = uVar6;
          if (bVar1) {
            if (bVar5 != 0) {
              *(undefined1 *)(lVar3 + 0x28a0) = 0;
            }
            if (bVar5 != 1) {
              *(undefined1 *)(lVar3 + 0x28a8) = 0;
            }
            if (bVar5 != 2) {
              *(undefined1 *)(lVar3 + 0x28b0) = 0;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e5d6b0 FUN_140e5d6b0 body=483 status=ok
// SIG undefined FUN_140e5d6b0(void)

void FUN_140e5d6b0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *_Str;
  wchar_t *_Str_00;
  double dVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  if (param_2 == 0) {
    return;
  }
  lVar2 = FUN_14145f370();
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
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x848);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_1413ffe00();
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
    return;
  }
  if ((int)param_1[1] < 2) {
    return;
  }
  _Str_00 = L"";
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)*param_1;
  }
  dVar4 = _wtof(_Str);
  fVar8 = (float)dVar4;
  if (*(int *)(*param_1 + 0x18) != 0) {
    _Str_00 = *(wchar_t **)(*param_1 + 0x10);
  }
  dVar4 = _wtof(_Str_00);
  uVar7 = 0x3f800000;
  fVar5 = (float)dVar4;
  *(float *)(lVar2 + 0x28bc) = fVar5;
  if (-1.0 <= fVar8) {
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
  }
  else {
    fVar8 = -1.0;
  }
  *(float *)(lVar2 + 0x28b8) = fVar8;
  if (-1.0 <= fVar5) {
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = -1.0;
  }
  *(float *)(lVar2 + 0x28bc) = fVar5;
  if (*(longlong *)(lVar2 + 0x2718) == 0) {
    return;
  }
  fVar5 = (float)USplineMeshComponent::GetStartRoll();
  fVar8 = *(float *)(lVar2 + 0x28b8);
  if (ABS(fVar8) < fVar5) {
LAB_140e5d849:
    uVar6 = 0;
  }
  else if (fVar8 <= 0.0) {
    if (0.0 <= fVar8) goto LAB_140e5d849;
    uVar6 = 0xbf800000;
  }
  else {
    uVar6 = 0x3f800000;
  }
  fVar8 = *(float *)(lVar2 + 0x28bc);
  *(undefined4 *)(lVar2 + 0x28b8) = uVar6;
  if (fVar5 <= ABS(fVar8)) {
    if (0.0 < fVar8) goto LAB_140e5d876;
    if (fVar8 < 0.0) {
      uVar7 = 0xbf800000;
      goto LAB_140e5d876;
    }
  }
  uVar7 = 0;
LAB_140e5d876:
  *(undefined4 *)(lVar2 + 0x28bc) = uVar7;
  return;
}



// FUNCTION 140e5d8a0 FUN_140e5d8a0 body=341 status=ok
// SIG undefined FUN_140e5d8a0(void)

void FUN_140e5d8a0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *_Str;
  wchar_t *_Str_00;
  double dVar4;
  double dVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_1c;
  
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
    if ((bVar1) && (lVar2 = *(longlong *)(param_2 + 0x848), lVar2 != 0)) {
      lVar3 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (1 < (int)param_1[1])) {
        _Str_00 = L"";
        if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)*param_1;
        }
        dVar4 = _wtof(_Str);
        if (*(int *)(*param_1 + 0x18) != 0) {
          _Str_00 = *(wchar_t **)(*param_1 + 0x10);
        }
        local_38 = CONCAT31(local_38._1_3_,2);
        dVar5 = _wtof(_Str_00);
        *(undefined4 *)(lVar2 + 0x28e8) = local_38;
        *(undefined4 *)(lVar2 + 0x28ec) = uStack_34;
        *(undefined4 *)(lVar2 + 0x28f0) = 0;
        *(undefined4 *)(lVar2 + 0x28f4) = 0;
        *(float *)(lVar2 + 0x28f8) = (float)dVar4;
        *(float *)(lVar2 + 0x28fc) = (float)dVar5;
        *(undefined4 *)(lVar2 + 0x2900) = 0;
        *(undefined4 *)(lVar2 + 0x2904) = uStack_1c;
        FUN_140e60f10(lVar2 + 0x26f0,0);
      }
    }
  }
  return;
}



// FUNCTION 140e5da00 FUN_140e5da00 body=205 status=ok
// SIG undefined FUN_140e5da00(void)

void FUN_140e5da00(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_res18;
  undefined2 local_res1c;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 200);
  if (lVar1 != 0) {
    iVar2 = FUN_14233f450(param_1);
    if (iVar2 == 3) {
      (**(code **)(*param_1 + 0x260))(param_1);
      iVar2 = FUN_140a33780(lVar1);
      if (param_2 < 0) {
        iVar2 = 0;
      }
      else if (param_2 < iVar2) {
        iVar2 = param_2;
      }
      *(int *)(param_1 + 0x3b) = iVar2;
      uVar3 = FUN_140a2f2a0(lVar1,iVar2);
      FUN_142ccf590(param_1,uVar3);
      lVar1 = *param_1;
      uVar3 = (**(code **)(lVar1 + 0x408))(param_1);
      (**(code **)(lVar1 + 0x3f8))(param_1,uVar3);
      local_res18 = (undefined4)param_1[0x3b];
      local_res1c = 5;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x43,&local_res18);
    }
  }
  return;
}



// FUNCTION 140e5dad0 FUN_140e5dad0 body=106 status=ok
// SIG undefined FUN_140e5dad0(void)

void FUN_140e5dad0(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14308bdb0(*(longlong *)(param_1 + 0x28),1,param_2 ^ 1);
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    lVar1 = FUN_142cc1670();
    if (lVar1 != 0) {
      lVar1 = FUN_142cc1670(*(undefined8 *)(param_1 + 0x250));
      if (*(longlong *)(lVar1 + 0x180) != 0) {
        FUN_1423979a0(*(longlong *)(lVar1 + 0x180),param_2);
      }
    }
  }
  return;
}



// FUNCTION 140e5db40 FUN_140e5db40 body=430 status=ok
// SIG undefined FUN_140e5db40(void)

void FUN_140e5db40(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_res18;
  undefined4 local_res1c;
  
  iVar4 = FUN_14233f450();
  if (iVar4 == 3) {
    iVar4 = *(int *)(param_1 + 0x178);
    if (param_2 < 2) {
      param_2 = 1;
    }
    if (param_2 != iVar4) {
      *(int *)(param_1 + 0x178) = param_2;
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      plVar1 = *(longlong **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x510);
      if (*plVar1 != 0) {
        plVar5 = *(longlong **)(param_1 + 0x1f0);
        plVar7 = plVar5 + (longlong)*(int *)(param_1 + 0x1f8) * 2;
        for (; plVar5 != plVar7; plVar5 = plVar5 + 2) {
          if (*plVar5 == *plVar1) {
            uVar10 = (undefined4)plVar5[1];
            goto LAB_140e5dbd9;
          }
        }
      }
      uVar10 = 0;
LAB_140e5dbd9:
      if (plVar1[1] != 0) {
        plVar5 = *(longlong **)(param_1 + 0x1f0);
        plVar7 = plVar5 + (longlong)*(int *)(param_1 + 0x1f8) * 2;
        for (; plVar5 != plVar7; plVar5 = plVar5 + 2) {
          if (*plVar5 == plVar1[1]) {
            uVar8 = (undefined4)plVar5[1];
            goto LAB_140e5dc11;
          }
        }
      }
      uVar8 = 0;
LAB_140e5dc11:
      uVar9 = 0;
      if (plVar1[2] != 0) {
        plVar5 = *(longlong **)(param_1 + 0x1f0);
        plVar7 = plVar5 + (longlong)*(int *)(param_1 + 0x1f8) * 2;
        for (; uVar9 = 0, plVar5 != plVar7; plVar5 = plVar5 + 2) {
          if (*plVar5 == plVar1[2]) {
            uVar9 = (undefined4)plVar5[1];
            break;
          }
        }
      }
      FUN_140e45720(param_1,iVar4,param_2,uVar10,uVar8,uVar9);
      local_res1c = *(undefined4 *)(param_1 + 0x178);
      local_res18 = iVar4;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x210,&local_res18);
      lVar2 = *(longlong *)(param_1 + 0x118);
      if (lVar2 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_142dca8a0(lVar2,L"GuardianRankUp");
        }
      }
    }
  }
  return;
}



// FUNCTION 140e5dcf0 FUN_140e5dcf0 body=121 status=ok
// SIG undefined FUN_140e5dcf0(void)

void FUN_140e5dcf0(longlong param_1,byte param_2,char param_3)

{
  if ((*(byte *)(param_1 + 0x738) >> 5 & 1) != param_2) {
    *(byte *)(param_1 + 0x738) = *(byte *)(param_1 + 0x738) & 0xdf | param_2 << 5;
    if (*(longlong **)(param_1 + 0x6f0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x310))();
      if ((param_2 == 0) && (param_3 != '\0')) {
        FUN_140e53f80(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140e5dd70 FUN_140e5dd70 body=152 status=ok
// SIG undefined FUN_140e5dd70(void)

void FUN_140e5dd70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x178) == param_2) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 400);
  if (lVar2 != *(longlong *)(param_1 + 0x178)) {
    plVar3 = *(longlong **)(param_1 + 0x180);
    plVar1 = plVar3 + *(int *)(param_1 + 0x188);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 == lVar2) goto LAB_140e5ddce;
    }
    if (lVar2 != 0) goto LAB_140e5dddb;
  }
LAB_140e5ddce:
  FUN_140e58fd0(param_1);
LAB_140e5dddb:
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x18c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x180,0);
  }
  *(longlong *)(param_1 + 0x178) = param_2;
  return;
}



// FUNCTION 140e5de10 FUN_140e5de10 body=144 status=ok
// SIG undefined FUN_140e5de10(void)

void FUN_140e5de10(longlong param_1,int param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x18) <= param_2) {
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (uint *)(lVar3 + (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  uVar2 = 1 << ((byte)param_2 & 0x1f);
  if (param_3 != '\0') {
    *puVar1 = uVar2 | *puVar1;
    return;
  }
  *puVar1 = ~uVar2 & *puVar1;
  return;
}



// FUNCTION 140e5dea0 FUN_140e5dea0 body=351 status=ok
// SIG undefined FUN_140e5dea0(void)

void FUN_140e5dea0(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_3c [20];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar3 = *(byte *)(param_1 + 0x738) >> 4 & 1;
  if (bVar3 != param_2) {
    if ((bVar3 != 0) && (param_2 == 0)) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if (*(longlong *)(DAT_146b33f38 + 0xd0) == 0) {
        uVar9 = 0x41200000;
      }
      else {
        uVar9 = *(undefined4 *)(*(longlong *)(DAT_146b33f38 + 0xd0) + 0x43c);
      }
      uVar4 = FUN_142d9dd50(param_1 + 0x478);
      lVar1 = *(longlong *)(param_1 + 0x168);
      if (lVar1 == 0) {
        uVar7 = (undefined4)DAT_1468b5da0;
        uVar8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        uVar4 = DAT_1468b5da8;
      }
      else {
        local_28 = *(float *)(lVar1 + 0x210);
        fStack_24 = *(float *)(lVar1 + 0x214);
        fStack_20 = *(float *)(lVar1 + 0x218);
        fStack_1c = *(float *)(lVar1 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_24);
        auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_28);
        auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
        auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
        iVar5 = movmskps(uVar4,auVar2);
        if (iVar5 != 0) {
          *(float *)(lVar1 + 0x250) = local_28;
          *(float *)(lVar1 + 0x254) = fStack_24;
          *(float *)(lVar1 + 600) = fStack_20;
          *(float *)(lVar1 + 0x25c) = fStack_1c;
          puVar6 = (undefined8 *)FQuat::Rotator(&local_28,local_3c);
          *(undefined8 *)(lVar1 + 0x260) = *puVar6;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
        }
        uVar7 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        uVar4 = *(undefined4 *)(lVar1 + 0x268);
      }
      FUN_142daf7c0(param_1 + 0x478,uVar8,uVar9,param_4,CONCAT44(uVar8,uVar7),uVar4);
    }
    *(byte *)(param_1 + 0x738) = *(byte *)(param_1 + 0x738) & 0xef;
    *(byte *)(param_1 + 0x738) = *(byte *)(param_1 + 0x738) | param_2 << 4;
    AActor::SetActorTickEnabled(param_1,1);
    FUN_140e59f00(param_1);
  }
  return;
}



// FUNCTION 140e5e000 FUN_140e5e000 body=19 status=ok
// SIG undefined FUN_140e5e000(void)

void FUN_140e5e000(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x1d8) = *param_2;
  FUN_140e5a1d0(param_1,param_3);
  return;
}



// FUNCTION 140e5e020 FUN_140e5e020 body=717 status=ok
// SIG undefined FUN_140e5e020(void)

void FUN_140e5e020(longlong param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong local_res8;
  longlong local_res10;
  int local_48;
  int local_44;
  longlong local_40;
  
  if (param_2 != *(longlong *)(param_1 + 0x288)) {
    if (*(longlong *)(param_1 + 0x288) != 0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop
                         (L"&UPlayerGuardianRankComponent::NotifyUncappedExperienceAdded",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      lVar1 = *(longlong *)(param_1 + 0x288);
      plVar14 = (longlong *)(lVar1 + 0x228);
      lVar7 = *plVar14;
      iVar12 = *(int *)(lVar1 + 0x230);
      for (lVar13 = lVar7; lVar13 != (longlong)iVar12 * 0x10 + lVar7; lVar13 = lVar13 + 0x10) {
        if ((*(longlong *)(lVar13 + 8) == local_res8) &&
           (lVar6 = FWeakObjectPtr::GetEvenIfUnreachable(lVar13), param_1 == lVar6)) {
          iVar12 = (int)(lVar13 - lVar7 >> 4);
          if (iVar12 != -1) {
            iVar9 = *(int *)(lVar1 + 0x230);
            iVar8 = (iVar9 - iVar12) + -1;
            if (0 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar12 * 0x10 + *plVar14),
                         (void *)((longlong)(iVar9 - iVar8) * 0x10 + *plVar14),(longlong)iVar8 << 4)
              ;
              iVar9 = *(int *)(lVar1 + 0x230);
            }
            *(int *)(lVar1 + 0x230) = iVar9 + -1;
          }
          break;
        }
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
    }
    *(longlong *)(param_1 + 0x288) = param_2;
    if (param_2 != 0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop
                         (L"&UPlayerGuardianRankComponent::NotifyUncappedExperienceAdded",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      lVar1 = *(longlong *)(param_1 + 0x288);
      plVar14 = (longlong *)(lVar1 + 0x228);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_40);
      }
      piVar10 = (int *)*plVar14;
      iVar12 = *(int *)(lVar1 + 0x230);
      for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar12 * 4; piVar11 = piVar11 + 4) {
        if ((((*piVar11 == local_48) && (piVar11[1] == local_44)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar11), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) &&
           (*(longlong *)(piVar11 + 2) == local_40)) {
          if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_140e5e2c6;
          break;
        }
      }
      iVar12 = *(int *)(lVar1 + 0x230);
      *(int *)(lVar1 + 0x230) = iVar12 + 1;
      if (*(int *)(lVar1 + 0x234) < iVar12 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar12);
      }
      piVar10 = (int *)((longlong)iVar12 * 0x10 + *plVar14);
      *piVar10 = local_48;
      piVar10[1] = local_44;
      *(longlong *)(piVar10 + 2) = local_40;
LAB_140e5e2c6:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
    }
  }
  return;
}



// FUNCTION 140e5e2f0 FUN_140e5e2f0 body=121 status=ok
// SIG undefined FUN_140e5e2f0(void)

void FUN_140e5e2f0(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar1 = FUN_140e181f0(*(longlong *)(param_1 + 0x28),1);
    FUN_140e36e20(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    cVar2 = FUN_140e181f0(*(undefined8 *)(param_1 + 0x28),1);
    if ((cVar1 == '\0') && (cVar2 != '\0')) {
      FUN_140e60f10(param_1,0);
    }
  }
  return;
}



// FUNCTION 140e5e370 FUN_140e5e370 body=29 status=ok
// SIG undefined FUN_140e5e370(void)

void FUN_140e5e370(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x1f8) = uVar1;
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  *(undefined4 *)(param_1 + 0x200) = uVar3;
  *(undefined4 *)(param_1 + 0x204) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x210) = uVar5;
  FUN_140e60f10(uVar1,0);
  return;
}



// FUNCTION 140e5e390 FUN_140e5e390 body=168 status=ok
// SIG undefined FUN_140e5e390(void)

void FUN_140e5e390(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)param_2[1];
  local_18 = *param_2;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x1f8) != &local_18) {
    *(undefined8 *)(param_1 + 0x1f8) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x200,&local_10);
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
  return;
}



// FUNCTION 140e5e440 FUN_140e5e440 body=205 status=ok
// SIG undefined FUN_140e5e440(void)

void FUN_140e5e440(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  
  if ((((*(longlong **)(param_1 + 0x538) == (longlong *)0x0) ||
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x20))(), cVar2 == '\0')) ||
      (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*(longlong **)(param_1 + 0x538) == (longlong *)0x0) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x20))(), cVar2 == '\0')) {
    if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
      return;
    }
    cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    if (cVar2 == '\0') {
      return;
    }
  }
  if ((bVar1) &&
     (cVar2 = (**(code **)**(undefined8 **)(param_2 + 8))
                        (*(undefined8 **)(param_2 + 8),*(undefined8 *)(param_1 + 0x538)),
     cVar2 != '\0')) {
    return;
  }
  FUN_1404c0940(param_1 + 0x530,param_2);
  FUN_140e55400(param_1);
  if (*(byte *)(param_1 + 0x128) < 3) {
    FUN_14146da10(param_1,param_2);
  }
  return;
}



// FUNCTION 140e5e510 FUN_140e5e510 body=160 status=ok
// SIG undefined FUN_140e5e510(void)

/* WARNING: Removing unreachable block (ram,0x000140e5e59b) */

void FUN_140e5e510(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_140e45ed0();
  if ((cVar1 != '\0') && (param_2 != 0)) {
    lVar3 = *(longlong *)(param_1 + 600);
    lVar2 = (longlong)*(int *)(param_1 + 0x260) * 0x20 + lVar3;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
      if (*(longlong *)(lVar3 + 0x10) == param_2) goto LAB_140e5e584;
    }
    lVar3 = 0;
LAB_140e5e584:
    if (lVar3 != 0) {
      FUN_140e5d210(lVar3,param_1 + 0x1a0,param_3);
    }
  }
  return;
}



// FUNCTION 140e5e5b0 FUN_140e5e5b0 body=280 status=ok
// SIG undefined FUN_140e5e5b0(void)

void FUN_140e5e5b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  
  *(longlong *)(param_1 + 0x2308) = param_2;
  if (param_2 == 0) {
    return;
  }
  _guard_xfg_dispatch_icall_nop(&local_68,0,0x60);
  local_50 = 100;
  local_60 = param_2;
  local_68 = FUN_14057ade0(param_2);
  if (0 < *(int *)(*(longlong *)(param_1 + 0x2308) + 200)) {
    local_58 = **(undefined8 **)(*(longlong *)(param_1 + 0x2308) + 0xc0);
  }
  uVar2 = FUN_1430b3b80();
  lVar3 = FUN_140e5f680(param_1,&local_68,uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e5e66d;
  }
  lVar3 = 0;
LAB_140e5e66d:
  *(longlong *)(param_1 + 0x2370) = lVar3;
  if (lVar3 != 0) {
    FUN_140c57820(param_1,lVar3,0,1,1);
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (local_48);
  return;
}



// FUNCTION 140e5e6d0 FUN_140e5e6d0 body=589 status=ok
// SIG undefined FUN_140e5e6d0(void)

void FUN_140e5e6d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  FUN_1427184e0();
  lVar7 = FUN_1422312c0(param_1);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
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
      FUN_140bce120(lVar7);
    }
  }
  if (*(longlong **)(param_1 + 0x4b8) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x20))();
    if (cVar6 != '\0') {
      bVar5 = true;
      goto LAB_140e5e74b;
    }
  }
  bVar5 = false;
LAB_140e5e74b:
  if (bVar5) {
    lVar7 = FUN_1422312c0(param_1);
    if (lVar7 != 0) {
      lVar8 = FUN_14141f270();
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
        local_58 = *(undefined8 *)(param_1 + 0x4b8);
        local_50 = *(longlong *)(param_1 + 0x4c0);
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        lVar8 = FUN_14244c070(lVar7,&local_58);
        if (lVar8 != 0) {
          local_68 = *(undefined8 *)(param_1 + 0x4b8);
          local_60 = *(longlong **)(param_1 + 0x4c0);
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          puVar9 = (undefined8 *)FUN_140bbc690(lVar7,local_48,&local_68);
          local_30 = *puVar9;
          local_28 = (longlong *)puVar9[1];
          if (local_28 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_28 + 1) = (int)local_28[1] + 1;
            UNLOCK();
          }
          local_38 = &PTR_FUN_143f740c8;
          local_20 = 0;
          local_18 = 0;
          FUN_140e5e440(param_1,&local_38);
          local_38 = &PTR_FUN_143f740c8;
          if (local_20 != 0) {
            FMemory::Free();
          }
          plVar3 = local_28;
          local_38 = &PTR_FUN_143f73d18;
          if (local_28 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_28 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_40 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
          plVar3 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_60)(local_60);
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
      }
    }
  }
  return;
}



// FUNCTION 140e5e920 FUN_140e5e920 body=45 status=ok
// SIG undefined FUN_140e5e920(void)

void FUN_140e5e920(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 != '\0') {
    FUN_142dafbc0();
    return;
  }
  FUN_142dbb5d0(param_1 + 0xd0,local_res18);
  return;
}



// FUNCTION 140e5e950 FUN_140e5e950 body=689 status=ok
// SIG undefined FUN_140e5e950(void)

void FUN_140e5e950(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res20 [8];
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong *local_38;
  
  lVar14 = 0;
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x250) == 0) {
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x28);
  if (lVar9 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x171) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x171) = param_2;
  lVar12 = lVar14;
  if ((*(char *)(param_1 + 0x30) == '\0') || (lVar12 = 0, param_3 != '\0')) {
LAB_140e5e9bb:
    if ((param_2 != '\0') && (*(char *)(param_1 + 0x30) != '\0')) goto LAB_140e5e9cd;
  }
  else {
    if (param_2 != '\0') {
      lVar12 = *(longlong *)(lVar9 + 0x9e0);
      goto LAB_140e5e9bb;
    }
    lVar12 = *(longlong *)(lVar9 + 0x9e8);
  }
  FUN_140e5dad0(param_1,0);
LAB_140e5e9cd:
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x250) + 0x920);
  if (lVar9 == 0) {
    plVar8 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    lVar13 = lVar14;
    if (lVar12 != 0) {
      lVar7 = UThrobber::GetPrivateStaticClass();
      lVar11 = lVar12;
      do {
        lVar13 = lVar12;
        if (lVar11 == lVar7) break;
        lVar11 = *(longlong *)(lVar11 + 0x30);
        lVar13 = lVar14;
      } while (lVar11 != 0);
    }
    plVar8 = (longlong *)FUN_142c7bc00(lVar9,local_48,lVar13,2);
    bVar6 = true;
    bVar5 = false;
    lVar14 = *plVar8;
  }
  plVar4 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = plStack_50;
  if ((bVar5) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  if ((bVar6) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar14 == 0) {
    if ((*(char *)(param_1 + 0x171) != '\0') && (*(char *)(param_1 + 0x30) != '\0')) {
      FUN_140e5dad0(param_1,1);
    }
  }
  else {
    FWeakObjectPtr::operator=(&local_res8,*(undefined8 *)(param_1 + 0x250));
    *(undefined1 *)(param_1 + 0x168) = 1;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    local_38 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_GetPoolName_1445b1a18;
      plVar8[1] = param_1;
      *(undefined4 *)(plVar8 + 2) = local_res8;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_resc;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar9;
      *plVar8 = (longlong)&PTR_GetPoolName_1445b1a60;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar14 + 0x58,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_res20);
      iVar3 = *(int *)(lVar14 + 0x60);
      *(int *)(lVar14 + 0x60) = iVar3 + 1;
      if (*(int *)(lVar14 + 100) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar14 + 0x58,iVar3);
      }
      puVar10 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar14 + 0x58));
      *puVar10 = plVar8;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar14 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
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



// FUNCTION 140e5ec10 FUN_140e5ec10 body=284 status=ok
// SIG undefined FUN_140e5ec10(void)

void FUN_140e5ec10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140e48310();
  *(byte *)(param_1 + 0x739) = *(byte *)(param_1 + 0x739) & 0xfc;
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    lVar1 = FUN_141796280(*(longlong *)(param_1 + 0x4b0) + 0x70);
    if (lVar1 != 0) {
      lVar2 = FUN_1413f82e0();
      do {
        if (lVar1 == lVar2) goto LAB_140e5ec70;
        lVar1 = *(longlong *)(lVar1 + 0x30);
      } while (lVar1 != 0);
    }
    *(byte *)(param_1 + 0x739) = *(byte *)(param_1 + 0x739) | 1;
    return;
  }
LAB_140e5ec70:
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_140e91fc0(*(longlong *)(param_1 + 0x4e0),*(undefined8 *)(param_1 + 0x6f0));
    if ((*(longlong *)(param_1 + 0x4b0) != 0) &&
       (lVar1 = FUN_141796280(*(longlong *)(param_1 + 0x4b0) + 0x70), lVar1 != 0)) {
      lVar2 = FUN_1413f82e0();
      while (lVar1 != lVar2) {
        lVar1 = *(longlong *)(lVar1 + 0x30);
        if (lVar1 == 0) {
          FUN_140e5a2c0(param_1);
          return;
        }
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4e0) + 0x140);
      lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x4e0) + 0x148) * 0x58 + lVar1;
      for (; lVar1 != lVar2; lVar1 = lVar1 + 0x58) {
        FUN_140e47b70(param_1,lVar1);
      }
    }
    FUN_140e5a2c0(param_1);
  }
  return;
}



// FUNCTION 140e5ed30 FUN_140e5ed30 body=736 status=ok
// SIG undefined FUN_140e5ed30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e5ed30(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong *plVar11;
  float *pfVar12;
  float *pfVar13;
  undefined1 auStack_118 [32];
  uint local_f8;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_140e48310();
  *(byte *)(param_1 + 0x739) = *(byte *)(param_1 + 0x739) & 0xfc;
  if (*(longlong *)(param_1 + 0x4b0) == 0) {
LAB_140e5ee19:
    if (*(longlong *)(param_1 + 0x4e0) != 0) {
      FUN_140e92060(*(longlong *)(param_1 + 0x4e0),*(undefined8 *)(param_1 + 0x6f0),param_2,param_4)
      ;
      cVar5 = FUN_140e74970(param_2,param_4);
      if (cVar5 != '\0') {
        local_d8 = (float *)0x0;
        local_d0 = 0;
        FUN_140e7efc0(*(undefined8 *)(param_1 + 0x4e0),param_2,param_3,&local_d8);
        pfVar13 = local_d8 + (longlong)(int)local_d0 * 0x16;
        if (local_d8 != pfVar13) {
          pfVar12 = local_d8 + 0x11;
          do {
            plVar8 = (longlong *)FUN_140e47b70(param_1,pfVar12 + -0x11);
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x6e8))(plVar8,param_2);
            }
            lVar6 = *(longlong *)(param_1 + 0x6f0);
            if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x4c0) != 0)) {
              lVar6 = FUN_14238d0c0(*(undefined8 *)(lVar6 + 0x168),local_88);
              fVar2 = *(float *)(lVar6 + 0x10);
              fVar3 = *(float *)(lVar6 + 0x14);
              fVar4 = *(float *)(lVar6 + 0x18);
              puVar9 = (undefined4 *)
                       FUN_14238d0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x4c0),
                                     local_88);
              local_98 = *puVar9;
              uStack_94 = puVar9[1];
              uStack_90 = puVar9[2];
              uStack_8c = puVar9[3];
              FQuat::Rotator(&local_98,&local_e8);
              local_e8 = local_e8 + pfVar12[1];
              fStack_e4 = fStack_e4 + pfVar12[2];
              local_e0 = local_e0 + pfVar12[3];
              local_c0 = fVar4 + *pfVar12;
              local_c8 = CONCAT44(fVar3 + pfVar12[-1],fVar2 + pfVar12[-2]);
              local_f8 = local_f8 & 0xffffff00;
              local_a0 = local_c0;
              FUN_14223cb00(*(undefined8 *)(param_1 + 0x6f0),&local_c8,0,0);
              local_b8 = CONCAT44(fStack_e4,local_e8);
              local_b0 = local_e0;
              local_f8 = local_f8 & 0xffffff00;
              FUN_142398470(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x4c0),&local_b8);
            }
            pfVar1 = pfVar12 + 5;
            pfVar12 = pfVar12 + 0x16;
          } while (pfVar1 != pfVar13);
        }
        if (local_d8 != (float *)0x0) {
          FMemory::Free();
        }
      }
      FUN_140e5a2c0(param_1);
    }
  }
  else {
    lVar6 = FUN_141796280(*(longlong *)(param_1 + 0x4b0) + 0x70);
    if (lVar6 != 0) {
      lVar7 = FUN_1413f82e0();
      do {
        if (lVar6 == lVar7) goto LAB_140e5ee19;
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
    FUN_14099b910(param_1 + 0x678,param_2);
    plVar8 = (longlong *)(param_1 + 0x6c0);
    if (plVar8 != param_3) {
      iVar10 = *(int *)(param_1 + 0x6c8);
      if (iVar10 != 0) {
        plVar11 = (longlong *)(*plVar8 + 0x18);
        do {
          if (plVar11[5] != 0) {
            FMemory::Free();
          }
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 10;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      local_f8 = 0;
      FUN_140998750(plVar8,*param_3,(int)param_3[1],*(undefined4 *)(param_1 + 0x6cc));
    }
    *(byte *)(param_1 + 0x739) = *(byte *)(param_1 + 0x739) | 2;
  }
  return;
}



// FUNCTION 140e5f010 FUN_140e5f010 body=250 status=ok
// SIG undefined FUN_140e5f010(void)

undefined8 FUN_140e5f010(longlong param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res18 [16];
  
  cVar1 = FUN_142718790();
  if (cVar1 == '\0') {
    return 0;
  }
  lVar3 = FUN_1422312c0(param_1);
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  if ((*(longlong **)(param_1 + 0x4b8) == (longlong *)0x0) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x20))(), cVar1 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    puVar5 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x4b8) + 8))
                       (*(longlong **)(param_1 + 0x4b8),local_res18);
    cVar1 = FUN_140bcac80(lVar3,*puVar5);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((*(longlong **)(param_1 + 0x538) == (longlong *)0x0) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x20))(), cVar1 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x20))(), cVar1 != '\0'))
  {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    return 1;
  }
  return 0;
}



// FUNCTION 140e5f110 FUN_140e5f110 body=43 status=ok
// SIG undefined FUN_140e5f110(void)

undefined8 FUN_140e5f110(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x768))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e5f140 FUN_140e5f140 body=933 status=ok
// SIG undefined FUN_140e5f140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140e5f140(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined1 local_a0;
  ulonglong local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar7 = (longlong *)0x0;
  plVar9 = (longlong *)param_2[0x109];
  local_70 = (longlong *)0x0;
  local_68 = 0;
  plVar6 = plVar7;
  plVar11 = plVar7;
  plVar12 = plVar7;
  local_78 = param_4;
  if (plVar9 != (longlong *)0x0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar11 = (longlong *)(local_68 & 0xffffffff);
    if (bVar1) {
      plVar6 = (longlong *)plVar9[0x55a];
      plVar12 = plVar9;
    }
  }
  plVar9 = plVar7;
  if (plVar6 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar6 + 0x408))();
    FUN_142ff7db0(&local_4c,*(undefined8 *)(param_1 + 0x50),param_2,uVar2);
    if (local_48 != '\0') {
      if (param_3 == '\0') {
        if (*(longlong *)(param_1 + 0x48) != 0) {
          local_98 = 0;
          local_a0 = 0;
          local_a8 = param_2;
          FUN_143013ad0(&local_70,*(longlong *)(param_1 + 0x48),1,local_4c);
        }
      }
      else if (*(longlong *)(param_1 + 0x50) != 0) {
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = (longlong *)0x0;
        FUN_143013fe0(&local_70,*(longlong *)(param_1 + 0x50),local_4c,param_2);
      }
      iVar3 = (int)local_68;
      plVar11 = (longlong *)(longlong)(int)local_68;
      plVar9 = (longlong *)0x0;
      if ((int)local_68 < 1) goto LAB_140e5f461;
      if ((int)local_68 < 1) {
        iVar13 = 1 - (int)local_68;
        iVar3 = (int)local_68 + iVar13;
        local_68 = CONCAT44(local_68._4_4_,iVar3);
        if (local_68._4_4_ < iVar3) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(&local_70);
        }
        plVar9 = local_70 + (longlong)plVar11 * 0xc;
        if (iVar13 != 0) {
          lVar4 = (longlong)plVar9 + 0x44;
          do {
            *(undefined8 *)(lVar4 + -0x24) = 0;
            *(undefined8 *)(lVar4 + -0x1c) = 0;
            *(undefined1 *)(lVar4 + -0x14) = 0;
            *(undefined8 *)(lVar4 + -0xc) = 0;
            *(undefined8 *)(lVar4 + -4) = 0;
            *(undefined8 *)(lVar4 + 4) = 0;
            *(undefined8 *)(lVar4 + 0xc) = 0;
            _guard_xfg_dispatch_icall_nop(plVar9,0,0x60);
            plVar9 = plVar9 + 0xc;
            *(undefined2 *)(lVar4 + 0x14) = 1;
            lVar4 = lVar4 + 0x60;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
      else if ((1 < (int)local_68) && (iVar13 = (int)local_68 + -1, iVar13 != 0)) {
        plVar9 = local_70 + 0x13;
        iVar8 = iVar13;
        do {
          if (plVar9[2] != 0) {
            FMemory::Free();
          }
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar9 + -3);
          plVar9 = plVar9 + 0xc;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar8 = ((int)local_68 - iVar13) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_70 + 0xc,local_70 + (longlong)iVar3 * 0xc,(longlong)iVar8 * 0x60);
        }
        local_68 = CONCAT44(local_68._4_4_,(int)local_68 - iVar13);
        TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(&local_70);
      }
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      uVar5 = (**(code **)(*param_2 + 0x148))(param_2);
      FUN_143018ff0(&local_70,uVar5,&local_60,0);
      if ((((0 < (int)local_58) && (plVar7 = (longlong *)*local_60, plVar7 != (longlong *)0x0)) &&
          (local_78 != '\0')) &&
         ((*local_70 != 0 && (lVar4 = (**(code **)(plVar12[0x1b0] + 0x18))(), lVar4 != 0)))) {
        local_80 = 0;
        local_88 = 0;
        local_90 = 1;
        local_98 = local_98 & 0xffffffffffffff00;
        local_a0 = 0;
        local_a8 = (longlong *)CONCAT44(local_a8._4_4_,1);
        FUN_142fe3d60(lVar4,local_50,*(undefined8 *)(*local_70 + 0x1d8),plVar7);
      }
      if (local_60 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
    plVar11 = (longlong *)(local_68 & 0xffffffff);
    plVar9 = plVar7;
  }
LAB_140e5f461:
  if ((int)plVar11 != 0) {
    plVar7 = local_70 + 7;
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar7 + -3);
      plVar7 = plVar7 + 0xc;
      uVar10 = (int)plVar11 - 1;
      plVar11 = (longlong *)(ulonglong)uVar10;
    } while (uVar10 != 0);
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free();
  }
  return plVar9;
}



// FUNCTION 140e5f4f0 FUN_140e5f4f0 body=392 status=ok
// SIG undefined FUN_140e5f4f0(void)

longlong FUN_140e5f4f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  cVar2 = FUN_143003610(param_2);
  if ((cVar2 != '\0') && (lVar3 != 0)) {
    uVar4 = FUN_142fdea10(local_68,param_2);
    plVar5 = (longlong *)FUN_14301a2a0(lVar3,uVar4,&DAT_1468b5b70,0);
    if (local_20 != 0) {
      FMemory::Free();
    }
    if (local_30 != 0) {
      FMemory::Free();
    }
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (local_48);
    if ((plVar5 != (longlong *)0x0) && (lVar3 = plVar5[0x23], lVar3 != 0)) {
      if (param_3 != 0) {
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(param_3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(param_3 + 0x90) * 8) != param_3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          FUN_142227350(lVar3,0,1);
          return 0;
        }
      }
      FUN_14223ef90(lVar3,0);
      FUN_14223c460(lVar3,0);
      (**(code **)(*plVar5 + 0x468))(plVar5,param_2,0,0);
      FUN_14222b9f0(lVar3,&DAT_1468b5b70,0,0);
      FUN_140e442f0(param_1 + 0x465,lVar3);
      if (param_1[0x455] == 0) {
        return lVar3;
      }
      lVar6 = FUN_140e822b0();
      if (lVar6 != 0) {
        FUN_1411f77f0(lVar6,lVar3);
        return lVar3;
      }
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140e5f680 FUN_140e5f680 body=410 status=ok
// SIG undefined FUN_140e5f680(void)

longlong FUN_140e5f680(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_88 [32];
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    plVar4 = (longlong *)FUN_14301a2a0(lVar3,param_2,&DAT_1468b5b70,0);
    lVar3 = 0;
    if ((plVar4 != (longlong *)0x0) && (lVar1 = plVar4[0x23], lVar1 != 0)) {
      if (param_3 != 0) {
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(param_3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(param_3 + 0x90) * 8) != param_3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          FUN_142227350(lVar1,0,1);
          goto LAB_140e5f7f3;
        }
      }
      FUN_14223ef90(lVar1);
      FUN_14223c460(lVar1);
      _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
      FUN_143019ca0(lVar1,plVar4,param_2,local_88);
      (**(code **)(*plVar4 + 0x468))(plVar4,local_88,0,0);
      FUN_14222b9f0(lVar1,&DAT_1468b5b70,0,0);
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      lVar3 = lVar1;
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
  }
LAB_140e5f7f3:
  FUN_140e442f0(param_1 + 0x465,lVar3);
  return lVar3;
}



// FUNCTION 140e5f820 FUN_140e5f820 body=195 status=ok
// SIG undefined FUN_140e5f820(void)

undefined8 FUN_140e5f820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
  FUN_142fde710(local_98,param_2);
  FUN_143001780(local_78,local_98);
  if (local_90 != 0) {
    FMemory::Free();
  }
  uVar1 = FUN_140e5f4f0(param_1,local_78,param_3);
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
  return uVar1;
}



// FUNCTION 140e5f8f0 FUN_140e5f8f0 body=626 status=ok
// SIG undefined FUN_140e5f8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e5f8f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  int local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    local_c8 = 1;
    FUN_140e1df50(*(longlong *)(param_1 + 0x250),0,DAT_146870870,1);
    local_a8[0] = DAT_146870870;
    FUN_142dafbc0(param_1 + 0xd0,local_a8);
    FUN_140e5a1d0(param_1,1);
    fVar4 = (float)FUN_140e58fd0(param_1,DAT_146870118);
    if (fVar4 <= 0.01) {
      fVar4 = 0.01;
    }
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar1 == (longlong *)0x0) {
      if (((local_b0 != 0) && (local_b8 != (longlong *)0x0)) &&
         ((**(code **)(*local_b8 + 0x28))(local_b8,0), local_b8 != (longlong *)0x0)) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
    }
    else {
      plVar1[1] = param_1;
      *plVar1 = (longlong)&DAT_143f3ed00;
      plVar1[2] = (longlong)&LAB_140e566e0;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[4] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
      TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
      CreateCopy(plVar1,&local_b8);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x250));
    local_98 = 0;
    local_90 = 0;
    if ((local_b0 != 0) && (local_b8 != (longlong *)0x0)) {
      (**(code **)(*local_b8 + 0x30))(local_b8,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0x1a0,&local_98,fVar4);
    if (local_38 != 0) {
      plVar1 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar1 = local_48;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (local_b0 != 0) {
      if (local_b8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_b8 + 0x28))(local_b8,0);
      if (local_b8 != (longlong *)0x0) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
      local_b0 = 0;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return;
}



// FUNCTION 140e5fb70 FUN_140e5fb70 body=582 status=ok
// SIG undefined FUN_140e5fb70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e5fb70(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (((lVar4 != 0) && (*(char *)((longlong)param_1 + 0x73a) != '\x05')) &&
     ((*(byte *)(param_1 + 0xe7) & 0x40) == 0)) {
    plVar5 = (longlong *)param_1[0xdf];
    plVar7 = plVar5 + (longlong)(int)param_1[0xe0] * 0xc;
    for (; plVar5 != plVar7; plVar5 = plVar5 + 0xc) {
      plVar3 = (longlong *)*plVar5;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x310))(plVar3,1);
      }
    }
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar4 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
    }
    fVar1 = *(float *)(param_1 + 0xe8);
    fVar2 = *(float *)((longlong)param_1 + 0x73c);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_140e58b60;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar4;
      *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar6,param_1 + 0xe9,&local_98,fVar1 + fVar2);
    if (local_38 != 0) {
      plVar7 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar7 = local_48;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar4 = FMemory::Realloc(plVar5,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 140e5fdc0 FUN_140e5fdc0 body=336 status=ok
// SIG undefined FUN_140e5fdc0(void)

longlong FUN_140e5fdc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  if (((param_1 == 0) ||
      (plVar3 = (longlong *)FUN_14301a2a0(param_1,param_2,&DAT_1468b5b70,0),
      plVar3 == (longlong *)0x0)) || (lVar1 = plVar3[0x23], lVar1 == 0)) {
    return 0;
  }
  if (param_3 != 0) {
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(param_3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(param_3 + 0x90) * 8
         ) != param_3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      FUN_142227350(lVar1,0,1);
      return 0;
    }
  }
  FUN_14223ef90(lVar1);
  FUN_14223c460(lVar1);
  _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
  FUN_143019ca0(lVar1,plVar3,param_2,local_78);
  (**(code **)(*plVar3 + 0x468))(plVar3,local_78,0,0);
  FUN_14222b9f0(lVar1,&DAT_1468b5b70,0,0);
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
    return lVar1;
  }
  return lVar1;
}



// FUNCTION 140e5ff10 FUN_140e5ff10 body=28 status=ok
// SIG undefined FUN_140e5ff10(void)

void FUN_140e5ff10(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  return;
}



// FUNCTION 140e5ff30 FUN_140e5ff30 body=265 status=ok
// SIG undefined FUN_140e5ff30(void)

void FUN_140e5ff30(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uVar3 = FUN_1422406d0();
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x168);
    if (lVar1 == 0) {
      uVar3 = (undefined4)DAT_1468b5da0;
      uVar6 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_40 = DAT_1468b5da8;
    }
    else {
      local_28 = *(float *)(lVar1 + 0x210);
      fStack_24 = *(float *)(lVar1 + 0x214);
      fStack_20 = *(float *)(lVar1 + 0x218);
      fStack_1c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_24);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_28);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
      iVar4 = movmskps(uVar3,auVar2);
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = local_28;
        *(float *)(lVar1 + 0x254) = fStack_24;
        *(float *)(lVar1 + 600) = fStack_20;
        *(float *)(lVar1 + 0x25c) = fStack_1c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_28,&local_38);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      uVar3 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_40 = *(undefined4 *)(lVar1 + 0x268);
    }
    local_48 = CONCAT44(uVar6,uVar3);
    local_38 = local_48;
    local_30 = local_40;
    FUN_142db9830(param_1 + 0x478,param_2,&local_48);
    local_38 = local_48;
    local_30 = local_40;
    AActor::SetActorRotation(*(undefined8 *)(param_1 + 0x6f0),&local_38,0);
  }
  return;
}



// FUNCTION 140e60040 FUN_140e60040 body=1786 status=ok
// SIG undefined FUN_140e60040(void)

void FUN_140e60040(longlong param_1,float param_2)

{
  float *pfVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined8 local_res8;
  float local_88;
  float local_84;
  float local_80;
  undefined1 local_78 [96];
  
  if (*(longlong *)(param_1 + 0x250) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x250) + 0x2c70);
  if ((plVar3 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar3 + 0x768))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FUN_140e4ff00(param_1,&local_res8,&local_88);
    fVar12 = (float)local_res8;
    fVar13 = local_res8._4_4_;
    if (0.0 < *(float *)(param_1 + 0x10)) {
      fVar15 = (float)local_res8 - *(float *)(param_1 + 0x1e0);
      fVar16 = local_res8._4_4_ - *(float *)(param_1 + 0x1e4);
      if (0.001 < SQRT(fVar16 * fVar16 + fVar15 * fVar15)) {
        fVar13 = *(float *)(param_1 + 0x10) * param_2;
        if (0.0 <= fVar13) {
          if (1.0 <= fVar13) {
            fVar13 = 1.0;
          }
        }
        else {
          fVar13 = 0.0;
        }
        fVar12 = fVar15 * fVar13;
        if (fVar12 == 0.0) {
          fVar15 = (fVar16 * fVar13) / fVar16;
        }
        else {
          fVar15 = fVar12 / fVar15;
        }
        fVar12 = *(float *)(param_1 + 0x1e0) + fVar12;
        fVar13 = *(float *)(param_1 + 0x1e4) + fVar16 * fVar13;
      }
      else {
        fVar15 = -1.0;
      }
    }
    else {
      fVar15 = 1.0;
    }
    *(float *)(param_1 + 0x1e0) = fVar12;
    *(float *)(param_1 + 0x1e4) = fVar13;
    pfVar1 = (float *)(param_1 + 0x1e8);
    if (fVar15 != -1.0) {
      *pfVar1 = (local_88 - *pfVar1) * fVar15 + *pfVar1;
      *(float *)(param_1 + 0x1ec) =
           (local_84 - *(float *)(param_1 + 0x1ec)) * fVar15 + *(float *)(param_1 + 0x1ec);
      *(float *)(param_1 + 0x1f0) =
           (local_80 - *(float *)(param_1 + 0x1f0)) * fVar15 + *(float *)(param_1 + 0x1f0);
    }
    else {
      puVar7 = (undefined8 *)
               FMath::RInterpConstantTo
                         (local_78,pfVar1,&local_88,param_2,*(undefined4 *)(param_1 + 0x14));
      *(undefined8 *)pfVar1 = *puVar7;
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(puVar7 + 1);
    }
    lVar8 = *(longlong *)(param_1 + 0x28);
    if (lVar8 != 0) {
      if ((((*(longlong *)(lVar8 + 0x7f8) == DAT_146b479a8) ||
           (*(longlong *)(lVar8 + 0x7f8) == DAT_146b479b0)) || (*(char *)(param_1 + 0x171) != '\0'))
         || (*(char *)(param_1 + 0x168) != '\0')) {
        bVar11 = false;
LAB_140e602de:
        *(undefined4 *)(param_1 + 0x16c) = 0;
      }
      else {
        bVar11 = true;
        if ((fVar15 != -1.0) &&
           ((*(char *)(param_1 + 0x170) != '\0' ||
            ((bVar11 = true, *(char *)(param_1 + 0x30) != '\0' &&
             (cVar5 = FUN_140e181f0(lVar8,1), cVar5 == '\0')))))) {
          bVar11 = false;
        }
        if (!bVar11) goto LAB_140e602de;
        *(float *)(param_1 + 0x16c) = param_2 + *(float *)(param_1 + 0x16c);
      }
      cVar5 = FUN_1407c3030(param_1 + 0xd0);
      if (((cVar5 == '\0') || (!bVar11)) || (*(char *)(param_1 + 0x170) != '\0')) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
        if (((*(longlong *)(param_1 + 0x28) != 0) && (*(char *)(param_1 + 0x30) != '\0')) &&
           (cVar5 = FUN_140e181f0(*(longlong *)(param_1 + 0x28),1), cVar5 == '\0')) {
          bVar11 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x9f0) <= *(float *)(param_1 + 0x16c);
        }
      }
      FUN_140e5e2f0(param_1,bVar11,1);
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      cVar5 = FUN_1407c3030(param_1 + 0x38);
      if ((cVar5 != '\0') && (cVar5 = FUN_140e53810(param_1), cVar5 != '\0')) {
        FUN_140e48b80(param_1,1);
        FUN_140e34ad0(*(undefined8 *)(param_1 + 0x250),1);
        bVar4 = true;
        goto LAB_140e603cd;
      }
      if (*(char *)(param_1 + 0x30) == '\0') {
        return;
      }
    }
    cVar5 = FUN_140e53810(param_1);
    if (cVar5 == '\0') {
      FUN_140e48e50(param_1,1);
      FUN_140e34b90(*(undefined8 *)(param_1 + 0x250),1);
    }
  }
LAB_140e603cd:
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  if (((*(longlong *)(param_1 + 0x28) != 0) && (local_res8 = 0, *(longlong *)(param_1 + 400) != 0))
     && (0.0 < *(float *)(param_1 + 0x19c))) {
    fVar12 = *(float *)(param_1 + 0x19c) * param_2 + *(float *)(param_1 + 0x198);
    *(float *)(param_1 + 0x198) = fVar12;
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    FUN_140e37010(*(longlong *)(param_1 + 0x28),fVar12);
    fVar12 = *(float *)(param_1 + 0x198);
    if (1.0 <= fVar12) {
      plVar3 = (longlong *)(param_1 + 0x1a8);
      lVar8 = *plVar3;
      if (*(longlong *)(param_1 + 400) == lVar8) {
        iVar9 = (int)fVar12;
        fVar13 = fVar12;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar12)) {
          auVar14._4_4_ = fVar12;
          auVar14._0_4_ = fVar12;
          auVar14._8_8_ = 0;
          uVar6 = movmskps((int)lVar8,auVar14);
          fVar13 = (float)(int)(iVar9 - (uVar6 & 1));
        }
        *(float *)(param_1 + 0x198) = fVar12 - fVar13;
        FUN_140e37010(*(undefined8 *)(param_1 + 0x28));
      }
      else {
        if (lVar8 == 0) {
          lVar8 = *(longlong *)(param_1 + 0x178);
          *plVar3 = lVar8;
        }
        local_res8 = 0;
        if ((lVar8 == 0) ||
           (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x778))(), cVar5 == '\0')) {
          *(undefined4 *)(param_1 + 0x19c) = 0;
          *plVar3 = 0;
          *(undefined8 *)(param_1 + 400) = 0;
          local_res8 = 0;
        }
        else {
          if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x178)) {
LAB_140e60512:
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x180,plVar3);
          }
          else {
            plVar10 = *(longlong **)(param_1 + 0x180);
            plVar2 = plVar10 + *(int *)(param_1 + 0x188);
            if (plVar10 != plVar2) {
              do {
                if (*plVar10 == *(longlong *)(param_1 + 400)) goto LAB_140e60512;
                plVar10 = plVar10 + 1;
              } while (plVar10 != plVar2);
              FUN_140e58fd0(param_1,*plVar3);
              goto LAB_140e6054a;
            }
          }
          FUN_140e58fd0(param_1,*plVar3);
        }
      }
    }
  }
LAB_140e6054a:
  FUN_140e60f10(param_1,param_2);
  FUN_140e60780(param_1,param_2);
  if (!bVar4) {
    return;
  }
  fVar12 = *(float *)(param_1 + 0x1c8);
  fVar13 = *(float *)(param_1 + 0x1d0);
  if ((fVar12 == fVar13) && (*(float *)(param_1 + 0x1d4) == *(float *)(param_1 + 0x1cc)))
  goto LAB_140e60670;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    bVar4 = false;
    bVar11 = false;
    if (fVar13 < 0.0) {
      if (fVar12 >= 0.0) {
        bVar11 = true;
      }
    }
    else if (fVar12 < 0.0) {
      bVar4 = true;
    }
    if (0.0 < fVar13) {
      if (0.0 >= fVar12) {
        bVar11 = true;
      }
    }
    else if (0.0 < fVar12) {
      bVar4 = true;
    }
    fVar12 = *(float *)(param_1 + 0x1cc);
    if (*(float *)(param_1 + 0x1d4) < 0.0) {
      if (fVar12 >= 0.0) {
        bVar11 = true;
      }
    }
    else if (fVar12 < 0.0) {
      bVar4 = true;
    }
    if (0.0 < *(float *)(param_1 + 0x1d4)) {
      if (fVar12 <= 0.0) {
        bVar11 = true;
      }
LAB_140e60643:
      if (bVar4) goto LAB_140e60647;
    }
    else {
      if (fVar12 <= 0.0) goto LAB_140e60643;
LAB_140e60647:
      FUN_140e2f8e0(*(longlong *)(param_1 + 0x28));
    }
    if (bVar11) {
      FUN_140e2f910(*(undefined8 *)(param_1 + 0x28));
    }
  }
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x1c8);
LAB_140e60670:
  if (((*(char *)(param_1 + 0x1b0) != '\0') && (0.0 < *(float *)(param_1 + 0x1b4))) &&
     (fVar12 = *(float *)(param_1 + 0x1b4) - param_2, *(float *)(param_1 + 0x1b4) = fVar12,
     fVar12 <= 0.0)) {
    *(undefined1 *)(param_1 + 0x1b0) = 0;
  }
  if (((*(char *)(param_1 + 0x1b8) != '\0') && (0.0 < *(float *)(param_1 + 0x1bc))) &&
     (fVar12 = *(float *)(param_1 + 0x1bc) - param_2, *(float *)(param_1 + 0x1bc) = fVar12,
     fVar12 <= 0.0)) {
    *(undefined1 *)(param_1 + 0x1b8) = 0;
  }
  if (((*(char *)(param_1 + 0x1c0) != '\0') && (0.0 < *(float *)(param_1 + 0x1c4))) &&
     (param_2 = *(float *)(param_1 + 0x1c4) - param_2, *(float *)(param_1 + 0x1c4) = param_2,
     param_2 <= 0.0)) {
    *(undefined1 *)(param_1 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 140e60740 FUN_140e60740 body=51 status=ok
// SIG undefined FUN_140e60740(void)

void FUN_140e60740(longlong param_1)

{
  char cVar1;
  
  FUN_142df3800();
  FUN_140e4b2f0(param_1);
  cVar1 = FUN_142de5fa0(param_1);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x5b0) = 0;
  }
  return;
}



// FUNCTION 140e60780 FUN_140e60780 body=1931 status=ok
// SIG undefined FUN_140e60780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e60780(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar21;
  undefined1 auVar20 [16];
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
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined8 local_1a8;
  float local_1a0;
  undefined4 local_198;
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
  undefined8 local_138;
  float local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  undefined8 uStack_100;
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
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar16 = FUN_140e21e70();
    if (((lVar16 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x118) != 0)) &&
       (cVar13 = FUN_140e27710(), fVar6 = DAT_1464aa790, fVar5 = DAT_1464aa788._4_4_,
       fVar4 = (float)DAT_1464aa788, cVar13 != '\0')) {
      lVar1 = *(longlong *)(param_1 + 0x28);
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x118) + 0x168);
      if (lVar2 == 0) {
        fVar27 = 1.0;
        fVar19 = 0.0;
        fVar21 = 0.0;
        fVar26 = 0.0;
        local_1a8 = _DAT_1468b5d90;
      }
      else {
        fVar19 = *(float *)(lVar2 + 0x210);
        fVar26 = *(float *)(lVar2 + 0x214);
        fVar21 = *(float *)(lVar2 + 0x218);
        fVar27 = *(float *)(lVar2 + 0x21c);
        local_1a8 = *(undefined8 *)(lVar2 + 0x220);
      }
      uVar9 = local_1a8;
      lVar2 = *(longlong *)(lVar1 + 0x168);
      local_138 = local_1a8;
      if (lVar2 == 0) {
        local_1a8 = _DAT_1468b5d90;
        local_1a0 = DAT_1468b5d98;
      }
      else {
        local_1a8 = *(undefined8 *)(lVar2 + 0x220);
        local_1a0 = *(float *)(lVar2 + 0x228);
      }
      fVar10 = local_1a0;
      local_138._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
      fVar12 = local_138._4_4_;
      local_138._0_4_ = (float)uVar9;
      fVar11 = (float)local_138;
      local_120 = local_1a0;
      local_188 = fVar19;
      fStack_184 = fVar26;
      fStack_180 = fVar21;
      fStack_17c = fVar27;
      local_138 = uVar9;
      uVar14 = FUN_140e25050(lVar1,&local_e8);
      fVar8 = fRam0000000146870488;
      fVar7 = fRam0000000146870484;
      fVar34 = _DAT_146870480;
      fVar33 = fRam0000000146870428;
      fVar31 = fRam0000000146870424;
      fVar29 = _DAT_146870420;
      local_f8 = local_c8._0_4_;
      fStack_f4 = local_c8._4_4_;
      fStack_f0 = local_c8._8_4_;
      auVar17._4_4_ = fVar5;
      auVar17._0_4_ = fVar4;
      auVar17._8_4_ = fVar6;
      auVar17._12_4_ = 0;
      auVar17 = minps(local_c8,auVar17);
      auVar18._4_4_ = -(uint)(auVar17._4_4_ < fRam0000000146870484);
      auVar18._0_4_ = -(uint)(auVar17._0_4_ < _DAT_146870480);
      auVar18._8_4_ = -(uint)(auVar17._8_4_ < fRam0000000146870488);
      auVar18._12_4_ = -(uint)(auVar17._12_4_ < fRam000000014687048c);
      iVar15 = movmskps(uVar14,auVar18);
      if (iVar15 == 0) {
        local_d8 = local_d8 * fVar4;
        fStack_d4 = fStack_d4 * fVar5;
        fStack_d0 = fStack_d0 * fVar6;
        fStack_cc = fStack_cc * 0.0;
        local_118 = fStack_dc * fVar19 * _DAT_146870460 + local_e8 * fVar27 +
                    fStack_e0 * fVar26 * _DAT_146870450 + fStack_e4 * fVar21 * _DAT_146870440;
        fStack_114 = fStack_e0 * fVar19 * fRam0000000146870464 + fStack_e4 * fVar27 +
                     fStack_dc * fVar26 * fRam0000000146870454 +
                     local_e8 * fVar21 * fRam0000000146870444;
        fStack_110 = fStack_e4 * fVar19 * fRam0000000146870468 + fStack_e0 * fVar27 +
                     local_e8 * fVar26 * fRam0000000146870458 +
                     fStack_dc * fVar21 * fRam0000000146870448;
        fStack_10c = local_e8 * fVar19 * fRam000000014687046c + fStack_dc * fVar27 +
                     fStack_e4 * fVar26 * fRam000000014687045c +
                     fStack_e0 * fVar21 * fRam000000014687044c;
        fVar29 = fStack_d0 * fVar26 - fStack_d4 * fVar21;
        fVar31 = local_d8 * fVar21 - fStack_d0 * fVar19;
        fVar33 = fStack_d4 * fVar19 - local_d8 * fVar26;
        fVar34 = fStack_cc * fVar27 - fStack_cc * fVar27;
        fVar29 = fVar29 + fVar29;
        fVar31 = fVar31 + fVar31;
        fVar33 = fVar33 + fVar33;
        fVar34 = fVar34 + fVar34;
        local_108._4_4_ = (fVar29 * fVar21 - fVar33 * fVar19) + fVar31 * fVar27 + fStack_d4 + fVar12
        ;
        local_108._0_4_ = (fVar33 * fVar26 - fVar31 * fVar21) + fVar29 * fVar27 + local_d8 + fVar11;
        uStack_100._0_4_ =
             (fVar31 * fVar19 - fVar29 * fVar26) + fVar33 * fVar27 + fStack_d0 + fVar10;
        uStack_100._4_4_ = (fVar34 * fVar27 - fVar34 * fVar27) + fVar34 * fVar27 + fStack_cc + 0.0;
      }
      else {
        fVar22 = fVar26 + fVar26;
        fVar24 = fVar21 + fVar21;
        fVar25 = fVar19 * (fVar19 + fVar19);
        fVar23 = (fVar19 + fVar19) * fVar27;
        fVar41 = (fVar24 * fVar27 + fVar22 * fVar19) * fVar4;
        fVar42 = (fVar23 + fVar24 * fVar26) * fVar5;
        fVar43 = (fVar22 * fVar27 + fVar24 * fVar19) * fVar6;
        fVar28 = fVar5 * (fVar22 * fVar19 - fVar24 * fVar27);
        fVar30 = fVar6 * (fVar24 * fVar26 - fVar23);
        fVar32 = fVar4 * (fVar24 * fVar19 - fVar22 * fVar27);
        fVar19 = (float)((uint)((_DAT_146870420 - (fVar21 * fVar24 + fVar26 * fVar22)) * fVar4) &
                        _DAT_146870430);
        fVar21 = (float)((uint)((fRam0000000146870424 - (fVar21 * fVar24 + fVar25)) * fVar5) &
                        uRam0000000146870434);
        fVar22 = (float)((uint)((fRam0000000146870428 - (fVar26 * fVar22 + fVar25)) * fVar6) &
                        uRam0000000146870438);
        fVar24 = (float)((uint)((fRam000000014687042c - (fVar25 + fVar25)) * 0.0) &
                        uRam000000014687043c);
        fVar23 = fStack_e4 + fStack_e4;
        fVar27 = fStack_e0 + fStack_e0;
        fVar25 = local_e8 * (local_e8 + local_e8);
        fVar26 = (local_e8 + local_e8) * fStack_dc;
        fVar38 = (fVar27 * fStack_dc + fVar23 * local_e8) * local_f8;
        fVar39 = (fVar26 + fVar27 * fStack_e4) * fStack_f4;
        fVar40 = (fVar23 * fStack_dc + fVar27 * local_e8) * fStack_f0;
        fVar35 = fStack_f4 * (fVar23 * local_e8 - fVar27 * fStack_dc);
        fVar36 = fStack_f0 * (fVar27 * fStack_e4 - fVar26);
        fVar37 = local_f8 * (fVar27 * local_e8 - fVar23 * fStack_dc);
        fVar26 = (float)((uint)((_DAT_146870420 - (fStack_e0 * fVar27 + fStack_e4 * fVar23)) *
                               local_f8) & _DAT_146870430);
        fVar27 = (float)((uint)((fRam0000000146870424 - (fStack_e0 * fVar27 + fVar25)) * fStack_f4)
                        & uRam0000000146870434);
        fVar23 = (float)((uint)((fRam0000000146870428 - (fStack_e4 * fVar23 + fVar25)) * fStack_f0)
                        & uRam0000000146870438);
        fVar25 = (float)((uint)((fRam000000014687042c - (fVar25 + fVar25)) * local_c8._12_4_) &
                        uRam000000014687043c);
        local_178 = fVar38 * fVar28 + fVar26 * fVar19 + fVar37 * fVar43 + fVar25 * fVar11;
        fStack_174 = fVar38 * fVar21 + fVar26 * fVar41 + fVar37 * fVar30 + fVar25 * fVar12;
        fStack_170 = fVar38 * fVar42 + fVar26 * fVar32 + fVar37 * fVar22 + fVar25 * fVar10;
        fStack_16c = fVar38 * fVar24 + fVar26 * fVar24 + fVar37 * fVar24 +
                     fVar25 * fRam000000014687042c;
        local_168 = fVar27 * fVar28 + fVar35 * fVar19 + fVar39 * fVar43 + fVar25 * fVar11;
        fStack_164 = fVar27 * fVar21 + fVar35 * fVar41 + fVar39 * fVar30 + fVar25 * fVar12;
        fStack_160 = fVar27 * fVar42 + fVar35 * fVar32 + fVar39 * fVar22 + fVar25 * fVar10;
        fStack_15c = fVar27 * fVar24 + fVar35 * fVar24 + fVar39 * fVar24 +
                     fVar25 * fRam000000014687042c;
        local_158 = fVar36 * fVar28 + fVar40 * fVar19 + fVar23 * fVar43 + fVar25 * fVar11;
        fStack_154 = fVar36 * fVar21 + fVar40 * fVar41 + fVar23 * fVar30 + fVar25 * fVar12;
        fStack_150 = fVar36 * fVar42 + fVar40 * fVar32 + fVar23 * fVar22 + fVar25 * fVar10;
        fStack_14c = fVar36 * fVar24 + fVar40 * fVar24 + fVar23 * fVar24 +
                     fVar25 * fRam000000014687042c;
        local_148 = fStack_d4 * fVar28 + local_d8 * fVar19 + fStack_d0 * fVar43 +
                    fRam000000014687042c * fVar11;
        fStack_144 = fStack_d4 * fVar21 + local_d8 * fVar41 + fStack_d0 * fVar30 +
                     fRam000000014687042c * fVar12;
        fStack_140 = fStack_d4 * fVar42 + local_d8 * fVar32 + fStack_d0 * fVar22 +
                     fRam000000014687042c * fVar10;
        fStack_13c = fStack_d4 * fVar24 + local_d8 * fVar24 + fStack_d0 * fVar24 +
                     fRam000000014687042c * fRam000000014687042c;
        FMatrix::RemoveScaling(&local_178);
        fVar19 = (float)(-(uint)(fVar34 <= local_f8 * fVar4) & (_DAT_146870470 ^ (uint)fVar29) ^
                        _DAT_146870470);
        fVar26 = (float)(-(uint)(fVar7 <= fStack_f4 * fVar5) & (uRam0000000146870474 ^ (uint)fVar31)
                        ^ uRam0000000146870474);
        fVar21 = (float)(-(uint)(fVar8 <= fStack_f0 * fVar6) & (uRam0000000146870478 ^ (uint)fVar33)
                        ^ uRam0000000146870478);
        local_178 = local_178 * fVar19;
        fStack_174 = fStack_174 * fVar19;
        fStack_170 = fStack_170 * fVar19;
        fStack_164 = fStack_164 * fVar26;
        fStack_160 = fStack_160 * fVar26;
        local_168 = local_168 * fVar26;
        fStack_154 = fStack_154 * fVar21;
        fStack_150 = fStack_150 * fVar21;
        local_158 = local_158 * fVar21;
        FQuat::FQuat(&local_188,&local_178);
        local_198 = 0x322bcc77;
        auVar20._0_4_ = local_188 * local_188 + fStack_180 * fStack_180;
        auVar20._4_4_ = fStack_184 * fStack_184 + fStack_17c * fStack_17c;
        auVar20._8_4_ = fStack_180 * fStack_180 + local_188 * local_188;
        auVar20._12_4_ = fStack_17c * fStack_17c + fStack_184 * fStack_184;
        fVar29 = auVar20._4_4_ + auVar20._0_4_;
        fVar31 = auVar20._8_4_ + auVar20._4_4_;
        fVar33 = auVar20._12_4_ + auVar20._8_4_;
        fVar34 = auVar20._0_4_ + auVar20._12_4_;
        auVar3._4_4_ = fVar31;
        auVar3._0_4_ = fVar29;
        auVar3._8_4_ = fVar33;
        auVar3._12_4_ = fVar34;
        auVar17 = rsqrtps(auVar20,auVar3);
        fVar19 = auVar17._0_4_;
        fVar26 = auVar17._4_4_;
        fVar21 = auVar17._8_4_;
        fVar27 = auVar17._12_4_;
        fVar19 = (_DAT_146870410 - fVar19 * fVar19 * fVar29 * _DAT_146870410) * fVar19 + fVar19;
        fVar26 = (fRam0000000146870414 - fVar26 * fVar26 * fVar31 * fRam0000000146870414) * fVar26 +
                 fVar26;
        fVar21 = (fRam0000000146870418 - fVar21 * fVar21 * fVar33 * fRam0000000146870418) * fVar21 +
                 fVar21;
        fVar27 = (fRam000000014687041c - fVar27 * fVar27 * fVar34 * fRam000000014687041c) * fVar27 +
                 fVar27;
        local_108._4_4_ = fStack_144;
        local_108._0_4_ = local_148;
        uStack_100._0_4_ = fStack_140;
        local_118 = (float)(((uint)(((_DAT_146870410 - fVar19 * fVar19 * fVar29 * _DAT_146870410) *
                                     fVar19 + fVar19) * local_188) ^ _DAT_146870400) &
                            -(uint)(1e-08 <= fVar29) ^ _DAT_146870400);
        fStack_114 = (float)(((uint)(((fRam0000000146870414 -
                                      fVar26 * fVar26 * fVar31 * fRam0000000146870414) * fVar26 +
                                     fVar26) * fStack_184) ^ uRam0000000146870404) &
                             -(uint)(1e-08 <= fVar31) ^ uRam0000000146870404);
        fStack_110 = (float)(((uint)(((fRam0000000146870418 -
                                      fVar21 * fVar21 * fVar33 * fRam0000000146870418) * fVar21 +
                                     fVar21) * fStack_180) ^ uRam0000000146870408) &
                             -(uint)(1e-08 <= fVar33) ^ uRam0000000146870408);
        fStack_10c = (float)(((uint)(((fRam000000014687041c -
                                      fVar27 * fVar27 * fVar34 * fRam000000014687041c) * fVar27 +
                                     fVar27) * fStack_17c) ^ uRam000000014687040c) &
                             -(uint)(1e-08 <= fVar34) ^ uRam000000014687040c);
        uStack_100._4_4_ = 0;
      }
      fStack_ec = local_c8._12_4_ * 0.0;
      fStack_f0 = fStack_f0 * fVar6;
      fStack_f4 = fStack_f4 * fVar5;
      local_f8 = local_f8 * fVar4;
      local_1b8 = 0;
      FUN_142399d60(lVar16,&local_118,0,0);
      *(ulonglong *)(param_1 + 0x220) = CONCAT44(fStack_114,local_118);
      *(ulonglong *)(param_1 + 0x228) = CONCAT44(fStack_10c,fStack_110);
      *(ulonglong *)(param_1 + 0x240) = CONCAT44(fStack_f4,local_f8);
      *(ulonglong *)(param_1 + 0x248) = CONCAT44(fStack_ec,fStack_f0);
      *(undefined1 (*) [8])(param_1 + 0x230) = local_108;
      *(undefined8 *)(param_1 + 0x238) = uStack_100;
    }
    lVar16 = FUN_140e21080(*(undefined8 *)(param_1 + 0x28));
    if ((lVar16 != 0) && (cVar13 = FUN_140e27160(*(undefined8 *)(param_1 + 0x28)), cVar13 != '\0'))
    {
      local_1b8 = 0;
      FUN_142399d60(lVar16,param_1 + 0x220,0,0);
    }
  }
  return;
}



// FUNCTION 140e60f10 FUN_140e60f10 body=954 status=ok
// SIG undefined FUN_140e60f10(void)

void FUN_140e60f10(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong lVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_res18 [2];
  int local_res20 [2];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  undefined8 local_44;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar10 = *(longlong *)(DAT_146b33f38 + 0xd0);
  if (lVar10 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(longlong **)(param_1 + 0x250) == (longlong *)0x0) {
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x670))();
    if (lVar6 == 0) {
LAB_140e60fc5:
      lVar6 = 0;
    }
    else {
      lVar7 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140e60fc5;
    }
    lVar7 = *(longlong *)(param_1 + 0x250);
  }
  lVar14 = 0;
  if ((((lVar7 == 0) || (*(longlong **)(lVar7 + 0x2c70) == (longlong *)0x0)) ||
      (cVar4 = (**(code **)(**(longlong **)(lVar7 + 0x2c70) + 0x768))(), cVar4 == '\0')) ||
     (lVar6 == 0)) goto LAB_140e611c7;
  cVar4 = FUN_142dcfc60(lVar6);
  if (cVar4 == '\0') {
LAB_140e61042:
    lVar7 = 0x280;
  }
  else if (cVar4 == '\x01') {
    lVar7 = 0x2f0;
  }
  else if (cVar4 == '\x02') {
    lVar7 = 0x360;
  }
  else {
    if (cVar4 != '\x03') goto LAB_140e61042;
    lVar7 = 0x3d0;
  }
  fVar17 = *(float *)(*(longlong *)(param_1 + 0x28) + 0xc28);
  puVar8 = (undefined8 *)FUN_140e24b00(*(longlong *)(param_1 + 0x28),&local_48);
  local_60 = fVar17 + *(float *)(puVar8 + 1);
  local_68 = *puVar8;
  FUN_142dcfa90(lVar6,local_res18,local_res20);
  fVar17 = *(float *)(param_1 + 0x210);
  if ((byte)(*(char *)(param_1 + 0x1f8) - 1U) < 2) {
    fVar15 = (float)local_res18[0] * *(float *)(param_1 + 0x208);
    fVar16 = (float)local_res20[0] * *(float *)(param_1 + 0x20c);
    if (*(char *)(param_1 + 0x1f8) == '\x01') {
      lVar1 = *(longlong *)(param_1 + 0x200);
      if (lVar1 == 0) {
LAB_140e61131:
        fVar15 = *(float *)(param_1 + 0x218);
        fVar16 = *(float *)(param_1 + 0x21c);
      }
      else {
        iVar12 = *(int *)(lVar1 + 0xc);
        if (iVar12 < (int)DAT_1469e91c4) {
          uVar13 = iVar12 >> 0x1f & 0xffff;
          uVar5 = iVar12 + uVar13;
          lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                   (longlong)(int)((uVar5 & 0xffff) - uVar13) * 0x18;
        }
        if ((*(uint *)(lVar14 + 8) >> 0x1d & 1) != 0) goto LAB_140e61131;
        pfVar9 = (float *)FUN_142ef62c0(lVar1,&local_78,&DAT_1468b5d88);
        fVar15 = *pfVar9;
        fVar16 = pfVar9[1];
      }
      fVar17 = *(float *)(lVar10 + lVar7);
    }
    *(float *)(param_1 + 0x218) = fVar15;
    *(float *)(param_1 + 0x21c) = fVar16;
    cVar4 = FUN_142dc8b90(lVar6);
    if (cVar4 != '\0') {
      local_60 = local_44._4_4_ + local_50 * fVar17;
      local_68 = CONCAT44((float)local_44 + local_54 * fVar17,local_48 + local_58 * fVar17);
    }
  }
  FUN_140e36860(*(undefined8 *)(param_1 + 0x28),&local_68);
LAB_140e611c7:
  uVar11 = (undefined4)*(undefined8 *)(param_1 + 0x28);
  lVar10 = FUN_140e20310();
  if (lVar10 != 0) {
    local_78 = *(float *)(lVar10 + 0x210);
    fStack_74 = *(float *)(lVar10 + 0x214);
    fStack_70 = *(float *)(lVar10 + 0x218);
    fStack_6c = *(float *)(lVar10 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != fStack_74);
    auVar2._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != local_78);
    auVar2._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_70);
    auVar2._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_6c);
    iVar12 = movmskps(uVar11,auVar2);
    if (iVar12 != 0) {
      *(float *)(lVar10 + 0x250) = local_78;
      *(float *)(lVar10 + 0x254) = fStack_74;
      *(float *)(lVar10 + 600) = fStack_70;
      *(float *)(lVar10 + 0x25c) = fStack_6c;
      puVar8 = (undefined8 *)FQuat::Rotator(&local_78,&local_48);
      *(undefined8 *)(lVar10 + 0x260) = *puVar8;
      *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar8 + 1);
    }
    local_60 = *(float *)(lVar10 + 0x268);
    local_68 = *(undefined8 *)(lVar10 + 0x260);
    fVar17 = *(float *)(lVar10 + 0x220);
    fVar16 = *(float *)(lVar10 + 0x224);
    fVar15 = *(float *)(lVar10 + 0x228);
    local_48 = *(float *)(*(longlong *)(param_1 + 0x28) + 0xc28);
    local_44 = 0;
    pfVar9 = (float *)FRotator::RotateVector(&local_68,&local_78,&local_48);
    local_50 = fVar15 + pfVar9[2];
    local_54 = fVar16 + pfVar9[1];
    local_58 = fVar17 + *pfVar9;
    FUN_140e368b0(*(undefined8 *)(param_1 + 0x28),&local_58);
  }
  return;
}



// FUNCTION 140e612d0 FUN_140e612d0 body=290 status=ok
// SIG undefined FUN_140e612d0(void)

void FUN_140e612d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (lVar3 = *(longlong *)(param_2 + 0x848), lVar3 != 0)) {
      lVar4 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        if ((int)param_1[1] < 1) {
          bVar5 = false;
        }
        else if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
          iVar2 = _wtoi(L"");
          bVar5 = iVar2 != 0;
        }
        else {
          iVar2 = _wtoi(*(wchar_t **)*param_1);
          bVar5 = iVar2 != 0;
        }
        cVar1 = FUN_140e1d940(lVar3);
        if (cVar1 != '\0') {
          FUN_140e3c160(lVar3,bVar5,0,1);
          return;
        }
        FUN_140e1df50(lVar3,bVar5,0,0,1);
      }
    }
  }
  return;
}



// FUNCTION 140e61400 FUN_140e61400 body=22 status=ok
// SIG undefined FUN_140e61400(void)

void FUN_140e61400(longlong param_1)

{
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    FUN_1414b1e40();
    return;
  }
  return;
}



// FUNCTION 140e61420 FUN_140e61420 body=30 status=ok
// SIG undefined FUN_140e61420(void)

undefined8 * FUN_140e61420(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141796280(param_1 + 0x70);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 140e61440 FUN_140e61440 body=172 status=ok
// SIG undefined FUN_140e61440(void)

void FUN_140e61440(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    plVar1 = (longlong *)(param_1 + 0x1b8);
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    if (param_3 != plVar1) {
      if (((int)param_3[1] == 0) || (plVar2 = (longlong *)*param_3, plVar2 == (longlong *)0x0)) {
        if ((*(int *)(param_1 + 0x1c0) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar3 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar3;
          }
          *(undefined4 *)(param_1 + 0x1c0) = 0;
        }
      }
      else {
        (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
      }
    }
    FUN_1414b2030(param_1,param_2);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return;
}



// FUNCTION 140e614f0 FUN_140e614f0 body=22 status=ok
// SIG undefined FUN_140e614f0(void)

void FUN_140e614f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    FUN_1414b2070();
    return;
  }
  return;
}



// FUNCTION 140e61510 FUN_140e61510 body=22 status=ok
// SIG undefined FUN_140e61510(void)

void FUN_140e61510(longlong param_1)

{
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    FUN_1414b2100();
    return;
  }
  return;
}



// FUNCTION 140e61530 FUN_140e61530 body=22 status=ok
// SIG undefined FUN_140e61530(void)

void FUN_140e61530(longlong param_1)

{
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    FUN_1414b2140();
    return;
  }
  return;
}



// FUNCTION 140e61550 FUN_140e61550 body=22 status=ok
// SIG undefined FUN_140e61550(void)

void FUN_140e61550(longlong param_1)

{
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    FUN_1414b2180();
    return;
  }
  return;
}



// FUNCTION 140e61570 FUN_140e61570 body=123 status=ok
// SIG undefined FUN_140e61570(void)

void FUN_140e61570(longlong param_1,undefined1 param_2,longlong param_3)

{
  char cVar1;
  longlong local_res18;
  
  if ((*(longlong *)(param_1 + 0x250) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    *(undefined1 *)(param_1 + 0x170) = 0;
    if (param_3 == 0) {
      param_3 = DAT_146870860;
    }
    local_res18 = param_3;
    FUN_142dbb5d0(param_1 + 0x38,&local_res18);
    cVar1 = FUN_1407c3030(param_1 + 0x38);
    if (cVar1 == '\0') {
      FUN_140e48e50(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140e615f0 FUN_140e615f0 body=2030 status=ok
// SIG undefined FUN_140e615f0(void)

void FUN_140e615f0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  if (param_1 == 0) {
    return;
  }
  lVar9 = 0;
  lVar7 = *(longlong *)(param_1 + 0x990);
  if (lVar7 == 0) goto LAB_140e61b6d;
  lVar4 = FUN_1413ffe00();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_140e61b6d;
  lVar4 = lVar7 + 0x2c18;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x2c20)) && (*(longlong *)(lVar7 + 0x2c28) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar7 + 0x2c20) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_140e616e1;
    }
LAB_140e61717:
    lVar5 = lVar9;
  }
  else {
LAB_140e616e1:
    lVar6 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e61717;
  }
  cVar3 = FUN_140d01880(param_1,lVar5);
  if (cVar3 == '\0') {
    lVar5 = FWeakObjectPtr::Get(lVar4);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x2c20)) && (*(longlong *)(lVar7 + 0x2c28) != 0)) {
        lVar5 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar4,lVar5);
        if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 0x2c20) = DAT_1464b56f4;
        }
        lVar5 = FWeakObjectPtr::Get(lVar4);
        if (lVar5 != 0) goto LAB_140e6179e;
      }
LAB_140e617d4:
      lVar5 = lVar9;
    }
    else {
LAB_140e6179e:
      lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140e617d4;
    }
    iVar1 = *(int *)(param_1 + 0x1868);
    *(int *)(param_1 + 0x1868) = iVar1 + 1;
    if (*(int *)(param_1 + 0x186c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1860,iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x1860);
    *(longlong *)(lVar4 + (longlong)iVar1 * 0x10) = lVar5;
    *(undefined1 *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = 0;
  }
  lVar4 = lVar7 + 0x2bc8;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x2bd0)) && (*(longlong *)(lVar7 + 0x2bd8) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar7 + 0x2bd0) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_140e6188d;
    }
LAB_140e618c3:
    lVar5 = lVar9;
  }
  else {
LAB_140e6188d:
    lVar6 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e618c3;
  }
  cVar3 = FUN_140d01880(param_1,lVar5);
  if (cVar3 == '\0') {
    lVar5 = FWeakObjectPtr::Get(lVar4);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x2bd0)) && (*(longlong *)(lVar7 + 0x2bd8) != 0)) {
        lVar5 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar4,lVar5);
        if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 0x2bd0) = DAT_1464b56f4;
        }
        lVar5 = FWeakObjectPtr::Get(lVar4);
        if (lVar5 != 0) goto LAB_140e6194a;
      }
LAB_140e61980:
      lVar5 = lVar9;
    }
    else {
LAB_140e6194a:
      lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140e61980;
    }
    iVar1 = *(int *)(param_1 + 0x1868);
    *(int *)(param_1 + 0x1868) = iVar1 + 1;
    if (*(int *)(param_1 + 0x186c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1860,iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x1860);
    *(longlong *)(lVar4 + (longlong)iVar1 * 0x10) = lVar5;
    *(undefined1 *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = 0;
  }
  lVar4 = lVar7 + 0x2bf0;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x2bf8)) && (*(longlong *)(lVar7 + 0x2c00) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar7 + 0x2bf8) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_140e61a39;
    }
LAB_140e61a6f:
    lVar5 = lVar9;
  }
  else {
LAB_140e61a39:
    lVar6 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e61a6f;
  }
  cVar3 = FUN_140d01880(param_1,lVar5);
  if (cVar3 != '\0') goto LAB_140e61b6d;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x2bf8)) && (*(longlong *)(lVar7 + 0x2c00) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar7 + 0x2bf8) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_140e61af6;
    }
LAB_140e61b2c:
    lVar5 = lVar9;
  }
  else {
LAB_140e61af6:
    lVar7 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e61b2c;
  }
  iVar1 = *(int *)(param_1 + 0x1868);
  *(int *)(param_1 + 0x1868) = iVar1 + 1;
  if (*(int *)(param_1 + 0x186c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1860,iVar1);
  }
  lVar7 = *(longlong *)(param_1 + 0x1860);
  *(longlong *)(lVar7 + (longlong)iVar1 * 0x10) = lVar5;
  *(undefined1 *)(lVar7 + 8 + (longlong)iVar1 * 0x10) = 0;
LAB_140e61b6d:
  local_48 = 0;
  local_40 = 0;
  local_38 = -1;
  uVar8 = FUN_142e498a0();
  FUN_1417a5560(uVar8,&local_48,1,0x10,0);
  do {
    local_38 = local_38 + 1;
    if ((int)local_40 <= local_38) break;
  } while (*(longlong *)(local_48 + (longlong)local_38 * 8) == 0);
  do {
    if ((local_38 < 0) || ((int)local_40 <= local_38)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      if (local_48 != 0) {
        FMemory::Free();
      }
      return;
    }
    lVar7 = *(longlong *)(local_48 + (longlong)local_38 * 8);
    if (lVar7 != 0) {
      lVar9 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((*(char *)(lVar7 + 0x108) != '\0') &&
           (((*(longlong *)(lVar7 + 0x130) == 0 ||
             (*(longlong *)(param_1 + 0xa58) == *(longlong *)(lVar7 + 0x130))) &&
            (cVar3 = FUN_140d01880(param_1,lVar7), cVar3 == '\0')))) {
          iVar1 = *(int *)(param_1 + 0x1868);
          *(int *)(param_1 + 0x1868) = iVar1 + 1;
          if (*(int *)(param_1 + 0x186c) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1860,iVar1);
          }
          lVar9 = *(longlong *)(param_1 + 0x1860);
          *(longlong *)(lVar9 + (longlong)iVar1 * 0x10) = lVar7;
          *(undefined1 *)(lVar9 + 8 + (longlong)iVar1 * 0x10) = 0;
        }
      }
      else {
        lVar7 = *(longlong *)(local_48 + (longlong)local_38 * 8);
        if (lVar7 == 0) {
LAB_140e61d07:
          lVar7 = *(longlong *)(local_48 + (longlong)local_38 * 8);
          if (lVar7 != 0) {
            lVar9 = FUN_1414ecd30();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_140e61d4d;
          }
        }
        else {
          lVar9 = FUN_1414eba50();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140e61d07;
LAB_140e61d4d:
          if ((*(char *)(lVar7 + 0x108) != '\0') &&
             (cVar3 = FUN_140d01d10(param_1,lVar7), cVar3 == '\0')) {
            thunk_FUN_14145e8d0(param_1,lVar7);
            FUN_140d02900(param_1,lVar7);
          }
        }
      }
    }
    do {
      local_38 = local_38 + 1;
      if ((int)local_40 <= local_38) break;
    } while (*(longlong *)(local_48 + (longlong)local_38 * 8) == 0);
  } while( true );
}



// FUNCTION 140e61de0 FUN_140e61de0 body=101 status=ok
// SIG undefined FUN_140e61de0(void)

void FUN_140e61de0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10;
  
  local_res10 = param_2;
  cVar1 = FUN_1407c3030(param_1 + 0x278);
  FUN_142dbb5d0(param_1 + 0x278,&local_res10);
  if (cVar1 != '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x278);
    if (cVar1 == '\0') {
      FUN_1414a3020(param_1,0);
    }
  }
  return;
}



// FUNCTION 140e61e50 FUN_140e61e50 body=700 status=ok
// SIG undefined FUN_140e61e50(void)

void FUN_140e61e50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  uint local_3c;
  
  if ((param_2 != 0) && (iVar2 = *(int *)(param_1 + 0x38) + -1, -1 < iVar2)) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    lVar9 = (longlong)iVar2;
    while (*(longlong *)(lVar1 + lVar9 * 8) != param_2) {
      iVar2 = iVar2 + -1;
      lVar9 = lVar9 + -1;
      if (lVar9 < 0) {
        return;
      }
    }
    iVar10 = *(int *)(param_1 + 0x38);
    iVar4 = (iVar10 - iVar2) + -1;
    if (0 < iVar4) {
      iVar4 = 1;
    }
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)iVar2 * 8),
                 (void *)(lVar1 + (longlong)(iVar10 - iVar4) * 8),(longlong)iVar4 << 3);
      iVar10 = *(int *)(param_1 + 0x38);
    }
    *(int *)(param_1 + 0x38) = iVar10 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x30));
    FUN_140483870(param_2 + 0x3b0,param_1);
    FUN_140483870(param_2 + 0x3c8,param_1);
    plVar7 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    FUN_140e4c1e0(param_2,&local_58);
    iVar2 = 0;
    local_48 = (longlong *)0x0;
    local_3c = 0;
    plVar5 = (longlong *)
             ((ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3);
    if (local_58 + (int)local_50 < local_58) {
      plVar5 = plVar7;
    }
    plVar6 = local_58;
    plVar11 = plVar7;
    plVar12 = plVar7;
    plVar13 = plVar7;
    if (plVar5 != (longlong *)0x0) {
      do {
        lVar1 = *plVar6;
        if (lVar1 != 0) {
          FUN_142398e60(lVar1,*(uint *)(lVar1 + 0x6b8) & 0xfff9e7ff,0);
          lVar1 = *(longlong *)(lVar1 + 0x118);
          if ((lVar1 != 0) && (lVar1 != param_2)) {
            iVar2 = (int)plVar7;
            for (plVar3 = plVar12; plVar3 != plVar12 + iVar2; plVar3 = plVar3 + 1) {
              if (*plVar3 == lVar1) {
                if ((int)((longlong)plVar3 - (longlong)plVar12 >> 3) != -1) goto LAB_140e62028;
                break;
              }
            }
            local_40 = iVar2 + 1;
            if ((int)plVar13 < (int)local_40) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,plVar7);
              plVar13 = (longlong *)(ulonglong)local_3c;
              plVar12 = local_48;
            }
            plVar7 = (longlong *)(ulonglong)local_40;
            plVar12[iVar2] = lVar1;
          }
        }
LAB_140e62028:
        iVar2 = (int)plVar7;
        plVar11 = (longlong *)((longlong)plVar11 + 1);
        plVar6 = plVar6 + 1;
      } while (plVar11 != plVar5);
    }
    uVar14 = 0;
    uVar8 = (ulonglong)((longlong)(plVar12 + iVar2) + (7 - (longlong)plVar12)) >> 3;
    if (plVar12 + iVar2 < plVar12) {
      uVar8 = uVar14;
    }
    plVar5 = plVar12;
    if (uVar8 != 0) {
      do {
        if (*plVar5 != 0) {
          plVar6 = *(longlong **)(param_1 + 0x30);
          plVar7 = plVar6 + *(int *)(param_1 + 0x38);
          for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
            if (*plVar6 == *plVar5) {
              FUN_140e59fd0(param_1);
              break;
            }
          }
        }
        uVar14 = uVar14 + 1;
        plVar5 = plVar5 + 1;
      } while (uVar14 != uVar8);
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  return;
}



// FUNCTION 140e62110 FUN_140e62110 body=355 status=ok
// SIG undefined FUN_140e62110(void)

void FUN_140e62110(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong local_10;
  
  if (param_1[0xae] != 0) {
    uVar7 = (**(code **)(*param_1 + 0x670))();
    FUN_142d7f5a0(uVar7,L"player_removed");
  }
  if (((longlong *)param_1[0x97] == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*(longlong *)param_1[0x97] + 0x20))(), cVar5 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    local_18 = param_1[0x97];
    local_10 = param_1[0x98];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    uVar7 = FUN_1422312c0(param_1);
    lVar8 = FUN_14244c070(uVar7,&local_18);
    if (lVar8 == 0) {
      FUN_14271aa50(param_1);
      iVar6 = FUN_142235230(param_1);
      if ((iVar6 == 3) && (lVar8 = FUN_1422312c0(param_1), lVar8 != 0)) {
        lVar9 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_28 = param_1[0x97];
          local_20 = (longlong *)param_1[0x98];
          if (local_20 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_20 + 1) = (int)local_20[1] + 1;
            UNLOCK();
          }
          FUN_140bf3550(lVar8,&local_28);
          plVar4 = local_20;
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_20 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e62280 FUN_140e62280 body=685 status=ok
// SIG undefined FUN_140e62280(void)

void FUN_140e62280(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *in_stack_ffffffffffffffb8;
  ulonglong uVar7;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_140e48280();
  lVar3 = FUN_140e4ba60(param_1,param_3);
  if (lVar3 != 0) {
    *param_2 = param_3;
    lVar4 = FUN_140e6f140(param_1,*(undefined8 *)(lVar3 + 0x30));
    param_2[1] = lVar4;
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x218) != 0)) {
      if ((*(char *)(lVar3 + 0x78) != '\0') &&
         ((lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x4c0), lVar6 != 0 &&
          (*(longlong *)(lVar4 + 0x468) != 0)))) {
        FUN_1408e22e0(*(longlong *)(lVar4 + 0x468) + 0xeb8,lVar6 + 0xeb8);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x4c0);
        if (*(longlong *)(lVar4 + 0xa40) != 0) {
          lVar5 = FUN_1428eccf0();
          lVar4 = *(longlong *)(lVar4 + 0xa40);
          for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
            if (lVar6 == lVar5) goto LAB_140e62360;
          }
        }
        lVar4 = 0;
LAB_140e62360:
        FUN_1423b4b50(*(undefined8 *)(param_2[1] + 0x468),lVar4);
      }
      if (*(char *)(lVar3 + 0x79) != '\0') {
        lVar4 = FUN_140c46a10(*(undefined8 *)(param_1 + 0x218),0);
        if (lVar4 != 0) {
          lVar6 = FUN_14149b100();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (plVar1 = *(longlong **)(lVar4 + 0x908), plVar1 != (longlong *)0x0)) {
            in_stack_ffffffffffffffb8 = &local_28;
            local_28 = 0;
            local_14 = 0;
            local_20 = 0;
            local_18 = 0x1000000;
            (**(code **)(*plVar1 + 0x4e8))
                      (plVar1,param_2[1],*(undefined8 *)(param_2[1] + 0x468),0,
                       in_stack_ffffffffffffffb8);
            if (local_28 != 0) {
              FMemory::Free();
            }
            FUN_1414cd9f0(param_2[1],*(undefined8 *)(param_2[1] + 0x468));
          }
        }
        lVar4 = FUN_140e822b0(param_1);
        if (lVar4 != 0) {
          FUN_1411f77f0(lVar4,param_2[1]);
        }
      }
      if (((*(char *)(lVar3 + 0x68) != '\0') && (*(longlong *)(param_1 + 0x218) != 0)) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0xa18), lVar4 != 0)) {
        FUN_1422232e0(param_2[1],lVar4,&DAT_146532188,*(undefined8 *)(lVar3 + 0x70));
      }
      local_38 = *(undefined8 *)(lVar3 + 0x38);
      local_30 = *(undefined4 *)(lVar3 + 0x40);
      uVar7 = (ulonglong)in_stack_ffffffffffffffb8 & 0xffffffffffffff00;
      FUN_14223cb00(param_2[1],&local_38,0,0,uVar7);
      local_38 = *(undefined8 *)(lVar3 + 0x44);
      local_30 = *(undefined4 *)(lVar3 + 0x4c);
      FUN_14223ccb0(param_2[1],&local_38,0,0,uVar7 & 0xffffffffffffff00);
      local_30 = *(undefined4 *)(lVar3 + 0x50);
      local_38 = CONCAT44(local_30,local_30);
      local_20 = CONCAT44(local_20._4_4_,local_30);
      FUN_14223cd40(param_2[1],&local_38);
      FUN_140e44590(param_1,param_2,param_4);
    }
  }
  return;
}



// FUNCTION 140e62530 FUN_140e62530 body=1040 status=ok
// SIG undefined FUN_140e62530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e62530(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_6c8 [32];
  undefined8 local_6a8;
  undefined4 local_6a0;
  undefined8 local_698;
  undefined4 local_690;
  undefined8 local_688;
  undefined4 local_680;
  undefined1 local_678 [1560];
  longlong local_60;
  longlong local_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  plVar1 = (longlong *)param_1[0x8b];
  if (plVar1[0xa1] == 0) {
LAB_140e62595:
    if (((char)*(uint *)(param_1 + 0x588) < '\0') && ((*(uint *)(param_1 + 0x588) >> 8 & 1) == 0)) {
      cVar3 = FUN_142fd3580(param_1);
      if (cVar3 == '\0') {
        return;
      }
      if (((*(uint *)(param_1[0x8b] + 0x4cc) >> 1 & 1) == 0) ||
         (cVar3 = (**(code **)(*(longlong *)param_1[0x8b] + 0x768))(), cVar3 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return;
      }
      lVar6 = param_1[0x232];
      if (lVar6 == 0) {
        return;
      }
      lVar5 = FUN_1429d7ab0();
      lVar6 = *(longlong *)(lVar6 + 0x10);
      if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
      FUN_142fcc590(param_1[0x594],param_2,param_1 + 0x232);
      return;
    }
  }
  else {
    if (((*(uint *)((longlong)plVar1 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x768))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e62595;
  }
  (**(code **)(*param_1 + 0x7b8))(param_1,param_2);
  if ((*(uint *)(param_1 + 0x588) & 0x200) == 0) {
    return;
  }
  local_6a8 = 0;
  if (param_1[0x24] != 0) {
    local_6a8 = 0x11a;
  }
  iVar4 = FUN_142235230(param_1);
  if (iVar4 != 3) {
    return;
  }
  lVar6 = (**(code **)(*param_1 + 0x720))(param_1,local_678);
  local_6a8 = *(undefined8 *)(lVar6 + 0xc);
  local_6a0 = *(undefined4 *)(lVar6 + 0x14);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)param_1[0x8b];
  uVar7 = UAnimMontage::GetPrivateStaticClass();
  lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar7);
  if (lVar6 == 0) goto LAB_140e62837;
  pfVar8 = (float *)FUN_14307c4f0(lVar6,&local_698);
  fVar9 = *pfVar8;
  fVar10 = (float)(int)(fVar9 * 0.0027777778) * 360.0;
  if (ABS(fVar9) < ABS(fVar10)) {
    fVar10 = fVar9;
  }
  fVar9 = fVar9 - fVar10;
  if (fVar9 < 0.0) {
    fVar9 = fVar9 + 360.0;
  }
  if (fVar9 == 0.0) {
    fVar9 = pfVar8[1];
    fVar10 = (float)(int)(fVar9 * 0.0027777778) * 360.0;
    if (ABS(fVar9) < ABS(fVar10)) {
      fVar10 = fVar9;
    }
    fVar9 = fVar9 - fVar10;
    if (fVar9 < 0.0) {
      fVar9 = fVar9 + 360.0;
    }
    if (fVar9 != 0.0) goto LAB_140e62824;
    fVar9 = pfVar8[2];
    fVar10 = (float)(int)(fVar9 * 0.0027777778) * 360.0;
    if (ABS(fVar9) < ABS(fVar10)) {
      fVar10 = fVar9;
    }
    fVar9 = fVar9 - fVar10;
    if (fVar9 < 0.0) {
      fVar9 = fVar9 + 360.0;
    }
    if (fVar9 != 0.0) goto LAB_140e62824;
    bVar2 = true;
  }
  else {
LAB_140e62824:
    bVar2 = false;
  }
  if (!bVar2) {
    FUN_143088dd0(lVar6,&local_6a8);
  }
LAB_140e62837:
  fVar9 = local_6a8._4_4_ * 65536.0;
  fVar10 = (float)local_6a8 * 65536.0;
  uVar7 = (**(code **)(*param_1 + 0x720))(param_1,local_678);
  FUN_142436c50(&local_688,uVar7,param_1);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  local_690 = local_680;
  local_698 = local_688;
  (**(code **)(*param_1 + 0x720))(param_1,local_678);
  FUN_1429e2060(param_1[0x8b],&local_698,
                ((int)ROUND(fVar9 * 0.0055555557 + 0.5) >> 1) << 0x10 |
                (int)ROUND(fVar10 * 0.0055555557 + 0.5) >> 1 & 0xffffU);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) & 0xfffffdff;
  return;
}



// FUNCTION 140e62940 FUN_140e62940 body=278 status=ok
// SIG undefined FUN_140e62940(void)

void FUN_140e62940(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar8 = *(longlong *)(param_1 + 0x570);
  puVar4 = (undefined8 *)(param_1 + 0x668);
  if (lVar8 == 0) {
    local_30 = (longlong *)0x0;
    if (puVar4 == &local_38) {
      return;
    }
    *puVar4 = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x670,&local_30);
    plVar1 = local_30;
    if (local_30 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = local_30 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 != 1) {
      return;
    }
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 != 1) {
      return;
    }
    lVar8 = *local_30;
    local_10 = local_30;
  }
  else {
    local_28 = 0;
    local_20 = 0;
    uVar6 = thunk_FUN_1422ca050();
    puVar7 = (undefined8 *)FUN_1409f97d0(uVar6,local_18,lVar8,&local_28);
    if (puVar4 != puVar7) {
      *puVar4 = *puVar7;
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x670,puVar7 + 1);
    }
    if (local_10 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_10 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 != 1) {
      return;
    }
    (**(code **)*local_10)(local_10);
    LOCK();
    piVar2 = (int *)((longlong)local_10 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 != 1) {
      return;
    }
    lVar8 = *local_10;
  }
  (**(code **)(lVar8 + 8))(local_10,1);
  return;
}



// FUNCTION 140e62a60 FUN_140e62a60 body=1547 status=ok
// SIG undefined FUN_140e62a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e62a60(longlong *param_1,longlong param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_1c8 [32];
  float local_1a8;
  uint local_1a0;
  undefined1 local_198;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  longlong *local_160;
  longlong *local_150;
  undefined1 local_138 [32];
  longlong local_118;
  longlong local_108;
  longlong local_f8;
  longlong local_e8;
  longlong *local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 == 0) {
    return;
  }
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar4 = UWorld::IsGameWorld(uVar6);
  if (cVar4 == '\0') {
    return;
  }
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar5 + 400) == 0) {
    return;
  }
  if (*(longlong *)(*(longlong *)(lVar5 + 400) + 0xa0) == 0) {
    return;
  }
  lVar5 = param_1[0x46b];
  if (lVar5 == param_2) {
    return;
  }
  if (lVar5 != 0) {
    lVar7 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140483870(lVar5 + 0x938);
    }
  }
  lVar5 = 0;
  param_1[0x46b] = param_2;
  if (param_2 != 0) {
    lVar7 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uStack_180 = 0;
      local_188 = FUN_140e57b00;
      plVar11 = (longlong *)(param_2 + 0x938);
      plVar8 = (longlong *)FMemory::Realloc(0);
      local_c8 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_188;
        *(undefined4 *)((longlong)plVar8 + 0x14) = local_188._4_4_;
        *(undefined4 *)(plVar8 + 3) = uStack_180;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_17c;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar7;
        *plVar8 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
        (**(code **)(*plVar8 + 0x20))(plVar8);
        iVar2 = *(int *)(param_2 + 0x940);
        *(int *)(param_2 + 0x940) = iVar2 + 1;
        if (*(int *)(param_2 + 0x944) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11);
        }
        lVar7 = *plVar11;
        *(longlong **)(lVar7 + (longlong)iVar2 * 0x10) = plVar8;
        *(undefined4 *)(lVar7 + 8 + (longlong)iVar2 * 0x10) = 3;
      }
    }
  }
  _guard_xfg_dispatch_icall_nop(local_138,0,0x68);
  plVar8 = (longlong *)param_1[0x46b];
  if (plVar8 != (longlong *)0x0) {
    local_188 = (code *)FUN_14301f8f0();
    lVar7 = (**(code **)(*plVar8 + 0x628))(plVar8,local_188);
    if (lVar7 != 0) {
      FUN_142ff3000(lVar7,local_138);
    }
  }
  if (param_1[0x470] != 0) {
    FUN_142227350(param_1[0x470],0,1);
    param_1[0x470] = 0;
  }
  uVar6 = FUN_1430b3b80();
  lVar7 = FUN_140e5f4f0(param_1,local_138,uVar6);
  if (lVar7 != 0) {
    lVar9 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140e62d1a;
  }
  lVar7 = lVar5;
LAB_140e62d1a:
  param_1[0x470] = lVar7;
  if (lVar7 != 0) {
    lVar9 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar9 = param_1[0x46b], lVar9 != 0)) {
      lVar10 = FUN_14149b100();
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
        FUN_14127e590(lVar7,*(undefined8 *)(lVar9 + 0x930));
      }
    }
  }
  if (param_3 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x2361) = 1;
    if ((char)param_1[0x46c] != '\x01') {
      if (param_1[0x46e] == 0) {
        FUN_140e66950(param_1);
      }
      else {
        *(undefined1 *)(param_1 + 0x46c) = 1;
        param_1[0x46f] = param_1[0x46e];
        fVar12 = (float)FUN_14307c4a0();
        local_198 = 0;
        local_1a0 = local_1a0 & 0xffffff00;
        local_1a8 = fVar12;
        (**(code **)(*(longlong *)param_1[0x46e] + 0x990))
                  ((longlong *)param_1[0x46e],&local_168,4,0x3f800000);
        if (fVar12 <= 0.0) {
          if (local_168 != (longlong *)0x0) {
            fVar12 = (float)(**(code **)(*local_168 + 0x58))();
          }
          if (fVar12 <= 0.01) {
            fVar12 = 0.01;
          }
        }
        uStack_170 = 0;
        local_178 = FUN_140e66950;
        lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar7 + 400) != 0) {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 400) + 0xa0);
        }
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        local_150 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar8 + 1,param_1);
          *(undefined4 *)(plVar8 + 2) = (undefined4)local_178;
          *(undefined4 *)((longlong)plVar8 + 0x14) = local_178._4_4_;
          *(undefined4 *)(plVar8 + 3) = uStack_170;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_16c;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar7;
          *plVar8 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_b8 = 0;
        local_b0 = 0;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x30))(plVar8,&local_b8);
        }
        FWeakObjectPtr::operator=(local_a8,0);
        local_1a0 = 0xbf800000;
        local_1a8 = (float)((uint)local_1a8 & 0xffffff00);
        local_a0 = 0;
        local_68 = (longlong *)0x0;
        local_58 = 0;
        local_98 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(lVar5,param_1 + 0x46d,&local_b8,fVar12);
        if (local_58 != 0) {
          plVar11 = local_88;
          if (local_68 != (longlong *)0x0) {
            plVar11 = local_68;
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11,0);
          }
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          local_150 = (longlong *)FMemory::Realloc(plVar8,0,0);
          if (local_150 != (longlong *)0x0) {
            FMemory::Free(local_150);
          }
        }
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_160 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar1 = (int *)((longlong)local_160 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_160 + 8))(local_160,1);
            }
          }
        }
      }
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x2361) = 0;
    FUN_140e66950(param_1);
    *(undefined1 *)(param_1 + 0x46c) = 0;
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e63070 FUN_140e63070 body=6382 status=ok
// SIG undefined FUN_140e63070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e63070(longlong param_1,float param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  byte bVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  undefined8 local_228;
  float local_220;
  undefined4 local_218;
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
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 local_198;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
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
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  
  *(undefined4 *)(param_1 + 0xb34) = *(undefined4 *)(param_1 + 0x5b8);
  local_1b8 = param_2;
  cVar7 = (**(code **)(**(longlong **)(param_1 + 0x950) + 0x780))();
  if ((cVar7 != '\0') &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x950) + 0x778))(), cVar7 != '\0')) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x538) + 0x4a8);
    local_220 = *(float *)(*(longlong *)(param_1 + 0x538) + 0x4b0);
    if ((0.0001 < ABS((float)uVar2)) ||
       ((local_228._4_4_ = (float)((ulonglong)uVar2 >> 0x20), 0.0001 < ABS(local_228._4_4_) ||
        (0.0001 < ABS(local_220))))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    local_228 = uVar2;
    if ((!bVar6) &&
       (fVar23 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x38),
       *(float *)(param_1 + 0xb34) <= fVar23 && fVar23 != *(float *)(param_1 + 0xb34))) {
      *(float *)(param_1 + 0xb34) = fVar23;
    }
  }
  *(ulonglong *)(param_1 + 0xb28) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(float *)(param_1 + 0xb30) = DAT_1468b5d98;
  puVar12 = (undefined8 *)FUN_140c46be0(*(undefined8 *)(param_1 + 0x950),&local_208);
  *(undefined8 *)(param_1 + 0xb10) = *puVar12;
  *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(puVar12 + 1);
  puVar12 = (undefined8 *)FUN_140c46c80(*(undefined8 *)(param_1 + 0x950),&local_208);
  pfVar1 = (float *)(param_1 + 0xb1c);
  uVar20 = 0;
  *(undefined8 *)pfVar1 = *puVar12;
  *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(puVar12 + 1);
  uVar19 = uVar20;
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    uVar19 = *(ulonglong *)(*(longlong *)(param_1 + 0xae8) + 0x2c70);
  }
  if (uVar19 == 0) {
    lVar14 = (**(code **)(**(longlong **)(param_1 + 0x950) + 0x670))();
    if (lVar14 != 0) {
      lVar16 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        uVar9 = *(undefined4 *)(lVar14 + 0xaf4);
        goto LAB_140e633f8;
      }
    }
  }
  else {
    lVar14 = *(longlong *)(uVar19 + 0xc50);
    if ((((lVar14 == 0) || (cVar7 = FUN_142dee8f0(lVar14,0), cVar7 == '\0')) ||
        (*(longlong *)(lVar14 + 0x5b0) == 0)) ||
       (lVar16 = *(longlong *)(*(longlong *)(lVar14 + 0x5b0) + 0x568), lVar16 == 0)) {
LAB_140e632c1:
      fVar23 = (float)FMath::FInterpConstantTo();
    }
    else {
      lVar13 = FUN_1430b3b80();
      if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((!bVar6) ||
          (cVar7 = FUN_140c39630(*(undefined8 *)(param_1 + 0xae8),lVar16), cVar7 == '\0')) ||
         (*(longlong *)(*(longlong *)(param_1 + 0xae8) + 0x1cd0) != 0)) goto LAB_140e632c1;
      fVar23 = (float)FUN_142ded860(lVar14,0);
      fVar23 = 1.0 - fVar23;
    }
    *(float *)(param_1 + 0xb84) = fVar23;
    lVar14 = *(longlong *)(param_1 + 0xaf8);
    fVar24 = _guard_xfg_dispatch_icall_nop(fVar23,*(float *)(lVar14 + 0xa4));
    fVar23 = *(float *)(lVar14 + 0x90);
    fVar56 = *(float *)(lVar14 + 0x94);
    *(float *)(param_1 + 0xb10) = fVar24 * *(float *)(lVar14 + 0x8c) + *(float *)(param_1 + 0xb10);
    *(float *)(param_1 + 0xb14) = fVar24 * fVar23 + *(float *)(param_1 + 0xb14);
    *(float *)(param_1 + 0xb18) = fVar24 * fVar56 + *(float *)(param_1 + 0xb18);
    lVar14 = *(longlong *)(param_1 + 0xaf8);
    fVar23 = *(float *)(lVar14 + 0x9c);
    fVar56 = *(float *)(lVar14 + 0xa0);
    *pfVar1 = fVar24 * *(float *)(lVar14 + 0x98) + *pfVar1;
    *(float *)(param_1 + 0xb20) = fVar24 * fVar23 + *(float *)(param_1 + 0xb20);
    *(float *)(param_1 + 0xb24) = fVar24 * fVar56 + *(float *)(param_1 + 0xb24);
    uVar9 = *(undefined4 *)(uVar19 + 0xaf4);
LAB_140e633f8:
    *(undefined4 *)(param_1 + 0xb70) = uVar9;
  }
  lVar14 = FUN_142cc1670(*(undefined8 *)(param_1 + 0x950));
  if (lVar14 != 0) {
    *(float *)(param_1 + 0xb30) = *(float *)(lVar14 + 600) + *(float *)(param_1 + 0xb30);
    uVar2 = *(undefined8 *)(lVar14 + 0x410);
    fVar23 = *(float *)(lVar14 + 0x418);
    *(float *)(param_1 + 0xb10) = (float)uVar2 + *(float *)(param_1 + 0xb10);
    *(float *)(param_1 + 0xb14) = (float)((ulonglong)uVar2 >> 0x20) + *(float *)(param_1 + 0xb14);
    *(float *)(param_1 + 0xb18) = fVar23 + *(float *)(param_1 + 0xb18);
    local_228 = *(undefined8 *)(lVar14 + 0x43c);
    fVar34 = (float)local_228;
    fVar36 = (float)((ulonglong)local_228 >> 0x20);
    fVar23 = *(float *)(lVar14 + 0x444);
    lVar16 = *(longlong *)(param_1 + 0xaf8);
    fVar56 = (float)((uint)_DAT_146870420 & _DAT_146870430);
    fVar24 = (float)((uint)fRam0000000146870424 & uRam0000000146870434);
    fVar57 = (float)((uint)fRam0000000146870428 & uRam0000000146870438);
    fVar58 = (float)((uint)fRam000000014687042c & uRam000000014687043c);
    local_148 = 0.0;
    fStack_144 = 0.0;
    fStack_140 = 0.0;
    fStack_13c = fRam000000014687042c;
    uVar19 = uVar20;
    uVar21 = uVar20;
    uVar22 = uVar20;
    local_220 = fVar23;
    local_1a8 = fVar56;
    fStack_1a4 = fVar24;
    fStack_1a0 = fVar57;
    fStack_19c = fVar58;
    if (0 < *(int *)(lVar16 + 0x30)) {
      do {
        iVar11 = (int)uVar22;
        if (*(char *)(param_1 + 0x962) == '\0') {
          puVar12 = (undefined8 *)(*(longlong *)(lVar16 + 0x28) + 0x2c + (longlong)iVar11 * 0x68);
        }
        else {
          puVar12 = (undefined8 *)(lVar14 + 0x2f4);
        }
        local_188 = *puVar12;
        uStack_180 = puVar12[1];
        uVar2 = puVar12[2];
        uStack_170 = puVar12[3];
        local_168 = puVar12[4];
        uStack_160 = puVar12[5];
        local_158 = puVar12[6];
        local_150 = *(undefined4 *)(puVar12 + 7);
        lVar16 = *(longlong *)(lVar16 + 0x28);
        local_108 = *(undefined8 *)(lVar16 + uVar21);
        uStack_100 = ((undefined8 *)(lVar16 + uVar21))[1];
        puVar12 = (undefined8 *)(lVar16 + 0x10 + uVar21);
        local_f8 = *puVar12;
        uStack_f0 = puVar12[1];
        local_e8 = *(undefined8 *)(lVar16 + 0x20 + uVar21);
        local_e0 = *(undefined4 *)(lVar16 + 0x28 + uVar21);
        local_178 = uVar2;
        if (*(char *)(param_1 + 0x962) != '\0') {
          local_188._4_4_ = (float)((ulonglong)local_188 >> 0x20);
          uStack_180._4_4_ = (float)((ulonglong)uStack_180 >> 0x20);
          local_178._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          fVar47 = *(float *)(lVar14 + 0x3ac);
          local_188 = CONCAT44(local_188._4_4_ * fVar47,(float)local_188 * fVar47);
          uStack_180 = CONCAT44(uStack_180._4_4_ * fVar47,(float)uStack_180 * fVar47);
          local_178._0_4_ = (float)uVar2;
          local_178 = CONCAT44(local_178._4_4_ * fVar47,(float)local_178 * fVar47);
        }
        if (*(char *)(lVar14 + 0x40c) != '\0') {
          local_188 = CONCAT44(DAT_1468b5da0._4_4_,(undefined4)DAT_1468b5da0);
          uStack_180 = CONCAT44(DAT_1468b5d90,DAT_1468b5da8);
          local_178 = CONCAT44(DAT_1468b5d98,DAT_1468b5d94);
        }
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x950) + 0x168);
        if (lVar16 == 0) {
          fVar47 = 0.0;
          fVar49 = 0.0;
          fVar52 = 0.0;
          fVar55 = fRam000000014687042c;
        }
        else {
          fVar47 = *(float *)(lVar16 + 0x210);
          fVar49 = *(float *)(lVar16 + 0x214);
          fVar52 = *(float *)(lVar16 + 0x218);
          fVar55 = *(float *)(lVar16 + 0x21c);
        }
        fVar47 = fVar47 * _DAT_1468704e0;
        fVar49 = fVar49 * fRam00000001468704e4;
        fVar52 = fVar52 * fRam00000001468704e8;
        fVar55 = fVar55 * fRam00000001468704ec;
        local_220 = *(float *)(lVar14 + 0x3a4);
        fVar41 = *(float *)(lVar14 + 0x398);
        fVar44 = *(float *)(lVar14 + 0x390);
        fVar33 = fVar41 * fVar49 -
                 (float)((ulonglong)*(undefined8 *)(lVar14 + 0x390) >> 0x20) * fVar52;
        fVar35 = fVar44 * fVar52 - fVar41 * fVar47;
        fVar37 = *(float *)(lVar14 + 0x394) * fVar47 - fVar44 * fVar49;
        fVar33 = fVar33 + fVar33;
        fVar35 = fVar35 + fVar35;
        fVar37 = fVar37 + fVar37;
        fStack_200 = (fVar35 * fVar47 - fVar33 * fVar49) + fVar55 * fVar37 + fVar41;
        local_228 = *(undefined8 *)(lVar14 + 0x39c);
        local_198 = CONCAT44((fVar33 * fVar52 - fVar37 * fVar47) +
                             fVar55 * fVar35 + *(float *)(lVar14 + 0x394),
                             (fVar37 * fVar49 - fVar35 * fVar52) + fVar55 * fVar33 + fVar44);
        fStack_190 = fStack_200;
        uVar9 = FUN_140e66180((longlong)iVar11 * 0x30 + *(longlong *)(param_1 + 0xb00),&local_108,
                              &local_188,&local_198,&local_228,param_2);
        fVar52 = fRam0000000146870428;
        fVar49 = fRam0000000146870424;
        fVar47 = _DAT_146870420;
        if (*(char *)(param_1 + 0x962) != '\0') {
          auVar25._4_4_ = fVar24;
          auVar25._0_4_ = fVar56;
          auVar25._8_4_ = fVar57;
          auVar25._12_4_ = fVar58;
          lVar16 = *(longlong *)(param_1 + 0xb00);
          local_138 = _DAT_146870480;
          fStack_134 = fRam0000000146870484;
          fStack_130 = fRam0000000146870488;
          fStack_12c = fRam000000014687048c;
          pfVar15 = (float *)(lVar16 + uVar19);
          fVar33 = *pfVar15;
          fVar35 = pfVar15[1];
          fVar37 = pfVar15[2];
          fVar32 = pfVar15[3];
          auVar30 = *(undefined1 (*) [16])(lVar16 + 0x20 + uVar19);
          fVar55 = auVar30._0_4_;
          fVar41 = auVar30._4_4_;
          fVar44 = auVar30._8_4_;
          auVar25 = minps(auVar25,auVar30);
          auVar26._4_4_ = -(uint)(auVar25._4_4_ < fRam0000000146870484);
          auVar26._0_4_ = -(uint)(auVar25._0_4_ < _DAT_146870480);
          auVar26._8_4_ = -(uint)(auVar25._8_4_ < fRam0000000146870488);
          auVar26._12_4_ = -(uint)(auVar25._12_4_ < fRam000000014687048c);
          iVar10 = movmskps(uVar9,auVar26);
          if (iVar10 == 0) {
            fVar55 = fVar55 * fVar34;
            fVar41 = fVar41 * fVar36;
            fVar44 = fVar44 * fVar23;
            fVar52 = fVar44 * fVar35 - fVar41 * fVar37;
            fVar31 = fVar55 * fVar37 - fVar44 * fVar33;
            fVar38 = fVar41 * fVar33 - fVar55 * fVar35;
            fVar52 = fVar52 + fVar52;
            fVar31 = fVar31 + fVar31;
            fVar38 = fVar38 + fVar38;
            pfVar15 = (float *)(lVar16 + 0x10 + uVar19);
            fVar47 = (fVar38 * fVar35 - fVar31 * fVar37) + fVar32 * fVar52 + fVar55 + *pfVar15;
            fVar49 = (fVar52 * fVar37 - fVar38 * fVar33) + fVar32 * fVar31 + fVar41 + pfVar15[1];
            fVar52 = (fVar31 * fVar33 - fVar52 * fVar35) + fVar32 * fVar38 + fVar44 + pfVar15[2];
          }
          else {
            fVar58 = fVar35 + fVar35;
            fVar31 = fVar37 + fVar37;
            pfVar15 = (float *)(lVar16 + 0x10 + uVar19);
            fVar56 = *pfVar15;
            fVar24 = pfVar15[1];
            fVar57 = pfVar15[2];
            fVar38 = fVar33 * (fVar33 + fVar33);
            fVar50 = fVar32 * (fVar33 + fVar33);
            fVar62 = (fVar32 * fVar31 + fVar33 * fVar58) * fVar55;
            fVar63 = (fVar50 + fVar35 * fVar31) * fVar41;
            fVar64 = (fVar32 * fVar58 + fVar33 * fVar31) * fVar44;
            fVar39 = fVar41 * (fVar33 * fVar58 - fVar32 * fVar31);
            fVar42 = fVar44 * (fVar35 * fVar31 - fVar50);
            fVar45 = fVar55 * (fVar33 * fVar31 - fVar32 * fVar58);
            fVar33 = (float)((uint)((_DAT_146870420 - (fVar37 * fVar31 + fVar35 * fVar58)) * fVar55)
                            & _DAT_146870430);
            fVar37 = (float)((uint)((fRam0000000146870424 - (fVar37 * fVar31 + fVar38)) * fVar41) &
                            uRam0000000146870434);
            fVar31 = (float)((uint)((fRam0000000146870428 - (fVar35 * fVar58 + fVar38)) * fVar44) &
                            uRam0000000146870438);
            fVar38 = (float)((uint)((fRam000000014687042c - (fVar38 + fVar38)) * auVar30._12_4_) &
                            uRam000000014687043c);
            fVar35 = fStack_144 + fStack_144;
            fVar32 = fStack_140 + fStack_140;
            fVar50 = (local_148 + local_148) * local_148;
            fVar58 = fStack_13c * (local_148 + local_148);
            fVar48 = (fStack_13c * fVar32 + local_148 * fVar35) * local_1a8;
            fVar51 = (fVar58 + fStack_144 * fVar32) * fStack_1a4;
            fVar53 = (fStack_13c * fVar35 + local_148 * fVar32) * fStack_1a0;
            fVar40 = fStack_1a4 * (local_148 * fVar35 - fStack_13c * fVar32);
            fVar43 = fStack_1a0 * (fStack_144 * fVar32 - fVar58);
            fVar46 = local_1a8 * (local_148 * fVar32 - fStack_13c * fVar35);
            fVar58 = (float)((uint)((_DAT_146870420 - (fVar32 * fStack_140 + fVar35 * fStack_144)) *
                                   local_1a8) & _DAT_146870430);
            fVar32 = (float)((uint)((fRam0000000146870424 - (fVar32 * fStack_140 + fVar50)) *
                                   fStack_1a4) & uRam0000000146870434);
            fVar35 = (float)((uint)((fRam0000000146870428 - (fVar35 * fStack_144 + fVar50)) *
                                   fStack_1a0) & uRam0000000146870438);
            fVar50 = (float)((uint)((fRam000000014687042c - (fVar50 + fVar50)) * fStack_19c) &
                            uRam000000014687043c);
            local_1f8 = fVar48 * fVar39 + fVar58 * fVar33 + fVar46 * fVar64 + fVar50 * fVar56;
            fStack_1f4 = fVar48 * fVar37 + fVar58 * fVar62 + fVar46 * fVar42 + fVar50 * fVar24;
            fStack_1f0 = fVar48 * fVar63 + fVar58 * fVar45 + fVar46 * fVar31 + fVar50 * fVar57;
            fStack_1ec = fVar48 * fVar38 + fVar58 * fVar38 + fVar46 * fVar38 +
                         fVar50 * fRam000000014687042c;
            local_1e8 = fVar32 * fVar39 + fVar40 * fVar33 + fVar51 * fVar64 + fVar50 * fVar56;
            fStack_1e4 = fVar32 * fVar37 + fVar40 * fVar62 + fVar51 * fVar42 + fVar50 * fVar24;
            fStack_1e0 = fVar32 * fVar63 + fVar40 * fVar45 + fVar51 * fVar31 + fVar50 * fVar57;
            fStack_1dc = fVar32 * fVar38 + fVar40 * fVar38 + fVar51 * fVar38 +
                         fVar50 * fRam000000014687042c;
            local_1d8 = fVar43 * fVar39 + fVar53 * fVar33 + fVar35 * fVar64 + fVar50 * fVar56;
            fStack_1d4 = fVar43 * fVar37 + fVar53 * fVar62 + fVar35 * fVar42 + fVar50 * fVar24;
            fStack_1d0 = fVar43 * fVar63 + fVar53 * fVar45 + fVar35 * fVar31 + fVar50 * fVar57;
            fStack_1cc = fVar43 * fVar38 + fVar53 * fVar38 + fVar35 * fVar38 +
                         fVar50 * fRam000000014687042c;
            local_1c8 = fVar36 * fVar39 + fVar34 * fVar33 + fVar23 * fVar64 +
                        fRam000000014687042c * fVar56;
            fStack_1c4 = fVar36 * fVar37 + fVar34 * fVar62 + fVar23 * fVar42 +
                         fRam000000014687042c * fVar24;
            fStack_1c0 = fVar36 * fVar63 + fVar34 * fVar45 + fVar23 * fVar31 +
                         fRam000000014687042c * fVar57;
            fStack_1bc = fVar36 * fVar38 + fVar34 * fVar38 + fVar23 * fVar38 +
                         fRam000000014687042c * fRam000000014687042c;
            FMatrix::RemoveScaling(&local_1f8);
            fVar58 = fStack_19c;
            fVar57 = fStack_1a0;
            fVar24 = fStack_1a4;
            fVar56 = local_1a8;
            fVar47 = (float)(-(uint)(local_138 <= fVar55 * local_1a8) &
                             (_DAT_146870470 ^ (uint)fVar47) ^ _DAT_146870470);
            fVar49 = (float)(-(uint)(fStack_134 <= fVar41 * fStack_1a4) &
                             (uRam0000000146870474 ^ (uint)fVar49) ^ uRam0000000146870474);
            fVar52 = (float)(-(uint)(fStack_130 <= fVar44 * fStack_1a0) &
                             (uRam0000000146870478 ^ (uint)fVar52) ^ uRam0000000146870478);
            local_1f8 = local_1f8 * fVar47;
            fStack_1f0 = fStack_1f0 * fVar47;
            fStack_1f4 = fStack_1f4 * fVar47;
            fStack_1e0 = fStack_1e0 * fVar49;
            fStack_1e4 = fStack_1e4 * fVar49;
            local_1e8 = local_1e8 * fVar49;
            fStack_1d0 = fStack_1d0 * fVar52;
            local_1d8 = local_1d8 * fVar52;
            fStack_1d4 = fStack_1d4 * fVar52;
            FQuat::FQuat(&local_128,&local_1f8);
            lVar16 = *(longlong *)(param_1 + 0xb00);
            local_218 = 0x322bcc77;
            auVar29._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
            auVar29._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
            auVar29._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
            auVar29._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
            fVar41 = auVar29._4_4_ + auVar29._0_4_;
            fVar44 = auVar29._8_4_ + auVar29._4_4_;
            fVar33 = auVar29._12_4_ + auVar29._8_4_;
            fVar35 = auVar29._0_4_ + auVar29._12_4_;
            auVar30._4_4_ = fVar44;
            auVar30._0_4_ = fVar41;
            auVar30._8_4_ = fVar33;
            auVar30._12_4_ = fVar35;
            auVar30 = rsqrtps(auVar29,auVar30);
            fVar47 = auVar30._0_4_;
            fVar49 = auVar30._4_4_;
            fVar52 = auVar30._8_4_;
            fVar55 = auVar30._12_4_;
            fVar47 = (_DAT_146870410 - fVar47 * fVar47 * fVar41 * _DAT_146870410) * fVar47 + fVar47;
            fVar49 = (fRam0000000146870414 - fVar49 * fVar49 * fVar44 * fRam0000000146870414) *
                     fVar49 + fVar49;
            fVar52 = (fRam0000000146870418 - fVar52 * fVar52 * fVar33 * fRam0000000146870418) *
                     fVar52 + fVar52;
            fVar55 = (fRam000000014687041c - fVar55 * fVar55 * fVar35 * fRam000000014687041c) *
                     fVar55 + fVar55;
            local_128 = (float)(((uint)(((_DAT_146870410 - fVar47 * fVar47 * fVar41 * _DAT_146870410
                                         ) * fVar47 + fVar47) * local_128) ^ _DAT_146870400) &
                                -(uint)(1e-08 <= fVar41) ^ _DAT_146870400);
            fStack_124 = (float)(((uint)(((fRam0000000146870414 -
                                          fVar49 * fVar49 * fVar44 * fRam0000000146870414) * fVar49
                                         + fVar49) * fStack_124) ^ uRam0000000146870404) &
                                 -(uint)(1e-08 <= fVar44) ^ uRam0000000146870404);
            fStack_120 = (float)(((uint)(((fRam0000000146870418 -
                                          fVar52 * fVar52 * fVar33 * fRam0000000146870418) * fVar52
                                         + fVar52) * fStack_120) ^ uRam0000000146870408) &
                                 -(uint)(1e-08 <= fVar33) ^ uRam0000000146870408);
            fStack_11c = (float)(((uint)(((fRam000000014687041c -
                                          fVar55 * fVar55 * fVar35 * fRam000000014687041c) * fVar55
                                         + fVar55) * fStack_11c) ^ uRam000000014687040c) &
                                 -(uint)(1e-08 <= fVar35) ^ uRam000000014687040c);
            fVar47 = local_1c8;
            fVar49 = fStack_1c4;
            fVar52 = fStack_1c0;
            param_2 = local_1b8;
          }
          pfVar15 = (float *)(lVar16 + 0x10 + uVar19);
          auVar4._4_4_ = (fVar36 - fVar49) + pfVar15[1];
          auVar4._0_4_ = (fVar34 - fVar47) + *pfVar15;
          auVar4._8_4_ = (fVar23 - fVar52) + pfVar15[2];
          auVar4._12_4_ = 0;
          *(undefined1 (*) [16])(lVar16 + 0x10 + uVar19) = auVar4;
        }
        lVar16 = *(longlong *)(param_1 + 0xaf8);
        uVar22 = (ulonglong)(iVar11 + 1U);
        uVar21 = uVar21 + 0x68;
        uVar19 = uVar19 + 0x30;
      } while ((int)(iVar11 + 1U) < *(int *)(lVar16 + 0x30));
    }
    fVar47 = *(float *)(lVar14 + 0x3e0);
    fVar49 = *(float *)(lVar14 + 0x3e4);
    fVar52 = *(float *)(lVar14 + 1000);
    fStack_12c = *(float *)(lVar14 + 0x3ec);
    fVar55 = *(float *)(lVar14 + 0x3d0);
    fVar41 = *(float *)(lVar14 + 0x3d4);
    fVar44 = *(float *)(lVar14 + 0x3d8);
    fVar33 = *(float *)(lVar14 + 0x3dc);
    local_198 = CONCAT44(fVar52,fVar52);
    fStack_190 = fVar52;
    fStack_18c = fVar52;
    local_138 = fVar47;
    fStack_134 = fVar49;
    fStack_130 = fVar52;
    local_128 = fVar49;
    fStack_124 = fVar49;
    fStack_120 = fVar49;
    fStack_11c = fVar49;
    pfVar15 = (float *)FRotator::Quaternion(lVar14 + 0x400,&local_208);
    fVar43 = fRam0000000146870428;
    fVar42 = fRam0000000146870424;
    fVar40 = _DAT_146870420;
    fVar39 = DAT_1464aa790;
    fVar50 = DAT_1464aa788._4_4_;
    fVar38 = (float)DAT_1464aa788;
    fVar35 = *pfVar15;
    fVar37 = pfVar15[1];
    fVar32 = pfVar15[2];
    fVar31 = pfVar15[3];
    fVar45 = fVar31 * fVar55 * _DAT_146870460 + fVar33 * fVar35 + fVar32 * fVar41 * _DAT_146870450 +
             fVar37 * fVar44 * _DAT_146870440;
    fVar46 = fVar32 * fVar55 * fRam0000000146870464 + fVar33 * fVar37 +
             fVar31 * fVar41 * fRam0000000146870454 + fVar35 * fVar44 * fRam0000000146870444;
    fVar48 = fVar37 * fVar55 * fRam0000000146870468 + fVar33 * fVar32 +
             fVar35 * fVar41 * fRam0000000146870458 + fVar31 * fVar44 * fRam0000000146870448;
    fVar55 = fVar35 * fVar55 * fRam000000014687046c + fVar33 * fVar31 +
             fVar37 * fVar41 * fRam000000014687045c + fVar32 * fVar44 * fRam000000014687044c;
    if (*(char *)(param_1 + 0x962) != '\0') {
      auVar27._4_4_ = fVar24;
      auVar27._0_4_ = fVar56;
      auVar27._8_4_ = fVar57;
      auVar27._12_4_ = fVar58;
      auVar5._4_4_ = DAT_1464aa788._4_4_;
      auVar5._0_4_ = (float)DAT_1464aa788;
      auVar5._8_4_ = DAT_1464aa790;
      auVar5._12_4_ = 0;
      auVar30 = minps(auVar27,auVar5);
      auVar28._4_4_ = -(uint)(auVar30._4_4_ < fRam0000000146870484);
      auVar28._0_4_ = -(uint)(auVar30._0_4_ < _DAT_146870480);
      auVar28._8_4_ = -(uint)(auVar30._8_4_ < fRam0000000146870488);
      auVar28._12_4_ = -(uint)(auVar30._12_4_ < fRam000000014687048c);
      iVar11 = movmskps((int)pfVar15,auVar28);
      if (iVar11 == 0) {
        fVar56 = (float)DAT_1464aa788 * fVar34;
        fVar24 = DAT_1464aa788._4_4_ * fVar36;
        fVar44 = DAT_1464aa790 * fVar23;
        fVar57 = fVar44 * fVar46 - fVar24 * fVar48;
        fVar58 = fVar56 * fVar48 - fVar44 * fVar45;
        fVar41 = fVar24 * fVar45 - fVar56 * fVar46;
        fVar57 = fVar57 + fVar57;
        fVar58 = fVar58 + fVar58;
        fVar41 = fVar41 + fVar41;
        fVar56 = (fVar41 * fVar46 - fVar58 * fVar48) + fVar55 * fVar57 + fVar56 + fVar47;
        fVar24 = (fVar57 * fVar48 - fVar41 * fVar45) + fVar55 * fVar58 + fVar24 + fVar49;
        fVar52 = (fVar58 * fVar45 - fVar57 * fVar46) + fVar55 * fVar41 + fVar44 + fVar52;
      }
      else {
        fVar24 = fVar46 + fVar46;
        fVar57 = fVar48 + fVar48;
        fVar58 = fVar45 * (fVar45 + fVar45);
        fVar56 = fVar55 * (fVar45 + fVar45);
        fVar59 = (fVar55 * fVar57 + fVar45 * fVar24) * (float)DAT_1464aa788;
        fVar60 = (fVar56 + fVar46 * fVar57) * DAT_1464aa788._4_4_;
        fVar61 = (fVar55 * fVar24 + fVar45 * fVar57) * DAT_1464aa790;
        fVar37 = DAT_1464aa788._4_4_ * (fVar45 * fVar24 - fVar55 * fVar57);
        fVar31 = DAT_1464aa790 * (fVar46 * fVar57 - fVar56);
        fVar53 = (float)DAT_1464aa788 * (fVar45 * fVar57 - fVar55 * fVar24);
        fVar56 = (float)((uint)((_DAT_146870420 - (fVar48 * fVar57 + fVar46 * fVar24)) *
                               (float)DAT_1464aa788) & _DAT_146870430);
        fVar57 = (float)((uint)((fRam0000000146870424 - (fVar48 * fVar57 + fVar58)) *
                               DAT_1464aa788._4_4_) & uRam0000000146870434);
        fVar41 = (float)((uint)((fRam0000000146870428 - (fVar46 * fVar24 + fVar58)) * DAT_1464aa790)
                        & uRam0000000146870438);
        fVar33 = (float)((uint)((fRam000000014687042c - (fVar58 + fVar58)) * 0.0) &
                        uRam000000014687043c);
        fVar44 = fStack_144 + fStack_144;
        fVar58 = fStack_140 + fStack_140;
        fStack_1fc = fRam000000014687042c;
        fVar35 = (local_148 + local_148) * local_148;
        fVar24 = (local_148 + local_148) * fStack_13c;
        fVar63 = (fVar58 * fStack_13c + fVar44 * local_148) * local_1a8;
        fVar64 = (fVar24 + fVar58 * fStack_144) * fStack_1a4;
        fVar54 = (fVar44 * fStack_13c + fVar58 * local_148) * fStack_1a0;
        fVar32 = fStack_1a4 * (fVar44 * local_148 - fVar58 * fStack_13c);
        fVar51 = fStack_1a0 * (fVar58 * fStack_144 - fVar24);
        fVar62 = local_1a8 * (fVar58 * local_148 - fVar44 * fStack_13c);
        fVar24 = (float)((uint)((_DAT_146870420 - (fVar58 * fStack_140 + fVar44 * fStack_144)) *
                               local_1a8) & _DAT_146870430);
        fVar58 = (float)((uint)((fRam0000000146870424 - (fVar58 * fStack_140 + fVar35)) * fStack_1a4
                               ) & uRam0000000146870434);
        fVar44 = (float)((uint)((fRam0000000146870428 - (fVar44 * fStack_144 + fVar35)) * fStack_1a0
                               ) & uRam0000000146870438);
        fVar35 = (float)((uint)((fRam000000014687042c - (fVar35 + fVar35)) * fStack_19c) &
                        uRam000000014687043c);
        local_1f8 = fVar63 * fVar37 + fVar24 * fVar56 + fVar62 * fVar61 + fVar35 * fVar47;
        fStack_1f4 = fVar63 * fVar57 + fVar24 * fVar59 + fVar62 * fVar31 + fVar35 * fVar49;
        fStack_1f0 = fVar63 * fVar60 + fVar24 * fVar53 + fVar62 * fVar41 + fVar35 * fVar52;
        fStack_1ec = fVar63 * fVar33 + fVar24 * fVar33 + fVar62 * fVar33 +
                     fVar35 * fRam000000014687042c;
        local_1e8 = fVar58 * fVar37 + fVar32 * fVar56 + fVar64 * fVar61 + fVar35 * fVar47;
        fStack_1e4 = fVar58 * fVar57 + fVar32 * fVar59 + fVar64 * fVar31 + fVar35 * fVar49;
        fStack_1e0 = fVar58 * fVar60 + fVar32 * fVar53 + fVar64 * fVar41 + fVar35 * fVar52;
        fStack_1dc = fVar58 * fVar33 + fVar32 * fVar33 + fVar64 * fVar33 +
                     fVar35 * fRam000000014687042c;
        local_1d8 = fVar51 * fVar37 + fVar54 * fVar56 + fVar44 * fVar61 + fVar35 * fVar47;
        fStack_1d4 = fVar51 * fVar57 + fVar54 * fVar59 + fVar44 * fVar31 + fVar35 * fVar49;
        fStack_1d0 = fVar51 * fVar60 + fVar54 * fVar53 + fVar44 * fVar41 + fVar35 * fVar52;
        fStack_1cc = fVar51 * fVar33 + fVar54 * fVar33 + fVar44 * fVar33 +
                     fVar35 * fRam000000014687042c;
        local_1c8 = fVar36 * fVar37 + fVar34 * fVar56 + fVar23 * fVar61 +
                    fRam000000014687042c * fVar47;
        fStack_1c4 = fVar36 * fVar57 + fVar34 * fVar59 + fVar23 * fVar31 +
                     fRam000000014687042c * fVar49;
        fStack_1c0 = fVar36 * fVar60 + fVar34 * fVar53 + fVar23 * fVar41 +
                     fRam000000014687042c * fVar52;
        fStack_1bc = fVar36 * fVar33 + fVar34 * fVar33 + fVar23 * fVar33 +
                     fRam000000014687042c * fRam000000014687042c;
        local_208 = fVar47;
        fStack_204 = fVar49;
        fStack_200 = fVar52;
        FMatrix::RemoveScaling(&local_1f8);
        fVar56 = (float)(-(uint)(_DAT_146870480 <= fVar38 * local_1a8) &
                         (_DAT_146870470 ^ (uint)fVar40) ^ _DAT_146870470);
        fVar24 = (float)(-(uint)(fRam0000000146870484 <= fVar50 * fStack_1a4) &
                         (uRam0000000146870474 ^ (uint)fVar42) ^ uRam0000000146870474);
        fVar57 = (float)(-(uint)(fRam0000000146870488 <= fVar39 * fStack_1a0) &
                         (uRam0000000146870478 ^ (uint)fVar43) ^ uRam0000000146870478);
        local_1f8 = local_1f8 * fVar56;
        fStack_1f4 = fStack_1f4 * fVar56;
        fStack_1f0 = fStack_1f0 * fVar56;
        fStack_1e0 = fStack_1e0 * fVar24;
        fStack_1e4 = fStack_1e4 * fVar24;
        local_1e8 = local_1e8 * fVar24;
        fStack_1d0 = fStack_1d0 * fVar57;
        local_1d8 = local_1d8 * fVar57;
        fStack_1d4 = fStack_1d4 * fVar57;
        FQuat::FQuat(&local_148,&local_1f8);
        local_218 = 0x322bcc77;
        fVar56 = local_1c8;
        fVar24 = fStack_1c4;
        fVar52 = fStack_1c0;
        fVar49 = local_128;
        fVar47 = local_138;
      }
      fVar47 = fVar47 + (fVar34 - fVar56);
      fVar49 = fVar49 + (fVar36 - fVar24);
      fVar52 = (float)local_198 + (fVar23 - fVar52);
    }
    puVar12 = (undefined8 *)FRotator::Quaternion(pfVar1,&local_138);
    fVar23 = 1.0 - *(float *)(param_1 + 0x63c);
    local_118 = *puVar12;
    uStack_110 = puVar12[1];
    pfVar15 = (float *)FRotator::Quaternion(param_1 + 0xb5c,&local_138);
    if (*pfVar15 * DAT_1464aa810 + pfVar15[1] * DAT_1464aa814 + pfVar15[2] * DAT_1464aa818 +
        pfVar15[3] * DAT_1464aa81c < 0.0) {
      fVar24 = -1.0;
      fVar56 = -fVar23;
    }
    else {
      fVar24 = 1.0;
      fVar56 = fVar23;
    }
    fVar24 = fVar24 - fVar56;
    fVar44 = fVar23 * pfVar15[2] + fVar24 * DAT_1464aa818;
    fVar33 = fVar24 * DAT_1464aa81c + pfVar15[3] * fVar23;
    fVar58 = fVar24 * DAT_1464aa814 + fVar23 * pfVar15[1];
    fVar56 = fVar23 * *pfVar15 + fVar24 * DAT_1464aa810;
    fVar35 = uStack_110._4_4_ * fVar56 * _DAT_146870460;
    fVar37 = (float)uStack_110 * fVar56 * fRam0000000146870464;
    fVar32 = local_118._4_4_ * fVar56 * fRam0000000146870468;
    fVar31 = (float)local_118 * fVar56 * fRam000000014687046c;
    fVar56 = (float)uStack_110 * fVar58 * _DAT_146870450;
    fVar24 = uStack_110._4_4_ * fVar58 * fRam0000000146870454;
    fVar57 = (float)local_118 * fVar58 * fRam0000000146870458;
    fVar58 = local_118._4_4_ * fVar58 * fRam000000014687045c;
    fVar34 = local_118._4_4_ * fVar44 * _DAT_146870440;
    fVar36 = (float)local_118 * fVar44 * fRam0000000146870444;
    fVar41 = uStack_110._4_4_ * fVar44 * fRam0000000146870448;
    fVar44 = (float)uStack_110 * fVar44 * fRam000000014687044c;
    *(float *)(param_1 + 0xb14) = fVar23 * *(float *)(param_1 + 0xb54) + *(float *)(param_1 + 0xb14)
    ;
    fVar34 = fVar35 + fVar33 * (float)local_118 + fVar56 + fVar34;
    fVar36 = fVar37 + fVar33 * local_118._4_4_ + fVar24 + fVar36;
    fVar41 = fVar32 + fVar33 * (float)uStack_110 + fVar57 + fVar41;
    fVar44 = fVar31 + fVar33 * uStack_110._4_4_ + fVar58 + fVar44;
    *(float *)(param_1 + 0xb18) = fVar23 * *(float *)(param_1 + 0xb58) + *(float *)(param_1 + 0xb18)
    ;
    fVar56 = fVar44 * fVar45 * _DAT_146870460;
    fVar24 = fVar41 * fVar45 * fRam0000000146870464;
    fVar57 = fVar36 * fVar45 * fRam0000000146870468;
    fVar58 = fVar34 * fVar45 * fRam000000014687046c;
    *(float *)(param_1 + 0xb10) =
         fVar47 + fVar23 * *(float *)(param_1 + 0xb50) + *(float *)(param_1 + 0xb10);
    *(float *)(param_1 + 0xb14) = fVar49 + *(float *)(param_1 + 0xb14);
    *(float *)(param_1 + 0xb18) = fVar52 + *(float *)(param_1 + 0xb18);
    local_118 = CONCAT44(fVar24 + fVar55 * fVar36 + fVar44 * fVar46 * fRam0000000146870454 +
                         fVar34 * fVar48 * fRam0000000146870444,
                         fVar56 + fVar55 * fVar34 + fVar41 * fVar46 * _DAT_146870450 +
                         fVar36 * fVar48 * _DAT_146870440);
    uStack_110 = CONCAT44(fVar58 + fVar55 * fVar44 + fVar36 * fVar46 * fRam000000014687045c +
                          fVar41 * fVar48 * fRam000000014687044c,
                          fVar57 + fVar55 * fVar41 + fVar34 * fVar46 * fRam0000000146870458 +
                          fVar44 * fVar48 * fRam0000000146870448);
    puVar12 = (undefined8 *)FQuat::Rotator(&local_118,&local_208);
    *(undefined8 *)pfVar1 = *puVar12;
    *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(puVar12 + 1);
    param_2 = local_1b8;
  }
  if ((*(char *)(param_1 + 0x5a2) == '\0') ||
     (0.0 < *(float *)(param_1 + 0x5c0) || *(float *)(param_1 + 0x5c0) == 0.0)) {
    *(ulonglong *)(param_1 + 0xb74) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar23 = DAT_1468b5d98;
  }
  else {
    iVar11 = rand();
    fVar23 = (float)iVar11 * 2.4414809e-05 - 0.4;
    iVar11 = rand();
    iVar10 = rand();
    *(ulonglong *)(param_1 + 0xb74) =
         CONCAT44((float)iVar11 * 2.4414809e-05 - 0.4,(float)iVar10 * 2.4414809e-05 - 0.4);
    fStack_200 = fVar23;
  }
  plVar18 = (longlong *)(*(longlong *)(param_1 + 0x950) + 0xd88);
  *(float *)(param_1 + 0xb7c) = fVar23;
  lVar14 = (**(code **)(*plVar18 + 0xf0))(plVar18,0);
  if (lVar14 == 0) {
    *(undefined4 *)(param_1 + 0xb38) = 0;
    fVar23 = 0.0;
  }
  else {
    fVar23 = (float)FUN_14307dab0(lVar14);
    *(float *)(param_1 + 0xb38) = fVar23;
    if (*(char *)(param_1 + 0x962) == '\0') {
      fVar23 = 1.0 - fVar23;
    }
    fVar23 = *(float *)(param_1 + 0x964) * fVar23;
  }
  *(float *)(param_1 + 0xb3c) = fVar23;
  fVar23 = (float)FUN_142268750(param_1,DAT_146870820);
  if (fVar23 < 0.0) {
    fVar23 = -fVar23;
    if (0.0 <= fVar23) {
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
    }
    else {
      fVar23 = 0.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  *(float *)(param_1 + 0xb80) = fVar23;
  fVar23 = (float)FUN_14225e8a0(param_1,DAT_146870838);
  if (fVar23 <= 0.0) {
    *(undefined4 *)(param_1 + 0xb4c) = 0;
  }
  else {
    fVar23 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x3c);
    fVar56 = *(float *)(param_1 + 0x634);
    if (0.5 <= param_2) {
      fVar23 = _guard_xfg_dispatch_icall_nop(1.0 - ((param_2 + param_2) - 1.0),fVar23);
      fVar23 = (1.0 - fVar23) + 1.0;
    }
    else {
      fVar23 = _guard_xfg_dispatch_icall_nop(param_2 + param_2,fVar23);
    }
    *(float *)(param_1 + 0xb4c) =
         ((1.0 - fVar56) - *(float *)(param_1 + 0xb4c)) * fVar23 * 0.5 + *(float *)(param_1 + 0xb4c)
    ;
  }
  FUN_14225e8a0(param_1,DAT_146870840);
  uVar9 = FMath::FInterpConstantTo();
  *(undefined4 *)(param_1 + 0xb68) = uVar9;
  uVar9 = FMath::FInterpConstantTo();
  *(undefined4 *)(param_1 + 0xb6c) = uVar9;
  plVar18 = *(longlong **)(*(longlong *)(param_1 + 0x950) + 0xe68);
  if ((((*(char *)(param_1 + 0x5a2) == '\0') || (plVar18 == (longlong *)0x0)) ||
      (cVar7 = FUN_142cbb8e0(plVar18 + 0x32a), cVar7 == '\0')) ||
     (*(float *)(*(longlong *)(param_1 + 0xaf8) + 0x50) < *(float *)((longlong)plVar18 + 0x194))) {
LAB_140e64712:
    uVar9 = FMath::FInterpConstantTo();
  }
  else {
    lVar16 = ASBZCharacter::GetCharacterTag(plVar18);
    cVar7 = (**(code **)(*plVar18 + 0x7f0))(plVar18,lVar16);
    if (cVar7 != '\0') {
      lVar13 = plVar18[0x2f];
      if (lVar13 == 0) {
        fStack_190 = DAT_14629c568;
        puVar12 = &local_198;
        local_198 = DAT_14629c560;
      }
      else {
        local_228 = *(undefined8 *)(lVar13 + 0x220);
        puVar12 = &local_228;
        local_220 = *(float *)(lVar13 + 0x228) - *(float *)(lVar13 + 0x1e4);
      }
      fStack_200 = *(float *)(puVar12 + 1);
      fVar23 = fStack_200 - *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x54);
      if (fVar23 < *(float *)(lVar16 + 0x1c) || fVar23 == *(float *)(lVar16 + 0x1c))
      goto LAB_140e64712;
    }
    uVar9 = FMath::FInterpTo();
  }
  *(undefined4 *)(param_1 + 0xb48) = uVar9;
  if ((*(byte *)(param_1 + 0xb90) & 0x20) == 0) {
    plVar18 = (longlong *)(*(longlong *)(param_1 + 0x950) + 0xd88);
    (**(code **)(*plVar18 + 0xf0))(plVar18,0);
    uVar9 = FMath::FInterpTo();
  }
  else {
    uVar9 = 0;
  }
  *(undefined4 *)(param_1 + 0xb40) = uVar9;
  if ((lVar14 == 0) || (*(char *)(param_1 + 0x962) != '\0')) {
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  *(byte *)(param_1 + 0xb90) = *(byte *)(param_1 + 0xb90) & 0xfe;
  *(byte *)(param_1 + 0xb90) = *(byte *)(param_1 + 0xb90) | bVar8;
  if (((*(char *)(param_1 + 0x95b) != '\0') || (0.0 < *(float *)(param_1 + 0xb48))) ||
     ((fVar23 = (float)FUN_14225e8a0(param_1,DAT_146870830), 0.0 < fVar23 ||
      (fVar23 = (float)FUN_14225e8a0(param_1,DAT_146870838), 0.0 < fVar23)))) {
    bVar8 = 2;
  }
  else {
    bVar8 = 0;
  }
  bVar3 = *(byte *)(param_1 + 0xb90);
  bVar17 = bVar3 & 0xfd | bVar8;
  *(byte *)(param_1 + 0xb90) = bVar17;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x950) + 0x900);
  if ((lVar14 == 0) || ((*(byte *)(lVar14 + 0x1968) & 1) == 0)) {
    if ((bVar3 & 4) != 0) {
      if (((0.0 < *(float *)(param_1 + 0xb88)) || (*(float *)(param_1 + 0xb68) <= 0.0)) ||
         (fVar23 = *(float *)(*(longlong *)(param_1 + 0xaf8) + 0x40), fVar23 <= 0.0)) {
        param_2 = *(float *)(param_1 + 0xb88) - param_2;
        *(float *)(param_1 + 0xb88) = param_2;
        if (0.0 < param_2) {
          uVar20 = 4;
        }
        bVar17 = (byte)uVar20 | bVar3 & 0xf9 | bVar8;
      }
      else {
        *(float *)(param_1 + 0xb88) = *(float *)(param_1 + 0xb68) / fVar23;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb88) = 0xbf800000;
    bVar17 = bVar17 | 4;
  }
  if (((bVar17 & 0x20) == 0) && ((*(char *)(param_1 + 0x968) != '\0' || ((bVar17 & 8) != 0)))) {
    bVar8 = 0x10;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)(param_1 + 0xb90) = bVar17 & 0xef | bVar8;
  if (*(char *)(param_1 + 0x95c) != '\0') {
    fVar56 = 1.0 - *(float *)(param_1 + 0x5cc);
    fVar23 = 0.0;
    if ((0.0 <= fVar56) && (fVar23 = fVar56, 1.0 <= fVar56)) {
      fVar23 = 1.0;
    }
    *(float *)(param_1 + 0xb8c) = fVar23;
  }
  return;
}



// FUNCTION 140e64960 FUN_140e64960 body=600 status=ok
// SIG undefined FUN_140e64960(void)

void FUN_140e64960(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x6f0) == 0) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = DAT_146b33f38;
  lVar7 = DAT_146b33f38 + 0xa0;
  lVar3 = FWeakObjectPtr::Get(lVar7);
  if (lVar3 == 0) {
    LOCK();
    iVar2 = 0;
    if (DAT_1464b56f4 != 0) {
      iVar2 = DAT_1464b56f4;
    }
    DAT_1464b56f4 = iVar2;
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar4 + 0xa8)) {
      return;
    }
    if (*(longlong *)(lVar4 + 0xb0) == 0) {
      return;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar7,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0xa8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar7);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar4 = FUN_1413bd170();
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
    FUN_140c54860(*(undefined8 *)(param_1 + 0x6f0));
    lVar7 = FUN_140c428a0(*(undefined8 *)(param_1 + 0x6f0));
    lVar4 = *(longlong *)(lVar7 + 0xb0);
    lVar7 = (longlong)*(int *)(lVar7 + 0xb8) * 0x40 + lVar4;
    for (; lVar4 != lVar7; lVar4 = lVar4 + 0x40) {
      *(undefined1 *)(lVar4 + 0x18) = 1;
    }
    lVar4 = FUN_1412bf1c0(lVar3);
    if ((lVar4 != 0) &&
       (lVar4 = FUN_140e5f820(*(undefined8 *)(param_1 + 0x6f0),param_1 + 0x5a0,0), lVar4 != 0)) {
      uVar5 = FUN_1412bf1c0(lVar3);
      uVar6 = FUN_140c428a0(*(undefined8 *)(param_1 + 0x6f0));
      FUN_140e7b7b0(uVar6,uVar5,lVar4,1,0);
    }
    lVar4 = ULevel::GetWorld(lVar3);
    if (lVar4 != 0) {
      uVar5 = FUN_14149b100();
      lVar4 = FUN_140e5f820(*(undefined8 *)(param_1 + 0x6f0),param_1 + 0x588,uVar5);
      if (lVar4 != 0) {
        lVar7 = FUN_14149b100();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar5 = ULevel::GetWorld(lVar3);
          uVar6 = FUN_140c428a0(*(undefined8 *)(param_1 + 0x6f0));
          FUN_140e7b7b0(uVar6,uVar5,lVar4,1,0);
          FUN_14127e590(lVar4,*(undefined8 *)(param_1 + 0x598));
        }
      }
    }
    FUN_140c51e80(*(undefined8 *)(param_1 + 0x6f0));
  }
  return;
}



// FUNCTION 140e64bc0 FUN_140e64bc0 body=1403 status=ok
// SIG undefined FUN_140e64bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e64bc0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  void *_Src;
  char cVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  undefined8 *puVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  bool bVar18;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  wchar_t *local_128;
  wchar_t **local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_d0;
  undefined1 local_bc;
  undefined1 local_a8;
  undefined1 local_94;
  undefined1 local_80;
  undefined1 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar1 = (longlong *)(param_1 + 0x6d8);
  pwVar16 = (wchar_t *)0x0;
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x6e4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  if (*(longlong *)(param_1 + 0x6f0) == 0) {
    local_108 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_58 = 0;
    lStack_50 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_d0 = 0;
    local_bc = 0;
    local_a8 = 0;
    local_94 = 0;
    local_80 = 0;
    local_6c = 0;
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    FUN_140e41060(param_1 + 0x4e8,&local_108);
    if (lStack_50 != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    FUN_140b9ed10(param_1 + 0x5b0,param_2);
    *(byte *)(param_1 + 0x738) = *(byte *)(param_1 + 0x738) | 0x80;
  }
  else {
    FUN_140b9ed10(param_1 + 0x4e8,param_2);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar9 = *(longlong *)(param_1 + 0x6f0);
    local_110 = *(longlong *)(DAT_146b33f38 + 0x58);
    local_128 = pwVar16;
    if (lVar9 != 0) {
      local_128 = *(wchar_t **)(lVar9 + 0x2298);
    }
    if ((local_110 != 0) && (local_128 != (wchar_t *)0x0)) {
      if ((*(char *)(param_1 + 0x4a8) == '\x01') &&
         (plVar4 = *(longlong **)(lVar9 + 0x22a8), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x448))(plVar4,param_1 + 0x4e8);
      }
      FUN_140e64960(param_1);
      FUN_142d26700(local_128);
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&APlayerStandIn::HandleCustomizationApplied",L"::");
      pwVar17 = pwVar16;
      while (pwVar15 = pwVar8, pwVar15 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar15 + 1,L"::");
        pwVar17 = pwVar15;
      }
      FName::FName(&local_118,pwVar17 + 2,1);
      pwVar17 = local_128;
      pwVar8 = local_128 + 400;
      FWeakObjectPtr::operator=(&local_138,0);
      local_130 = 0;
      FWeakObjectPtr::operator=(&local_138,param_1);
      local_130 = local_118;
      local_120 = (wchar_t **)0x0;
      if ((local_118 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_138), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_130);
      }
      piVar5 = *(int **)pwVar8;
      iVar3 = *(int *)(pwVar17 + 0x194);
      uVar10 = local_138;
      for (piVar13 = piVar5; local_138 = (wchar_t *)uVar10, piVar13 != piVar5 + (longlong)iVar3 * 4;
          piVar13 = piVar13 + 4) {
        local_138._0_4_ = (int)uVar10;
        if ((((*piVar13 == (int)local_138) &&
             (local_138._4_4_ = (int)((ulonglong)uVar10 >> 0x20),
             bVar18 = piVar13[1] == local_138._4_4_, bVar18)) ||
            ((cVar7 = FWeakObjectPtr::IsValid(piVar13), cVar7 == '\0' &&
             (cVar7 = FWeakObjectPtr::IsValid(&local_138), cVar7 == '\0')))) &&
           (*(longlong *)(piVar13 + 2) == local_130)) {
          if ((int)((longlong)piVar13 - (longlong)piVar5 >> 4) != -1) goto LAB_140e64e9c;
          break;
        }
        uVar10 = local_138;
      }
      iVar3 = *(int *)(pwVar17 + 0x194);
      *(int *)(pwVar17 + 0x194) = iVar3 + 1;
      if (*(int *)(pwVar17 + 0x196) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar8,iVar3);
      }
      puVar11 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)pwVar8);
      *puVar11 = (int)local_138;
      puVar11[1] = local_138._4_4_;
      *(longlong *)(puVar11 + 2) = local_130;
LAB_140e64e9c:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar8);
      lVar9 = *(longlong *)(param_1 + 0x4f0);
      if ((lVar9 != 0) || (lVar9 = FUN_140e4cbc0(*(undefined8 *)(param_1 + 0x6f0)), lVar9 != 0)) {
        iVar3 = *(int *)(param_1 + 0x6e0);
        *(int *)(param_1 + 0x6e0) = iVar3 + 1;
        if (*(int *)(param_1 + 0x6e4) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar9;
      }
      lVar9 = *(longlong *)(param_1 + 0x4f8);
      if ((lVar9 != 0) || (lVar9 = FUN_140e4ca10(*(undefined8 *)(param_1 + 0x6f0)), lVar9 != 0)) {
        iVar3 = *(int *)(param_1 + 0x6e0);
        *(int *)(param_1 + 0x6e0) = iVar3 + 1;
        if (*(int *)(param_1 + 0x6e4) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar9;
      }
      lVar9 = *(longlong *)(param_1 + 0x500);
      if (lVar9 != 0) {
        iVar3 = *(int *)(param_1 + 0x6e0);
        *(int *)(param_1 + 0x6e0) = iVar3 + 1;
        if (*(int *)(param_1 + 0x6e4) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar9;
      }
      puVar14 = (undefined8 *)*plVar1;
      puVar2 = puVar14 + *(int *)(param_1 + 0x6e0);
      for (; puVar14 != puVar2; puVar14 = puVar14 + 1) {
        cVar7 = (**(code **)(*(longlong *)local_128 + 0x418))(local_128,*puVar14);
        if (cVar7 == '\0') {
          uVar10 = (**(code **)(*(longlong *)local_128 + 0x420))(local_128,*puVar14);
          *puVar14 = uVar10;
        }
      }
      local_118 = 0;
      TArray<FName,FDefaultAllocator>::Remove(plVar1,&local_118);
      lVar9 = local_110;
      local_120 = &local_128;
      FUN_140e41440(&local_120,param_1 + 0x510,param_1 + 0x54c,*(undefined8 *)(local_110 + 0x5c8));
      FUN_140e41440(&local_120,param_1 + 0x524,param_1 + 0x560,*(undefined8 *)(lVar9 + 0x5d0));
      FUN_140e41440(&local_120,param_1 + 0x538,param_1 + 0x574,*(undefined8 *)(lVar9 + 0x5d8));
      FUN_142d10430(local_128);
      lVar9 = *(longlong *)(param_1 + 0x508);
      lVar6 = *(longlong *)(param_1 + 0x6f0);
      if (*(longlong *)(lVar6 + 0x2318) != lVar9) {
        if (*(longlong *)(lVar6 + 0x2298) != 0) {
          if (*(longlong *)(lVar6 + 0x2318) != 0) {
            FUN_142d26ae0();
          }
          if (lVar9 != 0) {
            FUN_142d271f0(*(undefined8 *)(lVar6 + 0x2298),lVar9,0);
          }
        }
        *(longlong *)(lVar6 + 0x2318) = lVar9;
      }
      iVar3 = *(int *)(param_1 + 0x6e0);
      _Src = (void *)*plVar1;
      local_138 = (wchar_t *)0x0;
      local_130 = CONCAT44(local_130._4_4_,iVar3);
      pwVar17 = pwVar16;
      iVar12 = 0;
      if (iVar3 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_138,iVar3,0);
        pwVar17 = local_138;
        _guard_xfg_dispatch_icall_nop(local_138,_Src,(longlong)iVar3 << 3);
        iVar12 = (int)local_130;
      }
      pwVar8 = (wchar_t *)
               ((ulonglong)((longlong)(pwVar17 + (longlong)iVar12 * 4) + (7 - (longlong)pwVar17)) >>
               3);
      if (pwVar17 + (longlong)iVar12 * 4 < pwVar17) {
        pwVar8 = pwVar16;
      }
      pwVar15 = pwVar17;
      if (pwVar8 != (wchar_t *)0x0) {
        do {
          FUN_142d271f0(local_128,*(longlong *)pwVar15,0);
          pwVar16 = (wchar_t *)((longlong)pwVar16 + 1);
          pwVar15 = pwVar15 + 4;
        } while (pwVar16 != pwVar8);
      }
      if (pwVar17 != (wchar_t *)0x0) {
        FMemory::Free(pwVar17);
      }
    }
  }
  return;
}



// FUNCTION 140e65140 FUN_140e65140 body=364 status=ok
// SIG undefined FUN_140e65140(void)

void FUN_140e65140(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  
  *(byte *)(param_1 + 0xe7) = *(byte *)(param_1 + 0xe7) & 0x7f;
  FUN_140e64bc0(param_1,param_1 + 0xb6);
  if (param_1[0xe2] != 0) {
    lVar1 = USafeZone::GetPrivateStaticClass();
    for (lVar2 = param_1[0xe2]; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) {
        if ((param_1[0xe2] != 0) && ((*(byte *)(param_1 + 0xe7) & 8) == 0)) {
          FUN_140e53ec0(param_1);
        }
        break;
      }
    }
  }
  if (((((int)param_1[0xe1] != 0) && (FUN_140e46e00(param_1), param_1[0x9c] != 0)) &&
      (lVar2 = (**(code **)(*param_1 + 0x148))(param_1), lVar2 != 0)) &&
     (plVar3 = (longlong *)FUN_140e81f70(param_1[0x9c],0), *plVar3 != 0)) {
    lVar4 = FUN_142e20fc0();
    lVar2 = *plVar3;
    lVar1 = lVar2;
    if (lVar2 != 0) {
      while (lVar1 != lVar4) {
        lVar1 = *(longlong *)(lVar1 + 0x30);
        if (lVar1 == 0) {
          return;
        }
      }
      if (lVar2 != 0) {
        fVar5 = *(float *)(plVar3 + 2);
        if (fVar5 <= 1.1754944e-38) {
          fVar5 = 1.1754944e-38;
        }
        *(undefined4 *)(param_1 + 0xe8) = 0;
        *(undefined1 *)((longlong)param_1 + 0x73a) = 0;
        *(float *)((longlong)param_1 + 0x73c) = fVar5;
        if (param_1[0xdd] != 0) {
          lVar4 = USafeZone::GetPrivateStaticClass();
          lVar2 = param_1[0xdd];
          lVar1 = lVar2;
          if (lVar2 != 0) {
            while (lVar1 != lVar4) {
              lVar1 = *(longlong *)(lVar1 + 0x30);
              if (lVar1 == 0) {
                FUN_140e5fb70(param_1);
                return;
              }
            }
            if (lVar2 != 0) {
              return;
            }
          }
        }
        FUN_140e5fb70(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140e652b0 FUN_140e652b0 body=44 status=ok
// SIG undefined FUN_140e652b0(void)

void FUN_140e652b0(longlong param_1,char param_2)

{
  char local_res10 [24];
  
  if (param_2 != *(char *)(param_1 + 0x598)) {
    *(char *)(param_1 + 0x598) = param_2;
    local_res10[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x608,local_res10);
  }
  return;
}



// FUNCTION 140e652e0 FUN_140e652e0 body=20 status=ok
// SIG undefined FUN_140e652e0(void)

void FUN_140e652e0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x568) != param_2) {
    *(int *)(param_1 + 0x568) = param_2;
    FUN_140e55130();
    return;
  }
  return;
}



// FUNCTION 140e65300 FUN_140e65300 body=98 status=ok
// SIG undefined FUN_140e65300(void)

void FUN_140e65300(longlong param_1,float *param_2)

{
  undefined8 local_18;
  float local_10;
  
  if (((*(float *)(param_1 + 0x64c) != *param_2) || (*(float *)(param_1 + 0x650) != param_2[1])) ||
     (*(float *)(param_1 + 0x654) != param_2[2])) {
    local_18 = *(undefined8 *)param_2;
    local_10 = param_2[2];
    *(undefined8 *)(param_1 + 0x64c) = local_18;
    *(float *)(param_1 + 0x654) = local_10;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x5f8,&local_18);
  }
  return;
}



// FUNCTION 140e65370 FUN_140e65370 body=63 status=ok
// SIG undefined FUN_140e65370(void)

void FUN_140e65370(longlong param_1,float *param_2)

{
  float fVar1;
  
  if (((*(float *)(param_1 + 0x658) != *param_2) || (*(float *)(param_1 + 0x65c) != param_2[1])) ||
     (*(float *)(param_1 + 0x660) != param_2[2])) {
    fVar1 = param_2[2];
    *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)param_2;
    *(float *)(param_1 + 0x660) = fVar1;
  }
  return;
}



// FUNCTION 140e653b0 FUN_140e653b0 body=158 status=ok
// SIG undefined FUN_140e653b0(void)

void FUN_140e653b0(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_140cdc310();
  if ((*(longlong *)(param_1 + 0x950) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x950) + 0xe68) != 0)) {
    FUN_140e658d0(param_1);
    if (*(char *)(param_1 + 0x8e4) == '\0') {
      if ((*(char *)(param_1 + 0xc41) == '\0') && (*(char *)(param_1 + 0x961) != '\0')) {
        uVar1 = *(undefined4 *)(param_1 + 0x634);
      }
      else {
        uVar1 = 0x3f800000;
      }
      *(undefined1 *)(param_1 + 0xc40) = *(undefined1 *)(param_1 + 0x5a7);
      *(undefined4 *)(param_1 + 0xc3c) = uVar1;
      if (*(char *)(param_1 + 0x5a8) != '\0') {
        *(undefined4 *)(param_1 + 0xc1c) = 0;
        return;
      }
      *(undefined4 *)(param_1 + 0xc1c) = 0x3e4ccccd;
    }
  }
  return;
}



// FUNCTION 140e65450 FUN_140e65450 body=599 status=ok
// SIG undefined FUN_140e65450(void)

void FUN_140e65450(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  char cVar12;
  char cVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong local_res18;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar3 == 0) goto LAB_140e65695;
  lVar14 = *(longlong *)(param_1 + 0x118);
  if (lVar14 == 0) {
LAB_140e654de:
    lVar14 = 0;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140e654de;
    lVar14 = *(longlong *)(lVar14 + 0x990);
  }
  plVar16 = *(longlong **)(lVar3 + 0x1108);
  local_res18 = 0;
  uVar8 = (longlong)*(int *)(lVar3 + 0x1110) & 0x1fffffffffffffff;
  if (plVar16 + *(int *)(lVar3 + 0x1110) < plVar16) {
    uVar8 = 0;
  }
  if (uVar8 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1b8);
    do {
      plVar15 = (longlong *)0x0;
      plVar9 = *(longlong **)(param_1 + 0x1f0);
      lVar3 = *plVar16;
      plVar7 = plVar9 + (longlong)*(int *)(param_1 + 0x1f8) * 2;
      plVar10 = plVar15;
      if (plVar9 != plVar7) {
        do {
          plVar10 = plVar9;
          if (*plVar9 == *(longlong *)(lVar3 + 0x30)) break;
          plVar9 = plVar9 + 2;
          plVar10 = plVar15;
        } while (plVar9 != plVar7);
      }
      plVar7 = (longlong *)*plVar1;
      iVar2 = *(int *)(param_1 + 0x1c0);
      plVar9 = plVar7 + (longlong)iVar2 * 3;
      for (; (plVar11 = plVar15, plVar7 != plVar9 && (plVar11 = plVar7, *plVar7 != lVar3));
          plVar7 = plVar7 + 3) {
      }
      cVar12 = '\0';
      if ((plVar10 == (longlong *)0x0) || ((int)plVar10[1] < *(int *)(lVar3 + 0xa0))) {
        cVar13 = '\0';
      }
      else {
        cVar13 = '\x01';
      }
      if (plVar11 == (longlong *)0x0) {
        *(int *)(param_1 + 0x1c0) = iVar2 + 1;
        if (*(int *)(param_1 + 0x1c4) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar2);
        }
        lVar6 = (longlong)iVar2 * 0x18;
        lVar4 = *plVar1;
        *(longlong *)(lVar6 + lVar4) = lVar3;
        *(undefined8 *)(lVar6 + 8 + lVar4) = 0;
        *(char *)(lVar6 + 0x10 + lVar4) = cVar13;
        *(undefined1 *)(lVar6 + 0x11 + lVar4) = 0;
        if (iVar2 != -1) {
          plVar11 = (longlong *)(*plVar1 + lVar6);
        }
      }
      else {
        cVar12 = (char)plVar11[2];
        *(char *)(plVar11 + 2) = cVar13;
      }
      if ((((lVar14 != 0) && (plVar11 != (longlong *)0x0)) && (cVar12 == '\0')) && (cVar13 != '\0'))
      {
        (**(code **)(*(longlong *)*plVar11 + 0x280))((longlong *)*plVar11,lVar14);
      }
      plVar16 = plVar16 + 1;
      local_res18 = local_res18 + 1;
    } while (local_res18 != uVar8);
  }
LAB_140e65695:
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x240);
  return;
}



// FUNCTION 140e656b0 FUN_140e656b0 body=534 status=ok
// SIG undefined FUN_140e656b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e656b0(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_2 == '\0') {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      FUN_142880530(uVar3,param_1 + 5);
      param_1[5] = 0;
    }
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        plVar2[2] = (longlong)FUN_140e5a0a0;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[4] = lVar1;
        *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_88 = 0;
      local_80 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_90 = 0xbf800000;
      local_98 = 0;
      local_70 = 0;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,param_1 + 5,&local_88,0x3e800000);
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
  }
  return;
}



// FUNCTION 140e658d0 FUN_140e658d0 body=2221 status=ok
// SIG undefined FUN_140e658d0(void)

void FUN_140e658d0(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  
  lVar10 = *(longlong *)(param_1 + 0x950);
  if (lVar10 == 0) {
    return;
  }
  plVar2 = *(longlong **)(lVar10 + 0xe68);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  fVar13 = *(float *)(param_1 + 0x5dc);
  if ((fVar13 < *(float *)(param_1 + 0xbe4)) ||
     (*(float *)(param_1 + 0xbe8) <= fVar13 && fVar13 != *(float *)(param_1 + 0xbe8))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((*(float *)(param_1 + 0xbf4) <= fVar13 && fVar13 != *(float *)(param_1 + 0xbf4)) ||
     (fVar13 < *(float *)(param_1 + 0xbf8))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (*(longlong *)(lVar10 + 0x10e0) == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_140adac80();
  }
  fVar13 = *(float *)(param_1 + 0x5b8);
  if ((((*(float *)(param_1 + 0xbc0) < fVar13) || (*(char *)(param_1 + 0x5a3) != '\0')) ||
      ((*(char *)(param_1 + 0x604) != '\0' && (*(char *)(param_1 + 0x60c) != '\0')))) ||
     (*(char *)(param_1 + 0x5a2) != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc14) = uVar7;
  if ((*(float *)(param_1 + 0xbc0) < fVar13) ||
     (((*(char *)(param_1 + 0x604) != '\0' && (*(char *)(param_1 + 0x60c) != '\0')) ||
      (*(char *)(param_1 + 0x5a2) != '\0')))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc15) = uVar7;
  if (*(char *)(param_1 + 0xc16) == '\0') {
    if ((*(char *)(param_1 + 0x959) == '\0') ||
       (fVar13 < *(float *)(param_1 + 0xbbc) || fVar13 == *(float *)(param_1 + 0xbbc))) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
  }
  else {
    bVar11 = *(float *)(param_1 + 0xbbc) <= fVar13 && fVar13 != *(float *)(param_1 + 0xbbc);
  }
  *(bool *)(param_1 + 0xc16) = bVar11;
  if (((*(char *)(param_1 + 0x5a2) == '\0') ||
      (fVar13 = *(float *)(param_1 + 0x5c0),
      fVar13 < *(float *)(param_1 + 0xba4) || fVar13 == *(float *)(param_1 + 0xba4))) ||
     ((*(char *)(param_1 + 0x5a6) != '\0' || (*(char *)(param_1 + 0xc40) != '\0')))) {
    fVar13 = *(float *)(param_1 + 0x5c0);
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc17) = uVar7;
  *(float *)(param_1 + 0xc18) = fVar13 / *(float *)(param_1 + 0xba8);
  if ((*(char *)(param_1 + 0x5a2) == '\0') &&
     (cVar6 = (**(code **)(*plVar2 + 0x570))(), cVar6 == '\0')) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0xc20) = uVar7;
  if ((*(char *)(param_1 + 0x959) != '\0') ||
     (((cVar6 = *(char *)(param_1 + 0x5a3), cVar6 == '\0' && (0.0 < *(float *)(param_1 + 0x5b8))) ||
      (*(float *)(param_1 + 0xbac) < *(float *)(param_1 + 0x5c0))))) {
    cVar6 = *(char *)(param_1 + 0x5a3);
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0xc21) = uVar7;
  if ((cVar6 == '\0') && (*(float *)(param_1 + 0x5b8) == 0.0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  fVar13 = *(float *)(param_1 + 0x5c0);
  *(undefined1 *)(param_1 + 0xc22) = uVar7;
  if ((*(float *)(param_1 + 0xbac) <= fVar13 && fVar13 != *(float *)(param_1 + 0xbac)) ||
     (*(float *)(param_1 + 0xbc4) < *(float *)(param_1 + 0x5b8))) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0xc23) = uVar7;
  if ((((cVar6 == '\0') || (*(float *)(param_1 + 0x5b8) != 0.0)) || (cVar5 != '\0')) ||
     ((*(char *)(param_1 + 0x95b) != '\0' || (*(char *)(param_1 + 0x9f8) != '\0')))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc24) = uVar7;
  if (((cVar6 == '\0') || (*(float *)(param_1 + 0x5b8) <= 0.0)) ||
     ((cVar5 != '\0' || (*(char *)(param_1 + 0x95b) != '\0')))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc25) = uVar7;
  if ((((cVar6 == '\0') || (*(char *)(param_1 + 0x9f8) == '\0')) || (cVar5 != '\0')) ||
     (*(char *)(param_1 + 0x95b) != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  cVar6 = *(char *)(param_1 + 0x95c);
  *(undefined1 *)(param_1 + 0xc26) = uVar7;
  if ((cVar6 == '\0') && (*(char *)(param_1 + 0x5a2) != '\0')) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0xc27) = uVar7;
  if ((cVar6 == '\0') && (*(char *)(param_1 + 0x5a2) == '\0')) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0xc28) = uVar7;
  if ((cVar6 == '\0') || (*(char *)(param_1 + 0x95d) != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc29) = uVar7;
  if (*(char *)(param_1 + 0x95a) == '\0') {
    bVar11 = *(char *)(param_1 + 0xc16) == '\0';
    if (*(char *)(param_1 + 0xc16) == '\0') goto LAB_140e65c00;
LAB_140e65c12:
    cVar6 = (**(code **)(*plVar2 + 0x570))(plVar2);
    uVar7 = 0;
    if (cVar6 != '\0') goto LAB_140e65c22;
  }
  else {
    bVar11 = true;
LAB_140e65c00:
    if ((fVar13 < *(float *)(param_1 + 0xb9c) || fVar13 == *(float *)(param_1 + 0xb9c)) ||
       (*(char *)(param_1 + 0x5a2) == '\0')) goto LAB_140e65c12;
LAB_140e65c22:
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc2a) = uVar7;
  if ((((*(char *)(param_1 + 0x5a8) != '\0') || (!bVar11)) ||
      (*(float *)(param_1 + 0xba0) < *(float *)(param_1 + 0x5c0) ||
       *(float *)(param_1 + 0xba0) == *(float *)(param_1 + 0x5c0))) ||
     (cVar6 = *(char *)(param_1 + 0x5a2), cVar6 == '\0')) {
    cVar6 = *(char *)(param_1 + 0x5a2);
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc2c) = uVar7;
  if (((cVar6 == '\0') || (*(char *)(param_1 + 0xc16) == '\0')) ||
     ((*(float *)(param_1 + 0x5c0) <= *(float *)(param_1 + 0xb9c) ||
      (*(char *)(param_1 + 0x95a) != '\0')))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc2b) = uVar7;
  if (((cVar6 == '\0') || (*(char *)(param_1 + 0xc16) == '\0')) ||
     ((*(float *)(param_1 + 0xba0) < *(float *)(param_1 + 0x5c0) ||
       *(float *)(param_1 + 0xba0) == *(float *)(param_1 + 0x5c0) ||
      (*(char *)(param_1 + 0x95a) != '\0')))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc2d) = uVar7;
  fVar13 = *(float *)(param_1 + 0x5b8);
  fVar12 = fVar13;
  if (*(float *)(param_1 + 0xbc8) != 0.0) {
    fVar12 = fVar13 / *(float *)(param_1 + 0xbc8);
  }
  fVar1 = *(float *)(param_1 + 0xbc0);
  *(float *)(param_1 + 0xbcc) = fVar12;
  *(bool *)(param_1 + 0xc2e) =
       *(float *)(param_1 + 3000) <= fVar13 && fVar13 != *(float *)(param_1 + 3000);
  if ((fVar13 <= fVar1) || (!bVar3)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc2f) = uVar7;
  if ((fVar13 <= fVar1) || (bVar3)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  fVar12 = *(float *)(param_1 + 0x5dc);
  *(undefined1 *)(param_1 + 0xc30) = uVar7;
  if ((fVar12 < *(float *)(param_1 + 0xbec)) ||
     (*(float *)(param_1 + 0xbf0) <= fVar12 && fVar12 != *(float *)(param_1 + 0xbf0))) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0xc31) = uVar7;
  if ((*(char *)(param_1 + 0xc32) == '\0') ||
     ((*(char *)(param_1 + 0x959) != '\0' && (*(float *)(param_1 + 0xbbc) <= fVar13)))) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  *(char *)(param_1 + 0xc32) = cVar8;
  if ((cVar8 != '\0') ||
     ((*(char *)(param_1 + 0x959) != '\0' && (*(float *)(param_1 + 0xbbc) <= fVar13)))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc33) = uVar7;
  if (((cVar8 == '\0') || (*(char *)(param_1 + 0x95a) != '\0')) ||
     (*(char *)(param_1 + 0x960) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc34) = uVar7;
  if (((cVar8 == '\0') && (*(char *)(param_1 + 0x95a) == '\0')) &&
     (*(char *)(param_1 + 0x960) != '\0')) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0xc35) = uVar7;
  if ((fVar13 <= fVar1) || (!bVar4)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc36) = uVar7;
  if ((fVar13 <= fVar1) || (bVar4)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc37) = uVar7;
  if (((fVar12 < *(float *)(param_1 + 0xbfc)) &&
      (*(float *)(param_1 + 0x5c8) <= 0.0 && *(float *)(param_1 + 0x5c8) != 0.0)) ||
     ((*(float *)(param_1 + 0xc00) <= fVar12 && fVar12 != *(float *)(param_1 + 0xc00) &&
      (0.0 < *(float *)(param_1 + 0x5c8) || *(float *)(param_1 + 0x5c8) == 0.0)))) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0xc38) = uVar7;
  if (((*(float *)(param_1 + 0xc04) <= fVar12 && fVar12 != *(float *)(param_1 + 0xc04)) &&
      (*(float *)(param_1 + 0x5c8) <= 0.0 && *(float *)(param_1 + 0x5c8) != 0.0)) ||
     ((fVar12 < *(float *)(param_1 + 0xc08) &&
      (0.0 < *(float *)(param_1 + 0x5c8) || *(float *)(param_1 + 0x5c8) == 0.0)))) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0xc39) = uVar7;
  if ((*(char *)(param_1 + 0x959) == '\0') ||
     (fVar13 < *(float *)(param_1 + 0xbbc) || fVar13 == *(float *)(param_1 + 0xbbc))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  lVar10 = *(longlong *)(param_1 + 0x8c0);
  *(undefined1 *)(param_1 + 0xc3a) = uVar7;
  if (*(longlong *)(*(longlong *)(param_1 + 0x950) + 0xd60) == lVar10) {
    lVar10 = *(longlong *)(param_1 + 0xc48);
  }
  *(longlong *)(param_1 + 0xc50) = lVar10;
  if (((!bVar11) ||
      (*(float *)(param_1 + 0xba0) < *(float *)(param_1 + 0x5c0) ||
       *(float *)(param_1 + 0xba0) == *(float *)(param_1 + 0x5c0))) || (cVar6 == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc58) = uVar7;
  if (((cVar6 == '\0') || (*(char *)(param_1 + 0xc16) == '\0')) ||
     ((*(float *)(param_1 + 0x5c0) <= *(float *)(param_1 + 0xbb0) ||
      (*(char *)(param_1 + 0x95a) != '\0')))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  cVar6 = *(char *)(param_1 + 0x5a3);
  *(undefined1 *)(param_1 + 0xc59) = uVar7;
  if (((cVar6 == '\0') && (cVar5 == '\0')) || (*(char *)(param_1 + 0x95b) != '\0')) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  *(byte *)(param_1 + 0xc5a) = bVar9;
  if ((cVar6 == '\0') || (*(char *)(param_1 + 0x95b) != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc5b) = uVar7;
  *(bool *)(param_1 + 0xc5c) =
       *(float *)(param_1 + 0xbb4) <= fVar13 && fVar13 != *(float *)(param_1 + 0xbb4);
  *(byte *)(param_1 + 0xc5d) = bVar9 ^ 1;
  if ((cVar6 == '\0') || (bVar9 != 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc6c) = uVar7;
  if ((cVar6 == '\0') || (bVar9 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc6d) = uVar7;
  if (*(char *)(param_1 + 0x95a) == '\0') {
    fVar13 = 0.0;
  }
  *(float *)(param_1 + 0xc60) = fVar13;
  cVar5 = (**(code **)(*plVar2 + 0x570))(plVar2);
  if ((cVar5 != '\0') || (uVar7 = 0, *(char *)(param_1 + 0x5a2) != '\0')) {
    uVar7 = 1;
  }
  cVar5 = *(char *)(param_1 + 0x959);
  *(undefined1 *)(param_1 + 0xc64) = uVar7;
  if ((*(char *)(param_1 + 0x5a2) == '\0') && (cVar5 == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  fVar13 = *(float *)(param_1 + 0x5b8);
  *(undefined1 *)(param_1 + 0xc65) = uVar7;
  *(bool *)(param_1 + 0xc66) = fVar13 <= 0.0;
  if (((cVar5 == '\0') || (fVar13 <= 0.0)) || (*(char *)(param_1 + 0x969) != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc67) = uVar7;
  if (((cVar5 == '\0') ||
      (fVar13 < *(float *)(param_1 + 0xbd8) || fVar13 == *(float *)(param_1 + 0xbd8))) ||
     (*(char *)(param_1 + 0x969) != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc68) = uVar7;
  if ((cVar5 != '\0') || (0.0 < fVar13)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc69) = uVar7;
  if (((fVar13 < *(float *)(param_1 + 0xbd8)) && (cVar5 == '\0')) ||
     ((*(char *)(param_1 + 0x962) == '\0' && (cVar5 == '\0')))) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0xc6a) = uVar7;
  if ((*(char *)(param_1 + 0x5a2) == '\0') || (*(float *)(param_1 + 0x5b8) <= 0.0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc6b) = uVar7;
  if ((*(char *)(param_1 + 0x5a2) == '\0') ||
     (*(float *)(param_1 + 0xba0) < *(float *)(param_1 + 0x5c0) ||
      *(float *)(param_1 + 0xba0) == *(float *)(param_1 + 0x5c0))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc6e) = uVar7;
  if ((*(char *)(param_1 + 0x962) != '\0') ||
     (*(float *)(param_1 + 0x5b8) <= *(float *)(param_1 + 0xbd8))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc6f) = uVar7;
  if ((*(char *)(param_1 + 0x968) == '\0') && ((*(byte *)(param_1 + 0xb90) & 8) != 0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)(param_1 + 0xc70) = uVar7;
  if (((!bVar11) || (*(float *)(param_1 + 0x5c0) <= 0.0)) || (*(char *)(param_1 + 0x5a2) == '\0')) {
    cVar5 = (**(code **)(*plVar2 + 0x570))(plVar2);
    uVar7 = 0;
    if (cVar5 == '\0') goto LAB_140e66137;
  }
  uVar7 = 1;
LAB_140e66137:
  *(undefined1 *)(param_1 + 0xc71) = uVar7;
  if (((*(char *)(param_1 + 0x5a2) == '\0') || (*(char *)(param_1 + 0xc16) == '\0')) ||
     ((*(float *)(param_1 + 0x5c0) <= 0.0 || (*(char *)(param_1 + 0x95a) != '\0')))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc72) = uVar7;
  return;
}



// FUNCTION 140e66180 FUN_140e66180 body=988 status=ok
// SIG undefined FUN_140e66180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e66180(undefined8 *param_1,float *param_2,float *param_3,undefined1 (*param_4) [12],
                  undefined1 (*param_5) [12],float param_6)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_88;
  float local_84;
  float local_80;
  undefined1 local_78 [8];
  float local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  fVar12 = *(float *)(*param_4 + 4);
  fVar14 = *(float *)*param_4;
  fVar15 = *(float *)(*param_4 + 8);
  fVar8 = *(float *)(param_1 + 2);
  fVar13 = *(float *)((longlong)param_1 + 0x14);
  local_80 = *(float *)(param_1 + 3);
  if (SQRT(fVar13 * fVar13 + fVar8 * fVar8 + local_80 * local_80) <=
      SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar15 * fVar15)) {
    fVar7 = param_2[3];
  }
  else {
    fVar7 = param_2[4];
  }
  fVar14 = fVar14 * *param_2;
  fVar12 = fVar12 * param_2[1];
  fVar15 = fVar15 * param_2[2];
  fVar9 = param_2[8];
  if ((param_2[8] <= fVar14) && (fVar9 = param_2[5], fVar14 <= param_2[5])) {
    fVar9 = fVar14;
  }
  fVar14 = param_2[9];
  if ((param_2[9] <= fVar12) && (fVar14 = param_2[6], fVar12 <= param_2[6])) {
    fVar14 = fVar12;
  }
  fVar12 = param_2[10];
  if ((param_2[10] <= fVar15) && (fVar12 = param_2[7], fVar15 <= param_2[7])) {
    fVar12 = fVar15;
  }
  fVar7 = fVar7 * param_6;
  if (0.0 <= fVar7) {
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = 0.0;
  }
  local_80 = (fVar12 - local_80) * fVar7 + local_80;
  *(ulonglong *)*param_4 =
       CONCAT44((fVar14 - fVar13) * fVar7 + fVar13,(fVar9 - fVar8) * fVar7 + fVar8);
  local_68 = *param_1;
  uStack_60 = param_1[1];
  *(float *)(*param_4 + 8) = local_80;
  fVar12 = *(float *)(*param_4 + 4);
  fVar14 = *(float *)(*param_4 + 8);
  auVar6._12_4_ = 0;
  auVar6._0_12_ = *param_4;
  *(undefined1 (*) [16])(param_1 + 2) = auVar6;
  FQuat::Rotator(&local_68,&local_88);
  fVar15 = param_3[5];
  fVar8 = *(float *)*param_5;
  *(float *)(*param_5 + 4) = fVar12 * param_3[4] + *(float *)(*param_5 + 4);
  *(float *)*param_5 = fVar14 * fVar15 + fVar8;
  pfVar3 = (float *)FRotator::Euler(&local_88,local_78);
  fVar12 = pfVar3[1];
  fVar14 = *pfVar3;
  fVar15 = pfVar3[2];
  pfVar3 = (float *)FRotator::Euler(param_5,&local_68);
  auVar6 = _DAT_1468703f0;
  if (SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar15 * fVar15) <=
      SQRT(*pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1] + pfVar3[2] * pfVar3[2])) {
    fVar12 = param_3[7];
  }
  else {
    fVar12 = param_3[8];
  }
  fVar15 = *(float *)(*param_5 + 4) * param_3[1];
  fVar8 = *(float *)(*param_5 + 4) * param_3[6] * param_3[2];
  fVar13 = *param_3 * *(float *)*param_5;
  fVar14 = param_3[0xd];
  if ((param_3[0xd] <= fVar15) && (fVar14 = param_3[10], fVar15 <= param_3[10])) {
    fVar14 = fVar15;
  }
  fVar15 = param_3[0xc];
  if ((param_3[0xc] <= fVar13) && (fVar15 = param_3[9], fVar13 <= param_3[9])) {
    fVar15 = fVar13;
  }
  fVar13 = param_3[0xe];
  if ((param_3[0xe] <= fVar8) && (fVar13 = param_3[0xb], fVar8 <= param_3[0xb])) {
    fVar13 = fVar8;
  }
  fVar8 = (float)DAT_1468703f0;
  fVar7 = DAT_1468703f0._4_4_;
  fVar9 = DAT_1468703f0._8_4_;
  fVar1 = DAT_1468703f0._12_4_;
  fVar12 = fVar12 * param_6;
  *(ulonglong *)*param_5 = CONCAT44(fVar14 - local_84,fVar15 - local_88);
  *(float *)(*param_5 + 8) = fVar13 - local_80;
  auVar5._12_4_ = 0;
  auVar5._0_12_ = *param_5;
  auVar6 = divps(auVar5,auVar6);
  fVar14 = *(float *)*param_5 - (float)(int)auVar6._0_4_ * fVar8;
  fVar13 = *(float *)(*param_5 + 4) - (float)(int)auVar6._4_4_ * fVar7;
  fVar10 = *(float *)(*param_5 + 8) - (float)(int)auVar6._8_4_ * fVar9;
  fVar11 = 0.0 - (float)(int)auVar6._12_4_ * fVar1;
  fVar15 = (float)(((uint)(fVar14 + fVar8) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                  (uint)(fVar14 + fVar8));
  fVar13 = (float)(((uint)(fVar13 + fVar7) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                  (uint)(fVar13 + fVar7));
  fVar10 = (float)(((uint)(fVar10 + fVar9) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                  (uint)(fVar10 + fVar9));
  fVar14 = (float)(((uint)(fVar11 + fVar1) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                  (uint)(fVar11 + fVar1));
  fVar15 = (float)(((uint)(fVar15 - fVar8) ^ (uint)fVar15) & -(uint)(_DAT_1468703e0 < fVar15) ^
                  (uint)fVar15);
  fVar13 = (float)(((uint)(fVar13 - fVar7) ^ (uint)fVar13) & -(uint)(fRam00000001468703e4 < fVar13)
                  ^ (uint)fVar13);
  fVar10 = (float)(((uint)(fVar10 - fVar9) ^ (uint)fVar10) & -(uint)(fRam00000001468703e8 < fVar10)
                  ^ (uint)fVar10);
  local_68 = CONCAT44(fVar13,fVar15);
  uStack_60 = CONCAT44(((uint)(fVar14 - fVar1) ^ (uint)fVar14) &
                       -(uint)(fRam00000001468703ec < fVar14) ^ (uint)fVar14,fVar10);
  fVar14 = 0.0;
  if ((0.0 <= fVar12) && (fVar14 = fVar12, 1.0 <= fVar12)) {
    fVar14 = 1.0;
  }
  local_70 = fVar10 * fVar14 + local_80;
  *(ulonglong *)*param_5 = CONCAT44(fVar13 * fVar14 + local_84,fVar15 * fVar14 + local_88);
  *(float *)(*param_5 + 8) = local_70;
  puVar4 = (undefined8 *)FRotator::Quaternion(param_5,&local_68);
  uVar2 = puVar4[1];
  *param_1 = *puVar4;
  param_1[1] = uVar2;
  return;
}



// FUNCTION 140e66560 FUN_140e66560 body=968 status=ok
// SIG undefined FUN_140e66560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e66560(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong local_120;
  undefined **local_118 [2];
  longlong *local_108;
  longlong local_100;
  code *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (0 < *(int *)(param_1 + 0x51c)) {
    if ((*(longlong **)(param_1 + 0x4b8) == (longlong *)0x0) ||
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x20))(), cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_128 = *(undefined8 *)(param_1 + 0x4b8);
      local_120 = *(longlong *)(param_1 + 0x4c0);
      if (local_120 != 0) {
        LOCK();
        *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
        UNLOCK();
      }
      uVar6 = FUN_1422312c0(param_1);
      lVar7 = FUN_14244c070(uVar6,&local_128);
      if (lVar7 == 0) {
        lVar7 = FUN_14270d050(param_1,local_118);
        local_168 = *(longlong *)(lVar7 + 8);
        local_160 = *(longlong **)(lVar7 + 0x10);
        if (local_160 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_160 + 1) = (int)local_160[1] + 1;
          UNLOCK();
        }
        local_118[0] = &PTR_FUN_143f740c8;
        if (local_100 != 0) {
          FMemory::Free();
        }
        local_118[0] = &PTR_FUN_143f73d18;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_108 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar1 = (int *)((longlong)local_108 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_108 + 8))(local_108,1);
            }
          }
        }
        if (local_168 == 0) {
          FWeakObjectPtr::operator=(&local_158,param_1);
          local_150 = local_158;
          local_b8 = (longlong *)0x0;
          local_a8 = 0;
          puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = &PTR_CopyToEmptyStorage_143fcfe50;
            *(undefined4 *)((longlong)puVar9 + 0xc) = local_150._4_4_;
            *(int *)(puVar9 + 1) = (int)local_158;
          }
          local_e8[0] = FUN_140e45b60;
          uVar6 = AActor::GetWorldTimerManager(param_1);
          local_98 = 0;
          local_90 = 0;
          FWeakObjectPtr::operator=(local_88,0);
          local_80 = 0;
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_e8);
          FUN_142880af0(uVar6,&local_98);
          if (local_38 != 0) {
            plVar10 = local_68;
            if (local_48 != (longlong *)0x0) {
              plVar10 = local_48;
            }
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x10))(plVar10,0);
            }
          }
          if (local_48 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
          if (local_a8 != 0) {
            plVar10 = local_d8;
            if (local_b8 != (longlong *)0x0) {
              plVar10 = local_b8;
            }
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x10))(plVar10,0);
            }
          }
          if (local_b8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        else {
          lVar7 = FUN_1422312c0(param_1);
          if (lVar7 != 0) {
            lVar8 = FUN_14141f270();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              local_148 = *(undefined8 *)(param_1 + 0x4b8);
              local_140 = *(longlong **)(param_1 + 0x4c0);
              if (local_140 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_140 + 1) = (int)local_140[1] + 1;
                UNLOCK();
              }
              FUN_140bf3550(lVar7,&local_148);
              plVar10 = local_140;
              if (local_140 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_140 + 1;
                lVar8 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_140)(local_140);
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
              local_138 = *(undefined8 *)(param_1 + 0x4b8);
              local_130 = *(longlong **)(param_1 + 0x4c0);
              if (local_130 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                UNLOCK();
              }
              FUN_140be6ca0(lVar7,&local_138);
              plVar10 = local_130;
              if (local_130 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_130 + 1;
                lVar7 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_130)(local_130);
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
            }
          }
        }
        plVar10 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_160 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_160 + 8))(local_160,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e66930 FUN_140e66930 body=9 status=ok
// SIG undefined FUN_140e66930(void)

void FUN_140e66930(longlong param_1)

{
  FUN_1407c3030(param_1 + 0x38);
  return;
}



// FUNCTION 140e66950 FUN_140e66950 body=1023 status=ok
// SIG undefined FUN_140e66950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e66950(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_118 [32];
  float local_f8;
  uint local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 != 0) {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((*(longlong *)(lVar4 + 400) != 0) && (*(longlong *)(*(longlong *)(lVar4 + 400) + 0xa0) != 0)
       ) {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar6 = 0;
      uVar7 = uVar6;
      if (*(longlong *)(lVar4 + 400) != 0) {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0xa0);
      }
      FUN_142880530(uVar7,param_1 + 0x46d);
      param_1[0x46d] = 0;
      if (param_1[0x46f] != 0) {
        FUN_142227350(param_1[0x46f],0,1);
        param_1[0x46f] = 0;
      }
      lVar4 = param_1[0x470];
      plVar5 = (longlong *)param_1[0x46e];
      *(undefined1 *)(param_1 + 0x46c) = 0;
      param_1[0x46e] = lVar4;
      param_1[0x470] = 0;
      if (lVar4 == 0) {
        if (*(char *)((longlong)param_1 + 0x2361) == '\0') {
          if (plVar5 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*plVar5 + 0x9a0))(plVar5,4);
          return;
        }
        lVar4 = (**(code **)(param_1[0x1b1] + 0x170))(param_1 + 0x1b1);
        if (lVar4 == 0) {
          return;
        }
        uVar6 = (**(code **)(param_1[0x1b1] + 0x170))(param_1 + 0x1b1);
        local_e0 = 0;
        local_e8 = 0;
        local_f0 = 0;
        local_f8 = 1.0;
        FUN_143057c50(uVar6,&local_d8,3);
        local_c0 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
      }
      else {
        local_f8 = (float)CONCAT31(local_f8._1_3_,1);
        FUN_140c57820(param_1,lVar4,0,1);
        if (*(char *)((longlong)param_1 + 0x2361) == '\0') {
          return;
        }
        *(undefined2 *)(param_1 + 0x46c) = 2;
        fVar9 = (float)(**(code **)(*(longlong *)param_1[0x46e] + 0x7e8))();
        lVar4 = *(longlong *)param_1[0x46e];
        uVar3 = (**(code **)(lVar4 + 0x7f0))();
        local_e8 = 0;
        local_f0 = local_f0 & 0xffffff00;
        local_f8 = fVar9;
        (**(code **)(lVar4 + 0x990))(param_1[0x46e],&local_c8,uVar3,0x3f800000);
        if (fVar9 <= 0.0) {
          if (local_c8 != (longlong *)0x0) {
            fVar9 = (float)(**(code **)(*local_c8 + 0x58))();
          }
          if (fVar9 <= 0.01) {
            fVar9 = 0.01;
          }
        }
        uStack_d0 = 0;
        local_d8 = &LAB_140e66940;
        lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar4 + 400) != 0) {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0xa0);
        }
        plVar5 = (longlong *)FMemory::Realloc(0,0x30);
        local_b8 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar5 + 1,param_1);
          *(undefined4 *)(plVar5 + 2) = (undefined4)local_d8;
          *(undefined4 *)((longlong)plVar5 + 0x14) = local_d8._4_4_;
          *(undefined4 *)(plVar5 + 3) = uStack_d0;
          *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_cc;
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
        local_f0 = 0xbf800000;
        local_f8 = (float)((uint)local_f8 & 0xffffff00);
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar6,param_1 + 0x46d,&local_a8,fVar9);
        if (local_48 != 0) {
          plVar8 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar8 = local_58;
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          local_b8 = (longlong *)FMemory::Realloc(plVar5,0,0);
          if (local_b8 != (longlong *)0x0) {
            FMemory::Free(local_b8);
          }
        }
      }
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_c0 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
  }
  return;
}



// FUNCTION 140e66d50 FUN_140e66d50 body=342 status=ok
// SIG undefined FUN_140e66d50(void)

float FUN_140e66d50(undefined8 *param_1,float *param_2,undefined8 param_3,float param_4,
                   float param_5,float param_6)

{
  undefined8 uVar1;
  char cVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_78;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_48 [64];
  
  uVar1 = *param_1;
  local_58 = (float)uVar1;
  local_78._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  local_70 = *(float *)(param_1 + 1) - param_6;
  local_50 = *(float *)(param_1 + 1) + param_4;
  fVar6 = local_58 - *param_2;
  local_54 = local_78._4_4_;
  fVar5 = local_78._4_4_ - param_2[1];
  fVar4 = local_50 - param_2[2];
  local_78 = uVar1;
  pfVar3 = (float *)FRotator::Vector(param_3,local_48);
  fVar4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) * 100.0;
  local_68 = fVar4 * *pfVar3 + *param_2;
  local_64 = fVar4 * pfVar3[1] + param_2[1];
  local_60 = fVar4 * pfVar3[2] + param_2[2];
  param_6 = -1.0;
  cVar2 = FUN_140e66eb0(&local_78,&local_58,param_2,&local_68,&param_6);
  if ((cVar2 != '\0') && (param_6 <= param_5)) {
    return (param_5 - param_6) / param_5;
  }
  return 0.0;
}



// FUNCTION 140e66eb0 FUN_140e66eb0 body=722 status=ok
// SIG undefined FUN_140e66eb0(void)

undefined8 FUN_140e66eb0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  
  *param_5 = -1.0;
  fVar6 = *param_4 - *param_3;
  fVar4 = param_4[1] - param_3[1];
  fVar5 = param_4[2] - param_3[2];
  if (((0.0001 < ABS(fVar6)) || (0.0001 < ABS(fVar4))) || (0.0001 < ABS(fVar5))) {
    fVar3 = *param_2 - *param_1;
    fVar7 = param_2[1] - param_1[1];
    fVar2 = param_2[2] - param_1[2];
    if (((0.0001 < ABS(fVar3)) || (0.0001 < ABS(fVar7))) || (0.0001 < ABS(fVar2))) {
      fVar1 = param_1[1] - param_3[1];
      fVar11 = param_1[2] - param_3[2];
      fVar8 = fVar4 * fVar1 + fVar6 * (*param_1 - *param_3) + fVar5 * fVar11;
      fVar10 = fVar4 * fVar7 + fVar3 * fVar6 + fVar5 * fVar2;
      fVar12 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
      fVar9 = (fVar3 * fVar3 + fVar7 * fVar7 + fVar2 * fVar2) * fVar12 - fVar10 * fVar10;
      if (1e-08 < ABS(fVar9)) {
        fVar9 = (fVar10 * fVar8 -
                (fVar3 * (*param_1 - *param_3) + fVar1 * fVar7 + fVar11 * fVar2) * fVar12) / fVar9;
        fVar12 = (fVar9 * fVar10 + fVar8) / fVar12;
        fVar6 = (fVar3 * fVar9 + *param_1) - (fVar6 * fVar12 + *param_3);
        fVar4 = (fVar9 * fVar7 + param_1[1]) - (fVar4 * fVar12 + param_3[1]);
        fVar5 = (fVar2 * fVar9 + param_1[2]) - (fVar5 * fVar12 + param_3[2]);
        *param_5 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
        if (((0.0 <= fVar9) && (fVar9 <= 1.0)) && ((0.0 <= fVar12 && (fVar12 <= 1.0)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140e671a0 FUN_140e671a0 body=66 status=ok
// SIG undefined FUN_140e671a0(void)

void FUN_140e671a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445c43e8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1445c4430;
  }
  return;
}



// FUNCTION 140e671f0 FUN_140e671f0 body=68 status=ok
// SIG undefined FUN_140e671f0(void)

void FUN_140e671f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 6) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7e070();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 6) != '\0') {
        *(undefined1 *)(puVar1 + 6) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      *(undefined1 *)(puVar1 + 6) = 1;
    }
  }
  return;
}



// FUNCTION 140e67240 FUN_140e67240 body=70 status=ok
// SIG undefined FUN_140e67240(void)

undefined1 FUN_140e67240(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 6) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7e070();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 6) != '\0') {
        *(undefined1 *)(puVar1 + 6) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      *(undefined1 *)(puVar1 + 6) = 1;
    }
  }
  return 1;
}



// FUNCTION 140e67290 FUN_140e67290 body=66 status=ok
// SIG undefined FUN_140e67290(void)

void FUN_140e67290(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445c4478;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1445c44c0;
  }
  return;
}



// FUNCTION 140e672e0 FUN_140e672e0 body=68 status=ok
// SIG undefined FUN_140e672e0(void)

void FUN_140e672e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 6) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7de10();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 6) != '\0') {
        *(undefined1 *)(puVar1 + 6) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      *(undefined1 *)(puVar1 + 6) = 1;
    }
  }
  return;
}



// FUNCTION 140e67330 FUN_140e67330 body=70 status=ok
// SIG undefined FUN_140e67330(void)

undefined1 FUN_140e67330(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 6) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7de10();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 6) != '\0') {
        *(undefined1 *)(puVar1 + 6) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      *(undefined1 *)(puVar1 + 6) = 1;
    }
  }
  return 1;
}



// FUNCTION 140e67380 FUN_140e67380 body=66 status=ok
// SIG undefined FUN_140e67380(void)

void FUN_140e67380(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445c4508;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1445c4550;
  }
  return;
}



// FUNCTION 140e673d0 FUN_140e673d0 body=60 status=ok
// SIG undefined FUN_140e673d0(void)

void FUN_140e673d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 4) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7dc40();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 4) != '\0') {
        *(undefined1 *)(puVar1 + 4) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      *(undefined1 *)(puVar1 + 4) = 1;
    }
  }
  return;
}



// FUNCTION 140e67410 FUN_140e67410 body=62 status=ok
// SIG undefined FUN_140e67410(void)

undefined1 FUN_140e67410(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 4) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7dc40();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 4) != '\0') {
        *(undefined1 *)(puVar1 + 4) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      *(undefined1 *)(puVar1 + 4) = 1;
    }
  }
  return 1;
}



// FUNCTION 140e67450 FUN_140e67450 body=66 status=ok
// SIG undefined FUN_140e67450(void)

void FUN_140e67450(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445c4598;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1445c45e0;
  }
  return;
}



// FUNCTION 140e674a0 FUN_140e674a0 body=78 status=ok
// SIG undefined FUN_140e674a0(void)

void FUN_140e674a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 7) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7e5d0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 7) != '\0') {
        *(undefined1 *)(puVar1 + 7) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      puVar1[6] = puVar3[6];
      *(undefined1 *)(puVar1 + 7) = 1;
    }
  }
  return;
}



// FUNCTION 140e674f0 FUN_140e674f0 body=80 status=ok
// SIG undefined FUN_140e674f0(void)

undefined1 FUN_140e674f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 7) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7e5d0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 7) != '\0') {
        *(undefined1 *)(puVar1 + 7) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      puVar1[6] = puVar3[6];
      *(undefined1 *)(puVar1 + 7) = 1;
    }
  }
  return 1;
}



// FUNCTION 140e67540 FUN_140e67540 body=66 status=ok
// SIG undefined FUN_140e67540(void)

void FUN_140e67540(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445c4628;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1445c4670;
  }
  return;
}



// FUNCTION 140e67590 FUN_140e67590 body=86 status=ok
// SIG undefined FUN_140e67590(void)

void FUN_140e67590(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 9) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7e340();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 9) != '\0') {
        *(undefined1 *)(puVar1 + 9) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      puVar1[8] = puVar3[8];
      *(undefined1 *)(puVar1 + 9) = 1;
    }
  }
  return;
}



// FUNCTION 140e675f0 FUN_140e675f0 body=88 status=ok
// SIG undefined FUN_140e675f0(void)

undefined1 FUN_140e675f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 9) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7e340();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 9) != '\0') {
        *(undefined1 *)(puVar1 + 9) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      puVar1[8] = puVar3[8];
      *(undefined1 *)(puVar1 + 9) = 1;
    }
  }
  return 1;
}



// FUNCTION 140e67650 FUN_140e67650 body=66 status=ok
// SIG undefined FUN_140e67650(void)

void FUN_140e67650(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445c46b8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1445c4700;
  }
  return;
}



// FUNCTION 140e676b0 FUN_140e676b0 body=20 status=ok
// SIG undefined FUN_140e676b0(void)

undefined1 FUN_140e676b0(longlong param_1)

{
  FUN_140e7dbe0(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 140e676d0 FUN_140e676d0 body=66 status=ok
// SIG undefined FUN_140e676d0(void)

void FUN_140e676d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445c4748;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1445c4790;
  }
  return;
}



// FUNCTION 140e67720 FUN_140e67720 body=70 status=ok
// SIG undefined FUN_140e67720(void)

void FUN_140e67720(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 5) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7e3b0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 5) != '\0') {
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      puVar1[4] = puVar3[4];
      *(undefined1 *)(puVar1 + 5) = 1;
    }
  }
  return;
}



// FUNCTION 140e67770 FUN_140e67770 body=72 status=ok
// SIG undefined FUN_140e67770(void)

undefined1 FUN_140e67770(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 5) == '\0') {
    puVar3 = (undefined8 *)FUN_140e7e3b0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 5) != '\0') {
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      puVar1[4] = puVar3[4];
      *(undefined1 *)(puVar1 + 5) = 1;
    }
  }
  return 1;
}



// FUNCTION 140e677c0 FUN_140e677c0 body=66 status=ok
// SIG undefined FUN_140e677c0(void)

void FUN_140e677c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445c47d8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1445c4820;
  }
  return;
}



// FUNCTION 140e67820 FUN_140e67820 body=26 status=ok
// SIG undefined FUN_140e67820(void)

undefined1 FUN_140e67820(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x70) == '\0') {
    FUN_140e843d0();
  }
  return 1;
}



// FUNCTION 140e67840 FUN_140e67840 body=270 status=ok
// SIG undefined FUN_140e67840(void)

void FUN_140e67840(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar2 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo();
      iVar2 = (int)param_1[1];
    }
    puVar4 = (undefined4 *)*param_2;
    lVar3 = (longlong)iVar2 * 0x30 + *param_1;
    iVar2 = iVar1;
    do {
      local_50 = *puVar4;
      local_4c = puVar4[1];
      local_48 = puVar4[2];
      local_68 = *(undefined8 *)(puVar4 + 4);
      local_38 = 0;
      local_30 = 0;
      local_40 = 0;
      FString::FString(local_60,puVar4 + 6);
      FSoftObjectPath::operator=(&local_40,&local_68);
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar3,&local_50);
      *(undefined1 *)(lVar3 + 0x28) = 0;
      if (local_38 != 0) {
        FMemory::Free();
      }
      lVar3 = lVar3 + 0x30;
      puVar4 = puVar4 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 140e67950 FUN_140e67950 body=457 status=ok
// SIG undefined FUN_140e67950(void)

longlong FUN_140e67950(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong **pplVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  byte *pbVar5;
  byte local_58;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  local_28 = 0;
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 == (longlong *)0x0) {
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      }
      local_40 = 0;
    }
  }
  else {
    *plVar3 = (longlong)&PTR_FUN_1441f18f8;
    FWeakObjectPtr::operator=(plVar3 + 1,param_3);
    plVar3[2] = param_4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_1441f1940;
    FUN_140a2f890(plVar3,&local_48);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  plVar3 = (longlong *)(param_1 + 0x198);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(int *)(param_1 + 0x1a0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1a4) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar3,iVar2);
  }
  pbVar5 = (byte *)((longlong)iVar2 * 0x38 + *plVar3);
  *pbVar5 = local_58 & 0xfd | 1;
  pplVar1 = (longlong **)(pbVar5 + 0x10);
  *(undefined8 *)(pbVar5 + 8) = param_2;
  *pplVar1 = (longlong *)0x0;
  pbVar5[0x18] = 0;
  pbVar5[0x19] = 0;
  pbVar5[0x1a] = 0;
  pbVar5[0x1b] = 0;
  if (((&local_48 != pplVar1) && (local_40 != 0)) && (local_48 != (longlong *)0x0)) {
    (**(code **)(*local_48 + 0x30))(local_48,pplVar1);
  }
  *(undefined4 *)(pbVar5 + 0x20) = local_38;
  *(undefined4 *)(pbVar5 + 0x24) = local_34;
  *(undefined8 *)(pbVar5 + 0x28) = local_30;
  *(undefined4 *)(pbVar5 + 0x30) = local_28;
  iVar2 = *(int *)(param_1 + 0x1a0);
  lVar4 = *plVar3;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  return (longlong)(iVar2 + -1) * 0x38 + lVar4;
}



// FUNCTION 140e67b20 FUN_140e67b20 body=229 status=ok
// SIG undefined FUN_140e67b20(void)

void FUN_140e67b20(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_1440f9050;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
  }
  if ((longlong *)&local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140e67c10 FUN_140e67c10 body=159 status=ok
// SIG undefined FUN_140e67c10(void)

undefined8 FUN_140e67c10(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)*param_1;
  plVar1 = plVar5 + (int)param_1[1];
  do {
    if (plVar5 == plVar1) {
      return 0;
    }
    if (*plVar5 != 0) {
      lVar2 = FUN_142dfdfe0();
      lVar6 = *plVar5;
      for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar2) goto LAB_140e67c60;
      }
    }
    lVar6 = 0;
LAB_140e67c60:
    if (*param_2 != 0) {
      lVar3 = FUN_142dfdfe0();
      lVar4 = *param_2;
      for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) goto LAB_140e67c86;
      }
    }
    lVar4 = 0;
LAB_140e67c86:
    if (lVar6 == lVar4) {
      return 1;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 140e67cb0 CopyToEmpty<TSoftClassPtr<AItem>_> body=300 status=ok
// SIG undefined CopyToEmpty<TSoftClassPtr<AItem>_>(void)

void TArray<TSoftClassPtr<AItem>,FDefaultAllocator>::CopyToEmpty<TSoftClassPtr<AItem>_>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 local_40 [24];
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
            (param_1,param_5 + param_3,param_4);
  puVar1 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)(param_2 + 4);
    puVar2 = (undefined8 *)(puVar1 + 8);
    do {
      puVar2[-1] = 0;
      *puVar2 = 0;
      *puVar1 = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + -0x1c) = 0;
      puVar2[-2] = 0;
      *(undefined4 *)puVar2 = 0;
      if (0x7fffffff < *(uint *)((longlong)puVar2 + 4)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2 + -1,0);
      }
      if ((undefined2 *)puVar2[-1] != (undefined2 *)0x0) {
        *(undefined2 *)puVar2[-1] = 0;
      }
      *(undefined4 *)(puVar2 + -3) = 0;
      *puVar1 = puVar3[-1];
      *(undefined4 *)((longlong)puVar2 + -0x1c) = *puVar3;
      *(undefined4 *)(puVar2 + -3) = puVar3[1];
      FString::FString(local_40,puVar3 + 5);
      FSoftObjectPath::operator=(puVar2 + -2);
      puVar1 = puVar1 + 10;
      puVar2 = puVar2 + 5;
      puVar3 = puVar3 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e67de0 FUN_140e67de0 body=140 status=ok
// SIG undefined FUN_140e67de0(void)

longlong * FUN_140e67de0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  plVar1 = plVar5 + (int)param_1[1];
  do {
    if (plVar5 == plVar1) {
      return (longlong *)0x0;
    }
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      lVar4 = FUN_14148cad0();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return plVar5;
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 140e67e70 FUN_140e67e70 body=238 status=ok
// SIG undefined FUN_140e67e70(void)

longlong * FUN_140e67e70(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  plVar4 = (longlong *)*param_1;
  plVar1 = plVar4 + (int)param_1[1];
  if (plVar4 != plVar1) {
    do {
      lVar2 = *plVar4;
      local_28 = 0;
      local_20 = 0;
      local_30 = 0;
      local_40 = *(undefined4 *)(lVar2 + 0x90);
      local_3c = *(undefined4 *)(lVar2 + 0x94);
      local_38 = *(undefined4 *)(lVar2 + 0x98);
      local_58 = *(undefined8 *)(lVar2 + 0xa0);
      FString::FString(local_50,lVar2 + 0xa8);
      FSoftObjectPath::operator=(&local_30,&local_58);
      cVar3 = FSoftObjectPath::operator==(&local_30,param_2 + 0x10);
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (cVar3 != '\0') {
        return plVar4;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return (longlong *)0x0;
}



// FUNCTION 140e67f60 FUN_140e67f60 body=401 status=ok
// SIG undefined FUN_140e67f60(void)

void FUN_140e67f60(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar7 = iVar6 * 2 + 1;
    iVar4 = iVar7;
    iVar9 = iVar6;
joined_r0x000140e67f9b:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar6 * 2;
        iVar8 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          cVar5 = FUN_140e6dd20(param_4,param_1[iVar7 + 2],param_1[iVar8]);
          if (cVar5 != '\0') {
            iVar8 = iVar7;
          }
          iVar8 = iVar8 + 1;
        }
        puVar10 = param_1 + iVar8;
        puVar1 = param_1 + iVar6;
        cVar5 = FUN_140e6dd20(param_4,param_1[iVar6],param_1[iVar8]);
        if (cVar5 != '\0') {
          if (puVar1 != puVar10) {
            uVar3 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar3;
          }
          iVar7 = iVar8 * 2 + 1;
          iVar6 = iVar8;
          goto joined_r0x000140e67f9b;
        }
      }
      iVar7 = iVar4 + -2;
      iVar6 = iVar9 + -1;
      iVar4 = iVar7;
      iVar9 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar3 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar3;
      }
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar6 * 2;
          iVar7 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            cVar5 = FUN_140e6dd20(param_4,param_1[iVar4 + 2],param_1[iVar7]);
            if (cVar5 != '\0') {
              iVar7 = iVar4;
            }
            iVar7 = iVar7 + 1;
          }
          puVar1 = param_1 + iVar7;
          puVar2 = param_1 + iVar6;
          cVar5 = FUN_140e6dd20(param_4,param_1[iVar6],param_1[iVar7]);
          if (cVar5 == '\0') break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar6 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140e68100 FUN_140e68100 body=142 status=ok
// SIG undefined FUN_140e68100(void)

longlong FUN_140e68100(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar4 = lVar1;
  while( true ) {
    if (lVar4 == lVar1 + (longlong)(int)lVar2 * 0x48) {
      return 0xffffffff;
    }
    local_res8 = *param_2;
    cVar3 = FUN_140e67c10(lVar4 + 8,&local_res8);
    if (cVar3 != '\0') break;
    lVar4 = lVar4 + 0x48;
  }
  return (lVar4 - lVar1) / 0x48;
}



// FUNCTION 140e68190 FUN_140e68190 body=163 status=ok
// SIG undefined FUN_140e68190(void)

longlong FUN_140e68190(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar4 = lVar1;
  while( true ) {
    if (lVar4 == (longlong)(int)lVar2 * 0x30 + lVar1) {
      return 0xffffffff;
    }
    cVar3 = FSoftObjectPath::operator==(param_2 + 0x10,lVar4 + 0x10);
    if ((cVar3 != '\0') && (*(char *)(param_2 + 0x28) == *(char *)(lVar4 + 0x28))) break;
    lVar4 = lVar4 + 0x30;
  }
  return (lVar4 - lVar1) / 0x30;
}



// FUNCTION 140e68240 FUN_140e68240 body=133 status=ok
// SIG undefined FUN_140e68240(void)

longlong FUN_140e68240(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar4 = (longlong)(int)param_1[1] * 0x30 + lVar1;
  if (lVar1 != lVar4) {
    lVar3 = lVar1;
    do {
      cVar2 = FSoftObjectPath::operator==(param_2 + 0x10,lVar3 + 0x10);
      if (cVar2 != '\0') {
        return (lVar3 - lVar1) / 0x30;
      }
      lVar3 = lVar3 + 0x30;
    } while (lVar3 != lVar4);
  }
  return 0xffffffff;
}



// FUNCTION 140e682d0 FUN_140e682d0 body=600 status=ok
// SIG undefined FUN_140e682d0(void)

longlong FUN_140e682d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  
  lVar1 = *param_1;
  lVar9 = (longlong)(int)param_1[1] * 0x30 + lVar1;
  if (lVar1 != lVar9) {
    plVar10 = (longlong *)(lVar1 + 0x10);
    lVar8 = lVar1;
    do {
      cVar3 = FSoftObjectPath::operator==(param_2 + 0x10,plVar10);
      if (cVar3 != '\0') goto LAB_140e68508;
      lVar4 = FWeakObjectPtr::Get(lVar8);
      if (lVar4 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)plVar10[-1]) && (*plVar10 != 0)) {
          lVar4 = FUN_141796df0(plVar10);
          FWeakObjectPtr::operator=(lVar8,lVar4);
          if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(plVar10 + -1) = DAT_1464b56f4;
          }
          lVar4 = FWeakObjectPtr::Get(lVar8);
          if (lVar4 != 0) goto LAB_140e68395;
        }
LAB_140e683cb:
        lVar4 = 0;
      }
      else {
LAB_140e68395:
        lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140e683cb;
      }
      lVar5 = FWeakObjectPtr::Get();
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_2 + 8)) && (*(longlong *)(param_2 + 0x10) != 0)) {
          lVar5 = FUN_141796df0(param_2 + 0x10);
          FWeakObjectPtr::operator=(param_2,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_2 + 8) = DAT_1464b56f4;
          }
          lVar5 = FWeakObjectPtr::Get(param_2);
          if (lVar5 != 0) goto LAB_140e68442;
        }
LAB_140e68478:
        lVar5 = 0;
      }
      else {
LAB_140e68442:
        lVar6 = UUGStartScreenUW::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140e68478;
      }
      if ((lVar4 != 0) && (lVar5 != 0)) {
        lVar4 = *(longlong *)(lVar4 + 0x90);
        if (lVar4 != 0) {
          lVar7 = FUN_1428dfc70();
          lVar6 = lVar4;
          do {
            if (lVar6 == lVar7) goto LAB_140e684b2;
            lVar6 = *(longlong *)(lVar6 + 0x30);
          } while (lVar6 != 0);
        }
        lVar4 = 0;
LAB_140e684b2:
        lVar5 = *(longlong *)(lVar5 + 0x90);
        if (lVar5 != 0) {
          lVar7 = FUN_1428dfc70();
          lVar6 = lVar5;
          do {
            if (lVar6 == lVar7) goto LAB_140e684d8;
            lVar6 = *(longlong *)(lVar6 + 0x30);
          } while (lVar6 != 0);
        }
        lVar5 = 0;
LAB_140e684d8:
        if (lVar4 == lVar5) {
LAB_140e68508:
          return (lVar8 - lVar1) / 0x30;
        }
      }
      lVar8 = lVar8 + 0x30;
      plVar10 = plVar10 + 6;
    } while (lVar8 != lVar9);
  }
  return 0xffffffff;
}



// FUNCTION 140e68530 FUN_140e68530 body=706 status=ok
// SIG undefined FUN_140e68530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e68530(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar7 = &local_348;
    do {
      puVar5 = (undefined8 *)*plVar7;
      puVar4 = (undefined8 *)plVar7[1];
      local_358 = plVar7[2];
      lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_140e68610:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar5 = puVar10 + (lVar3 >> 1);
          if (puVar5 != puVar10) {
            uVar1 = *puVar5;
            *puVar5 = *puVar10;
            *puVar10 = uVar1;
          }
          puVar8 = puVar4 + 1;
          puVar5 = puVar10;
LAB_140e68647:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x000140e68650;
          goto LAB_140e68662;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            cVar2 = FUN_140e6dd20(param_4,*puVar8,*puVar5);
            if (cVar2 != '\0') {
              puVar8 = puVar5;
            }
          }
          if (puVar8 != puVar4) {
            uVar1 = *puVar8;
            *puVar8 = *puVar4;
            *puVar4 = uVar1;
          }
        }
        goto LAB_140e6873f;
      }
LAB_140e68730:
      FUN_140e67f60(puVar5,lVar3,param_3,param_4);
LAB_140e6873f:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  return;
code_r0x000140e68650:
  cVar2 = FUN_140e6dd20(param_4,*puVar10,*puVar5);
  if (cVar2 == '\0') goto LAB_140e68647;
LAB_140e68662:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    cVar2 = FUN_140e6dd20(param_4,*puVar8,*puVar10);
  } while (cVar2 == '\0');
  if (puVar5 <= puVar8) {
    if (puVar5 != puVar8) {
      uVar1 = *puVar5;
      *puVar5 = *puVar8;
      *puVar8 = uVar1;
    }
    goto LAB_140e68647;
  }
  if (puVar10 != puVar8) {
    uVar1 = *puVar10;
    *puVar10 = *puVar8;
    *puVar8 = uVar1;
  }
  iVar6 = iVar6 + -1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffff8U)) {
    if (puVar5 < puVar4) {
      *plVar7 = (longlong)puVar5;
      plVar7[1] = (longlong)puVar4;
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_140e6873f;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *plVar7 = (longlong)puVar10;
      plVar7[1] = (longlong)(puVar9 + -2);
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_140e6873f;
  }
  lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_140e68730;
  goto LAB_140e68610;
}



// FUNCTION 140e68800 IsA<UObject> body=69 status=ok
// SIG undefined IsA<UObject>(void)

ulonglong UObjectBaseUtility::IsA<UObject>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UObject::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140e68850 FUN_140e68850 body=179 status=ok
// SIG undefined FUN_140e68850(void)

undefined8 * FUN_140e68850(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x58);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_1445cb880;
    puVar2[2] = &PTR_FUN_1445c8f30;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[5] = *param_1;
    lVar1 = param_1[1];
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[2] = &PTR_FUN_1445c8f60;
    FString::FString(puVar2 + 8,param_2);
    puVar2[10] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140e68910 FUN_140e68910 body=199 status=ok
// SIG undefined FUN_140e68910(void)

undefined8 * FUN_140e68910(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x70);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_FUN_1445cb890;
    puVar2[2] = &PTR_FUN_1445c8f30;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[5] = *param_1;
    lVar1 = param_1[1];
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[2] = &PTR__scalar_deleting_destructor__1445c8f80;
    FString::FString(puVar2 + 8,param_2);
    FString::FString(puVar2 + 10,param_3);
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar3 = puVar2;
  }
  return puVar3;
}



// FUNCTION 140e689e0 FUN_140e689e0 body=184 status=ok
// SIG undefined FUN_140e689e0(void)

undefined8 * FUN_140e689e0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x78);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_1445cb850;
    puVar2[2] = &PTR_FUN_1445c8f30;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[5] = *param_1;
    lVar1 = param_1[1];
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[2] = &PTR_FUN_1445c8f40;
    FString::FString(puVar2 + 8,param_2);
    puVar2[10] = 0;
    *(undefined2 *)(puVar2 + 0xb) = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar3 = puVar2;
  }
  return puVar3;
}



// FUNCTION 140e68aa0 FUN_140e68aa0 body=246 status=ok
// SIG undefined FUN_140e68aa0(void)

undefined8 * FUN_140e68aa0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x68);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &PTR_LAB_1445cb860;
    puVar3[2] = &PTR_FUN_1445c8f30;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar3[5] = *param_1;
    lVar2 = param_1[1];
    puVar3[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[2] = &PTR_FUN_1445c8f50;
    FString::FString(puVar3 + 8,param_2);
    puVar3[10] = 0;
    iVar1 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(puVar3 + 0xb) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x5c) = 0;
      puVar3[0xc] = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar3 + 10,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar3[10],_Src,(longlong)iVar1);
      puVar3[0xc] = 0;
    }
  }
  return puVar3;
}



// FUNCTION 140e68ba0 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 140e68c40 FUN_140e68c40 body=349 status=ok
// SIG undefined FUN_140e68c40(void)

void FUN_140e68c40(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_38;
  longlong local_30 [5];
  
  if (*(longlong *)*param_2 != 0) {
    cVar2 = FUN_1407ce010((longlong *)*param_2 + 1);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)*param_1;
      plVar3 = plVar4 + (longlong)(int)param_1[1] * 5;
      if (plVar4 != plVar3) {
        do {
          if ((*(longlong *)*plVar4 == *(longlong *)*param_2) &&
             (*(longlong *)(((longlong *)*plVar4)[1] + 0x28) ==
              *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
            FUN_14217e740(&local_38);
            FUN_142194380(&local_38,0xf,0,1,0);
            local_38 = *param_3;
            FUN_14217f450(plVar4 + 1,&local_38);
            plVar3 = &local_38;
            goto LAB_140e68d3d;
          }
          plVar4 = plVar4 + 5;
        } while (plVar4 != plVar3);
      }
      local_38 = *param_2;
      FUN_14217e740(local_30);
      FUN_142194380(local_30,0xf,0,1,0);
      iVar1 = (int)param_1[1];
      local_30[0] = *param_3;
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      *plVar3 = local_38;
      FUN_14217e5b0(plVar3 + 1,local_30);
      plVar3 = local_30;
LAB_140e68d3d:
      FUN_14217f430(plVar3);
    }
  }
  return;
}



// FUNCTION 140e68da0 FUN_140e68da0 body=533 status=ok
// SIG undefined FUN_140e68da0(void)

undefined8 * FUN_140e68da0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined2 *local_38;
  undefined8 local_30;
  
  local_res8 = DAT_146859368;
  lVar1 = FName::GetComparisonNameEntry(&local_res8);
  if (lVar1 == 0) {
    local_38 = (undefined2 *)0x0;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar1,&local_38);
  }
  puVar5 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar5 = local_38;
  }
  FUN_141784790(param_2,puVar5);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar2 = FUN_1414ba0d0();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res8,uVar2,param_2);
  FUN_141784790(param_2,L"SpawnerComponent");
  uVar2 = FUN_1414763d0();
  puVar3 = (undefined8 *)FName::FName(local_res10,L"SpawnerComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar3,uVar2,param_2);
  FUN_141784790(param_2,L"SpawnPointComponent");
  uVar2 = FUN_141477600();
  puVar3 = (undefined8 *)FName::FName(local_res18,L"SpawnPointComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar3,uVar2,param_2);
  FUN_140771f80(param_1,param_2);
  *param_1 = &PTR_FUN_1445c6748;
  param_1[0x8b] = &PTR_LAB_1445c6e60;
  param_1[0xbd] = &PTR_LAB_1445c6e80;
  param_1[0xbe] = &PTR_LAB_1445c6ea8;
  param_1[0xbf] = &PTR_LAB_1445c6ef0;
  param_1[0xc6] = &PTR_LAB_1445c6f60;
  lVar1 = FUN_142e7dfd0();
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  uVar4 = FUN_142e7dfd0();
  uVar2 = FUN_141752410(param_1,uVar2,uVar4,uVar4,1,0,0);
  param_1[0xc9] = uVar2;
  param_1[0xca] = uVar2;
  local_res8 = 0;
  FUN_142399e30(uVar2,param_1[0x2d],0);
  *(undefined1 *)((longlong)param_1 + 0x129) = 4;
  *(undefined4 *)(param_1 + 0x28) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3f800000;
  return param_1;
}



// FUNCTION 140e68fc0 FUN_140e68fc0 body=542 status=ok
// SIG undefined FUN_140e68fc0(void)

undefined8 * FUN_140e68fc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *(undefined1 *)(param_1 + 0x8e) = 1;
  *param_1 = &PTR_FUN_1445caf28;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  FUN_142741540(param_1 + 0x96);
  FUN_142741540(param_1 + 0x156);
  *(undefined4 *)(param_1 + 0x216) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10b4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x10b9) = 0;
  param_1[0x218] = 0;
  *(undefined4 *)(param_1 + 0x219) = 0;
  *(undefined4 *)(param_1 + 0x21a) = 0;
  param_1[0x21b] = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  FUN_140e6a670(param_1 + 0x21e);
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  param_1[0x2ec] = 0;
  *(undefined1 *)(param_1 + 0x2ed) = 0;
  FUN_14223c460(param_1,0);
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PhotoMode_PostProcessComponent",1);
  uVar1 = *puVar2;
  uVar3 = ACineCameraActor::GetPrivateStaticClass();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = lVar4;
  *(uint *)(lVar4 + 0x2e0) = *(uint *)(lVar4 + 0x2e0) | 4;
  *(uint *)(param_1[0x8b] + 0x2e0) = *(uint *)(param_1[0x8b] + 0x2e0) | 8;
  *(uint *)(param_1[0x8b] + 0x2e0) = *(uint *)(param_1[0x8b] + 0x2e0) | 0x10;
  *(uint *)(param_1[0x8b] + 0x2e0) = *(uint *)(param_1[0x8b] + 0x2e0) | 0x20;
  *(uint *)(param_1[0x8b] + 0x2ec) = *(uint *)(param_1[0x8b] + 0x2ec) | 0x10;
  *(uint *)(param_1[0x8b] + 0x2f0) = *(uint *)(param_1[0x8b] + 0x2f0) | 0x80000;
  *(uint *)(param_1[0x8b] + 0x2f0) = *(uint *)(param_1[0x8b] + 0x2f0) | 0x100000;
  *(uint *)(param_1[0x8b] + 0x2f4) = *(uint *)(param_1[0x8b] + 0x2f4) | 0x80;
  *(undefined1 *)(param_1[0x8b] + 0x7b4) = 0;
  *(uint *)(param_1[0x8b] + 0x2f0) = *(uint *)(param_1[0x8b] + 0x2f0) & 0xff7fffff;
  *(uint *)(param_1[0x8b] + 0x2f0) = *(uint *)(param_1[0x8b] + 0x2f0) & 0xbfffffff;
  *(uint *)(param_1[0x8b] + 0x2f4) = *(uint *)(param_1[0x8b] + 0x2f4) & 0xfffffffd;
  *(uint *)(param_1[0x8b] + 0x2f4) = *(uint *)(param_1[0x8b] + 0x2f4) | 4;
  *(undefined4 *)(param_1[0x8b] + 0x7dc) = 0x3f800000;
  *(uint *)(param_1[0x8b] + 0x2ec) = *(uint *)(param_1[0x8b] + 0x2ec) | 4;
  *(uint *)(param_1[0x8b] + 0x2ec) = *(uint *)(param_1[0x8b] + 0x2ec) | 8;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  param_1[0x8f] = 0;
  return param_1;
}



// FUNCTION 140e691e0 FUN_140e691e0 body=87 status=ok
// SIG undefined FUN_140e691e0(void)

undefined8 * FUN_140e691e0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1445c5060;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 2;
  param_1[0x9c] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 0xc;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 140e69240 FUN_140e69240 body=42 status=ok
// SIG undefined FUN_140e69240(void)

undefined8 * FUN_140e69240(undefined8 *param_1)

{
  FUN_140bfb420();
  *(undefined2 *)(param_1 + 0xbe) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__1445c7810;
  return param_1;
}



// FUNCTION 140e69270 FUN_140e69270 body=270 status=ok
// SIG undefined FUN_140e69270(void)

undefined8 * FUN_140e69270(undefined8 *param_1)

{
  FUN_140c62070();
  *(undefined4 *)(param_1 + 0x14e) = 0x6050301;
  *param_1 = &PTR__scalar_deleting_destructor__1445c8258;
  *(undefined4 *)(param_1 + 0x151) = 0;
  FText::FText(param_1 + 0x152);
  *(undefined4 *)(param_1 + 0x155) = 0;
  FText::FText(param_1 + 0x156);
  *(undefined4 *)(param_1 + 0x159) = 0;
  FText::FText(param_1 + 0x15a);
  *(undefined4 *)(param_1 + 0x15d) = 0;
  FText::FText(param_1 + 0x15e);
  *(undefined4 *)(param_1 + 0x161) = 0;
  FText::FText(param_1 + 0x162);
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  *(undefined2 *)(param_1 + 0x175) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6c1) = 1;
  return param_1;
}



// FUNCTION 140e69380 FUN_140e69380 body=210 status=ok
// SIG undefined FUN_140e69380(void)

undefined8 * FUN_140e69380(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1426850b0();
  *param_1 = &PTR_FUN_1445c8f90;
  param_1[0x8b] = &PTR_LAB_1445c97f0;
  param_1[0x98] = &PTR_LAB_1445c9848;
  param_1[0x99] = &PTR_LAB_1445c9868;
  param_1[0x9c] = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f9) = 1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SeatComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_141448000();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xffffffef;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 1;
  param_1[0x9b] = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x469) = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0x40000000;
  *(undefined1 *)(param_1 + 0x9f) = 1;
  return param_1;
}



// FUNCTION 140e69460 FUN_140e69460 body=33 status=ok
// SIG undefined FUN_140e69460(void)

undefined8 * FUN_140e69460(undefined8 *param_1)

{
  FUN_140bfb420();
  *param_1 = &PTR__scalar_deleting_destructor__1445c9a38;
  return param_1;
}



// FUNCTION 140e69490 FUN_140e69490 body=296 status=ok
// SIG undefined FUN_140e69490(void)

undefined8 * FUN_140e69490(undefined8 *param_1)

{
  FUN_140c62070();
  *param_1 = &PTR_FUN_1445ca470;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  *(undefined4 *)(param_1 + 0x151) = 0;
  FText::FText(param_1 + 0x152);
  *(undefined4 *)(param_1 + 0x155) = 0;
  FText::FText(param_1 + 0x156);
  FText::FText(param_1 + 0x159);
  *(undefined4 *)(param_1 + 0x15c) = 0;
  FText::FText(param_1 + 0x15d);
  *(undefined4 *)(param_1 + 0x160) = 0;
  FText::FText(param_1 + 0x161);
  *(undefined4 *)(param_1 + 0x164) = 0;
  FText::FText(param_1 + 0x165);
  *(undefined4 *)(param_1 + 0x168) = 0;
  FText::FText(param_1 + 0x169);
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(undefined4 *)(param_1 + 0x17b) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbdc) = 0;
  return param_1;
}



// FUNCTION 140e695c0 FUN_140e695c0 body=369 status=ok
// SIG undefined FUN_140e695c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e695c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1445944e8;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  uVar4 = uRam0000000146870bbc;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  *(uint *)((longlong)param_1 + 0x52c) = uVar4;
  uVar4 = uRam0000000146870bb4 & uRam0000000146870bc4;
  uVar5 = uRam0000000146870bb8 & uRam0000000146870bc8;
  uVar6 = uRam0000000146870bbc & uRam0000000146870bcc;
  *(uint *)(param_1 + 0xa8) = _DAT_146870bb0 & _DAT_146870bc0;
  *(uint *)((longlong)param_1 + 0x544) = uVar4;
  *(uint *)(param_1 + 0xa9) = uVar5;
  *(uint *)((longlong)param_1 + 0x54c) = uVar6;
  param_1[0xac] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(undefined1 *)(param_1 + 0xaa) = 1;
  *(undefined4 *)(param_1 + 0xad) = 0x3f800000;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RootComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAction",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e27720();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CustomizationComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e43690();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  FUN_14223c460(param_1,0);
  return param_1;
}



// FUNCTION 140e69740 FUN_140e69740 body=778 status=ok
// SIG undefined FUN_140e69740(void)

undefined8 * FUN_140e69740(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  
  local_res8 = param_1;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"VaultCardChestOpened",1);
  uVar2 = FUN_14217c7e0(local_68,L"gbxtelemetry",L"VaultCardChestOpened",&DAT_1445b1fc4);
  puVar4 = local_res8;
  FUN_14217c110(local_res8,*puVar1,uVar2);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(puVar4 + 1);
  FUN_14217bd20(puVar4 + 2);
  FUN_14217bd20(puVar4 + 3);
  FUN_14217bd20(puVar4 + 4);
  FUN_14217bd20(puVar4 + 5);
  FUN_14217bd20(puVar4 + 6);
  FUN_14217bd20(puVar4 + 7);
  FUN_14217bd20(puVar4 + 8);
  FUN_14217bd20(puVar4 + 9);
  FUN_14217bd20(puVar4 + 10);
  uVar2 = *puVar4;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"player_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res18,*puVar1,0);
  puVar1 = local_res8;
  puVar4[1] = *puVar3;
  uVar2 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[2] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"reward_type",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[3] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"reward_name",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[4] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"asset_name",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[5] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"reward_amount",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[6] = *puVar3;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"reward_column_index",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[7] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"reward_row_index",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[8] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"reward_was_duplicate",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[9] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"reward_quantity",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  puVar1[10] = *puVar4;
  return puVar1;
}



// FUNCTION 140e69a50 FUN_140e69a50 body=740 status=ok
// SIG undefined FUN_140e69a50(void)

undefined8 * FUN_140e69a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  
  local_res8 = param_1;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"VaultCardKeyUsed",1);
  uVar2 = FUN_14217c7e0(local_68,L"gbxtelemetry",L"VaultCardKeyUsed",&DAT_1445b2164);
  puVar4 = local_res8;
  FUN_14217c110(local_res8,*puVar1,uVar2);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(puVar4 + 1);
  FUN_14217bd20(puVar4 + 2);
  FUN_14217bd20(puVar4 + 3);
  FUN_14217bd20(puVar4 + 4);
  FUN_14217bd20(puVar4 + 5);
  FUN_14217bd20(puVar4 + 6);
  FUN_14217bd20(puVar4 + 7);
  FUN_14217bd20(puVar4 + 8);
  uVar2 = *puVar4;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"player_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res18,*puVar1,0);
  puVar1 = local_res8;
  puVar4[1] = *puVar3;
  uVar2 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[2] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"reward_name",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[3] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"asset_name",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[4] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"key_cost",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[5] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"reward_column_index",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[6] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"reward_row_index",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[7] = *puVar3;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"reward_was_repurchase",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  puVar1[8] = *puVar4;
  return puVar1;
}



// FUNCTION 140e69d40 FUN_140e69d40 body=577 status=ok
// SIG undefined FUN_140e69d40(void)

undefined8 * FUN_140e69d40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VaultCardRewardRedeemed",1);
  uVar2 = FUN_14217c7e0(local_68,L"gbxtelemetry",L"VaultCardRewardRedeemed",&DAT_1445b21b4);
  FUN_14217c110(param_1,*puVar1,uVar2);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(param_1 + 1);
  FUN_14217bd20(param_1 + 2);
  FUN_14217bd20(param_1 + 3);
  FUN_14217bd20(param_1 + 4);
  FUN_14217bd20(param_1 + 5);
  FUN_14217bd20(param_1 + 6);
  uVar2 = *param_1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  uVar2 = *param_1;
  param_1[1] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"vaultcard_id",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  uVar2 = *param_1;
  param_1[2] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"reward_name",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  uVar2 = *param_1;
  param_1[3] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"asset_name",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  uVar2 = *param_1;
  param_1[4] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"reward_column_index",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  uVar2 = *param_1;
  param_1[5] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"reward_row_index",1);
  puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
  param_1[6] = *puVar1;
  return param_1;
}



// FUNCTION 140e69f90 FUN_140e69f90 body=955 status=ok
// SIG undefined FUN_140e69f90(void)

undefined8 * FUN_140e69f90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  
  local_res8 = param_1;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"VaultCardSnapshot",1);
  uVar2 = FUN_14217c7e0(local_68,L"gbxtelemetry",L"VaultCardSnapshot",&DAT_1445b1f74);
  puVar4 = local_res8;
  FUN_14217c110(local_res8,*puVar1,uVar2);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(puVar4 + 1);
  FUN_14217bd20(puVar4 + 2);
  FUN_14217bd20(puVar4 + 3);
  FUN_14217bd20(puVar4 + 4);
  FUN_14217bd20(puVar4 + 5);
  FUN_14217bd20(puVar4 + 6);
  FUN_14217bd20(puVar4 + 7);
  FUN_14217bd20(puVar4 + 8);
  FUN_14217bd20(puVar4 + 9);
  FUN_14217bd20(puVar4 + 10);
  FUN_14217bd20(puVar4 + 0xb);
  FUN_14217bd20(puVar4 + 0xc);
  FUN_14217bd20(puVar4 + 0xd);
  uVar2 = *puVar4;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"player_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res18,*puVar1,0);
  puVar1 = local_res8;
  puVar4[1] = *puVar3;
  uVar2 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[2] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_experience",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[3] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_level",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  puVar4[4] = *puVar3;
  uVar2 = *puVar1;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_chests",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[5] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_chests_opened",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[6] = *puVar3;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_keys",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[7] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_keys_spent",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[8] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_rewards_unlocked",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[9] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_rewards_redeemed",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[10] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_gear_rewards_redeemed",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xb] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_gear_rewards_repurchased",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xc] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"vaultcard_diamond_keys",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  puVar1[0xd] = *puVar4;
  return puVar1;
}



// FUNCTION 140e6a350 FUN_140e6a350 body=371 status=ok
// SIG undefined FUN_140e6a350(void)

undefined8 * FUN_140e6a350(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
  }
  if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  local_38 = param_2[4];
  FString::FString(local_30,param_2 + 5);
  FSoftObjectPath::operator=(param_1 + 4,&local_38);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 7,param_2 + 7);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0xc,param_2 + 0xc);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x11,param_2 + 0x11);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x16,param_2 + 0x16);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x1b,param_2 + 0x1b);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x20,param_2 + 0x20);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x25,param_2 + 0x25);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x2a,param_2 + 0x2a);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)((longlong)param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 140e6a4d0 FUN_140e6a4d0 body=413 status=ok
// SIG undefined FUN_140e6a4d0(void)

undefined8 * FUN_140e6a4d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  param_1[10] = 0;
  param_1[10] = param_2[10];
  param_2[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xe] = param_2[0xe];
  param_2[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_2[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x12] = param_2[0x12];
  param_2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_2[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  return param_1;
}



// FUNCTION 140e6a670 FUN_140e6a670 body=229 status=ok
// SIG undefined FUN_140e6a670(void)

undefined4 * FUN_140e6a670(undefined4 *param_1)

{
  *param_1 = 0x10001;
  FUN_142741540(param_1 + 4);
  param_1[0x184] = 0x3f800000;
  param_1[0x188] = 0;
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x195) = 0;
  param_1[0x198] = 0;
  param_1[0x185] = 0x3e800000;
  param_1[0x186] = 0x42b40000;
  *(undefined1 *)(param_1 + 0x187) = 0;
  param_1[0x189] = 0x3f800000;
  param_1[0x18a] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x18b) = 0x43fa0000;
  param_1[0x18d] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x18e) = 0x3f800000;
  param_1[0x191] = 0x42c80000;
  param_1[0x192] = 0x3f800000;
  param_1[0x193] = 0x3e4ccccd;
  param_1[0x194] = 0x3f6147ae;
  *(undefined8 *)(param_1 + 0x196) = 0x3f0ccccd;
  param_1[0x199] = 0x3f800000;
  param_1[0x19a] = 0x3f000000;
  param_1[0x19b] = 0x1000101;
  return param_1;
}



// FUNCTION 140e6a780 FUN_140e6a780 body=334 status=ok
// SIG undefined FUN_140e6a780(void)

undefined8 * FUN_140e6a780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(byte *)(param_1 + 7) =
       *(byte *)(param_1 + 7) ^ (*(byte *)(param_1 + 7) ^ *(byte *)(param_2 + 7)) & 1;
  bVar2 = (*(byte *)(param_1 + 7) ^ *(byte *)(param_2 + 7)) & 2 ^ *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 7)) & 4 ^ bVar2;
  *(byte *)(param_1 + 7) = bVar2;
  *(byte *)(param_1 + 7) = (bVar2 ^ *(byte *)(param_2 + 7)) & 8 ^ bVar2;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[0x19] = 0;
  if (param_2[0x19] == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 9,param_2 + 9,0x80);
  }
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  param_1[0x19] = param_2[0x19];
  param_2[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  param_2[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  uVar1 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar1;
  param_1[0x1e] = param_2[0x1e];
  return param_1;
}



// FUNCTION 140e6a8d0 FUN_140e6a8d0 body=380 status=ok
// SIG undefined FUN_140e6a8d0(void)

undefined8 * FUN_140e6a8d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar2);
  *param_1 = &PTR_FUN_1445c5798;
  FText::FText(param_1 + 6);
  FText::FText(param_1 + 9);
  iVar3 = 0;
  iVar4 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xe) = 3;
  if ((wchar_t *)param_1[0xc] != L"activity_feed_mural_small.png") {
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (*(int *)((longlong)param_1 + 0x6c) != 0x1e) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xc,0x1e);
      iVar3 = *(int *)(param_1 + 0xd);
    }
    *(int *)(param_1 + 0xd) = iVar3 + 0x1e;
    if (*(int *)((longlong)param_1 + 0x6c) < iVar3 + 0x1e) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xc);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xc],L"activity_feed_mural_small.png",0x1e);
  }
  if ((undefined *)param_1[0xf] != &DAT_1445bcc50) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)((longlong)param_1 + 0x84) != 0x1e) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0x1e);
      iVar4 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar4 + 0x1e;
    if (*(int *)((longlong)param_1 + 0x84) < iVar4 + 0x1e) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xf,iVar4);
    }
    puVar1 = (undefined8 *)param_1[0xf];
    *puVar1 = 0x69007400630061;
    puVar1[1] = 0x79007400690076;
    puVar1[2] = 0x6500650066005f;
    puVar1[3] = 0x75006d005f0064;
    puVar1[4] = 0x5f006c00610072;
    puVar1[5] = 0x6700720061006c;
    puVar1[6] = 0x6e0070002e0065;
    *(undefined4 *)(puVar1 + 7) = 0x67;
  }
  return param_1;
}



// FUNCTION 140e6aa50 FUN_140e6aa50 body=82 status=ok
// SIG undefined FUN_140e6aa50(void)

undefined8 * FUN_140e6aa50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR_FUN_1445c4de0;
  param_1[6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  FText::FText(param_1 + 8);
  FText::FText(param_1 + 0xb);
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 140e6aab0 FUN_140e6aab0 body=144 status=ok
// SIG undefined FUN_140e6aab0(void)

undefined8 * FUN_140e6aab0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1445c6f80;
  param_1[5] = &PTR_LAB_1445c7398;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 2;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 2;
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
  return param_1;
}



// FUNCTION 140e6ab40 FUN_140e6ab40 body=165 status=ok
// SIG undefined FUN_140e6ab40(void)

undefined8 * FUN_140e6ab40(undefined8 *param_1)

{
  FUN_142326e40();
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 2;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 2;
  *param_1 = &PTR_FUN_1445c73c8;
  param_1[5] = &PTR_LAB_1445c77e0;
  param_1[0x39] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  return param_1;
}



// FUNCTION 140e6abf0 FUN_140e6abf0 body=149 status=ok
// SIG undefined FUN_140e6abf0(void)

undefined8 * FUN_140e6abf0(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_142cb26e0();
  plVar1 = param_1 + 0x3e;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *param_1 = &PTR_FUN_1445c8a90;
  param_1[5] = &PTR_LAB_1445c8ee8;
  param_1[0x2f] = &PTR_LAB_1445c8f18;
  *plVar1 = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xf7;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x40] = param_1;
    param_1[0x3f] = &DAT_146871270;
    *plVar1 = (longlong)DAT_146871270;
    DAT_146871270 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  return param_1;
}



// FUNCTION 140e6ac90 FUN_140e6ac90 body=170 status=ok
// SIG undefined FUN_140e6ac90(void)

undefined8 * FUN_140e6ac90(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_1445c4ae8;
  param_1[5] = &PTR_LAB_1445c4d60;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x6c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xc,0);
  }
  if ((undefined2 *)param_1[0xc] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xc] = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 140e6ad40 FUN_140e6ad40 body=57 status=ok
// SIG undefined FUN_140e6ad40(void)

undefined8 * FUN_140e6ad40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__1445c4868;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 140e6ad80 FUN_140e6ad80 body=313 status=ok
// SIG undefined FUN_140e6ad80(void)

undefined8 * FUN_140e6ad80(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_140e406e0();
  *param_1 = &PTR_FUN_1445c5a18;
  param_1[5] = &PTR_LAB_1445c5e48;
  param_1[0x4f] = &PTR_LAB_1445c5e78;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  FName::FName(local_res8,L"Ghost Arms 1st",1);
  param_1[0x50] = local_res8[0];
  FName::FName(local_res8,L"Ghost Arms 3rd",1);
  param_1[0x51] = local_res8[0];
  return param_1;
}



// FUNCTION 140e6aec0 FUN_140e6aec0 body=87 status=ok
// SIG undefined FUN_140e6aec0(void)

undefined8 * FUN_140e6aec0(undefined8 *param_1)

{
  FUN_142de3ad0();
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xfe;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  *param_1 = &PTR_FUN_1445c5e90;
  param_1[5] = &PTR_LAB_1445c62d0;
  *(undefined1 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_14288e3d0(param_1 + 6,0);
  return param_1;
}



// FUNCTION 140e6af20 FUN_140e6af20 body=313 status=ok
// SIG undefined FUN_140e6af20(void)

undefined8 * FUN_140e6af20(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_1445c6300;
  param_1[5] = &PTR_LAB_1445c6718;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xf7;
  plVar2 = (longlong *)UNavModifierComponent::GetPrivateStaticClass();
  if (plVar2[0x1f] == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
  }
  lVar1 = plVar2[0x1f];
  if (lVar1 != 0) {
    FUN_140e67840(param_1 + 0x31,lVar1 + 0x118);
    FUN_140e67840(param_1 + 0x35,lVar1 + 0xf8);
  }
  return param_1;
}



// FUNCTION 140e6b060 UGraphNodeContextMenuContext body=41 status=ok
// SIG undefined UGraphNodeContextMenuContext(void)

undefined8 * UGraphNodeContextMenuContext::UGraphNodeContextMenuContext(undefined8 *param_1)

{
  FUN_142de31c0();
  param_1[8] = 0;
  *param_1 = &PTR_FUN_1445cacb0;
  return param_1;
}



// FUNCTION 140e6b090 FUN_140e6b090 body=237 status=ok
// SIG undefined FUN_140e6b090(void)

void FUN_140e6b090(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[0x2d] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x28] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x23] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x1e] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x19] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x14] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xf] != 0) {
        FMemory::Free();
      }
      if (plVar1[10] != 0) {
        FMemory::Free();
      }
      if (plVar1[5] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x31;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140e6b180 FUN_140e6b180 body=155 status=ok
// SIG undefined FUN_140e6b180(void)

void FUN_140e6b180(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar1 + 0x40);
    do {
      iVar5 = (int)plVar4[1];
      lVar1 = *plVar4;
      if (iVar5 != 0) {
        plVar2 = (longlong *)(lVar1 + 0x18);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 5;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar1 = *plVar4;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0xb;
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



// FUNCTION 140e6b220 FUN_140e6b220 body=175 status=ok
// SIG undefined FUN_140e6b220(void)

void FUN_140e6b220(longlong *param_1)

{
  longlong lVar1;
  
  if ((char)param_1[1] != '\0') {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x290) != '\0') {
      *(undefined1 *)(lVar1 + 0x290) = 0;
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar1 + 0x260);
      if (*(longlong *)(lVar1 + 0x250) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + 0x228) != 0) {
        FMemory::Free();
      }
    }
    *(undefined8 *)(*param_1 + 0x298) = 0;
    *(undefined8 *)(*param_1 + 0x2a0) = 0;
    *(undefined1 *)(*param_1 + 0x2b0) = 0;
    FUN_142833de0(*(undefined8 *)(*param_1 + 0x2c8));
    FUN_142833de0(*(undefined8 *)(*param_1 + 0x2b8));
    if ((char)param_1[1] != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  return;
}



// FUNCTION 140e6b2d0 FUN_140e6b2d0 body=413 status=ok
// SIG undefined FUN_140e6b2d0(void)

void FUN_140e6b2d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x5f8) = &PTR_FUN_14407f768;
  *(undefined ***)(param_1 + 0x5f0) = &PTR_FUN_144055190;
  *(undefined ***)(param_1 + 0x5e8) = &PTR_FUN_14407f310;
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x520);
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fce298;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140e6b470 FUN_140e6b470 body=85 status=ok
// SIG undefined FUN_140e6b470(void)

void FUN_140e6b470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1445c6748;
  param_1[0x8b] = &PTR_LAB_1445c6e60;
  param_1[0xbd] = &PTR_LAB_1445c6e80;
  param_1[0xbe] = &PTR_LAB_1445c6ea8;
  param_1[0xbf] = &PTR_LAB_1445c6ef0;
  param_1[0xc6] = &PTR_FUN_143fce298;
  FUN_140e6b2d0();
  return;
}


