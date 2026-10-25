// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b7fa00 Find body=107 status=ok
// SIG undefined Find(void)

longlong TArray<FVector,FDefaultAllocator>::Find(undefined8 *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)*param_1;
  if (pfVar1 != pfVar1 + (longlong)*(int *)(param_1 + 1) * 3) {
    pfVar2 = pfVar1;
    do {
      if (((*param_2 == *pfVar2) && (param_2[1] == pfVar2[1])) && (param_2[2] == pfVar2[2])) {
        return ((longlong)pfVar2 - (longlong)pfVar1) / 0xc;
      }
      pfVar2 = pfVar2 + 3;
    } while (pfVar2 != pfVar1 + (longlong)*(int *)(param_1 + 1) * 3);
  }
  return 0xffffffff;
}



// FUNCTION 140b7fa70 FUN_140b7fa70 body=164 status=ok
// SIG undefined FUN_140b7fa70(void)

undefined8 FUN_140b7fa70(undefined8 param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float *local_res18 [2];
  undefined8 *local_18;
  undefined8 local_10;
  
  uVar2 = 0;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  FUN_140b80ed0(param_1,0,&local_18);
  puVar1 = local_18;
  if ((int)local_10 != 0) {
    if ((1 < (int)local_10) &&
       (((DAT_146297a90 != *param_2 || (DAT_146297a94 != param_2[1])) ||
        (DAT_146297a98 != param_2[2])))) {
      local_res18[0] = param_2;
      FUN_140b78c90(local_18,(longlong)(int)local_10,(ulonglong)param_2 & 0xff,local_res18);
    }
    uVar2 = *puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(puVar1);
  }
  return uVar2;
}



// FUNCTION 140b7fb20 FUN_140b7fb20 body=575 status=ok
// SIG undefined FUN_140b7fb20(void)

ulonglong FUN_140b7fb20(float *param_1,longlong *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float *local_res10;
  ulonglong *local_48;
  undefined8 local_40;
  ulonglong *local_38;
  undefined8 local_30;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  uVar10 = 0;
  local_48 = (ulonglong *)0x0;
  local_40 = 0;
  uVar6 = FUN_1407e27e0();
  lVar7 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
  if (lVar7 == 0) {
    lVar7 = UUGRichTextBlock::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar7 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140b7fcd2;
    }
    local_38 = (ulonglong *)0x0;
    local_30 = 0;
    uVar6 = (**(code **)(*param_2 + 0x148))(param_2);
    FUN_140b80ed0(uVar6,0,&local_38);
    puVar4 = local_38;
    uVar11 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
    if (local_38 + (int)local_30 < local_38) {
      uVar11 = uVar10;
    }
    uVar8 = uVar10;
    puVar9 = local_38;
    if (uVar11 != 0) {
      do {
        uVar3 = local_40;
        lVar7 = (longlong)(int)local_40;
        uVar1 = *puVar9;
        iVar5 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
        if (local_40._4_4_ < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_48,uVar3 & 0xffffffff);
        }
        uVar8 = uVar8 + 1;
        local_48[lVar7] = uVar1;
        puVar9 = puVar9 + 1;
      } while (uVar8 != uVar11);
    }
    if (puVar4 != (ulonglong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    FUN_1407c7b00(lVar7,&local_48,1);
  }
LAB_140b7fcd2:
  if ((int)local_40 != 0) {
    if (1 < (int)local_40) {
      if (((DAT_146297a90 == *param_1) && (DAT_146297a94 == param_1[1])) &&
         (DAT_146297a98 == param_1[2])) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_res10 = param_1;
        FUN_140b78c90(local_48,(longlong)(int)local_40,(ulonglong)param_1 & 0xff,&local_res10);
      }
    }
    uVar10 = *local_48;
  }
  if (local_48 != (ulonglong *)0x0) {
    FMemory::Free();
  }
  return uVar10;
}



// FUNCTION 140b7fd60 FUN_140b7fd60 body=164 status=ok
// SIG undefined FUN_140b7fd60(void)

undefined8 FUN_140b7fd60(undefined8 param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float *local_res18 [2];
  undefined8 *local_18;
  undefined8 local_10;
  
  uVar2 = 0;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  FUN_140b80ed0(param_1,0,&local_18);
  puVar1 = local_18;
  if ((int)local_10 != 0) {
    if ((1 < (int)local_10) &&
       (((DAT_146297a90 != *param_2 || (DAT_146297a94 != param_2[1])) ||
        (DAT_146297a98 != param_2[2])))) {
      local_res18[0] = param_2;
      FUN_140b78f10(local_18,(longlong)(int)local_10,(ulonglong)param_2 & 0xff,local_res18);
    }
    uVar2 = *puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(puVar1);
  }
  return uVar2;
}



// FUNCTION 140b7fe10 FUN_140b7fe10 body=98 status=ok
// SIG undefined FUN_140b7fe10(void)

longlong FUN_140b7fe10(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x668))(), lVar2 != 0)) {
    lVar3 = FUN_1413e48b0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar2 + 0x748) != 0)) {
      return *(longlong *)(lVar2 + 0x748);
    }
  }
  return 0;
}



// FUNCTION 140b7fe80 FUN_140b7fe80 body=275 status=ok
// SIG undefined FUN_140b7fe80(void)

void FUN_140b7fe80(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_res8;
  longlong *local_18;
  int local_10;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    lVar3 = FUN_140b823d0(param_1);
    UWorld::GetPlayerControllerIterator(lVar2,&local_18);
    while( true ) {
      if ((local_10 < 0) || ((int)local_18[1] <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar2 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (lVar2 != 0) {
        lVar4 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar2 != lVar3)) {
          local_res8 = lVar2;
          if (*(int *)(param_2 + 8) == 0) {
LAB_140b7ff63:
            uVar5 = 0;
          }
          else {
            plVar6 = (longlong *)param_2[6];
            if ((longlong *)param_2[6] == (longlong *)0x0) {
              plVar6 = param_2 + 2;
            }
            if (plVar6 == (longlong *)0x0) goto LAB_140b7ff63;
            uVar5 = (**(code **)(*plVar6 + 8))();
          }
          (*(code *)*param_2)(uVar5,&local_res8);
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140b7ffa0 FUN_140b7ffa0 body=278 status=ok
// SIG undefined FUN_140b7ffa0(void)

int FUN_140b7ffa0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong local_res20;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined1 local_10 [8];
  
  FTimespan::Assign(&local_20,param_2,0,0,0,0);
  FTimespan::Assign(&local_28,0,0x11,0,0,0);
  plVar2 = (longlong *)FDateTime::UtcNow(local_10);
  local_res20 = (*plVar2 - local_28) + local_20;
  iVar1 = FDateTime::GetMonth(&local_res20);
  if (iVar1 - 3U < 9) {
    FTimespan::Assign(&local_20,0,1,0,0,0);
    local_res20 = local_res20 + local_20;
  }
  FDateTime::FDateTime(&local_18,1999,2,0x12,0xc,0,0,0);
  return (int)((double)(local_res20 / 864000000000) - (double)(local_18 / 864000000000)) / 7;
}



// FUNCTION 140b800c0 FUN_140b800c0 body=19 status=ok
// SIG undefined FUN_140b800c0(void)

void FUN_140b800c0(void)

{
  undefined1 local_18 [24];
  
  FGuid::NewGuid(local_18);
  return;
}



// FUNCTION 140b800e0 FUN_140b800e0 body=80 status=ok
// SIG undefined FUN_140b800e0(void)

undefined8 *
FUN_140b800e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_140c10df0(param_2,param_3,param_3,param_5,param_1,0);
  return param_1;
}



// FUNCTION 140b80130 FUN_140b80130 body=31 status=ok
// SIG undefined FUN_140b80130(void)

void FUN_140b80130(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c12480();
  if (lVar1 != 0) {
    FBufferReaderBase::Tell(lVar1);
    return;
  }
  return;
}



// FUNCTION 140b802b0 GetVoiceInterface body=250 status=ok
// SIG undefined GetVoiceInterface(void)

undefined8 * Online::GetVoiceInterface(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x68))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140b803b0 FUN_140b803b0 body=140 status=ok
// SIG undefined FUN_140b803b0(void)

longlong FUN_140b803b0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      while (lVar4 = *param_1 + (longlong)iVar1 * 0x18,
            *(longlong *)(*param_1 + (longlong)iVar1 * 0x18) != param_2) {
        iVar1 = *(int *)(lVar4 + 0x10);
        if (iVar1 == -1) {
          return 0;
        }
      }
      if (iVar1 != -1) goto LAB_140b80430;
    }
  }
  lVar4 = 0;
LAB_140b80430:
  lVar3 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 140b80440 FUN_140b80440 body=487 status=ok
// SIG undefined FUN_140b80440(void)

longlong * FUN_140b80440(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar7 = *(longlong **)(param_1 + 0x1088);
  uVar6 = (longlong)*(int *)(param_1 + 0x1090) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x1090) < plVar7) {
    uVar6 = uVar5;
  }
  uVar8 = uVar5;
  if (uVar6 != 0) {
    do {
      lVar1 = *plVar7;
      if (lVar1 != 0) {
        lVar4 = *(longlong *)(lVar1 + 0x2e8);
        lVar1 = lVar4 + (longlong)*(int *)(lVar1 + 0x2f0) * 0x28;
        for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
          iVar2 = FText::CompareTo(param_3,lVar4,0);
          if (iVar2 == 0) {
            if (lVar4 != 0) {
              iVar2 = *(int *)(lVar4 + 0x20);
              if (iVar2 != 0) {
                iVar3 = (int)param_2[1];
                if (*(int *)((longlong)param_2 + 0xc) < iVar3 + iVar2) {
                  TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
                  iVar3 = (int)param_2[1];
                }
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*param_2 + (longlong)iVar3 * 8),*(void **)(lVar4 + 0x18),
                           (longlong)iVar2 << 3);
                *(int *)(param_2 + 1) = (int)param_2[1] + iVar2;
              }
            }
            break;
          }
        }
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar6);
  }
  plVar7 = *(longlong **)(param_1 + 0x1098);
  uVar6 = (longlong)*(int *)(param_1 + 0x10a0) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x10a0) < plVar7) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      lVar4 = *(longlong *)(*plVar7 + 0x1f0);
      lVar1 = lVar4 + (longlong)*(int *)(*plVar7 + 0x1f8) * 0x28;
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
        iVar2 = FText::CompareTo(param_3,lVar4,0);
        if (iVar2 == 0) {
          if (lVar4 != 0) {
            iVar2 = *(int *)(lVar4 + 0x20);
            if (iVar2 != 0) {
              iVar3 = (int)param_2[1];
              if (*(int *)((longlong)param_2 + 0xc) < iVar3 + iVar2) {
                TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
                iVar3 = (int)param_2[1];
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*param_2 + (longlong)iVar3 * 8),*(void **)(lVar4 + 0x18),
                         (longlong)iVar2 << 3);
              *(int *)(param_2 + 1) = (int)param_2[1] + iVar2;
            }
          }
          break;
        }
      }
      plVar7 = plVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return param_2;
}



// FUNCTION 140b80630 FUN_140b80630 body=487 status=ok
// SIG undefined FUN_140b80630(void)

longlong * FUN_140b80630(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar7 = *(longlong **)(param_1 + 0x1088);
  uVar6 = (longlong)*(int *)(param_1 + 0x1090) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x1090) < plVar7) {
    uVar6 = uVar5;
  }
  uVar8 = uVar5;
  if (uVar6 != 0) {
    do {
      lVar1 = *plVar7;
      if (lVar1 != 0) {
        lVar4 = *(longlong *)(lVar1 + 0x2d8);
        lVar1 = lVar4 + (longlong)*(int *)(lVar1 + 0x2e0) * 0x28;
        for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
          iVar2 = FText::CompareTo(param_3,lVar4,0);
          if (iVar2 == 0) {
            if (lVar4 != 0) {
              iVar2 = *(int *)(lVar4 + 0x20);
              if (iVar2 != 0) {
                iVar3 = (int)param_2[1];
                if (*(int *)((longlong)param_2 + 0xc) < iVar3 + iVar2) {
                  TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
                  iVar3 = (int)param_2[1];
                }
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*param_2 + (longlong)iVar3 * 8),*(void **)(lVar4 + 0x18),
                           (longlong)iVar2 << 3);
                *(int *)(param_2 + 1) = (int)param_2[1] + iVar2;
              }
            }
            break;
          }
        }
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar6);
  }
  plVar7 = *(longlong **)(param_1 + 0x1098);
  uVar6 = (longlong)*(int *)(param_1 + 0x10a0) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x10a0) < plVar7) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      lVar4 = *(longlong *)(*plVar7 + 0x1e0);
      lVar1 = lVar4 + (longlong)*(int *)(*plVar7 + 0x1e8) * 0x28;
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
        iVar2 = FText::CompareTo(param_3,lVar4,0);
        if (iVar2 == 0) {
          if (lVar4 != 0) {
            iVar2 = *(int *)(lVar4 + 0x20);
            if (iVar2 != 0) {
              iVar3 = (int)param_2[1];
              if (*(int *)((longlong)param_2 + 0xc) < iVar3 + iVar2) {
                TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
                iVar3 = (int)param_2[1];
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*param_2 + (longlong)iVar3 * 8),*(void **)(lVar4 + 0x18),
                         (longlong)iVar2 << 3);
              *(int *)(param_2 + 1) = (int)param_2[1] + iVar2;
            }
          }
          break;
        }
      }
      plVar7 = plVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return param_2;
}



// FUNCTION 140b80820 FUN_140b80820 body=625 status=ok
// SIG undefined FUN_140b80820(void)

void FUN_140b80820(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  plVar11 = *(longlong **)(param_1 + 0x1088);
  plVar5 = plVar11 + *(int *)(param_1 + 0x1090);
  do {
    if (plVar11 == plVar5) {
      return;
    }
    lVar3 = *plVar11;
    if (lVar3 != 0) {
      plVar12 = *(longlong **)(lVar3 + 0x38);
      plVar1 = plVar12 + *(int *)(lVar3 + 0x40);
      for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
        lVar3 = *plVar12;
        if (lVar3 != 0) {
          lVar6 = FUN_1413f2810();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (*(byte *)(lVar3 + 0x60) == param_2)) {
            plVar7 = (longlong *)UListView::OnItemSelectionChanged(lVar3);
            lVar6 = *plVar7;
            lVar3 = lVar6 + (longlong)(int)plVar7[1] * 0x28;
            if (lVar6 != lVar3) {
LAB_140b80935:
              lVar8 = FWeakObjectPtr::Get(lVar6);
              if (lVar8 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != *(int *)(lVar6 + 8)) && (*(longlong *)(lVar6 + 0x10) != 0)) {
                  lVar8 = FUN_141796df0();
                  FWeakObjectPtr::operator=(lVar6,lVar8);
                  if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(int *)(lVar6 + 8) = DAT_1464b56f4;
                  }
                  lVar8 = FWeakObjectPtr::Get(lVar6);
                  if (lVar8 != 0) goto LAB_140b809af;
                }
              }
              else {
LAB_140b809af:
                lVar9 = FUN_14171bfe0();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  lVar10 = FUN_142dfdfe0();
                  lVar9 = lVar8;
                  do {
                    if (lVar9 == lVar10) {
                      lVar10 = FUN_142dfdfe0();
                      lVar9 = lVar8;
                      goto LAB_140b80a08;
                    }
                    lVar9 = *(longlong *)(lVar9 + 0x30);
                  } while (lVar9 != 0);
                }
              }
              goto LAB_140b80a3a;
            }
          }
        }
LAB_140b80a53:
      }
    }
    plVar11 = plVar11 + 1;
  } while( true );
  while (lVar9 = *(longlong *)(lVar9 + 0x30), lVar9 != 0) {
LAB_140b80a08:
    if (lVar9 == lVar10) {
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar8;
      break;
    }
  }
LAB_140b80a3a:
  lVar6 = lVar6 + 0x28;
  if (lVar6 == lVar3) goto LAB_140b80a53;
  goto LAB_140b80935;
}



// FUNCTION 140b80aa0 FUN_140b80aa0 body=1071 status=ok
// SIG undefined FUN_140b80aa0(void)

void FUN_140b80aa0(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  int *piVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  
  iVar17 = (int)param_3[1];
  if (iVar17 != 0) {
    plVar13 = (longlong *)(*param_3 + 0x10);
    do {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 4;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_3,0);
  }
  plVar16 = *(longlong **)(param_1 + 0x1010);
  plVar13 = plVar16 + *(int *)(param_1 + 0x1018);
  do {
    if (plVar16 == plVar13) {
      return;
    }
    plVar3 = (longlong *)*plVar16;
    if (((plVar3 != (longlong *)0x0) && (param_2 != 0)) &&
       (cVar5 = (**(code **)(*plVar3 + 0x280))(plVar3,param_2), cVar5 != '\0')) {
      plVar6 = (longlong *)UListView::OnItemSelectionChanged(plVar3);
      lVar18 = *plVar6;
      lVar1 = lVar18 + (longlong)(int)plVar6[1] * 0x28;
      if (lVar18 != lVar1) {
LAB_140b80b80:
        plVar7 = (longlong *)FWeakObjectPtr::Get(lVar18);
        plVar12 = (longlong *)0x0;
        iVar17 = 0;
        plVar6 = plVar12;
        if (plVar7 == (longlong *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar18 + 8)) && (*(longlong *)(lVar18 + 0x10) != 0)) {
            lVar8 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar18,lVar8);
            if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar18 + 8) = DAT_1464b56f4;
            }
            plVar7 = (longlong *)FWeakObjectPtr::Get(lVar18);
            if (plVar7 != (longlong *)0x0) goto LAB_140b80bfa;
          }
        }
        else {
LAB_140b80bfa:
          lVar8 = FUN_14171bfe0();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            plVar9 = (longlong *)FUN_142dfdfe0();
            plVar10 = plVar7;
            do {
              plVar6 = plVar7;
              if (plVar10 == plVar9) break;
              plVar10 = (longlong *)plVar10[6];
              plVar6 = plVar12;
            } while (plVar10 != (longlong *)0x0);
          }
        }
        if (plVar6 != (longlong *)0x0) {
          plVar10 = (longlong *)FUN_1413f2350();
          plVar7 = plVar6;
          do {
            if (plVar7 == plVar10) goto LAB_140b80cc3;
            plVar7 = (longlong *)plVar7[6];
          } while (plVar7 != (longlong *)0x0);
        }
        plVar7 = (longlong *)FUN_1405ec200(lVar18);
        plVar6 = plVar12;
        if (plVar7 != (longlong *)0x0) {
          lVar8 = FUN_14171bfe0();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            plVar9 = (longlong *)FUN_142dfdfe0();
            plVar10 = plVar7;
            do {
              plVar6 = plVar7;
              if (plVar10 == plVar9) break;
              plVar10 = (longlong *)plVar10[6];
              plVar6 = plVar12;
            } while (plVar10 != (longlong *)0x0);
          }
        }
LAB_140b80cc3:
        if (plVar6 != (longlong *)0x0) {
          plVar10 = (longlong *)FUN_1413f2350();
          plVar7 = plVar6;
          do {
            if (plVar7 == plVar10) {
              plVar10 = (longlong *)FUN_1413f2350();
              plVar7 = plVar6;
              goto LAB_140b80cf0;
            }
            plVar7 = (longlong *)plVar7[6];
          } while (plVar7 != (longlong *)0x0);
        }
        goto LAB_140b80e84;
      }
    }
LAB_140b80ea3:
    plVar16 = plVar16 + 1;
  } while( true );
  while (plVar7 = (longlong *)plVar7[6], plVar9 = plVar12, plVar7 != (longlong *)0x0) {
LAB_140b80cf0:
    plVar9 = plVar6;
    if (plVar7 == plVar10) break;
  }
  lVar8 = plVar9[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar8 = plVar9[0x1f];
    if (lVar8 == 0) goto LAB_140b80e84;
  }
  plVar10 = *(longlong **)(param_1 + 0xeb8);
  plVar7 = plVar10 + (longlong)*(int *)(param_1 + 0xec0) * 3;
  for (; plVar9 = plVar12, plVar10 != plVar7; plVar10 = plVar10 + 3) {
    piVar11 = (int *)plVar10[1];
    piVar15 = piVar11 + (int)plVar10[2];
    for (; piVar11 != piVar15; piVar11 = piVar11 + 1) {
      plVar9 = plVar10;
      if (*piVar11 == *(int *)(lVar8 + 600)) goto LAB_140b80d7b;
    }
  }
LAB_140b80d7b:
  if ((plVar9 != (longlong *)0x0) == (bool)param_4) goto LAB_140b80e84;
  if (plVar9 != (longlong *)0x0) {
    iVar17 = (int)*plVar9;
  }
  piVar15 = (int *)*param_3;
  iVar2 = (int)param_3[1];
  piVar11 = piVar15 + (longlong)iVar2 * 8;
  for (; piVar15 != piVar11; piVar15 = piVar15 + 8) {
    if (iVar17 == *piVar15) {
      plVar12 = (longlong *)FUN_1413f2350();
      plVar7 = plVar6;
      goto LAB_140b80e10;
    }
  }
  *(int *)(param_3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_3,iVar2);
  }
  lVar8 = *param_3;
  lVar14 = (longlong)iVar2 * 0x20;
  *(undefined8 *)(lVar14 + lVar8) = 0;
  *(undefined8 *)(lVar14 + 8 + lVar8) = 0;
  *(undefined8 *)(lVar14 + 0x10 + lVar8) = 0;
  *(undefined8 *)(lVar14 + 0x18 + lVar8) = 0;
  if ((iVar2 < 0) || ((int)param_3[1] <= iVar2)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_140b80e84;
  *(int *)(lVar14 + *param_3) = iVar17;
  *(longlong *)(*param_3 + 8 + lVar14) = plVar3[6];
  plVar12 = (longlong *)FUN_1413f2350();
  plVar7 = plVar6;
  do {
    if (plVar7 == plVar12) goto LAB_140b80e57;
    plVar7 = (longlong *)plVar7[6];
  } while (plVar7 != (longlong *)0x0);
  plVar6 = (longlong *)0x0;
LAB_140b80e57:
  piVar15 = (int *)(lVar14 + *param_3);
  goto LAB_140b80e5a;
  while (plVar7 = (longlong *)plVar7[6], plVar7 != (longlong *)0x0) {
LAB_140b80e10:
    if (plVar7 == plVar12) goto LAB_140b80e5a;
  }
  plVar6 = (longlong *)0x0;
LAB_140b80e5a:
  iVar17 = piVar15[6];
  piVar15[6] = iVar17 + 1;
  if (piVar15[7] < iVar17 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(piVar15 + 4,iVar17);
  }
  *(longlong **)(*(longlong *)(piVar15 + 4) + (longlong)iVar17 * 8) = plVar6;
LAB_140b80e84:
  lVar18 = lVar18 + 0x28;
  if (lVar18 == lVar1) goto LAB_140b80ea3;
  goto LAB_140b80b80;
}



// FUNCTION 140b80ed0 FUN_140b80ed0 body=389 status=ok
// SIG undefined FUN_140b80ed0(void)

void FUN_140b80ed0(longlong *param_1,char param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_18;
  int local_10;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  if ((param_1 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)
     ) {
    UWorld::GetPlayerControllerIterator(lVar4,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      plVar5 = (longlong *)FWeakObjectPtr::Get();
      if (plVar5 != (longlong *)0x0) {
        lVar4 = FUN_14145f370();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (param_2 != '\0') {
            if (((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) ||
               (cVar3 = (**(code **)(*plVar5 + 0x768))(), cVar3 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_140b81031;
          }
          lVar4 = plVar5[0x109];
          if (lVar4 != 0) {
            lVar6 = FUN_1413ffe00();
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
              iVar1 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar1 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
              }
              *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar4;
            }
          }
        }
      }
LAB_140b81031:
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140b81060 FUN_140b81060 body=274 status=ok
// SIG undefined FUN_140b81060(void)

void FUN_140b81060(longlong *param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  if ((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)
     ) {
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      lVar3 = FWeakObjectPtr::Get();
      if (lVar3 != 0) {
        lVar4 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (lVar3 = *(longlong *)(lVar3 + 0x488), lVar3 != 0)) {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140b81180 FUN_140b81180 body=99 status=ok
// SIG undefined FUN_140b81180(void)

ulonglong FUN_140b81180(longlong *param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  uint7 uVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x678))();
    in_RAX = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_1413f82e0();
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
      if ((char)in_RAX != '\0') {
        return (ulonglong)*(byte *)(lVar1 + 0x2289);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b811f0 FUN_140b811f0 body=192 status=ok
// SIG undefined FUN_140b811f0(void)

longlong FUN_140b811f0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if (param_1 != (longlong *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x148))();
    lVar4 = FUN_1407c74b0(uVar3);
    if (lVar4 != 0) {
      FUN_1407c7790(lVar4,local_res8,param_1);
      cVar2 = FUN_1407ce070(local_res8);
      if (cVar2 != '\0') {
        lVar4 = FUN_1407cb5f0(lVar4,local_res8);
        if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x118), lVar4 != 0)) {
          lVar5 = FUN_1407e2730();
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
            return lVar4;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140b812b0 FUN_140b812b0 body=89 status=ok
// SIG undefined FUN_140b812b0(void)

undefined8 FUN_140b812b0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    uVar1 = UCircularThrobber::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_142dec940(lVar2,param_2);
      return uVar1;
    }
  }
  return 1;
}



// FUNCTION 140b81310 FUN_140b81310 body=111 status=ok
// SIG undefined FUN_140b81310(void)

undefined8 FUN_140b81310(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UCircularThrobber::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar3 = UGameplayStatics::GetPlayerController(uVar1,0);
      if (lVar3 != 0) {
        uVar1 = FUN_142dec940(lVar2,lVar3);
        return uVar1;
      }
    }
  }
  return 1;
}



// FUNCTION 140b81380 FUN_140b81380 body=545 status=ok
// SIG undefined FUN_140b81380(void)

undefined1 FUN_140b81380(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  plVar12 = *(longlong **)(param_1 + 0x1088);
  plVar4 = plVar12 + *(int *)(param_1 + 0x1090);
  do {
    if (plVar12 == plVar4) {
      return 0;
    }
    lVar2 = *plVar12;
    if (lVar2 != 0) {
      plVar13 = *(longlong **)(lVar2 + 0x38);
      plVar1 = plVar13 + *(int *)(lVar2 + 0x40);
      for (; plVar13 != plVar1; plVar13 = plVar13 + 1) {
        lVar2 = *plVar13;
        if (lVar2 != 0) {
          lVar5 = FUN_1413f2810();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(char *)(lVar2 + 0x60) != '\0')) {
            plVar6 = (longlong *)UListView::OnItemSelectionChanged(lVar2);
            lVar11 = *plVar6;
            lVar5 = lVar11 + (longlong)(int)plVar6[1] * 0x28;
            if (lVar11 != lVar5) {
LAB_140b81453:
              lVar7 = FWeakObjectPtr::Get();
              if (lVar7 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != *(int *)(lVar11 + 8)) && (*(longlong *)(lVar11 + 0x10) != 0))
                {
                  lVar7 = FUN_141796df0();
                  FWeakObjectPtr::operator=(lVar11,lVar7);
                  if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(int *)(lVar11 + 8) = DAT_1464b56f4;
                  }
                  lVar7 = FWeakObjectPtr::Get(lVar11);
                  if (lVar7 != 0) goto LAB_140b814ca;
                }
              }
              else {
LAB_140b814ca:
                lVar8 = FUN_14171bfe0();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  lVar9 = FUN_142dfdfe0();
                  lVar8 = lVar7;
                  do {
                    if (lVar8 == lVar9) {
                      lVar9 = FUN_142dfdfe0();
                      lVar8 = lVar7;
                      goto LAB_140b81520;
                    }
                    lVar8 = *(longlong *)(lVar8 + 0x30);
                  } while (lVar8 != 0);
                }
              }
              goto LAB_140b8152e;
            }
          }
        }
LAB_140b81562:
      }
    }
    plVar12 = plVar12 + 1;
  } while( true );
  while (lVar8 = *(longlong *)(lVar8 + 0x30), lVar8 != 0) {
LAB_140b81520:
    if (lVar8 == lVar9) goto LAB_140b81532;
  }
LAB_140b8152e:
  lVar7 = 0;
LAB_140b81532:
  if (param_2 != 0) {
    lVar9 = FUN_142dfdfe0();
    lVar8 = param_2;
    do {
      lVar10 = param_2;
      if (lVar8 == lVar9) goto LAB_140b81550;
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
  }
  lVar10 = 0;
LAB_140b81550:
  if (lVar7 == lVar10) {
    return *(undefined1 *)(lVar2 + 0x60);
  }
  lVar11 = lVar11 + 0x28;
  if (lVar11 == lVar5) goto LAB_140b81562;
  goto LAB_140b81453;
}



// FUNCTION 140b815b0 FUN_140b815b0 body=309 status=ok
// SIG undefined FUN_140b815b0(void)

int FUN_140b815b0(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  
  iVar6 = 1;
  uVar4 = 0;
  iVar7 = 0x48;
  plVar5 = *(longlong **)(param_2 + 0x20);
  uVar8 = (longlong)*(int *)(param_2 + 0x28) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_2 + 0x28) < plVar5) {
    uVar8 = uVar4;
  }
  if (uVar8 != 0) {
    do {
      lVar1 = *plVar5;
      iVar3 = iVar7;
      if (lVar1 != 0) {
        fVar9 = (float)FUN_142c98860(lVar1 + 0x70,param_1);
        fVar10 = (float)FUN_142c98860(lVar1 + 0xa8,param_1);
        iVar3 = (int)fVar9;
        if ((int)fVar9 <= iVar6) {
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        iVar3 = (int)fVar10;
        if (iVar7 <= (int)fVar10) {
          iVar3 = iVar7;
        }
      }
      iVar7 = iVar3;
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar8);
  }
  iVar3 = iVar7;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    iVar2 = FUN_142ffcb70(*(longlong *)(param_2 + 0x18),param_1);
    iVar3 = FUN_142ffca90(*(undefined8 *)(param_2 + 0x18),param_1);
    if (iVar2 <= iVar6) {
      iVar2 = iVar6;
    }
    iVar6 = iVar2;
    if (iVar7 <= iVar3) {
      iVar3 = iVar7;
    }
  }
  if (iVar6 <= param_3) {
    if (param_3 < iVar3) {
      iVar3 = param_3;
    }
    return iVar3;
  }
  return iVar6;
}



// FUNCTION 140b816f0 FUN_140b816f0 body=107 status=ok
// SIG undefined FUN_140b816f0(void)

int FUN_140b816f0(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_3 == (longlong *)0x0)) {
    iVar2 = 1;
  }
  else {
    iVar1 = FUN_140cb6860();
    iVar2 = (**(code **)(*param_3 + 0x408))(param_3);
    iVar2 = (param_2 - iVar1) + iVar2;
    if (iVar2 < 1) {
      return 1;
    }
  }
  iVar1 = 0x48;
  if (iVar2 < 0x48) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 140b81760 FUN_140b81760 body=103 status=ok
// SIG undefined FUN_140b81760(void)

ulonglong FUN_140b81760(longlong *param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  uint7 uVar4;
  ulonglong uVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x678))();
    in_RAX = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_1413f82e0();
      uVar4 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        in_RAX = (ulonglong)uVar4 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar4,1);
      }
      if ((char)in_RAX != '\0') {
        uVar3 = FUN_140472310(lVar1 + 0x2228);
        return uVar3;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b817d0 FUN_140b817d0 body=239 status=ok
// SIG undefined FUN_140b817d0(void)

undefined8 * FUN_140b817d0(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686a018) {
    _Init_thread_header(&DAT_14686a018);
    if (DAT_14686a018 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146297e00,0);
      FGenericPlatformString::Memcpy(DAT_146297e00,L"2cf9a2ba9e68496ebefefc9013f8b389",0x42);
      atexit((_func_5014 *)&LAB_143e4c530);
      _Init_thread_footer(&DAT_14686a018);
    }
  }
  *param_1 = 0;
  uVar1 = DAT_146297e08;
  _Src = DAT_146297e00;
  iVar2 = (int)DAT_146297e08;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar1 & 0xffffffff,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar2 * 2);
  return param_1;
}



// FUNCTION 140b818c0 FUN_140b818c0 body=107 status=ok
// SIG undefined FUN_140b818c0(void)

longlong FUN_140b818c0(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x148))();
  }
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
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140b81930 FUN_140b81930 body=143 status=ok
// SIG undefined FUN_140b81930(void)

int FUN_140b81930(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 1;
  }
  plVar2 = (longlong *)FUN_140cffa10();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_140b825a0(plVar2);
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0x6c1) == '\0')) {
      param_3 = (**(code **)(*plVar2 + 0x408))(plVar2);
      param_3 = param_2 + param_3;
    }
    if (0 < param_3) {
      iVar1 = 100;
      if (param_3 < 100) {
        iVar1 = param_3;
      }
      return iVar1;
    }
  }
  return 1;
}



// FUNCTION 140b819c0 FUN_140b819c0 body=565 status=ok
// SIG undefined FUN_140b819c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_140b819c0(int *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  char cVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if ((param_2 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) {
LAB_140b81bef:
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
  uVar6 = FUN_142dfdf30();
  plVar7 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar6);
  uVar6 = FUN_142dfdf30();
  plVar8 = (longlong *)(**(code **)(*param_3 + 0x628))(param_3,uVar6);
  local_48 = FUN_140b825a0(param_2);
  if ((local_48 == 0) || ((plVar7 == (longlong *)0x0 || (plVar8 == (longlong *)0x0))))
  goto LAB_140b81bef;
  iVar4 = (**(code **)(*plVar7 + 0x408))(plVar7);
  iVar5 = (**(code **)(*plVar8 + 0x408))(plVar8);
  lVar2 = local_48;
  iVar1 = iVar5;
  if ((param_4 != '\0') &&
     ((*(char *)(local_48 + 0x6c1) == '\0' && (*(char *)(local_48 + 0x6c2) != '\0')))) {
    lVar9 = (**(code **)(*param_2 + 0x670))(param_2);
    if (lVar9 == 0) {
      plVar10 = (longlong *)FUN_140a63ba0(param_2);
      if (plVar10 == (longlong *)0x0) {
LAB_140b81b08:
        cVar11 = '\0';
      }
      else {
        lVar9 = (**(code **)(*plVar10 + 0x670))(plVar10);
        if (lVar9 == 0) {
          plVar10 = (longlong *)FUN_140a63ba0(plVar10);
          if ((plVar10 == (longlong *)0x0) ||
             (lVar9 = (**(code **)(*plVar10 + 0x670))(plVar10), lVar9 == 0)) goto LAB_140b81b08;
          cVar11 = '\x01';
        }
        else {
          cVar11 = '\x01';
        }
      }
    }
    else {
      cVar11 = '\x01';
    }
    lVar9 = (**(code **)(*param_3 + 0x670))(param_3);
    if (lVar9 == 0) {
      plVar10 = (longlong *)FUN_140a63ba0(param_3);
      if (plVar10 == (longlong *)0x0) {
LAB_140b81b67:
        cVar3 = '\0';
      }
      else {
        lVar9 = (**(code **)(*plVar10 + 0x670))(plVar10);
        if (lVar9 == 0) {
          plVar10 = (longlong *)FUN_140a63ba0(plVar10);
          if ((plVar10 == (longlong *)0x0) ||
             (lVar9 = (**(code **)(*plVar10 + 0x670))(plVar10), lVar9 == 0)) goto LAB_140b81b67;
          cVar3 = '\x01';
        }
        else {
          cVar3 = '\x01';
        }
      }
    }
    else {
      cVar3 = '\x01';
    }
    if ((cVar11 != '\0') && (cVar3 != '\0')) {
      *param_1 = 0;
      goto LAB_140b81bb1;
    }
    if (cVar11 != cVar3) {
      plVar10 = plVar8;
      if (cVar3 != '\0') {
        plVar10 = plVar7;
      }
      if (cVar11 != '\0') {
        plVar8 = plVar7;
      }
      FUN_140cd8d10(lVar2,&local_48,plVar8,plVar10);
      if ((local_48._4_1_ != '\0') && (iVar1 = (int)local_48, cVar11 == '\0')) {
        *param_1 = (int)local_48 - iVar5;
        goto LAB_140b81bb1;
      }
    }
  }
  *param_1 = iVar4 - iVar1;
LAB_140b81bb1:
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



// FUNCTION 140b81c00 FUN_140b81c00 body=106 status=ok
// SIG undefined FUN_140b81c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140b81c00(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 *param_4
                       )

{
  ulonglong uVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  *param_4 = 0;
  uVar1 = FUN_140b819c0(&local_18,param_1,param_2,param_3);
  if (local_14 != '\0') {
    *param_4 = local_18;
    return CONCAT71((uint7)(uint3)((uint)local_18 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140b81c70 FUN_140b81c70 body=31 status=ok
// SIG undefined FUN_140b81c70(void)

void FUN_140b81c70(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140b825a0();
  if (lVar1 != 0) {
    FUN_140cb68f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 140b81c90 GetSessionInterface body=250 status=ok
// SIG undefined GetSessionInterface(void)

undefined8 * Online::GetSessionInterface(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140b81d90 GetCharacterTag body=8 status=ok
// SIG undefined GetCharacterTag(void)

longlong ASBZCharacter::GetCharacterTag(longlong param_1)

{
  return param_1 + 0x1000;
}



// FUNCTION 140b81da0 FUN_140b81da0 body=250 status=ok
// SIG undefined FUN_140b81da0(void)

undefined8 * FUN_140b81da0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x78))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140b81ea0 FUN_140b81ea0 body=53 status=ok
// SIG undefined FUN_140b81ea0(void)

int FUN_140b81ea0(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    plVar2 = (longlong *)FUN_140cffa10();
    if (plVar2 != (longlong *)0x0) {
      iVar1 = (**(code **)(*plVar2 + 0x408))(plVar2);
      return param_2 - iVar1;
    }
  }
  return 0;
}



// FUNCTION 140b81ef0 FUN_140b81ef0 body=783 status=ok
// SIG undefined FUN_140b81ef0(void)

void FUN_140b81ef0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 local_res8 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong *local_38;
  
  lVar9 = 0;
  local_res8[0] = 0;
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
     (lVar8 = *(longlong *)(param_1 + 0x20), lVar8 != 0)) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      bVar5 = true;
      bVar4 = false;
      plVar7 = (longlong *)FUN_142dcf3a0(lVar8,local_48);
      lVar8 = *plVar7;
      goto LAB_140b81f8d;
    }
  }
  plVar7 = &local_78;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  bVar5 = false;
  bVar4 = true;
  lVar8 = lVar9;
LAB_140b81f8d:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_70;
  if ((bVar4) && (plStack_70 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_70 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  if ((bVar5) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar8 != 0) {
    lVar6 = FUN_142b45e90();
    FUN_140d3ccb0(*(undefined8 *)(lVar6 + 0x18),&local_68);
    lVar6 = local_68;
    if ((local_68 != 0) && (*(longlong *)(param_1 + 0x278) == 0)) {
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      local_38 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f4d200;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        plVar7[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar9;
        *plVar7 = (longlong)&PTR_FUN_143f4d248;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0x70,1);
        plVar10 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
        iVar2 = *(int *)(lVar6 + 0x78);
        lVar9 = *plVar10;
        *(int *)(lVar6 + 0x78) = iVar2 + 1;
        if (*(int *)(lVar6 + 0x7c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 0x70,iVar2);
        }
        puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar6 + 0x70));
        *puVar11 = plVar7;
        *(undefined4 *)(puVar11 + 1) = 3;
      }
      local_88 = (undefined4)lVar8;
      uStack_84 = (undefined4)((ulonglong)lVar8 >> 0x20);
      uStack_80 = SUB84(plVar3,0);
      uStack_7c = (undefined4)((ulonglong)plVar3 >> 0x20);
      *(longlong *)(param_1 + 0x278) = lVar9;
      local_58 = local_88;
      uStack_54 = uStack_84;
      uStack_50 = uStack_80;
      uStack_4c = uStack_7c;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      FUN_142b63a70(local_68,&local_58);
      plVar7 = (longlong *)CONCAT44(uStack_4c,uStack_50);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar7 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_60 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140b82210 thunk_FUN_1412bf780 body=5 status=ok
// SIG undefined thunk_FUN_1412bf780(void)

void thunk_FUN_1412bf780(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  longlong *plStack_78;
  undefined1 auStack_68 [8];
  longlong *plStack_60;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    if (DAT_1468782f0 == '\0') {
      FUN_1412c54f0();
    }
    puVar9 = DAT_1468787b8 + (longlong)DAT_1468787c0 * 10;
    for (puVar12 = DAT_1468787b8; puVar12 != puVar9; puVar12 = puVar12 + 10) {
      uVar13 = 0;
      uStack_b8 = *puVar12;
      uStack_b4 = puVar12[1];
      iStack_b0 = puVar12[2];
      uStack_50 = *(undefined8 *)(puVar12 + 4);
      lStack_a0 = 0;
      uStack_98 = 0;
      lStack_a8 = 0;
      FString::FString(auStack_48,puVar12 + 6);
      FSoftObjectPath::operator=(&lStack_a8,&uStack_50);
      lVar6 = FWeakObjectPtr::Get(&uStack_b8);
      if (lVar6 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != iStack_b0) && (lStack_a8 != 0)) {
          lVar6 = FUN_141796df0(&lStack_a8);
          FWeakObjectPtr::operator=(&uStack_b8,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            iStack_b0 = DAT_1464b56f4;
          }
          lVar6 = FWeakObjectPtr::Get(&uStack_b8);
          if (lVar6 != 0) goto LAB_1412bf8f3;
        }
      }
      else {
LAB_1412bf8f3:
        uVar7 = FWeakObjectPtr::Get(&uStack_b8);
        if (uVar7 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != iStack_b0) && (uStack_90 = 0, lStack_a8 != 0)) {
            lVar6 = FUN_141796df0(&lStack_a8);
            FWeakObjectPtr::operator=(&uStack_b8,lVar6);
            if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              iStack_b0 = DAT_1464b56f4;
            }
            uVar7 = FWeakObjectPtr::Get(&uStack_b8);
            if (uVar7 != 0) goto LAB_1412bf96d;
          }
LAB_1412bf9a3:
          uVar7 = uVar13;
        }
        else {
LAB_1412bf96d:
          lVar6 = FUN_1414f4830();
          if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_1412bf9a3;
        }
        plVar8 = *(longlong **)(uVar7 + 0x30);
        uVar11 = (longlong)*(int *)(uVar7 + 0x38) & 0x1fffffffffffffff;
        if (plVar8 + *(int *)(uVar7 + 0x38) < plVar8) {
          uVar11 = 0;
        }
        if (uVar11 != 0) {
          do {
            lVar6 = *plVar8;
            if (lVar6 != 0) {
              uStack_88 = *(undefined8 *)(lVar6 + 0x78);
              FText::FText(auStack_80,lVar6 + 0x30);
              FText::FText(auStack_68,lVar6 + 0x60);
              iVar3 = (int)param_1[1];
              *(int *)(param_1 + 1) = iVar3 + 1;
              if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
                ResizeGrow(param_1,iVar3);
              }
              puVar10 = (undefined8 *)((longlong)iVar3 * 0x38 + *param_1);
              *puVar10 = uStack_88;
              FText::FText(puVar10 + 1,auStack_80);
              FText::FText(puVar10 + 4,auStack_68);
              plVar5 = plStack_60;
              if (plStack_60 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_60 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plStack_60)(plStack_60);
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
              plVar5 = plStack_78;
              if (plStack_78 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_78 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plStack_78)(plStack_78);
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
            plVar8 = plVar8 + 1;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar11);
        }
      }
      if (lStack_a0 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b82220 FUN_140b82220 body=250 status=ok
// SIG undefined FUN_140b82220(void)

undefined8 * FUN_140b82220(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x38))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140b82320 FUN_140b82320 body=142 status=ok
// SIG undefined FUN_140b82320(void)

longlong * FUN_140b82320(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar2 = param_1 + 0x68;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x78) - 1U) * 4);
    if (iVar1 != -1) {
      while (plVar4 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x30)),
            *plVar4 != param_2) {
        iVar1 = (int)plVar4[0xb];
        if (iVar1 == -1) {
          return (longlong *)0x0;
        }
      }
      if (iVar1 != -1) goto LAB_140b823a2;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140b823a2:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 140b823b0 FUN_140b823b0 body=31 status=ok
// SIG undefined FUN_140b823b0(void)

void FUN_140b823b0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140b823d0();
  if (lVar1 != 0) {
    FUN_140cffa10(lVar1);
    return;
  }
  return;
}



// FUNCTION 140b823d0 FUN_140b823d0 body=266 status=ok
// SIG undefined FUN_140b823d0(void)

longlong * FUN_140b823d0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  int local_10;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 != 0) {
    iVar3 = FUN_1428cf800(lVar4);
    if (iVar3 != 3) {
      UWorld::GetPlayerControllerIterator(lVar4,&local_18);
      while( true ) {
        if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        plVar5 = (longlong *)FWeakObjectPtr::Get();
        if (plVar5 != (longlong *)0x0) {
          lVar4 = FUN_14145f370();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
              != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            cVar2 = APlayerController::IsPrimaryPlayer();
            if (cVar2 != '\0') {
              if ((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) {
LAB_140b824a4:
                bVar1 = false;
              }
              else {
                cVar2 = (**(code **)(*plVar5 + 0x768))();
                if (cVar2 == '\0') goto LAB_140b824a4;
                bVar1 = true;
              }
              if ((bVar1) || (iVar3 == 1)) {
                return plVar5;
              }
            }
          }
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140b824e0 FUN_140b824e0 body=45 status=ok
// SIG undefined FUN_140b824e0(void)

int FUN_140b824e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  while (lVar1 == 0) {
    param_1 = *(longlong *)(param_1 + 0x30);
    if (param_1 == 0) {
      return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x38);
  if (lVar1 == 0) {
    return 0;
  }
  return *(int *)(lVar1 + 0x48) + -1;
}



// FUNCTION 140b82510 FUN_140b82510 body=144 status=ok
// SIG undefined FUN_140b82510(void)

longlong FUN_140b82510(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar4 + 0x148))();
    if (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 400);
      if (lVar2 != 0) {
        lVar3 = FUN_14141f270();
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
          return lVar2;
        }
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140b825a0 FUN_140b825a0 body=119 status=ok
// SIG undefined FUN_140b825a0(void)

longlong FUN_140b825a0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar2 + 0x148);
  if (lVar2 != 0) {
    lVar3 = FUN_141424d10();
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



// FUNCTION 140b82620 FUN_140b82620 body=63 status=ok
// SIG undefined FUN_140b82620(void)

longlong FUN_140b82620(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x1088);
    plVar1 = plVar3 + *(int *)(param_1 + 0x1090);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if ((lVar2 != 0) && (*(byte *)(lVar2 + 0xe0) == param_2)) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140b82660 FUN_140b82660 body=167 status=ok
// SIG undefined FUN_140b82660(void)

ulonglong FUN_140b82660(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_1 == 0) goto LAB_140b826fa;
  lVar4 = *(longlong *)(param_1 + 0x488);
  if (lVar4 == 0) {
LAB_140b826b9:
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
    if (!bVar1) goto LAB_140b826b9;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  in_RAX = DAT_146b33f38;
  if ((lVar4 != 0) && (*(longlong *)(DAT_146b33f38 + 0x58) != 0)) {
    uVar3 = FUN_140c42c80(lVar4,*(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x30),param_2)
    ;
    return uVar3;
  }
LAB_140b826fa:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b82710 GetExternalUIInterface body=250 status=ok
// SIG undefined GetExternalUIInterface(void)

undefined8 * Online::GetExternalUIInterface(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x70))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140b82810 FUN_140b82810 body=382 status=ok
// SIG undefined FUN_140b82810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140b82810(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  undefined8 local_20;
  longlong *plStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar6 + 400) != 0) {
    lVar6 = UGameInstance::GetFirstGamePlayer();
    if (lVar6 != 0) {
      lVar6 = FUN_142547b50(lVar6,local_48);
      uVar4 = *(undefined8 *)(lVar6 + 8);
      plVar5 = *(longlong **)(lVar6 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_58 = uVar4;
      plStack_50 = plVar5;
      if (&local_58 != param_2) {
        local_58 = *param_2;
        plStack_50 = (longlong *)param_2[1];
        *param_2 = uVar4;
        param_2[1] = plVar5;
        local_20 = uVar4;
        plStack_18 = plVar5;
      }
      plVar5 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
      local_48[0] = &PTR_FUN_143f740c8;
      if (local_30 != 0) {
        FMemory::Free();
      }
      local_48[0] = &PTR_FUN_143f73d18;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_38 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 140b82990 FUN_140b82990 body=71 status=ok
// SIG undefined FUN_140b82990(void)

undefined8 FUN_140b82990(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140b7ffa0(param_1,0,0);
  if (iVar1 != DAT_1468699b0) {
    FUN_140b8c7e0(param_1);
  }
  Metasound::TVertexInterfaceGroup<Metasound::FEnvironmentVertex>::
  TVertexInterfaceGroup<Metasound::FEnvironmentVertex>(param_2,&DAT_146869de0);
  return param_2;
}



// FUNCTION 140b829e0 FUN_140b829e0 body=137 status=ok
// SIG undefined FUN_140b829e0(void)

undefined8 FUN_140b829e0(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong local_18;
  undefined8 local_10;
  
  uVar5 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_140b80ed0(param_1,0,&local_18);
  lVar1 = local_18;
  iVar3 = (int)local_10;
  if ((int)local_10 != 0) {
    iVar4 = 0;
    if (0 < (int)local_10) {
      iVar2 = rand();
      iVar4 = iVar3 + -1;
      iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar3);
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    uVar5 = *(undefined8 *)(lVar1 + (longlong)iVar4 * 8);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return uVar5;
}



// FUNCTION 140b82a70 FUN_140b82a70 body=253 status=ok
// SIG undefined FUN_140b82a70(void)

undefined8 * FUN_140b82a70(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0xb0))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140b82b80 FUN_140b82b80 body=274 status=ok
// SIG undefined FUN_140b82b80(void)

undefined8 * FUN_140b82b80(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  ulonglong local_res10;
  undefined1 local_res18 [16];
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar8 = 0;
  local_res10 = local_res10 & 0xffffffff00000000;
  puVar5 = (ulonglong *)FName::FName(local_res18,L"SPARK",1);
  local_res10 = *puVar5;
  plVar6 = (longlong *)FUN_1404b0000(&local_res10);
  bVar9 = plVar6 != (longlong *)0x0;
  if (bVar9) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x18))(plVar6,local_28);
    uVar8 = *puVar7;
  }
  else {
    puVar7 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_2 = uVar8;
  param_2[1] = puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  if (bVar9) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar6 = plStack_30;
  if ((!bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140b82ca0 FUN_140b82ca0 body=112 status=ok
// SIG undefined FUN_140b82ca0(void)

longlong FUN_140b82ca0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_140b825a0();
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x5a0);
    if (lVar2 != 0) {
      lVar3 = FUN_141484230();
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
        return lVar2;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 140b82d10 FUN_140b82d10 body=131 status=ok
// SIG undefined FUN_140b82d10(void)

undefined8 FUN_140b82d10(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 400);
  }
  if (lVar2 != 0) {
    lVar2 = FUN_1424503b0();
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
        return *(undefined8 *)(lVar2 + 0x1428);
      }
    }
  }
  return 0;
}



// FUNCTION 140b82da0 FUN_140b82da0 body=70 status=ok
// SIG undefined FUN_140b82da0(void)

undefined8 FUN_140b82da0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FString::FString(local_18,param_1);
  uVar1 = FUN_1412c3780(uVar1,param_2);
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 140b82df0 FUN_140b82df0 body=13 status=ok
// SIG undefined FUN_140b82df0(void)

void FUN_140b82df0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_3;
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



// FUNCTION 140b82e00 FUN_140b82e00 body=749 status=ok
// SIG undefined FUN_140b82e00(void)

void FUN_140b82e00(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 local_res10 [8];
  uint in_stack_ffffffffffffff90;
  uint in_stack_ffffffffffffffa0;
  longlong *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  if (((((param_2 != (longlong *)0x0) && (param_3 != 0)) && (param_1 != (longlong *)0x0)) &&
      ((iVar1 = FUN_142235230(param_2), iVar1 != 3 &&
       ((*(byte *)((longlong)param_2 + 0x94) & 0x18) == 0x10)))) &&
     (lVar3 = (**(code **)(param_1[0x1b0] + 0x18))(), lVar3 != 0)) {
    uVar4 = FUN_142dfdf30();
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (plVar5 == (longlong *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)(*plVar5 + 0x400))(plVar5);
    }
    uVar11 = 0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_143013fe0(&local_48,param_3,uVar2,param_2,param_4,in_stack_ffffffffffffff90 & 0xffffff00,0,
                  in_stack_ffffffffffffffa0 & 0xffffff00);
    iVar1 = (int)local_40;
    lVar6 = (longlong)(int)local_40;
    if ((0 < (int)local_40) && (*local_48 != 0)) {
      if ((int)local_40 < 1) {
        iVar8 = 1 - (int)local_40;
        iVar1 = (int)local_40 + iVar8;
        local_40 = CONCAT44(local_40._4_4_,iVar1);
        if (local_40._4_4_ < iVar1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(&local_48);
        }
        plVar5 = local_48 + lVar6 * 0xc;
        if (iVar8 != 0) {
          lVar6 = (longlong)plVar5 + 0x44;
          do {
            *(undefined8 *)(lVar6 + -0x24) = 0;
            *(undefined8 *)(lVar6 + -0x1c) = 0;
            *(undefined1 *)(lVar6 + -0x14) = 0;
            *(undefined8 *)(lVar6 + -0xc) = 0;
            *(undefined8 *)(lVar6 + -4) = 0;
            *(undefined8 *)(lVar6 + 4) = 0;
            *(undefined8 *)(lVar6 + 0xc) = 0;
            _guard_xfg_dispatch_icall_nop(plVar5,0,0x60);
            plVar5 = plVar5 + 0xc;
            *(undefined2 *)(lVar6 + 0x14) = 1;
            lVar6 = lVar6 + 0x60;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      else if ((1 < (int)local_40) && (iVar8 = (int)local_40 + -1, iVar8 != 0)) {
        plVar5 = local_48 + 0x13;
        iVar10 = iVar8;
        do {
          if (plVar5[2] != 0) {
            FMemory::Free();
          }
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar5 + -3);
          plVar5 = plVar5 + 0xc;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar10 = ((int)local_40 - iVar8) + -1;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_48 + 0xc,local_48 + (longlong)iVar1 * 0xc,(longlong)iVar10 * 0x60);
        }
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar8);
        TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(&local_48);
      }
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_143018ff0(&local_48,uVar4,&local_38,0);
      uVar9 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
      if (local_38 + (int)local_30 < local_38) {
        uVar9 = uVar11;
      }
      puVar7 = local_38;
      if (uVar9 != 0) {
        do {
          FUN_142fe3dd0(lVar3,local_res10,*(undefined8 *)(*local_48 + 0x1d8),*puVar7,1,8,1,0,0);
          uVar11 = uVar11 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar11 != uVar9);
      }
      if (local_38 != (undefined8 *)0x0) {
        FMemory::Free(local_38);
      }
    }
    FUN_1409f5880(&local_48);
  }
  return;
}



// FUNCTION 140b830f0 FUN_140b830f0 body=11 status=ok
// SIG undefined FUN_140b830f0(void)

bool FUN_140b830f0(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x398);
}



// FUNCTION 140b83100 FUN_140b83100 body=31 status=ok
// SIG undefined FUN_140b83100(void)

void FUN_140b83100(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140b82d10();
  if (lVar1 != 0) {
    FUN_1411e79f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 140b83120 FUN_140b83120 body=131 status=ok
// SIG undefined FUN_140b83120(void)

void FUN_140b83120(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  LARGE_INTEGER local_18 [2];
  
  FUN_142454390();
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
      QueryPerformanceCounter(local_18);
      *(double *)(lVar2 + 0x13b0) = (double)local_18[0].QuadPart * DAT_1468b02f8 + 16777216.0;
    }
  }
  return;
}



// FUNCTION 140b831b0 FUN_140b831b0 body=40 status=ok
// SIG undefined FUN_140b831b0(void)

void FUN_140b831b0(longlong param_1)

{
  FUN_142454860();
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FUN_141424d10();
    return;
  }
  return;
}



// FUNCTION 140b831e0 FUN_140b831e0 body=362 status=ok
// SIG undefined FUN_140b831e0(void)

void FUN_140b831e0(longlong *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  if ((param_1 != (longlong *)0x0) &&
     (plVar1 = (longlong *)param_1[0xad], plVar1 != (longlong *)0x0)) {
    lVar4 = AFGPoleHologram::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140b5faf0(plVar1,param_2,param_1);
      if ((((param_3 != 0) && (plVar1[0x94] != 0)) &&
          (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) &&
         (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), *(longlong *)(lVar4 + 400) != 0)) {
        lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar4 = *(longlong *)(lVar4 + 400);
        if (lVar4 != 0) {
          lVar5 = FUN_14141f270();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (plVar2 = *(longlong **)(lVar4 + 0xb20), plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x278))(plVar2,plVar1[0x94],param_1,param_3);
          }
        }
      }
      lVar4 = *param_1;
      uVar6 = (**(code **)(*plVar1 + 0x3a8))(plVar1);
      (**(code **)(lVar4 + 0x3a0))(param_1,uVar6);
    }
  }
  return;
}



// FUNCTION 140b83350 FUN_140b83350 body=550 status=ok
// SIG undefined FUN_140b83350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b83350(longlong *param_1,float *param_2,float param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  float local_38;
  longlong local_30;
  int local_28;
  
  if (((param_1 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_1 + 0x148))(), lVar4 != 0)) &&
     (iVar3 = FUN_1428cf800(lVar4), iVar3 != 3)) {
    UWorld::GetPlayerControllerIterator(lVar4,&local_30);
    while( true ) {
      if ((local_28 < 0) || (*(int *)(local_30 + 8) <= local_28)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      lVar4 = FWeakObjectPtr::Get();
      if (lVar4 != 0) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (plVar1 = *(longlong **)(lVar4 + 0x848), plVar1 != (longlong *)0x0)) {
          lVar6 = FUN_1413f82e0();
          lVar5 = plVar1[2];
          if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
              lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) &&
             ((*(longlong *)(lVar4 + 0xa58) == 0 ||
              (*(char *)(*(longlong *)(lVar4 + 0xa58) + 0xd8) == '\0')))) {
            if (0.0 < param_3) {
              lVar4 = plVar1[0x2d];
              if (lVar4 == 0) {
                local_44 = DAT_1468b5d98;
                puVar7 = &local_4c;
                local_4c = _DAT_1468b5d90;
              }
              else {
                puVar7 = (undefined8 *)&local_58;
                local_58 = *(undefined4 *)(lVar4 + 0x220);
                local_50 = *(undefined4 *)(lVar4 + 0x228);
                uStack_54 = *(undefined4 *)(lVar4 + 0x224);
              }
              local_38 = *(float *)(puVar7 + 1);
              fVar9 = (float)((ulonglong)*puVar7 >> 0x20) - param_2[1];
              fVar8 = (float)*puVar7 - *param_2;
              if (param_3 * param_3 <=
                  fVar9 * fVar9 + fVar8 * fVar8 + (local_38 - param_2[2]) * (local_38 - param_2[2]))
              goto LAB_140b83544;
            }
            (**(code **)(*plVar1 + 0xbc8))(plVar1,CONCAT71((int7)((ulonglong)lVar5 >> 8),3));
          }
        }
      }
LAB_140b83544:
      local_28 = local_28 + 1;
    }
  }
  return;
}



// FUNCTION 140b83580 FUN_140b83580 body=180 status=ok
// SIG undefined FUN_140b83580(void)

bool FUN_140b83580(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (param_1 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x678))();
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
        cVar2 = (**(code **)(*plVar3 + 0x950))(plVar3);
        return cVar2 == '\0';
      }
    }
    uVar5 = UScrollBox::GetPrivateStaticClass();
    lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
    if (lVar4 != 0) {
      return (bool)(~(byte)(*(uint *)(lVar4 + 0x840) >> 3) & 1);
    }
  }
  return false;
}



// FUNCTION 140b83640 IsSwimmingUnderwater body=44 status=ok
// SIG undefined IsSwimmingUnderwater(void)

bool UGameUtil::IsSwimmingUnderwater(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_140b825a0();
    if (lVar2 != 0) {
      cVar1 = FUN_140cb68f0(lVar2);
      return cVar1 == '\x01';
    }
  }
  return false;
}



// FUNCTION 140b83670 FUN_140b83670 body=173 status=ok
// SIG undefined FUN_140b83670(void)

bool FUN_140b83670(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (param_1 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_1 + 0x678))();
    if (lVar3 != 0) {
      lVar4 = FUN_1413f82e0();
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
        return *(byte *)(lVar3 + 0xec0) < 3;
      }
    }
    uVar5 = UScrollBox::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
    if (lVar3 != 0) {
      cVar2 = FUN_142d1f310(lVar3);
      return cVar2 == '\0';
    }
  }
  return false;
}



// FUNCTION 140b83720 FUN_140b83720 body=130 status=ok
// SIG undefined FUN_140b83720(void)

ulonglong FUN_140b83720(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_14142bde0();
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
      uVar3 = FUN_140b31aa0(param_1,param_2,param_3);
      return uVar3;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b837b0 FUN_140b837b0 body=388 status=ok
// SIG undefined FUN_140b837b0(void)

undefined1 FUN_140b837b0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float local_198;
  float fStack_194;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_15c;
  undefined1 local_158 [208];
  undefined4 local_88;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_1 != 0) {
    plVar5 = (longlong *)FUN_14270bb10();
    if ((plVar5 != (longlong *)0x0) && (plVar5[0xe] != 0)) {
      local_88 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      cVar4 = (**(code **)(*plVar5 + 0x2d0))(plVar5,*(undefined8 *)(plVar5[0xe] + 0xb0),0,local_158)
      ;
      if (cVar4 != '\0') {
        FSceneViewProjectionData::ComputeViewProjectionMatrix(local_158,&local_198);
        fVar1 = *param_2;
        fVar2 = param_2[1];
        fVar3 = param_2[2];
        fVar7 = fStack_15c * 1.0 + fVar3 * fStack_16c + fVar2 * fStack_17c + fVar1 * fStack_18c;
        if (0.0 < fVar7) {
          fVar7 = 1.0 / fVar7;
          fVar6 = (local_168 * 1.0 + fVar3 * local_178 + fVar2 * local_188 + fVar1 * local_198) *
                  fVar7;
          fVar7 = (fStack_164 * 1.0 + fVar3 * fStack_174 + fVar2 * fStack_184 + fVar1 * fStack_194)
                  * fVar7;
          if ((((-1.0 <= fVar6) && (fVar6 <= 1.0)) && (-1.0 <= fVar7)) && (fVar7 <= 1.0)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140b83940 FUN_140b83940 body=168 status=ok
// SIG undefined FUN_140b83940(void)

undefined8 FUN_140b83940(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = FUN_1407e27e0();
  lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
  if (lVar3 == 0) {
    lVar3 = UUGRichTextBlock::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar3 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 140b839f0 FUN_140b839f0 body=112 status=ok
// SIG undefined FUN_140b839f0(void)

ulonglong FUN_140b839f0(longlong *param_1)

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  pcVar2 = (char *)0x0;
  if ((lVar1 != 0) && (pcVar2 = (char *)UWorld::IsGameWorld(lVar1), (char)pcVar2 != '\0')) {
    pcVar3 = (char *)0x0;
    if (DAT_146b17150 != 0) {
      pcVar3 = (char *)FUN_1428761d0(DAT_146b17150,lVar1);
    }
    pcVar2 = pcVar3 + 8;
    if (pcVar3 == (char *)0x0) {
      pcVar2 = (char *)0x0;
    }
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
      return CONCAT71((int7)((ulonglong)pcVar2 >> 8),1);
    }
  }
  return (ulonglong)pcVar2 & 0xffffffffffffff00;
}



// FUNCTION 140b83a60 FUN_140b83a60 body=1022 status=ok
// SIG undefined FUN_140b83a60(void)

void FUN_140b83a60(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  longlong *local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38 [2];
  
  pplVar2 = (longlong **)(param_1 + 0x1b8);
  if (*pplVar2 != (longlong *)0x0) {
    return;
  }
  FUN_140b82b80(param_1,&local_68);
  if (local_68 == (longlong *)0x0) goto LAB_140b83e0b;
  FUN_140b82810(param_1,&local_78);
  if (local_78 == 0) {
    FUN_140b84a50(param_1,2);
  }
  else {
    plVar9 = (longlong *)0x0;
    local_res8[0] = 0;
    lVar4 = FUN_140b82510();
    if (lVar4 != 0) {
      uVar5 = FUN_140b817d0(local_38);
      local_res8[0] = FUN_140bb8dc0(lVar4,uVar5);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    lVar4 = operator_new(0x88);
    plVar6 = plVar9;
    if (lVar4 != 0) {
      plVar6 = (longlong *)FUN_140da88b0(lVar4);
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
      plVar7[2] = (longlong)plVar6;
      plVar9 = plVar7;
    }
    local_88 = plVar6;
    local_80 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_88,plVar6,plVar6);
    if (pplVar2 != &local_88) {
      *pplVar2 = plVar6;
      local_88 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1c0,&local_80);
      plVar9 = local_80;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar9 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    *(undefined4 *)((longlong)*pplVar2 + 0x1c) = 10;
    *(undefined1 *)(*pplVar2 + 0xf) = 1;
    *(undefined4 *)(*pplVar2 + 0x10) = 0x40000000;
    plVar9 = *(longlong **)(param_1 + 0x1c0);
    plVar6 = *pplVar2;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    FUN_1404ab0b0(plVar6 + 4,DAT_146869e50,local_res8,0);
    local_98 = (longlong *)0x0;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_90 = 3;
    local_98 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_1442e7fd8;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      plVar7[2] = (longlong)FUN_140b84a50;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar4;
      *plVar7 = (longlong)&PTR_FUN_1442e8020;
    }
    puVar8 = (undefined8 *)(**(code **)(*local_68 + 0x108))(local_68,local_res10,&local_98);
    *(undefined8 *)(param_1 + 0x1c8) = *puVar8;
    if (local_90 == 0) {
LAB_140b83cbf:
      if (local_98 != (longlong *)0x0) {
        FMemory::Free(local_98);
      }
    }
    else if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x28))(local_98,0);
      if (local_98 != (longlong *)0x0) {
        local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
      }
      local_90 = 0;
      goto LAB_140b83cbf;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_48 = local_78;
    plStack_40 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    local_58 = plVar6;
    local_50 = plVar9;
    (**(code **)(*local_68 + 0x100))(local_68,&local_48,&local_58);
    plVar6 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_40 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    plVar6 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar9 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  plVar9 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_70 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
LAB_140b83e0b:
  plVar9 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 140b83e60 FUN_140b83e60 body=46 status=ok
// SIG undefined FUN_140b83e60(void)

void FUN_140b83e60(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*param_3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140b83e90 FUN_140b83e90 body=113 status=ok
// SIG undefined FUN_140b83e90(void)

void FUN_140b83e90(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) {
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
    if (bVar1) {
      FUN_142dafbc0(lVar2 + 0x2428,local_res10);
    }
  }
  return;
}



// FUNCTION 140b83f10 FUN_140b83f10 body=407 status=ok
// SIG undefined FUN_140b83f10(void)

void FUN_140b83f10(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  int iStack_50;
  uint uStack_4c;
  uint *local_48;
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  uint *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  
  lVar6 = *(longlong *)(param_1 + 0x100);
  if (lVar6 != 0) {
    lVar7 = *(longlong *)(lVar6 + 0x20);
    lVar6 = (longlong)*(int *)(lVar6 + 0x28) * 0x78 + lVar7;
    if (lVar7 != lVar6) {
      puVar5 = (uint *)(lVar7 + 0x38);
      do {
        uVar1 = puVar5[6];
        local_78 = 0;
        uStack_74 = 1;
        uStack_64 = 0;
        iStack_60 = 0;
        if (uVar1 != 0) {
          puVar9 = *(uint **)(puVar5 + 4);
          if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
            puVar9 = puVar5;
          }
          uVar2 = *puVar9;
          iStack_60 = 0;
          local_78 = 0;
          while (uVar2 == 0) {
            lVar4 = (longlong)local_78;
            iStack_60 = iStack_60 + 0x20;
            iVar8 = local_78 + 1;
            bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
            local_78 = iVar8;
            if (bVar3) goto LAB_140b84001;
            uVar2 = puVar9[lVar4 + 1];
          }
          uStack_74 = -uVar2 & uVar2;
          iVar8 = 0x1f;
          if (uStack_74 != 0) {
            for (; uStack_74 >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          if (uStack_74 == 0) {
            iVar8 = 0x20;
          }
          else {
            iVar8 = 0x1f - iVar8;
          }
          uStack_64 = (iStack_60 - iVar8) + 0x1f;
          if ((int)uVar1 < (int)uStack_64) {
LAB_140b84001:
            uStack_64 = uVar1;
          }
        }
        local_30 = puVar5 + -4;
        iStack_50 = local_78;
        uStack_4c = uStack_74;
        uStack_18 = 0xffffffff;
        uStack_14 = uStack_64;
        iStack_10 = iStack_60;
        uStack_40 = 0xffffffff;
        uStack_3c = uStack_64;
        local_38 = iStack_60;
        local_48 = puVar5;
        puStack_20 = puVar5;
        iStack_28 = iStack_50;
        uStack_24 = uStack_4c;
        if ((int)uStack_64 < (int)uVar1) {
          do {
            uStack_40 = uStack_40 & ~uStack_4c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
          } while ((int)uStack_3c < (int)local_48[6]);
        }
        lVar7 = lVar7 + 0x78;
        puVar5 = puVar5 + 0x1e;
      } while (lVar7 != lVar6);
    }
  }
  return;
}



// FUNCTION 140b840b0 FUN_140b840b0 body=1158 status=ok
// SIG undefined FUN_140b840b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b840b0(longlong param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 auStack_128 [32];
  int local_108;
  uint uStack_104;
  uint *puStack_100;
  uint local_f8;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  int iStack_c0;
  uint uStack_bc;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78 [4];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  if (param_1 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
    iVar9 = (int)param_3[1];
    if (iVar9 != 0) {
      local_e0 = param_2;
      local_d8 = param_1;
      if (param_2 == 0) {
        lVar8 = *(longlong *)(param_1 + 0x168);
        if (lVar8 == 0) {
          return;
        }
        local_e0 = lVar8;
        lVar6 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) {
          return;
        }
        iVar9 = (int)param_3[1];
      }
      lVar8 = *param_3;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      local_d0 = (longlong)iVar9 * 0x90 + lVar8;
      if (lVar8 != local_d0) {
        lVar8 = lVar8 + 0x74;
        do {
          local_e8 = lVar8;
          lVar7 = FWeakObjectPtr::Get(lVar8 + -8);
          lVar6 = lVar8;
          if (lVar7 != 0) {
            lVar8 = FWeakObjectPtr::Get(lVar8);
            uVar13 = local_50;
            if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x2ef) & 1) != 0)) {
              uVar3 = local_50._4_4_;
              local_50 = (ulonglong)local_50._4_4_ << 0x20;
              if (((longlong)uVar13 < 0) && (uVar3 != 0)) {
                TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                          (local_78,0);
              }
              plVar2 = (longlong *)(lVar7 + 0x2b0);
              uStack_104 = 1;
              uVar3 = *(uint *)(lVar7 + 0x2d8);
              puVar1 = (uint *)(lVar7 + 0x2c0);
              local_108 = 0;
              uStack_f4 = 0;
              iStack_f0 = 0;
              if (uVar3 != 0) {
                puVar15 = *(uint **)(lVar7 + 0x2d0);
                if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
                  puVar15 = puVar1;
                }
                uVar4 = *puVar15;
                while (uVar4 == 0) {
                  lVar6 = (longlong)local_108;
                  iStack_f0 = iStack_f0 + 0x20;
                  iVar9 = local_108 + 1;
                  bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_108;
                  local_108 = iVar9;
                  if (bVar5) goto LAB_140b842a6;
                  uVar4 = puVar15[lVar6 + 1];
                }
                uStack_104 = uVar4 - 1 & uVar4 ^ uVar4;
                iVar9 = 0x1f;
                if (uStack_104 != 0) {
                  for (; uStack_104 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                  }
                }
                if (uStack_104 == 0) {
                  iVar9 = 0x20;
                }
                else {
                  iVar9 = 0x1f - iVar9;
                }
                uStack_f4 = (iStack_f0 - iVar9) + 0x1f;
                if ((int)uVar3 < (int)uStack_f4) {
LAB_140b842a6:
                  uStack_f4 = uVar3;
                }
              }
              uVar4 = *(uint *)(lVar7 + 0x2d8);
              uStack_b0 = CONCAT44(uStack_f4,0xffffffff);
              local_a8 = CONCAT44(uStack_ec,iStack_f0);
              uStack_98 = CONCAT44(uStack_104,local_108);
              local_f8 = -1 << ((byte)uVar4 & 0x1f);
              uVar14 = uVar4 & 0xffffffe0;
              iStack_c0 = local_108;
              uStack_bc = uStack_104;
              uStack_f4 = uVar4;
              if (uVar4 != uVar3) {
                puVar15 = *(uint **)(lVar7 + 0x2d0);
                if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
                  puVar15 = puVar1;
                }
                uVar11 = puVar15[(int)uVar4 >> 5] & local_f8;
                iVar9 = (int)uVar4 >> 5;
                while (uVar11 == 0) {
                  uVar14 = uVar14 + 0x20;
                  if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
                  goto LAB_140b8438c;
                  uVar11 = puVar15[(longlong)iVar9 + 1];
                  local_f8 = 0xffffffff;
                  iVar9 = iVar9 + 1;
                }
                uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
                iVar9 = 0x1f;
                if (uVar11 != 0) {
                  for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                  }
                }
                if (uVar11 == 0) {
                  iVar9 = 0x20;
                }
                else {
                  iVar9 = 0x1f - iVar9;
                }
                uStack_f4 = (uVar14 - iVar9) + 0x1f;
                if ((int)uVar3 < (int)uStack_f4) {
LAB_140b8438c:
                  uStack_f4 = uVar3;
                }
              }
              uVar3 = uStack_f4;
              uVar13 = 0;
              puStack_100 = puVar1;
              local_b8 = puVar1;
              local_a0 = plVar2;
              puStack_90 = puVar1;
              uStack_88 = uStack_b0;
              uStack_80 = local_a8;
              local_c8 = plVar2;
              while( true ) {
                lVar7 = local_e0;
                if ((uStack_b0._4_4_ == uVar3) && (local_b8 == puVar1)) {
                  bVar5 = true;
                }
                else {
                  bVar5 = false;
                }
                if ((bVar5) && (local_c8 == plVar2)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (!bVar5) break;
                lVar6 = *(longlong *)(*local_c8 + (longlong)(int)uStack_b0._4_4_ * 0x10);
                if (lVar6 != 0) {
                  lVar7 = FUN_141484690();
                  uVar12 = local_50;
                  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if (bVar5) {
                    lVar7 = (longlong)(int)local_50;
                    iVar9 = (int)local_50 + 1;
                    local_50 = CONCAT44(local_50._4_4_,iVar9);
                    if ((int)local_50._4_4_ < iVar9) {
                      TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>
                      ::ResizeGrow(local_78,uVar12 & 0xffffffff);
                    }
                    puVar10 = local_78;
                    if (local_58 != (undefined8 *)0x0) {
                      puVar10 = local_58;
                    }
                    puVar10[lVar7] = lVar6;
                  }
                }
                uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c0);
              }
              puVar10 = local_78;
              if (local_58 != (undefined8 *)0x0) {
                puVar10 = local_58;
              }
              uVar12 = (longlong)(int)local_50 & 0x1fffffffffffffff;
              if (puVar10 + (int)local_50 < puVar10) {
                uVar12 = uVar13;
              }
              lVar6 = local_e8;
              if (uVar12 != 0) {
                do {
                  FUN_140ea9200(*puVar10,lVar8,local_d8,lVar7);
                  uVar13 = uVar13 + 1;
                  puVar10 = puVar10 + 1;
                  lVar6 = local_e8;
                } while (uVar13 != uVar12);
              }
            }
          }
          lVar8 = lVar6 + 0x90;
        } while (lVar6 + 0x1c != local_d0);
        if (local_58 != (undefined8 *)0x0) {
          local_e8 = lVar8;
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 140b84540 FUN_140b84540 body=269 status=ok
// SIG undefined FUN_140b84540(void)

void FUN_140b84540(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  FUN_140b82b80(param_1,&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x390))(local_18,param_1 + 0x1a8);
    (**(code **)(*local_18 + 0xd0))(local_18,0x120);
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 400) != &local_28) {
    *(undefined8 *)(param_1 + 400) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x198,&local_20);
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



// FUNCTION 140b84650 FUN_140b84650 body=375 status=ok
// SIG undefined FUN_140b84650(void)

void FUN_140b84650(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res20 [8];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_140b82b80(param_1,&local_28);
  if ((local_28 == (longlong *)0x0) ||
     ((**(code **)(*local_28 + 0x40))(local_28,param_1 + 0x188), param_3 != 1)) goto LAB_140b8477c;
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77cd8;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140b87f00;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77d20;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0x60))(local_28,local_res20,&local_38);
  *(undefined8 *)(param_1 + 0x188) = *puVar6;
  if (local_30 == 0) {
LAB_140b8475c:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140b8475c;
  }
  (**(code **)(*local_28 + 0x58))(local_28,param_2);
LAB_140b8477c:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140b847d0 FUN_140b847d0 body=124 status=ok
// SIG undefined FUN_140b847d0(void)

void FUN_140b847d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  FUN_140b82b80(param_1,&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0xe0))(local_18,param_1 + 0x188);
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



// FUNCTION 140b84850 FUN_140b84850 body=119 status=ok
// SIG undefined FUN_140b84850(void)

void FUN_140b84850(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_140b82a70(local_18,0);
  (**(code **)(*(longlong *)*puVar5 + 0xc0))((longlong *)*puVar5,param_1 + 0x130);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 140b848d0 FUN_140b848d0 body=373 status=ok
// SIG undefined FUN_140b848d0(void)

void FUN_140b848d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res20 [8];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_140b82b80(param_1,&local_28);
  if (local_28 == (longlong *)0x0) goto LAB_140b849fa;
  (**(code **)(*local_28 + 0xb8))(local_28,param_1 + 0x188);
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77cd8;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140b847d0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77d20;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0xd8))(local_28,local_res20,&local_38);
  *(undefined8 *)(param_1 + 0x188) = *puVar6;
  if (local_30 == 0) {
LAB_140b849dc:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140b849dc;
  }
  (**(code **)(*local_28 + 0xd0))(local_28,param_2);
LAB_140b849fa:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140b84a50 FUN_140b84a50 body=863 status=ok
// SIG undefined FUN_140b84a50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140b84be3) */
/* WARNING: Removing unreachable block (ram,0x000140b84bef) */
/* WARNING: Removing unreachable block (ram,0x000140b84c08) */
/* WARNING: Removing unreachable block (ram,0x000140b84c18) */

void FUN_140b84a50(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong *plStack_180;
  undefined8 local_178;
  longlong *local_170;
  undefined1 local_168 [16];
  longlong *local_158;
  longlong *local_150;
  undefined4 local_148 [4];
  longlong *plStack_138;
  undefined4 local_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  FUN_140b82b80(param_1,&local_158);
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x110))(local_158,param_1 + 0x1c8);
  }
  if (((param_2 == 1) && (*(longlong *)(param_1 + 0x1b8) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x10))) {
    FUN_140b82810(param_1,&local_188);
    plVar6 = plStack_180;
    if ((local_188 != 0) && (lVar5 = FUN_140b82510(param_1), plVar6 = plStack_180, lVar5 != 0)) {
      local_48 = (undefined4)local_188;
      uStack_44 = (undefined4)((ulonglong)local_188 >> 0x20);
      uStack_40 = SUB84(plStack_180,0);
      uStack_3c = (undefined4)((ulonglong)plStack_180 >> 0x20);
      if (plStack_180 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
        UNLOCK();
      }
      local_168 = ZEXT816(0);
      local_58 = 0;
      local_60 = 0;
      local_68 = 0;
      local_70 = 9999;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0;
      local_a4 = 0;
      local_a8 = 0xffffffff;
      local_b0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_d8 = 0;
      local_dc = 0;
      local_e4 = 0;
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0;
      local_100 = &PTR_FUN_143f769a0;
      local_108 = 0;
      uStack_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = &PTR_FUN_143f769a8;
      local_130 = 0xffffffff;
      plStack_138 = plStack_180;
      local_148[0] = 2;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 8);
      FUN_1404c0750(&local_128,lVar4);
      local_70 = *(undefined4 *)(lVar4 + 0xb8);
      FUN_140be4f30(lVar5,local_148);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_60);
      FUN_1404bf650(&local_128);
      if (plStack_138 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_138 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = plStack_180;
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_138)(plStack_138);
          LOCK();
          piVar1 = (int *)((longlong)plStack_138 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar6 = plStack_180;
          if (iVar3 == 1) {
            (**(code **)(*plStack_138 + 8))(plStack_138,1);
            plVar6 = plStack_180;
          }
        }
      }
    }
    plVar2 = plStack_180;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar6 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_180)(plStack_180);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_180 + 8))(plStack_180,1);
        }
      }
    }
  }
  local_170 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1b8) != &local_178) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    local_178 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1c0,&local_170);
    plVar6 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_170 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  plVar6 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_150 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  return;
}



// FUNCTION 140b84db0 FUN_140b84db0 body=421 status=ok
// SIG undefined FUN_140b84db0(void)

void FUN_140b84db0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  longlong *local_28;
  int local_20;
  longlong *local_18;
  longlong *local_10;
  
  FUN_140b82b80(param_1,&local_18);
  if ((local_18 == (longlong *)0x0) ||
     ((**(code **)(*local_18 + 400))(local_18,param_1 + 0x170), param_2 != 1)) goto LAB_140b84f01;
  local_28 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_20 = 3;
  local_28 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77cd8;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140b85240;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77d20;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_18 + 0x160))(local_18,local_38,&local_28);
  *(undefined8 *)(param_1 + 0x178) = *puVar6;
  if (local_20 == 0) {
LAB_140b84ec3:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140b84ec3;
  }
  lVar5 = *local_18;
  puVar6 = (undefined8 *)FName::FName(local_30,L"FriendSession",1);
  (**(code **)(lVar5 + 0x158))(local_18,param_3,*puVar6,param_5);
LAB_140b84f01:
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
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



// FUNCTION 140b84f60 FUN_140b84f60 body=216 status=ok
// SIG undefined FUN_140b84f60(void)

void FUN_140b84f60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 local_res20 [8];
  
  lVar2 = FUN_140b82510();
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x150);
    plVar3 = (longlong *)FUN_140bb74b0(lVar2);
    iVar5 = 0;
    if (0 < (int)plVar3[1]) {
      lVar2 = 0;
      do {
        plVar6 = (longlong *)(*plVar3 + lVar2);
        if ((((int)plVar6[1] != 0) && (plVar4 = (longlong *)*plVar6, plVar4 != (longlong *)0x0)) &&
           (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res20), *plVar4 == lVar1
           )) {
          if (((int)plVar6[1] != 0) && (plVar4 = (longlong *)*plVar6, plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            if (*plVar6 != 0) {
              lVar2 = FMemory::Realloc(*plVar6,0,0);
              *plVar6 = lVar2;
            }
            *(undefined4 *)(plVar6 + 1) = 0;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        lVar2 = lVar2 + 0x10;
      } while (iVar5 < (int)plVar3[1]);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,0);
  }
  return;
}



// FUNCTION 140b85040 FUN_140b85040 body=178 status=ok
// SIG undefined FUN_140b85040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b85040(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(float *)(param_5 + 0x40) <= -0.5) {
    FUN_14288e3d0(param_1 + 0x30,1);
    *(undefined1 *)(param_1 + 0x184) = 1;
    *(undefined4 *)(param_1 + 0x194) = 0;
    lVar1 = *(longlong *)(param_2 + 0x168);
    if (lVar1 == 0) {
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
    }
    else {
      local_18 = *(undefined8 *)(lVar1 + 0x220);
      local_10 = *(undefined4 *)(lVar1 + 0x228);
    }
    *(undefined8 *)(param_1 + 0x188) = local_18;
    *(undefined4 *)(param_1 + 400) = local_10;
  }
  return;
}



// FUNCTION 140b85100 FUN_140b85100 body=316 status=ok
// SIG undefined FUN_140b85100(void)

void FUN_140b85100(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_48;
  longlong *local_40;
  longlong local_38 [3];
  longlong local_20;
  
  if (param_2 == 0x120) {
    FUN_140b82b80(param_1,&local_48);
    plVar6 = local_48;
    if ((((local_48 != (longlong *)0x0) &&
         ((**(code **)(*local_48 + 0x168))(local_48,param_1 + 0x2f), param_3 == 1)) &&
        (lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,0x120), lVar5 != 0)) &&
       (lVar4 = *(longlong *)(lVar5 + 8), lVar4 != 0)) {
      local_20 = *(longlong *)(lVar5 + 0x10);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
        plVar6 = local_48;
      }
      local_38[2] = lVar4;
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar5 = FUN_14244c070(*(undefined8 *)(lVar5 + 400),local_38 + 2);
      if (lVar5 == 0) {
        local_38[0] = 0;
        local_38[1] = 0;
        (**(code **)(*plVar6 + 0x290))(plVar6,0x120,local_38);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
    }
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b85240 FUN_140b85240 body=176 status=ok
// SIG undefined FUN_140b85240(void)

void FUN_140b85240(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res20 [8];
  longlong *local_18;
  longlong *local_10;
  
  FUN_140b82b80(param_1,&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x168))(local_18,param_1 + 0x178);
    (**(code **)(*local_18 + 0x348))(local_18);
    lVar4 = *local_18;
    puVar6 = (undefined8 *)FName::FName(local_res20,L"FriendSession",1);
    (**(code **)(lVar4 + 0xd0))(local_18,*puVar6);
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



// FUNCTION 140b852f0 FUN_140b852f0 body=836 status=ok
// SIG undefined FUN_140b852f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b852f0(longlong param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  longlong local_128 [2];
  void *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_108 = 0;
  puVar5 = (undefined8 *)FUN_140b82a70(local_d0,0);
  (**(code **)(*(longlong *)*puVar5 + 0x98))((longlong *)*puVar5,param_1 + 0x140);
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)local_c8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  if (param_3 == 1) {
    if (*(int *)(param_4 + 1) < 1) {
      local_60 = 0x9070503;
      local_5c = 0x40b;
      local_5a = 7;
      local_118 = (void *)0x0;
      local_110 = 7;
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_118,7,0);
      _guard_xfg_dispatch_icall_nop(local_118,&local_60,7);
      local_f0 = 0;
      puVar5 = (undefined8 *)FUN_140b82a70(local_a0,0);
      (**(code **)(*(longlong *)*puVar5 + 0x20))((longlong *)*puVar5,param_1 + 0x138);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)local_98 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      local_128[0] = 0;
      local_128[1] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128,0);
      FGenericPlatformString::Memcpy(local_128[0],L"HelloQuail",0x16);
      local_e8 = 0;
      puVar5 = (undefined8 *)FUN_140b82a70(local_90,0);
      (**(code **)(*(longlong *)*puVar5 + 0x38))((longlong *)*puVar5,param_2,local_128,&local_118);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)local_88 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      if (local_128[0] != 0) {
        FMemory::Free();
      }
      if (local_118 == (void *)0x0) {
        return;
      }
      FMemory::Free();
      return;
    }
    local_100 = 0;
    puVar5 = (undefined8 *)FUN_140b82a70(local_c0,0);
    (**(code **)(*(longlong *)*puVar5 + 0x48))((longlong *)*puVar5,param_1 + 0x148);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    local_f8 = 0;
    puVar5 = (undefined8 *)FUN_140b82a70(local_b0,0);
    (**(code **)(*(longlong *)*puVar5 + 0x10))((longlong *)*puVar5,param_2,*param_4);
    local_68 = local_a8;
  }
  else {
    local_e0 = 0;
    puVar5 = (undefined8 *)FUN_140b82a70(local_80,0);
    (**(code **)(*(longlong *)*puVar5 + 0x48))((longlong *)*puVar5,param_1 + 0x148);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    local_d8 = 0;
    puVar5 = (undefined8 *)FUN_140b82a70(local_70,0);
    (**(code **)(*(longlong *)*puVar5 + 0x20))((longlong *)*puVar5,param_1 + 0x138);
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  return;
}



// FUNCTION 140b85640 FUN_140b85640 body=1010 status=ok
// SIG undefined FUN_140b85640(void)

void FUN_140b85640(longlong *param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint *puVar7;
  int iVar8;
  float fVar9;
  int local_128;
  uint uStack_124;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_100;
  uint *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  longlong *local_d8;
  undefined2 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  undefined1 local_38 [16];
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  iVar8 = 0;
  if (lVar3 != 0) {
    FUN_140b7c8e0(param_1);
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 == 0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = *(float *)(lVar3 + 0x790);
    }
    local_c8 = param_1 + 6;
    uStack_124 = 1;
    iVar5 = (int)param_1[0xb];
    puStack_b8 = (uint *)(param_1 + 8);
    local_128 = 0;
    iStack_114 = 0;
    iStack_110 = 0;
    if (iVar5 != 0) {
      puVar7 = (uint *)param_1[10];
      if ((uint *)param_1[10] == (uint *)0x0) {
        puVar7 = puStack_b8;
      }
      uVar1 = *puVar7;
      local_128 = iVar8;
      iStack_110 = iVar8;
      while (uVar1 == 0) {
        lVar3 = (longlong)local_128;
        iStack_110 = iStack_110 + 0x20;
        iVar4 = local_128 + 1;
        bVar2 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_128;
        local_128 = iVar4;
        if (bVar2) goto LAB_140b85765;
        uVar1 = puVar7[lVar3 + 1];
      }
      uStack_124 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_124 != 0) {
        for (; uStack_124 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_124 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_114 = (iStack_110 - iVar4) + 0x1f;
      if (iVar5 < iStack_114) {
LAB_140b85765:
        iStack_114 = iVar5;
      }
    }
    uStack_80 = CONCAT44(iStack_114,0xffffffff);
    auStack_b0._8_4_ = iStack_110;
    auStack_b0._0_8_ = uStack_80;
    auStack_b0._12_4_ = uStack_10c;
    uStack_c0 = CONCAT44(uStack_124,local_128);
    local_60 = 0;
    local_a0._0_4_ = SUB84(local_c8,0);
    local_a0._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
    local_78._8_4_ = (undefined4)local_a0;
    local_78._0_8_ = auStack_b0._8_8_;
    local_78._12_4_ = local_a0._4_4_;
    iVar5 = iStack_114;
    local_a0 = local_c8;
    local_98 = local_c8;
    uStack_90 = uStack_c0;
    local_88 = puStack_b8;
    local_68 = local_c8;
    if (iStack_114 < (int)param_1[0xb]) {
      do {
        uStack_124 = 1;
        local_128 = 0;
        iStack_114 = 0;
        iStack_110 = 0;
        plVar6 = (longlong *)(*local_98 + 8 + (longlong)iVar5 * 0x60);
        iVar5 = (int)plVar6[5];
        local_f8 = (uint *)(plVar6 + 2);
        if (iVar5 != 0) {
          puVar7 = (uint *)plVar6[4];
          if ((uint *)plVar6[4] == (uint *)0x0) {
            puVar7 = local_f8;
          }
          uVar1 = *puVar7;
          local_128 = iVar8;
          iStack_110 = iVar8;
          while (uVar1 == 0) {
            lVar3 = (longlong)local_128;
            iStack_110 = iStack_110 + 0x20;
            iVar4 = local_128 + 1;
            bVar2 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_128;
            local_128 = iVar4;
            if (bVar2) goto LAB_140b858a4;
            uVar1 = puVar7[lVar3 + 1];
          }
          uStack_124 = -uVar1 & uVar1;
          iVar4 = 0x1f;
          if (uStack_124 != 0) {
            for (; uStack_124 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          if (uStack_124 == 0) {
            iVar4 = 0x20;
          }
          else {
            iVar4 = 0x1f - iVar4;
          }
          iStack_114 = (iStack_110 - iVar4) + 0x1f;
          if (iVar5 < iStack_114) {
LAB_140b858a4:
            iStack_114 = iVar5;
          }
        }
        uStack_f0 = CONCAT44(iStack_114,0xffffffff);
        auStack_b0._8_4_ = iStack_110;
        auStack_b0._0_8_ = uStack_f0;
        uStack_100 = CONCAT44(uStack_124,local_128);
        local_d0 = 0;
        local_38._8_4_ = SUB84(plVar6,0);
        local_38._12_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
        local_e8._8_4_ = local_38._8_4_;
        local_e8._0_8_ = auStack_b0._8_8_;
        local_e8._12_4_ = local_38._12_4_;
        local_38._0_8_ = auStack_b0._8_8_;
        local_d8 = plVar6;
        local_c8 = plVar6;
        uStack_c0 = uStack_100;
        puStack_b8 = local_f8;
        if (iStack_114 < iVar5) {
          do {
            if (*(float *)(*plVar6 + 8 + (longlong)iStack_114 * 0x18) - fVar9 <= 0.0) {
              TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
              ::Remove(local_e8._8_8_);
              local_d0 = CONCAT11(local_d0._1_1_,1);
            }
            uStack_f0 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~uStack_100._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
            iStack_114 = uStack_f0._4_4_;
          } while (uStack_f0._4_4_ < (int)local_f8[6]);
          if (((char)local_d0 != '\0') && (local_d0._1_1_ != '\0')) {
            TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_d8,(int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34),1);
          }
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
        iVar5 = uStack_80._4_4_;
      } while (uStack_80._4_4_ < (int)local_88[6]);
      if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
        TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x8c)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x10,0);
    }
    FUN_140b8b8e0(param_1 + 6);
  }
  return;
}



// FUNCTION 140b85a40 FUN_140b85a40 body=1346 status=ok
// SIG undefined FUN_140b85a40(void)

void FUN_140b85a40(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  char local_res20 [8];
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  int local_e0;
  undefined8 *local_d8;
  ulonglong local_d0;
  longlong local_c8 [3];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90 [3];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  FUN_140b82b80(param_1,&local_a0);
  plVar11 = local_a0;
  if (local_a0 == (longlong *)0x0) goto LAB_140b85f28;
  (**(code **)(*local_a0 + 0x360))(local_a0,param_1 + 0x34);
  uVar13 = 0;
  if (param_2 == 0) {
    lVar7 = param_1[0x32];
    local_res20[0] = '\0';
    puVar6 = (undefined8 *)FName::FName(local_78,L"LIVEBACKFILL",1);
    cVar4 = FUN_1404a9770(lVar7 + 0x20,*puVar6,local_res20);
    if ((cVar4 == '\0') || (local_res20[0] == '\0')) {
      local_f8 = 0;
      local_f0 = 0;
      lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      puVar8 = (ulonglong *)UListView::OnItemSelectionChanged(*(undefined8 *)(lVar7 + 400));
      puVar6 = (undefined8 *)*puVar8;
      local_90[2] = (longlong)(int)puVar8[1] & 0x1fffffffffffffff;
      if (puVar6 + (int)puVar8[1] < puVar6) {
        local_90[2] = uVar13;
      }
      if (local_90[2] != 0) {
        do {
          lVar7 = FUN_142547b50(*puVar6,local_68);
          plVar11 = *(longlong **)(lVar7 + 0x10);
          lVar7 = *(longlong *)(lVar7 + 8);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          local_68[0] = &PTR_FUN_143f740c8;
          if (local_50 != 0) {
            FMemory::Free();
          }
          plVar9 = local_58;
          local_68[0] = &PTR_FUN_143f73d18;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_58 + 1;
            lVar14 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          uVar3 = local_f0;
          if (lVar7 == 0) {
LAB_140b85d53:
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar11 + 1;
              lVar7 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
          }
          else {
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
            }
            lVar14 = (longlong)(int)local_f0;
            iVar5 = (int)local_f0 + 1;
            local_f0 = CONCAT44(local_f0._4_4_,iVar5);
            if (local_f0._4_4_ < iVar5) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_f8,uVar3 & 0xffffffff);
            }
            plVar9 = (longlong *)(lVar14 * 0x10 + local_f8);
            *plVar9 = lVar7;
            plVar9[1] = (longlong)plVar11;
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
              LOCK();
              plVar9 = plVar11 + 1;
              lVar7 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
              goto LAB_140b85d53;
            }
          }
          puVar6 = puVar6 + 1;
          uVar13 = uVar13 + 1;
          plVar11 = local_a0;
        } while (uVar13 != local_90[2]);
      }
      if (0 < (int)local_f0) {
        local_e8 = (longlong *)0x0;
        plVar9 = (longlong *)FMemory::Realloc(0,0x30,0);
        local_e0 = 3;
        local_e8 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_143f77cd8;
          FWeakObjectPtr::operator=(plVar9 + 1,param_1);
          plVar9[2] = (longlong)FUN_140b85100;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar9[4] = lVar7;
          *plVar9 = (longlong)&PTR_FUN_143f77d20;
        }
        plVar9 = (longlong *)(**(code **)(*plVar11 + 0x160))(plVar11,local_70,&local_e8);
        param_1[0x2f] = *plVar9;
        if (local_e0 == 0) {
LAB_140b85e84:
          if (local_e8 != (longlong *)0x0) {
            FMemory::Free(local_e8);
          }
        }
        else if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 0x28))(local_e8,0);
          if (local_e8 != (longlong *)0x0) {
            local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
          }
          local_e0 = 0;
          goto LAB_140b85e84;
        }
        local_a8 = 0x120;
        (**(code **)(*plVar11 + 0x150))(plVar11,&local_f8,0x120,param_3);
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_f8);
    }
    else {
      local_d8 = (undefined8 *)0x0;
      local_d0 = 0;
      (**(code **)(*plVar11 + 0x3b0))(plVar11,param_3,&local_d8);
      uVar13 = (ulonglong)(int)local_d0;
      puVar10 = local_d8 + uVar13 * 2;
      puVar6 = local_d8;
      if (local_d8 != puVar10) {
        do {
          local_90[0] = 0;
          local_90[1] = 0;
          local_c8[0] = 0;
          local_c8[1] = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
          FGenericPlatformString::Memcpy(local_c8[0],L"DeviceId",0x12);
          (**(code **)(*(longlong *)*puVar6 + 0x20))((longlong *)*puVar6,local_c8,local_90);
          if (local_c8[0] != 0) {
            FMemory::Free();
          }
          if (local_90[0] != 0) {
            FMemory::Free();
          }
          puVar6 = puVar6 + 2;
        } while (puVar6 != puVar10);
        uVar13 = local_d0 & 0xffffffff;
      }
      if ((int)uVar13 != 0) {
        plVar11 = local_d8 + 1;
        do {
          plVar9 = (longlong *)*plVar11;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          plVar11 = plVar11 + 2;
          uVar12 = (int)uVar13 - 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 != 0);
      }
      if (local_d8 != (undefined8 *)0x0) {
        FMemory::Free(local_d8);
      }
    }
  }
  local_b0 = (longlong *)0x0;
  if (param_1 + 0x32 != local_c8 + 2) {
    param_1[0x32] = 0;
    local_c8[2] = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x33,&local_b0);
    plVar11 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_b0 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
LAB_140b85f28:
  plVar11 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_98 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  return;
}



// FUNCTION 140b85f90 FUN_140b85f90 body=204 status=ok
// SIG undefined FUN_140b85f90(void)

void FUN_140b85f90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res18 [16];
  
  lVar1 = FUN_140b82510();
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1f8);
    iVar4 = 0;
    if (0 < *(int *)(lVar1 + 0x9a8)) {
      lVar6 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x9a0) + lVar6);
        if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res18), *plVar2 == lVar3
           )) {
          if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar5 != 0) {
              lVar3 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar3;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar4 < *(int *)(lVar1 + 0x9a8));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar1 + 0x9a0),0);
  }
  return;
}



// FUNCTION 140b86060 FUN_140b86060 body=397 status=ok
// SIG undefined FUN_140b86060(void)

void FUN_140b86060(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  Online::GetVoiceInterface(&local_28,0);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,param_1 + 0x118);
    local_38 = 0;
    local_30 = 0;
    (**(code **)(*local_28 + 0x40))(local_28,param_2,&local_38);
    if ((int)local_30 != 0) {
      plVar7 = (longlong *)(local_38 + 0x28);
      iVar6 = (int)local_30;
      do {
        plVar4 = (longlong *)plVar7[3];
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
        plVar4 = (longlong *)*plVar7;
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
        plVar4 = (longlong *)plVar7[-3];
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
        plVar7 = plVar7 + 0xd;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  plVar7 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140b861f0 FUN_140b861f0 body=283 status=ok
// SIG undefined FUN_140b861f0(void)

void FUN_140b861f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_1404cdd50(&local_28,0);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x18))(local_28,param_1 + 0x128);
    if (param_2 == 1) {
      local_38 = 0;
      local_30 = 0;
      (**(code **)(*local_28 + 0x38))(local_28,&local_38);
      if ((int)local_30 != 0) {
        plVar7 = (longlong *)(local_38 + 8);
        iVar6 = (int)local_30;
        do {
          plVar4 = (longlong *)*plVar7;
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
          plVar7 = plVar7 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
  }
  plVar7 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140b86310 FUN_140b86310 body=648 status=ok
// SIG undefined FUN_140b86310(void)

void FUN_140b86310(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_78 [8];
  longlong *local_70;
  int local_68;
  longlong local_60;
  ulonglong local_58;
  longlong *local_50;
  longlong *local_48;
  
  FUN_1404cdd50(&local_50,0);
  plVar6 = local_50;
  if (local_50 == (longlong *)0x0) goto LAB_140b8653f;
  (**(code **)(*local_50 + 0xa0))(local_50,param_1 + 0x128);
  if (param_3 == 1) {
    local_60 = 0;
    local_58 = 0;
    (**(code **)(*plVar6 + 0xc0))(plVar6,param_2,&local_60);
    uVar10 = (ulonglong)(int)local_58;
    lVar11 = uVar10 * 0x10 + local_60;
    lVar7 = local_60;
    if (local_60 != lVar11) {
      do {
        plVar6 = *(longlong **)(lVar7 + 8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          plVar8 = plVar6 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != lVar11);
      uVar10 = local_58 & 0xffffffff;
      plVar6 = local_50;
    }
    if ((int)uVar10 != 0) {
      plVar8 = (longlong *)(local_60 + 8);
      do {
        plVar6 = (longlong *)*plVar8;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        plVar8 = plVar8 + 2;
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
        plVar6 = local_50;
      } while (uVar9 != 0);
    }
    if (local_60 != 0) {
      FMemory::Free(local_60);
    }
  }
  local_70 = (longlong *)0x0;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_68 = 3;
  local_70 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_143f4d200;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    plVar8[2] = (longlong)FUN_140b87630;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar7;
    *plVar8 = (longlong)&PTR_FUN_143f4d248;
  }
  puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x68))(plVar6,local_78,&local_70);
  *(undefined8 *)(param_1 + 0x128) = *puVar5;
  if (local_68 == 0) {
LAB_140b86520:
    if (local_70 != (longlong *)0x0) {
      FMemory::Free(local_70);
    }
  }
  else if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x28))(local_70,0);
    if (local_70 != (longlong *)0x0) {
      local_70 = (longlong *)FMemory::Realloc(local_70,0,0);
    }
    local_68 = 0;
    goto LAB_140b86520;
  }
  (**(code **)(*plVar6 + 0x88))(plVar6,param_2,0xffffffff);
LAB_140b8653f:
  plVar6 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_48 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  return;
}



// FUNCTION 140b865a0 FUN_140b865a0 body=685 status=ok
// SIG undefined FUN_140b865a0(void)

void FUN_140b865a0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [8];
  longlong *local_80;
  int local_78;
  undefined8 *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  Online::GetSessionInterface(&local_50,0);
  if ((local_50 != (longlong *)0x0) &&
     ((**(code **)(*local_50 + 0x120))(local_50,param_1 + 0x168), param_3 == 1)) {
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    local_90 = 0;
    local_8c = 0xffffffff;
    (**(code **)(*local_50 + 0x138))(local_50,param_2,param_4,&local_70,&local_90);
    puVar6 = local_70 + (longlong)(int)local_68 * 2;
    for (puVar8 = local_70; puVar8 != puVar6; puVar8 = puVar8 + 2) {
      lVar4 = (**(code **)(*(longlong *)*puVar8 + 0x38))();
      if (((*(byte *)(lVar4 + 0x10) & 8) != 0) &&
         (lVar4 = (**(code **)(*(longlong *)*puVar8 + 0x38))(), (*(byte *)(lVar4 + 0x10) & 4) != 0))
      {
        FUN_140b82b80(param_1,&local_60);
        if (local_60 != (longlong *)0x0) {
          local_80 = (longlong *)0x0;
          plVar5 = (longlong *)FMemory::Realloc(0,0x30);
          local_78 = 3;
          local_80 = plVar5;
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_1442e8338;
            FWeakObjectPtr::operator=(plVar5 + 1,param_1);
            plVar5[2] = (longlong)FUN_140b84db0;
            lVar4 = FDelegateHandle::GenerateNewID();
            plVar5[4] = lVar4;
            *plVar5 = (longlong)&PTR_FUN_1442e8380;
          }
          puVar6 = (undefined8 *)(**(code **)(*local_60 + 0x188))(local_60,local_88,&local_80);
          *(undefined8 *)(param_1 + 0x170) = *puVar6;
          if (local_78 == 0) {
LAB_140b8674d:
            if (local_80 != (longlong *)0x0) {
              FMemory::Free(local_80);
            }
          }
          else if (local_80 != (longlong *)0x0) {
            (**(code **)(*local_80 + 0x28))(local_80,0);
            if (local_80 != (longlong *)0x0) {
              local_80 = (longlong *)FMemory::Realloc(local_80,0,0);
            }
            local_78 = 0;
            goto LAB_140b8674d;
          }
          lVar4 = *local_60;
          uVar7 = (**(code **)(*(longlong *)*puVar8 + 8))((longlong *)*puVar8,local_40);
          (**(code **)(lVar4 + 0x180))(local_60,param_2,uVar7);
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_38 + 1;
            lVar4 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_38)(local_38);
              LOCK();
              piVar2 = (int *)((longlong)local_38 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_38 + 8))(local_38,1);
              }
            }
          }
        }
        plVar5 = local_58;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_58 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
          }
        }
        break;
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_70);
  }
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  return;
}



// FUNCTION 140b86850 FUN_140b86850 body=563 status=ok
// SIG undefined FUN_140b86850(void)

void FUN_140b86850(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_78 [8];
  longlong *local_70;
  int local_68;
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  FUN_1404cdd50(&local_48,0);
  plVar6 = local_48;
  if (local_48 == (longlong *)0x0) goto LAB_140b86a2c;
  (**(code **)(*local_48 + 0xf8))(local_48,param_1 + 0x128);
  FUN_140b82810(param_1,&local_58);
  plVar3 = plStack_50;
  if (local_58 != 0) {
    local_70 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_68 = 3;
    local_70 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f4d200;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_140b86310;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f4d248;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x98))(plVar6,local_78,&local_70);
    *(undefined8 *)(param_1 + 0x128) = *puVar5;
    if (local_68 == 0) {
LAB_140b86973:
      if (local_70 != (longlong *)0x0) {
        FMemory::Free(local_70);
      }
    }
    else if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x28))(local_70,0);
      if (local_70 != (longlong *)0x0) {
        local_70 = (longlong *)FMemory::Realloc(local_70,0,0);
      }
      local_68 = 0;
      goto LAB_140b86973;
    }
    plVar3 = plStack_50;
    local_38 = local_58;
    plStack_30 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      plVar6 = local_48;
    }
    (**(code **)(*plVar6 + 0xb8))(plVar6,&local_38);
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar3 = plStack_50;
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar3 = plStack_50;
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
          plVar3 = plStack_50;
        }
      }
    }
  }
  plVar6 = plStack_50;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar3 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
LAB_140b86a2c:
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140b86a90 FUN_140b86a90 body=858 status=ok
// SIG undefined FUN_140b86a90(void)

void FUN_140b86a90(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 local_res20 [8];
  longlong *local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar7 = (longlong *)0x0;
  FUN_140b82220(&local_88,0);
  plVar9 = local_88;
  if (local_88 == (longlong *)0x0) goto LAB_140b86d90;
  (**(code **)(*local_88 + 0x38))(local_88,param_1 + 0x110);
  FUN_140b83f10(param_1);
  lVar4 = operator_new(0x38);
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140b79740(lVar4);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_1442e8728;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  pplVar2 = (longlong **)(param_1 + 0x100);
  local_78 = plVar5;
  local_70 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_78,plVar5,plVar5);
  if (pplVar2 != &local_78) {
    *pplVar2 = plVar5;
    local_78 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x108,&local_70);
    plVar7 = local_70;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar7 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    plVar9 = local_88;
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar9 = local_88;
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
        plVar9 = local_88;
      }
    }
  }
  local_98 = (longlong *)0x0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_90 = 3;
  local_98 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_1442e7fd8;
    FWeakObjectPtr::operator=(plVar7 + 1,param_1);
    plVar7[2] = (longlong)FUN_140b86df0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar4;
    *plVar7 = (longlong)&PTR_FUN_1442e8020;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,local_res20,&local_98);
  *(undefined8 *)(param_1 + 0x110) = *puVar8;
  if (local_90 == 0) {
LAB_140b86c81:
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x28))(local_98,0);
    if (local_98 != (longlong *)0x0) {
      local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
    }
    local_90 = 0;
    goto LAB_140b86c81;
  }
  local_58 = *pplVar2;
  local_50 = *(longlong **)(param_1 + 0x108);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    plVar9 = local_88;
  }
  puVar8 = (undefined8 *)FUN_140b82810(param_1,local_48);
  local_68 = *puVar8;
  local_60 = (longlong *)puVar8[1];
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    plVar9 = local_88;
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_68,&local_58);
  plVar9 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_60 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_40 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar9 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
LAB_140b86d90:
  plVar9 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_80 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 140b86df0 FUN_140b86df0 body=873 status=ok
// SIG undefined FUN_140b86df0(void)

void FUN_140b86df0(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 local_res20 [8];
  longlong *local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar7 = (longlong *)0x0;
  FUN_140b82220(&local_88,0);
  plVar9 = local_88;
  if (local_88 == (longlong *)0x0) goto LAB_140b870ff;
  (**(code **)(*local_88 + 0x38))(local_88,param_1 + 0x110);
  FUN_140b83f10(param_1);
  lVar4 = operator_new(0x38);
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140b79740(lVar4);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_1442e8728;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  pplVar2 = (longlong **)(param_1 + 0x100);
  local_78 = plVar5;
  local_70 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_78,plVar5,plVar5);
  if (pplVar2 != &local_78) {
    *pplVar2 = plVar5;
    local_78 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x108,&local_70);
    plVar7 = local_70;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar7 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    plVar9 = local_88;
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar9 = local_88;
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
        plVar9 = local_88;
      }
    }
  }
  local_98 = (longlong *)0x0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_90 = 3;
  local_98 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_1442e7fd8;
    FWeakObjectPtr::operator=(plVar7 + 1,param_1);
    plVar7[2] = (longlong)FUN_140b87260;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar4;
    *plVar7 = (longlong)&PTR_FUN_1442e8020;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,local_res20,&local_98);
  *(undefined8 *)(param_1 + 0x110) = *puVar8;
  if (local_90 == 0) {
LAB_140b86fe1:
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x28))(local_98,0);
    if (local_98 != (longlong *)0x0) {
      local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
    }
    local_90 = 0;
    goto LAB_140b86fe1;
  }
  local_58 = *pplVar2;
  local_50 = *(longlong **)(param_1 + 0x108);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    plVar9 = local_88;
  }
  puVar8 = (undefined8 *)FUN_140b82810(param_1,local_48);
  local_68 = *puVar8;
  local_60 = (longlong *)puVar8[1];
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    plVar9 = local_88;
  }
  (**(code **)(*plVar9 + 0x20))(plVar9,&local_68,0x32,10,&local_58);
  plVar9 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_60 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_40 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar9 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
LAB_140b870ff:
  plVar9 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_80 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 140b87160 FUN_140b87160 body=250 status=ok
// SIG undefined FUN_140b87160(void)

void FUN_140b87160(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  FUN_140b82220(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x38))(local_18,param_1 + 0x110);
    FUN_140b83f10(param_1);
    local_20 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x100) != &local_28) {
      *(undefined8 *)(param_1 + 0x100) = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x108,&local_20);
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



// FUNCTION 140b87260 FUN_140b87260 body=971 status=ok
// SIG undefined FUN_140b87260(void)

void FUN_140b87260(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 local_res20 [8];
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  
  plVar9 = (longlong *)0x0;
  FUN_140b82220(&local_98,0);
  plVar11 = local_98;
  if (local_98 == (longlong *)0x0) goto LAB_140b875d1;
  (**(code **)(*local_98 + 0x38))(local_98,param_1 + 0x110);
  FUN_140b83f10(param_1);
  lVar6 = operator_new(0x38);
  plVar7 = plVar9;
  if (lVar6 != 0) {
    plVar7 = (longlong *)FUN_140b79740(lVar6);
  }
  plVar8 = (longlong *)operator_new(0x18);
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_DestroyObject_1442e8728;
    plVar8[2] = (longlong)plVar7;
    plVar9 = plVar8;
  }
  pplVar2 = (longlong **)(param_1 + 0x100);
  local_78 = plVar7;
  local_70 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_78,plVar7,plVar7);
  if (pplVar2 != &local_78) {
    *pplVar2 = plVar7;
    local_78 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x108,&local_70);
    plVar9 = local_70;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    plVar11 = local_98;
    if ((int)lVar6 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar11 = local_98;
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
        plVar11 = local_98;
      }
    }
  }
  local_a8 = (longlong *)0x0;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_a0 = 3;
  local_a8 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_1442e7fd8;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)FUN_140b87160;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar9[4] = lVar6;
    *plVar9 = (longlong)&PTR_FUN_1442e8020;
  }
  puVar10 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,local_res20,&local_a8);
  *(undefined8 *)(param_1 + 0x110) = *puVar10;
  if (local_a0 == 0) {
LAB_140b87451:
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  else if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x28))(local_a8,0);
    if (local_a8 != (longlong *)0x0) {
      local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
    }
    local_a0 = 0;
    goto LAB_140b87451;
  }
  FUN_140b82810(param_1,local_88);
  local_68 = *pplVar2;
  local_60 = *(longlong **)(param_1 + 0x108);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    plVar11 = local_98;
  }
  auVar4._4_4_ = uStack_80;
  auVar4._0_4_ = uStack_84;
  auVar4._8_4_ = uStack_7c;
  auVar5._12_4_ = 0;
  auVar5._0_12_ = auVar4;
  local_48 = auVar5 << 0x20;
  lVar6 = auVar4._4_8_;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    plVar11 = local_98;
  }
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  (**(code **)(*plVar11 + 0x28))(plVar11,local_58,local_48,10,&local_68);
  plVar11 = (longlong *)CONCAT44(uStack_4c,uStack_50);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar11 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if ((longlong *)local_48._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar11 = (longlong *)(local_48._8_8_ + 8);
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (*(code *)**(undefined8 **)local_48._8_8_)(local_48._8_8_);
      LOCK();
      piVar1 = (int *)(local_48._8_8_ + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)local_48._8_8_ + 8))(local_48._8_8_,1);
      }
    }
  }
  plVar11 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_60 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (CONCAT44(uStack_7c,uStack_80) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_7c,uStack_80) + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      puVar10 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
      (**(code **)*puVar10)(puVar10);
      LOCK();
      piVar1 = (int *)((longlong)puVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_7c,uStack_80) + 8))
                  ((longlong *)CONCAT44(uStack_7c,uStack_80),1);
      }
    }
  }
LAB_140b875d1:
  plVar11 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_90 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  return;
}



// FUNCTION 140b87630 FUN_140b87630 body=629 status=ok
// SIG undefined FUN_140b87630(void)

void FUN_140b87630(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_68 [8];
  longlong *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  longlong *local_40;
  longlong *local_38;
  
  FUN_1404cdd50(&local_40,0);
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x70))(local_40,param_1 + 0x128);
    if (param_3 == 1) {
      local_50 = 0;
      local_48 = 0;
      (**(code **)(*plVar6 + 0x90))(plVar6,param_2,&local_50);
      uVar10 = (ulonglong)(int)local_48;
      lVar11 = uVar10 * 0x10 + local_50;
      lVar7 = local_50;
      if (local_50 != lVar11) {
        do {
          plVar6 = *(longlong **)(lVar7 + 8);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            LOCK();
            plVar8 = plVar6 + 1;
            lVar4 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != lVar11);
        uVar10 = local_48 & 0xffffffff;
        plVar6 = local_40;
      }
      if ((int)uVar10 != 0) {
        plVar8 = (longlong *)(local_50 + 8);
        do {
          plVar6 = (longlong *)*plVar8;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar6 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar8 = plVar8 + 2;
          uVar9 = (int)uVar10 - 1;
          uVar10 = (ulonglong)uVar9;
          plVar6 = local_40;
        } while (uVar9 != 0);
      }
      if (local_50 != 0) {
        FMemory::Free(local_50);
      }
    }
    local_60 = (longlong *)0x0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    local_58 = 3;
    local_60 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_1442e7fd8;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      plVar8[2] = (longlong)FUN_140b861f0;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar7;
      *plVar8 = (longlong)&PTR_FUN_1442e8020;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,local_68,&local_60);
    *(undefined8 *)(param_1 + 0x128) = *puVar5;
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_140b8784c;
      (**(code **)(*local_60 + 0x28))(local_60,0);
      if (local_60 != (longlong *)0x0) {
        local_60 = (longlong *)FMemory::Realloc(local_60,0,0);
      }
      local_58 = 0;
    }
    if (local_60 != (longlong *)0x0) {
      FMemory::Free(local_60);
    }
  }
LAB_140b8784c:
  plVar6 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_38 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 140b878b0 FUN_140b878b0 body=133 status=ok
// SIG undefined FUN_140b878b0(void)

void FUN_140b878b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404cf890(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x128))(local_18,param_1 + 0x1e8);
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



// FUNCTION 140b87940 FUN_140b87940 body=137 status=ok
// SIG undefined FUN_140b87940(void)

void FUN_140b87940(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404cf890(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x1b0))(local_18,param_1 + 0x1e0);
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



// FUNCTION 140b879d0 FUN_140b879d0 body=133 status=ok
// SIG undefined FUN_140b879d0(void)

void FUN_140b879d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_20;
  longlong *local_18;
  
  FUN_1404cf890(&local_20,0,param_3,param_4,0);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x100))(local_20,param_1 + 0x1d8);
  }
  plVar5 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 140b87a60 FUN_140b87a60 body=500 status=ok
// SIG undefined FUN_140b87a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b87a60(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  void *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  puVar5 = (undefined8 *)FUN_140b82a70(local_80,0);
  (**(code **)(*(longlong *)*puVar5 + 0x20))((longlong *)*puVar5,param_1 + 0x138);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if (param_4 == 1) {
    local_90 = 0;
    puVar5 = (undefined8 *)FUN_140b82a70(local_70,0);
    (**(code **)(*(longlong *)*puVar5 + 0xb0))((longlong *)*puVar5,param_2,param_3);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
  }
  else {
    local_50 = 0x9070503;
    local_4c = 0x40b;
    local_4a = 7;
    local_a8 = (void *)0x0;
    local_a0 = 7;
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_a8,7,0);
    _guard_xfg_dispatch_icall_nop(local_a8,&local_50,7);
    local_b8[0] = 0;
    local_b8[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
    FGenericPlatformString::Memcpy(local_b8[0],L"HelloQuail",0x16);
    local_88 = 0;
    puVar5 = (undefined8 *)FUN_140b82a70(local_60,0);
    (**(code **)(*(longlong *)*puVar5 + 0x38))((longlong *)*puVar5,param_2,local_b8,&local_a8);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140b87c60 FUN_140b87c60 body=130 status=ok
// SIG undefined FUN_140b87c60(void)

void FUN_140b87c60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  Online::GetExternalUIInterface(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x18))(local_18,param_1 + 0xf8);
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



// FUNCTION 140b87cf0 FUN_140b87cf0 body=130 status=ok
// SIG undefined FUN_140b87cf0(void)

void FUN_140b87cf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  FUN_140b81da0(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x20))(local_18,param_1 + 0x1f0);
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



// FUNCTION 140b87d80 FUN_140b87d80 body=133 status=ok
// SIG undefined FUN_140b87d80(void)

void FUN_140b87d80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_20;
  longlong *local_18;
  
  FUN_1404cf2e0(&local_20,0,param_3,param_4,0);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x220))(local_20,param_1 + 0x1d0);
  }
  plVar5 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 140b87e10 FUN_140b87e10 body=232 status=ok
// SIG undefined FUN_140b87e10(void)

void FUN_140b87e10(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res18 [8];
  
  lVar1 = FUN_140b82510();
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1b0);
    iVar4 = 0;
    if (0 < *(int *)(lVar1 + 0xca0)) {
      lVar6 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0xc98) + lVar6);
        if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res18), *plVar2 == lVar3
           )) {
          if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar5 != 0) {
              lVar3 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar3;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar4 < *(int *)(lVar1 + 0xca0));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar1 + 0xc98),0);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 140b87f00 FUN_140b87f00 body=410 status=ok
// SIG undefined FUN_140b87f00(void)

void FUN_140b87f00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res20 [8];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_140b82b80(param_1,&local_28);
  if (local_28 == (longlong *)0x0) goto LAB_140b8804f;
  (**(code **)(*local_28 + 0x68))(local_28,param_1 + 0x188);
  lVar4 = (**(code **)(*local_28 + 0x2c8))(local_28,param_2);
  local_38 = (longlong *)0x0;
  *(undefined1 *)(lVar4 + 0x17) = 0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f77cd8;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)FUN_140b880a0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143f77d20;
  }
  puVar7 = (undefined8 *)(**(code **)(*local_28 + 0x88))(local_28,local_res20,&local_38);
  *(undefined8 *)(param_1 + 0x188) = *puVar7;
  if (local_30 == 0) {
LAB_140b88026:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140b88026;
  }
  (**(code **)(*local_28 + 0x80))(local_28,param_2,lVar4,1);
LAB_140b8804f:
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
  return;
}



// FUNCTION 140b880a0 FUN_140b880a0 body=373 status=ok
// SIG undefined FUN_140b880a0(void)

void FUN_140b880a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res20 [8];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_140b82b80(param_1,&local_28);
  if (local_28 == (longlong *)0x0) goto LAB_140b881ca;
  (**(code **)(*local_28 + 0x90))(local_28,param_1 + 0x188);
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77cd8;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140b848d0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77d20;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0xb0))(local_28,local_res20,&local_38);
  *(undefined8 *)(param_1 + 0x188) = *puVar6;
  if (local_30 == 0) {
LAB_140b881ac:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140b881ac;
  }
  (**(code **)(*local_28 + 0xa8))(local_28,param_2);
LAB_140b881ca:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140b88220 FUN_140b88220 body=116 status=ok
// SIG undefined FUN_140b88220(void)

void FUN_140b88220(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_140b82a70(local_18,0);
  (**(code **)(*(longlong *)*puVar5 + 0x48))((longlong *)*puVar5,param_1 + 0x148);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 140b882a0 FUN_140b882a0 body=81 status=ok
// SIG undefined FUN_140b882a0(void)

void FUN_140b882a0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
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
      FUN_140d07ad0(param_2);
    }
  }
  return;
}



// FUNCTION 140b88300 FUN_140b88300 body=347 status=ok
// SIG undefined FUN_140b88300(void)

void FUN_140b88300(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = UBlindWidget::GetPrivateStaticClass();
  lVar3 = AGameStateBase::OnRep_GameModeClass(param_1,uVar2);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = UBlindWidget::GetPrivateStaticClass();
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
    return;
  }
  if (param_2 != 0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b883e5;
  }
  param_2 = *(longlong *)(param_2 + 0x20);
  if (param_2 == 0) {
    return;
  }
  lVar4 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
LAB_140b883e5:
  uVar2 = UBlindWidget::GetPrivateStaticClass();
  lVar4 = AGameStateBase::OnRep_GameModeClass(param_2,uVar2);
  if (lVar4 != 0) {
    lVar5 = UBlindWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(lVar4 + 0x1a0) != '\0')) {
      *(undefined1 *)(lVar3 + 0x1a0) = 1;
      *(undefined4 *)(lVar3 + 0x198) = *(undefined4 *)(lVar4 + 0x198);
    }
  }
  return;
}



// FUNCTION 140b88460 FUN_140b88460 body=341 status=ok
// SIG undefined FUN_140b88460(void)

void FUN_140b88460(longlong *param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  longlong local_18;
  int local_10;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))();
  }
  lVar4 = FUN_1405e8e00(lVar3);
  if (lVar4 != 0) {
    lVar5 = FUN_1414196e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b884d3;
  }
  lVar4 = 0;
LAB_140b884d3:
  if ((param_2 != 0) && (lVar3 != 0)) {
    iVar2 = FUN_1428cf800(lVar3);
    if ((iVar2 != 3) && (lVar4 != 0)) {
      UWorld::GetPlayerControllerIterator(lVar3,&local_18);
      while( true ) {
        if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar3 = FWeakObjectPtr::Get();
        if (lVar3 != 0) {
          lVar5 = FUN_14145f370();
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
            FUN_14145e040(lVar3,param_2,param_3);
          }
        }
        local_10 = local_10 + 1;
      }
      local_res8 = param_2;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar4 + 0x29f8,&local_res8);
    }
  }
  return;
}



// FUNCTION 140b885c0 FUN_140b885c0 body=265 status=ok
// SIG undefined FUN_140b885c0(void)

void FUN_140b885c0(longlong *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_a8 [32];
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  undefined1 local_38 [24];
  longlong local_20;
  
  uVar1 = FUN_140b15f00(local_38);
  FUN_140b7b030(param_2,uVar1);
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14142bde0();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      param_2[1] = *(undefined1 *)(lVar2 + 0x340);
      *param_2 = *(undefined1 *)(lVar2 + 0x348);
      FUN_140b2ab40(lVar2);
      FWeakObjectPtr::operator=(param_2 + 4);
      _guard_xfg_dispatch_icall_nop(local_a8,0,0x68);
      FUN_142ff3000(lVar2,local_a8);
      FUN_142ff5940(local_a8,param_2 + 0x10,1);
      if (local_58 != 0) {
        FMemory::Free();
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
    }
  }
  return;
}



// FUNCTION 140b886d0 FUN_140b886d0 body=406 status=ok
// SIG undefined FUN_140b886d0(void)

void FUN_140b886d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  local_b8 = 0;
  FUN_140b15f00(&local_b0);
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  *param_2 = 0;
  FUN_140b7b030(param_2 + 1,&local_b0);
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (param_1 != 0) {
    puVar2 = (undefined8 *)FUN_14222e2d0(param_1,local_res8);
    *param_2 = *puVar2;
    plVar1 = *(longlong **)(param_1 + 0x568);
    uVar3 = FUN_140b15f00(&local_b8);
    FUN_140b7b030(param_2 + 1,uVar3);
    if (local_a0 != 0) {
      FMemory::Free();
    }
    if (plVar1 != (longlong *)0x0) {
      uVar3 = FUN_14142bde0();
      lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
      if (lVar4 != 0) {
        *(undefined1 *)((longlong)param_2 + 9) = *(undefined1 *)(lVar4 + 0x340);
        *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar4 + 0x348);
        FUN_140b2ab40(lVar4);
        FWeakObjectPtr::operator=((longlong)param_2 + 0xc);
        _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
        FUN_142ff3000(lVar4,local_78);
        FUN_142ff5940(local_78,param_2 + 3,1);
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
    }
  }
  return;
}



// FUNCTION 140b88870 FUN_140b88870 body=1573 status=ok
// SIG undefined FUN_140b88870(void)

void FUN_140b88870(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  int local_118;
  uint uStack_114;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f0;
  uint *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong *local_d0;
  int iStack_c8;
  uint uStack_c4;
  uint *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar11 = (**(code **)(*param_1 + 0x148))();
  if ((param_2 != 0) && (lVar11 != 0)) {
    FUN_140b7c8e0(param_1);
    lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar11 == 0) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = *(float *)(lVar11 + 0x790);
    }
    plVar1 = (longlong *)(param_2 + 0x40);
    iVar21 = (int)param_1[7] - *(int *)((longlong)param_1 + 100);
    iVar12 = *(int *)(param_2 + 0x4c);
    iVar16 = *(int *)(param_2 + 0x48);
    if (iVar12 < iVar21) {
      if (iVar16 != 0) {
        plVar18 = (longlong *)(*plVar1 + 8);
        do {
          if (*plVar18 != 0) {
            FMemory::Free();
          }
          plVar18 = plVar18 + 3;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        iVar12 = *(int *)(param_2 + 0x4c);
      }
      *(undefined4 *)(param_2 + 0x48) = 0;
      if (iVar12 != iVar21) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar1,iVar21);
      }
    }
    else {
      if (iVar16 != 0) {
        plVar18 = (longlong *)(*plVar1 + 8);
        do {
          if (*plVar18 != 0) {
            FMemory::Free();
          }
          plVar18 = plVar18 + 3;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      *(undefined4 *)(param_2 + 0x48) = 0;
    }
    plVar18 = param_1 + 6;
    uStack_114 = 1;
    uVar5 = *(uint *)(param_1 + 0xb);
    puVar2 = (uint *)(param_1 + 8);
    local_118 = 0;
    uStack_104 = 0;
    iStack_100 = 0;
    if (uVar5 != 0) {
      puVar20 = (uint *)param_1[10];
      if ((uint *)param_1[10] == (uint *)0x0) {
        puVar20 = puVar2;
      }
      uVar6 = *puVar20;
      while (uVar6 == 0) {
        lVar11 = (longlong)local_118;
        iStack_100 = iStack_100 + 0x20;
        iVar12 = local_118 + 1;
        bVar10 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_118;
        local_118 = iVar12;
        if (bVar10) goto LAB_140b88a54;
        uVar6 = puVar20[lVar11 + 1];
      }
      uStack_114 = -uVar6 & uVar6;
      iVar12 = 0x1f;
      if (uStack_114 != 0) {
        for (; uStack_114 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uStack_114 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_104 = (iStack_100 - iVar12) + 0x1f;
      if ((int)uVar5 < (int)uStack_104) {
LAB_140b88a54:
        uStack_104 = uVar5;
      }
    }
    uVar6 = *(uint *)(param_1 + 0xb);
    uStack_e0 = CONCAT44(uStack_104,0xffffffff);
    uStack_d8 = CONCAT44(uStack_fc,iStack_100);
    uStack_f0 = CONCAT44(uStack_114,local_118);
    uVar19 = uVar6 & 0xffffffe0;
    iStack_c8 = local_118;
    uStack_c4 = uStack_114;
    puStack_e8 = puVar2;
    local_c0 = puVar2;
    uStack_b8 = uStack_e0;
    local_b0 = uStack_d8;
    local_d0 = plVar18;
    uStack_104 = uVar6;
    if (uVar6 != uVar5) {
      puVar20 = (uint *)param_1[10];
      if ((uint *)param_1[10] == (uint *)0x0) {
        puVar20 = puVar2;
      }
      uVar14 = puVar20[(int)uVar6 >> 5] & -1 << ((byte)uVar6 & 0x1f);
      iVar12 = (int)uVar6 >> 5;
      while (uVar14 == 0) {
        uVar19 = uVar19 + 0x20;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_140b88b37;
        uVar14 = puVar20[(longlong)iVar12 + 1];
        iVar12 = iVar12 + 1;
      }
      uVar14 = -uVar14 & uVar14;
      iVar12 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uVar14 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_104 = (uVar19 - iVar12) + 0x1f;
      if ((int)uVar5 < (int)uStack_104) {
LAB_140b88b37:
        uStack_104 = uVar5;
      }
    }
    while( true ) {
      uVar5 = uStack_104;
      if (((uStack_b8._4_4_ == uStack_104) && (local_c0 == puVar2)) && (local_d0 == plVar18)) break;
      puVar13 = (undefined8 *)((longlong)(int)uStack_b8._4_4_ * 0x60 + *local_d0);
      plVar3 = puVar13 + 1;
      uVar7 = *puVar13;
      if (0 < *(int *)(puVar13 + 2) - *(int *)((longlong)puVar13 + 0x3c)) {
        iVar12 = *(int *)(param_2 + 0x48);
        lVar11 = (longlong)iVar12;
        *(int *)(param_2 + 0x48) = iVar12 + 1;
        if (*(int *)(param_2 + 0x4c) < iVar12 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar12);
        }
        lVar8 = *plVar1;
        lVar4 = lVar8 + lVar11 * 0x18;
        *(undefined8 *)(lVar8 + 0x10 + lVar11 * 0x18) = 0;
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(undefined8 *)(lVar8 + lVar11 * 0x18) = uVar7;
        if (*(int *)(lVar4 + 0x14) < *(int *)(puVar13 + 2) - *(int *)((longlong)puVar13 + 0x3c)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar4 + 8);
        }
        uVar6 = *(uint *)(puVar13 + 6);
        puStack_e8 = (uint *)(puVar13 + 3);
        uStack_114 = 1;
        local_118 = 0;
        uStack_104 = 0;
        iStack_100 = 0;
        if (uVar6 != 0) {
          puVar20 = (uint *)puVar13[5];
          if ((uint *)puVar13[5] == (uint *)0x0) {
            puVar20 = puStack_e8;
          }
          uVar19 = *puVar20;
          while (uVar19 == 0) {
            lVar11 = (longlong)local_118;
            iStack_100 = iStack_100 + 0x20;
            iVar12 = local_118 + 1;
            bVar10 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_118;
            local_118 = iVar12;
            if (bVar10) goto LAB_140b88c95;
            uVar19 = puVar20[lVar11 + 1];
          }
          uStack_114 = -uVar19 & uVar19;
          iVar12 = 0x1f;
          if (uStack_114 != 0) {
            for (; uStack_114 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          if (uStack_114 == 0) {
            iVar12 = 0x20;
          }
          else {
            iVar12 = 0x1f - iVar12;
          }
          uStack_104 = (iStack_100 - iVar12) + 0x1f;
          if ((int)uVar6 < (int)uStack_104) {
LAB_140b88c95:
            uStack_104 = uVar6;
          }
        }
        uVar19 = *(uint *)(puVar13 + 6);
        uStack_e0 = CONCAT44(uStack_104,0xffffffff);
        uStack_d8 = CONCAT44(uStack_fc,iStack_100);
        uStack_a0 = CONCAT44(uStack_114,local_118);
        uVar14 = uVar19 & 0xffffffe0;
        uStack_f0 = CONCAT44(uStack_114,local_118);
        local_a8 = plVar3;
        puStack_98 = puStack_e8;
        uStack_90 = uStack_e0;
        uStack_88 = uStack_d8;
        uStack_104 = uVar19;
        if (uVar19 != uVar6) {
          puVar20 = (uint *)puVar13[5];
          if ((uint *)puVar13[5] == (uint *)0x0) {
            puVar20 = puStack_e8;
          }
          uVar15 = puVar20[(int)uVar19 >> 5] & -1 << ((byte)uVar19 & 0x1f);
          iVar12 = (int)uVar19 >> 5;
          while (uVar15 == 0) {
            uVar14 = uVar14 + 0x20;
            if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
            goto LAB_140b88d68;
            uVar15 = puVar20[(longlong)iVar12 + 1];
            iVar12 = iVar12 + 1;
          }
          uVar15 = -uVar15 & uVar15;
          iVar12 = 0x1f;
          if (uVar15 != 0) {
            for (; uVar15 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          if (uVar15 == 0) {
            iVar12 = 0x20;
          }
          else {
            iVar12 = 0x1f - iVar12;
          }
          uStack_104 = (uVar14 - iVar12) + 0x1f;
          if ((int)uVar6 < (int)uStack_104) {
LAB_140b88d68:
            uStack_104 = uVar6;
          }
        }
        while( true ) {
          lVar11 = (longlong)(int)uStack_e0._4_4_;
          if ((uStack_e0._4_4_ == uStack_104) && (puStack_e8 == (uint *)(puVar13 + 3))) break;
          lVar8 = *plVar3;
          if ((*(char *)(lVar8 + 0xc + lVar11 * 0x18) != '\0') &&
             (fVar22 = *(float *)(lVar8 + 8 + lVar11 * 0x18) - fVar23, 0.0 < fVar22)) {
            iVar12 = *(int *)(lVar4 + 0x10);
            lVar17 = (longlong)iVar12;
            *(int *)(lVar4 + 0x10) = iVar12 + 1;
            if (*(int *)(lVar4 + 0x14) < iVar12 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 8,iVar12);
            }
            lVar9 = *(longlong *)(lVar4 + 8);
            *(undefined8 *)(lVar9 + 8 + lVar17 * 0x10) = 0;
            *(undefined8 *)(lVar9 + lVar17 * 0x10) = 0;
            *(undefined8 *)(lVar9 + lVar17 * 0x10) = *(undefined8 *)(lVar8 + lVar11 * 0x18);
            *(int *)(lVar9 + 8 + lVar17 * 0x10) = (int)fVar22;
          }
          uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
        }
      }
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(uint)uStack_b8 & ~uStack_c4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c8);
      uStack_104 = uVar5;
    }
  }
  return;
}



// FUNCTION 140b88ea0 FUN_140b88ea0 body=199 status=ok
// SIG undefined FUN_140b88ea0(void)

void FUN_140b88ea0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  undefined1 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  UObject::PostLoad();
  if (*(int *)(param_1 + 0x260) != *(int *)(param_1 + 0x28c)) {
    lVar2 = *(longlong *)(param_1 + 0x298);
    if (*(longlong *)(param_1 + 0x298) == 0) {
      lVar2 = param_1 + 0x290;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x2a0) - 1U & 9) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 600);
      do {
        if (*(char *)(lVar2 + (longlong)iVar1 * 0x28) == '\t') {
          if (iVar1 != -1) {
            return;
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x20 + (longlong)iVar1 * 0x28);
      } while (iVar1 != -1);
    }
  }
  local_20 = *(undefined8 *)(param_1 + 0x248);
  local_28 = *(undefined8 *)(param_1 + 0x240);
  local_18 = *(undefined8 *)(param_1 + 0x250);
  local_38 = local_res8;
  local_30 = &local_28;
  local_res8[0] = 9;
  FUN_140b77fe0((longlong *)(param_1 + 600),local_res10,&local_38,0);
  return;
}



// FUNCTION 140b88f70 FUN_140b88f70 body=1507 status=ok
// SIG undefined FUN_140b88f70(void)

longlong * FUN_140b88f70(longlong *param_1,ulonglong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 local_128 [8];
  longlong local_120;
  undefined1 *local_108;
  int local_100;
  int local_fc;
  undefined1 local_f8;
  longlong local_f0;
  int local_e8;
  int local_e4;
  longlong *local_e0;
  int local_d8;
  int local_d4;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_a0;
  undefined1 local_98 [32];
  longlong *local_78;
  int local_70;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  
  if ((param_1 == (longlong *)0x0) || (param_1[0x42] == 0)) {
    return (longlong *)0x0;
  }
  _guard_xfg_dispatch_icall_nop(local_98,0,0x68);
  FUN_142ff3000(param_1,local_98);
  FUN_142fdea10(local_128,local_98);
  iVar9 = 0;
  if (*(longlong *)(local_120 + 0x38) == 0) {
    if (*(longlong *)(local_120 + 0x30) != 0) {
      iVar9 = FUN_140b824e0();
    }
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(local_120 + 0x38) + 0x38);
    if (lVar15 != 0) {
      iVar9 = *(int *)(lVar15 + 0x48) + -1;
    }
  }
  if (local_100 != 0) {
    plVar14 = (longlong *)(local_108 + 8);
    iVar10 = local_100;
    do {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  local_100 = 0;
  if (local_fc != iVar9) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (&local_108,iVar9);
  }
  iVar10 = local_100;
  if (local_100 < iVar9) {
    iVar9 = iVar9 - local_100;
    lVar15 = (longlong)local_100;
    local_100 = local_100 + iVar9;
    if (local_fc < local_100) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_108,iVar10);
    }
    puVar4 = local_108 + lVar15 * 0x18;
    if (iVar9 != 0) {
      puVar3 = puVar4 + 0x14;
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 0x18;
        *(undefined8 *)(puVar3 + -0xc) = 0;
        *(undefined8 *)(puVar3 + -4) = 0;
        puVar3 = puVar3 + 0x18;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if ((iVar9 < local_100) && (iVar10 = local_100 - iVar9, iVar10 != 0)) {
    plVar14 = (longlong *)(local_108 + (longlong)iVar9 * 0x18 + 8);
    iVar11 = iVar10;
    do {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 3;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    iVar11 = (local_100 - iVar10) - iVar9;
    if (iVar11 != 0) {
      _guard_xfg_dispatch_icall_nop
                (local_108 + (longlong)iVar9 * 0x18,local_108 + (longlong)(iVar10 + iVar9) * 0x18,
                 (longlong)iVar11 * 0x18);
    }
    local_100 = local_100 - iVar10;
    TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&local_108);
  }
  uVar18 = 0;
  for (puVar4 = local_108; puVar4 != local_108 + (longlong)local_100 * 0x18; puVar4 = puVar4 + 0x18)
  {
    *puVar4 = 1;
  }
  uVar20 = (ulonglong)((longlong)(local_78 + local_70) + (7 - (longlong)local_78)) >> 3;
  if (local_78 + local_70 < local_78) {
    uVar20 = 0;
  }
  plVar14 = local_78;
  if (uVar20 != 0) {
    do {
      puVar4 = local_108;
      lVar15 = *plVar14;
      uVar5 = (ulonglong)*(byte *)(lVar15 + 0x38);
      iVar9 = *(int *)(local_108 + uVar5 * 0x18 + 0x10);
      *(int *)(local_108 + uVar5 * 0x18 + 0x10) = iVar9 + 1;
      if (*(int *)(local_108 + uVar5 * 0x18 + 0x14) < iVar9 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (local_108 + uVar5 * 0x18 + 8,iVar9);
      }
      uVar18 = uVar18 + 1;
      *(longlong *)(*(longlong *)(puVar4 + uVar5 * 0x18 + 8) + (longlong)iVar9 * 8) = lVar15;
      plVar14 = plVar14 + 1;
    } while (uVar18 != uVar20);
  }
  iVar9 = (int)param_2[1];
  local_f8 = 0;
  local_e8 = 0;
  if (local_e4 != iVar9) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_f0,iVar9);
    iVar9 = (int)param_2[1];
  }
  puVar16 = (undefined8 *)*param_2;
  plVar14 = (longlong *)0x0;
  plVar13 = (longlong *)((longlong)iVar9 & 0x1fffffffffffffff);
  if (puVar16 + iVar9 < puVar16) {
    plVar13 = plVar14;
  }
  plVar12 = plVar14;
  if (plVar13 != (longlong *)0x0) {
    do {
      iVar9 = local_e8;
      lVar15 = (longlong)local_e8;
      uVar7 = *puVar16;
      local_e8 = local_e8 + 1;
      if (local_e4 < local_e8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_f0,iVar9);
      }
      puVar16 = puVar16 + 1;
      plVar12 = (longlong *)((longlong)plVar12 + 1);
      *(undefined8 *)(local_f0 + lVar15 * 8) = uVar7;
    } while (plVar12 != plVar13);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  FUN_142ffd340(&local_a8,param_1,local_c8,0,0);
  plVar13 = (longlong *)param_1[0x46];
  plVar12 = (longlong *)((longlong)(int)param_1[0x47] & 0x1fffffffffffffff);
  if (plVar13 + (int)param_1[0x47] < plVar13) {
    plVar12 = plVar14;
  }
  plVar17 = local_e0;
  plVar19 = plVar14;
  iVar9 = local_d8;
  if (plVar12 != (longlong *)0x0) {
    do {
      lVar15 = *plVar13;
      if (lVar15 != 0) {
        for (plVar8 = local_a8; plVar8 != local_a8 + local_a0; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar15) goto LAB_140b89387;
        }
        for (plVar8 = plVar17; plVar8 != plVar17 + iVar9; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar15) {
            if ((int)((longlong)plVar8 - (longlong)plVar17 >> 3) != -1) goto LAB_140b89387;
            break;
          }
        }
        local_d8 = iVar9 + 1;
        if (local_d4 < local_d8) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e0,iVar9);
          plVar17 = local_e0;
        }
        plVar17[iVar9] = lVar15;
        plVar17 = local_e0;
        iVar9 = local_d8;
      }
LAB_140b89387:
      plVar13 = plVar13 + 1;
      plVar19 = (longlong *)((longlong)plVar19 + 1);
    } while (plVar19 != plVar12);
  }
  lVar15 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar15 != 0) && (lVar15 = *(longlong *)(lVar15 + 0x148), lVar15 != 0)) {
    lVar6 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar14 = (longlong *)0x0;
    if (bVar1) {
      *(undefined1 *)(lVar15 + 0xa48) = 1;
      lVar6 = param_1[0x24];
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
      }
      plVar14 = (longlong *)FUN_14301a0d0(lVar6,local_128,0);
      *(undefined1 *)(lVar15 + 0xa48) = 0;
      if (plVar14 != (longlong *)0x0) {
        uVar7 = FUN_14301f8f0();
        lVar15 = (**(code **)(*plVar14 + 0x628))(plVar14,uVar7);
        if (lVar15 == 0) {
          (**(code **)(*plVar14 + 0x6d0))(plVar14,0);
          plVar14 = (longlong *)0x0;
        }
        else {
          cVar2 = (char)param_1[0x4c];
          if (cVar2 != -1) {
            cVar2 = cVar2 + '\x01';
            *(char *)(param_1 + 0x4c) = cVar2;
          }
          *(char *)(lVar15 + 0x260) = cVar2;
        }
      }
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_c8[2] != 0) {
    FMemory::Free();
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  if (local_e0 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_f0 != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (&local_108);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  return plVar14;
}



// FUNCTION 140b89560 FUN_140b89560 body=622 status=ok
// SIG undefined FUN_140b89560(void)

void FUN_140b89560(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_res18 [16];
  longlong *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  
  FUN_140b82810(param_1,&local_68);
  if (CONCAT44(uStack_64,local_68) == 0) goto LAB_140b89787;
  FUN_1404cf890(&local_58,0);
  plVar8 = local_58;
  if (local_58 != (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_70 = 3;
    local_78 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_1442e8578;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_140b87940;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_1442e85c0;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x1a8))(plVar8,local_res18,&local_78);
    *(undefined8 *)(param_1 + 0x1e0) = *puVar7;
    if (local_70 == 0) {
LAB_140b89675:
      if (local_78 != (longlong *)0x0) {
        FMemory::Free(local_78);
      }
    }
    else if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x28))(local_78,0);
      if (local_78 != (longlong *)0x0) {
        local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
      }
      local_70 = 0;
      goto LAB_140b89675;
    }
    auVar3._4_4_ = uStack_60;
    auVar3._0_4_ = uStack_64;
    auVar3._8_4_ = uStack_5c;
    auVar4._12_4_ = 0;
    auVar4._0_12_ = auVar3;
    local_38 = auVar4 << 0x20;
    lVar6 = auVar3._4_8_;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
      plVar8 = local_58;
    }
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    (**(code **)(*plVar8 + 0x1a0))(plVar8,local_48,local_38);
    plVar8 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar8 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if ((longlong *)local_38._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar8 = (longlong *)(local_38._8_8_ + 8);
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (*(code *)**(undefined8 **)local_38._8_8_)(local_38._8_8_);
        LOCK();
        piVar1 = (int *)(local_38._8_8_ + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)local_38._8_8_ + 8))(local_38._8_8_,1);
        }
      }
    }
  }
  plVar8 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
LAB_140b89787:
  if (CONCAT44(uStack_5c,uStack_60) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_5c,uStack_60) + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puVar7 = (undefined8 *)CONCAT44(uStack_5c,uStack_60);
      (**(code **)*puVar7)(puVar7);
      LOCK();
      piVar1 = (int *)((longlong)puVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_5c,uStack_60) + 8))
                  ((longlong *)CONCAT44(uStack_5c,uStack_60),1);
      }
    }
  }
  return;
}



// FUNCTION 140b897d0 FUN_140b897d0 body=531 status=ok
// SIG undefined FUN_140b897d0(void)

void FUN_140b897d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res18 [16];
  longlong *local_68;
  int local_60;
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  FUN_140b82810(param_1,&local_58);
  plVar3 = plStack_50;
  if (local_58 == 0) goto LAB_140b899a3;
  FUN_1404cf890(&local_48,0);
  plVar6 = local_48;
  plVar3 = plStack_50;
  if (local_48 != (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_60 = 3;
    local_68 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_1442e8068;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_140b878b0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_1442e80b0;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x120))(plVar6,local_res18,&local_68);
    *(undefined8 *)(param_1 + 0x1e8) = *puVar5;
    if (local_60 == 0) {
LAB_140b898da:
      if (local_68 != (longlong *)0x0) {
        FMemory::Free(local_68);
      }
    }
    else if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x28))(local_68,0);
      if (local_68 != (longlong *)0x0) {
        local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
      }
      local_60 = 0;
      goto LAB_140b898da;
    }
    plVar3 = plStack_50;
    local_38 = local_58;
    plStack_30 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      plVar6 = local_48;
    }
    (**(code **)(*plVar6 + 0x118))(plVar6,&local_38);
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar3 = plStack_50;
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar3 = plStack_50;
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
          plVar3 = plStack_50;
        }
      }
    }
  }
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plVar3 = plStack_50;
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar3 = plStack_50;
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
        plVar3 = plStack_50;
      }
    }
  }
LAB_140b899a3:
  plVar6 = plStack_50;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar3 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140b899f0 FUN_140b899f0 body=531 status=ok
// SIG undefined FUN_140b899f0(void)

void FUN_140b899f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res18 [16];
  longlong *local_68;
  int local_60;
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  FUN_140b82810(param_1,&local_58);
  plVar3 = plStack_50;
  if (local_58 == 0) goto LAB_140b89bc3;
  FUN_1404cf890(&local_48,0);
  plVar6 = local_48;
  plVar3 = plStack_50;
  if (local_48 != (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_60 = 3;
    local_68 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_1442e84e8;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_140b879d0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_1442e8530;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0xf8))(plVar6,local_res18,&local_68);
    *(undefined8 *)(param_1 + 0x1d8) = *puVar5;
    if (local_60 == 0) {
LAB_140b89afa:
      if (local_68 != (longlong *)0x0) {
        FMemory::Free(local_68);
      }
    }
    else if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x28))(local_68,0);
      if (local_68 != (longlong *)0x0) {
        local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
      }
      local_60 = 0;
      goto LAB_140b89afa;
    }
    plVar3 = plStack_50;
    local_38 = local_58;
    plStack_30 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      plVar6 = local_48;
    }
    (**(code **)(*plVar6 + 0xf0))(plVar6,&local_38);
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar3 = plStack_50;
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar3 = plStack_50;
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
          plVar3 = plStack_50;
        }
      }
    }
  }
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plVar3 = plStack_50;
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar3 = plStack_50;
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
        plVar3 = plStack_50;
      }
    }
  }
LAB_140b89bc3:
  plVar6 = plStack_50;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar3 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140b89c10 FUN_140b89c10 body=4663 status=ok
// SIG undefined FUN_140b89c10(void)

void FUN_140b89c10(ulonglong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  void *pvVar16;
  longlong *plVar17;
  int iVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  int iVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined2 *puVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  longlong *plVar29;
  longlong *plVar30;
  ulonglong uVar31;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_50 [16];
  
  *(undefined4 *)(param_1 + 0x1090) = 0;
  local_res8 = param_1;
  if (*(int *)(param_1 + 0x1094) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1088,0);
  }
  local_78 = (longlong *)(param_1 + 0x1098);
  lVar13 = 0;
  *(undefined4 *)(param_1 + 0x10a0) = 0;
  if (*(int *)(param_1 + 0x10a4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(local_78,0);
  }
  plVar27 = (longlong *)(param_1 + 0x1000);
  local_88 = plVar27;
  if (plVar27 != (longlong *)(param_1 + 0x178)) {
    iVar21 = *(int *)(param_1 + 0x180);
    pvVar16 = *(void **)(param_1 + 0x178);
    *(int *)(param_1 + 0x1008) = iVar21;
    if ((iVar21 == 0) && (*(int *)(param_1 + 0x100c) == 0)) {
      *(undefined4 *)(param_1 + 0x100c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar27,iVar21);
      _guard_xfg_dispatch_icall_nop((void *)*plVar27,pvVar16,(longlong)iVar21 << 3);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x1038);
  local_d0 = plVar1;
  if (plVar1 != (longlong *)(param_1 + 0x168)) {
    iVar21 = *(int *)(param_1 + 0x170);
    pvVar16 = *(void **)(param_1 + 0x168);
    *(int *)(param_1 + 0x1040) = iVar21;
    if ((iVar21 == 0) && (*(int *)(param_1 + 0x1044) == 0)) {
      *(undefined4 *)(param_1 + 0x1044) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar21);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,pvVar16,(longlong)iVar21 << 3);
    }
  }
  local_a8 = param_1 + 0x1048;
  *(undefined4 *)(param_1 + 0x1050) = 0;
  if (*(int *)(param_1 + 0x1054) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(local_a8,0);
  }
  local_c0 = (longlong *)(param_1 + 0x1058);
  *(undefined4 *)(param_1 + 0x1060) = 0;
  if (*(int *)(param_1 + 0x1064) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(local_c0,0);
  }
  local_b8 = (longlong *)(param_1 + 0x1068);
  *(undefined4 *)(param_1 + 0x1070) = 0;
  if (*(int *)(param_1 + 0x1074) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(local_b8,0);
  }
  local_c8 = param_1 + 0x10a8;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
            (local_c8,param_1 + 0x118);
  plVar1 = (longlong *)(param_1 + 0x10f8);
  local_a0 = plVar1;
  if (plVar1 != (longlong *)(param_1 + 0x520)) {
    iVar21 = *(int *)(param_1 + 0x528);
    pvVar16 = *(void **)(param_1 + 0x520);
    *(int *)(param_1 + 0x1100) = iVar21;
    if ((iVar21 == 0) && (*(int *)(param_1 + 0x1104) == 0)) {
      *(undefined4 *)(param_1 + 0x1104) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar21);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,pvVar16,(longlong)iVar21 << 3);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x1108);
  local_98 = plVar1;
  if (plVar1 != (longlong *)(param_1 + 0x530)) {
    iVar21 = *(int *)(param_1 + 0x538);
    pvVar16 = *(void **)(param_1 + 0x530);
    *(int *)(param_1 + 0x1110) = iVar21;
    if ((iVar21 == 0) && (*(int *)(param_1 + 0x1114) == 0)) {
      *(undefined4 *)(param_1 + 0x1114) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar21);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,pvVar16,(longlong)iVar21 << 3);
    }
  }
  local_b0 = (longlong *)(param_1 + 0x1078);
  *(undefined4 *)(param_1 + 0x1080) = 0;
  if (*(int *)(param_1 + 0x1084) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(local_b0,0);
  }
  local_d8 = (longlong *)(param_1 + 0x1010);
  *(undefined4 *)(param_1 + 0x1018) = 0;
  if (*(int *)(param_1 + 0x101c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(local_d8,0);
  }
  plVar1 = (longlong *)(param_1 + 0x1118);
  *(undefined4 *)(param_1 + 0x1120) = 0;
  if (*(int *)(param_1 + 0x1124) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_90 = (longlong *)(param_1 + 0x1128);
  *(undefined4 *)(param_1 + 0x1130) = 0;
  if (*(int *)(param_1 + 0x1134) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(local_90,0);
  }
  plVar29 = (longlong *)(param_1 + 0x1138);
  iVar21 = *(int *)(param_1 + 0x1140);
  if (iVar21 != 0) {
    plVar17 = (longlong *)(*plVar29 + 0x10);
    do {
      if (*plVar17 != 0) {
        FMemory::Free();
      }
      TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
      ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(plVar17 + -2);
      plVar17 = plVar17 + 4;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  *(undefined4 *)(param_1 + 0x1140) = 0;
  if (*(int *)(param_1 + 0x1144) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar29,0);
  }
  puVar6 = (undefined8 *)FName::FName(local_50,L"AssetRegistry",1);
  uVar10 = *puVar6;
  uVar7 = FUN_14168dc80();
  plVar17 = (longlong *)FUN_141690010(uVar7,uVar10);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_80 = plVar17;
  plVar8 = (longlong *)(**(code **)(*plVar17 + 0x48))(plVar17);
  lVar9 = FUN_1414a12b0();
  (**(code **)(*plVar8 + 0x28))(plVar8,*(undefined8 *)(lVar9 + 0x18),&local_e8,1);
  plVar8 = local_e8 + (longlong)(int)local_e0 * 0xb;
  if (local_e8 != plVar8) {
    local_res18 = 0;
    plVar30 = local_e8;
    do {
      if (*plVar30 != lVar13) {
        puVar6 = (undefined8 *)FName::ToString(plVar30,local_70);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar24 = &DAT_143f3eda8;
        }
        else {
          puVar24 = (undefined2 *)*puVar6;
        }
        uVar10 = UObject::GetPrivateStaticClass();
        lVar9 = FUN_141799410(uVar10,0,puVar24,0);
        local_res20 = lVar9;
        if (local_70[0] != 0) {
          FMemory::Free();
        }
        if (lVar9 == 0) {
          puVar6 = (undefined8 *)FName::ToString(plVar30,local_60);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar24 = &DAT_143f3eda8;
          }
          else {
            puVar24 = (undefined2 *)*puVar6;
          }
          uVar10 = UObject::GetPrivateStaticClass();
          lVar9 = FUN_141799c90(uVar10,0,puVar24,0,0,0,1);
          local_res20 = lVar9;
          if (local_60[0] != 0) {
            FMemory::Free();
          }
          if (lVar9 == 0) goto LAB_140b8a644;
        }
        lVar11 = FUN_1414a12b0();
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
          iVar21 = *(int *)(lVar9 + 0x40);
          if (iVar21 != 0) {
            iVar18 = (int)plVar27[1];
            if (*(int *)((longlong)plVar27 + 0xc) < iVar18 + iVar21) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(plVar27);
              iVar18 = (int)plVar27[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar27 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0x38),
                       (longlong)iVar21 << 3);
            *(int *)(plVar27 + 1) = (int)plVar27[1] + iVar21;
          }
          iVar21 = *(int *)(lVar9 + 0x350);
          if (iVar21 != 0) {
            iVar18 = *(int *)(param_1 + 0x1120);
            if (*(int *)(param_1 + 0x1124) < iVar18 + iVar21) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
              iVar18 = *(int *)(param_1 + 0x1120);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0x348),
                       (longlong)iVar21 << 3);
            *(int *)(param_1 + 0x1120) = *(int *)(param_1 + 0x1120) + iVar21;
          }
          plVar19 = local_d8;
          plVar17 = *(longlong **)(lVar9 + 0x348);
          plVar27 = plVar17 + *(int *)(lVar9 + 0x350);
          plVar23 = local_d0;
          for (; local_d0 = plVar23, plVar17 != plVar27; plVar17 = plVar17 + 1) {
            lVar13 = *plVar17;
            if (lVar13 != 0) {
              iVar21 = *(int *)(lVar13 + 0x98);
              if (iVar21 != 0) {
                iVar18 = (int)plVar19[1];
                if (*(int *)((longlong)plVar19 + 0xc) < iVar21 + iVar18) {
                  TArray<void_*,FDefaultAllocator>::ResizeTo(plVar19);
                  iVar18 = (int)plVar19[1];
                }
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar19 + (longlong)iVar18 * 8),*(void **)(lVar13 + 0x90),
                           (longlong)iVar21 << 3);
                *(int *)(plVar19 + 1) = (int)plVar19[1] + iVar21;
              }
              plVar22 = *(longlong **)(lVar13 + 0x90);
              plVar23 = plVar22 + *(int *)(lVar13 + 0x98);
              for (; plVar22 != plVar23; plVar22 = plVar22 + 1) {
                lVar9 = *plVar22;
                if (lVar9 != 0) {
                  lVar11 = FUN_1413f2810();
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
                    *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(lVar13 + 0xa0);
                  }
                }
              }
              iVar21 = *(int *)(lVar13 + 0xa0);
              plVar23 = (longlong *)(local_res8 + 0x1028);
              piVar3 = (int *)*plVar23;
              iVar18 = *(int *)(local_res8 + 0x1030);
              for (piVar12 = piVar3; piVar12 != piVar3 + iVar18; piVar12 = piVar12 + 1) {
                if (*piVar12 == iVar21) {
                  if ((int)((longlong)piVar12 - (longlong)piVar3 >> 2) != -1) goto LAB_140b8a239;
                  break;
                }
              }
              *(int *)(local_res8 + 0x1030) = iVar18 + 1;
              if (*(int *)(local_res8 + 0x1034) < iVar18 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar23,iVar18);
              }
              *(int *)(*plVar23 + (longlong)iVar18 * 4) = iVar21;
            }
LAB_140b8a239:
            lVar13 = local_res18;
            lVar9 = local_res20;
            plVar23 = local_d0;
          }
          uVar28 = 0;
          iVar21 = *(int *)(lVar9 + 0x50);
          if (iVar21 != 0) {
            iVar18 = (int)plVar23[1];
            if (*(int *)((longlong)plVar23 + 0xc) < iVar21 + iVar18) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(plVar23);
              iVar18 = (int)plVar23[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar23 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0x48),
                       (longlong)iVar21 << 3);
            *(int *)(plVar23 + 1) = (int)plVar23[1] + iVar21;
          }
          TMap<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,0>_>
          ::Append<FDefaultSetAllocator>(local_c8,lVar9 + 0x58);
          plVar27 = local_c0;
          iVar21 = *(int *)(lVar9 + 0xb8);
          if (iVar21 != 0) {
            iVar18 = (int)local_c0[1];
            if (*(int *)((longlong)local_c0 + 0xc) < iVar21 + iVar18) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(local_c0);
              iVar18 = (int)plVar27[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar27 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0xb0),
                       (longlong)iVar21 << 3);
            *(int *)(plVar27 + 1) = (int)plVar27[1] + iVar21;
          }
          plVar27 = local_b8;
          iVar21 = *(int *)(lVar9 + 200);
          if (iVar21 != 0) {
            iVar18 = (int)local_b8[1];
            if (*(int *)((longlong)local_b8 + 0xc) < iVar21 + iVar18) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(local_b8);
              iVar18 = (int)plVar27[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar27 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0xc0),
                       (longlong)iVar21 << 3);
            *(int *)(plVar27 + 1) = (int)plVar27[1] + iVar21;
          }
          plVar27 = local_b0;
          iVar21 = *(int *)(lVar9 + 0xd8);
          if (iVar21 != 0) {
            iVar18 = (int)local_b0[1];
            if (*(int *)((longlong)local_b0 + 0xc) < iVar21 + iVar18) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(local_b0);
              iVar18 = (int)plVar27[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar27 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0xd0),
                       (longlong)iVar21 << 3);
            *(int *)(plVar27 + 1) = (int)plVar27[1] + iVar21;
          }
          if (*(longlong *)(lVar9 + 0xa8) != 0) {
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>();
          }
          plVar27 = local_a0;
          iVar21 = *(int *)(lVar9 + 0x330);
          if (iVar21 != 0) {
            iVar18 = (int)local_a0[1];
            if (*(int *)((longlong)local_a0 + 0xc) < iVar21 + iVar18) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(local_a0);
              iVar18 = (int)plVar27[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar27 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0x328),
                       (longlong)iVar21 << 3);
            *(int *)(plVar27 + 1) = (int)plVar27[1] + iVar21;
          }
          plVar17 = local_98;
          plVar27 = *(longlong **)(lVar9 + 0x338);
          uVar26 = (longlong)*(int *)(lVar9 + 0x340) & 0x1fffffffffffffff;
          if (plVar27 + *(int *)(lVar9 + 0x340) < plVar27) {
            uVar26 = uVar28;
          }
          local_res10 = uVar26;
          if (uVar26 != 0) {
            do {
              lVar13 = *plVar27;
              if (lVar13 != 0) {
                plVar23 = (longlong *)*plVar17;
                iVar21 = (int)plVar17[1];
                for (plVar19 = plVar23; plVar19 != plVar23 + iVar21; plVar19 = plVar19 + 1) {
                  if ((*plVar19 == 0) || (*(int *)(*plVar19 + 0xa0) <= *(int *)(lVar13 + 0xa0))) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (bVar4) {
                    iVar18 = (int)((longlong)plVar19 - (longlong)plVar23 >> 3);
                    if ((iVar18 < 0) || (*(int *)(local_res8 + 0x1110) <= iVar18))
                    goto LAB_140b8a45f;
                    bVar4 = true;
                    goto LAB_140b8a461;
                  }
                }
                iVar18 = -1;
LAB_140b8a45f:
                bVar4 = false;
LAB_140b8a461:
                iVar5 = iVar21 + 1;
                *(int *)(plVar17 + 1) = iVar5;
                if (bVar4) {
                  if (*(int *)((longlong)plVar17 + 0xc) < iVar5) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (plVar17,iVar21);
                  }
                  pvVar16 = (void *)(*plVar17 + (longlong)iVar18 * 8);
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)pvVar16 + 8),pvVar16,
                             (longlong)(iVar21 - iVar18) << 3);
                  *(longlong *)(*plVar17 + (longlong)iVar18 * 8) = lVar13;
                  uVar26 = local_res10;
                }
                else {
                  if (*(int *)((longlong)plVar17 + 0xc) < iVar5) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (plVar17,iVar21);
                    uVar26 = local_res10;
                  }
                  *(longlong *)(*plVar17 + (longlong)iVar21 * 8) = lVar13;
                }
              }
              plVar27 = plVar27 + 1;
              uVar28 = uVar28 + 1;
              lVar13 = local_res18;
              lVar9 = local_res20;
            } while (uVar28 != uVar26);
          }
          plVar27 = local_90;
          iVar21 = (int)local_90[1];
          *(int *)(local_90 + 1) = iVar21 + 1;
          if (*(int *)((longlong)local_90 + 0xc) < iVar21 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_90,iVar21);
          }
          *(undefined8 *)(*plVar27 + (longlong)iVar21 * 8) = *(undefined8 *)(lVar9 + 0x360);
          iVar21 = *(int *)(lVar9 + 0x370);
          local_res10 = CONCAT44(local_res10._4_4_,iVar21);
          if (iVar21 != 0) {
            iVar18 = *(int *)(param_1 + 0x1140);
            if (*(int *)(param_1 + 0x1144) < iVar21 + iVar18) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
              ResizeTo(plVar29);
              iVar18 = *(int *)(param_1 + 0x1140);
            }
            puVar20 = (undefined4 *)(*(longlong *)(lVar9 + 0x368) + 8);
            puVar6 = (undefined8 *)((longlong)iVar18 * 0x20 + *plVar29);
            do {
              *puVar6 = 0;
              FUN_1409f0400(puVar6,*(undefined8 *)(puVar20 + -2),*puVar20,0,0);
              puVar6[2] = 0;
              iVar18 = puVar20[4];
              pvVar16 = *(void **)(puVar20 + 2);
              *(int *)(puVar6 + 3) = iVar18;
              if (iVar18 == 0) {
                *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (puVar6 + 2,iVar18,0);
                _guard_xfg_dispatch_icall_nop((void *)puVar6[2],pvVar16,(longlong)iVar18 << 3);
              }
              puVar6 = puVar6 + 4;
              puVar20 = puVar20 + 8;
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
            *(int *)(param_1 + 0x1140) = *(int *)(param_1 + 0x1140) + (int)local_res10;
            lVar13 = local_res18;
            lVar9 = local_res20;
          }
          uVar28 = local_res8;
          iVar21 = *(int *)(local_res8 + 0x1090);
          *(int *)(local_res8 + 0x1090) = iVar21 + 1;
          if (*(int *)(local_res8 + 0x1094) < iVar21 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (local_res8 + 0x1088,iVar21);
          }
          *(longlong *)(*(longlong *)(uVar28 + 0x1088) + (longlong)iVar21 * 8) = lVar9;
          plVar27 = local_88;
        }
      }
LAB_140b8a644:
      plVar30 = plVar30 + 0xb;
      plVar17 = local_80;
    } while (plVar30 != plVar8);
  }
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  plVar17 = (longlong *)(**(code **)(*plVar17 + 0x48))(plVar17);
  lVar13 = FUN_141304350();
  (**(code **)(*plVar17 + 0x28))(plVar17,*(undefined8 *)(lVar13 + 0x18),&local_f8,1);
  plVar17 = local_f8 + (longlong)(int)local_f0 * 0xb;
  if (local_f8 != plVar17) {
    local_res18 = 0;
    lVar13 = 0;
    plVar8 = local_f8;
    do {
      if (*plVar8 != lVar13) {
        puVar6 = (undefined8 *)FName::ToString(plVar8,local_60);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar24 = &DAT_143f3eda8;
        }
        else {
          puVar24 = (undefined2 *)*puVar6;
        }
        uVar10 = UObject::GetPrivateStaticClass();
        lVar9 = FUN_141799410(uVar10,0,puVar24,0);
        local_res20 = lVar9;
        if (local_60[0] != 0) {
          FMemory::Free();
        }
        if (lVar9 == 0) {
          puVar6 = (undefined8 *)FName::ToString(plVar8,local_70);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar24 = &DAT_143f3eda8;
          }
          else {
            puVar24 = (undefined2 *)*puVar6;
          }
          uVar10 = UObject::GetPrivateStaticClass();
          lVar9 = FUN_141799c90(uVar10,0,puVar24,0,0,0,1);
          local_res20 = lVar9;
          if (local_70[0] != 0) {
            FMemory::Free();
          }
          if (lVar9 == 0) goto LAB_140b8ad72;
        }
        lVar11 = FUN_141304350();
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
          iVar21 = *(int *)(lVar9 + 0x110);
          if (iVar21 != 0) {
            iVar18 = (int)plVar27[1];
            if (*(int *)((longlong)plVar27 + 0xc) < iVar21 + iVar18) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(plVar27);
              iVar18 = (int)plVar27[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar27 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0x108),
                       (longlong)iVar21 << 3);
            *(int *)(plVar27 + 1) = (int)plVar27[1] + iVar21;
          }
          iVar21 = *(int *)(lVar9 + 0x318);
          if (iVar21 != 0) {
            iVar18 = *(int *)(param_1 + 0x1120);
            if (*(int *)(param_1 + 0x1124) < iVar21 + iVar18) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
              iVar18 = *(int *)(param_1 + 0x1120);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0x310),
                       (longlong)iVar21 << 3);
            *(int *)(param_1 + 0x1120) = *(int *)(param_1 + 0x1120) + iVar21;
          }
          plVar19 = local_d8;
          plVar30 = *(longlong **)(lVar9 + 0x310);
          plVar27 = plVar30 + *(int *)(lVar9 + 0x318);
          plVar23 = local_d0;
          for (; local_d0 = plVar23, plVar30 != plVar27; plVar30 = plVar30 + 1) {
            lVar13 = *plVar30;
            if (lVar13 != 0) {
              iVar21 = *(int *)(lVar13 + 0x98);
              if (iVar21 != 0) {
                iVar18 = (int)plVar19[1];
                if (*(int *)((longlong)plVar19 + 0xc) < iVar21 + iVar18) {
                  TArray<void_*,FDefaultAllocator>::ResizeTo(plVar19);
                  iVar18 = (int)plVar19[1];
                }
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar19 + (longlong)iVar18 * 8),*(void **)(lVar13 + 0x90),
                           (longlong)iVar21 << 3);
                *(int *)(plVar19 + 1) = (int)plVar19[1] + iVar21;
              }
              plVar22 = *(longlong **)(lVar13 + 0x90);
              plVar23 = plVar22 + *(int *)(lVar13 + 0x98);
              for (; plVar22 != plVar23; plVar22 = plVar22 + 1) {
                lVar9 = *plVar22;
                if (lVar9 != 0) {
                  lVar11 = FUN_1413f2810();
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
                    *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(lVar13 + 0xa0);
                  }
                }
              }
              iVar21 = *(int *)(lVar13 + 0xa0);
              plVar23 = (longlong *)(local_res8 + 0x1028);
              piVar3 = (int *)*plVar23;
              iVar18 = *(int *)(local_res8 + 0x1030);
              for (piVar12 = piVar3; piVar12 != piVar3 + iVar18; piVar12 = piVar12 + 1) {
                if (*piVar12 == iVar21) {
                  if ((int)((longlong)piVar12 - (longlong)piVar3 >> 2) != -1) goto LAB_140b8a979;
                  break;
                }
              }
              *(int *)(local_res8 + 0x1030) = iVar18 + 1;
              if (*(int *)(local_res8 + 0x1034) < iVar18 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar23,iVar18);
              }
              *(int *)(*plVar23 + (longlong)iVar18 * 4) = iVar21;
            }
LAB_140b8a979:
            lVar13 = local_res18;
            lVar9 = local_res20;
            plVar23 = local_d0;
          }
          uVar28 = 0;
          iVar21 = *(int *)(lVar9 + 0x120);
          if (iVar21 != 0) {
            iVar18 = (int)plVar23[1];
            if (*(int *)((longlong)plVar23 + 0xc) < iVar18 + iVar21) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(plVar23);
              iVar18 = (int)plVar23[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar23 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0x118),
                       (longlong)iVar21 << 3);
            *(int *)(plVar23 + 1) = (int)plVar23[1] + iVar21;
          }
          TMap<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,0>_>
          ::Append<FDefaultSetAllocator>(local_c8,lVar9 + 0x148);
          plVar27 = local_c0;
          iVar21 = *(int *)(lVar9 + 0x1a8);
          if (iVar21 != 0) {
            iVar18 = (int)local_c0[1];
            if (*(int *)((longlong)local_c0 + 0xc) < iVar18 + iVar21) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(local_c0);
              iVar18 = (int)plVar27[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar27 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0x1a0),
                       (longlong)iVar21 << 3);
            *(int *)(plVar27 + 1) = (int)plVar27[1] + iVar21;
          }
          plVar27 = local_b8;
          iVar21 = *(int *)(lVar9 + 0x1b8);
          if (iVar21 != 0) {
            iVar18 = (int)local_b8[1];
            if (*(int *)((longlong)local_b8 + 0xc) < iVar18 + iVar21) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(local_b8);
              iVar18 = (int)plVar27[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar27 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0x1b0),
                       (longlong)iVar21 << 3);
            *(int *)(plVar27 + 1) = (int)plVar27[1] + iVar21;
          }
          plVar27 = local_b0;
          iVar21 = *(int *)(lVar9 + 0x1c8);
          if (iVar21 != 0) {
            iVar18 = (int)local_b0[1];
            if (*(int *)((longlong)local_b0 + 0xc) < iVar18 + iVar21) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(local_b0);
              iVar18 = (int)plVar27[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar27 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0x1c0),
                       (longlong)iVar21 << 3);
            *(int *)(plVar27 + 1) = (int)plVar27[1] + iVar21;
          }
          if (*(longlong *)(lVar9 + 0x198) != 0) {
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>();
          }
          plVar27 = local_a0;
          iVar21 = *(int *)(lVar9 + 0x2f8);
          if (iVar21 != 0) {
            iVar18 = (int)local_a0[1];
            if (*(int *)((longlong)local_a0 + 0xc) < iVar18 + iVar21) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(local_a0);
              iVar18 = (int)plVar27[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar27 + (longlong)iVar18 * 8),*(void **)(lVar9 + 0x2f0),
                       (longlong)iVar21 << 3);
            *(int *)(plVar27 + 1) = (int)plVar27[1] + iVar21;
          }
          plVar30 = local_98;
          plVar27 = *(longlong **)(lVar9 + 0x300);
          uVar26 = (longlong)*(int *)(lVar9 + 0x308) & 0x1fffffffffffffff;
          if (plVar27 + *(int *)(lVar9 + 0x308) < plVar27) {
            uVar26 = uVar28;
          }
          local_res10 = uVar26;
          if (uVar26 != 0) {
            do {
              lVar13 = *plVar27;
              if (lVar13 != 0) {
                plVar23 = (longlong *)*plVar30;
                iVar21 = (int)plVar30[1];
                for (plVar19 = plVar23; plVar19 != plVar23 + iVar21; plVar19 = plVar19 + 1) {
                  if ((*plVar19 == 0) || (*(int *)(*plVar19 + 0xa0) <= *(int *)(lVar13 + 0xa0))) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (bVar4) {
                    iVar18 = (int)((longlong)plVar19 - (longlong)plVar23 >> 3);
                    if ((iVar18 < 0) || (*(int *)(local_res8 + 0x1110) <= iVar18))
                    goto LAB_140b8abaf;
                    bVar4 = true;
                    goto LAB_140b8abb1;
                  }
                }
                iVar18 = -1;
LAB_140b8abaf:
                bVar4 = false;
LAB_140b8abb1:
                iVar5 = iVar21 + 1;
                *(int *)(plVar30 + 1) = iVar5;
                if (bVar4) {
                  if (*(int *)((longlong)plVar30 + 0xc) < iVar5) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (plVar30,iVar21);
                  }
                  pvVar16 = (void *)(*plVar30 + (longlong)iVar18 * 8);
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)pvVar16 + 8),pvVar16,
                             (longlong)(iVar21 - iVar18) << 3);
                  *(longlong *)((longlong)iVar18 * 8 + *plVar30) = lVar13;
                  uVar26 = local_res10;
                }
                else {
                  if (*(int *)((longlong)plVar30 + 0xc) < iVar5) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (plVar30,iVar21);
                    uVar26 = local_res10;
                  }
                  *(longlong *)(*plVar30 + (longlong)iVar21 * 8) = lVar13;
                }
              }
              plVar27 = plVar27 + 1;
              uVar28 = uVar28 + 1;
              lVar13 = local_res18;
              lVar9 = local_res20;
            } while (uVar28 != uVar26);
          }
          plVar27 = local_90;
          iVar21 = (int)local_90[1];
          *(int *)(local_90 + 1) = iVar21 + 1;
          if (*(int *)((longlong)local_90 + 0xc) < iVar21 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_90,iVar21);
          }
          *(undefined8 *)(*plVar27 + (longlong)iVar21 * 8) = *(undefined8 *)(lVar9 + 0x328);
          iVar21 = *(int *)(lVar9 + 0x338);
          local_res10 = CONCAT44(local_res10._4_4_,iVar21);
          if (iVar21 != 0) {
            iVar18 = *(int *)(param_1 + 0x1140);
            if (*(int *)(param_1 + 0x1144) < iVar18 + iVar21) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
              ResizeTo(plVar29);
              iVar18 = *(int *)(param_1 + 0x1140);
            }
            puVar6 = *(undefined8 **)(lVar9 + 0x330);
            puVar25 = (undefined8 *)((longlong)iVar18 * 0x20 + *plVar29);
            do {
              *puVar25 = 0;
              FUN_1409f0400(puVar25,*puVar6,*(undefined4 *)(puVar6 + 1),0,0);
              puVar25[2] = 0;
              iVar18 = *(int *)(puVar6 + 3);
              pvVar16 = (void *)puVar6[2];
              *(int *)(puVar25 + 3) = iVar18;
              if (iVar18 == 0) {
                *(undefined4 *)((longlong)puVar25 + 0x1c) = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (puVar25 + 2,iVar18,0);
                _guard_xfg_dispatch_icall_nop((void *)puVar25[2],pvVar16,(longlong)iVar18 << 3);
              }
              puVar25 = puVar25 + 4;
              puVar6 = puVar6 + 4;
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
            *(int *)(param_1 + 0x1140) = *(int *)(param_1 + 0x1140) + (int)local_res10;
            lVar13 = local_res18;
            lVar9 = local_res20;
          }
          plVar27 = local_78;
          iVar21 = (int)local_78[1];
          *(int *)(local_78 + 1) = iVar21 + 1;
          if (*(int *)((longlong)local_78 + 0xc) < iVar21 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_78,iVar21);
          }
          *(longlong *)(*plVar27 + (longlong)iVar21 * 8) = lVar9;
          FUN_140aba7e0(lVar9);
        }
      }
LAB_140b8ad72:
      plVar8 = plVar8 + 0xb;
      plVar27 = local_88;
    } while (plVar8 != plVar17);
  }
  uVar31 = 0;
  local_res10 = local_res10 & 0xffffffffffffff00;
  FUN_140b79190(*plVar1,(longlong)*(int *)(param_1 + 0x1120),local_res8 & 0xff,&local_res10);
  uVar28 = local_res8;
  AlgoImpl::
  IntroSortInternal<unsigned_int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,TLess<unsigned_int>_>_>
            (*(undefined8 *)(local_res8 + 0x1028),(longlong)*(int *)(local_res8 + 0x1030),
             local_res8 & 0xff,&local_res8);
  puVar14 = *(uint **)(uVar28 + 0x1028);
  uVar26 = (longlong)*(int *)(uVar28 + 0x1030) & 0x3fffffffffffffff;
  if (puVar14 + *(int *)(uVar28 + 0x1030) < puVar14) {
    uVar26 = uVar31;
  }
  if (uVar26 != 0) {
    uVar15 = *(uint *)(uVar28 + 0x1020);
    do {
      uVar2 = *puVar14;
      if (uVar15 < uVar2) {
        *(uint *)(uVar28 + 0x1020) = uVar2;
        uVar15 = uVar2;
      }
      puVar14 = puVar14 + 1;
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar26);
  }
  FUN_140e8cf60();
  FUN_1404be960(&local_f8);
  FUN_1404be960(&local_e8);
  return;
}



// FUNCTION 140b8ae50 FUN_140b8ae50 body=282 status=ok
// SIG undefined FUN_140b8ae50(void)

void FUN_140b8ae50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && (iVar1 = FUN_1428cf800(lVar2), iVar1 != 3)) {
    plVar8 = (longlong *)0x0;
    plVar4 = param_1 + 0x10;
    plVar3 = (longlong *)*plVar4;
    iVar1 = (int)param_1[0x11];
    plVar6 = plVar3 + (longlong)iVar1 * 2;
    if (plVar3 != plVar6) {
      do {
        plVar7 = plVar8;
        if (*plVar3 != 0) {
          plVar7 = (longlong *)plVar3[1];
        }
        plVar5 = plVar8;
        if (*param_2 != 0) {
          plVar5 = (longlong *)param_2[1];
        }
        if ((plVar7 == plVar5) && (*plVar3 == *param_2)) {
          return;
        }
        plVar3 = plVar3 + 2;
      } while (plVar3 != plVar6);
    }
    *(int *)(param_1 + 0x11) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x8c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    plVar6 = (longlong *)(*plVar4 + (longlong)iVar1 * 0x10);
    *plVar6 = 0;
    plVar6[1] = 0;
    *plVar6 = *param_2;
    plVar4 = plVar8;
    if (*param_2 != 0) {
      plVar4 = (longlong *)param_2[1];
    }
    plVar6[1] = (longlong)plVar4;
    if (((char)param_1[5] != '\0') && (lVar2 = FUN_140b8c530(param_1,param_2), lVar2 != 0)) {
      if (*param_2 != 0) {
        plVar8 = (longlong *)param_2[1];
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar2);
    }
  }
  return;
}



// FUNCTION 140b8af70 FUN_140b8af70 body=317 status=ok
// SIG undefined FUN_140b8af70(void)

void FUN_140b8af70(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 local_res8 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
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
    if ((bVar1) && (lVar2 = FUN_140b785e0(lVar2), lVar2 != 0)) {
      puVar9 = &DAT_143f3eda8;
      if (*(int *)(param_4 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*param_4;
      }
      if (*(int *)(param_3 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*param_3;
      }
      if (*(int *)(param_2 + 1) != 0) {
        puVar9 = (undefined2 *)*param_2;
      }
      uVar4 = FName::FName(local_res8,puVar7,1);
      uVar5 = FName::FName(local_28,puVar8,1);
      uVar6 = FName::FName(local_20,puVar9,1);
      FUN_140c52e90(lVar2,uVar6,uVar5,uVar4,param_5);
    }
  }
  return;
}



// FUNCTION 140b8b0b0 FUN_140b8b0b0 body=339 status=ok
// SIG undefined FUN_140b8b0b0(void)

void FUN_140b8b0b0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined1 local_48 [64];
  
  if (((param_1 != (longlong *)0x0) && (lVar5 = (**(code **)(*param_1 + 0x148))(), lVar5 != 0)) &&
     (lVar5 = *(longlong *)(lVar5 + 400), lVar5 != 0)) {
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
    if ((bVar3) && (lVar5 = FUN_140b785e0(lVar5), lVar5 != 0)) {
      local_res20 = *(undefined8 *)(param_3 + 0x10);
      fVar1 = *(float *)(param_3 + 0x2c);
      local_res8 = *(undefined8 *)(param_3 + 0x20);
      fVar2 = *(float *)(param_3 + 0x28);
      iVar4 = rand();
      if (*(int *)(param_2 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*param_2;
      }
      uVar7 = FName::FName(local_48,puVar8,1);
      FUN_140c52e90(lVar5,uVar7,&local_res20,&local_res8,
                    (float)iVar4 * 3.051851e-05 * (fVar1 - fVar2) + fVar2);
    }
  }
  return;
}



// FUNCTION 140b8b210 Rehash body=534 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>,0>,FDefaultSetAllocator>
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
  undefined8 *puVar11;
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
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_140b8b34f;
        uVar8 = puVar13[lVar5 + 1];
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
LAB_140b8b34f:
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
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x60 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0x5c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0xb) =
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



// FUNCTION 140b8b430 Rehash body=521 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>,TDefaultMapHashableKeyFuncs<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar10) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar10;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar10 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_140b8b56f;
        uVar10 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
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
      if (iVar4 < iStack_44) {
LAB_140b8b56f:
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
        pbVar3 = (byte *)(*param_1 + (longlong)iStack_1c * 0x28);
        uVar10 = (int)*plVar2 - 1U & (uint)*pbVar3;
        *(uint *)(pbVar3 + 0x24) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(pbVar3 + 0x20) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140b8b640 FUN_140b8b640 body=50 status=ok
// SIG undefined FUN_140b8b640(void)

void FUN_140b8b640(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  if ((param_1 != 0) && (local_res18[0] = param_3, lVar1 = FUN_140b825a0(), lVar1 != 0)) {
    FUN_140cc9cd0(lVar1,param_2,local_res18);
  }
  return;
}



// FUNCTION 140b8b680 FUN_140b8b680 body=42 status=ok
// SIG undefined FUN_140b8b680(void)

void FUN_140b8b680(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  if ((param_1 != 0) && (local_res10[0] = param_2, lVar1 = FUN_140b825a0(), lVar1 != 0)) {
    FUN_140ccb390(lVar1,local_res10);
  }
  return;
}



// FUNCTION 140b8b6b0 FUN_140b8b6b0 body=559 status=ok
// SIG undefined FUN_140b8b6b0(void)

void FUN_140b8b6b0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_18;
  int local_10;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x690))();
  if (lVar2 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (lVar2 = FUN_141227800(lVar2), lVar2 != 0)) &&
       (*(longlong *)(lVar2 + 0x740) != 0)) {
      FUN_140a12560(*(longlong *)(lVar2 + 0x740),param_2);
      return;
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x678))(param_1);
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
    if ((bVar1) && (lVar3 = *(longlong *)(lVar2 + 0xe58), lVar3 != 0)) {
      lVar4 = FUN_1413e48b0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar4 = *(longlong *)(lVar3 + 0x740), lVar4 != 0)) {
        lVar2 = FUN_140c41820(lVar2);
        if (lVar2 != 0) {
          FUN_140a12560(lVar4,param_2);
          return;
        }
        if (*(longlong *)(lVar3 + 0x738) != 0) {
          FUN_140a124c0(lVar4,param_2);
          return;
        }
      }
    }
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x668))(param_1);
  if (plVar5 != (longlong *)0x0) {
    uVar6 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
    lVar2 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x220) = param_2;
      local_18 = (longlong *)0x0;
      local_10 = 0;
      FUN_14071ba40(lVar2,0,param_2,&local_18,0);
      if (local_10 != 0) {
        if (local_18 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_18 + 0x28))(local_18,0);
        if (local_18 != (longlong *)0x0) {
          local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
        }
        local_10 = 0;
      }
      if (local_18 != (longlong *)0x0) {
        FMemory::Free(local_18);
      }
    }
  }
  return;
}



// FUNCTION 140b8b8e0 FUN_140b8b8e0 body=294 status=ok
// SIG undefined FUN_140b8b8e0(void)

void FUN_140b8b8e0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  uVar3 = 0;
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar4 = (longlong)local_1c * 0x60 + *local_38;
      *(undefined4 *)(lVar4 + 0x50) = 0;
      if (*(longlong *)(lVar4 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar4 + 8);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
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
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar3;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 140b8ba10 Reset body=67 status=ok
// SIG undefined Reset(void)

void FSoftObjectPath::Reset(undefined8 *param_1)

{
  undefined2 *puVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x14)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 1,0);
  }
  puVar1 = (undefined2 *)param_1[1];
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 140b8ba60 FUN_140b8ba60 body=31 status=ok
// SIG undefined FUN_140b8ba60(void)

void FUN_140b8ba60(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140b82510();
  if (lVar1 != 0) {
    FUN_140be8e00(lVar1);
    return;
  }
  return;
}



// FUNCTION 140b8ba80 FUN_140b8ba80 body=187 status=ok
// SIG undefined FUN_140b8ba80(void)

void FUN_140b8ba80(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
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
        FUN_1407678b0(lVar2);
        return;
      }
    }
    lVar2 = FUN_14147d9d0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140e91900(param_1,param_1[0xc9]);
    }
  }
  return;
}



// FUNCTION 140b8bb40 FUN_140b8bb40 body=602 status=ok
// SIG undefined FUN_140b8bb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140b8bb40(longlong param_1,longlong *param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_118 [224];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(int *)(param_1 + 0xb8) <= param_3) {
    *param_2 = 0;
    return param_2;
  }
  lVar5 = (longlong)param_3 * 0x28;
  lVar4 = *(longlong *)(param_1 + 0xb0) + lVar5;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  lVar6 = 0;
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar4 + 8)) && (local_128 = 0, *(longlong *)(lVar4 + 0x10) != 0))
    {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar4 + 8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar4);
      if (lVar2 != 0) goto LAB_140b8bc0d;
    }
  }
  else {
LAB_140b8bc0d:
    lVar4 = FUN_14171bfe0();
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
      lVar4 = FUN_1430e5840();
      do {
        if (lVar2 == lVar4) goto LAB_140b8bc88;
        lVar2 = *(longlong *)(lVar2 + 0x30);
      } while (lVar2 != 0);
    }
  }
  FUN_14282a800(local_118);
  FUN_14283c290(local_118,*(longlong *)(param_1 + 0xb0) + 0x10 + lVar5,1,0);
  FUN_14282cc40(local_118);
LAB_140b8bc88:
  lVar5 = *(longlong *)(param_1 + 0xb0) + lVar5;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  lVar2 = lVar6;
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar5 + 8)) || (local_128 = 0, *(longlong *)(lVar5 + 0x10) == 0))
    goto LAB_140b8bd61;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar5 + 8) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar5);
    if (lVar4 == 0) goto LAB_140b8bd61;
  }
  lVar5 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = FUN_1430e5840();
    lVar5 = lVar4;
    do {
      lVar2 = lVar4;
      if (lVar5 == lVar3) break;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar2 = lVar6;
    } while (lVar5 != 0);
  }
LAB_140b8bd61:
  *param_2 = lVar2;
  return param_2;
}



// FUNCTION 140b8bda0 FUN_140b8bda0 body=176 status=ok
// SIG undefined FUN_140b8bda0(void)

longlong FUN_140b8bda0(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  lVar3 = 0;
  cVar1 = FUN_1416fcfe0(param_1,0);
  lVar4 = lVar3;
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FString::FString(local_38,param_1);
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48 = *plVar2;
    *plVar2 = 0;
    local_40 = (undefined4)plVar2[1];
    local_3c = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
    FUN_1417978e0(&local_28,&local_48);
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    lVar3 = FUN_141796df0(&local_28);
    lVar4 = 1;
  }
  if ((lVar4 != 0) && (local_20 != 0)) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 140b8be50 FUN_140b8be50 body=42 status=ok
// SIG undefined FUN_140b8be50(void)

void FUN_140b8be50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_140b825a0(), lVar1 != 0)) {
    FUN_140ccb2c0(lVar1,param_2);
  }
  return;
}



// FUNCTION 140b8be80 FUN_140b8be80 body=44 status=ok
// SIG undefined FUN_140b8be80(void)

void FUN_140b8be80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_140b825a0(), lVar1 != 0)) {
    FUN_140cc2920(lVar1,1,param_2);
  }
  return;
}



// FUNCTION 140b8beb0 FUN_140b8beb0 body=89 status=ok
// SIG undefined FUN_140b8beb0(void)

void FUN_140b8beb0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, plVar1 = (longlong *)(**(code **)(*param_1 + 0x678))(),
     plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_141403c70();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_142dafbc0(lVar3 + 0x2ee8,local_res10);
    }
  }
  return;
}



// FUNCTION 140b8bf10 FUN_140b8bf10 body=89 status=ok
// SIG undefined FUN_140b8bf10(void)

void FUN_140b8bf10(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, plVar1 = (longlong *)(**(code **)(*param_1 + 0x678))(),
     plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_1414b0910();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_142dafbc0(lVar3 + 0x178,local_res10);
    }
  }
  return;
}



// FUNCTION 140b8bf70 FUN_140b8bf70 body=113 status=ok
// SIG undefined FUN_140b8bf70(void)

void FUN_140b8bf70(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) {
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
    if (bVar1) {
      FUN_142dafbc0(lVar2 + 0x2530,local_res10);
    }
  }
  return;
}



// FUNCTION 140b8bff0 FUN_140b8bff0 body=109 status=ok
// SIG undefined FUN_140b8bff0(void)

void FUN_140b8bff0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x668))(), lVar2 != 0)) {
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
      FUN_140d0d800(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140b8c060 FUN_140b8c060 body=126 status=ok
// SIG undefined FUN_140b8c060(void)

void FUN_140b8c060(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if (((param_1 != (longlong *)0x0) &&
      (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x4c8), lVar2 != 0)) {
    lVar3 = FUN_141403c70();
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
      FUN_142dafbc0(lVar2 + 0x2990,local_res10);
    }
  }
  return;
}



// FUNCTION 140b8c0e0 FUN_140b8c0e0 body=211 status=ok
// SIG undefined FUN_140b8c0e0(void)

void FUN_140b8c0e0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
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
      lVar2 = *(longlong *)(lVar2 + 0x848);
      goto LAB_140b8c15c;
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x678))(param_1);
LAB_140b8c15c:
  if (lVar2 != 0) {
    lVar4 = FUN_1413f82e0();
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 != 0)) {
      FUN_140c5e130(lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1),param_2);
    }
  }
  return;
}



// FUNCTION 140b8c1c0 FUN_140b8c1c0 body=42 status=ok
// SIG undefined FUN_140b8c1c0(void)

void FUN_140b8c1c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_140b825a0(), lVar1 != 0)) {
    FUN_140ccb330(lVar1,param_2);
  }
  return;
}



// FUNCTION 140b8c1f0 FUN_140b8c1f0 body=44 status=ok
// SIG undefined FUN_140b8c1f0(void)

void FUN_140b8c1f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_140b825a0(), lVar1 != 0)) {
    FUN_140cc2920(lVar1,0,param_2);
  }
  return;
}



// FUNCTION 140b8c220 FUN_140b8c220 body=89 status=ok
// SIG undefined FUN_140b8c220(void)

void FUN_140b8c220(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, plVar1 = (longlong *)(**(code **)(*param_1 + 0x678))(),
     plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_141403c70();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_142dbb5d0(lVar3 + 0x2ee8,local_res10);
    }
  }
  return;
}



// FUNCTION 140b8c280 FUN_140b8c280 body=89 status=ok
// SIG undefined FUN_140b8c280(void)

void FUN_140b8c280(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, plVar1 = (longlong *)(**(code **)(*param_1 + 0x678))(),
     plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_1414b0910();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_142dbb5d0(lVar3 + 0x178,local_res10);
    }
  }
  return;
}



// FUNCTION 140b8c2e0 FUN_140b8c2e0 body=113 status=ok
// SIG undefined FUN_140b8c2e0(void)

void FUN_140b8c2e0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) {
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
    if (bVar1) {
      FUN_142dbb5d0(lVar2 + 0x2530,local_res10);
    }
  }
  return;
}



// FUNCTION 140b8c360 FUN_140b8c360 body=109 status=ok
// SIG undefined FUN_140b8c360(void)

void FUN_140b8c360(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x668))(), lVar2 != 0)) {
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
      FUN_140d0d850(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140b8c3d0 FUN_140b8c3d0 body=126 status=ok
// SIG undefined FUN_140b8c3d0(void)

void FUN_140b8c3d0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if (((param_1 != (longlong *)0x0) &&
      (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x4c8), lVar2 != 0)) {
    lVar3 = FUN_141403c70();
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
      FUN_142dbb5d0(lVar2 + 0x2990,local_res10);
    }
  }
  return;
}



// FUNCTION 140b8c450 FUN_140b8c450 body=211 status=ok
// SIG undefined FUN_140b8c450(void)

void FUN_140b8c450(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
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
      lVar2 = *(longlong *)(lVar2 + 0x848);
      goto LAB_140b8c4cc;
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x678))(param_1);
LAB_140b8c4cc:
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
    if ((bVar1) && (lVar2 != 0)) {
      FUN_140c5e130(lVar2,0,param_2);
    }
  }
  return;
}



// FUNCTION 140b8c530 FUN_140b8c530 body=179 status=ok
// SIG undefined FUN_140b8c530(void)

undefined8 FUN_140b8c530(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return 0;
  }
  if (param_2[1] == 0) {
    return 0;
  }
  lVar3 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  lVar3 = AActor::GetLevel(lVar1);
  if ((lVar3 == 0) || (lVar3 = UObjectBaseUtility::GetOutermost(lVar3), lVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x18);
  }
  lVar3 = FUN_140b82320(param_1,uVar4);
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = FUN_140b803b0(lVar3,*(undefined8 *)(lVar1 + 0x18));
  return uVar4;
}



// FUNCTION 140b8c5f0 FUN_140b8c5f0 body=483 status=ok
// SIG undefined FUN_140b8c5f0(void)

float * FUN_140b8c5f0(longlong param_1,float *param_2,float param_3,float param_4)

{
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  iVar3 = *(int *)(param_1 + 0x398);
  if ((0 < iVar3) && (0.0 < param_4)) {
    lVar4 = *(longlong *)(param_1 + 0x390);
    fVar7 = 0.0;
    fVar9 = 0.0;
    lVar1 = lVar4 + (longlong)iVar3 * 0x18;
    if (lVar4 != lVar1) {
      do {
        pfVar2 = (float *)FUN_142dac000(lVar4,local_res8,param_3 * *(float *)(param_1 + 0x3a0));
        lVar4 = lVar4 + 0x18;
        fVar7 = *pfVar2 + *param_2;
        fVar9 = pfVar2[1] + param_2[1];
        *param_2 = fVar7;
        param_2[1] = fVar9;
      } while (lVar4 != lVar1);
      iVar3 = *(int *)(param_1 + 0x398);
    }
    fVar8 = fVar7 * (1.0 / (float)iVar3) * param_4;
    fVar9 = fVar9 * (1.0 / (float)iVar3) * param_4;
    *param_2 = fVar8;
    param_2[1] = fVar9;
    fVar7 = fVar9 * fVar9 + fVar8 * fVar8;
    if (param_4 * param_4 < fVar7) {
      if (fVar7 <= 1e-08) {
        fVar8 = 0.0;
        fVar9 = 0.0;
      }
      else {
        auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar5 = auVar6._0_4_;
        fVar5 = fVar5 + fVar5 * (0.5 - fVar7 * 0.5 * fVar5 * fVar5);
        fVar5 = fVar5 + fVar5 * (0.5 - fVar7 * 0.5 * fVar5 * fVar5);
        fVar8 = fVar8 * fVar5;
        fVar9 = fVar9 * fVar5;
      }
      *param_2 = fVar8 * param_4;
      param_2[1] = fVar9 * param_4;
    }
  }
  return param_2;
}



// FUNCTION 140b8c7e0 FUN_140b8c7e0 body=815 status=ok
// SIG undefined FUN_140b8c7e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b8c7e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  int iVar12;
  undefined8 *puVar13;
  float fVar14;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  
  iVar1 = FUN_140b7ffa0(param_1,0,0);
  iVar2 = FUN_140b7ffa0(param_1,7,1);
  iVar3 = FUN_140b7ffa0(param_1,0,1);
  iVar5 = *(int *)(param_1 + 0x1140);
  lVar10 = 0;
  lVar9 = *(longlong *)(param_1 + 0x1138);
  local_38 = 0;
  local_30 = iVar5;
  if (iVar5 == 0) {
    local_2c = 0;
  }
  else {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_38,iVar5,0);
    lVar10 = local_38;
    lVar9 = lVar9 - local_38;
    puVar13 = (undefined8 *)(local_38 + 0x10);
    do {
      puVar13[-2] = 0;
      FUN_1409f0400(puVar13 + -2,*(undefined8 *)(lVar9 + -0x10 + (longlong)puVar13),
                    *(undefined4 *)(lVar9 + -8 + (longlong)puVar13),0,0);
      *puVar13 = 0;
      iVar12 = *(int *)(lVar9 + 8 + (longlong)puVar13);
      pvVar11 = *(void **)(lVar9 + (longlong)puVar13);
      *(int *)(puVar13 + 1) = iVar12;
      if (iVar12 == 0) {
        *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar13,iVar12,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar13,pvVar11,(longlong)iVar12 << 3);
      }
      puVar13 = puVar13 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar6 = 0;
  iVar5 = local_30 * (iVar2 - iVar3);
  if (iVar5 != 0) {
    uVar6 = iVar1 % iVar5;
  }
  iVar12 = local_30;
  for (iVar5 = iVar1 - ((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)); iVar5 < iVar1;
      iVar5 = iVar5 + (iVar2 - iVar3)) {
    FUN_1415b61a0(iVar5);
    if (iVar12 < 1) {
      iVar7 = 0;
LAB_140b8c93f:
      if (iVar7 < iVar12) {
        pvVar11 = (void *)((longlong)iVar7 * 0x20 + lVar10);
        if (*(longlong *)((longlong)pvVar11 + 0x10) != 0) {
          FMemory::Free();
        }
        TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
        ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(pvVar11);
        iVar4 = (iVar12 - iVar7) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (pvVar11,(void *)((longlong)(iVar7 + 1) * 0x20 + lVar10),(longlong)iVar4 << 5);
        }
        local_30 = iVar12 + -1;
        TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(&local_38);
        lVar10 = local_38;
        iVar12 = local_30;
      }
    }
    else {
      fVar14 = (float)FGenericPlatformMath::SRand();
      iVar7 = iVar12 + -1;
      if ((int)(fVar14 * (float)iVar12) <= iVar12 + -1) {
        iVar7 = (int)(fVar14 * (float)iVar12);
      }
      if (-1 < iVar7) goto LAB_140b8c93f;
    }
  }
  FUN_1415b61a0();
  if (iVar12 < 1) {
    iVar5 = 0;
  }
  else {
    fVar14 = (float)FGenericPlatformMath::SRand();
    iVar5 = iVar12 + -1;
    if ((int)(fVar14 * (float)iVar12) <= iVar12 + -1) {
      iVar5 = (int)(fVar14 * (float)iVar12);
    }
    if (iVar5 < 0) goto LAB_140b8caa9;
  }
  if (iVar5 < iVar12) {
    puVar13 = (undefined8 *)((longlong)iVar5 * 0x20 + lVar10);
    if (puVar13 != &DAT_146869de0) {
      if (DAT_146869de8 != 0) {
        plVar8 = (longlong *)(DAT_146869de0 + 0x78);
        iVar5 = DAT_146869de8;
        do {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 0x11;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_1409f0400(&DAT_146869de0,*puVar13,*(undefined4 *)(puVar13 + 1),DAT_146869dec,0);
    }
    if ((void **)(puVar13 + 2) != &DAT_146869df0) {
      _DAT_146869df8 = *(int *)(puVar13 + 3);
      lVar9 = (longlong)_DAT_146869df8;
      pvVar11 = (void *)puVar13[2];
      if ((_DAT_146869df8 == 0) && (DAT_146869dfc == 0)) {
        DAT_146869dfc = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&DAT_146869df0,_DAT_146869df8);
        _guard_xfg_dispatch_icall_nop(DAT_146869df0,pvVar11,lVar9 << 3);
      }
    }
  }
LAB_140b8caa9:
  lVar9 = lVar10;
  if (iVar1 != DAT_1468699b0) {
    DAT_1468699b0 = iVar1;
  }
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*(longlong *)(lVar9 + 0x10) != 0) {
      FMemory::Free();
    }
    TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
    ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(lVar9);
    lVar9 = lVar9 + 0x20;
  }
  if (lVar10 != 0) {
    FMemory::Free(lVar10);
  }
  return;
}



// FUNCTION 140b8cb10 FUN_140b8cb10 body=103 status=ok
// SIG undefined FUN_140b8cb10(void)

void FUN_140b8cb10(longlong *param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) {
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
    if (bVar1) {
      *(undefined1 *)(lVar2 + 0x2289) = param_2;
    }
  }
  return;
}



// FUNCTION 140b8cb80 FUN_140b8cb80 body=111 status=ok
// SIG undefined FUN_140b8cb80(void)

void FUN_140b8cb80(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) {
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
    if (bVar1) {
      FUN_140a71a40(lVar2 + 0x2228,param_2);
    }
  }
  return;
}



// FUNCTION 140b8cbf0 FUN_140b8cbf0 body=112 status=ok
// SIG undefined FUN_140b8cbf0(void)

void FUN_140b8cbf0(longlong *param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) {
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
    if (bVar1) {
      FUN_140a71a10(lVar2 + 0x2228,param_2);
    }
  }
  return;
}



// FUNCTION 140b8cc60 FUN_140b8cc60 body=44 status=ok
// SIG undefined FUN_140b8cc60(void)

void FUN_140b8cc60(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) {
    FUN_140ccdb60(lVar1,param_2);
  }
  return;
}



// FUNCTION 140b8cc90 FUN_140b8cc90 body=60 status=ok
// SIG undefined FUN_140b8cc90(void)

void FUN_140b8cc90(undefined8 param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140b82510();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = FUN_140bb7630(lVar1);
  if (param_2 != '\0') {
    FUN_140d74dd0();
    return;
  }
  FUN_140d709d0(uVar2);
  return;
}



// FUNCTION 140b8ccd0 FUN_140b8ccd0 body=309 status=ok
// SIG undefined FUN_140b8ccd0(void)

void FUN_140b8ccd0(longlong *param_1,char param_2,char param_3,undefined8 param_4,undefined8 param_5
                  )

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) {
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
    if (((bVar1) && (*(longlong *)(lVar2 + 0xa18) != 0)) && (lVar2 = FUN_1423ac7e0(), lVar2 != 0)) {
      lVar3 = UMonkeyAnim::StaticClass();
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
        *(char *)(lVar2 + 0x6e1) = param_2;
        if (param_2 == '\0') {
          puVar4 = (undefined8 *)FName::FName(local_res8,&DAT_1442ce37c,1);
          param_4 = *puVar4;
        }
        *(undefined8 *)(lVar2 + 0x6e8) = param_4;
        *(char *)(lVar2 + 0x721) = param_3;
        if (param_3 == '\0') {
          puVar4 = (undefined8 *)FName::FName(local_res8,&DAT_1442ce3a4,1);
          param_5 = *puVar4;
        }
        *(undefined8 *)(lVar2 + 0x728) = param_5;
      }
    }
  }
  return;
}



// FUNCTION 140b8ce10 FUN_140b8ce10 body=74 status=ok
// SIG undefined FUN_140b8ce10(void)

void FUN_140b8ce10(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (param_1 != (longlong *)0x0)) {
    uVar1 = FUN_14142bde0();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_140b3fa60(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140b8ce60 FUN_140b8ce60 body=102 status=ok
// SIG undefined FUN_140b8ce60(void)

void FUN_140b8ce60(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = AGExplodingRockProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (param_2 != 0)) {
      FUN_140b3f880(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140b8ced0 FUN_140b8ced0 body=249 status=ok
// SIG undefined FUN_140b8ced0(void)

void FUN_140b8ced0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
    uVar2 = FUN_142e7dfd0();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if (lVar3 != 0) {
      lVar4 = (**(code **)(*param_1 + 0x668))(param_1);
      if (lVar4 != 0) {
        lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
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
          FUN_14076c7a0(lVar4,lVar3);
          return;
        }
      }
      lVar4 = FUN_14147d9d0();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140e91900(param_1,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140b8cfd0 FUN_140b8cfd0 body=888 status=ok
// SIG undefined FUN_140b8cfd0(void)

void FUN_140b8cfd0(undefined8 param_1,undefined1 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_d8;
  uint uStack_d0;
  uint local_c0;
  uint uStack_bc;
  uint uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_98;
  uint *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  uint *puStack_68;
  undefined4 uStack_60;
  int iStack_5c;
  uint uStack_58;
  uint uStack_54;
  longlong *local_50;
  undefined8 uStack_48;
  uint *local_40;
  undefined8 uStack_38;
  uint local_30;
  uint uStack_2c;
  
  puVar8 = (undefined8 *)operator_new(0x10);
  puVar14 = (undefined8 *)0x0;
  local_f0 = puVar14;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    local_f0 = puVar8;
  }
  puVar8 = (undefined8 *)operator_new(0x10);
  local_f8 = local_f0;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    puVar8[1] = param_1;
    *local_f0 = puVar8;
    local_f8 = puVar8;
  }
  do {
    do {
      puVar8 = (undefined8 *)*local_f0;
      if (puVar8 == (undefined8 *)0x0) {
        while (local_f0 != (undefined8 *)0x0) {
          puVar8 = (undefined8 *)*local_f0;
          FMemory::operator_delete(local_f0,0x10);
          local_f0 = puVar8;
        }
        return;
      }
      lVar4 = puVar8[1];
      puVar8[1] = 0;
      FMemory::operator_delete(local_f0,0x10);
      local_f0 = puVar8;
    } while (lVar4 == 0);
    puVar12 = *(undefined8 **)(lVar4 + 0x158);
    puVar8 = puVar12 + *(int *)(lVar4 + 0x160);
    for (; puVar12 != puVar8; puVar12 = puVar12 + 1) {
      uVar5 = *puVar12;
      puVar9 = (undefined8 *)operator_new(0x10);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0;
        puVar9[1] = uVar5;
        *local_f8 = puVar9;
        local_f8 = puVar9;
      }
    }
    AActor::SetTickableWhenPaused(lVar4,param_2);
    plVar15 = (longlong *)(lVar4 + 0x2b0);
    uStack_bc = 1;
    uVar2 = *(uint *)(lVar4 + 0x2d8);
    puVar1 = (uint *)(lVar4 + 0x2c0);
    local_c0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    if (uVar2 != 0) {
      puVar13 = *(uint **)(lVar4 + 0x2d0);
      if (*(uint **)(lVar4 + 0x2d0) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar3 = *puVar13;
      puVar8 = puVar14;
      puVar12 = puVar14;
      while (uVar3 == 0) {
        iVar7 = (int)puVar8;
        uStack_a8 = (int)puVar12 + 0x20;
        puVar12 = (undefined8 *)(ulonglong)uStack_a8;
        local_c0 = iVar7 + 1;
        puVar8 = (undefined8 *)(ulonglong)local_c0;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_140b8d182;
        uVar3 = puVar13[(longlong)iVar7 + 1];
      }
      uStack_bc = -uVar3 & uVar3;
      iVar7 = 0x1f;
      if (uStack_bc != 0) {
        for (; uStack_bc >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_bc == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_ac = (uStack_a8 - iVar7) + 0x1f;
      if ((int)uVar2 < (int)uStack_ac) {
LAB_140b8d182:
        uStack_ac = uVar2;
      }
    }
    uVar3 = *(uint *)(lVar4 + 0x2d8);
    uStack_98 = CONCAT44(uStack_bc,local_c0);
    uStack_88 = CONCAT44(uStack_ac,0xffffffff);
    local_80 = CONCAT44(uStack_a4,uStack_a8);
    bVar10 = (byte)uVar3 & 0x1f;
    iVar7 = (int)uVar3 >> 5;
    uVar11 = -1 << bVar10;
    local_e8 = CONCAT44(1 << bVar10,iVar7);
    uStack_d8 = CONCAT44(uVar3,uVar11);
    uStack_d0 = uVar3 & 0xffffffe0;
    if (uVar3 != uVar2) {
      puVar13 = *(uint **)(lVar4 + 0x2d0);
      if (*(uint **)(lVar4 + 0x2d0) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = puVar13[iVar7] & uVar11;
      uStack_d0 = uVar3 & 0xffffffe0;
      while (uVar11 == 0) {
        uStack_d0 = uStack_d0 + 0x20;
        uVar6 = (ulonglong)local_e8 >> 0x20;
        local_e8 = CONCAT44((int)uVar6,iVar7 + 1);
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_140b8d286;
        uVar11 = puVar13[(longlong)iVar7 + 1];
        uStack_d8 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar7 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_e8 = CONCAT44(uVar11,(undefined4)local_e8);
      if (uVar11 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iVar7 = (uStack_d0 - iVar7) + 0x1f;
      uStack_d8 = CONCAT44(iVar7,(undefined4)uStack_d8);
      if ((int)uVar2 < iVar7) {
LAB_140b8d286:
        uStack_d8 = CONCAT44(uVar2,(undefined4)uStack_d8);
      }
    }
    uStack_60 = (undefined4)uStack_d8;
    iStack_5c = uStack_d8._4_4_;
    uStack_58 = uStack_d0;
    uStack_54 = uStack_ac;
    uStack_70 = local_e8;
    uStack_38 = uStack_d8;
    uStack_48 = local_e8;
    local_30 = uStack_d0;
    uStack_2c = uStack_ac;
    local_90 = puVar1;
    local_78 = plVar15;
    puStack_68 = puVar1;
    local_50 = plVar15;
    local_40 = puVar1;
    while( true ) {
      if ((uStack_88._4_4_ == uStack_d8._4_4_) && (local_90 == puVar1)) break;
      UActorComponent::SetTickableWhenPaused
                (*(undefined8 *)(*plVar15 + (longlong)uStack_88._4_4_ * 0x10),param_2);
      uStack_88 = CONCAT44(uStack_88._4_4_,(uint)uStack_88 & ~uStack_98._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_98);
    }
  } while( true );
}



// FUNCTION 140b8d350 FUN_140b8d350 body=82 status=ok
// SIG undefined FUN_140b8d350(void)

ulonglong FUN_140b8d350(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_140b825a0();
  if (lVar2 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_140cb68f0(lVar2);
  }
  uVar3 = FUN_1430035b0(*param_2);
  if ((cVar1 == '\x01') && ((char)uVar3 != '\0')) {
    return 1;
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140b8d3b0 FUN_140b8d3b0 body=426 status=ok
// SIG undefined FUN_140b8d3b0(void)

ulonglong FUN_140b8d3b0(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_28;
  ulonglong local_20;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar2 = *(longlong **)(param_1 + 0x1128);
  plVar3 = plVar2 + *(int *)(param_1 + 0x1130);
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    if (*plVar2 == param_2) {
      return CONCAT71((int7)(int3)((uint)*(int *)(param_1 + 0x1130) >> 8),1);
    }
  }
  uVar8 = 0;
  lVar9 = *(longlong *)(param_1 + 0x1138);
  lVar10 = (longlong)*(int *)(param_1 + 0x1140) * 0x20 + lVar9;
  local_28 = 0;
  local_20 = 0;
  do {
    if (lVar9 == lVar10) {
      uVar6 = 0;
LAB_140b8d4e6:
      if ((int)uVar8 != 0) {
        plVar3 = (longlong *)(local_28 + 0x78);
        do {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 0x11;
          uVar7 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 != 0);
      }
      if (local_28 != 0) {
        FMemory::Free(local_28);
      }
      return uVar6;
    }
    if ((int)uVar8 != 0) {
      plVar3 = (longlong *)(local_28 + 0x78);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0x11;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 != 0);
    }
    uVar8 = local_20 >> 0x20;
    local_20 = local_20 & 0xffffffff00000000;
    if ((int)uVar8 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
                (&local_28,0);
    }
    FUN_142ffa740(lVar9);
    uVar8 = (ulonglong)(int)local_20;
    lVar5 = uVar8 * 0x88 + local_28;
    lVar4 = local_28;
    if (local_28 != lVar5) {
      do {
        lVar1 = FHardwareCursor::GetHandle(lVar4);
        if (lVar1 == param_2) {
          uVar8 = local_20 & 0xffffffff;
          uVar6 = 1;
          goto LAB_140b8d4e6;
        }
        lVar4 = lVar4 + 0x88;
      } while (lVar4 != lVar5);
      uVar8 = local_20 & 0xffffffff;
    }
    lVar9 = lVar9 + 0x20;
  } while( true );
}



// FUNCTION 140b8d560 FUN_140b8d560 body=973 status=ok
// SIG undefined FUN_140b8d560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b8d560(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  char param_5,char param_6,float param_7)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  longlong *plVar11;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined1 local_190;
  float local_188;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  longlong *local_160;
  longlong *plStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_128 [32];
  longlong local_108;
  longlong local_f8;
  longlong local_e8;
  longlong local_d8;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  cVar2 = FUN_140b839f0();
  if (cVar2 != '\0') {
    lVar5 = FUN_140b825a0(param_1);
    if (lVar5 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = FUN_140cb68f0(lVar5);
    }
    cVar3 = FUN_1430035b0(*param_2);
    fVar1 = param_7;
    local_188 = param_7;
    if ((cVar2 == '\x01') && (cVar3 != '\0')) {
      if (param_6 != '\0') {
        iVar4 = rand();
        local_188 = (float)iVar4 * 3.051851e-05 * fVar1;
      }
      if ((param_5 == '\0') || (local_188 <= 0.0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 0;
      local_164 = 0;
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      local_198 = &local_178;
      local_190 = uVar10;
      lVar5 = FUN_143018960(param_2,uVar6,param_4,&local_16c);
      lVar7 = 0;
      if (lVar5 != 0) {
        lVar7 = ATrap::GetActivationShapeComponent(lVar5);
      }
      lVar8 = FUN_140b823d0(param_1);
      if (((lVar8 != 0) && (lVar5 != 0)) && (lVar7 != 0)) {
        FUN_140b8ce60(lVar5);
        lVar8 = param_3[1];
        iVar4 = (int)lVar8 + 1;
        *(int *)(param_3 + 1) = iVar4;
        if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
        }
        *(longlong *)(*param_3 + (longlong)(int)lVar8 * 8) = lVar5;
        _guard_xfg_dispatch_icall_nop(local_128,0,0x68);
        FUN_142ff3000(lVar7,local_128);
        local_150 = local_128;
        puStack_148 = &param_5;
        local_140 = &param_6;
        local_88 = (longlong *)0x0;
        uStack_138 = &param_7;
        local_78 = 0;
        local_160 = param_1;
        plStack_158 = param_3;
        puVar9 = (undefined8 *)FUN_140438ef0(0x38,local_a8);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &PTR_FUN_1442e7fc0;
          puVar9[1] = local_160;
          puVar9[2] = plStack_158;
          puVar9[3] = local_150;
          puVar9[4] = puStack_148;
          *(undefined4 *)(puVar9 + 5) = (undefined4)local_140;
          *(undefined4 *)((longlong)puVar9 + 0x2c) = local_140._4_4_;
          *(undefined4 *)(puVar9 + 6) = (undefined4)uStack_138;
          *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_138._4_4_;
        }
        local_b8[0] = &LAB_140b7cb00;
        FUN_140b7fe80(param_1,local_b8);
        if (local_78 != 0) {
          plVar11 = local_a8;
          if (local_88 != (longlong *)0x0) {
            plVar11 = local_88;
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11,0);
          }
        }
        if (local_88 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_d8 != 0) {
          FMemory::Free();
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
      }
    }
    else {
      if (param_6 != '\0') {
        iVar4 = rand();
        local_188 = (float)iVar4 * 3.051851e-05 * fVar1;
      }
      if ((param_5 == '\0') || (local_188 <= 0.0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      local_16c = 0;
      local_164 = 0;
      local_178 = 0;
      local_170 = 0;
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      local_198 = &local_16c;
      local_190 = uVar10;
      lVar5 = FUN_143018960(param_2,uVar6,param_4,&local_178);
      if (lVar5 != 0) {
        iVar4 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
        }
        *(longlong *)(*param_3 + (longlong)iVar4 * 8) = lVar5;
        FUN_140b88300(lVar5,param_1);
      }
    }
  }
  return;
}



// FUNCTION 140b8d930 FUN_140b8d930 body=1522 status=ok
// SIG undefined FUN_140b8d930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b8d930(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,undefined4 param_6,char param_7)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  longlong local_res20;
  longlong local_188;
  undefined4 local_180;
  longlong local_178;
  undefined4 local_170;
  longlong local_168;
  ulonglong local_160;
  longlong local_158;
  undefined4 local_150;
  code *local_148;
  longlong **pplStack_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined1 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  longlong local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint uStack_94;
  longlong *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  iVar5 = FUN_142235230();
  if (iVar5 == 3) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x94) & 0x18) != 0x10) {
    return;
  }
  local_res20 = param_4;
  if ((param_7 == '\0') && (param_4 == 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
      return;
    }
    local_res20 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x418);
    if (local_res20 == 0) {
      return;
    }
  }
  local_158 = _DAT_1468b5d90;
  local_150 = DAT_1468b5d98;
  lVar15 = 0;
  local_178 = DAT_1468b5da0;
  local_170 = DAT_1468b5da8;
  if (param_3 == 0) {
    lVar13 = 0;
    if (param_7 != '\0') goto LAB_140b8db1c;
  }
  else {
    lVar15 = FUN_14222b250(param_1,param_3,0);
    if (param_7 != '\0') goto LAB_140b8db1c;
    lVar13 = lVar15;
    if (lVar15 != 0) {
      FUN_14238d6f0(lVar15,param_3,&local_158,&local_178);
      goto LAB_140b8db1c;
    }
  }
  lVar15 = lVar13;
  uVar6 = FUN_14222da00(param_1,1,&local_158,&local_f8);
  lVar13 = param_1[0x2d];
  if (lVar13 == 0) {
    uVar6 = (undefined4)DAT_1468b5da0;
    uVar16 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_180 = DAT_1468b5da8;
  }
  else {
    fVar3 = *(float *)(lVar13 + 0x210);
    local_148 = *(code **)(lVar13 + 0x210);
    fVar4 = *(float *)(lVar13 + 0x218);
    pplStack_140 = *(longlong ***)(lVar13 + 0x218);
    auVar2._4_4_ = -(uint)(*(float *)(lVar13 + 0x254) != *(float *)(lVar13 + 0x214));
    auVar2._0_4_ = -(uint)(*(float *)(lVar13 + 0x250) != fVar3);
    auVar2._8_4_ = -(uint)(*(float *)(lVar13 + 600) != fVar4);
    auVar2._12_4_ = -(uint)(*(float *)(lVar13 + 0x25c) != *(float *)(lVar13 + 0x21c));
    iVar5 = movmskps(uVar6,auVar2);
    if (iVar5 != 0) {
      *(float *)(lVar13 + 0x250) = fVar3;
      *(float *)(lVar13 + 0x254) = *(float *)(lVar13 + 0x214);
      *(float *)(lVar13 + 600) = fVar4;
      *(float *)(lVar13 + 0x25c) = *(float *)(lVar13 + 0x21c);
      puVar7 = (undefined8 *)FQuat::Rotator(&local_148,&local_188);
      *(undefined8 *)(lVar13 + 0x260) = *puVar7;
      *(undefined4 *)(lVar13 + 0x268) = *(undefined4 *)(puVar7 + 1);
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar13 + 0x260);
    uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x260) >> 0x20);
    local_180 = *(undefined4 *)(lVar13 + 0x268);
  }
  local_188 = CONCAT44(uVar16,uVar6);
  local_178 = local_188;
  local_170 = local_180;
LAB_140b8db1c:
  uVar8 = FUN_142dfdf30();
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar8);
  if (plVar9 == (longlong *)0x0) {
    local_f0 = 1;
  }
  else {
    local_f0 = (**(code **)(*plVar9 + 0x400))(plVar9);
  }
  local_138 = 0;
  local_130 = 0;
  (**(code **)(*param_2 + 0x280))(param_2,&local_138);
  local_f8 = &local_168;
  local_168 = 0;
  pplStack_140 = &local_f8;
  local_160 = 0;
  local_148 = FUN_1409fc860;
  local_e8 = param_1;
  FUN_142ff36a0(&local_138,param_1,&local_148);
  lVar13 = param_1[0x2d];
  if (lVar13 == 0) {
    local_188 = _DAT_1468b5d90;
    local_180 = DAT_1468b5d98;
  }
  else {
    local_188 = *(longlong *)(lVar13 + 0x220);
    local_180 = *(undefined4 *)(lVar13 + 0x228);
  }
  uVar12 = (ulonglong)(int)local_160;
  local_d0 = local_180;
  local_d8 = local_188;
  local_188 = uVar12 * 0x60 + local_168;
  lVar13 = local_168;
  if (local_168 != local_188) {
    do {
      uVar12 = 0;
      FUN_140b8d560(param_1,lVar13,param_5,&local_d8,1,1,param_6);
      plVar9 = (longlong *)*param_5;
      uVar14 = (longlong)(int)param_5[1] & 0x1fffffffffffffff;
      if (plVar9 + (int)param_5[1] < plVar9) {
        uVar14 = 0;
      }
      if (uVar14 != 0) {
        do {
          plVar1 = (longlong *)*plVar9;
          if (plVar1 != (longlong *)0x0) {
            FUN_140b88300(plVar1,param_1);
            if (param_7 == '\0') {
              uStack_ac = (undefined4)local_178;
              uStack_a8 = (undefined4)((ulonglong)local_178 >> 0x20);
              uStack_c0 = 0;
              local_128 = 0;
              uStack_120 = 0;
              uStack_a4 = local_170;
              uStack_a0 = 0;
              local_b8 = local_158;
              uStack_b0 = local_150;
              local_98 = 0;
              uStack_80 = 0;
              local_118 = 0;
              local_78._8_4_ = local_150;
              local_78._0_8_ = local_158;
              local_78._12_4_ = uStack_ac;
              local_58 = (ulonglong)uStack_94 << 0x20;
              local_68 = uStack_a8;
              uStack_64 = local_170;
              uStack_60 = 0;
              uStack_5c = 0;
              local_110 = 1;
              local_10c = 0;
              local_104 = 0;
              local_100 = 1;
              local_c8 = param_1;
              local_88 = param_1;
              FUN_142d9d660(local_res20,&local_88,&local_128);
              FUN_14223c850(plVar1,&local_128,0,0,1);
              plVar10 = (longlong *)FVector::Rotation((longlong)&uStack_120 + 4,&local_148);
              local_f8 = (longlong *)*plVar10;
              local_f0 = (undefined4)plVar10[1];
              AActor::SetActorRotation(plVar1,&local_f8,1);
              FUN_143015760(plVar1,SQRT(uStack_120._4_4_ * uStack_120._4_4_ +
                                        (float)local_118 * (float)local_118 +
                                        local_118._4_4_ * local_118._4_4_));
              FUN_143015710(plVar1,&local_10c);
            }
            else if (lVar15 == 0) {
              FUN_142227350(plVar1,0,1);
            }
            else {
              (**(code **)(*plVar1 + 0x818))(plVar1,lVar15,param_3);
            }
          }
          plVar9 = plVar9 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar14);
      }
      lVar13 = lVar13 + 0x60;
    } while (lVar13 != local_188);
    uVar12 = local_160 & 0xffffffff;
  }
  if ((int)uVar12 != 0) {
    plVar9 = (longlong *)(local_168 + 0x38);
    do {
      if (plVar9[2] != 0) {
        FMemory::Free();
      }
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar9 + -3);
      plVar9 = plVar9 + 0xc;
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 != 0);
  }
  if (local_168 != 0) {
    FMemory::Free(local_168);
  }
  if ((int)local_130 != 0) {
    plVar9 = (longlong *)(local_138 + 0x78);
    iVar5 = (int)local_130;
    do {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 0x11;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b8df30 FUN_140b8df30 body=244 status=ok
// SIG undefined FUN_140b8df30(void)

undefined4 FUN_140b8df30(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_1 == (longlong *)0x0) || (param_2[3] == 0)) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x15);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0xf);
    if (param_2[0xb] != 0) {
      FMemory::Free();
    }
    FUN_1409f5880(param_2 + 1);
  }
  else {
    iVar1 = FUN_142235230();
    if ((iVar1 != 3) && ((*(byte *)((longlong)param_1 + 0x94) & 0x18) == 0x10)) {
      if (*(char *)(param_2 + 10) != '\x01') {
LAB_140b8df91:
        uVar2 = 0xffffffff;
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar3 = FUN_140b5b830(uVar4);
        if (lVar3 != 0) {
          *param_2 = param_1;
          uVar2 = FUN_140b50b70(lVar3,param_2);
        }
        FUN_140b7a840(param_2);
        return uVar2;
      }
      lVar3 = FUN_14222b250(param_1,param_2[9],0);
      param_2[0x11] = lVar3;
      if (lVar3 != 0) goto LAB_140b8df91;
    }
    FUN_140b7a840(param_2);
  }
  return 0xffffffff;
}



// FUNCTION 140b8e030 FUN_140b8e030 body=996 status=ok
// SIG undefined FUN_140b8e030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_140b8e030(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,char param_5)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined1 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined1 local_90 [24];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  longlong *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  if (((param_1 != (longlong *)0x0) && (lVar6 = (**(code **)(*param_1 + 0x148))(), lVar6 != 0)) &&
     (param_2 != 0)) {
    lVar7 = ALandscapeStreamingProxy::StaticClass();
    lVar8 = param_2;
    do {
      if (lVar8 == lVar7) {
        iVar4 = FUN_142235230(param_1);
        if (iVar4 == 3) {
          return (longlong *)0x0;
        }
        local_100 = DAT_1468b5d98;
        bVar2 = false;
        local_110 = DAT_1468b5da8;
        local_108 = _DAT_1468b5d90;
        local_118 = DAT_1468b5da0;
        if (param_3 == 0) {
LAB_140b8e12a:
          lVar8 = param_1[0x2d];
        }
        else {
          lVar8 = FUN_14222b250(param_1,param_3,0);
          if (param_5 == '\0') {
            if (lVar8 == 0) goto LAB_140b8e12a;
            bVar2 = true;
            FUN_14238d6f0(lVar8,param_3,&local_108,&local_118);
          }
          if (lVar8 == 0) goto LAB_140b8e12a;
        }
        if ((param_5 == '\0') && (!bVar2)) {
          uVar5 = FUN_14222da00(param_1,1,&local_108,local_90);
          lVar7 = param_1[0x2d];
          if (lVar7 == 0) {
            uVar5 = (undefined4)DAT_1468b5da0;
            uVar12 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
            local_120 = DAT_1468b5da8;
          }
          else {
            local_78 = *(float *)(lVar7 + 0x210);
            fStack_74 = *(float *)(lVar7 + 0x214);
            fStack_70 = *(float *)(lVar7 + 0x218);
            fStack_6c = *(float *)(lVar7 + 0x21c);
            auVar1._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_74);
            auVar1._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_78);
            auVar1._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_70);
            auVar1._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_6c);
            iVar4 = movmskps(uVar5,auVar1);
            if (iVar4 != 0) {
              *(float *)(lVar7 + 0x250) = local_78;
              *(float *)(lVar7 + 0x254) = fStack_74;
              *(float *)(lVar7 + 600) = fStack_70;
              *(float *)(lVar7 + 0x25c) = fStack_6c;
              puVar9 = (undefined8 *)FQuat::Rotator(&local_78,&local_128);
              *(undefined8 *)(lVar7 + 0x260) = *puVar9;
              *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar9 + 1);
            }
            uVar5 = (undefined4)*(undefined8 *)(lVar7 + 0x260);
            uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x260) >> 0x20);
            local_120 = *(undefined4 *)(lVar7 + 0x268);
          }
          local_128 = CONCAT44(uVar12,uVar5);
          local_118 = local_128;
          local_110 = local_120;
        }
        lVar10 = ALandscapeStreamingProxy::StaticClass();
        lVar7 = param_2;
        goto LAB_140b8e1f2;
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
  }
  return (longlong *)0x0;
  while (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0) {
LAB_140b8e1f2:
    if (lVar7 == lVar10) goto LAB_140b8e203;
  }
  param_2 = 0;
LAB_140b8e203:
  uVar13 = 0;
  plVar11 = (longlong *)
            FUN_142ff1380(lVar6,param_2,1,0,0,0,&DAT_1468b5d90,&DAT_1468b5d90,&DAT_1468b5da0,0,0);
  if (plVar11 != (longlong *)0x0) {
    if (param_5 == '\0') {
      if (param_4 == 0) {
        FUN_14223c850(plVar11,&local_108,0,0,uVar13 & 0xffffffffffffff00);
        local_128 = local_118;
        local_120 = local_110;
        AActor::SetActorRotation(plVar11,&local_128,0);
      }
      else {
        uStack_ac = local_118;
        uVar3 = uStack_ac;
        uStack_c0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        uStack_b0 = local_100;
        uStack_ac._0_4_ = (undefined4)local_118;
        uStack_a4 = local_110;
        uStack_a0 = 0;
        local_58._8_4_ = local_100;
        local_58._0_8_ = local_108;
        local_58._12_4_ = (undefined4)uStack_ac;
        uStack_60 = 0;
        uStack_ac._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
        local_98 = 0;
        local_38 = (ulonglong)uStack_94 << 0x20;
        local_48 = uStack_ac._4_4_;
        uStack_44 = local_110;
        uStack_40 = 0;
        uStack_3c = 0;
        local_e8 = 0;
        local_e0 = 1;
        local_dc = 0;
        local_d4 = 0;
        local_d0 = 1;
        local_c8 = param_1;
        uStack_ac = uVar3;
        local_68 = param_1;
        FUN_142d9d660(param_4,&local_68,&local_f8);
        FUN_14223c850(plVar11,&local_f8,0,0,1);
        puVar9 = (undefined8 *)FVector::Rotation((longlong)&uStack_f0 + 4,local_90);
        local_128 = *puVar9;
        local_120 = *(undefined4 *)(puVar9 + 1);
        AActor::SetActorRotation(plVar11,&local_128,1);
        FUN_143015760(plVar11,SQRT(uStack_f0._4_4_ * uStack_f0._4_4_ +
                                   (float)local_e8 * (float)local_e8 +
                                   local_e8._4_4_ * local_e8._4_4_));
        FUN_143015710(plVar11,&local_dc);
      }
    }
    else if (lVar8 != 0) {
      (**(code **)(*plVar11 + 0x818))(plVar11,lVar8,param_3,0);
    }
    FUN_140b88300(plVar11,param_1);
  }
  return plVar11;
}



// FUNCTION 140b8e420 FUN_140b8e420 body=200 status=ok
// SIG undefined FUN_140b8e420(void)

void FUN_140b8e420(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  bool bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 local_res8 [32];
  
  if (param_1 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(param_1 + 0x128) == '\x03')) {
      puVar3 = (undefined4 *)FLinearColor::ToFColor(param_5,local_res8,0);
      FUN_14145e6e0(param_1,param_2,param_3,param_4,*puVar3,param_6,param_7);
    }
  }
  return;
}



// FUNCTION 140b8e4f0 FUN_140b8e4f0 body=173 status=ok
// SIG undefined FUN_140b8e4f0(void)

void FUN_140b8e4f0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  longlong local_18 [2];
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  lVar2 = *(longlong *)(lVar2 + 400);
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
      FUN_140bce8b0(lVar2,1);
      local_18[0] = 0;
      local_18[1] = 0;
      FName::FName(local_res8,L"CasinoIntro_P",1);
      FUN_140bc8fd0(lVar2,local_res8,local_18,0);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b8e5a0 FUN_140b8e5a0 body=369 status=ok
// SIG undefined FUN_140b8e5a0(void)

void FUN_140b8e5a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  
  if ((*(longlong *)(param_1 + 0x1b0) == 0) && (lVar3 = FUN_140b82510(), lVar3 != 0)) {
    uVar7 = 0;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140dbb2f0(&local_28);
    iVar2 = (int)local_20;
    plVar1 = local_28;
    if (0 < (int)local_20) {
      plVar1 = (longlong *)(lVar3 + 0xc98);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_1442e7fd8;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        plVar4[2] = (longlong)FUN_140b87e10;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar5;
        *plVar4 = (longlong)&PTR_FUN_1442e8020;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
        iVar2 = *(int *)(lVar3 + 0xca0);
        uVar7 = *puVar6;
        *(int *)(lVar3 + 0xca0) = iVar2 + 1;
        if (*(int *)(lVar3 + 0xca4) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar6 = plVar4;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x1b0) = uVar7;
      FUN_140befb30(lVar3,local_28,0,0);
      iVar2 = (int)local_20;
      plVar1 = local_28;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 140b8e720 FUN_140b8e720 body=31 status=ok
// SIG undefined FUN_140b8e720(void)

void FUN_140b8e720(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140b82510();
  if (lVar1 != 0) {
    FUN_140ba8040(lVar1);
    return;
  }
  return;
}



// FUNCTION 140b8e740 FUN_140b8e740 body=528 status=ok
// SIG undefined FUN_140b8e740(void)

void FUN_140b8e740(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res18 [16];
  longlong *local_68;
  int local_60;
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  FUN_140b82810(param_1,&local_58);
  plVar3 = plStack_50;
  if (local_58 == 0) goto LAB_140b8e910;
  Online::GetVoiceInterface(&local_48,0);
  plVar6 = local_48;
  plVar3 = plStack_50;
  if (local_48 != (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_60 = 3;
    local_68 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_140b86060;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f4d2d8;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res18,&local_68);
    *(undefined8 *)(param_1 + 0x118) = *puVar5;
    if (local_60 == 0) {
LAB_140b8e847:
      if (local_68 != (longlong *)0x0) {
        FMemory::Free(local_68);
      }
    }
    else if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x28))(local_68,0);
      if (local_68 != (longlong *)0x0) {
        local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
      }
      local_60 = 0;
      goto LAB_140b8e847;
    }
    plVar3 = plStack_50;
    local_38 = local_58;
    plStack_30 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      plVar6 = local_48;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_38,1);
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar3 = plStack_50;
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar3 = plStack_50;
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
          plVar3 = plStack_50;
        }
      }
    }
  }
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plVar3 = plStack_50;
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar3 = plStack_50;
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
        plVar3 = plStack_50;
      }
    }
  }
LAB_140b8e910:
  plVar6 = plStack_50;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar3 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140b8e950 FUN_140b8e950 body=320 status=ok
// SIG undefined FUN_140b8e950(void)

void FUN_140b8e950(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  FUN_140b82810(param_1,&local_38);
  plVar5 = plStack_30;
  if (local_38 != 0) {
    Online::GetExternalUIInterface(&local_28,0);
    plVar5 = plStack_30;
    if (local_28 != (longlong *)0x0) {
      local_18 = local_38;
      plStack_10 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      (**(code **)(*local_28 + 0x58))(plStack_30,&local_18);
      plVar4 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_10 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_30;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar5 = plStack_30;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar5 = plStack_30;
          }
        }
      }
    }
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      plVar5 = plStack_30;
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar5 = plStack_30;
        if (iVar2 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
          plVar5 = plStack_30;
        }
      }
    }
  }
  plVar4 = plStack_30;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar5 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140b8ea90 FUN_140b8ea90 body=344 status=ok
// SIG undefined FUN_140b8ea90(void)

void FUN_140b8ea90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [16];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_1404cdd50(&local_28,0);
  if (local_28 == (longlong *)0x0) goto LAB_140b8eb98;
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_1442e80f8;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140b86850;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_1442e8140;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0xf0))(local_28,local_res18,&local_38);
  *(undefined8 *)(param_1 + 0x128) = *puVar6;
  if (local_30 == 0) {
LAB_140b8eb7f:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140b8eb7f;
  }
  (**(code **)(*local_28 + 0x110))(local_28);
LAB_140b8eb98:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140b8ebf0 FUN_140b8ebf0 body=158 status=ok
// SIG undefined FUN_140b8ebf0(void)

void FUN_140b8ebf0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
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
    if (bVar2) {
      local_28 = 0xffffffff;
      uStack_24 = 0xffffffff;
      uStack_20 = 0;
      uStack_1c = 0;
      local_18 = 0;
      FUN_1410e6430(lVar1,&local_28,CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1),0);
    }
  }
  return;
}



// FUNCTION 140b8ec90 FUN_140b8ec90 body=389 status=ok
// SIG undefined FUN_140b8ec90(void)

void FUN_140b8ec90(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48 [2];
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  FUN_140b82a70(&local_38,0);
  FUN_140b82810(param_1,&local_58);
  plVar5 = local_38;
  plVar4 = plStack_50;
  if ((local_38 != (longlong *)0x0) && (local_58 != 0)) {
    local_48[0] = 0;
    local_48[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"ALL!",10);
    plVar4 = plStack_50;
    local_28 = local_58;
    plStack_20 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      plVar5 = local_38;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_28,local_48);
    plVar5 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_20 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      plVar4 = plStack_50;
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar4 = plStack_50;
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
          plVar4 = plStack_50;
        }
      }
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  plVar5 = plStack_50;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar4 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140b8ee20 FUN_140b8ee20 body=809 status=ok
// SIG undefined FUN_140b8ee20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b8ee20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_138 [32];
  longlong *local_118;
  int local_110;
  longlong local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  longlong local_c0 [3];
  undefined **local_a8 [5];
  longlong local_80 [4];
  longlong local_60;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_140b82b80(param_1,&local_f8);
  plVar9 = local_f8;
  if (local_f8 == (longlong *)0x0) goto LAB_140b8f0e8;
  FUN_140b82810(param_1,&local_108);
  plVar8 = plStack_100;
  if (local_108 != 0) {
    FUN_140da8910(local_a8,&DAT_146297e38);
    uVar3 = FUN_140b82510(param_1);
    uVar4 = FUN_140b817d0(local_c0);
    FUN_140db09a0(local_a8,uVar3,uVar4);
    if (local_c0[0] != 0) {
      FMemory::Free();
    }
    plVar8 = plStack_100;
    local_e8 = local_108;
    plStack_e0 = plStack_100;
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
      UNLOCK();
      plVar9 = local_f8;
    }
    lVar7 = *plVar9;
    puVar5 = (undefined8 *)FName::FName(local_d8,L"TestSession",1);
    (**(code **)(lVar7 + 0x30))(plVar9,&local_e8,*puVar5,local_a8);
    plVar6 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_e0 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      plVar8 = plStack_100;
      plVar9 = local_f8;
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar8 = plStack_100;
        plVar9 = local_f8;
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
          plVar8 = plStack_100;
          plVar9 = local_f8;
        }
      }
    }
    local_118 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_110 = 3;
    local_118 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_143f77cd8;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      plVar6[2] = (longlong)FUN_140b847d0;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_143f77d20;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0xd8))(plVar9,local_d0,&local_118);
    *(undefined8 *)(param_1 + 0x188) = *puVar5;
    if (local_110 == 0) {
LAB_140b8f025:
      if (local_118 != (longlong *)0x0) {
        FMemory::Free(local_118);
      }
    }
    else if (local_118 != (longlong *)0x0) {
      (**(code **)(*local_118 + 0x28))(local_118,0);
      if (local_118 != (longlong *)0x0) {
        local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
      }
      local_110 = 0;
      goto LAB_140b8f025;
    }
    lVar7 = *plVar9;
    puVar5 = (undefined8 *)FName::FName(local_c8,L"TestSession",1);
    (**(code **)(lVar7 + 0xd0))(plVar9,*puVar5);
    local_a8[0] = &PTR_FUN_143f769a0;
    local_38 = 0;
    if (local_40 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_80,0);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_80[0] != 0) {
      FMemory::Free();
    }
  }
  plVar9 = plStack_100;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
LAB_140b8f0e8:
  plVar9 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_f0 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  return;
}



// FUNCTION 140b8f150 FUN_140b8f150 body=643 status=ok
// SIG undefined FUN_140b8f150(void)

void FUN_140b8f150(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong local_res10;
  undefined1 uVar12;
  undefined1 local_78 [8];
  longlong local_70;
  longlong local_68 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if ((*(longlong *)(lVar7 + 400) != 0) && (lVar7 = FUN_1424503b0(), lVar7 != 0)) {
    lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FWeakObjectPtr::operator=(local_78,0);
      local_70 = 0;
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UOakCheatManager::OnDialogClicked",L"::");
      pwVar6 = (wchar_t *)0x0;
      while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar6 = pwVar5;
      }
      FName::FName(&local_res10,pwVar6 + 2,1);
      FWeakObjectPtr::operator=(local_78,param_1);
      local_70 = local_res10;
      if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(local_78), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_70);
      }
      local_68[2] = 0;
      local_68[3] = 0x31;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
      FGenericPlatformString::Convert<char,wchar_t>
                (local_68[2],0x31,"This is a test dialog.  Please make a selection.",0x31,0x3f);
      local_68[0] = 0;
      local_68[1] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
      uVar12 = 0;
      FGenericPlatformString::Convert<char,wchar_t>(local_68[0],0xc,"Test Dialog",0xc,0x3f);
      uVar10 = FText::FromString(local_30,local_68 + 2);
      uVar11 = FText::FromString(local_48,local_68);
      FUN_1410f47a0(lVar7,uVar11,uVar10,local_78,CONCAT11(uVar12,1),0,0,0,0);
      if (local_40 != (longlong *)0x0) {
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
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_68[2] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b8f3e0 FUN_140b8f3e0 body=2209 status=ok
// SIG undefined FUN_140b8f3e0(void)

void FUN_140b8f3e0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t wVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  wint_t wVar8;
  wint_t wVar9;
  wint_t *pwVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  longlong *local_130;
  longlong local_128 [12];
  undefined1 local_c8 [8];
  longlong *plStack_c0;
  undefined1 local_b8 [8];
  longlong *plStack_b0;
  undefined1 local_a8 [8];
  longlong *plStack_a0;
  undefined1 local_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  longlong *plStack_70;
  undefined1 local_68 [8];
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *plStack_40;
  
  FUN_140b82810(param_1,&local_148);
  if (CONCAT44(uStack_144,local_148) != 0) {
    FUN_1404cf2e0(&local_138,0);
    plVar14 = local_138;
    if (local_138 != (longlong *)0x0) {
      puVar15 = &DAT_143f3eda8;
      if ((int)param_2[1] == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*param_2;
      }
      pwVar10 = &DAT_1442e64b8;
      do {
        wVar8 = *(wint_t *)((longlong)(puVar16 + -0xa217325c) + (longlong)pwVar10);
        if ((wVar8 == 0) && (*pwVar10 == 0)) goto LAB_140b8f4c2;
        if (wVar8 != *pwVar10) {
          wVar8 = towlower(wVar8);
          wVar9 = towlower(*pwVar10);
          if (wVar8 != wVar9) goto LAB_140b8f4b3;
        }
        pwVar10 = pwVar10 + 1;
      } while( true );
    }
    goto LAB_140b8f52d;
  }
  goto LAB_140b8f591;
LAB_140b8f4b3:
  if (wVar8 != wVar9) {
    if ((int)param_2[1] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*param_2;
    }
    pwVar11 = L"ContentMarketplace";
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar16 + -0xa217333c) + (longlong)pwVar11);
      if ((wVar4 == L'\0') && (*pwVar11 == L'\0')) goto LAB_140b8f657;
      if (wVar4 != *pwVar11) {
        wVar8 = towlower(wVar4);
        wVar9 = towlower(*pwVar11);
        if (wVar8 != wVar9) goto LAB_140b8f648;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_140b8f4c2:
  plStack_c0 = (longlong *)CONCAT44(uStack_13c,uStack_140);
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
    UNLOCK();
    plVar14 = local_138;
  }
  lVar13 = CONCAT44(uStack_13c,uStack_140);
  (**(code **)(*plVar14 + 0x18))(plVar14,local_c8);
  plStack_50 = plStack_c0;
  goto LAB_140b8f4fa;
LAB_140b8f648:
  if (wVar8 != wVar9) {
    if ((int)param_2[1] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*param_2;
    }
    pwVar11 = L"MembershipMarketplace";
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar16 + -0xa2173350) + (longlong)pwVar11);
      if ((wVar4 == L'\0') && (*pwVar11 == L'\0')) goto LAB_140b8f752;
      if (wVar4 != *pwVar11) {
        wVar8 = towlower(wVar4);
        wVar9 = towlower(*pwVar11);
        if (wVar8 != wVar9) goto LAB_140b8f743;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_140b8f657:
  plStack_b0 = (longlong *)CONCAT44(uStack_13c,uStack_140);
  local_128[6] = 0;
  local_128[7] = 0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
    UNLOCK();
    plVar14 = local_138;
  }
  lVar13 = CONCAT44(uStack_13c,uStack_140);
  (**(code **)(*plVar14 + 0x28))(plVar14,local_b8,0xffffffff,local_128 + 6);
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_b0 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
    lVar13 = CONCAT44(uStack_13c,uStack_140);
  }
  if (local_128[6] != 0) {
    FMemory::Free();
  }
  goto LAB_140b8f532;
LAB_140b8f743:
  if (wVar8 != wVar9) {
    if ((int)param_2[1] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*param_2;
    }
    pwVar11 = L"GamerCard";
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar16 + -0xa2173368) + (longlong)pwVar11);
      if ((wVar4 == L'\0') && (*pwVar11 == L'\0')) goto LAB_140b8f847;
      if (wVar4 != *pwVar11) {
        wVar8 = towlower(wVar4);
        wVar9 = towlower(*pwVar11);
        if (wVar8 != wVar9) goto LAB_140b8f838;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_140b8f752:
  plStack_a0 = (longlong *)CONCAT44(uStack_13c,uStack_140);
  local_128[8] = 0;
  local_128[9] = 0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
    UNLOCK();
    plVar14 = local_138;
  }
  lVar13 = CONCAT44(uStack_13c,uStack_140);
  (**(code **)(*plVar14 + 0x30))(plVar14,local_a8,0,local_128 + 8);
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_a0 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
    lVar13 = CONCAT44(uStack_13c,uStack_140);
  }
  if (local_128[8] != 0) {
    FMemory::Free();
  }
  goto LAB_140b8f532;
LAB_140b8f838:
  if (wVar8 != wVar9) {
    if ((int)param_2[1] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*param_2;
    }
    pwVar11 = L"Invite";
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar16 + -0xa2173374) + (longlong)pwVar11);
      if ((wVar4 == L'\0') && (*pwVar11 == L'\0')) goto LAB_140b8f93e;
      if (wVar4 != *pwVar11) {
        wVar8 = towlower(wVar4);
        wVar9 = towlower(*pwVar11);
        if (wVar8 != wVar9) goto LAB_140b8f933;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_140b8f847:
  auVar6._4_4_ = uStack_140;
  auVar6._0_4_ = uStack_144;
  auVar6._8_4_ = uStack_13c;
  auVar7._12_4_ = 0;
  auVar7._0_12_ = auVar6;
  local_88 = auVar7 << 0x20;
  lVar12 = 0;
  if (auVar6._4_8_ != 0) {
    LOCK();
    piVar1 = (int *)(auVar6._4_8_ + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    lVar12 = CONCAT44(uStack_13c,uStack_140);
    plVar14 = local_138;
  }
  uStack_8c = uStack_13c;
  lVar13 = 0;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
    lVar13 = CONCAT44(uStack_13c,uStack_140);
    plVar14 = local_138;
  }
  uStack_90 = uStack_140;
  (**(code **)(*plVar14 + 0x40))(plVar14,local_98,local_88);
  plVar14 = (longlong *)CONCAT44(uStack_8c,uStack_90);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    lVar13 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    lVar13 = CONCAT44(uStack_13c,uStack_140);
  }
  plStack_50 = (longlong *)local_88._8_8_;
  goto LAB_140b8f4fa;
LAB_140b8f933:
  if (wVar8 != wVar9) {
    if ((int)param_2[1] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*param_2;
    }
    pwVar11 = L"Party";
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar16 + -0xa217337c) + (longlong)pwVar11);
      if ((wVar4 == L'\0') && (*pwVar11 == L'\0')) goto LAB_140b8f9ee;
      if (wVar4 != *pwVar11) {
        wVar8 = towlower(wVar4);
        wVar9 = towlower(*pwVar11);
        if (wVar8 != wVar9) goto LAB_140b8f9e3;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_140b8f93e:
  plStack_70 = (longlong *)CONCAT44(uStack_13c,uStack_140);
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
    UNLOCK();
    plVar14 = local_138;
  }
  lVar13 = CONCAT44(uStack_13c,uStack_140);
  (**(code **)(*plVar14 + 0x48))(plVar14,local_78,0x11f);
  plStack_50 = plStack_70;
  goto LAB_140b8f4fa;
LAB_140b8f9e3:
  if (wVar8 != wVar9) {
    if ((int)param_2[1] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*param_2;
    }
    pwVar11 = L"Achievements";
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar16 + -0xa2173384) + (longlong)pwVar11);
      if ((wVar4 == L'\0') && (*pwVar11 == L'\0')) goto LAB_140b8fa84;
      if (wVar4 != *pwVar11) {
        wVar8 = towlower(wVar4);
        wVar9 = towlower(*pwVar11);
        if (wVar8 != wVar9) goto LAB_140b8fa79;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_140b8f9ee:
  plStack_60 = (longlong *)CONCAT44(uStack_13c,uStack_140);
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
    plVar14 = local_138;
  }
  lVar13 = CONCAT44(uStack_13c,uStack_140);
  (**(code **)(*plVar14 + 0x68))(plVar14,local_68);
  plStack_50 = plStack_60;
  goto LAB_140b8f4fa;
LAB_140b8fb13:
  if (wVar8 == wVar9) {
LAB_140b8fb22:
    local_128[5] = 0x10;
    local_128[10] = 0;
    local_128[0xb] = 0;
    local_128[4] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 4,0);
    FGenericPlatformString::Memcpy(local_128[4],L"TestDefaultText",0x20);
    local_128[2] = 0;
    local_128[3] = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 2,0);
    FGenericPlatformString::Memcpy(local_128[2],L"TestNonEditableMessage",0x2e);
    local_128[0] = 0;
    local_128[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128,0);
    FGenericPlatformString::Memcpy(local_128[0],L"TestTitle",0x14);
    plStack_40 = (longlong *)CONCAT44(uStack_13c,uStack_140);
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
      plVar14 = local_138;
    }
    lVar13 = CONCAT44(uStack_13c,uStack_140);
    (**(code **)(*plVar14 + 0x78))
              (plVar14,local_48,local_128 + 10,local_128,local_128 + 2,local_128 + 4);
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_40 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plStack_40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
      lVar13 = CONCAT44(uStack_13c,uStack_140);
    }
    if (local_128[0] != 0) {
      FMemory::Free();
    }
    if (local_128[2] != 0) {
      FMemory::Free();
    }
    if (local_128[4] != 0) {
      FMemory::Free();
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_128 + 10);
    goto LAB_140b8f532;
  }
  goto LAB_140b8f52d;
LAB_140b8fa79:
  if (wVar8 != wVar9) {
    if ((int)param_2[1] != 0) {
      puVar15 = (undefined2 *)*param_2;
    }
    pwVar11 = L"CustomMessage";
    do {
      wVar4 = *(wchar_t *)((longlong)pwVar11 + (longlong)(puVar15 + -0xa2173394));
      if ((wVar4 == L'\0') && (*pwVar11 == L'\0')) goto LAB_140b8fb22;
      if (wVar4 != *pwVar11) {
        wVar8 = towlower(wVar4);
        wVar9 = towlower(*pwVar11);
        if (wVar8 != wVar9) goto LAB_140b8fb13;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_140b8fa84:
  plStack_50 = (longlong *)CONCAT44(uStack_13c,uStack_140);
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    plVar14 = local_138;
  }
  lVar13 = CONCAT44(uStack_13c,uStack_140);
  (**(code **)(*plVar14 + 0x90))(plVar14,local_58);
LAB_140b8f4fa:
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_50 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plStack_50 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
LAB_140b8f52d:
    lVar13 = CONCAT44(uStack_13c,uStack_140);
  }
LAB_140b8f532:
  plVar14 = local_130;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_130 + 1;
    lVar13 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
LAB_140b8f591:
    lVar13 = CONCAT44(uStack_13c,uStack_140);
  }
  if (lVar13 != 0) {
    LOCK();
    piVar1 = (int *)(lVar13 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      puVar5 = (undefined8 *)CONCAT44(uStack_13c,uStack_140);
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_13c,uStack_140) + 8))
                  ((longlong *)CONCAT44(uStack_13c,uStack_140),1);
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b8fc90 FUN_140b8fc90 body=354 status=ok
// SIG undefined FUN_140b8fc90(void)

void FUN_140b8fc90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  lVar4 = FUN_140b82d10();
  if (lVar4 != 0) {
    uVar5 = FText::FromString(local_30,param_6);
    uVar6 = FText::FromString(local_48,param_5);
    uVar7 = FText::FromString(local_60,param_4);
    FUN_1411daa60(lVar4,local_68,param_2,param_3,uVar7,uVar6,uVar5);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b8fe00 FUN_140b8fe00 body=1375 status=ok
// SIG undefined FUN_140b8fe00(void)

void FUN_140b8fe00(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  wchar_t _C;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  wint_t wVar7;
  wint_t wVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  wint_t *pwVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined2 *puVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  undefined8 *local_108;
  ulonglong local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_a0 [3];
  longlong local_88;
  longlong *plStack_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48 [2];
  
  lVar9 = FUN_140b82510();
  if (lVar9 == 0) {
    return;
  }
  puVar21 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar18 = &DAT_143f3eda8;
  }
  else {
    puVar18 = (undefined2 *)*param_2;
  }
  pwVar14 = &DAT_1442d1de0;
  do {
    wVar7 = *(wint_t *)((longlong)(puVar18 + -0xa2168ef0) + (longlong)pwVar14);
    if ((wVar7 == 0) && (*pwVar14 == 0)) goto LAB_140b8feb1;
    if (wVar7 != *pwVar14) {
      wVar7 = towlower(wVar7);
      wVar8 = towlower(*pwVar14);
      if (wVar7 != wVar8) break;
    }
    pwVar14 = pwVar14 + 1;
  } while( true );
  if (wVar7 == wVar8) {
LAB_140b8feb1:
    local_108 = (undefined8 *)0x0;
    local_100 = 0;
    uVar10 = FUN_140bb7630(lVar9);
    FUN_140d797b0(uVar10,&local_108);
    uVar23 = (ulonglong)(int)local_100;
    puVar24 = local_108 + uVar23 * 2;
    puVar19 = local_108;
    if (local_108 != puVar24) {
      do {
        puVar11 = (undefined8 *)FToolTipLayout::GetRelativeAnchorWidget(*puVar19,local_68);
        (**(code **)(*(longlong *)*puVar11 + 0x30))((longlong *)*puVar11,local_a0);
        plVar20 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar25 = local_60 + 1;
          lVar5 = *plVar25;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        uVar10 = *(undefined8 *)(lVar9 + 0x478);
        uVar12 = FToolTipLayout::GetRelativeAnchorWidget(*puVar19,local_58);
        FUN_140d79f00(uVar10,uVar12,1,0,local_a0);
        plVar20 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar25 = local_50 + 1;
          lVar5 = *plVar25;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        if (local_a0[0] != 0) {
          FMemory::Free();
        }
        puVar19 = puVar19 + 2;
      } while (puVar19 != puVar24);
      uVar23 = local_100 & 0xffffffff;
    }
    if ((int)uVar23 != 0) {
      plVar20 = local_108 + 1;
      do {
        plVar25 = (longlong *)*plVar20;
        if (plVar25 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar25 + 1;
          lVar9 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar25)(plVar25);
            LOCK();
            piVar1 = (int *)((longlong)plVar25 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar25 + 8))(plVar25,1);
            }
          }
        }
        plVar20 = plVar20 + 2;
        uVar22 = (int)uVar23 - 1;
        uVar23 = (ulonglong)uVar22;
      } while (uVar22 != 0);
    }
    if (local_108 != (undefined8 *)0x0) {
      FMemory::Free(local_108);
    }
    return;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar21 = (undefined2 *)*param_2;
  }
  pwVar15 = L"NearbyFriends";
  do {
    _C = *(wchar_t *)((longlong)(puVar21 + -0xa2168fdc) + (longlong)pwVar15);
    if ((_C == L'\0') && (*pwVar15 == L'\0')) goto LAB_140b9008f;
    if (_C != *pwVar15) {
      wVar7 = towlower(_C);
      wVar8 = towlower(*pwVar15);
      if (wVar7 != wVar8) {
        if (wVar7 != wVar8) {
          return;
        }
LAB_140b9008f:
        if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
          return;
        }
        lVar5 = param_1[4];
        if (lVar5 == 0) {
          return;
        }
        lVar13 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) {
          return;
        }
        FUN_142dcf3a0(lVar5,&local_d8);
        if (local_d8 != 0) {
          local_88 = local_d8;
          plStack_80 = plStack_d0;
          local_f8 = (longlong *)0x0;
          local_f0 = 0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
            UNLOCK();
          }
          uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
          uVar10 = FUN_1428cc8c0(uVar10,local_48);
          uVar12 = FUN_140bb7440(lVar9);
          FUN_140d83a50(uVar12,&local_88,uVar10,&local_f8);
          plVar20 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar25 = plStack_80 + 1;
            lVar5 = *plVar25;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar20 + 8))(plVar20,1);
              }
            }
          }
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          plVar25 = local_f8 + (longlong)(int)local_f0 * 2;
          for (plVar20 = local_f8; plVar20 != plVar25; plVar20 = plVar20 + 2) {
            plVar17 = *(longlong **)(*plVar20 + 0x18);
            plVar3 = *(longlong **)(*plVar20 + 0x10);
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
              UNLOCK();
            }
            local_c0 = plVar3;
            local_b8 = plVar17;
            if ((plVar3 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar6 == '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              (**(code **)(*plVar3 + 0x30))(plVar3,local_78);
              plVar16 = plVar17;
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
                plVar16 = local_b8;
              }
              local_e8 = plVar3;
              local_e0 = plVar17;
              FUN_140d79f00(*(undefined8 *)(lVar9 + 0x478),&local_e8,1,0,local_78);
              plVar3 = local_e0;
              plVar17 = plVar16;
              if (local_e0 != (longlong *)0x0) {
                LOCK();
                plVar17 = local_e0 + 1;
                lVar5 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                plVar17 = local_b8;
                if ((int)lVar5 == 1) {
                  (**(code **)*local_e0)(local_e0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar17 = local_b8;
                  if (iVar2 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                    plVar17 = local_b8;
                  }
                }
              }
              if (local_78[0] != 0) {
                FMemory::Free();
              }
            }
            plVar3 = local_b8;
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              plVar17 = plVar17 + 1;
              lVar5 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_b8)(local_b8);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*local_b8 + 8))(local_b8,1);
                }
              }
            }
          }
          TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_f8);
        }
        if (plStack_d0 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar20 = plStack_d0 + 1;
        lVar9 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar9 != 1) {
          return;
        }
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_d0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return;
        }
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
        return;
      }
    }
    pwVar15 = pwVar15 + 1;
  } while( true );
}



// FUNCTION 140b90360 FUN_140b90360 body=569 status=ok
// SIG undefined FUN_140b90360(void)

void FUN_140b90360(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 local_res18 [16];
  longlong *local_68;
  int local_60;
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  FUN_140b82810(param_1,&local_58);
  if (local_58 == 0) goto LAB_140b90555;
  Online::GetSessionInterface(&local_48,0);
  plVar6 = local_48;
  if (local_48 != (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_60 = 3;
    local_68 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_1442e82a8;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_140b865a0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_1442e82f0;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x118))(plVar6,local_res18,&local_68);
    *(undefined8 *)(param_1 + 0x168) = *puVar5;
    if (local_60 == 0) {
LAB_140b9046b:
      if (local_68 != (longlong *)0x0) {
        FMemory::Free(local_68);
      }
    }
    else if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x28))(local_68,0);
      if (local_68 != (longlong *)0x0) {
        local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
      }
      local_60 = 0;
      goto LAB_140b9046b;
    }
    local_38 = local_58;
    plStack_30 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      plVar6 = local_48;
    }
    (**(code **)(*plVar6 + 0x110))(plVar6,&local_38,DAT_14686a02c);
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    if (DAT_14686a02c == 0) {
      DAT_14686a02c = 1;
    }
    else {
      bVar7 = DAT_14686a02c == 1;
      DAT_14686a02c = 0;
      if (bVar7) {
        DAT_14686a02c = 2;
      }
    }
  }
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
LAB_140b90555:
  plVar6 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_50 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140b905a0 FUN_140b905a0 body=785 status=ok
// SIG undefined FUN_140b905a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b905a0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  undefined1 local_a8 [8];
  undefined **local_a0 [2];
  longlong *local_90;
  longlong local_88;
  longlong *local_78;
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar4 = FUN_140b82510();
  if (lVar4 != 0) {
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    uVar3 = FUN_14046e5c0(lVar4);
    if ((param_2 < uVar3) &&
       (lVar5 = UGameInstance::GetLocalPlayerByIndex(lVar4,param_2), lVar5 != 0)) {
      lVar5 = FUN_142547b50(lVar5,local_a0);
      local_68 = *(longlong *)(lVar5 + 8);
      plStack_60 = *(longlong **)(lVar5 + 0x10);
      local_c8 = 0;
      plVar6 = (longlong *)0x0;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
        local_c8 = local_d8;
        plVar6 = plStack_d0;
      }
      local_d8 = local_68;
      plStack_d0 = plStack_60;
      plStack_c0 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
          }
        }
      }
      local_a0[0] = &PTR_FUN_143f740c8;
      if (local_88 != 0) {
        FMemory::Free();
      }
      local_a0[0] = &PTR_FUN_143f73d18;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_90 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar6 = plStack_d0;
      if (local_d8 != 0) {
        plVar6 = (longlong *)FUN_140bb74b0(lVar4);
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        local_78 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_1441c0108;
          FWeakObjectPtr::operator=(plVar7 + 1,param_1);
          plVar7[2] = (longlong)FUN_140b84f60;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar7[4] = lVar5;
          *plVar7 = (longlong)&PTR_FUN_1441c0150;
        }
        uVar9 = 0;
        if (plVar7 != (longlong *)0x0) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
          puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_a8);
          iVar2 = (int)plVar6[1];
          uVar9 = *puVar8;
          *(int *)(plVar6 + 1) = iVar2 + 1;
          if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar2);
          }
          puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar6);
          *puVar8 = plVar7;
          *(undefined4 *)(puVar8 + 1) = 3;
        }
        plVar6 = plStack_d0;
        local_b8 = local_d8;
        plStack_b0 = plStack_d0;
        *(undefined8 *)(param_1 + 0x150) = uVar9;
        if (plStack_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
          UNLOCK();
        }
        uVar9 = FUN_140bb74b0(lVar4);
        FUN_140d80f80(uVar9,&local_b8,param_1 + 0x158,0);
        plVar7 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_b0 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          plVar6 = plStack_d0;
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar6 = plStack_d0;
            if (iVar2 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
              plVar6 = plStack_d0;
            }
          }
        }
      }
      plVar7 = plStack_d0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar6 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140b908c0 FUN_140b908c0 body=360 status=ok
// SIG undefined FUN_140b908c0(void)

void FUN_140b908c0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res20 [8];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_140b81da0(&local_28,0);
  if (local_28 == (longlong *)0x0) goto LAB_140b909d3;
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_1442e8608;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140b87cf0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_1442e8650;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0x18))(local_28,local_res20,&local_38);
  *(undefined8 *)(param_1 + 0x1f0) = *puVar6;
  if (local_30 == 0) {
LAB_140b909b9:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140b909b9;
  }
  (**(code **)(*local_28 + 0x10))(local_28,param_2);
LAB_140b909d3:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140b90a30 FUN_140b90a30 body=613 status=ok
// SIG undefined FUN_140b90a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b90a30(void)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Memory;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  longlong local_98 [4];
  undefined8 *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)operator_new(0x28);
  plVar4 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0x10000;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar4 = plVar3;
  }
  local_78 = &local_68;
  local_68 = 0;
  local_60 = 0x4000000000000;
  local_70 = plVar4;
  FUN_142ab5fa0(&local_78,5);
  FUN_142ab4e20(&local_78,1);
  FUN_142ab4e20(&local_78,2);
  FUN_142ab4e20(&local_78,3);
  FUN_142ab4e20(&local_78,4);
  FUN_142ab4e20(&local_78,5);
  local_58 = &local_48;
  local_98[0] = 0;
  local_40 = 0x3000000000000;
  local_48 = 0;
  local_98[1] = 0xf;
  local_50 = plVar4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
  FGenericPlatformString::Memcpy(local_98[0],L"My Test String",0x1e);
  FUN_142ab64b0(&local_58,"Whatever",local_98);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  FUN_142ab6190(&local_58,"Int32Val",0x2a);
  local_38 = &local_28;
  local_30 = local_50;
  local_20 = 0x3000000000000;
  local_28 = 0;
  FUN_142ab6250(&local_38,"FloatVal",0x40490e56);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(&local_38,"BeautifulIntArray",&local_78);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(&local_38,"ObjVal",&local_58);
  local_98[2] = 0;
  local_98[3] = 0;
  FUN_142ab6640(&local_38,local_98 + 2);
  if (local_98[2] != 0) {
    FMemory::Free();
  }
  if (plVar4 != (longlong *)0x0) {
    _Memory = (void *)*plVar4;
    if ((void *)*plVar4 != (void *)0x0) {
      do {
        if (_Memory == (void *)plVar4[2]) break;
        pvVar1 = *(void **)((longlong)_Memory + 0x10);
        free(_Memory);
        *plVar4 = (longlong)pvVar1;
        _Memory = pvVar1;
      } while (pvVar1 != (void *)0x0);
      lVar2 = *plVar4;
      if ((lVar2 != 0) && (lVar2 == plVar4[2])) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
    }
    FMemory::operator_delete(plVar4[4],1);
    FMemory::operator_delete(plVar4,0x28);
  }
  free((void *)0x0);
  FMemory::operator_delete(0,1);
  return;
}



// FUNCTION 140b90ca0 FUN_140b90ca0 body=1448 status=ok
// SIG undefined FUN_140b90ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b90ca0(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *plStack_160;
  longlong *local_158;
  int local_150;
  longlong *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar8 = (longlong *)0x0;
  local_118 = 0;
  FUN_140b82220(&local_138,0);
  if (local_138 == (longlong *)0x0) goto LAB_140b911e7;
  FUN_140b82810(param_1,&local_168);
  if (local_168 != 0) {
    local_b8 = &PTR_SetFloatStat_1442e7f88;
    local_b0 = 0;
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0xffffffff;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_44 = 0;
    uStack_40 = 0;
    local_3c = 0;
    local_48 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_50,0);
    if (local_50 != 0) {
      FName::FName(local_50,L"TestLeaderboard",1);
    }
    puVar4 = (undefined8 *)FName::FName(local_c8,"TestColumnInt",1);
    uStack_40 = (undefined4)*puVar4;
    local_3c = (undefined4)((ulonglong)*puVar4 >> 0x20);
    FName::FName(local_108,L"TestColumnInt",1);
    FOnlineStats::SetIntStat(&local_b8,local_108,1);
    FName::FName(local_100,L"TestColumnFloat",1);
    FOnlineStats::SetFloatStat(&local_b8,local_100,0x3f800000);
    local_e8 = local_168;
    plStack_e0 = plStack_160;
    local_110 = 0x11f;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_138 + 0x50))(local_138,&local_e8,&local_110,&local_b8);
    plVar6 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_e0 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    lVar5 = operator_new(0x38);
    plVar6 = plVar8;
    if (lVar5 != 0) {
      plVar6 = (longlong *)FUN_140b79740(lVar5);
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_DestroyObject_1442e8728;
      plVar7[2] = (longlong)plVar6;
      plVar8 = plVar7;
    }
    pplVar2 = (longlong **)(param_1 + 0x100);
    local_128 = plVar6;
    local_120 = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_128,plVar6,plVar6);
    if (pplVar2 != &local_128) {
      *pplVar2 = plVar6;
      local_128 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x108,&local_120);
      plVar8 = local_120;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    local_148 = (longlong *)0x0;
    local_13c = 0;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
      UNLOCK();
    }
    local_140 = 1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_148,0);
    plVar8 = plStack_160;
    *local_148 = local_168;
    local_148[1] = (longlong)plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plStack_160 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_160)(plStack_160);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_160 + 8))(plStack_160,1);
        }
      }
    }
    local_158 = (longlong *)0x0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    local_150 = 3;
    local_158 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_1442e7fd8;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      plVar8[2] = (longlong)FUN_140b86a90;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar5;
      *plVar8 = (longlong)&PTR_FUN_1442e8020;
    }
    puVar4 = (undefined8 *)(**(code **)(*local_138 + 0x30))(local_138,local_c0,&local_158);
    *(undefined8 *)(param_1 + 0x110) = *puVar4;
    if (local_150 == 0) {
LAB_140b9109d:
      if (local_158 != (longlong *)0x0) {
        FMemory::Free(local_158);
      }
    }
    else if (local_158 != (longlong *)0x0) {
      (**(code **)(*local_158 + 0x28))(local_158,0);
      if (local_158 != (longlong *)0x0) {
        local_158 = (longlong *)FMemory::Realloc(local_158,0,0);
      }
      local_150 = 0;
      goto LAB_140b9109d;
    }
    local_f8 = *pplVar2;
    local_f0 = *(longlong **)(param_1 + 0x108);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    local_d8 = local_168;
    plStack_d0 = plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_138 + 0x10))(local_138,&local_d8,&local_148,&local_f8);
    plVar8 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_d0 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_f0 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_148);
    if (local_50 != 0) {
      FMemory::Free();
    }
    local_b8 = &PTR_SetFloatStat_1442e7ef0;
    local_68 = 0;
    if (local_70 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_b0);
  }
  plVar8 = plStack_160;
  if (plStack_160 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_160 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_160)(plStack_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_160 + 8))(plStack_160,1);
      }
    }
  }
LAB_140b911e7:
  plVar8 = local_130;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_130 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  return;
}



// FUNCTION 140b91250 FUN_140b91250 body=164 status=ok
// SIG undefined FUN_140b91250(void)

void FUN_140b91250(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = FUN_141432a80();
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar3 + 400) != 0) {
    lVar3 = FUN_1424503b0();
    if (lVar3 != 0) {
      lVar4 = FUN_14145f370();
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
        FUN_1429e0d40(lVar3,uVar2,param_2,*(undefined8 *)(lVar3 + 0x460),0,0);
      }
    }
  }
  return;
}



// FUNCTION 140b91300 FUN_140b91300 body=602 status=ok
// SIG undefined FUN_140b91300(void)

void FUN_140b91300(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  int param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong local_a8 [2];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  iVar8 = 1;
  if (0 < param_5) {
    iVar8 = param_5;
  }
  iVar9 = 0;
  if (0 < iVar8) {
    do {
      lVar5 = FUN_140b82d10(param_1);
      if (lVar5 != 0) {
        if (iVar8 == 1) {
          uVar6 = FText::FromString(local_70,param_3);
          uVar7 = FText::FromString(local_88,param_2);
          FUN_1411db1a0(lVar5,local_98,uVar7,uVar6,param_4);
          plVar4 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_80)(local_80);
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
          plVar4 = local_68;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_68 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_68)(local_68);
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
        else {
          if (*(int *)(param_3 + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*param_3;
          }
          FString::PrintfImpl(local_a8,L"%s - %i",puVar10,iVar9);
          uVar6 = FText::FromString(local_40,local_a8);
          uVar7 = FText::FromString(local_58,param_2);
          FUN_1411db1a0(lVar5,local_90,uVar7,uVar6,param_4);
          plVar4 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_50)(local_50);
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
          plVar4 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_38 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_38)(local_38);
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
          if (local_a8[0] != 0) {
            FMemory::Free();
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8);
  }
  return;
}



// FUNCTION 140b91560 FUN_140b91560 body=346 status=ok
// SIG undefined FUN_140b91560(void)

void FUN_140b91560(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [16];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_1404cf2e0(&local_28,0);
  if (local_28 == (longlong *)0x0) goto LAB_140b9166a;
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_1442e8458;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140b87d80;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_1442e84a0;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_28 + 0x218))(local_28,local_res18,&local_38);
  *(undefined8 *)(param_1 + 0x1d0) = *puVar6;
  if (local_30 == 0) {
LAB_140b9164f:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140b9164f;
  }
  (**(code **)(*local_28 + 0x60))(local_28,0,1);
LAB_140b9166a:
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140b916c0 FUN_140b916c0 body=1175 status=ok
// SIG undefined FUN_140b916c0(void)

void FUN_140b916c0(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  char local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  local_res18[0] = param_3;
  FUN_140b82810(param_1,&local_68);
  if (local_68 == 0) goto LAB_140b91aea;
  FUN_140b82b80(param_1,&local_78);
  if (local_78 != (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    local_98 = (longlong *)0x0;
    local_90 = 0;
    FUN_140dbb2f0(&local_98);
    if (0 < (int)local_90) {
      lVar2 = operator_new(0x88);
      plVar3 = plVar7;
      if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_140da88b0(lVar2);
      }
      plVar4 = (longlong *)operator_new(0x18);
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        plVar4[2] = (longlong)plVar3;
        plVar7 = plVar4;
      }
      local_a8 = plVar3;
      plStack_a0 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar3,plVar3);
      uVar5 = FUN_140b82510(param_1);
      FUN_140db08e0(local_a8,uVar5,local_98);
      plVar7 = local_a8;
      puVar6 = (undefined8 *)FName::FName(local_res20,L"LIVEHOPPERNAME",1);
      FUN_1404ab360(plVar7 + 4,*puVar6,param_2,0);
      plVar7 = local_a8;
      puVar6 = (undefined8 *)FName::FName(local_38,L"LIVEBACKFILL",1);
      FUN_1404ab630(plVar7 + 4,*puVar6,local_res18,0);
      *(undefined4 *)(local_a8 + 0x10) = 0x41a00000;
      local_88 = local_a8;
      plStack_80 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
        UNLOCK();
      }
      if ((longlong **)(param_1 + 400) != &local_88) {
        *(longlong **)(param_1 + 400) = local_a8;
        local_88 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x198,&plStack_80);
      }
      plVar7 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_80 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
      local_b8 = (longlong *)0x0;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      local_b0 = 3;
      local_b8 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_1442e83c8;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        plVar7[2] = (longlong)FUN_140b85a40;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar2;
        *plVar7 = (longlong)&PTR_FUN_1442e8410;
      }
      puVar6 = (undefined8 *)(**(code **)(*local_78 + 0x358))(local_78,local_30,&local_b8);
      *(undefined8 *)(param_1 + 0x1a0) = *puVar6;
      if (local_b0 == 0) {
LAB_140b91957:
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free(local_b8);
        }
      }
      else if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x28))(local_b8,0);
        if (local_b8 != (longlong *)0x0) {
          local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
        }
        local_b0 = 0;
        goto LAB_140b91957;
      }
      local_48 = local_a8;
      plStack_40 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
        UNLOCK();
      }
      local_58 = local_68;
      plStack_50 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
      }
      (**(code **)(*local_78 + 0x350))
                (local_78,&local_58,(local_res18[0] != '\0') + 0x11f,&local_48);
      plVar7 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_50 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar7 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_40 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar7 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_a0 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
    plVar7 = local_98;
    for (iVar8 = (int)local_90; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
  plVar7 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
LAB_140b91aea:
  plVar7 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_60 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b91b70 FUN_140b91b70 body=295 status=ok
// SIG undefined FUN_140b91b70(void)

void FUN_140b91b70(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_30 [8];
  
  lVar3 = FUN_140b82510();
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x9a0);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      plVar4[2] = (longlong)FUN_140b85f90;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f4d2d8;
    }
    uVar7 = 0;
    if (plVar4 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_30);
      iVar2 = *(int *)(lVar3 + 0x9a8);
      uVar7 = *puVar6;
      *(int *)(lVar3 + 0x9a8) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x9ac) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x1f8) = uVar7;
    local_38 = param_2;
    local_37 = param_3;
    FUN_140ba4250(lVar3,&local_38,param_4);
  }
  return;
}



// FUNCTION 140b91ca0 FUN_140b91ca0 body=335 status=ok
// SIG undefined FUN_140b91ca0(void)

void FUN_140b91ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar4 = FUN_140b82d10();
  if (lVar4 != 0) {
    uVar5 = FText::FromString(local_20,param_4);
    uVar6 = FText::FromString(local_38,param_3);
    uVar7 = FText::FromString(local_50,param_2);
    FUN_1411d9190(lVar4,local_58,uVar7,uVar6,uVar5,2);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
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



// FUNCTION 140b91df0 FUN_140b91df0 body=335 status=ok
// SIG undefined FUN_140b91df0(void)

void FUN_140b91df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar4 = FUN_140b82d10();
  if (lVar4 != 0) {
    uVar5 = FText::FromString(local_20,param_4);
    uVar6 = FText::FromString(local_38,param_3);
    uVar7 = FText::FromString(local_50,param_2);
    FUN_1411d92a0(lVar4,local_58,uVar7,uVar6,uVar5,0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
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



// FUNCTION 140b91f40 FUN_140b91f40 body=1138 status=ok
// SIG undefined FUN_140b91f40(void)

void FUN_140b91f40(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong local_108 [2];
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar5 = FUN_140b82d10();
  if (lVar5 == 0) {
    return;
  }
  lVar6 = FUN_140b82510(param_1);
  if (lVar6 == 0) {
    return;
  }
  lVar6 = 0;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar6 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar6 == 0) {
    return;
  }
  local_108[0] = 0;
  local_108[1] = 0x4d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy
            (local_108[0],
             L"<img src=\"img://Game/UI/_Shared/GamepadButtonIcons/Keyboard/PC_Tab.PC_Tab\"/>",0x9a)
  ;
  FText::FromString(local_c8,local_108);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (param_4 == 0) {
    lVar6 = *(longlong *)(lVar6 + 0x460);
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    if (lVar6 == 0) {
LAB_140b9205b:
      lVar6 = 0;
    }
    else {
      lVar7 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_140b9205b;
    }
    uVar8 = FText::FromString(local_78,param_3);
    uVar9 = FText::FromString(local_90,param_2);
    FUN_1411d9930(lVar5,local_b0,uVar9,uVar8,local_c8,&local_d8,lVar6);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_88 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_70 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar11 = plStack_d0;
    if (plStack_d0 == (longlong *)0x0) goto LAB_140b92357;
    LOCK();
    plVar2 = plStack_d0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) goto LAB_140b92357;
    (**(code **)*plStack_d0)(plStack_d0);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_140b92357;
    lVar5 = *plVar11;
  }
  else {
    if (*(int *)(param_1 + 0x160) <= param_4) goto LAB_140b92357;
    puVar10 = (undefined8 *)((longlong)param_4 * 0x10 + *(longlong *)(param_1 + 0x158));
    local_f0 = (longlong *)puVar10[1];
    local_f8 = (longlong *)*puVar10;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    puVar10 = (undefined8 *)(**(code **)(*local_f8 + 8))(local_f8,local_a0);
    local_e8 = *puVar10;
    local_e0 = (longlong *)puVar10[1];
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    lVar6 = *(longlong *)(lVar6 + 0x460);
    if (lVar6 == 0) {
LAB_140b921f4:
      lVar6 = 0;
    }
    else {
      lVar7 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_140b921f4;
    }
    uVar8 = FText::FromString(local_48,param_3);
    uVar9 = FText::FromString(local_60,param_2);
    FUN_1411d9930(lVar5,local_a8,uVar9,uVar8,local_c8,&local_e8,lVar6);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_58 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_40 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    plVar11 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_e0 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_98 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    plVar11 = local_f0;
    if (local_f0 == (longlong *)0x0) goto LAB_140b92357;
    LOCK();
    plVar2 = local_f0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) goto LAB_140b92357;
    (**(code **)*local_f0)(local_f0);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_140b92357;
    lVar5 = *local_f0;
    plVar11 = local_f0;
  }
  (**(code **)(lVar5 + 8))(plVar11,1);
LAB_140b92357:
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_c0 + 1;
    lVar5 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 140b923c0 FUN_140b923c0 body=358 status=ok
// SIG undefined FUN_140b923c0(void)

void FUN_140b923c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar4 = FUN_140b82d10();
  if (lVar4 != 0) {
    uVar5 = FText::FromString(local_20,param_4);
    uVar6 = FText::FromString(local_38,param_3);
    uVar7 = FText::FromString(local_50,param_2);
    FUN_1411db3b0(lVar4,local_58,uVar7,uVar6,uVar5,param_5,0,2);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
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



// FUNCTION 140b92530 FUN_140b92530 body=647 status=ok
// SIG undefined FUN_140b92530(void)

void FUN_140b92530(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_res20;
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar9 = (longlong *)0x0;
  FUN_140b82810(param_1,&local_88);
  if (local_88 != 0) {
    local_res20 = 0;
    plVar7 = (longlong *)FUN_1404b0000(&local_res20);
    bVar10 = plVar7 != (longlong *)0x0;
    if (bVar10) {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,local_48);
      plVar9 = (longlong *)*puVar8;
    }
    else {
      puVar8 = &local_78;
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
    }
    plVar7 = (longlong *)puVar8[1];
    puVar8[1] = 0;
    *puVar8 = 0;
    if ((bVar10) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar1 = plStack_70;
    if ((!bVar10) && (plStack_70 != (longlong *)0x0)) {
      LOCK();
      plVar3 = plStack_70 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      local_68 = local_88;
      plStack_60 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      cVar6 = (**(code **)(*plVar9 + 0x68))(plVar9,&local_68);
      plVar1 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_60 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (cVar6 != '\0') {
        local_58 = local_88;
        plStack_50 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar9 + 0x50))(plVar9,&local_58,0x11f);
        plVar9 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar7 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  plVar9 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_80 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  return;
}



// FUNCTION 140b927c0 FUN_140b927c0 body=1823 status=ok
// SIG undefined FUN_140b927c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b927c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  void *_Src_00;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  longlong local_248;
  longlong *plStack_240;
  longlong *local_238;
  int local_230;
  void *local_228;
  int local_220;
  longlong local_218 [4];
  longlong *local_1f8;
  longlong *local_1f0;
  longlong local_1e8 [3];
  void *local_1d0;
  int local_1c8;
  undefined4 local_1c4;
  undefined1 local_1c0 [4];
  undefined1 local_1bc [4];
  undefined1 local_1b8 [4];
  undefined1 local_1b4 [4];
  undefined1 local_1b0 [8];
  undefined4 local_1a8 [2];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190 [2];
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178 [2];
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160 [2];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined4 *local_140;
  longlong local_138;
  longlong *plStack_130;
  longlong local_128;
  longlong *plStack_120;
  undefined8 *local_118;
  undefined4 *local_110;
  longlong *local_108;
  undefined4 *local_100;
  longlong *local_f8;
  undefined4 *local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  longlong *local_c8;
  longlong local_b8 [2];
  undefined1 local_a8;
  longlong local_a0 [4];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  FUN_140b82810(param_1,&local_248);
  if (local_248 == 0) goto LAB_140b92e20;
  local_1e8[2] = 0;
  Online::GetExternalUIInterface(&local_1f8,0);
  if (local_1f8 != (longlong *)0x0) {
    local_b8[0] = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_b8[1] = 0;
    local_a8 = 1;
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0xffffffff;
    local_6c = 0;
    local_60 = 0;
    local_58 = 0;
    local_1a8[0] = 0;
    FVariantData::SetValue(local_1a8,param_2);
    local_148 = &DAT_146297b20;
    local_140 = local_1a8;
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FVariantData_&&>_>(local_a0,local_1c0,&local_148,0);
    FVariantData::Empty(local_1a8);
    local_258 = 0xffffffff;
    iVar3 = FUN_141592950(param_2,L"PlayerStatus",1,0);
    if ((iVar3 != -1) && (lVar6 = FUN_140b82510(param_1), lVar6 != 0)) {
      local_138 = local_248;
      plStack_130 = plStack_240;
      if (plStack_240 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_240 + 1) = (int)plStack_240[1] + 1;
        UNLOCK();
      }
      uVar4 = FUN_140bb6e30(lVar6,&local_138);
      plVar9 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_130 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_130)(plStack_130);
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
      local_128 = local_248;
      plStack_120 = plStack_240;
      if (plStack_240 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_240 + 1) = (int)plStack_240[1] + 1;
        UNLOCK();
      }
      uVar5 = FUN_140bb6bd0(lVar6,&local_128);
      plVar9 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_120 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_120)(plStack_120);
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
      uVar7 = FUN_140bbae80(lVar6,local_d0,uVar5);
      puVar8 = (undefined8 *)FText::ToString(uVar7);
      local_228 = (void *)0x0;
      local_220 = *(int *)(puVar8 + 1);
      lVar10 = (longlong)local_220;
      _Src = (void *)*puVar8;
      if (local_220 == 0) {
        _Src_00 = (void *)0x0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_228,local_220,0);
        _Src_00 = local_228;
        _guard_xfg_dispatch_icall_nop(local_228,_Src,lVar10 * 2);
      }
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_c8 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar2 = (int *)((longlong)local_c8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
      iVar3 = local_220;
      local_1d0 = (void *)0x0;
      local_1c8 = local_220;
      if (local_220 == 0) {
        local_1c4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1d0,local_220,0);
        _guard_xfg_dispatch_icall_nop(local_1d0,_Src_00,(longlong)iVar3 * 2);
      }
      uVar5 = FUN_140bbbf00(lVar6,&local_1d0);
      local_190[0] = 0;
      local_188 = 0;
      local_180 = 0;
      FVariantData::SetValue(local_190,L"PlayerStatusIdle");
      local_118 = &DAT_146297b20;
      local_110 = local_190;
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FVariantData_&&>_>(local_a0,local_1bc,&local_118,0)
      ;
      FVariantData::Empty(local_190);
      local_218[0] = 0;
      local_218[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218,0);
      local_258 = CONCAT22(local_258._2_2_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_218[0],10,"EXP_LEVEL");
      local_178[0] = 0;
      local_170 = 0;
      local_168 = 0;
      FVariantData::SetValue(local_178,uVar4);
      local_108 = local_218;
      local_100 = local_178;
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FVariantData_&&>_>(local_a0,local_1b8,&local_108,0);
      FVariantData::Empty(local_178);
      if (local_218[0] != 0) {
        FMemory::Free();
      }
      local_218[2] = 0;
      local_218[3] = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218 + 2,0);
      local_258 = CONCAT22(local_258._2_2_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_218[2],0x12,"PLAYERCLASS_INDEX");
      local_160[0] = 0;
      local_158 = 0;
      local_150 = 0;
      FVariantData::SetValue(local_160,uVar5);
      local_f8 = local_218 + 2;
      local_f0 = local_160;
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FVariantData_&&>_>(local_a0,local_1b4,&local_f8,0);
      FVariantData::Empty(local_160);
      if (local_218[2] != 0) {
        FMemory::Free();
      }
      if (_Src_00 != (void *)0x0) {
        FMemory::Free(_Src_00);
      }
    }
    local_238 = (longlong *)0x0;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_230 = 3;
    local_238 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f4d200;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      plVar9[2] = (longlong)FUN_140b87c60;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar6;
      *plVar9 = (longlong)&PTR_FUN_143f4d248;
    }
    puVar8 = (undefined8 *)(**(code **)(*local_1f8 + 0x10))(local_1f8,local_d8,&local_238);
    *(undefined8 *)(param_1 + 0xf8) = *puVar8;
    if (local_230 == 0) {
LAB_140b92d12:
      if (local_238 != (longlong *)0x0) {
        FMemory::Free(local_238);
      }
    }
    else if (local_238 != (longlong *)0x0) {
      (**(code **)(*local_238 + 0x28))(local_238,0);
      if (local_238 != (longlong *)0x0) {
        local_238 = (longlong *)FMemory::Realloc(local_238,0,0);
      }
      local_230 = 0;
      goto LAB_140b92d12;
    }
    local_e8 = local_248;
    plStack_e0 = plStack_240;
    if (plStack_240 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_240 + 1) = (int)plStack_240[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_1f8 + 0x30))(local_1f8,&local_e8,local_b8);
    plVar9 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
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
    local_58 = 0;
    if (local_60 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(local_a0,0);
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (local_a0[0] != 0) {
      FMemory::Free();
    }
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
  }
  plVar9 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
LAB_140b92e20:
  lVar6 = FUN_140b82510(param_1);
  if (lVar6 != 0) {
    local_1e8[0] = 0;
    local_1e8[1] = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
    FGenericPlatformString::Memcpy(local_1e8[0],L"Level 4 Beastmaster",0x28);
    FUN_140be2190(lVar6,local_1e8,local_1b0);
    if (local_1e8[0] != 0) {
      FMemory::Free();
    }
  }
  plVar9 = plStack_240;
  if (plStack_240 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_240 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_240)(plStack_240);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_240 + 8))(plStack_240,1);
      }
    }
  }
  return;
}



// FUNCTION 140b92ee0 FUN_140b92ee0 body=1202 status=ok
// SIG undefined FUN_140b92ee0(void)

void FUN_140b92ee0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  int local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_140b82a70(&local_88,0);
  plVar7 = local_88;
  if (local_88 == (longlong *)0x0) goto LAB_140b93338;
  local_c8 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_c0 = 3;
  local_c8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_1442e8188;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140b84850;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_1442e81d0;
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0xb8))(plVar7,local_res18,&local_c8);
  *(undefined8 *)(param_1 + 0x130) = *puVar6;
  if (local_c0 == 0) {
LAB_140b92fec:
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  else if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x28))(local_c8,0);
    if (local_c8 != (longlong *)0x0) {
      local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
    }
    local_c0 = 0;
    goto LAB_140b92fec;
  }
  local_b8 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_b0 = 3;
  local_b8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)IDelegateInstance::vftable;
    *plVar4 = (longlong)&PTR_FUN_1442e8218;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140b87a60;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_1442e8260;
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x18))(plVar7,local_res20,&local_b8);
  *(undefined8 *)(param_1 + 0x138) = *puVar6;
  if (local_b0 == 0) {
LAB_140b930ab:
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  else if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x28))(local_b8,0);
    if (local_b8 != (longlong *)0x0) {
      local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
    }
    local_b0 = 0;
    goto LAB_140b930ab;
  }
  local_a8 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_a0 = 3;
  local_a8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)IDelegateInstance::vftable;
    *plVar4 = (longlong)&PTR_FUN_143f77df8;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140b852f0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77e40;
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x90))(plVar7,local_68,&local_a8);
  *(undefined8 *)(param_1 + 0x140) = *puVar6;
  if (local_a0 == 0) {
LAB_140b9316d:
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  else if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x28))(local_a8,0);
    if (local_a8 != (longlong *)0x0) {
      local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
    }
    local_a0 = 0;
    goto LAB_140b9316d;
  }
  local_98 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_90 = 3;
  local_98 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_1442e8188;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_140b88220;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_1442e81d0;
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7,local_60,&local_98);
  *(undefined8 *)(param_1 + 0x148) = *puVar6;
  if (local_90 == 0) {
LAB_140b93232:
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
  else if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x28))(local_98,0);
    if (local_98 != (longlong *)0x0) {
      local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
    }
    local_90 = 0;
    goto LAB_140b93232;
  }
  plVar4 = (longlong *)FUN_140b82810(param_1,local_58);
  lVar5 = *plVar4;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_88;
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_88;
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
        plVar7 = local_88;
      }
    }
  }
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_140b82810(param_1,local_48);
    local_78 = *puVar6;
    local_70 = (longlong *)puVar6[1];
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
      plVar7 = local_88;
    }
    (**(code **)(*plVar7 + 0x88))(plVar7,&local_78);
    plVar7 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
LAB_140b93338:
  plVar7 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_80 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 140b933a0 FUN_140b933a0 body=834 status=ok
// SIG undefined FUN_140b933a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b933a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  longlong *local_128;
  int local_120;
  longlong local_118;
  longlong *plStack_110;
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  longlong local_d0 [3];
  undefined **local_b8 [5];
  longlong local_90 [4];
  longlong local_70;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FUN_140b82b80(param_1,&local_108);
  plVar8 = local_108;
  if (local_108 == (longlong *)0x0) goto LAB_140b9365e;
  FUN_140b82810(param_1,&local_118);
  plVar6 = plStack_110;
  if (local_118 != 0) {
    FUN_140da8910(local_b8,&DAT_146297e38);
    puVar3 = (undefined8 *)FName::FName(local_e8,L"SESSIONTEMPLATENAME",1);
    FUN_1404ab4c0(local_b8,*puVar3,param_2,0);
    uVar4 = FUN_140b82510(param_1);
    uVar5 = FUN_140b817d0(local_d0);
    FUN_140db09a0(local_b8,uVar4,uVar5);
    if (local_d0[0] != 0) {
      FMemory::Free();
    }
    local_128 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_120 = 3;
    local_128 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_143f77cd8;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      plVar6[2] = (longlong)FUN_140b84650;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_143f77d20;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar8 + 0x38))(plVar8,local_e0,&local_128);
    *(undefined8 *)(param_1 + 0x188) = *puVar3;
    if (local_120 == 0) {
LAB_140b93538:
      if (local_128 != (longlong *)0x0) {
        FMemory::Free(local_128);
      }
    }
    else if (local_128 != (longlong *)0x0) {
      (**(code **)(*local_128 + 0x28))(local_128,0);
      if (local_128 != (longlong *)0x0) {
        local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
      }
      local_120 = 0;
      goto LAB_140b93538;
    }
    plVar6 = plStack_110;
    local_f8 = local_118;
    plStack_f0 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
      plVar8 = local_108;
    }
    lVar7 = *plVar8;
    puVar3 = (undefined8 *)FName::FName(local_d8,L"TestSession",1);
    (**(code **)(lVar7 + 0x30))(plVar8,&local_f8,*puVar3,local_b8);
    plVar8 = plStack_f0;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_f0 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      plVar6 = plStack_110;
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_f0)(plStack_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = plStack_110;
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          plVar6 = plStack_110;
        }
      }
    }
    local_b8[0] = &PTR_FUN_143f769a0;
    local_48 = 0;
    if (local_50 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_90,0);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_90[0] != 0) {
      FMemory::Free();
    }
  }
  plVar8 = plStack_110;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_110 + 8))(plStack_110,1);
      }
    }
  }
LAB_140b9365e:
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_100 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b936f0 FUN_140b936f0 body=341 status=ok
// SIG undefined FUN_140b936f0(void)

void FUN_140b936f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar4 = FUN_140b82d10();
  if (lVar4 != 0) {
    uVar5 = FText::FromString(local_20,param_4);
    uVar6 = FText::FromString(local_38,param_3);
    uVar7 = FText::FromString(local_50,param_2);
    FUN_1411db820(lVar4,local_58,uVar7,uVar6,uVar5,0x40a00000);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
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



// FUNCTION 140b93850 FUN_140b93850 body=285 status=ok
// SIG undefined FUN_140b93850(void)

void FUN_140b93850(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  
  FUN_142357eb0();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x184) != '\0')) {
    param_2 = param_2 + *(float *)(param_1 + 0x194);
    *(float *)(param_1 + 0x194) = param_2;
    param_2 = param_2 / *(float *)(param_1 + 0x178);
    if (1.0 <= param_2) {
      *(undefined1 *)(param_1 + 0x184) = 0;
      FUN_14288e3d0(param_1 + 0x30,0);
      FUN_14223c850(lVar1,param_1 + 0x188,0,0,0);
    }
    local_28 = *(undefined4 *)(param_1 + 0x188);
    local_24 = *(undefined4 *)(param_1 + 0x18c);
    fVar2 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x180) * 6.2831855 * param_2);
    local_20 = fVar2 * (param_2 - 1.0) * *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 400);
    FUN_14223c850(lVar1,&local_28,0,0,0);
    return;
  }
  FUN_14288e3d0(param_1 + 0x30,0);
  return;
}



// FUNCTION 140b93970 FUN_140b93970 body=125 status=ok
// SIG undefined FUN_140b93970(void)

void FUN_140b93970(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
     (lVar3 = *(longlong *)(param_1 + 0x20), lVar3 != 0)) {
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
    if ((bVar1) && (lVar3 = FUN_140cff230(lVar3), lVar3 != 0)) {
      *(undefined1 *)(lVar3 + 0x28) = 1;
      *(bool *)(lVar3 + 0x181) = *(char *)(lVar3 + 0x181) == '\0';
    }
  }
  return;
}



// FUNCTION 140b939f0 FUN_140b939f0 body=45 status=ok
// SIG undefined FUN_140b939f0(void)

void FUN_140b939f0(void)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = thunk_FUN_142039c70();
  if (lVar2 != 0) {
    cVar1 = FUN_142045c00();
    if (cVar1 != '\0') {
      *(uint *)(lVar2 + 0x60) = (uint)(*(int *)(lVar2 + 0x60) == 0);
    }
  }
  return;
}



// FUNCTION 140b93a20 FUN_140b93a20 body=549 status=ok
// SIG undefined FUN_140b93a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b93a20(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 *local_110;
  undefined *local_108;
  undefined8 local_f8;
  longlong local_f0 [3];
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
  
  if (param_1 != (longlong *)0x0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (lVar2 != 0) {
      if (param_2 == 0) {
        param_2 = param_1[0x2d];
        if (param_2 == 0) {
          return;
        }
        lVar3 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return;
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_14686a028) &&
         (_Init_thread_header(&DAT_14686a028), DAT_14686a028 == -1)) {
        FName::FName(&DAT_14686a020,L"TraceForOakTriggers",1);
        _Init_thread_footer(&DAT_14686a028);
      }
      local_c8 = 0x10000;
      local_d0 = 0;
      local_b8 = 0;
      local_90 = 0;
      local_88 = 0;
      local_70 = 0;
      local_68 = 0;
      local_c0 = 0;
      local_f8 = 0;
      local_d8 = 0;
      local_c4 = 0;
      local_bc = 0;
      local_c2 = 0;
      local_b4 = 0x101;
      FCollisionQueryParams::AddIgnoredActor(&local_d8,param_1);
      local_d8 = DAT_14686a020;
      local_c4 = CONCAT11(1,(undefined1)local_c4);
      local_f0[0] = 0;
      local_f0[1] = 0;
      local_108 = &DAT_146aefe68;
      local_110 = &local_d8;
      local_128 = &DAT_1464aa810;
      local_120 = param_3;
      local_118 = param_4;
      UWorld::SweepMultiByChannel(lVar2,local_f0,param_5,param_6);
      FUN_140b840b0(param_1,param_2,local_f0);
      if (local_f0[0] != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b93c50 FUN_140b93c50 body=59 status=ok
// SIG undefined FUN_140b93c50(void)

void FUN_140b93c50(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = 0;
  }
  uVar1 = FUN_142d80d40();
  FUN_142d94090(uVar1,uVar2,param_2);
  return;
}



// FUNCTION 140b93c90 FUN_140b93c90 body=9 status=ok
// SIG undefined FUN_140b93c90(void)

void FUN_140b93c90(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_142d94090(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b93ca0 FUN_140b93ca0 body=216 status=ok
// SIG undefined FUN_140b93ca0(void)

void FUN_140b93ca0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))();
  }
  if ((param_2 != 0) && (lVar3 != 0)) {
    iVar2 = FUN_1428cf800(lVar3);
    if (iVar2 != 3) {
      UWorld::GetPlayerControllerIterator(lVar3,&local_18);
      while( true ) {
        if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar3 = FWeakObjectPtr::Get();
        if (lVar3 != 0) {
          lVar4 = FUN_14145f370();
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
            FUN_140d19500(lVar3,param_2);
          }
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}



// FUNCTION 140b93d80 FUN_140b93d80 body=113 status=ok
// SIG undefined FUN_140b93d80(void)

void FUN_140b93d80(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  if ((param_1 != (longlong *)0x0) &&
     (local_res10[0] = param_2, lVar2 = (**(code **)(*param_1 + 0x678))(), lVar2 != 0)) {
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
    if (bVar1) {
      FUN_142dbb5d0(lVar2 + 0x2428,local_res10);
    }
  }
  return;
}



// FUNCTION 140b93e00 FUN_140b93e00 body=121 status=ok
// SIG undefined FUN_140b93e00(void)

void FUN_140b93e00(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
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
      FUN_140bf3470(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140b93e80 FUN_140b93e80 body=178 status=ok
// SIG undefined FUN_140b93e80(void)

void FUN_140b93e80(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 local_res8 [8];
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
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
    if ((bVar1) && (lVar2 = FUN_140b785e0(lVar2), lVar2 != 0)) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*param_2;
      }
      uVar4 = FName::FName(local_res8,puVar5,1);
      FUN_140c5b810(lVar2,uVar4);
    }
  }
  return;
}



// FUNCTION 140b93f40 FUN_140b93f40 body=75 status=ok
// SIG undefined FUN_140b93f40(void)

void FUN_140b93f40(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = 0;
  }
  uVar1 = FUN_142d80d40();
  FUN_142d943d0(uVar1,uVar2,param_2,param_3);
  return;
}



// FUNCTION 140b93f90 FUN_140b93f90 body=9 status=ok
// SIG undefined FUN_140b93f90(void)

void FUN_140b93f90(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_142d943d0(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b93fa0 FUN_140b93fa0 body=169 status=ok
// SIG undefined FUN_140b93fa0(void)

void FUN_140b93fa0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x20), plVar4 != (longlong *)0x0)) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
      (**(code **)(*plVar4 + 0x628))(plVar4,uVar3);
    }
  }
  plVar4 = (longlong *)FString::FString(local_18,param_2);
  if (*plVar4 != 0) {
    FMemory::Free();
  }
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140b94050 AddUObject<UHelloNeighborGameInstance> body=224 status=ok
// SIG undefined AddUObject<UHelloNeighborGameInstance>(void)

undefined8
TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_28;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar1 + 1,param_3);
    *(undefined4 *)(plVar1 + 2) = local_18;
    *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_14;
    *(undefined4 *)(plVar1 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143f77bd0;
  }
  Add(param_1,param_2,&local_28);
  plVar1 = local_28;
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return param_2;
}



// FUNCTION 140b94130 FUN_140b94130 body=218 status=ok
// SIG undefined FUN_140b94130(void)

undefined8 *
FUN_140b94130(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

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
    *plVar7 = (longlong)&PTR_FUN_144089a20;
    FWeakObjectPtr::operator=(plVar7 + 1,param_3);
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_144089a68;
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



// FUNCTION 140b94210 FUN_140b94210 body=218 status=ok
// SIG undefined FUN_140b94210(void)

undefined8 *
FUN_140b94210(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

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
    *plVar7 = (longlong)&PTR_FUN_1442cc120;
    FWeakObjectPtr::operator=(plVar7 + 1,param_3);
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_1442cc168;
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



// FUNCTION 140b942f0 AddUniqueImpl<TScriptInterface<ITTLArsenalHUDMakerInterface>_const_&> body=112 status=ok
// SIG undefined AddUniqueImpl<TScriptInterface<ITTLArsenalHUDMakerInterface>_const_&>(void)

ulonglong TArray<TScriptInterface<ITTLArsenalHUDMakerInterface>,FDefaultAllocator>::
          AddUniqueImpl<TScriptInterface<ITTLArsenalHUDMakerInterface>_const_&>
                    (longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = Find();
  if ((int)uVar2 == -1) {
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1);
    }
    lVar4 = 0;
    plVar3 = (longlong *)((longlong)(int)uVar1 * 0x10 + *param_1);
    *plVar3 = 0;
    plVar3[1] = 0;
    *plVar3 = *param_2;
    if (*param_2 != 0) {
      lVar4 = param_2[1];
    }
    uVar2 = (ulonglong)uVar1;
    plVar3[1] = lVar4;
  }
  return uVar2;
}



// FUNCTION 140b94360 FUN_140b94360 body=229 status=ok
// SIG undefined FUN_140b94360(void)

void FUN_140b94360(longlong *param_1,undefined8 param_2,undefined4 *param_3)

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
    *plVar2 = (longlong)&PTR_FUN_144319560;
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



// FUNCTION 140b94450 FUN_140b94450 body=328 status=ok
// SIG undefined FUN_140b94450(void)

void FUN_140b94450(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  lVar6 = *param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 0x10;
    puVar4 = (undefined4 *)(lVar6 + 0x3c);
    do {
      FString::FString(lVar6,param_2 + -0x10);
      FString::FString(puVar4 + -0xb,param_2);
      FString::FString(puVar4 + -7,param_2 + 0x10);
      *(undefined8 *)(puVar4 + -3) = 0;
      iVar3 = *(int *)(param_2 + 0x28);
      lVar2 = *(longlong *)(param_2 + 0x20);
      puVar4[-1] = iVar3;
      if (iVar3 == 0) {
        *puVar4 = 0;
      }
      else {
        TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(puVar4 + -3,iVar3,0);
        puVar5 = *(undefined4 **)(puVar4 + -3);
        lVar2 = lVar2 + 0x18;
        do {
          *puVar5 = *(undefined4 *)(lVar2 + -0x18);
          FString::FString(puVar5 + 2,lVar2 + -0x10);
          FString::FString(puVar5 + 6,lVar2);
          FString::FString(puVar5 + 10,lVar2 + 0x10);
          puVar1 = (undefined4 *)(lVar2 + 0x20);
          lVar2 = lVar2 + 0x40;
          puVar5[0xe] = *puVar1;
          puVar5 = puVar5 + 0x10;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      lVar6 = lVar6 + 0x40;
      puVar4 = puVar4 + 0x10;
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b945a0 FUN_140b945a0 body=251 status=ok
// SIG undefined FUN_140b945a0(void)

void FUN_140b945a0(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  puVar3 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 8;
    puVar2 = (undefined4 *)((longlong)puVar3 + 0x44);
    do {
      *puVar3 = *(undefined8 *)(param_2 + -8);
      FText::FText(puVar2 + -0xf,param_2);
      FText::FText(puVar2 + -9,param_2 + 0x18);
      *(undefined8 *)(puVar2 + -3) = 0;
      iVar1 = *(int *)(param_2 + 0x38);
      _Src = *(void **)(param_2 + 0x30);
      puVar2[-1] = iVar1;
      if (iVar1 == 0) {
        *puVar2 = 0;
      }
      else {
        TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(puVar2 + -3,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar2 + -3),_Src,(longlong)iVar1 << 5);
      }
      puVar3 = puVar3 + 9;
      puVar2 = puVar2 + 0x12;
      param_2 = param_2 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b946a0 FUN_140b946a0 body=402 status=ok
// SIG undefined FUN_140b946a0(void)

void FUN_140b946a0(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  puVar5 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar7 = puVar5 + 5;
    piVar9 = (int *)(param_2 + 0x38);
    do {
      *puVar5 = &PTR_FUN_143f74338;
      puVar7[-4] = &PTR_FUN_143f73d18;
      puVar7[-3] = *(undefined8 *)(piVar9 + -10);
      lVar2 = *(longlong *)(piVar9 + -8);
      puVar7[-2] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar7[-4] = &PTR_FUN_143f740c8;
      puVar7[-1] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      iVar6 = *piVar9;
      lVar2 = *(longlong *)(piVar9 + -2);
      *(int *)(puVar7 + 2) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
      }
      else {
        TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(puVar7 + 1,iVar6,0);
        puVar4 = (undefined8 *)puVar7[1];
        puVar8 = (undefined8 *)(lVar2 + 8);
        puVar3 = puVar4 + 4;
        do {
          *puVar4 = &PTR_FUN_143f73d18;
          puVar3[-3] = *puVar8;
          lVar2 = puVar8[1];
          puVar3[-2] = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          *puVar4 = &PTR_FUN_143f740c8;
          puVar8 = puVar8 + 5;
          puVar3[-1] = 0;
          puVar4 = puVar4 + 5;
          *puVar3 = 0;
          puVar3 = puVar3 + 5;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *puVar5 = &PTR_FUN_143f74340;
      puVar5 = puVar5 + 9;
      piVar1 = piVar9 + 2;
      piVar9 = piVar9 + 0x12;
      *(int *)(puVar7 + 3) = *piVar1;
      puVar7 = puVar7 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b94840 FUN_140b94840 body=423 status=ok
// SIG undefined FUN_140b94840(void)

longlong FUN_140b94840(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x238);
  plVar2 = plVar7 + *(int *)(param_1 + 0x240);
  for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
    if ((*plVar7 != 0) && (*(longlong *)(*plVar7 + 0xc0) == param_2)) goto LAB_140b948bb;
  }
  plVar7 = *(longlong **)(param_1 + 0x248);
  plVar2 = plVar7 + *(int *)(param_1 + 0x250);
  for (; (plVar7 != plVar2 && ((*plVar7 == 0 || (*(longlong *)(*plVar7 + 0xc0) != param_2))));
      plVar7 = plVar7 + 1) {
  }
LAB_140b948bb:
  lVar3 = FWeakObjectPtr::Get(param_1 + 600);
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = FUN_14140f930();
  uVar5 = FWeakObjectPtr::Get(param_1 + 600);
  FUN_1417846f0(uVar5,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar3 = FUN_1417985e0(uVar4,uVar5,0,0,0,0,0,0,0);
  *(longlong *)(lVar3 + 0xc0) = param_2;
  FUN_1404c3560(param_1,lVar3);
  plVar6 = (longlong *)(param_1 + 0x248);
  plVar2 = (longlong *)*plVar6;
  iVar1 = *(int *)(param_1 + 0x250);
  plVar7 = plVar2;
  do {
    if (plVar7 == plVar2 + iVar1) {
LAB_140b949ac:
      *(int *)(param_1 + 0x250) = iVar1 + 1;
      if (*(int *)(param_1 + 0x254) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar1);
      }
      *(longlong *)((longlong)iVar1 * 8 + *plVar6) = lVar3;
      return lVar3;
    }
    if (*plVar7 == lVar3) {
      if ((int)((longlong)plVar7 - (longlong)plVar2 >> 3) != -1) {
        return lVar3;
      }
      goto LAB_140b949ac;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 140b949f0 FUN_140b949f0 body=472 status=ok
// SIG undefined FUN_140b949f0(void)

longlong * FUN_140b949f0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  plVar1 = (longlong *)(param_1 + 0x238);
  plVar10 = (longlong *)*plVar1;
  plVar8 = plVar10 + *(int *)(param_1 + 0x240);
  for (; plVar10 != plVar8; plVar10 = plVar10 + 1) {
    if ((*plVar10 != 0) && (*(longlong *)(*plVar10 + 0xc0) == param_2)) goto LAB_140b94a71;
  }
  plVar10 = *(longlong **)(param_1 + 0x248);
  plVar8 = plVar10 + *(int *)(param_1 + 0x250);
  for (; (plVar10 != plVar8 && ((*plVar10 == 0 || (*(longlong *)(*plVar10 + 0xc0) != param_2))));
      plVar10 = plVar10 + 1) {
  }
LAB_140b94a71:
  lVar5 = FWeakObjectPtr::Get(param_1 + 600);
  if (lVar5 == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar6 = FUN_14142a8f0();
    uVar7 = FWeakObjectPtr::Get(param_1 + 600);
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    plVar8 = (longlong *)FUN_1417985e0(uVar6,uVar7,0,0,0,0,0,0,0);
    plVar8[0x18] = param_2;
    FUN_1404c3b70(param_1,plVar8);
    cVar4 = (**(code **)(*plVar8 + 0x2d0))(plVar8,param_3,param_4);
    if (cVar4 == '\0') {
      (**(code **)(*plVar8 + 0x288))(plVar8);
    }
    else {
      puVar3 = (undefined8 *)*plVar1;
      iVar2 = *(int *)(param_1 + 0x240);
      for (puVar9 = puVar3; puVar9 != puVar3 + iVar2; puVar9 = puVar9 + 1) {
        if ((longlong *)*puVar9 == plVar8) {
          if ((int)((longlong)puVar9 - (longlong)puVar3 >> 3) != -1) {
            return plVar8;
          }
          break;
        }
      }
      *(int *)(param_1 + 0x240) = iVar2 + 1;
      if (*(int *)(param_1 + 0x244) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(longlong **)((longlong)iVar2 * 8 + *plVar1) = plVar8;
    }
  }
  return plVar8;
}



// FUNCTION 140b94bd0 CreateUObject<AFlarePlayerController> body=126 status=ok
// SIG undefined CreateUObject<AFlarePlayerController>(void)

undefined8 *
TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
          (undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(puVar5 + 1,param_2);
    *(undefined4 *)(puVar5 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_FUN_143fcff08;
  }
  return param_1;
}



// FUNCTION 140b94c50 CreateUObject<AFlarePlayerController> body=126 status=ok
// SIG undefined CreateUObject<AFlarePlayerController>(void)

undefined8 *
TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
          (undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144318c20;
    FWeakObjectPtr::operator=(puVar5 + 1,param_2);
    *(undefined4 *)(puVar5 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_FUN_144318c68;
  }
  return param_1;
}



// FUNCTION 140b94cd0 CreateUObject<AFlarePlayerController> body=126 status=ok
// SIG undefined CreateUObject<AFlarePlayerController>(void)

undefined8 *
TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
          (undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144318e60;
    FWeakObjectPtr::operator=(puVar5 + 1,param_2);
    *(undefined4 *)(puVar5 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_FUN_144318ea8;
  }
  return param_1;
}



// FUNCTION 140b94d50 CreateUObject<AFlarePlayerController,enum_EFlareCombatTactic::Type> body=142 status=ok
// SIG undefined CreateUObject<AFlarePlayerController,enum_EFlareCombatTactic::Type>(void)

undefined8 *
TBaseDelegate<TTypeWrapper<void>_>::
CreateUObject<AFlarePlayerController,enum_EFlareCombatTactic::Type>
          (undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144318dd0;
    FWeakObjectPtr::operator=(puVar5 + 1,param_2);
    *(undefined4 *)(puVar5 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
    *(undefined4 *)(puVar5 + 4) = param_4;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_FUN_144318e18;
  }
  return param_1;
}



// FUNCTION 140b94de0 FUN_140b94de0 body=820 status=ok
// SIG undefined FUN_140b94de0(void)

int * FUN_140b94de0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *_Src;
  void *_Dst;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  bool local_res8;
  int local_res10 [2];
  undefined8 local_48;
  longlong *local_40;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar12 +
                    (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar10 = *puVar10 | 1 << ((byte)iVar13 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)iVar13 * 0x28);
  puVar11 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *_Src = *puVar11;
  lVar4 = puVar11[1];
  _Src[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  _Src[2] = *puVar3;
  lVar4 = puVar3[1];
  _Src[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar12 = (longlong *)_Src[1];
    local_48 = *_Src;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_40 = plVar12;
    FUN_140549810(param_1,local_res10,&local_48);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar12 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)();
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_res10[0] * 0x28);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res10[0];
      goto LAB_140b950dc;
    }
  }
  cVar6 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    plVar12 = (longlong *)_Src[1];
    plVar5 = (longlong *)*_Src;
    iVar13 = *param_2;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *plVar5;
    if (uVar8 < 4) {
      pbVar9 = (byte *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar8 = (uint)*pbVar9;
    }
    else if (uVar8 < 8) {
      puVar10 = (uint *)(**(code **)(lVar4 + 0x10))();
      uVar8 = *puVar10;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar8 = (int)*puVar11 + (int)((ulonglong)*puVar11 >> 0x20) * 0x17;
    }
    *(uint *)((longlong)_Src + 0x24) = (int)param_1[9] - 1U & uVar8;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar12 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar12 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x24)) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x24)) * 4) =
         iVar13;
  }
LAB_140b950dc:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140b95120 FUN_140b95120 body=713 status=ok
// SIG undefined FUN_140b95120(void)

int * FUN_140b95120(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *_Src;
  bool bVar12;
  
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x30);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x30) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar10 & 0x1f);
  plVar7 = (longlong *)param_3[1];
  _Src = (longlong *)((longlong)iVar10 * 0x30 + *param_1);
  *_Src = *(longlong *)*param_3;
  _Src[1] = *plVar7;
  lVar4 = plVar7[1];
  _Src[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  _Src[3] = 0;
  bVar12 = false;
  _Src[3] = plVar7[2];
  plVar7[2] = 0;
  *(int *)(_Src + 4) = (int)plVar7[3];
  *(undefined4 *)((longlong)_Src + 0x24) = *(undefined4 *)((longlong)plVar7 + 0x1c);
  plVar7[3] = 0;
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    lVar4 = *_Src;
    iVar8 = iVar11;
    if (iVar10 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          iVar8 = iVar6;
          if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x30) == lVar4) break;
          iVar6 = *(int *)(*param_1 + 0x28 + (longlong)iVar6 * 0x30);
          iVar8 = iVar11;
        } while (iVar6 != -1);
      }
    }
    bVar12 = iVar8 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar8 * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
        FMemory::Free();
      }
      plVar7 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_140b953c0;
    }
  }
  cVar5 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar5 == '\0') {
    uVar9 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x2c) = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_140b953c0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 140b953f0 FUN_140b953f0 body=755 status=ok
// SIG undefined FUN_140b953f0(void)

int * FUN_140b953f0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  bool local_res8;
  
  iVar5 = 1;
  iVar13 = -1;
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
    iVar7 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar12 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar12 = *puVar12 | 1 << ((byte)iVar9 & 0x1f);
  puVar1 = (undefined8 *)param_3[1];
  puVar12 = (uint *)((longlong)iVar9 * 0x20 + *param_1);
  *puVar12 = *(uint *)*param_3;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *(undefined8 *)(puVar12 + 2) = *puVar1;
  *puVar1 = 0;
  puVar12[4] = *(uint *)(puVar1 + 1);
  puVar12[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  puVar12[6] = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    iVar8 = iVar13;
    if (uVar11 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar12) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(uint *)((longlong)iVar7 * 0x20 + *param_1) == *puVar12) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar13;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar12,0x18);
      iVar5 = *param_2;
      bVar2 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar5;
      }
      puVar6 = (undefined4 *)((longlong)iVar5 * 0x20 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar6[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar4 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar12 = (uint *)((longlong)plVar4 +
                        (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar12 = *puVar12 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_140b956ba;
    }
  }
  if (3 < uVar11) {
    uVar3 = (uVar11 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar5 = 0x20;
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar13;
    }
    uVar3 = (uVar11 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar13;
    }
    iVar5 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar5 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & *puVar12;
    puVar12[7] = uVar11;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar12[6] = *(uint *)((longlong)plVar4 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar5;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140b956ba:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140b956f0 FUN_140b956f0 body=977 status=ok
// SIG undefined FUN_140b956f0(void)

int * FUN_140b956f0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  undefined8 *_Src;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  undefined8 local_50;
  longlong *local_48;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar9 = *puVar9 | 1 << ((byte)iVar7 & 0x1f);
  puVar10 = (undefined8 *)*param_3;
  _Src = (undefined8 *)((longlong)iVar7 * 0x20 + *param_1);
  puVar3 = (undefined8 *)param_3[1];
  *_Src = *puVar10;
  lVar4 = puVar10[1];
  _Src[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  _Src[2] = *puVar3;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar11 = (longlong *)_Src[1];
    local_50 = *_Src;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_48 = plVar11;
    FUN_1405499a0(param_1,local_res10,&local_50);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar11 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)();
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar11 = *(longlong **)((longlong)_Dst + 8);
      iVar7 = local_res10[0];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar11 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          iVar7 = local_res10[0];
          if (iVar12 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
            iVar7 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_140b95a83;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 < 4) {
    iVar7 = 1;
  }
  else {
    uVar6 = (uVar13 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar12 = 0x20;
    if (uVar6 != 0) {
      iVar12 = 0x1f - iVar7;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar7) & 0x1f);
    }
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    plVar11 = (longlong *)_Src[1];
    plVar5 = (longlong *)*_Src;
    iVar7 = *param_2;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    uVar13 = (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *plVar5;
    if (uVar13 < 4) {
      pbVar8 = (byte *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar13 = (uint)*pbVar8;
    }
    else if (uVar13 < 8) {
      puVar9 = (uint *)(**(code **)(lVar4 + 0x10))();
      uVar13 = *puVar9;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar13 = (int)*puVar10 + (int)((ulonglong)*puVar10 >> 0x20) * 0x17;
    }
    *(uint *)((longlong)_Src + 0x1c) = (int)param_1[9] - 1U & uVar13;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar11 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar11 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x1c)) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x1c)) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_14055d980(param_1);
  }
LAB_140b95a83:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140b95ad0 FUN_140b95ad0 body=856 status=ok
// SIG undefined FUN_140b95ad0(void)

int * FUN_140b95ad0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *_Src;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  undefined8 local_48;
  longlong *local_40;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar13 * 0x20 + 4 + *param_1);
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar12 +
                    (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar10 = *puVar10 | 1 << ((byte)iVar13 & 0x1f);
  puVar11 = (undefined8 *)*param_3;
  _Src = (undefined8 *)((longlong)iVar13 * 0x20 + *param_1);
  puVar4 = (undefined1 *)param_3[1];
  *_Src = *puVar11;
  lVar5 = puVar11[1];
  _Src[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(_Src + 2) = *puVar4;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar12 = (longlong *)_Src[1];
    local_48 = *_Src;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_40 = plVar12;
    FUN_1405499a0(param_1,local_res10,&local_48);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar12 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)();
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar12 = *(longlong **)((longlong)_Dst + 8);
      iVar13 = local_res10[0];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          iVar13 = local_res10[0];
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
            iVar13 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar13;
      goto LAB_140b95dea;
    }
  }
  cVar7 = TSet<TTuple<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>_>,TDefaultMapHashableKeyFuncs<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    plVar12 = (longlong *)_Src[1];
    plVar6 = (longlong *)*_Src;
    iVar13 = *param_2;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar5 = *plVar6;
    if (uVar8 < 4) {
      pbVar9 = (byte *)(**(code **)(lVar5 + 0x10))(plVar6);
      uVar8 = (uint)*pbVar9;
    }
    else if (uVar8 < 8) {
      puVar10 = (uint *)(**(code **)(lVar5 + 0x10))();
      uVar8 = *puVar10;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(lVar5 + 0x10))(plVar6);
      uVar8 = (int)*puVar11 + (int)((ulonglong)*puVar11 >> 0x20) * 0x17;
    }
    *(uint *)((longlong)_Src + 0x1c) = (int)param_1[9] - 1U & uVar8;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar12 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar12 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x1c)) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x1c)) * 4) =
         iVar13;
  }
LAB_140b95dea:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140b95e30 FUN_140b95e30 body=337 status=ok
// SIG undefined FUN_140b95e30(void)

longlong FUN_140b95e30(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *param_1;
  lVar9 = (longlong)(int)param_1[1] * 0x118 + lVar8;
  while( true ) {
    if (lVar8 == lVar9) {
      return 0;
    }
    plVar3 = (longlong *)param_2[1];
    plVar4 = (longlong *)*param_2;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if ((((*(longlong **)(lVar8 + 8) == (longlong *)0x0) ||
         (cVar7 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))(), cVar7 == '\0')) ||
        (plVar4 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*plVar4 + 0x20))(plVar4), cVar7 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((((*(longlong **)(lVar8 + 8) == (longlong *)0x0) ||
         (cVar7 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))(), cVar7 == '\0')) &&
        ((plVar4 == (longlong *)0x0 ||
         (cVar7 = (**(code **)(*plVar4 + 0x20))(plVar4), cVar7 == '\0')))) ||
       ((bVar5 && (cVar7 = (**(code **)*plVar4)(plVar4,*(undefined8 *)(lVar8 + 8)), cVar7 != '\0')))
       ) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (bVar5) break;
    lVar8 = lVar8 + 0x118;
  }
  return lVar8;
}



// FUNCTION 140b95f90 FUN_140b95f90 body=337 status=ok
// SIG undefined FUN_140b95f90(void)

longlong FUN_140b95f90(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *param_1;
  lVar9 = (longlong)(int)param_1[1] * 0x118 + lVar8;
  while( true ) {
    if (lVar8 == lVar9) {
      return 0;
    }
    plVar3 = (longlong *)param_2[1];
    plVar4 = (longlong *)*param_2;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if ((((*(longlong **)(lVar8 + 0x30) == (longlong *)0x0) ||
         (cVar7 = (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x20))(), cVar7 == '\0')) ||
        (plVar4 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*plVar4 + 0x20))(plVar4), cVar7 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((((*(longlong **)(lVar8 + 0x30) == (longlong *)0x0) ||
         (cVar7 = (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x20))(), cVar7 == '\0')) &&
        ((plVar4 == (longlong *)0x0 ||
         (cVar7 = (**(code **)(*plVar4 + 0x20))(plVar4), cVar7 == '\0')))) ||
       ((bVar5 && (cVar7 = (**(code **)*plVar4)(plVar4,*(undefined8 *)(lVar8 + 0x30)), cVar7 != '\0'
                  )))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (bVar5) break;
    lVar8 = lVar8 + 0x118;
  }
  return lVar8;
}



// FUNCTION 140b960f0 FUN_140b960f0 body=51 status=ok
// SIG undefined FUN_140b960f0(void)

longlong FUN_140b960f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_141424bc0();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 140b96130 FUN_140b96130 body=86 status=ok
// SIG undefined FUN_140b96130(void)

longlong FUN_140b96130(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140bbb8d0();
  if (lVar2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
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



// FUNCTION 140b96190 FUN_140b96190 body=64 status=ok
// SIG undefined FUN_140b96190(void)

void FUN_140b96190(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_144319af0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = param_1;
    return;
  }
  return;
}



// FUNCTION 140b961d0 FUN_140b961d0 body=64 status=ok
// SIG undefined FUN_140b961d0(void)

void FUN_140b961d0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_144319ae0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = param_1;
    return;
  }
  return;
}



// FUNCTION 140b96210 FUN_140b96210 body=505 status=ok
// SIG undefined FUN_140b96210(void)

int FUN_140b96210(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_res18;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  local_68 = *(undefined8 *)*param_1;
  local_60 = ((undefined8 *)*param_1)[1];
  local_res18 = 0;
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  cVar5 = FUN_140bca7d0(*param_2,&local_68);
  bVar13 = cVar5 == '\0';
  lVar8 = 0;
  iVar11 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar12 = iVar11 + 1;
    if (lVar8 < lVar6) {
      lVar7 = lVar8 * 0x10;
      do {
        local_58 = *(undefined8 *)(*param_1 + lVar7);
        local_50 = *(longlong *)(*param_1 + 8 + lVar7);
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        cVar5 = FUN_140bca7d0(*param_2,&local_58);
        if (bVar13 != (cVar5 == '\0')) break;
        iVar12 = iVar12 + 1;
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar9 != 0) {
        plVar10 = (longlong *)((longlong)iVar11 * 0x10 + 8 + *param_1);
        do {
          plVar4 = (longlong *)*plVar10;
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
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar10 = plVar10 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (local_res18 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_res18 * 0x10 + *param_1),
                   (void *)((longlong)iVar11 * 0x10 + *param_1),(longlong)iVar9 << 4);
      }
      local_res18 = local_res18 + iVar9;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar6 <= lVar8) {
      *(int *)(param_1 + 1) = local_res18;
      return iVar3 - local_res18;
    }
  } while( true );
}



// FUNCTION 140b96410 FUN_140b96410 body=519 status=ok
// SIG undefined FUN_140b96410(void)

int FUN_140b96410(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_res20;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  iVar3 = (int)param_1[1];
  lVar8 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  plVar7 = (longlong *)*param_2;
  iVar10 = 0;
  local_res20 = 0;
  plVar4 = (longlong *)(**(code **)(**(longlong **)*param_1 + 8))(*(longlong **)*param_1,local_60);
  bVar13 = *plVar4 == *plVar7;
  lVar9 = 0;
  iVar11 = 0;
  do {
    iVar12 = iVar11 + 1;
    lVar9 = lVar9 + 1;
    if (lVar9 < lVar8) {
      lVar6 = lVar9 * 0x10;
      do {
        plVar7 = (longlong *)*param_2;
        plVar4 = (longlong *)
                 (**(code **)(**(longlong **)(lVar6 + *param_1) + 8))
                           (*(longlong **)(lVar6 + *param_1),local_58);
        iVar10 = local_res20;
        if (bVar13 != (*plVar4 == *plVar7)) break;
        iVar12 = iVar12 + 1;
        lVar9 = lVar9 + 1;
        lVar6 = lVar6 + 0x10;
      } while (lVar9 < lVar8);
    }
    iVar5 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar5 != 0) {
        plVar7 = (longlong *)((longlong)iVar11 * 0x10 + 8 + *param_1);
        do {
          plVar4 = (longlong *)*plVar7;
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
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar7 = plVar7 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar10 * 0x10 + *param_1),
                   (void *)((longlong)iVar11 * 0x10 + *param_1),(longlong)iVar5 << 4);
      }
      iVar10 = iVar10 + iVar5;
      local_res20 = iVar10;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar8 <= lVar9) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar3 - iVar10;
    }
  } while( true );
}



// FUNCTION 140b96620 FUN_140b96620 body=738 status=ok
// SIG undefined FUN_140b96620(void)

int FUN_140b96620(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  
  iVar3 = (int)param_1[1];
  lVar11 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar10 = 0;
  iVar9 = 0;
  cVar8 = FUN_140ba0c70(param_2,*param_1);
  bVar17 = cVar8 == '\0';
  uVar15 = uVar10;
  do {
    iVar14 = (int)uVar10;
    uVar10 = (ulonglong)(iVar14 + 1);
    uVar15 = uVar15 + 1;
    if ((longlong)uVar15 < lVar11) {
      lVar16 = uVar15 * 0x118;
      do {
        lVar4 = *param_1;
        plVar5 = (longlong *)((longlong *)*param_2)[1];
        plVar6 = *(longlong **)*param_2;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar2 = lVar16 + lVar4;
        plVar7 = *(longlong **)(lVar16 + 8 + lVar4);
        if ((((plVar7 == (longlong *)0x0) ||
             (cVar8 = (**(code **)(*plVar7 + 0x20))(), cVar8 == '\0')) ||
            (plVar6 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar6 + 0x20))(plVar6), cVar8 == '\0')) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        plVar7 = *(longlong **)(lVar2 + 8);
        if ((((plVar7 == (longlong *)0x0) ||
             (cVar8 = (**(code **)(*plVar7 + 0x20))(), cVar8 == '\0')) &&
            ((plVar6 == (longlong *)0x0 ||
             (cVar8 = (**(code **)(*plVar6 + 0x20))(plVar6), cVar8 == '\0')))) ||
           ((bVar12 &&
            (cVar8 = (**(code **)*plVar6)(plVar6,*(undefined8 *)(lVar2 + 8)), cVar8 != '\0')))) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if (bVar17 != bVar12) break;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x118;
      } while ((longlong)uVar15 < lVar11);
    }
    iVar13 = (int)uVar10 - iVar14;
    if (bVar17 == false) {
      lVar16 = (longlong)iVar14 * 0x118 + *param_1;
      for (; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (*(longlong *)(lVar16 + 0x108) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar16 + 0x80) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar16 + 0x68) != 0) {
          FMemory::Free();
        }
        FUN_1404bf980(lVar16 + 0x28);
        FUN_1404bf980(lVar16);
        lVar16 = lVar16 + 0x118;
      }
    }
    else {
      if (iVar9 != iVar14) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar9 * 0x118 + *param_1),
                   (void *)((longlong)iVar14 * 0x118 + *param_1),(longlong)iVar13 * 0x118);
      }
      iVar9 = iVar9 + iVar13;
    }
    bVar17 = (bool)(bVar17 ^ 1);
    if (lVar11 <= (longlong)uVar15) {
      *(int *)(param_1 + 1) = iVar9;
      return iVar3 - iVar9;
    }
  } while( true );
}



// FUNCTION 140b96910 FUN_140b96910 body=441 status=ok
// SIG undefined FUN_140b96910(void)

int FUN_140b96910(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar11 = 0;
  cVar5 = (**(code **)**(undefined8 **)*param_2)(*(undefined8 **)*param_2,*(undefined8 *)*param_1);
  bVar14 = cVar5 == '\0';
  lVar10 = 0;
  iVar12 = 0;
  do {
    iVar13 = iVar12 + 1;
    lVar10 = lVar10 + 1;
    if (lVar10 < lVar6) {
      lVar7 = lVar10 * 0x10;
      do {
        cVar5 = (**(code **)**(undefined8 **)*param_2)
                          (*(undefined8 **)*param_2,*(undefined8 *)(lVar7 + *param_1));
        if (bVar14 != (cVar5 == '\0')) break;
        iVar13 = iVar13 + 1;
        lVar10 = lVar10 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar10 < lVar6);
    }
    iVar8 = iVar13 - iVar12;
    if (bVar14 == false) {
      if (iVar8 != 0) {
        plVar9 = (longlong *)((longlong)iVar12 * 0x10 + 8 + *param_1);
        do {
          plVar4 = (longlong *)*plVar9;
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
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar9 = plVar9 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      if (iVar11 != iVar12) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x10 + *param_1),
                   (void *)((longlong)iVar12 * 0x10 + *param_1),(longlong)iVar8 << 4);
      }
      iVar11 = iVar11 + iVar8;
    }
    bVar14 = (bool)(bVar14 ^ 1);
    iVar12 = iVar13;
    if (lVar6 <= lVar10) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar3 - iVar11;
    }
  } while( true );
}



// FUNCTION 140b96ad0 FUN_140b96ad0 body=510 status=ok
// SIG undefined FUN_140b96ad0(void)

int FUN_140b96ad0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  
  iVar3 = (int)param_1[1];
  lVar11 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar9 = 0;
  iVar7 = 0;
  if ((*(longlong *)*param_1 == 0) ||
     (cVar5 = (**(code **)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
    bVar15 = 1;
    uVar14 = uVar9;
  }
  else {
    bVar15 = 0;
    uVar14 = uVar9;
  }
  do {
    iVar13 = (int)uVar14;
    uVar9 = uVar9 + 1;
    uVar14 = (ulonglong)(iVar13 + 1);
    if ((longlong)uVar9 < lVar11) {
      lVar8 = uVar9 * 0xe8;
      do {
        if ((*(longlong *)(lVar8 + *param_1) == 0) ||
           (cVar5 = (**(code **)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
          bVar6 = 1;
        }
        else {
          bVar6 = 0;
        }
        if (bVar15 != bVar6) break;
        uVar14 = (ulonglong)((int)uVar14 + 1);
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xe8;
      } while ((longlong)uVar9 < lVar11);
    }
    iVar10 = (int)uVar14 - iVar13;
    if (bVar15 == 0) {
      if (iVar10 != 0) {
        plVar12 = (longlong *)((longlong)iVar13 * 0xe8 + 0x18 + *param_1);
        do {
          FUN_1404bf650(plVar12 + 1);
          plVar4 = (longlong *)*plVar12;
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
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar4 = (longlong *)plVar12[-2];
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
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar12 = plVar12 + 0x1d;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else {
      if (iVar7 != iVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0xe8 + *param_1),
                   (void *)((longlong)iVar13 * 0xe8 + *param_1),(longlong)iVar10 * 0xe8);
      }
      iVar7 = iVar7 + iVar10;
    }
    bVar15 = bVar15 ^ 1;
    if (lVar11 <= (longlong)uVar9) {
      *(int *)(param_1 + 1) = iVar7;
      return iVar3 - iVar7;
    }
  } while( true );
}



// FUNCTION 140b96cd0 FUN_140b96cd0 body=508 status=ok
// SIG undefined FUN_140b96cd0(void)

int FUN_140b96cd0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  
  iVar3 = (int)param_1[1];
  lVar11 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar10 = 0;
  iVar7 = 0;
  if ((*(longlong *)*param_1 == 0) ||
     (cVar5 = (*(code *)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
    bVar15 = 1;
    uVar14 = uVar10;
  }
  else {
    bVar15 = 0;
    uVar14 = uVar10;
  }
  do {
    iVar13 = (int)uVar14;
    uVar10 = uVar10 + 1;
    uVar14 = (ulonglong)(iVar13 + 1);
    if ((longlong)uVar10 < lVar11) {
      lVar8 = uVar10 * 0xe8;
      do {
        if ((*(longlong *)(lVar8 + *param_1) == 0) ||
           (cVar5 = (*(code *)**(undefined8 **)*param_2)(), cVar5 == '\0')) {
          bVar6 = 1;
        }
        else {
          bVar6 = 0;
        }
        if (bVar15 != bVar6) break;
        uVar14 = (ulonglong)((int)uVar14 + 1);
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0xe8;
      } while ((longlong)uVar10 < lVar11);
    }
    iVar9 = (int)uVar14 - iVar13;
    if (bVar15 == 0) {
      if (iVar9 != 0) {
        plVar12 = (longlong *)((longlong)iVar13 * 0xe8 + 0x18 + *param_1);
        do {
          FUN_1404bf650(plVar12 + 1);
          plVar4 = (longlong *)*plVar12;
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
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar4 = (longlong *)plVar12[-2];
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
              iVar13 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar12 = plVar12 + 0x1d;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (iVar7 != iVar13) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0xe8 + *param_1),
                   (void *)((longlong)iVar13 * 0xe8 + *param_1),(longlong)iVar9 * 0xe8);
      }
      iVar7 = iVar7 + iVar9;
    }
    bVar15 = bVar15 ^ 1;
    if (lVar11 <= (longlong)uVar10) {
      *(int *)(param_1 + 1) = iVar7;
      return iVar3 - iVar7;
    }
  } while( true );
}


