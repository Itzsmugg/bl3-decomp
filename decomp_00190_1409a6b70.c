// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1409a6b70 FUN_1409a6b70 body=44 status=ok
// SIG undefined FUN_1409a6b70(void)

void FUN_1409a6b70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  lVar1 = FUN_1409a8cf0();
  if (lVar1 != 0) {
    local_res18[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x48,local_res18);
  }
  return;
}



// FUNCTION 1409a6ba0 FUN_1409a6ba0 body=44 status=ok
// SIG undefined FUN_1409a6ba0(void)

void FUN_1409a6ba0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  lVar1 = FUN_1409aa9f0();
  if (lVar1 != 0) {
    local_res18[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x38,local_res18);
  }
  return;
}



// FUNCTION 1409a6bd0 FUN_1409a6bd0 body=37 status=ok
// SIG undefined FUN_1409a6bd0(void)

void FUN_1409a6bd0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1409aa9f0();
  if (lVar1 != 0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar1 + 0x80,0);
    return;
  }
  return;
}



// FUNCTION 1409a6c00 FUN_1409a6c00 body=44 status=ok
// SIG undefined FUN_1409a6c00(void)

void FUN_1409a6c00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  lVar1 = FUN_1409aa9f0();
  if (lVar1 != 0) {
    local_res18[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x48,local_res18);
  }
  return;
}



// FUNCTION 1409a6c30 FUN_1409a6c30 body=32 status=ok
// SIG undefined FUN_1409a6c30(void)

void FUN_1409a6c30(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1409aa9f0();
  if (lVar1 != 0) {
    TBaseMulticastDelegate<void>::Broadcast(lVar1 + 0x58);
    return;
  }
  return;
}



// FUNCTION 1409a6c50 FUN_1409a6c50 body=61 status=ok
// SIG undefined FUN_1409a6c50(void)

void FUN_1409a6c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = FUN_1409ab270();
  if (lVar1 != 0) {
    local_18 = param_2;
    local_10 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x78,&local_18);
  }
  return;
}



// FUNCTION 1409a6c90 FUN_1409a6c90 body=37 status=ok
// SIG undefined FUN_1409a6c90(void)

void FUN_1409a6c90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1409ab270();
  if (lVar1 != 0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar1 + 0x88,0);
    return;
  }
  return;
}



// FUNCTION 1409a6cc0 FUN_1409a6cc0 body=34 status=ok
// SIG undefined FUN_1409a6cc0(void)

void FUN_1409a6cc0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1409ab270();
  if (lVar1 != 0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar1 + 0x68,0);
    return;
  }
  return;
}



// FUNCTION 1409a6cf0 FUN_1409a6cf0 body=44 status=ok
// SIG undefined FUN_1409a6cf0(void)

void FUN_1409a6cf0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  lVar1 = FUN_1409ab270();
  if (lVar1 != 0) {
    local_res18[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x58,local_res18);
  }
  return;
}



// FUNCTION 1409a6d20 FUN_1409a6d20 body=67 status=ok
// SIG undefined FUN_1409a6d20(void)

void FUN_1409a6d20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  lVar2 = 0;
  lVar1 = lVar2;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x2ae0);
  }
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x3b8);
  }
  if (lVar2 != 0) {
    local_res8[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar2 + 0x28,local_res8);
  }
  return;
}



// FUNCTION 1409a6d70 FUN_1409a6d70 body=42 status=ok
// SIG undefined FUN_1409a6d70(void)

void FUN_1409a6d70(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x368);
    return;
  }
  return;
}



// FUNCTION 1409a6db0 FUN_1409a6db0 body=461 status=ok
// SIG undefined FUN_1409a6db0(void)

void FUN_1409a6db0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  uint local_50;
  longlong local_48 [2];
  longlong local_38;
  
  lVar5 = FWeakObjectPtr::Get((longlong)param_2 + 0x34);
  if (lVar5 != 0) {
    lVar6 = FUN_1413ffe00();
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
      if (*(char *)(param_1 + 0x70) != '\0') {
        FUN_140747080(param_2,lVar5);
      }
      puVar7 = (ulonglong *)FUN_1409b53c0(local_48,lVar5,param_1 + 0x60);
      uVar8 = 0;
      plVar10 = (longlong *)*puVar7;
      uVar9 = (longlong)(int)puVar7[1] & 0x1fffffffffffffff;
      if (plVar10 + (int)puVar7[1] < plVar10) {
        uVar9 = uVar8;
      }
      if (uVar9 != 0) {
        do {
          if (*plVar10 != 0) {
            FWeakObjectPtr::operator=(local_res10);
            uVar1 = *(ushort *)((longlong)param_2 + 0x154);
            uVar2 = *(uint *)(param_2 + 4);
            iVar4 = uVar2 + uVar1;
            *(int *)(param_2 + 4) = iVar4;
            if (*(int *)((longlong)param_2 + 0x24) < iVar4) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 3);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_2[3] + (longlong)(int)uVar2),0,(ulonglong)uVar1);
            UEnvQueryItemType_Actor::SetValue(param_2[3] + (longlong)(int)uVar2,local_res10);
            iVar4 = (int)param_2[1];
            local_50 = local_50 & 0xfffffffe;
            *(int *)(param_2 + 1) = iVar4 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            lVar5 = *param_2;
            *(ulonglong *)(lVar5 + (longlong)iVar4 * 0xc) = ((ulonglong)uVar2 & 0x7fffffff) << 0x20;
            *(uint *)(lVar5 + 8 + (longlong)iVar4 * 0xc) = local_50;
          }
          plVar10 = plVar10 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar9);
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1409a6f80 FUN_1409a6f80 body=840 status=ok
// SIG undefined FUN_1409a6f80(void)

void FUN_1409a6f80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *local_48;
  int local_40;
  
  if ((*(longlong *)(param_1 + 0x3b0) == 0) || (*(longlong *)(param_1 + 0x398) == 0)) {
    return;
  }
  FUN_1409ad8c0(*(longlong *)(param_1 + 0x3b0),
                *(undefined8 *)(*(longlong *)(param_1 + 0x398) + 0x30));
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 == 3) {
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x398) + 0x38);
    uVar4 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x398) + 0x40);
    uVar8 = 0;
    uVar9 = uVar4 & 0x1fffffffffffffff;
    if (plVar10 + uVar4 < plVar10) {
      uVar9 = uVar8;
    }
    if (uVar9 != 0) {
      do {
        lVar7 = *plVar10;
        if (lVar7 != 0) {
          iVar3 = *(int *)(param_1 + 0x480);
          *(int *)(param_1 + 0x480) = iVar3 + 1;
          if (*(int *)(param_1 + 0x484) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(param_1 + 0x478,iVar3);
          }
          puVar5 = (undefined8 *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x478));
          puVar5[2] = lVar7;
          *puVar5 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 1) = 0xffffffff;
          puVar5[3] = 0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                    (param_1 + 0x3c0);
          *(int *)(param_1 + 0x414) = *(int *)(param_1 + 0x414) + 1;
          if (*(int *)(param_1 + 0x414) == -1) {
            *(undefined4 *)(param_1 + 0x414) = 0;
          }
          *(undefined8 *)(param_1 + 0x468) = 0xffffffffffffffff;
          if (*(longlong **)(param_1 + 0x470) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x470) + 0x260))();
          }
        }
        plVar10 = plVar10 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar9);
    }
    FUN_1409a7860(*(undefined8 *)(param_1 + 0x3b0),&local_48);
    plVar10 = local_48 + local_40;
    for (plVar12 = local_48; plVar12 != plVar10; plVar12 = plVar12 + 1) {
      uVar9 = 0;
      if (*plVar12 != 0) {
        plVar6 = (longlong *)UUGLoadoutBarUW::GetPrivateStaticClass();
        plVar11 = (longlong *)*plVar12;
        for (plVar1 = plVar11; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
          if (plVar1 == plVar6) {
            if ((plVar11 == (longlong *)0x0) || (plVar11 == (longlong *)0x0)) break;
            lVar7 = plVar11[0x1f];
            if (lVar7 == 0) {
              (**(code **)(*plVar11 + 0x368))(plVar11);
              lVar7 = plVar11[0x1f];
              if (lVar7 == 0) break;
            }
            plVar11 = *(longlong **)(lVar7 + 0x140);
            uVar4 = (longlong)*(int *)(lVar7 + 0x148) & 0x1fffffffffffffff;
            if (plVar11 + *(int *)(lVar7 + 0x148) < plVar11) {
              uVar4 = uVar9;
            }
            if (uVar4 != 0) {
              do {
                lVar7 = *plVar11;
                if (lVar7 != 0) {
                  iVar3 = *(int *)(param_1 + 0x548);
                  lVar13 = (longlong)iVar3;
                  *(int *)(param_1 + 0x548) = iVar3 + 1;
                  if (*(int *)(param_1 + 0x54c) < iVar3 + 1) {
                    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x540,iVar3);
                  }
                  lVar2 = *(longlong *)(param_1 + 0x540);
                  *(undefined8 *)(lVar2 + lVar13 * 0x28) = 0xffffffffffffffff;
                  *(undefined4 *)(lVar2 + 8 + lVar13 * 0x28) = 0xffffffff;
                  lVar2 = lVar2 + lVar13 * 0x28;
                  *(longlong *)(lVar2 + 0x10) = *plVar12;
                  *(longlong *)(lVar2 + 0x18) = lVar7;
                  *(undefined8 *)(lVar2 + 0x20) = 0;
                  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>
                  ::Reset(param_1 + 0x488);
                  *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
                  if (*(int *)(param_1 + 0x4dc) == -1) {
                    *(undefined4 *)(param_1 + 0x4dc) = 0;
                  }
                  *(undefined8 *)(param_1 + 0x530) = 0xffffffffffffffff;
                  if (*(longlong **)(param_1 + 0x538) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(param_1 + 0x538) + 0x260))();
                  }
                }
                plVar11 = plVar11 + 1;
                uVar9 = uVar9 + 1;
              } while (uVar9 != uVar4);
            }
            break;
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1409b7d80(*(undefined8 *)(param_1 + 0x3b0));
  return;
}



// FUNCTION 1409a72d0 FUN_1409a72d0 body=45 status=ok
// SIG undefined FUN_1409a72d0(void)

undefined8 FUN_1409a72d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_1409ab2f0(param_1 + 0x488,local_res10);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x20);
  }
  return 0;
}



// FUNCTION 1409a7300 FUN_1409a7300 body=87 status=ok
// SIG undefined FUN_1409a7300(void)

undefined8 FUN_1409a7300(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    lVar1 = FUN_14144bcb0();
    for (lVar2 = local_res10[0]; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) {
        lVar2 = FUN_140998cc0(param_1 + 0x478,local_res10);
        if (lVar2 == 0) {
          return 0;
        }
        return *(undefined8 *)(lVar2 + 0x10);
      }
    }
  }
  return 0;
}



// FUNCTION 1409a7360 FUN_1409a7360 body=62 status=ok
// SIG undefined FUN_1409a7360(void)

undefined4 FUN_1409a7360(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0xe8);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0xf0) * 5;
  while( true ) {
    if (plVar2 == plVar1) {
      return 0;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 5;
  }
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  return (int)plVar2[3];
}



// FUNCTION 1409a73a0 FUN_1409a73a0 body=98 status=ok
// SIG undefined FUN_1409a73a0(void)

undefined8 FUN_1409a73a0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x90);
  lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x98) * 0x28;
  while( true ) {
    if (lVar3 == lVar1) {
      return 0;
    }
    if ((param_2 != 0) && (*(longlong *)(lVar3 + 8) == param_2)) break;
    lVar3 = lVar3 + 0x28;
  }
  *param_3 = *(longlong *)(lVar3 + 8);
  uVar2 = FUN_1409a0fe0();
  *(undefined4 *)(param_3 + 1) = uVar2;
  return 1;
}



// FUNCTION 1409a7410 FUN_1409a7410 body=95 status=ok
// SIG undefined FUN_1409a7410(void)

undefined8 FUN_1409a7410(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  lVar3 = (longlong)*(int *)(param_1 + 0xa8) * 0x38 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return 0;
    }
    if ((param_2 != 0) && (*(longlong *)(lVar2 + 8) == param_2)) break;
    lVar2 = lVar2 + 0x38;
  }
  *param_3 = param_2;
  *(undefined1 *)((longlong)param_3 + 0xc) = *(undefined1 *)(lVar2 + 0x30);
  uVar1 = FUN_1409a1990();
  *(undefined4 *)(param_3 + 1) = uVar1;
  return 1;
}



// FUNCTION 1409a7470 FUN_1409a7470 body=90 status=ok
// SIG undefined FUN_1409a7470(void)

longlong FUN_1409a7470(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [8];
  
  FUN_1409a61c0((longlong *)(param_1 + 0xc0),local_res8);
  if (local_res8[0] == -1) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xc0) + (longlong)local_res8[0] * 0x18;
  lVar2 = lVar1 + 8;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1409a74d0 FUN_1409a74d0 body=137 status=ok
// SIG undefined FUN_1409a74d0(void)

ulonglong FUN_1409a74d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  
  FUN_1409a61c0(param_1 + 0xc0,local_res8,param_2);
  if (local_res8[0] == -1) {
    uVar1 = 0xffffffffffffffff;
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0xc0);
    puVar2 = (undefined8 *)(uVar1 + (longlong)local_res8[0] * 0x18);
  }
  puVar3 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = FUN_1409a7560(param_1,*puVar3,param_3);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1409a7560 FUN_1409a7560 body=293 status=ok
// SIG undefined FUN_1409a7560(void)

ulonglong FUN_1409a7560(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  plVar8 = *(longlong **)(param_1 + 0xb0);
  uVar4 = (ulonglong)*(int *)(param_1 + 0xb8);
  plVar11 = (longlong *)0x0;
  plVar6 = plVar8 + uVar4 * 6;
  for (; (plVar10 = plVar11, plVar8 != plVar6 &&
         ((param_2 == 0 || (plVar10 = plVar8, plVar8[1] != param_2)))); plVar8 = plVar8 + 6) {
  }
  plVar8 = plVar11;
  plVar6 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar6 = plVar11;
    if ((*(uint *)(param_2 + 8) >> 4 & 1) == 0) {
      plVar6 = *(longlong **)(param_2 + 0x20);
    }
    plVar7 = *(longlong **)(param_1 + 0xa0);
    uVar4 = (ulonglong)*(int *)(param_1 + 0xa8);
    plVar9 = plVar7 + uVar4 * 7;
    for (; (plVar8 = plVar11, plVar7 != plVar9 &&
           ((plVar6 == (longlong *)0x0 || (plVar8 = plVar7, (longlong *)plVar7[1] != plVar6))));
        plVar7 = plVar7 + 7) {
    }
    plVar6 = plVar11;
    if ((plVar8 != (longlong *)0x0) && (lVar2 = *plVar8, lVar2 != 0)) {
      iVar1 = *(int *)((longlong)plVar8 + 0x1c);
      uVar5 = (ulonglong)iVar1;
      uVar4 = uVar5;
      if ((-1 < iVar1) && (plVar6 = (longlong *)0x0, iVar1 < *(int *)(lVar2 + 0x98))) {
        uVar4 = *(ulonglong *)(lVar2 + 0x90);
        plVar6 = (longlong *)(uVar4 + uVar5 * 0x28);
      }
    }
  }
  if ((((plVar10 != (longlong *)0x0) && (plVar8 != (longlong *)0x0)) && (plVar6 != (longlong *)0x0))
     && (plVar6[1] != 0)) {
    *param_3 = param_2;
    *(int *)(param_3 + 1) = (int)plVar10[5];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar10 + 0x2c);
    if (*(char *)((longlong)plVar10 + 0x24) == '\0') {
      uVar3 = (undefined1)plVar8[6];
    }
    else {
      uVar3 = *(undefined1 *)((longlong)plVar8 + 0x31);
    }
    *(undefined1 *)(param_3 + 2) = uVar3;
    *(undefined1 *)((longlong)param_3 + 0x11) = *(undefined1 *)((longlong)plVar10 + 0x24);
    lVar2 = plVar6[1];
    param_3[3] = lVar2;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1409a7690 FUN_1409a7690 body=137 status=ok
// SIG undefined FUN_1409a7690(void)

ulonglong FUN_1409a7690(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x110,local_res8,param_2);
  if (local_res8[0] == -1) {
    uVar1 = 0xffffffffffffffff;
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x110);
    puVar2 = (undefined8 *)(uVar1 + (longlong)local_res8[0] * 0x18);
  }
  puVar3 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = FUN_1409a7560(param_1,*puVar3,param_3);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1409a7720 FUN_1409a7720 body=113 status=ok
// SIG undefined FUN_1409a7720(void)

undefined8 FUN_1409a7720(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = FUN_1414aa4c0();
  plVar3 = (longlong *)AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x118),uVar2);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_1414aa4c0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001409a7782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x408))(plVar3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1409a77a0 FUN_1409a77a0 body=26 status=ok
// SIG undefined FUN_1409a77a0(void)

undefined8 * FUN_1409a77a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1409a77c0 FUN_1409a77c0 body=26 status=ok
// SIG undefined FUN_1409a77c0(void)

undefined8 * FUN_1409a77c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1409a77e0 FUN_1409a77e0 body=26 status=ok
// SIG undefined FUN_1409a77e0(void)

undefined8 * FUN_1409a77e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = USkeletalBodySetup::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1409a7800 FUN_1409a7800 body=26 status=ok
// SIG undefined FUN_1409a7800(void)

undefined8 * FUN_1409a7800(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UUGBrightnessScreenUW::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1409a7820 FUN_1409a7820 body=26 status=ok
// SIG undefined FUN_1409a7820(void)

undefined8 * FUN_1409a7820(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1409a7840 FUN_1409a7840 body=26 status=ok
// SIG undefined FUN_1409a7840(void)

undefined8 * FUN_1409a7840(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UGAccountPage::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1409a7860 FUN_1409a7860 body=428 status=ok
// SIG undefined FUN_1409a7860(void)

longlong * FUN_1409a7860(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res8;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
    for (lVar7 = *(longlong *)(param_1 + 0x80); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar3) {
        if ((*(longlong *)(param_1 + 0x80) != 0) &&
           (iVar2 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                              (param_2,param_1 + 0x80), iVar2 == -1)) {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(param_1 + 0x80);
        }
        break;
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0xb0);
  lVar3 = (longlong)*(int *)(param_1 + 0xb8) * 0x30 + lVar7;
  do {
    if (lVar7 == lVar3) {
      return param_2;
    }
    lVar6 = *(longlong *)(lVar7 + 8);
    if (lVar6 != 0) {
      lVar4 = FUN_14144ecc0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(longlong *)(lVar6 + 0x88) != 0) {
          lVar5 = FUN_14144bcb0();
          lVar6 = *(longlong *)(lVar6 + 0x88);
          for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar5) goto LAB_1409a7995;
          }
        }
        lVar6 = 0;
LAB_1409a7995:
        local_res8 = lVar6;
        if (lVar6 != 0) {
          lVar5 = UUGLoadoutBarUW::GetPrivateStaticClass();
          lVar4 = lVar6;
          do {
            if (lVar4 == lVar5) {
              iVar2 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                                (param_2,&local_res8);
              if (iVar2 == -1) {
                iVar2 = (int)param_2[1];
                *(int *)(param_2 + 1) = iVar2 + 1;
                if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
                }
                *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar6;
              }
              break;
            }
            lVar4 = *(longlong *)(lVar4 + 0x30);
          } while (lVar4 != 0);
        }
      }
    }
    lVar7 = lVar7 + 0x30;
  } while( true );
}



// FUNCTION 1409a7a10 FUN_1409a7a10 body=33 status=ok
// SIG undefined FUN_1409a7a10(void)

undefined8 FUN_1409a7a10(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x160);
  return param_2;
}



// FUNCTION 1409a7a40 FUN_1409a7a40 body=149 status=ok
// SIG undefined FUN_1409a7a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1409a7a40(longlong param_1,char *param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  param_2[0x18] = '\0';
  if (param_3 != DAT_1468646e0) {
    pcVar1 = *(char **)(param_1 + 0x128);
    pcVar2 = pcVar1 + (longlong)*(int *)(param_1 + 0x130) * 0x20;
    for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 0x20) {
      if (*pcVar1 == param_3) {
        if (pcVar1 == (char *)0x0) {
          return param_2;
        }
        if (pcVar1 + 8 == param_2) {
          return param_2;
        }
        TOptional<FExpressionError>::Reset(param_2);
        FText::FText(param_2,pcVar1 + 8);
        param_2[0x18] = '\x01';
        return param_2;
      }
    }
  }
  return param_2;
}



// FUNCTION 1409a7ae0 FUN_1409a7ae0 body=418 status=ok
// SIG undefined FUN_1409a7ae0(void)

longlong * FUN_1409a7ae0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 local_38 [8];
  undefined2 local_30;
  undefined4 local_2c;
  undefined8 *local_28;
  int local_20;
  void *local_18;
  int local_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x171) == '\x01') {
      lVar5 = *(longlong *)(lVar1 + 0x2c40);
      lVar1 = lVar5 + (longlong)*(int *)(lVar1 + 0x2c48) * 0xc;
      for (; lVar5 != lVar1; lVar5 = lVar5 + 0xc) {
        cVar2 = FWeakObjectPtr::IsValid(lVar5);
        if ((cVar2 != '\0') && ((*(byte *)(lVar5 + 8) & 2) != 0)) {
          uVar3 = FWeakObjectPtr::Get(lVar5);
          iVar7 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar7 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar7 * 8) = uVar3;
        }
      }
    }
    else if (*(char *)(param_1 + 0x171) == '\x02') {
      local_30 = 1;
      local_2c = 0;
      local_38[0] = 1;
      FUN_1409b53c0(&local_28,lVar1,local_38);
      if (local_20 != 0) {
        iVar7 = (int)param_2[1];
        if (*(int *)((longlong)param_2 + 0xc) < iVar7 + local_20) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
          iVar7 = (int)param_2[1];
        }
        puVar6 = (undefined8 *)(*param_2 + (longlong)iVar7 * 8);
        puVar4 = local_28;
        iVar7 = local_20;
        do {
          uVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar6 = uVar3;
          puVar6 = puVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        *(int *)(param_2 + 1) = (int)param_2[1] + local_20;
      }
      if (local_10 != 0) {
        iVar7 = (int)param_2[1];
        if (*(int *)((longlong)param_2 + 0xc) < iVar7 + local_10) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
          iVar7 = (int)param_2[1];
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 + (longlong)iVar7 * 8),local_18,(longlong)local_10 << 3);
        *(int *)(param_2 + 1) = (int)param_2[1] + local_10;
      }
      if (local_18 != (void *)0x0) {
        FMemory::Free(local_18);
      }
      if (local_28 != (undefined8 *)0x0) {
        FMemory::Free(local_28);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 1409a7c90 GetLODThreshold body=7 status=ok
// SIG undefined GetLODThreshold(void)

undefined4 FAnimNode_AimOffsetLookAt::GetLODThreshold(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x160);
}



// FUNCTION 1409a7ca0 FUN_1409a7ca0 body=121 status=ok
// SIG undefined FUN_1409a7ca0(void)

longlong FUN_1409a7ca0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x2ae0);
  }
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x3b8), lVar2 != 0)) {
    lVar3 = FUN_141448ac0();
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



// FUNCTION 1409a7d20 FUN_1409a7d20 body=38 status=ok
// SIG undefined FUN_1409a7d20(void)

longlong FUN_1409a7d20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get();
  return (longlong)*(int *)(param_1 + 8) * 0x108 + *(longlong *)(lVar1 + 0x38);
}



// FUNCTION 1409a7d50 FUN_1409a7d50 body=63 status=ok
// SIG undefined FUN_1409a7d50(void)

undefined8 FUN_1409a7d50(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142d52a00(param_1 + 0x260);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_1 + 0x260);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fea0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1409a7d90 FUN_1409a7d90 body=63 status=ok
// SIG undefined FUN_1409a7d90(void)

undefined8 FUN_1409a7d90(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142d52a00(param_1 + 0x1c0);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_1 + 0x1c0);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fea0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1409a7dd0 FUN_1409a7dd0 body=12 status=ok
// SIG undefined FUN_1409a7dd0(void)

void FUN_1409a7dd0(longlong param_1)

{
  FUN_1409ab010(param_1,param_1 + 0x1c0);
  return;
}



// FUNCTION 1409a7de0 FUN_1409a7de0 body=305 status=ok
// SIG undefined FUN_1409a7de0(void)

undefined8 * FUN_1409a7de0(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  lVar7 = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  plVar3 = (longlong *)FUN_1430ec7a0();
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = UMediaSoundComponent::GetPrivateStaticClass();
      plVar6 = (longlong *)(**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
      if (plVar6 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar6 + 0x550))(plVar6);
        if (cVar2 != '\0') {
          plVar6 = (longlong *)plVar3[2];
          lVar4 = plVar6[0x1f];
          if (lVar4 == 0) {
            (**(code **)(*plVar6 + 0x368))(plVar6);
            lVar4 = plVar6[0x1f];
          }
          if (lVar4 != 0) {
            lVar7 = *(longlong *)(lVar4 + 0x4d0);
          }
          if (lVar7 == 0) {
            fVar8 = 0.0;
          }
          else {
            fVar8 = *(float *)(lVar7 + 0x710);
          }
          if (plVar3[0x9a] == 0) {
            fVar9 = 0.0;
          }
          else {
            fVar9 = *(float *)(plVar3[0x9a] + 0x710);
          }
          if (fVar9 < fVar8) {
            *param_2 = 0;
            *(float *)(param_2 + 1) = fVar8 - fVar9;
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1409a7f20 FUN_1409a7f20 body=21 status=ok
// SIG undefined FUN_1409a7f20(void)

undefined8 FUN_1409a7f20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x260) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x260) + 0x3c8);
  }
  return 0;
}



// FUNCTION 1409a7f40 FUN_1409a7f40 body=102 status=ok
// SIG undefined FUN_1409a7f40(void)

undefined8 FUN_1409a7f40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8 [4];
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  if ((lVar3 != 0) && (local_res8[0] = *(longlong *)(param_1 + 0x10), local_res8[0] != 0)) {
    lVar2 = FUN_14144bcb0();
    for (lVar1 = local_res8[0]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        lVar3 = FUN_140998cc0(lVar3 + 0x478,local_res8);
        if (lVar3 == 0) {
          return 0;
        }
        return *(undefined8 *)(lVar3 + 0x10);
      }
    }
  }
  return 0;
}



// FUNCTION 1409a7fb0 FUN_1409a7fb0 body=44 status=ok
// SIG undefined FUN_1409a7fb0(void)

undefined1 FUN_1409a7fb0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0xf8) == '\0') {
    return 1;
  }
  lVar1 = FUN_1409a7f40();
  if (lVar1 != 0) {
    return *(undefined1 *)(lVar1 + 0x7c);
  }
  return 0;
}



// FUNCTION 1409a7fe0 FUN_1409a7fe0 body=8 status=ok
// SIG undefined FUN_1409a7fe0(void)

undefined8 FUN_1409a7fe0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// FUNCTION 1409a7ff0 FUN_1409a7ff0 body=312 status=ok
// SIG undefined FUN_1409a7ff0(void)

undefined8 FUN_1409a7ff0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  void **ppvVar5;
  longlong lVar6;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 == (longlong *)0x0) {
LAB_1409a80a7:
    local_28 = (void *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"NONE",10);
    ppvVar5 = &local_28;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    lVar6 = plVar1[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar6 = plVar1[0x1f];
      if (lVar6 == 0) goto LAB_1409a80a7;
    }
    puVar4 = (undefined8 *)FText::ToString(lVar6 + 0x58);
    local_18 = (void *)0x0;
    local_10 = *(int *)(puVar4 + 1);
    lVar6 = (longlong)local_10;
    _Src = (void *)*puVar4;
    if (local_10 == 0) {
      ppvVar5 = &local_18;
      local_c = 0;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar6 * 2);
      ppvVar5 = &local_18;
      bVar3 = true;
      bVar2 = false;
    }
  }
  FString::FString(param_2,ppvVar5);
  if (bVar2) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_18 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409a8130 FUN_1409a8130 body=270 status=ok
// SIG undefined FUN_1409a8130(void)

undefined8 FUN_1409a8130(longlong param_1,undefined8 param_2)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  longlong lVar5;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_28 = (void *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"NONE",10);
    ppvVar4 = &local_28;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    puVar3 = (undefined8 *)FText::ToString(*(longlong *)(param_1 + 0x88) + 0x48);
    local_18 = (void *)0x0;
    local_10 = *(int *)(puVar3 + 1);
    lVar5 = (longlong)local_10;
    _Src = (void *)*puVar3;
    if (local_10 == 0) {
      ppvVar4 = &local_18;
      local_c = 0;
      bVar2 = true;
      bVar1 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar5 * 2);
      ppvVar4 = &local_18;
      bVar2 = true;
      bVar1 = false;
    }
  }
  FString::FString(param_2,ppvVar4);
  if (bVar1) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_18 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409a8240 FUN_1409a8240 body=270 status=ok
// SIG undefined FUN_1409a8240(void)

undefined8 FUN_1409a8240(longlong param_1,undefined8 param_2)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  longlong lVar5;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_28 = (void *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"NONE",10);
    ppvVar4 = &local_28;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    puVar3 = (undefined8 *)FText::ToString(*(longlong *)(param_1 + 0x88) + 0x48);
    local_18 = (void *)0x0;
    local_10 = *(int *)(puVar3 + 1);
    lVar5 = (longlong)local_10;
    _Src = (void *)*puVar3;
    if (local_10 == 0) {
      ppvVar4 = &local_18;
      local_c = 0;
      bVar2 = true;
      bVar1 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar5 * 2);
      ppvVar4 = &local_18;
      bVar2 = true;
      bVar1 = false;
    }
  }
  FString::FString(param_2,ppvVar4);
  if (bVar1) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_18 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409a8350 FUN_1409a8350 body=270 status=ok
// SIG undefined FUN_1409a8350(void)

undefined8 FUN_1409a8350(longlong param_1,undefined8 param_2)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  longlong lVar5;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_28 = (void *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"NONE",10);
    ppvVar4 = &local_28;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    puVar3 = (undefined8 *)FText::ToString(*(longlong *)(param_1 + 0x88) + 0x48);
    local_18 = (void *)0x0;
    local_10 = *(int *)(puVar3 + 1);
    lVar5 = (longlong)local_10;
    _Src = (void *)*puVar3;
    if (local_10 == 0) {
      ppvVar4 = &local_18;
      local_c = 0;
      bVar2 = true;
      bVar1 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar5 * 2);
      ppvVar4 = &local_18;
      bVar2 = true;
      bVar1 = false;
    }
  }
  FString::FString(param_2,ppvVar4);
  if (bVar1) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_18 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409a8460 FUN_1409a8460 body=97 status=ok
// SIG undefined FUN_1409a8460(void)

undefined8 FUN_1409a8460(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x55;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],
             L"Returns the set of actors considered as allies to the player (In the Ability sense)."
             ,0xaa);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409a84d0 FUN_1409a84d0 body=97 status=ok
// SIG undefined FUN_1409a84d0(void)

undefined8 FUN_1409a84d0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 7;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Allies",0xe);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409a8540 FUN_1409a8540 body=312 status=ok
// SIG undefined FUN_1409a8540(void)

undefined8 FUN_1409a8540(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  void **ppvVar5;
  longlong lVar6;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 == (longlong *)0x0) {
LAB_1409a85f7:
    local_28 = (void *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"NONE",10);
    ppvVar5 = &local_28;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    lVar6 = plVar1[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar6 = plVar1[0x1f];
      if (lVar6 == 0) goto LAB_1409a85f7;
    }
    puVar4 = (undefined8 *)FText::ToString(lVar6 + 0x40);
    local_18 = (void *)0x0;
    local_10 = *(int *)(puVar4 + 1);
    lVar6 = (longlong)local_10;
    _Src = (void *)*puVar4;
    if (local_10 == 0) {
      ppvVar5 = &local_18;
      local_c = 0;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar6 * 2);
      ppvVar5 = &local_18;
      bVar3 = true;
      bVar2 = false;
    }
  }
  FString::FString(param_2,ppvVar5);
  if (bVar2) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_18 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409a8680 FUN_1409a8680 body=270 status=ok
// SIG undefined FUN_1409a8680(void)

undefined8 FUN_1409a8680(longlong param_1,undefined8 param_2)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  longlong lVar5;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_28 = (void *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"NONE",10);
    ppvVar4 = &local_28;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    puVar3 = (undefined8 *)FText::ToString(*(longlong *)(param_1 + 0x88) + 0x30);
    local_18 = (void *)0x0;
    local_10 = *(int *)(puVar3 + 1);
    lVar5 = (longlong)local_10;
    _Src = (void *)*puVar3;
    if (local_10 == 0) {
      ppvVar4 = &local_18;
      local_c = 0;
      bVar2 = true;
      bVar1 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar5 * 2);
      ppvVar4 = &local_18;
      bVar2 = true;
      bVar1 = false;
    }
  }
  FString::FString(param_2,ppvVar4);
  if (bVar1) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_18 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409a8790 FUN_1409a8790 body=270 status=ok
// SIG undefined FUN_1409a8790(void)

undefined8 FUN_1409a8790(longlong param_1,undefined8 param_2)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  longlong lVar5;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_28 = (void *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"NONE",10);
    ppvVar4 = &local_28;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    puVar3 = (undefined8 *)FText::ToString(*(longlong *)(param_1 + 0x88) + 0x30);
    local_18 = (void *)0x0;
    local_10 = *(int *)(puVar3 + 1);
    lVar5 = (longlong)local_10;
    _Src = (void *)*puVar3;
    if (local_10 == 0) {
      ppvVar4 = &local_18;
      local_c = 0;
      bVar2 = true;
      bVar1 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar5 * 2);
      ppvVar4 = &local_18;
      bVar2 = true;
      bVar1 = false;
    }
  }
  FString::FString(param_2,ppvVar4);
  if (bVar1) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_18 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409a88a0 FUN_1409a88a0 body=270 status=ok
// SIG undefined FUN_1409a88a0(void)

undefined8 FUN_1409a88a0(longlong param_1,undefined8 param_2)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  longlong lVar5;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_28 = (void *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"NONE",10);
    ppvVar4 = &local_28;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    puVar3 = (undefined8 *)FText::ToString(*(longlong *)(param_1 + 0x88) + 0x30);
    local_18 = (void *)0x0;
    local_10 = *(int *)(puVar3 + 1);
    lVar5 = (longlong)local_10;
    _Src = (void *)*puVar3;
    if (local_10 == 0) {
      ppvVar4 = &local_18;
      local_c = 0;
      bVar2 = true;
      bVar1 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar5 * 2);
      ppvVar4 = &local_18;
      bVar2 = true;
      bVar1 = false;
    }
  }
  FString::FString(param_2,ppvVar4);
  if (bVar1) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_18 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409a89b0 FUN_1409a89b0 body=43 status=ok
// SIG undefined FUN_1409a89b0(void)

undefined8 FUN_1409a89b0(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"fadeaway%i",*(int *)(param_1 + 0x2f4) + 1);
  return param_2;
}



// FUNCTION 1409a89e0 FUN_1409a89e0 body=62 status=ok
// SIG undefined FUN_1409a89e0(void)

undefined8 * FUN_1409a89e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"barrier",0x10);
  return param_2;
}



// FUNCTION 1409a8a20 FUN_1409a8a20 body=62 status=ok
// SIG undefined FUN_1409a8a20(void)

undefined8 * FUN_1409a8a20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"fadeaway",0x12);
  return param_2;
}



// FUNCTION 1409a8a60 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FRenderResource::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"digiclone",0x14);
  return param_2;
}



// FUNCTION 1409a8aa0 FUN_1409a8aa0 body=63 status=ok
// SIG undefined FUN_1409a8aa0(void)

undefined8 FUN_1409a8aa0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142d52a00(param_1 + 0x1d8);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_1 + 0x1d8);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fea0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1409a8b10 FUN_1409a8b10 body=97 status=ok
// SIG undefined FUN_1409a8b10(void)

undefined8 FUN_1409a8b10(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 extraout_XMM0_Da;
  
  cVar1 = FUN_142d52a00(param_1 + 0x1d8);
  if (cVar1 != '\0') {
    *param_2 = *(undefined1 *)(param_1 + 0x1f0);
    uVar2 = FUN_142d52a20(param_1 + 0x1d8);
    uVar2 = FArchive::operator<<(uVar2);
    FUN_142d5fea0(uVar2);
    *(undefined4 *)(param_2 + 4) = extraout_XMM0_Da;
  }
  return 1;
}



// FUNCTION 1409a8b80 FUN_1409a8b80 body=119 status=ok
// SIG undefined FUN_1409a8b80(void)

undefined8 FUN_1409a8b80(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 extraout_XMM0_Da;
  
  param_2[0x10] = (*(byte *)(param_1 + 0x25c) & 8) == 0;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x2f4);
  cVar1 = FUN_142d52a00(param_1 + 0x1d8);
  if (cVar1 != '\0') {
    *param_2 = *(undefined1 *)(param_1 + 0x1f0);
    uVar2 = FUN_142d52a20(param_1 + 0x1d8);
    uVar2 = FArchive::operator<<(uVar2);
    FUN_142d5fea0(uVar2);
    *(undefined4 *)(param_2 + 4) = extraout_XMM0_Da;
  }
  return 1;
}



// FUNCTION 1409a8c00 FUN_1409a8c00 body=155 status=ok
// SIG undefined FUN_1409a8c00(void)

undefined8 FUN_1409a8c00(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Da;
  
  param_2[8] = 1;
  cVar1 = FUN_142d52a00(param_1 + 0x280);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_142d52a20(param_1 + 0x280);
    uVar2 = FArchive::operator<<(uVar2);
    uVar3 = FUN_142d5fea0(uVar2);
  }
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  cVar1 = FUN_142d52a00(param_1 + 0x1d8);
  if (cVar1 != '\0') {
    *param_2 = *(undefined1 *)(param_1 + 0x1f0);
    uVar2 = FUN_142d52a20(param_1 + 0x1d8);
    uVar2 = FArchive::operator<<(uVar2);
    FUN_142d5fea0(uVar2);
    *(undefined4 *)(param_2 + 4) = extraout_XMM0_Da;
  }
  return 1;
}



// FUNCTION 1409a8cb0 FUN_1409a8cb0 body=58 status=ok
// SIG undefined FUN_1409a8cb0(void)

void FUN_1409a8cb0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1430ec7a0(param_1 + -0xf8);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = UUGGameViewportClient::StaticClass();
                    /* WARNING: Could not recover jumptable at 0x0001409a8cdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 1409a8cf0 FUN_1409a8cf0 body=121 status=ok
// SIG undefined FUN_1409a8cf0(void)

longlong FUN_1409a8cf0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x2ae0);
  }
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x3b8), lVar2 != 0)) {
    lVar3 = FUN_1414472e0();
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



// FUNCTION 1409a8d70 FUN_1409a8d70 body=159 status=ok
// SIG undefined FUN_1409a8d70(void)

void FUN_1409a8d70(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  
  local_18 = 1;
  local_28 = param_2;
  local_20 = param_1;
  puVar1 = (undefined4 *)FUN_142dd6f80(local_38,*(undefined8 *)(param_1 + 0x110),&local_28);
  fVar3 = (float)puVar1[2];
  fVar2 = (float)puVar1[3];
  *param_3 = *puVar1;
  if (((fVar2 != 3.4028235e+38) && (0.0 < fVar3)) && (fVar3 < 3.4028235e+38)) {
    fVar2 = fVar2 / fVar3;
    fVar3 = 0.0;
    if ((0.0 <= fVar2) && (fVar3 = fVar2, 1.0 <= fVar2)) {
      fVar3 = 1.0;
    }
    param_3[1] = (int)((1.0 - fVar3) * 100.0);
    return;
  }
  param_3[1] = 0;
  return;
}



// FUNCTION 1409a8e10 FUN_1409a8e10 body=494 status=ok
// SIG undefined FUN_1409a8e10(void)

uint * FUN_1409a8e10(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  ulonglong local_res8;
  float local_res10 [2];
  float local_res20 [2];
  
  uVar5 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  if (*(char *)(param_1 + 0x58) != '\0') {
    cVar2 = *(char *)(param_1 + 0x68);
    if (cVar2 == '\0') {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      if (cVar2 != '\x01') {
        if (cVar2 != '\x02') {
          if (cVar2 == '\x03') {
            local_res8 = local_res8 & 0xffffffff00000000;
            local_res20[0] = 0.0;
            local_res10[0] = 0.0;
            FUN_1414448e0(param_1 + -0x120,&local_res8,local_res20,local_res10);
            *param_2 = (uint)local_res8;
            if (((local_res10[0] != 3.4028235e+38) && (0.0 < local_res20[0])) &&
               (local_res20[0] < 3.4028235e+38)) {
              local_res10[0] = local_res10[0] / local_res20[0];
              fVar7 = 0.0;
              if ((0.0 <= local_res10[0]) && (fVar7 = local_res10[0], 1.0 <= local_res10[0])) {
                fVar7 = 1.0;
              }
              uVar5 = (uint)((1.0 - fVar7) * 100.0);
            }
            param_2[1] = uVar5;
            return param_2;
          }
          if (cVar2 != '\x04') {
            return param_2;
          }
          *param_2 = (uint)(*(char *)(param_1 + -0x7f) == '\x03');
          return param_2;
        }
        plVar3 = *(longlong **)(param_1 + -0x38);
        plVar1 = plVar3 + (longlong)*(int *)(param_1 + -0x30) * 5;
        if (plVar3 == plVar1) {
          return param_2;
        }
        while (*plVar3 != *(longlong *)(param_1 + 0x78)) {
          plVar3 = plVar3 + 5;
          if (plVar3 == plVar1) {
            return param_2;
          }
        }
        if (plVar3 == (longlong *)0x0) {
          return param_2;
        }
        *param_2 = 1;
        if ((char)plVar3[1] != '\0') {
          return param_2;
        }
        fVar7 = *(float *)((longlong)plVar3 + 0x24);
        if (((fVar7 - *(float *)(plVar3 + 4) != 3.4028235e+38) && (0.0 < fVar7)) &&
           (fVar7 < 3.4028235e+38)) {
          fVar7 = (fVar7 - *(float *)(plVar3 + 4)) / fVar7;
          fVar6 = 0.0;
          if ((0.0 <= fVar7) && (fVar6 = fVar7, 1.0 <= fVar7)) {
            fVar6 = 1.0;
          }
          param_2[1] = (int)((1.0 - fVar6) * 100.0);
          return param_2;
        }
        param_2[1] = 0;
        return param_2;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x70);
    }
    FUN_1409a8d70(param_1 + -0x120,uVar4,param_2);
  }
  return param_2;
}



// FUNCTION 1409a9020 FUN_1409a9020 body=244 status=ok
// SIG undefined FUN_1409a9020(void)

undefined4 FUN_1409a9020(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar5 = FUN_14144bcb0();
    lVar1 = *(longlong *)(param_1 + 0x88);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar5) {
        if (lVar1 == 0) {
          return 0;
        }
        if (lVar1 == 0) goto LAB_1409a908e;
        plVar6 = (longlong *)FUN_14144bcb0();
        plVar10 = *(longlong **)(param_1 + 0x88);
        plVar3 = plVar10;
        goto joined_r0x0001409a907a;
      }
    }
  }
  return 0;
joined_r0x0001409a907a:
  if (plVar3 == (longlong *)0x0) {
LAB_1409a908e:
    plVar10 = (longlong *)0x0;
LAB_1409a9090:
    if ((plVar10[0x1f] == 0) && ((**(code **)(*plVar10 + 0x368))(plVar10), plVar10[0x1f] == 0)) {
      uVar4 = 0;
    }
    else {
      uVar7 = FSoftObjectPath::FSoftObjectPath(local_28);
      puVar8 = (undefined8 *)FSoftObjectPath::ToString(uVar7,local_38);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar8;
      }
      uVar4 = FUN_140438070(puVar9);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_20 != 0) {
        FMemory::Free();
        return uVar4;
      }
    }
    return uVar4;
  }
  if (plVar3 == plVar6) goto LAB_1409a9090;
  plVar3 = (longlong *)plVar3[6];
  goto joined_r0x0001409a907a;
}



// FUNCTION 1409a9140 FUN_1409a9140 body=247 status=ok
// SIG undefined FUN_1409a9140(void)

void FUN_1409a9140(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146864cd8) {
    _Init_thread_header(&DAT_146864cd8);
    if (DAT_146864cd8 == -1) {
      uVar1 = FUN_141473c40();
      FUN_141473c40();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"bWasShutDownGracefully",1);
      DAT_146864cd0 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864cd8);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864cd0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864cd0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864cd0 + 0x30));
  }
  FUN_143079100(param_1,param_2);
  return;
}



// FUNCTION 1409a9240 FUN_1409a9240 body=427 status=ok
// SIG undefined FUN_1409a9240(void)

void FUN_1409a9240(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146864bc0) {
    _Init_thread_header(&DAT_146864bc0);
    if (DAT_146864bc0 == -1) {
      uVar1 = AGExplodingRockProjectile::GetPrivateStaticClass();
      AGExplodingRockProjectile::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"RuntimeMods",1);
      DAT_146864bb8 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864bc0);
    }
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146864bb8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864bb8 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864bb8 + 0x30));
  }
  if (*piVar5 < DAT_146864cd8) {
    _Init_thread_header(&DAT_146864cd8);
    if (DAT_146864cd8 == -1) {
      uVar1 = FUN_141473c40();
      FUN_141473c40();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"bWasShutDownGracefully",1);
      DAT_146864cd0 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864cd8);
    }
  }
  if (0 < *(int *)(DAT_146864cd0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864cd0 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146864cd0 + 0x30));
  }
  FUN_143079100(param_1,param_2);
  return;
}



// FUNCTION 1409a93f0 FUN_1409a93f0 body=247 status=ok
// SIG undefined FUN_1409a93f0(void)

void FUN_1409a93f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146864bd0) {
    _Init_thread_header(&DAT_146864bd0);
    if (DAT_146864bd0 == -1) {
      uVar1 = FUN_1414a0c30();
      FUN_1414a0c30();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"PetActor",1);
      DAT_146864bc8 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864bd0);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864bc8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864bc8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864bc8 + 0x30));
  }
  FUN_1409d6380(param_1,param_2);
  return;
}



// FUNCTION 1409a94f0 FUN_1409a94f0 body=247 status=ok
// SIG undefined FUN_1409a94f0(void)

void FUN_1409a94f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146864be0) {
    _Init_thread_header(&DAT_146864be0);
    if (DAT_146864be0 == -1) {
      uVar1 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
      UUGStreamInteractConnectionUW::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"FireRate",1);
      DAT_146864bd8 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864be0);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864bd8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864bd8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864bd8 + 0x30));
  }
  FUN_14129a010(param_1,param_2);
  return;
}



// FUNCTION 1409a95f0 FUN_1409a95f0 body=781 status=ok
// SIG undefined FUN_1409a95f0(void)

void FUN_1409a95f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar4 < DAT_146864c10) {
    _Init_thread_header(&DAT_146864c10);
    if (DAT_146864c10 == -1) {
      uVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
      UUGLoadoutBarUW::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"CooldownPoolRef",1);
      DAT_146864c08 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864c10);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864c08 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c08 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864c08 + 0x30));
  }
  if (*piVar4 < DAT_146864c20) {
    _Init_thread_header(&DAT_146864c20);
    if (DAT_146864c20 == -1) {
      uVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
      UUGLoadoutBarUW::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"DurationPoolRef",1);
      DAT_146864c18 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864c20);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864c18 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c18 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864c18 + 0x30));
  }
  if (*piVar4 < DAT_146864c30) {
    _Init_thread_header(&DAT_146864c30);
    if (DAT_146864c30 == -1) {
      uVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
      UUGLoadoutBarUW::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsActive",1);
      DAT_146864c28 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864c30);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864c28 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c28 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864c28 + 0x30));
  }
  if (*piVar4 < DAT_146864c40) {
    _Init_thread_header(&DAT_146864c40);
    if (DAT_146864c40 == -1) {
      uVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
      UUGLoadoutBarUW::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"Charges",1);
      DAT_146864c38 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864c40);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864c38 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c38 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864c38 + 0x30));
  }
  FUN_1430ec860(param_1,param_2);
  return;
}



// FUNCTION 1409a9900 FUN_1409a9900 body=433 status=ok
// SIG undefined FUN_1409a9900(void)

void FUN_1409a9900(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_1409a95f0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146864cf8) && (_Init_thread_header(&DAT_146864cf8), DAT_146864cf8 == -1)) {
    uVar1 = UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
    UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RuntimeMods",1);
    DAT_146864cf0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864cf8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146864cf0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864cf0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864cf0 + 0x30));
  }
  if ((*piVar5 < DAT_146864d08) && (_Init_thread_header(&DAT_146864d08), DAT_146864d08 == -1)) {
    uVar1 = UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
    UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BarrierActor",1);
    DAT_146864d00 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864d08);
  }
  if (0 < *(int *)(DAT_146864d00 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864d00 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146864d00 + 0x30));
  }
  return;
}



// FUNCTION 1409a9ac0 FUN_1409a9ac0 body=955 status=ok
// SIG undefined FUN_1409a9ac0(void)

void FUN_1409a9ac0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_28 [2];
  undefined8 local_24;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146864ba0) && (_Init_thread_header(&DAT_146864ba0), DAT_146864ba0 == -1)) {
    uVar1 = UUGBrightnessScreenUW::GetPrivateStaticClass();
    UUGBrightnessScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RuntimeMods",1);
    DAT_146864b98 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864ba0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146864b98 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864b98 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864b98 + 0x30));
  }
  if ((*piVar5 < DAT_146864c10) && (_Init_thread_header(&DAT_146864c10), DAT_146864c10 == -1)) {
    uVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
    UUGLoadoutBarUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CooldownPoolRef",1);
    DAT_146864c08 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864c10);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146864c08 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c08 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864c08 + 0x30));
  }
  if ((*piVar5 < DAT_146864c20) && (_Init_thread_header(&DAT_146864c20), DAT_146864c20 == -1)) {
    uVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
    UUGLoadoutBarUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DurationPoolRef",1);
    DAT_146864c18 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864c20);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146864c18 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c18 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864c18 + 0x30));
  }
  if ((*piVar5 < DAT_146864c30) && (_Init_thread_header(&DAT_146864c30), DAT_146864c30 == -1)) {
    uVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
    UUGLoadoutBarUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsActive",1);
    DAT_146864c28 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864c30);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146864c28 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c28 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864c28 + 0x30));
  }
  if ((*piVar5 < DAT_146864c40) && (_Init_thread_header(&DAT_146864c40), DAT_146864c40 == -1)) {
    uVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
    UUGLoadoutBarUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Charges",1);
    DAT_146864c38 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864c40);
  }
  if (0 < *(int *)(DAT_146864c38 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c38 + 0x40) + (short)iVar4;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146864c38 + 0x30));
  }
  FUN_1430ec860(param_1,param_2);
  return;
}



// FUNCTION 1409a9e80 FUN_1409a9e80 body=251 status=ok
// SIG undefined FUN_1409a9e80(void)

void FUN_1409a9e80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146864bb0) {
    _Init_thread_header(&DAT_146864bb0);
    if (DAT_146864bb0 == -1) {
      uVar1 = UGAccountPage::GetPrivateStaticClass();
      UGAccountPage::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"TrackedTargetState",1);
      DAT_146864ba8 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864bb0);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864ba8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864ba8 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864ba8 + 0x30));
  }
  FUN_1409a9ac0(param_1,param_2);
  return;
}



// FUNCTION 1409a9f80 FUN_1409a9f80 body=789 status=ok
// SIG undefined FUN_1409a9f80(void)

void FUN_1409a9f80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_1409a95f0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146864d18) && (_Init_thread_header(&DAT_146864d18), DAT_146864d18 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentDigiclone",1);
    DAT_146864d10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864d18);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146864d10 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864d10 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864d10 + 0x30));
  }
  if ((*piVar5 < DAT_146864d28) && (_Init_thread_header(&DAT_146864d28), DAT_146864d28 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DigicloneCooldownPoolRef",1);
    DAT_146864d20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864d28);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146864d20 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864d20 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864d20 + 0x30));
  }
  if ((*piVar5 < DAT_146864d38) && (_Init_thread_header(&DAT_146864d38), DAT_146864d38 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SwapPlacesCooldownPoolRef",1);
    DAT_146864d30 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864d38);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146864d30 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864d30 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864d30 + 0x30));
  }
  if ((*piVar5 < DAT_146864d48) && (_Init_thread_header(&DAT_146864d48), DAT_146864d48 == -1)) {
    uVar1 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    AUGWallHowlingMouthTrap::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RuntimeMods",1);
    DAT_146864d40 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864d48);
  }
  if (0 < *(int *)(DAT_146864d40 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864d40 + 0x40) + (short)iVar4;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146864d40 + 0x30));
  }
  return;
}



// FUNCTION 1409aa2a0 FUN_1409aa2a0 body=232 status=ok
// SIG undefined FUN_1409aa2a0(void)

void FUN_1409aa2a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_1409a95f0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146864bf0) && (_Init_thread_header(&DAT_146864bf0), DAT_146864bf0 == -1))
  {
    uVar1 = UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
    UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIronCubActive",1);
    DAT_146864be8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146864bf0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864be8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864be8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864be8 + 0x30));
  }
  return;
}



// FUNCTION 1409aa390 FUN_1409aa390 body=781 status=ok
// SIG undefined FUN_1409aa390(void)

void FUN_1409aa390(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar4 < DAT_146864c50) {
    _Init_thread_header(&DAT_146864c50);
    if (DAT_146864c50 == -1) {
      uVar1 = AGFireballProjectile::GetPrivateStaticClass();
      AGFireballProjectile::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"AbilitySlotList",1);
      DAT_146864c48 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864c50);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864c48 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c48 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864c48 + 0x30));
  }
  if (*piVar4 < DAT_146864c60) {
    _Init_thread_header(&DAT_146864c60);
    if (DAT_146864c60 == -1) {
      uVar1 = AGFireballProjectile::GetPrivateStaticClass();
      AGFireballProjectile::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"AugmentSlotList",1);
      DAT_146864c58 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864c60);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864c58 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c58 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864c58 + 0x30));
  }
  if (*piVar4 < DAT_146864c70) {
    _Init_thread_header(&DAT_146864c70);
    if (DAT_146864c70 == -1) {
      uVar1 = AGFireballProjectile::GetPrivateStaticClass();
      AGFireballProjectile::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayerAbilityHUDItemList",1);
      DAT_146864c68 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864c70);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864c68 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c68 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864c68 + 0x30));
  }
  if (*piVar4 < DAT_146864c80) {
    _Init_thread_header(&DAT_146864c80);
    if (DAT_146864c80 == -1) {
      uVar1 = AGFireballProjectile::GetPrivateStaticClass();
      AGFireballProjectile::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"bAbilityDataForSaveGameSet",1);
      DAT_146864c78 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864c80);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864c78 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146864c78 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864c78 + 0x30));
  }
  FUN_14233e8d0(param_1,param_2);
  return;
}



// FUNCTION 1409aa6a0 FUN_1409aa6a0 body=247 status=ok
// SIG undefined FUN_1409aa6a0(void)

void FUN_1409aa6a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146864cc8) {
    _Init_thread_header(&DAT_146864cc8);
    if (DAT_146864cc8 == -1) {
      uVar1 = FUN_14144ea90();
      FUN_14144ea90();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"AbilityPoints",1);
      DAT_146864cc0 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146864cc8);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146864cc0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146864cc0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146864cc0 + 0x30));
  }
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 1409aa7a0 FUN_1409aa7a0 body=134 status=ok
// SIG undefined FUN_1409aa7a0(void)

undefined8 FUN_1409aa7a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x200);
  if (lVar2 != 0) {
    lVar4 = AAmbientSound::GetPrivateStaticClass();
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
      iVar1 = *(int *)(lVar2 + 0x2ec);
      if ((iVar1 < 0) || (*(int *)(lVar2 + 0x2f8) <= iVar1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar5 = FWeakObjectPtr::Get((longlong)iVar1 * 0x60 + *(longlong *)(lVar2 + 0x2f0));
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1409aa830 FUN_1409aa830 body=17 status=ok
// SIG undefined FUN_1409aa830(void)

undefined4 FUN_1409aa830(longlong param_1)

{
  if (1 < (byte)(*(char *)(param_1 + 0x34) - 3U)) {
    return *(undefined4 *)(param_1 + 0x30);
  }
  return 0;
}



// FUNCTION 1409aa850 FUN_1409aa850 body=148 status=ok
// SIG undefined FUN_1409aa850(void)

ulonglong FUN_1409aa850(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  plVar9 = *(longlong **)(param_1 + 0xa8);
  uVar5 = 0;
  plVar1 = plVar9 + *(int *)(param_1 + 0xb0);
  uVar7 = uVar5;
  for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
    lVar2 = *plVar9;
    if (lVar2 != 0) {
      plVar4 = *(longlong **)(lVar2 + 0x38);
      uVar8 = (longlong)*(int *)(lVar2 + 0x40) & 0x1fffffffffffffff;
      if (plVar4 + *(int *)(lVar2 + 0x40) < plVar4) {
        uVar8 = uVar5;
      }
      uVar6 = uVar5;
      if (uVar8 != 0) {
        do {
          lVar2 = *plVar4;
          iVar3 = 0;
          if ((lVar2 != 0) && (1 < (byte)(*(char *)(lVar2 + 0x34) - 3U))) {
            iVar3 = *(int *)(lVar2 + 0x30);
          }
          uVar7 = (ulonglong)(uint)((int)uVar7 + iVar3);
          plVar4 = plVar4 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar8);
      }
    }
  }
  return uVar7;
}



// FUNCTION 1409aa8f0 FUN_1409aa8f0 body=141 status=ok
// SIG undefined FUN_1409aa8f0(void)

longlong FUN_1409aa8f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    return *(longlong *)(param_1 + 0x1f8);
  }
  lVar2 = FUN_1430ec7a0();
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1430ec7a0(param_1);
    lVar2 = (**(code **)(*plVar3 + 0x670))(plVar3);
    if (lVar2 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1409aa968;
    }
  }
  lVar2 = 0;
LAB_1409aa968:
  *(longlong *)(param_1 + 0x1f8) = lVar2;
  return lVar2;
}



// FUNCTION 1409aa980 FUN_1409aa980 body=102 status=ok
// SIG undefined FUN_1409aa980(void)

undefined8 * FUN_1409aa980(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
            (param_1,0);
  uVar1 = *param_1;
  FName::FName(local_res8,L"ActionOwner",1);
  FUN_142c625b0(uVar1,local_res8,param_2);
  return param_1;
}



// FUNCTION 1409aa9f0 FUN_1409aa9f0 body=121 status=ok
// SIG undefined FUN_1409aa9f0(void)

longlong FUN_1409aa9f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x2ae0);
  }
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x3b8), lVar2 != 0)) {
    lVar3 = UUGJournalKey::GetPrivateStaticClass();
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



// FUNCTION 1409aaa70 FUN_1409aaa70 body=31 status=ok
// SIG undefined FUN_1409aaa70(void)

undefined8 FUN_1409aaa70(longlong param_1)

{
  FUN_142c6c710(param_1 + -0x148);
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1409aaa90 FUN_1409aaa90 body=31 status=ok
// SIG undefined FUN_1409aaa90(void)

undefined8 FUN_1409aaa90(longlong param_1)

{
  FUN_142c6c710(param_1 + -0x148);
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 1409aaab0 FUN_1409aaab0 body=31 status=ok
// SIG undefined FUN_1409aaab0(void)

undefined8 FUN_1409aaab0(longlong param_1)

{
  FUN_142c6c710(param_1 + -0x238);
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1409aaad0 FUN_1409aaad0 body=68 status=ok
// SIG undefined FUN_1409aaad0(void)

undefined8 * FUN_1409aaad0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 1;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
            (param_1,0);
  FUN_142c625b0(*param_1,&DAT_146864b18,param_2);
  return param_1;
}



// FUNCTION 1409aab20 FUN_1409aab20 body=205 status=ok
// SIG undefined FUN_1409aab20(void)

longlong FUN_1409aab20(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x300) != 0) {
    return *(longlong *)(param_1 + 0x300);
  }
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar3 != 0)) {
    lVar2 = FUN_1413ffd50();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = FUN_140a63ba0(lVar3), lVar3 != 0)) {
      lVar2 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1409aabd8;
    }
  }
  lVar3 = 0;
LAB_1409aabd8:
  *(longlong *)(param_1 + 0x300) = lVar3;
  return lVar3;
}



// FUNCTION 1409aabf0 FUN_1409aabf0 body=532 status=ok
// SIG undefined FUN_1409aabf0(void)

longlong * FUN_1409aabf0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_a8;
  undefined8 local_a4;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  longlong local_28;
  
  lVar9 = 0;
  cVar3 = FWeakObjectPtr::IsValid();
  if (cVar3 == '\0') {
LAB_1409aac6f:
    local_68 = 0;
    local_70 = 0;
    puVar5 = &local_80;
    bVar2 = false;
    bVar1 = true;
    local_60 = 0;
    local_80 = 0xffffffff;
    local_7c = 0;
  }
  else {
    lVar4 = FWeakObjectPtr::Get(param_1);
    if ((*(int *)(param_1 + 8) < 0) || (*(int *)(lVar4 + 0x40) <= *(int *)(param_1 + 8))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1409aac6f;
    bVar2 = true;
    bVar1 = false;
    lVar4 = FWeakObjectPtr::Get(param_1);
    puVar5 = (undefined4 *)
             TSoftClassPtr<AItem>::TSoftClassPtr<AItem>
                       (local_40,(longlong)*(int *)(param_1 + 8) * 0x108 + 0x18 +
                                 *(longlong *)(lVar4 + 0x38));
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a8 = *puVar5;
  local_a4 = *(undefined8 *)(puVar5 + 1);
  local_58 = *(undefined8 *)(puVar5 + 4);
  FString::FString(local_50,puVar5 + 6);
  FSoftObjectPath::operator=(&local_98,&local_58);
  if ((bVar1) && (local_68 != 0)) {
    FMemory::Free();
  }
  if ((bVar2) && (local_28 != 0)) {
    FMemory::Free();
  }
  lVar6 = FWeakObjectPtr::Get(&local_a8);
  lVar4 = lVar9;
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == local_a4._4_4_) || (local_98 == 0)) goto LAB_1409aadd8;
    lVar6 = FUN_141796df0(&local_98);
    FWeakObjectPtr::operator=(&local_a8,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_a4 = CONCAT44(DAT_1464b56f4,(undefined4)local_a4);
    }
    lVar6 = FWeakObjectPtr::Get(&local_a8);
    if (lVar6 == 0) goto LAB_1409aadd8;
  }
  lVar7 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar8 = FUN_1414425d0();
    lVar7 = lVar6;
    do {
      lVar4 = lVar6;
      if (lVar7 == lVar8) break;
      lVar7 = *(longlong *)(lVar7 + 0x30);
      lVar4 = lVar9;
    } while (lVar7 != 0);
  }
LAB_1409aadd8:
  *param_2 = lVar4;
  if (local_90 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1409aae10 FUN_1409aae10 body=119 status=ok
// SIG undefined FUN_1409aae10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409aae10(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponUseComponent.h"
             ,0x55,L"Pure virtual not implemented (%s)",
             L"UWeaponUseComponent::GetPhysicalStartLocation");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponUseComponent.h"
             ,0x55,L"Pure virtual not implemented (%s)",
             L"UWeaponUseComponent::GetPhysicalStartLocation");
  uVar1 = DAT_1468b5d98;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1409aae90 FUN_1409aae90 body=150 status=ok
// SIG undefined FUN_1409aae90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409aae90(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponUseComponent.h"
             ,0x56,L"Pure virtual not implemented (%s)",
             L"UWeaponUseComponent::GetPhysicalStartLocationAndRotation");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponUseComponent.h"
             ,0x56,L"Pure virtual not implemented (%s)",
             L"UWeaponUseComponent::GetPhysicalStartLocationAndRotation");
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  *param_3 = DAT_1468b5da0;
  *(undefined4 *)(param_3 + 1) = DAT_1468b5da8;
  return;
}



// FUNCTION 1409aaf30 FUN_1409aaf30 body=150 status=ok
// SIG undefined FUN_1409aaf30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409aaf30(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponUseComponent.h"
             ,0x57,L"Pure virtual not implemented (%s)",
             L"UWeaponUseComponent::GetPhysicalStartLocationAndRotation");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponUseComponent.h"
             ,0x57,L"Pure virtual not implemented (%s)",
             L"UWeaponUseComponent::GetPhysicalStartLocationAndRotation");
  *param_3 = _DAT_1468b5d90;
  *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
  *param_4 = DAT_1468b5da0;
  *(undefined4 *)(param_4 + 1) = DAT_1468b5da8;
  return;
}



// FUNCTION 1409aafd0 FUN_1409aafd0 body=59 status=ok
// SIG undefined FUN_1409aafd0(void)

undefined8 FUN_1409aafd0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142d52a00(param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_2);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fea0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1409ab010 FUN_1409ab010 body=263 status=ok
// SIG undefined FUN_1409ab010(void)

int FUN_1409ab010(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float local_res18 [4];
  
  cVar1 = FUN_142d52a00(param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_2);
    uVar2 = FArchive::operator<<(uVar2);
    fVar4 = (float)FUN_142d61c30(uVar2);
    uVar2 = FUN_142d52a20(param_2);
    uVar2 = FArchive::operator<<(uVar2);
    fVar5 = (float)FUN_142d5fed0(uVar2);
    fVar4 = fVar4 - fVar5;
    uVar2 = FUN_142d52a20(param_2);
    uVar2 = FArchive::operator<<(uVar2);
    fVar5 = (float)FUN_142d628b0(uVar2);
    if (fVar5 == 0.0) {
      uVar2 = FUN_142d52a20(param_2);
      lVar3 = FArchive::operator<<(uVar2);
      fVar5 = *(float *)(lVar3 + 0x38);
      uVar2 = FUN_142d52a20(param_2);
      uVar2 = FArchive::operator<<(uVar2);
      fVar4 = (float)FUN_142d5fed0(uVar2);
    }
    modff(ABS(fVar4) / fVar5,local_res18);
    return -((int)ROUND(-0.5 - local_res18[0] * 2.0) >> 1);
  }
  return 0;
}



// FUNCTION 1409ab120 FUN_1409ab120 body=199 status=ok
// SIG undefined FUN_1409ab120(void)

int * FUN_1409ab120(longlong *param_1,int *param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  iVar1 = (int)param_1[1];
  piVar4 = piVar3 + (longlong)iVar1 * 8;
  if (piVar3 != piVar4) {
    do {
      if (((piVar3[1] == param_2[1] && piVar3[2] == param_2[2]) && piVar3[3] == param_2[3]) &&
          *param_2 == *piVar3) {
        return piVar3;
      }
      piVar3 = piVar3 + 8;
    } while (piVar3 != piVar4);
  }
  piVar4 = (int *)0x0;
  if (param_3 != '\0') {
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar1);
    }
    uVar2 = *(undefined8 *)(param_2 + 2);
    piVar4 = (int *)(*param_1 + (longlong)iVar1 * 0x20);
    *(undefined8 *)piVar4 = *(undefined8 *)param_2;
    *(undefined8 *)(piVar4 + 2) = uVar2;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
  }
  return piVar4;
}



// FUNCTION 1409ab1f0 FUN_1409ab1f0 body=124 status=ok
// SIG undefined FUN_1409ab1f0(void)

longlong FUN_1409ab1f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x310) == 0) {
    return 0;
  }
  lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x310) + 0x148) + 0x48))();
  if (lVar2 != 0) {
    lVar3 = UUGStartScreenUW::GetPrivateStaticClass();
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



// FUNCTION 1409ab270 FUN_1409ab270 body=121 status=ok
// SIG undefined FUN_1409ab270(void)

longlong FUN_1409ab270(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x2ae0);
  }
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x3b8), lVar2 != 0)) {
    lVar3 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
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



// FUNCTION 1409ab2f0 FUN_1409ab2f0 body=185 status=ok
// SIG undefined FUN_1409ab2f0(void)

longlong FUN_1409ab2f0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if (*param_2 != 0) {
    lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
    for (lVar1 = *param_2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (*param_2 == 0) {
          return 0;
        }
        if (param_3 != 0) {
          lVar3 = *(longlong *)(param_1 + 0xb8);
          lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0xc0) * 0x28;
          while( true ) {
            if (lVar3 == lVar1) {
              return 0;
            }
            cVar2 = FUN_1409aea60(param_2,lVar3 + 0x10);
            if ((cVar2 != '\0') && (*(longlong *)(lVar3 + 0x18) == param_3)) break;
            lVar3 = lVar3 + 0x28;
          }
          return lVar3;
        }
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 1409ab3b0 FUN_1409ab3b0 body=200 status=ok
// SIG undefined FUN_1409ab3b0(void)

longlong FUN_1409ab3b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x478);
    lVar4 = (longlong)*(int *)(param_1 + 0x480) * 0x20 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x20) {
      if (*(longlong *)(lVar2 + 0x10) == param_2) {
        if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x18), lVar2 != 0)) {
          lVar3 = FUN_14144bcb0();
          lVar4 = lVar2;
          goto LAB_1409ab408;
        }
        break;
      }
    }
  }
  goto LAB_1409ab416;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0) {
LAB_1409ab408:
    if (lVar4 == lVar3) goto LAB_1409ab418;
  }
LAB_1409ab416:
  lVar2 = 0;
LAB_1409ab418:
  lVar2 = FUN_1430ec580(param_1,lVar2);
  if (lVar2 != 0) {
    lVar4 = FUN_14144bcb0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
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



// FUNCTION 1409ab480 FUN_1409ab480 body=78 status=ok
// SIG undefined FUN_1409ab480(void)

undefined8 * FUN_1409ab480(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x478);
    lVar2 = (longlong)*(int *)(param_1 + 0x480) * 0x20 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
      if (*(longlong *)(lVar1 + 0x10) == param_3) {
        if (lVar1 != 0) {
          *param_2 = *(undefined8 *)(lVar1 + 0x18);
          return param_2;
        }
        break;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1409ab4d0 FUN_1409ab4d0 body=225 status=ok
// SIG undefined FUN_1409ab4d0(void)

undefined8 * FUN_1409ab4d0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x651) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x670);
    lVar3 = (longlong)*(int *)(param_1 + 0x678) * 0x50 + lVar2;
    while( true ) {
      if (lVar2 == lVar3) {
        *param_2 = 0;
        return param_2;
      }
      lVar1 = FUN_140d3bb40(lVar2);
      if (lVar1 == param_3) break;
      lVar2 = lVar2 + 0x50;
    }
    FUN_140d3a450(lVar2,param_2);
    return param_2;
  }
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x478);
    lVar3 = (longlong)*(int *)(param_1 + 0x480) * 0x20 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
      if (*(longlong *)(lVar2 + 0x10) == param_3) {
        if (lVar2 != 0) {
          *param_2 = *(undefined8 *)(lVar2 + 0x18);
          return param_2;
        }
        break;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1409ab5c0 FUN_1409ab5c0 body=66 status=ok
// SIG undefined FUN_1409ab5c0(void)

undefined8 FUN_1409ab5c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    local_res8[0] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = FUN_1409ab2f0(*(longlong *)(param_1 + 0x118) + 0x488,local_res8,param_2);
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0x20);
    }
  }
  return 0;
}



// FUNCTION 1409ab610 FUN_1409ab610 body=85 status=ok
// SIG undefined FUN_1409ab610(void)

int FUN_1409ab610(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x90);
  iVar4 = 0;
  lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x98) * 0x28;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
    iVar2 = FUN_1409a0fe0(lVar3);
    iVar4 = iVar4 + iVar2;
  }
  return iVar4;
}



// FUNCTION 1409ab670 FUN_1409ab670 body=119 status=ok
// SIG undefined FUN_1409ab670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409ab670(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponUseComponent.h"
             ,0x54,L"Pure virtual not implemented (%s)",
             L"UWeaponUseComponent::GetStartTraceLocation");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponUseComponent.h"
             ,0x54,L"Pure virtual not implemented (%s)",
             L"UWeaponUseComponent::GetStartTraceLocation");
  uVar1 = DAT_1468b5d98;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1409ab6f0 FUN_1409ab6f0 body=685 status=ok
// SIG undefined FUN_1409ab6f0(void)

undefined8
FUN_1409ab6f0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  lVar3 = param_1 + 0xb0;
  lVar4 = FWeakObjectPtr::Get(lVar3);
  lVar9 = 0;
  lVar6 = lVar9;
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0xb8)) && (*(longlong *)(param_1 + 0xc0) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xb8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar3);
      if (lVar4 != 0) goto LAB_1409ab7dc;
    }
  }
  else {
LAB_1409ab7dc:
    lVar3 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
      lVar3 = lVar4;
      do {
        lVar6 = lVar4;
        if (lVar3 == lVar5) break;
        lVar3 = *(longlong *)(lVar3 + 0x30);
        lVar6 = lVar9;
      } while (lVar3 != 0);
    }
  }
  lVar3 = FUN_1430ec580(param_2,lVar6);
  if (lVar3 == 0) {
    return 0;
  }
  lVar6 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  lVar4 = param_1 + 0xd8;
  lVar6 = FWeakObjectPtr::Get(lVar4);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0xe0)) && (*(longlong *)(param_1 + 0xe8) != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xe0) = DAT_1464b56f4;
      }
      lVar6 = FWeakObjectPtr::Get(lVar4);
      if (lVar6 != 0) goto LAB_1409ab8f7;
    }
  }
  else {
LAB_1409ab8f7:
    lVar4 = FUN_1413d0620();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1409ab930;
  }
  lVar6 = lVar9;
LAB_1409ab930:
  plVar8 = *(longlong **)(lVar3 + 0xe8);
  plVar1 = plVar8 + (longlong)*(int *)(lVar3 + 0xf0) * 5;
  while( true ) {
    if (plVar8 == plVar1) {
      return 0;
    }
    if (*plVar8 == lVar6) break;
    plVar8 = plVar8 + 5;
  }
  if (plVar8 == (longlong *)0x0) {
    return 0;
  }
  uVar7 = FUN_1413d2880();
  *param_3 = uVar7;
  *param_4 = plVar8;
  *param_5 = param_2;
  return 1;
}



// FUNCTION 1409ab9a0 FUN_1409ab9a0 body=385 status=ok
// SIG undefined FUN_1409ab9a0(void)

undefined8
FUN_1409ab9a0(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = AGFireballProjectile::GetPrivateStaticClass();
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
    return 0;
  }
  lVar6 = param_1 + 0xb0;
  lVar3 = FWeakObjectPtr::Get(lVar6);
  lVar5 = 0;
  lVar2 = lVar5;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0xb8)) || (*(longlong *)(param_1 + 0xc0) == 0))
    goto LAB_1409abad3;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xb8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) goto LAB_1409abad3;
  }
  lVar6 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar6 = lVar3;
    do {
      lVar2 = lVar3;
      if (lVar6 == lVar4) break;
      lVar6 = *(longlong *)(lVar6 + 0x30);
      lVar2 = lVar5;
    } while (lVar6 != 0);
  }
LAB_1409abad3:
  lVar2 = FUN_1409a6100(param_2,lVar2);
  if (lVar2 == 0) {
    return 0;
  }
  *param_3 = *(undefined8 *)(lVar2 + 0x10);
  *param_4 = lVar2;
  *param_5 = param_2;
  return 1;
}



// FUNCTION 1409abb30 FUN_1409abb30 body=200 status=ok
// SIG undefined FUN_1409abb30(void)

ulonglong FUN_1409abb30(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                       undefined8 *param_5)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (param_2 != 0) {
    lVar2 = UUGLoadoutBarUW::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      local_28 = *(undefined4 *)(param_2 + 0x1c0);
      uStack_24 = *(undefined4 *)(param_2 + 0x1c4);
      uStack_20 = *(undefined4 *)(param_2 + 0x1c8);
      uStack_1c = *(undefined4 *)(param_2 + 0x1cc);
      local_18 = *(undefined8 *)(param_2 + 0x1d0);
      in_RAX = FUN_142d52a00(&local_28);
      if ((char)in_RAX != '\0') {
        uVar4 = FUN_142d52a20(&local_28);
        uVar5 = FUN_142e1b780();
        *param_3 = uVar5;
        *param_4 = uVar4;
        *param_5 = CONCAT44(uStack_1c,uStack_20);
        return CONCAT71((int7)(CONCAT44(uStack_1c,uStack_20) >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409abc00 FUN_1409abc00 body=266 status=ok
// SIG undefined FUN_1409abc00(void)

void FUN_1409abc00(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar4 = *(longlong *)(param_1 + 0x220);
  uVar7 = 0;
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(lVar4 + 0x38);
    plVar6 = plVar5 + (longlong)*(int *)(lVar4 + 0x40) * 10;
    if (plVar5 != plVar6) {
      do {
        if (*plVar5 == *(longlong *)(param_1 + 0x228)) {
          if (plVar5 != (longlong *)0x0) {
            lVar4 = *(longlong *)(param_1 + 0x20);
            uVar1 = *param_2;
            goto joined_r0x0001409abc80;
          }
          break;
        }
        plVar5 = plVar5 + 10;
      } while (plVar5 != plVar6);
    }
  }
  goto LAB_1409abcf1;
joined_r0x0001409abc80:
  if (lVar4 == 0) goto LAB_1409abcc1;
  lVar3 = FUN_1414425d0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) goto LAB_1409abcc3;
  lVar4 = *(longlong *)(lVar4 + 0x20);
  goto joined_r0x0001409abc80;
LAB_1409abcc1:
  lVar4 = 0;
LAB_1409abcc3:
  local_18 = 1;
  local_28 = lVar4;
  local_20 = uVar1;
  uVar7 = FUN_142dc64e0(plVar5,&local_28);
LAB_1409abcf1:
  FUN_142deadc0(param_1,uVar7,*param_2);
  return;
}



// FUNCTION 1409abd10 FUN_1409abd10 body=55 status=ok
// SIG undefined FUN_1409abd10(void)

void FUN_1409abd10(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  uVar2 = FUN_142c98860(param_1 + 0x220,uVar1);
  FUN_142deadc0(param_1,uVar2,uVar1);
  return;
}



// FUNCTION 1409abd50 FUN_1409abd50 body=482 status=ok
// SIG undefined FUN_1409abd50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1409abd50(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_5f8 [32];
  undefined8 local_5d8;
  undefined1 local_5d0;
  undefined1 local_5c8 [608];
  undefined8 local_368;
  undefined8 local_360;
  undefined1 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  longlong local_310;
  undefined4 local_308;
  undefined8 local_300;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  uVar2 = DAT_1468646e4;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_5f8;
  DAT_1468646e4 = param_5;
  *param_2 = 0;
  param_2[1] = 0;
  for (; param_3 != (longlong *)0x0; param_3 = (longlong *)param_3[0x3e]) {
    local_5d0 = 1;
    local_368 = 0;
    local_360 = 0;
    local_358 = 1;
    local_350 = 0;
    local_348 = 0;
    local_330 = 0;
    local_328 = 0;
    local_320 = 0xffffffff;
    local_31c = 0;
    local_310 = 0;
    local_308 = 0;
    local_300 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_58 = 0;
    local_50 = 0;
    local_5d8 = param_4;
    uVar3 = (**(code **)(*param_3 + 0x2c8))(param_3,&local_5d8);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    if (local_1f8 != 0) {
      FMemory::Free();
    }
    local_308 = 0;
    if (local_310 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_350);
    FUN_14099aac0(local_5c8);
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar3;
  }
  DAT_1468646e4 = uVar2;
  return param_2;
}



// FUNCTION 1409abf40 FUN_1409abf40 body=130 status=ok
// SIG undefined FUN_1409abf40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409abf40(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x898) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x898) + 0x900);
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (lVar3 != 0) {
    cVar2 = FUN_142cecfe0(lVar3,&local_38);
    if (cVar2 != '\0') {
      *param_2 = local_20;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_18;
      return param_2;
    }
  }
  uVar1 = DAT_1468b5d98;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1409abfd0 FUN_1409abfd0 body=63 status=ok
// SIG undefined FUN_1409abfd0(void)

undefined8 FUN_1409abfd0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142d52a00(param_1 + 0x280);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_1 + 0x280);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fea0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1409ac010 FUN_1409ac010 body=95 status=ok
// SIG undefined FUN_1409ac010(void)

undefined4 FUN_1409ac010(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong local_20;
  
  uVar2 = FSoftObjectPath::FSoftObjectPath(local_28,param_1);
  puVar3 = (undefined8 *)FSoftObjectPath::ToString(uVar2,local_38);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  uVar1 = FUN_140438070(puVar4);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1409ac090 FUN_1409ac090 body=67 status=ok
// SIG undefined FUN_1409ac090(void)

void FUN_1409ac090(longlong *param_1,int param_2)

{
  int local_res10 [6];
  
  if ((0 < param_2) &&
     (local_res10[0] = (int)param_1[0x2c] + param_2, local_res10[0] != (int)param_1[0x2c])) {
    *(int *)(param_1 + 0x2c) = local_res10[0];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 9,local_res10);
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}



// FUNCTION 1409ac0e0 FUN_1409ac0e0 body=924 status=ok
// SIG undefined FUN_1409ac0e0(void)

void FUN_1409ac0e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 local_res10 [8];
  code *local_38;
  undefined4 uStack_30;
  
  if (param_2 == 0) {
LAB_1409ac16b:
    lVar4 = 0;
  }
  else {
    lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (!bVar9) goto LAB_1409ac16b;
    plVar5 = *(longlong **)(param_1 + 0x640);
    plVar1 = plVar5 + *(int *)(param_1 + 0x648);
    for (; lVar4 = param_2, plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if ((*plVar5 != 0) &&
         (cVar2 = FUN_1409ae1d0(*plVar5,*(undefined8 *)(param_2 + 0x10)), cVar2 != '\0')) {
        return;
      }
    }
  }
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 != 3) goto LAB_1409ac405;
  if (param_2 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    lVar8 = (longlong)*(int *)(param_2 + 0x78) * 0x20 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x20) {
      if (*(int *)(lVar7 + 0x10) == 0) {
LAB_1409ac1f1:
        plVar1 = (longlong *)(param_1 + 0x368);
        plVar5 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar5 + 1,param_2);
          plVar5[2] = (longlong)FUN_1430ec760;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar5[4] = lVar7;
          *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar5 + 0x20))(plVar5,local_res10);
          iVar3 = *(int *)(param_1 + 0x370);
          lVar7 = (longlong)iVar3;
          *(int *)(param_1 + 0x370) = iVar3 + 1;
          if (*(int *)(param_1 + 0x374) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
          }
          lVar8 = *plVar1;
          *(undefined8 *)(lVar8 + lVar7 * 0x10) = 0;
          *(longlong **)(lVar8 + lVar7 * 0x10) = plVar5;
          *(undefined4 *)(lVar8 + 8 + lVar7 * 0x10) = 3;
        }
        break;
      }
      plVar5 = *(longlong **)(lVar7 + 8);
      plVar1 = plVar5 + *(int *)(lVar7 + 0x10);
      for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
        if (((longlong *)*plVar5 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*(longlong *)*plVar5 + 0x288))(), cVar2 != '\0'))
        goto LAB_1409ac1f1;
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 0x380);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_14419ca48;
    FWeakObjectPtr::operator=(plVar5 + 1,param_2);
    plVar5[2] = (longlong)&LAB_14099be60;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar7;
    *plVar5 = (longlong)&PTR_FUN_14419ca90;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,local_res10);
    iVar3 = *(int *)(param_1 + 0x388);
    lVar7 = (longlong)iVar3;
    *(int *)(param_1 + 0x388) = iVar3 + 1;
    if (*(int *)(param_1 + 0x38c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
    }
    lVar8 = *plVar1;
    *(undefined8 *)(lVar8 + lVar7 * 0x10) = 0;
    *(longlong **)(lVar8 + lVar7 * 0x10) = plVar5;
    *(undefined4 *)(lVar8 + 8 + lVar7 * 0x10) = 3;
  }
  if (param_2 == 0) goto LAB_1409ac405;
  lVar7 = FUN_1414425d0();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((!bVar9) || (*(char *)(param_2 + 0x178) == '\0')) goto LAB_1409ac405;
  cVar2 = *(char *)(param_2 + 0x188);
  if (cVar2 == '\0') {
    bVar9 = *(longlong *)(param_2 + 0x130) == 0;
LAB_1409ac3be:
    if (bVar9) goto LAB_1409ac405;
  }
  else {
    if (cVar2 == '\x01') {
      bVar9 = *(longlong *)(param_2 + 400) == 0;
      goto LAB_1409ac3be;
    }
    if (cVar2 == '\x02') {
      bVar9 = *(longlong *)(param_2 + 0x198) == 0;
      goto LAB_1409ac3be;
    }
  }
  local_38 = FUN_1409acbd0;
  uStack_30 = 0;
  TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
            (param_2 + 0x28,local_res10,param_1,&local_38);
  FUN_1409acbd0(param_1,param_2);
LAB_1409ac405:
  if (lVar4 != 0) {
    plVar1 = (longlong *)(param_1 + 0x550);
    plVar5 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x558);
    for (plVar6 = plVar5; plVar6 != plVar5 + iVar3; plVar6 = plVar6 + 1) {
      if (*plVar6 == lVar4) {
        if ((int)((longlong)plVar6 - (longlong)plVar5 >> 3) != -1) goto LAB_1409ac461;
        break;
      }
    }
    *(int *)(param_1 + 0x558) = iVar3 + 1;
    if (*(int *)(param_1 + 0x55c) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar4;
LAB_1409ac461:
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 800,lVar4);
  }
  return;
}



// FUNCTION 1409ac480 FUN_1409ac480 body=255 status=ok
// SIG undefined FUN_1409ac480(void)

void FUN_1409ac480(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_1[0x77] != 0) {
    FUN_1409b70a0();
    plVar1 = (longlong *)param_1[0x77];
    if (param_2 == '\0') {
      FUN_1413dd750(param_1,plVar1);
    }
    else {
      (**(code **)(*plVar1 + 0x6d0))(plVar1,0);
    }
    if (param_1[0x77] != 0) {
      param_1[0x77] = 0;
      FUN_1409af510(param_1);
    }
    lVar2 = FUN_1409aa9f0(param_1[0x22]);
    if (lVar2 != 0) {
      local_res8 = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar2 + 0x48,&local_res8);
    }
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x7a) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = uStack_1c;
  *(undefined4 *)(param_1 + 0x7b) = local_18;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = uStack_14;
  *(undefined4 *)(param_1 + 0x7c) = uStack_10;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = uStack_c;
  *(undefined4 *)(param_1 + 0x7d) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0001409ac578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 1409ac580 FUN_1409ac580 body=126 status=ok
// SIG undefined FUN_1409ac580(void)

void FUN_1409ac580(longlong param_1)

{
  longlong lVar1;
  
  FUN_1409be840();
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0xe80);
  }
  if (lVar1 != 0) {
    if ((*(longlong *)(param_1 + 0x2b8) != 0) && ((*(byte *)(param_1 + 0x25c) & 4) != 0)) {
      FUN_140a9b1e0(lVar1,*(longlong *)(param_1 + 0x2b8),0);
    }
    FUN_140483870(lVar1 + 0x1d0,param_1);
    FUN_1407665e0(lVar1 + 0x308,param_1);
  }
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x268);
  return;
}



// FUNCTION 1409ac600 FUN_1409ac600 body=372 status=ok
// SIG undefined FUN_1409ac600(void)

void FUN_1409ac600(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    FUN_140483870(param_1 + 0x368,param_2);
  }
  FUN_140483870(param_1 + 0x380,param_2);
  if (param_2 != 0) {
    lVar2 = UUGLoadoutBarUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      lVar2 = (longlong)*(int *)(param_1 + 0x558);
      if (*(int *)(param_1 + 0x558) != 0) {
        iVar6 = 0;
        bVar7 = **(longlong **)(param_1 + 0x550) != param_2;
        lVar4 = 0;
        iVar1 = 0;
        do {
          lVar4 = lVar4 + 1;
          iVar5 = iVar1 + 1;
          if (lVar4 < lVar2) {
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x550) + lVar4 * 8);
            do {
              if (bVar7 != (*plVar3 != param_2)) break;
              iVar5 = iVar5 + 1;
              lVar4 = lVar4 + 1;
              plVar3 = plVar3 + 1;
            } while (lVar4 < lVar2);
          }
          if (bVar7 != false) {
            if (iVar6 != iVar1) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x550) + (longlong)iVar6 * 8),
                         (void *)(*(longlong *)(param_1 + 0x550) + (longlong)iVar1 * 8),
                         (longlong)(iVar5 - iVar1) << 3);
            }
            iVar6 = iVar6 + (iVar5 - iVar1);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar1 = iVar5;
        } while (lVar4 < lVar2);
        *(int *)(param_1 + 0x558) = iVar6;
      }
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x338,param_2);
    }
  }
  FUN_142c9eb00();
  return;
}



// FUNCTION 1409ac7b0 FUN_1409ac7b0 body=302 status=ok
// SIG undefined FUN_1409ac7b0(void)

void FUN_1409ac7b0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  longlong local_38 [2];
  
  if (param_2 != '\0') {
    plVar1 = (longlong *)(param_1 + 0x268);
    lVar6 = *plVar1;
    lVar9 = (longlong)*(int *)(param_1 + 0x270) * 0x20 + lVar6;
    if (lVar6 != lVar9) {
      piVar8 = (int *)(lVar6 + 0x18);
      do {
        lVar5 = *(longlong *)(piVar8 + -2);
        lVar2 = lVar5 + (longlong)*piVar8 * 8;
        for (; lVar5 != lVar2; lVar5 = lVar5 + 8) {
          cVar3 = FWeakObjectPtr::IsValid(lVar5);
          if (cVar3 != '\0') {
            plVar4 = (longlong *)FWeakObjectPtr::Get(lVar5);
            (**(code **)(*plVar4 + 0x6d0))(plVar4,0);
          }
        }
        *piVar8 = 0;
        if (piVar8[1] != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(piVar8 + -2);
        }
        lVar6 = lVar6 + 0x20;
        piVar8 = piVar8 + 8;
      } while (lVar6 != lVar9);
    }
    local_38[0] = 0;
    local_38[1] = 0;
    if (plVar1 != local_38) {
      iVar7 = *(int *)(param_1 + 0x270);
      lVar6 = *plVar1;
      if (iVar7 != 0) {
        plVar4 = (longlong *)(lVar6 + 0x10);
        do {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar6 = *plVar1;
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x270) = 0;
    }
    FUN_140590de0(local_38);
  }
  return;
}



// FUNCTION 1409ac8e0 FUN_1409ac8e0 body=304 status=ok
// SIG undefined FUN_1409ac8e0(void)

undefined8 FUN_1409ac8e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if ((DAT_146b3e2b8 == *param_2) && (1 < *(int *)(param_1 + 0x118))) {
      FUN_1409b4730(param_1 + -0x208);
      return 1;
    }
    lVar1 = *param_2;
    if ((((DAT_146864918 == lVar1) || (DAT_146864920 == lVar1)) || (DAT_146864928 == lVar1)) ||
       ((DAT_146864908 == lVar1 || (DAT_146864910 == lVar1)))) {
      plVar6 = *(longlong **)(param_1 + 0xb8);
      plVar5 = plVar6 + *(int *)(param_1 + 0xc0);
      while( true ) {
        if (plVar6 == plVar5) {
          return 0;
        }
        if ((*plVar6 != 0) &&
           (plVar4 = (longlong *)(*plVar6 + 0x150),
           cVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2), cVar2 != '\0')) break;
        plVar6 = plVar6 + 1;
      }
      return 1;
    }
  }
  if ((*(longlong *)(param_1 + 0x108) != 0) &&
     (plVar5 = (longlong *)(*(longlong *)(param_1 + 0x108) + 0x150),
     cVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,param_2), cVar2 != '\0')) {
    return 1;
  }
  uVar3 = FUN_142eefc20(param_1,param_2);
  return uVar3;
}



// FUNCTION 1409aca10 thunk_FUN_1409bbf40 body=5 status=ok
// SIG undefined thunk_FUN_1409bbf40(void)

void thunk_FUN_1409bbf40(void)

{
  FUN_1409bbf40();
  return;
}



// FUNCTION 1409aca20 FUN_1409aca20 body=249 status=ok
// SIG undefined FUN_1409aca20(void)

void FUN_1409aca20(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    FUN_1409bbf40();
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x110);
  if ((lVar4 != 0) && (cVar2 = *(char *)(param_1 + 0x1b8), cVar2 != '\0')) {
    if (cVar2 == '\x01') {
      cVar2 = FUN_140c39ab0(lVar4,0,0);
      if (cVar2 == '\0') {
        return;
      }
    }
    else if ((cVar2 == '\x02') && (cVar2 = FUN_140c39ab0(lVar4,0,2), cVar2 == '\0')) {
      return;
    }
    if (*(longlong *)(param_1 + 0x270) != 0) {
      lVar4 = FUN_1409aa8f0(param_1);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0xc50);
      }
      if (((lVar4 != 0) &&
          (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x760),
          lVar5 = FUN_142de95d0(lVar4), lVar5 == lVar1)) &&
         (cVar2 = FUN_142de5e60(lVar4,0), cVar2 != '\0')) {
        iVar3 = FUN_1430ec7c0(param_1);
        if (2 < iVar3) {
          FUN_1413ddf60(param_1);
          return;
        }
        FUN_1413dd810();
      }
    }
  }
  return;
}



// FUNCTION 1409acb20 FUN_1409acb20 body=79 status=ok
// SIG undefined FUN_1409acb20(void)

void FUN_1409acb20(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    FUN_1409bbf40();
    return;
  }
  iVar2 = FUN_1430ec7c0();
  if (iVar2 < 3) {
    cVar1 = FUN_1409a2cb0();
    if (cVar1 != '\0') {
      FUN_1413dd910(param_1);
      return;
    }
    return;
  }
  FUN_1409ade90(param_1);
  return;
}



// FUNCTION 1409acb90 FUN_1409acb90 body=64 status=ok
// SIG undefined FUN_1409acb90(void)

void FUN_1409acb90(longlong param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x1f0) != '\0') && ((*(byte *)(param_1 + 0x3b0) & 0x10) != 0)) {
    FUN_1413dc730();
    iVar1 = FUN_1430ec7c0(param_1);
    if (iVar1 < 3) {
      FUN_1413dd7d0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1409acbd0 FUN_1409acbd0 body=459 status=ok
// SIG undefined FUN_1409acbd0(void)

void FUN_1409acbd0(longlong param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 local_28 [16];
  
  if (param_2 != 0) {
    lVar4 = FUN_1414425d0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (lVar4 = *(longlong *)(param_2 + 0x1a0), lVar4 != 0)) &&
       (bVar1 = *(byte *)(param_2 + 0xa1), bVar1 != 0)) {
      if (bVar1 < 3) {
        uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        UObjectBaseUtility::GetInterfaceAddress(param_2,uVar5);
        FUN_1409be690(param_1 + 0x560,local_28,lVar4);
        return;
      }
      if (bVar1 == 3) {
        uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        lVar6 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar5);
        if (lVar6 != 0) {
          if (lVar4 != 0) {
            lVar7 = *(longlong *)(param_1 + 0x618);
            lVar9 = (longlong)*(int *)(param_1 + 0x620) * 0x38 + lVar7;
            for (; lVar7 != lVar9; lVar7 = lVar7 + 0x38) {
              if (*(longlong *)(lVar7 + 0x20) == lVar4) {
                if (lVar7 != 0) {
                  return;
                }
                break;
              }
            }
          }
          iVar3 = *(int *)(param_1 + 0x620);
          *(int *)(param_1 + 0x620) = iVar3 + 1;
          if (*(int *)(param_1 + 0x624) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(param_1 + 0x618,iVar3);
          }
          puVar8 = (undefined8 *)((longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0x618));
          *puVar8 = 0xffffffffffffffff;
          *(undefined4 *)(puVar8 + 1) = 0xffffffff;
          puVar8[2] = param_2;
          puVar8[3] = lVar6;
          puVar8[4] = lVar4;
          puVar8[5] = 0;
          *(undefined1 *)(puVar8 + 6) = 0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                    (param_1 + 0x560);
          *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 1;
          iVar3 = *(int *)(param_1 + 0x5b4);
          if (*(int *)(param_1 + 0x5b4) == -1) {
            iVar3 = 0;
          }
          *(int *)(param_1 + 0x5b4) = iVar3;
          *(undefined8 *)(param_1 + 0x608) = 0xffffffffffffffff;
          if (*(longlong **)(param_1 + 0x610) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x610) + 0x260))();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1409acda0 FUN_1409acda0 body=201 status=ok
// SIG undefined FUN_1409acda0(void)

ulonglong FUN_1409acda0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  undefined8 local_res10;
  longlong local_28;
  int local_20;
  uint local_1c;
  byte local_18;
  char local_17;
  
  lVar1 = *(longlong *)(param_1 + 0x3b0);
  if (lVar1 != 0) {
    local_res10 = param_2;
    FUN_1409a61c0(lVar1 + 0xc0,local_res8);
    if (local_res8[0] == -1) {
      in_RAX = 0xffffffffffffffff;
      puVar2 = (undefined8 *)0x0;
    }
    else {
      in_RAX = *(ulonglong *)(lVar1 + 0xc0);
      puVar2 = (undefined8 *)(in_RAX + (longlong)local_res8[0] * 0x18);
    }
    puVar3 = puVar2 + 1;
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      in_RAX = FUN_1409a7560(lVar1,*puVar3,&local_28);
      if ((char)in_RAX != '\0') {
        if (local_17 == '\0') {
          in_RAX = (ulonglong)local_1c;
          if (0 < (int)(local_20 + local_1c)) {
            return CONCAT71((uint7)(uint3)(local_1c >> 8),1);
          }
          if ((local_28 == 0) ||
             ((in_RAX = 0, 1 < (byte)(*(char *)(local_28 + 0x34) - 3U) &&
              (*(int *)(local_28 + 0x30) != 0)))) goto LAB_1409ace61;
        }
        return (ulonglong)local_18;
      }
    }
  }
LAB_1409ace61:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409ace70 FUN_1409ace70 body=114 status=ok
// SIG undefined FUN_1409ace70(void)

undefined4 FUN_1409ace70(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  iVar1 = *(int *)(param_1 + 0x2f8);
  lVar4 = FUN_14309ec50();
  if (lVar4 != 0) {
    plVar5 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x460) + 0x10))();
    if (plVar5 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar5 + 0x420))(plVar5);
      iVar3 = iVar3 / 3 + (iVar3 >> 0x1f) +
              (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f);
      goto LAB_1409acec7;
    }
  }
  iVar3 = 0;
LAB_1409acec7:
  iVar2 = *(int *)(param_1 + 0x2e8);
  if (iVar2 <= iVar3) {
    iVar3 = iVar2;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar3 <= iVar1);
}



// FUNCTION 1409acef0 FUN_1409acef0 body=626 status=ok
// SIG undefined FUN_1409acef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1409acef0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 *local_100;
  undefined *local_f8;
  undefined1 local_e8 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [72];
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar2 = (**(code **)(*param_1 + 0x148))();
  plVar3 = (longlong *)FUN_1413e25e0(param_1,&local_e0);
  plVar6 = (longlong *)0x0;
  plVar3 = (longlong *)*plVar3;
  plVar4 = plVar6;
  plVar7 = plVar6;
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)plVar3[0x1f];
    if (plVar4 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      plVar4 = (longlong *)plVar3[0x1f];
      if (plVar4 == (longlong *)0x0) goto LAB_1409acf72;
    }
    plVar7 = (longlong *)plVar4[0x9a];
  }
LAB_1409acf72:
  if ((lVar2 != 0) && (plVar7 != (longlong *)0x0)) {
    if ((char)plVar4[0x48e] != '\0') {
      return 1;
    }
    FUN_1413e2640(param_1,&local_e0);
    (**(code **)(*plVar7 + 0x748))(plVar7,local_c0,0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146864c00) &&
       (_Init_thread_header(&DAT_146864c00), DAT_146864c00 == -1)) {
      FName::FName(&DAT_146864bf8,L"IronBearSpawnTest",1);
      _Init_thread_footer(&DAT_146864c00);
    }
    local_108 = (undefined1 *)0x0;
    FUN_1422ffb20(local_a8,DAT_146864bf8,local_e8,0);
    FCollisionQueryParams::AddIgnoredActor(local_a8,param_1[0x22]);
    do {
      local_100 = local_a8;
      local_d0 = local_e0;
      local_f8 = &DAT_146aefe68;
      local_108 = local_c0;
      local_cc = local_dc;
      local_c8 = (float)(int)plVar6 * 20.0 + local_d8;
      cVar1 = UWorld::OverlapAnyTestByChannel(lVar2,&local_d0,&DAT_1464aa810,2);
      if (cVar1 == '\0') {
        if (local_40 != 0) {
          FMemory::Free();
        }
        if (local_60 == 0) {
          return 1;
        }
        FMemory::Free();
        return 1;
      }
      uVar5 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar5;
    } while ((int)uVar5 < 3);
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 1409ad170 FUN_1409ad170 body=204 status=ok
// SIG undefined FUN_1409ad170(void)

void FUN_1409ad170(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res10 [24];
  
  FUN_142c6c710();
  uVar2 = FUN_1406d4330(param_1);
  plVar3 = (longlong *)FUN_142c6f130(uVar2);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar7 = (longlong *)0x0;
    plVar5 = plVar7;
    if (bVar1) {
      plVar5 = plVar3;
    }
    param_1[0x48] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar7 = (longlong *)plVar5[0x58e];
    }
    param_1[0x49] = (longlong)plVar7;
    uVar2 = AGFireballProjectile::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar2);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x2b0))(param_1,local_res10);
      lVar4 = FUN_1409a6100(lVar4,*puVar6);
      param_1[0x4a] = lVar4;
    }
  }
  return;
}



// FUNCTION 1409ad240 FUN_1409ad240 body=124 status=ok
// SIG undefined FUN_1409ad240(void)

void FUN_1409ad240(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1409ad170();
  lVar1 = *(longlong *)(param_1 + 0x250);
  if (lVar1 != 0) {
    lVar3 = UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x270) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  return;
}



// FUNCTION 1409ad2c0 FUN_1409ad2c0 body=124 status=ok
// SIG undefined FUN_1409ad2c0(void)

void FUN_1409ad2c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1409ad170();
  lVar1 = *(longlong *)(param_1 + 0x250);
  if (lVar1 != 0) {
    lVar3 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x270) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  return;
}



// FUNCTION 1409ad340 FUN_1409ad340 body=124 status=ok
// SIG undefined FUN_1409ad340(void)

void FUN_1409ad340(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1409ad170();
  lVar1 = *(longlong *)(param_1 + 0x250);
  if (lVar1 != 0) {
    lVar3 = USkeletalBodySetup::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x270) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  return;
}



// FUNCTION 1409ad3c0 FUN_1409ad3c0 body=124 status=ok
// SIG undefined FUN_1409ad3c0(void)

void FUN_1409ad3c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1409ad170();
  lVar1 = *(longlong *)(param_1 + 0x250);
  if (lVar1 != 0) {
    lVar3 = UUGBrightnessScreenUW::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x260) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x260) = 0;
  return;
}



// FUNCTION 1409ad440 FUN_1409ad440 body=124 status=ok
// SIG undefined FUN_1409ad440(void)

void FUN_1409ad440(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1409ad170();
  lVar1 = *(longlong *)(param_1 + 0x250);
  if (lVar1 != 0) {
    lVar3 = UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x260) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x260) = 0;
  return;
}



// FUNCTION 1409ad4c0 FUN_1409ad4c0 body=124 status=ok
// SIG undefined FUN_1409ad4c0(void)

void FUN_1409ad4c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1409ad170();
  lVar1 = *(longlong *)(param_1 + 0x250);
  if (lVar1 != 0) {
    lVar3 = UGAccountPage::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x260) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x260) = 0;
  return;
}



// FUNCTION 1409ad540 FUN_1409ad540 body=541 status=ok
// SIG undefined FUN_1409ad540(void)

void FUN_1409ad540(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_142c6c710();
  if ((undefined8 *)(param_1 + 0x160) != &local_18) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    plVar6 = *(longlong **)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (plVar6 != (longlong *)0x0) {
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
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x170) = local_res8;
  *(undefined4 *)(param_1 + 0x174) = local_resc;
  uVar5 = FUN_1406d4330(param_1);
  plVar6 = (longlong *)FUN_142c6f130(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  lVar7 = FUN_1413ffe00();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  plVar10 = (longlong *)0x0;
  if (bVar3) {
    plVar10 = plVar6;
  }
  *(longlong **)(param_1 + 0x158) = plVar10;
  uVar5 = AGFireballProjectile::GetPrivateStaticClass();
  lVar7 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar5);
  if (lVar7 == 0) {
    return;
  }
  uVar5 = UGAccountPage::GetPrivateStaticClass();
  plVar6 = (longlong *)FUN_1409a6100(lVar7,uVar5);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = UGAccountPage::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1409ad67a;
  }
  plVar6 = (longlong *)0x0;
LAB_1409ad67a:
  *(longlong **)(param_1 + 0x150) = plVar6;
  if ((plVar6 != (longlong *)0x0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x778))(), cVar4 != '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x150);
    local_18 = FUN_1409b4150;
    uStack_10 = 0;
    plVar10 = (longlong *)(lVar7 + 0x268);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar6 + 0x14) = local_18._4_4_;
      *(undefined4 *)(plVar6 + 3) = uStack_10;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_c;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar8;
      *plVar6 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      (**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
      iVar2 = *(int *)(lVar7 + 0x270);
      *(int *)(lVar7 + 0x270) = iVar2 + 1;
      if (*(int *)(lVar7 + 0x274) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
      }
      puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar10);
      *puVar9 = plVar6;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 1409ad760 FUN_1409ad760 body=347 status=ok
// SIG undefined FUN_1409ad760(void)

void FUN_1409ad760(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_res10;
  undefined8 uVar10;
  longlong *local_20;
  
  FUN_142c6c710();
  local_20 = *(longlong **)(param_1 + 0x40);
  lVar8 = 0;
  local_res10 = 0;
  uVar10 = 0;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)local_20[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(local_20 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar4 == (int)local_20[1];
      if (bVar9) {
        *(int *)(local_20 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar9) {
        uVar10 = *(undefined8 *)(param_1 + 0x38);
        goto LAB_1409ad7c4;
      }
      LOCK();
      iVar4 = (int)local_20[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(local_20 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
    local_20 = (longlong *)0x0;
  }
LAB_1409ad7c4:
  cVar3 = FUN_142c71eb0(uVar10,&DAT_146864b18,&local_res10,param_4,uVar10);
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  lVar7 = local_res10;
  if (cVar3 == '\0') {
    return;
  }
  if (local_res10 != 0) {
    lVar5 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar6 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_1409ad881;
  }
  lVar7 = lVar8;
LAB_1409ad881:
  *(longlong *)(param_1 + 0x168) = lVar7;
  lVar6 = lVar8;
  if (lVar7 != 0) {
    lVar6 = *(longlong *)(lVar7 + 0x110);
  }
  *(longlong *)(param_1 + 0x158) = lVar6;
  if (lVar6 != 0) {
    lVar8 = *(longlong *)(lVar6 + 0x2c70);
  }
  *(longlong *)(param_1 + 0x160) = lVar8;
  return;
}



// FUNCTION 1409ad8c0 FUN_1409ad8c0 body=671 status=ok
// SIG undefined FUN_1409ad8c0(void)

void FUN_1409ad8c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong **local_30;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x180) == '\0')) {
    uVar9 = 0;
    *(longlong *)(param_1 + 0x88) = param_2;
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x30);
    uVar4 = uVar9;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      uVar4 = *(ulonglong *)(param_1 + 0x20);
    }
    *(ulonglong *)(param_1 + 0x78) = uVar4;
    uVar4 = uVar9;
    if (*(char *)(param_2 + 0x48) != '\0') {
      uVar4 = *(ulonglong *)(param_2 + 0x50);
    }
    *(ulonglong *)(param_1 + 0x80) = uVar4;
    plVar8 = *(longlong **)(param_2 + 0x38);
    uVar4 = (longlong)*(int *)(param_2 + 0x40) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(param_2 + 0x40) < plVar8) {
      uVar4 = uVar9;
    }
    if (uVar4 != 0) {
      do {
        if (*plVar8 != 0) {
          FUN_14099ceb0(param_1);
        }
        plVar8 = plVar8 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar4);
    }
    plVar8 = *(longlong **)(param_1 + 0xb0);
    iVar1 = *(int *)(param_1 + 0xb8);
    if (plVar8 != plVar8 + (longlong)iVar1 * 6) {
      plVar10 = plVar8 + 1;
      do {
        lVar7 = *plVar10;
        if (lVar7 == 0) {
LAB_1409ada80:
          plVar2 = (longlong *)*plVar10;
          local_res20 = 0;
          if (plVar2 != (longlong *)0x0) {
            lVar7 = FUN_14144ed70();
            if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                lVar7 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              local_58 = plVar2;
              lVar7 = (**(code **)(*plVar2 + 0x2a0))(plVar2);
              if (lVar7 != 0) {
                local_50 = (**(code **)(*local_58 + 0x2a0))();
                local_38 = &local_50;
                local_30 = &local_58;
                TSet<TTuple<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>
                          (param_1 + 0x110,local_res18,&local_38,0);
              }
              goto LAB_1409adb2a;
            }
          }
          local_58 = (longlong *)0x0;
        }
        else {
          lVar5 = FUN_14144ecc0();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1409ada80;
          local_res20 = lVar7;
          if (*(longlong *)(lVar7 + 0x88) != 0) {
            lVar6 = FUN_14144bcb0();
            for (lVar5 = *(longlong *)(lVar7 + 0x88); lVar5 != 0;
                lVar5 = *(longlong *)(lVar5 + 0x30)) {
              if (lVar5 == lVar6) {
                if (*(longlong *)(lVar7 + 0x88) != 0) {
                  local_48 = local_res20 + 0x88;
                  local_40 = &local_res20;
                  FUN_1409988f0(param_1 + 0xc0,local_res10,&local_48);
                }
                break;
              }
            }
          }
        }
LAB_1409adb2a:
        plVar2 = plVar10 + 5;
        plVar10 = plVar10 + 6;
      } while (plVar2 != plVar8 + (longlong)iVar1 * 6);
    }
    *(undefined1 *)(param_1 + 0x180) = 1;
  }
  return;
}



// FUNCTION 1409adb60 FUN_1409adb60 body=280 status=ok
// SIG undefined FUN_1409adb60(void)

void FUN_1409adb60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  
  FUN_1430eccb0();
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    lVar2 = FUN_1414489e0();
    lVar1 = *(longlong *)(param_1 + 0x3a0);
    lVar5 = lVar1;
    if (lVar1 != 0) {
      while (lVar5 != lVar2) {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        if (lVar5 == 0) {
          FUN_14099f8e0(param_1);
          return;
        }
      }
      if (lVar1 != 0) {
        lVar5 = 0;
        if (lVar1 != 0) {
          lVar2 = FUN_1414489e0();
          for (lVar1 = *(longlong *)(param_1 + 0x3a0);
              (lVar5 = 0, lVar1 != 0 && (lVar5 = *(longlong *)(param_1 + 0x3a0), lVar1 != lVar2));
              lVar1 = *(longlong *)(lVar1 + 0x30)) {
          }
        }
        plVar3 = (longlong *)FName::FName(local_res10,L"DefaultEventHub",1);
        lVar1 = *plVar3;
        if (lVar1 == 0) {
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar4 = FUN_1417985e0(lVar5,param_1,lVar1,0,0,0,0,0,0);
        *(undefined8 *)(param_1 + 0x3b8) = uVar4;
      }
    }
  }
  FUN_14099f8e0(param_1);
  return;
}



// FUNCTION 1409adc80 FUN_1409adc80 body=178 status=ok
// SIG undefined FUN_1409adc80(void)

void FUN_1409adc80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res10 [3];
  
  iVar1 = (int)param_2[5] + 1;
  if ((int)param_2[5] != iVar1) {
    lVar2 = *param_2;
    *(int *)(param_2 + 5) = iVar1;
    if (lVar2 == 0) {
      return;
    }
    FUN_1409b5dc0(lVar2);
    local_res10[0] = param_2[1];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar2 + 0x38,local_res10);
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    iVar1 = *(int *)((longlong)param_2 + 0x1c);
    lVar4 = 0;
    lVar5 = lVar4;
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0xa8))) {
      lVar5 = (longlong)iVar1 * 0x38 + *(longlong *)(lVar2 + 0xa0);
    }
    iVar1 = (int)param_2[4];
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x98))) {
      lVar4 = *(longlong *)(lVar2 + 0x90) + (longlong)iVar1 * 0x28;
    }
    if ((lVar5 != 0) && (lVar4 != 0)) {
      uVar3 = FUN_1409a0fe0();
      FUN_1409be350(lVar5,uVar3);
    }
  }
  return;
}



// FUNCTION 1409add40 FUN_1409add40 body=322 status=ok
// SIG undefined FUN_1409add40(void)

void FUN_1409add40(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x3f0))();
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = FUN_1430ec7c0(param_1);
  if (iVar2 < 3) {
    FUN_1413dd8d0(param_1,param_2);
    return;
  }
  if ((char)param_1[0x44] != '\0') {
    return;
  }
  if ((param_2 != '\x02') && (*(char *)((longlong)param_1 + 0x222) != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  if (param_2 == '\x02') {
    (**(code **)(*param_1 + 0x420))(param_1);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x3d0))();
    if (cVar1 != '\0') {
      if (*(char *)((longlong)param_1 + 0x222) != '\x01') {
        *(int *)((longlong)param_1 + 0x224) = (int)param_1[0x45];
        *(undefined1 *)((longlong)param_1 + 0x222) = 1;
        (**(code **)(*param_1 + 0x418))(param_1);
        *(undefined1 *)(param_1 + 0x44) = 0;
        return;
      }
      goto LAB_1409ade70;
    }
    FUN_1413dd710(param_1);
  }
  if ((char)param_1[0x2f] == '\0') {
    FUN_1409b9640(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x222) != '\0') {
    *(int *)((longlong)param_1 + 0x224) = (int)param_1[0x45];
    *(undefined1 *)((longlong)param_1 + 0x222) = 0;
    (**(code **)(*param_1 + 0x418))(param_1);
  }
  if ((char)param_1[0x3e] != '\0') {
    *(undefined1 *)(param_1 + 0x3e) = 0;
    (**(code **)(*param_1 + 0x408))(param_1);
    (**(code **)(*param_1 + 0x260))(param_1);
  }
LAB_1409ade70:
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}



// FUNCTION 1409ade90 FUN_1409ade90 body=87 status=ok
// SIG undefined FUN_1409ade90(void)

void FUN_1409ade90(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1409a2cb0();
  if (cVar1 == '\0') {
    return;
  }
  if ((*(longlong *)(param_1 + 0x110) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x10e0) != 0)) {
    uVar2 = FUN_140adac80();
    FUN_1413ddf20(param_1,uVar2);
    return;
  }
  FUN_1413ddf20(param_1,0);
  return;
}



// FUNCTION 1409adef0 FUN_1409adef0 body=487 status=ok
// SIG undefined FUN_1409adef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409adef0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146864ca8) && (_Init_thread_header(&DAT_146864ca8), DAT_146864ca8 == -1))
  {
    DAT_146864c98 = (longlong *)0x0;
    _DAT_146864ca0 = 0;
    atexit((_func_5014 *)&LAB_143e45b00);
    _Init_thread_footer(&DAT_146864ca8);
  }
  uVar3 = _DAT_146864ca0;
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    lVar7 = (longlong)DAT_146864ca0;
    for (plVar6 = DAT_146864c98; plVar6 != DAT_146864c98 + lVar7; plVar6 = plVar6 + 1) {
      if (*plVar6 == lVar1) {
        return;
      }
    }
    iVar4 = DAT_146864ca0 + 1;
    _DAT_146864ca0 = CONCAT44(DAT_146864ca4,iVar4);
    if (DAT_146864ca4 < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&DAT_146864c98,uVar3 & 0xffffffff);
    }
    DAT_146864c98[lVar7] = lVar1;
    lVar8 = *(longlong *)(param_1 + 0xb8);
    lVar7 = lVar8 + (longlong)*(int *)(param_1 + 0xc0) * 0x28;
    for (; lVar8 != lVar7; lVar8 = lVar8 + 0x28) {
      if (((*(longlong *)(lVar8 + 0x18) != 0) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x18) + 0x78) == lVar1)) &&
         (*(longlong *)(lVar8 + 0x20) != 0)) {
        if (lVar2 != 0) {
          plVar5 = *(longlong **)(lVar2 + 0x88);
          plVar6 = plVar5 + *(int *)(lVar2 + 0x90);
          for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
            if (*plVar5 == *(longlong *)(lVar8 + 0x20)) goto LAB_1409ae01b;
          }
        }
        FUN_1409ba950(lVar8,param_1,0);
        FUN_1409adef0(param_1,lVar8);
      }
LAB_1409ae01b:
    }
    iVar4 = (DAT_146864ca0 - (DAT_146864ca0 + -1)) + -1;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                (DAT_146864c98 + (DAT_146864ca0 + -1),DAT_146864c98 + DAT_146864ca0,
                 (longlong)iVar4 << 3);
    }
    _DAT_146864ca0 = CONCAT44(DAT_146864ca4,DAT_146864ca0 + -1);
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_146864c98);
  }
  return;
}



// FUNCTION 1409ae0e0 FUN_1409ae0e0 body=62 status=ok
// SIG undefined FUN_1409ae0e0(void)

bool FUN_1409ae0e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_1409ab2f0(param_1 + 0x488,local_res10,param_4);
  if (lVar1 != 0) {
    return *(longlong *)(lVar1 + 0x20) == param_3;
  }
  return false;
}



// FUNCTION 1409ae120 FUN_1409ae120 body=169 status=ok
// SIG undefined FUN_1409ae120(void)

bool FUN_1409ae120(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong local_res10;
  longlong local_res18;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    local_res18 = param_3;
    uVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
    for (uVar2 = local_res10; uVar2 != 0; uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
      if (uVar2 == uVar4) {
        if (local_res18 == 0) {
          return false;
        }
        lVar5 = *(longlong *)(param_1 + 0x540);
        lVar1 = lVar5 + (longlong)*(int *)(param_1 + 0x548) * 0x28;
        goto joined_r0x0001409ae182;
      }
    }
  }
  return false;
joined_r0x0001409ae182:
  if (lVar5 == lVar1) {
    lVar5 = 0;
LAB_1409ae1b8:
    return lVar5 != 0;
  }
  cVar3 = FUN_1409aea60(&local_res10,lVar5 + 0x10);
  if ((cVar3 != '\0') && (*(longlong *)(lVar5 + 0x20) == local_res18)) goto LAB_1409ae1b8;
  lVar5 = lVar5 + 0x28;
  goto joined_r0x0001409ae182;
}



// FUNCTION 1409ae1d0 FUN_1409ae1d0 body=508 status=ok
// SIG undefined FUN_1409ae1d0(void)

undefined8 FUN_1409ae1d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  plVar9 = *(longlong **)(param_1 + 0xa8);
  plVar1 = plVar9 + *(int *)(param_1 + 0xb0);
  do {
    if (plVar9 == plVar1) {
      return 0;
    }
    lVar7 = *plVar9;
    if (lVar7 != 0) {
      plVar10 = *(longlong **)(lVar7 + 0x38);
      plVar2 = plVar10 + *(int *)(lVar7 + 0x40);
      for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
        lVar6 = *plVar10;
        if (lVar6 != 0) {
          lVar4 = FUN_14144ecc0();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (param_2 != 0) {
              lVar5 = FUN_1430f1090();
              lVar4 = param_2;
              do {
                lVar8 = param_2;
                if (lVar4 == lVar5) goto LAB_1409ae295;
                lVar4 = *(longlong *)(lVar4 + 0x30);
              } while (lVar4 != 0);
            }
            lVar8 = 0;
LAB_1409ae295:
            if (*(longlong *)(lVar6 + 0x88) != 0) {
              lVar5 = FUN_14144bcb0();
              lVar6 = *(longlong *)(lVar6 + 0x88);
              for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
                if (lVar4 == lVar5) goto LAB_1409ae2c3;
              }
            }
            lVar6 = 0;
LAB_1409ae2c3:
            if (lVar8 == lVar6) {
              return 1;
            }
          }
        }
      }
      plVar10 = *(longlong **)(lVar7 + 0x48);
      plVar2 = plVar10 + *(int *)(lVar7 + 0x50);
      for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
        lVar7 = *plVar10;
        if (lVar7 != 0) {
          lVar6 = FUN_14144ecc0();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (param_2 != 0) {
              lVar4 = FUN_1430f1090();
              lVar6 = param_2;
              do {
                lVar5 = param_2;
                if (lVar6 == lVar4) goto LAB_1409ae357;
                lVar6 = *(longlong *)(lVar6 + 0x30);
              } while (lVar6 != 0);
            }
            lVar5 = 0;
LAB_1409ae357:
            if (*(longlong *)(lVar7 + 0x88) != 0) {
              lVar4 = FUN_14144bcb0();
              lVar7 = *(longlong *)(lVar7 + 0x88);
              for (lVar6 = lVar7; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
                if (lVar6 == lVar4) goto LAB_1409ae385;
              }
            }
            lVar7 = 0;
LAB_1409ae385:
            if (lVar5 == lVar7) {
              return 1;
            }
          }
        }
      }
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 1409ae3d0 FUN_1409ae3d0 body=155 status=ok
// SIG undefined FUN_1409ae3d0(void)

bool FUN_1409ae3d0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_14144bcb0();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) goto LAB_1409ae400;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  param_2 = 0;
LAB_1409ae400:
  lVar3 = FUN_1430ec580(param_1,param_2);
  if (lVar3 != 0) {
    lVar2 = FUN_14144bcb0();
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
      lVar3 = FUN_1409a7f40(lVar3);
      return lVar3 != 0;
    }
  }
  return false;
}



// FUNCTION 1409ae470 FUN_1409ae470 body=284 status=ok
// SIG undefined FUN_1409ae470(void)

undefined8 FUN_1409ae470(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*param_2 != 0) {
    lVar2 = FUN_14144bcb0();
    for (lVar5 = *param_2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar2) {
        if (*param_2 == 0) {
          return 0;
        }
        plVar6 = *(longlong **)(param_1 + 0x68);
        plVar1 = plVar6 + *(int *)(param_1 + 0x70);
        goto joined_r0x0001409ae4d9;
      }
    }
  }
  return 0;
joined_r0x0001409ae4d9:
  if (plVar6 == plVar1) {
    return 0;
  }
  if (*plVar6 != 0) {
    lVar2 = FUN_14144bcb0();
    for (lVar5 = *plVar6; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar2) {
        if (*plVar6 != 0) {
          lVar3 = FUN_14144bcb0();
          lVar5 = *plVar6;
          lVar2 = lVar5;
          goto joined_r0x0001409ae523;
        }
        break;
      }
    }
  }
  goto LAB_1409ae573;
joined_r0x0001409ae523:
  if (lVar2 == 0) goto LAB_1409ae533;
  if (lVar2 == lVar3) goto LAB_1409ae535;
  lVar2 = *(longlong *)(lVar2 + 0x30);
  goto joined_r0x0001409ae523;
LAB_1409ae533:
  lVar5 = 0;
LAB_1409ae535:
  if (*param_2 != 0) {
    lVar4 = FUN_14144bcb0();
    lVar3 = *param_2;
    for (lVar2 = lVar3; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) goto joined_r0x0001409ae563;
    }
  }
  lVar3 = 0;
joined_r0x0001409ae563:
  for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
    if (lVar3 == lVar5) {
      return 1;
    }
  }
LAB_1409ae573:
  plVar6 = plVar6 + 1;
  goto joined_r0x0001409ae4d9;
}



// FUNCTION 1409ae590 FUN_1409ae590 body=55 status=ok
// SIG undefined FUN_1409ae590(void)

undefined8 FUN_1409ae590(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0xe8);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0xf0) * 5;
  for (; plVar2 != plVar1; plVar2 = plVar2 + 5) {
    if (*plVar2 == param_2) goto LAB_1409ae5c0;
  }
  plVar2 = (longlong *)0x0;
LAB_1409ae5c0:
  return CONCAT71((int7)((ulonglong)plVar2 >> 8),plVar2 != (longlong *)0x0);
}



// FUNCTION 1409ae5d0 FUN_1409ae5d0 body=96 status=ok
// SIG undefined FUN_1409ae5d0(void)

undefined8 FUN_1409ae5d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x210);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x218) * 2;
  while( true ) {
    if (plVar2 == plVar3) {
      return 0;
    }
    if (((*plVar2 != 0) && ((longlong *)plVar2[1] != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)plVar2[1] + 0x20))(), cVar1 != '\0')) break;
    plVar2 = plVar2 + 2;
  }
  return 1;
}



// FUNCTION 1409ae630 FUN_1409ae630 body=78 status=ok
// SIG undefined FUN_1409ae630(void)

undefined8 FUN_1409ae630(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    local_res8[0] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = FUN_1409ab2f0(*(longlong *)(param_1 + 0x118) + 0x488,local_res8,param_2);
    if (lVar1 != 0) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x20) >> 8),
                      *(longlong *)(lVar1 + 0x20) != 0);
    }
  }
  return 0;
}



// FUNCTION 1409ae680 FUN_1409ae680 body=106 status=ok
// SIG undefined FUN_1409ae680(void)

bool FUN_1409ae680(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  if (param_2 == 0) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    local_res10[0] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = FUN_1409ab2f0(*(longlong *)(param_1 + 0x118) + 0x488,local_res10);
    if (lVar1 != 0) {
      return *(longlong *)(lVar1 + 0x20) == param_2;
    }
  }
  return param_2 == 0;
}



// FUNCTION 1409ae6f0 FUN_1409ae6f0 body=28 status=ok
// SIG undefined FUN_1409ae6f0(void)

void FUN_1409ae6f0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1409ae120(*(longlong *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x10),param_2);
    return;
  }
  return;
}



// FUNCTION 1409ae710 FUN_1409ae710 body=229 status=ok
// SIG undefined FUN_1409ae710(void)

undefined8 FUN_1409ae710(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_res10 [2];
  longlong local_28;
  int local_20;
  int local_1c;
  char local_18;
  char local_17;
  
  if (param_2 != 0) {
    puVar5 = (undefined8 *)0x0;
    puVar4 = puVar5;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x118) + 0x3b0);
    }
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(puVar4 + 0x22,local_res10,param_2);
    puVar2 = puVar5;
    if (local_res10[0] != -1) {
      puVar2 = (undefined8 *)(puVar4[0x22] + (longlong)local_res10[0] * 0x18);
    }
    puVar3 = puVar2 + 1;
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = puVar5;
    }
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    cVar1 = FUN_1409a7560(puVar4,*puVar3,&local_28);
    if (cVar1 == '\0') {
      return 0;
    }
    if (local_17 == '\0') {
      if (0 < local_1c + local_20) {
        return 1;
      }
      if (local_28 == 0) {
        return 0;
      }
      if ((1 < (byte)(*(char *)(local_28 + 0x34) - 3U)) && (*(int *)(local_28 + 0x30) != 0)) {
        return 0;
      }
    }
    if (local_18 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409ae800 FUN_1409ae800 body=72 status=ok
// SIG undefined FUN_1409ae800(void)

undefined8 FUN_1409ae800(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_142c734d0();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_142c6c710(lVar1);
  lVar1 = *(longlong *)(lVar1 + 0x240);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(lVar1 + 0x1f0) == '\0');
  }
  return 1;
}



// FUNCTION 1409ae850 FUN_1409ae850 body=78 status=ok
// SIG undefined FUN_1409ae850(void)

undefined1 FUN_1409ae850(longlong param_1)

{
  char cVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if ((*(char *)(param_1 + 0x178) == '\0') && (*(char *)(param_1 + 0x1f0) == '\0')) {
    local_28 = *(undefined4 *)(param_1 + 0x1c0);
    uStack_24 = *(undefined4 *)(param_1 + 0x1c4);
    uStack_20 = *(undefined4 *)(param_1 + 0x1c8);
    uStack_1c = *(undefined4 *)(param_1 + 0x1cc);
    local_18 = *(undefined8 *)(param_1 + 0x1d0);
    cVar1 = FUN_142d63aa0(&local_28,2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409ae8a0 FUN_1409ae8a0 body=34 status=ok
// SIG undefined FUN_1409ae8a0(void)

undefined1 FUN_1409ae8a0(longlong param_1)

{
  if ((*(char *)(param_1 + 8) == '\0') &&
     ((*(float *)(param_1 + 0xc) < *(float *)(param_1 + 0x18) ||
       *(float *)(param_1 + 0xc) == *(float *)(param_1 + 0x18) ||
      (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x20) ||
       *(float *)(param_1 + 0x24) == *(float *)(param_1 + 0x20))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1409ae8d0 FUN_1409ae8d0 body=102 status=ok
// SIG undefined FUN_1409ae8d0(void)

undefined1 FUN_1409ae8d0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    cVar1 = FUN_142d52a00();
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else {
      local_28 = *(undefined4 *)(param_1 + 0x1d8);
      uStack_24 = *(undefined4 *)(param_1 + 0x1dc);
      uStack_20 = *(undefined4 *)(param_1 + 0x1e0);
      uStack_1c = *(undefined4 *)(param_1 + 0x1e4);
      local_18 = *(undefined8 *)(param_1 + 0x1e8);
      cVar1 = FUN_142d63aa0(&local_28,0);
      bVar2 = cVar1 == '\0';
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409ae940 FUN_1409ae940 body=16 status=ok
// SIG undefined FUN_1409ae940(void)

undefined4 FUN_1409ae940(longlong param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x178) >> 8),
                  *(int *)(param_1 + 0x178) <= *(int *)(param_1 + 0x17c));
}



// FUNCTION 1409ae950 FUN_1409ae950 body=67 status=ok
// SIG undefined FUN_1409ae950(void)

undefined8 FUN_1409ae950(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_142c6c710();
  plVar1 = *(longlong **)(param_1 + 0x248);
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)((longlong)plVar1 + 0x4cc) >> 1 & 1) != 0)) {
    cVar2 = (**(code **)(*plVar1 + 0x768))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409ae9a0 FUN_1409ae9a0 body=8 status=ok
// SIG undefined FUN_1409ae9a0(void)

undefined1 FUN_1409ae9a0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x222);
}



// FUNCTION 1409ae9b0 FUN_1409ae9b0 body=87 status=ok
// SIG undefined FUN_1409ae9b0(void)

bool FUN_1409ae9b0(longlong param_1)

{
  undefined1 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    return false;
  }
  if (*(char *)(param_1 + 0x178) != '\0') {
    return 0 < *(int *)(param_1 + 0x200);
  }
  local_28 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_24 = *(undefined4 *)(param_1 + 0x1c4);
  uStack_20 = *(undefined4 *)(param_1 + 0x1c8);
  uStack_1c = *(undefined4 *)(param_1 + 0x1cc);
  local_18 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = FUN_142d63aa0(&local_28,2);
  return (bool)uVar1;
}



// FUNCTION 1409aea10 FUN_1409aea10 body=75 status=ok
// SIG undefined FUN_1409aea10(void)

undefined8 FUN_1409aea10(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x3b8) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3b8) + 0xe68), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x558))(plVar1);
    if (cVar2 == '\0') {
      lVar3 = FUN_14233f0e0(plVar1);
      if (lVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1409aea60 FUN_1409aea60 body=328 status=ok
// SIG undefined FUN_1409aea60(void)

undefined1 FUN_1409aea60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 == 0) {
    return 0;
  }
  lVar2 = UUGLoadoutBarUW::GetPrivateStaticClass();
  lVar4 = *param_1;
  while( true ) {
    if (lVar4 == 0) {
      return 0;
    }
    if (lVar4 == lVar2) break;
    lVar4 = *(longlong *)(lVar4 + 0x30);
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 == 0) {
    return 0;
  }
  lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
  lVar4 = *param_2;
  lVar2 = lVar4;
  if (lVar4 == 0) {
    return 0;
  }
  while (lVar2 != lVar3) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (lVar4 != 0) {
    if (*param_1 != 0) {
      lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
      lVar4 = *param_1;
      for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) goto LAB_1409aeb10;
      }
    }
    lVar4 = 0;
LAB_1409aeb10:
    lVar2 = UUGLoadoutBarUW::GetPrivateStaticClass();
    if (lVar4 != lVar2) {
      if (*param_1 != 0) {
        lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
        lVar4 = *param_1;
        for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar3) goto LAB_1409aeb50;
        }
      }
      lVar4 = 0;
LAB_1409aeb50:
      if (*param_2 != 0) {
        lVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
        lVar3 = *param_2;
        for (lVar2 = lVar3; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar1) goto LAB_1409aeb76;
        }
      }
      lVar3 = 0;
LAB_1409aeb76:
      if (lVar3 != 0) {
        do {
          if (lVar3 == lVar4) {
            return 1;
          }
          lVar3 = *(longlong *)(lVar3 + 0x30);
        } while (lVar3 != 0);
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 1409aebb0 GetDisplayNameVisibility_Implementation body=20 status=ok
// SIG undefined GetDisplayNameVisibility_Implementation(void)

bool UKeyLabel::GetDisplayNameVisibility_Implementation(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1409a7f40();
  return lVar1 != 0;
}



// FUNCTION 1409aebd0 FUN_1409aebd0 body=79 status=ok
// SIG undefined FUN_1409aebd0(void)

ulonglong FUN_1409aebd0(longlong param_1)

{
  ulonglong in_RAX;
  int *piVar1;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x170) != '\0') {
    local_28 = *(undefined8 *)(param_1 + 0x130);
    local_18 = 0;
    local_20 = param_1;
    piVar1 = (int *)FUN_142dd6f80(local_38,*(undefined8 *)(param_1 + 0x110),&local_28);
    return (ulonglong)CONCAT31((int3)((uint)*piVar1 >> 8),0 < *piVar1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409aec20 FUN_1409aec20 body=153 status=ok
// SIG undefined FUN_1409aec20(void)

bool FUN_1409aec20(longlong param_1,int param_2,longlong param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  undefined1 local_28 [8];
  int local_20;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    return *(int *)(param_1 + 100) <= param_2;
  }
  if (param_3 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_3 + 0x110,local_res8);
    puVar2 = (undefined8 *)0x0;
    if (local_res8[0] != -1) {
      puVar2 = (undefined8 *)(*(longlong *)(param_3 + 0x110) + (longlong)local_res8[0] * 0x18);
    }
    puVar3 = puVar2 + 1;
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    if ((puVar3 != (undefined8 *)0x0) &&
       (cVar1 = FUN_1409a7560(param_3,*puVar3,local_28), cVar1 != '\0')) {
      return 0 < local_20;
    }
  }
  return false;
}



// FUNCTION 1409aecc0 FUN_1409aecc0 body=8 status=ok
// SIG undefined FUN_1409aecc0(void)

undefined1 FUN_1409aecc0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x328);
}



// FUNCTION 1409aecd0 FUN_1409aecd0 body=54 status=ok
// SIG undefined FUN_1409aecd0(void)

undefined1 FUN_1409aecd0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1);
    if ((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < *(int *)(lVar1 + 0x40))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409aed10 FUN_1409aed10 body=259 status=ok
// SIG undefined FUN_1409aed10(void)

void FUN_1409aed10(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  uint uStackX_c;
  undefined8 local_res10;
  undefined **local_48;
  undefined8 *local_40;
  undefined ***local_10;
  
  plVar6 = (longlong *)0x0;
  local_res10 = param_2;
  FUN_142c6c710();
  local_48 = &PTR_LAB_14419ca18;
  local_40 = &local_res10;
  local_10 = &local_48;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      plVar4 = *(longlong **)(param_1 + 0x40);
      plVar5 = plVar6;
      if (plVar4 == (longlong *)0x0) {
LAB_1409aeda9:
        plVar6 = (longlong *)0x1;
      }
      else {
        LOCK();
        iVar3 = (int)plVar4[1];
        bVar7 = iVar3 == 0;
        if (bVar7) {
          *(int *)(plVar4 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (!bVar7) {
          LOCK();
          bVar7 = iVar3 == (int)plVar4[1];
          if (bVar7) {
            *(int *)(plVar4 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar7) {
            if (plVar4 != (longlong *)0x0) {
              plVar5 = *(longlong **)(param_1 + 0x38);
            }
            goto LAB_1409aeda9;
          }
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar7 = iVar3 == 0;
          if (bVar7) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
        plVar4 = plVar6;
        plVar6 = (longlong *)0x1;
      }
      goto LAB_1409aedbb;
    }
  }
  plVar4 = (longlong *)((ulonglong)uStackX_c << 0x20);
  plVar5 = (longlong *)0x0;
LAB_1409aedbb:
  if ((plVar6 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) {
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
  FUN_142c6db40(plVar5,&local_48);
  return;
}



// FUNCTION 1409aee20 FUN_1409aee20 body=356 status=ok
// SIG undefined FUN_1409aee20(void)

void FUN_1409aee20(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  uint uStackX_c;
  
  plVar8 = (longlong *)0x0;
  FUN_142c6c710();
  iVar4 = *(int *)(param_1 + 0xc);
  plVar5 = plVar8;
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar6 = iVar4 >> 0x1f & 0xffff;
    uVar3 = iVar4 + uVar6;
    plVar5 = (longlong *)
             (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
             (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18);
  }
  if ((*(uint *)(plVar5 + 1) >> 0x1d & 1) != 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar5 = *(longlong **)(param_1 + 0x40);
      plVar7 = plVar8;
      if (plVar5 == (longlong *)0x0) {
LAB_1409aeee9:
        plVar8 = (longlong *)0x1;
      }
      else {
        LOCK();
        iVar4 = (int)plVar5[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar5 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar4 == (int)plVar5[1];
          if (bVar9) {
            *(int *)(plVar5 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (plVar5 != (longlong *)0x0) {
              plVar7 = *(longlong **)(param_1 + 0x38);
            }
            goto LAB_1409aeee9;
          }
          LOCK();
          iVar4 = (int)plVar5[1];
          bVar9 = iVar4 == 0;
          if (bVar9) {
            *(int *)(plVar5 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
        plVar5 = plVar8;
        plVar8 = (longlong *)0x1;
      }
      goto LAB_1409aeefb;
    }
  }
  plVar5 = (longlong *)((ulonglong)uStackX_c << 0x20);
  plVar7 = (longlong *)0x0;
LAB_1409aeefb:
  if ((plVar8 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  lVar2 = plVar7[2];
  if ((*(char *)(lVar2 + 0x260) != '\0') && (*(longlong *)(lVar2 + 0x268) != 0)) {
    if (param_2 != '\0') {
      FUN_140e53e50();
      return;
    }
    FUN_140e61de0(*(longlong *)(lVar2 + 0x268),*(undefined8 *)(lVar2 + 0x18));
  }
  return;
}



// FUNCTION 1409aef90 OnEquipDone body=29 status=ok
// SIG undefined OnEquipDone(void)

void ASBZCharacter::OnEquipDone(undefined8 param_1)

{
  FUN_1409add40(param_1,2);
  FUN_1430ece20(param_1);
  return;
}



// FUNCTION 1409aefd0 FUN_1409aefd0 body=335 status=ok
// SIG undefined FUN_1409aefd0(void)

void FUN_1409aefd0(longlong param_1,longlong *param_2,float *param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar3 = FUN_1414425d0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar7 = DAT_1468646e4;
      if ((*(uint *)(lVar4 + 8) >> 4 & 1) == 0) {
        iVar7 = *(int *)(lVar4 + 0x128);
      }
      if (iVar7 < *(int *)(param_1 + 0x30)) {
        *param_3 = 0.0;
      }
      else {
        lVar4 = param_2[1];
        iVar1 = *(int *)(param_1 + 0x34);
        if (*(int *)(param_1 + 0x34) < 2) {
          iVar1 = 1;
        }
        if (lVar4 == 0) {
          lVar4 = *param_2;
        }
        fVar9 = (float)FUN_142c98860(param_1 + 0x38,lVar4);
        piVar6 = (int *)0x0;
        *param_3 = (float)((iVar7 - *(int *)(param_1 + 0x30)) / iVar1) * fVar9 + *param_3;
        piVar5 = *(int **)(param_1 + 0x70);
        piVar8 = piVar5 + (longlong)*(int *)(param_1 + 0x78) * 0x10;
        if (piVar5 != piVar8) {
          do {
            if ((-1 < iVar7 - *piVar5) &&
               ((piVar6 == (int *)0x0 || (iVar7 - *piVar5 < iVar7 - *piVar6)))) {
              piVar6 = piVar5;
            }
            piVar5 = piVar5 + 0x10;
          } while (piVar5 != piVar8);
          if (piVar6 != (int *)0x0) {
            lVar4 = param_2[1];
            if (lVar4 == 0) {
              lVar4 = *param_2;
            }
            fVar9 = (float)FUN_142c98860(piVar6 + 2,lVar4);
            *param_3 = fVar9 + *param_3;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1409af120 FUN_1409af120 body=507 status=ok
// SIG undefined FUN_1409af120(void)

void FUN_1409af120(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  longlong local_res18;
  longlong local_res20;
  
  FUN_142ef7550();
  pwVar8 = (wchar_t *)0x0;
  plVar9 = *(longlong **)(param_1 + 0x2c0);
  pwVar7 = (wchar_t *)((longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff);
  if (plVar9 + *(int *)(param_1 + 0x2c8) < plVar9) {
    pwVar7 = pwVar8;
  }
  pwVar6 = pwVar8;
  if (pwVar7 != (wchar_t *)0x0) {
    do {
      lVar1 = *plVar9;
      if (lVar1 != 0) {
        pwVar2 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnItemSelected_Internal",L"::");
        pwVar5 = pwVar8;
        while (pwVar4 = pwVar2, pwVar4 != (wchar_t *)0x0) {
          pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_res18,pwVar5 + 2,1);
        lVar3 = local_res18;
        FWeakObjectPtr::operator=(lVar1 + 0x180,param_1);
        *(longlong *)(lVar1 + 0x188) = lVar3;
        if ((lVar3 != 0) && (lVar3 = FWeakObjectPtr::Get(lVar1 + 0x180), lVar3 != 0)) {
          UObject::FindFunction(lVar3,*(undefined8 *)(lVar1 + 0x188));
        }
        pwVar2 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnItemClicked_Internal",L"::");
        pwVar5 = pwVar8;
        while (pwVar4 = pwVar2, pwVar4 != (wchar_t *)0x0) {
          pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_res20,pwVar5 + 2,1);
        lVar3 = local_res20;
        FWeakObjectPtr::operator=(lVar1 + 400,param_1);
        *(longlong *)(lVar1 + 0x198) = lVar3;
        if ((lVar3 != 0) && (lVar3 = FWeakObjectPtr::Get(lVar1 + 400), lVar3 != 0)) {
          UObject::FindFunction(lVar3,*(undefined8 *)(lVar1 + 0x198));
        }
        pwVar5 = pwVar8;
        if (*(longlong *)(param_1 + 0x2b8) != 0) {
          pwVar4 = (wchar_t *)UUGStartScreenUW::GetPrivateStaticClass();
          for (pwVar2 = *(wchar_t **)(param_1 + 0x2b8);
              (pwVar5 = pwVar8, pwVar2 != (wchar_t *)0x0 &&
              (pwVar5 = *(wchar_t **)(param_1 + 0x2b8), pwVar2 != pwVar4));
              pwVar2 = *(wchar_t **)(pwVar2 + 0x18)) {
          }
        }
        *(wchar_t **)(lVar1 + 0x1b0) = pwVar5;
      }
      plVar9 = plVar9 + 1;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
    } while (pwVar6 != pwVar7);
  }
  return;
}



// FUNCTION 1409af320 FUN_1409af320 body=357 status=ok
// SIG undefined FUN_1409af320(void)

void FUN_1409af320(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  plVar3 = *(longlong **)(param_1 + 0x2c0);
  uVar6 = (longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x2c8) < plVar3) {
    uVar6 = uVar7;
  }
  uVar4 = uVar7;
  if (uVar6 != 0) {
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        FWeakObjectPtr::operator=(lVar1 + 0x180,0);
        *(undefined8 *)(lVar1 + 0x188) = 0;
        FWeakObjectPtr::operator=(lVar1 + 400);
        *(undefined8 *)(lVar1 + 0x198) = 0;
      }
      plVar3 = plVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  iVar2 = *(int *)(param_1 + 0x324);
  plVar3 = *(longlong **)(param_1 + 0x318);
  iVar5 = *(int *)(param_1 + 800);
  if (iVar2 < 0) {
    if (iVar5 != 0) {
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar2 = *(int *)(param_1 + 0x324);
    }
    *(undefined4 *)(param_1 + 800) = 0;
    if (iVar2 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo((undefined8 *)(param_1 + 0x318),0);
    }
  }
  else {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    *(undefined4 *)(param_1 + 800) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x2c0);
  uVar6 = (longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x2c8) < plVar3) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    do {
      if (*plVar3 != 0) {
        (**(code **)(*(longlong *)(*plVar3 + 0x148) + 0x38))();
      }
      plVar3 = plVar3 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  FUN_142107600(param_1);
  return;
}



// FUNCTION 1409af490 FUN_1409af490 body=16 status=ok
// SIG undefined FUN_1409af490(void)

byte FUN_1409af490(void)

{
  byte bVar1;
  
  bVar1 = FUN_142c79030();
  return bVar1 & 1;
}



// FUNCTION 1409af4a0 FUN_1409af4a0 body=84 status=ok
// SIG undefined FUN_1409af4a0(void)

void FUN_1409af4a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_1409ba070(param_1,param_1 + 0x30,param_2,param_3);
  thunk_FUN_1428f9800(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1409af510 FUN_1409af510 body=183 status=ok
// SIG undefined FUN_1409af510(void)

void FUN_1409af510(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 != 0) {
    bVar5 = false;
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    *(int *)(lVar1 + 0x2c64) = *(int *)(lVar1 + 0x2c64) + 1;
    iVar8 = *(int *)(lVar1 + 0x2c64);
    iVar7 = *(int *)(lVar1 + 0x2c58) + -1;
    lVar10 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar9 = lVar10 << 4;
      bVar5 = false;
      do {
        lVar3 = *(longlong *)(lVar1 + 0x2c50);
        if ((*(int *)(lVar9 + 8 + lVar3) == 0) ||
           (plVar4 = *(longlong **)(lVar9 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_1409af583:
          bVar5 = true;
        }
        else {
          cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,uVar2);
          if (cVar6 == '\0') goto LAB_1409af583;
        }
        lVar9 = lVar9 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      iVar8 = *(int *)(lVar1 + 0x2c64);
    }
    *(int *)(lVar1 + 0x2c64) = iVar8 + -1;
    if (bVar5) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar1 + 0x2c50),0);
      return;
    }
  }
  return;
}



// FUNCTION 1409af5d0 FUN_1409af5d0 body=86 status=ok
// SIG undefined FUN_1409af5d0(void)

void FUN_1409af5d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  FUN_1409ba070(param_1,param_1 + 0x38,param_2,param_3);
  thunk_FUN_1428f9860(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1409af650 FUN_1409af650 body=238 status=ok
// SIG undefined FUN_1409af650(void)

void FUN_1409af650(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    local_28 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    local_20 = uVar3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x298,&local_28);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    bVar7 = false;
    *(int *)(lVar1 + 0x364) = *(int *)(lVar1 + 0x364) + 1;
    iVar10 = *(int *)(lVar1 + 0x364);
    iVar9 = *(int *)(lVar1 + 0x358) + -1;
    lVar11 = (longlong)iVar9;
    if (-1 < iVar9) {
      lVar12 = lVar11 << 4;
      bVar7 = false;
      do {
        lVar5 = *(longlong *)(lVar1 + 0x350);
        if ((*(int *)(lVar12 + 8 + lVar5) == 0) ||
           (plVar6 = *(longlong **)(lVar12 + lVar5), plVar6 == (longlong *)0x0)) {
LAB_1409af6f6:
          bVar7 = true;
        }
        else {
          cVar8 = (**(code **)(*plVar6 + 0x40))(plVar6,uVar4,uVar3,uVar2);
          if (cVar8 == '\0') goto LAB_1409af6f6;
        }
        lVar12 = lVar12 + -0x10;
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
      iVar10 = *(int *)(lVar1 + 0x364);
    }
    *(int *)(lVar1 + 0x364) = iVar10 + -1;
    if (bVar7) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar1 + 0x350),0);
    }
  }
  return;
}



// FUNCTION 1409af740 FUN_1409af740 body=34 status=ok
// SIG undefined FUN_1409af740(void)

void FUN_1409af740(longlong *param_1)

{
  UUserWidget::CancelLatentActions();
                    /* WARNING: Could not recover jumptable at 0x0001409af75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c8))(param_1,0);
  return;
}



// FUNCTION 1409af770 FUN_1409af770 body=43 status=ok
// SIG undefined FUN_1409af770(void)

void FUN_1409af770(longlong *param_1)

{
  UUserWidget::CancelLatentActions();
  (**(code **)(*param_1 + 0x3c8))(param_1,0);
  FUN_1409ac580(param_1,1);
  return;
}



// FUNCTION 1409af7a0 FUN_1409af7a0 body=43 status=ok
// SIG undefined FUN_1409af7a0(void)

void FUN_1409af7a0(longlong *param_1)

{
  UUserWidget::CancelLatentActions();
  (**(code **)(*param_1 + 0x3c8))(param_1,0);
  FUN_1409ac480(param_1,1);
  return;
}



// FUNCTION 1409af7d0 FUN_1409af7d0 body=43 status=ok
// SIG undefined FUN_1409af7d0(void)

void FUN_1409af7d0(longlong *param_1)

{
  UUserWidget::CancelLatentActions();
  (**(code **)(*param_1 + 0x3c8))(param_1,0);
  FUN_1409ac7b0(param_1,1);
  return;
}



// FUNCTION 1409af800 FUN_1409af800 body=127 status=ok
// SIG undefined FUN_1409af800(void)

void FUN_1409af800(longlong param_1)

{
  int iVar1;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    if (*(char *)(param_1 + 0x178) == '\0') {
      iVar1 = FUN_1430ec7c0();
      if ((iVar1 < 3) && (*(longlong *)(param_1 + 0x118) != 0)) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (*(longlong *)(param_1 + 0x118) + 0x268,local_res8);
      }
    }
  }
  else {
    iVar1 = FUN_1430ec7c0();
    if ((iVar1 < 3) && (*(longlong *)(param_1 + 0x118) != 0)) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_1 + 0x118) + 0x278,local_res8);
      return;
    }
  }
  return;
}



// FUNCTION 1409af880 FUN_1409af880 body=150 status=ok
// SIG undefined FUN_1409af880(void)

void FUN_1409af880(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8 [4];
  
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    if (*(char *)(param_1 + 0x178) != '\0') goto LAB_1409af8e6;
    iVar1 = FUN_1430ec7c0();
    if ((2 < iVar1) || (*(longlong *)(param_1 + 0x118) == 0)) goto LAB_1409af8e6;
    lVar2 = *(longlong *)(param_1 + 0x118) + 0x268;
  }
  else {
    iVar1 = FUN_1430ec7c0();
    if ((2 < iVar1) || (*(longlong *)(param_1 + 0x118) == 0)) goto LAB_1409af8e6;
    lVar2 = *(longlong *)(param_1 + 0x118) + 0x278;
  }
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2,local_res8);
LAB_1409af8e6:
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    FUN_1409b7150(param_1,*(undefined8 *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined1 *)(param_1 + 0x260) = 0;
  }
  return;
}



// FUNCTION 1409af920 FUN_1409af920 body=43 status=ok
// SIG undefined FUN_1409af920(void)

void FUN_1409af920(longlong param_1)

{
  longlong local_res8 [4];
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    local_res8[0] = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_1 + 0x118) + 0x2b8,local_res8);
  }
  return;
}



// FUNCTION 1409af950 FUN_1409af950 body=156 status=ok
// SIG undefined FUN_1409af950(void)

void FUN_1409af950(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  (**(code **)(*param_1 + 0x428))(param_1);
  if ((char)param_1[0x2f] != '\0') {
    uVar2 = FUN_1430ec7a0(param_1);
    fVar3 = (float)FUN_142c98860(param_1 + 0x30,uVar2);
    FUN_14246fd70((longlong)param_1 + 0x204,(int)fVar3);
    if ((char)param_1[0x2f] != '\0') {
      iVar1 = 0;
      if (-1 < (int)param_1[0x41]) {
        iVar1 = (int)param_1[0x41];
      }
      if ((int)param_1[0x40] != iVar1) {
        *(int *)(param_1 + 0x40) = iVar1;
        FUN_1413dd400(param_1);
        (**(code **)(*param_1 + 0x410))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001409af9df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x260))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409af9f0 FUN_1409af9f0 body=230 status=ok
// SIG undefined FUN_1409af9f0(void)

void FUN_1409af9f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar2 = FUN_1430ec7a0(param_1);
  if (lVar2 == 0) {
LAB_1409afa48:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1409afa48;
  }
  *(longlong *)(param_1 + 0x118) = lVar2;
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x490), lVar2 != 0)) {
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
    if (bVar1) goto LAB_1409afa9a;
  }
  lVar2 = 0;
LAB_1409afa9a:
  *(longlong *)(param_1 + 0x128) = lVar2;
  if (lVar2 != 0) {
    uVar4 = FUN_140cff230(lVar2);
    *(undefined8 *)(param_1 + 0x120) = uVar4;
    return;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  return;
}



// FUNCTION 1409afae0 FUN_1409afae0 body=537 status=ok
// SIG undefined FUN_1409afae0(void)

void FUN_1409afae0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  code *local_68;
  undefined4 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar4 = FUN_1430ec7a0(param_1);
  lVar6 = 0;
  if (lVar4 == 0) {
LAB_1409afb4a:
    lVar4 = lVar6;
  }
  else {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1409afb4a;
  }
  *(longlong *)(param_1 + 0x118) = lVar4;
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x490), lVar4 != 0)) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1409afb9e;
  }
  lVar4 = lVar6;
LAB_1409afb9e:
  *(longlong *)(param_1 + 0x128) = lVar4;
  if (lVar4 != 0) {
    lVar6 = FUN_140cff230(lVar4);
  }
  *(longlong *)(param_1 + 0x120) = lVar6;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    puVar7 = (undefined8 *)FGuid::NewGuid(&local_68);
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    local_58 = *(undefined8 *)(param_1 + 0x130);
    local_50 = 0;
    local_48 = 0;
    FWeakObjectPtr::operator=(local_40,0);
    local_38 = 0;
    FWeakObjectPtr::operator=(local_30,param_1);
    local_68 = FUN_1409b45b0;
    uStack_60 = 0;
    local_28 = uVar1;
    uStack_20 = uVar2;
    FUN_140998630(&local_50,param_1,&local_68);
    FUN_14067d5d0(param_1 + 0xf8,&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    puVar7 = (undefined8 *)FGuid::NewGuid(&local_68);
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    local_58 = *(undefined8 *)(param_1 + 0x138);
    local_50 = 0;
    local_48 = 0;
    FWeakObjectPtr::operator=(local_40,0);
    local_38 = 0;
    FWeakObjectPtr::operator=(local_30,param_1);
    local_68 = FUN_1409b4630;
    uStack_60 = 0;
    local_28 = uVar1;
    uStack_20 = uVar2;
    FUN_140998630(&local_50,param_1,&local_68);
    FUN_14067d5d0(param_1 + 0xf8,&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  }
  return;
}



// FUNCTION 1409afd00 FUN_1409afd00 body=319 status=ok
// SIG undefined FUN_1409afd00(void)

void FUN_1409afd00(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if (param_3 == 0) {
    return;
  }
  lVar7 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x4a0);
  lVar9 = *plVar1;
  lVar7 = lVar9 + (longlong)*(int *)(param_1 + 0x4a8) * 8;
  for (; lVar9 != lVar7; lVar9 = lVar9 + 8) {
    cVar6 = FUN_14058c1e0(lVar9,param_3);
    if (cVar6 != '\0') {
      return;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x498);
  if (lVar7 == 0) {
    plVar4 = *(longlong **)(param_1 + 0x150);
    if (plVar4 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      uVar8 = UCircularThrobber::GetPrivateStaticClass();
      lVar7 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar8);
    }
    *(longlong *)(param_1 + 0x498) = lVar7;
    if (lVar7 == 0) goto LAB_1409afddd;
  }
  cVar6 = FUN_142dee8a0(lVar7,param_3);
  if (cVar6 == '\0') {
    return;
  }
LAB_1409afddd:
  FWeakObjectPtr::operator=(&local_res18,param_3);
  iVar3 = *(int *)(param_1 + 0x4a8);
  *(int *)(param_1 + 0x4a8) = iVar3 + 1;
  if (*(int *)(param_1 + 0x4ac) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 8);
  *puVar2 = local_res18;
  puVar2[1] = local_res1c;
  if (iVar3 != -1) {
    FUN_1414a2ee0(param_1,param_3);
  }
  return;
}



// FUNCTION 1409afe40 FUN_1409afe40 body=353 status=ok
// SIG undefined FUN_1409afe40(void)

void FUN_1409afe40(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      FWeakObjectPtr::operator=(local_res18,param_3);
      iVar1 = *(int *)(param_1 + 0x4a8);
      if (iVar1 != 0) {
        iVar6 = 0;
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(undefined8 *)(param_1 + 0x4a0),local_res18);
        bVar7 = cVar3 == '\0';
        iVar5 = 0;
        do {
          iVar2 = iVar5;
          do {
            iVar2 = iVar2 + 1;
            if (iVar1 <= iVar2) break;
            cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                              (*(longlong *)(param_1 + 0x4a0) + (longlong)iVar2 * 8,local_res18);
          } while (bVar7 == (cVar3 == '\0'));
          if (bVar7 != false) {
            if (iVar6 != iVar5) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar6 * 8),
                         (void *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar5 * 8),
                         (longlong)(iVar2 - iVar5) << 3);
            }
            iVar6 = iVar6 + (iVar2 - iVar5);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar5 = iVar2;
        } while (iVar2 < iVar1);
        *(int *)(param_1 + 0x4a8) = iVar6;
        if (0 < iVar1 - iVar6) {
          FUN_1414a2f20(param_1,param_3);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409affb0 FUN_1409affb0 body=25 status=ok
// SIG undefined FUN_1409affb0(void)

void FUN_1409affb0(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x270) != 0) && (*(longlong *)(param_1 + 0x270) == param_2)) {
    FUN_1409add40(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1409affd0 FUN_1409affd0 body=227 status=ok
// SIG undefined FUN_1409affd0(void)

void FUN_1409affd0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if (param_3 != (longlong *)0x0) {
    plVar1 = (longlong *)(param_1 + 0x790);
    lVar7 = *plVar1;
    lVar6 = lVar7 + (longlong)*(int *)(param_1 + 0x798) * 8;
    for (; lVar7 != lVar6; lVar7 = lVar7 + 8) {
      cVar3 = FUN_14058c1e0(lVar7,param_3);
      if (cVar3 != '\0') {
        return;
      }
    }
    FWeakObjectPtr::operator=(&local_res18,param_3);
    iVar4 = *(int *)(param_1 + 0x798);
    *(int *)(param_1 + 0x798) = iVar4 + 1;
    if (*(int *)(param_1 + 0x79c) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
    }
    puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar4 * 8);
    *puVar2 = local_res18;
    puVar2[1] = local_res1c;
    uVar5 = UCircularThrobber::GetPrivateStaticClass();
    lVar6 = (**(code **)(*param_3 + 0x628))(param_3,uVar5);
    if ((lVar6 != 0) && (iVar4 = FUN_142dec980(lVar6,*(undefined8 *)(param_1 + 0x780)), iVar4 == 2))
    {
      FUN_141473f60(param_1,param_3);
    }
  }
  return;
}



// FUNCTION 1409b00c0 FUN_1409b00c0 body=679 status=ok
// SIG undefined FUN_1409b00c0(void)

void FUN_1409b00c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  
  if (((((param_2 != 0) && (1 < (byte)(*(char *)(param_2 + 0x335) - 1U))) &&
       ((*(byte *)(param_2 + 0x100) & 0x10) == 0)) &&
      ((lVar8 = *(longlong *)(param_1 + 0x110), lVar8 != 0 && (*(longlong *)(param_2 + 0x2b0) != 0))
      )) && (lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118), lVar9 != 0)) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar4 = *(longlong *)(param_2 + 0x268), lVar5 = FUN_1430ec7a0(), lVar4 == lVar5)
       ) {
      if (*(longlong *)(param_1 + 0x260) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x3c8);
      }
      if ((lVar9 != lVar4) && (lVar4 = *(longlong *)(param_2 + 0x50), lVar4 != 0)) {
        lVar6 = FUN_142e0d0b0();
        lVar5 = lVar4;
        do {
          if (lVar5 == lVar6) {
            plVar10 = *(longlong **)(param_1 + 0x2c0);
            plVar1 = plVar10 + *(int *)(param_1 + 0x2c8);
            for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
              if (*plVar10 != 0) {
                lVar7 = FUN_142e0d0b0();
                lVar5 = *plVar10;
                for (lVar6 = lVar5; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
                  if (lVar6 == lVar7) goto LAB_1409b0226;
                }
              }
              lVar5 = 0;
LAB_1409b0226:
              lVar7 = FUN_142e0d0b0();
              lVar6 = lVar4;
              do {
                lVar3 = lVar4;
                if (lVar6 == lVar7) goto joined_r0x0001409b0248;
                lVar6 = *(longlong *)(lVar6 + 0x30);
              } while (lVar6 != 0);
              lVar3 = 0;
joined_r0x0001409b0248:
              for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
                if (lVar3 == lVar5) {
                  lVar8 = FUN_140c46a10(lVar8,0);
                  lVar4 = FUN_140a8dc90(param_2);
                  if (lVar8 != lVar4) {
                    return;
                  }
                  lVar8 = *(longlong *)(param_2 + 0x28);
                  lVar4 = FUN_1430ec7a0(param_1);
                  if (lVar8 != lVar4) {
                    return;
                  }
                  if (*(int *)(param_1 + 0x2f8) <= *(int *)(param_1 + 0x2f4)) {
                    return;
                  }
                  FUN_1409bdc60(param_1,lVar9);
                  return;
                }
              }
            }
            plVar10 = *(longlong **)(param_1 + 0x2d0);
            plVar1 = plVar10 + *(int *)(param_1 + 0x2d8);
            do {
              if (plVar10 == plVar1) {
                return;
              }
              if (*plVar10 != 0) {
                lVar5 = FUN_142e0d0b0();
                lVar8 = *plVar10;
                for (lVar9 = lVar8; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
                  if (lVar9 == lVar5) goto LAB_1409b02a8;
                }
              }
              lVar8 = 0;
LAB_1409b02a8:
              lVar5 = FUN_142e0d0b0();
              lVar9 = lVar4;
              do {
                lVar6 = lVar4;
                if (lVar9 == lVar5) goto joined_r0x0001409b0310;
                lVar9 = *(longlong *)(lVar9 + 0x30);
              } while (lVar9 != 0);
              lVar6 = 0;
joined_r0x0001409b0310:
              for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
                if (lVar6 == lVar8) {
                  if ((*(byte *)(param_1 + 0x25c) & 8) != 0) {
                    return;
                  }
                  FUN_1409a3550(param_1);
                  return;
                }
              }
              plVar10 = plVar10 + 1;
            } while( true );
          }
          lVar5 = *(longlong *)(lVar5 + 0x30);
        } while (lVar5 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1409b0370 FUN_1409b0370 body=38 status=ok
// SIG undefined FUN_1409b0370(void)

void FUN_1409b0370(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    return;
  }
  if (param_2 != 0) {
    FUN_142397540(lVar1,*(undefined1 *)(param_2 + 0x30),2);
    return;
  }
  FUN_142397540(lVar1,0,2);
  return;
}



// FUNCTION 1409b03a0 FUN_1409b03a0 body=407 status=ok
// SIG undefined FUN_1409b03a0(void)

void FUN_1409b03a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  
  if (((*(char *)(param_1 + 0x3c0) != '\0') || (param_2 == (longlong *)0x0)) ||
     (lVar2 = param_2[10], lVar2 == 0)) {
    return;
  }
  lVar4 = FUN_142e0d0b0();
  lVar6 = lVar2;
  while (lVar6 != lVar4) {
    lVar6 = *(longlong *)(lVar6 + 0x30);
    if (lVar6 == 0) {
      return;
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x3a0);
  plVar1 = plVar7 + *(int *)(param_1 + 0x3a8);
joined_r0x0001409b041b:
  if (plVar7 == plVar1) {
    return;
  }
  if (*plVar7 != 0) {
    lVar4 = FUN_142e0d0b0();
    for (lVar6 = *plVar7; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar4) {
        if (*plVar7 != 0) {
          lVar5 = FUN_142e0d0b0();
          lVar6 = *plVar7;
          lVar4 = lVar6;
          goto joined_r0x0001409b0463;
        }
        break;
      }
    }
  }
  goto LAB_1409b04ae;
joined_r0x0001409b0463:
  if (lVar4 == 0) goto LAB_1409b0473;
  if (lVar4 == lVar5) goto LAB_1409b0475;
  lVar4 = *(longlong *)(lVar4 + 0x30);
  goto joined_r0x0001409b0463;
LAB_1409b0473:
  lVar6 = 0;
LAB_1409b0475:
  lVar5 = FUN_142e0d0b0();
  lVar4 = lVar2;
  do {
    lVar3 = lVar2;
    if (lVar4 == lVar5) goto joined_r0x0001409b0498;
    lVar4 = *(longlong *)(lVar4 + 0x30);
  } while (lVar4 != 0);
  lVar3 = 0;
joined_r0x0001409b0498:
  for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
    if (lVar3 == lVar6) {
      fVar8 = (float)(**(code **)(*param_2 + 0x18))(param_2,0);
      *(float *)(param_1 + 0x3c8) = fVar8 + *(float *)(param_1 + 0x3c8);
      *(longlong *)(param_1 + 0x3d0) = param_2[0x22];
      *(int *)(param_1 + 0x3d8) = (int)param_2[0x23];
      *(undefined8 *)(param_1 + 0x3dc) = *(undefined8 *)((longlong)param_2 + 0x11c);
      *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)((longlong)param_2 + 0x124);
      return;
    }
  }
LAB_1409b04ae:
  plVar7 = plVar7 + 1;
  goto joined_r0x0001409b041b;
}



// FUNCTION 1409b0540 FUN_1409b0540 body=164 status=ok
// SIG undefined FUN_1409b0540(void)

void FUN_1409b0540(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *local_res8 [4];
  
  cVar1 = FUN_142d529c0(param_2,param_1 + 0x38);
  if (cVar1 != '\0') {
    if ((char)param_1[0x2f] == '\0') {
      FUN_1413dd690(param_1);
      if (param_1[0x23] != 0) {
        local_res8[0] = param_1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1[0x23] + 600,local_res8);
      }
    }
    else {
      iVar3 = (int)param_1[0x40] + 1;
      if (iVar3 < 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)param_1[0x41];
        if (iVar3 < (int)param_1[0x41]) {
          iVar2 = iVar3;
        }
      }
      if ((int)param_1[0x40] != iVar2) {
        *(int *)(param_1 + 0x40) = iVar2;
        FUN_1413dd400(param_1);
        (**(code **)(*param_1 + 0x410))(param_1);
        (**(code **)(*param_1 + 0x260))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409b05f0 FUN_1409b05f0 body=41 status=ok
// SIG undefined FUN_1409b05f0(void)

void FUN_1409b05f0(longlong *param_1)

{
  FUN_1409add40(param_1,2);
  (**(code **)(*param_1 + 0x430))(param_1);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1409b0620 FUN_1409b0620 body=171 status=ok
// SIG undefined FUN_1409b0620(void)

void FUN_1409b0620(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FUN_1413dd590();
    cVar2 = FUN_142d52a00(param_1 + 0x260);
    if (cVar2 != '\0') {
      uVar1 = FUN_142d52a20(param_1 + 0x260);
      uVar1 = FArchive::operator<<(uVar1);
      FUN_142d6f560(uVar1,0,1);
    }
    FUN_1409b70a0(param_1,*(undefined8 *)(param_1 + 0x3b8));
    if (*(longlong *)(param_1 + 0x3b8) != 0) {
      *(undefined8 *)(param_1 + 0x3b8) = 0;
      FUN_1409af510(param_1);
    }
    lVar3 = FUN_1409aa9f0(*(undefined8 *)(param_1 + 0x110));
    if (lVar3 != 0) {
      local_res8 = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar3 + 0x48,&local_res8);
    }
  }
  return;
}



// FUNCTION 1409b06d0 FUN_1409b06d0 body=14 status=ok
// SIG undefined FUN_1409b06d0(void)

void FUN_1409b06d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uStackX_8;
  
  if (param_2 == *(longlong *)(param_1 + 0x3b8)) {
    if (*(longlong *)(param_1 + 0x3b8) != 0) {
      FUN_1413dd590();
      cVar2 = FUN_142d52a00(param_1 + 0x260);
      if (cVar2 != '\0') {
        uVar1 = FUN_142d52a20(param_1 + 0x260);
        uVar1 = FArchive::operator<<(uVar1);
        FUN_142d6f560(uVar1,0,1);
      }
      FUN_1409b70a0(param_1,*(undefined8 *)(param_1 + 0x3b8));
      if (*(longlong *)(param_1 + 0x3b8) != 0) {
        *(undefined8 *)(param_1 + 0x3b8) = 0;
        FUN_1409af510(param_1);
      }
      lVar3 = FUN_1409aa9f0(*(undefined8 *)(param_1 + 0x110));
      if (lVar3 != 0) {
        uStackX_8 = 0;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (lVar3 + 0x48,&uStackX_8);
      }
    }
    return;
  }
  return;
}



// FUNCTION 1409b06e0 FUN_1409b06e0 body=293 status=ok
// SIG undefined FUN_1409b06e0(void)

void FUN_1409b06e0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_18;
  int local_10;
  
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    return;
  }
  local_18 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_14419c988;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)FUN_1409b0810;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_14419c9d0;
  }
  uVar1 = FUN_142d369f0(param_1 + 0x298,*(undefined8 *)(param_1 + 0x110),&local_18);
  *(undefined4 *)(param_1 + 0x3c4) = uVar1;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1409b07e7;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1409b07e7:
  if (*(int *)(param_1 + 0x3c4) != -1) {
    return;
  }
  FUN_1409add40(param_1,0);
  return;
}



// FUNCTION 1409b0810 FUN_1409b0810 body=457 status=ok
// SIG undefined FUN_1409b0810(void)

void FUN_1409b0810(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  undefined1 local_18 [16];
  
  lVar6 = *param_2;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x30) == *(int *)((longlong)param_1 + 0x3c4))) {
    FUN_142be50e0(lVar6,local_18,0);
    plVar4 = (longlong *)param_1[0x77];
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x6d0))(plVar4,0);
      if (param_1[0x77] != 0) {
        param_1[0x77] = 0;
        FUN_1409af510(param_1);
      }
    }
    lVar5 = FUN_1413dda80(param_1,local_18);
    lVar6 = param_1[0x77];
    if (lVar6 != lVar5) {
      param_1[0x77] = lVar5;
      FUN_1409af510(param_1);
      lVar6 = param_1[0x77];
    }
    if (lVar6 == 0) {
      FUN_1409add40();
    }
    else {
      FUN_1409b6580(param_1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146864d58) {
        _Init_thread_header(&DAT_146864d58);
        if (DAT_146864d58 == -1) {
          FName::FName(&DAT_146864d50,L"Just Accept It Timer Done",1);
          _Init_thread_footer(&DAT_146864d58);
        }
      }
      lVar6 = UObject::FindFunction(param_1,DAT_146864d50);
      if (lVar6 != 0) {
        (**(code **)(*param_1 + 0x208))(param_1,lVar6,0);
      }
      lVar6 = param_1[0x77];
      lVar5 = FUN_1409aa9f0(param_1[0x22]);
      if (lVar5 != 0) {
        local_res8 = lVar6;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (lVar5 + 0x38,&local_res8);
      }
    }
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0xffffffff;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 1409b09e0 FUN_1409b09e0 body=734 status=ok
// SIG undefined FUN_1409b09e0(void)

void FUN_1409b09e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  float local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  if (((*(longlong *)(param_1 + 0x3b8) == 0) || (*param_2 == 0)) ||
     (*(int *)(*param_2 + 0x30) != *(int *)(param_1 + 0x3f8))) {
    *(undefined4 *)(param_1 + 1000) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x3ec) = 0;
    *(undefined1 *)(param_1 + 0x3f4) = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
    FUN_1413dd440(param_1);
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = plVar5 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) {
      return;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 != 1) {
      return;
    }
    (**(code **)(*plVar5 + 8))(plVar5,1);
    return;
  }
  puVar3 = (undefined4 *)(param_1 + 1000);
  lVar9 = FWeakObjectPtr::Get(puVar3);
  if (lVar9 == 0) {
    local_60 = DAT_1468b5da8;
    puVar10 = &local_68;
    local_68 = DAT_1468b5da0;
  }
  else {
    lVar4 = *(longlong *)(lVar9 + 0x168);
    if (lVar4 == 0) {
      local_78 = DAT_1468b5da8;
      puVar11 = &local_80;
      local_80 = DAT_1468b5da0;
    }
    else {
      local_28 = *(float *)(lVar4 + 0x210);
      fStack_24 = *(float *)(lVar4 + 0x214);
      fStack_20 = *(float *)(lVar4 + 0x218);
      fStack_1c = *(float *)(lVar4 + 0x21c);
      auVar6._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != fStack_24);
      auVar6._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != local_28);
      auVar6._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_20);
      auVar6._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_1c);
      iVar8 = movmskps((int)lVar9,auVar6);
      if (iVar8 != 0) {
        *(float *)(lVar4 + 0x250) = local_28;
        *(float *)(lVar4 + 0x254) = fStack_24;
        *(float *)(lVar4 + 600) = fStack_20;
        *(float *)(lVar4 + 0x25c) = fStack_1c;
        puVar10 = (undefined8 *)FQuat::Rotator(&local_28,local_18);
        *(undefined8 *)(lVar4 + 0x260) = *puVar10;
        *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar10 + 1);
      }
      local_84 = *(undefined4 *)(lVar4 + 0x268);
      puVar11 = &local_8c;
      local_8c = *(undefined8 *)(lVar4 + 0x260);
    }
    local_6c = *(undefined4 *)(puVar11 + 1);
    puVar10 = &local_74;
    local_74 = *puVar11;
  }
  local_50 = *puVar10;
  local_48 = *(undefined4 *)(puVar10 + 1);
  FUN_142be50e0(*param_2,&local_a8,0);
  if (((local_a8 != DAT_1468b5d90) || (local_a4 != DAT_1468b5d94)) || (local_a0 != DAT_1468b5d98)) {
    plVar5 = *(longlong **)(param_1 + 0x3b8);
    lVar9 = plVar5[0x2d];
    if (lVar9 == 0) {
      local_54 = DAT_1468b5d98;
      puVar10 = &local_5c;
      local_5c = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      puVar10 = (undefined8 *)&local_98;
      local_98 = *(undefined4 *)(lVar9 + 0x220);
      local_90 = *(undefined4 *)(lVar9 + 0x228);
      uStack_94 = *(undefined4 *)(lVar9 + 0x224);
    }
    local_40 = *puVar10;
    local_38 = *(undefined4 *)(puVar10 + 1);
    cVar7 = (**(code **)(*plVar5 + 0x500))(plVar5,&local_a8,&local_50,0,0);
    if (cVar7 != '\0') {
      *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
      *puVar3 = 0xffffffff;
      *(undefined8 *)(param_1 + 0x3ec) = 0;
      *(undefined1 *)(param_1 + 0x3f4) = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
      FUN_1413dd4c0(param_1);
      goto LAB_1409b0bea;
    }
  }
  if (*(int *)(param_1 + 0x3f0) < *(int *)(param_1 + 0x360)) {
    *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3f0) + 1;
    FUN_1409a6340();
  }
  else {
    *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
    *puVar3 = 0xffffffff;
    *(undefined8 *)(param_1 + 0x3ec) = 0;
    *(undefined1 *)(param_1 + 0x3f4) = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
    FUN_1413dd440(param_1);
  }
LAB_1409b0bea:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return;
}



// FUNCTION 1409b0cc0 FUN_1409b0cc0 body=47 status=ok
// SIG undefined FUN_1409b0cc0(void)

void FUN_1409b0cc0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_142d529c0(param_2,param_1 + 0x1d8);
  if (cVar1 != '\0') {
    FUN_1409add40(param_1,0);
  }
  return;
}



// FUNCTION 1409b0cf0 FUN_1409b0cf0 body=92 status=ok
// SIG undefined FUN_1409b0cf0(void)

void FUN_1409b0cf0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *(undefined4 *)(param_1 + 0x1d8);
  uStack_24 = *(undefined4 *)(param_1 + 0x1dc);
  uStack_20 = *(undefined4 *)(param_1 + 0x1e0);
  uStack_1c = *(undefined4 *)(param_1 + 0x1e4);
  local_18 = *(undefined8 *)(param_1 + 0x1e8);
  cVar1 = FUN_142d529c0(param_2,&local_28);
  if ((cVar1 != '\0') &&
     ((*(longlong *)(param_1 + 600) == 0 ||
      (*(char *)(*(longlong *)(param_1 + 600) + 0x2461) != '\0')))) {
    FUN_1409add40(param_1,0);
  }
  return;
}



// FUNCTION 1409b0d50 FUN_1409b0d50 body=63 status=ok
// SIG undefined FUN_1409b0d50(void)

void FUN_1409b0d50(longlong param_1)

{
  if ((*(longlong *)(param_1 + 600) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 600) + 0x2470) != '\0')) {
    FUN_1409add40(param_1,0);
    FUN_1409b7150(param_1,*(undefined8 *)(param_1 + 600));
    return;
  }
  return;
}



// FUNCTION 1409b0d90 FUN_1409b0d90 body=68 status=ok
// SIG undefined FUN_1409b0d90(void)

void FUN_1409b0d90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 600);
  if (((param_2 == lVar1) && (lVar1 != 0)) && (*(char *)(lVar1 + 0x2470) != '\0')) {
    FUN_1409add40(param_1,0);
    FUN_1409b7150(param_1,*(undefined8 *)(param_1 + 600));
    return;
  }
  return;
}



// FUNCTION 1409b0de0 FUN_1409b0de0 body=462 status=ok
// SIG undefined FUN_1409b0de0(void)

void FUN_1409b0de0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float local_18;
  float fStack_14;
  float local_10;
  
  if (*(char *)(param_1 + 0x1f0) == '\0') goto LAB_1409b0f61;
  lVar7 = FUN_1430ec7a0();
  if (((lVar7 == 0) || (lVar7 = *param_2, lVar7 == 0)) ||
     (*(int *)(lVar7 + 0x30) != *(int *)(param_1 + 0x264))) goto LAB_1409b0f61;
  FUN_142be50e0(lVar7,&local_18,0);
  if (((local_18 == DAT_1468b5d90) && (fStack_14 == DAT_1468b5d94)) && (local_10 == DAT_1468b5d98))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_1409b0f61;
  *(ulonglong *)(param_1 + 0x268) = CONCAT44(fStack_14,local_18);
  *(float *)(param_1 + 0x270) = local_10;
  lVar7 = FUN_1409bba80(param_1);
  *(longlong *)(param_1 + 600) = lVar7;
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x2470) == '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 0x260) = uVar6;
  if (lVar7 != 0) {
    lVar8 = FUN_1413ffb90();
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
      lVar8 = FUN_1430ec7a0(param_1);
      if (lVar8 == 0) {
LAB_1409b0f3d:
        lVar8 = 0;
      }
      else {
        lVar9 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_1409b0f3d;
      }
      FUN_140a72890(lVar7,param_1,lVar8);
    }
  }
  FUN_1409b67c0(param_1,*(undefined8 *)(param_1 + 600));
LAB_1409b0f61:
  *(undefined4 *)(param_1 + 0x264) = 0xffffffff;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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



// FUNCTION 1409b0fb0 FUN_1409b0fb0 body=101 status=ok
// SIG undefined FUN_1409b0fb0(void)

void FUN_1409b0fb0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UUGStartScreenUW::GetPrivateStaticClass();
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
      FUN_140757f80(param_1 + 0x2e0,param_2);
    }
  }
  return;
}



// FUNCTION 1409b1020 FUN_1409b1020 body=101 status=ok
// SIG undefined FUN_1409b1020(void)

void FUN_1409b1020(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UUGStartScreenUW::GetPrivateStaticClass();
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
      FUN_140757f80(param_1 + 0x2d0,param_2);
    }
  }
  return;
}



// FUNCTION 1409b1090 FUN_1409b1090 body=140 status=ok
// SIG undefined FUN_1409b1090(void)

void FUN_1409b1090(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1430ec7a0();
  if (lVar2 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1409b10ea;
  }
  lVar2 = 0;
LAB_1409b10ea:
  if ((param_2 == 0) || (param_2 == lVar2)) {
    FUN_1409add40(param_1,1);
    (**(code **)(*param_1 + 0x3c8))(param_1,1);
  }
  return;
}



// FUNCTION 1409b1120 thunk_FUN_1409a3550 body=5 status=ok
// SIG undefined thunk_FUN_1409a3550(void)

void thunk_FUN_1409a3550(longlong *param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x5e) = (int)param_1[0x5e] + 1;
  *(int *)((longlong)param_1 + 0x2f4) = *(int *)((longlong)param_1 + 0x2f4) + -1;
  iVar1 = (int)param_1[0x5e];
  if ((int)param_1[0x5f] < (int)param_1[0x5e]) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x5e) = iVar1;
  (**(code **)(*param_1 + 0x260))(param_1);
  if (*(int *)((longlong)param_1 + 0x2f4) < 1) {
    if ((*(byte *)((longlong)param_1 + 0x25c) & 8) == 0) {
      FUN_1409add40(param_1,0);
      return;
    }
    *(int *)((longlong)param_1 + 0x2f4) = (int)param_1[0x5f];
    param_1[0x5c] = 0;
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x4d);
  return;
}



// FUNCTION 1409b1130 FUN_1409b1130 body=10 status=ok
// SIG undefined FUN_1409b1130(void)

void FUN_1409b1130(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001409b1133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x440))();
  return;
}



// FUNCTION 1409b1140 FUN_1409b1140 body=209 status=ok
// SIG undefined FUN_1409b1140(void)

void FUN_1409b1140(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = *(int *)(param_1 + 0xf0) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4 * 0x28;
    lVar6 = (longlong)*(int *)(param_1 + 0xf0) * 0x28;
    lVar7 = lVar5;
    do {
      lVar2 = *(longlong *)(param_1 + 0xe8);
      if (*(char *)(lVar5 + 9 + lVar2) != '\0') {
        iVar1 = *(int *)(param_1 + 0xf0);
        iVar3 = (iVar1 - iVar4) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + lVar7),(void *)(lVar6 + lVar2),(longlong)iVar3 * 0x28);
          iVar1 = *(int *)(param_1 + 0xf0);
        }
        *(int *)(param_1 + 0xf0) = iVar1 + -1;
        TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1 + 0xe8);
      }
      lVar6 = lVar6 + -0x28;
      lVar7 = lVar7 + -0x28;
      lVar5 = lVar5 + -0x28;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1409b1220 FUN_1409b1220 body=209 status=ok
// SIG undefined FUN_1409b1220(void)

void FUN_1409b1220(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_1409add40(param_1,2);
  iVar4 = *(int *)(param_1 + 0xf0) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4 * 0x28;
    lVar6 = (longlong)*(int *)(param_1 + 0xf0) * 0x28;
    lVar7 = lVar5;
    do {
      lVar2 = *(longlong *)(param_1 + 0xe8);
      if (*(char *)(lVar5 + 9 + lVar2) != '\0') {
        iVar1 = *(int *)(param_1 + 0xf0);
        iVar3 = (iVar1 - iVar4) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + lVar7),(void *)(lVar6 + lVar2),(longlong)iVar3 * 0x28);
          iVar1 = *(int *)(param_1 + 0xf0);
        }
        *(int *)(param_1 + 0xf0) = iVar1 + -1;
        TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1 + 0xe8);
      }
      lVar6 = lVar6 + -0x28;
      lVar7 = lVar7 + -0x28;
      lVar5 = lVar5 + -0x28;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1409b1330 FUN_1409b1330 body=22 status=ok
// SIG undefined FUN_1409b1330(void)

void FUN_1409b1330(longlong param_1,int param_2)

{
  if (*(char *)(param_1 + 0x651) != '\0') {
    *(int *)(param_1 + 0x658) = param_2 + *(int *)(param_1 + 0x6a0);
  }
  return;
}



// FUNCTION 1409b1350 FUN_1409b1350 body=22 status=ok
// SIG undefined FUN_1409b1350(void)

void FUN_1409b1350(longlong param_1,int param_2)

{
  if (*(char *)(param_1 + 0x651) != '\0') {
    *(int *)(param_1 + 0x65c) = param_2 + *(int *)(param_1 + 0x6a4);
  }
  return;
}



// FUNCTION 1409b1370 FUN_1409b1370 body=36 status=ok
// SIG undefined FUN_1409b1370(void)

void FUN_1409b1370(longlong *param_1)

{
  FUN_1409add40(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0001409b138d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c8))(param_1,1);
  return;
}



// FUNCTION 1409b13a0 FUN_1409b13a0 body=194 status=ok
// SIG undefined FUN_1409b13a0(void)

void FUN_1409b13a0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  plVar3 = *(longlong **)(param_1 + 0x550);
  uVar4 = (longlong)*(int *)(param_1 + 0x558) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x558) < plVar3) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      if (*plVar3 != 0) {
        FUN_1409b7b10();
      }
      plVar3 = plVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
  if (param_2 < param_3) {
    FUN_1409bb130(*(undefined8 *)(param_1 + 0x3b0),param_3);
    iVar2 = *(int *)(param_1 + 0x3a8);
    iVar1 = FUN_1409a7720(param_1);
    if (iVar2 <= iVar1) {
      iVar2 = iVar2 + -1;
      if (iVar2 <= param_2) {
        iVar2 = param_2;
      }
      FUN_141456f90(*(undefined8 *)(param_1 + 0x3b0),param_3 - iVar2);
    }
  }
  return;
}



// FUNCTION 1409b1470 FUN_1409b1470 body=521 status=ok
// SIG undefined FUN_1409b1470(void)

void FUN_1409b1470(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_res8;
  longlong *local_38;
  undefined8 local_30;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x30) == (int)param_1[0x61])) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_142be3cd0(lVar5,&local_38);
    for (plVar6 = local_38; plVar6 != local_38 + (int)local_30; plVar6 = plVar6 + 1) {
      if (*plVar6 != 0) {
        FWeakObjectPtr::operator=(param_1 + 99);
        break;
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 99);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 99);
    cVar3 = FUN_1409ace70(param_1);
    if ((cVar3 == '\0') && (lVar5 != 0)) {
      plVar6 = param_1 + 0x5e;
      iVar4 = (int)param_1[0x5f];
      *(int *)(param_1 + 0x5f) = iVar4 + 1;
      if (*(int *)((longlong)param_1 + 0x2fc) < iVar4 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar6,iVar4);
      }
      lVar7 = *plVar6 + (longlong)iVar4 * 0x60;
      FWeakObjectPtr::operator=(lVar7,lVar5);
      *(undefined8 *)(lVar7 + 8) = 0;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined2 *)(lVar7 + 0x5c) = 0;
      *(undefined1 *)(lVar7 + 0x5e) = 0;
      FUN_14099d680(param_1,*plVar6 + (longlong)iVar4 * 0x60);
      local_res8 = lVar5;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x33,&local_res8);
      iVar4 = FUN_14233f450(param_1);
      if (iVar4 < 3) {
        FUN_141311f40(param_1,lVar5);
      }
    }
  }
  FUN_14099cdb0(param_1);
  cVar3 = (**(code **)(*param_1 + 0x400))(param_1);
  if ((cVar3 != '\0') && (cVar3 = FUN_1409ace70(param_1), cVar3 == '\0')) {
    FUN_1409bc600(param_1,0);
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 1409b1680 FUN_1409b1680 body=458 status=ok
// SIG undefined FUN_1409b1680(void)

void FUN_1409b1680(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142343b00();
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar2 != 0) {
    lVar7 = ASoPlayerSpline::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakTriggerKillIronBearComponent::OwnerTriggerTouched",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_res10,pwVar5 + 2,1);
      plVar11 = (longlong *)(lVar2 + 0x498);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_20);
      }
      piVar9 = (int *)*plVar11;
      iVar1 = *(int *)(lVar2 + 0x4a0);
      for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
        if (((*piVar10 == local_28) && (piVar10[1] == local_24)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar10), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_28), cVar6 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(longlong *)(piVar10 + 2) == local_20)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_1409b1831;
          break;
        }
      }
      iVar1 = *(int *)(lVar2 + 0x4a0);
      *(int *)(lVar2 + 0x4a0) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x4a4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
      }
      piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar11);
      *piVar9 = local_28;
      piVar9[1] = local_24;
      *(longlong *)(piVar9 + 2) = local_20;
LAB_1409b1831:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    }
  }
  return;
}



// FUNCTION 1409b1850 FUN_1409b1850 body=195 status=ok
// SIG undefined FUN_1409b1850(void)

void FUN_1409b1850(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1430ec7a0();
  if (lVar2 == 0) {
LAB_1409b18a0:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1409b18a0;
  }
  param_1[0x22] = lVar2;
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    lVar3 = AGFireballProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1409b18ed;
  }
  lVar2 = 0;
LAB_1409b18ed:
  param_1[0x23] = lVar2;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
                    /* WARNING: Could not recover jumptable at 0x0001409b190c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x438))(param_1);
  return;
}



// FUNCTION 1409b1920 FUN_1409b1920 body=235 status=ok
// SIG undefined FUN_1409b1920(void)

void FUN_1409b1920(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1430ec7a0();
  if (lVar3 == 0) {
LAB_1409b1970:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1409b1970;
  }
  param_1[0x22] = lVar3;
  lVar3 = param_1[0x12];
  if (lVar3 != 0) {
    lVar4 = AGFireballProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1409b19bd;
  }
  lVar3 = 0;
LAB_1409b19bd:
  param_1[0x23] = lVar3;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  (**(code **)(*param_1 + 0x438))(param_1);
  plVar1 = (longlong *)param_1[0x22];
  if (plVar1 != (longlong *)0x0) {
    uVar5 = FUN_1412e9ee0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    param_1[0x4c] = lVar3;
  }
  return;
}



// FUNCTION 1409b1a10 FUN_1409b1a10 body=209 status=ok
// SIG undefined FUN_1409b1a10(void)

void FUN_1409b1a10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar1 = (longlong *)(param_1 + 0x28);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = 0x409ac780;
    *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
    *(undefined4 *)(plVar3 + 3) = 0;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143fcff08;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar2 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar2 + 1;
    if (*(int *)(param_1 + 0x34) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return;
}



// FUNCTION 1409b1af0 FUN_1409b1af0 body=182 status=ok
// SIG undefined FUN_1409b1af0(void)

void FUN_1409b1af0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1430ec7a0();
  if (lVar2 == 0) {
LAB_1409b1b40:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1409b1b40;
  }
  *(longlong *)(param_1 + 0x110) = lVar2;
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (lVar2 != 0) {
    lVar3 = AGFireballProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1409b1b8d;
  }
  lVar2 = 0;
LAB_1409b1b8d:
  *(longlong *)(param_1 + 0x118) = lVar2;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1409b1bb0 FUN_1409b1bb0 body=247 status=ok
// SIG undefined FUN_1409b1bb0(void)

void FUN_1409b1bb0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x651) == '\0') {
    FUN_1409b7720(param_1 + 0x660,0);
    FUN_1409b7660(param_1 + 0x670,0);
    FUN_1409b7850(param_1 + 0x680,0);
    FUN_1409b77c0(param_1 + 0x690,0);
    *(undefined8 *)(param_1 + 0x6a0) = 0;
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
      goto LAB_1409b1c18;
    }
  }
  lVar3 = 0;
LAB_1409b1c18:
  if (lVar3 != 0) {
    lVar3 = FUN_140cfbfb0(lVar3);
    if (lVar3 != 0) {
      FUN_14099b910(param_1 + 0x658,lVar3 + 0xf8);
      *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_1 + 0x658);
      *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_1 + 0x65c);
    }
  }
  return;
}



// FUNCTION 1409b1cb0 FUN_1409b1cb0 body=33 status=ok
// SIG undefined FUN_1409b1cb0(void)

void FUN_1409b1cb0(longlong param_1)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x160);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x48,local_res8);
  return;
}



// FUNCTION 1409b1d00 FUN_1409b1d00 body=31 status=ok
// SIG undefined FUN_1409b1d00(void)

void FUN_1409b1d00(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_142d2ad60(*(undefined8 *)(param_1 + 0x508));
  return;
}



// FUNCTION 1409b1d20 FUN_1409b1d20 body=129 status=ok
// SIG undefined FUN_1409b1d20(void)

void FUN_1409b1d20(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143082290();
  lVar3 = *(longlong *)(param_1 + 0x150);
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
    if (bVar1) goto LAB_1409b1d76;
  }
  lVar3 = 0;
LAB_1409b1d76:
  *(longlong *)(param_1 + 0x6f0) = lVar3;
  if (lVar3 != 0) {
    FUN_1414743a0(param_1);
    FUN_142d2ad60(*(undefined8 *)(param_1 + 0x6f8));
  }
  return;
}



// FUNCTION 1409b1db0 FUN_1409b1db0 body=36 status=ok
// SIG undefined FUN_1409b1db0(void)

void FUN_1409b1db0(longlong param_1)

{
  if (*(char *)(param_1 + 0x4b0) != '\0') {
    FUN_1409bcaa0();
    *(undefined1 *)(param_1 + 0x4b0) = 0;
  }
  return;
}



// FUNCTION 1409b1e10 FUN_1409b1e10 body=191 status=ok
// SIG undefined FUN_1409b1e10(void)

void FUN_1409b1e10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2f0);
    lVar3 = (longlong)*(int *)(param_1 + 0x2f8) * 0x60 + lVar2;
    if (lVar2 != lVar3) {
      piVar4 = (int *)(lVar2 + 0x40);
      do {
        if ((((piVar4[-2] != 0 || piVar4[-1] != 0) || piVar4[1] != 0) || *piVar4 != 0) &&
           (lVar1 = FWeakObjectPtr::Get(lVar2), lVar1 == *(longlong *)(param_2 + 0x150))) {
          if (lVar2 == 0) {
            return;
          }
          lVar3 = FUN_1409aab20(param_1);
          if (lVar3 == 0) {
            return;
          }
          FUN_140c542e0(lVar3,lVar2 + 8);
          *(undefined8 *)(lVar2 + 0x40) = 0;
          *(undefined8 *)(lVar2 + 0x38) = 0;
          return;
        }
        lVar2 = lVar2 + 0x60;
        piVar4 = piVar4 + 0x18;
      } while (lVar2 != lVar3);
    }
  }
  return;
}



// FUNCTION 1409b1ed0 FUN_1409b1ed0 body=164 status=ok
// SIG undefined FUN_1409b1ed0(void)

void FUN_1409b1ed0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar4 = 0;
  if (*(char *)(param_1 + 0x9f8) != '\0') {
    lVar3 = lVar4;
    if (param_4 != (longlong *)0x0) {
      uVar1 = AGFireballProjectile::GetPrivateStaticClass();
      lVar2 = (**(code **)(*param_4 + 0x628))(param_4,uVar1);
      if (lVar2 != 0) {
        lVar3 = FUN_1409a6100(lVar2,*(undefined8 *)(param_1 + 0xa00));
      }
    }
    *(longlong *)(param_1 + 0xa10) = lVar3;
    FUN_1409b6fe0(param_1 + 0x8a8);
  }
  if (*(longlong *)(param_1 + 0x898) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x898) + 0x900);
  }
  if (lVar4 != 0) {
    FUN_142cff920(lVar4,1,DAT_146864b28);
  }
  return;
}



// FUNCTION 1409b1f80 FUN_1409b1f80 body=64 status=ok
// SIG undefined FUN_1409b1f80(void)

void FUN_1409b1f80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x8a8);
  if (lVar1 != 0) {
    FUN_142c6c710(lVar1);
    if (*(char *)(lVar1 + 600) == '\0') {
      FUN_1413d8170(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 1409b1fc0 FUN_1409b1fc0 body=46 status=ok
// SIG undefined FUN_1409b1fc0(void)

void FUN_1409b1fc0(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(char *)(param_1 + 0x9f8) != '\0') {
    FUN_1409be4f0(param_1 + 0x8a8);
    return;
  }
  return;
}



// FUNCTION 1409b1ff0 FUN_1409b1ff0 body=404 status=ok
// SIG undefined FUN_1409b1ff0(void)

void FUN_1409b1ff0(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  undefined1 local_38 [32];
  
  cVar6 = FUN_142d52a00(param_1 + 0x38);
  if ((cVar6 != '\0') && ((char)param_1[0x2f] == '\0')) {
    uVar8 = FUN_142d52a20(param_1 + 0x38);
    lVar9 = FArchive::operator<<(uVar8);
    FUN_14246fd70(lVar9 + 0x94,1);
    uVar8 = FUN_142d52a20(param_1 + 0x38);
    uVar8 = FArchive::operator<<(uVar8);
    FUN_142d6f560(uVar8,0,1);
    cVar6 = FUN_142d52a00(param_1 + 0x38);
    if (cVar6 != '\0') {
      lVar9 = FUN_142d52a20(param_1 + 0x38);
      puVar1 = (undefined4 *)((longlong)param_1 + 0x244);
      cVar6 = FUN_1407c3030(puVar1);
      if (cVar6 != '\0') {
        FUN_14248ba60(lVar9 + 0x1c,puVar1);
      }
      puVar10 = (undefined4 *)FUN_14246da30(local_38);
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      *puVar1 = *puVar10;
      *(undefined4 *)(param_1 + 0x49) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x24c) = uVar4;
      *(undefined4 *)(param_1 + 0x4a) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x254) = puVar10[4];
      local_res8[0] = 0;
      local_res18[0] = 0;
      cVar6 = FUN_1413dcfd0(param_1,local_res8,local_res18);
      if (cVar6 != '\0') {
        puVar10 = (undefined4 *)
                  FUN_142470da0(lVar9 + 0x1c,local_38,local_res8[0],local_res18[0],local_res10);
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        *puVar1 = *puVar10;
        *(undefined4 *)(param_1 + 0x49) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0x24c) = uVar4;
        *(undefined4 *)(param_1 + 0x4a) = uVar5;
        *(undefined4 *)((longlong)param_1 + 0x254) = puVar10[4];
      }
    }
  }
  if ((char)param_1[0x2f] != '\0') {
    iVar2 = (int)param_1[0x40];
    if (iVar2 + -1 < 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)param_1[0x41];
      if (iVar2 <= (int)param_1[0x41]) {
        iVar7 = iVar2 + -1;
      }
    }
    if (iVar2 != iVar7) {
      *(int *)(param_1 + 0x40) = iVar7;
      FUN_1413dd400(param_1);
      (**(code **)(*param_1 + 0x410))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001409b2177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x260))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1409b2190 FUN_1409b2190 body=334 status=ok
// SIG undefined FUN_1409b2190(void)

void FUN_1409b2190(longlong *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong local_res8;
  
  FUN_1409b1ff0();
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  puVar8 = (undefined8 *)param_1[0x28];
  puVar1 = puVar8 + (int)param_1[0x29];
  for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
    if (param_1[0x23] != 0) {
      local_res8 = param_1[2];
      lVar4 = FUN_1409ab2f0(param_1[0x23] + 0x488,&local_res8,*puVar8);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0)) {
        lVar5 = FUN_1413e02c0();
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
          *(uint *)(param_1 + 0x4b) =
               *(uint *)(param_1 + 0x4b) | 1 << (*(byte *)(lVar4 + 0xa0) & 0x1f);
        }
      }
    }
  }
  plVar7 = (longlong *)param_1[0x4c];
  uVar9 = (longlong)(int)param_1[0x4d] & 0x1fffffffffffffff;
  if (plVar7 + (int)param_1[0x4d] < plVar7) {
    uVar9 = uVar6;
  }
  if (uVar9 != 0) {
    do {
      lVar4 = *plVar7;
      if ((lVar4 != 0) && (cVar3 = FUN_1409ae710(param_1,lVar4), cVar3 != '\0')) {
        *(uint *)(param_1 + 0x4b) =
             *(uint *)(param_1 + 0x4b) | 1 << (*(byte *)(lVar4 + 0xa0) & 0x1f);
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x0001409b22d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 1409b22e0 FUN_1409b22e0 body=228 status=ok
// SIG undefined FUN_1409b22e0(void)

void FUN_1409b22e0(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  
  FUN_1409b1ff0();
  *(undefined4 *)(param_1 + 0x25c) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x140);
  puVar1 = puVar5 + *(int *)(param_1 + 0x148);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      local_res8 = *(undefined8 *)(param_1 + 0x10);
      lVar3 = FUN_1409ab2f0(*(longlong *)(param_1 + 0x118) + 0x488,&local_res8,*puVar5);
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0)) {
        lVar4 = FUN_1413e0610();
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
          *(uint *)(param_1 + 0x25c) =
               *(uint *)(param_1 + 0x25c) | 1 << (*(byte *)(lVar3 + 0xa1) & 0x1f);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409b23d0 FUN_1409b23d0 body=327 status=ok
// SIG undefined FUN_1409b23d0(void)

void FUN_1409b23d0(longlong *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  longlong local_res8;
  
  FUN_1409b1ff0();
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  puVar6 = (undefined8 *)param_1[0x28];
  puVar1 = puVar6 + (int)param_1[0x29];
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    if (param_1[0x23] != 0) {
      local_res8 = param_1[2];
      lVar3 = FUN_1409ab2f0(param_1[0x23] + 0x488,&local_res8,*puVar6);
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0)) {
        lVar4 = FUN_1413e0610();
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
          *(uint *)((longlong)param_1 + 0x25c) =
               *(uint *)((longlong)param_1 + 0x25c) | 1 << (*(byte *)(lVar3 + 0xa1) & 0x1f);
        }
      }
    }
  }
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  (**(code **)(*param_1 + 0x260))(param_1);
  uVar5 = FUN_1430ec7a0(param_1);
  fVar7 = (float)FUN_142c98860(param_1 + 0x50,uVar5);
  *(int *)(param_1 + 0x5f) = (int)fVar7;
  *(int *)((longlong)param_1 + 0x2f4) = (int)fVar7;
  FUN_1409b6d70(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001409b2510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 1409b2520 FUN_1409b2520 body=480 status=ok
// SIG undefined FUN_1409b2520(void)

void FUN_1409b2520(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  FUN_1409b1ff0();
  cVar2 = FUN_142d52a00(param_1 + 0x280);
  if (cVar2 != '\0') {
    local_38 = *(undefined8 *)(param_1 + 0x290);
    local_48 = *(undefined4 *)(param_1 + 0x280);
    uStack_44 = *(undefined4 *)(param_1 + 0x284);
    uStack_40 = *(undefined4 *)(param_1 + 0x288);
    uStack_3c = *(undefined4 *)(param_1 + 0x28c);
    FUN_142d6c7b0(&local_48,0x3f800000,0x3f800000);
  }
  cVar2 = FUN_142d52a00(param_1 + 0x260);
  if (cVar2 != '\0') {
    local_38 = *(undefined8 *)(param_1 + 0x270);
    local_48 = *(undefined4 *)(param_1 + 0x260);
    uStack_44 = *(undefined4 *)(param_1 + 0x264);
    uStack_40 = *(undefined4 *)(param_1 + 0x268);
    uStack_3c = *(undefined4 *)(param_1 + 0x26c);
    FUN_142d6c7b0(&local_48,0x3f800000,0x3f800000);
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x140);
    plVar6 = plVar7 + *(int *)(param_1 + 0x148);
    for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
      if (*plVar7 != 0) {
        local_res8 = *(undefined8 *)(param_1 + 0x10);
        lVar3 = FUN_1409ab2f0(*(longlong *)(param_1 + 0x118) + 0x488,&local_res8);
        if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0)) {
          lVar4 = FUN_1413e0390();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            *(uint *)(param_1 + 0x3b0) =
                 *(uint *)(param_1 + 0x3b0) | 1 << (*(byte *)(lVar3 + 0xa0) & 0x1f);
          }
        }
      }
    }
    uVar5 = 0;
    plVar6 = *(longlong **)(param_1 + 0x350);
    uVar8 = (longlong)*(int *)(param_1 + 0x358) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(param_1 + 0x358) < plVar6) {
      uVar8 = uVar5;
    }
    if (uVar8 != 0) {
      do {
        lVar3 = *plVar6;
        if ((lVar3 != 0) && (cVar2 = FUN_1409ae710(param_1,lVar3), cVar2 != '\0')) {
          *(uint *)(param_1 + 0x3b0) =
               *(uint *)(param_1 + 0x3b0) | 1 << (*(byte *)(lVar3 + 0xa0) & 0x1f);
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar8);
    }
  }
  return;
}



// FUNCTION 1409b2700 FUN_1409b2700 body=353 status=ok
// SIG undefined FUN_1409b2700(void)

void FUN_1409b2700(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  
  FUN_1409b1ff0();
  plVar3 = (longlong *)FUN_1413e25e0(param_1,local_res10);
  plVar3 = (longlong *)*plVar3;
  if (plVar3 != (longlong *)0x0) {
    lVar5 = plVar3[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar5 = plVar3[0x1f];
      if (lVar5 == 0) goto LAB_1409b279d;
    }
    lVar4 = FUN_1413ffb90();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      FUN_1413e2980(param_1);
      return;
    }
  }
LAB_1409b279d:
  lVar5 = FUN_1409bba80(param_1);
  *(longlong *)(param_1 + 600) = lVar5;
  *(undefined1 *)(param_1 + 0x260) = 0;
  if (lVar5 == 0) {
    return;
  }
  bVar6 = false;
  lVar5 = FUN_1430ec7a0(param_1);
  if (lVar5 != 0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(longlong **)(lVar5 + 0x4c8) != (longlong *)0x0) {
        cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x4c8) + 0x558))();
        bVar6 = cVar2 != '\0';
      }
      goto LAB_1409b282c;
    }
  }
  lVar5 = 0;
LAB_1409b282c:
  FUN_140a607f0(*(undefined8 *)(param_1 + 600),param_1,lVar5,bVar6);
  FUN_1409b67c0(param_1,*(undefined8 *)(param_1 + 600));
  return;
}



// FUNCTION 1409b2870 FUN_1409b2870 body=5561 status=ok
// SIG undefined FUN_1409b2870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409b2870(longlong param_1,undefined4 param_2)

{
  float *pfVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  char cVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  longlong lVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined1 (*pauVar25) [12];
  undefined8 *puVar26;
  longlong *plVar27;
  longlong lVar28;
  int *piVar29;
  uint uVar30;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar45;
  undefined1 auVar39 [16];
  float fVar44;
  undefined1 auVar40 [16];
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
  undefined1 auStack_318 [32];
  undefined4 *local_2f8;
  undefined4 local_2f0;
  undefined1 *local_2e8;
  undefined8 *local_2e0;
  undefined1 *local_2d8;
  undefined8 local_2c8;
  float local_2c0;
  undefined8 local_2b8;
  float local_2b0;
  undefined1 local_2a8 [8];
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined4 local_288;
  undefined1 local_278 [8];
  float fStack_270;
  float fStack_26c;
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined8 local_228;
  undefined8 uStack_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  undefined4 uStack_1e4;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1c0;
  undefined8 local_1b8;
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
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [4];
  undefined8 uStack_164;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  longlong local_138;
  undefined1 local_104 [28];
  ulonglong local_e8;
  longlong *plVar31;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  plVar27 = *(longlong **)(param_1 + 0x898);
  local_288 = param_2;
  if ((((plVar27 != (longlong *)0x0) && (plVar27[0x120] != 0)) &&
      (lVar22 = (**(code **)(*plVar27 + 0x148))(), lVar22 != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x898) + 0x4c0) != 0)) {
    plVar27 = (longlong *)(*(longlong *)(param_1 + 0x898) + 0x8c0);
    uVar17 = (**(code **)(*plVar27 + 0x18))(plVar27,*(undefined8 *)(param_1 + 0x9d8));
    plVar27 = *(longlong **)(param_1 + 0x898);
    *(undefined1 *)(param_1 + 0xa60) = uVar17;
    lVar22 = plVar27[0x2d];
    if (lVar22 == 0) {
      local_2b0 = DAT_1468b5d98;
      puVar26 = &local_2b8;
      local_2b8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      puVar26 = &local_2c8;
      local_2c0 = *(float *)(lVar22 + 0x228);
      local_2c8 = *(undefined8 *)(lVar22 + 0x220);
    }
    pfVar1 = (float *)(param_1 + 0xa1c);
    uVar19 = *(undefined4 *)(puVar26 + 1);
    *(undefined8 *)pfVar1 = *puVar26;
    *(undefined4 *)(param_1 + 0xa24) = uVar19;
    if (plVar27 != (longlong *)0x0) {
      uVar23 = FUN_1407a6820();
      lVar22 = (**(code **)(*plVar27 + 0x628))(plVar27,uVar23);
      if (lVar22 != 0) {
        FUN_14072b710(lVar22);
      }
    }
    if ((*(char *)(param_1 + 0xa60) == '\0') &&
       (plVar27 = *(longlong **)(*(longlong *)(param_1 + 0x898) + 0x4d0), plVar27 != (longlong *)0x0
       )) {
      uVar19 = (**(code **)(*plVar27 + 0x4e8))();
      *(undefined4 *)(param_1 + 0xa64) = uVar19;
      plVar27 = *(longlong **)(*(longlong *)(param_1 + 0x898) + 0x4d0);
      (**(code **)(*plVar27 + 0x638))(plVar27,0);
    }
    FUN_1409a1410(param_1,local_248,&local_2b8);
    uVar23 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x960);
    uVar19 = FRichCurve::Eval(uVar23);
    lVar22 = *(longlong *)(param_1 + 0x898);
    *(undefined4 *)(param_1 + 0xa18) = uVar19;
    if (*(char *)(lVar22 + 0x128) == '\x03') {
      plVar27 = (longlong *)0x0;
      *(undefined8 *)(param_1 + 0xa28) = *(undefined8 *)(param_1 + 0xa1c);
      *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(param_1 + 0xa24);
      if (*(char *)(param_1 + 0xa60) == '\0') {
        fVar47 = (float)FUN_142c98860(param_1 + 0x8b0,lVar22);
        local_298 = *pfVar1;
        fVar47 = fVar47 * *(float *)(param_1 + 0xa18);
        fStack_294 = *(float *)(param_1 + 0xa20);
        fStack_290 = *(float *)(param_1 + 0xa24) - fVar47;
        plVar31 = *(longlong **)(*(longlong *)(param_1 + 0x898) + 0x4d0);
        if (plVar31 != (longlong *)0x0) {
          (**(code **)(*plVar31 + 0x748))(plVar31,local_278,0xbf800000);
          uStack_220 = 0;
          local_228 = 0;
          local_1e0 = 0;
          local_1d8 = 0;
          local_1c0 = 0;
          local_1b8 = 0;
          local_218 = 9.18355e-41;
          fStack_210 = 0.0;
          local_2c8 = 0;
          fStack_204 = (float)CONCAT22(fStack_204._2_2_,0x101);
          fStack_20c = (float)((uint)fStack_20c & 0xffffff00);
          fStack_214 = (float)((uint)fStack_214 & 0xff000000);
          local_208 = 0.0;
          FCollisionQueryParams::AddIgnoredActor(&local_228,*(undefined8 *)(param_1 + 0x898));
          local_228 = DAT_146864b28;
          FUN_1426d3dd0(local_268);
          FUN_1426ea8d0(local_268,2,0);
          FCollisionResponseContainer::SetResponse(local_268,2,0);
          _guard_xfg_dispatch_icall_nop(&local_178,0,0x90);
          uStack_170 = CONCAT44(0x3f800000,(undefined4)uStack_170);
          uVar23 = (**(code **)(**(longlong **)(param_1 + 0x898) + 0x148))();
          local_2d8 = local_268;
          local_2e0 = &local_228;
          local_2e8 = local_278;
          local_2f0 = 2;
          local_2f8 = &DAT_1464aa810;
          cVar18 = UWorld::SweepSingleByChannel(uVar23,&local_178,pfVar1,&local_298);
          if (cVar18 != '\0') {
            *(undefined8 *)(param_1 + 0xa28) = uStack_164;
            *(float *)(param_1 + 0xa30) = fStack_15c;
            *(float *)(param_1 + 0xa30) = fVar47 + *(float *)(param_1 + 0xa30);
            local_2c8 = *(undefined8 *)pfVar1;
            local_2c0 = *(float *)(param_1 + 0xa24) + 15.0;
            plVar31 = plVar27;
            while( true ) {
              uVar30 = (int)plVar31 + 1;
              plVar31 = (longlong *)(ulonglong)uVar30;
              uVar23 = (**(code **)(**(longlong **)(param_1 + 0x898) + 0x148))();
              local_2d8 = local_268;
              local_2e0 = &local_228;
              local_2e8 = local_278;
              local_2f0 = 2;
              local_2f8 = &DAT_1464aa810;
              UWorld::SweepSingleByChannel(uVar23,&local_178,&local_2c8,param_1 + 0xa28);
              if ((local_178 & 2) == 0) break;
              lVar22 = FWeakObjectPtr::Get(local_104);
              if (lVar22 == 0) goto LAB_1409b2e55;
              iVar21 = *(int *)(lVar22 + 0xc);
              uVar24 = FUN_142311640(&local_228);
              piVar29 = (int *)((ulonglong)(*(longlong *)(uVar24 + 0x20) != 0) - 1 & uVar24 |
                               *(ulonglong *)(uVar24 + 0x20));
              piVar2 = piVar29 + *(int *)(uVar24 + 0x28);
              for (; piVar29 != piVar2; piVar29 = piVar29 + 1) {
                if (*piVar29 == iVar21) goto LAB_1409b2e55;
              }
              FUN_142301530(&local_228,iVar21);
              if (0x13 < (int)uVar30) goto LAB_1409b2e55;
            }
            if ((local_178 & 1) != 0) {
              *(undefined8 *)(param_1 + 0xa28) = uStack_164;
              *(float *)(param_1 + 0xa30) = fStack_15c;
            }
          }
LAB_1409b2e55:
          if (local_1c0 != 0) {
            FMemory::Free();
          }
          if (local_1e0 != 0) {
            FMemory::Free();
          }
        }
      }
      lVar22 = *(longlong *)(param_1 + 0x898);
      if (lVar22 != 0) {
        plVar27 = *(longlong **)(lVar22 + 0x900);
      }
      if (plVar27 != (longlong *)0x0) {
        local_178 = plVar27[0x31a];
        uStack_220 = plVar27[0x31b];
        local_228 = 0;
        fVar47 = *(float *)(param_1 + 0xa28);
        fVar46 = *(float *)(param_1 + 0xa2c);
        lVar28 = plVar27[0x31c];
        lVar7 = plVar27[0x31d];
        uStack_1e4 = 0;
        lVar8 = plVar27[0x31e];
        lVar9 = plVar27[799];
        lVar22 = plVar27[800];
        local_138 = plVar27[0x322];
        fStack_290 = *(float *)(param_1 + 0xa30) * 100.0;
        local_1e8 = fStack_290;
        uStack_170 = uStack_220;
        (**(code **)(*plVar27 + 0x260))(plVar27);
        lVar12 = plVar27[0x31a];
        plVar27[0x31a] = local_228;
        plVar27[0x31b] = uStack_220;
        plVar27[0x31c] = lVar28;
        plVar27[0x31d] = lVar7;
        plVar27[0x31e] = lVar8;
        plVar27[799] = lVar9;
        plVar27[800] = lVar22;
        plVar27[0x321] = CONCAT44(fVar46 * 100.0,fVar47 * 100.0);
        plVar27[0x322] = CONCAT44(uStack_1e4,local_1e8);
        *(char *)(plVar27 + 0x31a) = (char)lVar12 + '\x01';
        lVar22 = *(longlong *)(param_1 + 0x898);
      }
    }
    else {
      if (lVar22 == 0) {
        lVar28 = 0;
      }
      else {
        lVar28 = *(longlong *)(lVar22 + 0x900);
      }
      if (lVar28 == 0) {
        local_2c0 = DAT_1468b5d98;
        local_2c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      else {
        local_2c0 = *(float *)(lVar28 + 0x1910) * 0.01;
        local_2c8 = CONCAT44(*(float *)(lVar28 + 0x190c) * 0.01,*(float *)(lVar28 + 0x1908) * 0.01);
      }
      *(undefined8 *)(param_1 + 0xa28) = local_2c8;
      *(float *)(param_1 + 0xa30) = local_2c0;
    }
    pauVar25 = (undefined1 (*) [12])FUN_14222dc90(lVar22,&local_298);
    FRotator::Quaternion(&DAT_1468b5da0,local_2a8);
    fVar47 = *(float *)(param_1 + 0xa30);
    fVar46 = *(float *)(param_1 + 0xa2c);
    fVar49 = *(float *)*(undefined1 (*) [12])(param_1 + 0xa28);
    fVar52 = *(float *)*pauVar25;
    uVar19 = local_2a8._0_4_;
    uVar16 = local_2a8._4_4_;
    fVar48 = fStack_2a0;
    fVar38 = fStack_29c;
    fVar51 = 0.0;
    fVar41 = *(float *)(*pauVar25 + 8);
    fVar44 = *(float *)(*pauVar25 + 4);
    auVar6 = *pauVar25;
    fStack_26c = 0.0;
    _local_278 = *pauVar25;
    fStack_29c = 0.0;
    _local_2a8 = *(undefined1 (*) [12])(param_1 + 0xa28);
    uVar20 = FUN_14238d0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x898) + 0x4c0),&local_1a8);
    fStack_14c = fStack_17c;
    fStack_150 = fStack_180;
    fStack_154 = fStack_184;
    local_158 = local_188;
    fVar57 = fRam0000000146864738;
    fVar55 = fRam0000000146864734;
    fVar50 = _DAT_146864730;
    auVar10._4_4_ = fStack_184;
    auVar10._0_4_ = local_188;
    auVar10._8_4_ = fStack_180;
    auVar10._12_4_ = fStack_17c;
    auVar32._12_4_ = 0;
    auVar32._0_12_ = auVar6;
    auVar32 = minps(auVar10,auVar32);
    auVar33._4_4_ = -(uint)(auVar32._4_4_ < fRam0000000146864794);
    auVar33._0_4_ = -(uint)(auVar32._0_4_ < _DAT_146864790);
    auVar33._8_4_ = -(uint)(auVar32._8_4_ < fRam0000000146864798);
    auVar33._12_4_ = -(uint)(auVar32._12_4_ < fRam000000014686479c);
    iVar21 = movmskps(uVar20,auVar33);
    if (iVar21 == 0) {
      fVar42 = local_198 * fVar52;
      fVar45 = fStack_194 * fVar44;
      fVar54 = fStack_190 * fVar41;
      fStack_18c = fStack_18c * 0.0;
      local_178 = CONCAT44((float)uVar19 * fStack_1a0 * fRam0000000146864774 + fStack_1a4 * fVar38 +
                           (float)uVar16 * fStack_19c * fRam0000000146864764 +
                           fVar48 * local_1a8 * fRam0000000146864754,
                           (float)uVar19 * fStack_19c * _DAT_146864770 + local_1a8 * fVar38 +
                           (float)uVar16 * fStack_1a0 * _DAT_146864760 +
                           fVar48 * fStack_1a4 * _DAT_146864750);
      uStack_170 = CONCAT44((float)uVar19 * local_1a8 * fRam000000014686477c + fStack_19c * fVar38 +
                            (float)uVar16 * fStack_1a4 * fRam000000014686476c +
                            fVar48 * fStack_1a0 * fRam000000014686475c,
                            (float)uVar19 * fStack_1a4 * fRam0000000146864778 + fStack_1a0 * fVar38
                            + (float)uVar16 * local_1a8 * fRam0000000146864768 +
                            fVar48 * fStack_19c * fRam0000000146864758);
      fVar50 = fVar54 * (float)uVar16 - fVar45 * fVar48;
      fVar55 = fVar42 * fVar48 - fVar54 * (float)uVar19;
      fVar57 = fVar45 * (float)uVar19 - fVar42 * (float)uVar16;
      fVar43 = fStack_18c * fVar38 - fStack_18c * fVar38;
      fVar50 = fVar50 + fVar50;
      fVar55 = fVar55 + fVar55;
      fVar57 = fVar57 + fVar57;
      fVar43 = fVar43 + fVar43;
      uStack_164._0_4_ =
           (fVar50 * fVar48 - fVar57 * (float)uVar19) + fVar38 * fVar55 + fVar45 + fVar46;
      local_168 = (undefined1  [4])
                  ((fVar57 * (float)uVar16 - fVar55 * fVar48) + fVar38 * fVar50 + fVar42 + fVar49);
      uStack_164._4_4_ =
           (fVar55 * (float)uVar19 - fVar50 * (float)uVar16) + fVar38 * fVar57 + fVar54 + fVar47;
      fStack_15c = (fVar43 * fVar38 - fVar43 * fVar38) + fVar38 * fVar43 + fStack_18c + 0.0;
      fVar50 = fVar52;
      fVar55 = fVar44;
      fVar57 = fVar41;
    }
    else {
      fVar46 = (float)uVar16 + (float)uVar16;
      fVar49 = fVar48 + fVar48;
      fVar77 = local_188 * fVar52;
      fVar78 = fStack_184 * fVar44;
      fVar79 = fStack_180 * fVar41;
      fVar51 = (float)uVar19 * ((float)uVar19 + (float)uVar19);
      fVar47 = ((float)uVar19 + (float)uVar19) * fVar38;
      fVar74 = (fVar49 * fVar38 + fVar46 * (float)uVar19) * (float)local_278._0_4_;
      fVar75 = (fVar47 + fVar49 * (float)uVar16) * (float)local_278._4_4_;
      fVar76 = (fVar46 * fVar38 + fVar49 * (float)uVar19) * fStack_270;
      fVar53 = (float)local_278._4_4_ * (fVar46 * (float)uVar19 - fVar49 * fVar38);
      fVar56 = fStack_270 * (fVar49 * (float)uVar16 - fVar47);
      fVar60 = (float)local_278._0_4_ * (fVar49 * (float)uVar19 - fVar46 * fVar38);
      fVar47 = (float)((uint)((_DAT_146864730 - (fVar48 * fVar49 + (float)uVar16 * fVar46)) *
                             (float)local_278._0_4_) & _DAT_146864740);
      fVar49 = (float)((uint)((fRam0000000146864734 - (fVar48 * fVar49 + fVar51)) *
                             (float)local_278._4_4_) & uRam0000000146864744);
      fVar42 = (float)((uint)((fRam0000000146864738 - ((float)uVar16 * fVar46 + fVar51)) *
                             fStack_270) & uRam0000000146864748);
      fVar45 = (float)((uint)((fRam000000014686473c - (fVar51 + fVar51)) * fStack_26c) &
                      uRam000000014686474c);
      fVar51 = fStack_1a4 + fStack_1a4;
      fVar43 = fStack_1a0 + fStack_1a0;
      fVar54 = local_1a8 * (local_1a8 + local_1a8);
      fVar46 = fStack_19c * (local_1a8 + local_1a8);
      fVar68 = (fStack_19c * fVar43 + local_1a8 * fVar51) * local_188;
      fVar69 = (fVar46 + fStack_1a4 * fVar43) * fStack_184;
      fVar70 = (fStack_19c * fVar51 + local_1a8 * fVar43) * fStack_180;
      fVar62 = fStack_184 * (local_1a8 * fVar51 - fStack_19c * fVar43);
      fVar63 = fStack_180 * (fStack_1a4 * fVar43 - fVar46);
      fVar64 = local_188 * (local_1a8 * fVar43 - fStack_19c * fVar51);
      fVar46 = (float)((uint)((_DAT_146864730 - (fStack_1a0 * fVar43 + fStack_1a4 * fVar51)) *
                             local_188) & _DAT_146864740);
      fVar43 = (float)((uint)((fRam0000000146864734 - (fStack_1a0 * fVar43 + fVar54)) * fStack_184)
                      & uRam0000000146864744);
      fVar51 = (float)((uint)((fRam0000000146864738 - (fStack_1a4 * fVar51 + fVar54)) * fStack_180)
                      & uRam0000000146864748);
      fVar54 = (float)((uint)((fRam000000014686473c - (fVar54 + fVar54)) * fStack_17c) &
                      uRam000000014686474c);
      local_228._0_4_ =
           fVar68 * fVar53 + fVar46 * fVar47 + fVar64 * fVar76 + fVar54 * (float)local_2a8._0_4_;
      local_228._4_4_ =
           fVar68 * fVar49 + fVar46 * fVar74 + fVar64 * fVar56 + fVar54 * (float)local_2a8._4_4_;
      uStack_220._0_4_ = fVar68 * fVar75 + fVar46 * fVar60 + fVar64 * fVar42 + fVar54 * fStack_2a0;
      uStack_220._4_4_ =
           fVar68 * fVar45 + fVar46 * fVar45 + fVar64 * fVar45 + fVar54 * fRam000000014686473c;
      local_218 = fVar43 * fVar53 + fVar62 * fVar47 + fVar69 * fVar76 +
                  fVar54 * (float)local_2a8._0_4_;
      fStack_214 = fVar43 * fVar49 + fVar62 * fVar74 + fVar69 * fVar56 +
                   fVar54 * (float)local_2a8._4_4_;
      fStack_210 = fVar43 * fVar75 + fVar62 * fVar60 + fVar69 * fVar42 + fVar54 * fStack_2a0;
      fStack_20c = fVar43 * fVar45 + fVar62 * fVar45 + fVar69 * fVar45 +
                   fVar54 * fRam000000014686473c;
      local_208 = fVar63 * fVar53 + fVar70 * fVar47 + fVar51 * fVar76 +
                  fVar54 * (float)local_2a8._0_4_;
      fStack_204 = fVar63 * fVar49 + fVar70 * fVar74 + fVar51 * fVar56 +
                   fVar54 * (float)local_2a8._4_4_;
      fStack_200 = fVar63 * fVar75 + fVar70 * fVar60 + fVar51 * fVar42 + fVar54 * fStack_2a0;
      fStack_1fc = fVar63 * fVar45 + fVar70 * fVar45 + fVar51 * fVar45 +
                   fVar54 * fRam000000014686473c;
      local_1f8 = fStack_194 * fVar53 + local_198 * fVar47 + fStack_190 * fVar76 +
                  fRam000000014686473c * (float)local_2a8._0_4_;
      fStack_1f4 = fStack_194 * fVar49 + local_198 * fVar74 + fStack_190 * fVar56 +
                   fRam000000014686473c * (float)local_2a8._4_4_;
      fStack_1f0 = fStack_194 * fVar75 + local_198 * fVar60 + fStack_190 * fVar42 +
                   fRam000000014686473c * fStack_2a0;
      fStack_1ec = fStack_194 * fVar45 + local_198 * fVar45 + fStack_190 * fVar45 +
                   fRam000000014686473c * fRam000000014686473c;
      FMatrix::RemoveScaling(&local_228);
      fVar47 = (float)(-(uint)(_DAT_146864790 <= fVar77) & (_DAT_146864780 ^ (uint)fVar50) ^
                      _DAT_146864780);
      fVar46 = (float)(-(uint)(fRam0000000146864794 <= fVar78) &
                       (uRam0000000146864784 ^ (uint)fVar55) ^ uRam0000000146864784);
      fVar49 = (float)(-(uint)(fRam0000000146864798 <= fVar79) &
                       (uRam0000000146864788 ^ (uint)fVar57) ^ uRam0000000146864788);
      local_228 = CONCAT44(local_228._4_4_ * fVar47,(float)local_228 * fVar47);
      fStack_214 = fStack_214 * fVar46;
      uStack_220 = CONCAT44(uStack_220._4_4_,(float)uStack_220 * fVar47);
      fStack_210 = fStack_210 * fVar46;
      local_218 = local_218 * fVar46;
      fStack_204 = fStack_204 * fVar49;
      fStack_200 = fStack_200 * fVar49;
      local_208 = local_208 * fVar49;
      FQuat::FQuat(&local_298,&local_228);
      local_2c8 = CONCAT44(local_2c8._4_4_,0x322bcc77);
      auVar39._0_4_ = local_298 * local_298 + fStack_290 * fStack_290;
      auVar39._4_4_ = fStack_294 * fStack_294 + fStack_28c * fStack_28c;
      auVar39._8_4_ = fStack_290 * fStack_290 + local_298 * local_298;
      auVar39._12_4_ = fStack_28c * fStack_28c + fStack_294 * fStack_294;
      fVar55 = auVar39._4_4_ + auVar39._0_4_;
      fVar57 = auVar39._8_4_ + auVar39._4_4_;
      fVar51 = auVar39._12_4_ + auVar39._8_4_;
      fVar43 = auVar39._0_4_ + auVar39._12_4_;
      auVar3._4_4_ = fVar57;
      auVar3._0_4_ = fVar55;
      auVar3._8_4_ = fVar51;
      auVar3._12_4_ = fVar43;
      auVar32 = rsqrtps(auVar39,auVar3);
      fVar47 = auVar32._0_4_;
      fVar46 = auVar32._4_4_;
      fVar49 = auVar32._8_4_;
      fVar50 = auVar32._12_4_;
      fVar47 = (_DAT_146864720 - fVar47 * fVar47 * fVar55 * _DAT_146864720) * fVar47 + fVar47;
      fVar46 = (fRam0000000146864724 - fVar46 * fVar46 * fVar57 * fRam0000000146864724) * fVar46 +
               fVar46;
      fVar49 = (fRam0000000146864728 - fVar49 * fVar49 * fVar51 * fRam0000000146864728) * fVar49 +
               fVar49;
      fVar50 = (fRam000000014686472c - fVar50 * fVar50 * fVar43 * fRam000000014686472c) * fVar50 +
               fVar50;
      uStack_164._0_4_ = fStack_1f4;
      local_168 = (undefined1  [4])local_1f8;
      uStack_164._4_4_ = fStack_1f0;
      fStack_15c = 0.0;
      local_178 = CONCAT44(((uint)(((fRam0000000146864724 -
                                    fVar46 * fVar46 * fVar57 * fRam0000000146864724) * fVar46 +
                                   fVar46) * fStack_294) ^ uRam0000000146864714) &
                           -(uint)(1e-08 <= fVar57) ^ uRam0000000146864714,
                           ((uint)(((_DAT_146864720 - fVar47 * fVar47 * fVar55 * _DAT_146864720) *
                                    fVar47 + fVar47) * local_298) ^ _DAT_146864710) &
                           -(uint)(1e-08 <= fVar55) ^ _DAT_146864710);
      uStack_170 = CONCAT44(((uint)(((fRam000000014686472c -
                                     fVar50 * fVar50 * fVar43 * fRam000000014686472c) * fVar50 +
                                    fVar50) * fStack_28c) ^ uRam000000014686471c) &
                            -(uint)(1e-08 <= fVar43) ^ uRam000000014686471c,
                            ((uint)(((fRam0000000146864728 -
                                     fVar49 * fVar49 * fVar51 * fRam0000000146864728) * fVar49 +
                                    fVar49) * fStack_290) ^ uRam0000000146864718) &
                            -(uint)(1e-08 <= fVar51) ^ uRam0000000146864718);
      fVar50 = (float)local_278._0_4_;
      fVar55 = (float)local_278._4_4_;
      fVar57 = fStack_270;
      fVar51 = fStack_26c;
      fVar49 = (float)local_2a8._0_4_;
      fVar46 = (float)local_2a8._4_4_;
      fVar47 = fStack_2a0;
    }
    fStack_14c = fStack_14c * 0.0;
    fStack_150 = fStack_150 * fVar41;
    fStack_154 = fStack_154 * fVar44;
    local_158 = local_158 * fVar52;
    puVar26 = (undefined8 *)FBoxSphereBounds::TransformBy(local_248,local_268,&local_178);
    uVar15 = uRam000000014686474c;
    uVar14 = uRam0000000146864748;
    uVar13 = uRam0000000146864744;
    uVar30 = _DAT_146864740;
    auVar11._4_4_ = fStack_184;
    auVar11._0_4_ = local_188;
    auVar11._8_4_ = fStack_180;
    auVar11._12_4_ = fStack_17c;
    uVar23 = puVar26[1];
    *(undefined8 *)(param_1 + 0xa40) = *puVar26;
    *(undefined8 *)(param_1 + 0xa48) = uVar23;
    *(undefined8 *)(param_1 + 0xa50) = puVar26[2];
    uVar20 = *(undefined4 *)(puVar26 + 3);
    *(undefined4 *)(param_1 + 0xa58) = uVar20;
    local_2a8._0_4_ = (uint)_DAT_146864730 & uVar30;
    local_2a8._4_4_ = (uint)fRam0000000146864734 & uVar13;
    fStack_2a0 = (float)((uint)fRam0000000146864738 & uVar14);
    fStack_29c = (float)((uint)fRam000000014686473c & uVar15);
    auVar34._4_4_ = local_2a8._4_4_;
    auVar34._0_4_ = local_2a8._0_4_;
    auVar34._8_4_ = fStack_2a0;
    auVar34._12_4_ = fStack_29c;
    auVar32 = minps(auVar34,auVar11);
    auVar35._4_4_ = -(uint)(auVar32._4_4_ < fRam0000000146864794);
    auVar35._0_4_ = -(uint)(auVar32._0_4_ < _DAT_146864790);
    auVar35._8_4_ = -(uint)(auVar32._8_4_ < fRam0000000146864798);
    auVar35._12_4_ = -(uint)(auVar32._12_4_ < fRam000000014686479c);
    iVar21 = movmskps(uVar20,auVar35);
    if (iVar21 == 0) {
      fVar63 = (float)local_2b8 * local_188;
      fVar64 = local_2b8._4_4_ * fStack_184;
      fVar68 = local_2b0 * fStack_180;
      fVar53 = fRam000000014686473c * local_1a8 * _DAT_146864770 + fStack_19c * 0.0 +
               fStack_1a4 * 0.0 * _DAT_146864760 + fStack_1a0 * 0.0 * _DAT_146864750;
      fVar56 = local_1a8 * 0.0 * fRam0000000146864774 + fStack_19c * 0.0 +
               fRam000000014686473c * fStack_1a4 * fRam0000000146864764 +
               fStack_1a0 * 0.0 * fRam0000000146864754;
      fVar60 = local_1a8 * 0.0 * fRam0000000146864778 + fStack_19c * 0.0 +
               fStack_1a4 * 0.0 * fRam0000000146864768 +
               fRam000000014686473c * fStack_1a0 * fRam0000000146864758;
      fVar62 = local_1a8 * 0.0 * fRam000000014686477c + fRam000000014686473c * fStack_19c +
               fStack_1a4 * 0.0 * fRam000000014686476c + fStack_1a0 * 0.0 * fRam000000014686475c;
      fVar52 = (float)local_2a8._0_4_ * local_188;
      fVar41 = (float)local_2a8._4_4_ * fStack_184;
      fVar44 = fStack_2a0 * fStack_180;
      fVar43 = fStack_29c * fStack_17c;
      fVar42 = fVar68 * fStack_1a4 - fVar64 * fStack_1a0;
      fVar45 = fVar63 * fStack_1a0 - fVar68 * local_1a8;
      fVar54 = fVar64 * local_1a8 - fVar63 * fStack_1a4;
      fVar42 = fVar42 + fVar42;
      fVar45 = fVar45 + fVar45;
      fVar54 = fVar54 + fVar54;
      local_198 = (fVar54 * fStack_1a4 - fVar45 * fStack_1a0) + fVar42 * fStack_19c + fVar63 +
                  local_198;
      fStack_194 = (fVar42 * fStack_1a0 - fVar54 * local_1a8) + fVar45 * fStack_19c + fVar64 +
                   fStack_194;
      fStack_190 = (fVar45 * local_1a8 - fVar42 * fStack_1a4) + fVar54 * fStack_19c + fVar68 +
                   fStack_190;
      uVar20 = 0;
    }
    else {
      fVar41 = fStack_1a4 + fStack_1a4;
      fVar44 = fStack_1a0 + fStack_1a0;
      local_278._4_4_ = (float)local_2a8._4_4_ * fStack_184;
      local_278._0_4_ = (float)local_2a8._0_4_ * local_188;
      fStack_270 = fStack_2a0 * fStack_180;
      fStack_26c = fStack_29c * fStack_17c;
      fVar43 = local_1a8 * (local_1a8 + local_1a8);
      fVar52 = fStack_19c * (local_1a8 + local_1a8);
      fVar75 = (fStack_19c * fVar44 + local_1a8 * fVar41) * local_188;
      fVar76 = (fVar52 + fStack_1a4 * fVar44) * fStack_184;
      fVar77 = (fStack_19c * fVar41 + local_1a8 * fVar44) * fStack_180;
      fVar63 = fStack_184 * (local_1a8 * fVar41 - fStack_19c * fVar44);
      fVar64 = fStack_180 * (fStack_1a4 * fVar44 - fVar52);
      fVar68 = local_188 * (local_1a8 * fVar44 - fStack_19c * fVar41);
      fVar52 = (float)((uint)((_DAT_146864730 - (fStack_1a0 * fVar44 + fStack_1a4 * fVar41)) *
                             local_188) & uVar30);
      fVar44 = (float)((uint)((fRam0000000146864734 - (fStack_1a0 * fVar44 + fVar43)) * fStack_184)
                      & uVar13);
      fVar42 = (float)((uint)((fRam0000000146864738 - (fStack_1a4 * fVar41 + fVar43)) * fStack_180)
                      & uVar14);
      fVar54 = (float)((uint)((fRam000000014686473c - (fVar43 + fVar43)) * fStack_17c) & uVar15);
      fVar69 = (fRam000000014686473c * 0.0 + 0.0) * (float)local_2a8._0_4_;
      fVar70 = (fRam000000014686473c * 0.0 + 0.0) * (float)local_2a8._4_4_;
      fVar74 = (fRam000000014686473c * 0.0 + 0.0) * fStack_2a0;
      fVar56 = (float)local_2a8._4_4_ * (0.0 - fRam000000014686473c * 0.0);
      fVar60 = fStack_2a0 * (0.0 - fRam000000014686473c * 0.0);
      fVar62 = (float)local_2a8._0_4_ * (0.0 - fRam000000014686473c * 0.0);
      fVar41 = (float)((uint)((_DAT_146864730 - 0.0) * (float)local_2a8._0_4_) & _DAT_146864740);
      fVar43 = (float)((uint)((fRam0000000146864734 - 0.0) * (float)local_2a8._4_4_) &
                      uRam0000000146864744);
      fVar45 = (float)((uint)((fRam0000000146864738 - 0.0) * fStack_2a0) & uRam0000000146864748);
      fVar53 = (float)((uint)((fRam000000014686473c - 0.0) * fStack_29c) & uRam000000014686474c);
      local_228._0_4_ = fVar69 * fVar63 + fVar41 * fVar52 + fVar62 * fVar77 + fVar53 * local_198;
      local_228._4_4_ = fVar69 * fVar44 + fVar41 * fVar75 + fVar62 * fVar64 + fVar53 * fStack_194;
      uStack_220._0_4_ = fVar69 * fVar76 + fVar41 * fVar68 + fVar62 * fVar42 + fVar53 * fStack_190;
      uStack_220._4_4_ =
           fVar69 * fVar54 + fVar41 * fVar54 + fVar62 * fVar54 + fVar53 * fRam000000014686473c;
      local_218 = fVar43 * fVar63 + fVar56 * fVar52 + fVar70 * fVar77 + fVar53 * local_198;
      fStack_214 = fVar43 * fVar44 + fVar56 * fVar75 + fVar70 * fVar64 + fVar53 * fStack_194;
      fStack_210 = fVar43 * fVar76 + fVar56 * fVar68 + fVar70 * fVar42 + fVar53 * fStack_190;
      fStack_20c = fVar43 * fVar54 + fVar56 * fVar54 + fVar70 * fVar54 +
                   fVar53 * fRam000000014686473c;
      local_208 = fVar60 * fVar63 + fVar74 * fVar52 + fVar45 * fVar77 + fVar53 * local_198;
      fStack_204 = fVar60 * fVar44 + fVar74 * fVar75 + fVar45 * fVar64 + fVar53 * fStack_194;
      fStack_200 = fVar60 * fVar76 + fVar74 * fVar68 + fVar45 * fVar42 + fVar53 * fStack_190;
      fStack_1fc = fVar60 * fVar54 + fVar74 * fVar54 + fVar45 * fVar54 +
                   fVar53 * fRam000000014686473c;
      local_1f8 = local_2b8._4_4_ * fVar63 + (float)local_2b8 * fVar52 + local_2b0 * fVar77 +
                  fRam000000014686473c * local_198;
      fStack_1f4 = local_2b8._4_4_ * fVar44 + (float)local_2b8 * fVar75 + local_2b0 * fVar64 +
                   fRam000000014686473c * fStack_194;
      fStack_1f0 = local_2b8._4_4_ * fVar76 + (float)local_2b8 * fVar68 + local_2b0 * fVar42 +
                   fRam000000014686473c * fStack_190;
      fStack_1ec = local_2b8._4_4_ * fVar54 + (float)local_2b8 * fVar54 + local_2b0 * fVar54 +
                   fRam000000014686473c * fRam000000014686473c;
      FMatrix::RemoveScaling(&local_228);
      fVar52 = (float)local_278._0_4_;
      fVar41 = (float)local_278._4_4_;
      fVar44 = fStack_270;
      fVar43 = fStack_26c;
      fVar42 = (float)(-(uint)(_DAT_146864790 <= (float)local_278._0_4_) &
                       (_DAT_146864780 ^ (uint)_DAT_146864730) ^ _DAT_146864780);
      fVar45 = (float)(-(uint)(fRam0000000146864794 <= (float)local_278._4_4_) &
                       (uRam0000000146864784 ^ (uint)fRam0000000146864734) ^ uRam0000000146864784);
      fVar54 = (float)(-(uint)(fRam0000000146864798 <= fStack_270) &
                       (uRam0000000146864788 ^ (uint)fRam0000000146864738) ^ uRam0000000146864788);
      uStack_220 = CONCAT44(uStack_220._4_4_,(float)uStack_220 * fVar42);
      fStack_210 = fStack_210 * fVar45;
      local_228 = CONCAT44(local_228._4_4_ * fVar42,(float)local_228 * fVar42);
      fStack_214 = fStack_214 * fVar45;
      local_218 = local_218 * fVar45;
      fStack_200 = fStack_200 * fVar54;
      local_208 = local_208 * fVar54;
      fStack_204 = fStack_204 * fVar54;
      uVar20 = FQuat::FQuat(local_2a8,&local_228);
      local_2c8 = CONCAT44(local_2c8._4_4_,0x322bcc77);
      auVar40._0_4_ = (float)local_2a8._0_4_ * (float)local_2a8._0_4_ + fStack_2a0 * fStack_2a0;
      auVar40._4_4_ = (float)local_2a8._4_4_ * (float)local_2a8._4_4_ + fStack_29c * fStack_29c;
      auVar40._8_4_ = fStack_2a0 * fStack_2a0 + (float)local_2a8._0_4_ * (float)local_2a8._0_4_;
      auVar40._12_4_ = fStack_29c * fStack_29c + (float)local_2a8._4_4_ * (float)local_2a8._4_4_;
      fVar53 = auVar40._4_4_ + auVar40._0_4_;
      fVar56 = auVar40._8_4_ + auVar40._4_4_;
      fVar60 = auVar40._12_4_ + auVar40._8_4_;
      fVar63 = auVar40._0_4_ + auVar40._12_4_;
      auVar4._4_4_ = fVar56;
      auVar4._0_4_ = fVar53;
      auVar4._8_4_ = fVar60;
      auVar4._12_4_ = fVar63;
      auVar32 = rsqrtps(auVar40,auVar4);
      fVar42 = auVar32._0_4_;
      fVar45 = auVar32._4_4_;
      fVar54 = auVar32._8_4_;
      fVar62 = auVar32._12_4_;
      fVar42 = (_DAT_146864720 - fVar42 * fVar42 * fVar53 * _DAT_146864720) * fVar42 + fVar42;
      fVar45 = (fRam0000000146864724 - fVar45 * fVar45 * fVar56 * fRam0000000146864724) * fVar45 +
               fVar45;
      fVar54 = (fRam0000000146864728 - fVar54 * fVar54 * fVar60 * fRam0000000146864728) * fVar54 +
               fVar54;
      fVar62 = (fRam000000014686472c - fVar62 * fVar62 * fVar63 * fRam000000014686472c) * fVar62 +
               fVar62;
      fVar53 = (float)(((uint)(((_DAT_146864720 - fVar42 * fVar42 * fVar53 * _DAT_146864720) *
                                fVar42 + fVar42) * (float)local_2a8._0_4_) ^ _DAT_146864710) &
                       -(uint)(1e-08 <= fVar53) ^ _DAT_146864710);
      fVar56 = (float)(((uint)(((fRam0000000146864724 -
                                fVar45 * fVar45 * fVar56 * fRam0000000146864724) * fVar45 + fVar45)
                              * (float)local_2a8._4_4_) ^ uRam0000000146864714) &
                       -(uint)(1e-08 <= fVar56) ^ uRam0000000146864714);
      fVar60 = (float)(((uint)(((fRam0000000146864728 -
                                fVar54 * fVar54 * fVar60 * fRam0000000146864728) * fVar54 + fVar54)
                              * fStack_2a0) ^ uRam0000000146864718) & -(uint)(1e-08 <= fVar60) ^
                      uRam0000000146864718);
      fVar62 = (float)(((uint)(((fRam000000014686472c -
                                fVar62 * fVar62 * fVar63 * fRam000000014686472c) * fVar62 + fVar62)
                              * fStack_29c) ^ uRam000000014686471c) & -(uint)(1e-08 <= fVar63) ^
                      uRam000000014686471c);
      local_198 = local_1f8;
      fStack_194 = fStack_1f4;
      fStack_190 = fStack_1f0;
    }
    fVar68 = fRam0000000146864798;
    fVar64 = fRam0000000146864794;
    fVar63 = _DAT_146864790;
    fVar54 = fRam0000000146864738;
    fVar45 = fRam0000000146864734;
    fVar42 = _DAT_146864730;
    auVar36._4_4_ = fVar41;
    auVar36._0_4_ = fVar52;
    auVar36._8_4_ = fVar44;
    auVar36._12_4_ = fVar43;
    auVar5._4_4_ = fVar55;
    auVar5._0_4_ = fVar50;
    auVar5._8_4_ = fVar57;
    auVar5._12_4_ = fVar51;
    auVar32 = minps(auVar36,auVar5);
    auVar37._4_4_ = -(uint)(auVar32._4_4_ < fRam0000000146864794);
    auVar37._0_4_ = -(uint)(auVar32._0_4_ < _DAT_146864790);
    auVar37._8_4_ = -(uint)(auVar32._8_4_ < fRam0000000146864798);
    auVar37._12_4_ = -(uint)(auVar32._12_4_ < fRam000000014686479c);
    iVar21 = movmskps(uVar20,auVar37);
    if (iVar21 == 0) {
      local_198 = local_198 * fVar50;
      fStack_194 = fStack_194 * fVar55;
      fStack_190 = fStack_190 * fVar57;
      fVar52 = fStack_190 * (float)uVar16 - fStack_194 * fVar48;
      fVar41 = local_198 * fVar48 - fStack_190 * (float)uVar19;
      fVar44 = fStack_194 * (float)uVar19 - local_198 * (float)uVar16;
      fVar52 = fVar52 + fVar52;
      fVar41 = fVar41 + fVar41;
      fVar44 = fVar44 + fVar44;
      fVar49 = (fVar44 * (float)uVar16 - fVar41 * fVar48) + fVar38 * fVar52 + local_198 + fVar49;
      fVar46 = (fVar52 * fVar48 - fVar44 * (float)uVar19) + fVar38 * fVar41 + fStack_194 + fVar46;
      local_2b0 = (fVar41 * (float)uVar19 - fVar52 * (float)uVar16) + fVar38 * fVar44 + fStack_190 +
                  fVar47;
    }
    else {
      fVar69 = (float)uVar16 + (float)uVar16;
      fVar70 = fVar48 + fVar48;
      fVar74 = (float)uVar19 * ((float)uVar19 + (float)uVar19);
      fVar75 = fVar38 * ((float)uVar19 + (float)uVar19);
      fVar71 = (fVar38 * fVar70 + (float)uVar19 * fVar69) * fVar50;
      fVar72 = (fVar75 + (float)uVar16 * fVar70) * fVar55;
      fVar73 = (fVar38 * fVar69 + (float)uVar19 * fVar70) * fVar57;
      fVar78 = fVar55 * ((float)uVar19 * fVar69 - fVar38 * fVar70);
      fVar58 = fVar57 * ((float)uVar16 * fVar70 - fVar75);
      fVar61 = fVar50 * ((float)uVar19 * fVar70 - fVar38 * fVar69);
      fVar75 = fVar56 + fVar56;
      fVar76 = fVar60 + fVar60;
      fVar38 = (float)((uint)((_DAT_146864730 - (fVar48 * fVar70 + (float)uVar16 * fVar69)) * fVar50
                             ) & _DAT_146864740);
      fVar70 = (float)((uint)((fRam0000000146864734 - (fVar48 * fVar70 + fVar74)) * fVar55) &
                      uRam0000000146864744);
      fVar69 = (float)((uint)((fRam0000000146864738 - ((float)uVar16 * fVar69 + fVar74)) * fVar57) &
                      uRam0000000146864748);
      fVar74 = (float)((uint)((fRam000000014686473c - (fVar74 + fVar74)) * fVar51) &
                      uRam000000014686474c);
      fVar77 = fVar53 * (fVar53 + fVar53);
      fVar48 = (fVar53 + fVar53) * fVar62;
      fVar65 = (fVar76 * fVar62 + fVar75 * fVar53) * fVar52;
      fVar66 = (fVar48 + fVar76 * fVar56) * fVar41;
      fVar67 = (fVar75 * fVar62 + fVar76 * fVar53) * fVar44;
      fVar79 = fVar41 * (fVar75 * fVar53 - fVar76 * fVar62);
      fVar59 = fVar44 * (fVar76 * fVar56 - fVar48);
      fVar62 = fVar52 * (fVar76 * fVar53 - fVar75 * fVar62);
      fVar48 = (float)((uint)((_DAT_146864730 - (fVar60 * fVar76 + fVar56 * fVar75)) * fVar52) &
                      _DAT_146864740);
      fVar51 = (float)((uint)((fRam0000000146864734 - (fVar60 * fVar76 + fVar77)) * fVar41) &
                      uRam0000000146864744);
      fVar53 = (float)((uint)((fRam0000000146864738 - (fVar56 * fVar75 + fVar77)) * fVar44) &
                      uRam0000000146864748);
      fVar43 = (float)((uint)((fRam000000014686473c - (fVar77 + fVar77)) * fVar43) &
                      uRam000000014686474c);
      local_228._0_4_ = fVar65 * fVar78 + fVar48 * fVar38 + fVar62 * fVar73 + fVar43 * fVar49;
      local_228._4_4_ = fVar65 * fVar70 + fVar48 * fVar71 + fVar62 * fVar58 + fVar43 * fVar46;
      uStack_220._0_4_ = fVar65 * fVar72 + fVar48 * fVar61 + fVar62 * fVar69 + fVar43 * fVar47;
      uStack_220._4_4_ =
           fVar65 * fVar74 + fVar48 * fVar74 + fVar62 * fVar74 + fVar43 * fRam000000014686473c;
      local_218 = fVar51 * fVar78 + fVar79 * fVar38 + fVar66 * fVar73 + fVar43 * fVar49;
      fStack_214 = fVar51 * fVar70 + fVar79 * fVar71 + fVar66 * fVar58 + fVar43 * fVar46;
      fStack_210 = fVar51 * fVar72 + fVar79 * fVar61 + fVar66 * fVar69 + fVar43 * fVar47;
      fStack_20c = fVar51 * fVar74 + fVar79 * fVar74 + fVar66 * fVar74 +
                   fVar43 * fRam000000014686473c;
      local_208 = fVar59 * fVar78 + fVar67 * fVar38 + fVar53 * fVar73 + fVar43 * fVar49;
      fStack_204 = fVar59 * fVar70 + fVar67 * fVar71 + fVar53 * fVar58 + fVar43 * fVar46;
      fStack_200 = fVar59 * fVar72 + fVar67 * fVar61 + fVar53 * fVar69 + fVar43 * fVar47;
      fStack_1fc = fVar59 * fVar74 + fVar67 * fVar74 + fVar53 * fVar74 +
                   fVar43 * fRam000000014686473c;
      local_1f8 = fStack_194 * fVar78 + local_198 * fVar38 + fStack_190 * fVar73 +
                  fRam000000014686473c * fVar49;
      fStack_1f4 = fStack_194 * fVar70 + local_198 * fVar71 + fStack_190 * fVar58 +
                   fRam000000014686473c * fVar46;
      fStack_1f0 = fStack_194 * fVar72 + local_198 * fVar61 + fStack_190 * fVar69 +
                   fRam000000014686473c * fVar47;
      fStack_1ec = fStack_194 * fVar74 + local_198 * fVar74 + fStack_190 * fVar74 +
                   fRam000000014686473c * fRam000000014686473c;
      FMatrix::RemoveScaling(&local_228);
      fVar47 = (float)(-(uint)(fVar63 <= fVar52 * fVar50) & (_DAT_146864780 ^ (uint)fVar42) ^
                      _DAT_146864780);
      fVar46 = (float)(-(uint)(fVar64 <= fVar41 * fVar55) & (uRam0000000146864784 ^ (uint)fVar45) ^
                      uRam0000000146864784);
      fVar49 = (float)(-(uint)(fVar68 <= fVar44 * fVar57) & (uRam0000000146864788 ^ (uint)fVar54) ^
                      uRam0000000146864788);
      local_228 = CONCAT44(local_228._4_4_ * fVar47,(float)local_228 * fVar47);
      uStack_220 = CONCAT44(uStack_220._4_4_,(float)uStack_220 * fVar47);
      fStack_214 = fStack_214 * fVar46;
      fStack_210 = fStack_210 * fVar46;
      local_218 = local_218 * fVar46;
      fStack_204 = fStack_204 * fVar49;
      fStack_200 = fStack_200 * fVar49;
      local_208 = local_208 * fVar49;
      FQuat::FQuat(local_2a8,&local_228);
      local_2c8 = CONCAT44(local_2c8._4_4_,0x322bcc77);
      fVar49 = local_1f8;
      fVar46 = fStack_1f4;
      local_2b0 = fStack_1f0;
    }
    *(ulonglong *)(param_1 + 0xa34) = CONCAT44(fVar46,fVar49);
    *(float *)(param_1 + 0xa3c) = local_2b0;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1409b3e30 FUN_1409b3e30 body=34 status=ok
// SIG undefined FUN_1409b3e30(void)

void FUN_1409b3e30(longlong *param_1)

{
  UUserWidget::CancelLatentActions();
                    /* WARNING: Could not recover jumptable at 0x0001409b3e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c8))(param_1,1);
  return;
}



// FUNCTION 1409b3e60 FUN_1409b3e60 body=43 status=ok
// SIG undefined FUN_1409b3e60(void)

void FUN_1409b3e60(longlong *param_1)

{
  UUserWidget::CancelLatentActions();
  (**(code **)(*param_1 + 0x3c8))(param_1,1);
  FUN_1409ac580(param_1,0);
  return;
}



// FUNCTION 1409b3e90 FUN_1409b3e90 body=43 status=ok
// SIG undefined FUN_1409b3e90(void)

void FUN_1409b3e90(longlong *param_1)

{
  UUserWidget::CancelLatentActions();
  (**(code **)(*param_1 + 0x3c8))(param_1,1);
  FUN_1409ac480(param_1,0);
  return;
}



// FUNCTION 1409b3ec0 FUN_1409b3ec0 body=68 status=ok
// SIG undefined FUN_1409b3ec0(void)

void FUN_1409b3ec0(longlong *param_1)

{
  UUserWidget::CancelLatentActions();
  (**(code **)(*param_1 + 0x3c8))(param_1,1);
  if (param_1[0x4b] != 0) {
    FUN_141400260(param_1[0x4b],1);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x264) = 0xffffffff;
  return;
}



// FUNCTION 1409b3f10 FUN_1409b3f10 body=93 status=ok
// SIG undefined FUN_1409b3f10(void)

void FUN_1409b3f10(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xa60) == '\0') {
    *(undefined1 *)(param_1 + 0xa61) = 1;
    if ((*(longlong *)(param_1 + 0x898) != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x898) + 0x4d0), plVar1 != (longlong *)0x0))
    {
      (**(code **)(*plVar1 + 0x638))(plVar1,*(undefined4 *)(param_1 + 0xa64));
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1409b3f70 FUN_1409b3f70 body=455 status=ok
// SIG undefined FUN_1409b3f70(void)

void FUN_1409b3f70(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 local_res10 [8];
  longlong local_28 [4];
  
  if (DAT_146864d68 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              )) goto LAB_1409b3fae;
  _Init_thread_header(&DAT_146864d68);
  if (DAT_146864d68 != -1) goto LAB_1409b3fae;
  local_28[0] = 0;
  local_28[1] = 0x4b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy
            (local_28[0],
             L"/Game/GameData/ResourcePools/HealthTypes/HealthType_Flesh.HealthType_Flesh",0x96);
  uVar4 = FUN_142e5f7c0();
  puVar5 = (undefined8 *)FName::FName(local_res10,L"HealthType_Flesh",1);
  lVar6 = StaticFindObjectFastExplicit(uVar4,*puVar5,local_28,0,0);
  if (lVar6 == 0) {
LAB_1409b4116:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_142e5f7c0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1409b4116;
  }
  DAT_146864d60 = lVar6;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  _Init_thread_footer(&DAT_146864d68);
LAB_1409b3fae:
  if ((param_2 != 0) && (DAT_146864d5c == '\0')) {
    DAT_146864d5c = 1;
    fVar8 = (float)FUN_142d19d70(param_2,DAT_146864d60);
    if (*(longlong *)(param_1 + 0x3b8) != 0) {
      cVar3 = FUN_140b83580();
      if (((cVar3 != '\0') && ((*(byte *)(param_1 + 0x3b0) & 0x20) != 0)) && (0.0 < fVar8)) {
        uVar1 = *(undefined1 *)(param_1 + 0x3c0);
        *(undefined1 *)(param_1 + 0x3c0) = 1;
        FUN_1413dd540(param_1,fVar8,*(undefined8 *)(param_2 + 0x28));
        *(undefined1 *)(param_1 + 0x3c0) = uVar1;
      }
    }
    DAT_146864d5c = '\0';
  }
  return;
}


