// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14212a7c0 FUN_14212a7c0 body=252 status=ok
// SIG undefined FUN_14212a7c0(void)

void FUN_14212a7c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xc88) != &local_28) {
    *(undefined8 *)(param_1 + 0xc88) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc90,&local_20);
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
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xc98) != &local_18) {
    *(undefined8 *)(param_1 + 0xc98) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xca0,&local_10);
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
  return;
}



// FUNCTION 14212a8c0 FUN_14212a8c0 body=196 status=ok
// SIG undefined FUN_14212a8c0(void)

void FUN_14212a8c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x17c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x170,0);
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  if ((*(int *)(param_1 + 0x16c) < 0) && (*(int *)(param_1 + 0x16c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x160,0);
  }
  TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x180);
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x130) != &local_18) {
    *(undefined8 *)(param_1 + 0x130) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x138,&local_10);
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
  return;
}



// FUNCTION 14212a990 FUN_14212a990 body=138 status=ok
// SIG undefined FUN_14212a990(void)

void FUN_14212a990(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x438) != &local_18) {
    *(undefined8 *)(param_1 + 0x438) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x440,&local_10);
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
  return;
}



// FUNCTION 14212aa20 FUN_14212aa20 body=138 status=ok
// SIG undefined FUN_14212aa20(void)

void FUN_14212aa20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xa10) != &local_18) {
    *(undefined8 *)(param_1 + 0xa10) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa18,&local_10);
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
  return;
}



// FUNCTION 14212aab0 FUN_14212aab0 body=296 status=ok
// SIG undefined FUN_14212aab0(void)

void FUN_14212aab0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  if (param_2 != '\0') {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    (**(code **)(*(longlong *)(param_1 + 0x100) + 0x10))(param_1 + 0x100,&local_38);
    puVar3 = local_38 + (int)local_30;
    for (puVar7 = local_38; puVar7 != puVar3; puVar7 = puVar7 + 1) {
      plVar6 = (longlong *)
               (**(code **)(*(longlong *)(param_1 + 0x100) + 0x18))(param_1 + 0x100,*puVar7);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x278))(plVar6,param_2);
      }
    }
    if (local_38 != (undefined8 *)0x0) {
      FMemory::Free(local_38);
    }
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 800) != &local_28) {
    *(undefined8 *)(param_1 + 800) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x328,&local_20);
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
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14212abe0 ReleaseSlateResources body=139 status=ok
// SIG undefined ReleaseSlateResources(void)

void UCanvasPanel::ReleaseSlateResources(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x138) != &local_18) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x140,&local_10);
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
  return;
}



// FUNCTION 14212ac70 FUN_14212ac70 body=41 status=ok
// SIG undefined FUN_14212ac70(void)

void FUN_14212ac70(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x278))();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 14212aca0 ReleaseSlateResources body=138 status=ok
// SIG undefined ReleaseSlateResources(void)

void UCircularThrobber::ReleaseSlateResources(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1c8) != &local_18) {
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1d0,&local_10);
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
  return;
}



// FUNCTION 14212ad30 FUN_14212ad30 body=138 status=ok
// SIG undefined FUN_14212ad30(void)

void FUN_14212ad30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x650) != &local_18) {
    *(undefined8 *)(param_1 + 0x650) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x658,&local_10);
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
  return;
}



// FUNCTION 14212adc0 FUN_14212adc0 body=139 status=ok
// SIG undefined FUN_14212adc0(void)

void FUN_14212adc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x120) != &local_18) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x128,&local_10);
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
  return;
}



// FUNCTION 14212ae50 FUN_14212ae50 body=342 status=ok
// SIG undefined FUN_14212ae50(void)

void FUN_14212ae50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1f8) != &local_28) {
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x200,&local_20);
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
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x15c) < 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x150,0);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if ((*(int *)(param_1 + 0x14c) < 0) && (*(int *)(param_1 + 0x14c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x140,0);
  }
  TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if ((*(int *)(param_1 + 0x1c4) < 0) && (*(int *)(param_1 + 0x1c4) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1b8,0);
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x2b8) != &local_18) {
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2c0,&local_10);
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
  return;
}



// FUNCTION 14212afb0 FUN_14212afb0 body=257 status=ok
// SIG undefined FUN_14212afb0(void)

void FUN_14212afb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1f8) != &local_18) {
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x200,&local_10);
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
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x15c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x150,0);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if ((*(int *)(param_1 + 0x14c) < 0) && (*(int *)(param_1 + 0x14c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x140,0);
  }
  TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if ((*(int *)(param_1 + 0x1c4) < 0) && (*(int *)(param_1 + 0x1c4) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1b8,0);
    return;
  }
  return;
}



// FUNCTION 14212b0c0 ReleaseSlateResources body=139 status=ok
// SIG undefined ReleaseSlateResources(void)

void UScaleBox::ReleaseSlateResources(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x148) != &local_18) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x150,&local_10);
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
  return;
}



// FUNCTION 14212b150 FUN_14212b150 body=138 status=ok
// SIG undefined FUN_14212b150(void)

void FUN_14212b150(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x3c0) != &local_18) {
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3c8,&local_10);
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
  return;
}



// FUNCTION 14212b1e0 FUN_14212b1e0 body=138 status=ok
// SIG undefined FUN_14212b1e0(void)

void FUN_14212b1e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xbe0) != &local_18) {
    *(undefined8 *)(param_1 + 0xbe0) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xbe8,&local_10);
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
  return;
}



// FUNCTION 14212b270 FUN_14212b270 body=138 status=ok
// SIG undefined FUN_14212b270(void)

void FUN_14212b270(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x100) != &local_18) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x108,&local_10);
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
  return;
}



// FUNCTION 14212b300 FUN_14212b300 body=41 status=ok
// SIG undefined FUN_14212b300(void)

void FUN_14212b300(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x278))();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14212b350 FUN_14212b350 body=114 status=ok
// SIG undefined FUN_14212b350(void)

void FUN_14212b350(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != '\0') && (iVar2 = 0, 0 < *(int *)(param_1 + 0x108))) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x100));
      if (plVar1[6] != 0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x108));
  }
  return;
}



// FUNCTION 14212b3d0 FUN_14212b3d0 body=138 status=ok
// SIG undefined FUN_14212b3d0(void)

void FUN_14212b3d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x300) != &local_18) {
    *(undefined8 *)(param_1 + 0x300) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x308,&local_10);
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
  return;
}



// FUNCTION 14212b460 FUN_14212b460 body=252 status=ok
// SIG undefined FUN_14212b460(void)

void FUN_14212b460(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x350) != &local_28) {
    *(undefined8 *)(param_1 + 0x350) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x358,&local_20);
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
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x330) != &local_18) {
    *(undefined8 *)(param_1 + 0x330) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x338,&local_10);
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
  return;
}



// FUNCTION 14212b560 FUN_14212b560 body=139 status=ok
// SIG undefined FUN_14212b560(void)

void FUN_14212b560(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x128) != &local_18) {
    *(undefined8 *)(param_1 + 0x128) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x130,&local_10);
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
  return;
}



// FUNCTION 14212b5f0 FUN_14212b5f0 body=138 status=ok
// SIG undefined FUN_14212b5f0(void)

void FUN_14212b5f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x5e8) != &local_18) {
    *(undefined8 *)(param_1 + 0x5e8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5f0,&local_10);
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
  return;
}



// FUNCTION 14212b680 FUN_14212b680 body=139 status=ok
// SIG undefined FUN_14212b680(void)

void FUN_14212b680(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x850) != &local_18) {
    *(undefined8 *)(param_1 + 0x850) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x858,&local_10);
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
  return;
}



// FUNCTION 14212b710 FUN_14212b710 body=41 status=ok
// SIG undefined FUN_14212b710(void)

void FUN_14212b710(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x278))();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 14212b740 FUN_14212b740 body=138 status=ok
// SIG undefined FUN_14212b740(void)

void FUN_14212b740(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x3c8) != &local_18) {
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3d0,&local_10);
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
  return;
}



// FUNCTION 14212b7d0 FUN_14212b7d0 body=138 status=ok
// SIG undefined FUN_14212b7d0(void)

void FUN_14212b7d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x108) != &local_18) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x110,&local_10);
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
  return;
}



// FUNCTION 14212b860 FUN_14212b860 body=138 status=ok
// SIG undefined FUN_14212b860(void)

void FUN_14212b860(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x4f0) != &local_18) {
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4f8,&local_10);
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
  return;
}



// FUNCTION 14212b8f0 FUN_14212b8f0 body=138 status=ok
// SIG undefined FUN_14212b8f0(void)

void FUN_14212b8f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x200) != &local_18) {
    *(undefined8 *)(param_1 + 0x200) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x208,&local_10);
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
  return;
}



// FUNCTION 14212b980 FUN_14212b980 body=138 status=ok
// SIG undefined FUN_14212b980(void)

void FUN_14212b980(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x198) != &local_18) {
    *(undefined8 *)(param_1 + 0x198) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1a0,&local_10);
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
  return;
}



// FUNCTION 14212ba10 ReleaseSlateResources body=139 status=ok
// SIG undefined ReleaseSlateResources(void)

void UColorWidget::ReleaseSlateResources(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212ae50();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x328) != &local_18) {
    *(undefined8 *)(param_1 + 0x328) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x330,&local_10);
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
  return;
}



// FUNCTION 14212baa0 FUN_14212baa0 body=139 status=ok
// SIG undefined FUN_14212baa0(void)

void FUN_14212baa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212ae50();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x318) != &local_18) {
    *(undefined8 *)(param_1 + 0x318) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 800,&local_10);
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
  return;
}



// FUNCTION 14212bb30 FUN_14212bb30 body=139 status=ok
// SIG undefined FUN_14212bb30(void)

void FUN_14212bb30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x130) != &local_18) {
    *(undefined8 *)(param_1 + 0x130) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x138,&local_10);
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
  return;
}



// FUNCTION 14212bbc0 FUN_14212bbc0 body=41 status=ok
// SIG undefined FUN_14212bbc0(void)

void FUN_14212bbc0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x278))();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 14212bc10 FUN_14212bc10 body=193 status=ok
// SIG undefined FUN_14212bc10(void)

void FUN_14212bc10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_14212b350();
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x120) != &local_18) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x128,&local_10);
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
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FSlateApplication::UnregisterOnWindowActionNotification
              (DAT_1469f4590,*(undefined8 *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  return;
}



// FUNCTION 14212bce0 Remove body=305 status=ok
// SIG undefined Remove(void)

int TArray<SRetainerWidget_*,TInlineAllocator<3,FDefaultAllocator>_>::Remove
              (longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = (int)param_1[4];
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar7 = 0;
  plVar2 = (longlong *)param_1[3];
  if ((longlong *)param_1[3] == (longlong *)0x0) {
    plVar2 = param_1;
  }
  bVar8 = *plVar2 != *param_2;
  lVar3 = 0;
  iVar4 = 0;
  do {
    lVar3 = lVar3 + 1;
    iVar5 = iVar4 + 1;
    if (lVar3 < lVar6) {
      plVar2 = (longlong *)param_1[3];
      if ((longlong *)param_1[3] == (longlong *)0x0) {
        plVar2 = param_1;
      }
      plVar2 = plVar2 + lVar3;
      do {
        if (bVar8 != (*plVar2 != *param_2)) break;
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (lVar3 < lVar6);
    }
    if (bVar8 != false) {
      if (iVar7 != iVar4) {
        plVar2 = (longlong *)param_1[3];
        if ((longlong *)param_1[3] == (longlong *)0x0) {
          plVar2 = param_1;
        }
        ::_guard_xfg_dispatch_icall_nop
                  (plVar2 + iVar7,plVar2 + iVar4,(longlong)(iVar5 - iVar4) << 3);
      }
      iVar7 = iVar7 + (iVar5 - iVar4);
    }
    bVar8 = (bool)(bVar8 ^ 1);
    iVar4 = iVar5;
    if (lVar6 <= lVar3) {
      *(int *)(param_1 + 4) = iVar7;
      return iVar1 - iVar7;
    }
  } while( true );
}



// FUNCTION 14212be20 Remove body=396 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
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
      if (*(ulonglong *)(lVar4 + lVar6 * 0x48) == param_2) {
        lVar6 = lVar6 * 0x48;
        uVar7 = (longlong)*(int *)(lVar6 + 0x44 + lVar4) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar11 + uVar7 * 4);
        iVar3 = *(int *)((longlong)plVar11 + uVar7 * 4);
        goto joined_r0x00014212bf3c;
      }
      iVar9 = *(int *)(lVar4 + 0x40 + lVar6 * 0x48);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x00014212bf3c:
  if (iVar3 == -1) {
LAB_14212bf70:
    ``FOnlineSessionEOS::OnLobbyInviteReceived'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>::
    ~<lambda_1>(*param_1 + 8 + lVar6);
    TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar9,1);
    return 1;
  }
  if (iVar3 == iVar9) {
    *puVar2 = *(undefined4 *)(lVar6 + lVar4 + 0x40);
    goto LAB_14212bf70;
  }
  lVar1 = (longlong)iVar3 * 9 + 8;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x00014212bf3c;
}



// FUNCTION 14212bfb0 FUN_14212bfb0 body=397 status=ok
// SIG undefined FUN_14212bfb0(void)

undefined8 FUN_14212bfb0(longlong *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar6 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  piVar7 = (int *)((longlong)plVar4 + lVar6 * 4);
  iVar1 = *(int *)((longlong)plVar4 + lVar6 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    local_res8 = *param_2;
    local_resc = param_2[1];
    puVar8 = (undefined4 *)((longlong)iVar1 * 0x20 + *param_1);
    local_res18 = *puVar8;
    local_res1c = puVar8[1];
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar3 != '\0') break;
    iVar1 = puVar8[6];
    piVar7 = puVar8 + 6;
  }
  iVar1 = *piVar7;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar9 = (longlong)iVar1 * 0x20;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar9 + 0x1c + lVar6));
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar7 = (int *)((longlong)plVar4 + lVar5 * 4);
    iVar2 = *(int *)((longlong)plVar4 + lVar5 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar7 = *(int *)(lVar9 + 0x18 + lVar6);
        break;
      }
      piVar7 = (int *)(lVar6 + 0x18 + (longlong)iVar2 * 0x20);
      iVar2 = *piVar7;
    }
  }
  plVar4 = *(longlong **)((longlong)iVar1 * 0x20 + *param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar7 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 14212c140 RemoveAllWidgets body=79 status=ok
// SIG undefined RemoveAllWidgets(void)

void UWidgetLayoutLibrary::RemoveAllWidgets(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 != 0) {
    cVar1 = UWorld::IsGameWorld(lVar2);
    if (cVar1 != '\0') {
      lVar2 = UWorld::GetGameViewport(lVar2);
      if (lVar2 != 0) {
        FUN_14248b300(lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14212c190 FUN_14212c190 body=87 status=ok
// SIG undefined FUN_14212c190(void)

ulonglong FUN_14212c190(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x108);
  iVar4 = 0;
  uVar3 = (longlong)iVar1;
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      if (((lVar5 < 0) || (*(int *)(param_1 + 0x108) <= iVar4)) ||
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x100) + lVar5 * 8), lVar2 == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(ulonglong *)(lVar2 + 0x30);
      }
      if (uVar3 == param_2) {
        if (iVar4 != -1) {
          uVar3 = FUN_14212c1f0();
          return uVar3;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 14212c1f0 FUN_14212c1f0 body=236 status=ok
// SIG undefined FUN_14212c1f0(void)

undefined8 FUN_14212c1f0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  if ((-1 < param_2) && (param_2 < (int)param_1[0x21])) {
    plVar1 = param_1 + 0x20;
    plVar2 = *(longlong **)((longlong)param_2 * 8 + *plVar1);
    if (plVar2[6] != 0) {
      *(undefined8 *)(plVar2[6] + 0x28) = 0;
    }
    iVar5 = (int)param_1[0x21];
    iVar4 = (iVar5 - param_2) + -1;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)param_2 * 8),
                 (void *)(*plVar1 + (longlong)(param_2 + 1) * 8),(longlong)iVar4 << 3);
      iVar5 = (int)param_1[0x21];
    }
    *(int *)(param_1 + 0x21) = iVar5 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
    (**(code **)(*param_1 + 0x2e0))(param_1,plVar2);
    if (plVar2[6] != 0) {
      cVar3 = UObjectBaseUtility::IsA<UUserWidget>();
      if (cVar3 == '\0') {
        (**(code **)(*plVar2 + 0x278))(plVar2,1);
      }
    }
    plVar2[5] = 0;
    plVar2[6] = 0;
    UWidget::InvalidateLayoutAndVolatility(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 14212c2e0 FUN_14212c2e0 body=368 status=ok
// SIG undefined FUN_14212c2e0(void)

void FUN_14212c2e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 local_res18 [8];
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(local_res18);
    plVar9 = (longlong *)0x0;
    plVar7 = plVar9;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        iVar6 = (int)plVar7;
        cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 8,local_res18);
        if (cVar4 != '\0') {
          iVar2 = *(int *)(param_1 + 0x40);
          iVar5 = (iVar2 - iVar6) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 8),
                       (void *)(*(longlong *)(param_1 + 0x38) + (longlong)(iVar2 - iVar5) * 8),
                       (longlong)iVar5 << 3);
            iVar2 = *(int *)(param_1 + 0x40);
          }
          *(int *)(param_1 + 0x40) = iVar2 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x38);
          iVar6 = iVar6 + -1;
        }
        plVar7 = (longlong *)(ulonglong)(iVar6 + 1U);
      } while ((int)(iVar6 + 1U) < *(int *)(param_1 + 0x40));
    }
    if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) {
        plVar7 = *(longlong **)(param_1 + 0x30);
        plVar8 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar7[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(plVar7 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (plVar8 = plVar9, !bVar10) {
            LOCK();
            bVar10 = iVar6 == (int)plVar7[1];
            if (bVar10) {
              *(int *)(plVar7 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar10) {
              plVar8 = plVar7;
              if (plVar7 != (longlong *)0x0) {
                plVar9 = *(longlong **)(param_1 + 0x28);
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar7[1];
            bVar10 = iVar6 == 0;
            if (bVar10) {
              *(int *)(plVar7 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        FUN_14212c450(plVar9,param_2);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar8 + 1;
          lVar3 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14212c450 FUN_14212c450 body=241 status=ok
// SIG undefined FUN_14212c450(void)

void FUN_14212c450(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res10 [2];
  undefined8 local_18;
  longlong *local_10;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x310);
    TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
    ::FindId(plVar3,local_res10,param_2);
    lVar7 = 0;
    if (local_res10[0] != -1) {
      lVar7 = *plVar3 + (longlong)local_res10[0] * 0x48;
    }
    lVar6 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      if (*(longlong *)(lVar6 + 0x20) != 0) {
        local_18 = *(undefined8 *)(lVar6 + 0x10);
        local_10 = *(longlong **)(lVar6 + 0x18);
        if (local_10 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_10 + 1) = (int)local_10[1] + 1;
          UNLOCK();
        }
        FUN_14199ec30(*(undefined8 *)(param_1 + 0x360),&local_18);
        plVar5 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
      ::Remove(plVar3,param_2);
    }
  }
  return;
}



// FUNCTION 14212c550 FUN_14212c550 body=594 status=ok
// SIG undefined FUN_14212c550(void)

void FUN_14212c550(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x130) == 0) goto LAB_14212c781;
  FUN_1420f9830(param_2,&local_48);
  if (local_48 != 0) {
    bVar4 = *(byte *)(param_1 + 0x100);
    if (bVar4 < 2) {
      local_28 = local_48;
      plStack_20 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_1 + 0x138);
      uVar5 = *(undefined8 *)(param_1 + 0x130);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      FUN_141855e90(uVar5,&local_28);
      plVar8 = plStack_20;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar8 = plStack_20;
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            plVar8 = plStack_20;
          }
        }
      }
    }
    else if (bVar4 == 2) {
      local_38 = local_48;
      plStack_30 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_1 + 0x138);
      uVar5 = *(undefined8 *)(param_1 + 0x130);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      FUN_14199f2f0(uVar5,&local_38);
      plVar8 = plStack_30;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar8 = plStack_30;
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            plVar8 = plStack_30;
          }
        }
      }
    }
    else {
      if (bVar4 != 3) goto LAB_14212c73a;
      local_18 = local_48;
      plStack_10 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      plVar8 = *(longlong **)(param_1 + 0x138);
      uVar5 = *(undefined8 *)(param_1 + 0x130);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      FUN_1418560f0(uVar5,&local_18);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
LAB_14212c73a:
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_40 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
LAB_14212c781:
  FUserWidgetPool::Release(param_1 + 0x148,param_2,0);
  return;
}



// FUNCTION 14212c7b0 FUN_14212c7b0 body=515 status=ok
// SIG undefined FUN_14212c7b0(void)

void FUN_14212c7b0(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  uVar6 = *(uint *)(param_1 + 1);
  if ((uVar6 >> 0xf & 1) == 0) {
    if (param_1[0x3c] != 0) {
      if (param_1[0x3d] != 0) {
        plVar8 = (longlong *)0x0;
        piVar1 = (int *)(param_1[0x3d] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          plVar5 = (longlong *)param_1[0x3d];
          plVar7 = plVar5;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            iVar3 = (int)plVar5[1];
            bVar9 = iVar3 == 0;
            if (bVar9) {
              *(int *)(plVar5 + 1) = 0;
              iVar3 = 0;
            }
            UNLOCK();
            while (plVar7 = plVar8, !bVar9) {
              LOCK();
              bVar9 = iVar3 == (int)plVar5[1];
              if (bVar9) {
                *(int *)(plVar5 + 1) = iVar3 + 1;
              }
              UNLOCK();
              if (bVar9) {
                plVar7 = plVar5;
                if (plVar5 != (longlong *)0x0) {
                  plVar8 = (longlong *)param_1[0x3c];
                }
                break;
              }
              LOCK();
              iVar3 = (int)plVar5[1];
              bVar9 = iVar3 == 0;
              if (bVar9) {
                *(int *)(plVar5 + 1) = 0;
                iVar3 = 0;
              }
              UNLOCK();
            }
          }
          lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
          if (((lVar4 != 0) && (cVar2 = UWorld::IsGameWorld(lVar4), cVar2 != '\0')) &&
             (plVar5 = (longlong *)UWorld::GetGameViewport(lVar4), plVar5 != (longlong *)0x0)) {
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            local_38 = plVar8;
            local_30 = plVar7;
            (**(code **)(*plVar5 + 0x2a8))(plVar5,&local_38);
            lVar4 = (**(code **)(*param_1 + 0x2a8))(param_1);
            if (lVar4 != 0) {
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
              }
              local_28 = plVar8;
              local_20 = plVar7;
              (**(code **)(*plVar5 + 0x2b8))(plVar5,lVar4,&local_28);
            }
            FUN_140483870(&DAT_146535808,param_1);
            if (plVar7 == (longlong *)0x0) {
              return;
            }
            LOCK();
            plVar8 = plVar7 + 1;
            lVar4 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          if (plVar7 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar8 = plVar7 + 1;
          lVar4 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar4 != 1) {
            return;
          }
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 != 1) {
            return;
          }
          (**(code **)(*plVar7 + 8))(plVar7,1);
          return;
        }
      }
      uVar6 = *(uint *)(param_1 + 1);
    }
    if ((((uVar6 >> 0xf & 1) == 0) && (param_1[5] != 0)) &&
       (lVar4 = *(longlong *)(param_1[5] + 0x28), lVar4 != 0)) {
      FUN_14212c190(lVar4,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14212c9f0 RemoveInitialValueForObject body=300 status=ok
// SIG undefined RemoveInitialValueForObject(void)

void TMovieSceneBlendingActuator<FWidgetTransform>::RemoveInitialValueForObject
               (longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar6 = 0;
    iVar1 = (int)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar6;
    uVar10 = uVar6;
    if ((**(int **)(param_1 + 0x18) == (int)param_2) && ((*(int **)(param_1 + 0x18))[1] == iVar1)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    do {
      iVar5 = (int)uVar6;
      uVar7 = uVar7 + 1;
      uVar6 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar7 < lVar8) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x18) + uVar7 * 0x24);
        do {
          if ((*piVar2 == (int)param_2) && (piVar2[1] == iVar1)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar4 != bVar3) break;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar7 = uVar7 + 1;
          piVar2 = piVar2 + 9;
        } while ((longlong)uVar7 < lVar8);
      }
      iVar11 = (int)uVar6 - iVar5;
      if (bVar4 != 0) {
        iVar9 = (int)uVar10;
        if (iVar9 != iVar5) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 0x24),
                     (void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x24),
                     (longlong)iVar11 * 0x24);
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar11);
      }
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar7 < lVar8);
    *(int *)(param_1 + 0x20) = (int)uVar10;
  }
  return;
}



// FUNCTION 14212cb20 FUN_14212cb20 body=147 status=ok
// SIG undefined FUN_14212cb20(void)

undefined8 FUN_14212cb20(longlong param_1)

{
  int iVar1;
  
  iVar1 = UComboBoxString::FindOptionIndex();
  if (iVar1 != -1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xc78) + (longlong)iVar1 * 0x10) ==
        *(longlong *)(param_1 + 0xca8)) {
      FUN_1420e7b70(param_1);
    }
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (param_1 + 0xc78,iVar1,1,1);
    if (*(longlong *)(param_1 + 0xc88) != 0) {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xc88) + 0x3b0) + 0x208))();
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14212cbc0 FUN_14212cbc0 body=410 status=ok
// SIG undefined FUN_14212cbc0(void)

void FUN_14212cbc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  longlong local_18;
  longlong *local_10;
  
  lVar6 = *(longlong *)(param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x808) = 0;
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0();
  }
  lVar6 = UWorld::GetGameViewport(lVar6);
  if ((lVar6 != 0) && (plVar3 = *(longlong **)(lVar6 + 0xe8), plVar3 != (longlong *)0x0)) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar7) {
      while( true ) {
        LOCK();
        bVar7 = iVar5 == (int)plVar3[1];
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar7) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar7 = iVar5 == 0;
        if (bVar7) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar7) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        plVar4 = *(longlong **)(lVar6 + 0xe0);
        if ((plVar4 != (longlong *)0x0) && (lVar6 = FUN_1420fd490(param_1), lVar6 != 0)) {
          (**(code **)(*plVar4 + 0x38))(plVar4,&local_18,lVar6,param_1 + 0x810);
          plVar4 = local_10;
          if (local_18 != 0) {
            if (local_10 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_10 + 1) = (int)local_10[1] + 1;
              UNLOCK();
            }
            FUN_14212c2e0(local_18,param_1);
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
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
          }
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_10 + 1;
            lVar6 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_10)(local_10);
              LOCK();
              piVar2 = (int *)((longlong)local_10 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_10 + 8))(local_10,1);
              }
            }
          }
        }
        LOCK();
        plVar4 = plVar3 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14212cda0 FUN_14212cda0 body=183 status=ok
// SIG undefined FUN_14212cda0(void)

void FUN_14212cda0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_146b17150 != 0) {
    local_18 = 0;
    local_10 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    uVar3 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"TOGGLE_FULLSCREEN",0x24);
    lVar2 = DAT_146b17150;
    iVar1 = *(int *)(DAT_146b17150 + 0x7c0);
    *(int *)(DAT_146b17150 + 0x7c0) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x7c4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x7b8,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x7b8));
    *puVar4 = uVar3;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_10._4_4_;
  }
  return;
}



// FUNCTION 14212ce70 FUN_14212ce70 body=200 status=ok
// SIG undefined FUN_14212ce70(void)

void FUN_14212ce70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  FUserWidgetPool::ReleaseAll(param_1 + 0x148);
  if (*(longlong *)(param_1 + 0x130) != 0) {
    bVar4 = *(byte *)(param_1 + 0x100);
    if (bVar4 < 2) {
      plVar6 = *(longlong **)(param_1 + 0x138);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      FUN_141804f10();
    }
    else if (bVar4 == 2) {
      plVar6 = *(longlong **)(param_1 + 0x138);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      SWrapBox::ClearChildren();
    }
    else {
      if (bVar4 != 3) {
        return;
      }
      plVar6 = *(longlong **)(param_1 + 0x138);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      FUN_141804f50();
    }
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14212cf40 FUN_14212cf40 body=188 status=ok
// SIG undefined FUN_14212cf40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14212cf40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [4];
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xf7;
  FUN_1420f9830(param_1,&local_48);
  if (local_48 != 0) {
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    local_30 = 1;
    FUN_14185a850(local_48,local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 14212d000 FUN_14212d000 body=114 status=ok
// SIG undefined FUN_14212d000(void)

void FUN_14212d000(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  *(undefined1 *)(param_1 + 0x345) = 0;
  if (lVar1 != 0) {
    uVar3 = UUserListEntry::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
    if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014212d039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x38))(plVar5);
      return;
    }
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (lVar2 != 0) {
      uVar3 = UUserListEntry::GetPrivateStaticClass();
      cVar4 = UClass::ImplementsInterface(lVar2,uVar3);
      if (cVar4 != '\0') {
        FUN_142150dd0(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 14212d0a0 FUN_14212d0a0 body=233 status=ok
// SIG undefined FUN_14212d0a0(void)

void FUN_14212d0a0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *puStack_10;
  
  if ((DAT_1469e7e13 != '\0') && (*(longlong *)(param_1 + 0x300) != 0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x300) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      puStack_10 = local_res8;
      local_res8[0] = 0;
      local_18 = FUN_1406ddef0;
      lVar3 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
      if (*(char *)(lVar3 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x300) + 0x318))();
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x300) + 0x278))(*(longlong **)(param_1 + 0x300),1);
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&DAT_1469eb218);
  return;
}



// FUNCTION 14212d190 ResizeForCopy body=124 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FIKChainLink,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x3c,0);
    iVar3 = (int)(uVar1 / 0x3c);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x3c,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 14212d210 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<wchar_t_const_*,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x20);
  if (uVar1 < 4) {
    uVar2 = 3;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x24) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x24) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x18);
  if (uVar2 < 4) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x18);
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
        *(void **)((longlong)param_1 + 0x18) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
  return;
}



// FUNCTION 14212d300 ResizeGrow body=291 status=ok
// SIG undefined ResizeGrow(void)

void TArray<SMeshWidget::FRenderData,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xf8);
  if (uVar1 < 4) {
    uVar5 = 3;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0xfc) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x50,0);
    uVar5 = (uint)(uVar2 / 0x50);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0xfc) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0xf0);
  if (uVar5 < 4) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x50);
    pvVar3 = *(void **)((longlong)param_1 + 0xf0);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x50,0);
        *(void **)((longlong)param_1 + 0xf0) = pvVar3;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x50);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x50;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0xf0) = uVar4;
  return;
}



// FUNCTION 14212d6b0 ResolveRules body=476 status=ok
// SIG undefined ResolveRules(void)

void UWidgetNavigation::ResolveRules(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = FUN_1420f6680(param_3,param_1 + 0x30);
    FWeakObjectPtr::operator=(param_1 + 0x38,uVar1);
  }
  else if ((byte)(*(char *)(param_1 + 0x28) - 4U) < 2) {
    FWeakObjectPtr::operator=(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar1 = FUN_1420f6680(param_3,param_1 + 0x58);
    FWeakObjectPtr::operator=(param_1 + 0x60,uVar1);
  }
  else if ((byte)(*(char *)(param_1 + 0x50) - 4U) < 2) {
    FWeakObjectPtr::operator=(param_1 + 0x68,param_2);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x58);
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    uVar1 = FUN_1420f6680(param_3,param_1 + 0x80);
    FWeakObjectPtr::operator=(param_1 + 0x88,uVar1);
  }
  else if ((byte)(*(char *)(param_1 + 0x78) - 4U) < 2) {
    FWeakObjectPtr::operator=(param_1 + 0x90,param_2);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x80);
  }
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    uVar1 = FUN_1420f6680(param_3,param_1 + 0xa8);
    FWeakObjectPtr::operator=(param_1 + 0xb0,uVar1);
  }
  else if ((byte)(*(char *)(param_1 + 0xa0) - 4U) < 2) {
    FWeakObjectPtr::operator=(param_1 + 0xb8,param_2);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xa8);
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    uVar1 = FUN_1420f6680(param_3,param_1 + 0xd0);
    FWeakObjectPtr::operator=(param_1 + 0xd8,uVar1);
  }
  else if ((byte)(*(char *)(param_1 + 200) - 4U) < 2) {
    FWeakObjectPtr::operator=(param_1 + 0xe0,param_2);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xd0);
  }
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    uVar1 = FUN_1420f6680(param_3,param_1 + 0xf8);
    FWeakObjectPtr::operator=(param_1 + 0x100,uVar1);
  }
  else if ((byte)(*(char *)(param_1 + 0xf0) - 4U) < 2) {
    FWeakObjectPtr::operator=(param_1 + 0x108,param_2);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0xf8);
  }
  return;
}



// FUNCTION 14212d890 FUN_14212d890 body=246 status=ok
// SIG undefined FUN_14212d890(void)

void FUN_14212d890(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar4 = DAT_146b17150;
  if (DAT_146b17150 != 0) {
    lVar7 = FUN_142937670();
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (((bVar8) && (lVar4 = *(longlong *)(lVar4 + 0x7b0), lVar4 != 0)) &&
       (plVar5 = *(longlong **)(lVar4 + 0xe8), plVar5 != (longlong *)0x0)) {
      LOCK();
      iVar6 = (int)plVar5[1];
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(plVar5 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (!bVar8) {
        while( true ) {
          LOCK();
          bVar8 = iVar6 == (int)plVar5[1];
          if (bVar8) {
            *(int *)(plVar5 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar8) break;
          LOCK();
          iVar6 = (int)plVar5[1];
          bVar8 = iVar6 == 0;
          if (bVar8) {
            *(int *)(plVar5 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar8) {
            return;
          }
        }
        if (*(longlong **)(lVar4 + 0xe0) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar4 + 0xe0) + 0x60))();
        }
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14212d990 RestoreState body=164 status=ok
// SIG undefined RestoreState(void)

void PropertyTemplate::TCachedState<FMargin,FMargin>::RestoreState
               (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  local_38 = *(undefined4 *)(param_1 + 8);
  uStack_34 = *(undefined4 *)(param_1 + 0xc);
  uStack_30 = *(undefined4 *)(param_1 + 0x10);
  uStack_2c = *(undefined4 *)(param_1 + 0x14);
  FTrackInstancePropertyBindings::FindOrAdd(param_1 + 0x18,local_28,param_2);
  lVar1 = FWeakObjectPtr::Get(local_18);
  if (lVar1 == 0) {
    lVar1 = FWeakObjectPtr::Get(local_28);
    if ((((lVar1 != 0) && (local_20 != 0)) && ((*(uint *)(lVar1 + 8) & 0x18000) == 0)) &&
       (puVar2 = (undefined4 *)(*(int *)(lVar1 + 0x44) + local_20), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = local_38;
      puVar2[1] = uStack_34;
      puVar2[2] = uStack_30;
      puVar2[3] = uStack_2c;
    }
  }
  else {
    (**(code **)(*param_2 + 0x208))(param_2,lVar1,&local_38);
  }
  lVar1 = FWeakObjectPtr::Get(local_10);
  if (lVar1 != 0) {
    (**(code **)(*param_2 + 0x208))(param_2,lVar1,0);
  }
  return;
}



// FUNCTION 14212da40 RestoreState body=50 status=ok
// SIG undefined RestoreState(void)

void PropertyTemplate::TCachedState<FWidgetTransform,FWidgetTransform>::RestoreState
               (longlong param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *(undefined4 *)(param_1 + 8);
  uStack_24 = *(undefined4 *)(param_1 + 0xc);
  uStack_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  local_10 = *(undefined4 *)(param_1 + 0x20);
  local_18 = *(undefined8 *)(param_1 + 0x18);
  FTrackInstancePropertyBindings::CallFunction<FWidgetTransform>(param_1 + 0x28,local_18,&local_28);
  return;
}



// FUNCTION 14212da80 RestoreState body=56 status=ok
// SIG undefined RestoreState(void)

void TMaterialTrackExecutionToken<FWidgetMaterialAccessor>::FPreAnimatedTokenProducer::
     FPreAnimatedToken::RestoreState(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_142132d00(param_1 + 8,param_2,lVar1);
  }
  return;
}



// FUNCTION 14212dac0 RetrieveCurrentValue body=27 status=ok
// SIG undefined RetrieveCurrentValue(void)

undefined8 TPropertyActuator<FMargin>::RetrieveCurrentValue(longlong param_1,undefined8 param_2)

{
  FTrackInstancePropertyBindings::GetCurrentValue<FMargin>(*(undefined8 *)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 14212dae0 RetrieveCurrentValue body=27 status=ok
// SIG undefined RetrieveCurrentValue(void)

undefined8
TPropertyActuator<FWidgetTransform>::RetrieveCurrentValue(longlong param_1,undefined8 param_2)

{
  FTrackInstancePropertyBindings::GetCurrentValue<FWidgetTransform>(*(undefined8 *)(param_1 + 0x38))
  ;
  return param_2;
}



// FUNCTION 14212db00 FUN_14212db00 body=80 status=ok
// SIG undefined FUN_14212db00(void)

void FUN_14212db00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x170);
    plVar1 = plVar3 + *(int *)(param_1 + 0x178);
    if (plVar3 != plVar1) {
      while (lVar2 = *plVar3, *(longlong *)(lVar2 + 0x378) != param_2) {
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar1) {
          return;
        }
      }
      if (*(int *)(lVar2 + 0x6c0) == 1) {
        *(bool *)(lVar2 + 0x6f0) = *(char *)(lVar2 + 0x6f0) == '\0';
      }
    }
  }
  return;
}



// FUNCTION 14212db50 FUN_14212db50 body=252 status=ok
// SIG undefined FUN_14212db50(void)

longlong FUN_14212db50(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(int *)(param_1 + 0x6c) = param_2;
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(param_1 + 0x58);
      plVar5 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = plVar6, !bVar7) {
          LOCK();
          bVar7 = iVar4 == (int)plVar2[1];
          if (bVar7) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar7) {
            plVar5 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = *(longlong **)(param_1 + 0x50);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      SGridPanel::NotifySlotChanged(plVar6,param_1);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
        return param_1;
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14212dc50 FUN_14212dc50 body=271 status=ok
// SIG undefined FUN_14212dc50(void)

void FUN_14212dc50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res20;
  float local_18;
  float local_14;
  undefined1 local_10 [8];
  
  local_res20 = param_2;
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 != 0) {
    cVar2 = UWorld::IsGameWorld(lVar3);
    if (cVar2 != '\0') {
      lVar3 = UWorld::GetGameViewport(lVar3);
      if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0xb0), plVar1 != (longlong *)0x0)) {
        FUN_142481d50(lVar3,&local_18);
        (**(code **)(*plVar1 + 0x110))
                  (plVar1,local_10,
                   CONCAT44(local_res20._4_4_ / local_14,(float)local_res20 / local_18));
        local_res20 = CONCAT44((float)local_10._4_4_,(float)local_10._0_4_);
        uVar4 = CONCAT44((float)local_10._4_4_,(float)local_10._0_4_);
        goto LAB_14212dd3a;
      }
    }
  }
  uVar4 = 0;
LAB_14212dd3a:
  FUN_1420de980(param_1,uVar4,&local_res20,param_3);
  return;
}



// FUNCTION 14212dd60 FUN_14212dd60 body=219 status=ok
// SIG undefined FUN_14212dd60(void)

void FUN_14212dd60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  float local_res20;
  float local_res24;
  float local_18;
  float fStack_14;
  undefined1 local_10 [8];
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 != 0) {
    cVar2 = UWorld::IsGameWorld(lVar3);
    if (cVar2 != '\0') {
      lVar3 = UWorld::GetGameViewport(lVar3);
      if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0xb0), plVar1 != (longlong *)0x0)) {
        FUN_142481d50(lVar3,&local_res20);
        local_18 = (float)param_2;
        fStack_14 = (float)((ulonglong)param_2 >> 0x20);
        (**(code **)(*plVar1 + 0x110))
                  (plVar1,local_10,CONCAT44(fStack_14 / local_res24,local_18 / local_res20));
        *param_3 = CONCAT44((float)local_10._4_4_,(float)local_10._0_4_);
        return;
      }
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 14212de40 FUN_14212de40 body=388 status=ok
// SIG undefined FUN_14212de40(void)

void FUN_14212de40(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res10;
  float fStackX_14;
  float local_res20;
  float local_res24;
  undefined1 local_68 [80];
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 != 0) {
    cVar2 = UWorld::IsGameWorld(lVar3);
    if (cVar2 != '\0') {
      lVar3 = UWorld::GetGameViewport(lVar3);
      if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0xb0), plVar1 != (longlong *)0x0)) {
        FUN_142481d50(lVar3,&local_res20);
        local_res10 = (float)param_3;
        fStackX_14 = (float)((ulonglong)param_3 >> 0x20);
        (**(code **)(*plVar1 + 0x110))
                  (plVar1,local_68,CONCAT44(fStackX_14 / local_res24,local_res10 / local_res20));
        fVar5 = (float)(int)local_68._0_8_;
        fVar6 = (float)SUB84(local_68._0_8_,4);
        goto LAB_14212df22;
      }
    }
  }
  fVar5 = 0.0;
  fVar6 = 0.0;
LAB_14212df22:
  fVar4 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x24));
  *param_4 = CONCAT44(*(float *)(param_2 + 0x1c) * fVar4 * (fVar6 - *(float *)(param_2 + 0x30)) -
                      *(float *)(param_2 + 0x20) * fVar4 * (fVar5 - *(float *)(param_2 + 0x2c)),
                      *(float *)(param_2 + 0x28) * fVar4 * (fVar5 - *(float *)(param_2 + 0x2c)) -
                      *(float *)(param_2 + 0x24) * fVar4 * (fVar6 - *(float *)(param_2 + 0x30)));
  return;
}



// FUNCTION 14212dfd0 FUN_14212dfd0 body=1680 status=ok
// SIG undefined FUN_14212dfd0(void)

void FUN_14212dfd0(longlong *param_1,longlong param_2,float param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  longlong *local_148;
  longlong *plStack_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined1 local_118 [4];
  float local_114;
  undefined1 local_110 [4];
  float local_10c;
  undefined1 local_108 [8];
  longlong *local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  
  if ((param_4 != '\x01') ||
     (((9.999999747378752e-05 < (double)param_1[0x66] ||
        (double)param_1[0x66] == 9.999999747378752e-05 || (0.0 <= param_3)) &&
      (((char)param_1[0x6d] == '\0' || (param_3 <= 0.0)))))) {
    dVar15 = (double)param_1[0x66];
    fVar16 = ABS(param_3);
    iVar13 = (int)dVar15;
    if ((dVar15 == 0.0) && ((char)param_1[0x6d] != '\0')) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((param_4 == '\0') &&
       (cVar7 = FOverscroll::ShouldApplyOverscroll
                          ((longlong)param_1 + 0x414,dVar15 == 0.0,(char)param_1[0x6d],param_3),
       cVar7 != '\0')) {
      if (param_3 <= 0.0) {
        if (0.0 <= param_3) {
          fVar16 = 0.0;
        }
        else {
          fVar16 = -fVar16;
        }
      }
      fVar16 = (float)FOverscroll::ScrollBy((longlong)param_1 + 0x414,param_2,fVar16);
      if (fVar16 != 0.0) {
        FUN_1419bb590(param_1);
      }
    }
    else if (!bVar5) {
      plVar3 = (longlong *)param_1[0xb7];
      if (((plVar3 != (longlong *)0x0) && (0 < (int)plVar3[1])) &&
         (uVar2 = *(undefined4 *)(param_2 + 8), param_3 != 0.0)) {
        local_138 = (longlong)iVar13 * 8;
        do {
          if (((int)plVar3[1] <= iVar13) || (iVar13 < 0)) break;
          uVar4 = *(undefined8 *)(local_138 + *plVar3);
          local_120 = uVar4;
          FUN_142100550(param_1 + 0x87,&local_148,&local_120);
          plVar11 = plStack_140;
          plVar12 = local_148;
          if (local_148 == (longlong *)0x0) {
            puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x268))(param_1,local_108,uVar4);
            local_128 = (longlong *)puVar8[1];
            local_148 = (longlong *)*puVar8;
            if (local_128 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_128 + 1) = (int)local_128[1] + 1;
              UNLOCK();
            }
            local_130 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_140,&local_128);
            plVar11 = local_128;
            if (local_128 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_128 + 1;
              lVar9 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_128)(local_128);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*local_128 + 8))(local_128,1);
                }
              }
            }
            plVar11 = local_100;
            if (local_100 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_100 + 1;
              lVar9 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_100)(local_100);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
            plVar12 = local_148;
            (**(code **)(*local_148 + 0x10))(local_148,iVar13);
            plVar11 = plStack_140;
            local_f8 = local_148;
            plStack_f0 = plStack_140;
            if (plStack_140 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
              UNLOCK();
              plVar12 = local_148;
            }
            FUN_14210c690(param_1 + 0x87,local_120,&local_f8);
            puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x50))(plVar12,local_e8);
            FUN_14185c5d0(*puVar8,uVar2);
            plVar6 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_e0 + 1;
              lVar9 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              plVar11 = plStack_140;
              plVar12 = local_148;
              if ((int)lVar9 == 1) {
                (**(code **)*local_e0)(local_e0);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar11 = plStack_140;
                plVar12 = local_148;
                if (iVar10 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                  plVar11 = plStack_140;
                  plVar12 = local_148;
                }
              }
            }
          }
          if (param_3 <= 0.0) {
            puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x50))(plVar12,local_c8);
            SWidget::GetDesiredSize(*puVar8,local_110);
            plVar12 = local_c0;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_c0 + 1;
              lVar9 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              plVar11 = plStack_140;
              if ((int)lVar9 == 1) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar11 = plStack_140;
                if (iVar10 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                  plVar11 = plStack_140;
                }
              }
            }
            fVar14 = (float)dVar15 - (float)(int)dVar15;
            if (fVar14 == 0.0) {
              fVar14 = 1.0;
              dVar15 = dVar15 + -1.0;
            }
            fVar14 = local_10c * fVar14;
            if (fVar16 <= fVar14) {
              if (fVar16 == fVar14) {
                dVar15 = dVar15 + (double)-((float)dVar15 - (float)(int)dVar15);
              }
              else {
                dVar15 = (double)((fVar14 - fVar16) / local_10c + (float)(int)dVar15);
              }
            }
            else {
              if (iVar13 != 0) {
                iVar10 = -1;
                lVar9 = -8;
                dVar15 = dVar15 + (double)-((float)dVar15 - (float)(int)dVar15);
                goto LAB_14212e4c1;
              }
              dVar15 = 0.0;
            }
LAB_14212e5ae:
            plVar3 = plStack_140;
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar11 = plVar11 + 1;
              lVar9 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_140)(plStack_140);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar13 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plStack_140 + 8))(plStack_140,1);
                }
              }
            }
            break;
          }
          puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x50))(plVar12,local_d8);
          SWidget::GetDesiredSize(*puVar8,local_118);
          plVar12 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_d0 + 1;
            lVar9 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            plVar11 = plStack_140;
            if ((int)lVar9 == 1) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar11 = plStack_140;
              if (iVar10 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
                plVar11 = plStack_140;
              }
            }
          }
          fVar14 = (1.0 - ((float)dVar15 - (float)(int)dVar15)) * local_114;
          if (fVar16 <= fVar14) {
            if (fVar16 == fVar14) {
              dVar15 = (double)((float)(int)dVar15 + 1.0);
            }
            else {
              dVar15 = (double)((1.0 - (fVar14 - fVar16) / local_114) + (float)(int)dVar15);
            }
            goto LAB_14212e5ae;
          }
          if (iVar13 == (int)plVar3[1]) {
            dVar15 = (double)(int)plVar3[1];
            goto LAB_14212e5ae;
          }
          lVar9 = 8;
          iVar10 = 1;
          dVar15 = (double)((float)(int)dVar15 + 1.0);
LAB_14212e4c1:
          plVar12 = plStack_140;
          fVar16 = fVar16 - fVar14;
          iVar13 = iVar13 + iVar10;
          local_138 = local_138 + lVar9;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar11 + 1;
            lVar9 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_140)(plStack_140);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plStack_140 + 8))(plStack_140,1);
              }
            }
          }
        } while (fVar16 != 0.0);
      }
      (**(code **)(*param_1 + 0x220))(param_1,(float)dVar15);
    }
  }
  return;
}



// FUNCTION 14212e660 FUN_14212e660 body=292 status=ok
// SIG undefined FUN_14212e660(void)

void FUN_14212e660(longlong *param_1,undefined8 param_2,float param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  if (((double)param_1[0x66] == 0.0) && ((char)param_1[0x6d] != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((param_4 == '\0') &&
     (cVar2 = FOverscroll::ShouldApplyOverscroll
                        ((longlong)param_1 + 0x414,(double)param_1[0x66] == 0.0,(char)param_1[0x6d],
                         param_3), cVar2 != '\0')) {
    iVar3 = (**(code **)(*param_1 + 0x230))(param_1);
    fVar4 = (float)FOverscroll::ScrollBy((longlong)param_1 + 0x414,param_2,param_3 / (float)iVar3);
    if (fVar4 != 0.0) {
      (**(code **)(*param_1 + 0x208))(param_1);
    }
  }
  else if (!bVar1) {
    STableViewBase::GetItemHeight(param_1);
    (**(code **)(*param_1 + 0x230))(param_1);
    (**(code **)(*param_1 + 0x220))(param_1);
  }
  return;
}



// FUNCTION 14212e790 FUN_14212e790 body=138 status=ok
// SIG undefined FUN_14212e790(void)

void FUN_14212e790(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((-1 < param_2) && (param_2 < (int)param_1[0x56])) &&
      (lVar2 = *(longlong *)(param_1[0x55] + (longlong)param_2 * 8), lVar2 != 0)) &&
     ((param_1[0x57] != 0 && (lVar3 = (**(code **)(*param_1 + 0x2a8))(), lVar3 != 0)))) {
    uVar1 = *(undefined4 *)(lVar3 + 0x108);
    lVar3 = (**(code **)(param_1[0x41] + 0x30))();
    if (lVar3 != 0) {
      *(longlong *)(lVar3 + 0x5c0) = lVar2;
      *(undefined4 *)(lVar3 + 0x5c8) = uVar1;
      FUN_1419bb590(lVar3);
    }
  }
  return;
}



// FUNCTION 14212e820 FUN_14212e820 body=345 status=ok
// SIG undefined FUN_14212e820(void)

undefined8 FUN_14212e820(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  if ((param_1[0xb8] != 0) && (plVar1 = (longlong *)param_1[0xb7], plVar1 != (longlong *)0x0)) {
    plVar2 = (longlong *)*plVar1;
    for (plVar6 = plVar2; plVar6 != plVar2 + (int)plVar1[1]; plVar6 = plVar6 + 1) {
      if (*plVar6 == param_1[0xb8]) {
        iVar5 = (int)((longlong)plVar6 - (longlong)plVar2 >> 3);
        if (iVar5 != -1) {
          fVar7 = (float)(**(code **)(*param_1 + 0x228))(param_1);
          dVar3 = (double)fVar7;
          if (((dVar3 == 0.0) && (cVar4 = FUN_1419b3db0(param_1), cVar4 != '\0')) &&
             (dVar3 = (double)param_1[0x6b], dVar3 == 0.0)) {
            return 1;
          }
          ARacingGameState::GetMeanAbsError(param_1);
          if (((double)iVar5 < (double)param_1[0x66]) ||
             ((double)param_1[0x66] + dVar3 < (double)(iVar5 + 1))) {
            dVar9 = (double)iVar5 - dVar3 * 0.5;
            dVar8 = (double)(iVar5 + 1) - (dVar9 + dVar3);
            dVar3 = 0.0;
            if ((0.0 <= dVar8) && (dVar3 = dVar8, 3.4028234663852886e+38 <= dVar8)) {
              dVar3 = 3.4028234663852886e+38;
            }
            STableViewBase::SetScrollOffset(param_1,(float)(dVar3 + dVar9));
          }
          FUN_1419bb590(param_1);
          param_1[0xba] = param_1[0xb8];
        }
        break;
      }
    }
    param_1[0xb8] = 0;
  }
  return 0;
}



// FUNCTION 14212e980 FUN_14212e980 body=491 status=ok
// SIG undefined FUN_14212e980(void)

undefined8 FUN_14212e980(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar6;
  
  if ((param_1[0xb8] != 0) && (plVar1 = (longlong *)param_1[0xb7], plVar1 != (longlong *)0x0)) {
    plVar2 = (longlong *)*plVar1;
    for (plVar7 = plVar2; plVar7 != plVar2 + (int)plVar1[1]; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_1[0xb8]) {
        uVar8 = (longlong)plVar7 - (longlong)plVar2 >> 3;
        iVar5 = (int)uVar8;
        if (iVar5 != -1) {
          fVar9 = (float)STableViewBase::GetItemHeight(param_1);
          fVar11 = (1.0 / fVar9) * *(float *)(param_2 + 4);
          fVar9 = (float)(**(code **)(*param_1 + 0x228))(param_1);
          if (((fVar9 == 0.0) && (cVar3 = FUN_1419b3db0(param_1), cVar3 != '\0')) &&
             ((float)(double)param_1[0x6b] == 0.0)) {
            return 1;
          }
          ARacingGameState::GetMeanAbsError(param_1);
          iVar4 = (**(code **)(*param_1 + 0x230))(param_1);
          uVar8 = (ulonglong)(uint)(iVar5 >> 0x1f) << 0x20 | uVar8 & 0xffffffff;
          iVar6 = (int)((longlong)uVar8 / (longlong)iVar4);
          iVar5 = iVar6 * iVar4;
          fVar9 = (float)iVar4;
          if (((double)iVar5 < (double)param_1[0x66]) ||
             ((double)(fVar9 * fVar11) + (double)param_1[0x66] < (double)((iVar6 + 1) * iVar4))) {
            fVar10 = (float)iVar5 - (fVar11 - 1.0) * fVar9 * 0.5;
            iVar5 = (**(code **)(*param_1 + 0x250))
                              (param_1,(longlong)uVar8 % (longlong)iVar4 & 0xffffffff);
            fVar9 = (float)iVar5 - fVar9 * fVar11;
            if (0.0 <= fVar10) {
              if (fVar9 <= fVar10) {
                fVar10 = fVar9;
              }
            }
            else {
              fVar10 = 0.0;
            }
            STableViewBase::SetScrollOffset(param_1,fVar10);
          }
          (**(code **)(*param_1 + 0x208))(param_1);
          param_1[0xba] = param_1[0xb8];
        }
        break;
      }
    }
    param_1[0xb8] = 0;
  }
  return 0;
}



// FUNCTION 14212ebf0 FUN_14212ebf0 body=501 status=ok
// SIG undefined FUN_14212ebf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14212ebf0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_328 [32];
  undefined1 *local_308;
  longlong local_300;
  undefined8 *local_2f8;
  undefined4 local_2f0;
  longlong local_2e8;
  undefined1 local_2d8 [8];
  undefined8 local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined **local_2b8 [9];
  longlong *local_270;
  undefined1 local_248 [8];
  undefined1 local_240 [320];
  longlong *local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  if ((DAT_1469f4590 != 0) && (*(longlong *)(param_1 + 0x2e0) != 0)) {
    local_2d8[0] = DAT_1464b9ee8;
    local_308 = local_2d8;
    FWeakWidgetPath::ToWidgetPath(param_1 + 0x318,local_248,0,0);
    local_2d0 = DAT_1469e9850;
    local_2c8 = DAT_1469e9858;
    local_2c0 = DAT_1469e9860;
    if (DAT_1469e9860 != 0) {
      LOCK();
      *(int *)(DAT_1469e9860 + 8) = *(int *)(DAT_1469e9860 + 8) + 1;
      UNLOCK();
    }
    local_300 = param_1 + 0x340;
    local_2e8 = param_1 + 0x338;
    local_308 = (undefined1 *)(param_1 + 0x428);
    local_2f8 = &local_2d0;
    local_2f0 = param_2;
    FUN_1418892a0(local_2b8,*(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 8),
                  (longlong)*(float *)(param_1 + 0x2f4),param_1 + 0x420);
    local_308 = (undefined1 *)0x0;
    FUN_1418be700(DAT_1469f4590,local_e8,local_248,local_2b8);
    FUN_140438c20(local_e8);
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_270 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar2 = (int *)((longlong)local_270 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_270 + 8))(local_270,1);
        }
      }
    }
    local_2b8[0] = &PTR_FUN_144d56560;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_f8);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)local_100 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    FUN_140456b10(local_240);
  }
  return;
}



// FUNCTION 14212edf0 FUN_14212edf0 body=284 status=ok
// SIG undefined FUN_14212edf0(void)

void FUN_14212edf0(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  if (param_2 != 0) {
    puVar6 = (undefined8 *)FUN_1420f9830(param_2,local_18);
    if (&local_28 != puVar6) {
      local_28 = *puVar6;
      *puVar6 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_20,puVar6 + 1);
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x850) != 0) {
    FUN_14199fba0(*(longlong *)(param_1 + 0x850),&local_28,param_3,param_4,0);
  }
  plVar1 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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
  return;
}



// FUNCTION 14212ef10 FUN_14212ef10 body=276 status=ok
// SIG undefined FUN_14212ef10(void)

ulonglong FUN_14212ef10(longlong param_1,longlong *param_2,undefined1 param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined **local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined8 local_38;
  undefined2 local_30;
  
  if ((DAT_1469f4590 != 0) && (*(longlong *)(param_1 + 0x2e0) != 0)) {
    bVar3 = 0;
    uVar4 = 0;
    uVar5 = uVar4;
    while( true ) {
      iVar2 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar2 = 0;
      }
      if (iVar2 <= (int)uVar4) break;
      local_30 = *(undefined2 *)(uVar5 + *param_2);
      local_3c = *(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 8);
      local_40 = *(undefined2 *)(param_1 + 0x338);
      local_38 = 0;
      local_48 = &PTR_FUN_144d565a8;
      local_3e = param_3;
      bVar1 = FUN_1418b2f50(DAT_1469f4590,&local_48);
      bVar3 = bVar3 | bVar1;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar5 = uVar5 + 2;
    }
    if (*param_2 != 0) {
      FMemory::Free();
    }
    return (ulonglong)bVar3;
  }
  if (*param_2 != 0) {
    register0x00000020 = (BADSPACEBASE *)FMemory::Free();
  }
  return (ulonglong)register0x00000020 & 0xffffffffffffff00;
}



// FUNCTION 14212f030 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  return;
}



// FUNCTION 14212f060 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  return;
}



// FUNCTION 14212f090 FUN_14212f090 body=46 status=ok
// SIG undefined FUN_14212f090(void)

void FUN_14212f090(undefined8 param_1,longlong param_2)

{
  UMovieSceneSection::Serialize();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_142142a30(param_1);
  }
  return;
}



// FUNCTION 14212f0c0 Serialize body=87 status=ok
// SIG undefined Serialize(void)

void UUserWidget::Serialize(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(int *)(param_2 + 0x40) < 0x1ea)) {
    bVar1 = *(byte *)(param_1 + 0x1ac);
    *(byte *)(param_1 + 0x1ac) = (bVar1 * '\x02' ^ bVar1) & 2 ^ bVar1;
  }
  return;
}



// FUNCTION 14212f120 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_1422f9240();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  return;
}



// FUNCTION 14212f150 SetActiveWidget body=134 status=ok
// SIG undefined SetActiveWidget(void)

void UWidgetSwitcher::SetActiveWidget(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar1 = *(int *)(param_1 + 0x108);
  uVar5 = 0;
  uVar4 = uVar5;
  uVar7 = uVar5;
  if (0 < iVar1) {
    do {
      uVar6 = (uint)uVar4;
      uVar4 = uVar5;
      if (((-1 < (longlong)uVar7) && ((int)uVar6 < *(int *)(param_1 + 0x108))) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x100) + uVar7 * 8), lVar2 != 0)) {
        uVar4 = *(ulonglong *)(lVar2 + 0x30);
      }
      if (uVar4 == param_2) goto LAB_14212f1a5;
      uVar7 = uVar7 + 1;
      uVar4 = (ulonglong)(uVar6 + 1);
    } while ((longlong)uVar7 < (longlong)iVar1);
  }
  uVar6 = 0xffffffff;
LAB_14212f1a5:
  *(uint *)(param_1 + 0x118) = uVar6;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    return;
  }
  uVar3 = iVar1 - 1U;
  if ((int)(iVar1 - 1U) < 1) {
    uVar3 = 0;
  }
  if (-1 < (int)uVar6) {
    if ((int)uVar6 < (int)uVar3) {
      uVar3 = uVar6;
    }
    uVar5 = (ulonglong)uVar3;
  }
  FUN_1419a03c0(*(longlong *)(param_1 + 0x120),uVar5);
  return;
}



// FUNCTION 14212f220 SetAlignment body=98 status=ok
// SIG undefined SetAlignment(void)

void UCanvasPanelSlot::SetAlignment
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    local_res8 = (undefined4)param_2;
    uStackX_c = (undefined4)((ulonglong)param_2 >> 0x20);
    *(undefined4 *)(lVar1 + 0x70) = local_res8;
    *(undefined4 *)(lVar1 + 0x74) = uStackX_c;
    *(undefined1 *)(lVar1 + 0x78) = 1;
    local_18 = 0;
    local_10 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x80,&local_18,param_3,param_4,param_2,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  return;
}



// FUNCTION 14212f290 SetAlignmentInViewport body=8 status=ok
// SIG undefined SetAlignmentInViewport(void)

void UUserWidget::SetAlignmentInViewport(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1d8) = param_2;
  return;
}



// FUNCTION 14212f2a0 SetAllNavigationRules body=146 status=ok
// SIG undefined SetAllNavigationRules(void)

void UWidget::SetAllNavigationRules(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  FUN_142133610(param_1,2,param_2,param_3);
  FUN_142133610(param_1,3,param_2,param_3);
  FUN_142133610(param_1,0,param_2,param_3);
  FUN_142133610(param_1,1,param_2,param_3);
  FUN_142133610(param_1,4,param_2,param_3);
  FUN_142133610(param_1,5,param_2,param_3);
  FUN_1420e3000(param_1);
  return;
}



// FUNCTION 14212f340 FUN_14212f340 body=25 status=ok
// SIG undefined FUN_14212f340(void)

void FUN_14212f340(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x650) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x650) + 0x389) = param_2;
  }
  *(undefined1 *)(param_1 + 0x619) = param_2;
  return;
}



// FUNCTION 14212f360 FUN_14212f360 body=25 status=ok
// SIG undefined FUN_14212f360(void)

void FUN_14212f360(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x650) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x650) + 0x388) = param_2;
  }
  *(undefined1 *)(param_1 + 0x618) = param_2;
  return;
}



// FUNCTION 14212f380 SetAllowOverscroll body=27 status=ok
// SIG undefined SetAllowOverscroll(void)

void UScrollBox::SetAllowOverscroll(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x82d) = param_2;
  if (*(longlong *)(param_1 + 0x850) != 0) {
    SScrollBox::SetAllowOverscroll(*(longlong *)(param_1 + 0x850),param_2 ^ 1);
    return;
  }
  return;
}



// FUNCTION 14212f3a0 FUN_14212f3a0 body=23 status=ok
// SIG undefined FUN_14212f3a0(void)

void FUN_14212f3a0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x82c) = param_2;
  if (*(longlong *)(param_1 + 0x850) == 0) {
    return;
  }
  FUN_1419a3760(*(undefined8 *)(*(longlong *)(param_1 + 0x850) + 0x308));
  return;
}



// FUNCTION 14212f3c0 SetAnchors body=78 status=ok
// SIG undefined SetAnchors(void)

void UCanvasPanelSlot::SetAnchors
               (longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x58) = 1;
    *(undefined4 *)(lVar1 + 0x48) = uVar2;
    *(undefined4 *)(lVar1 + 0x4c) = uVar3;
    *(undefined4 *)(lVar1 + 0x50) = uVar4;
    *(undefined4 *)(lVar1 + 0x54) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x60,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 14212f410 SetAnchorsInViewport body=11 status=ok
// SIG undefined SetAnchorsInViewport(void)

void UUserWidget::SetAnchorsInViewport(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x1b8) = *param_2;
  *(undefined8 *)(param_1 + 0x1c0) = uVar1;
  return;
}



// FUNCTION 14212f420 SetAnimateHorizontally body=66 status=ok
// SIG undefined SetAnimateHorizontally(void)

void UThrobber::SetAnimateHorizontally(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x104) = param_2;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_141956110(*(longlong *)(param_1 + 0x198),
                  -(uint)(*(char *)(param_1 + 0x106) != '\0') & 4 |
                  (uint)(*(char *)(param_1 + 0x105) != '\0') | (uint)param_2 * 2);
    return;
  }
  return;
}



// FUNCTION 14212f470 SetAnimateOpacity body=67 status=ok
// SIG undefined SetAnimateOpacity(void)

void UThrobber::SetAnimateOpacity(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x106) = param_2;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_141956110(*(longlong *)(param_1 + 0x198),
                  -(uint)(*(char *)(param_1 + 0x104) != '\0') & 2 |
                  (uint)(*(char *)(param_1 + 0x105) != '\0') | (uint)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 14212f4c0 SetAnimateVertically body=70 status=ok
// SIG undefined SetAnimateVertically(void)

void UThrobber::SetAnimateVertically(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x105) = param_2;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_141956110(*(longlong *)(param_1 + 0x198),
                  -(*(char *)(param_1 + 0x106) != '\0') & 4U |
                  -(*(char *)(param_1 + 0x104) != '\0') & 2U | param_2);
    return;
  }
  return;
}



// FUNCTION 14212f510 FUN_14212f510 body=23 status=ok
// SIG undefined FUN_14212f510(void)

void FUN_14212f510(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x12a) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x2f0) = param_2;
  FUN_1418475e0(lVar1,1);
  return;
}



// FUNCTION 14212f530 SetAutoSize body=81 status=ok
// SIG undefined SetAutoSize(void)

void UCanvasPanelSlot::SetAutoSize
               (longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x60) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x90) = param_2;
    *(undefined1 *)(lVar1 + 0x91) = 1;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x98,&local_20,param_3,param_4,param_2);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 14212f590 FUN_14212f590 body=67 status=ok
// SIG undefined FUN_14212f590(void)

void FUN_14212f590(longlong param_1,undefined1 param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x1fd) = param_2;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    local_28 = param_2;
    FUN_1419bbb80(*(longlong *)(param_1 + 0x200),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 14212f5e0 FUN_14212f5e0 body=166 status=ok
// SIG undefined FUN_14212f5e0(void)

void FUN_14212f5e0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  *(undefined4 *)(param_1 + 0x3a8) = local_48;
  *(undefined4 *)(param_1 + 0x3ac) = uStack_44;
  *(undefined4 *)(param_1 + 0x3b0) = uStack_40;
  *(undefined4 *)(param_1 + 0x3b4) = uStack_3c;
  if (*(longlong *)(param_1 + 0x410) != 0) {
    local_18 = 0;
    local_10 = 0;
    local_30 = 0;
    plStack_28 = (longlong *)0x0;
    local_38 = 0;
    local_20 = 1;
    FUN_1419a0580(*(longlong *)(param_1 + 0x410),&local_48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    plVar5 = plStack_28;
    if (plStack_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_28 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_28)(plStack_28);
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
  return;
}



// FUNCTION 14212f690 FUN_14212f690 body=71 status=ok
// SIG undefined FUN_14212f690(void)

void FUN_14212f690(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((((*(float *)(param_1 + 0x770) == *param_2) && (*(float *)(param_1 + 0x774) == param_2[1])) &&
      (*(float *)(param_1 + 0x778) == param_2[2])) && (*(float *)(param_1 + 0x77c) == param_2[3])) {
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x770) = *param_2;
  *(float *)(param_1 + 0x774) = fVar1;
  *(float *)(param_1 + 0x778) = fVar2;
  *(float *)(param_1 + 0x77c) = fVar3;
  FUN_1423424e0();
  return;
}



// FUNCTION 14212f6e0 SetBlurRadius body=100 status=ok
// SIG undefined SetBlurRadius(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UBackgroundBlur::SetBlurRadius(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x134) = param_2;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_28 = 0;
    local_20 = 0;
    local_34 = 1;
    local_30 = 1;
    local_38 = param_2;
    SBackgroundBlur::SetBlurRadius(*(longlong *)(param_1 + 0x1c0),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  return;
}



// FUNCTION 14212f750 SetBlurStrength body=71 status=ok
// SIG undefined SetBlurStrength(void)

void UBackgroundBlur::SetBlurStrength(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 300) = param_2;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    SBackgroundBlur::SetBlurStrength(*(longlong *)(param_1 + 0x1c0),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 14212f7a0 SetBrush body=92 status=ok
// SIG undefined SetBrush(void)

void UBorder::SetBrush(longlong param_1)

{
  longlong local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_1406922e0(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x250) != 0) {
    local_18 = 0;
    local_10 = 0;
    local_20 = 1;
    local_28 = param_1 + 0x150;
    FUN_1419a06c0(*(longlong *)(param_1 + 0x250),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  return;
}



// FUNCTION 14212f800 SetBrush body=96 status=ok
// SIG undefined SetBrush(void)

void UImage::SetBrush(longlong param_1)

{
  longlong local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_1406922e0(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_18 = 0;
    local_10 = 0;
    local_20 = 1;
    local_28 = param_1 + 0x100;
    FUN_141956fc0(*(longlong *)(param_1 + 0x1c8),&local_28);
    FUN_1418475e0(*(undefined8 *)(param_1 + 0x1c8),5);
  }
  return;
}



// FUNCTION 14212f860 FUN_14212f860 body=166 status=ok
// SIG undefined FUN_14212f860(void)

void FUN_14212f860(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  *(undefined4 *)(param_1 + 0x1e8) = local_48;
  *(undefined4 *)(param_1 + 0x1ec) = uStack_44;
  *(undefined4 *)(param_1 + 0x1f0) = uStack_40;
  *(undefined4 *)(param_1 + 500) = uStack_3c;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    local_18 = 0;
    local_10 = 0;
    local_30 = 0;
    plStack_28 = (longlong *)0x0;
    local_38 = 0;
    local_20 = 1;
    FUN_1419a0580(*(longlong *)(param_1 + 0x250),&local_48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    plVar5 = plStack_28;
    if (plStack_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_28 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_28)(plStack_28);
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
  return;
}



// FUNCTION 14212f910 FUN_14212f910 body=338 status=ok
// SIG undefined FUN_14212f910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14212f910(longlong param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined4 uStackX_c;
  longlong local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  byte local_a8;
  undefined1 local_a0 [136];
  
  if (param_2 == 0) {
    local_a8 = local_a8 & 0xfc;
    local_120 = 0x4200000042000000;
    uStack_118 = 0;
    local_128 = &PTR__scalar_deleting_destructor__143f489a8;
    pppuVar1 = &local_128;
    local_110 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_f8 = 0;
    local_108 = _DAT_1464aa6c0;
    uStack_100 = _DAT_1464aa6c8;
    local_e0 = 0;
    local_d0 = (undefined4)DAT_1468b5d88;
    uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
    local_c4 = uStackX_c;
    local_cc = uStackX_c;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = 0;
    local_c0 = 0;
    local_bc = 3;
    local_c8 = local_d0;
  }
  else {
    pppuVar1 = (undefined ***)FUN_14080bc50(local_a0,param_2 + 0x28);
  }
  FUN_1406922e0(param_1 + 0x150,pppuVar1);
  if (param_2 == 0) {
    FSlateBrush::~FSlateBrush(&local_128);
  }
  else {
    FSlateBrush::~FSlateBrush(local_a0);
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    local_140 = 1;
    local_138 = 0;
    local_130 = 0;
    local_148 = param_1 + 0x150;
    FUN_1419a06c0(*(longlong *)(param_1 + 0x250),&local_148);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_138);
  }
  return;
}



// FUNCTION 14212fa70 FUN_14212fa70 body=341 status=ok
// SIG undefined FUN_14212fa70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14212fa70(longlong param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined4 uStackX_c;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  byte local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [136];
  
  if (param_2 == 0) {
    local_c8 = local_c8 & 0xfc;
    local_140 = 0x4200000042000000;
    uStack_138 = 0;
    local_148 = &PTR__scalar_deleting_destructor__143f489a8;
    pppuVar1 = &local_148;
    local_130 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_118 = 0;
    local_128 = _DAT_1464aa6c0;
    uStack_120 = _DAT_1464aa6c8;
    local_100 = 0;
    local_f0 = (undefined4)DAT_1468b5d88;
    uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
    local_e4 = uStackX_c;
    local_ec = uStackX_c;
    local_d8 = 0;
    uStack_d0 = 0;
    local_f8 = 0;
    local_e0 = 0;
    local_dc = 3;
    local_e8 = local_f0;
  }
  else {
    pppuVar1 = (undefined ***)FUN_14080bc50(local_a0,param_2 + 0x28);
  }
  FUN_1406922e0(param_1 + 0x100,pppuVar1);
  if (param_2 == 0) {
    FSlateBrush::~FSlateBrush(&local_148);
  }
  else {
    FSlateBrush::~FSlateBrush(local_a0);
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_b8 = 1;
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = param_1 + 0x100;
    FUN_141956fc0(*(longlong *)(param_1 + 0x1c8),&local_c0);
    FUN_1418475e0(*(undefined8 *)(param_1 + 0x1c8),5);
  }
  return;
}



// FUNCTION 14212fbd0 FUN_14212fbd0 body=260 status=ok
// SIG undefined FUN_14212fbd0(void)

void FUN_14212fbd0(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong *local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FSlateBrush::SetResourceObject((longlong *)(param_1 + 0x100),*param_2);
  if (param_3 != '\0') {
    if ((*param_2 == 0) || (plVar1 = (longlong *)param_2[1], plVar1 == (longlong *)0x0)) {
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_38);
      if (local_38 == (longlong *)0x0) {
        fVar3 = 0.0;
        fVar2 = 0.0;
      }
      else {
        fVar2 = (float)(**(code **)(*local_38 + 0x2b8))();
        fVar2 = fVar2 * local_28._4_4_;
        fVar3 = (float)(**(code **)(*local_38 + 0x2b0))();
        fVar3 = fVar3 * (float)local_28;
      }
      *(float *)(param_1 + 0x10c) = fVar2;
      *(float *)(param_1 + 0x108) = fVar3;
    }
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_30 = 1;
    local_28 = 0;
    local_20 = 0;
    local_38 = (longlong *)(param_1 + 0x100);
    FUN_141956fc0(*(longlong *)(param_1 + 0x1c8),&local_38);
    FUN_1418475e0(*(undefined8 *)(param_1 + 0x1c8),5);
  }
  return;
}



// FUNCTION 14212fce0 SetBrush body=92 status=ok
// SIG undefined SetBrush(void)

void UBorder::SetBrush(longlong param_1)

{
  longlong local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FSlateBrush::SetResourceObject(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x250) != 0) {
    local_18 = 0;
    local_10 = 0;
    local_20 = 1;
    local_28 = param_1 + 0x150;
    FUN_1419a06c0(*(longlong *)(param_1 + 0x250),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  return;
}



// FUNCTION 14212fd40 SetBrush body=96 status=ok
// SIG undefined SetBrush(void)

void UImage::SetBrush(longlong param_1)

{
  longlong local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FSlateBrush::SetResourceObject(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_18 = 0;
    local_10 = 0;
    local_20 = 1;
    local_28 = param_1 + 0x100;
    FUN_141956fc0(*(longlong *)(param_1 + 0x1c8),&local_28);
    FUN_1418475e0(*(undefined8 *)(param_1 + 0x1c8),5);
  }
  return;
}



// FUNCTION 14212fda0 FUN_14212fda0 body=236 status=ok
// SIG undefined FUN_14212fda0(void)

void FUN_14212fda0(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FSlateBrush::SetResourceObject(param_1 + 0x100);
  if (param_2 != 0) {
    *(byte *)(param_2 + 0xc4) = *(byte *)(param_2 + 0xc4) | 0x10;
  }
  iVar1 = 0;
  if (param_3 != '\0') {
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    else {
      if (*(int **)(param_2 + 0xd8) != (int *)0x0) {
        iVar1 = **(int **)(param_2 + 0xd8);
      }
      *(float *)(param_1 + 0x108) = (float)iVar1;
      if (*(longlong *)(param_2 + 0xd8) == 0) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      else {
        *(float *)(param_1 + 0x10c) = (float)*(int *)(*(longlong *)(param_2 + 0xd8) + 4);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_18 = 0;
    local_10 = 0;
    local_20 = 1;
    local_28 = param_1 + 0x100;
    FUN_141956fc0(*(longlong *)(param_1 + 0x1c8),&local_28);
    FUN_1418475e0(*(undefined8 *)(param_1 + 0x1c8),5);
  }
  return;
}



// FUNCTION 14212fe90 FUN_14212fe90 body=170 status=ok
// SIG undefined FUN_14212fe90(void)

void FUN_14212fe90(longlong param_1,longlong param_2,char param_3)

{
  longlong local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FSlateBrush::SetResourceObject(param_1 + 0x100);
  if ((param_3 != '\0') && (param_2 != 0)) {
    *(float *)(param_1 + 0x108) = (float)*(int *)(param_2 + 0xb8);
    *(float *)(param_1 + 0x10c) = (float)*(int *)(param_2 + 0xbc);
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_18 = 0;
    local_10 = 0;
    local_20 = 1;
    local_28 = param_1 + 0x100;
    FUN_141956fc0(*(longlong *)(param_1 + 0x1c8),&local_28);
    FUN_1418475e0(*(undefined8 *)(param_1 + 0x1c8),5);
  }
  return;
}



// FUNCTION 14212ff40 SetResourceObject body=5 status=ok
// SIG undefined SetResourceObject(void)

void FSlateBrush::SetResourceObject(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uStack_18;
  longlong *plStack_10;
  
  if (*(longlong *)(param_1 + 0x48) != param_2) {
    *(longlong *)(param_1 + 0x48) = param_2;
    plStack_10 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x70) != &uStack_18) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      uStack_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&plStack_10);
      plVar5 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_10 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_10 + 8))(plStack_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14212ff50 SetBrushSize body=91 status=ok
// SIG undefined SetBrushSize(void)

void UImage::SetBrushSize(longlong param_1,undefined8 param_2)

{
  longlong local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined8 *)(param_1 + 0x108) = param_2;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_28 = param_1 + 0x100;
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FUN_141956fc0(*(longlong *)(param_1 + 0x1c8),&local_28);
    FUN_1418475e0(*(undefined8 *)(param_1 + 0x1c8),5);
    return;
  }
  return;
}



// FUNCTION 14212ffb0 FUN_14212ffb0 body=158 status=ok
// SIG undefined FUN_14212ffb0(void)

void FUN_14212ffb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_140692440(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_28 = param_1 + 0x100;
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FUN_141956fc0(*(longlong *)(param_1 + 0x1c8),&local_28);
    FUN_1418475e0(*(undefined8 *)(param_1 + 0x1c8),6);
  }
  plVar4 = *(longlong **)(param_2 + 0x20);
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



// FUNCTION 142130050 FUN_142130050 body=23 status=ok
// SIG undefined FUN_142130050(void)

void FUN_142130050(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x118) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x46b) = param_2;
  *(undefined1 *)(lVar1 + 0x468) = 1;
  return;
}



// FUNCTION 142130070 SetCheckedState body=309 status=ok
// SIG undefined SetCheckedState(void)

void UCheckBox::SetCheckedState(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res8;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [24];
  
  *(undefined1 *)(param_1 + 0x118) = param_2;
  if (*(longlong *)(param_1 + 0x758) != 0) {
    local_res8 = 0;
    if (((*(longlong *)(param_1 + 0x128) == 0) ||
        (lVar1 = FWeakObjectPtr::Get(param_1 + 0x120), lVar1 == 0)) ||
       (lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x128)), lVar1 == 0)) {
      local_58 = *(undefined1 *)(param_1 + 0x118);
      puVar3 = &local_40;
      local_3f = 1;
      iVar4 = 2;
      local_38 = 0;
      local_30 = 0;
      iVar5 = 0;
      local_40 = local_58;
    }
    else {
      local_res8 = *(undefined8 *)(param_1 + 0x128);
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x120);
      puVar3 = (undefined1 *)FUN_1420c48a0(local_28,uVar2,&local_res8);
      local_58 = *puVar3;
      iVar5 = 1;
      iVar4 = 0;
    }
    local_57 = puVar3[1];
    local_50 = 0;
    local_48 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_50,puVar3 + 8);
    FUN_141957130(*(undefined8 *)(param_1 + 0x758),&local_58);
    if (iVar4 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
    }
    if (iVar5 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_20);
    }
    return;
  }
  return;
}



// FUNCTION 1421301b0 SetClickMethod body=27 status=ok
// SIG undefined SetClickMethod(void)

void UButton::SetClickMethod(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3b8) = param_2;
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_141956250(*(longlong *)(param_1 + 0x410),param_2);
    return;
  }
  return;
}



// FUNCTION 1421301d0 FUN_1421301d0 body=145 status=ok
// SIG undefined FUN_1421301d0(void)

void FUN_1421301d0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  *(char *)(param_1 + 0xb6) = param_2;
  FUN_1420f9830(param_1,&local_18);
  if ((local_18 != (longlong *)0x0) && (*(char *)((longlong)local_18 + 0x1a) != param_2)) {
    *(char *)((longlong)local_18 + 0x1a) = param_2;
    (**(code **)(*local_18 + 0x1f0))(local_18);
    FUN_1418475e0(local_18,1);
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



// FUNCTION 142130270 FUN_142130270 body=93 status=ok
// SIG undefined FUN_142130270(void)

void FUN_142130270(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x398) = uVar2;
  *(undefined4 *)(param_1 + 0x39c) = uVar3;
  *(undefined4 *)(param_1 + 0x3a0) = uVar4;
  *(undefined4 *)(param_1 + 0x3a4) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x410);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x298) = 1;
    *(undefined4 *)(lVar1 + 0x288) = uVar2;
    *(undefined4 *)(lVar1 + 0x28c) = uVar3;
    *(undefined4 *)(lVar1 + 0x290) = uVar4;
    *(undefined4 *)(lVar1 + 0x294) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x2a0,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 1421302d0 SetColorAndOpacity body=46 status=ok
// SIG undefined SetColorAndOpacity(void)

void UImage::SetColorAndOpacity(longlong param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  *(undefined4 *)(param_1 + 0x198) = local_18;
  *(undefined4 *)(param_1 + 0x19c) = uStack_14;
  *(undefined4 *)(param_1 + 0x1a0) = uStack_10;
  *(undefined4 *)(param_1 + 0x1a4) = uStack_c;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1419562d0(*(longlong *)(param_1 + 0x1c8),&local_18);
  }
  return;
}



// FUNCTION 142130300 FUN_142130300 body=118 status=ok
// SIG undefined FUN_142130300(void)

void FUN_142130300(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_140692440(param_1 + 0x1a8);
  if (*(longlong *)(param_1 + 0x350) != 0) {
    SRichTextBlock::SetTextStyle(*(longlong *)(param_1 + 0x350),param_1 + 0x150);
  }
  plVar4 = *(longlong **)(param_2 + 0x20);
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



// FUNCTION 142130380 FUN_142130380 body=262 status=ok
// SIG undefined FUN_142130380(void)

void FUN_142130380(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_140692440(param_1 + 0x148);
  lVar5 = *(longlong *)(param_1 + 0x200);
  if (lVar5 != 0) {
    local_38 = *(undefined1 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_30 = *(undefined8 *)(param_2 + 6);
    local_28 = *(longlong **)(param_2 + 8);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      lVar5 = *(longlong *)(param_1 + 0x200);
    }
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FUN_1419bbcf0(lVar5,&local_48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    plVar4 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_28)(local_28);
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
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 142130490 FUN_142130490 body=226 status=ok
// SIG undefined FUN_142130490(void)

void FUN_142130490(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(param_1 + 0x108) = *param_2;
  *(undefined4 *)(param_1 + 0x10c) = uVar5;
  *(undefined4 *)(param_1 + 0x110) = uVar6;
  *(undefined4 *)(param_1 + 0x114) = uVar7;
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar3[1];
    bVar10 = iVar9 == 0;
    if (bVar10) {
      *(int *)(plVar3 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (!bVar10) {
      while( true ) {
        LOCK();
        bVar10 = iVar9 == (int)plVar3[1];
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar9 + 1;
        }
        UNLOCK();
        if (bVar10) break;
        LOCK();
        iVar9 = (int)plVar3[1];
        bVar10 = iVar9 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar10) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_1 + 0xe0);
        if (lVar4 != 0) {
          uVar5 = *(undefined4 *)(param_1 + 0x108);
          uVar6 = *(undefined4 *)(param_1 + 0x10c);
          uVar7 = *(undefined4 *)(param_1 + 0x110);
          uVar8 = *(undefined4 *)(param_1 + 0x114);
          local_20 = 0;
          local_18 = 0;
          *(undefined4 *)(lVar4 + 0x288) = uVar5;
          *(undefined4 *)(lVar4 + 0x28c) = uVar6;
          *(undefined4 *)(lVar4 + 0x290) = uVar7;
          *(undefined4 *)(lVar4 + 0x294) = uVar8;
          *(undefined1 *)(lVar4 + 0x298) = 1;
          TBaseDelegate<FSlateBrush_const_*>::operator=
                    (lVar4 + 0x2a0,&local_20,param_1,param_4,uVar5,uVar7,1);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142130580 FUN_142130580 body=210 status=ok
// SIG undefined FUN_142130580(void)

void FUN_142130580(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  *(int *)(param_1 + 0x54) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 != 0) {
    plVar6 = (longlong *)0x0;
    if (param_2 < 1) {
      param_2 = 0;
    }
    *(int *)(lVar2 + 0x60) = param_2;
    if ((*(longlong *)(lVar2 + 0x50) != 0) && (*(longlong *)(lVar2 + 0x58) != 0)) {
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x58) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        plVar3 = *(longlong **)(lVar2 + 0x58);
        plVar5 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(plVar3 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (plVar5 = plVar6, !bVar7) {
            LOCK();
            bVar7 = iVar4 == (int)plVar3[1];
            if (bVar7) {
              *(int *)(plVar3 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar7) {
              plVar5 = plVar3;
              if (plVar3 != (longlong *)0x0) {
                plVar6 = *(longlong **)(lVar2 + 0x50);
              }
              break;
            }
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar7 = iVar4 == 0;
            if (bVar7) {
              *(int *)(plVar3 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
        }
        SGridPanel::NotifySlotChanged(plVar6);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          lVar2 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
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
      }
    }
  }
  return;
}



// FUNCTION 142130660 SetColumn body=16 status=ok
// SIG undefined SetColumn(void)

void UUniformGridSlot::SetColumn(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x28) = param_2;
  }
  return;
}



// FUNCTION 142130670 SetColumnFill body=220 status=ok
// SIG undefined SetColumnFill(void)

void UGridPanel::SetColumnFill(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  iVar1 = *(int *)(param_1 + 0x120);
  while (iVar1 <= param_2) {
    iVar1 = *(int *)(param_1 + 0x120);
    *(int *)(param_1 + 0x120) = iVar1 + 1;
    if (*(int *)(param_1 + 0x124) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x118,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 4) = 0;
    iVar1 = *(int *)(param_1 + 0x120);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x118) + (longlong)param_2 * 4) = param_3;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_34 = 1;
    local_30 = 0;
    local_28 = 0;
    local_38 = param_3;
    SGridPanel::SetColumnFill(*(longlong *)(param_1 + 0x138),param_2,&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_30);
  }
  return;
}



// FUNCTION 142130750 FUN_142130750 body=17 status=ok
// SIG undefined FUN_142130750(void)

longlong FUN_142130750(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong in_RAX;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *(int *)(param_1 + 0x58) = param_2;
  lVar3 = *(longlong *)(param_1 + 0x68);
  if (lVar3 == 0) {
    return in_RAX;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(int *)(lVar3 + 100) = param_2;
  if ((*(longlong *)(lVar3 + 0x50) != 0) && (*(longlong *)(lVar3 + 0x58) != 0)) {
    plVar7 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(lVar3 + 0x58) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = *(longlong **)(lVar3 + 0x58);
      plVar6 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar6 = plVar7, !bVar8) {
          LOCK();
          bVar8 = iVar5 == (int)plVar2[1];
          if (bVar8) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar8) {
            plVar6 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar7 = *(longlong **)(lVar3 + 0x50);
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      SGridPanel::NotifySlotChanged(plVar7,lVar3);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        return lVar3;
      }
      return lVar3;
    }
  }
  return lVar3;
}



// FUNCTION 142130770 FUN_142130770 body=230 status=ok
// SIG undefined FUN_142130770(void)

void FUN_142130770(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_20 = (longlong *)param_2[1];
  local_28 = *param_2;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 1000) != &local_28) {
    *(undefined8 *)(param_1 + 1000) = local_28;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3f0,&local_20);
  }
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
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_14185a760(*(undefined8 *)(param_1 + 0x418),&local_18);
  return;
}



// FUNCTION 142130860 SetContent body=42 status=ok
// SIG undefined SetContent(void)

void UContentWidget::SetContent(undefined8 param_1,undefined8 param_2)

{
  FUN_1420e74a0();
  FUN_1420def40(param_1,param_2);
  return;
}



// FUNCTION 142130890 FUN_142130890 body=93 status=ok
// SIG undefined FUN_142130890(void)

void FUN_142130890(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  *(undefined4 *)(param_1 + 0x120) = uVar3;
  *(undefined4 *)(param_1 + 0x124) = uVar4;
  *(undefined4 *)(param_1 + 0x128) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x250);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x298) = 1;
    *(undefined4 *)(lVar1 + 0x288) = uVar2;
    *(undefined4 *)(lVar1 + 0x28c) = uVar3;
    *(undefined4 *)(lVar1 + 0x290) = uVar4;
    *(undefined4 *)(lVar1 + 0x294) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x2a0,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 1421308f0 SetContentForSlot body=116 status=ok
// SIG undefined SetContentForSlot(void)

void UExpandableArea::SetContentForSlot(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  if (param_2 == DAT_146ae7858) {
    plVar1 = *(longlong **)(param_1 + 0x210);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x278))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x210) = param_3;
    return;
  }
  if (param_2 == DAT_146ae78d0) {
    plVar1 = *(longlong **)(param_1 + 0x218);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x278))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x218) = param_3;
  }
  return;
}



// FUNCTION 142130970 FUN_142130970 body=484 status=ok
// SIG undefined FUN_142130970(void)

void FUN_142130970(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong local_res8;
  longlong local_res10 [2];
  longlong local_res20;
  undefined8 local_48;
  undefined8 uStack_40;
  code *local_38;
  undefined8 *puStack_30;
  
  iVar8 = 0;
  local_res10[0] = param_2;
  if (0 < *(int *)(param_1 + 0x98)) {
    plVar5 = *(longlong **)(param_1 + 0x90);
    do {
      if (*plVar5 == param_2) {
        if (param_3 == 0) {
          plVar5 = (longlong *)(param_1 + 0x90);
          iVar7 = *(int *)(param_1 + 0x98);
          iVar4 = (iVar7 - iVar8) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar8 * 0x10 + *plVar5),
                       (void *)((longlong)(iVar8 + 1) * 0x10 + *plVar5),(longlong)iVar4 << 4);
            iVar7 = *(int *)(param_1 + 0x98);
          }
          *(int *)(param_1 + 0x98) = iVar7 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar5);
        }
        else {
          plVar5[1] = param_3;
        }
        goto LAB_142130a0e;
      }
      iVar8 = iVar8 + 1;
      plVar5 = plVar5 + 2;
    } while (iVar8 < *(int *)(param_1 + 0x98));
  }
  if (param_3 != 0) {
    iVar8 = *(int *)(param_1 + 0x98);
    *(int *)(param_1 + 0x98) = iVar8 + 1;
    local_48 = (longlong *)param_2;
    uStack_40 = (longlong *)param_3;
    if (*(int *)(param_1 + 0x9c) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x90,iVar8);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar8 * 0x10);
    *puVar1 = (undefined4)local_48;
    puVar1[1] = local_48._4_4_;
    puVar1[2] = (undefined4)uStack_40;
    puVar1[3] = uStack_40._4_4_;
  }
LAB_142130a0e:
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (lVar2 != 0) {
    local_48 = local_res10;
    local_res8 = 0;
    uStack_40 = &local_res8;
    puStack_30 = &local_48;
    local_38 = FUN_1420e67b0;
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      local_res20 = *(longlong *)(lVar2 + 0x28);
      FUN_1420e67b0(&local_48,&local_res20);
      FUN_1420f6990(*(undefined8 *)(lVar2 + 0x28),&local_38,0);
    }
    lVar2 = local_res8;
    if (local_res8 != 0) {
      lVar6 = UNamedSlot::GetPrivateStaticClass();
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
        FUN_1420e74a0(lVar2);
        if (param_3 != 0) {
          FUN_1420def40(lVar2,param_3);
        }
      }
    }
  }
  return;
}



// FUNCTION 142130b60 SetContentWidget body=165 status=ok
// SIG undefined SetContentWidget(void)

void FDelegateToolTip::SetContentWidget(longlong param_1,undefined8 *param_2)

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
  if ((undefined8 *)(param_1 + 0x18) != &local_18) {
    *(undefined8 *)(param_1 + 0x18) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_10);
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



// FUNCTION 142130c10 FUN_142130c10 body=201 status=ok
// SIG undefined FUN_142130c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142130c10(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  uint local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 8;
  *(undefined1 *)(param_1 + 0xb5) = param_2;
  FUN_1420f9830(param_1,&local_48);
  if (local_48 != 0) {
    local_38 = (uint)*(byte *)(param_1 + 0xb5);
    local_28 = 0;
    local_20 = 0;
    local_34 = 1;
    local_30 = 1;
    FUN_14185a850(local_48,&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 142130ce0 FUN_142130ce0 body=12 status=ok
// SIG undefined FUN_142130ce0(void)

void FUN_142130ce0(longlong param_1)

{
  FUN_140729f20(param_1 + 0x390);
  return;
}



// FUNCTION 142130cf0 SetDesiredSizeInViewport body=44 status=ok
// SIG undefined SetDesiredSizeInViewport(void)

void UUserWidget::SetDesiredSizeInViewport(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  local_res8 = (undefined4)param_2;
  uStackX_c = (undefined4)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0x1d0) = local_res8;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = uStackX_c;
  return;
}



// FUNCTION 142130d20 SetDesiredSizeScale body=69 status=ok
// SIG undefined SetDesiredSizeScale(void)

void UBorder::SetDesiredSizeScale(longlong param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined8 *)(param_1 + 0x208) = param_2;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    local_18 = 0;
    local_10 = 0;
    local_20 = 1;
    local_28 = param_2;
    FUN_1419a1c40(*(longlong *)(param_1 + 0x250),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  return;
}



// FUNCTION 142130d70 FUN_142130d70 body=91 status=ok
// SIG undefined FUN_142130d70(void)

void FUN_142130d70(longlong param_1,undefined8 param_2)

{
  float local_res8;
  float fStackX_c;
  
  local_res8 = (float)param_2;
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  if (((int)local_res8 == *(int *)(param_1 + 0x738)) &&
     ((int)fStackX_c == *(int *)(param_1 + 0x73c))) {
    return;
  }
  *(int *)(param_1 + 0x738) = (int)local_res8;
  *(int *)(param_1 + 0x73c) = (int)fStackX_c;
  FUN_1423424e0(param_1);
  FUN_142142570(param_1,1);
  FUN_14234b040(param_1);
  return;
}



// FUNCTION 142130dd0 FUN_142130dd0 body=174 status=ok
// SIG undefined FUN_142130dd0(void)

void FUN_142130dd0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x430) + 0x28) = 0;
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x430) + 0x20);
  }
  else {
    lVar2 = FUN_1429ba110();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      uVar3 = GetTransientPackage();
      param_2 = UMaterialInstanceDynamic::Create(param_2,uVar3);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x430) + 0x28) = param_2;
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x430) + 0x28);
  }
  FSlateBrush::SetResourceObject(param_1 + 0x358,uVar3);
  FUN_142144830(param_1);
  return;
}



// FUNCTION 142130e80 FUN_142130e80 body=24 status=ok
// SIG undefined FUN_142130e80(void)

void FUN_142130e80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *(longlong *)(param_1 + 0x128) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x138);
  if (lVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
    *(undefined8 *)(*(longlong *)(lVar1 + 0x430) + 0x28) = 0;
    uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 0x430) + 0x20);
  }
  else {
    lVar3 = FUN_1429ba110();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      uVar4 = GetTransientPackage();
      param_2 = UMaterialInstanceDynamic::Create(param_2,uVar4);
    }
    *(longlong *)(*(longlong *)(lVar1 + 0x430) + 0x28) = param_2;
    uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 0x430) + 0x28);
  }
  FSlateBrush::SetResourceObject(lVar1 + 0x358,uVar4);
  FUN_142144830(lVar1);
  return;
}



// FUNCTION 142130ea0 SetEntryHeight body=84 status=ok
// SIG undefined SetEntryHeight(void)

void UTileView::SetEntryHeight(longlong param_1,float param_2)

{
  float local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(float *)(param_1 + 0x318) = param_2;
  if (*(longlong *)(param_1 + 0x328) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = *(float *)(param_1 + 0x2a4) * 0.5 + param_2;
    FUN_1419bc400(*(longlong *)(param_1 + 0x328),&local_28);
  }
  return;
}



// FUNCTION 142130f00 FUN_142130f00 body=961 status=ok
// SIG undefined FUN_142130f00(void)

void FUN_142130f00(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_80;
  undefined4 local_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  *(undefined8 *)(param_1 + 0x104) = *param_2;
  plVar3 = *(longlong **)(param_1 + 0x130);
  if (plVar3 != (longlong *)0x0) {
    cVar2 = *(char *)(param_1 + 0x100);
    if (cVar2 == '\x02') {
      plVar4 = *(longlong **)(param_1 + 0x138);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      SWrapBox::SetInnerSlotPadding(plVar3,*(undefined8 *)(param_1 + 0x104));
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*plVar3 + 0x170))();
      uVar11 = 0;
      if (cVar2 == '\x03') {
        iVar5 = (**(code **)*puVar7)();
        uVar12 = uVar11;
        uVar17 = uVar11;
        if (0 < iVar5) {
          do {
            iVar5 = (int)uVar12;
            fStack_a0 = 0.0;
            local_a8 = 0.0;
            if (*(int *)(param_1 + 0x118) < 1) {
              fVar22 = *(float *)(param_1 + 0x104) * (float)iVar5;
              if (*(float *)(param_1 + 0x104) < 0.0) {
                fStack_a0 = -fVar22;
                fVar22 = local_a8;
              }
              local_a8 = fVar22;
              fVar22 = *(float *)(param_1 + 0x108) * (float)iVar5;
              bVar19 = *(float *)(param_1 + 0x108) < 0.0;
            }
            else {
              fVar20 = 0.0;
              fVar22 = 0.0;
              uVar12 = uVar11;
              if (3 < iVar5) {
                iVar6 = *(int *)(param_1 + 0x118);
                iVar18 = 2;
                lVar9 = *(longlong *)(param_1 + 0x110);
                do {
                  iVar15 = (int)uVar12;
                  uVar16 = iVar15 + 4;
                  uVar12 = (ulonglong)uVar16;
                  lVar14 = (longlong)(iVar15 % iVar6);
                  lVar13 = (longlong)((iVar18 + -1) % iVar6);
                  iVar10 = iVar18 % iVar6;
                  iVar15 = iVar18 + 1;
                  iVar18 = iVar18 + 4;
                  lVar8 = (longlong)(iVar15 % iVar6);
                  fVar20 = *(float *)(lVar9 + lVar14 * 8) + fVar20 + *(float *)(lVar9 + lVar13 * 8)
                           + *(float *)(lVar9 + (longlong)iVar10 * 8) +
                           *(float *)(lVar9 + lVar8 * 8);
                  fVar22 = fVar22 + *(float *)(lVar9 + 4 + lVar14 * 8) +
                           *(float *)(lVar9 + 4 + lVar13 * 8) +
                           *(float *)(lVar9 + 4 + (longlong)iVar10 * 8) +
                           *(float *)(lVar9 + 4 + lVar8 * 8);
                } while ((int)uVar16 < iVar5 + -3);
              }
              if ((int)uVar12 < iVar5) {
                do {
                  iVar6 = (int)uVar12;
                  uVar16 = iVar6 + 1;
                  uVar12 = (ulonglong)uVar16;
                  lVar9 = (longlong)(iVar6 % *(int *)(param_1 + 0x118));
                  fVar20 = fVar20 + *(float *)(*(longlong *)(param_1 + 0x110) + lVar9 * 8);
                  fVar22 = fVar22 + *(float *)(*(longlong *)(param_1 + 0x110) + 4 + lVar9 * 8);
                } while ((int)uVar16 < iVar5);
              }
              if (fVar20 < 0.0) {
                fStack_a0 = -fVar20;
                bVar19 = fVar22 < 0.0;
              }
              else {
                bVar19 = fVar22 < 0.0;
                local_a8 = fVar20;
              }
            }
            if (bVar19) {
              fStack_a4 = 0.0;
              fStack_9c = -fVar22;
            }
            else {
              fStack_9c = 0.0;
              fStack_a4 = fVar22;
            }
            local_60 = 1;
            lVar9 = *(longlong *)(puVar7[2] + uVar17);
            local_58 = 0;
            *(float *)(lVar9 + 0x28) = local_a8;
            *(float *)(lVar9 + 0x2c) = fStack_a4;
            *(float *)(lVar9 + 0x30) = fStack_a0;
            *(float *)(lVar9 + 0x34) = fStack_9c;
            *(undefined1 *)(lVar9 + 0x38) = 1;
            local_50 = 0;
            local_70 = local_a8;
            fStack_6c = fStack_a4;
            fStack_68 = fStack_a0;
            fStack_64 = fStack_9c;
            TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x40,&local_58);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
            iVar6 = (**(code **)*puVar7)(puVar7);
            uVar12 = (ulonglong)(iVar5 + 1U);
            uVar17 = uVar17 + 8;
          } while ((int)(iVar5 + 1U) < iVar6);
        }
      }
      else {
        iVar5 = (**(code **)*puVar7)(puVar7);
        uVar12 = uVar11;
        if (0 < iVar5) {
          do {
            iVar5 = (int)uVar11;
            if ((cVar2 == '\0') || (iVar5 == 0)) {
              uVar23 = 0;
            }
            else {
              uVar23 = *(undefined4 *)(param_1 + 0x108);
            }
            if ((cVar2 == '\0') && (iVar5 != 0)) {
              uVar21 = *(undefined4 *)(param_1 + 0x104);
            }
            else {
              uVar21 = 0;
            }
            lVar9 = *(longlong *)(uVar12 + puVar7[2]);
            local_80 = 0;
            local_78 = 0;
            *(undefined4 *)(lVar9 + 0x48) = uVar21;
            *(undefined4 *)(lVar9 + 0x4c) = uVar23;
            *(undefined4 *)(lVar9 + 0x50) = 0;
            *(undefined4 *)(lVar9 + 0x54) = 0;
            *(undefined1 *)(lVar9 + 0x58) = 1;
            TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x60,&local_80);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_80);
            uVar11 = (ulonglong)(iVar5 + 1U);
            iVar6 = (**(code **)*puVar7)(puVar7);
            uVar12 = uVar12 + 8;
          } while ((int)(iVar5 + 1U) < iVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 1421312d0 SetEntryWidth body=84 status=ok
// SIG undefined SetEntryWidth(void)

void UTileView::SetEntryWidth(longlong param_1,float param_2)

{
  float local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(float *)(param_1 + 0x31c) = param_2;
  if (*(longlong *)(param_1 + 0x328) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = *(float *)(param_1 + 0x2a4) * 0.5 + param_2;
    FUN_1419bc490(*(longlong *)(param_1 + 0x328),&local_28);
  }
  return;
}



// FUNCTION 142131330 SetError body=97 status=ok
// SIG undefined SetError(void)

void UEditableTextBox::SetError(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xa10) != 0) {
    SEditableTextBox::SetError();
  }
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 1421313a0 SetError body=97 status=ok
// SIG undefined SetError(void)

void UMultiLineEditableTextBox::SetError(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xbe0) != 0) {
    SMultiLineEditableTextBox::SetError();
  }
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 142131410 FUN_142131410 body=211 status=ok
// SIG undefined FUN_142131410(void)

void FUN_142131410(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  plVar3 = (longlong *)(param_1 + 0x390);
  if (plVar3 != param_2) {
    lVar6 = *plVar3;
    iVar7 = *(int *)(param_1 + 0x398);
    if (iVar7 != 0) {
      plVar8 = (longlong *)(lVar6 + 0x10);
      do {
        plVar5 = (longlong *)*plVar8;
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
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar8 = plVar8 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      lVar6 = *plVar3;
    }
    if (lVar6 != 0) {
      FMemory::Free();
    }
    *plVar3 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 0x398) = (int)param_2[1];
    *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_2);
  return;
}



// FUNCTION 1421314f0 FUN_1421314f0 body=208 status=ok
// SIG undefined FUN_1421314f0(void)

void FUN_1421314f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  undefined4 local_c;
  
  lVar2 = *(longlong *)(param_1 + 0x650);
  if (lVar2 != 0) {
    iVar3 = (int)param_2[1];
    lVar4 = *param_2;
    local_18 = 0;
    local_10 = iVar3;
    if (iVar3 == 0) {
      local_c = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_18,iVar3,0);
      lVar4 = lVar4 - local_18;
      puVar1 = (undefined8 *)(local_18 + 8);
      do {
        puVar1[-1] = *(undefined8 *)(lVar4 + -8 + (longlong)puVar1);
        *puVar1 = *(undefined8 *)(lVar4 + (longlong)puVar1);
        lVar2 = *(longlong *)(lVar4 + 8 + (longlong)puVar1);
        puVar1[1] = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        puVar1 = puVar1 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      lVar2 = *(longlong *)(param_1 + 0x650);
    }
    FUN_142131410(lVar2,&local_18);
  }
  TArray<FKey,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x620,param_2);
  return;
}



// FUNCTION 1421315c0 SetFillColorAndOpacity body=76 status=ok
// SIG undefined SetFillColorAndOpacity(void)

void UProgressBar::SetFillColorAndOpacity(longlong param_1,undefined4 *param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  *(undefined4 *)(param_1 + 0x2e0) = local_48;
  *(undefined4 *)(param_1 + 0x2e4) = uStack_44;
  *(undefined4 *)(param_1 + 0x2e8) = uStack_40;
  *(undefined4 *)(param_1 + 0x2ec) = uStack_3c;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    local_38 = 0;
    local_18 = 0;
    local_10 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 1;
    FUN_1419a2860(*(longlong *)(param_1 + 0x300),&local_48);
  }
  return;
}



// FUNCTION 142131610 SetFillEmptySpace body=16 status=ok
// SIG undefined SetFillEmptySpace(void)

void UWrapBoxSlot::SetFillEmptySpace(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x48) = param_2;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x58) + 0x58) = param_2;
  }
  return;
}



// FUNCTION 142131620 SetFillSpanWhenLessThan body=134 status=ok
// SIG undefined SetFillSpanWhenLessThan(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UWrapBoxSlot::SetFillSpanWhenLessThan(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  float local_18 [6];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  *(float *)(param_1 + 0x4c) = param_2;
  if (lVar1 != 0) {
    fVar2 = param_2;
    if (param_2 == 0.0) {
      fVar2 = local_18[0];
    }
    if (local_18 != (float *)(lVar1 + 0x50)) {
      if (*(char *)(lVar1 + 0x54) != '\0') {
        *(undefined1 *)(lVar1 + 0x54) = 0;
      }
      if (param_2 != 0.0) {
        *(float *)(lVar1 + 0x50) = fVar2;
        *(undefined1 *)(lVar1 + 0x54) = 1;
      }
    }
  }
  return;
}



// FUNCTION 1421316c0 FUN_1421316c0 body=328 status=ok
// SIG undefined FUN_1421316c0(void)

void FUN_1421316c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_1417f9360((undefined8 *)(param_1 + 0x180));
  lVar5 = *(longlong *)(param_1 + 0x200);
  if (lVar5 != 0) {
    local_78 = *(undefined8 *)(param_1 + 0x180);
    local_68 = *(undefined4 *)(param_1 + 400);
    uStack_64 = *(undefined4 *)(param_1 + 0x194);
    uStack_60 = *(undefined4 *)(param_1 + 0x198);
    uStack_5c = *(undefined4 *)(param_1 + 0x19c);
    local_70 = *(undefined8 *)(param_1 + 0x188);
    local_58 = *(undefined4 *)(param_1 + 0x1a0);
    uStack_54 = *(undefined4 *)(param_1 + 0x1a4);
    uStack_50 = *(undefined4 *)(param_1 + 0x1a8);
    uStack_4c = *(undefined4 *)(param_1 + 0x1ac);
    local_48 = *(undefined8 *)(param_1 + 0x1b0);
    local_40 = *(longlong **)(param_1 + 0x1b8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      lVar5 = *(longlong *)(param_1 + 0x200);
    }
    local_38 = *(undefined8 *)(param_1 + 0x1c0);
    local_30 = *(undefined4 *)(param_1 + 0x1c8);
    local_2c = *(undefined1 *)(param_1 + 0x1cc);
    local_20 = 0;
    local_18 = 0;
    local_28 = 1;
    FUN_1419bc210(lVar5,&local_78);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    plVar4 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
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
  plVar4 = *(longlong **)(param_2 + 0x38);
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



// FUNCTION 142131810 FUN_142131810 body=327 status=ok
// SIG undefined FUN_142131810(void)

void FUN_142131810(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_140692440(param_1 + 0x470);
  lVar5 = *(longlong *)(param_1 + 0x4f0);
  if (lVar5 != 0) {
    local_38 = *(undefined1 *)(param_1 + 0x480);
    local_48 = *(undefined4 *)(param_1 + 0x470);
    uStack_44 = *(undefined4 *)(param_1 + 0x474);
    uStack_40 = *(undefined4 *)(param_1 + 0x478);
    uStack_3c = *(undefined4 *)(param_1 + 0x47c);
    local_30 = *(undefined8 *)(param_1 + 0x488);
    local_28 = *(longlong **)(param_1 + 0x490);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      lVar5 = *(longlong *)(param_1 + 0x4f0);
    }
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FUN_140692440(lVar5 + 0x2b0,&local_48);
    *(undefined1 *)(lVar5 + 0x2d8) = local_20;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar5 + 0x2e0,&local_18);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    plVar4 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_2 + 0x20);
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



// FUNCTION 142131960 FUN_142131960 body=422 status=ok
// SIG undefined FUN_142131960(void)

void FUN_142131960(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FUN_140692440((undefined4 *)(param_1 + 0x128));
  plVar4 = *(longlong **)(param_1 + 0xe8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar7 = iVar6 == 0;
    if (bVar7) {
      *(int *)(plVar4 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar6 == (int)plVar4[1];
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar4 != (longlong *)0x0) {
          lVar5 = *(longlong *)(param_1 + 0xe0);
          if (lVar5 != 0) {
            local_48 = *(undefined1 *)(param_1 + 0x138);
            local_58 = *(undefined4 *)(param_1 + 0x128);
            uStack_54 = *(undefined4 *)(param_1 + 300);
            uStack_50 = *(undefined4 *)(param_1 + 0x130);
            uStack_4c = *(undefined4 *)(param_1 + 0x134);
            local_40 = *(undefined8 *)(param_1 + 0x140);
            local_38 = *(longlong **)(param_1 + 0x148);
            if (local_38 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_38 + 1) = (int)local_38[1] + 1;
              UNLOCK();
            }
            local_28 = 0;
            local_20 = 0;
            local_30 = 1;
            FUN_140692440(lVar5 + 0x2b0,&local_58);
            *(undefined1 *)(lVar5 + 0x2d8) = local_30;
            TBaseDelegate<FSlateBrush_const_*>::operator=(lVar5 + 0x2e0,&local_28);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
            plVar2 = local_38;
            if (local_38 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_38 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_38)(local_38);
                LOCK();
                piVar3 = (int *)((longlong)plVar2 + 0xc);
                iVar6 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*local_38 + 8))(local_38,1);
                }
              }
            }
          }
          LOCK();
          plVar2 = plVar4 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            iVar6 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar7 = iVar6 == 0;
      if (bVar7) {
        *(int *)(plVar4 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  plVar4 = *(longlong **)(param_2 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 142131b10 SetHardwareCursor body=127 status=ok
// SIG undefined SetHardwareCursor(void)

undefined1
UWidgetBlueprintLibrary::SetHardwareCursor
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (((lVar3 != 0) && (cVar1 = UWorld::IsGameWorld(lVar3), cVar1 != '\0')) &&
     (lVar3 = UWorld::GetGameViewport(lVar3), lVar3 != 0)) {
    uVar2 = FUN_14248e520(lVar3,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142131b90 SetHeightOverride body=68 status=ok
// SIG undefined SetHeightOverride(void)

void USizeBox::SetHeightOverride(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 2;
  *(undefined4 *)(param_1 + 0x120) = param_2;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    FUN_1419a29a0(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 142131be0 FUN_142131be0 body=238 status=ok
// SIG undefined FUN_142131be0(void)

void FUN_142131be0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FText::operator=(param_1 + 0x128);
  if (*(longlong *)(param_1 + 0x438) != 0) {
    FText::FText(local_38,param_1 + 0x128);
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FUN_141956f80(*(undefined8 *)(param_1 + 0x438),local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 142131cd0 FUN_142131cd0 body=238 status=ok
// SIG undefined FUN_142131cd0(void)

void FUN_142131cd0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FText::operator=(param_1 + 0x920);
  if (*(longlong *)(param_1 + 0xa10) != 0) {
    FText::FText(local_38,param_1 + 0x920);
    local_20 = 1;
    local_18 = 0;
    local_10 = 0;
    FUN_141956f90(*(undefined8 *)(param_1 + 0xa10),local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 142131dc0 FUN_142131dc0 body=23 status=ok
// SIG undefined FUN_142131dc0(void)

void FUN_142131dc0(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x128) = (char)param_2;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    return;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x238) = param_2;
  return;
}



// FUNCTION 142131de0 FUN_142131de0 body=27 status=ok
// SIG undefined FUN_142131de0(void)

void FUN_142131de0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(char *)(lVar1 + 0x128) = (char)param_2;
  lVar1 = *(longlong *)(lVar1 + 0x1c0);
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x238) = param_2;
  return;
}



// FUNCTION 142131e00 FUN_142131e00 body=23 status=ok
// SIG undefined FUN_142131e00(void)

void FUN_142131e00(longlong param_1,int param_2)

{
  longlong lVar1;
  
  *(char *)(param_1 + 0x118) = (char)param_2;
  lVar1 = *(longlong *)(param_1 + 0x250);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0x238) != param_2) {
    *(int *)(lVar1 + 0x238) = param_2;
    FUN_1418475e0(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 142131e20 FUN_142131e20 body=27 status=ok
// SIG undefined FUN_142131e20(void)

void FUN_142131e20(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(char *)(lVar1 + 0x118) = (char)param_2;
  lVar1 = *(longlong *)(lVar1 + 0x250);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0x238) != param_2) {
    *(int *)(lVar1 + 0x238) = param_2;
    FUN_1418475e0(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 142131e40 FUN_142131e40 body=17 status=ok
// SIG undefined FUN_142131e40(void)

void FUN_142131e40(longlong param_1,int param_2)

{
  longlong lVar1;
  
  *(char *)(param_1 + 0x48) = (char)param_2;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0x238) != param_2) {
    *(int *)(lVar1 + 0x238) = param_2;
    FUN_1418475e0(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 142131e60 SetHorizontalAlignment body=16 status=ok
// SIG undefined SetHorizontalAlignment(void)

void UGridSlot::SetHorizontalAlignment(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x48) = (char)param_2;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x20) = param_2;
  }
  return;
}



// FUNCTION 142131e70 SetHorizontalAlignment body=16 status=ok
// SIG undefined SetHorizontalAlignment(void)

void UHorizontalBoxSlot::SetHorizontalAlignment(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x50) = param_2;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x58) + 0x20) = param_2;
  }
  return;
}



// FUNCTION 142131e80 SetHorizontalAlignment body=16 status=ok
// SIG undefined SetHorizontalAlignment(void)

void UOverlaySlot::SetHorizontalAlignment(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x50) = param_2;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x24) = param_2;
  }
  return;
}



// FUNCTION 142131e90 SetHorizontalAlignment body=16 status=ok
// SIG undefined SetHorizontalAlignment(void)

void UScrollBoxSlot::SetHorizontalAlignment(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x48) = (char)param_2;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x48) = param_2;
  }
  return;
}



// FUNCTION 142131ea0 SetHorizontalAlignment body=16 status=ok
// SIG undefined SetHorizontalAlignment(void)

void UUniformGridSlot::SetHorizontalAlignment(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x38) = (char)param_2;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x20) = param_2;
  }
  return;
}



// FUNCTION 142131eb0 SetHorizontalAlignment body=16 status=ok
// SIG undefined SetHorizontalAlignment(void)

void UWidgetSwitcherSlot::SetHorizontalAlignment(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x48) = (char)param_2;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x20) = param_2;
  }
  return;
}



// FUNCTION 142131ec0 FUN_142131ec0 body=17 status=ok
// SIG undefined FUN_142131ec0(void)

void FUN_142131ec0(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x120) == 0) {
    return;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0x238) = param_2;
  return;
}



// FUNCTION 142131ee0 FUN_142131ee0 body=21 status=ok
// SIG undefined FUN_142131ee0(void)

void FUN_142131ee0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x120);
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x238) = param_2;
  return;
}



// FUNCTION 142131f00 SetHorizontalAlignment body=16 status=ok
// SIG undefined SetHorizontalAlignment(void)

void UWrapBoxSlot::SetHorizontalAlignment(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x50) = (char)param_2;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x20) = param_2;
  }
  return;
}



// FUNCTION 142131f10 FUN_142131f10 body=23 status=ok
// SIG undefined FUN_142131f10(void)

void FUN_142131f10(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  *(undefined1 *)(param_1 + 0x120) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (lVar1 == 0) {
    return;
  }
  uStack_27 = 1;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_28 = param_2;
  cVar2 = TAttribute<bool>::IdenticalTo(lVar1 + 0x338,&uStack_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_20);
  if (cVar2 == '\0') {
    uStack_27 = 1;
    uStack_20 = 0;
    uStack_18 = 0;
    *(undefined1 *)(lVar1 + 0x338) = param_2;
    *(undefined1 *)(lVar1 + 0x339) = 1;
    uStack_28 = param_2;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x340,&uStack_20);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_20);
    FUN_1418475e0(lVar1,1);
  }
  return;
}



// FUNCTION 142131f30 FUN_142131f30 body=67 status=ok
// SIG undefined FUN_142131f30(void)

void FUN_142131f30(longlong param_1,undefined1 param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x36c) = param_2;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    local_28 = param_2;
    SSlider::SetLocked(*(longlong *)(param_1 + 0x3c8),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142131f80 FUN_142131f80 body=24 status=ok
// SIG undefined FUN_142131f80(void)

void FUN_142131f80(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x118) = param_2;
  if (*(longlong *)(param_1 + 0x128) == 0) {
    return;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x248) = param_2;
  return;
}



// FUNCTION 142131fa0 FUN_142131fa0 body=53 status=ok
// SIG undefined FUN_142131fa0(void)

void FUN_142131fa0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) & 0xfb | param_2 << 2;
    *(byte *)(lVar1 + 0x1fc) = *(byte *)(lVar1 + 0x1fc) & 0xfe;
    *(byte *)(lVar1 + 0x1fc) = *(byte *)(lVar1 + 0x1fc) | (param_2 << 2 & 4U) >> 2;
  }
  return;
}



// FUNCTION 142131fe0 FUN_142131fe0 body=25 status=ok
// SIG undefined FUN_142131fe0(void)

void FUN_142131fe0(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    *(undefined4 *)(param_1 + 0x1a8) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x1f8) = param_2;
  }
  return;
}



// FUNCTION 142132000 thunk_FUN_142132010 body=5 status=ok
// SIG undefined thunk_FUN_142132010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_142132010(longlong *param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  longlong *plStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  ulonglong uStack_28;
  
  if (param_1 != (longlong *)0x0) {
    uStack_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
    ppuStack_78 = &PTR_FUN_1445c4dc0;
    uStack_70 = 0;
    uStack_68 = (longlong *)0x0;
    uStack_60 = param_3;
    uStack_5f = param_4;
    if (param_2 != 0) {
      puStack_50 = auStack_a8;
      auStack_a8[0] = 0;
      pcStack_58 = UE4Function_Private::
                   TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                   ::Call;
      pcStack_48 = UE4Function_Private::
                   TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                   ::Call;
      puStack_40 = puStack_50;
      FUN_14213eb80(param_2,&uStack_98,&pcStack_48);
      plVar5 = uStack_68;
      if (CONCAT44(uStack_8c,uStack_90) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_8c,uStack_90) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (CONCAT44(uStack_8c,uStack_90) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_8c,uStack_90) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar6 = CONCAT44(uStack_8c,uStack_90);
      uStack_88 = uStack_70;
      plStack_80 = uStack_68;
      uStack_70 = CONCAT44(uStack_94,uStack_98);
      uStack_68 = (longlong *)CONCAT44(uStack_8c,uStack_90);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
        lVar6 = CONCAT44(uStack_8c,uStack_90);
      }
      if (lVar6 != 0) {
        LOCK();
        piVar1 = (int *)(lVar6 + 8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar4 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
          (**(code **)*puVar4)(puVar4);
          LOCK();
          piVar1 = (int *)((longlong)puVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)CONCAT44(uStack_8c,uStack_90) + 8))
                      ((longlong *)CONCAT44(uStack_8c,uStack_90),1);
          }
        }
        LOCK();
        piVar1 = (int *)(lVar6 + 8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar4 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
          (**(code **)*puVar4)(puVar4);
          LOCK();
          piVar1 = (int *)((longlong)puVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)CONCAT44(uStack_8c,uStack_90) + 8))
                      ((longlong *)CONCAT44(uStack_8c,uStack_90),1);
          }
        }
      }
    }
    (**(code **)(*param_1 + 0xcc0))(param_1,&ppuStack_78);
    plVar5 = uStack_68;
    if (uStack_68 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_68 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_68)(uStack_68);
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
  }
  return;
}



// FUNCTION 142132010 FUN_142132010 body=495 status=ok
// SIG undefined FUN_142132010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142132010(longlong *param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *plStack_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined1 local_5f;
  code *local_58;
  undefined1 *puStack_50;
  code *local_48;
  undefined1 *puStack_40;
  ulonglong local_28;
  
  if (param_1 != (longlong *)0x0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
    local_78 = &PTR_FUN_1445c4dc0;
    local_70 = 0;
    uStack_68 = (longlong *)0x0;
    local_60 = param_3;
    local_5f = param_4;
    if (param_2 != 0) {
      puStack_50 = local_a8;
      local_a8[0] = 0;
      local_58 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      local_48 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      puStack_40 = puStack_50;
      FUN_14213eb80(param_2,&local_98,&local_48);
      plVar5 = uStack_68;
      if (CONCAT44(uStack_8c,uStack_90) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_8c,uStack_90) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (CONCAT44(uStack_8c,uStack_90) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_8c,uStack_90) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar6 = CONCAT44(uStack_8c,uStack_90);
      local_88 = local_70;
      plStack_80 = uStack_68;
      local_70 = CONCAT44(uStack_94,local_98);
      uStack_68 = (longlong *)CONCAT44(uStack_8c,uStack_90);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
        lVar6 = CONCAT44(uStack_8c,uStack_90);
      }
      if (lVar6 != 0) {
        LOCK();
        piVar1 = (int *)(lVar6 + 8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar4 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
          (**(code **)*puVar4)(puVar4);
          LOCK();
          piVar1 = (int *)((longlong)puVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)CONCAT44(uStack_8c,uStack_90) + 8))
                      ((longlong *)CONCAT44(uStack_8c,uStack_90),1);
          }
        }
        LOCK();
        piVar1 = (int *)(lVar6 + 8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar4 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
          (**(code **)*puVar4)(puVar4);
          LOCK();
          piVar1 = (int *)((longlong)puVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)CONCAT44(uStack_8c,uStack_90) + 8))
                      ((longlong *)CONCAT44(uStack_8c,uStack_90),1);
          }
        }
      }
    }
    (**(code **)(*param_1 + 0xcc0))(param_1,&local_78);
    plVar5 = uStack_68;
    if (uStack_68 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_68 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_68)(uStack_68);
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
  }
  return;
}



// FUNCTION 142132200 SetInputMode_GameOnly body=45 status=ok
// SIG undefined SetInputMode_GameOnly(void)

void UWidgetBlueprintLibrary::SetInputMode_GameOnly(longlong *param_1)

{
  undefined **local_18;
  undefined1 local_10;
  
  if (param_1 != (longlong *)0x0) {
    local_10 = 1;
    local_18 = &PTR_FUN_1445c4dd0;
    (**(code **)(*param_1 + 0xcc0))(param_1,&local_18);
  }
  return;
}



// FUNCTION 142132230 thunk_FUN_142132240 body=5 status=ok
// SIG undefined thunk_FUN_142132240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_142132240(longlong *param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  longlong *plStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  ulonglong uStack_28;
  
  if (param_1 != (longlong *)0x0) {
    uStack_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
    ppuStack_78 = &PTR_FUN_144f9ee60;
    uStack_70 = 0;
    uStack_68 = (longlong *)0x0;
    uStack_60 = param_3;
    if (param_2 != 0) {
      puStack_50 = auStack_a8;
      auStack_a8[0] = 0;
      pcStack_58 = UE4Function_Private::
                   TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                   ::Call;
      pcStack_48 = UE4Function_Private::
                   TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                   ::Call;
      puStack_40 = puStack_50;
      FUN_14213eb80(param_2,&uStack_98,&pcStack_48);
      plVar5 = uStack_68;
      if (CONCAT44(uStack_8c,uStack_90) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_8c,uStack_90) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (CONCAT44(uStack_8c,uStack_90) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_8c,uStack_90) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar6 = CONCAT44(uStack_8c,uStack_90);
      uStack_88 = uStack_70;
      plStack_80 = uStack_68;
      uStack_70 = CONCAT44(uStack_94,uStack_98);
      uStack_68 = (longlong *)CONCAT44(uStack_8c,uStack_90);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
        lVar6 = CONCAT44(uStack_8c,uStack_90);
      }
      if (lVar6 != 0) {
        LOCK();
        piVar1 = (int *)(lVar6 + 8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar4 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
          (**(code **)*puVar4)(puVar4);
          LOCK();
          piVar1 = (int *)((longlong)puVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)CONCAT44(uStack_8c,uStack_90) + 8))
                      ((longlong *)CONCAT44(uStack_8c,uStack_90),1);
          }
        }
        LOCK();
        piVar1 = (int *)(lVar6 + 8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar4 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
          (**(code **)*puVar4)(puVar4);
          LOCK();
          piVar1 = (int *)((longlong)puVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)CONCAT44(uStack_8c,uStack_90) + 8))
                      ((longlong *)CONCAT44(uStack_8c,uStack_90),1);
          }
        }
      }
    }
    (**(code **)(*param_1 + 0xcc0))(param_1,&ppuStack_78);
    plVar5 = uStack_68;
    if (uStack_68 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_68 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_68)(uStack_68);
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
  }
  return;
}



// FUNCTION 142132240 FUN_142132240 body=491 status=ok
// SIG undefined FUN_142132240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142132240(longlong *param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *plStack_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  code *local_58;
  undefined1 *puStack_50;
  code *local_48;
  undefined1 *puStack_40;
  ulonglong local_28;
  
  if (param_1 != (longlong *)0x0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
    local_78 = &PTR_FUN_144f9ee60;
    local_70 = 0;
    uStack_68 = (longlong *)0x0;
    local_60 = param_3;
    if (param_2 != 0) {
      puStack_50 = local_a8;
      local_a8[0] = 0;
      local_58 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      local_48 = UE4Function_Private::
                 TFunctionRefCaller<<lambda_9660092bd0920007bd48b3b3f2c569b9>,TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                 ::Call;
      puStack_40 = puStack_50;
      FUN_14213eb80(param_2,&local_98,&local_48);
      plVar5 = uStack_68;
      if (CONCAT44(uStack_8c,uStack_90) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_8c,uStack_90) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (CONCAT44(uStack_8c,uStack_90) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_8c,uStack_90) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar6 = CONCAT44(uStack_8c,uStack_90);
      local_88 = local_70;
      plStack_80 = uStack_68;
      local_70 = CONCAT44(uStack_94,local_98);
      uStack_68 = (longlong *)CONCAT44(uStack_8c,uStack_90);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
        lVar6 = CONCAT44(uStack_8c,uStack_90);
      }
      if (lVar6 != 0) {
        LOCK();
        piVar1 = (int *)(lVar6 + 8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar4 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
          (**(code **)*puVar4)(puVar4);
          LOCK();
          piVar1 = (int *)((longlong)puVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)CONCAT44(uStack_8c,uStack_90) + 8))
                      ((longlong *)CONCAT44(uStack_8c,uStack_90),1);
          }
        }
        LOCK();
        piVar1 = (int *)(lVar6 + 8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar4 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
          (**(code **)*puVar4)(puVar4);
          LOCK();
          piVar1 = (int *)((longlong)puVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*(longlong *)CONCAT44(uStack_8c,uStack_90) + 8))
                      ((longlong *)CONCAT44(uStack_8c,uStack_90),1);
          }
        }
      }
    }
    (**(code **)(*param_1 + 0xcc0))(param_1,&local_78);
    plVar5 = uStack_68;
    if (uStack_68 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_68 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_68)(uStack_68);
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
  }
  return;
}



// FUNCTION 142132430 FUN_142132430 body=167 status=ok
// SIG undefined FUN_142132430(void)

void FUN_142132430(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_38;
  longlong *local_30;
  char local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfb;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | param_2 << 2;
  FUN_1420f9830(param_1,&local_38);
  if (local_38 != 0) {
    local_20 = 0;
    local_18 = 0;
    local_28[1] = 1;
    local_28[0] = param_2;
    SWidget::SetEnabled(local_38,local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1421324e0 SetIsExpanded body=29 status=ok
// SIG undefined SetIsExpanded(void)

void UExpandableArea::SetIsExpanded(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d8) = param_2;
  if (*(longlong **)(param_1 + 800) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001421324f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 800) + 0x210))();
    return;
  }
  return;
}



// FUNCTION 142132500 SetIsExpanded_Animated body=29 status=ok
// SIG undefined SetIsExpanded_Animated(void)

void UExpandableArea::SetIsExpanded_Animated(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d8) = param_2;
  if (*(longlong **)(param_1 + 800) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142132515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 800) + 0x218))();
    return;
  }
  return;
}



// FUNCTION 142132520 SetIsMarquee body=145 status=ok
// SIG undefined SetIsMarquee(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UProgressBar::SetIsMarquee(longlong param_1,char param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(char *)(param_1 + 0x2c5) = param_2;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    local_34 = param_2 == '\0';
    if ((bool)local_34) {
      local_38 = *(undefined4 *)(param_1 + 0x2c0);
      local_18 = local_38;
    }
    local_30 = 1;
    local_28 = 0;
    local_20 = 0;
    local_14 = local_34;
    FUN_1419a3520(*(longlong *)(param_1 + 0x300),&local_38);
  }
  return;
}



// FUNCTION 1421325c0 SetIsPassword body=57 status=ok
// SIG undefined SetIsPassword(void)

void UEditableText::SetIsPassword(longlong param_1,undefined1 param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x401) = param_2;
  if (*(longlong *)(param_1 + 0x438) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    local_28 = param_2;
    FUN_141958870(*(longlong *)(param_1 + 0x438),&local_28);
  }
  return;
}



// FUNCTION 142132600 SetIsPassword body=57 status=ok
// SIG undefined SetIsPassword(void)

void UEditableTextBox::SetIsPassword(longlong param_1,undefined1 param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x9c9) = param_2;
  if (*(longlong *)(param_1 + 0xa10) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    local_28 = param_2;
    FUN_1419588e0(*(longlong *)(param_1 + 0xa10),&local_28);
  }
  return;
}



// FUNCTION 142132640 SetIsReadOnly body=57 status=ok
// SIG undefined SetIsReadOnly(void)

void UEditableText::SetIsReadOnly(longlong param_1,undefined1 param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x400) = param_2;
  if (*(longlong *)(param_1 + 0x438) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    local_28 = param_2;
    FUN_141958980(*(longlong *)(param_1 + 0x438),&local_28);
  }
  return;
}



// FUNCTION 142132680 SetIsReadOnly body=57 status=ok
// SIG undefined SetIsReadOnly(void)

void UEditableTextBox::SetIsReadOnly(longlong param_1,undefined1 param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x9c8) = param_2;
  if (*(longlong *)(param_1 + 0xa10) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    local_28 = param_2;
    FUN_1419589c0(*(longlong *)(param_1 + 0xa10),&local_28);
  }
  return;
}



// FUNCTION 1421326c0 FUN_1421326c0 body=67 status=ok
// SIG undefined FUN_1421326c0(void)

void FUN_1421326c0(longlong param_1,undefined1 param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x340) = param_2;
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    local_28 = param_2;
    SMultiLineEditableText::SetClearTextSelectionOnFocusLoss
              (*(longlong *)(param_1 + 0x3c0),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142132710 FUN_142132710 body=67 status=ok
// SIG undefined FUN_142132710(void)

void FUN_142132710(longlong param_1,undefined1 param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0xb30) = param_2;
  if (*(longlong *)(param_1 + 0xbe0) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    local_28 = param_2;
    FUN_141958a50(*(longlong *)(param_1 + 0xbe0),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142132780 FUN_142132780 body=40 status=ok
// SIG undefined FUN_142132780(void)

void FUN_142132780(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    (**(code **)(*plVar1 + 0x280))(plVar1,local_res10);
  }
  return;
}



// FUNCTION 1421327b0 FUN_1421327b0 body=178 status=ok
// SIG undefined FUN_1421327b0(void)

void FUN_1421327b0(longlong param_1,undefined8 *param_2,undefined1 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3c8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x3c0);
      }
      uVar2 = (**(code **)(*plVar3 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b8) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x3b8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x430) + 0x18))
              (param_1 + 0x430,*param_2,param_3,param_4 != 3);
    (**(code **)(*(longlong *)(param_1 + 0x430) + 0x30))(param_1 + 0x430,param_4);
  }
  return;
}



// FUNCTION 142132870 FUN_142132870 body=70 status=ok
// SIG undefined FUN_142132870(void)

void FUN_142132870(longlong param_1,byte param_2)

{
  uint local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(byte *)(param_1 + 0x103) = param_2;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    local_28 = (uint)param_2;
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    FUN_1419bc570(*(longlong *)(param_1 + 0x200),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 1421328c0 FUN_1421328c0 body=222 status=ok
// SIG undefined FUN_1421328c0(void)

void FUN_1421328c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_28 [32];
  
  lVar4 = *(longlong *)(param_1 + 0x650);
  if (lVar4 != 0) {
    lVar6 = FText::FText(local_28);
    FText::operator=(lVar4 + 0x358,lVar6);
    plVar5 = *(longlong **)(lVar6 + 8);
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
  }
  FText::operator=(param_1 + 0x5e8,param_2);
  plVar5 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 1421329a0 FUN_1421329a0 body=206 status=ok
// SIG undefined FUN_1421329a0(void)

void FUN_1421329a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  FUN_1420f9830(param_1,&local_28);
  if ((((local_28 != 0) &&
       (cVar4 = FSlateApplication::SetKeyboardFocus(DAT_1469f4590,&local_28,2), cVar4 == '\0')) &&
      (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 != 0)) &&
     (lVar5 = FUN_1428cc3e0(lVar5), lVar5 != 0)) {
    local_18 = local_28;
    plStack_10 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    FUN_14185b9a0(lVar5 + 0x110,&local_18,2,0);
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
  return;
}



// FUNCTION 142132a70 FUN_142132a70 body=209 status=ok
// SIG undefined FUN_142132a70(void)

void FUN_142132a70(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (((lVar2 != 0) && (*(undefined4 *)(lVar2 + 0x70) = param_2, *(longlong *)(lVar2 + 0x50) != 0))
     && (*(longlong *)(lVar2 + 0x58) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(lVar2 + 0x58) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar3 = *(longlong **)(lVar2 + 0x58);
      plVar5 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar3 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = plVar6, !bVar7) {
          LOCK();
          bVar7 = iVar4 == (int)plVar3[1];
          if (bVar7) {
            *(int *)(plVar3 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar7) {
            plVar5 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              plVar6 = *(longlong **)(lVar2 + 0x50);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(plVar3 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      SGridPanel::NotifySlotChanged(plVar6);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
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
    }
  }
  return;
}



// FUNCTION 142132b50 SetLayout body=257 status=ok
// SIG DWORD SetLayout(HDC hdc, DWORD l)

DWORD __stdcall UCanvasPanelSlot::SetLayout(HDC hdc,DWORD l)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  DWORD in_EAX;
  undefined4 in_register_00000014;
  undefined8 *puVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_28;
  ulonglong local_20;
  undefined4 local_18;
  
  puVar7 = (undefined8 *)CONCAT44(in_register_00000014,l);
  uVar6 = puVar7[1];
  *(undefined8 *)(hdc + 0xe) = *puVar7;
  *(undefined8 *)(hdc + 0x10) = uVar6;
  iVar1 = *(int *)((longlong)puVar7 + 0x14);
  iVar2 = *(int *)(puVar7 + 3);
  iVar4 = *(int *)((longlong)puVar7 + 0x1c);
  hdc[0x12].unused = *(int *)(puVar7 + 2);
  hdc[0x13].unused = iVar1;
  hdc[0x14].unused = iVar2;
  hdc[0x15].unused = iVar4;
  *(undefined8 *)(hdc + 0x16) = puVar7[4];
  lVar3 = *(longlong *)(hdc + 0x1a);
  if (lVar3 != 0) {
    iVar1 = hdc[0xe].unused;
    iVar2 = hdc[0xf].unused;
    iVar4 = hdc[0x10].unused;
    iVar5 = hdc[0x11].unused;
    *(undefined1 *)(lVar3 + 0x30) = 1;
    *(int *)(lVar3 + 0x20) = iVar1;
    *(int *)(lVar3 + 0x24) = iVar2;
    *(int *)(lVar3 + 0x28) = iVar4;
    *(int *)(lVar3 + 0x2c) = iVar5;
    local_28._0_1_ = 1;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar3 + 0x38,&local_20,in_R8,in_R9,iVar1,iVar4);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    lVar3 = *(longlong *)(hdc + 0x1a);
    iVar1 = hdc[0x12].unused;
    iVar2 = hdc[0x13].unused;
    iVar4 = hdc[0x14].unused;
    iVar5 = hdc[0x15].unused;
    local_28 = CONCAT71(local_28._1_7_,1);
    local_20 = 0;
    *(int *)(lVar3 + 0x48) = iVar1;
    *(int *)(lVar3 + 0x4c) = iVar2;
    *(int *)(lVar3 + 0x50) = iVar4;
    *(int *)(lVar3 + 0x54) = iVar5;
    *(undefined1 *)(lVar3 + 0x58) = 1;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar3 + 0x60,&local_20,in_R8,in_R9,iVar1,iVar4);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    lVar3 = *(longlong *)(hdc + 0x1a);
    iVar1 = hdc[0x16].unused;
    iVar2 = hdc[0x17].unused;
    *(int *)(lVar3 + 0x70) = iVar1;
    *(int *)(lVar3 + 0x74) = iVar2;
    *(undefined1 *)(lVar3 + 0x78) = 1;
    local_28 = 0;
    local_20 = local_20 & 0xffffffff00000000;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar3 + 0x80,&local_28,in_R8,in_R9,iVar1,1);
    in_EAX = TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  return in_EAX;
}



// FUNCTION 142132c60 FUN_142132c60 body=67 status=ok
// SIG undefined FUN_142132c60(void)

void FUN_142132c60(longlong param_1,undefined1 param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x36d) = param_2;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    local_28 = param_2;
    SMultiLineEditableText::SetSelectAllTextWhenFocused(*(longlong *)(param_1 + 0x3c8),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142132cb0 SetLowQualityFallbackBrush body=60 status=ok
// SIG undefined SetLowQualityFallbackBrush(void)

void UBackgroundBlur::SetLowQualityFallbackBrush(longlong param_1)

{
  FUN_1406922e0(param_1 + 0x138);
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    SBackgroundBlur::SetLowQualityBackgroundBrush(*(longlong *)(param_1 + 0x1c0),param_1 + 0x138);
  }
  return;
}



// FUNCTION 142132cf0 FUN_142132cf0 body=7 status=ok
// SIG undefined FUN_142132cf0(void)

void FUN_142132cf0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x740) = param_2;
  return;
}



// FUNCTION 142132d00 FUN_142132d00 body=574 status=ok
// SIG undefined FUN_142132d00(void)

void FUN_142132d00(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong *local_10;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar6 = UWidget::GetPrivateStaticClass();
  lVar3 = param_2[2];
  if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  GetPropertyValueByPath(&local_28,param_2,lVar3,param_1 + 8,0);
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_146ae7aa0) && (_Init_thread_header(&DAT_146ae7aa0), DAT_146ae7aa0 == -1)) {
    FName::FName(&DAT_146ae7a98,"SlateFontInfo",1);
    _Init_thread_footer(&DAT_146ae7aa0);
  }
  if (local_28 != DAT_146ae7a98) {
    if ((*piVar7 < DAT_146ae7a90) && (_Init_thread_header(&DAT_146ae7a90), DAT_146ae7a90 == -1)) {
      FName::FName(&DAT_146ae7a88,"SlateBrush",1);
      _Init_thread_footer(&DAT_146ae7a90);
    }
    if (local_28 == DAT_146ae7a88) {
      FSlateBrush::SetResourceObject(local_20,param_3);
      goto LAB_142132dfc;
    }
    if ((*piVar7 < DAT_146ae7ab0) && (_Init_thread_header(&DAT_146ae7ab0), DAT_146ae7ab0 == -1)) {
      FName::FName(&DAT_146ae7aa8,"FontOutlineSettings",1);
      _Init_thread_footer(&DAT_146ae7ab0);
    }
    if (local_28 != DAT_146ae7aa8) goto LAB_142132dfc;
  }
  *(undefined8 *)(local_20 + 8) = param_3;
LAB_142132dfc:
  FUN_1420f9830(param_2,&local_18);
  if (local_18 != 0) {
    FUN_1418475e0(local_18,5);
    (**(code **)(*param_2 + 0x2b0))(param_2);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar7 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 142132f40 SetMaxAspectRatio body=68 status=ok
// SIG undefined SetMaxAspectRatio(void)

void USizeBox::SetMaxAspectRatio(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x40;
  *(undefined4 *)(param_1 + 0x134) = param_2;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    FUN_1419a3130(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 142132f90 SetMaxDesiredHeight body=68 status=ok
// SIG undefined SetMaxDesiredHeight(void)

void USizeBox::SetMaxDesiredHeight(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x20;
  *(undefined4 *)(param_1 + 0x130) = param_2;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    FUN_1419a3190(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 142132fe0 SetMaxDesiredWidth body=68 status=ok
// SIG undefined SetMaxDesiredWidth(void)

void USizeBox::SetMaxDesiredWidth(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x10;
  *(undefined4 *)(param_1 + 300) = param_2;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    FUN_1419a31f0(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 142133030 FUN_142133030 body=155 status=ok
// SIG undefined FUN_142133030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142133030(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) | 8;
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4e8) = param_2;
  if (lVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_34 = 1;
    local_30 = 1;
    if (&local_38 != (undefined4 *)(lVar1 + 0x488)) {
      *(undefined4 *)(lVar1 + 0x488) = param_2;
      *(undefined1 *)(lVar1 + 0x48c) = 1;
    }
    *(undefined1 *)(lVar1 + 0x490) = 1;
    local_38 = param_2;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x498,&local_28);
    SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  return;
}



// FUNCTION 1421330d0 FUN_1421330d0 body=155 status=ok
// SIG undefined FUN_1421330d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421330d0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) | 2;
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4e0) = param_2;
  if (lVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_34 = 1;
    local_30 = 1;
    if (&local_38 != (undefined4 *)(lVar1 + 0x448)) {
      *(undefined4 *)(lVar1 + 0x448) = param_2;
      *(undefined1 *)(lVar1 + 0x44c) = 1;
    }
    *(undefined1 *)(lVar1 + 0x450) = 1;
    local_38 = param_2;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x458,&local_28);
    SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  return;
}



// FUNCTION 142133170 SetMaximum body=79 status=ok
// SIG undefined SetMaximum(void)

void UCanvasPanelSlot::SetMaximum
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x50) = param_2;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x50);
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    local_20 = 0;
    local_18 = 0;
    *(undefined1 *)(lVar1 + 0x58) = 1;
    *(undefined4 *)(lVar1 + 0x48) = uVar2;
    *(undefined4 *)(lVar1 + 0x4c) = uVar3;
    *(undefined4 *)(lVar1 + 0x50) = uVar4;
    *(undefined4 *)(lVar1 + 0x54) = uVar5;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x60,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 1421331c0 FUN_1421331c0 body=196 status=ok
// SIG undefined FUN_1421331c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421331c0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  puVar2 = (undefined8 *)(param_1 + 0x318);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)uStack_30 + 0xc) = *(int *)((longlong)uStack_30 + 0xc) + 1;
    UNLOCK();
  }
  if (&local_38 != puVar2) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar2;
    plVar4 = *(longlong **)(param_1 + 800);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar2 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x31c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 800) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x324) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar4;
  }
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)uStack_30 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*uStack_30 + 8))(uStack_30,1);
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 142133290 SetMinDesiredHeight body=68 status=ok
// SIG undefined SetMinDesiredHeight(void)

void USizeBox::SetMinDesiredHeight(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 8;
  *(undefined4 *)(param_1 + 0x128) = param_2;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    FUN_1419a3250(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 1421332e0 SetMinDesiredSlotHeight body=61 status=ok
// SIG undefined SetMinDesiredSlotHeight(void)

void UUniformGridPanel::SetMinDesiredSlotHeight(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 300) = param_2;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    SUniformGridPanel::SetMinDesiredSlotHeight(*(longlong *)(param_1 + 0x130),&local_28);
  }
  return;
}



// FUNCTION 142133320 SetMinDesiredSlotWidth body=61 status=ok
// SIG undefined SetMinDesiredSlotWidth(void)

void UUniformGridPanel::SetMinDesiredSlotWidth(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x128) = param_2;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    SUniformGridPanel::SetMinDesiredSlotHeight(*(longlong *)(param_1 + 0x130),&local_28);
  }
  return;
}



// FUNCTION 142133360 SetMinDesiredWidth body=68 status=ok
// SIG undefined SetMinDesiredWidth(void)

void USizeBox::SetMinDesiredWidth(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 4;
  *(undefined4 *)(param_1 + 0x124) = param_2;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    FUN_1419a3330(*(longlong *)(param_1 + 0x138),&local_28);
  }
  return;
}



// FUNCTION 1421333b0 FUN_1421333b0 body=71 status=ok
// SIG undefined FUN_1421333b0(void)

void FUN_1421333b0(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x1f8) = param_2;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    local_20 = 0;
    local_18 = 0;
    local_24 = 1;
    local_28 = param_2;
    FUN_1419bc8d0(*(longlong *)(param_1 + 0x200),&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133400 FUN_142133400 body=155 status=ok
// SIG undefined FUN_142133400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142133400(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) | 4;
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4e4) = param_2;
  if (lVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_34 = 1;
    local_30 = 1;
    if (&local_38 != (undefined4 *)(lVar1 + 0x468)) {
      *(undefined4 *)(lVar1 + 0x468) = param_2;
      *(undefined1 *)(lVar1 + 0x46c) = 1;
    }
    *(undefined1 *)(lVar1 + 0x470) = 1;
    local_38 = param_2;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x478,&local_28);
    SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  return;
}



// FUNCTION 1421334a0 FUN_1421334a0 body=155 status=ok
// SIG undefined FUN_1421334a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421334a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) | 1;
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  *(undefined4 *)(param_1 + 0x4dc) = param_2;
  if (lVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_34 = 1;
    local_30 = 1;
    if (&local_38 != (undefined4 *)(lVar1 + 0x428)) {
      *(undefined4 *)(lVar1 + 0x428) = param_2;
      *(undefined1 *)(lVar1 + 0x42c) = 1;
    }
    *(undefined1 *)(lVar1 + 0x430) = 1;
    local_38 = param_2;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar1 + 0x438,&local_28);
    SSpinBox<float>::UpdateIsSpinRangeUnlimited(lVar1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  return;
}



// FUNCTION 142133540 SetMinimum body=79 status=ok
// SIG undefined SetMinimum(void)

void UCanvasPanelSlot::SetMinimum
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x48) = param_2;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x50);
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    local_20 = 0;
    local_18 = 0;
    *(undefined1 *)(lVar1 + 0x58) = 1;
    *(undefined4 *)(lVar1 + 0x48) = uVar2;
    *(undefined4 *)(lVar1 + 0x4c) = uVar3;
    *(undefined4 *)(lVar1 + 0x50) = uVar4;
    *(undefined4 *)(lVar1 + 0x54) = uVar5;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x60,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133590 SetMousePosition body=90 status=ok
// SIG undefined SetMousePosition(void)

undefined8
UWidgetBlueprintLibrary::SetMousePosition(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float local_res8;
  float fStackX_c;
  int local_res10;
  int local_res14;
  
  local_res8 = (float)param_3;
  local_res10 = (int)local_res8;
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  local_res14 = (int)fStackX_c;
  uVar1 = FReply::SetMousePos(param_2,&local_res10);
  FUN_140459130(param_2,uVar1);
  FUN_140438260(param_1,param_2);
  return param_1;
}



// FUNCTION 1421335f0 SetNavigationRule body=27 status=ok
// SIG undefined SetNavigationRule(void)

void UWidget::SetNavigationRule(undefined8 param_1)

{
  FUN_142133610();
  FUN_1420e3000(param_1);
  return;
}



// FUNCTION 142133610 FUN_142133610 body=493 status=ok
// SIG undefined FUN_142133610(void)

void FUN_142133610(longlong param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = UWidgetNavigation::GetPrivateStaticClass();
    uVar2 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
  }
  FWeakObjectPtr::operator=(&local_30,0);
  switch(param_2) {
  case 0:
    lVar1 = *(longlong *)(param_1 + 0xc0);
    *(undefined1 *)(lVar1 + 0x78) = param_3;
    *(undefined8 *)(lVar1 + 0x80) = param_4;
    *(undefined4 *)(lVar1 + 0x88) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x8c) = 0;
    *(undefined4 *)(lVar1 + 0x90) = local_30;
    *(undefined4 *)(lVar1 + 0x94) = local_2c;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    break;
  case 1:
    puVar3 = (undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0xa0);
    goto LAB_1421337b5;
  case 2:
    lVar1 = *(longlong *)(param_1 + 0xc0);
    *(undefined1 *)(lVar1 + 0x28) = param_3;
    *(undefined8 *)(lVar1 + 0x30) = param_4;
    *(undefined4 *)(lVar1 + 0x38) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x3c) = 0;
    *(undefined4 *)(lVar1 + 0x40) = local_30;
    *(undefined4 *)(lVar1 + 0x44) = local_2c;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    break;
  case 3:
    lVar1 = *(longlong *)(param_1 + 0xc0);
    *(undefined1 *)(lVar1 + 0x50) = param_3;
    *(undefined8 *)(lVar1 + 0x58) = param_4;
    *(undefined4 *)(lVar1 + 0x60) = 0xffffffff;
    *(undefined4 *)(lVar1 + 100) = 0;
    *(undefined4 *)(lVar1 + 0x68) = local_30;
    *(undefined4 *)(lVar1 + 0x6c) = local_2c;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    break;
  case 4:
    puVar3 = (undefined1 *)(*(longlong *)(param_1 + 0xc0) + 200);
    goto LAB_1421337b5;
  case 5:
    puVar3 = (undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0xf0);
LAB_1421337b5:
    *puVar3 = param_3;
    *(undefined8 *)(puVar3 + 8) = param_4;
    *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x14) = 0;
    *(undefined4 *)(puVar3 + 0x18) = local_30;
    *(undefined4 *)(puVar3 + 0x1c) = local_2c;
    *(undefined8 *)(puVar3 + 0x20) = 0;
  }
  return;
}



// FUNCTION 142133820 FUN_142133820 body=222 status=ok
// SIG undefined FUN_142133820(void)

void FUN_142133820(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_28 [32];
  
  lVar4 = *(longlong *)(param_1 + 0x650);
  if (lVar4 != 0) {
    lVar6 = FText::FText(local_28);
    FText::operator=(lVar4 + 0x370,lVar6);
    plVar5 = *(longlong **)(lVar6 + 8);
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
  }
  FText::operator=(param_1 + 0x600,param_2);
  plVar5 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 142133900 FUN_142133900 body=82 status=ok
// SIG undefined FUN_142133900(void)

void FUN_142133900(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x170);
    plVar1 = plVar3 + *(int *)(param_1 + 0x178);
    if (plVar3 != plVar1) {
      while (lVar2 = *plVar3, *(longlong *)(lVar2 + 0x378) != param_2) {
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar1) {
          return;
        }
      }
      if (*(int *)(lVar2 + 0x6ec) == 2) {
        *(int *)(lVar2 + 0x6e0) = param_3 * 2;
        return;
      }
      *(int *)(lVar2 + 0x6e0) = param_3;
    }
  }
  return;
}



// FUNCTION 142133960 SetNumberOfPieces body=51 status=ok
// SIG undefined SetNumberOfPieces(void)

void UCircularThrobber::SetNumberOfPieces(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x100) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  if (lVar1 == 0) {
    return;
  }
  if (param_2 < 1) {
    UCharacterMovementComponent::SetAvoidanceGroupMask(lVar1,1);
    return;
  }
  iVar2 = 0x19;
  if (param_2 < 0x19) {
    iVar2 = param_2;
  }
  UCharacterMovementComponent::SetAvoidanceGroupMask(lVar1,iVar2);
  return;
}



// FUNCTION 1421339a0 SetNumberOfPieces body=51 status=ok
// SIG undefined SetNumberOfPieces(void)

void UThrobber::SetNumberOfPieces(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x100) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x198);
  if (lVar1 == 0) {
    return;
  }
  if (param_2 < 1) {
    SThrobber::SetNumPieces(lVar1,1);
    return;
  }
  iVar2 = 0x19;
  if (param_2 < 0x19) {
    iVar2 = param_2;
  }
  SThrobber::SetNumPieces(lVar1,iVar2);
  return;
}



// FUNCTION 1421339e0 SetOffsets body=78 status=ok
// SIG undefined SetOffsets(void)

void UCanvasPanelSlot::SetOffsets
               (longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(undefined4 *)(lVar1 + 0x24) = uVar3;
    *(undefined4 *)(lVar1 + 0x28) = uVar4;
    *(undefined4 *)(lVar1 + 0x2c) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x38,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133a30 SetOpacity body=54 status=ok
// SIG undefined SetOpacity(void)

void UImage::SetOpacity(longlong param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined4 *)(param_1 + 0x1a4) = param_2;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x198);
    uStack_14 = *(undefined4 *)(param_1 + 0x19c);
    uStack_10 = *(undefined4 *)(param_1 + 0x1a0);
    uStack_c = *(undefined4 *)(param_1 + 0x1a4);
    FUN_1419562d0(*(longlong *)(param_1 + 0x1c8),&local_18);
  }
  return;
}



// FUNCTION 142133a70 FUN_142133a70 body=334 status=ok
// SIG undefined FUN_142133a70(void)

void FUN_142133a70(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  puVar3 = *(undefined4 **)(param_1 + 0x160);
  if (puVar3 == (undefined4 *)0x0) {
    local_78 = *(undefined4 *)(param_1 + 0x148);
    uStack_74 = *(undefined4 *)(param_1 + 0x14c);
    uStack_70 = *(undefined4 *)(param_1 + 0x150);
  }
  else {
    local_78 = *puVar3;
    uStack_74 = puVar3[1];
    uStack_70 = puVar3[2];
  }
  local_68 = 0;
  local_60 = 0;
  plStack_58 = (longlong *)0x0;
  uStack_6c = param_2;
  FUN_140692440((undefined4 *)(param_1 + 0x148),&local_78,param_3,param_4,local_78,uStack_70);
  plVar6 = plStack_58;
  lVar5 = *(longlong *)(param_1 + 0x200);
  if (lVar5 != 0) {
    local_40 = local_68;
    local_38 = local_60;
    local_30 = plStack_58;
    local_50 = local_78;
    uStack_4c = uStack_74;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    if (plStack_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
      UNLOCK();
      lVar5 = *(longlong *)(param_1 + 0x200);
    }
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    FUN_1419bbcf0(lVar5,&local_50);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      plVar6 = plStack_58;
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = plStack_58;
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
          plVar6 = plStack_58;
        }
      }
    }
  }
  plVar4 = plStack_58;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_58 + 8))(plStack_58,1);
      }
    }
  }
  return;
}



// FUNCTION 142133bc0 SetOrientation body=27 status=ok
// SIG undefined SetOrientation(void)

void UScrollBox::SetOrientation(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x820) = param_2;
  if (*(longlong *)(param_1 + 0x850) != 0) {
    FUN_1419a33a0(*(longlong *)(param_1 + 0x850),param_2);
    return;
  }
  return;
}



// FUNCTION 142133be0 FUN_142133be0 body=48 status=ok
// SIG undefined FUN_142133be0(void)

void FUN_142133be0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x768) != param_2) {
    FUN_14212cbc0();
    *(longlong *)(param_1 + 0x768) = param_2;
  }
  return;
}



// FUNCTION 142133c10 FUN_142133c10 body=96 status=ok
// SIG undefined FUN_142133c10(void)

void FUN_142133c10(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 local_18 [16];
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x768))(param_2), cVar1 != '\0')) {
    puVar2 = (undefined4 *)FUN_14253e150(local_18,param_2);
    *(undefined4 *)(param_1 + 0x1f0) = *puVar2;
    *(undefined4 *)(param_1 + 500) = puVar2[1];
    *(undefined4 *)(param_1 + 0x1f8) = puVar2[2];
    *(undefined4 *)(param_1 + 0x1fc) = puVar2[3];
  }
  return;
}



// FUNCTION 142133c70 SetPadding body=72 status=ok
// SIG undefined SetPadding(void)

void UBackgroundBlur::SetPadding(longlong param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  *(undefined4 *)(param_1 + 0x118) = local_38;
  *(undefined4 *)(param_1 + 0x11c) = uStack_34;
  *(undefined4 *)(param_1 + 0x120) = uStack_30;
  *(undefined4 *)(param_1 + 0x124) = uStack_2c;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SWindowTitleBarArea::SetPadding(*(longlong *)(param_1 + 0x1c0),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133cc0 SetPadding body=76 status=ok
// SIG undefined SetPadding(void)

void UBackgroundBlurSlot::SetPadding(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  *(undefined4 *)(lVar1 + 0x118) = local_38;
  *(undefined4 *)(lVar1 + 0x11c) = uStack_34;
  *(undefined4 *)(lVar1 + 0x120) = uStack_30;
  *(undefined4 *)(lVar1 + 0x124) = uStack_2c;
  if (*(longlong *)(lVar1 + 0x1c0) != 0) {
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SWindowTitleBarArea::SetPadding(*(longlong *)(lVar1 + 0x1c0),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133d10 SetPadding body=72 status=ok
// SIG undefined SetPadding(void)

void UBorder::SetPadding(longlong param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  *(undefined4 *)(param_1 + 0x140) = local_38;
  *(undefined4 *)(param_1 + 0x144) = uStack_34;
  *(undefined4 *)(param_1 + 0x148) = uStack_30;
  *(undefined4 *)(param_1 + 0x14c) = uStack_2c;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SBorder::SetPadding(*(longlong *)(param_1 + 0x250),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133d60 SetPadding body=76 status=ok
// SIG undefined SetPadding(void)

void UBorderSlot::SetPadding(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  *(undefined4 *)(lVar1 + 0x140) = local_38;
  *(undefined4 *)(lVar1 + 0x144) = uStack_34;
  *(undefined4 *)(lVar1 + 0x148) = uStack_30;
  *(undefined4 *)(lVar1 + 0x14c) = uStack_2c;
  if (*(longlong *)(lVar1 + 0x250) != 0) {
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SBorder::SetPadding(*(longlong *)(lVar1 + 0x250),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133db0 SetPadding body=66 status=ok
// SIG undefined SetPadding(void)

void UUGMenuItemContainerSlot::SetPadding(longlong param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  *(undefined4 *)(param_1 + 0x38) = local_38;
  *(undefined4 *)(param_1 + 0x3c) = uStack_34;
  *(undefined4 *)(param_1 + 0x40) = uStack_30;
  *(undefined4 *)(param_1 + 0x44) = uStack_2c;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SButton::SetContentPadding(*(longlong *)(param_1 + 0x50),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133e00 SetPadding body=78 status=ok
// SIG undefined SetPadding(void)

void UGridSlot::SetPadding
               (longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x38) = 1;
    *(undefined4 *)(lVar1 + 0x28) = uVar2;
    *(undefined4 *)(lVar1 + 0x2c) = uVar3;
    *(undefined4 *)(lVar1 + 0x30) = uVar4;
    *(undefined4 *)(lVar1 + 0x34) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x40,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133e50 SetPadding body=78 status=ok
// SIG undefined SetPadding(void)

void UHorizontalBoxSlot::SetPadding
               (longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x58) = 1;
    *(undefined4 *)(lVar1 + 0x48) = uVar2;
    *(undefined4 *)(lVar1 + 0x4c) = uVar3;
    *(undefined4 *)(lVar1 + 0x50) = uVar4;
    *(undefined4 *)(lVar1 + 0x54) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x60,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133ea0 SetPadding body=78 status=ok
// SIG undefined SetPadding(void)

void UOverlaySlot::SetPadding
               (longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x38) = 1;
    *(undefined4 *)(lVar1 + 0x28) = uVar2;
    *(undefined4 *)(lVar1 + 0x2c) = uVar3;
    *(undefined4 *)(lVar1 + 0x30) = uVar4;
    *(undefined4 *)(lVar1 + 0x34) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x40,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133ef0 SetPadding body=8 status=ok
// SIG undefined SetPadding(void)

void UScaleBoxSlot::SetPadding(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x38) = *param_2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



// FUNCTION 142133f00 SetPadding body=78 status=ok
// SIG undefined SetPadding(void)

void UScrollBoxSlot::SetPadding
               (longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(undefined4 *)(lVar1 + 0x24) = uVar3;
    *(undefined4 *)(lVar1 + 0x28) = uVar4;
    *(undefined4 *)(lVar1 + 0x2c) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x38,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133f50 SetPadding body=66 status=ok
// SIG undefined SetPadding(void)

void UUGMenuItemContainerSlot::SetPadding(longlong param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  *(undefined4 *)(param_1 + 0x38) = local_38;
  *(undefined4 *)(param_1 + 0x3c) = uStack_34;
  *(undefined4 *)(param_1 + 0x40) = uStack_30;
  *(undefined4 *)(param_1 + 0x44) = uStack_2c;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SBorder::SetPadding(*(longlong *)(param_1 + 0x50),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142133fa0 FUN_142133fa0 body=285 status=ok
// SIG undefined FUN_142133fa0(void)

void FUN_142133fa0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(param_1 + 0x160) = *param_2;
  *(undefined4 *)(param_1 + 0x164) = uVar5;
  *(undefined4 *)(param_1 + 0x168) = uVar6;
  *(undefined4 *)(param_1 + 0x16c) = uVar7;
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar3[1];
    bVar10 = iVar9 == 0;
    if (bVar10) {
      *(int *)(plVar3 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (!bVar10) {
      while( true ) {
        LOCK();
        bVar10 = iVar9 == (int)plVar3[1];
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar9 + 1;
        }
        UNLOCK();
        if (bVar10) break;
        LOCK();
        iVar9 = (int)plVar3[1];
        bVar10 = iVar9 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar10) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_1 + 0xe0);
        if (lVar4 != 0) {
          uVar5 = *(undefined4 *)(param_1 + 0x160);
          uVar6 = *(undefined4 *)(param_1 + 0x164);
          uVar7 = *(undefined4 *)(param_1 + 0x168);
          uVar8 = *(undefined4 *)(param_1 + 0x16c);
          local_18 = 0;
          local_10 = 0;
          local_40 = 0;
          local_38 = 0;
          local_20 = 1;
          local_30 = uVar5;
          uStack_2c = uVar6;
          uStack_28 = uVar7;
          uStack_24 = uVar8;
          TBaseDelegate<FSlateBrush_const_*>::operator=(&local_40,&local_18);
          *(undefined1 *)(lVar4 + 0x250) = 1;
          *(undefined4 *)(lVar4 + 0x240) = uVar5;
          *(undefined4 *)(lVar4 + 0x244) = uVar6;
          *(undefined4 *)(lVar4 + 0x248) = uVar7;
          *(undefined4 *)(lVar4 + 0x24c) = uVar8;
          TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 600,&local_40);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1421340c0 SetPadding body=78 status=ok
// SIG undefined SetPadding(void)

void UWidgetSwitcherSlot::SetPadding
               (longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x38) = 1;
    *(undefined4 *)(lVar1 + 0x28) = uVar2;
    *(undefined4 *)(lVar1 + 0x2c) = uVar3;
    *(undefined4 *)(lVar1 + 0x30) = uVar4;
    *(undefined4 *)(lVar1 + 0x34) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x40,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142134110 SetPadding body=65 status=ok
// SIG undefined SetPadding(void)

void UWindowTitleBarArea::SetPadding(longlong param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x120) != 0) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SWindowTitleBarArea::SetPadding(*(longlong *)(param_1 + 0x120),&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142134160 SetPadding body=69 status=ok
// SIG undefined SetPadding(void)

void UWindowTitleBarAreaSlot::SetPadding(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x120);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_28 = 1;
    local_20 = 0;
    local_18 = 0;
    SWindowTitleBarArea::SetPadding(lVar1,&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 1421341b0 SetPadding body=78 status=ok
// SIG undefined SetPadding(void)

void UWrapBoxSlot::SetPadding
               (longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x38) = 1;
    *(undefined4 *)(lVar1 + 0x28) = uVar2;
    *(undefined4 *)(lVar1 + 0x2c) = uVar3;
    *(undefined4 *)(lVar1 + 0x30) = uVar4;
    *(undefined4 *)(lVar1 + 0x34) = uVar5;
    local_20 = 0;
    local_18 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=
              (lVar1 + 0x40,&local_20,param_3,param_4,uVar2,uVar4,1);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  }
  return;
}



// FUNCTION 142134200 SetPercent body=66 status=ok
// SIG undefined SetPercent(void)

void UProgressBar::SetPercent(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x2c0) = param_2;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    local_18 = 0;
    local_10 = 0;
    local_24 = 1;
    local_20 = 1;
    local_28 = param_2;
    FUN_1419a3520(*(longlong *)(param_1 + 0x300),&local_28);
  }
  return;
}



// FUNCTION 142134250 SetPeriod body=41 status=ok
// SIG undefined SetPeriod(void)

void UCircularThrobber::SetPeriod(longlong param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0x104) = param_2;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    fVar1 = 1e-08;
    if (1e-08 <= param_2) {
      fVar1 = param_2;
    }
    FUN_141959620(*(longlong *)(param_1 + 0x1a8),fVar1);
    return;
  }
  return;
}



// FUNCTION 142134280 FUN_142134280 body=63 status=ok
// SIG undefined FUN_142134280(void)

void FUN_142134280(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x170);
    plVar1 = plVar2 + *(int *)(param_1 + 0x178);
    if (plVar2 != plVar1) {
      while (*(longlong *)(*plVar2 + 0x378) != param_2) {
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar1) {
          return;
        }
      }
      *(undefined4 *)(*plVar2 + 0x6e8) = param_3;
    }
  }
  return;
}



// FUNCTION 1421342d0 FUN_1421342d0 body=133 status=ok
// SIG undefined FUN_1421342d0(void)

void FUN_1421342d0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 *local_res8;
  longlong local_res10 [3];
  code *local_18;
  undefined4 **ppuStack_10;
  
  *(undefined4 *)(param_1 + 0x1f0) = *param_2;
  *(undefined4 *)(param_1 + 500) = param_2[1];
  *(undefined4 *)(param_1 + 0x1f8) = param_2[2];
  *(undefined4 *)(param_1 + 0x1fc) = param_2[3];
  ppuStack_10 = &local_res8;
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  local_18 = UE4Function_Private::
             TFunctionRefCaller<<lambda_05e0778bb1535725ad776805881661ff>,void___cdecl(UWidget_*)>::
             Call;
  local_res10[0] = *(longlong *)(lVar1 + 0x28);
  if (local_res10[0] != 0) {
    local_res8 = param_2;
    UE4Function_Private::
    TFunctionRefCaller<<lambda_05e0778bb1535725ad776805881661ff>,void___cdecl(UWidget_*)>::Call
              (&local_res8,local_res10);
    FUN_1420f6990(*(undefined8 *)(lVar1 + 0x28),&local_18,0);
  }
  return;
}



// FUNCTION 142134360 SetPosition body=27 status=ok
// SIG undefined SetPosition(void)

void FSlateVectorArtInstanceData::SetPosition(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  local_res8 = (undefined4)param_2;
  uStackX_c = (undefined4)((ulonglong)param_2 >> 0x20);
  *param_1 = local_res8;
  param_1[1] = uStackX_c;
  return;
}


